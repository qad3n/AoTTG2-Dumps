// Type: Characters.TitanNapeChunkEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Characters/TitanNapeChunkEffect.cs
// Prior real C# source: none
// --------------------------------

// Characters.TitanNapeChunkEffect.<>c$$.cctor
// il2cpp: void Characters_TitanNapeChunkEffect___c___cctor (const MethodInfo* method);
// 0x5c5f2d0

void Characters_TitanNapeChunkEffect___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754788a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanNapeChunkEffect_c);
    Il2CppMethodInitialized_0754788a = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanNapeChunkEffect_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Characters_TitanNapeChunkEffect_c->static_fields->__9 =
       (Characters_TitanNapeChunkEffect___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanNapeChunkEffect_c->static_fields->__9);
  return;
}


// Characters.TitanNapeChunkEffect.<>c$$.ctor
// il2cpp: void Characters_TitanNapeChunkEffect___c___ctor (Characters_TitanNapeChunkEffect___c_o* __this, const MethodInfo* method);
// 0x5c5f340

void Characters_TitanNapeChunkEffect___c___ctor
               (Characters_TitanNapeChunkEffect___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.TitanNapeChunkEffect.<>c$$<Play>b__20_0
// il2cpp: bool Characters_TitanNapeChunkEffect___c___Play_b__20_0 (Characters_TitanNapeChunkEffect___c_o* __this, Characters_TitanNapeChunkEffect_o* chunk, const MethodInfo* method);
// 0x5c5f350

bool Characters_TitanNapeChunkEffect___c___Play_b__20_0
               (Characters_TitanNapeChunkEffect___c_o *__this,Characters_TitanNapeChunkEffect_o *chunk,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  if (chunk != (Characters_TitanNapeChunkEffect_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)chunk,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      return !bVar1;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanNapeChunkEffect$$Play
// il2cpp: void Characters_TitanNapeChunkEffect__Play (UnityEngine_Transform_o* neck, float scale, UnityEngine_Vector3_o velocity, const MethodInfo* method);
// 0x5c5e1a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c5e2d6: test r15, r15
// asm:   0x5c5e2df: jmp 0x5c5e5e8

void Characters_TitanNapeChunkEffect__Play
               (UnityEngine_Transform_o *neck,float scale,UnityEngine_Vector3_o velocity,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_TitanNapeChunkEffect__o *pSVar3;
  Il2CppObject *object;
  UnityEngine_Renderer_o *__this;
  Characters_TitanNapeChunkEffect_array *pCVar4;
  bool bVar5;
  Characters_TitanNapeChunkEffect___c_StaticFields *pCVar6;
  System_Predicate_T__o *match;
  Characters_TitanNapeChunkEffect_o *__this_00;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Material_o *value;
  UnityEngine_ParticleSystem_o *pUVar8;
  UnityEngine_MeshRenderer_o *pUVar9;
  UnityEngine_MaterialPropertyBlock_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar10;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  
  if (Il2CppMethodInitialized_07547883 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_MeshRenderer_71a4dd0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_ParticleSystem_71a4dd8);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TitanNapeChunkEffect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanNapeChunkEffect_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanNapeChunkEffect_Find);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanNapeChunkEffect_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MaterialPropertyBlock);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_TitanNapeChunkEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanNapeChunkEffect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Characters_TitanNapeChunkEffect_c_Play_b__20_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanNapeChunkEffect_c);
    il2cpp_codegen_initialize_runtime_metadata(&"NapeChunkParticle");
    Il2CppMethodInitialized_07547883 = '\x01';
  }
  if ((TypeInfo_Characters_TitanNapeChunkEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanNapeChunkEffect);
  }
  pSVar3 = TypeInfo_Characters_TitanNapeChunkEffect->static_fields->Pool;
  if ((TypeInfo_Characters_TitanNapeChunkEffect_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanNapeChunkEffect_c);
    pCVar6 = TypeInfo_Characters_TitanNapeChunkEffect_c->static_fields;
    match = (System_Predicate_T__o *)pCVar6->__9__20_0;
  }
  else {
    pCVar6 = TypeInfo_Characters_TitanNapeChunkEffect_c->static_fields;
    match = (System_Predicate_T__o *)pCVar6->__9__20_0;
  }
  if (match == (System_Predicate_T__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Characters_TitanNapeChunkEffect_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanNapeChunkEffect_c);
      pCVar6 = TypeInfo_Characters_TitanNapeChunkEffect_c->static_fields;
    }
    object = (Il2CppObject *)pCVar6->__9;
    match = (System_Predicate_T__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_TitanNapeChunkEffect);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,object,
               (intptr_t)MethodInfo_Characters_TitanNapeChunkEffect_c_Play_b__20_0,(MethodInfo_3DC95B0 *)0x0);
    pCVar6 = TypeInfo_Characters_TitanNapeChunkEffect_c->static_fields;
    pCVar6->__9__20_0 = (System_Predicate_TitanNapeChunkEffect__o *)match;
    Il2CppCodeGenWriteBarrier(&pCVar6->__9__20_0);
  }
  if (pSVar3 != (System_Collections_Generic_List_TitanNapeChunkEffect__o *)0x0) {
    __this_00 = System_Collections_Generic_List_object___Find
                          ((System_Collections_Generic_List_object__o *)pSVar3,match,
                           (MethodInfo_395DA40 *)
                           MethodInfo_System_Collections_Generic_List_TitanNapeChunkEffect_Find);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if ((TypeInfo_Characters_TitanNapeChunkEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanNapeChunkEffect);
      }
      pSVar3 = TypeInfo_Characters_TitanNapeChunkEffect->static_fields->Pool;
      if (pSVar3 != (System_Collections_Generic_List_TitanNapeChunkEffect__o *)0x0) {
        if ((pSVar3->fields)._size < 8) {
          if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
          }
          pMVar10 = (MethodInfo *)0x0;
          pUVar7 = Characters_BasicTitanComponentCache__LoadParticle("NapeChunkParticle",(MethodInfo *)0x0);
          if ((TypeInfo_Characters_TitanNapeChunkEffect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanNapeChunkEffect);
          }
          value = Characters_TitanNapeChunkEffect__GetMaterial(pUVar7,pMVar10);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar5) {
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            pUVar7 = UnityEngine_Object__Instantiate_object__35a4190
                               ((Il2CppObject *)pUVar7,
                                (MethodInfo_35A4190 *)MethodInfo_UnityEngine_Object_Instantiate_GameObject);
            if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
               (__this_00 = UnityEngine_GameObject__AddComponent_object_
                                      (pUVar7,(MethodInfo_353B6A0 *)
                                              MethodInfo_UnityEngine_GameObject_AddComponent_TitanNapeChunkEffect
                                      ), __this_00 != (Characters_TitanNapeChunkEffect_o *)0x0)) {
              pUVar8 = UnityEngine_Component__GetComponentInChildren_object_
                                 ((UnityEngine_Component_o *)__this_00,true,
                                  (MethodInfo_34B0B60 *)
                                  MethodInfo_UnityEngine_Component_GetComponentInChildren_ParticleSystem_71a4dd8
                                 );
              (__this_00->fields)._trail = pUVar8;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields)._trail);
              pUVar9 = UnityEngine_Component__GetComponentInChildren_object_
                                 ((UnityEngine_Component_o *)__this_00,true,
                                  (MethodInfo_34B0B60 *)
                                  MethodInfo_UnityEngine_Component_GetComponentInChildren_MeshRenderer_71a4dd0
                                 );
              (__this_00->fields)._renderer = (UnityEngine_Renderer_o *)pUVar9;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields)._renderer);
              __this = (__this_00->fields)._renderer;
              if (__this != (UnityEngine_Renderer_o *)0x0) {
                UnityEngine_Renderer__set_sharedMaterial(__this,value,(MethodInfo *)0x0);
                __this_01 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
                UnityEngine_MaterialPropertyBlock___ctor(__this_01,(MethodInfo *)0x0);
                (__this_00->fields)._properties = __this_01;
                Il2CppCodeGenWriteBarrier(&(__this_00->fields)._properties);
                if ((TypeInfo_Characters_TitanNapeChunkEffect->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanNapeChunkEffect);
                }
                pMVar10 = MethodInfo_System_Collections_Generic_List_TitanNapeChunkEffect_Add;
                pSVar3 = TypeInfo_Characters_TitanNapeChunkEffect->static_fields->Pool;
                if (pSVar3 != (System_Collections_Generic_List_TitanNapeChunkEffect__o *)0x0) {
                  piVar1 = &(pSVar3->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pCVar4 = (pSVar3->fields)._items;
                  if (pCVar4 != (Characters_TitanNapeChunkEffect_array *)0x0) {
                    uVar2 = (pSVar3->fields)._size;
                    if (uVar2 < (uint)pCVar4->max_length) {
                      (pSVar3->fields)._size = uVar2 + 1;
                      pCVar4->m_Items[(int)uVar2] = __this_00;
                      Il2CppCodeGenWriteBarrier(pCVar4->m_Items + (int)uVar2);
                      pMVar10 = extraout_RDX_00;
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_00
                                 ,(MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
                      pMVar10 = extraout_RDX_01;
                    }
                    goto label_05c5e45e;
                  }
                }
              }
            }
            goto label_05c5e5e8;
          }
        }
        return;
      }
    }
    else {
      pMVar10 = extraout_RDX;
      if (__this_00 != (Characters_TitanNapeChunkEffect_o *)0x0) {
label_05c5e45e:
        Characters_TitanNapeChunkEffect__Initialize(__this_00,neck,scale,velocity,pMVar10);
        return;
      }
    }
  }
label_05c5e5e8:
  ThrowNullReferenceException();
}


// Characters.TitanNapeChunkEffect$$GetMaterial
// il2cpp: UnityEngine_Material_o* Characters_TitanNapeChunkEffect__GetMaterial (UnityEngine_GameObject_o* prefab, const MethodInfo* method);
// 0x5c5e5f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c5e709: mov rdi, qword ptr [r13]

UnityEngine_Material_o *
Characters_TitanNapeChunkEffect__GetMaterial(UnityEngine_GameObject_o *prefab,MethodInfo *method)

{
  UnityEngine_Matrix4x4_o *pUVar1;
  Characters_TitanNapeChunkEffect_StaticFields *pCVar2;
  UnityEngine_Matrix4x4_StaticFields *pUVar3;
  bool bVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_Object_o *x_01;
  UnityEngine_Material_o *pUVar5;
  UnityEngine_Material_o *__this;
  UnityEngine_Mesh_o *__this_00;
  float fVar6;
  UnityEngine_MeshFilter_o *local_a0;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  UnityEngine_Bounds_o local_48;
  
  if (Il2CppMethodInitialized_07547884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanNapeChunkEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"Nape chunk dissolve");
    il2cpp_codegen_initialize_runtime_metadata(&"_UseMeshPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"_DissolveScale");
    il2cpp_codegen_initialize_runtime_metadata(&"_MeshToDissolve");
    Il2CppMethodInitialized_07547884 = '\x01';
  }
  local_a0 = (UnityEngine_MeshFilter_o *)0x0;
  local_90 = 0.0;
  local_98 = 0;
  if ((TypeInfo_Characters_TitanNapeChunkEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanNapeChunkEffect);
  }
  pUVar5 = TypeInfo_Characters_TitanNapeChunkEffect->static_fields->_material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_Characters_TitanNapeChunkEffect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanNapeChunkEffect);
    }
label_05c5e70d:
    return TypeInfo_Characters_TitanNapeChunkEffect->static_fields->_material;
  }
  if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
  }
  x = (UnityEngine_Object_o *)Characters_BasicTitanComponentCache__LoadDissolveShader((MethodInfo *)0x0);
  if (prefab != (UnityEngine_GameObject_o *)0x0) {
    x_00 = (UnityEngine_Object_o *)
           UnityEngine_GameObject__GetComponentInChildren_object__353b9a0
                     (prefab,true,
                      (MethodInfo_353B9A0 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInChildren_MeshRenderer);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return (UnityEngine_Material_o *)0x0;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return (UnityEngine_Material_o *)0x0;
    }
    if (x_00 != (UnityEngine_Object_o *)0x0) {
      bVar4 = UnityEngine_Component__TryGetComponent_object_
                        ((UnityEngine_Component_o *)x_00,(Il2CppObject **)&local_a0,
                         (MethodInfo_34B1690 *)MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter);
      if (!bVar4) {
        return (UnityEngine_Material_o *)0x0;
      }
      if (local_a0 != (UnityEngine_MeshFilter_o *)0x0) {
        x_01 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh(local_a0,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Equality(x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          return (UnityEngine_Material_o *)0x0;
        }
        pUVar5 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)x_00,(MethodInfo *)0x0);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
        UnityEngine_Material___ctor_68dcfd0(__this,pUVar5,(MethodInfo *)0x0);
        if (__this != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__set_shader(__this,(UnityEngine_Shader_o *)x,(MethodInfo *)0x0);
          UnityEngine_Object__set_name((UnityEngine_Object_o *)__this,"Nape chunk dissolve",(MethodInfo *)0x0)
          ;
          UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this,0x20,(MethodInfo *)0x0);
          if ((TypeInfo_Characters_TitanNapeChunkEffect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanNapeChunkEffect);
          }
          pCVar2 = TypeInfo_Characters_TitanNapeChunkEffect->static_fields;
          pCVar2->_material = __this;
          Il2CppCodeGenWriteBarrier(&pCVar2->_material);
          pUVar5 = TypeInfo_Characters_TitanNapeChunkEffect->static_fields->_material;
          if (pUVar5 != (UnityEngine_Material_o *)0x0) {
            UnityEngine_Material__SetFloat(pUVar5,"_UseMeshPosition",1.0,(MethodInfo *)0x0);
            pUVar5 = TypeInfo_Characters_TitanNapeChunkEffect->static_fields->_material;
            if (Il2CppMethodInitialized_0754773d == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Matrix4x4);
              Il2CppMethodInitialized_0754773d = '\x01';
            }
            if (pUVar5 != (UnityEngine_Material_o *)0x0) {
              pUVar3 = TypeInfo_UnityEngine_Matrix4x4->static_fields;
              pUVar1 = &pUVar3->identityMatrix;
              local_88._0_4_ = (pUVar1->fields).m00;
              local_88._4_4_ = (pUVar1->fields).m10;
              uStack_80._0_4_ = (pUVar3->identityMatrix).fields.m20;
              uStack_80._4_4_ = (pUVar3->identityMatrix).fields.m30;
              local_78._0_4_ = (pUVar3->identityMatrix).fields.m01;
              local_78._4_4_ = (pUVar3->identityMatrix).fields.m11;
              uStack_70._0_4_ = (pUVar3->identityMatrix).fields.m21;
              uStack_70._4_4_ = (pUVar3->identityMatrix).fields.m31;
              local_68._0_4_ = (pUVar3->identityMatrix).fields.m02;
              local_68._4_4_ = (pUVar3->identityMatrix).fields.m12;
              uStack_60._0_4_ = (pUVar3->identityMatrix).fields.m22;
              uStack_60._4_4_ = (pUVar3->identityMatrix).fields.m32;
              local_58._0_4_ = (pUVar3->identityMatrix).fields.m03;
              local_58._4_4_ = (pUVar3->identityMatrix).fields.m13;
              uStack_50._0_4_ = (pUVar3->identityMatrix).fields.m23;
              uStack_50._4_4_ = (pUVar3->identityMatrix).fields.m33;
              UnityEngine_Material__SetMatrix
                        (pUVar5,"_MeshToDissolve",(UnityEngine_Matrix4x4_o)pUVar1->fields,
                         (MethodInfo *)0x0);
              if (local_a0 != (UnityEngine_MeshFilter_o *)0x0) {
                pUVar5 = TypeInfo_Characters_TitanNapeChunkEffect->static_fields->_material;
                __this_00 = UnityEngine_MeshFilter__get_sharedMesh(local_a0,(MethodInfo *)0x0);
                if (__this_00 != (UnityEngine_Mesh_o *)0x0) {
                  UnityEngine_Mesh__get_bounds(&local_48,__this_00,(MethodInfo *)0x0);
                  local_90 = local_48.fields.m_Extents.fields.z + local_48.fields.m_Extents.fields.z;
                  local_98 = CONCAT44(local_48.fields.m_Extents.fields.y + local_48.fields.m_Extents.fields.y,
                                      local_48.fields.m_Extents.fields.x + local_48.fields.m_Extents.fields.x)
                  ;
                  fVar6 = (float)il2cpp_runtime_helper_0599adc0(&local_98,0);
                  if (pUVar5 != (UnityEngine_Material_o *)0x0) {
                    if (fVar6 <= 0.001) {
                      fVar6 = 0.001;
                    }
                    UnityEngine_Material__SetFloat(pUVar5,"_DissolveScale",8.0 / fVar6,(MethodInfo *)0x0)
                    ;
                    goto label_05c5e70d;
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


// Characters.TitanNapeChunkEffect$$Initialize
// il2cpp: void Characters_TitanNapeChunkEffect__Initialize (Characters_TitanNapeChunkEffect_o* __this, UnityEngine_Transform_o* neck, float scale, UnityEngine_Vector3_o velocity, const MethodInfo* method);
// 0x5c5ea50

void Characters_TitanNapeChunkEffect__Initialize
               (Characters_TitanNapeChunkEffect_o *__this,UnityEngine_Transform_o *neck,float scale,
               UnityEngine_Vector3_o velocity,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint nameID;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_MaterialPropertyBlock_o *__this_00;
  UnityEngine_ParticleSystem_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  float value;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar6;
  
  if (Il2CppMethodInitialized_07547885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanNapeChunkEffect);
    Il2CppMethodInitialized_07547885 = '\x01';
  }
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_TitanNapeChunkEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanNapeChunkEffect);
  }
  if (neck != (UnityEngine_Transform_o *)0x0) {
    UVar6 = UnityEngine_Transform__TransformPoint
                      (neck,(UnityEngine_Vector3_o)
                            (TypeInfo_Characters_TitanNapeChunkEffect->static_fields->NeckOffset).fields,
                       (MethodInfo *)0x0);
    rotation = UnityEngine_Transform__get_rotation(neck,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetPositionAndRotation(pUVar5,UVar6,rotation,(MethodInfo *)0x0);
      pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e4b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b7 = '\x01';
      }
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
        UVar6.fields.z = (pUVar3->oneVector).fields.z * scale;
        uVar1 = (pUVar3->oneVector).fields.x;
        uVar2 = (pUVar3->oneVector).fields.y;
        UVar6.fields.x = scale * (float)uVar1;
        UVar6.fields.y = scale * (float)uVar2;
        UnityEngine_Transform__set_localScale(pUVar5,UVar6,(MethodInfo *)0x0);
        (__this->fields)._scale = scale;
        (__this->fields)._velocity.fields.x = velocity.fields.x;
        (__this->fields)._velocity.fields.y = velocity.fields.y;
        (__this->fields)._velocity.fields.z = velocity.fields.z;
        UVar6 = UnityEngine_Random__get_onUnitSphere((MethodInfo *)0x0);
        (__this->fields)._angularVelocity.fields.x = UVar6.fields.x * 400.0;
        (__this->fields)._angularVelocity.fields.y = UVar6.fields.y * 400.0;
        (__this->fields)._angularVelocity.fields.z = UVar6.fields.z * 400.0;
        (__this->fields)._age = 0.0;
        (__this->fields)._landed = false;
        __this_00 = (__this->fields)._properties;
        nameID = TypeInfo_Characters_TitanNapeChunkEffect->static_fields->DissolveSeed;
        value = UnityEngine_Random__Range(0.0,100.0,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_MaterialPropertyBlock_o *)0x0) {
          method_00 = (MethodInfo *)(ulong)nameID;
          UnityEngine_MaterialPropertyBlock__SetFloat_68d85d0(__this_00,nameID,value,(MethodInfo *)0x0);
          Characters_TitanNapeChunkEffect__SetDissolve(__this,0.0,method_00);
          __this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
            pUVar4 = (__this->fields)._trail;
            if (pUVar4 != (UnityEngine_ParticleSystem_o *)0x0) {
              UnityEngine_ParticleSystem__Clear(pUVar4,true,(MethodInfo *)0x0);
              pUVar4 = (__this->fields)._trail;
              if (pUVar4 != (UnityEngine_ParticleSystem_o *)0x0) {
                UnityEngine_ParticleSystem__Play(pUVar4,true,(MethodInfo *)0x0);
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


// Characters.TitanNapeChunkEffect$$LateUpdate
// il2cpp: void Characters_TitanNapeChunkEffect__LateUpdate (Characters_TitanNapeChunkEffect_o* __this, const MethodInfo* method);
// 0x5c5ed00

void Characters_TitanNapeChunkEffect__LateUpdate(Characters_TitanNapeChunkEffect_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  float deltaTime;
  float fVar1;
  
  deltaTime = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar1 = (__this->fields)._age + deltaTime;
  (__this->fields)._age = fVar1;
  if (5.0 <= fVar1) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
  if (0.0 < fVar1 + -3.5) {
    Characters_TitanNapeChunkEffect__SetDissolve(__this,(fVar1 + -3.5) / 1.5,method);
  }
  if ((__this->fields)._landed == false) {
    Characters_TitanNapeChunkEffect__UpdateFlight(__this,deltaTime,method);
    return;
  }
  return;
}


// Characters.TitanNapeChunkEffect$$SetDissolve
// il2cpp: void Characters_TitanNapeChunkEffect__SetDissolve (Characters_TitanNapeChunkEffect_o* __this, float progress, const MethodInfo* method);
// 0x5c5ec60

void Characters_TitanNapeChunkEffect__SetDissolve
               (Characters_TitanNapeChunkEffect_o *__this,float progress,MethodInfo *method)

{
  UnityEngine_MaterialPropertyBlock_o *__this_00;
  UnityEngine_Renderer_o *__this_01;
  
  if (Il2CppMethodInitialized_07547886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanNapeChunkEffect);
    Il2CppMethodInitialized_07547886 = '\x01';
  }
  __this_00 = (__this->fields)._properties;
  if ((TypeInfo_Characters_TitanNapeChunkEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanNapeChunkEffect);
  }
  if (__this_00 != (UnityEngine_MaterialPropertyBlock_o *)0x0) {
    UnityEngine_MaterialPropertyBlock__SetFloat_68d85d0
              (__this_00,TypeInfo_Characters_TitanNapeChunkEffect->static_fields->Dissolve,progress,
               (MethodInfo *)0x0);
    __this_01 = (__this->fields)._renderer;
    if (__this_01 != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__SetPropertyBlock(__this_01,(__this->fields)._properties,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanNapeChunkEffect$$UpdateFlight
// il2cpp: void Characters_TitanNapeChunkEffect__UpdateFlight (Characters_TitanNapeChunkEffect_o* __this, float deltaTime, const MethodInfo* method);
// 0x5c5eda0

void Characters_TitanNapeChunkEffect__UpdateFlight
               (Characters_TitanNapeChunkEffect_o *__this,float deltaTime,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_ParticleSystem_o *__this_00;
  bool bVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *__this_01;
  float fVar7;
  float fVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o UVar15;
  UnityEngine_Quaternion_o UVar16;
  UnityEngine_Vector3_o end;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_98;
  float fStack_88;
  float fStack_84;
  UnityEngine_Vector3_Fields UStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  UnityEngine_RaycastHit_o UStack_48;
  
  if (Il2CppMethodInitialized_07547887 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    Il2CppMethodInitialized_07547887 = '\x01';
  }
  UStack_48.fields.m_UV.fields.x = 0.0;
  UStack_48.fields.m_UV.fields.y = 0.0;
  UStack_48.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  UStack_48.fields.m_Normal.fields.y = 0.0;
  UStack_48.fields.m_Normal.fields.z = 0.0;
  UStack_48.fields.m_FaceID = 0;
  UStack_48.fields.m_Distance = 0.0;
  UStack_48.fields.m_Point.fields.x = 0.0;
  UStack_48.fields.m_Point.fields.y = 0.0;
  UStack_48.fields.m_Point.fields.z = 0.0;
  UStack_48.fields.m_Normal.fields.x = 0.0;
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    UVar13 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
    uVar1 = (__this->fields)._velocity.fields.x;
    uVar3 = (__this->fields)._velocity.fields.y;
    fVar12 = (__this->fields)._velocity.fields.z;
    auStack_58._8_4_ = extraout_XMM0_Dc;
    auStack_58._0_8_ = UVar13.fields._0_8_;
    auStack_58._12_4_ = extraout_XMM0_Dd;
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    UVar14 = UnityEngine_Physics__get_gravity((MethodInfo *)0x0);
    fVar11 = deltaTime * 0.5 * deltaTime;
    end.fields.z = fVar12 * deltaTime + UVar13.fields.z + UVar14.fields.z * fVar11;
    fVar7 = (float)uVar1 * deltaTime + UVar13.fields.x + fVar11 * UVar14.fields.x;
    fVar11 = (float)uVar3 * deltaTime + UVar13.fields.y + fVar11 * UVar14.fields.y;
    uStack_68._0_4_ = (__this->fields)._velocity.fields.x;
    uStack_68._4_4_ = (__this->fields)._velocity.fields.y;
    uStack_60 = 0;
    fVar12 = (__this->fields)._velocity.fields.z;
    UVar14 = UnityEngine_Physics__get_gravity((MethodInfo *)0x0);
    (__this->fields)._velocity.fields.x = UVar14.fields.x * deltaTime + (float)uStack_68;
    (__this->fields)._velocity.fields.y = UVar14.fields.y * deltaTime + uStack_68._4_4_;
    (__this->fields)._velocity.fields.z = UVar14.fields.z * deltaTime + fVar12;
    if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
    }
    UVar13.fields.x = (float)auStack_58._0_4_;
    UVar13.fields.y = (float)auStack_58._4_4_;
    end.fields.x = fVar7;
    end.fields.y = fVar11;
    bVar5 = UnityEngine_Physics__Linecast
                      (UVar13,end,&UStack_48,
                       TypeInfo_Characters_TitanLimbFallEffect->static_fields->GroundMask,1,(MethodInfo *)0x0)
    ;
    if (bVar5) {
      (__this->fields)._landed = true;
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      UVar13 = UnityEngine_RaycastHit__get_point(&UStack_48,(MethodInfo *)0x0);
      UVar14 = UnityEngine_RaycastHit__get_normal(&UStack_48,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        fVar12 = (__this->fields)._scale * 0.15;
        uStack_98._0_4_ = UVar13.fields.x;
        uStack_98._4_4_ = UVar13.fields.y;
        value.fields.y = uStack_98._4_4_ + UVar14.fields.y * fVar12;
        value.fields.x = (float)uStack_98 + UVar14.fields.x * fVar12;
        value.fields.z = UVar13.fields.z + UVar14.fields.z * fVar12;
        UnityEngine_Transform__set_position(pUVar6,value,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._trail;
        if (__this_00 != (UnityEngine_ParticleSystem_o *)0x0) {
          UnityEngine_ParticleSystem__Stop(__this_00,true,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      uVar2 = (__this->fields)._angularVelocity.fields.x;
      uVar4 = (__this->fields)._angularVelocity.fields.y;
      UStack_78.z = deltaTime * (__this->fields)._angularVelocity.fields.z * 0.017453292;
      UStack_78.y = (float)uVar4 * deltaTime * 0.017453292;
      UStack_78.x = (float)uVar2 * deltaTime * 0.017453292;
      UVar15 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o *)&UStack_78,(MethodInfo *)0x0);
      __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UVar16 = UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
        fVar9 = UVar16.fields.z;
        fVar10 = UVar16.fields.w;
        fVar12 = UVar16.fields.x;
        fVar8 = UVar16.fields.y;
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          fStack_b8 = UVar15.fields.z;
          fStack_b4 = UVar15.fields.w;
          fStack_88 = UVar15.fields.x;
          fStack_84 = UVar15.fields.y;
          UVar15.fields.z = (fStack_b8 * fVar10 + fStack_b4 * fVar9 + fVar8 * fStack_88) - fVar12 * fStack_84;
          UVar15.fields.w =
               ((fStack_b4 * fVar10 - fStack_88 * fVar12) - fStack_84 * fVar8) - fStack_b8 * fVar9;
          UVar15.fields.x = (fStack_b4 * fVar12 + fVar10 * fStack_88 + fStack_84 * fVar9) - fVar8 * fStack_b8;
          UVar15.fields.y = (fStack_b4 * fVar8 + fVar10 * fStack_84 + fStack_b8 * fVar12) - fVar9 * fStack_88;
          UVar14.fields.z = end.fields.z;
          UVar14.fields.x = fVar7;
          UVar14.fields.y = fVar11;
          UnityEngine_Transform__SetPositionAndRotation(pUVar6,UVar14,UVar15,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanNapeChunkEffect$$OnDestroy
// il2cpp: void Characters_TitanNapeChunkEffect__OnDestroy (Characters_TitanNapeChunkEffect_o* __this, const MethodInfo* method);
// 0x5c5f120

void Characters_TitanNapeChunkEffect__OnDestroy(Characters_TitanNapeChunkEffect_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_TitanNapeChunkEffect__o *__this_00;
  
  if (Il2CppMethodInitialized_07547888 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanNapeChunkEffect_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanNapeChunkEffect);
    Il2CppMethodInitialized_07547888 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanNapeChunkEffect->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanNapeChunkEffect->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanNapeChunkEffect);
    __this_00 = TypeInfo_Characters_TitanNapeChunkEffect->static_fields->Pool;
  }
  else {
    __this_00 = *(System_Collections_Generic_List_TitanNapeChunkEffect__o **)
                 ((long)((Il2CppClass *)TypeInfo_Characters_TitanNapeChunkEffect)->static_fields + 0x18);
  }
  if (__this_00 == (System_Collections_Generic_List_TitanNapeChunkEffect__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___Remove
            ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
             (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_TitanNapeChunkEffect_Remove);
  return;
}


// Characters.TitanNapeChunkEffect$$.ctor
// il2cpp: void Characters_TitanNapeChunkEffect___ctor (Characters_TitanNapeChunkEffect_o* __this, const MethodInfo* method);
// 0x5c5f1c0

void Characters_TitanNapeChunkEffect___ctor(Characters_TitanNapeChunkEffect_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.TitanNapeChunkEffect$$.cctor
// il2cpp: void Characters_TitanNapeChunkEffect___cctor (const MethodInfo* method);
// 0x5c5f1d0

void Characters_TitanNapeChunkEffect___cctor(MethodInfo *method)

{
  Characters_TitanNapeChunkEffect_StaticFields *pCVar1;
  int32_t iVar2;
  System_Collections_Generic_List_TitanNapeChunkEffect__o *__this;
  
  if (Il2CppMethodInitialized_07547889 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanNapeChunkEffect_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_TitanNapeChunkEffect)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanNapeChunkEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"_Dissolve");
    il2cpp_codegen_initialize_runtime_metadata(&"_DissolveSeed");
    Il2CppMethodInitialized_07547889 = '\x01';
  }
  pCVar1 = TypeInfo_Characters_TitanNapeChunkEffect->static_fields;
  (pCVar1->NeckOffset).fields.x = 0.0;
  (pCVar1->NeckOffset).fields.y = 0.0357;
  (pCVar1->NeckOffset).fields.z = -0.1214;
  iVar2 = UnityEngine_Shader__PropertyToID("_Dissolve",(MethodInfo *)0x0);
  TypeInfo_Characters_TitanNapeChunkEffect->static_fields->Dissolve = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_DissolveSeed",(MethodInfo *)0x0);
  TypeInfo_Characters_TitanNapeChunkEffect->static_fields->DissolveSeed = iVar2;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_TitanNapeChunkEffect);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_TitanNapeChunkEffect_ctor);
  pCVar1 = TypeInfo_Characters_TitanNapeChunkEffect->static_fields;
  pCVar1->Pool = __this;
  Il2CppCodeGenWriteBarrier(&pCVar1->Pool);
  return;
}


