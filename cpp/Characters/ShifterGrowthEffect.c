// Type: Characters.ShifterGrowthEffect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Characters/ShifterGrowthEffect.cs
// Prior real C# source: none
// --------------------------------

// Characters.ShifterGrowthEffect.Measurement$$.ctor
// il2cpp: void Characters_ShifterGrowthEffect_Measurement___ctor (Characters_ShifterGrowthEffect_Measurement_o* __this, int32_t count, const MethodInfo* method);
// 0x1821929b0

void Characters_ShifterGrowthEffect_Measurement___ctor
               (Characters_ShifterGrowthEffect_Measurement_o *__this,int32_t count,MethodInfo *method)

{
  UnityEngine_Vector3_array *value;
  System_Single_array *value_00;
  
  if (Il2CppMethodInitialized_184346d6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_184346d6a = '\x01';
  }
  (__this->fields).Maximum = 0.0001;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  value = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,count);
  (__this->fields).Positions = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Positions,value);
  value_00 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,count);
  (__this->fields).Distances = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Distances,value_00);
  return;
}


// Characters.ShifterGrowthEffect.Layer$$.ctor
// il2cpp: void Characters_ShifterGrowthEffect_Layer___ctor (Characters_ShifterGrowthEffect_Layer_o* __this, UnityEngine_SkinnedMeshRenderer_o* renderer, UnityEngine_Mesh_o* originalMesh, UnityEngine_Material_array* originalMaterials, const MethodInfo* method);
// 0x1821928a0

void Characters_ShifterGrowthEffect_Layer___ctor
               (Characters_ShifterGrowthEffect_Layer_o *__this,UnityEngine_SkinnedMeshRenderer_o *renderer,
               UnityEngine_Mesh_o *originalMesh,UnityEngine_Material_array *originalMaterials,
               MethodInfo *method)

{
  UnityEngine_MaterialPropertyBlock_o *__this_00;
  UnityEngine_Shader_array *value;
  UnityEngine_Material_array *value_00;
  
  if (Il2CppMethodInitialized_184346d6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MaterialPropertyBlock);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Shader_array);
    Il2CppMethodInitialized_184346d6b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
  UnityEngine_MaterialPropertyBlock___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Properties = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Properties,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Renderer = renderer;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Renderer,renderer);
  (__this->fields).OriginalMesh = originalMesh;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OriginalMesh,originalMesh);
  (__this->fields).OriginalMaterials = originalMaterials;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OriginalMaterials,originalMaterials);
  if (originalMaterials != (UnityEngine_Material_array *)0x0) {
    value = (UnityEngine_Shader_array *)
            SZArrayNew(TypeInfo_UnityEngine_Shader_array,(uint32_t)originalMaterials->max_length);
    (__this->fields).OriginalShaders = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).OriginalShaders,value);
    value_00 = (UnityEngine_Material_array *)
               SZArrayNew(TypeInfo_UnityEngine_Material_array,(uint32_t)originalMaterials->max_length);
    (__this->fields).GrowthMaterials = value_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).GrowthMaterials,value_00);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$Play
// il2cpp: void Characters_ShifterGrowthEffect__Play (Characters_ShifterGrowthEffect_o* __this, Characters_BaseShifter_o* shifter, const MethodInfo* method);
// 0x1821749a0
// eh: try 0x182174cd1..0x182174de7 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182174d0b: nop dword ptr [rax + rax]
// asm:   0x182174d43: mov rdx, qword ptr [rip + 0x1f2214e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer_Dispose
// asm:   0x182174d4a: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182174d4f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182174d54: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182174d59: test rcx, rcx
// asm:   0x182174d5c: jne 0x182174de7
// asm:   0x182174d62: mov r14, qword ptr [rsp + 0xa0]
// asm:   0x182174d6a: mov r12, qword ptr [rsp + 0xb8]
// asm:   0x182174de7: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_ShifterGrowthEffect__Play
               (Characters_ShifterGrowthEffect_o *__this,Characters_BaseShifter_o *shifter,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_SkinnedMeshRenderer_o *__this_01;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  UnityEngine_Shader_o *value;
  System_Collections_Generic_List_SkinnedMeshRenderer__o *renderers;
  System_Object_array *pSVar5;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_Mesh_o *pUVar7;
  UnityEngine_Transform_array *pUVar8;
  UnityEngine_Transform_o *root;
  uint uVar9;
  float fVar10;
  undefined1 local_70 [16];
  UnityEngine_SkinnedMeshRenderer_o *local_60;
  System_Collections_Generic_List_Enumerator_object__o local_58;
  
  if (Il2CppMethodInitialized_184346d59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Shader);
    il2cpp_codegen_initialize_runtime_metadata(&"Shaders/TitanRegrowth");
    Il2CppMethodInitialized_184346d59 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  (__this->fields)._shifter = shifter;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._shifter,shifter);
  fVar10 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._startTime = fVar10;
  value = UnityEngine_Resources__Load_object_
                    ("Shaders/TitanRegrowth",(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Shader);
  (__this->fields)._shader = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._shader,value);
  renderers = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_SkinnedMeshRenderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)renderers,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_ctor);
  if ((shifter != (Characters_BaseShifter_o *)0x0) &&
     (pSVar5 = UnityEngine_Component__GetComponentsInChildren_object__665370
                         ((UnityEngine_Component_o *)shifter,
                          (MethodInfo_665370 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer),
     pSVar5 != (System_Object_array *)0x0)) {
    for (uVar9 = 0; (int)uVar9 < (int)pSVar5->max_length; uVar9 = uVar9 + 1) {
      if ((uint)pSVar5->max_length <= uVar9) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (UnityEngine_Renderer_o *)pSVar5->m_Items[(int)uVar9];
      if (__this_00 == (UnityEngine_Renderer_o *)0x0) goto label_182174dca;
      bVar2 = UnityEngine_Renderer__get_enabled(__this_00,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar6 = (UnityEngine_Object_o *)
                 UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                           ((UnityEngine_SkinnedMeshRenderer_o *)__this_00,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar2) {
          pUVar7 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                             ((UnityEngine_SkinnedMeshRenderer_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Mesh_o *)0x0) goto label_182174dca;
          bVar2 = UnityEngine_Mesh__get_isReadable(pUVar7,(MethodInfo *)0x0);
          if (bVar2) {
            if (renderers == (System_Collections_Generic_List_SkinnedMeshRenderer__o *)0x0)
            goto label_182174dca;
            il2cpp_runtime_helper_180012890(renderers);
            pUVar6 = (UnityEngine_Object_o *)(__this->fields)._body;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar2 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar2) {
              pUVar7 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                                 ((UnityEngine_SkinnedMeshRenderer_o *)__this_00,(MethodInfo *)0x0);
              if (pUVar7 == (UnityEngine_Mesh_o *)0x0) goto label_182174dca;
              iVar3 = UnityEngine_Mesh__get_vertexCount(pUVar7,(MethodInfo *)0x0);
              __this_01 = (__this->fields)._body;
              if ((__this_01 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) ||
                 (pUVar7 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(__this_01,(MethodInfo *)0x0),
                 pUVar7 == (UnityEngine_Mesh_o *)0x0)) goto label_182174dca;
              iVar4 = UnityEngine_Mesh__get_vertexCount(pUVar7,(MethodInfo *)0x0);
              if (iVar3 <= iVar4) goto label_182174c26;
            }
            (__this->fields)._body = (UnityEngine_SkinnedMeshRenderer_o *)__this_00;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._body,__this_00);
          }
        }
      }
label_182174c26:
    }
    pUVar6 = (UnityEngine_Object_o *)(__this->fields)._body;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar6 = (UnityEngine_Object_o *)(__this->fields)._shader;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        if (renderers == (System_Collections_Generic_List_SkinnedMeshRenderer__o *)0x0) goto label_182174dca;
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
                   (System_Collections_Generic_List_T__o *)renderers,
                   (MethodInfo_91F180 *)
                   MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_GetEnumerator);
        local_58.fields._list = (System_Collections_Generic_List_T__o *)local_70._0_8_;
        local_58.fields._index = local_70._8_4_;
        local_58.fields._version = local_70._12_4_;
        local_58.fields._current = (Il2CppObject *)local_60;
        local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_70._8_8_ = &local_58;
        while (bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (&local_58,
                                  (MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer_MoveNext
                                 ), bVar2) {
          if ((UnityEngine_SkinnedMeshRenderer_o *)local_58.fields._current ==
              (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar8 = UnityEngine_SkinnedMeshRenderer__get_bones
                             ((UnityEngine_SkinnedMeshRenderer_o *)local_58.fields._current,(MethodInfo *)0x0)
          ;
          uVar9 = 0;
          if (pUVar8 == (UnityEngine_Transform_array *)0x0) {
            ThrowNullReferenceException();
          }
          for (; uVar1 = (uint)pUVar8->max_length, (int)uVar9 < (int)uVar1; uVar9 = uVar9 + 1) {
            if (uVar1 <= uVar9) {
              ThrowIndexOutOfRangeException();
            }
            Characters_ShifterGrowthEffect__AddNode(__this,pUVar8->m_Items[(int)uVar9],(MethodInfo *)0x0);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                   MethodInfo_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer_Dispose);
        root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)shifter,(MethodInfo *)0x0);
        Characters_ShifterGrowthEffect__ComputeDistances(__this,root,(MethodInfo *)0x0);
        Characters_ShifterGrowthEffect__AddLayers(__this,renderers,(MethodInfo *)0x0);
        if ((shifter->fields).EffectsEnabled != false) {
          Characters_ShifterGrowthEffect__CreateChunks(__this,(MethodInfo *)0x0);
        }
        Characters_ShifterGrowthEffect__LateUpdate(__this,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_182174dca:
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$AddNode
// il2cpp: void Characters_ShifterGrowthEffect__AddNode (Characters_ShifterGrowthEffect_o* __this, UnityEngine_Transform_o* bone, const MethodInfo* method);
// 0x182172040

void Characters_ShifterGrowthEffect__AddNode
               (Characters_ShifterGrowthEffect_o *__this,UnityEngine_Transform_o *bone,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_Transform__int__o *__this_00;
  System_Collections_Generic_List_Transform__o *pSVar3;
  System_Collections_Generic_Dictionary_object__int__o *__this_01;
  UnityEngine_Transform_array *pUVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  
  if (Il2CppMethodInitialized_184346d5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Transform_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346d5a = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)bone,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    return;
  }
  __this_00 = (__this->fields)._nodeIndices;
  if (__this_00 != (System_Collections_Generic_Dictionary_Transform__int__o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)bone
                       ,(MethodInfo_1455450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_Transform_int_ContainsKey);
    if (bVar6) {
      return;
    }
    pSVar3 = (__this->fields)._nodes;
    if ((pSVar3 != (System_Collections_Generic_List_Transform__o *)0x0) &&
       (__this_01 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields)._nodeIndices,
       __this_01 != (System_Collections_Generic_Dictionary_object__int__o *)0x0)) {
      System_Collections_Generic_Dictionary_object__int___set_Item
                (__this_01,(Il2CppObject *)bone,(pSVar3->fields)._size,
                 (MethodInfo_147A820 *)MethodInfo_System_Collections_Generic_Dictionary_Transform_int_set_Item
                );
      pMVar5 = MethodInfo_System_Collections_Generic_List_Transform_Add;
      pSVar3 = (__this->fields)._nodes;
      if (pSVar3 != (System_Collections_Generic_List_Transform__o *)0x0) {
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (pSVar3->fields)._items;
        if (pUVar4 != (UnityEngine_Transform_array *)0x0) {
          uVar2 = (pSVar3->fields)._size;
          if ((uint)pUVar4->max_length <= uVar2) {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)bone,
                       (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
            return;
          }
          (pSVar3->fields)._size = uVar2 + 1;
          if ((uint)pUVar4->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pUVar4->m_Items[(int)uVar2] = bone;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,bone);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$ComputeDistances
// il2cpp: void Characters_ShifterGrowthEffect__ComputeDistances (Characters_ShifterGrowthEffect_o* __this, UnityEngine_Transform_o* root, const MethodInfo* method);
// 0x1821721a0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821722d7: nop word ptr [rax + rax]
// asm:   0x182172322: mov rcx, rax
// asm:   0x1821723e6: mov rcx, rdi
// asm:   0x1821723e9: jmp 0x182172325
// asm:   0x1821724df: nop 
// asm:   0x18217256d: nop dword ptr [rax]

void Characters_ShifterGrowthEffect__ComputeDistances
               (Characters_ShifterGrowthEffect_o *__this,UnityEngine_Transform_o *root,MethodInfo *method)

{
  undefined8 uVar1;
  uint32_t length;
  System_Collections_Generic_List_Transform__o *pSVar2;
  System_Collections_Generic_Dictionary_Transform__int__o *__this_00;
  System_String_array *array;
  bool bVar3;
  int32_t iVar4;
  System_Int32_array *pSVar5;
  System_Single_array *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  System_String_o *value;
  Il2CppObject *pIVar8;
  UnityEngine_Vector3_o *pUVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  UnityEngine_Vector3_o local_68;
  UnityEngine_Vector3_o local_58 [5];
  
  if (Il2CppMethodInitialized_184346d5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_bool_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Transform_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_get_Item)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterGrowthEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    Il2CppMethodInitialized_184346d5b = '\x01';
  }
  pSVar2 = (__this->fields)._nodes;
  if (pSVar2 == (System_Collections_Generic_List_Transform__o *)0x0) {
label_1821726e5:
    ThrowNullReferenceException();
  }
  length = (pSVar2->fields)._size;
  pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,length);
  (__this->fields)._parents = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._parents,pSVar5);
  pSVar6 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,length);
  (__this->fields)._distances = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._distances,pSVar6);
  uVar12 = 0;
  if (0 < (int)length) {
    do {
      pSVar5 = (__this->fields)._parents;
      if (pSVar5 == (System_Int32_array *)0x0) goto label_1821726e5;
      uVar11 = (uint)uVar12;
      if ((uint)pSVar5->max_length <= uVar11) goto label_1821726df;
      pSVar5->m_Items[uVar12] = -1;
      pSVar2 = (__this->fields)._nodes;
      if (pSVar2 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_1821726e5;
      pUVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,uVar11,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Transform_get_Item);
      while( true ) {
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_1821726e5;
        pUVar7 = UnityEngine_Transform__GetParent(pUVar7,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar3) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)root,(MethodInfo *)0x0);
        if (!bVar3) break;
        pSVar5 = (__this->fields)._parents;
        if ((pSVar5 == (System_Int32_array *)0x0) ||
           (__this_00 = (__this->fields)._nodeIndices,
           __this_00 == (System_Collections_Generic_Dictionary_Transform__int__o *)0x0)) goto label_1821726e5;
        if ((uint)pSVar5->max_length <= uVar11) goto label_1821726df;
        bVar3 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (Il2CppObject *)pUVar7,
                           (UnityEngine_UIElements_TextureId_o *)(pSVar5->m_Items + uVar12),
                           (MethodInfo_1461BD0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Transform_int_TryGetValue);
        if (bVar3) break;
        pSVar5 = (__this->fields)._parents;
        if (pSVar5 == (System_Int32_array *)0x0) goto label_1821726e5;
        if ((uint)pSVar5->max_length <= uVar11) goto label_1821726df;
        pSVar5->m_Items[uVar12] = -1;
      }
      pSVar6 = (__this->fields)._distances;
      if ((TypeInfo_Characters_ShifterGrowthEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterGrowthEffect);
      }
      pSVar2 = (__this->fields)._nodes;
      if (pSVar2 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_1821726e5;
      array = TypeInfo_Characters_ShifterGrowthEffect->static_fields->Origin;
      pUVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,uVar11,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Transform_get_Item);
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_1821726e5;
      value = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
      iVar4 = System_Array__IndexOf_object_
                        ((System_Object_array *)array,(Il2CppObject *)value,
                         (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_string);
      if (iVar4 < 0) {
        fVar14 = 3.4028235e+38;
      }
      else {
        fVar14 = 0.0;
      }
      if (pSVar6 == (System_Single_array *)0x0) goto label_1821726e5;
      if ((uint)pSVar6->max_length <= uVar11) goto label_1821726df;
      pSVar6->m_Items[uVar12] = fVar14;
      uVar12 = (ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < (int)length);
  }
  iVar4 = System_Array__IndexOf_float_
                    ((__this->fields)._distances,0.0,
                     (MethodInfo_767B20 *)MethodInfo_System_Array_IndexOf_float);
  if (iVar4 < 0) {
    pSVar6 = (__this->fields)._distances;
    if (pSVar6 == (System_Single_array *)0x0) goto label_1821726e5;
    if ((int)pSVar6->max_length == 0) {
label_1821726df:
      ThrowIndexOutOfRangeException();
    }
    pSVar6->m_Items[0] = 0.0;
  }
  pIVar8 = SZArrayNew(TypeInfo_bool_array,length);
  if (0 < (int)length) {
    iVar13 = 0;
    do {
      if (pIVar8 == (Il2CppObject *)0x0) goto label_1821726e5;
      uVar11 = 0xffffffff;
      uVar10 = 0;
      do {
        if (*(uint *)&pIVar8[1].monitor <= uVar10) goto label_1821726df;
        if (*(char *)((longlong)&pIVar8[2].klass + (longlong)(int)uVar10) == '\0') {
          pSVar6 = (__this->fields)._distances;
          if (pSVar6 == (System_Single_array *)0x0) goto label_1821726e5;
          if ((uint)pSVar6->max_length <= uVar10) goto label_1821726df;
          if (pSVar6->m_Items[(int)uVar10] <= 3.4028235e+38 && pSVar6->m_Items[(int)uVar10] != 3.4028235e+38)
          {
            if (-1 < (int)uVar11) {
              if ((uint)pSVar6->max_length <= uVar11) goto label_1821726df;
              if (pSVar6->m_Items[(int)uVar11] < pSVar6->m_Items[(int)uVar10] ||
                  pSVar6->m_Items[(int)uVar11] == pSVar6->m_Items[(int)uVar10]) goto label_18217254b;
            }
            uVar11 = uVar10;
          }
        }
label_18217254b:
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)length);
      if ((int)uVar11 < 0) {
        return;
      }
      if (*(uint *)&pIVar8[1].monitor <= uVar11) goto label_1821726df;
      uVar12 = 0;
      *(undefined1 *)((longlong)&pIVar8[2].klass + (longlong)(int)uVar11) = 1;
      do {
        pSVar5 = (__this->fields)._parents;
        if (pSVar5 == (System_Int32_array *)0x0) goto label_1821726e5;
        uVar10 = (uint)uVar12;
        if ((uint)pSVar5->max_length <= uVar10) goto label_1821726df;
        if (pSVar5->m_Items[uVar12] == uVar11) {
label_1821725a2:
          pSVar6 = (__this->fields)._distances;
          if (pSVar6 == (System_Single_array *)0x0) goto label_1821726e5;
          if ((uint)pSVar6->max_length <= uVar11) goto label_1821726df;
          pSVar2 = (__this->fields)._nodes;
          if (pSVar2 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_1821726e5;
          fVar14 = pSVar6->m_Items[(int)uVar11];
          pUVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,uVar11,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_Transform_get_Item);
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_1821726e5;
          pUVar9 = UnityEngine_Transform__get_position(&local_68,pUVar7,(MethodInfo *)0x0);
          pSVar2 = (__this->fields)._nodes;
          if (pSVar2 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_1821726e5;
          uVar1._0_4_ = (pUVar9->fields).x;
          uVar1._4_4_ = (pUVar9->fields).y;
          fVar15 = (pUVar9->fields).z;
          pUVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,uVar10,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_Transform_get_Item);
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_1821726e5;
          pUVar9 = UnityEngine_Transform__get_position(local_58,pUVar7,(MethodInfo *)0x0);
          local_88._0_4_ = (pUVar9->fields).x;
          local_88._4_4_ = (pUVar9->fields).y;
          local_80 = (pUVar9->fields).z;
          local_78 = uVar1;
          local_70 = fVar15;
          fVar15 = (float)il2cpp_runtime_helper_180562c80(&local_78,&local_88,0);
          pSVar6 = (__this->fields)._distances;
          if (pSVar6 == (System_Single_array *)0x0) goto label_1821726e5;
          if ((uint)pSVar6->max_length <= uVar10) goto label_1821726df;
          fVar15 = fVar15 + fVar14;
          if (fVar15 < pSVar6->m_Items[uVar12]) {
            pSVar6->m_Items[uVar12] = fVar15;
          }
        }
        else {
          if ((uint)pSVar5->max_length <= uVar11) goto label_1821726df;
          if (pSVar5->m_Items[(int)uVar11] == uVar10) goto label_1821725a2;
        }
        uVar12 = (ulonglong)(uVar10 + 1);
      } while ((int)(uVar10 + 1) < (int)length);
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)length);
  }
  return;
}


// Characters.ShifterGrowthEffect$$VertexDistance
// il2cpp: float Characters_ShifterGrowthEffect__VertexDistance (Characters_ShifterGrowthEffect_o* __this, UnityEngine_Vector3_o position, int32_t bone, const MethodInfo* method);
// 0x182175460
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821754cb: nop dword ptr [rax + rax]
// asm:   0x1821755c3: jmp 0x1821754d0

float Characters_ShifterGrowthEffect__VertexDistance
                (Characters_ShifterGrowthEffect_o *__this,UnityEngine_Vector3_o *position,int32_t bone,
                MethodInfo *method)

{
  float fVar1;
  System_Collections_Generic_List_Transform__o *pSVar2;
  System_Int32_array *pSVar3;
  System_Single_array *pSVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar5;
  uint index;
  float fVar6;
  float fVar7;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  UnityEngine_Vector3_o local_68 [6];
  
  if (Il2CppMethodInitialized_184346d5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Transform_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_get_Item)
    ;
    Il2CppMethodInitialized_184346d5c = '\x01';
  }
  index = 0;
  fVar7 = 3.4028235e+38;
  pSVar2 = (__this->fields)._nodes;
  while (pSVar2 != (System_Collections_Generic_List_Transform__o *)0x0) {
    if ((pSVar2->fields)._size <= (int)index) {
      return fVar7;
    }
    if (index == bone) {
label_18217550f:
      pSVar4 = (__this->fields)._distances;
      if (pSVar4 == (System_Single_array *)0x0) break;
      if ((uint)pSVar4->max_length <= index) {
label_1821755e7:
        ThrowIndexOutOfRangeException();
      }
      if (pSVar4->m_Items[(int)index] <= 3.4028235e+38 && pSVar4->m_Items[(int)index] != 3.4028235e+38) {
        pSVar2 = (__this->fields)._nodes;
        if (pSVar2 == (System_Collections_Generic_List_Transform__o *)0x0) break;
        fVar1 = ((__this->fields)._distances)->m_Items[(int)index];
        __this_00 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_Transform_get_Item);
        if (__this_00 == (UnityEngine_Transform_o *)0x0) break;
        pUVar5 = UnityEngine_Transform__get_position(local_68,__this_00,(MethodInfo *)0x0);
        local_88._0_4_ = (pUVar5->fields).x;
        local_88._4_4_ = (pUVar5->fields).y;
        local_80 = (pUVar5->fields).z;
        local_78._0_4_ = (position->fields).x;
        local_78._4_4_ = (position->fields).y;
        local_70 = (position->fields).z;
        fVar6 = (float)il2cpp_runtime_helper_180562c80(&local_78,&local_88,0);
        fVar6 = fVar6 + fVar1;
        if (fVar6 <= fVar7) {
          fVar7 = fVar6;
        }
      }
    }
    else {
      pSVar3 = (__this->fields)._parents;
      if (pSVar3 == (System_Int32_array *)0x0) break;
      if ((uint)pSVar3->max_length <= index) goto label_1821755e7;
      if (pSVar3->m_Items[(int)index] == bone) goto label_18217550f;
      if ((uint)pSVar3->max_length <= (uint)bone) goto label_1821755e7;
      if (pSVar3->m_Items[bone] == index) goto label_18217550f;
    }
    index = index + 1;
    pSVar2 = (__this->fields)._nodes;
  }
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$Measure
// il2cpp: Characters_ShifterGrowthEffect_Measurement_o* Characters_ShifterGrowthEffect__Measure (Characters_ShifterGrowthEffect_o* __this, UnityEngine_Mesh_o* mesh, UnityEngine_Transform_array* bones, const MethodInfo* method);
// 0x182173fc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18217434d: nop dword ptr [rax]

Characters_ShifterGrowthEffect_Measurement_o *
Characters_ShifterGrowthEffect__Measure
          (Characters_ShifterGrowthEffect_o *__this,UnityEngine_Mesh_o *mesh,
          UnityEngine_Transform_array *bones,MethodInfo *method)

{
  UnityEngine_Matrix4x4_o *pUVar1;
  Il2CppObject *pIVar2;
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  int32_t bone;
  UnityEngine_Transform_o *pUVar48;
  UnityEngine_Matrix4x4_StaticFields *pUVar49;
  System_Collections_Generic_Dictionary_Transform__int__o *__this_00;
  UnityEngine_Vector3_array *pUVar50;
  System_Single_array *pSVar51;
  UnityEngine_Matrix4x4_Fields *pUVar52;
  UnityEngine_BoneWeight_Fields *pUVar53;
  bool bVar54;
  uint uVar55;
  UnityEngine_Matrix4x4_array *pUVar56;
  Il2CppObject *pIVar57;
  Il2CppObject *pIVar58;
  UnityEngine_Matrix4x4_o *pUVar59;
  longlong lVar60;
  UnityEngine_Vector3_array *pUVar61;
  UnityEngine_BoneWeight_array *pUVar62;
  Characters_ShifterGrowthEffect_Measurement_o *__this_01;
  Characters_ShifterGrowthEffect_Measurement_o *pCVar63;
  UnityEngine_UIElements_TextureId_o UVar64;
  uint uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  UnityEngine_UIElements_TextureId_o local_res10 [2];
  undefined1 local_1d0 [8];
  UnityEngine_TextCore_LowLevel_MarkPositionAdjustment_Fields UStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  UnityEngine_Vector3_Fields local_1a8;
  UnityEngine_Matrix4x4_Fields local_198;
  UnityEngine_Matrix4x4_Fields local_158;
  UnityEngine_Matrix4x4_o local_118 [3];
  
  if (Il2CppMethodInitialized_184346d5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Matrix4x4_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterGrowthEffect_Measurement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346d5d = '\x01';
  }
  local_res10[0].fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  local_1d0._0_4_ = 0.0;
  local_1d0._4_4_ = 0.0;
  UStack_1c8.m_XPositionAdjustment = 0.0;
  UStack_1c8.m_YPositionAdjustment = 0.0;
  local_1c0._0_4_ = 0.0;
  local_1c0._4_4_ = 0.0;
  uStack_1b8._0_4_ = 0.0;
  uStack_1b8._4_4_ = 0.0;
  if (mesh != (UnityEngine_Mesh_o *)0x0) {
    pUVar56 = UnityEngine_Mesh__get_bindposes(mesh,(MethodInfo *)0x0);
    if (bones != (UnityEngine_Transform_array *)0x0) {
      pIVar57 = SZArrayNew(TypeInfo_UnityEngine_Matrix4x4_array,(uint32_t)bones->max_length);
      pIVar58 = SZArrayNew(TypeInfo_int_array,(uint32_t)bones->max_length);
      for (uVar65 = 0; (int)uVar65 < (int)bones->max_length; uVar65 = uVar65 + 1) {
        if ((uint)bones->max_length <= uVar65) goto label_182174985;
        pUVar48 = bones->m_Items[(int)uVar65];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar54 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar48,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar54) {
          if (Il2CppMethodInitialized_184346d69 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Matrix4x4);
            Il2CppMethodInitialized_184346d69 = '\x01';
          }
          pUVar49 = TypeInfo_UnityEngine_Matrix4x4->static_fields;
          fVar70 = (pUVar49->identityMatrix).fields.m00;
          fVar71 = (pUVar49->identityMatrix).fields.m10;
          fVar72 = (pUVar49->identityMatrix).fields.m20;
          fVar73 = (pUVar49->identityMatrix).fields.m30;
          fVar74 = (pUVar49->identityMatrix).fields.m01;
          fVar75 = (pUVar49->identityMatrix).fields.m11;
          fVar76 = (pUVar49->identityMatrix).fields.m21;
          fVar77 = (pUVar49->identityMatrix).fields.m31;
          fVar78 = (pUVar49->identityMatrix).fields.m02;
          fVar79 = (pUVar49->identityMatrix).fields.m12;
          fVar80 = (pUVar49->identityMatrix).fields.m22;
          fVar81 = (pUVar49->identityMatrix).fields.m32;
          fVar82 = (pUVar49->identityMatrix).fields.m03;
          fVar83 = (pUVar49->identityMatrix).fields.m13;
          fVar84 = (pUVar49->identityMatrix).fields.m23;
          fVar66 = (pUVar49->identityMatrix).fields.m33;
        }
        else {
          if ((uint)bones->max_length <= uVar65) goto label_182174985;
          if (bones->m_Items[(int)uVar65] == (UnityEngine_Transform_o *)0x0) goto label_18217497f;
          pUVar59 = UnityEngine_Transform__get_localToWorldMatrix
                              (local_118,bones->m_Items[(int)uVar65],(MethodInfo *)0x0);
          if (pUVar56 == (UnityEngine_Matrix4x4_array *)0x0) goto label_18217497f;
          if ((uint)pUVar56->max_length <= uVar65) goto label_182174985;
          pUVar1 = pUVar56->m_Items + (int)uVar65;
          local_198.m00 = (pUVar1->fields).m00;
          local_198.m10 = (pUVar1->fields).m10;
          local_198.m20 = (pUVar1->fields).m20;
          local_198.m30 = (pUVar1->fields).m30;
          pUVar52 = &pUVar56->m_Items[(int)uVar65].fields;
          local_198.m01 = pUVar52->m01;
          local_198.m11 = pUVar52->m11;
          local_198.m21 = pUVar52->m21;
          local_198.m31 = pUVar52->m31;
          pUVar52 = &pUVar56->m_Items[(int)uVar65].fields;
          local_198.m02 = pUVar52->m02;
          local_198.m12 = pUVar52->m12;
          local_198.m22 = pUVar52->m22;
          local_198.m32 = pUVar52->m32;
          pUVar52 = &pUVar56->m_Items[(int)uVar65].fields;
          local_198.m03 = pUVar52->m03;
          local_198.m13 = pUVar52->m13;
          local_198.m23 = pUVar52->m23;
          local_198.m33 = pUVar52->m33;
          local_158.m00 = (pUVar59->fields).m00;
          local_158.m10 = (pUVar59->fields).m10;
          local_158.m20 = (pUVar59->fields).m20;
          local_158.m30 = (pUVar59->fields).m30;
          local_158.m01 = (pUVar59->fields).m01;
          local_158.m11 = (pUVar59->fields).m11;
          local_158.m21 = (pUVar59->fields).m21;
          local_158.m31 = (pUVar59->fields).m31;
          local_158.m02 = (pUVar59->fields).m02;
          local_158.m12 = (pUVar59->fields).m12;
          local_158.m22 = (pUVar59->fields).m22;
          local_158.m32 = (pUVar59->fields).m32;
          local_158.m03 = (pUVar59->fields).m03;
          local_158.m13 = (pUVar59->fields).m13;
          local_158.m23 = (pUVar59->fields).m23;
          local_158.m33 = (pUVar59->fields).m33;
          pUVar59 = UnityEngine_Matrix4x4__op_Multiply
                              (local_118,(UnityEngine_Matrix4x4_o *)&local_158,
                               (UnityEngine_Matrix4x4_o *)&local_198,(MethodInfo *)0x0);
          fVar70 = (pUVar59->fields).m00;
          fVar71 = (pUVar59->fields).m10;
          fVar72 = (pUVar59->fields).m20;
          fVar73 = (pUVar59->fields).m30;
          fVar74 = (pUVar59->fields).m01;
          fVar75 = (pUVar59->fields).m11;
          fVar76 = (pUVar59->fields).m21;
          fVar77 = (pUVar59->fields).m31;
          fVar78 = (pUVar59->fields).m02;
          fVar79 = (pUVar59->fields).m12;
          fVar80 = (pUVar59->fields).m22;
          fVar81 = (pUVar59->fields).m32;
          fVar82 = (pUVar59->fields).m03;
          fVar83 = (pUVar59->fields).m13;
          fVar84 = (pUVar59->fields).m23;
          fVar66 = (pUVar59->fields).m33;
        }
        if (pIVar57 == (Il2CppObject *)0x0) goto label_18217497f;
        if (*(uint *)&pIVar57[1].monitor <= uVar65) goto label_182174985;
        lVar60 = (longlong)(int)uVar65;
        pIVar2 = pIVar57 + lVar60 * 4 + 2;
        *(float *)&pIVar2->klass = fVar70;
        *(float *)((longlong)&pIVar2->klass + 4) = fVar71;
        *(float *)&pIVar2->monitor = fVar72;
        *(float *)((longlong)&pIVar2->monitor + 4) = fVar73;
        pIVar2 = pIVar57 + lVar60 * 4 + 3;
        *(float *)&pIVar2->klass = fVar74;
        *(float *)((longlong)&pIVar2->klass + 4) = fVar75;
        *(float *)&pIVar2->monitor = fVar76;
        *(float *)((longlong)&pIVar2->monitor + 4) = fVar77;
        pIVar2 = pIVar57 + lVar60 * 4 + 4;
        *(float *)&pIVar2->klass = fVar78;
        *(float *)((longlong)&pIVar2->klass + 4) = fVar79;
        *(float *)&pIVar2->monitor = fVar80;
        *(float *)((longlong)&pIVar2->monitor + 4) = fVar81;
        pIVar2 = pIVar57 + lVar60 * 4 + 5;
        *(float *)&pIVar2->klass = fVar82;
        *(float *)((longlong)&pIVar2->klass + 4) = fVar83;
        *(float *)&pIVar2->monitor = fVar84;
        *(float *)((longlong)&pIVar2->monitor + 4) = fVar66;
        if ((uint)bones->max_length <= uVar65) goto label_182174985;
        pUVar48 = bones->m_Items[(int)uVar65];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar54 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar48,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar54) {
          if ((uint)bones->max_length <= uVar65) goto label_182174985;
          __this_00 = (__this->fields)._nodeIndices;
          if (__this_00 == (System_Collections_Generic_Dictionary_Transform__int__o *)0x0) goto label_18217497f;
          bVar54 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                              (Il2CppObject *)bones->m_Items[(int)uVar65],local_res10,
                              (MethodInfo_1461BD0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_Transform_int_TryGetValue);
          UVar64.fields.m_Index = local_res10[0].fields.m_Index;
          if (!bVar54) goto label_1821742df;
        }
        else {
label_1821742df:
          UVar64.fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)-1;
        }
        if (pIVar58 == (Il2CppObject *)0x0) goto label_18217497f;
        if (*(uint *)&pIVar58[1].monitor <= uVar65) goto label_182174985;
        *(UnityEngine_UIElements_TextureId_Fields *)((longlong)&pIVar58[2].klass + (longlong)(int)uVar65 * 4)
             = UVar64.fields.m_Index;
      }
      pUVar61 = UnityEngine_Mesh__get_vertices(mesh,(MethodInfo *)0x0);
      pUVar62 = UnityEngine_Mesh__get_boneWeights(mesh,(MethodInfo *)0x0);
      if (pUVar61 != (UnityEngine_Vector3_array *)0x0) {
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Characters_ShifterGrowthEffect_Measurement);
        Characters_ShifterGrowthEffect_Measurement___ctor
                  (__this_01,(int32_t)pUVar61->max_length,(MethodInfo *)0x0);
        uVar65 = 0;
        while( true ) {
          if ((int)pUVar61->max_length <= (int)uVar65) {
            return __this_01;
          }
          if (pUVar62 == (UnityEngine_BoneWeight_array *)0x0) break;
          if ((uint)pUVar62->max_length <= uVar65) {
label_182174985:
            ThrowIndexOutOfRangeException();
          }
          local_1d0 = *(undefined1 (*) [8])(pUVar62->m_Items + (int)uVar65);
          UStack_1c8 = ((UnityEngine_TextCore_LowLevel_MarkPositionAdjustment_Fields *)
                       (pUVar62->m_Items + (int)uVar65))[1];
          pUVar53 = &pUVar62->m_Items[(int)uVar65].fields;
          local_1c0._0_4_ = (float)pUVar53->m_BoneIndex0;
          local_1c0._4_4_ = (float)pUVar53->m_BoneIndex1;
          uStack_1b8._0_4_ = (float)pUVar53->m_BoneIndex2;
          uStack_1b8._4_4_ = (float)pUVar53->m_BoneIndex3;
          if (__this_01 == (Characters_ShifterGrowthEffect_Measurement_o *)0x0) break;
          pUVar50 = (__this_01->fields).Positions;
          uVar55 = UnityEngine_TextCore_Glyph__get_index
                             ((UnityEngine_BoneWeight_o *)local_1d0,(MethodInfo *)0x0);
          if (pIVar57 == (Il2CppObject *)0x0) break;
          if (((uint)pUVar61->max_length <= uVar65) || (*(uint *)&pIVar57[1].monitor <= uVar55))
          goto label_182174985;
          lVar60 = (longlong)(int)uVar55;
          fVar70 = pUVar61->m_Items[(int)uVar65].fields.x;
          fVar71 = pUVar61->m_Items[(int)uVar65].fields.y;
          fVar72 = *(float *)&pIVar57[lVar60 * 4 + 2].klass;
          fVar73 = pUVar61->m_Items[(int)uVar65].fields.z;
          fVar74 = *(float *)&pIVar57[lVar60 * 4 + 3].klass;
          fVar75 = *(float *)&pIVar57[lVar60 * 4 + 4].klass;
          fVar76 = *(float *)((longlong)&pIVar57[lVar60 * 4 + 3].klass + 4);
          fVar77 = *(float *)&pIVar57[lVar60 * 4 + 5].klass;
          fVar78 = *(float *)&pIVar57[lVar60 * 4 + 3].monitor;
          fVar79 = *(float *)((longlong)&pIVar57[lVar60 * 4 + 2].klass + 4);
          fVar80 = *(float *)&pIVar57[lVar60 * 4 + 2].monitor;
          fVar81 = *(float *)((longlong)&pIVar57[lVar60 * 4 + 4].klass + 4);
          fVar82 = *(float *)((longlong)&pIVar57[lVar60 * 4 + 5].klass + 4);
          fVar83 = *(float *)&pIVar57[lVar60 * 4 + 4].monitor;
          fVar84 = *(float *)&pIVar57[lVar60 * 4 + 5].monitor;
          fVar66 = UnityEngine_TextCore_LowLevel_MarkPositionAdjustment__get_xPositionAdjustment
                             ((UnityEngine_TextCore_LowLevel_MarkPositionAdjustment_o *)local_1d0,
                              (MethodInfo *)0x0);
          uVar55 = ExitGames_Client_Photon_StreamBuffer__get_Length
                             ((UnityEngine_RenderTextureDescriptor_o *)local_1d0,(MethodInfo *)0x0);
          if (((uint)pUVar61->max_length <= uVar65) || (*(uint *)&pIVar57[1].monitor <= uVar55))
          goto label_182174985;
          lVar60 = (longlong)(int)uVar55;
          fVar3 = pUVar61->m_Items[(int)uVar65].fields.x;
          fVar4 = pUVar61->m_Items[(int)uVar65].fields.y;
          fVar5 = *(float *)&pIVar57[lVar60 * 4 + 2].klass;
          fVar6 = pUVar61->m_Items[(int)uVar65].fields.z;
          fVar7 = *(float *)&pIVar57[lVar60 * 4 + 3].klass;
          fVar8 = *(float *)&pIVar57[lVar60 * 4 + 4].klass;
          fVar9 = *(float *)((longlong)&pIVar57[lVar60 * 4 + 3].klass + 4);
          fVar10 = *(float *)&pIVar57[lVar60 * 4 + 5].klass;
          fVar11 = *(float *)&pIVar57[lVar60 * 4 + 3].monitor;
          fVar12 = *(float *)((longlong)&pIVar57[lVar60 * 4 + 2].klass + 4);
          fVar13 = *(float *)&pIVar57[lVar60 * 4 + 2].monitor;
          fVar14 = *(float *)((longlong)&pIVar57[lVar60 * 4 + 4].klass + 4);
          fVar15 = *(float *)((longlong)&pIVar57[lVar60 * 4 + 5].klass + 4);
          fVar16 = *(float *)&pIVar57[lVar60 * 4 + 4].monitor;
          fVar17 = *(float *)&pIVar57[lVar60 * 4 + 5].monitor;
          fVar67 = UnityEngine_AI_NavMeshBuildSettings__get_agentRadius
                             ((UnityEngine_AI_NavMeshBuildSettings_o *)local_1d0,(MethodInfo *)0x0);
          uVar55 = UnityEngine_AdaptivePerformance_RunningAverage__GetNumValues
                             ((UnityEngine_TextCore_Text_TextProcessingStack_float__o *)local_1d0,
                              (MethodInfo_B3E0C0 *)0x0);
          if (((uint)pUVar61->max_length <= uVar65) || (*(uint *)&pIVar57[1].monitor <= uVar55))
          goto label_182174985;
          lVar60 = (longlong)(int)uVar55;
          fVar18 = pUVar61->m_Items[(int)uVar65].fields.x;
          fVar19 = pUVar61->m_Items[(int)uVar65].fields.y;
          fVar20 = *(float *)&pIVar57[lVar60 * 4 + 2].klass;
          fVar21 = pUVar61->m_Items[(int)uVar65].fields.z;
          fVar22 = *(float *)&pIVar57[lVar60 * 4 + 3].klass;
          fVar23 = *(float *)&pIVar57[lVar60 * 4 + 4].klass;
          fVar24 = *(float *)((longlong)&pIVar57[lVar60 * 4 + 3].klass + 4);
          fVar25 = *(float *)&pIVar57[lVar60 * 4 + 5].klass;
          fVar26 = *(float *)&pIVar57[lVar60 * 4 + 3].monitor;
          fVar27 = *(float *)((longlong)&pIVar57[lVar60 * 4 + 2].klass + 4);
          fVar28 = *(float *)&pIVar57[lVar60 * 4 + 2].monitor;
          fVar29 = *(float *)((longlong)&pIVar57[lVar60 * 4 + 4].klass + 4);
          fVar30 = *(float *)((longlong)&pIVar57[lVar60 * 4 + 5].klass + 4);
          fVar31 = *(float *)&pIVar57[lVar60 * 4 + 4].monitor;
          fVar32 = *(float *)&pIVar57[lVar60 * 4 + 5].monitor;
          fVar68 = UnityEngine_AI_NavMeshBuildSettings__get_agentHeight
                             ((UnityEngine_AI_NavMeshBuildSettings_o *)local_1d0,(MethodInfo *)0x0);
          uVar55 = UnityEngine_TreePrototype__get_navMeshLod
                             ((UnityEngine_BoneWeight_o *)local_1d0,(MethodInfo *)0x0);
          if (((uint)pUVar61->max_length <= uVar65) || (*(uint *)&pIVar57[1].monitor <= uVar55))
          goto label_182174985;
          lVar60 = (longlong)(int)uVar55;
          fVar33 = pUVar61->m_Items[(int)uVar65].fields.x;
          fVar34 = pUVar61->m_Items[(int)uVar65].fields.y;
          fVar35 = *(float *)&pIVar57[lVar60 * 4 + 2].klass;
          fVar36 = *(float *)&pIVar57[lVar60 * 4 + 3].klass;
          fVar37 = pUVar61->m_Items[(int)uVar65].fields.z;
          fVar38 = *(float *)&pIVar57[lVar60 * 4 + 4].klass;
          fVar39 = *(float *)&pIVar57[lVar60 * 4 + 5].klass;
          fVar40 = *(float *)((longlong)&pIVar57[lVar60 * 4 + 2].klass + 4);
          fVar41 = *(float *)&pIVar57[lVar60 * 4 + 2].monitor;
          fVar42 = *(float *)&pIVar57[lVar60 * 4 + 4].monitor;
          fVar43 = *(float *)((longlong)&pIVar57[lVar60 * 4 + 4].klass + 4);
          fVar44 = *(float *)((longlong)&pIVar57[lVar60 * 4 + 3].klass + 4);
          fVar45 = *(float *)&pIVar57[lVar60 * 4 + 3].monitor;
          fVar46 = *(float *)((longlong)&pIVar57[lVar60 * 4 + 5].klass + 4);
          fVar47 = *(float *)&pIVar57[lVar60 * 4 + 5].monitor;
          fVar69 = UnityEngine_TextCore_LowLevel_GlyphValueRecord__get_yAdvance
                             ((UnityEngine_TextCore_LowLevel_GlyphValueRecord_o *)local_1d0,(MethodInfo *)0x0)
          ;
          if (pUVar50 == (UnityEngine_Vector3_array *)0x0) break;
          if ((uint)pUVar50->max_length <= uVar65) goto label_182174985;
          pUVar50->m_Items[(int)uVar65].fields.x =
               fVar69 * (fVar34 * fVar36 + fVar33 * fVar35 + fVar37 * fVar38 + fVar39) +
               fVar68 * (fVar19 * fVar22 + fVar18 * fVar20 + fVar21 * fVar23 + fVar25) +
               (fVar4 * fVar7 + fVar3 * fVar5 + fVar6 * fVar8 + fVar10) * fVar67 +
               (fVar71 * fVar74 + fVar70 * fVar72 + fVar73 * fVar75 + fVar77) * fVar66;
          pUVar50->m_Items[(int)uVar65].fields.y =
               fVar69 * (fVar34 * fVar44 + fVar33 * fVar40 + fVar37 * fVar43 + fVar46) +
               fVar68 * (fVar19 * fVar24 + fVar18 * fVar27 + fVar21 * fVar29 + fVar30) +
               (fVar4 * fVar9 + fVar3 * fVar12 + fVar6 * fVar14 + fVar15) * fVar67 +
               (fVar71 * fVar76 + fVar70 * fVar79 + fVar73 * fVar81 + fVar82) * fVar66;
          pUVar50->m_Items[(int)uVar65].fields.z =
               fVar69 * (fVar34 * fVar45 + fVar33 * fVar41 + fVar37 * fVar42 + fVar47) +
               fVar68 * (fVar19 * fVar26 + fVar18 * fVar28 + fVar21 * fVar31 + fVar32) +
               (fVar4 * fVar11 + fVar3 * fVar13 + fVar6 * fVar16 + fVar17) * fVar67 +
               (fVar71 * fVar78 + fVar70 * fVar80 + fVar73 * fVar83 + fVar84) * fVar66;
          uVar55 = UnityEngine_TextCore_Glyph__get_index
                             ((UnityEngine_BoneWeight_o *)local_1d0,(MethodInfo *)0x0);
          if (pIVar58 == (Il2CppObject *)0x0) break;
          if (*(uint *)&pIVar58[1].monitor <= uVar55) goto label_182174985;
          pSVar51 = (__this_01->fields).Distances;
          bone = *(int32_t *)((longlong)&pIVar58[2].klass + (longlong)(int)uVar55 * 4);
          if (bone < 0) {
            fVar70 = 0.0;
          }
          else {
            pUVar50 = (__this_01->fields).Positions;
            if (pUVar50 == (UnityEngine_Vector3_array *)0x0) break;
            if ((uint)pUVar50->max_length <= uVar65) goto label_182174985;
            local_1a8.x = pUVar50->m_Items[(int)uVar65].fields.x;
            local_1a8.y = pUVar50->m_Items[(int)uVar65].fields.y;
            local_1a8.z = pUVar50->m_Items[(int)uVar65].fields.z;
            fVar70 = Characters_ShifterGrowthEffect__VertexDistance
                               (__this,(UnityEngine_Vector3_o *)&local_1a8,bone,(MethodInfo *)0x0);
          }
          if (pSVar51 == (System_Single_array *)0x0) break;
          if ((uint)pSVar51->max_length <= uVar65) goto label_182174985;
          pSVar51->m_Items[(int)uVar65] = fVar70;
          pSVar51 = (__this_01->fields).Distances;
          if (pSVar51 == (System_Single_array *)0x0) break;
          if ((uint)pSVar51->max_length <= uVar65) goto label_182174985;
          fVar70 = (__this_01->fields).Maximum;
          pCVar63 = (Characters_ShifterGrowthEffect_Measurement_o *)
                    (pSVar51->m_Items + (longlong)(int)uVar65 + -8);
          if (pSVar51->m_Items[(int)uVar65] <= fVar70 && fVar70 != pSVar51->m_Items[(int)uVar65]) {
            pCVar63 = __this_01;
          }
          uVar65 = uVar65 + 1;
          (__this_01->fields).Maximum = (pCVar63->fields).Maximum;
        }
      }
    }
  }
label_18217497f:
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$SetGrowthCoordinates
// il2cpp: void Characters_ShifterGrowthEffect__SetGrowthCoordinates (Characters_ShifterGrowthEffect_o* __this, UnityEngine_Mesh_o* mesh, Characters_ShifterGrowthEffect_Measurement_o* measurement, float maximum, const MethodInfo* method);
// 0x182174df0

void Characters_ShifterGrowthEffect__SetGrowthCoordinates
               (Characters_ShifterGrowthEffect_o *__this,UnityEngine_Mesh_o *mesh,
               Characters_ShifterGrowthEffect_Measurement_o *measurement,float maximum,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint32_t length;
  Characters_BaseShifter_o *__this_00;
  UnityEngine_Renderer_o *__this_01;
  System_Single_array *pSVar9;
  UnityEngine_Vector3_array *pUVar10;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Bounds_o *pUVar11;
  UnityEngine_Vector2_array *value;
  UnityEngine_Vector2_array *value_00;
  UnityEngine_Vector3_o *pUVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_o local_138;
  UnityEngine_Vector3_o local_128;
  UnityEngine_Vector3_o local_118;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  UnityEngine_Bounds_o local_e8 [8];
  
  if (Il2CppMethodInitialized_184346d5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2_array);
    Il2CppMethodInitialized_184346d5e = '\x01';
  }
  __this_00 = (__this->fields)._shifter;
  if (__this_00 != (Characters_BaseShifter_o *)0x0) {
    __this_02 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    __this_01 = (UnityEngine_Renderer_o *)(__this->fields)._body;
    if (__this_01 != (UnityEngine_Renderer_o *)0x0) {
      pUVar11 = UnityEngine_Renderer__get_bounds(local_e8,__this_01,(MethodInfo *)0x0);
      fVar16 = (pUVar11->fields).m_Center.fields.x;
      fVar15 = (pUVar11->fields).m_Center.fields.y;
      fVar1 = (pUVar11->fields).m_Center.fields.z;
      fStack_fc = (pUVar11->fields).m_Extents.fields.x;
      local_108 = fVar16;
      fStack_104 = fVar15;
      fStack_100 = fVar1;
      if ((measurement != (Characters_ShifterGrowthEffect_Measurement_o *)0x0) &&
         (pSVar9 = (measurement->fields).Distances, pSVar9 != (System_Single_array *)0x0)) {
        length = (uint32_t)pSVar9->max_length;
        value = (UnityEngine_Vector2_array *)SZArrayNew(TypeInfo_UnityEngine_Vector2_array,length);
        value_00 = (UnityEngine_Vector2_array *)SZArrayNew(TypeInfo_UnityEngine_Vector2_array,length);
        if (0 < (int)length) {
          uVar13 = 0;
          local_f8 = fVar15;
          fStack_f4 = fVar15;
          fStack_f0 = fVar15;
          fStack_ec = fVar15;
          local_e8[0].fields.m_Center.fields.x = fVar1;
          local_e8[0].fields.m_Center.fields.y = fVar1;
          local_e8[0].fields.m_Center.fields.z = fVar1;
          local_e8[0].fields.m_Extents.fields.x = fVar1;
          do {
            pUVar10 = (measurement->fields).Positions;
            if (pUVar10 == (UnityEngine_Vector3_array *)0x0) goto label_182175181;
            if ((uint)pUVar10->max_length <= uVar13) {
label_182175187:
              ThrowIndexOutOfRangeException();
            }
            pSVar9 = (measurement->fields).Distances;
            fVar15 = 3.0 / maximum;
            if (pSVar9 == (System_Single_array *)0x0) goto label_182175181;
            if ((uint)pSVar9->max_length <= uVar13) goto label_182175187;
            if (value == (UnityEngine_Vector2_array *)0x0) goto label_182175181;
            if ((uint)value->max_length <= uVar13) goto label_182175187;
            fVar1 = pUVar10->m_Items[uVar13].fields.x;
            fVar2 = pUVar10->m_Items[uVar13].fields.y;
            fVar3 = pUVar10->m_Items[uVar13].fields.z;
            value->m_Items[uVar13].fields.x = pSVar9->m_Items[uVar13] / maximum;
            value->m_Items[uVar13].fields.y = 0.0;
            if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_182175181;
            fVar18 = (fVar1 - fVar16) * fVar15;
            fVar17 = (fVar2 - local_f8) * fVar15;
            fVar15 = (fVar3 - local_e8[0].fields.m_Center.fields.x) * fVar15;
            pUVar12 = UnityEngine_Transform__get_right(&local_138,__this_02,(MethodInfo *)0x0);
            fVar16 = (pUVar12->fields).x;
            fVar1 = (pUVar12->fields).y;
            fVar2 = (pUVar12->fields).z;
            pUVar12 = UnityEngine_Transform__get_forward(&local_128,__this_02,(MethodInfo *)0x0);
            fVar3 = (pUVar12->fields).x;
            fVar4 = (pUVar12->fields).y;
            fVar5 = (pUVar12->fields).z;
            pUVar12 = UnityEngine_Transform__get_up(&local_118,__this_02,(MethodInfo *)0x0);
            fVar6 = (pUVar12->fields).y;
            fVar7 = (pUVar12->fields).x;
            fVar8 = (pUVar12->fields).z;
            if (value_00 == (UnityEngine_Vector2_array *)0x0) goto label_182175181;
            if ((uint)value_00->max_length <= uVar13) goto label_182175187;
            uVar14 = uVar13 + 1;
            value_00->m_Items[uVar13].fields.x =
                 (fVar4 * fVar17 + fVar3 * fVar18 + fVar5 * fVar15) * 0.6 +
                 fVar1 * fVar17 + fVar16 * fVar18 + fVar2 * fVar15;
            value_00->m_Items[uVar13].fields.y = fVar17 * fVar6 + fVar18 * fVar7 + fVar15 * fVar8;
            fVar16 = local_108;
            uVar13 = uVar14;
          } while ((int)uVar14 < (int)length);
        }
        if (mesh != (UnityEngine_Mesh_o *)0x0) {
          UnityEngine_Mesh__set_uv2(mesh,value,(MethodInfo *)0x0);
          UnityEngine_Mesh__set_uv3(mesh,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_182175181:
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$AddLayers
// il2cpp: void Characters_ShifterGrowthEffect__AddLayers (Characters_ShifterGrowthEffect_o* __this, System_Collections_Generic_List_SkinnedMeshRenderer__o* renderers, const MethodInfo* method);
// 0x182171ca0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182171d7c: nop dword ptr [rax]
// asm:   0x182171f8b: mov ebx, r12d
// asm:   0x182171f8e: mov eax, r12d

void Characters_ShifterGrowthEffect__AddLayers
               (Characters_ShifterGrowthEffect_o *__this,
               System_Collections_Generic_List_SkinnedMeshRenderer__o *renderers,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  uint uVar3;
  System_Collections_Generic_List_Object__o *__this_00;
  UnityEngine_Object_array *pUVar4;
  MethodInfo *pMVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  UnityEngine_SkinnedMeshRenderer_o *pUVar8;
  UnityEngine_Mesh_o *original;
  Il2CppClass *pIVar9;
  UnityEngine_Object_o *__this_01;
  System_String_o *pSVar10;
  UnityEngine_Transform_array *bones;
  uint index;
  uint index_00;
  float maximum;
  
  if (Il2CppMethodInitialized_184346d5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterGrowthEffect_Measurement_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&" growth");
    Il2CppMethodInitialized_184346d5f = '\x01';
  }
  if (renderers != (System_Collections_Generic_List_SkinnedMeshRenderer__o *)0x0) {
    pIVar6 = SZArrayNew(TypeInfo_UnityEngine_Mesh_array,(renderers->fields)._size);
    pIVar7 = SZArrayNew(TypeInfo_Characters_ShifterGrowthEffect_Measurement_array,(renderers->fields)._size);
    maximum = 0.0001;
    index_00 = 0;
    for (index = index_00; (int)index < (renderers->fields)._size; index = index + 1) {
      pUVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)renderers,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_get_Item);
      if (pUVar8 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) goto label_182172036;
      original = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(pUVar8,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pIVar9 = (Il2CppClass *)
               UnityEngine_Object__Instantiate_object__746ba0
                         ((Il2CppObject *)original,
                          (MethodInfo_746BA0 *)MethodInfo_UnityEngine_Object_Instantiate_Mesh);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_182172036;
      if (*(uint *)&pIVar6[1].monitor <= index) goto label_182172030;
      (&pIVar6[2].klass)[(int)index] = pIVar9;
      Il2CppCodeGenWriteBarrier(&pIVar6[2].klass + (int)index,pIVar9);
      if (*(uint *)&pIVar6[1].monitor <= index) goto label_182172030;
      pIVar9 = (&pIVar6[2].klass)[(int)index];
      pUVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)renderers,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_get_Item);
      if ((pUVar8 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) ||
         (__this_01 = (UnityEngine_Object_o *)
                      UnityEngine_SkinnedMeshRenderer__get_sharedMesh(pUVar8,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_Object_o *)0x0)) goto label_182172036;
      pSVar10 = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      pSVar10 = System_String__Concat_1969e50(pSVar10," growth",(MethodInfo *)0x0);
      if (pIVar9 == (Il2CppClass *)0x0) goto label_182172036;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)pIVar9,pSVar10,(MethodInfo *)0x0);
      pMVar5 = MethodInfo_System_Collections_Generic_List_Object_Add;
      if (*(uint *)&pIVar6[1].monitor <= index) goto label_182172030;
      __this_00 = (__this->fields)._created;
      if (__this_00 == (System_Collections_Generic_List_Object__o *)0x0) goto label_182172036;
      pUVar4 = (__this_00->fields)._items;
      pIVar9 = (&pIVar6[2].klass)[(int)index];
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      if (pUVar4 == (UnityEngine_Object_array *)0x0) goto label_182172036;
      uVar3 = (__this_00->fields)._size;
      if (uVar3 < (uint)pUVar4->max_length) {
        (__this_00->fields)._size = uVar3 + 1;
        if ((uint)pUVar4->max_length <= uVar3) goto label_182172030;
        pUVar4->m_Items[(int)uVar3] = (UnityEngine_Object_o *)pIVar9;
        Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar3,pIVar9);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pIVar9,
                   (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      if (*(uint *)&pIVar6[1].monitor <= index) goto label_182172030;
      pIVar9 = (&pIVar6[2].klass)[(int)index];
      pUVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)renderers,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_get_Item);
      if (pUVar8 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) goto label_182172036;
      bones = UnityEngine_SkinnedMeshRenderer__get_bones(pUVar8,(MethodInfo *)0x0);
      pIVar9 = (Il2CppClass *)
               Characters_ShifterGrowthEffect__Measure
                         (__this,(UnityEngine_Mesh_o *)pIVar9,bones,(MethodInfo *)0x0);
      if (pIVar7 == (Il2CppObject *)0x0) goto label_182172036;
      if (*(uint *)&pIVar7[1].monitor <= index) goto label_182172030;
      (&pIVar7[2].klass)[(int)index] = pIVar9;
      Il2CppCodeGenWriteBarrier(&pIVar7[2].klass + (int)index,pIVar9);
      if (*(uint *)&pIVar7[1].monitor <= index) goto label_182172030;
      if ((&pIVar7[2].klass)[(int)index] == (Il2CppClass *)0x0) goto label_182172036;
      fVar2 = *(float *)&((&pIVar7[2].klass)[(int)index]->_1).byval_arg.data;
      if (maximum <= fVar2) {
        maximum = fVar2;
      }
    }
    while( true ) {
      if ((renderers->fields)._size <= (int)index_00) {
        return;
      }
      if (pIVar6 == (Il2CppObject *)0x0) break;
      if (*(uint *)&pIVar6[1].monitor <= index_00) {
label_182172030:
        ThrowIndexOutOfRangeException();
      }
      if (pIVar7 == (Il2CppObject *)0x0) break;
      if (*(uint *)&pIVar7[1].monitor <= index_00) goto label_182172030;
      Characters_ShifterGrowthEffect__SetGrowthCoordinates
                (__this,(UnityEngine_Mesh_o *)(&pIVar6[2].klass)[(int)index_00],
                 (Characters_ShifterGrowthEffect_Measurement_o *)(&pIVar7[2].klass)[(int)index_00],maximum,
                 (MethodInfo *)0x0);
      pUVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)renderers,index_00,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_get_Item);
      if (*(uint *)&pIVar6[1].monitor <= index_00) goto label_182172030;
      Characters_ShifterGrowthEffect__AddLayer
                (__this,pUVar8,(UnityEngine_Mesh_o *)(&pIVar6[2].klass)[(int)index_00],(MethodInfo *)0x0);
      index_00 = index_00 + 1;
    }
  }
label_182172036:
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$AddLayer
// il2cpp: void Characters_ShifterGrowthEffect__AddLayer (Characters_ShifterGrowthEffect_o* __this, UnityEngine_SkinnedMeshRenderer_o* renderer, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
// 0x182171970
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182171a4d: nop dword ptr [rax]

void Characters_ShifterGrowthEffect__AddLayer
               (Characters_ShifterGrowthEffect_o *__this,UnityEngine_SkinnedMeshRenderer_o *renderer,
               UnityEngine_Mesh_o *mesh,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Shader_array *pUVar2;
  System_Collections_Generic_List_ShifterGrowthEffect_Layer__o *__this_01;
  Characters_ShifterGrowthEffect_Layer_array *pCVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  UnityEngine_Mesh_o *originalMesh;
  UnityEngine_Material_array *pUVar6;
  Characters_ShifterGrowthEffect_Layer_o *__this_02;
  UnityEngine_Shader_o *value;
  UnityEngine_Material_o *__this_03;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  uint uVar9;
  
  if (Il2CppMethodInitialized_184346d60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterGrowthEffect_Layer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ShifterGrowthEffect_Layer_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&" growth");
    Il2CppMethodInitialized_184346d60 = '\x01';
  }
  if (renderer != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
    originalMesh = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(renderer,(MethodInfo *)0x0);
    pUVar6 = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)renderer,(MethodInfo *)0x0);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_ShifterGrowthEffect_Layer);
    Characters_ShifterGrowthEffect_Layer___ctor(__this_02,renderer,originalMesh,pUVar6,(MethodInfo *)0x0);
    if (__this_02 != (Characters_ShifterGrowthEffect_Layer_o *)0x0) {
      uVar9 = 0;
      while (pUVar6 = (__this_02->fields).GrowthMaterials, pUVar6 != (UnityEngine_Material_array *)0x0) {
        if ((int)pUVar6->max_length <= (int)uVar9) {
          UnityEngine_SkinnedMeshRenderer__set_sharedMesh(renderer,mesh,(MethodInfo *)0x0);
          UnityEngine_Renderer__set_sharedMaterials
                    ((UnityEngine_Renderer_o *)renderer,(__this_02->fields).GrowthMaterials,(MethodInfo *)0x0)
          ;
          pMVar4 = MethodInfo_System_Collections_Generic_List_ShifterGrowthEffect_Layer_Add;
          __this_01 = (__this->fields)._layers;
          if (__this_01 != (System_Collections_Generic_List_ShifterGrowthEffect_Layer__o *)0x0) {
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pCVar3 = (__this_01->fields)._items;
            if (pCVar3 != (Characters_ShifterGrowthEffect_Layer_array *)0x0) {
              uVar9 = (__this_01->fields)._size;
              if (uVar9 < (uint)pCVar3->max_length) {
                (__this_01->fields)._size = uVar9 + 1;
                if ((uint)pCVar3->max_length <= uVar9) goto label_182171c96;
                pCVar3->m_Items[(int)uVar9] = __this_02;
                Il2CppCodeGenWriteBarrier(pCVar3->m_Items + (int)uVar9,__this_02);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_02,
                           (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
              }
              return;
            }
          }
          break;
        }
        pUVar6 = (__this_02->fields).OriginalMaterials;
        if (pUVar6 == (UnityEngine_Material_array *)0x0) break;
        if ((uint)pUVar6->max_length <= uVar9) goto label_182171c96;
        __this_00 = pUVar6->m_Items[(int)uVar9];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar5) {
          if (__this_00 == (UnityEngine_Material_o *)0x0) break;
          pUVar2 = (__this_02->fields).OriginalShaders;
          value = UnityEngine_Material__get_shader(__this_00,(MethodInfo *)0x0);
          if (pUVar2 == (UnityEngine_Shader_array *)0x0) break;
          if ((uint)pUVar2->max_length <= uVar9) {
label_182171c96:
            ThrowIndexOutOfRangeException();
          }
          pUVar2->m_Items[(int)uVar9] = value;
          Il2CppCodeGenWriteBarrier(pUVar2->m_Items + (int)uVar9,value);
          pUVar6 = (__this_02->fields).GrowthMaterials;
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
          UnityEngine_Material___ctor_2ee55e0(__this_03,__this_00,(MethodInfo *)0x0);
          if (__this_03 == (UnityEngine_Material_o *)0x0) break;
          UnityEngine_Material__set_shader(__this_03,(__this->fields)._shader,(MethodInfo *)0x0);
          pSVar7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
          pSVar7 = System_String__Concat_1969e50(pSVar7," growth",(MethodInfo *)0x0);
          UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_03,pSVar7,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_Material_array *)0x0) break;
          pIVar8 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)__this_03,(((pUVar6->obj).klass)->_1).element_class);
          if (pIVar8 == (Il2CppObject *)0x0) {
            pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
          }
          if ((uint)pUVar6->max_length <= uVar9) goto label_182171c96;
          pUVar6->m_Items[(int)uVar9] = __this_03;
          Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar9,__this_03);
          pUVar6 = (__this_02->fields).GrowthMaterials;
          if (pUVar6 == (UnityEngine_Material_array *)0x0) break;
          if ((uint)pUVar6->max_length <= uVar9) goto label_182171c96;
          if ((__this->fields)._created == (System_Collections_Generic_List_Object__o *)0x0) break;
          il2cpp_runtime_helper_180012890();
        }
        uVar9 = uVar9 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$CreateChunks
// il2cpp: void Characters_ShifterGrowthEffect__CreateChunks (Characters_ShifterGrowthEffect_o* __this, const MethodInfo* method);
// 0x1821729e0

void Characters_ShifterGrowthEffect__CreateChunks(Characters_ShifterGrowthEffect_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Renderer_o *pUVar3;
  System_Collections_Generic_List_Object__o *__this_00;
  UnityEngine_Object_array *pUVar4;
  UnityEngine_Component_o *__this_01;
  Characters_ShifterGrowthEffect_StaticFields *pCVar5;
  undefined8 uVar6;
  int32_t value;
  UnityEngine_Bounds_o *pUVar7;
  UnityEngine_Material_o *source;
  UnityEngine_Material_o *__this_02;
  UnityEngine_Texture_o *value_00;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Vector3_o *pUVar10;
  UnityEngine_ParticleSystem_o *pUVar11;
  UnityEngine_ParticleSystem_MinMaxCurve_o *pUVar12;
  UnityEngine_Gradient_o *__this_05;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphaKeys;
  UnityEngine_ParticleSystem_MinMaxGradient_o *pUVar13;
  UnityEngine_AnimationCurve_o *curve;
  UnityEngine_ParticleSystemRenderer_o *__this_06;
  MethodInfo *pMVar14;
  double dVar15;
  float fVar16;
  UnityEngine_ParticleSystem_MainModule_o local_res8;
  UnityEngine_ParticleSystem_VelocityOverLifetimeModule_o local_res18;
  UnityEngine_ParticleSystem_ShapeModule_o local_res20;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields local_1b8;
  _union_125884 local_178;
  _union_125884 local_170;
  _union_125884 local_168;
  _union_125884 local_160;
  UnityEngine_ParticleSystem_ColorOverLifetimeModule_o local_158;
  UnityEngine_ParticleSystem_SizeOverLifetimeModule_o local_150;
  UnityEngine_ParticleSystem_EmissionModule_o local_148 [2];
  undefined1 local_138 [8];
  UnityEngine_AnimationCurve_o *pUStack_130;
  UnityEngine_GradientColorKey_o local_f8;
  UnityEngine_GradientColorKey_o local_e0;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields local_c8;
  undefined1 local_90 [32];
  UnityEngine_ParticleSystem_MinMaxGradient_Fields local_70;
  
  if (Il2CppMethodInitialized_184346d61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ParticleSystem)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GradientAlphaKey_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GradientColorKey_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Gradient);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterGrowthEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter flesh chunks");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseMap");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter flesh chunk");
    il2cpp_codegen_initialize_runtime_metadata(&"Effects/Materials/Smoke1Mat");
    Il2CppMethodInitialized_184346d61 = '\x01';
  }
  pUVar3 = (UnityEngine_Renderer_o *)(__this->fields)._body;
  local_res8.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_res20.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_ShapeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_res18.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_VelocityOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_158.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_ColorOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_150.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_SizeOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_148[0].fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  if (pUVar3 != (UnityEngine_Renderer_o *)0x0) {
    pUVar7 = UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)&local_1b8,pUVar3,(MethodInfo *)0x0);
    fVar16 = (pUVar7->fields).m_Extents.fields.y;
    source = UnityEngine_Resources__Load_object_
                       ("Effects/Materials/Smoke1Mat",
                        (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Material);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
    UnityEngine_Material___ctor_2ee55e0(__this_02,source,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_Material_o *)0x0) goto label_1821734a6;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_02,"Shifter flesh chunk",(MethodInfo *)0x0);
    value_00 = (UnityEngine_Texture_o *)
               Characters_ShifterGrowthEffect__CreateChunkTexture(__this,(MethodInfo *)0x0);
    UnityEngine_Material__SetTexture(__this_02,"_BaseMap",value_00,(MethodInfo *)0x0);
    pMVar14 = MethodInfo_System_Collections_Generic_List_Object_Add;
    __this_00 = (__this->fields)._created;
    if (__this_00 == (System_Collections_Generic_List_Object__o *)0x0) goto label_1821734a6;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (__this_00->fields)._items;
    if (pUVar4 == (UnityEngine_Object_array *)0x0) goto label_1821734a6;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1821734ac;
      pUVar4->m_Items[(int)uVar2] = (UnityEngine_Object_o *)__this_02;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,__this_02);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_02,
                 (MethodInfo_93DD50 *)pMVar14->klass->rgctx_data[0xe].method);
    }
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor(__this_03,"Shifter flesh chunks",(MethodInfo *)0x0);
    __this_01 = (UnityEngine_Component_o *)(__this->fields)._body;
    if (__this_01 != (UnityEngine_Component_o *)0x0) {
      __this_04 = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
      if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
        value = UnityEngine_GameObject__get_layer(__this_04,(MethodInfo *)0x0);
        if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__set_layer(__this_03,value,(MethodInfo *)0x0);
          pUVar8 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
          pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_2f5a7e0(pUVar8,pUVar9,false,(MethodInfo *)0x0);
            pUVar8 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
            pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            pUVar3 = (UnityEngine_Renderer_o *)(__this->fields)._body;
            if (pUVar3 != (UnityEngine_Renderer_o *)0x0) {
              pUVar7 = UnityEngine_Renderer__get_bounds
                                 ((UnityEngine_Bounds_o *)&local_1b8,pUVar3,(MethodInfo *)0x0);
              uVar6._0_4_ = (int32_t)(pUVar7->fields).m_Center.fields.x;
              uVar6._4_4_ = (pUVar7->fields).m_Center.fields.y;
              if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                pUStack_130 = (UnityEngine_AnimationCurve_o *)
                              CONCAT44(pUStack_130._4_4_,(pUVar7->fields).m_Center.fields.z);
                local_138 = (undefined1  [8])uVar6;
                pUVar10 = UnityEngine_Transform__InverseTransformPoint
                                    ((UnityEngine_Vector3_o *)&local_1b8,pUVar9,
                                     (UnityEngine_Vector3_o *)local_138,(MethodInfo *)0x0);
                if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                  local_138._0_4_ = (int32_t)(pUVar10->fields).x;
                  local_138._4_4_ = (pUVar10->fields).y;
                  pUStack_130 = (UnityEngine_AnimationCurve_o *)
                                CONCAT44(pUStack_130._4_4_,(pUVar10->fields).z);
                  UnityEngine_Transform__set_localPosition
                            (pUVar8,(UnityEngine_Vector3_o *)local_138,(MethodInfo *)0x0);
                  pUVar11 = UnityEngine_GameObject__AddComponent_object_
                                      (__this_03,
                                       (MethodInfo_6F4D60 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_ParticleSystem);
                  (__this->fields)._chunks = pUVar11;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._chunks,pUVar11);
                  pUVar11 = (__this->fields)._chunks;
                  if (pUVar11 != (UnityEngine_ParticleSystem_o *)0x0) {
                    UnityEngine_ParticleSystem__Stop(pUVar11,true,0,(MethodInfo *)0x0);
                    pUVar11 = (__this->fields)._chunks;
                    if (pUVar11 != (UnityEngine_ParticleSystem_o *)0x0) {
                      fVar16 = fVar16 + fVar16;
                      local_res8.fields.m_ParticleSystem =
                           (UnityEngine_ParticleSystem_MainModule_Fields)
                           UnityEngine_ParticleSystem__get_noise(pUVar11,(MethodInfo *)0x0);
                      UnityEngine_ParticleSystem_MainModule__set_loop(&local_res8,true,(MethodInfo *)0x0);
                      UnityEngine_ParticleSystem_MainModule__set_playOnAwake
                                (&local_res8,false,(MethodInfo *)0x0);
                      pUVar12 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                                          ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_138,0.5,
                                           (MethodInfo *)0x0);
                      local_1b8.m_Mode = (pUVar12->fields).m_Mode;
                      local_1b8._4_4_ = (pUVar12->fields).m_CurveMultiplier;
                      local_1b8.m_GradientMin = (UnityEngine_Gradient_o *)(pUVar12->fields).m_CurveMin;
                      local_1b8.m_GradientMax = (UnityEngine_Gradient_o *)(pUVar12->fields).m_CurveMax;
                      local_1b8.m_ColorMin.fields.r = (pUVar12->fields).m_ConstantMin;
                      local_1b8.m_ColorMin.fields.g = (pUVar12->fields).m_ConstantMax;
                      UnityEngine_ParticleSystem_MainModule__set_startLifetime
                                (&local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1b8,
                                 (MethodInfo *)0x0);
                      pUVar12 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                                          ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_138,0.0,
                                           (MethodInfo *)0x0);
                      local_1b8.m_Mode = (pUVar12->fields).m_Mode;
                      local_1b8._4_4_ = (pUVar12->fields).m_CurveMultiplier;
                      local_1b8.m_GradientMin = (UnityEngine_Gradient_o *)(pUVar12->fields).m_CurveMin;
                      local_1b8.m_GradientMax = (UnityEngine_Gradient_o *)(pUVar12->fields).m_CurveMax;
                      local_1b8.m_ColorMin.fields.r = (pUVar12->fields).m_ConstantMin;
                      local_1b8.m_ColorMin.fields.g = (pUVar12->fields).m_ConstantMax;
                      UnityEngine_ParticleSystem_MainModule__set_startSpeed
                                (&local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1b8,
                                 (MethodInfo *)0x0);
                      local_90._0_8_ = 0;
                      local_90._8_8_ = (UnityEngine_AnimationCurve_o *)0x0;
                      local_90._16_8_ = (UnityEngine_AnimationCurve_o *)0x0;
                      local_90._24_4_ = 0.0;
                      local_90._28_4_ = 0.0;
                      UnityEngine_ParticleSystem_MinMaxCurve___ctor_2fc8b50
                                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_90,fVar16 * 0.035,
                                 fVar16 * 0.075,(MethodInfo *)0x0);
                      local_1b8._0_8_ = local_90._0_8_;
                      local_1b8.m_GradientMin = (UnityEngine_Gradient_o *)local_90._8_8_;
                      local_1b8.m_GradientMax = (UnityEngine_Gradient_o *)local_90._16_8_;
                      local_1b8.m_ColorMin.fields.r = (float)local_90._24_4_;
                      local_1b8.m_ColorMin.fields.g = (float)local_90._28_4_;
                      UnityEngine_ParticleSystem_MainModule__set_startSize
                                (&local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1b8,
                                 (MethodInfo *)0x0);
                      if ((TypeInfo_Characters_ShifterGrowthEffect->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Characters_ShifterGrowthEffect);
                      }
                      pCVar5 = TypeInfo_Characters_ShifterGrowthEffect->static_fields;
                      local_138._0_4_ = (int32_t)(pCVar5->ChunkDark).fields.r;
                      local_138._4_4_ = (pCVar5->ChunkDark).fields.g;
                      pUStack_130 = *(UnityEngine_AnimationCurve_o **)&(pCVar5->ChunkDark).fields.b;
                      local_1b8.m_Mode = (int32_t)(pCVar5->ChunkLight).fields.r;
                      local_1b8._4_4_ = (pCVar5->ChunkLight).fields.g;
                      local_1b8.m_GradientMin = *(UnityEngine_Gradient_o **)&(pCVar5->ChunkLight).fields.b;
                      local_c8.m_Mode = 0;
                      local_c8._4_4_ = 0;
                      local_c8.m_GradientMin = (UnityEngine_Gradient_o *)0x0;
                      local_c8.m_ColorMax.fields.b = 0.0;
                      local_c8.m_ColorMax.fields.a = 0.0;
                      local_c8.m_GradientMax = (UnityEngine_Gradient_o *)0x0;
                      local_c8.m_ColorMin.fields.r = 0.0;
                      local_c8.m_ColorMin.fields.g = 0.0;
                      local_c8.m_ColorMin.fields.b = 0.0;
                      local_c8.m_ColorMin.fields.a = 0.0;
                      local_c8.m_ColorMax.fields.r = 0.0;
                      local_c8.m_ColorMax.fields.g = 0.0;
                      UnityEngine_ParticleSystem_MinMaxGradient___ctor_2fc8ea0
                                ((UnityEngine_ParticleSystem_MinMaxGradient_o *)&local_c8,
                                 (UnityEngine_Color_o *)local_138,(UnityEngine_Color_o *)&local_1b8,
                                 (MethodInfo *)0x0);
                      local_1b8.m_Mode = local_c8.m_Mode;
                      local_1b8._4_4_ = local_c8._4_4_;
                      local_1b8.m_GradientMin = local_c8.m_GradientMin;
                      local_1b8.m_GradientMax = local_c8.m_GradientMax;
                      local_1b8.m_ColorMin.fields.r = local_c8.m_ColorMin.fields.r;
                      local_1b8.m_ColorMin.fields.g = local_c8.m_ColorMin.fields.g;
                      local_1b8.m_ColorMin.fields.b = local_c8.m_ColorMin.fields.b;
                      local_1b8.m_ColorMin.fields.a = local_c8.m_ColorMin.fields.a;
                      local_1b8.m_ColorMax.fields.r = local_c8.m_ColorMax.fields.r;
                      local_1b8.m_ColorMax.fields.g = local_c8.m_ColorMax.fields.g;
                      local_1b8.m_ColorMax.fields.b = local_c8.m_ColorMax.fields.b;
                      local_1b8.m_ColorMax.fields.a = local_c8.m_ColorMax.fields.a;
                      UnityEngine_ParticleSystem_MainModule__set_startColor
                                (&local_res8,(UnityEngine_ParticleSystem_MinMaxGradient_o *)&local_1b8,
                                 (MethodInfo *)0x0);
                      pMVar14 = (MethodInfo *)0x0;
                      UnityEngine_ParticleSystem_MainModule__set_simulationSpace
                                (&local_res8,0,(MethodInfo *)0x0);
                      if (Il2CppMethodInitialized_18433df29 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                        Il2CppMethodInitialized_18433df29 = '\x01';
                      }
                      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                      }
                      dVar15 = il2cpp_runtime_helper_1804f45c0(60.0,pMVar14);
                      UnityEngine_ParticleSystem_MainModule__set_maxParticles
                                (&local_res8,(int)dVar15 + 8,(MethodInfo *)0x0);
                      pUVar11 = (__this->fields)._chunks;
                      if (pUVar11 != (UnityEngine_ParticleSystem_o *)0x0) {
                        local_res20.fields.m_ParticleSystem =
                             (UnityEngine_ParticleSystem_ShapeModule_Fields)
                             UnityEngine_ParticleSystem__get_noise(pUVar11,(MethodInfo *)0x0);
                        UnityEngine_ParticleSystem_ShapeModule__set_shapeType
                                  (&local_res20,0,(MethodInfo *)0x0);
                        UnityEngine_ParticleSystem_ShapeModule__set_radius
                                  (&local_res20,fVar16 * 0.35,(MethodInfo *)0x0);
                        UnityEngine_ParticleSystem_ShapeModule__set_radiusThickness
                                  (&local_res20,0.0,(MethodInfo *)0x0);
                        pUVar11 = (__this->fields)._chunks;
                        if (pUVar11 != (UnityEngine_ParticleSystem_o *)0x0) {
                          local_res18.fields.m_ParticleSystem =
                               (UnityEngine_ParticleSystem_VelocityOverLifetimeModule_Fields)
                               UnityEngine_ParticleSystem__get_noise(pUVar11,(MethodInfo *)0x0);
                          UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_enabled
                                    (&local_res18,true,(MethodInfo *)0x0);
                          UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_space
                                    (&local_res18,0,(MethodInfo *)0x0);
                          pUVar12 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                                              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_138,0.0,
                                               (MethodInfo *)0x0);
                          local_1b8.m_Mode = (pUVar12->fields).m_Mode;
                          local_1b8._4_4_ = (pUVar12->fields).m_CurveMultiplier;
                          local_1b8.m_GradientMin = (UnityEngine_Gradient_o *)(pUVar12->fields).m_CurveMin;
                          local_1b8.m_GradientMax = (UnityEngine_Gradient_o *)(pUVar12->fields).m_CurveMax;
                          local_1b8.m_ColorMin.fields.r = (pUVar12->fields).m_ConstantMin;
                          local_1b8.m_ColorMin.fields.g = (pUVar12->fields).m_ConstantMax;
                          UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_x
                                    (&local_res18,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1b8,
                                     (MethodInfo *)0x0);
                          pUVar12 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                                              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_138,0.0,
                                               (MethodInfo *)0x0);
                          local_1b8.m_Mode = (pUVar12->fields).m_Mode;
                          local_1b8._4_4_ = (pUVar12->fields).m_CurveMultiplier;
                          local_1b8.m_GradientMin = (UnityEngine_Gradient_o *)(pUVar12->fields).m_CurveMin;
                          local_1b8.m_GradientMax = (UnityEngine_Gradient_o *)(pUVar12->fields).m_CurveMax;
                          local_1b8.m_ColorMin.fields.r = (pUVar12->fields).m_ConstantMin;
                          local_1b8.m_ColorMin.fields.g = (pUVar12->fields).m_ConstantMax;
                          UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_y
                                    (&local_res18,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1b8,
                                     (MethodInfo *)0x0);
                          pUVar12 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                                              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_138,0.0,
                                               (MethodInfo *)0x0);
                          local_1b8.m_Mode = (pUVar12->fields).m_Mode;
                          local_1b8._4_4_ = (pUVar12->fields).m_CurveMultiplier;
                          local_1b8.m_GradientMin = (UnityEngine_Gradient_o *)(pUVar12->fields).m_CurveMin;
                          local_1b8.m_GradientMax = (UnityEngine_Gradient_o *)(pUVar12->fields).m_CurveMax;
                          local_1b8.m_ColorMin.fields.r = (pUVar12->fields).m_ConstantMin;
                          local_1b8.m_ColorMin.fields.g = (pUVar12->fields).m_ConstantMax;
                          UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_z
                                    (&local_res18,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1b8,
                                     (MethodInfo *)0x0);
                          pUVar12 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                                              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_138,
                                               -fVar16 * 0.35 + -fVar16 * 0.35,(MethodInfo *)0x0);
                          local_1b8.m_Mode = (pUVar12->fields).m_Mode;
                          local_1b8._4_4_ = (pUVar12->fields).m_CurveMultiplier;
                          local_1b8.m_GradientMin = (UnityEngine_Gradient_o *)(pUVar12->fields).m_CurveMin;
                          local_1b8.m_GradientMax = (UnityEngine_Gradient_o *)(pUVar12->fields).m_CurveMax;
                          local_1b8.m_ColorMin.fields.r = (pUVar12->fields).m_ConstantMin;
                          local_1b8.m_ColorMin.fields.g = (pUVar12->fields).m_ConstantMax;
                          UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_radial
                                    (&local_res18,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1b8,
                                     (MethodInfo *)0x0);
                          pUVar11 = (__this->fields)._chunks;
                          if (pUVar11 != (UnityEngine_ParticleSystem_o *)0x0) {
                            local_158.fields.m_ParticleSystem =
                                 (UnityEngine_ParticleSystem_ColorOverLifetimeModule_Fields)
                                 UnityEngine_ParticleSystem__get_noise(pUVar11,(MethodInfo *)0x0);
                            UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_enabled
                                      (&local_158,true,(MethodInfo *)0x0);
                            __this_05 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_UnityEngine_Gradient);
                            UnityEngine_Gradient___ctor(__this_05,(MethodInfo *)0x0);
                            colorKeys = (UnityEngine_GradientColorKey_array *)
                                        SZArrayNew(TypeInfo_UnityEngine_GradientColorKey_array,2);
                            local_1b8.m_Mode = 0x3f800000;
                            local_1b8._4_4_ = 0x3f800000;
                            local_1b8.m_GradientMin = (UnityEngine_Gradient_o *)0x3f8000003f800000;
                            local_f8.fields.time = 0.0;
                            local_f8.fields.color.fields.r = 0.0;
                            local_f8.fields.color.fields.g = 0.0;
                            local_f8.fields.color.fields.b = 0.0;
                            local_f8.fields.color.fields.a = 0.0;
                            UnityEngine_GradientColorKey___ctor
                                      (&local_f8,(UnityEngine_Color_o *)&local_1b8,0.0,(MethodInfo *)0x0);
                            if (colorKeys != (UnityEngine_GradientColorKey_array *)0x0) {
                              if ((int)colorKeys->max_length != 0) {
                                local_1b8.m_Mode = 0x3f800000;
                                local_1b8._4_4_ = 0x3f800000;
                                local_1b8.m_GradientMin = (UnityEngine_Gradient_o *)0x3f8000003f800000;
                                colorKeys->m_Items[0].fields.color.fields.r = local_f8.fields.color.fields.r;
                                colorKeys->m_Items[0].fields.color.fields.g = local_f8.fields.color.fields.g;
                                colorKeys->m_Items[0].fields.color.fields.b = local_f8.fields.color.fields.b;
                                colorKeys->m_Items[0].fields.color.fields.a = local_f8.fields.color.fields.a;
                                colorKeys->m_Items[0].fields.time = local_f8.fields.time;
                                local_e0.fields.time = 0.0;
                                local_e0.fields.color.fields.r = 0.0;
                                local_e0.fields.color.fields.g = 0.0;
                                local_e0.fields.color.fields.b = 0.0;
                                local_e0.fields.color.fields.a = 0.0;
                                UnityEngine_GradientColorKey___ctor
                                          (&local_e0,(UnityEngine_Color_o *)&local_1b8,1.0,(MethodInfo *)0x0);
                                if (1 < (uint)colorKeys->max_length) {
                                  colorKeys->m_Items[1].fields.color.fields.r = local_e0.fields.color.fields.r
                                  ;
                                  colorKeys->m_Items[1].fields.color.fields.g = local_e0.fields.color.fields.g
                                  ;
                                  colorKeys->m_Items[1].fields.color.fields.b = local_e0.fields.color.fields.b
                                  ;
                                  colorKeys->m_Items[1].fields.color.fields.a = local_e0.fields.color.fields.a
                                  ;
                                  colorKeys->m_Items[1].fields.time = local_e0.fields.time;
                                  alphaKeys = (UnityEngine_GradientAlphaKey_array *)
                                              SZArrayNew(TypeInfo_UnityEngine_GradientAlphaKey_array,4);
                                  local_178 = (_union_125884)0x0;
                                  Unity_Burst_Intrinsics_v64___ctor_1028c00
                                            ((Unity_Burst_Intrinsics_v64_o *)&local_178._at_Byte0,0.0,0.0,
                                             (MethodInfo *)0x0);
                                  if (alphaKeys == (UnityEngine_GradientAlphaKey_array *)0x0)
                                  goto label_1821734a6;
                                  if ((int)alphaKeys->max_length != 0) {
                                    alphaKeys->m_Items[0].fields.time = (float)local_178._at_UInt1.UInt1;
                                    alphaKeys->m_Items[0].fields.alpha = (float)local_178._at_UInt0.UInt0;
                                    local_170 = (_union_125884)0x0;
                                    Unity_Burst_Intrinsics_v64___ctor_1028c00
                                              ((Unity_Burst_Intrinsics_v64_o *)&local_170._at_Byte0,1.0,0.2,
                                               (MethodInfo *)0x0);
                                    if (1 < (uint)alphaKeys->max_length) {
                                      alphaKeys->m_Items[1].fields.time = (float)local_170._at_UInt1.UInt1;
                                      alphaKeys->m_Items[1].fields.alpha = (float)local_170._at_UInt0.UInt0;
                                      local_168 = (_union_125884)0x0;
                                      Unity_Burst_Intrinsics_v64___ctor_1028c00
                                                ((Unity_Burst_Intrinsics_v64_o *)&local_168._at_Byte0,1.0,0.75
                                                 ,(MethodInfo *)0x0);
                                      if (2 < (uint)alphaKeys->max_length) {
                                        alphaKeys->m_Items[2].fields.time = (float)local_168._at_UInt1.UInt1;
                                        alphaKeys->m_Items[2].fields.alpha = (float)local_168._at_UInt0.UInt0;
                                        local_160 = (_union_125884)0x0;
                                        Unity_Burst_Intrinsics_v64___ctor_1028c00
                                                  ((Unity_Burst_Intrinsics_v64_o *)&local_160._at_Byte0,0.0,
                                                   1.0,(MethodInfo *)0x0);
                                        if (3 < (uint)alphaKeys->max_length) {
                                          alphaKeys->m_Items[3].fields.alpha =
                                               (float)local_160._at_UInt0.UInt0;
                                          alphaKeys->m_Items[3].fields.time = (float)local_160._at_UInt1.UInt1
                                          ;
                                          if (__this_05 != (UnityEngine_Gradient_o *)0x0) {
                                            UnityEngine_Gradient__SetKeys
                                                      (__this_05,colorKeys,alphaKeys,(MethodInfo *)0x0);
                                            pUVar13 = UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_2fc8f10
                                                                ((UnityEngine_ParticleSystem_MinMaxGradient_o
                                                                  *)local_138,__this_05,(MethodInfo *)0x0);
                                            local_1b8.m_Mode = (pUVar13->fields).m_Mode;
                                            local_1b8._4_4_ = *(undefined4 *)&(pUVar13->fields).field_0x4;
                                            local_1b8.m_GradientMin = (pUVar13->fields).m_GradientMin;
                                            local_1b8.m_GradientMax = (pUVar13->fields).m_GradientMax;
                                            local_1b8.m_ColorMin.fields.r =
                                                 (pUVar13->fields).m_ColorMin.fields.r;
                                            local_1b8.m_ColorMin.fields.g =
                                                 (pUVar13->fields).m_ColorMin.fields.g;
                                            local_1b8.m_ColorMin.fields.b =
                                                 (pUVar13->fields).m_ColorMin.fields.b;
                                            local_1b8.m_ColorMin.fields.a =
                                                 (pUVar13->fields).m_ColorMin.fields.a;
                                            local_1b8.m_ColorMax.fields.r =
                                                 (pUVar13->fields).m_ColorMax.fields.r;
                                            local_1b8.m_ColorMax.fields.g =
                                                 (pUVar13->fields).m_ColorMax.fields.g;
                                            local_1b8.m_ColorMax.fields.b =
                                                 (pUVar13->fields).m_ColorMax.fields.b;
                                            local_1b8.m_ColorMax.fields.a =
                                                 (pUVar13->fields).m_ColorMax.fields.a;
                                            UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_color
                                                      (&local_158,
                                                       (UnityEngine_ParticleSystem_MinMaxGradient_o *)
                                                       &local_1b8,(MethodInfo *)0x0);
                                            pUVar11 = (__this->fields)._chunks;
                                            if (pUVar11 != (UnityEngine_ParticleSystem_o *)0x0) {
                                              local_150.fields.m_ParticleSystem =
                                                   (UnityEngine_ParticleSystem_SizeOverLifetimeModule_Fields)
                                                   UnityEngine_ParticleSystem__get_noise
                                                             (pUVar11,(MethodInfo *)0x0);
                                              UnityEngine_ParticleSystem_SizeOverLifetimeModule__set_enabled
                                                        (&local_150,true,(MethodInfo *)0x0);
                                              curve = UnityEngine_AnimationCurve__Linear
                                                                (0.0,1.0,1.0,0.35,(MethodInfo *)0x0);
                                              local_70.m_Mode = 0;
                                              local_70._4_4_ = 0;
                                              local_70.m_GradientMin = (UnityEngine_Gradient_o *)0x0;
                                              local_70.m_GradientMax = (UnityEngine_Gradient_o *)0x0;
                                              local_70.m_ColorMin.fields.r = 0.0;
                                              local_70.m_ColorMin.fields.g = 0.0;
                                              UnityEngine_ParticleSystem_MinMaxCurve___ctor_2fc8c00
                                                        ((UnityEngine_ParticleSystem_MinMaxCurve_o *)
                                                         (local_90 + 0x20),1.0,curve,(MethodInfo *)0x0);
                                              local_1b8.m_Mode = local_70.m_Mode;
                                              local_1b8._4_4_ = local_70._4_4_;
                                              local_1b8.m_GradientMin = local_70.m_GradientMin;
                                              local_1b8.m_GradientMax = local_70.m_GradientMax;
                                              local_1b8.m_ColorMin.fields.r = local_70.m_ColorMin.fields.r;
                                              local_1b8.m_ColorMin.fields.g = local_70.m_ColorMin.fields.g;
                                              UnityEngine_ParticleSystem_SizeOverLifetimeModule__set_size
                                                        (&local_150,
                                                         (UnityEngine_ParticleSystem_MinMaxCurve_o *)
                                                         &local_1b8,(MethodInfo *)0x0);
                                              pUVar11 = (__this->fields)._chunks;
                                              if (pUVar11 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                local_148[0].fields.m_ParticleSystem =
                                                     (UnityEngine_ParticleSystem_EmissionModule_Fields)
                                                     UnityEngine_ParticleSystem__get_noise
                                                               (pUVar11,(MethodInfo *)0x0);
                                                pUVar12 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                                                                    ((UnityEngine_ParticleSystem_MinMaxCurve_o
                                                                      *)local_138,0.0,(MethodInfo *)0x0);
                                                local_1b8.m_Mode = (pUVar12->fields).m_Mode;
                                                local_1b8._4_4_ = (pUVar12->fields).m_CurveMultiplier;
                                                local_1b8.m_GradientMin =
                                                     (UnityEngine_Gradient_o *)(pUVar12->fields).m_CurveMin;
                                                local_1b8.m_GradientMax =
                                                     (UnityEngine_Gradient_o *)(pUVar12->fields).m_CurveMax;
                                                local_1b8.m_ColorMin.fields.r =
                                                     (pUVar12->fields).m_ConstantMin;
                                                local_1b8.m_ColorMin.fields.g =
                                                     (pUVar12->fields).m_ConstantMax;
                                                UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime
                                                          (local_148,
                                                           (UnityEngine_ParticleSystem_MinMaxCurve_o *)
                                                           &local_1b8,(MethodInfo *)0x0);
                                                __this_06 = UnityEngine_GameObject__GetComponent_object_
                                                                      (__this_03,
                                                                       (MethodInfo_6F5650 *)
                                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer
                                                       );
                                                if (__this_06 != (UnityEngine_ParticleSystemRenderer_o *)0x0)
                                                {
                                                  UnityEngine_Renderer__set_sharedMaterial
                                                            ((UnityEngine_Renderer_o *)__this_06,__this_02,
                                                             (MethodInfo *)0x0);
                                                  UnityEngine_ParticleSystemRenderer__set_renderMode
                                                            (__this_06,1,(MethodInfo *)0x0);
                                                  UnityEngine_ParticleSystemRenderer__set_velocityScale
                                                            (__this_06,0.04,(MethodInfo *)0x0);
                                                  UnityEngine_ParticleSystemRenderer__set_lengthScale
                                                            (__this_06,1.15,(MethodInfo *)0x0);
                                                  UnityEngine_Renderer__set_shadowCastingMode
                                                            ((UnityEngine_Renderer_o *)__this_06,0,
                                                             (MethodInfo *)0x0);
                                                  pUVar11 = (__this->fields)._chunks;
                                                  if (pUVar11 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                    UnityEngine_ParticleSystem__Play
                                                              (pUVar11,false,(MethodInfo *)0x0);
                                                    return;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          goto label_1821734a6;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
label_1821734ac:
                              ThrowIndexOutOfRangeException();
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
label_1821734a6:
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$CreateChunkTexture
// il2cpp: UnityEngine_Texture2D_o* Characters_ShifterGrowthEffect__CreateChunkTexture (Characters_ShifterGrowthEffect_o* __this, const MethodInfo* method);
// 0x1821726f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182172829: nop dword ptr [rax]
// asm:   0x18217283c: nop dword ptr [rax]

UnityEngine_Texture2D_o *
Characters_ShifterGrowthEffect__CreateChunkTexture
          (Characters_ShifterGrowthEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Object__o *pSVar1;
  UnityEngine_Texture_o *__this_00;
  undefined8 uVar2;
  int y;
  int x;
  float fVar3;
  float local_res18;
  float local_res1c;
  undefined8 local_res20;
  UnityEngine_Color_o local_c8 [11];
  
  if (Il2CppMethodInitialized_184346d62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter flesh chunk");
    Il2CppMethodInitialized_184346d62 = '\x01';
  }
  __this_00 = (UnityEngine_Texture_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  UnityEngine_Texture2D___ctor_2efc630
            ((UnityEngine_Texture2D_o *)__this_00,0x20,0x20,4,false,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Texture_o *)0x0) {
    UnityEngine_Texture__set_wrapMode(__this_00,1,(MethodInfo *)0x0);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_00,"Shifter flesh chunk",(MethodInfo *)0x0);
    y = 0;
    do {
      x = 0;
      do {
        uVar2 = il2cpp_runtime_helper_181882d90(0);
        local_res18 = ((float)x / 31.0 + (float)x / 31.0) - (float)uVar2;
        local_res20._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
        local_res1c = ((float)y / 31.0 + (float)y / 31.0) - local_res20._4_4_;
        local_res20 = uVar2;
        fVar3 = (float)il2cpp_runtime_helper_180562bc0(&local_res18,0);
        if (fVar3 < 0.0) {
          fVar3 = 0.0;
        }
        else if (1.0 < fVar3) {
          fVar3 = 1.0;
        }
        fVar3 = fVar3 * -2.0 * fVar3 * fVar3 + fVar3 * 3.0 * fVar3;
        local_c8[0].fields.a = 1.0 - ((1.0 - fVar3) * 0.55 + fVar3);
        local_c8[0].fields.r = 1.0 - local_c8[0].fields.a * 0.35;
        local_c8[0].fields.g = local_c8[0].fields.r;
        local_c8[0].fields.b = local_c8[0].fields.r;
        UnityEngine_Texture2D__SetPixel((UnityEngine_Texture2D_o *)__this_00,x,y,local_c8,(MethodInfo *)0x0);
        x = x + 1;
      } while (x < 0x20);
      y = y + 1;
    } while (y < 0x20);
    UnityEngine_Texture2D__Apply((UnityEngine_Texture2D_o *)__this_00,false,true,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._created;
    if (pSVar1 != (System_Collections_Generic_List_Object__o *)0x0) {
      il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_Object_Add);
      return (UnityEngine_Texture2D_o *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$LateUpdate
// il2cpp: void Characters_ShifterGrowthEffect__LateUpdate (Characters_ShifterGrowthEffect_o* __this, const MethodInfo* method);
// 0x182173b60
// eh: try 0x182173d10..0x182173faf -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182173de2: mov rdx, qword ptr [rip + 0x1f3347f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_Dispose
// asm:   0x182173de9: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182173dee: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182173df3: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182173df8: test rcx, rcx
// asm:   0x182173dfb: jne 0x182173faf
// asm:   0x182173e01: mov rsi, qword ptr [rsp + 0xd0]
// asm:   0x182173e09: movss xmm7, dword ptr [rip + 0x11e4df7]
// asm:   0x182173e11: xorps xmm8, xmm8
// asm:   0x182173e15: movss xmm6, dword ptr [rsp + 0xe0]
// asm:   0x182173faf: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_ShifterGrowthEffect__LateUpdate(Characters_ShifterGrowthEffect_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  System_Collections_Generic_List_ShifterGrowthEffect_Layer__o *__this_00;
  UnityEngine_MaterialPropertyBlock_o *pUVar2;
  UnityEngine_Renderer_o *__this_01;
  UnityEngine_ParticleSystem_o *pUVar3;
  Characters_ShifterGrowthEffect_Layer_o *pCVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float value;
  UnityEngine_ParticleSystem_EmissionModule_o local_res20;
  undefined1 local_a0 [16];
  Characters_ShifterGrowthEffect_Layer_o *local_90;
  undefined1 local_88 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_80;
  Characters_ShifterGrowthEffect_Layer_o *local_78;
  
  if (Il2CppMethodInitialized_184346d63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ShifterGrowthEffect_Layer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterGrowthEffect);
    Il2CppMethodInitialized_184346d63 = '\x01';
  }
  local_88 = (undefined1  [8])0x0;
  pUStack_80 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_78 = (Characters_ShifterGrowthEffect_Layer_o *)0x0;
  local_res20.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  if ((__this->fields)._finished != false) {
    return;
  }
  fVar6 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar6 = fVar6 - (__this->fields)._startTime;
  if (fVar6 < 3.8) {
    pCVar1 = (__this->fields)._shifter;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      pCVar1 = (__this->fields)._shifter;
      if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
        if ((pCVar1->fields).Dead != false) goto label_182173f44;
        if ((TypeInfo_Characters_ShifterGrowthEffect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterGrowthEffect);
        }
        fVar7 = Characters_ShifterGrowthEffect__GrowthProgress(fVar6,(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._shifter;
        if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
          if ((pCVar1->fields).EffectsEnabled == false) {
            value = 0.0;
          }
          else {
            value = 1.0;
          }
          __this_00 = (__this->fields)._layers;
          if (__this_00 != (System_Collections_Generic_List_ShifterGrowthEffect_Layer__o *)0x0) {
            System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,
                       (System_Collections_Generic_List_T__o *)__this_00,
                       (MethodInfo_91F180 *)
                       MethodInfo_System_Collections_Generic_List_ShifterGrowthEffect_Layer_GetEnumerator);
            local_88 = (undefined1  [8])local_a0._0_8_;
            pUStack_80 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a0._8_8_;
            local_78 = local_90;
            local_a0._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
            local_a0._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88;
            while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                                      (MethodInfo_153A2A0 *)
                                      MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_MoveNext
                                     ), pCVar4 = local_78, bVar5) {
              Characters_ShifterGrowthEffect__SyncMaterials(__this,local_78,(MethodInfo *)0x0);
              if (pCVar4 == (Characters_ShifterGrowthEffect_Layer_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar2 = (pCVar4->fields).Properties;
              if ((TypeInfo_Characters_ShifterGrowthEffect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterGrowthEffect);
              }
              if (pUVar2 == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_MaterialPropertyBlock__SetFloat_2edfd40
                        (pUVar2,TypeInfo_Characters_ShifterGrowthEffect->static_fields->Growth,fVar7 * 1.03,
                         (MethodInfo *)0x0);
              pUVar2 = (pCVar4->fields).Properties;
              if (pUVar2 == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_MaterialPropertyBlock__SetFloat_2edfd40
                        (pUVar2,TypeInfo_Characters_ShifterGrowthEffect->static_fields->TissueIntensity,value,
                         (MethodInfo *)0x0);
              __this_01 = (UnityEngine_Renderer_o *)(pCVar4->fields).Renderer;
              if (__this_01 == (UnityEngine_Renderer_o *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_Renderer__SetPropertyBlock(__this_01,(pCVar4->fields).Properties,(MethodInfo *)0x0);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88,
                       MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_Dispose
                      );
            pUVar3 = (__this->fields)._chunks;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar5) {
              return;
            }
            pUVar3 = (__this->fields)._chunks;
            if (pUVar3 != (UnityEngine_ParticleSystem_o *)0x0) {
              local_res20.fields.m_ParticleSystem =
                   (UnityEngine_ParticleSystem_EmissionModule_Fields)
                   UnityEngine_ParticleSystem__get_noise(pUVar3,(MethodInfo *)0x0);
              fVar7 = (fVar6 - 0.2) / 0.3;
              if (fVar7 < 0.0) {
                fVar7 = 0.0;
              }
              else if (1.0 < fVar7) {
                fVar7 = 1.0;
              }
              fVar7 = fVar7 * -2.0 * fVar7 * fVar7 + fVar7 * 3.0 * fVar7;
              fVar6 = (fVar6 - 1.4) / 0.6;
              if (fVar6 < 0.0) {
                fVar6 = 0.0;
              }
              else if (1.0 < fVar6) {
                fVar6 = 1.0;
              }
              fVar6 = fVar6 * -2.0 * fVar6 * fVar6 + fVar6 * 3.0 * fVar6;
              UnityEngine_ParticleSystem_EmissionModule__set_rateOverTimeMultiplier
                        (&local_res20,
                         (1.0 - ((1.0 - fVar6) * 0.0 + fVar6)) * ((1.0 - fVar7) * 0.0 + fVar7) * 120.0,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
label_182173f44:
  Characters_ShifterGrowthEffect__Finish(__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.ShifterGrowthEffect$$GrowthProgress
// il2cpp: float Characters_ShifterGrowthEffect__GrowthProgress (float time, const MethodInfo* method);
// 0x1821738c0

float Characters_ShifterGrowthEffect__GrowthProgress(float time,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184346d64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterGrowthEffect);
    Il2CppMethodInitialized_184346d64 = '\x01';
  }
  if (time < 2.6) {
    fVar5 = time / 2.6;
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    else if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
    if ((TypeInfo_Characters_ShifterGrowthEffect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterGrowthEffect);
    }
    fVar1 = fVar5 * fVar5;
    fVar3 = fVar1 * fVar5;
    fVar4 = (fVar3 - fVar1) * 1.04;
    fVar2 = (((fVar3 + fVar3) - fVar1 * 3.0) + 1.0) * 0.0 + ((fVar3 - (fVar1 + fVar1)) + fVar5) * 0.0;
    fVar5 = (fVar3 * -2.0 + fVar1 * 3.0) * 0.75;
  }
  else {
    fVar5 = time - 2.6;
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    else if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
    if ((TypeInfo_Characters_ShifterGrowthEffect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterGrowthEffect);
    }
    fVar1 = fVar5 * fVar5;
    fVar3 = fVar1 * fVar5;
    fVar4 = (fVar3 - fVar1) * 0.0;
    fVar2 = (((fVar3 + fVar3) - fVar1 * 3.0) + 1.0) * 0.75 + ((fVar3 - (fVar1 + fVar1)) + fVar5) * 0.4;
    fVar5 = fVar3 * -2.0 + fVar1 * 3.0;
  }
  return fVar2 + fVar5 + fVar4;
}


// Characters.ShifterGrowthEffect$$Hermite
// il2cpp: float Characters_ShifterGrowthEffect__Hermite (float t, float start, float startTangent, float end, float endTangent, const MethodInfo* method);
// 0x182173a90

float Characters_ShifterGrowthEffect__Hermite
                (float t,float start,float startTangent,float end,float endTangent,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = t * t;
  fVar2 = fVar1 * t;
  return (((fVar2 + fVar2) - fVar1 * 3.0) + 1.0) * start + ((fVar2 - (fVar1 + fVar1)) + t) * startTangent +
         (fVar2 * -2.0 + fVar1 * 3.0) * end + (fVar2 - fVar1) * endTangent;
}


// Characters.ShifterGrowthEffect$$SyncMaterials
// il2cpp: void Characters_ShifterGrowthEffect__SyncMaterials (Characters_ShifterGrowthEffect_o* __this, Characters_ShifterGrowthEffect_Layer_o* layer, const MethodInfo* method);
// 0x182175190
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18217521d: nop dword ptr [rax]
// asm:   0x182175404: jmp 0x182175220

void Characters_ShifterGrowthEffect__SyncMaterials
               (Characters_ShifterGrowthEffect_o *__this,Characters_ShifterGrowthEffect_Layer_o *layer,
               MethodInfo *method)

{
  UnityEngine_Renderer_o *pUVar1;
  System_Collections_Generic_List_Material__o *__this_00;
  UnityEngine_Material_o *pUVar2;
  UnityEngine_Object_o *y;
  UnityEngine_Shader_array *pUVar3;
  bool bVar4;
  bool bVar5;
  UnityEngine_Material_o *__this_01;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar6;
  UnityEngine_Material_array *pUVar7;
  UnityEngine_Material_array *pUVar8;
  uint index;
  
  if (Il2CppMethodInitialized_184346d65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346d65 = '\x01';
  }
  if ((layer != (Characters_ShifterGrowthEffect_Layer_o *)0x0) &&
     (pUVar1 = (UnityEngine_Renderer_o *)(layer->fields).Renderer, pUVar1 != (UnityEngine_Renderer_o *)0x0)) {
    UnityEngine_Renderer__GetSharedMaterials(pUVar1,(__this->fields)._materialBuffer,(MethodInfo *)0x0);
    pUVar8 = (UnityEngine_Material_array *)(__this->fields)._materialBuffer;
    if (pUVar8 != (UnityEngine_Material_array *)0x0) {
      bVar5 = false;
      index = 0;
      do {
        pUVar7 = (layer->fields).GrowthMaterials;
        if (pUVar7 == (UnityEngine_Material_array *)0x0) break;
        if ((int)pUVar8->max_length < (int)pUVar7->max_length) {
          pUVar7 = pUVar8;
        }
        if ((int)pUVar7->max_length <= (int)index) {
          if (bVar5) {
            pUVar1 = (UnityEngine_Renderer_o *)(layer->fields).Renderer;
            if (pUVar1 == (UnityEngine_Renderer_o *)0x0) break;
            UnityEngine_Renderer__set_sharedMaterials
                      (pUVar1,(layer->fields).GrowthMaterials,(MethodInfo *)0x0);
          }
          return;
        }
        __this_00 = (__this->fields)._materialBuffer;
        if (__this_00 == (System_Collections_Generic_List_Material__o *)0x0) break;
        __this_01 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_Material_get_Item);
        pUVar8 = (layer->fields).GrowthMaterials;
        if (pUVar8 == (UnityEngine_Material_array *)0x0) break;
        if ((uint)pUVar8->max_length <= index) goto label_182175455;
        pUVar2 = pUVar8->m_Items[(int)index];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0)
        ;
        if (!bVar4) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar4) {
            pUVar8 = (layer->fields).GrowthMaterials;
            if (pUVar8 == (UnityEngine_Material_array *)0x0) break;
            if ((uint)pUVar8->max_length <= index) goto label_182175455;
            pUVar2 = pUVar8->m_Items[(int)index];
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar4 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar4) {
              if (__this_01 == (UnityEngine_Material_o *)0x0) break;
              x = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(__this_01,(MethodInfo *)0x0);
              y = (UnityEngine_Object_o *)(__this->fields)._shader;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar5 = UnityEngine_Object__op_Equality(x,y,(MethodInfo *)0x0);
              if (bVar5) {
                pUVar3 = (layer->fields).OriginalShaders;
                if (pUVar3 == (UnityEngine_Shader_array *)0x0) break;
                if ((uint)pUVar3->max_length <= index) goto label_182175455;
                UnityEngine_Material__set_shader(__this_01,pUVar3->m_Items[(int)index],(MethodInfo *)0x0);
              }
              pUVar8 = (layer->fields).OriginalMaterials;
              if (pUVar8 == (UnityEngine_Material_array *)0x0) break;
              pIVar6 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)__this_01,(((pUVar8->obj).klass)->_1).element_class);
              if (pIVar6 == (Il2CppObject *)0x0) {
                pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
              }
              if ((uint)pUVar8->max_length <= index) {
label_182175455:
                ThrowIndexOutOfRangeException();
              }
              pUVar8->m_Items[(int)index] = __this_01;
              Il2CppCodeGenWriteBarrier(pUVar8->m_Items + (int)index,__this_01);
              pUVar8 = (layer->fields).GrowthMaterials;
              if (pUVar8 == (UnityEngine_Material_array *)0x0) break;
              if ((uint)pUVar8->max_length <= index) goto label_182175455;
              if (pUVar8->m_Items[(int)index] == (UnityEngine_Material_o *)0x0) break;
              UnityEngine_Material__CopyPropertiesFromMaterial
                        (pUVar8->m_Items[(int)index],__this_01,(MethodInfo *)0x0);
              bVar5 = true;
            }
          }
        }
        pUVar8 = (UnityEngine_Material_array *)(__this->fields)._materialBuffer;
        index = index + 1;
      } while (pUVar8 != (UnityEngine_Material_array *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$Finish
// il2cpp: void Characters_ShifterGrowthEffect__Finish (Characters_ShifterGrowthEffect_o* __this, const MethodInfo* method);
// 0x1821734c0
// eh: try 0x1821735e0..0x1821738aa -> pad 0x183317f30 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821735dc: nop dword ptr [rax]
// asm:   0x18217369e: mov rdx, qword ptr [rip + 0x1f33bc3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_Dispose
// asm:   0x1821736a5: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821736aa: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821736af: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821736b4: test rcx, rcx
// asm:   0x1821736b7: jne 0x1821738aa
// asm:   0x1821736bd: mov rsi, qword ptr [rsp + 0xb0]
// asm:   0x182173806: mov rdx, qword ptr [rip + 0x1f1b91b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Object_Dispose
// asm:   0x18217380d: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182173812: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182173817: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18217381c: test rcx, rcx
// asm:   0x18217381f: jne 0x1821738b0
// asm:   0x182173825: mov rsi, qword ptr [rsp + 0xb0]
// asm:   0x1821738aa: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821738b0: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_ShifterGrowthEffect__Finish(Characters_ShifterGrowthEffect_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_ShifterGrowthEffect_Layer__o *pSVar3;
  UnityEngine_SkinnedMeshRenderer_o *__this_00;
  UnityEngine_Renderer_o *pUVar4;
  UnityEngine_ParticleSystem_o *pUVar5;
  System_Collections_Generic_List_Object__o *pSVar6;
  Characters_ShifterGrowthEffect_Layer_o *pCVar7;
  bool bVar8;
  UnityEngine_Object_o *pUVar9;
  undefined1 local_78 [16];
  Characters_ShifterGrowthEffect_Layer_o *local_68;
  undefined1 local_60 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_58;
  Characters_ShifterGrowthEffect_Layer_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Characters_ShifterGrowthEffect_Layer_o *local_38;
  
  if (Il2CppMethodInitialized_184346d66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Object_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ShifterGrowthEffect_Layer_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ShifterGrowthEffect_Layer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346d66 = '\x01';
  }
  local_60 = (undefined1  [8])0x0;
  pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_50 = (Characters_ShifterGrowthEffect_Layer_o *)0x0;
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Characters_ShifterGrowthEffect_Layer_o *)0x0;
  if ((__this->fields)._finished != false) {
    return;
  }
  (__this->fields)._finished = true;
  pSVar3 = (__this->fields)._layers;
  if (pSVar3 == (System_Collections_Generic_List_ShifterGrowthEffect_Layer__o *)0x0) goto label_18217388e;
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
             (System_Collections_Generic_List_T__o *)pSVar3,
             (MethodInfo_91F180 *)
             MethodInfo_System_Collections_Generic_List_ShifterGrowthEffect_Layer_GetEnumerator);
  local_60 = (undefined1  [8])local_78._0_8_;
  pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78._8_8_;
  local_50 = local_68;
  local_78._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_78._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60;
  while (bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)local_60,
                            (MethodInfo_153A2A0 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_MoveNext
                           ), pCVar7 = local_50, bVar8) {
    if (local_50 == (Characters_ShifterGrowthEffect_Layer_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar9 = (UnityEngine_Object_o *)(local_50->fields).Renderer;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar8) {
      Characters_ShifterGrowthEffect__SyncMaterials(__this,pCVar7,(MethodInfo *)0x0);
      __this_00 = (pCVar7->fields).Renderer;
      if (__this_00 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_SkinnedMeshRenderer__set_sharedMesh
                (__this_00,(pCVar7->fields).OriginalMesh,(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_Renderer_o *)(pCVar7->fields).Renderer;
      if (pUVar4 == (UnityEngine_Renderer_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Renderer__set_sharedMaterials(pUVar4,(pCVar7->fields).OriginalMaterials,(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_Renderer_o *)(pCVar7->fields).Renderer;
      if (pUVar4 == (UnityEngine_Renderer_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Renderer__SetPropertyBlock
                (pUVar4,(UnityEngine_MaterialPropertyBlock_o *)0x0,(MethodInfo *)0x0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
             MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_Dispose);
  pUVar5 = (__this->fields)._chunks;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    pUVar5 = (__this->fields)._chunks;
    if (pUVar5 == (UnityEngine_ParticleSystem_o *)0x0) goto label_18217388e;
    UnityEngine_ParticleSystem__Stop(pUVar5,true,1,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._chunks;
    if (pUVar5 == (UnityEngine_ParticleSystem_o *)0x0) goto label_18217388e;
    pUVar9 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy(pUVar9,0.5,(MethodInfo *)0x0);
  }
  pSVar6 = (__this->fields)._created;
  if (pSVar6 != (System_Collections_Generic_List_Object__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
               (System_Collections_Generic_List_T__o *)pSVar6,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Object_GetEnumerator);
    local_48 = (undefined1  [8])local_78._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78._8_8_;
    local_38 = local_68;
    local_78._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_78._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while (bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_Object_MoveNext),
          pCVar7 = local_38, bVar8) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar8) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pCVar7,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_List_Enumerator_Object_Dispose);
    pSVar3 = (__this->fields)._layers;
    if (pSVar3 != (System_Collections_Generic_List_ShifterGrowthEffect_Layer__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar2 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < iVar2) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      pSVar6 = (__this->fields)._created;
      if (pSVar6 != (System_Collections_Generic_List_Object__o *)0x0) {
        piVar1 = &(pSVar6->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar2 = (pSVar6->fields)._size;
        (pSVar6->fields)._size = 0;
        if (iVar2 < 1) {
          return;
        }
        System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_18217388e:
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$OnDestroy
// il2cpp: void Characters_ShifterGrowthEffect__OnDestroy (Characters_ShifterGrowthEffect_o* __this, const MethodInfo* method);
// 0x182174990

void Characters_ShifterGrowthEffect__OnDestroy(Characters_ShifterGrowthEffect_o *__this,MethodInfo *method)

{
  Characters_ShifterGrowthEffect__Finish(__this,(MethodInfo *)0x0);
  return;
}


// Characters.ShifterGrowthEffect$$.ctor
// il2cpp: void Characters_ShifterGrowthEffect___ctor (Characters_ShifterGrowthEffect_o* __this, const MethodInfo* method);
// 0x182175790

void Characters_ShifterGrowthEffect___ctor(Characters_ShifterGrowthEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ShifterGrowthEffect_Layer__o *__this_00;
  System_Collections_Generic_List_Object__o *__this_01;
  System_Collections_Generic_List_Material__o *__this_02;
  System_Collections_Generic_List_Transform__o *__this_03;
  System_Collections_Generic_Dictionary_Transform__int__o *__this_04;
  
  if (Il2CppMethodInitialized_184346d67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_Transform_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ShifterGrowthEffect_Layer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_ShifterGrowthEffect_Layer);
    Il2CppMethodInitialized_184346d67 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ShifterGrowthEffect_Layer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ShifterGrowthEffect_Layer_ctor);
  (__this->fields)._layers = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._layers,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Object);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Object_ctor);
  (__this->fields)._created = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._created,__this_01);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  (__this->fields)._materialBuffer = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._materialBuffer,__this_02);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Transform);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_03,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Transform_ctor);
  (__this->fields)._nodes = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._nodes,__this_03);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Transform_int);
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_Transform_int_ctor);
  (__this->fields)._nodeIndices = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._nodeIndices,__this_04);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.ShifterGrowthEffect$$.cctor
// il2cpp: void Characters_ShifterGrowthEffect___cctor (const MethodInfo* method);
// 0x182175600

void Characters_ShifterGrowthEffect___cctor(MethodInfo *method)

{
  Characters_ShifterGrowthEffect_StaticFields *pCVar1;
  System_String_o *pSVar2;
  int32_t iVar3;
  System_String_array *value;
  
  if (Il2CppMethodInitialized_184346d68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterGrowthEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"upperchest");
    il2cpp_codegen_initialize_runtime_metadata(&"_TissueIntensity");
    il2cpp_codegen_initialize_runtime_metadata(&"chest");
    il2cpp_codegen_initialize_runtime_metadata(&"_Growth");
    Il2CppMethodInitialized_184346d68 = '\x01';
  }
  iVar3 = UnityEngine_Shader__PropertyToID("_Growth",(MethodInfo *)0x0);
  TypeInfo_Characters_ShifterGrowthEffect->static_fields->Growth = iVar3;
  iVar3 = UnityEngine_Shader__PropertyToID("_TissueIntensity",(MethodInfo *)0x0);
  TypeInfo_Characters_ShifterGrowthEffect->static_fields->TissueIntensity = iVar3;
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  pSVar2 = "chest";
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = "chest";
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar2);
      pSVar2 = "upperchest";
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = "upperchest";
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar2);
        TypeInfo_Characters_ShifterGrowthEffect->static_fields->Origin = value;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_ShifterGrowthEffect->static_fields->Origin,value);
        pCVar1 = TypeInfo_Characters_ShifterGrowthEffect->static_fields;
        (pCVar1->ChunkDark).fields.r = 0.32;
        (pCVar1->ChunkDark).fields.g = 0.04;
        (pCVar1->ChunkDark).fields.b = 0.03;
        (pCVar1->ChunkDark).fields.a = 1.0;
        pCVar1 = TypeInfo_Characters_ShifterGrowthEffect->static_fields;
        (pCVar1->ChunkLight).fields.r = 0.72;
        (pCVar1->ChunkLight).fields.g = 0.15;
        (pCVar1->ChunkLight).fields.b = 0.1;
        (pCVar1->ChunkLight).fields.a = 1.0;
        return;
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


