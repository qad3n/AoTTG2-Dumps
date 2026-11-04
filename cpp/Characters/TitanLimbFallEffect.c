// Type: Characters.TitanLimbFallEffect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Characters/TitanLimbFallEffect.cs
// Prior real C# source: none
// --------------------------------

// Characters.TitanLimbFallEffect.Attachment$$.ctor
// il2cpp: void Characters_TitanLimbFallEffect_Attachment___ctor (Characters_TitanLimbFallEffect_Attachment_o* __this, UnityEngine_Mesh_o* mesh, UnityEngine_Matrix4x4_o matrix, bool ownsMesh, const MethodInfo* method);
// 0x18219b740

void Characters_TitanLimbFallEffect_Attachment___ctor
               (Characters_TitanLimbFallEffect_Attachment_o *__this,UnityEngine_Mesh_o *mesh,
               UnityEngine_Matrix4x4_o *matrix,bool ownsMesh,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  System_Collections_Generic_List_Material__o *__this_00;
  UnityEngine_MaterialPropertyBlock_o *__this_01;
  
  if (Il2CppMethodInitialized_184346e75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MaterialPropertyBlock);
    Il2CppMethodInitialized_184346e75 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  (__this->fields).Materials = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Materials,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
  UnityEngine_MaterialPropertyBlock___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields).Properties = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Properties,__this_01);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Mesh = mesh;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Mesh,mesh);
  fVar1 = (matrix->fields).m00;
  fVar2 = (matrix->fields).m10;
  fVar3 = (matrix->fields).m20;
  fVar4 = (matrix->fields).m30;
  (__this->fields)._ownsMesh = ownsMesh;
  fVar5 = (matrix->fields).m01;
  fVar6 = (matrix->fields).m11;
  fVar7 = (matrix->fields).m21;
  fVar8 = (matrix->fields).m31;
  (__this->fields).Matrix.fields.m00 = fVar1;
  (__this->fields).Matrix.fields.m10 = fVar2;
  (__this->fields).Matrix.fields.m20 = fVar3;
  (__this->fields).Matrix.fields.m30 = fVar4;
  fVar1 = (matrix->fields).m02;
  fVar2 = (matrix->fields).m12;
  fVar3 = (matrix->fields).m22;
  fVar4 = (matrix->fields).m32;
  (__this->fields).Matrix.fields.m01 = fVar5;
  (__this->fields).Matrix.fields.m11 = fVar6;
  (__this->fields).Matrix.fields.m21 = fVar7;
  (__this->fields).Matrix.fields.m31 = fVar8;
  fVar5 = (matrix->fields).m03;
  fVar6 = (matrix->fields).m13;
  fVar7 = (matrix->fields).m23;
  fVar8 = (matrix->fields).m33;
  (__this->fields).Matrix.fields.m02 = fVar1;
  (__this->fields).Matrix.fields.m12 = fVar2;
  (__this->fields).Matrix.fields.m22 = fVar3;
  (__this->fields).Matrix.fields.m32 = fVar4;
  (__this->fields).Matrix.fields.m03 = fVar5;
  (__this->fields).Matrix.fields.m13 = fVar6;
  (__this->fields).Matrix.fields.m23 = fVar7;
  (__this->fields).Matrix.fields.m33 = fVar8;
  return;
}


// Characters.TitanLimbFallEffect.Attachment$$Dispose
// il2cpp: void Characters_TitanLimbFallEffect_Attachment__Dispose (Characters_TitanLimbFallEffect_Attachment_o* __this, const MethodInfo* method);
// 0x18219b5e0
// eh: try 0x18219b6c0..0x18219b6fb -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18219b70c: mov rdx, qword ptr [rip + 0x1ef12b5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x18219b713: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18219b718: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18219b71d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18219b722: test rcx, rcx
// asm:   0x18219b725: jne 0x18219b732
// asm:   0x18219b732: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_TitanLimbFallEffect_Attachment__Dispose
               (Characters_TitanLimbFallEffect_Attachment_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  System_Collections_Generic_List_Material__o *__this_00;
  Il2CppObject *obj_00;
  bool bVar1;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184346e76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e76 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._ownsMesh != false) {
    obj = (UnityEngine_Object_o *)(__this->fields).Mesh;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).Materials;
  if (__this_00 != (System_Collections_Generic_List_Material__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
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
                         MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
      obj_00 = local_28.fields._current;
      if (!bVar1) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)obj_00,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect.<>c$$.cctor
// il2cpp: void Characters_TitanLimbFallEffect___c___cctor (const MethodInfo* method);
// 0x1821b7cc0

void Characters_TitanLimbFallEffect___c___cctor(MethodInfo *method)

{
  Characters_TitanLimbFallEffect___c_o *__this;
  
  if (Il2CppMethodInitialized_184346e77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect_c);
    Il2CppMethodInitialized_184346e77 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Characters_TitanLimbFallEffect_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanLimbFallEffect_c->static_fields->__9,__this);
  return;
}


// Characters.TitanLimbFallEffect.<>c$$.ctor
// il2cpp: void Characters_TitanLimbFallEffect___c___ctor (Characters_TitanLimbFallEffect___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Characters_TitanLimbFallEffect___c___ctor(Characters_TitanLimbFallEffect___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.TitanLimbFallEffect.<>c$$<Play>b__51_0
// il2cpp: bool Characters_TitanLimbFallEffect___c___Play_b__51_0 (Characters_TitanLimbFallEffect___c_o* __this, Characters_TitanLimbFallEffect_o* piece, const MethodInfo* method);
// 0x1821b7c80

bool Characters_TitanLimbFallEffect___c___Play_b__51_0
               (Characters_TitanLimbFallEffect___c_o *__this,Characters_TitanLimbFallEffect_o *piece,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  if (piece != (Characters_TitanLimbFallEffect_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)piece,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      return !bVar1;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$PlayHead
// il2cpp: void Characters_TitanLimbFallEffect__PlayHead (UnityEngine_SkinnedMeshRenderer_o* source, UnityEngine_Transform_o* head, UnityEngine_Vector3_o velocity, UnityEngine_ParticleSystem_o* neckBlood, float dissolveDelay, const MethodInfo* method);
// 0x1821b4be0

void Characters_TitanLimbFallEffect__PlayHead
               (UnityEngine_SkinnedMeshRenderer_o *source,UnityEngine_Transform_o *head,
               UnityEngine_Vector3_o *velocity,UnityEngine_ParticleSystem_o *neckBlood,float dissolveDelay,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Mesh_o *limb;
  Characters_TitanLimbFallEffect_o *__this;
  UnityEngine_Vector3_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184346e61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    Il2CppMethodInitialized_184346e61 = '\x01';
  }
  if (source != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
    limb = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(source,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
    }
    local_38[0].x = (velocity->fields).x;
    local_38[0].y = (velocity->fields).y;
    local_38[0].z = (velocity->fields).z;
    __this = Characters_TitanLimbFallEffect__Play
                       (source,limb,(UnityEngine_Material_o *)0x0,(UnityEngine_Mesh_o *)0x0,0.0,
                        (UnityEngine_Vector3_o *)local_38,head,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (__this == (Characters_TitanLimbFallEffect_o *)0x0) goto label_1821b4d1b;
      (__this->fields)._dissolveDelay = dissolveDelay;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)neckBlood,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        Characters_TitanLimbFallEffect__PlayBlood(__this,neckBlood,head,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_1821b4d1b:
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$Play
// il2cpp: Characters_TitanLimbFallEffect_o* Characters_TitanLimbFallEffect__Play (UnityEngine_SkinnedMeshRenderer_o* source, UnityEngine_Mesh_o* limb, UnityEngine_Material_o* wound, UnityEngine_Mesh_o* growth, float progress, UnityEngine_Vector3_o velocity, UnityEngine_Transform_o* attachments, const MethodInfo* method);
// 0x1821b4d30

Characters_TitanLimbFallEffect_o *
Characters_TitanLimbFallEffect__Play
          (UnityEngine_SkinnedMeshRenderer_o *source,UnityEngine_Mesh_o *limb,UnityEngine_Material_o *wound,
          UnityEngine_Mesh_o *growth,float progress,UnityEngine_Vector3_o *velocity,
          UnityEngine_Transform_o *attachments,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_TitanLimbFallEffect__o *pSVar3;
  Il2CppObject *object;
  Characters_TitanLimbFallEffect_array *pCVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Shader_o *value;
  System_Predicate_T__o *match;
  UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_Fields __this;
  UnityEngine_Object_o *pUVar8;
  UnityEngine_MaterialPropertyBlock_o *pUVar9;
  UnityEngine_Vector3_Fields local_28;
  
  if (Il2CppMethodInitialized_184346e62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TitanLimbFallEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Find);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MaterialPropertyBlock);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_TitanLimbFallEffect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Shader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Characters_TitanLimbFallEffect_c_Play_b__51_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Falling titan limb");
    il2cpp_codegen_initialize_runtime_metadata(&"Shaders/TitanDissolve");
    Il2CppMethodInitialized_184346e62 = '\x01';
  }
  if (source != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
    bVar6 = UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)source,(MethodInfo *)0x0);
    if (!bVar6) {
      return (Characters_TitanLimbFallEffect_o *)0x0;
    }
    pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
      bVar6 = UnityEngine_GameObject__get_activeInHierarchy(pUVar7,(MethodInfo *)0x0);
      if (!bVar6) {
        return (Characters_TitanLimbFallEffect_o *)0x0;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)limb,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar6) {
        return (Characters_TitanLimbFallEffect_o *)0x0;
      }
      if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
      }
      pUVar8 = (UnityEngine_Object_o *)TypeInfo_Characters_TitanLimbFallEffect->static_fields->_shader;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar6) {
        value = UnityEngine_Resources__Load_object_
                          ("Shaders/TitanDissolve",
                           (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Shader);
        if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
        }
        TypeInfo_Characters_TitanLimbFallEffect->static_fields->_shader = value;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanLimbFallEffect->static_fields->_shader,value);
      }
      if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
      }
      pUVar8 = (UnityEngine_Object_o *)TypeInfo_Characters_TitanLimbFallEffect->static_fields->_shader;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar6) {
        return (Characters_TitanLimbFallEffect_o *)0x0;
      }
      if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
      }
      pSVar3 = TypeInfo_Characters_TitanLimbFallEffect->static_fields->Pool;
      if ((TypeInfo_Characters_TitanLimbFallEffect_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect_c);
      }
      match = (System_Predicate_T__o *)TypeInfo_Characters_TitanLimbFallEffect_c->static_fields->__9__51_0;
      if (match == (System_Predicate_T__o *)0x0) {
        if ((TypeInfo_Characters_TitanLimbFallEffect_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect_c);
        }
        object = (Il2CppObject *)TypeInfo_Characters_TitanLimbFallEffect_c->static_fields->__9;
        match = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_TitanLimbFallEffect);
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)match,object,
                   (intptr_t)MethodInfo_Characters_TitanLimbFallEffect_c_Play_b__51_0,(MethodInfo_B61EB0 *)0x0
                  );
        TypeInfo_Characters_TitanLimbFallEffect_c->static_fields->__9__51_0 =
             (System_Predicate_TitanLimbFallEffect__o *)match;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanLimbFallEffect_c->static_fields->__9__51_0,match);
      }
      if (pSVar3 != (System_Collections_Generic_List_TitanLimbFallEffect__o *)0x0) {
        __this = (UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_Fields)
                 System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___Find
                           ((System_Collections_Generic_List_T__o *)pSVar3,match,
                            (MethodInfo_91E910 *)
                            MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Find);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
          }
          pSVar3 = TypeInfo_Characters_TitanLimbFallEffect->static_fields->Pool;
          if (pSVar3 == (System_Collections_Generic_List_TitanLimbFallEffect__o *)0x0) goto label_1821b52fe;
          if (0x17 < (pSVar3->fields)._size) {
            return (Characters_TitanLimbFallEffect_o *)0x0;
          }
          pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
          UnityEngine_GameObject___ctor(pUVar7,"Falling titan limb",(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_1821b52fe;
          __this = (UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_Fields)
                   UnityEngine_GameObject__AddComponent_object_
                             (pUVar7,(MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_TitanLimbFallEffect);
          pUVar8 = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh)
          ;
          UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pUVar8,(MethodInfo *)0x0);
          if ((pUVar8 == (UnityEngine_Object_o *)0x0) ||
             (UnityEngine_Object__set_name(pUVar8,"Falling titan limb",(MethodInfo *)0x0),
             __this == (UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_Fields)0x0))
          goto label_1821b52fe;
          *(UnityEngine_Object_o **)((longlong)__this + 0x78) = pUVar8;
          Il2CppCodeGenWriteBarrier((void **)((longlong)__this + 0x78),pUVar8);
          pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
          UnityEngine_MaterialPropertyBlock___ctor(pUVar9,(MethodInfo *)0x0);
          *(UnityEngine_MaterialPropertyBlock_o **)((longlong)__this + 0x68) = pUVar9;
          Il2CppCodeGenWriteBarrier((void **)((longlong)__this + 0x68),pUVar9);
          pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
          UnityEngine_MaterialPropertyBlock___ctor(pUVar9,(MethodInfo *)0x0);
          *(UnityEngine_MaterialPropertyBlock_o **)((longlong)__this + 0x70) = pUVar9;
          Il2CppCodeGenWriteBarrier((void **)((longlong)__this + 0x70),pUVar9);
          if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
          }
          pMVar5 = MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Add;
          pSVar3 = TypeInfo_Characters_TitanLimbFallEffect->static_fields->Pool;
          if (pSVar3 == (System_Collections_Generic_List_TitanLimbFallEffect__o *)0x0) goto label_1821b52fe;
          piVar1 = &(pSVar3->fields)._version;
          *piVar1 = *piVar1 + 1;
          pCVar4 = (pSVar3->fields)._items;
          if (pCVar4 == (Characters_TitanLimbFallEffect_array *)0x0) goto label_1821b52fe;
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pCVar4->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            if ((uint)pCVar4->max_length <= uVar2) {
              ThrowIndexOutOfRangeException();
            }
            *(UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_Fields *)
             (pCVar4->m_Items + (int)uVar2) = __this;
            Il2CppCodeGenWriteBarrier(pCVar4->m_Items + (int)uVar2,(void *)__this);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this,
                       (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          }
        }
        else if (__this == (UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_Fields)0x0)
        goto label_1821b52fe;
        local_28.x = (velocity->fields).x;
        local_28.y = (velocity->fields).y;
        local_28.z = (velocity->fields).z;
        Characters_TitanLimbFallEffect__Initialize
                  ((Characters_TitanLimbFallEffect_o *)__this,source,limb,wound,growth,progress,
                   (UnityEngine_Vector3_o *)&local_28,attachments,(MethodInfo *)0x0);
        pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
          return (Characters_TitanLimbFallEffect_o *)__this;
        }
      }
    }
  }
label_1821b52fe:
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$PlayBlood
// il2cpp: void Characters_TitanLimbFallEffect__PlayBlood (Characters_TitanLimbFallEffect_o* __this, UnityEngine_ParticleSystem_o* neckBlood, UnityEngine_Transform_o* head, const MethodInfo* method);
// 0x1821b46f0

void Characters_TitanLimbFallEffect__PlayBlood
               (Characters_TitanLimbFallEffect_o *__this,UnityEngine_ParticleSystem_o *neckBlood,
               UnityEngine_Transform_o *head,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  UnityEngine_Vector3_StaticFields *pUVar14;
  bool bVar15;
  UnityEngine_GameObject_o *pUVar16;
  UnityEngine_Transform_o *pUVar17;
  UnityEngine_ParticleSystem_o *pUVar18;
  UnityEngine_Vector3_o *pUVar19;
  UnityEngine_Quaternion_o *pUVar20;
  UnityEngine_Transform_o *pUVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  UnityEngine_Quaternion_Fields local_d8;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Quaternion_o local_b8 [10];
  
  if (Il2CppMethodInitialized_184346e63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_GameObject_40a9800);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e63 = '\x01';
  }
  pUVar18 = (__this->fields)._blood;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar15 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar15) {
    if (neckBlood == (UnityEngine_ParticleSystem_o *)0x0) goto label_1821b4bd1;
    pUVar16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)neckBlood,(MethodInfo *)0x0);
    pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pUVar16 = UnityEngine_Object__Instantiate_object__746ab0
                        ((Il2CppObject *)pUVar16,pUVar17,
                         (MethodInfo_746AB0 *)MethodInfo_UnityEngine_Object_Instantiate_GameObject_40a9800);
    if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_1821b4bd1;
    pUVar18 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar16,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem);
    (__this->fields)._blood = pUVar18;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._blood,pUVar18);
  }
  if (head != (UnityEngine_Transform_o *)0x0) {
    pUVar19 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_c8,head,(MethodInfo *)0x0);
    uVar6 = (pUVar19->fields).x;
    uVar10 = (pUVar19->fields).y;
    fVar25 = (pUVar19->fields).z;
    pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
      pUVar19 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_c8,pUVar17,(MethodInfo *)0x0);
      pUVar18 = (__this->fields)._blood;
      uVar7 = (pUVar19->fields).x;
      uVar11 = (pUVar19->fields).y;
      fVar23 = (float)uVar6 - (float)uVar7;
      fVar24 = (float)uVar10 - (float)uVar11;
      if (pUVar18 != (UnityEngine_ParticleSystem_o *)0x0) {
        fVar25 = fVar25 - (pUVar19->fields).z;
        pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
        pUVar19 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_c8,head,(MethodInfo *)0x0);
        if (fVar24 * fVar24 + fVar23 * fVar23 + fVar25 * fVar25 <= 0.0001) {
          if (neckBlood == (UnityEngine_ParticleSystem_o *)0x0) goto label_1821b4bd1;
          uVar9 = (pUVar19->fields).x;
          uVar13 = (pUVar19->fields).y;
          fVar22 = (pUVar19->fields).z;
          pUVar21 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)neckBlood,(MethodInfo *)0x0);
          if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_1821b4bd1;
          pUVar20 = UnityEngine_Transform__get_rotation(local_b8,pUVar21,(MethodInfo *)0x0);
          local_d8.x = 3.1415927;
          local_d8.y = 0.0;
          local_d8.z = 0.0;
          fVar24 = (pUVar20->fields).x;
          fVar8 = (pUVar20->fields).y;
          fVar12 = (pUVar20->fields).z;
          fVar1 = (pUVar20->fields).w;
          pUVar20 = UnityEngine_Quaternion__Internal_FromEulerRad
                              (local_b8,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
          fVar2 = (pUVar20->fields).x;
          fVar3 = (pUVar20->fields).w;
          fVar4 = (pUVar20->fields).z;
          fVar5 = (pUVar20->fields).y;
          fVar25 = (fVar2 * fVar1 + fVar3 * fVar24 + fVar4 * fVar8) - fVar5 * fVar12;
          fVar23 = (fVar3 * fVar8 + fVar5 * fVar1 + fVar2 * fVar12) - fVar4 * fVar24;
          fVar26 = ((fVar3 * fVar1 - fVar2 * fVar24) - fVar5 * fVar8) - fVar4 * fVar12;
          fVar24 = (fVar3 * fVar12 + fVar4 * fVar1 + fVar5 * fVar24) - fVar2 * fVar8;
          fVar8 = (float)uVar9;
          fVar12 = (float)uVar13;
        }
        else {
          fVar8 = (pUVar19->fields).x;
          fVar12 = (pUVar19->fields).y;
          fVar22 = (pUVar19->fields).z;
          local_c8.y = fVar24;
          local_c8.x = fVar23;
          local_d8.x = 0.0;
          local_d8.y = 0.0;
          local_d8.z = 0.0;
          local_c8.z = fVar25;
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
          pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_d8.x = (pUVar14->upVector).fields.x;
          local_d8.y = (pUVar14->upVector).fields.y;
          local_d8.z = (pUVar14->upVector).fields.z;
          pUVar20 = UnityEngine_Quaternion__Internal_LookRotation
                              (local_b8,(UnityEngine_Vector3_o *)&local_c8,(UnityEngine_Vector3_o *)&local_d8,
                               (MethodInfo *)0x0);
          fVar25 = (pUVar20->fields).x;
          fVar23 = (pUVar20->fields).y;
          fVar24 = (pUVar20->fields).z;
          fVar26 = (pUVar20->fields).w;
        }
        if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
          local_d8.y = fVar23;
          local_d8.x = fVar25;
          local_c8.y = fVar12;
          local_c8.x = fVar8;
          local_d8.z = fVar24;
          local_d8.w = fVar26;
          local_c8.z = fVar22;
          UnityEngine_Transform__SetPositionAndRotation
                    (pUVar17,(UnityEngine_Vector3_o *)&local_c8,(UnityEngine_Quaternion_o *)&local_d8,
                     (MethodInfo *)0x0);
          pUVar18 = (__this->fields)._blood;
          if (pUVar18 != (UnityEngine_ParticleSystem_o *)0x0) {
            pUVar17 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
            if (neckBlood != (UnityEngine_ParticleSystem_o *)0x0) {
              pUVar21 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)neckBlood,(MethodInfo *)0x0);
              if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
                pUVar19 = UnityEngine_Transform__get_lossyScale
                                    ((UnityEngine_Vector3_o *)&local_d8,pUVar21,(MethodInfo *)0x0);
                if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                  local_c8.x = (pUVar19->fields).x;
                  local_c8.y = (pUVar19->fields).y;
                  local_c8.z = (pUVar19->fields).z;
                  UnityEngine_Transform__set_localScale
                            (pUVar17,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
                  pUVar18 = (__this->fields)._blood;
                  if (pUVar18 != (UnityEngine_ParticleSystem_o *)0x0) {
                    UnityEngine_ParticleSystem__Clear(pUVar18,true,(MethodInfo *)0x0);
                    pUVar18 = (__this->fields)._blood;
                    if (pUVar18 != (UnityEngine_ParticleSystem_o *)0x0) {
                      UnityEngine_ParticleSystem__Play(pUVar18,true,(MethodInfo *)0x0);
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
label_1821b4bd1:
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$Initialize
// il2cpp: void Characters_TitanLimbFallEffect__Initialize (Characters_TitanLimbFallEffect_o* __this, UnityEngine_SkinnedMeshRenderer_o* source, UnityEngine_Mesh_o* limb, UnityEngine_Material_o* wound, UnityEngine_Mesh_o* growth, float progress, UnityEngine_Vector3_o velocity, UnityEngine_Transform_o* attachments, const MethodInfo* method);
// 0x1821b2910
// eh: try 0x1821b2f2c..0x1821b2f42 -> pad 0x180356a70 cleanup
// eh: try 0x1821b3a51..0x1821b3baa -> pad 0x18333f170 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821b2f2c: jmp 0x1821b2f3a
// asm:   0x1821b2f2e: test r15, r15
// asm:   0x1821b2f37: mov rdx, r15
// asm:   0x1821b3a59: nop dword ptr [rax]
// asm:   0x1821b3aae: mov rdx, qword ptr [rip + 0x1ed8f13]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x1821b3ab5: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x1821b3aba: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821b3abf: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x1821b3ac4: test rcx, rcx
// asm:   0x1821b3ac7: jne 0x1821b3baa
// asm:   0x1821b3acd: xor r14d, r14d
// asm:   0x1821b3ad0: mov r13, qword ptr [rsp + 0x298]
// asm:   0x1821b3ad8: mov rsi, qword ptr [rsp + 0x268]
// asm:   0x1821b3ae0: mov rdi, qword ptr [rsp + 0x260]
// asm:   0x1821b3ae8: movss xmm6, dword ptr [rsp + 0x30]
// asm:   0x1821b3baa: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333f170: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f175: push rbp
// asm:   0x18333f176: sub rsp, 0x30
// asm:   0x18333f17a: mov rbp, rdx
// asm:   0x18333f17d: mov rax, qword ptr [rbp + 0x130]
// asm:   0x18333f184: mov rcx, qword ptr [rax]
// asm:   0x18333f187: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333f18b: movabs rax, 0
// asm:   0x18333f195: add rsp, 0x30
// asm:   0x18333f199: pop rbp
// asm:   0x18333f19a: ret 

void Characters_TitanLimbFallEffect__Initialize
               (Characters_TitanLimbFallEffect_o *__this,UnityEngine_SkinnedMeshRenderer_o *source,
               UnityEngine_Mesh_o *limb,UnityEngine_Material_o *wound,UnityEngine_Mesh_o *growth,
               float progress,UnityEngine_Vector3_o *velocity,UnityEngine_Transform_o *attachments,
               MethodInfo *method)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  UnityEngine_Vector3_StaticFields *pUVar17;
  UnityEngine_ParticleSystem_o *pUVar18;
  System_Collections_Generic_List_Vector3__o *pSVar19;
  System_Collections_Generic_List_Material__o *pSVar20;
  System_Collections_Generic_List_Material__o *pSVar21;
  UnityEngine_MaterialPropertyBlock_o *pUVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  bool bVar28;
  int32_t iVar29;
  UnityEngine_Transform_o *pUVar30;
  UnityEngine_Matrix4x4_o *pUVar31;
  UnityEngine_Bounds_o *pUVar32;
  UnityEngine_Vector3_o *pUVar33;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Object_o *pUVar34;
  UnityEngine_Mesh_o *pUVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float local_res18;
  float local_224;
  UnityEngine_Vector3_Fields local_208;
  undefined1 local_1f8 [16];
  UnityEngine_Material_o *local_1e8;
  undefined8 local_1d8;
  float local_1d0;
  undefined1 local_1c8 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_1c0;
  UnityEngine_Material_o *local_1b8;
  UnityEngine_Matrix4x4_o local_1a8;
  UnityEngine_Matrix4x4_Fields local_168;
  UnityEngine_Matrix4x4_o local_120 [3];
  
  if (Il2CppMethodInitialized_184346e64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Material_RemoveRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDeathDissolve);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"_Layer");
    il2cpp_codegen_initialize_runtime_metadata(&"_Growth");
    il2cpp_codegen_initialize_runtime_metadata(&"Falling regrown hand");
    Il2CppMethodInitialized_184346e64 = '\x01';
  }
  local_1d8 = 0;
  local_1d0 = 0.0;
  local_1c8 = (undefined1  [8])0x0;
  pUStack_1c0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_1b8 = (UnityEngine_Material_o *)0x0;
  Characters_TitanLimbFallEffect__Bake(__this,source,limb,(__this->fields)._mesh,(MethodInfo *)0x0);
  if ((source != (UnityEngine_SkinnedMeshRenderer_o *)0x0) &&
     (pUVar30 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)source,(MethodInfo *)0x0),
     pUVar30 != (UnityEngine_Transform_o *)0x0)) {
    pUVar31 = UnityEngine_Transform__get_localToWorldMatrix
                        ((UnityEngine_Matrix4x4_o *)&local_168,pUVar30,(MethodInfo *)0x0);
    pUVar35 = (__this->fields)._mesh;
    if (pUVar35 != (UnityEngine_Mesh_o *)0x0) {
      fVar43 = (pUVar31->fields).m00;
      fVar44 = (pUVar31->fields).m10;
      fVar46 = (pUVar31->fields).m20;
      fVar40 = (pUVar31->fields).m30;
      fVar45 = (pUVar31->fields).m01;
      fVar2 = (pUVar31->fields).m11;
      fVar3 = (pUVar31->fields).m21;
      fVar41 = (pUVar31->fields).m31;
      fVar37 = (pUVar31->fields).m02;
      fVar38 = (pUVar31->fields).m12;
      fVar4 = (pUVar31->fields).m22;
      fVar42 = (pUVar31->fields).m32;
      fVar5 = (pUVar31->fields).m03;
      fVar6 = (pUVar31->fields).m13;
      fVar7 = (pUVar31->fields).m23;
      fVar8 = (pUVar31->fields).m33;
      pUVar32 = UnityEngine_Mesh__get_bounds((UnityEngine_Bounds_o *)local_1f8,pUVar35,(MethodInfo *)0x0);
      fVar9 = (pUVar32->fields).m_Center.fields.x;
      fVar10 = (pUVar32->fields).m_Center.fields.y;
      fVar11 = (pUVar32->fields).m_Center.fields.z;
      local_168.m03 = fVar11 * fVar37 + fVar10 * fVar45 + fVar9 * fVar43 + fVar5;
      local_168.m13 = fVar11 * fVar38 + fVar10 * fVar2 + fVar9 * fVar44 + fVar6;
      local_168.m23 = fVar11 * fVar4 + fVar10 * fVar3 + fVar9 * fVar46 + fVar7;
      (__this->fields)._origin.fields.x = local_168.m03;
      (__this->fields)._origin.fields.y = local_168.m13;
      (__this->fields)._origin.fields.z = local_168.m23;
      local_168.m00 = 1.0;
      local_168.m10 = 0.0;
      local_168.m20 = 0.0;
      local_168.m30 = 0.0;
      local_168.m01 = 0.0;
      local_168.m11 = 1.0;
      local_168.m21 = 0.0;
      local_168.m31 = 0.0;
      local_168.m02 = 0.0;
      local_168.m12 = 0.0;
      local_168.m22 = 1.0;
      local_168.m32 = 0.0;
      local_168.m03 = -local_168.m03;
      local_168.m13 = -local_168.m13;
      local_168.m23 = -local_168.m23;
      local_168.m33 = 1.0;
      local_1a8.fields.m00 = fVar43;
      local_1a8.fields.m10 = fVar44;
      local_1a8.fields.m20 = fVar46;
      local_1a8.fields.m30 = fVar40;
      local_1a8.fields.m01 = fVar45;
      local_1a8.fields.m11 = fVar2;
      local_1a8.fields.m21 = fVar3;
      local_1a8.fields.m31 = fVar41;
      local_1a8.fields.m02 = fVar37;
      local_1a8.fields.m12 = fVar38;
      local_1a8.fields.m22 = fVar4;
      local_1a8.fields.m32 = fVar42;
      local_1a8.fields.m03 = fVar5;
      local_1a8.fields.m13 = fVar6;
      local_1a8.fields.m23 = fVar7;
      local_1a8.fields.m33 = fVar8;
      pUVar31 = UnityEngine_Matrix4x4__op_Multiply
                          (local_120,(UnityEngine_Matrix4x4_o *)&local_168,&local_1a8,(MethodInfo *)0x0);
      fVar40 = (pUVar31->fields).m10;
      fVar41 = (pUVar31->fields).m20;
      fVar42 = (pUVar31->fields).m30;
      fVar5 = (pUVar31->fields).m01;
      fVar6 = (pUVar31->fields).m11;
      fVar7 = (pUVar31->fields).m21;
      fVar8 = (pUVar31->fields).m31;
      fVar9 = (pUVar31->fields).m02;
      fVar10 = (pUVar31->fields).m12;
      fVar11 = (pUVar31->fields).m22;
      fVar23 = (pUVar31->fields).m32;
      fVar24 = (pUVar31->fields).m03;
      fVar25 = (pUVar31->fields).m13;
      fVar26 = (pUVar31->fields).m23;
      fVar27 = (pUVar31->fields).m33;
      (__this->fields)._meshOffset.fields.m00 = (pUVar31->fields).m00;
      (__this->fields)._meshOffset.fields.m10 = fVar40;
      (__this->fields)._meshOffset.fields.m20 = fVar41;
      (__this->fields)._meshOffset.fields.m30 = fVar42;
      (__this->fields)._meshOffset.fields.m01 = fVar5;
      (__this->fields)._meshOffset.fields.m11 = fVar6;
      (__this->fields)._meshOffset.fields.m21 = fVar7;
      (__this->fields)._meshOffset.fields.m31 = fVar8;
      (__this->fields)._meshOffset.fields.m02 = fVar9;
      (__this->fields)._meshOffset.fields.m12 = fVar10;
      (__this->fields)._meshOffset.fields.m22 = fVar11;
      (__this->fields)._meshOffset.fields.m32 = fVar23;
      (__this->fields)._meshOffset.fields.m03 = fVar24;
      (__this->fields)._meshOffset.fields.m13 = fVar25;
      (__this->fields)._meshOffset.fields.m23 = fVar26;
      (__this->fields)._meshOffset.fields.m33 = fVar27;
      pUVar30 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      uVar14._0_4_ = (__this->fields)._origin.fields.x;
      uVar14._4_4_ = (__this->fields)._origin.fields.y;
      fVar40 = (__this->fields)._origin.fields.z;
      if (Il2CppMethodInitialized_18433de5b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_18433de5b = '\x01';
      }
      if (pUVar30 != (UnityEngine_Transform_o *)0x0) {
        local_1f8._0_8_ =
             *(undefined8 *)&(TypeInfo_UnityEngine_Quaternion->static_fields->identityQuaternion).fields;
        local_1f8._8_8_ =
             *(undefined8 *)&(TypeInfo_UnityEngine_Quaternion->static_fields->identityQuaternion).fields.z;
        local_208._0_8_ = uVar14;
        local_208.z = fVar40;
        UnityEngine_Transform__SetPositionAndRotation
                  (pUVar30,(UnityEngine_Vector3_o *)&local_208,(UnityEngine_Quaternion_o *)local_1f8,
                   (MethodInfo *)0x0);
        pUVar35 = (__this->fields)._mesh;
        if (pUVar35 != (UnityEngine_Mesh_o *)0x0) {
          pUVar32 = UnityEngine_Mesh__get_bounds((UnityEngine_Bounds_o *)local_1f8,pUVar35,(MethodInfo *)0x0);
          fVar40 = (pUVar32->fields).m_Extents.fields.x;
          fVar41 = (pUVar32->fields).m_Extents.fields.y;
          fVar42 = (pUVar32->fields).m_Extents.fields.z;
          fVar40 = fVar40 + fVar40;
          fVar41 = fVar41 + fVar41;
          fVar42 = fVar42 + fVar42;
          fVar45 = fVar42 * fVar37 + fVar41 * fVar45 + fVar40 * fVar43;
          fVar44 = fVar42 * fVar38 + fVar41 * fVar2 + fVar40 * fVar44;
          fVar43 = fVar42 * fVar4 + fVar41 * fVar3 + fVar40 * fVar46;
          if (Il2CppMethodInitialized_18433de59 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_18433de59 = '\x01';
          }
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          dVar39 = (double)(fVar43 * fVar43 + fVar44 * fVar44 + fVar45 * fVar45);
          if (dVar39 < 0.0) {
            dVar39 = sqrt(dVar39);
          }
          else {
            dVar39 = SQRT(dVar39);
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar28 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)attachments,(UnityEngine_Object_o *)0x0,
                              (MethodInfo *)0x0);
          pUVar35 = limb;
          if (bVar28) {
            pUVar35 = (__this->fields)._mesh;
          }
          if (pUVar35 != (UnityEngine_Mesh_o *)0x0) {
            pUVar32 = UnityEngine_Mesh__get_bounds
                                ((UnityEngine_Bounds_o *)local_1f8,pUVar35,(MethodInfo *)0x0);
            local_208.z = (pUVar32->fields).m_Extents.fields.z;
            uVar12 = (pUVar32->fields).m_Extents.fields.x;
            uVar15 = (pUVar32->fields).m_Extents.fields.y;
            local_208.z = local_208.z + local_208.z;
            local_208.x = (float)uVar12 + (float)uVar12;
            local_208.y = (float)uVar15 + (float)uVar15;
            fVar43 = (float)il2cpp_runtime_helper_180546a40(&local_208);
            pUVar30 = UnityEngine_SkinnedMeshRenderer__get_rootBone(source,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar28 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar30,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if (bVar28) {
              pUVar30 = UnityEngine_SkinnedMeshRenderer__get_rootBone(source,(MethodInfo *)0x0);
            }
            else {
              pUVar30 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
            }
            if (pUVar30 != (UnityEngine_Transform_o *)0x0) {
              pUVar33 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)local_1f8,pUVar30,(MethodInfo *)0x0);
              fVar44 = (__this->fields)._origin.fields.x - (pUVar33->fields).x;
              fVar46 = (__this->fields)._origin.fields.y - (pUVar33->fields).y;
              fVar40 = (__this->fields)._origin.fields.z - (pUVar33->fields).z;
              if (Il2CppMethodInitialized_18433de5c == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5c = '\x01';
              }
              pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar45 = (pUVar17->upVector).fields.x;
              fVar2 = (pUVar17->upVector).fields.y;
              fVar3 = (pUVar17->upVector).fields.z;
              if (Il2CppMethodInitialized_18434528c == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
                Il2CppMethodInitialized_18434528c = '\x01';
              }
              fVar41 = fVar3 * fVar3 + fVar2 * fVar2 + fVar45 * fVar45;
              if (TypeInfo_UnityEngine_Mathf->static_fields->Epsilon <= fVar41) {
                fVar41 = (fVar3 * fVar40 + fVar2 * fVar46 + fVar45 * fVar44) / fVar41;
                fVar44 = fVar44 - fVar45 * fVar41;
                fVar46 = fVar46 - fVar2 * fVar41;
                fVar40 = fVar40 - fVar3 * fVar41;
              }
              local_1d8 = CONCAT44(fVar46,fVar44);
              if (fVar40 * fVar40 + fVar46 * fVar46 + fVar44 * fVar44 < 0.0001) {
                local_1d0 = fVar40;
                pUVar30 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
                if (pUVar30 == (UnityEngine_Transform_o *)0x0) goto label_1821b3b9e;
                pUVar33 = UnityEngine_Transform__get_right
                                    ((UnityEngine_Vector3_o *)local_1f8,pUVar30,(MethodInfo *)0x0);
                fVar44 = (pUVar33->fields).x;
                fVar46 = (pUVar33->fields).y;
                fVar40 = (pUVar33->fields).z;
                if (Il2CppMethodInitialized_18433de5c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433de5c = '\x01';
                }
                pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
                fVar45 = (pUVar17->upVector).fields.x;
                fVar2 = (pUVar17->upVector).fields.y;
                fVar3 = (pUVar17->upVector).fields.z;
                if (Il2CppMethodInitialized_18434528c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
                  Il2CppMethodInitialized_18434528c = '\x01';
                }
                fVar41 = fVar3 * fVar3 + fVar2 * fVar2 + fVar45 * fVar45;
                if (TypeInfo_UnityEngine_Mathf->static_fields->Epsilon <= fVar41) {
                  fVar41 = (fVar3 * fVar40 + fVar2 * fVar46 + fVar45 * fVar44) / fVar41;
                  fVar44 = fVar44 - fVar45 * fVar41;
                  fVar46 = fVar46 - fVar2 * fVar41;
                  fVar40 = fVar40 - fVar3 * fVar41;
                }
                local_1d8 = CONCAT44(fVar46,fVar44);
              }
              local_1d0 = fVar40;
              if (0.0001 <= fVar40 * fVar40 + fVar46 * fVar46 + fVar44 * fVar44) {
                if (Il2CppMethodInitialized_18433de5f == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433de5f = '\x01';
                }
                fVar45 = (float)il2cpp_runtime_helper_180546a40(&local_1d8,0);
                if (fVar45 <= 1e-05) {
                  pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
                  fVar44 = (pUVar17->zeroVector).fields.x;
                  fVar46 = (pUVar17->zeroVector).fields.y;
                  fVar40 = (pUVar17->zeroVector).fields.z;
                }
                else {
                  fVar44 = fVar44 / fVar45;
                  fVar46 = fVar46 / fVar45;
                  fVar40 = fVar40 / fVar45;
                }
              }
              else {
                if (Il2CppMethodInitialized_1843445b8 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_1843445b8 = '\x01';
                }
                pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
                fVar44 = (pUVar17->rightVector).fields.x;
                fVar46 = (pUVar17->rightVector).fields.y;
                fVar40 = (pUVar17->rightVector).fields.z;
              }
              if (Il2CppMethodInitialized_18433de5c == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5c = '\x01';
              }
              pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar45 = (pUVar17->upVector).fields.x;
              fVar2 = (pUVar17->upVector).fields.y;
              fVar3 = (pUVar17->upVector).fields.z;
              fVar41 = (velocity->fields).x;
              if (Il2CppMethodInitialized_18433de5c == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5c = '\x01';
              }
              pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar37 = (pUVar17->upVector).fields.x;
              fVar38 = (pUVar17->upVector).fields.y;
              fVar4 = (pUVar17->upVector).fields.z;
              if (Il2CppMethodInitialized_18434528c == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
                Il2CppMethodInitialized_18434528c = '\x01';
              }
              fVar42 = fVar4 * fVar4 + fVar38 * fVar38 + fVar37 * fVar37;
              if (fVar42 < TypeInfo_UnityEngine_Mathf->static_fields->Epsilon) {
                local_res18 = (velocity->fields).y;
                local_224 = (velocity->fields).z;
              }
              else {
                local_224 = (velocity->fields).z;
                local_res18 = (velocity->fields).y;
                fVar42 = (fVar4 * local_224 + fVar38 * local_res18 + fVar37 * fVar41) / fVar42;
                fVar41 = fVar41 - fVar37 * fVar42;
                local_res18 = local_res18 - fVar38 * fVar42;
                local_224 = local_224 - fVar4 * fVar42;
              }
              fVar37 = UnityEngine_Random__Range(10.0,16.0,(MethodInfo *)0x0);
              fVar38 = UnityEngine_Random__Range(-1.5,1.5,(MethodInfo *)0x0);
              (__this->fields)._velocity.fields.x =
                   (fVar40 * fVar2 - fVar46 * fVar3) * fVar38 + fVar44 * fVar37 + fVar41;
              (__this->fields)._velocity.fields.y =
                   (fVar44 * fVar3 - fVar40 * fVar45) * fVar38 + fVar46 * fVar37 + local_res18;
              (__this->fields)._velocity.fields.z =
                   (fVar46 * fVar45 - fVar44 * fVar2) * fVar38 + fVar40 * fVar37 + local_224;
              pUVar33 = UnityEngine_Random__get_onUnitSphere
                                  ((UnityEngine_Vector3_o *)local_1f8,(MethodInfo *)0x0);
              fVar44 = (pUVar33->fields).x;
              fVar46 = (pUVar33->fields).y;
              fVar40 = (pUVar33->fields).z;
              fVar45 = UnityEngine_Random__Range(45.0,90.0,(MethodInfo *)0x0);
              (__this->fields)._angularVelocity.fields.x = fVar44 * fVar45;
              (__this->fields)._angularVelocity.fields.y = fVar46 * fVar45;
              (__this->fields)._angularVelocity.fields.z = fVar40 * fVar45;
              __this_00 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
              if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                iVar29 = UnityEngine_GameObject__get_layer(__this_00,(MethodInfo *)0x0);
                (__this->fields)._layer = iVar29;
                bVar28 = UnityEngine_Renderer__get_receiveShadows
                                   ((UnityEngine_Renderer_o *)source,(MethodInfo *)0x0);
                (__this->fields)._receiveShadows = bVar28;
                (__this->fields)._age = 0.0;
                (__this->fields)._dissolveDelay = 5.0;
                pUVar18 = (__this->fields)._blood;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar28 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if (bVar28) {
                  pUVar18 = (__this->fields)._blood;
                  if (pUVar18 == (UnityEngine_ParticleSystem_o *)0x0) goto label_1821b3b9e;
                  UnityEngine_ParticleSystem__Stop(pUVar18,true,0,(MethodInfo *)0x0);
                }
                (__this->fields)._radius = 0.0;
                (__this->fields)._groundAge = 0.0;
                (__this->fields)._landed = false;
                pSVar19 = (__this->fields)._supportVertices;
                if (pSVar19 != (System_Collections_Generic_List_Vector3__o *)0x0) {
                  piVar1 = &(pSVar19->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  (pSVar19->fields)._size = 0;
                  Characters_TitanLimbFallEffect__AddSupportVertices
                            (__this,(__this->fields)._mesh,-1.0,(MethodInfo *)0x0);
                  UnityEngine_Renderer__GetSharedMaterials
                            ((UnityEngine_Renderer_o *)source,(__this->fields)._sourceMaterials,
                             (MethodInfo *)0x0);
                  if (limb != (UnityEngine_Mesh_o *)0x0) {
                    iVar29 = UnityEngine_Mesh__get_subMeshCount(limb,(MethodInfo *)0x0);
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar28 = UnityEngine_Object__op_Inequality
                                       ((UnityEngine_Object_o *)wound,(UnityEngine_Object_o *)0x0,
                                        (MethodInfo *)0x0);
                    pSVar20 = (__this->fields)._sourceMaterials;
                    if (pSVar20 != (System_Collections_Generic_List_Material__o *)0x0) {
                      iVar36 = iVar29 - (uint)bVar28;
                      if (iVar36 < (pSVar20->fields)._size) {
                        System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___RemoveRange
                                  ((System_Collections_Generic_List_T__o *)pSVar20,iVar36,
                                   (pSVar20->fields)._size - iVar36,
                                   (MethodInfo_9344F0 *)
                                   MethodInfo_System_Collections_Generic_List_Material_RemoveRange);
                      }
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar28 = UnityEngine_Object__op_Inequality
                                         ((UnityEngine_Object_o *)wound,(UnityEngine_Object_o *)0x0,
                                          (MethodInfo *)0x0);
                      if (bVar28) {
                        pSVar20 = (__this->fields)._sourceMaterials;
                        if (pSVar20 == (System_Collections_Generic_List_Material__o *)0x0) goto label_1821b3b9e;
                        il2cpp_runtime_helper_180012890(pSVar20,wound);
                      }
                      pSVar20 = (__this->fields)._materials;
                      pSVar21 = (__this->fields)._sourceMaterials;
                      if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
                      }
                      Characters_TitanLimbFallEffect__CopyMaterials
                                (pSVar20,pSVar21,false,fVar43,(MethodInfo *)0x0);
                      UnityEngine_Renderer__GetPropertyBlock
                                ((UnityEngine_Renderer_o *)source,(__this->fields)._properties,
                                 (MethodInfo *)0x0);
                      pUVar22 = (__this->fields)._properties;
                      if (pUVar22 != (UnityEngine_MaterialPropertyBlock_o *)0x0) {
                        UnityEngine_MaterialPropertyBlock__SetFloat_2edfd40
                                  (pUVar22,TypeInfo_Characters_TitanLimbFallEffect->static_fields->Dissolve,
                                   0.0,(MethodInfo *)0x0);
                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                        }
                        bVar28 = UnityEngine_Object__op_Inequality
                                           ((UnityEngine_Object_o *)growth,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        (__this->fields)._hasGrowth = bVar28;
                        if (bVar28) {
                          pUVar34 = (UnityEngine_Object_o *)(__this->fields)._growthMesh;
                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          bVar28 = UnityEngine_Object__op_Equality
                                             (pUVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                          if (bVar28) {
                            pUVar34 = (UnityEngine_Object_o *)
                                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
                            UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pUVar34,(MethodInfo *)0x0);
                            if (pUVar34 == (UnityEngine_Object_o *)0x0) goto label_1821b3b9e;
                            UnityEngine_Object__set_name(pUVar34,"Falling regrown hand",(MethodInfo *)0x0);
                            (__this->fields)._growthMesh = (UnityEngine_Mesh_o *)pUVar34;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._growthMesh,pUVar34);
                          }
                          Characters_TitanLimbFallEffect__Bake
                                    (__this,source,growth,(__this->fields)._growthMesh,(MethodInfo *)0x0);
                          Characters_TitanLimbFallEffect__AddSupportVertices
                                    (__this,(__this->fields)._growthMesh,progress,(MethodInfo *)0x0);
                          pSVar20 = (__this->fields)._sourceMaterials;
                          if (pSVar20 == (System_Collections_Generic_List_Material__o *)0x0)
                          goto label_1821b3b9e;
                          System_Collections_Generic_List_object___RemoveAt
                                    ((System_Collections_Generic_List_object__o *)
                                     (__this->fields)._sourceMaterials,(pSVar20->fields)._size + -1,
                                     (MethodInfo_947010 *)
                                     MethodInfo_System_Collections_Generic_List_Material_RemoveAt);
                          pSVar20 = (__this->fields)._growthMaterials;
                          pSVar21 = (__this->fields)._sourceMaterials;
                          pUVar32 = UnityEngine_Mesh__get_bounds
                                              ((UnityEngine_Bounds_o *)local_1f8,limb,(MethodInfo *)0x0);
                          uVar13 = (pUVar32->fields).m_Extents.fields.x;
                          uVar16 = (pUVar32->fields).m_Extents.fields.y;
                          local_208.z = (pUVar32->fields).m_Extents.fields.z;
                          local_208.x = (float)uVar13 + (float)uVar13;
                          local_208.y = (float)uVar16 + (float)uVar16;
                          local_208.z = local_208.z + local_208.z;
                          fVar44 = (float)il2cpp_runtime_helper_180546a40(&local_208,0);
                          if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
                          }
                          Characters_TitanLimbFallEffect__CopyMaterials
                                    (pSVar20,pSVar21,true,fVar44,(MethodInfo *)0x0);
                          UnityEngine_Renderer__GetPropertyBlock
                                    ((UnityEngine_Renderer_o *)source,(__this->fields)._growthProperties,
                                     (MethodInfo *)0x0);
                          pUVar22 = (__this->fields)._growthProperties;
                          if (pUVar22 == (UnityEngine_MaterialPropertyBlock_o *)0x0) goto label_1821b3b9e;
                          UnityEngine_MaterialPropertyBlock__SetFloat
                                    (pUVar22,"_Growth",progress,(MethodInfo *)0x0);
                          pUVar22 = (__this->fields)._growthProperties;
                          if (pUVar22 == (UnityEngine_MaterialPropertyBlock_o *)0x0) goto label_1821b3b9e;
                          UnityEngine_MaterialPropertyBlock__SetFloat_2edfd40
                                    (pUVar22,TypeInfo_Characters_TitanLimbFallEffect->static_fields->Dissolve,
                                     0.0,(MethodInfo *)0x0);
                        }
                        pSVar20 = (__this->fields)._sourceMaterials;
                        if (pSVar20 != (System_Collections_Generic_List_Material__o *)0x0) {
                          piVar1 = &(pSVar20->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          iVar36 = (pSVar20->fields)._size;
                          (pSVar20->fields)._size = 0;
                          if (0 < iVar36) {
                            System_Array__Clear((System_Array_o *)(pSVar20->fields)._items,0,iVar36,
                                                (MethodInfo *)0x0);
                          }
                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          bVar28 = UnityEngine_Object__op_Inequality
                                             ((UnityEngine_Object_o *)attachments,(UnityEngine_Object_o *)0x0,
                                              (MethodInfo *)0x0);
                          if (bVar28) {
                            pUVar35 = (__this->fields)._mesh;
                            if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0)
                            {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
                            }
                            pUVar35 = Characters_TitanDeathDissolve__CreateTissueMesh
                                                (pUVar35,fVar43,(MethodInfo *)0x0);
                            (__this->fields)._tissueMesh = pUVar35;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._tissueMesh,pUVar35);
                            pSVar20 = (__this->fields)._tissueMaterials;
                            pSVar21 = (__this->fields)._materials;
                            if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0)
                            {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
                            }
                            Characters_TitanLimbFallEffect__CopyMaterials
                                      (pSVar20,pSVar21,false,fVar43,(MethodInfo *)0x0);
                            pSVar20 = (__this->fields)._tissueMaterials;
                            if (pSVar20 == (System_Collections_Generic_List_Material__o *)0x0)
                            goto label_1821b3b9e;
                            System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                                      ((System_Collections_Generic_List_Enumerator_T__o *)local_1f8,
                                       (System_Collections_Generic_List_T__o *)pSVar20,
                                       (MethodInfo_91F180 *)
                                       MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
                            local_1c8 = (undefined1  [8])local_1f8._0_8_;
                            pUStack_1c0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)
                                          local_1f8._8_8_;
                            local_1b8 = local_1e8;
                            local_1f8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                            local_1f8._8_8_ =
                                 (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_1c8;
                            while (bVar28 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                                      ((System_Collections_Generic_List_Enumerator_object__o *
                                                       )local_1c8,
                                                       (MethodInfo_153A2A0 *)
                                                       MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext
                                                      ), bVar28) {
                              if (local_1b8 == (UnityEngine_Material_o *)0x0) {
                                ThrowNullReferenceException();
                              }
                              UnityEngine_Material__SetFloat
                                        (local_1b8,"_Layer",1.0,(MethodInfo *)0x0);
                            }
                            System_Collections_Generic_List_Enumerator_object___Dispose
                                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_1c8
                                       ,MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
                                      );
                            Characters_TitanLimbFallEffect__AddAttachments
                                      (__this,source,attachments,fVar43,(MethodInfo *)0x0);
                          }
                          pUVar33 = Characters_TitanLimbFallEffect__GetRestNormal
                                              ((UnityEngine_Vector3_o *)local_1f8,__this,(MethodInfo *)0x0);
                          fVar43 = (pUVar33->fields).z;
                          fVar44 = (pUVar33->fields).y;
                          (__this->fields)._restNormal.fields.x = (pUVar33->fields).x;
                          (__this->fields)._restNormal.fields.y = fVar44;
                          (__this->fields)._restNormal.fields.z = fVar43;
                          fVar43 = Characters_TitanLimbFallEffect__GetUpwardSpeed(__this,(MethodInfo *)0x0);
                          (__this->fields)._velocity.fields.y = fVar43;
                          Characters_TitanLimbFallEffect__PrepareSteam
                                    (__this,source,(float)dVar39,(MethodInfo *)0x0);
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
label_1821b3b9e:
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$AddAttachments
// il2cpp: void Characters_TitanLimbFallEffect__AddAttachments (Characters_TitanLimbFallEffect_o* __this, UnityEngine_SkinnedMeshRenderer_o* source, UnityEngine_Transform_o* root, float size, const MethodInfo* method);
// 0x1821b0650
// eh: try 0x1821b0b60..0x1821b0d8e -> pad 0x18333b720 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821b07e1: xorps xmm10, xmm10
// asm:   0x1821b07e5: movss xmm12, dword ptr [rip + 0x11a841a]
// asm:   0x1821b07ee: nop 
// asm:   0x1821b08de: mov dword ptr [rsp + 0x30], edi
// asm:   0x1821b0948: mov dword ptr [rsp + 0x30], edi
// asm:   0x1821b0b5e: nop 
// asm:   0x1821b0bfb: mov rdx, qword ptr [rip + 0x1edbdc6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x1821b0c02: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1821b0c07: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821b0c0c: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1821b0c11: test rcx, rcx
// asm:   0x1821b0c14: jne 0x1821b0d8e
// asm:   0x1821b0c1a: xor r15d, r15d
// asm:   0x1821b0c1d: movss xmm11, dword ptr [rsp + 0x238]
// asm:   0x1821b0c27: mov r13, qword ptr [rsp + 0x228]
// asm:   0x1821b0c2f: mov r12, qword ptr [rsp + 0xb0]
// asm:   0x1821b0c37: mov edi, dword ptr [rsp + 0x30]
// asm:   0x1821b0c3b: xorps xmm10, xmm10
// asm:   0x1821b0c3f: movss xmm12, dword ptr [rip + 0x11a7fc0]
// asm:   0x1821b0c48: mov r14, qword ptr [rsp + 0xb8]
// asm:   0x1821b0c50: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x1821b0d08: mov rbx, qword ptr [rsp + 0x220]
// asm:   0x1821b0d8e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333b720: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333b725: push rbp
// asm:   0x18333b726: sub rsp, 0x30
// asm:   0x18333b72a: mov rbp, rdx
// asm:   0x18333b72d: mov rax, qword ptr [rbp + 0xc8]
// asm:   0x18333b734: mov rcx, qword ptr [rax]
// asm:   0x18333b737: mov qword ptr [rbp + 0x40], rcx
// asm:   0x18333b73b: movabs rax, 0
// asm:   0x18333b745: add rsp, 0x30
// asm:   0x18333b749: pop rbp
// asm:   0x18333b74a: ret 

void Characters_TitanLimbFallEffect__AddAttachments
               (Characters_TitanLimbFallEffect_o *__this,UnityEngine_SkinnedMeshRenderer_o *source,
               UnityEngine_Transform_o *root,float size,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  byte bVar3;
  int32_t length;
  System_Collections_Generic_List_Material__o *pSVar4;
  System_Collections_Generic_List_Material__o *sources;
  UnityEngine_MaterialPropertyBlock_o *pUVar5;
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
  bool bVar22;
  System_Object_array *pSVar23;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Object_o *pUVar24;
  UnityEngine_Transform_o *pUVar25;
  UnityEngine_Matrix4x4_o *pUVar26;
  Characters_TitanLimbFallEffect_Attachment_o *__this_01;
  uint uVar27;
  UnityEngine_Object_o *pUVar29;
  bool local_res18;
  UnityEngine_MeshFilter_o *local_1e0;
  undefined8 local_1d8;
  System_Collections_Generic_List_Enumerator_object__o *local_1d0;
  System_Collections_Generic_List_Enumerator_object__o local_1c8;
  UnityEngine_Matrix4x4_Fields local_1a8;
  System_Object_array *local_168;
  Characters_TitanLimbFallEffect_Attachment_o *local_160;
  UnityEngine_Object_o *local_158;
  System_Collections_Generic_List_Enumerator_T__o local_148;
  UnityEngine_Matrix4x4_Fields local_128;
  UnityEngine_Matrix4x4_o local_e8 [2];
  UnityEngine_Object_o *pUVar28;
  
  if (Il2CppMethodInitialized_184346e65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect_Attachment);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Attachment_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"Detached head attachment");
    il2cpp_codegen_initialize_runtime_metadata(&"_UseMeshPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"_Flesh");
    il2cpp_codegen_initialize_runtime_metadata(&"_MeshToDissolve");
    Il2CppMethodInitialized_184346e65 = '\x01';
  }
  pUVar29 = (UnityEngine_Object_o *)0x0;
  local_1e0 = (UnityEngine_MeshFilter_o *)0x0;
  local_1c8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_1c8.fields._index = 0;
  local_1c8.fields._version = 0;
  local_1c8.fields._current = (Il2CppObject *)0x0;
  if ((root != (UnityEngine_Transform_o *)0x0) &&
     (pSVar23 = UnityEngine_Component__GetComponentsInChildren_object__665370
                          ((UnityEngine_Component_o *)root,
                           (MethodInfo_665370 *)
                           MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer),
     pUVar28 = pUVar29, local_168 = pSVar23, pSVar23 != (System_Object_array *)0x0)) {
    while( true ) {
      uVar2 = (uint)pSVar23->max_length;
      uVar27 = (uint)pUVar28;
      if ((int)uVar2 <= (int)uVar27) break;
      if (uVar2 <= uVar27) {
        ThrowIndexOutOfRangeException();
      }
      pUVar28 = (UnityEngine_Object_o *)pSVar23->m_Items[(int)uVar27];
      local_158 = pUVar28;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar22 = UnityEngine_Object__op_Equality(pUVar28,(UnityEngine_Object_o *)source,(MethodInfo *)0x0);
      if (bVar22) {
label_1821b0d10:
        pUVar28 = (UnityEngine_Object_o *)(ulonglong)(uVar27 + 1);
      }
      else {
        if (pUVar28 == (UnityEngine_Object_o *)0x0) goto label_1821b0d7c;
        bVar22 = UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)pUVar28,(MethodInfo *)0x0);
        if (!bVar22) goto label_1821b0d10;
        __this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar28,(MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_1821b0d7c;
        bVar22 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
        if (!bVar22) goto label_1821b0d10;
        bVar3 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
        if (((pUVar28->klass->_2).typeHierarchyDepth < bVar3) ||
           ((pUVar28->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer)) {
label_1821b08e2:
          local_res18 = false;
          bVar3 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth;
          pUVar24 = pUVar29;
          if (((bVar3 <= (pUVar28->klass->_2).typeHierarchyDepth) &&
              ((pUVar28->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] ==
               (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer)) &&
             (bVar22 = UnityEngine_Component__TryGetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar28,(Il2CppObject **)&local_1e0,
                                  (MethodInfo_6657C0 *)
                                  MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter),
             local_res18 = false, bVar22)) {
            if (local_1e0 == (UnityEngine_MeshFilter_o *)0x0) goto label_1821b0d7c;
            pUVar24 = (UnityEngine_Object_o *)
                      UnityEngine_MeshFilter__get_sharedMesh(local_1e0,(MethodInfo *)0x0);
          }
        }
        else {
          pUVar24 = (UnityEngine_Object_o *)
                    UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                              ((UnityEngine_SkinnedMeshRenderer_o *)pUVar28,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar22 = UnityEngine_Object__op_Inequality(pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar22) goto label_1821b08e2;
          pUVar24 = (UnityEngine_Object_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
          UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pUVar24,(MethodInfo *)0x0);
          if (pUVar24 == (UnityEngine_Object_o *)0x0) goto label_1821b0d7c;
          UnityEngine_Object__set_name(pUVar24,"Detached head attachment",(MethodInfo *)0x0);
          UnityEngine_SkinnedMeshRenderer__BakeMesh_2ef8130
                    ((UnityEngine_SkinnedMeshRenderer_o *)pUVar28,(UnityEngine_Mesh_o *)pUVar24,true,
                     (MethodInfo *)0x0);
          local_res18 = true;
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar22 = UnityEngine_Object__op_Equality(pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar22) goto label_1821b0d10;
        if ((source == (UnityEngine_SkinnedMeshRenderer_o *)0x0) ||
           (pUVar25 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)source,(MethodInfo *)0x0),
           pUVar25 == (UnityEngine_Transform_o *)0x0)) goto label_1821b0d7c;
        pUVar26 = UnityEngine_Transform__get_worldToLocalMatrix
                            ((UnityEngine_Matrix4x4_o *)&local_1a8,pUVar25,(MethodInfo *)0x0);
        uVar6._0_4_ = (pUVar26->fields).m00;
        uVar6._4_4_ = (pUVar26->fields).m10;
        uVar7._0_4_ = (pUVar26->fields).m20;
        uVar7._4_4_ = (pUVar26->fields).m30;
        uVar8._0_4_ = (pUVar26->fields).m01;
        uVar8._4_4_ = (pUVar26->fields).m11;
        uVar9._0_4_ = (pUVar26->fields).m21;
        uVar9._4_4_ = (pUVar26->fields).m31;
        uVar10._0_4_ = (pUVar26->fields).m02;
        uVar10._4_4_ = (pUVar26->fields).m12;
        uVar11._0_4_ = (pUVar26->fields).m22;
        uVar11._4_4_ = (pUVar26->fields).m32;
        uVar12._0_4_ = (pUVar26->fields).m03;
        uVar12._4_4_ = (pUVar26->fields).m13;
        uVar13._0_4_ = (pUVar26->fields).m23;
        uVar13._4_4_ = (pUVar26->fields).m33;
        pUVar25 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar28,(MethodInfo *)0x0);
        if (pUVar25 == (UnityEngine_Transform_o *)0x0) goto label_1821b0d7c;
        pUVar26 = UnityEngine_Transform__get_localToWorldMatrix
                            ((UnityEngine_Matrix4x4_o *)&local_1a8,pUVar25,(MethodInfo *)0x0);
        local_128.m00 = (pUVar26->fields).m00;
        local_128.m10 = (pUVar26->fields).m10;
        local_128.m20 = (pUVar26->fields).m20;
        local_128.m30 = (pUVar26->fields).m30;
        local_128.m01 = (pUVar26->fields).m01;
        local_128.m11 = (pUVar26->fields).m11;
        local_128.m21 = (pUVar26->fields).m21;
        local_128.m31 = (pUVar26->fields).m31;
        local_128.m02 = (pUVar26->fields).m02;
        local_128.m12 = (pUVar26->fields).m12;
        local_128.m22 = (pUVar26->fields).m22;
        local_128.m32 = (pUVar26->fields).m32;
        local_128.m03 = (pUVar26->fields).m03;
        local_128.m13 = (pUVar26->fields).m13;
        local_128.m23 = (pUVar26->fields).m23;
        local_128.m33 = (pUVar26->fields).m33;
        local_1a8._0_8_ = uVar6;
        local_1a8._8_8_ = uVar7;
        local_1a8._16_8_ = uVar8;
        local_1a8._24_8_ = uVar9;
        local_1a8._32_8_ = uVar10;
        local_1a8._40_8_ = uVar11;
        local_1a8._48_8_ = uVar12;
        local_1a8._56_8_ = uVar13;
        pUVar26 = UnityEngine_Matrix4x4__op_Multiply
                            (local_e8,(UnityEngine_Matrix4x4_o *)&local_1a8,
                             (UnityEngine_Matrix4x4_o *)&local_128,(MethodInfo *)0x0);
        uVar14._0_4_ = (pUVar26->fields).m00;
        uVar14._4_4_ = (pUVar26->fields).m10;
        uVar15._0_4_ = (pUVar26->fields).m20;
        uVar15._4_4_ = (pUVar26->fields).m30;
        uVar16._0_4_ = (pUVar26->fields).m01;
        uVar16._4_4_ = (pUVar26->fields).m11;
        uVar17._0_4_ = (pUVar26->fields).m21;
        uVar17._4_4_ = (pUVar26->fields).m31;
        uVar18._0_4_ = (pUVar26->fields).m02;
        uVar18._4_4_ = (pUVar26->fields).m12;
        uVar19._0_4_ = (pUVar26->fields).m22;
        uVar19._4_4_ = (pUVar26->fields).m32;
        uVar20._0_4_ = (pUVar26->fields).m03;
        uVar20._4_4_ = (pUVar26->fields).m13;
        uVar21._0_4_ = (pUVar26->fields).m23;
        uVar21._4_4_ = (pUVar26->fields).m33;
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect_Attachment);
        local_1a8._0_8_ = uVar14;
        local_1a8._8_8_ = uVar15;
        local_1a8._16_8_ = uVar16;
        local_1a8._24_8_ = uVar17;
        local_1a8._32_8_ = uVar18;
        local_1a8._40_8_ = uVar19;
        local_1a8._48_8_ = uVar20;
        local_1a8._56_8_ = uVar21;
        local_160 = __this_01;
        Characters_TitanLimbFallEffect_Attachment___ctor
                  (__this_01,(UnityEngine_Mesh_o *)pUVar24,(UnityEngine_Matrix4x4_o *)&local_1a8,local_res18,
                   (MethodInfo *)0x0);
        UnityEngine_Renderer__GetSharedMaterials
                  ((UnityEngine_Renderer_o *)pUVar28,(__this->fields)._sourceMaterials,(MethodInfo *)0x0);
        if (__this_01 == (Characters_TitanLimbFallEffect_Attachment_o *)0x0) goto label_1821b0d7c;
        pSVar4 = (__this_01->fields).Materials;
        sources = (__this->fields)._sourceMaterials;
        if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
        }
        Characters_TitanLimbFallEffect__CopyMaterials(pSVar4,sources,false,size,(MethodInfo *)0x0);
        pSVar4 = (__this_01->fields).Materials;
        if (pSVar4 == (System_Collections_Generic_List_Material__o *)0x0) goto label_1821b0d7c;
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  (&local_148,(System_Collections_Generic_List_T__o *)pSVar4,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
        local_1c8.fields._list = local_148.fields._list;
        local_1c8.fields._index = local_148.fields._index;
        local_1c8.fields._version = local_148.fields._version;
        local_1c8.fields._current = local_148.fields._current;
        local_1d8 = 0;
        local_1d0 = &local_1c8;
        while (bVar22 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (&local_1c8,
                                   (MethodInfo_153A2A0 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext),
              bVar22) {
          if ((UnityEngine_Material_o *)local_1c8.fields._current == (UnityEngine_Material_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Material__SetFloat
                    ((UnityEngine_Material_o *)local_1c8.fields._current,"_Flesh",0.0,
                     (MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_1c8,
                   MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
        UnityEngine_Renderer__GetPropertyBlock
                  ((UnityEngine_Renderer_o *)pUVar28,(__this_01->fields).Properties,(MethodInfo *)0x0);
        pUVar5 = (__this_01->fields).Properties;
        if (pUVar5 == (UnityEngine_MaterialPropertyBlock_o *)0x0) goto label_1821b0d7c;
        UnityEngine_MaterialPropertyBlock__SetFloat(pUVar5,"_UseMeshPosition",1.0,(MethodInfo *)0x0);
        pUVar5 = (__this_01->fields).Properties;
        if (pUVar5 == (UnityEngine_MaterialPropertyBlock_o *)0x0) goto label_1821b0d7c;
        local_1a8.m00 = (__this_01->fields).Matrix.fields.m00;
        local_1a8.m10 = (__this_01->fields).Matrix.fields.m10;
        local_1a8.m20 = (__this_01->fields).Matrix.fields.m20;
        local_1a8.m30 = (__this_01->fields).Matrix.fields.m30;
        local_1a8.m01 = (__this_01->fields).Matrix.fields.m01;
        local_1a8.m11 = (__this_01->fields).Matrix.fields.m11;
        local_1a8.m21 = (__this_01->fields).Matrix.fields.m21;
        local_1a8.m31 = (__this_01->fields).Matrix.fields.m31;
        local_1a8.m02 = (__this_01->fields).Matrix.fields.m02;
        local_1a8.m12 = (__this_01->fields).Matrix.fields.m12;
        local_1a8.m22 = (__this_01->fields).Matrix.fields.m22;
        local_1a8.m32 = (__this_01->fields).Matrix.fields.m32;
        local_1a8.m03 = (__this_01->fields).Matrix.fields.m03;
        local_1a8.m13 = (__this_01->fields).Matrix.fields.m13;
        local_1a8.m23 = (__this_01->fields).Matrix.fields.m23;
        local_1a8.m33 = (__this_01->fields).Matrix.fields.m33;
        UnityEngine_MaterialPropertyBlock__SetMatrix
                  (pUVar5,"_MeshToDissolve",(UnityEngine_Matrix4x4_o *)&local_1a8,(MethodInfo *)0x0);
        if ((__this->fields)._attachments ==
            (System_Collections_Generic_List_TitanLimbFallEffect_Attachment__o *)0x0) goto label_1821b0d7c;
        il2cpp_runtime_helper_180012890();
        pUVar28 = (UnityEngine_Object_o *)(ulonglong)(uVar27 + 1);
      }
    }
    pSVar4 = (__this->fields)._sourceMaterials;
    if (pSVar4 != (System_Collections_Generic_List_Material__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_1821b0d7c:
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$GetUpwardSpeed
// il2cpp: float Characters_TitanLimbFallEffect__GetUpwardSpeed (Characters_TitanLimbFallEffect_o* __this, const MethodInfo* method);
// 0x1821b25a0

float Characters_TitanLimbFallEffect__GetUpwardSpeed
                (Characters_TitanLimbFallEffect_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar8;
  float fVar11;
  int32_t layerMask;
  UnityEngine_Vector3_StaticFields *pUVar12;
  UnityEngine_Quaternion_StaticFields *pUVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  UnityEngine_Vector3_o *pUVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Quaternion_Fields local_c8;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_RaycastHit_o local_a8 [3];
  
  if (Il2CppMethodInitialized_184346e66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    Il2CppMethodInitialized_184346e66 = '\x01';
  }
  fVar21 = (__this->fields)._radius + 0.05;
  uVar6 = (__this->fields)._origin.fields.x;
  uVar9 = (__this->fields)._origin.fields.y;
  fVar19 = (__this->fields)._origin.fields.z;
  fVar20 = 0.0;
  local_a8[0].fields.m_Normal.fields.y = 0.0;
  local_a8[0].fields.m_Normal.fields.z = 0.0;
  local_a8[0].fields.m_FaceID = 0;
  local_a8[0].fields.m_Point.fields.x = 0.0;
  local_a8[0].fields.m_Point.fields.y = 0.0;
  local_a8[0].fields.m_Point.fields.z = 0.0;
  local_a8[0].fields.m_Normal.fields.x = 0.0;
  local_a8[0].fields.m_Distance = 0.0;
  local_a8[0].fields.m_UV.fields.x = 0.0;
  local_a8[0].fields.m_UV.fields.y = 0.0;
  local_a8[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar7 = (pUVar12->upVector).fields.x;
  uVar10 = (pUVar12->upVector).fields.y;
  fVar1 = (pUVar12->upVector).fields.z;
  if (Il2CppMethodInitialized_18434494b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18434494b = '\x01';
  }
  pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar2 = (__this->fields)._radius;
  uVar8._0_4_ = (pUVar12->downVector).fields.x;
  uVar8._4_4_ = (pUVar12->downVector).fields.y;
  fVar11 = (pUVar12->downVector).fields.z;
  if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
  }
  layerMask = TypeInfo_Characters_TitanLimbFallEffect->static_fields->GroundMask;
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  local_c8.z = fVar11;
  local_b8.y = (float)uVar10 * fVar21 + (float)uVar9;
  local_b8.x = (float)uVar7 * fVar21 + (float)uVar6;
  local_c8._0_8_ = uVar8;
  local_b8.z = fVar21 * fVar1 + fVar19;
  bVar16 = UnityEngine_Physics__Raycast_2fe5610
                     ((UnityEngine_Vector3_o *)&local_b8,(UnityEngine_Vector3_o *)&local_c8,local_a8,
                      fVar2 + fVar21 + 2.0,layerMask,1,(MethodInfo *)0x0);
  if (bVar16) {
    pUVar17 = UnityEngine_RaycastHit__get_normal
                        ((UnityEngine_Vector3_o *)&local_b8,local_a8,(MethodInfo *)0x0);
    if (0.2 < (pUVar17->fields).y) {
      fVar19 = (__this->fields)._origin.fields.x;
      fVar20 = (__this->fields)._origin.fields.y;
      fVar21 = (__this->fields)._origin.fields.z;
      pUVar17 = UnityEngine_RaycastHit__get_point
                          ((UnityEngine_Vector3_o *)&local_b8,local_a8,(MethodInfo *)0x0);
      fVar1 = (pUVar17->fields).x;
      fVar2 = (pUVar17->fields).y;
      fVar11 = (pUVar17->fields).z;
      pUVar17 = UnityEngine_RaycastHit__get_normal
                          ((UnityEngine_Vector3_o *)&local_b8,local_a8,(MethodInfo *)0x0);
      fVar3 = (pUVar17->fields).y;
      fVar4 = (pUVar17->fields).x;
      fVar5 = (pUVar17->fields).z;
      if (Il2CppMethodInitialized_18433de5b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_18433de5b = '\x01';
      }
      pUVar13 = TypeInfo_UnityEngine_Quaternion->static_fields;
      uVar14._0_4_ = (pUVar13->identityQuaternion).fields.x;
      uVar14._4_4_ = (pUVar13->identityQuaternion).fields.y;
      uVar15._0_4_ = (pUVar13->identityQuaternion).fields.z;
      uVar15._4_4_ = (pUVar13->identityQuaternion).fields.w;
      pUVar17 = UnityEngine_RaycastHit__get_normal
                          ((UnityEngine_Vector3_o *)&local_c8,local_a8,(MethodInfo *)0x0);
      local_b8.x = (pUVar17->fields).x;
      local_b8.y = (pUVar17->fields).y;
      local_b8.z = (pUVar17->fields).z;
      local_c8._0_8_ = uVar14;
      local_c8._8_8_ = uVar15;
      fVar18 = Characters_TitanLimbFallEffect__GetSupportHeight
                         (__this,(UnityEngine_Quaternion_o *)&local_c8,(UnityEngine_Vector3_o *)&local_b8,
                          (MethodInfo *)0x0);
      fVar20 = 1.0 - (((fVar20 - fVar2) * fVar3 + (fVar19 - fVar1) * fVar4 + (fVar21 - fVar11) * fVar5) -
                     fVar18) * 0.5;
      if (fVar20 < 0.0) {
        fVar20 = 0.0;
      }
      else if (1.0 < fVar20) {
        fVar20 = 1.0;
      }
    }
  }
  if (fVar20 < 0.0) {
    fVar19 = 0.0;
  }
  else {
    fVar19 = 1.0;
    if (fVar20 <= 1.0) {
      fVar19 = fVar20;
    }
  }
  fVar19 = UnityEngine_Random__Range(fVar20 * 8.0,fVar19 * 4.0 + 6.0,(MethodInfo *)0x0);
  return fVar19;
}


// Characters.TitanLimbFallEffect$$AddSupportVertices
// il2cpp: void Characters_TitanLimbFallEffect__AddSupportVertices (Characters_TitanLimbFallEffect_o* __this, UnityEngine_Mesh_o* mesh, float growth, const MethodInfo* method);
// 0x1821b0f40
// eh: try 0x1821b10d0..0x1821b128f -> pad 0x18331aa80 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 42 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821b10cd: nop dword ptr [rax]
// asm:   0x1821b1169: mov rdx, qword ptr [rip + 0x1ed7178]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x1821b1170: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821b1175: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821b117a: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821b117f: test rcx, rcx
// asm:   0x1821b1182: jne 0x1821b128f
// asm:   0x1821b1188: movss xmm6, dword ptr [rsp + 0x120]
// asm:   0x1821b1191: mov r15, qword ptr [rsp + 0x118]
// asm:   0x1821b1199: mov rdi, qword ptr [rsp + 0x110]
// asm:   0x1821b11a1: mov r14d, dword ptr [rsp + 0x20]
// asm:   0x1821b11ff: nop 
// asm:   0x1821b1251: mov rdx, qword ptr [rip + 0x1eebab8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose
// asm:   0x1821b1258: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821b125d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821b1262: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821b1267: test rcx, rcx
// asm:   0x1821b126a: jne 0x1821b1295
// asm:   0x1821b128f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821b1295: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18331aa80: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18331aa85: push rbp
// asm:   0x18331aa86: sub rsp, 0x20
// asm:   0x18331aa8a: mov rbp, rdx
// asm:   0x18331aa8d: mov rax, qword ptr [rbp + 0xb8]
// asm:   0x18331aa94: mov rcx, qword ptr [rax]
// asm:   0x18331aa97: mov qword ptr [rbp + 0x28], rcx
// asm:   0x18331aa9b: movabs rax, 0
// asm:   0x18331aaa5: add rsp, 0x20
// asm:   0x18331aaa9: pop rbp
// asm:   0x18331aaaa: ret 
// asm:   0x18333f110: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f115: push rbp
// asm:   0x18333f116: sub rsp, 0x20
// asm:   0x18333f11a: mov rbp, rdx
// asm:   0x18333f11d: mov rax, qword ptr [rbp + 0xc0]
// asm:   0x18333f124: mov rcx, qword ptr [rax]
// asm:   0x18333f127: mov qword ptr [rbp + 0x28], rcx
// asm:   0x18333f12b: movabs rax, 0
// asm:   0x18333f135: add rsp, 0x20
// asm:   0x18333f139: pop rbp
// asm:   0x18333f13a: ret 

void Characters_TitanLimbFallEffect__AddSupportVertices
               (Characters_TitanLimbFallEffect_o *__this,UnityEngine_Mesh_o *mesh,float growth,
               MethodInfo *method)

{
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  System_Collections_Generic_List_Vector2__o *__this_01;
  System_Collections_Generic_List_Vector3__o *pSVar1;
  bool bVar2;
  int32_t iVar3;
  Il2CppObject *pIVar4;
  int submesh;
  Il2CppObject *local_c8;
  float local_c0;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  Il2CppObject *local_a0;
  float local_98;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  undefined8 uStack_78;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  undefined8 uStack_58;
  
  if (Il2CppMethodInitialized_184346e67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    Il2CppMethodInitialized_184346e67 = '\x01';
  }
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  uStack_78 = 0;
  local_b8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b8.fields._index = 0;
  local_b8.fields._version = 0;
  local_b8.fields._current = (Il2CppObject *)0x0;
  if (mesh != (UnityEngine_Mesh_o *)0x0) {
    UnityEngine_Mesh__GetVertices(mesh,(__this->fields)._vertices,(MethodInfo *)0x0);
    if (growth < 0.0) {
      pSVar1 = (__this->fields)._vertices;
      if (pSVar1 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_1821b129b;
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___GetEnumerator
                (&local_70,(System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar1,
                 (MethodInfo_930B50 *)MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
      local_90.fields._list = local_70.fields._list;
      local_90.fields._index = local_70.fields._index;
      local_90.fields._version = local_70.fields._version;
      local_90.fields._current = local_70.fields._current;
      uStack_78 = uStack_58;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator_ProbeBrickPool_BrickChunkAlloc___MoveNext
                          (&local_90,
                           (MethodInfo_15296D0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext);
        if (!bVar2) break;
        local_c8 = local_90.fields._current;
        local_c0 = (float)uStack_78;
        Characters_TitanLimbFallEffect__AddSupportVertex
                  (__this,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_Vector3___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_90,
                 MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
    }
    else {
      UnityEngine_Mesh__GetUVs(mesh,1,(__this->fields)._growthCoordinates,(MethodInfo *)0x0);
      submesh = 0;
      while( true ) {
        iVar3 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
        if (iVar3 <= submesh) break;
        UnityEngine_Mesh__GetTriangles_2ee9030(mesh,(__this->fields)._indices,submesh,(MethodInfo *)0x0);
        __this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._indices
        ;
        if (__this_00 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
        goto label_1821b129b;
        System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
                  (&local_70,__this_00,
                   (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
        local_b8.fields._list = local_70.fields._list;
        local_b8.fields._index = local_70.fields._index;
        local_b8.fields._version = local_70.fields._version;
        local_b8.fields._current = local_70.fields._current;
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                            (&local_b8,
                             (MethodInfo_1530180 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
          if (!bVar2) break;
          __this_01 = (__this->fields)._growthCoordinates;
          if (__this_01 == (System_Collections_Generic_List_Vector2__o *)0x0) {
            ThrowNullReferenceException();
          }
          iVar3 = (int32_t)local_b8.fields._current;
          pIVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,
                              (int32_t)local_b8.fields._current,
                              (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Vector2_get_Item
                             );
          if (SUB84(pIVar4,0) <= growth) {
            pSVar1 = (__this->fields)._vertices;
            if (pSVar1 == (System_Collections_Generic_List_Vector3__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                      ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_a0,
                       (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar1,iVar3,
                       (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
            local_c8 = local_a0;
            local_c0 = local_98;
            Characters_TitanLimbFallEffect__AddSupportVertex
                      (__this,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_b8,
                   MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
        submesh = submesh + 1;
      }
    }
    return;
  }
label_1821b129b:
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$AddSupportVertex
// il2cpp: void Characters_TitanLimbFallEffect__AddSupportVertex (Characters_TitanLimbFallEffect_o* __this, UnityEngine_Vector3_o vertex, const MethodInfo* method);
// 0x1821b0da0

void Characters_TitanLimbFallEffect__AddSupportVertex
               (Characters_TitanLimbFallEffect_o *__this,UnityEngine_Vector3_o *vertex,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  uint uVar3;
  System_Collections_Generic_List_Vector3__o *__this_00;
  UnityEngine_Vector3_array *pUVar4;
  MethodInfo *pMVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_38;
  float local_30;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346e68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    Il2CppMethodInitialized_184346e68 = '\x01';
  }
  pMVar5 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
  fVar8 = (vertex->fields).x;
  fVar6 = (vertex->fields).y;
  __this_00 = (__this->fields)._supportVertices;
  fVar2 = (vertex->fields).z;
  fVar7 = fVar6 * (__this->fields)._meshOffset.fields.m01 + fVar8 * (__this->fields)._meshOffset.fields.m00 +
          fVar2 * (__this->fields)._meshOffset.fields.m02 + (__this->fields)._meshOffset.fields.m03;
  local_30 = fVar6 * (__this->fields)._meshOffset.fields.m21 + fVar8 * (__this->fields)._meshOffset.fields.m20
             + fVar2 * (__this->fields)._meshOffset.fields.m22 + (__this->fields)._meshOffset.fields.m23;
  fVar8 = fVar6 * (__this->fields)._meshOffset.fields.m11 + fVar8 * (__this->fields)._meshOffset.fields.m10 +
          fVar2 * (__this->fields)._meshOffset.fields.m12 + (__this->fields)._meshOffset.fields.m13;
  if (__this_00 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (__this_00->fields)._items;
    if (pUVar4 != (UnityEngine_Vector3_array *)0x0) {
      uVar3 = (__this_00->fields)._size;
      if (uVar3 < (uint)pUVar4->max_length) {
        (__this_00->fields)._size = uVar3 + 1;
        if ((uint)pUVar4->max_length <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        pUVar4->m_Items[(int)uVar3].fields.x = fVar7;
        pUVar4->m_Items[(int)uVar3].fields.y = fVar8;
        pUVar4->m_Items[(int)uVar3].fields.z = local_30;
        local_38 = CONCAT44(fVar8,fVar7);
      }
      else {
        local_38 = CONCAT44(fVar8,fVar7);
        local_28[0].y = fVar8;
        local_28[0].x = fVar7;
        local_28[0].z = local_30;
        System_Collections_Generic_List_Vector3___AddWithResize
                  (__this_00,(UnityEngine_Vector3_o *)local_28,
                   (MethodInfo_99C850 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      fVar8 = (__this->fields)._radius;
      fVar6 = (float)il2cpp_runtime_helper_180546a40(&local_38,0);
      if (fVar8 <= fVar6) {
        fVar8 = fVar6;
      }
      (__this->fields)._radius = fVar8;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$GetRestNormal
// il2cpp: UnityEngine_Vector3_o Characters_TitanLimbFallEffect__GetRestNormal (Characters_TitanLimbFallEffect_o* __this, const MethodInfo* method);
// 0x1821b1dd0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821b211c: nop dword ptr [rax]
// asm:   0x1821b227d: movss xmm14, dword ptr [rbp + 0x67]
// asm:   0x1821b2283: movss xmm0, dword ptr [rbp + 0x6f]

UnityEngine_Vector3_o *
Characters_TitanLimbFallEffect__GetRestNormal
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_TitanLimbFallEffect_o *__this,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  System_Collections_Generic_List_Vector3__o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UnityEngine_Quaternion_StaticFields *pUVar5;
  UnityEngine_Vector3_o *pUVar6;
  int iVar7;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res8;
  float local_res10;
  UnityEngine_Vector3_Fields local_e8;
  UnityEngine_Vector3_Fields local_d8;
  UnityEngine_Quaternion_Fields local_c8 [11];
  
  if (Il2CppMethodInitialized_184346e69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    Il2CppMethodInitialized_184346e69 = '\x01';
  }
  __this_00 = (__this->fields)._supportVertices;
  if (__this_00 == (System_Collections_Generic_List_Vector3__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this_00->fields)._size < 2) {
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar16 = (pUVar4->upVector).fields.y;
    fVar19 = (pUVar4->upVector).fields.z;
    (__return_storage_ptr__->fields).x = (pUVar4->upVector).fields.x;
    (__return_storage_ptr__->fields).y = fVar16;
    (__return_storage_ptr__->fields).z = fVar19;
    return __return_storage_ptr__;
  }
  System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
            ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_d8,
             (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)__this_00,0,
             (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
  local_e8.x = local_d8.x;
  local_e8.y = local_d8.y;
  local_e8.z = local_d8.z;
  pUVar6 = Characters_TitanLimbFallEffect__GetFarthestVertex
                     ((UnityEngine_Vector3_o *)&local_d8,__this,(UnityEngine_Vector3_o *)&local_e8,
                      (MethodInfo *)0x0);
  uVar2._0_4_ = (pUVar6->fields).x;
  uVar2._4_4_ = (pUVar6->fields).y;
  fVar19 = (pUVar6->fields).z;
  local_d8._0_8_ = uVar2;
  local_d8.z = fVar19;
  pUVar6 = Characters_TitanLimbFallEffect__GetFarthestVertex
                     ((UnityEngine_Vector3_o *)&local_e8,__this,(UnityEngine_Vector3_o *)&local_d8,
                      (MethodInfo *)0x0);
  uVar1 = (pUVar6->fields).x;
  uVar3 = (pUVar6->fields).y;
  fVar19 = (pUVar6->fields).z - fVar19;
  fVar15 = (float)uVar1 - (float)uVar2;
  fVar16 = (float)uVar3 - uVar2._4_4_;
  local_d8.y = fVar16;
  local_d8.x = fVar15;
  local_d8.z = fVar19;
  if (fVar16 * fVar16 + fVar15 * fVar15 + fVar19 * fVar19 < 1e-06) {
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar16 = (pUVar4->upVector).fields.y;
    fVar19 = (pUVar4->upVector).fields.z;
    (__return_storage_ptr__->fields).x = (pUVar4->upVector).fields.x;
    (__return_storage_ptr__->fields).y = fVar16;
    (__return_storage_ptr__->fields).z = fVar19;
  }
  else {
    fVar8 = (float)il2cpp_runtime_helper_180546a40(&local_d8,0);
    if (1e-05 < fVar8) {
      fVar15 = fVar15 / fVar8;
      fVar16 = fVar16 / fVar8;
      fVar19 = fVar19 / fVar8;
    }
    else {
      fVar15 = 0.0;
      fVar16 = 0.0;
      fVar19 = 0.0;
    }
    if (0.9 <= ABS(fVar16)) {
      if (Il2CppMethodInitialized_1843445b8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_1843445b8 = '\x01';
      }
      pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar8 = (pUVar4->rightVector).fields.x;
      fVar9 = (pUVar4->rightVector).fields.y;
      fVar18 = (pUVar4->rightVector).fields.z;
    }
    else {
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar8 = (pUVar4->upVector).fields.x;
      fVar9 = (pUVar4->upVector).fields.y;
      fVar18 = (pUVar4->upVector).fields.z;
    }
    fVar17 = fVar18 * fVar16 - fVar9 * fVar19;
    fVar18 = fVar8 * fVar19 - fVar18 * fVar15;
    fVar8 = fVar9 * fVar15 - fVar8 * fVar16;
    local_e8.y = fVar18;
    local_e8.x = fVar17;
    local_e8.z = fVar8;
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    fVar9 = (float)il2cpp_runtime_helper_180546a40(&local_e8,0);
    if (fVar9 <= 1e-05) {
      pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar17 = (pUVar4->zeroVector).fields.x;
      fVar18 = (pUVar4->zeroVector).fields.y;
      fVar8 = (pUVar4->zeroVector).fields.z;
    }
    else {
      fVar17 = fVar17 / fVar9;
      fVar18 = fVar18 / fVar9;
      fVar8 = fVar8 / fVar9;
    }
    fVar20 = 3.4028235e+38;
    iVar7 = 0;
    fVar9 = fVar17;
    local_res8 = fVar18;
    local_res10 = fVar8;
    do {
      fVar12 = (float)iVar7 * 3.1415927 * 0.03125;
      fVar10 = (float)il2cpp_runtime_helper_1804f54c0(fVar12);
      fVar12 = (float)il2cpp_runtime_helper_1804f5fc0(fVar12);
      fVar14 = (fVar18 * fVar15 - fVar17 * fVar16) * fVar12 + fVar8 * fVar10;
      fVar13 = (fVar8 * fVar16 - fVar18 * fVar19) * fVar12 + fVar17 * fVar10;
      fVar10 = (fVar17 * fVar19 - fVar8 * fVar15) * fVar12 + fVar18 * fVar10;
      if (Il2CppMethodInitialized_18433de5b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_18433de5b = '\x01';
      }
      local_e8.y = fVar10;
      local_e8.x = fVar13;
      pUVar5 = TypeInfo_UnityEngine_Quaternion->static_fields;
      local_c8[0].x = (pUVar5->identityQuaternion).fields.x;
      local_c8[0].y = (pUVar5->identityQuaternion).fields.y;
      local_c8[0].z = (pUVar5->identityQuaternion).fields.z;
      local_c8[0].w = (pUVar5->identityQuaternion).fields.w;
      local_e8.z = fVar14;
      fVar12 = Characters_TitanLimbFallEffect__GetSupportHeight
                         (__this,(UnityEngine_Quaternion_o *)local_c8,(UnityEngine_Vector3_o *)&local_e8,
                          (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433de5b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_18433de5b = '\x01';
      }
      local_d8.z = -fVar14;
      pUVar5 = TypeInfo_UnityEngine_Quaternion->static_fields;
      local_d8.y = -fVar10;
      local_d8.x = -fVar13;
      local_c8[0].x = (pUVar5->identityQuaternion).fields.x;
      local_c8[0].y = (pUVar5->identityQuaternion).fields.y;
      local_c8[0].z = (pUVar5->identityQuaternion).fields.z;
      local_c8[0].w = (pUVar5->identityQuaternion).fields.w;
      fVar11 = Characters_TitanLimbFallEffect__GetSupportHeight
                         (__this,(UnityEngine_Quaternion_o *)local_c8,(UnityEngine_Vector3_o *)&local_d8,
                          (MethodInfo *)0x0);
      if (fVar11 + fVar12 < fVar20) {
        fVar9 = fVar13;
        fVar20 = fVar11 + fVar12;
        local_res8 = fVar10;
        local_res10 = fVar14;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x20);
    (__return_storage_ptr__->fields).x = fVar9;
    (__return_storage_ptr__->fields).y = local_res8;
    (__return_storage_ptr__->fields).z = local_res10;
  }
  return __return_storage_ptr__;
}


// Characters.TitanLimbFallEffect$$GetFarthestVertex
// il2cpp: UnityEngine_Vector3_o Characters_TitanLimbFallEffect__GetFarthestVertex (Characters_TitanLimbFallEffect_o* __this, UnityEngine_Vector3_o origin, const MethodInfo* method);
// 0x1821b1c30
// eh: try 0x1821b1cf5..0x1821b1d6a -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821b1d7b: mov rdx, qword ptr [rip + 0x1eeaf8e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose
// asm:   0x1821b1d82: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821b1d87: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821b1d8c: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821b1d91: test rcx, rcx
// asm:   0x1821b1d94: jne 0x1821b1dc1
// asm:   0x1821b1d96: mov rdi, qword ptr [rsp + 0x90]
// asm:   0x1821b1dc1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

UnityEngine_Vector3_o *
Characters_TitanLimbFallEffect__GetFarthestVertex
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_TitanLimbFallEffect_o *__this,
          UnityEngine_Vector3_o *origin,MethodInfo *method)

{
  System_Collections_Generic_List_Vector3__o *__this_00;
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined8 uStack_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (Il2CppMethodInitialized_184346e6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
    Il2CppMethodInitialized_184346e6a = '\x01';
  }
  local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_40._8_8_ = 0;
  local_30 = (Il2CppObject *)0x0;
  uStack_28 = 0;
  fVar5 = (origin->fields).y;
  (__return_storage_ptr__->fields).x = (origin->fields).x;
  (__return_storage_ptr__->fields).y = fVar5;
  (__return_storage_ptr__->fields).z = (origin->fields).z;
  __this_00 = (__this->fields)._supportVertices;
  if (__this_00 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)__this_00,
               (MethodInfo_930B50 *)MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
    local_40._0_8_ = local_60._0_8_;
    local_40._8_8_ = local_60._8_8_;
    local_30 = local_50;
    uStack_28 = uStack_48;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    fVar5 = 0.0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_ProbeBrickPool_BrickChunkAlloc___MoveNext
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                         (MethodInfo_15296D0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext);
      if (!bVar1) break;
      fVar3 = (float)local_30 - (origin->fields).x;
      fVar4 = local_30._4_4_ - (origin->fields).y;
      fVar2 = (float)uStack_28 - (origin->fields).z;
      fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      if (fVar5 < fVar2) {
        (__return_storage_ptr__->fields).x = (float)local_30;
        (__return_storage_ptr__->fields).y = local_30._4_4_;
        (__return_storage_ptr__->fields).z = (float)uStack_28;
        fVar5 = fVar2;
      }
    }
    System_Collections_Generic_List_Enumerator_Vector3___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
               MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$Bake
// il2cpp: void Characters_TitanLimbFallEffect__Bake (Characters_TitanLimbFallEffect_o* __this, UnityEngine_SkinnedMeshRenderer_o* source, UnityEngine_Mesh_o* mesh, UnityEngine_Mesh_o* destination, const MethodInfo* method);
// 0x1821b12b0
// eh: try 0x1821b1324..0x1821b13df -> pad 0x183317fd0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821b135f: mov rcx, qword ptr [rsp + 0x78]
// asm:   0x1821b1364: test rcx, rcx
// asm:   0x1821b1367: je 0x1821b13c7
// asm:   0x1821b1369: xor r8d, r8d
// asm:   0x1821b136c: mov rdx, qword ptr [rsp + 0x20]
// asm:   0x1821b1371: call 0x182ef8870  ; UnityEngine_SkinnedMeshRenderer__set_sharedMesh()
// asm:   0x1821b1376: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821b137b: test rcx, rcx
// asm:   0x1821b137e: jne 0x1821b13df
// asm:   0x1821b1380: mov rbx, qword ptr [rsp + 0x88]
// asm:   0x1821b1388: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x1821b13df: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_TitanLimbFallEffect__Bake
               (Characters_TitanLimbFallEffect_o *__this,UnityEngine_SkinnedMeshRenderer_o *source,
               UnityEngine_Mesh_o *mesh,UnityEngine_Mesh_o *destination,MethodInfo *method)

{
  UnityEngine_SkinnedMeshRenderer_o *local_res10 [2];
  UnityEngine_Mesh_o *local_res20;
  UnityEngine_Mesh_o *local_48 [2];
  undefined8 local_38;
  UnityEngine_SkinnedMeshRenderer_o **local_30;
  UnityEngine_Mesh_o **local_28;
  
  local_48[0] = (UnityEngine_Mesh_o *)0x0;
  local_res10[0] = source;
  local_res20 = destination;
  if (source != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
    local_48[0] = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(source,(MethodInfo *)0x0);
    local_38 = 0;
    local_30 = local_res10;
    local_28 = local_48;
    if (local_res10[0] == (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_SkinnedMeshRenderer__set_sharedMesh(local_res10[0],mesh,(MethodInfo *)0x0);
    if (local_res10[0] == (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_SkinnedMeshRenderer__BakeMesh_2ef8130(local_res10[0],destination,true,(MethodInfo *)0x0);
    if (local_res10[0] == (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_SkinnedMeshRenderer__set_sharedMesh(local_res10[0],local_48[0],(MethodInfo *)0x0);
    if (destination != (UnityEngine_Mesh_o *)0x0) {
      UnityEngine_Mesh__GetVertices(destination,(__this->fields)._vertices,(MethodInfo *)0x0);
      UnityEngine_Mesh__SetUVs_2eed4e0(destination,3,(__this->fields)._vertices,(MethodInfo *)0x0);
      UnityEngine_Mesh__RecalculateBounds(destination,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$CopyMaterials
// il2cpp: void Characters_TitanLimbFallEffect__CopyMaterials (System_Collections_Generic_List_Material__o* materials, System_Collections_Generic_List_Material__o* sources, bool growth, float size, const MethodInfo* method);
// 0x1821b13f0
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821b153e: nop 
// asm:   0x1821b17d2: movaps xmm0, xmm8
// asm:   0x1821b17d6: jmp 0x1821b17db
// asm:   0x1821b180b: mov r14, qword ptr [rip + 0x1f2a676]  ; "_BaseMap"
// asm:   0x1821b1812: mov rsi, r14
// asm:   0x1821b1815: jmp 0x1821b183b
// asm:   0x1821b1834: mov rsi, qword ptr [rip + 0x1f428cd]  ; "_MainTex"
// asm:   0x1821b1900: mov rsi, qword ptr [rip + 0x1f2a3c9]  ; "_BaseColor"
// asm:   0x1821b1907: mov r8, rsi
// asm:   0x1821b190a: jmp 0x1821b1930
// asm:   0x1821b1929: mov r8, qword ptr [rip + 0x1f2eaf0]  ; "_Color"

void Characters_TitanLimbFallEffect__CopyMaterials
               (System_Collections_Generic_List_Material__o *materials,
               System_Collections_Generic_List_Material__o *sources,bool growth,float size,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_array *pUVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  UnityEngine_Material_o *pUVar6;
  UnityEngine_Material_o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar7;
  UnityEngine_Texture_o *value;
  UnityEngine_Vector2_Fields UVar8;
  UnityEngine_Color_o *pUVar9;
  System_String_o *pSVar10;
  int index;
  float in_XMM1_Da;
  float fVar11;
  UnityEngine_Vector4_o local_98;
  UnityEngine_Vector4_Fields local_88;
  UnityEngine_Color_o local_78 [5];
  
  if (Il2CppMethodInitialized_184346e6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"_Regrowth");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG/TitanWound");
    il2cpp_codegen_initialize_runtime_metadata(&"_Layer");
    il2cpp_codegen_initialize_runtime_metadata(&"_Color");
    il2cpp_codegen_initialize_runtime_metadata(&"_MainTex");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseColor");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseMap");
    il2cpp_codegen_initialize_runtime_metadata(&"_DissolveScale");
    il2cpp_codegen_initialize_runtime_metadata(&"_VertexColor");
    il2cpp_codegen_initialize_runtime_metadata(&"_Flesh");
    Il2CppMethodInitialized_184346e6b = '\x01';
  }
  if ((materials != (System_Collections_Generic_List_Material__o *)0x0) &&
     (sources != (System_Collections_Generic_List_Material__o *)0x0)) {
    while ((materials->fields)._size < (sources->fields)._size) {
      if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
      }
      shader = TypeInfo_Characters_TitanLimbFallEffect->static_fields->_shader;
      pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
      UnityEngine_Material___ctor(pUVar6,shader,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_Material_Add;
      piVar1 = &(materials->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (materials->fields)._items;
      if (pUVar3 == (UnityEngine_Material_array *)0x0) goto label_1821b1a2c;
      uVar2 = (materials->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (materials->fields)._size = uVar2 + 1;
        if ((uint)pUVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pUVar3->m_Items[(int)uVar2] = pUVar6;
        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,pUVar6);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)materials,(Il2CppObject *)pUVar6,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
    }
    while ((sources->fields)._size < (materials->fields)._size) {
      pUVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)materials,
                          (materials->fields)._size + -1,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Material_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)materials,(materials->fields)._size + -1,
                 (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_Material_RemoveAt);
    }
    index = 0;
    while( true ) {
      while( true ) {
        if ((sources->fields)._size <= index) {
          return;
        }
        pUVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)sources,index,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Material_get_Item)
        ;
        __this = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)materials,index,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Material_get_Item)
        ;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (__this == (UnityEngine_Material_o *)0x0) goto label_1821b1a2c;
        if (!bVar5) break;
        local_88.x = 0.0;
        local_88.y = 0.0;
        local_88.z = 0.0;
        local_88.w = 0.0;
        UnityEngine_Material__SetVector
                  (__this,"_BaseColor",(UnityEngine_Vector4_o *)&local_88,(MethodInfo *)0x0);
        UnityEngine_Material__SetFloat(__this,"_Flesh",0.0,(MethodInfo *)0x0);
        index = index + 1;
      }
      UnityEngine_Material__CopyPropertiesFromMaterial(__this,pUVar6,(MethodInfo *)0x0);
      if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
      }
      UnityEngine_Material__set_shader
                (__this,TypeInfo_Characters_TitanLimbFallEffect->static_fields->_shader,(MethodInfo *)0x0);
      UnityEngine_Material__set_renderQueue(__this,2000,(MethodInfo *)0x0);
      UnityEngine_Material__SetFloat(__this,"_Layer",0.0,(MethodInfo *)0x0);
      UnityEngine_Material__SetFloat(__this,"_Flesh",1.0,(MethodInfo *)0x0);
      if ((pUVar6 == (UnityEngine_Material_o *)0x0) ||
         (__this_00 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(pUVar6,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_Object_o *)0x0)) break;
      pSVar7 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      bVar5 = System_String__op_Equality(pSVar7,"AoTTG/TitanWound",(MethodInfo *)0x0);
      if (bVar5) {
        fVar11 = 1.0;
      }
      else {
        fVar11 = 0.0;
      }
      UnityEngine_Material__SetFloat(__this,"_VertexColor",fVar11,(MethodInfo *)0x0);
      if (growth) {
        fVar11 = 1.0;
      }
      else {
        fVar11 = 0.0;
      }
      UnityEngine_Material__SetFloat(__this,"_Regrowth",fVar11,(MethodInfo *)0x0);
      fVar11 = size;
      if (size <= 0.001) {
        fVar11 = 0.001;
      }
      UnityEngine_Material__SetFloat(__this,"_DissolveScale",8.0 / fVar11,(MethodInfo *)0x0);
      bVar5 = UnityEngine_Material__HasProperty_2ee2c00(pUVar6,"_BaseMap",(MethodInfo *)0x0);
      pSVar7 = "_BaseMap";
      if ((bVar5) ||
         (bVar5 = UnityEngine_Material__HasProperty_2ee2c00(pUVar6,"_MainTex",(MethodInfo *)0x0),
         pSVar7 = "_MainTex", bVar5)) {
        pSVar10 = "_BaseMap";
        if (pSVar7 == (System_String_o *)0x0) goto label_1821b1878;
        value = UnityEngine_Material__GetTexture(pUVar6,pSVar7,(MethodInfo *)0x0);
        UnityEngine_Material__SetTexture(__this,pSVar10,value,(MethodInfo *)0x0);
        pSVar10 = "_BaseMap";
        UVar8 = (UnityEngine_Vector2_Fields)
                UnityEngine_Material__GetTextureScale(pUVar6,pSVar7,(MethodInfo *)0x0);
      }
      else {
        pSVar7 = (System_String_o *)0x0;
label_1821b1878:
        UnityEngine_Material__SetTexture
                  (__this,"_BaseMap",(UnityEngine_Texture_o *)0x0,(MethodInfo *)0x0);
        pSVar10 = "_BaseMap";
        UVar8 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_181882d90(0);
      }
      UnityEngine_Material__SetTextureScale(__this,pSVar10,(UnityEngine_Vector2_o)UVar8,(MethodInfo *)0x0);
      pSVar10 = "_BaseMap";
      if (pSVar7 == (System_String_o *)0x0) {
        UVar8 = (UnityEngine_Vector2_Fields)
                UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                          ((UnityEngine_Rendering_MousePositionDebug_o *)0x0,in_XMM1_Da,(MethodInfo *)UVar8);
      }
      else {
        UVar8 = (UnityEngine_Vector2_Fields)
                UnityEngine_Material__GetTextureOffset(pUVar6,pSVar7,(MethodInfo *)0x0);
      }
      UnityEngine_Material__SetTextureOffset(__this,pSVar10,(UnityEngine_Vector2_o)UVar8,(MethodInfo *)0x0);
      bVar5 = UnityEngine_Material__HasProperty_2ee2c00(pUVar6,"_BaseColor",(MethodInfo *)0x0);
      pSVar7 = "_BaseColor";
      if (((bVar5) ||
          (bVar5 = UnityEngine_Material__HasProperty_2ee2c00(pUVar6,"_Color",(MethodInfo *)0x0),
          pSVar7 = "_Color", bVar5)) &&
         (pSVar10 = "_BaseColor", pSVar7 != (System_String_o *)0x0)) {
        pUVar9 = UnityEngine_Material__GetColor(local_78,pUVar6,pSVar7,(MethodInfo *)0x0);
        local_98.fields.x = (pUVar9->fields).r;
        in_XMM1_Da = (pUVar9->fields).g;
        local_98.fields.z = (pUVar9->fields).b;
        local_98.fields.w = (pUVar9->fields).a;
      }
      else {
        local_98.fields.x = 1.0;
        in_XMM1_Da = 1.0;
        local_98.fields.z = 1.0;
        local_98.fields.w = 1.0;
        pSVar10 = "_BaseColor";
      }
      local_98.fields.y = in_XMM1_Da;
      UnityEngine_Material__SetVector(__this,pSVar10,&local_98,(MethodInfo *)0x0);
      index = index + 1;
    }
  }
label_1821b1a2c:
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$PrepareSteam
// il2cpp: void Characters_TitanLimbFallEffect__PrepareSteam (Characters_TitanLimbFallEffect_o* __this, UnityEngine_SkinnedMeshRenderer_o* source, float size, const MethodInfo* method);
// 0x1821b5310

void Characters_TitanLimbFallEffect__PrepareSteam
               (Characters_TitanLimbFallEffect_o *__this,UnityEngine_SkinnedMeshRenderer_o *source,float size,
               MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  System_String_o *path;
  bool bVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_ParticleSystem_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_Quaternion_o *pUVar9;
  UnityEngine_Object_o *original;
  UnityEngine_ParticleSystem_EmissionModule_o local_res8;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346e6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_GameObject_40a9800);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSteamEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Particles/Prefabs/ArmSmokeParticle");
    Il2CppMethodInitialized_184346e6c = '\x01';
  }
  pUVar6 = (__this->fields)._steam;
  local_res8.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar4 = ApplicationManagers_ResourceManager__LoadAsset(path,"Titans/Particles/Prefabs/ArmSmokeParticle",true,(MethodInfo *)0x0)
    ;
    original = (UnityEngine_Object_o *)0x0;
    if (pUVar4 != (UnityEngine_Object_o *)0x0) {
      if (pUVar4->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
        original = pUVar4;
      }
      if (original == (UnityEngine_Object_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
      }
    }
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    __this_00 = UnityEngine_Object__Instantiate_object__746ab0
                          ((Il2CppObject *)original,pUVar5,
                           (MethodInfo_746AB0 *)MethodInfo_UnityEngine_Object_Instantiate_GameObject_40a9800);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_1821b5648;
    pUVar6 = UnityEngine_GameObject__GetComponent_object_
                       (__this_00,
                        (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem);
    (__this->fields)._steam = pUVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._steam,pUVar6);
  }
  pUVar6 = (__this->fields)._steam;
  if ((TypeInfo_Characters_TitanSteamEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSteamEffect);
  }
  Characters_TitanSteamEffect__Configure(pUVar6,size + size,false,42.0,(MethodInfo *)0x0);
  pUVar6 = (__this->fields)._steam;
  if (pUVar6 != (UnityEngine_ParticleSystem_o *)0x0) {
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
    if (source != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
      pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        pUVar8 = UnityEngine_Transform__get_position
                           ((UnityEngine_Vector3_o *)&local_38,pUVar7,(MethodInfo *)0x0);
        uVar1._0_4_ = (pUVar8->fields).x;
        uVar1._4_4_ = (pUVar8->fields).y;
        fVar2 = (pUVar8->fields).z;
        pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          pUVar9 = UnityEngine_Transform__get_rotation
                             ((UnityEngine_Quaternion_o *)local_28,pUVar7,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
            local_28[0].x = (pUVar9->fields).x;
            local_28[0].y = (pUVar9->fields).y;
            local_28[0].z = (pUVar9->fields).z;
            local_28[0].w = (pUVar9->fields).w;
            local_38._0_8_ = uVar1;
            local_38.z = fVar2;
            UnityEngine_Transform__SetPositionAndRotation
                      (pUVar5,(UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                       (MethodInfo *)0x0);
            pUVar6 = (__this->fields)._steam;
            if (pUVar6 != (UnityEngine_ParticleSystem_o *)0x0) {
              pUVar5 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
              pUVar7 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                pUVar8 = UnityEngine_Transform__get_lossyScale
                                   ((UnityEngine_Vector3_o *)local_28,pUVar7,(MethodInfo *)0x0);
                if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                  local_38.x = (pUVar8->fields).x;
                  local_38.y = (pUVar8->fields).y;
                  local_38.z = (pUVar8->fields).z;
                  UnityEngine_Transform__set_localScale
                            (pUVar5,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
                  Characters_TitanSteamEffect__SetSurface
                            ((__this->fields)._steam,(__this->fields)._mesh,(MethodInfo *)0x0);
                  pUVar6 = (__this->fields)._steam;
                  if (pUVar6 != (UnityEngine_ParticleSystem_o *)0x0) {
                    local_res8.fields.m_ParticleSystem =
                         (UnityEngine_ParticleSystem_EmissionModule_Fields)
                         UnityEngine_ParticleSystem__get_noise(pUVar6,(MethodInfo *)0x0);
                    UnityEngine_ParticleSystem_EmissionModule__set_enabled
                              (&local_res8,false,(MethodInfo *)0x0);
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
label_1821b5648:
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$LateUpdate
// il2cpp: void Characters_TitanLimbFallEffect__LateUpdate (Characters_TitanLimbFallEffect_o* __this, const MethodInfo* method);
// 0x1821b3bb0
// eh: try 0x1821b3fc0..0x1821b40a2 -> pad 0x18333f1b0 catch Il2CppExceptionWrapper
// eh: try 0x1821b40d4..0x1821b40ea -> pad 0x180358120 cleanup
// eh: try 0x1821b413b..0x1821b4141 -> pad 0x18333f1b0 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821b40b3: mov rdx, qword ptr [rip + 0x1ef3f46]  ; MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_Dispose
// asm:   0x1821b40ba: mov rcx, qword ptr [rsp + 0x88]
// asm:   0x1821b40c2: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821b40c7: mov rcx, qword ptr [rsp + 0x80]
// asm:   0x1821b40cf: test rcx, rcx
// asm:   0x1821b40d2: jne 0x1821b4141
// asm:   0x1821b40d4: jmp 0x1821b410b
// asm:   0x1821b4141: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333f1b0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f1b5: push rbp
// asm:   0x18333f1b6: sub rsp, 0x40
// asm:   0x18333f1ba: mov rbp, rdx
// asm:   0x18333f1bd: mov rax, qword ptr [rbp + 0xf0]
// asm:   0x18333f1c4: mov rcx, qword ptr [rax]
// asm:   0x18333f1c7: mov qword ptr [rbp + 0x80], rcx
// asm:   0x18333f1ce: movabs rax, 0
// asm:   0x18333f1d8: add rsp, 0x40
// asm:   0x18333f1dc: pop rbp
// asm:   0x18333f1dd: ret 

void Characters_TitanLimbFallEffect__LateUpdate(Characters_TitanLimbFallEffect_o *__this,MethodInfo *method)

{
  UnityEngine_ParticleSystem_o *pUVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_TitanLimbFallEffect_Attachment__o *__this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  Il2CppObject *pIVar10;
  bool bVar11;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Matrix4x4_o *pUVar12;
  UnityEngine_GameObject_o *__this_02;
  float fVar13;
  float dissolve;
  UnityEngine_ParticleSystem_EmissionModule_o local_res8 [4];
  void *local_178;
  Il2CppClass *pIStack_170;
  void *local_168;
  Il2CppClass *pIStack_160;
  void *local_158;
  Il2CppClass *pIStack_150;
  void *local_148;
  Il2CppClass *pIStack_140;
  undefined1 local_138 [16];
  Il2CppObject *local_128;
  System_Collections_Generic_List_Enumerator_object__o local_120;
  UnityEngine_Matrix4x4_Fields local_108;
  UnityEngine_Matrix4x4_o local_c0 [2];
  
  if (Il2CppMethodInitialized_184346e6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_MoveNext)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Attachment_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e6d = '\x01';
  }
  local_res8[0].fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_120.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_120.fields._index = 0;
  local_120.fields._version = 0;
  local_120.fields._current = (Il2CppObject *)0x0;
  fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  Characters_TitanLimbFallEffect__UpdateMotion(__this,fVar13,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._blood;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar11) && ((__this->fields)._dissolveDelay <= (__this->fields)._age)) {
    pUVar1 = (__this->fields)._blood;
    if (pUVar1 == (UnityEngine_ParticleSystem_o *)0x0) goto label_1821b4135;
    bVar11 = UnityEngine_ParticleSystem__get_isEmitting(pUVar1,(MethodInfo *)0x0);
    if (bVar11) {
      pUVar1 = (__this->fields)._blood;
      if (pUVar1 == (UnityEngine_ParticleSystem_o *)0x0) goto label_1821b4135;
      UnityEngine_ParticleSystem__Stop(pUVar1,true,1,(MethodInfo *)0x0);
    }
  }
  fVar13 = (__this->fields)._age - (__this->fields)._dissolveDelay;
  if (4.3 <= fVar13) {
    pUVar1 = (__this->fields)._steam;
    if (pUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
      UnityEngine_ParticleSystem__Stop(pUVar1,true,0,(MethodInfo *)0x0);
      __this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    dissolve = fVar13 / 3.0;
    if (dissolve < 0.0) {
      dissolve = 0.0;
    }
    else if (1.0 < dissolve) {
      dissolve = 1.0;
    }
    pUVar1 = (__this->fields)._steam;
    if (pUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
      local_res8[0].fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           UnityEngine_ParticleSystem__get_noise(pUVar1,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_EmissionModule__set_enabled
                (local_res8,0.0 < fVar13 && fVar13 < 3.0,(MethodInfo *)0x0);
      bVar11 = UnityEngine_ParticleSystem_EmissionModule__get_enabled(local_res8,(MethodInfo *)0x0);
      if (bVar11) {
        pUVar1 = (__this->fields)._steam;
        if (pUVar1 == (UnityEngine_ParticleSystem_o *)0x0) goto label_1821b4135;
        bVar11 = UnityEngine_ParticleSystem__get_isPlaying(pUVar1,(MethodInfo *)0x0);
        if (!bVar11) {
          pUVar1 = (__this->fields)._steam;
          if (pUVar1 == (UnityEngine_ParticleSystem_o *)0x0) goto label_1821b4135;
          UnityEngine_ParticleSystem__Play(pUVar1,false,(MethodInfo *)0x0);
        }
      }
      if (3.0 <= fVar13) {
        return;
      }
      __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        pUVar12 = UnityEngine_Transform__get_localToWorldMatrix(local_c0,__this_01,(MethodInfo *)0x0);
        local_108.m00 = (__this->fields)._meshOffset.fields.m00;
        local_108.m10 = (__this->fields)._meshOffset.fields.m10;
        local_108.m20 = (__this->fields)._meshOffset.fields.m20;
        local_108.m30 = (__this->fields)._meshOffset.fields.m30;
        local_108.m01 = (__this->fields)._meshOffset.fields.m01;
        local_108.m11 = (__this->fields)._meshOffset.fields.m11;
        local_108.m21 = (__this->fields)._meshOffset.fields.m21;
        local_108.m31 = (__this->fields)._meshOffset.fields.m31;
        local_108.m02 = (__this->fields)._meshOffset.fields.m02;
        local_108.m12 = (__this->fields)._meshOffset.fields.m12;
        local_108.m22 = (__this->fields)._meshOffset.fields.m22;
        local_108.m32 = (__this->fields)._meshOffset.fields.m32;
        local_108.m03 = (__this->fields)._meshOffset.fields.m03;
        local_108.m13 = (__this->fields)._meshOffset.fields.m13;
        local_108.m23 = (__this->fields)._meshOffset.fields.m23;
        local_108.m33 = (__this->fields)._meshOffset.fields.m33;
        local_178._0_4_ = (pUVar12->fields).m00;
        local_178._4_4_ = (pUVar12->fields).m10;
        pIStack_170._0_4_ = (pUVar12->fields).m20;
        pIStack_170._4_4_ = (pUVar12->fields).m30;
        local_168._0_4_ = (pUVar12->fields).m01;
        local_168._4_4_ = (pUVar12->fields).m11;
        pIStack_160._0_4_ = (pUVar12->fields).m21;
        pIStack_160._4_4_ = (pUVar12->fields).m31;
        local_158._0_4_ = (pUVar12->fields).m02;
        local_158._4_4_ = (pUVar12->fields).m12;
        pIStack_150._0_4_ = (pUVar12->fields).m22;
        pIStack_150._4_4_ = (pUVar12->fields).m32;
        local_148._0_4_ = (pUVar12->fields).m03;
        local_148._4_4_ = (pUVar12->fields).m13;
        pIStack_140._0_4_ = (pUVar12->fields).m23;
        pIStack_140._4_4_ = (pUVar12->fields).m33;
        pUVar12 = UnityEngine_Matrix4x4__op_Multiply
                            (local_c0,(UnityEngine_Matrix4x4_o *)&local_178,
                             (UnityEngine_Matrix4x4_o *)&local_108,(MethodInfo *)0x0);
        uVar2._0_4_ = (pUVar12->fields).m00;
        uVar2._4_4_ = (pUVar12->fields).m10;
        uVar3._0_4_ = (pUVar12->fields).m20;
        uVar3._4_4_ = (pUVar12->fields).m30;
        uVar4._0_4_ = (pUVar12->fields).m01;
        uVar4._4_4_ = (pUVar12->fields).m11;
        uVar5._0_4_ = (pUVar12->fields).m21;
        uVar5._4_4_ = (pUVar12->fields).m31;
        uVar6._0_4_ = (pUVar12->fields).m02;
        uVar6._4_4_ = (pUVar12->fields).m12;
        uVar7._0_4_ = (pUVar12->fields).m22;
        uVar7._4_4_ = (pUVar12->fields).m32;
        uVar8._0_4_ = (pUVar12->fields).m03;
        uVar8._4_4_ = (pUVar12->fields).m13;
        uVar9._0_4_ = (pUVar12->fields).m23;
        uVar9._4_4_ = (pUVar12->fields).m33;
        local_178 = (void *)uVar2;
        pIStack_170 = (Il2CppClass *)uVar3;
        local_168 = (void *)uVar4;
        pIStack_160 = (Il2CppClass *)uVar5;
        local_158 = (void *)uVar6;
        pIStack_150 = (Il2CppClass *)uVar7;
        local_148 = (void *)uVar8;
        pIStack_140 = (Il2CppClass *)uVar9;
        Characters_TitanLimbFallEffect__Draw
                  (__this,(__this->fields)._mesh,(__this->fields)._materials,(__this->fields)._properties,
                   (UnityEngine_Matrix4x4_o *)&local_178,dissolve,(MethodInfo *)0x0);
        x = (UnityEngine_Object_o *)(__this->fields)._tissueMesh;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar11 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar11) {
          local_178 = (void *)uVar2;
          pIStack_170 = (Il2CppClass *)uVar3;
          local_168 = (void *)uVar4;
          pIStack_160 = (Il2CppClass *)uVar5;
          local_158 = (void *)uVar6;
          pIStack_150 = (Il2CppClass *)uVar7;
          local_148 = (void *)uVar8;
          pIStack_140 = (Il2CppClass *)uVar9;
          Characters_TitanLimbFallEffect__Draw
                    (__this,(__this->fields)._tissueMesh,(__this->fields)._tissueMaterials,
                     (__this->fields)._properties,(UnityEngine_Matrix4x4_o *)&local_178,dissolve,
                     (MethodInfo *)0x0);
        }
        if ((__this->fields)._hasGrowth != false) {
          local_178 = (void *)uVar2;
          pIStack_170 = (Il2CppClass *)uVar3;
          local_168 = (void *)uVar4;
          pIStack_160 = (Il2CppClass *)uVar5;
          local_158 = (void *)uVar6;
          pIStack_150 = (Il2CppClass *)uVar7;
          local_148 = (void *)uVar8;
          pIStack_140 = (Il2CppClass *)uVar9;
          Characters_TitanLimbFallEffect__Draw
                    (__this,(__this->fields)._growthMesh,(__this->fields)._growthMaterials,
                     (__this->fields)._growthProperties,(UnityEngine_Matrix4x4_o *)&local_178,dissolve,
                     (MethodInfo *)0x0);
        }
        __this_00 = (__this->fields)._attachments;
        if (__this_00 != (System_Collections_Generic_List_TitanLimbFallEffect_Attachment__o *)0x0) {
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_138,
                     (System_Collections_Generic_List_T__o *)__this_00,
                     (MethodInfo_91F180 *)
                     MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Attachment_GetEnumerator);
          local_120.fields._list = (System_Collections_Generic_List_T__o *)local_138._0_8_;
          local_120.fields._index = local_138._8_4_;
          local_120.fields._version = local_138._12_4_;
          local_120.fields._current = local_128;
          local_138._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_138._8_8_ = &local_120;
          while( true ) {
            bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&local_120,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_MoveNext
                               );
            pIVar10 = local_120.fields._current;
            if (!bVar11) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_120,
                         MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_Dispose
                        );
              return;
            }
            if (local_120.fields._current == (Il2CppObject *)0x0) break;
            local_178 = local_120.fields._current[1].monitor;
            pIStack_170 = local_120.fields._current[2].klass;
            local_168 = local_120.fields._current[2].monitor;
            pIStack_160 = local_120.fields._current[3].klass;
            local_158 = local_120.fields._current[3].monitor;
            pIStack_150 = local_120.fields._current[4].klass;
            local_148 = local_120.fields._current[4].monitor;
            pIStack_140 = local_120.fields._current[5].klass;
            local_108._0_8_ = uVar2;
            local_108._8_8_ = uVar3;
            local_108._16_8_ = uVar4;
            local_108._24_8_ = uVar5;
            local_108._32_8_ = uVar6;
            local_108._40_8_ = uVar7;
            local_108._48_8_ = uVar8;
            local_108._56_8_ = uVar9;
            pUVar12 = UnityEngine_Matrix4x4__op_Multiply
                                (local_c0,(UnityEngine_Matrix4x4_o *)&local_108,
                                 (UnityEngine_Matrix4x4_o *)&local_178,(MethodInfo *)0x0);
            local_178._0_4_ = (pUVar12->fields).m00;
            local_178._4_4_ = (pUVar12->fields).m10;
            pIStack_170._0_4_ = (pUVar12->fields).m20;
            pIStack_170._4_4_ = (pUVar12->fields).m30;
            local_168._0_4_ = (pUVar12->fields).m01;
            local_168._4_4_ = (pUVar12->fields).m11;
            pIStack_160._0_4_ = (pUVar12->fields).m21;
            pIStack_160._4_4_ = (pUVar12->fields).m31;
            local_158._0_4_ = (pUVar12->fields).m02;
            local_158._4_4_ = (pUVar12->fields).m12;
            pIStack_150._0_4_ = (pUVar12->fields).m22;
            pIStack_150._4_4_ = (pUVar12->fields).m32;
            local_148._0_4_ = (pUVar12->fields).m03;
            local_148._4_4_ = (pUVar12->fields).m13;
            pIStack_140._0_4_ = (pUVar12->fields).m23;
            pIStack_140._4_4_ = (pUVar12->fields).m33;
            Characters_TitanLimbFallEffect__Draw
                      (__this,(UnityEngine_Mesh_o *)pIVar10[1].klass,pIVar10[5].monitor,
                       (UnityEngine_MaterialPropertyBlock_o *)pIVar10[6].klass,
                       (UnityEngine_Matrix4x4_o *)&local_178,dissolve,(MethodInfo *)0x0);
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
label_1821b4135:
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$UpdateMotion
// il2cpp: void Characters_TitanLimbFallEffect__UpdateMotion (Characters_TitanLimbFallEffect_o* __this, float deltaTime, const MethodInfo* method);
// 0x1821b57e0
// asm: 13 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821b60a5: xor r9d, r9d
// asm:   0x1821b60a8: movss dword ptr [rsp + 0x60], xmm15
// asm:   0x1821b60af: lea r8, [rsp + 0x60]
// asm:   0x1821b60b4: movss dword ptr [rsp + 0x64], xmm14
// asm:   0x1821b60bb: lea rdx, [rsp + 0x50]
// asm:   0x1821b60c0: movss dword ptr [rsp + 0x68], xmm13
// asm:   0x1821b60c7: mov rcx, rax
// asm:   0x1821b60ca: movss dword ptr [rsp + 0x6c], xmm12
// asm:   0x1821b60d1: movss dword ptr [rsp + 0x50], xmm8
// asm:   0x1821b60d8: movss dword ptr [rsp + 0x54], xmm9
// asm:   0x1821b60df: movss dword ptr [rsp + 0x58], xmm11
// asm:   0x1821b60e6: call 0x182f5a910  ; UnityEngine_Transform__SetPositionAndRotation()
// asm:   0x1821b60eb: jmp 0x1821b6024

void Characters_TitanLimbFallEffect__UpdateMotion
               (Characters_TitanLimbFallEffect_o *__this,float deltaTime,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar7;
  float fVar11;
  int32_t layerMask;
  Characters_TitanLimbFallEffect_StaticFields *pCVar12;
  UnityEngine_Vector3_StaticFields *pUVar13;
  bool bVar14;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_Vector3_o *pUVar16;
  UnityEngine_Quaternion_o *pUVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  UnityEngine_Vector3_Fields local_128;
  UnityEngine_Quaternion_o local_118;
  UnityEngine_Quaternion_o local_108;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  UnityEngine_RaycastHit_o local_e8 [4];
  
  if (Il2CppMethodInitialized_184346e6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    Il2CppMethodInitialized_184346e6e = '\x01';
  }
  local_e8[0].fields.m_Normal.fields.y = 0.0;
  local_e8[0].fields.m_Normal.fields.z = 0.0;
  local_e8[0].fields.m_FaceID = 0;
  local_e8[0].fields.m_Distance = 0.0;
  local_e8[0].fields.m_UV.fields.x = 0.0;
  local_e8[0].fields.m_UV.fields.y = 0.0;
  local_e8[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_e8[0].fields.m_Point.fields.x = 0.0;
  local_e8[0].fields.m_Point.fields.y = 0.0;
  local_e8[0].fields.m_Point.fields.z = 0.0;
  local_e8[0].fields.m_Normal.fields.x = 0.0;
  (__this->fields)._age = deltaTime + (__this->fields)._age;
  if ((__this->fields)._landed != false) {
    fVar25 = (__this->fields)._groundAge;
    (__this->fields)._groundAge = deltaTime + fVar25;
    if (fVar25 < 0.25) {
      Characters_TitanLimbFallEffect__SetGroundPose(__this,(MethodInfo *)0x0);
    }
    return;
  }
  pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
    pUVar16 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_128,pUVar15,(MethodInfo *)0x0);
    fVar25 = (__this->fields)._velocity.fields.x;
    fVar21 = (__this->fields)._velocity.fields.y;
    fVar20 = (__this->fields)._velocity.fields.z;
    local_118.fields.x = (pUVar16->fields).x;
    fVar19 = (pUVar16->fields).y;
    local_118.fields.z = (pUVar16->fields).z;
    if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
    }
    pCVar12 = TypeInfo_Characters_TitanLimbFallEffect->static_fields;
    fVar1 = (pCVar12->Gravity).fields.x;
    uVar4 = (pCVar12->Gravity).fields.x;
    uVar8 = (pCVar12->Gravity).fields.y;
    fVar2 = (pCVar12->Gravity).fields.z;
    fVar23 = (pCVar12->Gravity).fields.y;
    fVar22 = (__this->fields)._velocity.fields.z;
    uVar5 = (__this->fields)._velocity.fields.x;
    uVar9 = (__this->fields)._velocity.fields.y;
    fVar26 = deltaTime * 0.5 * deltaTime;
    fVar24 = (pCVar12->Gravity).fields.z;
    local_128.z = deltaTime * (__this->fields)._angularVelocity.fields.z * 0.017453292;
    (__this->fields)._velocity.fields.x = (float)uVar4 * deltaTime + (float)uVar5;
    (__this->fields)._velocity.fields.y = (float)uVar8 * deltaTime + (float)uVar9;
    uVar6 = (__this->fields)._angularVelocity.fields.x;
    uVar10 = (__this->fields)._angularVelocity.fields.y;
    (__this->fields)._velocity.fields.z = deltaTime * fVar2 + fVar22;
    local_128.x = (float)uVar6 * deltaTime * 0.017453292;
    local_128.y = (float)uVar10 * deltaTime * 0.017453292;
    pUVar17 = UnityEngine_Quaternion__Internal_FromEulerRad
                        (&local_108,(UnityEngine_Vector3_o *)&local_128,(MethodInfo *)0x0);
    local_f8 = (pUVar17->fields).x;
    local_f4 = (pUVar17->fields).y;
    local_f0 = (pUVar17->fields).z;
    fVar2 = (pUVar17->fields).w;
    pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
      fVar24 = fVar26 * fVar24 + deltaTime * fVar20 + local_118.fields.z;
      fVar22 = fVar1 * fVar26 + fVar25 * deltaTime + local_118.fields.x;
      fVar23 = fVar23 * fVar26 + fVar21 * deltaTime + fVar19;
      local_ec = fVar24;
      pUVar17 = UnityEngine_Transform__get_rotation(&local_108,pUVar15,(MethodInfo *)0x0);
      fVar19 = fVar19 - fVar23;
      fVar25 = (pUVar17->fields).x;
      fVar21 = (pUVar17->fields).w;
      fVar20 = (pUVar17->fields).z;
      fVar1 = (pUVar17->fields).y;
      fVar28 = (fVar25 * fVar2 + fVar21 * local_f8 + fVar20 * local_f4) - fVar1 * local_f0;
      fVar27 = (fVar21 * local_f4 + fVar1 * fVar2 + fVar25 * local_f0) - fVar20 * local_f8;
      fVar26 = (fVar21 * local_f0 + fVar20 * fVar2 + fVar1 * local_f8) - fVar25 * local_f4;
      fVar25 = ((fVar21 * fVar2 - fVar25 * local_f8) - fVar1 * local_f4) - fVar20 * local_f0;
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      fVar21 = fVar24;
      local_108.fields.x = fVar28;
      local_108.fields.y = fVar27;
      local_108.fields.z = fVar26;
      local_108.fields.w = fVar25;
      if ((__this->fields)._velocity.fields.y <= 0.0) {
        fVar20 = fVar19 + (__this->fields)._radius + 0.05;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar19 = (pUVar13->upVector).fields.x;
        fVar1 = (pUVar13->upVector).fields.y;
        fVar2 = (pUVar13->upVector).fields.z;
        if (Il2CppMethodInitialized_18434494b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18434494b = '\x01';
        }
        pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar3 = (__this->fields)._radius;
        uVar7._0_4_ = (pUVar13->downVector).fields.x;
        uVar7._4_4_ = (pUVar13->downVector).fields.y;
        fVar11 = (pUVar13->downVector).fields.z;
        if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
        }
        layerMask = TypeInfo_Characters_TitanLimbFallEffect->static_fields->GroundMask;
        if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
        }
        local_128._0_8_ = uVar7;
        local_128.z = fVar11;
        local_118.fields.x = fVar20 * fVar19 + fVar22;
        local_118.fields.y = fVar20 * fVar1 + fVar23;
        local_118.fields.z = fVar20 * fVar2 + fVar24;
        bVar14 = UnityEngine_Physics__Raycast_2fe5610
                           ((UnityEngine_Vector3_o *)&local_118,(UnityEngine_Vector3_o *)&local_128,local_e8,
                            fVar3 + fVar20,layerMask,1,(MethodInfo *)0x0);
        if ((bVar14) &&
           (pUVar16 = UnityEngine_RaycastHit__get_normal
                                ((UnityEngine_Vector3_o *)&local_128,local_e8,(MethodInfo *)0x0),
           0.2 < (pUVar16->fields).y)) {
          pUVar16 = UnityEngine_RaycastHit__get_point
                              ((UnityEngine_Vector3_o *)&local_128,local_e8,(MethodInfo *)0x0);
          fVar20 = (pUVar16->fields).x;
          fVar19 = (pUVar16->fields).y;
          fVar1 = (pUVar16->fields).z;
          pUVar16 = UnityEngine_RaycastHit__get_normal
                              ((UnityEngine_Vector3_o *)&local_128,local_e8,(MethodInfo *)0x0);
          fVar2 = (pUVar16->fields).x;
          fVar3 = (pUVar16->fields).y;
          fVar11 = (pUVar16->fields).z;
          pUVar16 = UnityEngine_RaycastHit__get_normal
                              ((UnityEngine_Vector3_o *)&local_118,local_e8,(MethodInfo *)0x0);
          local_128.x = (pUVar16->fields).x;
          local_128.y = (pUVar16->fields).y;
          local_128.z = (pUVar16->fields).z;
          local_118.fields.x = fVar28;
          local_118.fields.y = fVar27;
          local_118.fields.z = fVar26;
          local_118.fields.w = fVar25;
          fVar18 = Characters_TitanLimbFallEffect__GetSupportHeight
                             (__this,&local_118,(UnityEngine_Vector3_o *)&local_128,(MethodInfo *)0x0);
          fVar21 = local_ec;
          if (fVar3 * (fVar23 - fVar19) + fVar2 * (fVar22 - fVar20) + fVar11 * (fVar24 - fVar1) <=
              fVar18 + 0.02) {
            (__this->fields)._landed = true;
            pUVar16 = UnityEngine_RaycastHit__get_point
                                ((UnityEngine_Vector3_o *)&local_128,local_e8,(MethodInfo *)0x0);
            fVar21 = (pUVar16->fields).z;
            fVar20 = (pUVar16->fields).y;
            (__this->fields)._groundPoint.fields.x = (pUVar16->fields).x;
            (__this->fields)._groundPoint.fields.y = fVar20;
            (__this->fields)._groundPoint.fields.z = fVar21;
            pUVar16 = UnityEngine_RaycastHit__get_normal
                                ((UnityEngine_Vector3_o *)&local_128,local_e8,(MethodInfo *)0x0);
            fVar20 = (pUVar16->fields).y;
            fVar21 = (pUVar16->fields).z;
            local_128.z = (__this->fields)._restNormal.fields.z;
            (__this->fields)._groundNormal.fields.x = (pUVar16->fields).x;
            (__this->fields)._groundNormal.fields.y = fVar20;
            local_128.x = (__this->fields)._restNormal.fields.x;
            local_128.y = (__this->fields)._restNormal.fields.y;
            (__this->fields)._groundNormal.fields.z = fVar21;
            (__this->fields)._landingRotation.fields.x = fVar28;
            (__this->fields)._landingRotation.fields.y = fVar27;
            (__this->fields)._landingRotation.fields.z = fVar26;
            (__this->fields)._landingRotation.fields.w = fVar25;
            pUVar16 = UnityEngine_Quaternion__op_Multiply_2f08cb0
                                ((UnityEngine_Vector3_o *)&local_118,&local_108,
                                 (UnityEngine_Vector3_o *)&local_128,(MethodInfo *)0x0);
            fVar21 = (pUVar16->fields).x;
            fVar20 = (pUVar16->fields).y;
            fVar19 = (pUVar16->fields).z;
            pUVar16 = UnityEngine_RaycastHit__get_normal
                                ((UnityEngine_Vector3_o *)&local_128,local_e8,(MethodInfo *)0x0);
            if (fVar20 * (pUVar16->fields).y + fVar21 * (pUVar16->fields).x + fVar19 * (pUVar16->fields).z <
                0.0) {
              fVar21 = -fVar21;
              fVar20 = -fVar20;
              fVar19 = -fVar19;
            }
            pUVar16 = UnityEngine_RaycastHit__get_normal
                                ((UnityEngine_Vector3_o *)&local_118,local_e8,(MethodInfo *)0x0);
            local_128.x = (pUVar16->fields).x;
            local_128.y = (pUVar16->fields).y;
            local_128.z = (pUVar16->fields).z;
            local_118.fields.x = fVar21;
            local_118.fields.y = fVar20;
            local_118.fields.z = fVar19;
            pUVar17 = UnityEngine_Quaternion__Internal_FromToRotation
                                (&local_108,(UnityEngine_Vector3_o *)&local_118,
                                 (UnityEngine_Vector3_o *)&local_128,(MethodInfo *)0x0);
            fVar21 = (pUVar17->fields).x;
            fVar20 = (pUVar17->fields).w;
            fVar19 = (pUVar17->fields).y;
            fVar1 = (pUVar17->fields).z;
            (__this->fields)._restRotation.fields.x =
                 (fVar28 * fVar20 + fVar25 * fVar21 + fVar26 * fVar19) - fVar27 * fVar1;
            (__this->fields)._restRotation.fields.y =
                 (fVar25 * fVar19 + fVar27 * fVar20 + fVar28 * fVar1) - fVar26 * fVar21;
            (__this->fields)._restRotation.fields.z =
                 (fVar25 * fVar1 + fVar26 * fVar20 + fVar27 * fVar21) - fVar28 * fVar19;
            (__this->fields)._restRotation.fields.w =
                 ((fVar25 * fVar20 - fVar28 * fVar21) - fVar27 * fVar19) - fVar26 * fVar1;
            Characters_TitanLimbFallEffect__SetGroundPose(__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
      pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
        local_118.fields.x = fVar22;
        local_118.fields.y = fVar23;
        local_118.fields.z = fVar21;
        UnityEngine_Transform__SetPositionAndRotation
                  (pUVar15,(UnityEngine_Vector3_o *)&local_118,&local_108,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$GetSupportHeight
// il2cpp: float Characters_TitanLimbFallEffect__GetSupportHeight (Characters_TitanLimbFallEffect_o* __this, UnityEngine_Quaternion_o rotation, UnityEngine_Vector3_o normal, const MethodInfo* method);
// 0x1821b23a0
// eh: try 0x1821b24d1..0x1821b2527 -> pad 0x183317870 catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821b251c: movss dword ptr [rsp + 0xe0], xmm6
// asm:   0x1821b2525: jmp 0x1821b24d1
// asm:   0x1821b2538: mov rdx, qword ptr [rip + 0x1eea7d1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose
// asm:   0x1821b253f: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1821b2544: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821b2549: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1821b254e: test rcx, rcx
// asm:   0x1821b2551: jne 0x1821b2595
// asm:   0x1821b2553: movss xmm6, dword ptr [rsp + 0xe0]
// asm:   0x1821b2595: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317870: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317875: push rbp
// asm:   0x183317876: sub rsp, 0x20
// asm:   0x18331787a: mov rbp, rdx
// asm:   0x18331787d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317881: mov rcx, qword ptr [rax]
// asm:   0x183317884: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317888: movabs rax, 0
// asm:   0x183317892: add rsp, 0x20
// asm:   0x183317896: pop rbp
// asm:   0x183317897: ret 

float Characters_TitanLimbFallEffect__GetSupportHeight
                (Characters_TitanLimbFallEffect_o *__this,UnityEngine_Quaternion_o *rotation,
                UnityEngine_Vector3_o *normal,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  System_Collections_Generic_List_Vector3__o *__this_00;
  bool bVar4;
  UnityEngine_Quaternion_o *pUVar5;
  UnityEngine_Vector3_o *pUVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_Fields local_a8;
  undefined1 local_98 [16];
  System_Collections_Generic_List_Enumerator_T__o local_88;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  
  if (Il2CppMethodInitialized_184346e6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
    Il2CppMethodInitialized_184346e6f = '\x01';
  }
  local_68._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_68._8_8_ = 0;
  local_58 = (Il2CppObject *)0x0;
  uStack_50 = 0;
  local_98._0_4_ = (rotation->fields).x;
  local_98._4_4_ = (rotation->fields).y;
  local_98._8_4_ = (rotation->fields).z;
  local_98._12_4_ = (rotation->fields).w;
  pUVar5 = UnityEngine_Quaternion__Internal_Inverse
                     ((UnityEngine_Quaternion_o *)&local_88,(UnityEngine_Quaternion_o *)local_98,
                      (MethodInfo *)0x0);
  local_a8.x = (normal->fields).x;
  local_a8.y = (normal->fields).y;
  local_a8.z = (normal->fields).z;
  local_88.fields._list = *(System_Collections_Generic_List_T__o **)&pUVar5->fields;
  local_88.fields._index = (int32_t)(pUVar5->fields).z;
  local_88.fields._version = (int32_t)(pUVar5->fields).w;
  pUVar6 = UnityEngine_Quaternion__op_Multiply_2f08cb0
                     ((UnityEngine_Vector3_o *)local_98,(UnityEngine_Quaternion_o *)&local_88,
                      (UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._supportVertices;
  if (__this_00 == (System_Collections_Generic_List_Vector3__o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = (pUVar6->fields).x;
  fVar2 = (pUVar6->fields).y;
  fVar3 = (pUVar6->fields).z;
  System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___GetEnumerator
            (&local_88,(System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)__this_00,
             (MethodInfo_930B50 *)MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
  local_68._0_8_ = local_88.fields._list;
  local_68._8_4_ = local_88.fields._index;
  local_68._12_4_ = local_88.fields._version;
  local_58 = local_88.fields._current;
  uStack_50 = uStack_70;
  local_98._0_4_ = 0.0;
  local_98._4_4_ = 0.0;
  fVar8 = 3.4028235e+38;
  local_98._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68;
  while (bVar4 = System_Collections_Generic_List_Enumerator_ProbeBrickPool_BrickChunkAlloc___MoveNext
                           ((System_Collections_Generic_List_Enumerator_T__o *)local_68,
                            (MethodInfo_15296D0 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext), bVar4) {
    fVar7 = fVar2 * local_58._4_4_ + fVar1 * (float)local_58 + fVar3 * (float)uStack_50;
    if (fVar7 <= fVar8) {
      fVar8 = fVar7;
    }
  }
  System_Collections_Generic_List_Enumerator_Vector3___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68,
             MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
  return -fVar8;
}


// Characters.TitanLimbFallEffect$$SetGroundPose
// il2cpp: void Characters_TitanLimbFallEffect__SetGroundPose (Characters_TitanLimbFallEffect_o* __this, const MethodInfo* method);
// 0x1821b5660

void Characters_TitanLimbFallEffect__SetGroundPose
               (Characters_TitanLimbFallEffect_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Transform_o *__this_00;
  float fVar8;
  float fVar9;
  UnityEngine_Quaternion_Fields local_88;
  UnityEngine_Quaternion_Fields local_78;
  UnityEngine_Quaternion_o local_68 [6];
  
  fVar9 = (__this->fields)._groundAge * 4.0;
  if (fVar9 < 0.0) {
    fVar9 = 0.0;
  }
  else if (1.0 < fVar9) {
    fVar9 = 1.0;
  }
  local_88.x = (__this->fields)._restRotation.fields.x;
  local_88.y = (__this->fields)._restRotation.fields.y;
  local_88.z = (__this->fields)._restRotation.fields.z;
  local_88.w = (__this->fields)._restRotation.fields.w;
  local_78.x = (__this->fields)._landingRotation.fields.x;
  local_78.y = (__this->fields)._landingRotation.fields.y;
  local_78.z = (__this->fields)._landingRotation.fields.z;
  local_78.w = (__this->fields)._landingRotation.fields.w;
  pUVar7 = UnityEngine_Quaternion__Internal_Slerp
                     (local_68,(UnityEngine_Quaternion_o *)&local_78,(UnityEngine_Quaternion_o *)&local_88,
                      fVar9,(MethodInfo *)0x0);
  uVar5._0_4_ = (pUVar7->fields).x;
  uVar5._4_4_ = (pUVar7->fields).y;
  uVar6._0_4_ = (pUVar7->fields).z;
  uVar6._4_4_ = (pUVar7->fields).w;
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  uVar3._0_4_ = (__this->fields)._groundNormal.fields.x;
  uVar3._4_4_ = (__this->fields)._groundNormal.fields.y;
  uVar2 = (__this->fields)._groundPoint.fields.x;
  uVar4 = (__this->fields)._groundPoint.fields.y;
  fVar9 = (__this->fields)._groundPoint.fields.z;
  fVar1 = (__this->fields)._groundNormal.fields.z;
  local_88._0_8_ = uVar3;
  local_78._0_8_ = uVar5;
  local_78._8_8_ = uVar6;
  local_88.z = (__this->fields)._groundNormal.fields.z;
  fVar8 = Characters_TitanLimbFallEffect__GetSupportHeight
                    (__this,(UnityEngine_Quaternion_o *)&local_78,(UnityEngine_Vector3_o *)&local_88,
                     (MethodInfo *)0x0);
  fVar8 = fVar8 + 0.02;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    local_88.y = uVar3._4_4_ * fVar8 + (float)uVar4;
    local_88.x = (float)uVar3 * fVar8 + (float)uVar2;
    local_88.z = fVar1 * fVar8 + fVar9;
    local_78._0_8_ = uVar5;
    local_78._8_8_ = uVar6;
    UnityEngine_Transform__SetPositionAndRotation
              (__this_00,(UnityEngine_Vector3_o *)&local_88,(UnityEngine_Quaternion_o *)&local_78,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$Draw
// il2cpp: void Characters_TitanLimbFallEffect__Draw (Characters_TitanLimbFallEffect_o* __this, UnityEngine_Mesh_o* mesh, System_Collections_Generic_List_Material__o* materials, UnityEngine_MaterialPropertyBlock_o* properties, UnityEngine_Matrix4x4_o matrix, float dissolve, const MethodInfo* method);
// 0x1821b1a40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821b1aec: nop dword ptr [rax]
// asm:   0x1821b1b2f: nop 

void Characters_TitanLimbFallEffect__Draw
               (Characters_TitanLimbFallEffect_o *__this,UnityEngine_Mesh_o *mesh,
               System_Collections_Generic_List_Material__o *materials,
               UnityEngine_MaterialPropertyBlock_o *properties,UnityEngine_Matrix4x4_o *matrix,float dissolve,
               MethodInfo *method)

{
  bool receiveShadows;
  int iVar1;
  int32_t layer;
  int iVar2;
  UnityEngine_Material_o *material;
  int index;
  UnityEngine_Matrix4x4_Fields local_68;
  
  if (Il2CppMethodInitialized_184346e70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Graphics);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    Il2CppMethodInitialized_184346e70 = '\x01';
  }
  if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
  }
  if (properties != (UnityEngine_MaterialPropertyBlock_o *)0x0) {
    UnityEngine_MaterialPropertyBlock__SetFloat_2edfd40
              (properties,TypeInfo_Characters_TitanLimbFallEffect->static_fields->Dissolve,dissolve,
               (MethodInfo *)0x0);
    if (mesh != (UnityEngine_Mesh_o *)0x0) {
      iVar2 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
      if (materials != (System_Collections_Generic_List_Material__o *)0x0) {
        index = 0;
        while( true ) {
          iVar1 = (materials->fields)._size;
          if (iVar1 <= iVar2) {
            iVar2 = iVar1;
          }
          if (iVar2 <= index) break;
          material = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)materials,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_Material_get_Item);
          layer = (__this->fields)._layer;
          receiveShadows = (__this->fields)._receiveShadows;
          if ((TypeInfo_UnityEngine_Graphics->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Graphics);
          }
          local_68.m00 = (matrix->fields).m00;
          local_68.m10 = (matrix->fields).m10;
          local_68.m20 = (matrix->fields).m20;
          local_68.m30 = (matrix->fields).m30;
          local_68.m01 = (matrix->fields).m01;
          local_68.m11 = (matrix->fields).m11;
          local_68.m21 = (matrix->fields).m21;
          local_68.m31 = (matrix->fields).m31;
          local_68.m02 = (matrix->fields).m02;
          local_68.m12 = (matrix->fields).m12;
          local_68.m22 = (matrix->fields).m22;
          local_68.m32 = (matrix->fields).m32;
          local_68.m03 = (matrix->fields).m03;
          local_68.m13 = (matrix->fields).m13;
          local_68.m23 = (matrix->fields).m23;
          local_68.m33 = (matrix->fields).m33;
          UnityEngine_Graphics__DrawMesh_2ec99e0
                    (mesh,(UnityEngine_Matrix4x4_o *)&local_68,material,layer,(UnityEngine_Camera_o *)0x0,
                     index,properties,0,receiveShadows,(MethodInfo *)0x0);
          index = index + 1;
          iVar2 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$OnDisable
// il2cpp: void Characters_TitanLimbFallEffect__OnDisable (Characters_TitanLimbFallEffect_o* __this, const MethodInfo* method);
// 0x1821b4520
// eh: try 0x1821b4650..0x1821b46ea -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821b4689: mov rdx, qword ptr [rip + 0x1ef3970]  ; MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_Dispose
// asm:   0x1821b4690: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821b4695: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821b469a: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821b469f: test rcx, rcx
// asm:   0x1821b46a2: jne 0x1821b46ea
// asm:   0x1821b46a4: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x1821b46ea: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_TitanLimbFallEffect__OnDisable(Characters_TitanLimbFallEffect_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  UnityEngine_Object_o *pUVar2;
  System_Collections_Generic_List_TitanLimbFallEffect_Attachment__o *pSVar3;
  bool bVar4;
  undefined1 local_40 [16];
  Characters_TitanLimbFallEffect_Attachment_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  Characters_TitanLimbFallEffect_Attachment_o *local_18;
  
  if (Il2CppMethodInitialized_184346e71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_MoveNext)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Attachment_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Attachment_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e71 = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (Characters_TitanLimbFallEffect_Attachment_o *)0x0;
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._tissueMesh;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._tissueMesh;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
    (__this->fields)._tissueMesh = (UnityEngine_Mesh_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._tissueMesh,(void *)0x0);
  }
  pSVar3 = (__this->fields)._attachments;
  if (pSVar3 != (System_Collections_Generic_List_TitanLimbFallEffect_Attachment__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)pSVar3,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Attachment_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_MoveNext
                        );
      if (!bVar4) break;
      if (local_18 == (Characters_TitanLimbFallEffect_Attachment_o *)0x0) {
        ThrowNullReferenceException();
      }
      Characters_TitanLimbFallEffect_Attachment__Dispose(local_18,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_Dispose);
    pSVar3 = (__this->fields)._attachments;
    if (pSVar3 != (System_Collections_Generic_List_TitanLimbFallEffect_Attachment__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$OnDestroy
// il2cpp: void Characters_TitanLimbFallEffect__OnDestroy (Characters_TitanLimbFallEffect_o* __this, const MethodInfo* method);
// 0x1821b4150
// eh: try 0x1821b4303..0x1821b44bb -> pad 0x183317c60 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 57 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821b434f: mov rdx, qword ptr [rip + 0x1ed8672]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x1821b4356: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1821b435b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821b4360: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821b4365: test rcx, rcx
// asm:   0x1821b4368: jne 0x1821b44f9
// asm:   0x1821b436e: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x1821b43bd: nop dword ptr [rax]
// asm:   0x1821b440c: mov rdx, qword ptr [rip + 0x1ed85b5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x1821b4413: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1821b4418: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821b441d: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821b4422: test rcx, rcx
// asm:   0x1821b4425: jne 0x1821b44ff
// asm:   0x1821b442b: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x1821b44cc: mov rdx, qword ptr [rip + 0x1ed84f5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x1821b44d3: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1821b44d8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821b44dd: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821b44e2: test rcx, rcx
// asm:   0x1821b44e5: jne 0x1821b4505
// asm:   0x1821b44f9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821b44ff: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821b4505: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317c60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317c65: push rbp
// asm:   0x183317c66: sub rsp, 0x20
// asm:   0x183317c6a: mov rbp, rdx
// asm:   0x183317c6d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317c71: mov rcx, qword ptr [rax]
// asm:   0x183317c74: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183317c78: movabs rax, 0
// asm:   0x183317c82: add rsp, 0x20
// asm:   0x183317c86: pop rbp
// asm:   0x183317c87: ret 
// asm:   0x183318f20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318f25: push rbp
// asm:   0x183318f26: sub rsp, 0x20
// asm:   0x183318f2a: mov rbp, rdx
// asm:   0x183318f2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183318f31: mov rcx, qword ptr [rax]
// asm:   0x183318f34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183318f38: movabs rax, 0
// asm:   0x183318f42: add rsp, 0x20
// asm:   0x183318f46: pop rbp
// asm:   0x183318f47: ret 
// asm:   0x183324cb0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324cb5: push rbp
// asm:   0x183324cb6: sub rsp, 0x20
// asm:   0x183324cba: mov rbp, rdx
// asm:   0x183324cbd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183324cc1: mov rcx, qword ptr [rax]
// asm:   0x183324cc4: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183324cc8: movabs rax, 0
// asm:   0x183324cd2: add rsp, 0x20
// asm:   0x183324cd6: pop rbp
// asm:   0x183324cd7: ret 

void Characters_TitanLimbFallEffect__OnDestroy(Characters_TitanLimbFallEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_TitanLimbFallEffect__o *__this_00;
  UnityEngine_Object_o *pUVar1;
  System_Collections_Generic_List_Material__o *pSVar2;
  bool bVar3;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  UnityEngine_Object_o *local_18;
  
  if (Il2CppMethodInitialized_184346e72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    Il2CppMethodInitialized_184346e72 = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (UnityEngine_Object_o *)0x0;
  if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
  }
  __this_00 = TypeInfo_Characters_TitanLimbFallEffect->static_fields->Pool;
  if (__this_00 != (System_Collections_Generic_List_TitanLimbFallEffect__o *)0x0) {
    System_Collections_Generic_List_object___Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
               (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Remove);
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._mesh;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (UnityEngine_Object_o *)(__this->fields)._mesh;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
    }
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._growthMesh;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (UnityEngine_Object_o *)(__this->fields)._growthMesh;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields)._materials;
    if (pSVar2 != (System_Collections_Generic_List_Material__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                 (System_Collections_Generic_List_T__o *)pSVar2,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
      local_28 = (undefined1  [8])local_40._0_8_;
      pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
      local_18 = local_30;
      local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
        pUVar1 = local_18;
        if (!bVar3) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                 MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
      pSVar2 = (__this->fields)._growthMaterials;
      if (pSVar2 != (System_Collections_Generic_List_Material__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                   (System_Collections_Generic_List_T__o *)pSVar2,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
        local_28 = (undefined1  [8])local_40._0_8_;
        pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
        local_18 = local_30;
        local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
        while( true ) {
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
          pUVar1 = local_18;
          if (!bVar3) break;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
        pSVar2 = (__this->fields)._tissueMaterials;
        if (pSVar2 != (System_Collections_Generic_List_Material__o *)0x0) {
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                     (System_Collections_Generic_List_T__o *)pSVar2,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
          local_28 = (undefined1  [8])local_40._0_8_;
          pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
          local_18 = local_30;
          local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
          while( true ) {
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
            pUVar1 = local_18;
            if (!bVar3) break;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                     MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$.ctor
// il2cpp: void Characters_TitanLimbFallEffect___ctor (Characters_TitanLimbFallEffect_o* __this, const MethodInfo* method);
// 0x1821b6340

void Characters_TitanLimbFallEffect___ctor(Characters_TitanLimbFallEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Material__o *pSVar1;
  System_Collections_Generic_List_Vector3__o *pSVar2;
  System_Collections_Generic_List_Vector2__o *__this_00;
  System_Collections_Generic_List_int__o *__this_01;
  System_Collections_Generic_List_TitanLimbFallEffect_Attachment__o *__this_02;
  
  if (Il2CppMethodInitialized_184346e73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Attachment_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector2);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_TitanLimbFallEffect_Attachment);
    Il2CppMethodInitialized_184346e73 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  (__this->fields)._materials = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._materials,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  (__this->fields)._growthMaterials = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._growthMaterials,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  (__this->fields)._tissueMaterials = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tissueMaterials,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  (__this->fields)._sourceMaterials = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._sourceMaterials,pSVar1);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar2,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._vertices = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._vertices,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar2,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._supportVertices = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._supportVertices,pSVar2);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector2);
  System_Collections_Generic_List_Vector2____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector2_ctor);
  (__this->fields)._growthCoordinates = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._growthCoordinates,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  (__this->fields)._indices = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._indices,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_TitanLimbFallEffect_Attachment);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Attachment_ctor);
  (__this->fields)._attachments = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._attachments,__this_02);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.TitanLimbFallEffect$$.cctor
// il2cpp: void Characters_TitanLimbFallEffect___cctor (const MethodInfo* method);
// 0x1821b6130

void Characters_TitanLimbFallEffect___cctor(MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  Characters_TitanLimbFallEffect_StaticFields *pCVar5;
  UnityEngine_LayerMask_o UVar6;
  int32_t iVar7;
  System_Int32_array *layers;
  System_Collections_Generic_List_TitanLimbFallEffect__o *__this;
  
  if (Il2CppMethodInitialized_184346e74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_TitanLimbFallEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"_Dissolve");
    Il2CppMethodInitialized_184346e74 = '\x01';
  }
  if (Il2CppMethodInitialized_18434494b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18434494b = '\x01';
  }
  pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2 = (pUVar4->downVector).fields.x;
  uVar3 = (pUVar4->downVector).fields.y;
  fVar1 = (pUVar4->downVector).fields.z;
  pCVar5 = TypeInfo_Characters_TitanLimbFallEffect->static_fields;
  (pCVar5->Gravity).fields.x = (float)uVar2 * 22.5;
  (pCVar5->Gravity).fields.y = (float)uVar3 * 22.5;
  (pCVar5->Gravity).fields.z = fVar1 * 22.5;
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,4);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers != (System_Int32_array *)0x0) {
    if (((((int)layers->max_length != 0) &&
         (layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
         1 < (uint)layers->max_length)) &&
        (layers->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
        2 < (uint)layers->max_length)) &&
       (layers->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters,
       3 < (uint)layers->max_length)) {
      layers->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectTitans;
      UVar6 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      UVar6 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar6.fields.m_Mask,(MethodInfo *)0x0);
      TypeInfo_Characters_TitanLimbFallEffect->static_fields->GroundMask = (int32_t)UVar6.fields.m_Mask;
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_TitanLimbFallEffect);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_ctor);
      TypeInfo_Characters_TitanLimbFallEffect->static_fields->Pool = __this;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanLimbFallEffect->static_fields->Pool,__this);
      iVar7 = UnityEngine_Shader__PropertyToID("_Dissolve",(MethodInfo *)0x0);
      TypeInfo_Characters_TitanLimbFallEffect->static_fields->Dissolve = iVar7;
      return;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


