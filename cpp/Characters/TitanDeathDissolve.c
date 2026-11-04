// Type: Characters.TitanDeathDissolve
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Characters/TitanDeathDissolve.cs
// Prior real C# source: none
// --------------------------------

// Characters.TitanDeathDissolve.Part$$.ctor
// il2cpp: void Characters_TitanDeathDissolve_Part___ctor (Characters_TitanDeathDissolve_Part_o* __this, UnityEngine_Mesh_o* mesh, UnityEngine_Material_array* materials, UnityEngine_MaterialPropertyBlock_o* properties, int32_t layer, int32_t shadows, System_Nullable_Matrix4x4__o localMatrix, const MethodInfo* method);
// 0x1821ab100

void Characters_TitanDeathDissolve_Part___ctor
               (Characters_TitanDeathDissolve_Part_o *__this,UnityEngine_Mesh_o *mesh,
               UnityEngine_Material_array *materials,UnityEngine_MaterialPropertyBlock_o *properties,
               int32_t layer,int32_t shadows,System_Nullable_Matrix4x4__o *localMatrix,MethodInfo *method)

{
  UnityEngine_Matrix4x4_StaticFields *pUVar1;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (Il2CppMethodInitialized_184346e60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Matrix4x4_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Matrix4x4_get_HasValue);
    Il2CppMethodInitialized_184346e60 = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Mesh = mesh;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Mesh,mesh);
  (__this->fields).Materials = materials;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Materials,materials);
  (__this->fields).Properties = properties;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Properties,properties);
  (__this->fields).Layer = layer;
  (__this->fields).Shadows = shadows;
  fVar2 = (localMatrix->fields).value.fields.m30;
  fVar3 = (localMatrix->fields).value.fields.m01;
  fVar4 = (localMatrix->fields).value.fields.m11;
  fVar5 = (localMatrix->fields).value.fields.m21;
  fVar14 = (localMatrix->fields).value.fields.m00;
  fVar15 = (localMatrix->fields).value.fields.m10;
  fVar16 = (localMatrix->fields).value.fields.m20;
  fVar6 = (localMatrix->fields).value.fields.m31;
  fVar7 = (localMatrix->fields).value.fields.m02;
  fVar8 = (localMatrix->fields).value.fields.m12;
  fVar9 = (localMatrix->fields).value.fields.m22;
  fVar10 = (localMatrix->fields).value.fields.m32;
  fVar11 = (localMatrix->fields).value.fields.m03;
  fVar12 = (localMatrix->fields).value.fields.m13;
  fVar13 = (localMatrix->fields).value.fields.m23;
  fVar17 = (localMatrix->fields).value.fields.m33;
  if ((localMatrix->fields).hasValue == false) {
    if (Il2CppMethodInitialized_184346d69 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Matrix4x4);
      Il2CppMethodInitialized_184346d69 = '\x01';
    }
    pUVar1 = TypeInfo_UnityEngine_Matrix4x4->static_fields;
    fVar14 = (pUVar1->identityMatrix).fields.m00;
    fVar15 = (pUVar1->identityMatrix).fields.m10;
    fVar16 = (pUVar1->identityMatrix).fields.m20;
    fVar2 = (pUVar1->identityMatrix).fields.m30;
    fVar3 = (pUVar1->identityMatrix).fields.m01;
    fVar4 = (pUVar1->identityMatrix).fields.m11;
    fVar5 = (pUVar1->identityMatrix).fields.m21;
    fVar6 = (pUVar1->identityMatrix).fields.m31;
    fVar7 = (pUVar1->identityMatrix).fields.m02;
    fVar8 = (pUVar1->identityMatrix).fields.m12;
    fVar9 = (pUVar1->identityMatrix).fields.m22;
    fVar10 = (pUVar1->identityMatrix).fields.m32;
    fVar11 = (pUVar1->identityMatrix).fields.m03;
    fVar12 = (pUVar1->identityMatrix).fields.m13;
    fVar13 = (pUVar1->identityMatrix).fields.m23;
    fVar17 = (pUVar1->identityMatrix).fields.m33;
  }
  else {
  }
  (__this->fields).LocalMatrix.fields.m00 = fVar14;
  (__this->fields).LocalMatrix.fields.m10 = fVar15;
  (__this->fields).LocalMatrix.fields.m20 = fVar16;
  (__this->fields).LocalMatrix.fields.m30 = fVar2;
  (__this->fields).LocalMatrix.fields.m01 = fVar3;
  (__this->fields).LocalMatrix.fields.m11 = fVar4;
  (__this->fields).LocalMatrix.fields.m21 = fVar5;
  (__this->fields).LocalMatrix.fields.m31 = fVar6;
  (__this->fields).LocalMatrix.fields.m02 = fVar7;
  (__this->fields).LocalMatrix.fields.m12 = fVar8;
  (__this->fields).LocalMatrix.fields.m22 = fVar9;
  (__this->fields).LocalMatrix.fields.m32 = fVar10;
  (__this->fields).LocalMatrix.fields.m03 = fVar11;
  (__this->fields).LocalMatrix.fields.m13 = fVar12;
  (__this->fields).LocalMatrix.fields.m23 = fVar13;
  (__this->fields).LocalMatrix.fields.m33 = fVar17;
  return;
}


// Characters.TitanDeathDissolve$$get_CollidersDisabled
// il2cpp: bool Characters_TitanDeathDissolve__get_CollidersDisabled (Characters_TitanDeathDissolve_o* __this, const MethodInfo* method);
// 0x181a08fc0

bool
Characters_TitanDeathDissolve__get_CollidersDisabled(Characters_TitanDeathDissolve_o* __this, MethodInfo* method)

{
  return (__this->fields)._CollidersDisabled_k__BackingField;
}


// Characters.TitanDeathDissolve$$set_CollidersDisabled
// il2cpp: void Characters_TitanDeathDissolve__set_CollidersDisabled (Characters_TitanDeathDissolve_o* __this, bool value, const MethodInfo* method);
// 0x1821b0640

void Characters_TitanDeathDissolve__set_CollidersDisabled
               (Characters_TitanDeathDissolve_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._CollidersDisabled_k__BackingField = value;
  return;
}


// Characters.TitanDeathDissolve$$.ctor
// il2cpp: void Characters_TitanDeathDissolve___ctor (Characters_TitanDeathDissolve_o* __this, Characters_BasicTitan_o* titan, const MethodInfo* method);
// 0x1821af3b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821aff7b: nop dword ptr [rax + rax]
// asm:   0x1821b0468: mov r15, qword ptr [rbp + 0x148]
// asm:   0x1821b046f: mov rdi, qword ptr [rbp - 0x80]

void Characters_TitanDeathDissolve___ctor
               (Characters_TitanDeathDissolve_o *__this,Characters_BasicTitan_o *titan,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  Characters_BasicTitanComponentCache_o *pCVar3;
  UnityEngine_Object_o *x;
  UnityEngine_Object_c *pUVar4;
  UnityEngine_Matrix4x4_StaticFields *pUVar5;
  UnityEngine_Object_o *y;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Renderer_c *pUVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  bool bVar26;
  bool bVar27;
  int32_t iVar28;
  int32_t iVar29;
  System_Collections_Generic_List_TitanDeathDissolve_Part__o *pSVar30;
  System_Collections_Generic_List_Mesh__o *pSVar31;
  System_Collections_Generic_List_Material__o *__this_01;
  System_Collections_Generic_List_ParticleSystem__o *__this_02;
  UnityEngine_Shader_o *value;
  UnityEngine_Transform_o *pUVar32;
  UnityEngine_Transform_o *pUVar33;
  UnityEngine_SkinnedMeshRenderer_o *value_00;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_Transform_o *__this_05;
  UnityEngine_Vector3_o *pUVar34;
  System_String_o *pSVar35;
  UnityEngine_MaterialPropertyBlock_o *__this_06;
  UnityEngine_Object_o *pUVar36;
  UnityEngine_Matrix4x4_o *pUVar37;
  UnityEngine_Material_array *pUVar38;
  UnityEngine_Material_array *materials;
  UnityEngine_Material_o *pUVar39;
  Il2CppObject *pIVar40;
  UnityEngine_Object_o *pUVar41;
  UnityEngine_GameObject_o *pUVar42;
  Characters_TitanDeathDissolve_Part_o *pCVar43;
  UnityEngine_Mesh_o *pUVar44;
  System_Object_array *pSVar45;
  uint uVar46;
  Il2CppClass *pIVar47;
  Il2CppClass *pIVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  System_Object_array *local_1f8;
  float local_1f0;
  UnityEngine_Object_o *local_1e8 [2];
  uint local_1d8;
  UnityEngine_MeshFilter_o *local_1d0;
  UnityEngine_Object_o *local_1c8;
  UnityEngine_MaterialPropertyBlock_o *local_1c0;
  UnityEngine_Transform_o *local_1b8;
  System_Nullable_Matrix4x4__Fields local_1a8;
  UnityEngine_Matrix4x4_Fields local_158;
  UnityEngine_Transform_o *local_118;
  System_Nullable_Matrix4x4__Fields local_108 [3];
  
  if (Il2CppMethodInitialized_184346e55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_TitanDeathDissolve_Part);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MaterialPropertyBlock);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Matrix4x4_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDeathDissolve_Part);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Shader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDeathDissolve);
    il2cpp_codegen_initialize_runtime_metadata(&"_Regrowth");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG/TitanWound");
    il2cpp_codegen_initialize_runtime_metadata(&"thigh.L");
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    il2cpp_codegen_initialize_runtime_metadata(&"Left limb regrowth");
    il2cpp_codegen_initialize_runtime_metadata(&"Right limb regrowth");
    il2cpp_codegen_initialize_runtime_metadata(&"_UseMeshPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    il2cpp_codegen_initialize_runtime_metadata(&"foot.L");
    il2cpp_codegen_initialize_runtime_metadata(&"_VertexColor");
    il2cpp_codegen_initialize_runtime_metadata(&"_Flesh");
    il2cpp_codegen_initialize_runtime_metadata(&"_MeshToDissolve");
    il2cpp_codegen_initialize_runtime_metadata(&"Shaders/TitanDissolve");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG/TitanRegrowth");
    il2cpp_codegen_initialize_runtime_metadata(&"shin.L");
    Il2CppMethodInitialized_184346e55 = '\x01';
  }
  local_1d0 = (UnityEngine_MeshFilter_o *)0x0;
  local_1a8.hasValue = false;
  local_1a8._1_3_ = 0;
  local_1a8.value.fields.m00 = 0.0;
  local_1a8.value.fields.m10 = 0.0;
  local_1a8.value.fields.m20 = 0.0;
  local_1a8.value.fields.m33 = 0.0;
  local_1a8.value.fields.m30 = 0.0;
  local_1a8.value.fields.m01 = 0.0;
  local_1a8.value.fields.m11 = 0.0;
  local_1a8.value.fields.m21 = 0.0;
  local_1a8.value.fields.m31 = 0.0;
  local_1a8.value.fields.m02 = 0.0;
  local_1a8.value.fields.m12 = 0.0;
  local_1a8.value.fields.m22 = 0.0;
  local_1a8.value.fields.m32 = 0.0;
  local_1a8.value.fields.m03 = 0.0;
  local_1a8.value.fields.m13 = 0.0;
  local_1a8.value.fields.m23 = 0.0;
  pSVar30 = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_TitanDeathDissolve_Part);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar30,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_ctor);
  (__this->fields)._parts = pSVar30;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._parts,pSVar30);
  pSVar31 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Mesh);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar31,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Mesh_ctor);
  (__this->fields)._meshes = pSVar31;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._meshes,pSVar31);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  (__this->fields)._materials = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._materials,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_ctor);
  (__this->fields)._steam = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._steam,__this_02);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._titan = titan;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._titan,titan);
  value = UnityEngine_Resources__Load_object_
                    ("Shaders/TitanDissolve",(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Shader);
  (__this->fields)._shader = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._shader,value);
  pUVar41 = (UnityEngine_Object_o *)(__this->fields)._shader;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar26 = UnityEngine_Object__op_Equality(pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar26) {
    return;
  }
  if (titan != (Characters_BasicTitan_o *)0x0) {
    if ((titan->fields).EffectsEnabled == false) {
      pSVar45 = UnityEngine_Component__GetComponentsInChildren_object__665370
                          ((UnityEngine_Component_o *)titan,
                           (MethodInfo_665370 *)
                           MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
      if (pSVar45 != (System_Object_array *)0x0) {
        uVar46 = 0;
        pIVar47 = (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer;
        pIVar48 = (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer;
        while( true ) {
          if ((int)pSVar45->max_length <= (int)uVar46) {
            return;
          }
          if ((uint)pSVar45->max_length <= uVar46) break;
          __this_00 = (UnityEngine_Renderer_o *)pSVar45->m_Items[(int)uVar46];
          if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
            pUVar6 = __this_00->klass;
            bVar2 = (pIVar48->_2).typeHierarchyDepth;
            if (((bVar2 <= (pUVar6->_2).typeHierarchyDepth) &&
                ((pUVar6->_2).typeHierarchy[(ulonglong)bVar2 - 1] == pIVar48)) ||
               ((bVar2 = (pIVar47->_2).typeHierarchyDepth, bVar2 <= (pUVar6->_2).typeHierarchyDepth &&
                ((pUVar6->_2).typeHierarchy[(ulonglong)bVar2 - 1] == pIVar47)))) {
              UnityEngine_Renderer__set_enabled(__this_00,false,(MethodInfo *)0x0);
              pIVar47 = (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer;
              pIVar48 = (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer;
            }
          }
          uVar46 = uVar46 + 1;
        }
label_1821b062d:
        ThrowIndexOutOfRangeException();
      }
    }
    else {
      pUVar32 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)titan,(MethodInfo *)0x0);
      local_118 = pUVar32;
      if ((pUVar32 != (UnityEngine_Transform_o *)0x0) &&
         (pUVar33 = UnityEngine_Transform__Find(pUVar32,"Body",(MethodInfo *)0x0),
         pUVar33 != (UnityEngine_Transform_o *)0x0)) {
        value_00 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar33,
                              (MethodInfo_6651A0 *)
                              MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
        (__this->fields)._bodyRenderer = value_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._bodyRenderer,value_00);
        pCVar3 = (titan->fields).BasicCache;
        if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (((pUVar33 = (pCVar3->fields).Hip, pUVar33 != (UnityEngine_Transform_o *)0x0 &&
             (__this_03 = UnityEngine_Transform__Find(pUVar33,"thigh.L",(MethodInfo *)0x0),
             __this_03 != (UnityEngine_Transform_o *)0x0)) &&
            (__this_04 = UnityEngine_Transform__Find(__this_03,"shin.L",(MethodInfo *)0x0),
            __this_04 != (UnityEngine_Transform_o *)0x0)))) {
          __this_05 = UnityEngine_Transform__Find(__this_04,"foot.L",(MethodInfo *)0x0);
          pUVar34 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)local_1e8,pUVar33,(MethodInfo *)0x0);
          local_1f0 = (pUVar34->fields).z;
          local_1f8 = *(System_Object_array **)&pUVar34->fields;
          pUVar34 = UnityEngine_Transform__InverseTransformPoint
                              ((UnityEngine_Vector3_o *)local_1e8,pUVar32,(UnityEngine_Vector3_o *)&local_1f8,
                               (MethodInfo *)0x0);
          pCVar3 = (titan->fields).BasicCache;
          if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
             (pUVar33 = (pCVar3->fields).Neck, pUVar33 != (UnityEngine_Transform_o *)0x0)) {
            fVar52 = (pUVar34->fields).x;
            fVar50 = (pUVar34->fields).y;
            fVar57 = (pUVar34->fields).z;
            pUVar34 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)local_1e8,pUVar33,(MethodInfo *)0x0);
            local_1f8._0_4_ = (pUVar34->fields).x;
            local_1f8._4_4_ = (pUVar34->fields).y;
            local_1f0 = (pUVar34->fields).z;
            pUVar34 = UnityEngine_Transform__InverseTransformPoint
                                ((UnityEngine_Vector3_o *)local_1e8,pUVar32,
                                 (UnityEngine_Vector3_o *)&local_1f8,(MethodInfo *)0x0);
            fVar51 = (pUVar34->fields).x;
            fVar53 = (pUVar34->fields).y;
            fVar54 = (pUVar34->fields).z;
            if (Il2CppMethodInitialized_18433dee7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
              Il2CppMethodInitialized_18433dee7 = '\x01';
            }
            fVar52 = fVar52 - fVar51;
            fVar50 = fVar50 - fVar53;
            fVar57 = fVar57 - fVar54;
            if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
            }
            dVar7 = (double)(fVar50 * fVar50 + fVar52 * fVar52 + fVar57 * fVar57);
            if (dVar7 < 0.0) {
              dVar7 = sqrt(dVar7);
            }
            else {
              dVar7 = SQRT(dVar7);
            }
            pUVar34 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)local_1e8,__this_03,(MethodInfo *)0x0);
            local_1f8._0_4_ = (pUVar34->fields).x;
            local_1f8._4_4_ = (pUVar34->fields).y;
            local_1f0 = (pUVar34->fields).z;
            pUVar34 = UnityEngine_Transform__InverseTransformPoint
                                ((UnityEngine_Vector3_o *)local_1e8,pUVar32,
                                 (UnityEngine_Vector3_o *)&local_1f8,(MethodInfo *)0x0);
            fVar52 = (pUVar34->fields).x;
            fVar50 = (pUVar34->fields).y;
            fVar57 = (pUVar34->fields).z;
            pUVar34 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)local_1e8,__this_04,(MethodInfo *)0x0);
            local_1f8._0_4_ = (pUVar34->fields).x;
            local_1f8._4_4_ = (pUVar34->fields).y;
            local_1f0 = (pUVar34->fields).z;
            pUVar34 = UnityEngine_Transform__InverseTransformPoint
                                ((UnityEngine_Vector3_o *)local_1e8,pUVar32,
                                 (UnityEngine_Vector3_o *)&local_1f8,(MethodInfo *)0x0);
            fVar51 = (pUVar34->fields).x;
            fVar53 = (pUVar34->fields).y;
            fVar54 = (pUVar34->fields).z;
            if (Il2CppMethodInitialized_18433dee7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
              Il2CppMethodInitialized_18433dee7 = '\x01';
            }
            fVar52 = fVar52 - fVar51;
            fVar50 = fVar50 - fVar53;
            fVar57 = fVar57 - fVar54;
            if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
            }
            dVar8 = (double)(fVar50 * fVar50 + fVar52 * fVar52 + fVar57 * fVar57);
            if (dVar8 < 0.0) {
              dVar8 = sqrt(dVar8);
            }
            else {
              dVar8 = SQRT(dVar8);
            }
            pUVar34 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)local_1e8,__this_04,(MethodInfo *)0x0);
            local_1f8 = *(System_Object_array **)&pUVar34->fields;
            local_1f0 = (pUVar34->fields).z;
            pUVar34 = UnityEngine_Transform__InverseTransformPoint
                                ((UnityEngine_Vector3_o *)local_1e8,pUVar32,
                                 (UnityEngine_Vector3_o *)&local_1f8,(MethodInfo *)0x0);
            if (__this_05 != (UnityEngine_Transform_o *)0x0) {
              fVar52 = (pUVar34->fields).x;
              fVar50 = (pUVar34->fields).y;
              fVar57 = (pUVar34->fields).z;
              pUVar34 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)local_1e8,__this_05,(MethodInfo *)0x0);
              local_1f8._0_4_ = (pUVar34->fields).x;
              local_1f8._4_4_ = (pUVar34->fields).y;
              local_1f0 = (pUVar34->fields).z;
              pUVar34 = UnityEngine_Transform__InverseTransformPoint
                                  ((UnityEngine_Vector3_o *)local_1e8,pUVar32,
                                   (UnityEngine_Vector3_o *)&local_1f8,(MethodInfo *)0x0);
              fVar51 = (pUVar34->fields).x;
              fVar53 = (pUVar34->fields).y;
              fVar54 = (pUVar34->fields).z;
              if (Il2CppMethodInitialized_18433dee7 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                Il2CppMethodInitialized_18433dee7 = '\x01';
              }
              fVar52 = fVar52 - fVar51;
              fVar50 = fVar50 - fVar53;
              fVar57 = fVar57 - fVar54;
              if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              }
              dVar9 = (double)(fVar50 * fVar50 + fVar52 * fVar52 + fVar57 * fVar57);
              if (dVar9 < 0.0) {
                dVar9 = sqrt(dVar9);
              }
              else {
                dVar9 = SQRT(dVar9);
              }
              fVar52 = ((float)dVar9 + (float)dVar8 + (float)dVar7) * 1.2;
              if (fVar52 <= 0.001) {
                fVar52 = 0.001;
              }
              (__this->fields)._scale = fVar52;
              pUVar32 = UnityEngine_Transform__Find(pUVar32,"Head",(MethodInfo *)0x0);
              local_1b8 = pUVar32;
              local_1f8 = UnityEngine_Component__GetComponentsInChildren_object__665370
                                    ((UnityEngine_Component_o *)titan,
                                     (MethodInfo_665370 *)
                                     MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
              if (local_1f8 != (System_Object_array *)0x0) {
                local_1d8 = 0;
                pUVar41 = (UnityEngine_Object_o *)0x0;
                do {
                  while( true ) {
                    if ((int)local_1f8->max_length <= (int)local_1d8) {
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar26 = UnityEngine_Object__op_Inequality
                                         (pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                      if (!bVar26) {
                        return;
                      }
                      if ((titan->fields).EffectsEnabled == false) {
                        return;
                      }
                      pUVar44 = Characters_TitanDeathDissolve__CreateSteamSurface(__this,(MethodInfo *)0x0);
                      Characters_TitanDeathDissolve__CreateSteam(__this,pUVar44,false,(MethodInfo *)0x0);
                      Characters_TitanDeathDissolve__CreateSteam(__this,pUVar44,true,(MethodInfo *)0x0);
                      return;
                    }
                    if ((uint)local_1f8->max_length <= local_1d8) goto label_1821b062d;
                    x = (UnityEngine_Object_o *)local_1f8->m_Items[(int)local_1d8];
                    if (x == (UnityEngine_Object_o *)0x0) goto label_1821b0601;
                    bVar26 = UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
                    if (bVar26) break;
label_1821b0473:
                    local_1d8 = local_1d8 + 1;
                  }
                  pUVar4 = x->klass;
                  bVar2 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
                  if ((((pUVar4->_2).typeHierarchyDepth < bVar2) ||
                      ((pUVar4->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                       (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer)) &&
                     ((bVar2 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth,
                      (pUVar4->_2).typeHierarchyDepth < bVar2 ||
                      ((pUVar4->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                       (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer)))) goto label_1821b0473;
                  pUVar36 = (UnityEngine_Object_o *)(__this->fields)._bodyRenderer;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar26 = UnityEngine_Object__op_Equality(x,pUVar36,(MethodInfo *)0x0);
                  if (bVar26) {
label_1821afd11:
                    bVar26 = true;
                  }
                  else {
                    pUVar33 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar26 = UnityEngine_Object__op_Equality
                                       ((UnityEngine_Object_o *)pUVar33,(UnityEngine_Object_o *)pUVar32,
                                        (MethodInfo *)0x0);
                    if (bVar26) goto label_1821afd11;
                    pSVar35 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                    bVar26 = System_String__op_Equality(pSVar35,"Left limb regrowth",(MethodInfo *)0x0);
                    if (bVar26) goto label_1821afd11;
                    pSVar35 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                    bVar26 = System_String__op_Equality(pSVar35,"Right limb regrowth",(MethodInfo *)0x0);
                  }
                  __this_06 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
                  local_1c0 = __this_06;
                  UnityEngine_MaterialPropertyBlock___ctor(__this_06,(MethodInfo *)0x0);
                  UnityEngine_Renderer__GetPropertyBlock
                            ((UnityEngine_Renderer_o *)x,__this_06,(MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_184346d69 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Matrix4x4);
                    Il2CppMethodInitialized_184346d69 = '\x01';
                  }
                  pUVar5 = TypeInfo_UnityEngine_Matrix4x4->static_fields;
                  bVar2 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth;
                  fVar52 = (pUVar5->identityMatrix).fields.m00;
                  fVar50 = (pUVar5->identityMatrix).fields.m10;
                  fVar57 = (pUVar5->identityMatrix).fields.m20;
                  fVar51 = (pUVar5->identityMatrix).fields.m30;
                  fVar53 = (pUVar5->identityMatrix).fields.m01;
                  fVar54 = (pUVar5->identityMatrix).fields.m11;
                  fVar55 = (pUVar5->identityMatrix).fields.m21;
                  fVar56 = (pUVar5->identityMatrix).fields.m31;
                  fVar58 = (pUVar5->identityMatrix).fields.m02;
                  fVar59 = (pUVar5->identityMatrix).fields.m12;
                  fVar60 = (pUVar5->identityMatrix).fields.m22;
                  fVar61 = (pUVar5->identityMatrix).fields.m32;
                  fVar62 = (pUVar5->identityMatrix).fields.m03;
                  fVar63 = (pUVar5->identityMatrix).fields.m13;
                  fVar64 = (pUVar5->identityMatrix).fields.m23;
                  fVar65 = (pUVar5->identityMatrix).fields.m33;
                  if ((((x->klass->_2).typeHierarchyDepth < bVar2) ||
                      ((x->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                       (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer)) ||
                     (bVar27 = UnityEngine_Component__TryGetComponent_object_
                                         ((UnityEngine_Component_o *)x,(Il2CppObject **)&local_1d0,
                                          (MethodInfo_6657C0 *)
                                          MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter),
                     !bVar27)) {
                    pUVar36 = (UnityEngine_Object_o *)
                              Characters_TitanDeathDissolve__Bake
                                        (__this,(UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
                    local_1c8 = pUVar36;
                  }
                  else {
                    if (local_1d0 == (UnityEngine_MeshFilter_o *)0x0) break;
                    pUVar36 = (UnityEngine_Object_o *)
                              UnityEngine_MeshFilter__get_sharedMesh(local_1d0,(MethodInfo *)0x0);
                    local_1c8 = pUVar36;
                    pUVar37 = UnityEngine_Transform__get_worldToLocalMatrix
                                        ((UnityEngine_Matrix4x4_o *)&local_158,local_118,(MethodInfo *)0x0);
                    uVar10._0_4_ = (pUVar37->fields).m00;
                    uVar10._4_4_ = (pUVar37->fields).m10;
                    uVar11._0_4_ = (pUVar37->fields).m20;
                    uVar11._4_4_ = (pUVar37->fields).m30;
                    uVar12._0_4_ = (pUVar37->fields).m01;
                    uVar12._4_4_ = (pUVar37->fields).m11;
                    uVar13._0_4_ = (pUVar37->fields).m21;
                    uVar13._4_4_ = (pUVar37->fields).m31;
                    uVar14._0_4_ = (pUVar37->fields).m02;
                    uVar14._4_4_ = (pUVar37->fields).m12;
                    uVar15._0_4_ = (pUVar37->fields).m22;
                    uVar15._4_4_ = (pUVar37->fields).m32;
                    uVar16._0_4_ = (pUVar37->fields).m03;
                    uVar16._4_4_ = (pUVar37->fields).m13;
                    uVar17._0_4_ = (pUVar37->fields).m23;
                    uVar17._4_4_ = (pUVar37->fields).m33;
                    pUVar32 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
                    if (pUVar32 == (UnityEngine_Transform_o *)0x0) break;
                    pUVar37 = UnityEngine_Transform__get_localToWorldMatrix
                                        ((UnityEngine_Matrix4x4_o *)&local_158,pUVar32,(MethodInfo *)0x0);
                    local_108[0]._0_8_ = *(undefined8 *)&pUVar37->fields;
                    local_108[0].value.fields.m10 = (pUVar37->fields).m20;
                    local_108[0].value.fields.m20 = (pUVar37->fields).m30;
                    local_108[0].value.fields.m30 = (pUVar37->fields).m01;
                    local_108[0].value.fields.m01 = (pUVar37->fields).m11;
                    local_108[0].value.fields.m11 = (pUVar37->fields).m21;
                    local_108[0].value.fields.m21 = (pUVar37->fields).m31;
                    local_108[0].value.fields.m31 = (pUVar37->fields).m02;
                    local_108[0].value.fields.m02 = (pUVar37->fields).m12;
                    local_108[0].value.fields.m12 = (pUVar37->fields).m22;
                    local_108[0].value.fields.m22 = (pUVar37->fields).m32;
                    local_108[0].value.fields.m32 = (pUVar37->fields).m03;
                    local_108[0].value.fields.m03 = (pUVar37->fields).m13;
                    local_108[0].value.fields.m13 = (pUVar37->fields).m23;
                    local_108[0].value.fields.m23 = (pUVar37->fields).m33;
                    local_158._0_8_ = uVar10;
                    local_158._8_8_ = uVar11;
                    local_158._16_8_ = uVar12;
                    local_158._24_8_ = uVar13;
                    local_158._32_8_ = uVar14;
                    local_158._40_8_ = uVar15;
                    local_158._48_8_ = uVar16;
                    local_158._56_8_ = uVar17;
                    pUVar37 = UnityEngine_Matrix4x4__op_Multiply
                                        ((UnityEngine_Matrix4x4_o *)&local_1a8,
                                         (UnityEngine_Matrix4x4_o *)&local_158,
                                         (UnityEngine_Matrix4x4_o *)local_108,(MethodInfo *)0x0);
                    if (__this_06 == (UnityEngine_MaterialPropertyBlock_o *)0x0) break;
                    fVar52 = (pUVar37->fields).m00;
                    fVar50 = (pUVar37->fields).m10;
                    uVar18._0_4_ = (pUVar37->fields).m00;
                    uVar18._4_4_ = (pUVar37->fields).m10;
                    fVar57 = (pUVar37->fields).m20;
                    fVar51 = (pUVar37->fields).m30;
                    uVar19._0_4_ = (pUVar37->fields).m20;
                    uVar19._4_4_ = (pUVar37->fields).m30;
                    fVar53 = (pUVar37->fields).m01;
                    fVar54 = (pUVar37->fields).m11;
                    uVar20._0_4_ = (pUVar37->fields).m01;
                    uVar20._4_4_ = (pUVar37->fields).m11;
                    fVar55 = (pUVar37->fields).m21;
                    fVar56 = (pUVar37->fields).m31;
                    uVar21._0_4_ = (pUVar37->fields).m21;
                    uVar21._4_4_ = (pUVar37->fields).m31;
                    fVar58 = (pUVar37->fields).m02;
                    fVar59 = (pUVar37->fields).m12;
                    uVar22._0_4_ = (pUVar37->fields).m02;
                    uVar22._4_4_ = (pUVar37->fields).m12;
                    fVar60 = (pUVar37->fields).m22;
                    fVar61 = (pUVar37->fields).m32;
                    uVar23._0_4_ = (pUVar37->fields).m22;
                    uVar23._4_4_ = (pUVar37->fields).m32;
                    fVar62 = (pUVar37->fields).m03;
                    fVar63 = (pUVar37->fields).m13;
                    uVar24._0_4_ = (pUVar37->fields).m03;
                    uVar24._4_4_ = (pUVar37->fields).m13;
                    fVar64 = (pUVar37->fields).m23;
                    fVar65 = (pUVar37->fields).m33;
                    uVar25._0_4_ = (pUVar37->fields).m23;
                    uVar25._4_4_ = (pUVar37->fields).m33;
                    UnityEngine_MaterialPropertyBlock__SetFloat
                              (__this_06,"_UseMeshPosition",1.0,(MethodInfo *)0x0);
                    local_158._0_8_ = uVar18;
                    local_158._8_8_ = uVar19;
                    local_158._16_8_ = uVar20;
                    local_158._24_8_ = uVar21;
                    local_158._32_8_ = uVar22;
                    local_158._40_8_ = uVar23;
                    local_158._48_8_ = uVar24;
                    local_158._56_8_ = uVar25;
                    UnityEngine_MaterialPropertyBlock__SetMatrix
                              (__this_06,"_MeshToDissolve",(UnityEngine_Matrix4x4_o *)&local_158,
                               (MethodInfo *)0x0);
                  }
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar27 = UnityEngine_Object__op_Equality
                                     (pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  pUVar32 = local_1b8;
                  if (bVar27) goto label_1821b0473;
                  y = (UnityEngine_Object_o *)(__this->fields)._bodyRenderer;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar27 = UnityEngine_Object__op_Equality(x,y,(MethodInfo *)0x0);
                  local_1e8[0] = pUVar36;
                  if (!bVar27) {
                    local_1e8[0] = pUVar41;
                  }
                  pUVar38 = UnityEngine_Renderer__get_sharedMaterials
                                      ((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
                  if (pUVar38 == (UnityEngine_Material_array *)0x0) break;
                  materials = (UnityEngine_Material_array *)
                              SZArrayNew(TypeInfo_UnityEngine_Material_array,(uint32_t)pUVar38->max_length);
                  uVar46 = 0;
                  if (materials == (UnityEngine_Material_array *)0x0) break;
                  for (; (int)uVar46 < (int)materials->max_length; uVar46 = uVar46 + 1) {
                    if ((uint)pUVar38->max_length <= uVar46) goto label_1821b062d;
                    pUVar39 = pUVar38->m_Items[(int)uVar46];
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar27 = UnityEngine_Object__op_Equality
                                       ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)0x0,
                                        (MethodInfo *)0x0);
                    if (!bVar27) {
                      if ((uint)pUVar38->max_length <= uVar46) goto label_1821b062d;
                      pUVar39 = Characters_TitanDeathDissolve__CreateMaterial
                                          (__this,pUVar38->m_Items[(int)uVar46],0.0,(MethodInfo *)0x0);
                      if ((pUVar39 != (UnityEngine_Material_o *)0x0) &&
                         (pIVar40 = il2cpp_vm_Object_IsInst
                                              ((Il2CppObject *)pUVar39,
                                               (((materials->obj).klass)->_1).element_class),
                         pIVar40 == (Il2CppObject *)0x0)) {
                        pIVar40 = il2cpp_codegen_get_array_type_mismatch_exception();
                        il2cpp_codegen_raise_exception(pIVar40,(MethodInfo *)0x0);
                      }
                      if ((uint)materials->max_length <= uVar46) goto label_1821b062d;
                      materials->m_Items[(int)uVar46] = pUVar39;
                      Il2CppCodeGenWriteBarrier(materials->m_Items + (int)uVar46,pUVar39);
                      if ((uint)materials->max_length <= uVar46) goto label_1821b062d;
                      if (bVar26 == false) {
                        fVar49 = 0.0;
                      }
                      else {
                        fVar49 = 1.0;
                      }
                      if (materials->m_Items[(int)uVar46] == (UnityEngine_Material_o *)0x0)
                      goto label_1821b0601;
                      UnityEngine_Material__SetFloat
                                (materials->m_Items[(int)uVar46],"_Flesh",fVar49,
                                 (MethodInfo *)0x0);
                      if (((uint)materials->max_length <= uVar46) || ((uint)pUVar38->max_length <= uVar46))
                      goto label_1821b062d;
                      if (pUVar38->m_Items[(int)uVar46] == (UnityEngine_Material_o *)0x0) goto label_1821b0601;
                      pUVar39 = materials->m_Items[(int)uVar46];
                      pUVar41 = (UnityEngine_Object_o *)
                                UnityEngine_Material__get_shader
                                          (pUVar38->m_Items[(int)uVar46],(MethodInfo *)0x0);
                      if (pUVar41 == (UnityEngine_Object_o *)0x0) goto label_1821b0601;
                      pSVar35 = UnityEngine_Object__get_name(pUVar41,(MethodInfo *)0x0);
                      bVar27 = System_String__op_Equality(pSVar35,"AoTTG/TitanWound",(MethodInfo *)0x0);
                      if (bVar27) {
                        fVar49 = 1.0;
                      }
                      else {
                        fVar49 = 0.0;
                      }
                      if (pUVar39 == (UnityEngine_Material_o *)0x0) goto label_1821b0601;
                      UnityEngine_Material__SetFloat(pUVar39,"_VertexColor",fVar49,(MethodInfo *)0x0);
                      if (((uint)materials->max_length <= uVar46) || ((uint)pUVar38->max_length <= uVar46))
                      goto label_1821b062d;
                      if (pUVar38->m_Items[(int)uVar46] == (UnityEngine_Material_o *)0x0) goto label_1821b0601;
                      pUVar39 = materials->m_Items[(int)uVar46];
                      pUVar41 = (UnityEngine_Object_o *)
                                UnityEngine_Material__get_shader
                                          (pUVar38->m_Items[(int)uVar46],(MethodInfo *)0x0);
                      if (pUVar41 == (UnityEngine_Object_o *)0x0) goto label_1821b0601;
                      pSVar35 = UnityEngine_Object__get_name(pUVar41,(MethodInfo *)0x0);
                      bVar27 = System_String__op_Equality(pSVar35,"AoTTG/TitanRegrowth",(MethodInfo *)0x0);
                      if (bVar27) {
                        fVar49 = 1.0;
                      }
                      else {
                        fVar49 = 0.0;
                      }
                      if (pUVar39 == (UnityEngine_Material_o *)0x0) goto label_1821b0601;
                      UnityEngine_Material__SetFloat(pUVar39,"_Regrowth",fVar49,(MethodInfo *)0x0);
                    }
                  }
                  pSVar30 = (__this->fields)._parts;
                  pUVar42 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
                  if (pUVar42 == (UnityEngine_GameObject_o *)0x0) {
label_1821b0627:
                    ThrowNullReferenceException();
                  }
                  iVar28 = UnityEngine_GameObject__get_layer(pUVar42,(MethodInfo *)0x0);
                  iVar29 = UnityEngine_Renderer__get_shadowCastingMode
                                     ((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
                  local_158.m10 = fVar50;
                  local_158.m00 = fVar52;
                  local_158.m30 = fVar51;
                  local_158.m20 = fVar57;
                  local_158.m11 = fVar54;
                  local_158.m01 = fVar53;
                  local_158.m31 = fVar56;
                  local_158.m21 = fVar55;
                  local_158.m12 = fVar59;
                  local_158.m02 = fVar58;
                  local_158.m32 = fVar61;
                  local_158.m22 = fVar60;
                  local_1a8.value.fields.m33 = 0.0;
                  local_1a8.hasValue = false;
                  local_1a8._1_3_ = 0;
                  local_1a8.value.fields.m00 = 0.0;
                  local_1a8.value.fields.m10 = 0.0;
                  local_1a8.value.fields.m20 = 0.0;
                  local_1a8.value.fields.m30 = 0.0;
                  local_1a8.value.fields.m01 = 0.0;
                  local_1a8.value.fields.m11 = 0.0;
                  local_1a8.value.fields.m21 = 0.0;
                  local_1a8.value.fields.m31 = 0.0;
                  local_1a8.value.fields.m02 = 0.0;
                  local_1a8.value.fields.m12 = 0.0;
                  local_1a8.value.fields.m22 = 0.0;
                  local_1a8.value.fields.m32 = 0.0;
                  local_1a8.value.fields.m03 = 0.0;
                  local_1a8.value.fields.m13 = 0.0;
                  local_1a8.value.fields.m23 = 0.0;
                  local_158.m13 = fVar63;
                  local_158.m03 = fVar62;
                  local_158.m33 = fVar65;
                  local_158.m23 = fVar64;
                  System_Nullable_Matrix4x4____ctor
                            ((System_Nullable_Matrix4x4__o *)&local_1a8,(UnityEngine_Matrix4x4_o *)&local_158,
                             (MethodInfo_AE26F0 *)MethodInfo_System_Nullable_Matrix4x4_ctor);
                  pCVar43 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve_Part);
                  pUVar41 = local_1c8;
                  local_108[0].hasValue = local_1a8.hasValue;
                  local_108[0]._1_3_ = local_1a8._1_3_;
                  local_108[0].value.fields.m00 = local_1a8.value.fields.m00;
                  local_108[0].value.fields.m10 = local_1a8.value.fields.m10;
                  local_108[0].value.fields.m20 = local_1a8.value.fields.m20;
                  local_108[0].value.fields.m30 = local_1a8.value.fields.m30;
                  local_108[0].value.fields.m01 = local_1a8.value.fields.m01;
                  local_108[0].value.fields.m11 = local_1a8.value.fields.m11;
                  local_108[0].value.fields.m21 = local_1a8.value.fields.m21;
                  local_108[0].value.fields.m33 = local_1a8.value.fields.m33;
                  local_108[0].value.fields.m31 = local_1a8.value.fields.m31;
                  local_108[0].value.fields.m02 = local_1a8.value.fields.m02;
                  local_108[0].value.fields.m12 = local_1a8.value.fields.m12;
                  local_108[0].value.fields.m22 = local_1a8.value.fields.m22;
                  local_108[0].value.fields.m32 = local_1a8.value.fields.m32;
                  local_108[0].value.fields.m03 = local_1a8.value.fields.m03;
                  local_108[0].value.fields.m13 = local_1a8.value.fields.m13;
                  local_108[0].value.fields.m23 = local_1a8.value.fields.m23;
                  Characters_TitanDeathDissolve_Part___ctor
                            (pCVar43,(UnityEngine_Mesh_o *)local_1c8,materials,local_1c0,iVar28,iVar29,
                             (System_Nullable_Matrix4x4__o *)local_108,(MethodInfo *)0x0);
                  if (pSVar30 == (System_Collections_Generic_List_TitanDeathDissolve_Part__o *)0x0)
                  goto label_1821b0627;
                  il2cpp_runtime_helper_180012890(pSVar30);
                  if ((bVar26 != false) && ((titan->fields).EffectsEnabled != false)) {
                    fVar52 = (__this->fields)._scale;
                    if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve)
                      ;
                    }
                    pUVar44 = Characters_TitanDeathDissolve__CreateTissueMesh
                                        ((UnityEngine_Mesh_o *)pUVar41,fVar52,(MethodInfo *)0x0);
                    pSVar31 = (__this->fields)._meshes;
                    if (pSVar31 == (System_Collections_Generic_List_Mesh__o *)0x0) break;
                    il2cpp_runtime_helper_180012890(pSVar31,pUVar44);
                    pUVar38 = (UnityEngine_Material_array *)
                              SZArrayNew(TypeInfo_UnityEngine_Material_array,(uint32_t)materials->max_length);
                    for (uVar46 = 0; uVar1 = (uint)materials->max_length, (int)uVar46 < (int)uVar1;
                        uVar46 = uVar46 + 1) {
                      if (uVar1 <= uVar46) goto label_1821b062d;
                      pUVar39 = materials->m_Items[(int)uVar46];
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar26 = UnityEngine_Object__op_Inequality
                                         ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)0x0,
                                          (MethodInfo *)0x0);
                      if (bVar26) {
                        if ((uint)materials->max_length <= uVar46) goto label_1821b062d;
                        pUVar39 = Characters_TitanDeathDissolve__CreateMaterial
                                            (__this,materials->m_Items[(int)uVar46],1.0,(MethodInfo *)0x0);
                        if (pUVar38 == (UnityEngine_Material_array *)0x0) goto label_1821b0601;
                        if ((pUVar39 != (UnityEngine_Material_o *)0x0) &&
                           (pIVar40 = il2cpp_vm_Object_IsInst
                                                ((Il2CppObject *)pUVar39,
                                                 (((pUVar38->obj).klass)->_1).element_class),
                           pIVar40 == (Il2CppObject *)0x0)) {
                          pIVar40 = il2cpp_codegen_get_array_type_mismatch_exception();
                          il2cpp_codegen_raise_exception(pIVar40,(MethodInfo *)0x0);
                        }
                        if ((uint)pUVar38->max_length <= uVar46) goto label_1821b062d;
                        pUVar38->m_Items[(int)uVar46] = pUVar39;
                        Il2CppCodeGenWriteBarrier(pUVar38->m_Items + (int)uVar46,pUVar39);
                      }
                    }
                    pSVar30 = (__this->fields)._parts;
                    pUVar42 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
                    if (pUVar42 == (UnityEngine_GameObject_o *)0x0) break;
                    iVar28 = UnityEngine_GameObject__get_layer(pUVar42,(MethodInfo *)0x0);
                    iVar29 = UnityEngine_Renderer__get_shadowCastingMode
                                       ((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
                    pCVar43 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve_Part);
                    local_1a8.value.fields.m33 = 0.0;
                    local_1a8.hasValue = false;
                    local_1a8._1_3_ = 0;
                    local_1a8.value.fields.m00 = 0.0;
                    local_1a8.value.fields.m10 = 0.0;
                    local_1a8.value.fields.m20 = 0.0;
                    local_1a8.value.fields.m30 = 0.0;
                    local_1a8.value.fields.m01 = 0.0;
                    local_1a8.value.fields.m11 = 0.0;
                    local_1a8.value.fields.m21 = 0.0;
                    local_1a8.value.fields.m31 = 0.0;
                    local_1a8.value.fields.m02 = 0.0;
                    local_1a8.value.fields.m12 = 0.0;
                    local_1a8.value.fields.m22 = 0.0;
                    local_1a8.value.fields.m32 = 0.0;
                    local_1a8.value.fields.m03 = 0.0;
                    local_1a8.value.fields.m13 = 0.0;
                    local_1a8.value.fields.m23 = 0.0;
                    Characters_TitanDeathDissolve_Part___ctor
                              (pCVar43,pUVar44,pUVar38,local_1c0,iVar28,iVar29,
                               (System_Nullable_Matrix4x4__o *)&local_1a8,(MethodInfo *)0x0);
                    if (pSVar30 == (System_Collections_Generic_List_TitanDeathDissolve_Part__o *)0x0) break;
                    il2cpp_runtime_helper_180012890(pSVar30);
                  }
                  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)x,false,(MethodInfo *)0x0);
                  local_1d8 = local_1d8 + 1;
                  pUVar41 = local_1e8[0];
                  pUVar32 = local_1b8;
                } while( true );
              }
            }
          }
        }
      }
    }
  }
label_1821b0601:
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$CreateTissueMesh
// il2cpp: UnityEngine_Mesh_o* Characters_TitanDeathDissolve__CreateTissueMesh (UnityEngine_Mesh_o* source, float scale, const MethodInfo* method);
// 0x1821ae150

UnityEngine_Mesh_o *
Characters_TitanDeathDissolve__CreateTissueMesh(UnityEngine_Mesh_o *source,float scale,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UnityEngine_Object_o *__this;
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector3_array *pUVar7;
  uint uVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_184346e56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Dissolving tissue");
    Il2CppMethodInitialized_184346e56 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this = (UnityEngine_Object_o *)
           UnityEngine_Object__Instantiate_object__746ba0
                     ((Il2CppObject *)source,
                      (MethodInfo_746BA0 *)MethodInfo_UnityEngine_Object_Instantiate_Mesh);
  if (__this != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this,"Dissolving tissue",(MethodInfo *)0x0);
    if (scale <= 0.001) {
      scale = 0.001;
    }
    value = UnityEngine_Mesh__get_vertices((UnityEngine_Mesh_o *)__this,(MethodInfo *)0x0);
    pUVar7 = UnityEngine_Mesh__get_normals((UnityEngine_Mesh_o *)__this,(MethodInfo *)0x0);
    if (value != (UnityEngine_Vector3_array *)0x0) {
      uVar8 = 0;
      do {
        if ((int)value->max_length <= (int)uVar8) {
          UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)__this,value,(MethodInfo *)0x0);
          UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)__this,(MethodInfo *)0x0);
          return (UnityEngine_Mesh_o *)__this;
        }
        if ((uint)value->max_length <= uVar8) {
label_1821ae3f3:
          ThrowIndexOutOfRangeException();
        }
        if (pUVar7 == (UnityEngine_Vector3_array *)0x0) break;
        if ((uint)pUVar7->max_length <= uVar8) goto label_1821ae3f3;
        uVar3 = value->m_Items[(int)uVar8].fields.x;
        uVar5 = value->m_Items[(int)uVar8].fields.y;
        fVar1 = value->m_Items[(int)uVar8].fields.z;
        uVar4 = pUVar7->m_Items[(int)uVar8].fields.x;
        uVar6 = pUVar7->m_Items[(int)uVar8].fields.y;
        fVar2 = pUVar7->m_Items[(int)uVar8].fields.z;
        fVar9 = UnityEngine_Mathf__PerlinNoise
                          ((value->m_Items[(int)uVar8].fields.x * 8.0) / scale,
                           ((value->m_Items[(int)uVar8].fields.y + value->m_Items[(int)uVar8].fields.z) * 8.0)
                           / scale,(MethodInfo *)0x0);
        if (fVar9 < 0.0) {
          fVar9 = 0.0;
        }
        else if (1.0 < fVar9) {
          fVar9 = 1.0;
        }
        fVar9 = (fVar9 * 0.004 + 0.004) * scale;
        value->m_Items[(int)uVar8].fields.z = fVar1 - fVar2 * fVar9;
        value->m_Items[(int)uVar8].fields.x = (float)uVar3 - (float)uVar4 * fVar9;
        value->m_Items[(int)uVar8].fields.y = (float)uVar5 - (float)uVar6 * fVar9;
        uVar8 = uVar8 + 1;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$Bake
// il2cpp: UnityEngine_Mesh_o* Characters_TitanDeathDissolve__Bake (Characters_TitanDeathDissolve_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x1821acb40

UnityEngine_Mesh_o *
Characters_TitanDeathDissolve__Bake
          (Characters_TitanDeathDissolve_o *__this,UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  int32_t *piVar1;
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
  byte bVar13;
  Characters_BasicTitan_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar14;
  System_Collections_Generic_List_Mesh__o *__this_01;
  UnityEngine_Mesh_array *pUVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  MethodInfo *pMVar24;
  bool bVar25;
  UnityEngine_Object_o *pUVar26;
  UnityEngine_Mesh_o *original;
  System_String_o *pSVar27;
  UnityEngine_Transform_o *pUVar28;
  UnityEngine_Matrix4x4_o *pUVar29;
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector3_array *value_00;
  System_Collections_Generic_List_Vector3__o *__this_02;
  uint uVar30;
  float fVar31;
  float fVar32;
  UnityEngine_Matrix4x4_Fields local_238;
  float local_1f8;
  UnityEngine_MeshFilter_o *local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  UnityEngine_Matrix4x4_Fields local_1c8;
  UnityEngine_Matrix4x4_Fields local_188;
  UnityEngine_Matrix4x4_Fields local_148;
  UnityEngine_Matrix4x4_o local_108 [3];
  
  if (Il2CppMethodInitialized_184346e57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f05d8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&"Dissolving ");
    Il2CppMethodInitialized_184346e57 = '\x01';
  }
  local_1f0 = (UnityEngine_MeshFilter_o *)0x0;
  local_238.m00 = 0.0;
  local_238.m10 = 0.0;
  local_238.m20 = 0.0;
  local_238.m30 = 0.0;
  local_238.m01 = 0.0;
  local_238.m11 = 0.0;
  local_238.m21 = 0.0;
  local_238.m31 = 0.0;
  local_238.m02 = 0.0;
  local_238.m12 = 0.0;
  local_238.m22 = 0.0;
  local_238.m32 = 0.0;
  local_238.m03 = 0.0;
  local_238.m13 = 0.0;
  local_238.m23 = 0.0;
  local_238.m33 = 0.0;
  local_1c8.m00 = 0.0;
  local_1c8.m10 = 0.0;
  local_1c8.m20 = 0.0;
  local_1c8.m30 = 0.0;
  local_1c8.m01 = 0.0;
  local_1c8.m11 = 0.0;
  local_1c8.m21 = 0.0;
  local_1c8.m31 = 0.0;
  local_1c8.m02 = 0.0;
  local_1c8.m12 = 0.0;
  local_1c8.m22 = 0.0;
  local_1c8.m32 = 0.0;
  local_1c8.m03 = 0.0;
  local_1c8.m13 = 0.0;
  local_1c8.m23 = 0.0;
  local_1c8.m33 = 0.0;
  if (renderer == (UnityEngine_Renderer_o *)0x0) goto label_1821ad283;
  bVar13 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
  if (((renderer->klass->_2).typeHierarchyDepth < bVar13) ||
     ((renderer->klass->_2).typeHierarchy[(ulonglong)bVar13 - 1] !=
      (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer)) {
label_1821acd0c:
    bVar25 = UnityEngine_Component__TryGetComponent_object_
                       ((UnityEngine_Component_o *)renderer,(Il2CppObject **)&local_1f0,
                        (MethodInfo_6657C0 *)MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter);
    if (!bVar25) {
      return (UnityEngine_Mesh_o *)0x0;
    }
    if (local_1f0 == (UnityEngine_MeshFilter_o *)0x0) goto label_1821ad283;
    pUVar26 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh(local_1f0,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar25 = UnityEngine_Object__op_Inequality(pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar25) {
      return (UnityEngine_Mesh_o *)0x0;
    }
    if (local_1f0 == (UnityEngine_MeshFilter_o *)0x0) goto label_1821ad283;
    original = UnityEngine_MeshFilter__get_sharedMesh(local_1f0,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pUVar26 = (UnityEngine_Object_o *)
              UnityEngine_Object__Instantiate_object__746ba0
                        ((Il2CppObject *)original,
                         (MethodInfo_746BA0 *)MethodInfo_UnityEngine_Object_Instantiate_Mesh);
  }
  else {
    pUVar26 = (UnityEngine_Object_o *)
              UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                        ((UnityEngine_SkinnedMeshRenderer_o *)renderer,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar25 = UnityEngine_Object__op_Inequality(pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar25) goto label_1821acd0c;
    pUVar26 = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
    UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pUVar26,(MethodInfo *)0x0);
    UnityEngine_SkinnedMeshRenderer__BakeMesh_2ef8130
              ((UnityEngine_SkinnedMeshRenderer_o *)renderer,(UnityEngine_Mesh_o *)pUVar26,true,
               (MethodInfo *)0x0);
  }
  pSVar27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)renderer,(MethodInfo *)0x0);
  pSVar27 = System_String__Concat_1969e50("Dissolving ",pSVar27,(MethodInfo *)0x0);
  if (pUVar26 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(pUVar26,pSVar27,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._titan;
    if ((__this_00 != (Characters_BasicTitan_o *)0x0) &&
       (pUVar28 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
       , pUVar28 != (UnityEngine_Transform_o *)0x0)) {
      pUVar29 = UnityEngine_Transform__get_worldToLocalMatrix
                          ((UnityEngine_Matrix4x4_o *)&local_188,pUVar28,(MethodInfo *)0x0);
      uVar16._0_4_ = (pUVar29->fields).m00;
      uVar16._4_4_ = (pUVar29->fields).m10;
      uVar17._0_4_ = (pUVar29->fields).m20;
      uVar17._4_4_ = (pUVar29->fields).m30;
      uVar18._0_4_ = (pUVar29->fields).m01;
      uVar18._4_4_ = (pUVar29->fields).m11;
      uVar19._0_4_ = (pUVar29->fields).m21;
      uVar19._4_4_ = (pUVar29->fields).m31;
      uVar20._0_4_ = (pUVar29->fields).m02;
      uVar20._4_4_ = (pUVar29->fields).m12;
      uVar21._0_4_ = (pUVar29->fields).m22;
      uVar21._4_4_ = (pUVar29->fields).m32;
      uVar22._0_4_ = (pUVar29->fields).m03;
      uVar22._4_4_ = (pUVar29->fields).m13;
      uVar23._0_4_ = (pUVar29->fields).m23;
      uVar23._4_4_ = (pUVar29->fields).m33;
      pUVar28 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)renderer,(MethodInfo *)0x0);
      if (pUVar28 != (UnityEngine_Transform_o *)0x0) {
        pUVar29 = UnityEngine_Transform__get_localToWorldMatrix
                            ((UnityEngine_Matrix4x4_o *)&local_188,pUVar28,(MethodInfo *)0x0);
        local_148.m00 = (pUVar29->fields).m00;
        local_148.m10 = (pUVar29->fields).m10;
        local_148.m20 = (pUVar29->fields).m20;
        local_148.m30 = (pUVar29->fields).m30;
        local_148.m01 = (pUVar29->fields).m01;
        local_148.m11 = (pUVar29->fields).m11;
        local_148.m21 = (pUVar29->fields).m21;
        local_148.m31 = (pUVar29->fields).m31;
        local_148.m02 = (pUVar29->fields).m02;
        local_148.m12 = (pUVar29->fields).m12;
        local_148.m22 = (pUVar29->fields).m22;
        local_148.m32 = (pUVar29->fields).m32;
        local_148.m03 = (pUVar29->fields).m03;
        local_148.m13 = (pUVar29->fields).m13;
        local_148.m23 = (pUVar29->fields).m23;
        local_148.m33 = (pUVar29->fields).m33;
        local_188._0_8_ = uVar16;
        local_188._8_8_ = uVar17;
        local_188._16_8_ = uVar18;
        local_188._24_8_ = uVar19;
        local_188._32_8_ = uVar20;
        local_188._40_8_ = uVar21;
        local_188._48_8_ = uVar22;
        local_188._56_8_ = uVar23;
        pUVar29 = UnityEngine_Matrix4x4__op_Multiply
                            (local_108,(UnityEngine_Matrix4x4_o *)&local_188,
                             (UnityEngine_Matrix4x4_o *)&local_148,(MethodInfo *)0x0);
        local_238.m00 = (pUVar29->fields).m00;
        local_238.m10 = (pUVar29->fields).m10;
        local_238.m20 = (pUVar29->fields).m20;
        local_238.m30 = (pUVar29->fields).m30;
        local_238.m01 = (pUVar29->fields).m01;
        local_238.m11 = (pUVar29->fields).m11;
        local_238.m21 = (pUVar29->fields).m21;
        local_238.m31 = (pUVar29->fields).m31;
        local_238.m02 = (pUVar29->fields).m02;
        local_238.m12 = (pUVar29->fields).m12;
        local_238.m22 = (pUVar29->fields).m22;
        local_238.m32 = (pUVar29->fields).m32;
        local_238.m03 = (pUVar29->fields).m03;
        local_238.m13 = (pUVar29->fields).m13;
        local_238.m23 = (pUVar29->fields).m23;
        local_238.m33 = (pUVar29->fields).m33;
        pUVar29 = UnityEngine_Matrix4x4__Internal_Inverse
                            (local_108,(UnityEngine_Matrix4x4_o *)&local_238,(MethodInfo *)0x0);
        local_1c8.m00 = (pUVar29->fields).m00;
        local_1c8.m10 = (pUVar29->fields).m10;
        local_1c8.m20 = (pUVar29->fields).m20;
        local_1c8.m30 = (pUVar29->fields).m30;
        local_1c8.m01 = (pUVar29->fields).m01;
        local_1c8.m11 = (pUVar29->fields).m11;
        local_1c8.m21 = (pUVar29->fields).m21;
        local_1c8.m31 = (pUVar29->fields).m31;
        local_1c8.m02 = (pUVar29->fields).m02;
        local_1c8.m12 = (pUVar29->fields).m12;
        local_1c8.m22 = (pUVar29->fields).m22;
        local_1c8.m32 = (pUVar29->fields).m32;
        local_1c8.m03 = (pUVar29->fields).m03;
        local_1c8.m13 = (pUVar29->fields).m13;
        local_1c8.m23 = (pUVar29->fields).m23;
        local_1c8.m33 = (pUVar29->fields).m33;
        pUVar29 = UnityEngine_Matrix4x4__Internal_Transpose
                            (local_108,(UnityEngine_Matrix4x4_o *)&local_1c8,(MethodInfo *)0x0);
        fVar2 = (pUVar29->fields).m12;
        fVar11 = (pUVar29->fields).m02;
        fVar3 = (pUVar29->fields).m00;
        fVar4 = (pUVar29->fields).m10;
        fVar5 = (pUVar29->fields).m20;
        fVar6 = (pUVar29->fields).m01;
        fVar7 = (pUVar29->fields).m11;
        fVar8 = (pUVar29->fields).m21;
        fVar9 = (pUVar29->fields).m22;
        local_1f8 = fVar11;
        value = UnityEngine_Mesh__get_vertices((UnityEngine_Mesh_o *)pUVar26,(MethodInfo *)0x0);
        value_00 = UnityEngine_Mesh__get_normals((UnityEngine_Mesh_o *)pUVar26,(MethodInfo *)0x0);
        if (value != (UnityEngine_Vector3_array *)0x0) {
          for (uVar30 = 0; (int)uVar30 < (int)value->max_length; uVar30 = uVar30 + 1) {
            if ((uint)value->max_length <= uVar30) goto label_1821ad289;
            fVar12 = value->m_Items[(int)uVar30].fields.x;
            fVar31 = value->m_Items[(int)uVar30].fields.y;
            fVar10 = value->m_Items[(int)uVar30].fields.z;
            value->m_Items[(int)uVar30].fields.x =
                 fVar31 * local_238.m01 + fVar12 * local_238.m00 + fVar10 * local_238.m02 + local_238.m03;
            value->m_Items[(int)uVar30].fields.y =
                 fVar31 * local_238.m11 + fVar12 * local_238.m10 + fVar10 * local_238.m12 + local_238.m13;
            value->m_Items[(int)uVar30].fields.z =
                 fVar31 * local_238.m21 + fVar12 * local_238.m20 + fVar10 * local_238.m22 + local_238.m23;
            if (value_00 == (UnityEngine_Vector3_array *)0x0) goto label_1821ad283;
            if ((uint)value_00->max_length <= uVar30) goto label_1821ad289;
            fVar12 = value_00->m_Items[(int)uVar30].fields.x;
            fVar31 = value_00->m_Items[(int)uVar30].fields.y;
            fVar10 = value_00->m_Items[(int)uVar30].fields.z;
            fVar11 = fVar31 * fVar6 + fVar12 * fVar3 + fVar10 * fVar11;
            fVar32 = fVar31 * fVar8 + fVar12 * fVar5 + fVar10 * fVar9;
            fVar12 = fVar31 * fVar7 + fVar12 * fVar4 + fVar10 * fVar2;
            local_1e8 = fVar11;
            local_1e4 = fVar12;
            local_1e0 = fVar32;
            if (Il2CppMethodInitialized_18433de5f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433de5f = '\x01';
            }
            fVar31 = (float)il2cpp_runtime_helper_180546a40(&local_1e8,0);
            if (fVar31 <= 1e-05) {
              pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar11 = (pUVar14->zeroVector).fields.x;
              fVar12 = (pUVar14->zeroVector).fields.y;
              fVar32 = (pUVar14->zeroVector).fields.z;
            }
            else {
              fVar11 = fVar11 / fVar31;
              fVar12 = fVar12 / fVar31;
              fVar32 = fVar32 / fVar31;
            }
            if ((uint)value_00->max_length <= uVar30) goto label_1821ad289;
            value_00->m_Items[(int)uVar30].fields.x = fVar11;
            value_00->m_Items[(int)uVar30].fields.y = fVar12;
            value_00->m_Items[(int)uVar30].fields.z = fVar32;
            fVar11 = local_1f8;
          }
          UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)pUVar26,value,(MethodInfo *)0x0);
          UnityEngine_Mesh__set_normals((UnityEngine_Mesh_o *)pUVar26,value_00,(MethodInfo *)0x0);
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
          System_Collections_Generic_List_Vector3____ctor_9aad40
                    (__this_02,(System_Collections_Generic_IEnumerable_T__o *)value,
                     (MethodInfo_9AAD40 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f05d8);
          UnityEngine_Mesh__SetUVs_2eed4e0((UnityEngine_Mesh_o *)pUVar26,3,__this_02,(MethodInfo *)0x0);
          UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)pUVar26,(MethodInfo *)0x0);
          pMVar24 = MethodInfo_System_Collections_Generic_List_Mesh_Add;
          __this_01 = (__this->fields)._meshes;
          if (__this_01 != (System_Collections_Generic_List_Mesh__o *)0x0) {
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar15 = (__this_01->fields)._items;
            if (pUVar15 != (UnityEngine_Mesh_array *)0x0) {
              uVar30 = (__this_01->fields)._size;
              if ((uint)pUVar15->max_length <= uVar30) {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pUVar26,
                           (MethodInfo_93DD50 *)pMVar24->klass->rgctx_data[0xe].method);
                return (UnityEngine_Mesh_o *)pUVar26;
              }
              (__this_01->fields)._size = uVar30 + 1;
              if (uVar30 < (uint)pUVar15->max_length) {
                pUVar15->m_Items[(int)uVar30] = (UnityEngine_Mesh_o *)pUVar26;
                Il2CppCodeGenWriteBarrier(pUVar15->m_Items + (int)uVar30,pUVar26);
                return (UnityEngine_Mesh_o *)pUVar26;
              }
label_1821ad289:
              ThrowIndexOutOfRangeException();
            }
          }
        }
      }
    }
  }
label_1821ad283:
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$CreateMaterial
// il2cpp: UnityEngine_Material_o* Characters_TitanDeathDissolve__CreateMaterial (Characters_TitanDeathDissolve_o* __this, UnityEngine_Material_o* source, float layer, const MethodInfo* method);
// 0x1821ad290
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ad3bb: jmp 0x1821ad409

UnityEngine_Material_o *
Characters_TitanDeathDissolve__CreateMaterial
          (Characters_TitanDeathDissolve_o *__this,UnityEngine_Material_o *source,float layer,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Shader_o *shader;
  Characters_BasicTitan_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  System_Collections_Generic_List_Material__o *__this_00;
  UnityEngine_Material_array *pUVar6;
  MethodInfo *pMVar7;
  bool bVar8;
  UnityEngine_Material_o *__this_01;
  System_String_o *pSVar9;
  UnityEngine_Texture_o *value;
  UnityEngine_Vector2_o UVar10;
  UnityEngine_Color_o *pUVar11;
  float local_res18 [2];
  UnityEngine_Color_Fields local_18;
  
  local_res18[0] = layer;
  if (Il2CppMethodInitialized_184346e58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Titan dissolve ");
    il2cpp_codegen_initialize_runtime_metadata(&"_Layer");
    il2cpp_codegen_initialize_runtime_metadata(&"_Color");
    il2cpp_codegen_initialize_runtime_metadata(&"_MainTex");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseColor");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseMap");
    il2cpp_codegen_initialize_runtime_metadata(&"_DissolveSeed");
    il2cpp_codegen_initialize_runtime_metadata(&"_DissolveScale");
    Il2CppMethodInitialized_184346e58 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    shader = (__this->fields)._shader;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
    UnityEngine_Material___ctor(__this_01,shader,(MethodInfo *)0x0);
    pSVar9 = System_Single__ToString(local_res18,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_1969e50("Titan dissolve ",pSVar9,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Material_o *)0x0) goto label_1821ad6b5;
  }
  else {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
    UnityEngine_Material___ctor_2ee55e0(__this_01,source,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Material_o *)0x0) goto label_1821ad6b5;
    UnityEngine_Material__set_shader(__this_01,(__this->fields)._shader,(MethodInfo *)0x0);
    pSVar9 = System_Single__ToString(local_res18,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_1969e50("Titan dissolve ",pSVar9,(MethodInfo *)0x0);
  }
  UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_01,pSVar9,(MethodInfo *)0x0);
  UnityEngine_Material__set_renderQueue(__this_01,2000,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat(__this_01,"_Layer",local_res18[0],(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat
            (__this_01,"_DissolveScale",12.0 / (__this->fields)._scale,(MethodInfo *)0x0);
  pCVar3 = (__this->fields)._titan;
  if (((pCVar3 != (Characters_BasicTitan_o *)0x0) &&
      (pUVar4 = (pCVar3->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pPVar5 = (pUVar4->fields).PhotonView, pPVar5 != (Photon_Pun_PhotonView_o *)0x0)) {
    UnityEngine_Material__SetFloat
              (__this_01,"_DissolveSeed",(float)((pPVar5->fields).viewIdField % 0x3e5) * 0.17,
               (MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      if (source == (UnityEngine_Material_o *)0x0) goto label_1821ad6b5;
      bVar8 = UnityEngine_Material__HasProperty_2ee2c00(source,"_BaseMap",(MethodInfo *)0x0);
      if ((!bVar8) &&
         (bVar8 = UnityEngine_Material__HasProperty_2ee2c00(source,"_MainTex",(MethodInfo *)0x0),
         bVar8)) {
        value = UnityEngine_Material__GetTexture(source,"_MainTex",(MethodInfo *)0x0);
        UnityEngine_Material__SetTexture(__this_01,"_BaseMap",value,(MethodInfo *)0x0);
        UVar10 = UnityEngine_Material__GetTextureScale(source,"_MainTex",(MethodInfo *)0x0);
        UnityEngine_Material__SetTextureScale(__this_01,"_BaseMap",UVar10,(MethodInfo *)0x0);
        UVar10 = UnityEngine_Material__GetTextureOffset(source,"_MainTex",(MethodInfo *)0x0);
        UnityEngine_Material__SetTextureOffset(__this_01,"_BaseMap",UVar10,(MethodInfo *)0x0);
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      if (source == (UnityEngine_Material_o *)0x0) goto label_1821ad6b5;
      bVar8 = UnityEngine_Material__HasProperty_2ee2c00(source,"_BaseColor",(MethodInfo *)0x0);
      if ((!bVar8) &&
         (bVar8 = UnityEngine_Material__HasProperty_2ee2c00(source,"_Color",(MethodInfo *)0x0),
         bVar8)) {
        pUVar11 = UnityEngine_Material__GetColor
                            ((UnityEngine_Color_o *)&local_18,source,"_Color",(MethodInfo *)0x0);
        local_18.r = (pUVar11->fields).r;
        local_18.g = (pUVar11->fields).g;
        local_18.b = (pUVar11->fields).b;
        local_18.a = (pUVar11->fields).a;
        UnityEngine_Material__SetVector
                  (__this_01,"_BaseColor",(UnityEngine_Vector4_o *)&local_18,(MethodInfo *)0x0);
      }
    }
    pMVar7 = MethodInfo_System_Collections_Generic_List_Material_Add;
    __this_00 = (__this->fields)._materials;
    if (__this_00 != (System_Collections_Generic_List_Material__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar6 = (__this_00->fields)._items;
      if (pUVar6 != (UnityEngine_Material_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if ((uint)pUVar6->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_01,
                     (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
          return __this_01;
        }
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pUVar6->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pUVar6->m_Items[(int)uVar2] = __this_01;
        Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar2,__this_01);
        return __this_01;
      }
    }
  }
label_1821ad6b5:
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$CreateSteamSurface
// il2cpp: UnityEngine_Mesh_o* Characters_TitanDeathDissolve__CreateSteamSurface (Characters_TitanDeathDissolve_o* __this, const MethodInfo* method);
// 0x1821ad6d0
// eh: try 0x1821ad898..0x1821add30 -> pad 0x183317fd0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ada6b: nop dword ptr [rax + rax]
// asm:   0x1821adb8d: mov r14, qword ptr [rsp + 0xe0]
// asm:   0x1821adb95: jmp 0x1821ad8a4
// asm:   0x1821adbab: mov rdx, qword ptr [rip + 0x1efa196]  ; MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_Part_Dispose
// asm:   0x1821adbb2: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821adbb7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821adbbc: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821adbc1: test rcx, rcx
// asm:   0x1821adbc4: jne 0x1821add30
// asm:   0x1821adbca: mov r14, qword ptr [rsp + 0xe8]
// asm:   0x1821adbd2: mov r15, qword ptr [rsp + 0x20]
// asm:   0x1821add30: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

UnityEngine_Mesh_o *
Characters_TitanDeathDissolve__CreateSteamSurface(Characters_TitanDeathDissolve_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_TitanDeathDissolve_Part__o *__this_00;
  void *pvVar2;
  System_Collections_Generic_List_Mesh__o *pSVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  System_Collections_Generic_List_Vector3__o *inVertices;
  System_Collections_Generic_List_int__o *triangles;
  UnityEngine_Vector3_array *collection;
  UnityEngine_Vector2_array *pUVar6;
  System_Int32_array *pSVar7;
  UnityEngine_Object_o *pUVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 local_98 [16];
  Il2CppObject *local_88;
  undefined1 local_80 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_78;
  Il2CppObject *local_70;
  
  if (Il2CppMethodInitialized_184346e59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_Part_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_Part_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_Part_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"_Regrowth");
    il2cpp_codegen_initialize_runtime_metadata(&"_Layer");
    il2cpp_codegen_initialize_runtime_metadata(&"_Growth");
    il2cpp_codegen_initialize_runtime_metadata(&"_Flesh");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan steam surface");
    Il2CppMethodInitialized_184346e59 = '\x01';
  }
  local_80 = (undefined1  [8])0x0;
  pUStack_78 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_70 = (Il2CppObject *)0x0;
  inVertices = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)inVertices,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  triangles = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)triangles,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  __this_00 = (__this->fields)._parts;
  if (__this_00 != (System_Collections_Generic_List_TitanDeathDissolve_Part__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_98,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_GetEnumerator);
    local_80 = (undefined1  [8])local_98._0_8_;
    pUStack_78 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98._8_8_;
    local_70 = local_88;
    local_98._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_98._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80;
    while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_80,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_Part_MoveNext
                             ), pIVar4 = local_70, bVar5) {
      if (local_70 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar2 = local_70[1].monitor;
      if (pvVar2 == (void *)0x0) {
        ThrowNullReferenceException();
      }
      if (*(longlong *)((longlong)pvVar2 + 0x18) != 0) {
        if (*(int *)((longlong)pvVar2 + 0x18) == 0) {
          ThrowIndexOutOfRangeException();
        }
        pUVar8 = *(UnityEngine_Object_o **)((longlong)pvVar2 + 0x20);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar5) {
          pvVar2 = pIVar4[1].monitor;
          if (pvVar2 == (void *)0x0) {
            ThrowNullReferenceException();
          }
          if (*(int *)((longlong)pvVar2 + 0x18) == 0) {
            ThrowIndexOutOfRangeException();
          }
          if (*(UnityEngine_Material_o **)((longlong)pvVar2 + 0x20) == (UnityEngine_Material_o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar10 = UnityEngine_Material__GetFloat
                             (*(UnityEngine_Material_o **)((longlong)pvVar2 + 0x20),"_Layer",
                              (MethodInfo *)0x0);
          if (fVar10 == 0.0) {
            pvVar2 = pIVar4[1].monitor;
            if (pvVar2 == (void *)0x0) {
              ThrowNullReferenceException();
            }
            if (*(int *)((longlong)pvVar2 + 0x18) == 0) {
              ThrowIndexOutOfRangeException();
            }
            if (*(UnityEngine_Material_o **)((longlong)pvVar2 + 0x20) == (UnityEngine_Material_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar10 = UnityEngine_Material__GetFloat
                               (*(UnityEngine_Material_o **)((longlong)pvVar2 + 0x20),"_Flesh",
                                (MethodInfo *)0x0);
            if (0.5 <= fVar10) {
              if (inVertices == (System_Collections_Generic_List_Vector3__o *)0x0) {
                ThrowNullReferenceException();
              }
              if (pIVar4[1].klass == (Il2CppClass *)0x0) {
                ThrowNullReferenceException();
              }
              iVar1 = (inVertices->fields)._size;
              collection = UnityEngine_Mesh__get_vertices
                                     ((UnityEngine_Mesh_o *)pIVar4[1].klass,(MethodInfo *)0x0);
              System_Collections_Generic_List_Vector3___AddRange
                        (inVertices,(System_Collections_Generic_IEnumerable_T__o *)collection,
                         (MethodInfo_99C310 *)MethodInfo_System_Collections_Generic_List_Vector3_AddRange);
              pvVar2 = pIVar4[1].monitor;
              if (pvVar2 == (void *)0x0) {
                ThrowNullReferenceException();
              }
              if (*(int *)((longlong)pvVar2 + 0x18) == 0) {
                ThrowIndexOutOfRangeException();
              }
              if (*(UnityEngine_Material_o **)((longlong)pvVar2 + 0x20) == (UnityEngine_Material_o *)0x0) {
                ThrowNullReferenceException();
              }
              fVar10 = UnityEngine_Material__GetFloat
                                 (*(UnityEngine_Material_o **)((longlong)pvVar2 + 0x20),"_Regrowth",
                                  (MethodInfo *)0x0);
              if (fVar10 <= 0.5) {
                pUVar6 = (UnityEngine_Vector2_array *)0x0;
              }
              else {
                if (pIVar4[1].klass == (Il2CppClass *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar6 = UnityEngine_Mesh__get_uv2((UnityEngine_Mesh_o *)pIVar4[1].klass,(MethodInfo *)0x0);
              }
              if (pIVar4[2].klass == (Il2CppClass *)0x0) {
                ThrowNullReferenceException();
              }
              fVar11 = UnityEngine_MaterialPropertyBlock__GetFloat
                                 ((UnityEngine_MaterialPropertyBlock_o *)pIVar4[2].klass,"_Growth"
                                  ,(MethodInfo *)0x0);
              if (pIVar4[1].klass == (Il2CppClass *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar7 = UnityEngine_Mesh__get_triangles
                                 ((UnityEngine_Mesh_o *)pIVar4[1].klass,(MethodInfo *)0x0);
              uVar9 = 0;
              if (pSVar7 == (System_Int32_array *)0x0) {
                ThrowNullReferenceException();
              }
              for (; (int)uVar9 < (int)pSVar7->max_length; uVar9 = uVar9 + 3) {
                if (fVar10 <= 0.5) {
label_1821adb0f:
                  if ((uint)pSVar7->max_length <= uVar9) {
                    ThrowIndexOutOfRangeException();
                  }
                  if (triangles == (System_Collections_Generic_List_int__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  il2cpp_runtime_helper_180026690(triangles,pSVar7->m_Items[(int)uVar9] + iVar1,
                                MethodInfo_System_Collections_Generic_List_int_Add);
                  if ((uint)pSVar7->max_length <= uVar9 + 1) {
                    ThrowIndexOutOfRangeException();
                  }
                  il2cpp_runtime_helper_180026690(triangles,pSVar7->m_Items[(longlong)(int)uVar9 + 1] + iVar1,
                                MethodInfo_System_Collections_Generic_List_int_Add);
                  if ((uint)pSVar7->max_length <= uVar9 + 2) {
                    ThrowIndexOutOfRangeException();
                  }
                  il2cpp_runtime_helper_180026690(triangles,pSVar7->m_Items[(longlong)(int)uVar9 + 2] + iVar1);
                }
                else {
                  if ((uint)pSVar7->max_length <= uVar9) {
                    ThrowIndexOutOfRangeException();
                  }
                  if (pUVar6 == (UnityEngine_Vector2_array *)0x0) {
                    ThrowNullReferenceException();
                  }
                  if ((uint)pUVar6->max_length <= (uint)pSVar7->m_Items[(int)uVar9]) {
                    ThrowIndexOutOfRangeException();
                  }
                  if (pUVar6->m_Items[pSVar7->m_Items[(int)uVar9]].fields.x <= fVar11) {
                    if ((uint)pSVar7->max_length <= uVar9 + 1) {
                      ThrowIndexOutOfRangeException();
                    }
                    if ((uint)pUVar6->max_length <= (uint)pSVar7->m_Items[(longlong)(int)uVar9 + 1]) {
                      ThrowIndexOutOfRangeException();
                    }
                    if (pUVar6->m_Items[pSVar7->m_Items[(longlong)(int)uVar9 + 1]].fields.x <= fVar11) {
                      if ((uint)pSVar7->max_length <= uVar9 + 2) {
                        ThrowIndexOutOfRangeException();
                      }
                      if ((uint)pUVar6->max_length <= (uint)pSVar7->m_Items[(longlong)(int)uVar9 + 2]) {
                        ThrowIndexOutOfRangeException();
                      }
                      if (pUVar6->m_Items[pSVar7->m_Items[(longlong)(int)uVar9 + 2]].fields.x <= fVar11)
                      goto label_1821adb0f;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80,
               MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_Part_Dispose);
    pUVar8 = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
    UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pUVar8,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(pUVar8,"Titan steam surface",(MethodInfo *)0x0);
      UnityEngine_Mesh__set_indexFormat((UnityEngine_Mesh_o *)pUVar8,1,(MethodInfo *)0x0);
      UnityEngine_Mesh__SetVertices((UnityEngine_Mesh_o *)pUVar8,inVertices,(MethodInfo *)0x0);
      UnityEngine_Mesh__SetTriangles_2eecc60((UnityEngine_Mesh_o *)pUVar8,triangles,0,(MethodInfo *)0x0);
      UnityEngine_Mesh__RecalculateNormals((UnityEngine_Mesh_o *)pUVar8,(MethodInfo *)0x0);
      UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)pUVar8,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._meshes;
      if (pSVar3 != (System_Collections_Generic_List_Mesh__o *)0x0) {
        il2cpp_runtime_helper_180012890(pSVar3,pUVar8,MethodInfo_System_Collections_Generic_List_Mesh_Add);
        return (UnityEngine_Mesh_o *)pUVar8;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$CreateSteam
// il2cpp: void Characters_TitanDeathDissolve__CreateSteam (Characters_TitanDeathDissolve_o* __this, UnityEngine_Mesh_o* surface, bool plume, const MethodInfo* method);
// 0x1821add40

void Characters_TitanDeathDissolve__CreateSteam
               (Characters_TitanDeathDissolve_o *__this,UnityEngine_Mesh_o *surface,bool plume,
               MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  Characters_BasicTitan_o *pCVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  UnityEngine_Quaternion_StaticFields *pUVar7;
  System_Collections_Generic_List_ParticleSystem__o *__this_00;
  UnityEngine_ParticleSystem_array *pUVar8;
  MethodInfo *pMVar9;
  UnityEngine_Object_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_ParticleSystem_o *particles;
  UnityEngine_Vector3_o *pUVar12;
  UnityEngine_Object_o *original;
  System_String_o *pSVar13;
  float rate;
  UnityEngine_Quaternion_Fields local_58 [3];
  
  if (Il2CppMethodInitialized_184346e5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_ParticleSystem_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_GameObject_40a9800);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSteamEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"Dissolve steam plumes");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Particles/Prefabs/ArmSmokeParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"Dissolve steam wisps");
    Il2CppMethodInitialized_184346e5a = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar13 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar10 = ApplicationManagers_ResourceManager__LoadAsset
                      (pSVar13,"Titans/Particles/Prefabs/ArmSmokeParticle",true,(MethodInfo *)0x0);
  pCVar5 = (__this->fields)._titan;
  if (pCVar5 != (Characters_BasicTitan_o *)0x0) {
    pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar5,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    original = (UnityEngine_Object_o *)0x0;
    if (pUVar10 != (UnityEngine_Object_o *)0x0) {
      if (pUVar10->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
        original = pUVar10;
      }
      if (original == (UnityEngine_Object_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar10);
      }
    }
    pUVar10 = (UnityEngine_Object_o *)
              UnityEngine_Object__Instantiate_object__746ab0
                        ((Il2CppObject *)original,pUVar11,
                         (MethodInfo_746AB0 *)MethodInfo_UnityEngine_Object_Instantiate_GameObject_40a9800);
    pSVar13 = "Dissolve steam wisps";
    if (plume) {
      pSVar13 = "Dissolve steam plumes";
    }
    if (pUVar10 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(pUVar10,pSVar13,(MethodInfo *)0x0);
      pUVar11 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar10,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
        pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_58[0].x = (pUVar6->zeroVector).fields.x;
        local_58[0].y = (pUVar6->zeroVector).fields.y;
        local_58[0].z = (pUVar6->zeroVector).fields.z;
        UnityEngine_Transform__set_localPosition(pUVar11,(UnityEngine_Vector3_o *)local_58,(MethodInfo *)0x0);
        pUVar11 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar10,(MethodInfo *)0x0)
        ;
        if (Il2CppMethodInitialized_18433de5b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_18433de5b = '\x01';
        }
        if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
          pUVar7 = TypeInfo_UnityEngine_Quaternion->static_fields;
          local_58[0].x = (pUVar7->identityQuaternion).fields.x;
          local_58[0].y = (pUVar7->identityQuaternion).fields.y;
          local_58[0].z = (pUVar7->identityQuaternion).fields.z;
          local_58[0].w = (pUVar7->identityQuaternion).fields.w;
          UnityEngine_Transform__set_localRotation
                    (pUVar11,(UnityEngine_Quaternion_o *)local_58,(MethodInfo *)0x0);
          pUVar11 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)pUVar10,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433dbeb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbeb = '\x01';
          }
          if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
            pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
            local_58[0].x = (pUVar6->oneVector).fields.x;
            local_58[0].y = (pUVar6->oneVector).fields.y;
            local_58[0].z = (pUVar6->oneVector).fields.z;
            UnityEngine_Transform__set_localScale(pUVar11,(UnityEngine_Vector3_o *)local_58,(MethodInfo *)0x0)
            ;
            particles = UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)pUVar10,
                                   (MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem);
            pCVar5 = (__this->fields)._titan;
            if (pCVar5 != (Characters_BasicTitan_o *)0x0) {
              fVar2 = (__this->fields)._scale;
              pUVar11 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pCVar5,(MethodInfo *)0x0);
              if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                pUVar12 = UnityEngine_Transform__get_lossyScale
                                    ((UnityEngine_Vector3_o *)local_58,pUVar11,(MethodInfo *)0x0);
                fVar3 = (pUVar12->fields).y;
                if (plume) {
                  rate = 42.0;
                }
                else {
                  rate = 80.0;
                }
                if ((TypeInfo_Characters_TitanSteamEffect->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSteamEffect);
                }
                Characters_TitanSteamEffect__Configure
                          (particles,ABS(fVar3) * fVar2,plume,rate,(MethodInfo *)0x0);
                Characters_TitanSteamEffect__SetSurface(particles,surface,(MethodInfo *)0x0);
                pMVar9 = MethodInfo_System_Collections_Generic_List_ParticleSystem_Add;
                __this_00 = (__this->fields)._steam;
                if (__this_00 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
                  piVar1 = &(__this_00->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar8 = (__this_00->fields)._items;
                  if (pUVar8 != (UnityEngine_ParticleSystem_array *)0x0) {
                    uVar4 = (__this_00->fields)._size;
                    if (uVar4 < (uint)pUVar8->max_length) {
                      (__this_00->fields)._size = uVar4 + 1;
                      if ((uint)pUVar8->max_length <= uVar4) {
                        ThrowIndexOutOfRangeException();
                      }
                      pUVar8->m_Items[(int)uVar4] = particles;
                      Il2CppCodeGenWriteBarrier(pUVar8->m_Items + (int)uVar4,particles);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_00,
                                 (Il2CppObject *)particles,
                                 (MethodInfo_93DD50 *)pMVar9->klass->rgctx_data[0xe].method);
                    }
                    if (particles != (UnityEngine_ParticleSystem_o *)0x0) {
                      UnityEngine_ParticleSystem__Play(particles,false,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$Finish
// il2cpp: void Characters_TitanDeathDissolve__Finish (Characters_TitanDeathDissolve_o* __this, const MethodInfo* method);
// 0x1821aeaa0
// eh: try 0x1821aeb60..0x1821aebcb -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821aeba4: mov rdx, qword ptr [rip + 0x1ee129d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose
// asm:   0x1821aebab: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821aebb0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821aebb5: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821aebba: test rcx, rcx
// asm:   0x1821aebbd: jne 0x1821aebcb
// asm:   0x1821aebcb: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Characters_TitanDeathDissolve__Finish(Characters_TitanDeathDissolve_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *__this_00;
  bool bVar1;
  undefined1 local_40 [16];
  UnityEngine_ParticleSystem_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184346e5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    Il2CppMethodInitialized_184346e5b = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._finished == false) {
    (__this->fields)._finished = true;
    Characters_TitanDeathDissolve__DisableColliders(__this,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._steam;
    if (__this_00 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
      if (!bVar1) break;
      if ((UnityEngine_ParticleSystem_o *)local_28.fields._current == (UnityEngine_ParticleSystem_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_ParticleSystem__Stop
                ((UnityEngine_ParticleSystem_o *)local_28.fields._current,true,1,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
  }
  return;
}


// Characters.TitanDeathDissolve$$Update
// il2cpp: void Characters_TitanDeathDissolve__Update (Characters_TitanDeathDissolve_o* __this, float progress, const MethodInfo* method);
// 0x1821aebe0
// eh: try 0x1821aee51..0x1821af352 -> pad 0x18333f090 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 40 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821aeec0: mov edx, r13d
// asm:   0x1821aef4b: mov rdx, qword ptr [rip + 0x1ee0ef6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose
// asm:   0x1821aef52: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x1821aef57: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821aef5c: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x1821aef61: test rcx, rcx
// asm:   0x1821aef64: jne 0x1821af31e
// asm:   0x1821aef6a: xor r13d, r13d
// asm:   0x1821aef6d: movss xmm14, dword ptr [rsp + 0x258]
// asm:   0x1821aef77: mov r15, qword ptr [rsp + 0x250]
// asm:   0x1821af2a7: mov rdx, qword ptr [rip + 0x1ef8a9a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_Part_Dispose
// asm:   0x1821af2ae: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1821af2b3: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821af2b8: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1821af2bd: test rcx, rcx
// asm:   0x1821af2c0: jne 0x1821af352
// asm:   0x1821af31e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821af352: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333f090: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f095: push rbp
// asm:   0x18333f096: sub rsp, 0x50
// asm:   0x18333f09a: mov rbp, rdx
// asm:   0x18333f09d: mov rax, qword ptr [rbp + 0xf0]
// asm:   0x18333f0a4: mov rcx, qword ptr [rax]
// asm:   0x18333f0a7: mov qword ptr [rbp + 0x68], rcx
// asm:   0x18333f0ab: movabs rax, 0
// asm:   0x18333f0b5: add rsp, 0x50
// asm:   0x18333f0b9: pop rbp
// asm:   0x18333f0ba: ret 
// asm:   0x18333f0c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f0c5: push rbp
// asm:   0x18333f0c6: sub rsp, 0x50
// asm:   0x18333f0ca: mov rbp, rdx
// asm:   0x18333f0cd: mov rax, qword ptr [rbp + 0xf8]
// asm:   0x18333f0d4: mov rcx, qword ptr [rax]
// asm:   0x18333f0d7: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333f0db: movabs rax, 0
// asm:   0x18333f0e5: add rsp, 0x50
// asm:   0x18333f0e9: pop rbp
// asm:   0x18333f0ea: ret 

void Characters_TitanDeathDissolve__Update
               (Characters_TitanDeathDissolve_o *__this,float progress,MethodInfo *method)

{
  System_Collections_Generic_List_ParticleSystem__o *pSVar1;
  Characters_BasicTitan_o *pCVar2;
  System_Collections_Generic_List_TitanDeathDissolve_Part__o *__this_00;
  UnityEngine_MaterialPropertyBlock_o *pUVar3;
  UnityEngine_Mesh_o *__this_01;
  UnityEngine_Object_o *x;
  UnityEngine_ParticleSystem_c *pUVar4;
  UnityEngine_Renderer_o *pUVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  intptr_t iVar22;
  Il2CppObject *pIVar23;
  bool bVar24;
  int32_t iVar25;
  int32_t iVar26;
  UnityEngine_ParticleSystem_o *y;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Matrix4x4_o *pUVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  UnityEngine_ParticleSystem_EmissionModule_o local_res20;
  undefined1 local_1f8 [16];
  UnityEngine_ParticleSystem_o *local_1e8;
  UnityEngine_Mesh_o *local_1e0;
  System_Collections_Generic_List_Enumerator_object__o *local_1d8;
  System_Collections_Generic_List_Enumerator_object__o local_1d0;
  System_Collections_Generic_List_Enumerator_object__o local_1b8;
  UnityEngine_Material_o *local_1a0;
  UnityEngine_Matrix4x4_Fields local_198;
  UnityEngine_ParticleSystem_c *local_148;
  void *pvStack_140;
  intptr_t local_138;
  UnityEngine_ParticleSystem_c *pUStack_130;
  void *local_128;
  intptr_t iStack_120;
  UnityEngine_ParticleSystem_c *local_118;
  void *pvStack_110;
  UnityEngine_Matrix4x4_o local_108 [3];
  
  if (Il2CppMethodInitialized_184346e5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_Part_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_Part_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_Part_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Graphics);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDeathDissolve);
    Il2CppMethodInitialized_184346e5c = '\x01';
  }
  local_1d0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_1d0.fields._index = 0;
  local_1d0.fields._version = 0;
  local_1d0.fields._current = (Il2CppObject *)0x0;
  uVar30 = 0;
  local_res20.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_1b8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_1b8.fields._index = 0;
  local_1b8.fields._version = 0;
  local_1b8.fields._current = (Il2CppObject *)0x0;
  if (1.0 <= progress) {
    Characters_TitanDeathDissolve__Finish(__this,(MethodInfo *)0x0);
  }
  if ((__this->fields)._finished != false) {
    return;
  }
  fVar31 = progress / 0.08;
  if (fVar31 < 0.0) {
    fVar31 = 0.0;
  }
  else if (1.0 < fVar31) {
    fVar31 = 1.0;
  }
  fVar32 = fVar31 * 3.0 * fVar31 + fVar31 * -2.0 * fVar31 * fVar31;
  fVar31 = (progress - 0.7) / 0.3;
  if (fVar31 < 0.0) {
    fVar31 = 0.0;
  }
  else if (1.0 < fVar31) {
    fVar31 = 1.0;
  }
  fVar31 = fVar31 * 3.0 * fVar31 + fVar31 * -2.0 * fVar31 * fVar31;
  fVar31 = (1.0 - fVar31) * 0.0 + fVar31;
  if (fVar31 < 0.0) {
    fVar31 = 0.0;
  }
  else if (1.0 < fVar31) {
    fVar31 = 1.0;
  }
  pSVar1 = (__this->fields)._steam;
  if (pSVar1 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
    fVar31 = ((1.0 - fVar32) * 0.0 + fVar32) * (fVar31 * -0.65 + 1.0);
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_1f8,
               (System_Collections_Generic_List_T__o *)pSVar1,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    local_1d0.fields._list = (System_Collections_Generic_List_T__o *)local_1f8._0_8_;
    local_1d0.fields._index = local_1f8._8_4_;
    local_1d0.fields._version = local_1f8._12_4_;
    local_1d0.fields._current = (Il2CppObject *)local_1e8;
    local_1e0 = (UnityEngine_Mesh_o *)0x0;
    local_1d8 = &local_1d0;
    while( true ) {
      bVar24 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         (&local_1d0,
                          (MethodInfo_153A2A0 *)
                          MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
      pIVar23 = local_1d0.fields._current;
      if (!bVar24) break;
      if ((UnityEngine_ParticleSystem_o *)local_1d0.fields._current == (UnityEngine_ParticleSystem_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_res20.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           UnityEngine_ParticleSystem__get_noise
                     ((UnityEngine_ParticleSystem_o *)local_1d0.fields._current,(MethodInfo *)0x0);
      pCVar2 = (__this->fields)._titan;
      if (pCVar2 == (Characters_BasicTitan_o *)0x0) {
        ThrowNullReferenceException();
      }
      uVar29 = uVar30;
      if (((pCVar2->fields).EffectsEnabled != false) && ((pCVar2->fields).IsVisible != false)) {
        uVar29 = (uint)(0.0 < fVar31);
      }
      UnityEngine_ParticleSystem_EmissionModule__set_enabled(&local_res20,SUB41(uVar29,0),(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._steam;
      if (pSVar1 == (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
        ThrowNullReferenceException();
      }
      y = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar1,0,
                     (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar24 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pIVar23,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
      if (bVar24) {
        fVar32 = 80.0;
      }
      else {
        fVar32 = 42.0;
      }
      UnityEngine_ParticleSystem_EmissionModule__set_rateOverTimeMultiplier
                (&local_res20,fVar32 * fVar31,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_1d0,
               MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
    pCVar2 = (__this->fields)._titan;
    if (pCVar2 != (Characters_BasicTitan_o *)0x0) {
      if ((pCVar2->fields).IsVisible == false) {
        return;
      }
      __this_02 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_Transform_o *)0x0) {
        pUVar27 = UnityEngine_Transform__get_localToWorldMatrix
                            ((UnityEngine_Matrix4x4_o *)&local_198,__this_02,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._parts;
        if (__this_00 != (System_Collections_Generic_List_TitanDeathDissolve_Part__o *)0x0) {
          uVar6._0_4_ = (pUVar27->fields).m00;
          uVar6._4_4_ = (pUVar27->fields).m10;
          uVar7._0_4_ = (pUVar27->fields).m20;
          uVar7._4_4_ = (pUVar27->fields).m30;
          uVar8._0_4_ = (pUVar27->fields).m01;
          uVar8._4_4_ = (pUVar27->fields).m11;
          uVar9._0_4_ = (pUVar27->fields).m21;
          uVar9._4_4_ = (pUVar27->fields).m31;
          uVar10._0_4_ = (pUVar27->fields).m02;
          uVar10._4_4_ = (pUVar27->fields).m12;
          uVar11._0_4_ = (pUVar27->fields).m22;
          uVar11._4_4_ = (pUVar27->fields).m32;
          uVar12._0_4_ = (pUVar27->fields).m03;
          uVar12._4_4_ = (pUVar27->fields).m13;
          uVar13._0_4_ = (pUVar27->fields).m23;
          uVar13._4_4_ = (pUVar27->fields).m33;
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_1f8,
                     (System_Collections_Generic_List_T__o *)__this_00,
                     (MethodInfo_91F180 *)
                     MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_GetEnumerator);
          local_1b8.fields._list = (System_Collections_Generic_List_T__o *)local_1f8._0_8_;
          local_1b8.fields._index = local_1f8._8_4_;
          local_1b8.fields._version = local_1f8._12_4_;
          local_1b8.fields._current = (Il2CppObject *)local_1e8;
          local_1f8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_1f8._8_8_ = &local_1b8;
          do {
            bVar24 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&local_1b8,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_Part_MoveNext
                               );
            pIVar23 = local_1b8.fields._current;
            if (!bVar24) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_1b8,
                         MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_Part_Dispose
                        );
              return;
            }
            if ((UnityEngine_ParticleSystem_o *)local_1b8.fields._current ==
                (UnityEngine_ParticleSystem_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar3 = ((UnityEngine_ParticleSystem_o *)((longlong)local_1b8.fields._current + 0x18))->monitor;
            if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
            }
            if (pUVar3 == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_MaterialPropertyBlock__SetFloat_2edfd40
                      (pUVar3,TypeInfo_Characters_TitanDeathDissolve->static_fields->Dissolve,progress,
                       (MethodInfo *)0x0);
            uVar29 = uVar30;
            while( true ) {
              __this_01 = (UnityEngine_Mesh_o *)
                          ((UnityEngine_ParticleSystem_Fields *)((longlong)pIVar23 + 0x10))->m_CachedPtr;
              if (__this_01 == (UnityEngine_Mesh_o *)0x0) {
                ThrowNullReferenceException();
              }
              iVar25 = UnityEngine_Mesh__get_subMeshCount(__this_01,(MethodInfo *)0x0);
              if (((UnityEngine_ParticleSystem_o *)((longlong)pIVar23 + 0x18))->klass ==
                  (UnityEngine_ParticleSystem_c *)0x0) {
                ThrowNullReferenceException();
              }
              iVar28 = *(int *)&(((UnityEngine_ParticleSystem_o *)((longlong)pIVar23 + 0x18))->klass->_1).
                                namespaze;
              if (iVar25 < iVar28) {
                iVar28 = iVar25;
              }
              if (iVar28 <= (int)uVar29) break;
              if (*(uint *)&(((UnityEngine_ParticleSystem_o *)((longlong)pIVar23 + 0x18))->klass->_1).
                            namespaze <= uVar29) {
                ThrowIndexOutOfRangeException();
              }
              x = (&(((UnityEngine_ParticleSystem_o *)((longlong)pIVar23 + 0x18))->klass->_1).byval_arg.data)
                  [(int)uVar29];
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar24 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar24) {
                local_148 = ((UnityEngine_ParticleSystem_o *)((longlong)pIVar23 + 0x30))->klass;
                pvStack_140 = ((UnityEngine_ParticleSystem_o *)((longlong)pIVar23 + 0x30))->monitor;
                local_138 = (((UnityEngine_ParticleSystem_o *)((longlong)pIVar23 + 0x30))->fields).m_CachedPtr
                ;
                pUStack_130 = ((UnityEngine_ParticleSystem_o *)((longlong)pIVar23 + 0x48))->klass;
                local_128 = ((UnityEngine_ParticleSystem_o *)((longlong)pIVar23 + 0x48))->monitor;
                iStack_120 = (((UnityEngine_ParticleSystem_o *)((longlong)pIVar23 + 0x48))->fields).
                             m_CachedPtr;
                local_118 = ((UnityEngine_ParticleSystem_o *)((longlong)pIVar23 + 0x60))->klass;
                pvStack_110 = ((UnityEngine_ParticleSystem_o *)((longlong)pIVar23 + 0x60))->monitor;
                local_198._0_8_ = uVar6;
                local_198._8_8_ = uVar7;
                local_198._16_8_ = uVar8;
                local_198._24_8_ = uVar9;
                local_198._32_8_ = uVar10;
                local_198._40_8_ = uVar11;
                local_198._48_8_ = uVar12;
                local_198._56_8_ = uVar13;
                pUVar27 = UnityEngine_Matrix4x4__op_Multiply
                                    (local_108,(UnityEngine_Matrix4x4_o *)&local_198,
                                     (UnityEngine_Matrix4x4_o *)&local_148,(MethodInfo *)0x0);
                pUVar4 = ((UnityEngine_ParticleSystem_o *)((longlong)pIVar23 + 0x18))->klass;
                if (pUVar4 == (UnityEngine_ParticleSystem_c *)0x0) {
                  ThrowNullReferenceException();
                }
                if (*(uint *)&(pUVar4->_1).namespaze <= uVar29) {
                  ThrowIndexOutOfRangeException();
                }
                pUVar5 = (UnityEngine_Renderer_o *)(__this->fields)._bodyRenderer;
                if (pUVar5 == (UnityEngine_Renderer_o *)0x0) {
                  ThrowNullReferenceException();
                }
                local_1e0 = (UnityEngine_Mesh_o *)
                            ((UnityEngine_ParticleSystem_Fields *)((longlong)pIVar23 + 0x10))->m_CachedPtr;
                uVar14._0_4_ = (pUVar27->fields).m00;
                uVar14._4_4_ = (pUVar27->fields).m10;
                uVar15._0_4_ = (pUVar27->fields).m20;
                uVar15._4_4_ = (pUVar27->fields).m30;
                uVar16._0_4_ = (pUVar27->fields).m01;
                uVar16._4_4_ = (pUVar27->fields).m11;
                uVar17._0_4_ = (pUVar27->fields).m21;
                uVar17._4_4_ = (pUVar27->fields).m31;
                uVar18._0_4_ = (pUVar27->fields).m02;
                uVar18._4_4_ = (pUVar27->fields).m12;
                uVar19._0_4_ = (pUVar27->fields).m22;
                uVar19._4_4_ = (pUVar27->fields).m32;
                uVar20._0_4_ = (pUVar27->fields).m03;
                uVar20._4_4_ = (pUVar27->fields).m13;
                uVar21._0_4_ = (pUVar27->fields).m23;
                uVar21._4_4_ = (pUVar27->fields).m33;
                local_1a0 = (&(pUVar4->_1).byval_arg.data)[(int)uVar29];
                iVar22 = (((UnityEngine_ParticleSystem_o *)((longlong)pIVar23 + 0x18))->fields).m_CachedPtr;
                pUVar3 = ((UnityEngine_ParticleSystem_o *)((longlong)pIVar23 + 0x18))->monitor;
                iVar26 = UnityEngine_Renderer__get_shadowCastingMode(pUVar5,(MethodInfo *)0x0);
                iVar25 = 0;
                if (iVar26 != 0) {
                  iVar25 = *(int32_t *)
                            ((longlong)
                             &(((UnityEngine_ParticleSystem_o *)((longlong)pIVar23 + 0x18))->fields).
                              m_CachedPtr + 4);
                }
                pUVar5 = (UnityEngine_Renderer_o *)(__this->fields)._bodyRenderer;
                if (pUVar5 == (UnityEngine_Renderer_o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar24 = UnityEngine_Renderer__get_receiveShadows(pUVar5,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Graphics->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Graphics);
                }
                local_198._0_8_ = uVar14;
                local_198._8_8_ = uVar15;
                local_198._16_8_ = uVar16;
                local_198._24_8_ = uVar17;
                local_198._32_8_ = uVar18;
                local_198._40_8_ = uVar19;
                local_198._48_8_ = uVar20;
                local_198._56_8_ = uVar21;
                UnityEngine_Graphics__DrawMesh_2ec99e0
                          (local_1e0,(UnityEngine_Matrix4x4_o *)&local_198,local_1a0,(int32_t)iVar22,
                           (UnityEngine_Camera_o *)0x0,uVar29,pUVar3,iVar25,bVar24,(MethodInfo *)0x0);
              }
              uVar29 = uVar29 + 1;
            }
          } while( true );
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$DisableColliders
// il2cpp: void Characters_TitanDeathDissolve__DisableColliders (Characters_TitanDeathDissolve_o* __this, const MethodInfo* method);
// 0x1821ae400
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ae629: mov rdi, qword ptr [rsp + 0x48]

void Characters_TitanDeathDissolve__DisableColliders
               (Characters_TitanDeathDissolve_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  Characters_BaseMovementSync_o *pCVar3;
  Characters_TitanColliderToggler_o *__this_00;
  UnityEngine_Rigidbody_o *pUVar4;
  bool bVar5;
  System_Object_array *pSVar6;
  uint uVar7;
  UnityEngine_Rigidbody_o *local_res8;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184346e5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Collider_40ab978);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e5d = '\x01';
  }
  local_res8 = (UnityEngine_Rigidbody_o *)0x0;
  if ((__this->fields)._CollidersDisabled_k__BackingField != false) {
    return;
  }
  pCVar1 = (__this->fields)._titan;
  (__this->fields)._CollidersDisabled_k__BackingField = true;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_1821ae63a;
  bVar5 = UnityEngine_Component__TryGetComponent_object_
                    ((UnityEngine_Component_o *)pCVar1,(Il2CppObject **)&local_res8,
                     (MethodInfo_6657C0 *)MethodInfo_UnityEngine_Component_TryGetComponent_Rigidbody);
  if (bVar5) {
    if (local_res8 == (UnityEngine_Rigidbody_o *)0x0) goto label_1821ae63a;
    bVar5 = UnityEngine_Rigidbody__get_isKinematic(local_res8,(MethodInfo *)0x0);
    pUVar4 = local_res8;
    if (!bVar5) {
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      if (pUVar4 == (UnityEngine_Rigidbody_o *)0x0) goto label_1821ae63a;
      pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_18.x = (pUVar2->zeroVector).fields.x;
      local_18.y = (pUVar2->zeroVector).fields.y;
      local_18.z = (pUVar2->zeroVector).fields.z;
      UnityEngine_Rigidbody__set_linearVelocity(pUVar4,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      pUVar4 = local_res8;
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      if (pUVar4 == (UnityEngine_Rigidbody_o *)0x0) goto label_1821ae63a;
      pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_18.x = (pUVar2->zeroVector).fields.x;
      local_18.y = (pUVar2->zeroVector).fields.y;
      local_18.z = (pUVar2->zeroVector).fields.z;
      UnityEngine_Rigidbody__set_angularVelocity(pUVar4,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    }
    if (local_res8 == (UnityEngine_Rigidbody_o *)0x0) goto label_1821ae63a;
    UnityEngine_Rigidbody__set_isKinematic(local_res8,true,(MethodInfo *)0x0);
  }
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    pCVar3 = (pCVar1->fields).MovementSync;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pCVar1 = (__this->fields)._titan;
      if ((pCVar1 == (Characters_BasicTitan_o *)0x0) ||
         (pCVar3 = (pCVar1->fields).MovementSync, pCVar3 == (Characters_BaseMovementSync_o *)0x0))
      goto label_1821ae63a;
      (pCVar3->fields).Disabled = true;
    }
    pCVar1 = (__this->fields)._titan;
    if ((pCVar1 != (Characters_BasicTitan_o *)0x0) &&
       (__this_00 = (pCVar1->fields).TitanColliderToggler,
       __this_00 != (Characters_TitanColliderToggler_o *)0x0)) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._titan;
      if ((pCVar1 != (Characters_BasicTitan_o *)0x0) &&
         (pSVar6 = UnityEngine_Component__GetComponentsInChildren_object_
                             ((UnityEngine_Component_o *)pCVar1,true,
                              (MethodInfo_665440 *)
                              MethodInfo_UnityEngine_Component_GetComponentsInChildren_Collider_40ab978),
         pSVar6 != (System_Object_array *)0x0)) {
        uVar7 = 0;
        while( true ) {
          if ((int)pSVar6->max_length <= (int)uVar7) {
            return;
          }
          if ((uint)pSVar6->max_length <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          if ((UnityEngine_Collider_o *)pSVar6->m_Items[(int)uVar7] == (UnityEngine_Collider_o *)0x0) break;
          UnityEngine_Collider__set_enabled
                    ((UnityEngine_Collider_o *)pSVar6->m_Items[(int)uVar7],false,(MethodInfo *)0x0);
          uVar7 = uVar7 + 1;
        }
      }
    }
  }
label_1821ae63a:
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$Dispose
// il2cpp: void Characters_TitanDeathDissolve__Dispose (Characters_TitanDeathDissolve_o* __this, const MethodInfo* method);
// 0x1821ae640
// eh: try 0x1821ae7a0..0x1821aea84 -> pad 0x183318130 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 61 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ae828: mov rdx, qword ptr [rip + 0x1ee1619]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose
// asm:   0x1821ae82f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821ae834: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821ae839: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1821ae83e: test rcx, rcx
// asm:   0x1821ae841: jne 0x1821aea84
// asm:   0x1821ae847: xor r14d, r14d
// asm:   0x1821ae84a: mov rsi, qword ptr [rsp + 0xd0]
// asm:   0x1821ae90c: mov rdx, qword ptr [rip + 0x1ededd5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_Dispose
// asm:   0x1821ae913: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821ae918: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821ae91d: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1821ae922: test rcx, rcx
// asm:   0x1821ae925: jne 0x1821aea8a
// asm:   0x1821ae92b: xor r14d, r14d
// asm:   0x1821ae92e: mov rsi, qword ptr [rsp + 0xd0]
// asm:   0x1821ae979: nop dword ptr [rax]
// asm:   0x1821ae9cc: mov rdx, qword ptr [rip + 0x1eddff5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x1821ae9d3: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821ae9d8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821ae9dd: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1821ae9e2: test rcx, rcx
// asm:   0x1821ae9e5: jne 0x1821aea90
// asm:   0x1821ae9eb: xor r14d, r14d
// asm:   0x1821ae9ee: mov rsi, qword ptr [rsp + 0xd0]
// asm:   0x1821aea84: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821aea8a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821aea90: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318130: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318135: push rbp
// asm:   0x183318136: sub rsp, 0x20
// asm:   0x18331813a: mov rbp, rdx
// asm:   0x18331813d: mov rax, qword ptr [rbp + 0x80]
// asm:   0x183318144: mov rcx, qword ptr [rax]
// asm:   0x183318147: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18331814b: movabs rax, 0
// asm:   0x183318155: add rsp, 0x20
// asm:   0x183318159: pop rbp
// asm:   0x18331815a: ret 
// asm:   0x183320de0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320de5: push rbp
// asm:   0x183320de6: sub rsp, 0x20
// asm:   0x183320dea: mov rbp, rdx
// asm:   0x183320ded: mov rax, qword ptr [rbp + 0x88]
// asm:   0x183320df4: mov rcx, qword ptr [rax]
// asm:   0x183320df7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183320dfb: movabs rax, 0
// asm:   0x183320e05: add rsp, 0x20
// asm:   0x183320e09: pop rbp
// asm:   0x183320e0a: ret 
// asm:   0x183324460: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324465: push rbp
// asm:   0x183324466: sub rsp, 0x20
// asm:   0x18332446a: mov rbp, rdx
// asm:   0x18332446d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183324474: mov rcx, qword ptr [rax]
// asm:   0x183324477: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18332447b: movabs rax, 0
// asm:   0x183324485: add rsp, 0x20
// asm:   0x183324489: pop rbp
// asm:   0x18332448a: ret 

void Characters_TitanDeathDissolve__Dispose(Characters_TitanDeathDissolve_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_ParticleSystem__o *pSVar3;
  System_Collections_Generic_List_Mesh__o *pSVar4;
  System_Collections_Generic_List_Material__o *pSVar5;
  System_Collections_Generic_List_TitanDeathDissolve_Part__o *pSVar6;
  bool bVar7;
  UnityEngine_Object_o *pUVar8;
  undefined1 local_a8 [16];
  UnityEngine_Object_o *local_98;
  undefined1 local_90 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_88;
  UnityEngine_Object_o *local_80;
  undefined1 local_78 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_70;
  UnityEngine_Object_o *local_68;
  undefined1 local_60 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_58;
  UnityEngine_Object_o *local_50;
  
  if (Il2CppMethodInitialized_184346e5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_GetEnumerator)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e5e = '\x01';
  }
  local_90 = (undefined1  [8])0x0;
  pUStack_88 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_80 = (UnityEngine_Object_o *)0x0;
  local_78 = (undefined1  [8])0x0;
  pUStack_70 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_68 = (UnityEngine_Object_o *)0x0;
  local_60 = (undefined1  [8])0x0;
  pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_50 = (UnityEngine_Object_o *)0x0;
  pSVar3 = (__this->fields)._steam;
  if (pSVar3 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
               (System_Collections_Generic_List_T__o *)pSVar3,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    local_90 = (undefined1  [8])local_a8._0_8_;
    pUStack_88 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8._8_8_;
    local_80 = local_98;
    local_a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_a8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_90;
    while( true ) {
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_90,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
      pUVar8 = local_80;
      if (!bVar7) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar7) {
        if (pUVar8 == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar8 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar8,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_90,
               MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
    pSVar3 = (__this->fields)._steam;
    if (pSVar3 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar2 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < iVar2) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      pSVar4 = (__this->fields)._meshes;
      if (pSVar4 != (System_Collections_Generic_List_Mesh__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
                   (System_Collections_Generic_List_T__o *)pSVar4,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Mesh_GetEnumerator);
        local_78 = (undefined1  [8])local_a8._0_8_;
        pUStack_70 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8._8_8_;
        local_68 = local_98;
        local_a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_a8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78;
        while( true ) {
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_MoveNext);
          pUVar8 = local_68;
          if (!bVar7) break;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_2f1ff70(pUVar8,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78,
                   MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_Dispose);
        pSVar5 = (__this->fields)._materials;
        if (pSVar5 != (System_Collections_Generic_List_Material__o *)0x0) {
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
                     (System_Collections_Generic_List_T__o *)pSVar5,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
          local_60 = (undefined1  [8])local_a8._0_8_;
          pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8._8_8_;
          local_50 = local_98;
          local_a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_a8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60;
          while( true ) {
            bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_60,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
            pUVar8 = local_50;
            if (!bVar7) break;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__Destroy_2f1ff70(pUVar8,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
                     MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
          pSVar6 = (__this->fields)._parts;
          if (pSVar6 != (System_Collections_Generic_List_TitanDeathDissolve_Part__o *)0x0) {
            piVar1 = &(pSVar6->fields)._version;
            *piVar1 = *piVar1 + 1;
            iVar2 = (pSVar6->fields)._size;
            (pSVar6->fields)._size = 0;
            if (0 < iVar2) {
              System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar2,(MethodInfo *)0x0);
            }
            pSVar4 = (__this->fields)._meshes;
            if (pSVar4 != (System_Collections_Generic_List_Mesh__o *)0x0) {
              piVar1 = &(pSVar4->fields)._version;
              *piVar1 = *piVar1 + 1;
              iVar2 = (pSVar4->fields)._size;
              (pSVar4->fields)._size = 0;
              if (0 < iVar2) {
                System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
              }
              pSVar5 = (__this->fields)._materials;
              if (pSVar5 != (System_Collections_Generic_List_Material__o *)0x0) {
                piVar1 = &(pSVar5->fields)._version;
                *piVar1 = *piVar1 + 1;
                iVar2 = (pSVar5->fields)._size;
                (pSVar5->fields)._size = 0;
                if (0 < iVar2) {
                  System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar2,(MethodInfo *)0x0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanDeathDissolve$$.cctor
// il2cpp: void Characters_TitanDeathDissolve___cctor (const MethodInfo* method);
// 0x1821af360

void Characters_TitanDeathDissolve___cctor(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184346e5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDeathDissolve);
    il2cpp_codegen_initialize_runtime_metadata(&"_Dissolve");
    Il2CppMethodInitialized_184346e5f = '\x01';
  }
  iVar1 = UnityEngine_Shader__PropertyToID("_Dissolve",(MethodInfo *)0x0);
  TypeInfo_Characters_TitanDeathDissolve->static_fields->Dissolve = iVar1;
  return;
}


