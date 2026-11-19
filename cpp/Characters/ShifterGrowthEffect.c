// Type: Characters.ShifterGrowthEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/ShifterGrowthEffect.cs
// Prior real C# source: none
// --------------------------------

// Characters.ShifterGrowthEffect.Measurement$$.ctor
// il2cpp: void Characters_ShifterGrowthEffect_Measurement___ctor (Characters_ShifterGrowthEffect_Measurement_o* __this, int32_t count, const MethodInfo* method);
// 0x5c1d930

void Characters_ShifterGrowthEffect_Measurement___ctor
               (Characters_ShifterGrowthEffect_Measurement_o *__this,int32_t count,MethodInfo *method)

{
  UnityEngine_Vector3_array *pUVar1;
  System_Single_array *pSVar2;
  
  if (Il2CppMethodInitialized_0754773e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_0754773e = '\x01';
  }
  (__this->fields).Maximum = 0.0001;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,count);
  (__this->fields).Positions = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Positions);
  pSVar2 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,count);
  (__this->fields).Distances = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Distances);
  return;
}


// Characters.ShifterGrowthEffect.Layer$$.ctor
// il2cpp: void Characters_ShifterGrowthEffect_Layer___ctor (Characters_ShifterGrowthEffect_Layer_o* __this, UnityEngine_SkinnedMeshRenderer_o* renderer, UnityEngine_Mesh_o* originalMesh, UnityEngine_Material_array* originalMaterials, const MethodInfo* method);
// 0x5c1d9c0

void Characters_ShifterGrowthEffect_Layer___ctor
               (Characters_ShifterGrowthEffect_Layer_o *__this,UnityEngine_SkinnedMeshRenderer_o *renderer,
               UnityEngine_Mesh_o *originalMesh,UnityEngine_Material_array *originalMaterials,
               MethodInfo *method)

{
  UnityEngine_MaterialPropertyBlock_o *__this_00;
  UnityEngine_Shader_array *pUVar1;
  UnityEngine_Material_array *pUVar2;
  
  if (Il2CppMethodInitialized_0754773f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MaterialPropertyBlock);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Shader_array);
    Il2CppMethodInitialized_0754773f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
  UnityEngine_MaterialPropertyBlock___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Properties = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Properties);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Renderer = renderer;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Renderer);
  (__this->fields).OriginalMesh = originalMesh;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OriginalMesh);
  (__this->fields).OriginalMaterials = originalMaterials;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OriginalMaterials);
  if (originalMaterials == (UnityEngine_Material_array *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar1 = (UnityEngine_Shader_array *)
           SZArrayNew(TypeInfo_UnityEngine_Shader_array,(uint32_t)originalMaterials->max_length);
  (__this->fields).OriginalShaders = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OriginalShaders);
  pUVar2 = (UnityEngine_Material_array *)
           SZArrayNew(TypeInfo_UnityEngine_Material_array,(uint32_t)originalMaterials->max_length);
  (__this->fields).GrowthMaterials = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GrowthMaterials);
  return;
}


// Characters.ShifterGrowthEffect$$Play
// il2cpp: void Characters_ShifterGrowthEffect__Play (Characters_ShifterGrowthEffect_o* __this, Characters_BaseShifter_o* shifter, const MethodInfo* method);
// 0x5c164e0
// eh: try 0x5c16943..0x5c16a17 -> pad 0x5c16a1d (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c16a39..0x5c16a3e -> pad 0x5c16a63 cleanup
// eh: try 0x5c16a66..0x5c16a70 -> pad 0x5c16a78 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c167f5: jmp 0x5c16690
// asm:   0x5c1697c: nop dword ptr [rax]
// asm:   0x5c169a2: jmp 0x5c16940
// asm:   0x5c16a17: jmp 0x5c16a21
// asm:   0x5c16a19: jmp 0x5c16a21
// asm:   0x5c16a1b: jmp 0x5c16a21
// asm:   0x5c16a1d: jmp 0x5c16a21
// asm:   0x5c16a1f: jmp 0x5c16a21
// asm:   0x5c16a21: mov rbp, rax
// asm:   0x5c16a24: cmp edx, 1
// asm:   0x5c16a27: jne 0x5c16a66
// asm:   0x5c16a29: mov rdi, rbp
// asm:   0x5c16a2c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c16a31: mov rbp, qword ptr [rax]
// asm:   0x5c16a34: mov qword ptr [rsp + 0x30], rbp
// asm:   0x5c16a39: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c16a3e: lea rax, [rip + 0x1678053]  ; MethodInfo_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer_Dispose
// asm:   0x5c16a45: mov rsi, qword ptr [rax]
// asm:   0x5c16a48: lea rdi, [rsp + 0x10]
// asm:   0x5c16a4d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c16a52: test rbp, rbp
// asm:   0x5c16a55: je 0x5c169b8
// asm:   0x5c16a5b: mov rdi, rbp
// asm:   0x5c16a5e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c16a63: mov rbp, rax
// asm:   0x5c16a66: lea rdi, [rsp + 0x30]
// asm:   0x5c16a6b: call 0x2fd9160  ; il2cpp_runtime_helper_02fd9160()
// asm:   0x5c16a70: mov rdi, rbp
// asm:   0x5c16a73: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c16a78: mov rdi, rax
// asm:   0x5c16a7b: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_ShifterGrowthEffect__Play
               (Characters_ShifterGrowthEffect_o *__this,Characters_BaseShifter_o *shifter,MethodInfo *method)

{
  UnityEngine_Shader_o **targetAddress;
  UnityEngine_SkinnedMeshRenderer_o **targetAddress_00;
  int32_t *piVar1;
  UnityEngine_Renderer_o *pUVar2;
  UnityEngine_SkinnedMeshRenderer_array *pUVar3;
  Characters_BaseShifter_o *pCVar4;
  bool bVar5;
  int32_t iVar6;
  int32_t iVar7;
  uint uVar8;
  UnityEngine_Shader_o *pUVar9;
  MethodInfo *method_00;
  System_Object_array *pSVar10;
  UnityEngine_Object_o *pUVar11;
  UnityEngine_Mesh_o *pUVar12;
  UnityEngine_Transform_array *pUVar13;
  ulong uVar14;
  UnityEngine_Transform_o *root;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar15;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  float fVar19;
  System_Collections_Generic_List_Enumerator_object__o local_78;
  undefined1 local_58 [16];
  UnityEngine_SkinnedMeshRenderer_o *local_48;
  Characters_BaseShifter_o *local_40;
  UnityEngine_Shader_o **local_38;
  
  if (Il2CppMethodInitialized_0754772d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
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
    il2cpp_codegen_initialize_runtime_metadata(&"TitanRegrowth");
    Il2CppMethodInitialized_0754772d = '\x01';
  }
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  (__this->fields)._shifter = shifter;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._shifter);
  fVar19 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._startTime = fVar19;
  if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
  }
  pUVar9 = Characters_BasicTitanComponentCache__LoadShader("TitanRegrowth",(MethodInfo *)0x0);
  targetAddress = &(__this->fields)._shader;
  (__this->fields)._shader = pUVar9;
  Il2CppCodeGenWriteBarrier(targetAddress);
  method_00 = (MethodInfo *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_SkinnedMeshRenderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)method_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_ctor);
  if ((shifter == (Characters_BaseShifter_o *)0x0) ||
     (pSVar10 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                          ((UnityEngine_Component_o *)shifter,
                           (MethodInfo_34B11B0 *)
                           MethodInfo_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer),
     pSVar10 == (System_Object_array *)0x0)) {
label_05c16886:
    ThrowNullReferenceException();
  }
  targetAddress_00 = &(__this->fields)._body;
  uVar8 = (uint)pSVar10->max_length;
  local_40 = shifter;
  local_38 = targetAddress;
  if (method_00 == (MethodInfo *)0x0) {
    if (0 < (int)uVar8) {
      lVar16 = 0;
      do {
        if (uVar8 <= (uint)lVar16) goto label_05c16a08;
        pUVar2 = (UnityEngine_Renderer_o *)pSVar10->m_Items[lVar16];
        if (pUVar2 == (UnityEngine_Renderer_o *)0x0) goto label_05c16886;
        bVar5 = UnityEngine_Renderer__get_enabled(pUVar2,(MethodInfo *)0x0);
        if (bVar5) {
          pUVar11 = (UnityEngine_Object_o *)
                    UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                              ((UnityEngine_SkinnedMeshRenderer_o *)pUVar2,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Equality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((!bVar5) &&
             ((pUVar12 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                                   ((UnityEngine_SkinnedMeshRenderer_o *)pUVar2,(MethodInfo *)0x0),
              pUVar12 == (UnityEngine_Mesh_o *)0x0 ||
              (bVar5 = UnityEngine_Mesh__get_isReadable(pUVar12,(MethodInfo *)0x0), bVar5))))
          goto label_05c16886;
        }
        uVar8 = (uint)pSVar10->max_length;
        lVar16 = lVar16 + 1;
      } while ((int)lVar16 < (int)uVar8);
    }
  }
  else if (0 < (int)uVar8) {
    uVar18 = 0;
    do {
      if (uVar8 <= uVar18) {
label_05c16a08:
        ThrowIndexOutOfRangeException();
      }
      pUVar2 = (UnityEngine_Renderer_o *)pSVar10->m_Items[(int)uVar18];
      if (pUVar2 == (UnityEngine_Renderer_o *)0x0) goto label_05c16886;
      bVar5 = UnityEngine_Renderer__get_enabled(pUVar2,(MethodInfo *)0x0);
      if (bVar5) {
        pUVar11 = (UnityEngine_Object_o *)
                  UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                            ((UnityEngine_SkinnedMeshRenderer_o *)pUVar2,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Equality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar5) {
          pUVar12 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                              ((UnityEngine_SkinnedMeshRenderer_o *)pUVar2,(MethodInfo *)0x0);
          if (pUVar12 == (UnityEngine_Mesh_o *)0x0) goto label_05c16886;
          bVar5 = UnityEngine_Mesh__get_isReadable(pUVar12,(MethodInfo *)0x0);
          pMVar15 = MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_Add;
          if (bVar5) {
            piVar1 = (int32_t *)((long)&method_00->name + 4);
            *piVar1 = *piVar1 + 1;
            pUVar3 = ((System_Collections_Generic_List_SkinnedMeshRenderer__Fields *)
                     &method_00->invoker_method)->_items;
            if (pUVar3 == (UnityEngine_SkinnedMeshRenderer_array *)0x0) goto label_05c16886;
            uVar8 = *(uint *)&method_00->name;
            if (uVar8 < (uint)pUVar3->max_length) {
              *(uint *)&method_00->name = uVar8 + 1;
              pUVar3->m_Items[(int)uVar8] = (UnityEngine_SkinnedMeshRenderer_o *)pUVar2;
              Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar8);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)method_00,(Il2CppObject *)pUVar2,
                         (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
            }
            pUVar11 = (UnityEngine_Object_o *)*targetAddress_00;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar5 = UnityEngine_Object__op_Equality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar5) {
              pUVar12 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                                  ((UnityEngine_SkinnedMeshRenderer_o *)pUVar2,(MethodInfo *)0x0);
              if (pUVar12 == (UnityEngine_Mesh_o *)0x0) goto label_05c16886;
              iVar6 = UnityEngine_Mesh__get_vertexCount(pUVar12,(MethodInfo *)0x0);
              if ((*targetAddress_00 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) ||
                 (pUVar12 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                                      (*targetAddress_00,(MethodInfo *)0x0),
                 pUVar12 == (UnityEngine_Mesh_o *)0x0)) goto label_05c16886;
              iVar7 = UnityEngine_Mesh__get_vertexCount(pUVar12,(MethodInfo *)0x0);
              if (iVar6 <= iVar7) goto label_05c16690;
            }
            *targetAddress_00 = (UnityEngine_SkinnedMeshRenderer_o *)pUVar2;
            Il2CppCodeGenWriteBarrier(targetAddress_00);
          }
        }
      }
label_05c16690:
      uVar18 = uVar18 + 1;
      uVar8 = (uint)pSVar10->max_length;
    } while ((int)uVar18 < (int)uVar8);
  }
  pUVar11 = (UnityEngine_Object_o *)*targetAddress_00;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    pUVar11 = (UnityEngine_Object_o *)*local_38;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      if (method_00 == (MethodInfo *)0x0) goto label_05c16886;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                 (System_Collections_Generic_List_object__o *)method_00,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_GetEnumerator);
      local_78.fields._current = (Il2CppObject *)local_48;
      local_78.fields._list = (System_Collections_Generic_List_T__o *)local_58._0_8_;
      local_78.fields._index = local_58._8_4_;
      local_78.fields._version = local_58._12_4_;
      local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_58._8_8_ = &local_78;
      while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&local_78,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer_MoveNext
                               ), bVar5) {
        if ((UnityEngine_SkinnedMeshRenderer_o *)local_78.fields._current ==
            (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar13 = UnityEngine_SkinnedMeshRenderer__get_bones
                            ((UnityEngine_SkinnedMeshRenderer_o *)local_78.fields._current,(MethodInfo *)0x0);
        if (pUVar13 == (UnityEngine_Transform_array *)0x0) {
          ThrowNullReferenceException();
        }
        if (0 < (int)pUVar13->max_length) {
          uVar14 = pUVar13->max_length & 0xffffffff;
          uVar17 = 0;
          pMVar15 = extraout_RDX;
          do {
            if (uVar14 <= uVar17) {
              ThrowIndexOutOfRangeException();
            }
            Characters_ShifterGrowthEffect__AddNode(__this,pUVar13->m_Items[uVar17],pMVar15);
            uVar17 = uVar17 + 1;
            uVar8 = (uint)pUVar13->max_length;
            uVar14 = (ulong)uVar8;
            pMVar15 = extraout_RDX_00;
          } while ((long)uVar17 < (long)(int)uVar8);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&local_78,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer_Dispose);
      pCVar4 = local_40;
      root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)local_40,(MethodInfo *)0x0);
      Characters_ShifterGrowthEffect__ComputeDistances(__this,root,method_01);
      Characters_ShifterGrowthEffect__AddLayers
                (__this,(System_Collections_Generic_List_SkinnedMeshRenderer__o *)method_00,method_02);
      if ((pCVar4->fields).EffectsEnabled != false) {
        Characters_ShifterGrowthEffect__CreateChunks(__this,method_00);
      }
      Characters_ShifterGrowthEffect__LateUpdate(__this,method_00);
    }
  }
  return;
}


// Characters.ShifterGrowthEffect$$AddNode
// il2cpp: void Characters_ShifterGrowthEffect__AddNode (Characters_ShifterGrowthEffect_o* __this, UnityEngine_Transform_o* bone, const MethodInfo* method);
// 0x5c19b40

void Characters_ShifterGrowthEffect__AddNode
               (Characters_ShifterGrowthEffect_o *__this,UnityEngine_Transform_o *bone,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__int__o *pSVar3;
  System_Collections_Generic_List_Transform__o *pSVar4;
  UnityEngine_Transform_array *pUVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  
  if (Il2CppMethodInitialized_0754772e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Transform_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754772e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)bone,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar7) {
    return;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields)._nodeIndices;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    bVar7 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                      (pSVar3,(Il2CppObject *)bone,
                       (MethodInfo_4A9D990 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Transform_int_ContainsKey);
    if (bVar7) {
      return;
    }
    pSVar4 = (__this->fields)._nodes;
    if ((pSVar4 != (System_Collections_Generic_List_Transform__o *)0x0) &&
       (pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields)._nodeIndices,
       pSVar3 != (System_Collections_Generic_Dictionary_object__int__o *)0x0)) {
      System_Collections_Generic_Dictionary_object__int___set_Item
                (pSVar3,(Il2CppObject *)bone,(pSVar4->fields)._size,
                 (MethodInfo_4A9D760 *)MethodInfo_System_Collections_Generic_Dictionary_Transform_int_set_Item
                );
      pMVar6 = MethodInfo_System_Collections_Generic_List_Transform_Add;
      pSVar4 = (__this->fields)._nodes;
      if (pSVar4 != (System_Collections_Generic_List_Transform__o *)0x0) {
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar5 = (pSVar4->fields)._items;
        if (pUVar5 != (UnityEngine_Transform_array *)0x0) {
          uVar2 = (pSVar4->fields)._size;
          if (uVar2 < (uint)pUVar5->max_length) {
            (pSVar4->fields)._size = uVar2 + 1;
            pUVar5->m_Items[(int)uVar2] = bone;
            Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2);
            return;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)bone,
                     (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$ComputeDistances
// il2cpp: void Characters_ShifterGrowthEffect__ComputeDistances (Characters_ShifterGrowthEffect_o* __this, UnityEngine_Transform_o* root, const MethodInfo* method);
// 0x5c19c90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c19ec2: jmp 0x5c1a2df
// asm:   0x5c1a0a2: jmp 0x5c1a040

void Characters_ShifterGrowthEffect__ComputeDistances
               (Characters_ShifterGrowthEffect_o *__this,UnityEngine_Transform_o *root,MethodInfo *method)

{
  System_Int32_array **targetAddress;
  System_Single_array **targetAddress_00;
  uint length;
  uint32_t uVar1;
  System_Collections_Generic_List_Transform__o *pSVar2;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_String_array *array;
  bool bVar3;
  int32_t iVar4;
  System_Int32_array *pSVar5;
  System_Single_array *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  System_String_o *value;
  Il2CppObject *pIVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint index;
  ulong uVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  float local_48;
  float fStack_44;
  
  if (Il2CppMethodInitialized_0754772f == '\0') {
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
    Il2CppMethodInitialized_0754772f = '\x01';
  }
  pSVar2 = (__this->fields)._nodes;
  if (pSVar2 == (System_Collections_Generic_List_Transform__o *)0x0) {
label_05c1a2df:
    ThrowNullReferenceException();
  }
  length = (pSVar2->fields)._size;
  uVar9 = (ulong)length;
  pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,length);
  targetAddress = &(__this->fields)._parents;
  (__this->fields)._parents = pSVar5;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pSVar6 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,length);
  targetAddress_00 = &(__this->fields)._distances;
  (__this->fields)._distances = pSVar6;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  if (0 < (int)length) {
    uVar10 = 0;
    do {
      pSVar5 = *targetAddress;
      if (pSVar5 == (System_Int32_array *)0x0) goto label_05c1a2df;
      if ((uint)pSVar5->max_length <= uVar10) goto label_05c1a2e4;
      pSVar5->m_Items[uVar10] = -1;
      pSVar2 = (__this->fields)._nodes;
      if (pSVar2 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_05c1a2df;
      pUVar7 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,(int32_t)uVar10,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Transform_get_Item)
      ;
      while( true ) {
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05c1a2df;
        pUVar7 = UnityEngine_Transform__get_parent(pUVar7,(MethodInfo *)0x0);
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
           (__this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields)._nodeIndices,
           __this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0)) goto label_05c1a2df;
        if ((uint)pSVar5->max_length <= uVar10) goto label_05c1a2e4;
        bVar3 = System_Collections_Generic_Dictionary_object__int___TryGetValue
                          (__this_00,(Il2CppObject *)pUVar7,pSVar5->m_Items + uVar10,
                           (MethodInfo_4A9F630 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Transform_int_TryGetValue);
        if (bVar3) break;
        pSVar5 = *targetAddress;
        if (pSVar5 == (System_Int32_array *)0x0) goto label_05c1a2df;
        if ((uint)pSVar5->max_length <= uVar10) goto label_05c1a2e4;
        pSVar5->m_Items[uVar10] = -1;
      }
      pSVar6 = *targetAddress_00;
      if ((TypeInfo_Characters_ShifterGrowthEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterGrowthEffect);
      }
      pSVar2 = (__this->fields)._nodes;
      if (pSVar2 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_05c1a2df;
      array = TypeInfo_Characters_ShifterGrowthEffect->static_fields->Origin;
      pUVar7 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,(int32_t)uVar10,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Transform_get_Item)
      ;
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05c1a2df;
      value = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
      iVar4 = System_Array__IndexOf_object_
                        ((System_Object_array *)array,(Il2CppObject *)value,
                         (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_string);
      fVar13 = 0.0;
      if (iVar4 < 0) {
        fVar13 = 3.4028235e+38;
      }
      if (pSVar6 == (System_Single_array *)0x0) goto label_05c1a2df;
      if ((uint)pSVar6->max_length <= uVar10) goto label_05c1a2e4;
      pSVar6->m_Items[uVar10] = fVar13;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
  }
  iVar4 = System_Array__IndexOf_float_
                    (*targetAddress_00,0.0,(MethodInfo_3602B60 *)MethodInfo_System_Array_IndexOf_float);
  if (iVar4 < 0) {
    pSVar6 = *targetAddress_00;
    if (pSVar6 == (System_Single_array *)0x0) goto label_05c1a2df;
    if ((int)pSVar6->max_length == 0) {
label_05c1a2e4:
      ThrowIndexOutOfRangeException();
    }
    pSVar6->m_Items[0] = 0.0;
  }
  pIVar8 = SZArrayNew(TypeInfo_bool_array,length);
  if (0 < (int)length) {
    if (pIVar8 == (Il2CppObject *)0x0) goto label_05c1a2df;
    uVar11 = 0;
    do {
      uVar12 = 0xffffffff;
      uVar10 = 0;
      do {
        if (*(uint *)&pIVar8[1].monitor == uVar10) goto label_05c1a2e4;
        if (*(char *)((long)&pIVar8[2].klass + uVar10) == '\0') {
          pSVar6 = *targetAddress_00;
          if (pSVar6 == (System_Single_array *)0x0) goto label_05c1a2df;
          if ((pSVar6->max_length & 0xffffffff) <= uVar10) goto label_05c1a2e4;
          if (pSVar6->m_Items[uVar10] < 3.4028235e+38) {
            if (-1 < (int)(uint)uVar12) {
              if ((uint)pSVar6->max_length <= (uint)uVar12) goto label_05c1a2e4;
              if (pSVar6->m_Items[uVar12] <= pSVar6->m_Items[uVar10]) goto label_05c1a040;
            }
            uVar12 = uVar10 & 0xffffffff;
          }
        }
label_05c1a040:
        uVar10 = uVar10 + 1;
      } while (uVar9 != uVar10);
      index = (uint)uVar12;
      if ((int)index < 0) {
        return;
      }
      if (*(uint *)&pIVar8[1].monitor <= index) goto label_05c1a2e4;
      *(undefined1 *)((long)&pIVar8[2].klass + uVar12) = 1;
      uVar10 = 0;
      do {
        pSVar5 = *targetAddress;
        if (pSVar5 == (System_Int32_array *)0x0) goto label_05c1a2df;
        if ((pSVar5->max_length & 0xffffffff) <= uVar10) goto label_05c1a2e4;
        if (pSVar5->m_Items[uVar10] == index) {
label_05c1a126:
          pSVar6 = *targetAddress_00;
          if (pSVar6 == (System_Single_array *)0x0) goto label_05c1a2df;
          if ((uint)pSVar6->max_length <= index) goto label_05c1a2e4;
          pSVar2 = (__this->fields)._nodes;
          if (pSVar2 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_05c1a2df;
          fVar13 = pSVar6->m_Items[uVar12];
          pUVar7 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_Transform_get_Item);
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05c1a2df;
          UVar15 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
          pSVar2 = (__this->fields)._nodes;
          if ((pSVar2 == (System_Collections_Generic_List_Transform__o *)0x0) ||
             (pUVar7 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar2,(int32_t)uVar10,
                                  (MethodInfo_395CF20 *)
                                  MethodInfo_System_Collections_Generic_List_Transform_get_Item),
             pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_05c1a2df;
          UVar16 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e7b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_0753e7b7 = '\x01';
            uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          else {
            uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          fVar14 = UVar15.fields.z - UVar16.fields.z;
          local_48 = UVar15.fields.x;
          fStack_44 = UVar15.fields.y;
          local_48 = local_48 - UVar16.fields.x;
          fStack_44 = fStack_44 - UVar16.fields.y;
          fVar14 = fVar14 * fVar14 + fStack_44 * fStack_44 + local_48 * local_48;
          if (fVar14 < 0.0) {
            fVar14 = sqrtf(fVar14);
          }
          else {
            fVar14 = SQRT(fVar14);
          }
          pSVar6 = *targetAddress_00;
          if (pSVar6 == (System_Single_array *)0x0) goto label_05c1a2df;
          if ((uint)pSVar6->max_length <= uVar10) goto label_05c1a2e4;
          fVar13 = fVar13 + fVar14;
          if (fVar13 < pSVar6->m_Items[uVar10]) {
            pSVar6->m_Items[uVar10] = fVar13;
          }
        }
        else {
          if ((uint)pSVar5->max_length <= index) goto label_05c1a2e4;
          if (uVar10 == (uint)pSVar5->m_Items[uVar12]) goto label_05c1a126;
        }
        uVar10 = uVar10 + 1;
      } while (uVar9 != uVar10);
      uVar11 = uVar11 + 1;
    } while (uVar11 != length);
  }
  return;
}


// Characters.ShifterGrowthEffect$$VertexDistance
// il2cpp: float Characters_ShifterGrowthEffect__VertexDistance (Characters_ShifterGrowthEffect_o* __this, UnityEngine_Vector3_o position, int32_t bone, const MethodInfo* method);
// 0x5c1b630
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c1b729: nop dword ptr [rax]

float Characters_ShifterGrowthEffect__VertexDistance
                (Characters_ShifterGrowthEffect_o *__this,UnityEngine_Vector3_o position,int32_t bone,
                MethodInfo *method)

{
  uint32_t uVar1;
  System_Int32_array *pSVar2;
  System_Single_array *pSVar3;
  UnityEngine_Transform_o *__this_00;
  ulong uVar4;
  System_Collections_Generic_List_Transform__o *__this_01;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  float fStack_48;
  float fStack_44;
  
  if (Il2CppMethodInitialized_07547730 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Transform_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_get_Item)
    ;
    Il2CppMethodInitialized_07547730 = '\x01';
  }
  __this_01 = (__this->fields)._nodes;
  if (__this_01 != (System_Collections_Generic_List_Transform__o *)0x0) {
    fStack_48 = position.fields.x;
    uVar4 = 0;
    fVar5 = 3.4028235e+38;
    do {
      if ((long)(__this_01->fields)._size <= (long)uVar4) {
        return fVar5;
      }
      if ((uint)bone == uVar4) {
label_05c1b730:
        pSVar3 = (__this->fields)._distances;
        if (pSVar3 == (System_Single_array *)0x0) break;
        if ((uint)pSVar3->max_length <= uVar4) {
label_05c1b83a:
          ThrowIndexOutOfRangeException();
        }
        fVar6 = pSVar3->m_Items[uVar4];
        if (fVar6 < 3.4028235e+38) {
          __this_00 = (UnityEngine_Transform_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,(int32_t)uVar4,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_Transform_get_Item);
          if (__this_00 == (UnityEngine_Transform_o *)0x0) break;
          UVar9 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e7b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_0753e7b7 = '\x01';
            uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          else {
            uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          fStack_44 = position.fields.y;
          fStack_44 = fStack_44 - UVar9.fields.y;
          fVar7 = position.fields.z - UVar9.fields.z;
          fVar8 = fStack_48 - UVar9.fields.x;
          fVar7 = fStack_44 * fStack_44 + fVar8 * fVar8 + fVar7 * fVar7;
          if (fVar7 < 0.0) {
            fVar7 = sqrtf(fVar7);
          }
          else {
            fVar7 = SQRT(fVar7);
          }
          fVar6 = fVar6 + fVar7;
          if (fVar6 <= fVar5) {
            fVar5 = fVar6;
          }
          __this_01 = (__this->fields)._nodes;
        }
      }
      else {
        pSVar2 = (__this->fields)._parents;
        if (pSVar2 == (System_Int32_array *)0x0) break;
        if ((pSVar2->max_length & 0xffffffff) <= uVar4) goto label_05c1b83a;
        if (pSVar2->m_Items[uVar4] == bone) goto label_05c1b730;
        if ((uint)pSVar2->max_length <= (uint)bone) goto label_05c1b83a;
        if (uVar4 == (uint)pSVar2->m_Items[bone]) goto label_05c1b730;
      }
      uVar4 = uVar4 + 1;
    } while (__this_01 != (System_Collections_Generic_List_Transform__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$Measure
// il2cpp: Characters_ShifterGrowthEffect_Measurement_o* Characters_ShifterGrowthEffect__Measure (Characters_ShifterGrowthEffect_o* __this, UnityEngine_Mesh_o* mesh, UnityEngine_Transform_array* bones, const MethodInfo* method);
// 0x5c1b840
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c1b92d: nop dword ptr [rax]
// asm:   0x5c1bbd1: mov rax, qword ptr [rsp + 0x18]
// asm:   0x5c1c262: jmp 0x5c1c2eb

Characters_ShifterGrowthEffect_Measurement_o *
Characters_ShifterGrowthEffect__Measure
          (Characters_ShifterGrowthEffect_o *__this,UnityEngine_Mesh_o *mesh,
          UnityEngine_Transform_array *bones,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int bone;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Matrix4x4_StaticFields *pUVar6;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Single_array *pSVar7;
  UnityEngine_Vector3_array *pUVar8;
  UnityEngine_BoneWeight_array *pUVar9;
  bool bVar10;
  uint uVar11;
  UnityEngine_Matrix4x4_array *pUVar12;
  Il2CppObject *pIVar13;
  UnityEngine_Vector3_array *pUVar14;
  UnityEngine_BoneWeight_array *pUVar15;
  Characters_ShifterGrowthEffect_Measurement_o *__this_01;
  long lVar16;
  int32_t iVar17;
  UnityEngine_BoneWeight_o *pUVar18;
  MethodInfo *method_00;
  Il2CppObject *pIVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
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
  UnityEngine_Vector3_o position;
  int32_t local_2cc;
  UnityEngine_Vector3_array *local_2c8;
  Il2CppObject *local_2c0;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  UnityEngine_BoneWeight_Fields local_2a8;
  Characters_ShifterGrowthEffect_o *local_288;
  Il2CppObject *local_280;
  Characters_ShifterGrowthEffect_Measurement_o *local_278;
  UnityEngine_BoneWeight_array *local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined1 local_208 [16];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  float local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [16];
  float local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [16];
  UnityEngine_Matrix4x4_o local_78;
  
  local_288 = __this;
  if (Il2CppMethodInitialized_07547731 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Transform_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Matrix4x4_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterGrowthEffect_Measurement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547731 = '\x01';
  }
  local_2cc = 0;
  local_2a8.m_BoneIndex0 = 0;
  local_2a8.m_BoneIndex1 = 0;
  local_2a8.m_BoneIndex2 = 0;
  local_2a8.m_BoneIndex3 = 0;
  local_2a8.m_Weight0 = 0.0;
  local_2a8.m_Weight1 = 0.0;
  local_2a8.m_Weight2 = 0.0;
  local_2a8.m_Weight3 = 0.0;
  if ((mesh != (UnityEngine_Mesh_o *)0x0) &&
     (local_2c8 = (UnityEngine_Vector3_array *)mesh,
     pUVar12 = UnityEngine_Mesh__get_bindposes(mesh,(MethodInfo *)0x0),
     bones != (UnityEngine_Transform_array *)0x0)) {
    pIVar13 = SZArrayNew(TypeInfo_UnityEngine_Matrix4x4_array,(uint32_t)bones->max_length);
    local_2c0 = SZArrayNew(TypeInfo_int_array,(uint32_t)bones->max_length);
    local_280 = pIVar13;
    if (0 < (int)bones->max_length) {
      uVar22 = bones->max_length & 0xffffffff;
      lVar20 = 0x14;
      uVar21 = 0;
      do {
        if (uVar22 <= uVar21) goto label_05c1c2fa;
        pUVar5 = bones->m_Items[uVar21];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar10 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar10) {
          if (Il2CppMethodInitialized_0754773d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Matrix4x4);
            Il2CppMethodInitialized_0754773d = '\x01';
          }
          pUVar6 = TypeInfo_UnityEngine_Matrix4x4->static_fields;
          fVar23 = (pUVar6->identityMatrix).fields.m00;
          fVar25 = (pUVar6->identityMatrix).fields.m10;
          fVar26 = (pUVar6->identityMatrix).fields.m20;
          fVar27 = (pUVar6->identityMatrix).fields.m30;
          fVar31 = (pUVar6->identityMatrix).fields.m01;
          fVar32 = (pUVar6->identityMatrix).fields.m11;
          fVar33 = (pUVar6->identityMatrix).fields.m21;
          fVar34 = (pUVar6->identityMatrix).fields.m31;
          fVar35 = (pUVar6->identityMatrix).fields.m02;
          fVar36 = (pUVar6->identityMatrix).fields.m12;
          fVar37 = (pUVar6->identityMatrix).fields.m22;
          fVar38 = (pUVar6->identityMatrix).fields.m32;
          fVar28 = (pUVar6->identityMatrix).fields.m03;
          fVar29 = (pUVar6->identityMatrix).fields.m13;
          fVar30 = (pUVar6->identityMatrix).fields.m23;
          fVar24 = (pUVar6->identityMatrix).fields.m33;
        }
        else {
          if ((uint)bones->max_length <= uVar21) goto label_05c1c2fa;
          if ((bones->m_Items[uVar21] == (UnityEngine_Transform_o *)0x0) ||
             (UnityEngine_Transform__get_localToWorldMatrix
                        (&local_78,bones->m_Items[uVar21],(MethodInfo *)0x0),
             pUVar12 == (UnityEngine_Matrix4x4_array *)0x0)) goto label_05c1c2eb;
          if ((uint)pUVar12->max_length <= uVar21) goto label_05c1c2fa;
          fVar24 = *(float *)((long)pUVar12->m_Items + lVar20 * 4 + -0x50);
          fVar2 = *(float *)((long)pUVar12->m_Items + lVar20 * 4 + -0x4c);
          fVar3 = *(float *)((long)pUVar12->m_Items + lVar20 * 4 + -0x48);
          fVar4 = *(float *)((long)pUVar12->m_Items + lVar20 * 4 + -0x44);
          fVar23 = fVar4 * local_78.fields.m03 +
                   fVar3 * local_78.fields.m02 + fVar2 * local_78.fields.m01 + fVar24 * local_78.fields.m00;
          fVar25 = fVar4 * local_78.fields.m13 +
                   fVar3 * local_78.fields.m12 + fVar2 * local_78.fields.m11 + fVar24 * local_78.fields.m10;
          fVar26 = fVar4 * local_78.fields.m23 +
                   fVar3 * local_78.fields.m22 + fVar2 * local_78.fields.m21 + fVar24 * local_78.fields.m20;
          fVar27 = fVar4 * local_78.fields.m33 +
                   fVar3 * local_78.fields.m32 + fVar2 * local_78.fields.m31 + fVar24 * local_78.fields.m30;
          fVar24 = *(float *)((long)(pUVar12->m_Items + -1) + lVar20 * 4);
          fVar2 = *(float *)((long)pUVar12->m_Items + lVar20 * 4 + -0x3c);
          fVar3 = *(float *)((long)pUVar12->m_Items + lVar20 * 4 + -0x38);
          fVar4 = *(float *)((long)pUVar12->m_Items + lVar20 * 4 + -0x34);
          fVar31 = fVar4 * local_78.fields.m03 +
                   fVar3 * local_78.fields.m02 + fVar2 * local_78.fields.m01 + fVar24 * local_78.fields.m00;
          fVar32 = fVar4 * local_78.fields.m13 +
                   fVar3 * local_78.fields.m12 + fVar2 * local_78.fields.m11 + fVar24 * local_78.fields.m10;
          fVar33 = fVar4 * local_78.fields.m23 +
                   fVar3 * local_78.fields.m22 + fVar2 * local_78.fields.m21 + fVar24 * local_78.fields.m20;
          fVar34 = fVar4 * local_78.fields.m33 +
                   fVar3 * local_78.fields.m32 + fVar2 * local_78.fields.m31 + fVar24 * local_78.fields.m30;
          fVar24 = *(float *)((long)pUVar12->m_Items + lVar20 * 4 + -0x30);
          fVar2 = *(float *)((long)pUVar12->m_Items + lVar20 * 4 + -0x2c);
          fVar3 = *(float *)((long)pUVar12->m_Items + lVar20 * 4 + -0x28);
          fVar4 = *(float *)((long)pUVar12->m_Items + lVar20 * 4 + -0x24);
          fVar35 = fVar4 * local_78.fields.m03 +
                   fVar3 * local_78.fields.m02 + fVar2 * local_78.fields.m01 + fVar24 * local_78.fields.m00;
          fVar36 = fVar4 * local_78.fields.m13 +
                   fVar3 * local_78.fields.m12 + fVar2 * local_78.fields.m11 + fVar24 * local_78.fields.m10;
          fVar37 = fVar4 * local_78.fields.m23 +
                   fVar3 * local_78.fields.m22 + fVar2 * local_78.fields.m21 + fVar24 * local_78.fields.m20;
          fVar38 = fVar4 * local_78.fields.m33 +
                   fVar3 * local_78.fields.m32 + fVar2 * local_78.fields.m31 + fVar24 * local_78.fields.m30;
          fVar24 = *(float *)((long)pUVar12->m_Items + lVar20 * 4 + -0x20);
          fVar2 = *(float *)((long)pUVar12->m_Items + lVar20 * 4 + -0x1c);
          fVar3 = *(float *)((long)pUVar12->m_Items + lVar20 * 4 + -0x18);
          fVar4 = *(float *)((long)pUVar12->m_Items + lVar20 * 4 + -0x14);
          fVar28 = fVar4 * local_78.fields.m03 +
                   fVar3 * local_78.fields.m02 + fVar2 * local_78.fields.m01 + fVar24 * local_78.fields.m00;
          fVar29 = fVar4 * local_78.fields.m13 +
                   fVar3 * local_78.fields.m12 + fVar2 * local_78.fields.m11 + fVar24 * local_78.fields.m10;
          fVar30 = fVar4 * local_78.fields.m23 +
                   fVar3 * local_78.fields.m22 + fVar2 * local_78.fields.m21 + fVar24 * local_78.fields.m20;
          fVar24 = fVar4 * local_78.fields.m33 +
                   fVar3 * local_78.fields.m32 + fVar2 * local_78.fields.m31 + fVar24 * local_78.fields.m30;
        }
        if (pIVar13 == (Il2CppObject *)0x0) goto label_05c1c2eb;
        if (*(uint *)&pIVar13[1].monitor <= uVar21) goto label_05c1c2fa;
        pfVar1 = (float *)((long)&pIVar13[-3].klass + lVar20 * 4);
        *pfVar1 = fVar23;
        pfVar1[1] = fVar25;
        pfVar1[2] = fVar26;
        pfVar1[3] = fVar27;
        pfVar1 = (float *)((long)&pIVar13[-2].klass + lVar20 * 4);
        *pfVar1 = fVar31;
        pfVar1[1] = fVar32;
        pfVar1[2] = fVar33;
        pfVar1[3] = fVar34;
        pfVar1 = (float *)((long)&pIVar13[-1].klass + lVar20 * 4);
        *pfVar1 = fVar35;
        pfVar1[1] = fVar36;
        pfVar1[2] = fVar37;
        pfVar1[3] = fVar38;
        pfVar1 = (float *)((long)&pIVar13->klass + lVar20 * 4);
        *pfVar1 = fVar28;
        pfVar1[1] = fVar29;
        pfVar1[2] = fVar30;
        pfVar1[3] = fVar24;
        if ((uint)bones->max_length <= uVar21) goto label_05c1c2fa;
        pUVar5 = bones->m_Items[uVar21];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar10 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pIVar13 = local_280;
        iVar17 = -1;
        if (bVar10) {
          if ((uint)bones->max_length <= uVar21) goto label_05c1c2fa;
          __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(local_288->fields)._nodeIndices
          ;
          if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto label_05c1c2eb;
          bVar10 = System_Collections_Generic_Dictionary_object__int___TryGetValue
                             (__this_00,(Il2CppObject *)bones->m_Items[uVar21],&local_2cc,
                              (MethodInfo_4A9F630 *)
                              MethodInfo_System_Collections_Generic_Dictionary_Transform_int_TryGetValue);
          iVar17 = -1;
          if (bVar10) {
            iVar17 = local_2cc;
          }
        }
        if (local_2c0 == (Il2CppObject *)0x0) goto label_05c1c2eb;
        if (*(uint *)&local_2c0[1].monitor <= (uint)uVar21) goto label_05c1c2fa;
        *(int32_t *)((long)&local_2c0[2].klass + uVar21 * 4) = iVar17;
        uVar21 = uVar21 + 1;
        uVar11 = (uint)bones->max_length;
        uVar22 = (ulong)uVar11;
        lVar20 = lVar20 + 0x10;
      } while ((long)uVar21 < (long)(int)uVar11);
    }
    pUVar8 = local_2c8;
    pUVar14 = UnityEngine_Mesh__get_vertices((UnityEngine_Mesh_o *)local_2c8,(MethodInfo *)0x0);
    pUVar15 = UnityEngine_Mesh__get_boneWeights((UnityEngine_Mesh_o *)pUVar8,(MethodInfo *)0x0);
    if (pUVar14 != (UnityEngine_Vector3_array *)0x0) {
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Characters_ShifterGrowthEffect_Measurement);
      Characters_ShifterGrowthEffect_Measurement___ctor
                (__this_01,(int32_t)pUVar14->max_length,(MethodInfo *)0x0);
      if ((int)pUVar14->max_length < 1) {
        return __this_01;
      }
      if (pUVar15 != (UnityEngine_BoneWeight_array *)0x0) {
        if (__this_01 == (Characters_ShifterGrowthEffect_Measurement_o *)0x0) {
          if ((int)pUVar15->max_length != 0) goto label_05c1c2eb;
        }
        else if (pIVar13 == (Il2CppObject *)0x0) {
          if ((int)pUVar15->max_length != 0) {
            local_2a8.m_Weight0 = pUVar15->m_Items[0].fields.m_Weight0;
            local_2a8.m_Weight1 = pUVar15->m_Items[0].fields.m_Weight1;
            local_2a8.m_Weight2 = pUVar15->m_Items[0].fields.m_Weight2;
            local_2a8.m_Weight3 = pUVar15->m_Items[0].fields.m_Weight3;
            local_2a8.m_BoneIndex0 = pUVar15->m_Items[0].fields.m_BoneIndex0;
            local_2a8.m_BoneIndex1 = pUVar15->m_Items[0].fields.m_BoneIndex1;
            local_2a8.m_BoneIndex2 = pUVar15->m_Items[0].fields.m_BoneIndex2;
            local_2a8.m_BoneIndex3 = pUVar15->m_Items[0].fields.m_BoneIndex3;
            UnityEngine_BoneWeight__get_boneIndex0((UnityEngine_BoneWeight_o *)&local_2a8,(MethodInfo *)0x0);
            ThrowNullReferenceException();
          }
        }
        else {
          lVar20 = 10;
          uVar22 = 0;
          pIVar19 = pIVar13;
          pUVar9 = pUVar15;
          local_278 = __this_01;
          while (pUVar18 = pUVar9->m_Items, uVar22 < (uint)pUVar15->max_length) {
            local_2a8.m_Weight0 = (pUVar18->fields).m_Weight0;
            local_2a8.m_Weight1 = (pUVar18->fields).m_Weight1;
            local_2a8.m_Weight2 = pUVar9->m_Items[0].fields.m_Weight2;
            local_2a8.m_Weight3 = pUVar9->m_Items[0].fields.m_Weight3;
            local_2a8.m_BoneIndex0 = pUVar9->m_Items[0].fields.m_BoneIndex0;
            local_2a8.m_BoneIndex1 = pUVar9->m_Items[0].fields.m_BoneIndex1;
            local_2a8.m_BoneIndex2 = pUVar9->m_Items[0].fields.m_BoneIndex2;
            local_2a8.m_BoneIndex3 = pUVar9->m_Items[0].fields.m_BoneIndex3;
            local_2c8 = (__this_01->fields).Positions;
            local_270 = (UnityEngine_BoneWeight_array *)pUVar18;
            uVar11 = UnityEngine_BoneWeight__get_boneIndex0
                               ((UnityEngine_BoneWeight_o *)&local_2a8,(MethodInfo *)0x0);
            if (((uint)pUVar14->max_length <= uVar22) || (*(uint *)&pIVar19[1].monitor <= uVar11)) break;
            lVar16 = (long)(int)uVar11;
            fVar24 = *(float *)((long)pUVar14->m_Items + lVar20 * 4 + -0x20);
            local_b8 = *(undefined8 *)((long)pUVar14->m_Items + lVar20 * 4 + -0x28);
            local_98 = (float)((ulong)local_b8 >> 0x20);
            local_e8 = pIVar13[lVar16 * 4 + 2].klass;
            uStack_e0 = 0;
            local_d8 = pIVar13[lVar16 * 4 + 3].klass;
            uStack_d0 = 0;
            local_c8 = pIVar13[lVar16 * 4 + 4].klass;
            uStack_c0 = 0;
            local_a8 = pIVar13[lVar16 * 4 + 5].klass;
            uStack_a0 = 0;
            uStack_b0 = 0;
            local_88 = ZEXT416((uint)fVar24);
            local_2ac = *(float *)&pIVar13[lVar16 * 4 + 4].monitor * fVar24 +
                        *(float *)&pIVar13[lVar16 * 4 + 3].monitor * local_98 +
                        *(float *)&pIVar13[lVar16 * 4 + 2].monitor * (float)local_b8 +
                        *(float *)&pIVar13[lVar16 * 4 + 5].monitor;
            fStack_94 = local_98;
            fStack_90 = local_98;
            fStack_8c = local_98;
            local_f8 = UnityEngine_BoneWeight__get_weight0
                                 ((UnityEngine_BoneWeight_o *)&local_2a8,(MethodInfo *)0x0);
            uVar11 = UnityEngine_BoneWeight__get_boneIndex1
                               ((UnityEngine_BoneWeight_o *)&local_2a8,(MethodInfo *)0x0);
            if (((uint)pUVar14->max_length <= uVar22) || (*(uint *)&pIVar19[1].monitor <= uVar11)) break;
            lVar16 = (long)(int)uVar11;
            fVar24 = *(float *)((long)pUVar14->m_Items + lVar20 * 4 + -0x20);
            local_128 = *(undefined8 *)((long)pUVar14->m_Items + lVar20 * 4 + -0x28);
            local_118 = (float)((ulong)local_128 >> 0x20);
            uStack_120 = 0;
            local_108 = ZEXT416((uint)fVar24);
            local_2b0 = *(float *)&pIVar13[lVar16 * 4 + 4].monitor * fVar24 +
                        *(float *)&pIVar13[lVar16 * 4 + 3].monitor * local_118 +
                        *(float *)&pIVar13[lVar16 * 4 + 2].monitor * (float)local_128 +
                        *(float *)&pIVar13[lVar16 * 4 + 5].monitor;
            local_178 = pIVar13[lVar16 * 4 + 2].klass;
            uStack_170 = 0;
            local_168 = pIVar13[lVar16 * 4 + 3].klass;
            uStack_160 = 0;
            local_158 = pIVar13[lVar16 * 4 + 4].klass;
            uStack_150 = 0;
            local_138 = pIVar13[lVar16 * 4 + 5].klass;
            uStack_130 = 0;
            fStack_114 = local_118;
            fStack_110 = local_118;
            fStack_10c = local_118;
            local_148 = UnityEngine_BoneWeight__get_weight1
                                  ((UnityEngine_BoneWeight_o *)&local_2a8,(MethodInfo *)0x0);
            uVar11 = UnityEngine_BoneWeight__get_boneIndex2
                               ((UnityEngine_BoneWeight_o *)&local_2a8,(MethodInfo *)0x0);
            if (((uint)pUVar14->max_length <= uVar22) || (*(uint *)&pIVar19[1].monitor <= uVar11)) break;
            lVar16 = (long)(int)uVar11;
            fVar24 = *(float *)((long)pUVar14->m_Items + lVar20 * 4 + -0x20);
            local_1a8 = *(undefined8 *)((long)pUVar14->m_Items + lVar20 * 4 + -0x28);
            local_198 = (float)((ulong)local_1a8 >> 0x20);
            uStack_1a0 = 0;
            local_188 = ZEXT416((uint)fVar24);
            local_2b4 = *(float *)&pIVar13[lVar16 * 4 + 4].monitor * fVar24 +
                        *(float *)&pIVar13[lVar16 * 4 + 3].monitor * local_198 +
                        *(float *)&pIVar13[lVar16 * 4 + 2].monitor * (float)local_1a8 +
                        *(float *)&pIVar13[lVar16 * 4 + 5].monitor;
            local_1f8 = pIVar13[lVar16 * 4 + 2].klass;
            uStack_1f0 = 0;
            local_1e8 = pIVar13[lVar16 * 4 + 3].klass;
            uStack_1e0 = 0;
            local_1d8 = pIVar13[lVar16 * 4 + 4].klass;
            uStack_1d0 = 0;
            local_1b8 = pIVar13[lVar16 * 4 + 5].klass;
            uStack_1b0 = 0;
            fStack_194 = local_198;
            fStack_190 = local_198;
            fStack_18c = local_198;
            local_1c8 = UnityEngine_BoneWeight__get_weight2
                                  ((UnityEngine_BoneWeight_o *)&local_2a8,(MethodInfo *)0x0);
            uVar11 = UnityEngine_BoneWeight__get_boneIndex3
                               ((UnityEngine_BoneWeight_o *)&local_2a8,(MethodInfo *)0x0);
            if (((uint)pUVar14->max_length <= uVar22) || (*(uint *)&pIVar19[1].monitor <= uVar11)) break;
            lVar16 = (long)(int)uVar11;
            fVar24 = *(float *)((long)pUVar14->m_Items + lVar20 * 4 + -0x20);
            local_228 = *(undefined8 *)((long)pUVar14->m_Items + lVar20 * 4 + -0x28);
            local_218 = (float)((ulong)local_228 >> 0x20);
            uStack_220 = 0;
            local_208 = ZEXT416((uint)fVar24);
            local_2b8 = *(float *)&pIVar13[lVar16 * 4 + 4].monitor * fVar24 +
                        *(float *)&pIVar13[lVar16 * 4 + 3].monitor * local_218 +
                        *(float *)&pIVar13[lVar16 * 4 + 2].monitor * (float)local_228 +
                        *(float *)&pIVar13[lVar16 * 4 + 5].monitor;
            local_268 = pIVar13[lVar16 * 4 + 2].klass;
            uStack_260 = 0;
            local_258 = pIVar13[lVar16 * 4 + 3].klass;
            uStack_250 = 0;
            local_248 = pIVar13[lVar16 * 4 + 4].klass;
            uStack_240 = 0;
            local_238 = pIVar13[lVar16 * 4 + 5].klass;
            uStack_230 = 0;
            fStack_214 = local_218;
            fStack_210 = local_218;
            fStack_20c = local_218;
            fVar24 = UnityEngine_BoneWeight__get_weight3
                               ((UnityEngine_BoneWeight_o *)&local_2a8,(MethodInfo *)0x0);
            if (local_2c8 == (UnityEngine_Vector3_array *)0x0) goto label_05c1c2eb;
            if ((uint)local_2c8->max_length <= uVar22) break;
            *(ulong *)((long)local_2c8->m_Items + lVar20 * 4 + -0x28) =
                 CONCAT44(fVar24 * (local_238._4_4_ +
                                   (float)local_208._0_4_ * local_248._4_4_ +
                                   fStack_214 * local_258._4_4_ + (float)local_228 * local_268._4_4_) +
                          local_1c8 *
                          (local_1b8._4_4_ +
                          (float)local_188._0_4_ * local_1d8._4_4_ +
                          fStack_194 * local_1e8._4_4_ + (float)local_1a8 * local_1f8._4_4_) +
                          local_148 *
                          (local_138._4_4_ +
                          (float)local_108._0_4_ * local_158._4_4_ +
                          fStack_114 * local_168._4_4_ + (float)local_128 * local_178._4_4_) +
                          local_f8 *
                          (local_a8._4_4_ +
                          (float)local_88._0_4_ * local_c8._4_4_ +
                          fStack_94 * local_d8._4_4_ + (float)local_b8 * local_e8._4_4_),
                          fVar24 * ((float)local_238 +
                                   (float)local_208._0_4_ * (float)local_248 +
                                   local_218 * (float)local_258 + (float)local_228 * (float)local_268) +
                          local_1c8 *
                          ((float)local_1b8 +
                          (float)local_188._0_4_ * (float)local_1d8 +
                          local_198 * (float)local_1e8 + (float)local_1a8 * (float)local_1f8) +
                          local_148 *
                          ((float)local_138 +
                          (float)local_108._0_4_ * (float)local_158 +
                          local_118 * (float)local_168 + (float)local_128 * (float)local_178) +
                          local_f8 *
                          ((float)local_a8 +
                          (float)local_88._0_4_ * (float)local_c8 +
                          local_98 * (float)local_d8 + (float)local_b8 * (float)local_e8));
            *(float *)((long)&(local_2c8->obj).klass + lVar20 * 4) =
                 local_2b8 * fVar24 + local_2b4 * local_1c8 + local_2b0 * local_148 + local_2ac * local_f8;
            uVar11 = UnityEngine_BoneWeight__get_boneIndex0
                               ((UnityEngine_BoneWeight_o *)&local_2a8,(MethodInfo *)0x0);
            __this_01 = local_278;
            if (local_2c0 == (Il2CppObject *)0x0) goto label_05c1c2eb;
            if (*(uint *)&local_2c0[1].monitor <= uVar11) break;
            bone = *(int *)((long)&local_2c0[2].klass + (long)(int)uVar11 * 4);
            pSVar7 = (local_278->fields).Distances;
            if (bone < 0) {
              fVar24 = 0.0;
              pIVar19 = local_280;
              pUVar9 = local_270;
            }
            else {
              pUVar8 = (local_278->fields).Positions;
              if (pUVar8 == (UnityEngine_Vector3_array *)0x0) goto label_05c1c2eb;
              if ((uint)pUVar8->max_length <= uVar22) break;
              position.fields.z = *(float *)((long)pUVar8->m_Items + lVar20 * 4 + -0x20);
              position.fields._0_8_ = *(undefined8 *)((long)pUVar8->m_Items + lVar20 * 4 + -0x28);
              fVar24 = Characters_ShifterGrowthEffect__VertexDistance(local_288,position,bone,method_00);
              pIVar19 = local_280;
              pUVar9 = local_270;
            }
            local_280 = pIVar19;
            local_270 = pUVar9;
            if (pSVar7 == (System_Single_array *)0x0) goto label_05c1c2eb;
            if ((uint)pSVar7->max_length <= uVar22) break;
            pSVar7->m_Items[uVar22] = fVar24;
            pSVar7 = (__this_01->fields).Distances;
            if (pSVar7 == (System_Single_array *)0x0) goto label_05c1c2eb;
            if ((uint)pSVar7->max_length <= uVar22) break;
            fVar24 = (__this_01->fields).Maximum;
            if (fVar24 <= pSVar7->m_Items[uVar22]) {
              fVar24 = pSVar7->m_Items[uVar22];
            }
            (__this_01->fields).Maximum = fVar24;
            uVar22 = uVar22 + 1;
            lVar20 = lVar20 + 3;
            if ((long)(int)pUVar14->max_length <= (long)uVar22) {
              return __this_01;
            }
          }
        }
label_05c1c2fa:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_05c1c2eb:
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$SetGrowthCoordinates
// il2cpp: void Characters_ShifterGrowthEffect__SetGrowthCoordinates (Characters_ShifterGrowthEffect_o* __this, UnityEngine_Mesh_o* mesh, Characters_ShifterGrowthEffect_Measurement_o* measurement, float maximum, const MethodInfo* method);
// 0x5c1c330
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c1c44e: nop 
// asm:   0x5c1c621: jmp 0x5c1c637

void Characters_ShifterGrowthEffect__SetGrowthCoordinates
               (Characters_ShifterGrowthEffect_o *__this,UnityEngine_Mesh_o *mesh,
               Characters_ShifterGrowthEffect_Measurement_o *measurement,float maximum,MethodInfo *method)

{
  undefined8 uVar1;
  Characters_BaseShifter_o *__this_00;
  UnityEngine_Renderer_o *__this_01;
  System_Single_array *pSVar2;
  ulong uVar3;
  UnityEngine_Vector3_array *pUVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_Fields UVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Vector2_array *value;
  UnityEngine_Vector2_array *value_00;
  uint32_t length;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  float local_d8;
  float fStack_d4;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  float local_68;
  float fStack_64;
  UnityEngine_Bounds_o local_48;
  
  if (Il2CppMethodInitialized_07547732 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2_array);
    Il2CppMethodInitialized_07547732 = '\x01';
  }
  __this_00 = (__this->fields)._shifter;
  if (__this_00 != (Characters_BaseShifter_o *)0x0) {
    __this_02 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    __this_01 = (UnityEngine_Renderer_o *)(__this->fields)._body;
    if (((__this_01 != (UnityEngine_Renderer_o *)0x0) &&
        (UnityEngine_Renderer__get_bounds(&local_48,__this_01,(MethodInfo *)0x0),
        measurement != (Characters_ShifterGrowthEffect_Measurement_o *)0x0)) &&
       (pSVar2 = (measurement->fields).Distances, pSVar2 != (System_Single_array *)0x0)) {
      uVar3 = pSVar2->max_length;
      length = (uint32_t)uVar3;
      value = (UnityEngine_Vector2_array *)SZArrayNew(TypeInfo_UnityEngine_Vector2_array,length);
      value_00 = (UnityEngine_Vector2_array *)SZArrayNew(TypeInfo_UnityEngine_Vector2_array,length);
      if (0 < (int)length) {
        if (value == (UnityEngine_Vector2_array *)0x0) {
          pUVar4 = (measurement->fields).Positions;
          if ((pUVar4 != (UnityEngine_Vector3_array *)0x0) &&
             (((int)pUVar4->max_length == 0 ||
              ((pSVar2 = (measurement->fields).Distances, pSVar2 != (System_Single_array *)0x0 &&
               ((int)pSVar2->max_length == 0)))))) goto label_05c1c637;
          goto label_05c1c62c;
        }
        if (__this_02 == (UnityEngine_Transform_o *)0x0) {
          pUVar4 = (measurement->fields).Positions;
          if (pUVar4 != (UnityEngine_Vector3_array *)0x0) {
            if ((int)pUVar4->max_length != 0) {
              pSVar2 = (measurement->fields).Distances;
              if (pSVar2 == (System_Single_array *)0x0) goto label_05c1c62c;
              if (((int)pSVar2->max_length != 0) && ((int)value->max_length != 0)) {
                UVar6.y = 0.0;
                UVar6.x = pSVar2->m_Items[0] / maximum;
                value->m_Items[0].fields = UVar6;
                ThrowNullReferenceException();
              }
            }
label_05c1c637:
            ThrowIndexOutOfRangeException();
          }
          goto label_05c1c62c;
        }
        fVar10 = 3.0 / maximum;
        local_d8 = local_48.fields.m_Center.fields.x;
        fStack_d4 = local_48.fields.m_Center.fields.y;
        lVar9 = 10;
        uVar8 = 0;
        do {
          pUVar4 = (measurement->fields).Positions;
          if (pUVar4 == (UnityEngine_Vector3_array *)0x0) goto label_05c1c62c;
          if ((uint)pUVar4->max_length <= uVar8) goto label_05c1c637;
          pSVar2 = (measurement->fields).Distances;
          if (pSVar2 == (System_Single_array *)0x0) goto label_05c1c62c;
          if (((uint)pSVar2->max_length <= uVar8) || ((uint)value->max_length <= uVar8)) goto label_05c1c637;
          uVar1 = *(undefined8 *)((long)pUVar4->m_Items + lVar9 * 4 + -0x28);
          fVar11 = *(float *)((long)pUVar4->m_Items + lVar9 * 4 + -0x20);
          UVar5.fields.y = 0.0;
          UVar5.fields.x = pSVar2->m_Items[uVar8] / maximum;
          value->m_Items[uVar8].fields = UVar5.fields;
          UVar14 = UnityEngine_Transform__get_right(__this_02,(MethodInfo *)0x0);
          UVar15 = UnityEngine_Transform__get_forward(__this_02,(MethodInfo *)0x0);
          UVar16 = UnityEngine_Transform__get_up(__this_02,(MethodInfo *)0x0);
          if (value_00 == (UnityEngine_Vector2_array *)0x0) goto label_05c1c62c;
          if ((uint)value_00->max_length <= uVar8) goto label_05c1c637;
          local_68 = (float)uVar1;
          fStack_64 = (float)((ulong)uVar1 >> 0x20);
          fVar11 = (fVar11 - local_48.fields.m_Center.fields.z) * fVar10;
          fVar12 = (local_68 - local_d8) * fVar10;
          fVar13 = (fStack_64 - fStack_d4) * fVar10;
          local_a8 = UVar14.fields.x;
          fStack_a4 = UVar14.fields.y;
          local_98 = UVar15.fields.x;
          fStack_94 = UVar15.fields.y;
          UVar7.fields.y = UVar16.fields.z * fVar11 + UVar16.fields.y * fVar13 + UVar16.fields.x * fVar12;
          UVar7.fields.x =
               (local_98 * fVar12 + fStack_94 * fVar13 + UVar15.fields.z * fVar11) * 0.6 +
               fVar13 * fStack_a4 + fVar12 * local_a8 + UVar14.fields.z * fVar11;
          value_00->m_Items[uVar8].fields = UVar7.fields;
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 3;
        } while ((uVar3 & 0xffffffff) != uVar8);
      }
      if (mesh != (UnityEngine_Mesh_o *)0x0) {
        UnityEngine_Mesh__set_uv2(mesh,value,(MethodInfo *)0x0);
        UnityEngine_Mesh__set_uv3(mesh,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05c1c62c:
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$AddLayers
// il2cpp: void Characters_ShifterGrowthEffect__AddLayers (Characters_ShifterGrowthEffect_o* __this, System_Collections_Generic_List_SkinnedMeshRenderer__o* renderers, const MethodInfo* method);
// 0x5c1a2f0

void Characters_ShifterGrowthEffect__AddLayers
               (Characters_ShifterGrowthEffect_o *__this,
               System_Collections_Generic_List_SkinnedMeshRenderer__o *renderers,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  System_Collections_Generic_List_Object__o *__this_00;
  UnityEngine_Object_array *pUVar5;
  Il2CppObject *pIVar6;
  MethodInfo *method_00;
  UnityEngine_SkinnedMeshRenderer_o *pUVar7;
  UnityEngine_Mesh_o *pUVar8;
  Il2CppClass *pIVar9;
  UnityEngine_Object_o *__this_01;
  System_String_o *pSVar10;
  UnityEngine_Transform_array *bones;
  MethodInfo *pMVar11;
  Il2CppObject *targetAddress;
  uint index;
  Il2CppClass **targetAddress_00;
  float local_44;
  
  if (Il2CppMethodInitialized_07547733 == '\0') {
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
    Il2CppMethodInitialized_07547733 = '\x01';
  }
  if (renderers == (System_Collections_Generic_List_SkinnedMeshRenderer__o *)0x0) {
label_05c1a6a5:
    ThrowNullReferenceException();
  }
  pIVar6 = SZArrayNew(TypeInfo_UnityEngine_Mesh_array,(renderers->fields)._size);
  method_00 = (MethodInfo *)
              SZArrayNew(TypeInfo_Characters_ShifterGrowthEffect_Measurement_array,(renderers->fields)._size);
  if (0 < (renderers->fields)._size) {
    if (pIVar6 == (Il2CppObject *)0x0) {
      pUVar7 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)renderers,0,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_get_Item);
      if (pUVar7 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
        pUVar8 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(pUVar7,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Instantiate_object__35a4190
                  ((Il2CppObject *)pUVar8,(MethodInfo_35A4190 *)MethodInfo_UnityEngine_Object_Instantiate_Mesh
                  );
        ThrowNullReferenceException();
      }
      goto label_05c1a6a5;
    }
    targetAddress = pIVar6 + 2;
    targetAddress_00 = &method_00->klass;
    index = 0;
    local_44 = 0.0001;
    do {
      pUVar7 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)renderers,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_get_Item);
      if (pUVar7 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) goto label_05c1a6a5;
      pUVar8 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(pUVar7,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pIVar9 = (Il2CppClass *)
               UnityEngine_Object__Instantiate_object__35a4190
                         ((Il2CppObject *)pUVar8,
                          (MethodInfo_35A4190 *)MethodInfo_UnityEngine_Object_Instantiate_Mesh);
      if (*(uint *)&pIVar6[1].monitor <= index) goto label_05c1a687;
      targetAddress->klass = pIVar9;
      Il2CppCodeGenWriteBarrier(&targetAddress->klass);
      if (*(uint *)&pIVar6[1].monitor <= index) goto label_05c1a687;
      pIVar9 = targetAddress->klass;
      pUVar7 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)renderers,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_get_Item);
      if (pUVar7 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) goto label_05c1a6a5;
      __this_01 = (UnityEngine_Object_o *)
                  UnityEngine_SkinnedMeshRenderer__get_sharedMesh(pUVar7,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Object_o *)0x0) goto label_05c1a6a5;
      pSVar10 = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      pSVar10 = System_String__Concat_52f0320(pSVar10," growth",(MethodInfo *)0x0);
      if (pIVar9 == (Il2CppClass *)0x0) goto label_05c1a6a5;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)pIVar9,pSVar10,(MethodInfo *)0x0);
      pMVar11 = MethodInfo_System_Collections_Generic_List_Object_Add;
      if (*(uint *)&pIVar6[1].monitor <= index) goto label_05c1a687;
      __this_00 = (__this->fields)._created;
      if (__this_00 == (System_Collections_Generic_List_Object__o *)0x0) goto label_05c1a6a5;
      pIVar9 = targetAddress->klass;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar5 = (__this_00->fields)._items;
      if (pUVar5 == (UnityEngine_Object_array *)0x0) goto label_05c1a6a5;
      uVar3 = (__this_00->fields)._size;
      if (uVar3 < (uint)pUVar5->max_length) {
        pMVar11 = (MethodInfo *)(ulong)(uVar3 + 1);
        (__this_00->fields)._size = uVar3 + 1;
        pUVar5->m_Items[(int)uVar3] = (UnityEngine_Object_o *)pIVar9;
        Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar3);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pIVar9,
                   (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
      }
      if (*(uint *)&pIVar6[1].monitor <= index) goto label_05c1a687;
      pIVar9 = targetAddress->klass;
      pUVar7 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)renderers,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_get_Item);
      if (pUVar7 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) goto label_05c1a6a5;
      bones = UnityEngine_SkinnedMeshRenderer__get_bones(pUVar7,(MethodInfo *)0x0);
      pIVar9 = (Il2CppClass *)
               Characters_ShifterGrowthEffect__Measure(__this,(UnityEngine_Mesh_o *)pIVar9,bones,pMVar11);
      if (method_00 == (MethodInfo *)0x0) goto label_05c1a6a5;
      if (*(uint *)&method_00->name <= index) goto label_05c1a687;
      *targetAddress_00 = pIVar9;
      Il2CppCodeGenWriteBarrier(targetAddress_00);
      if (*(uint *)&method_00->name <= index) goto label_05c1a687;
      if (*targetAddress_00 == (Il2CppClass *)0x0) goto label_05c1a6a5;
      fVar2 = *(float *)&((*targetAddress_00)->_1).byval_arg.data;
      if (local_44 <= fVar2) {
        local_44 = fVar2;
      }
      index = index + 1;
      iVar4 = (renderers->fields)._size;
      targetAddress_00 = targetAddress_00 + 1;
      targetAddress = (Il2CppObject *)&targetAddress->monitor;
    } while ((int)index < iVar4);
    if (0 < iVar4) {
      pMVar11 = (MethodInfo *)0x0;
      do {
        if (((MethodInfo *)(ulong)*(uint *)&pIVar6[1].monitor <= pMVar11) ||
           ((MethodInfo *)(ulong)*(uint *)&method_00->name <= pMVar11)) {
label_05c1a687:
          ThrowIndexOutOfRangeException();
        }
        Characters_ShifterGrowthEffect__SetGrowthCoordinates
                  (__this,(UnityEngine_Mesh_o *)(&pIVar6[2].klass)[(long)pMVar11],
                   (Characters_ShifterGrowthEffect_Measurement_o *)(&method_00->klass)[(long)pMVar11],local_44
                   ,method_00);
        pUVar7 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)renderers,(int32_t)pMVar11,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_SkinnedMeshRenderer_get_Item);
        if ((MethodInfo *)(ulong)*(uint *)&pIVar6[1].monitor <= pMVar11) goto label_05c1a687;
        Characters_ShifterGrowthEffect__AddLayer
                  (__this,pUVar7,(UnityEngine_Mesh_o *)(&pIVar6[2].klass)[(long)pMVar11],
                   (MethodInfo *)(ulong)*(uint *)&pIVar6[1].monitor);
        pMVar11 = (MethodInfo *)((long)&pMVar11->methodPointer + 1);
      } while ((long)pMVar11 < (long)(renderers->fields)._size);
    }
  }
  return;
}


// Characters.ShifterGrowthEffect$$AddLayer
// il2cpp: void Characters_ShifterGrowthEffect__AddLayer (Characters_ShifterGrowthEffect_o* __this, UnityEngine_SkinnedMeshRenderer_o* renderer, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
// 0x5c1c670

void Characters_ShifterGrowthEffect__AddLayer
               (Characters_ShifterGrowthEffect_o *__this,UnityEngine_SkinnedMeshRenderer_o *renderer,
               UnityEngine_Mesh_o *mesh,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Shader_array *pUVar4;
  System_Collections_Generic_List_Object__o *__this_00;
  UnityEngine_Object_array *pUVar5;
  System_Collections_Generic_List_ShifterGrowthEffect_Layer__o *__this_01;
  Characters_ShifterGrowthEffect_Layer_array *pCVar6;
  MethodInfo *pMVar7;
  bool bVar8;
  UnityEngine_Mesh_o *originalMesh;
  UnityEngine_Material_array *pUVar9;
  Characters_ShifterGrowthEffect_Layer_o *__this_02;
  UnityEngine_Shader_o *pUVar10;
  UnityEngine_Material_o *__this_03;
  System_String_o *pSVar11;
  Il2CppObject *pIVar12;
  ulong uVar13;
  
  if (Il2CppMethodInitialized_07547734 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterGrowthEffect_Layer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ShifterGrowthEffect_Layer_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&" growth");
    Il2CppMethodInitialized_07547734 = '\x01';
  }
  if (renderer != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
    originalMesh = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(renderer,(MethodInfo *)0x0);
    pUVar9 = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)renderer,(MethodInfo *)0x0);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_ShifterGrowthEffect_Layer);
    Characters_ShifterGrowthEffect_Layer___ctor(__this_02,renderer,originalMesh,pUVar9,(MethodInfo *)0x0);
    if ((__this_02 != (Characters_ShifterGrowthEffect_Layer_o *)0x0) &&
       (pUVar9 = (__this_02->fields).GrowthMaterials, pUVar9 != (UnityEngine_Material_array *)0x0)) {
      uVar13 = 0;
      do {
        if ((long)(int)pUVar9->max_length <= (long)uVar13) {
          UnityEngine_SkinnedMeshRenderer__set_sharedMesh(renderer,mesh,(MethodInfo *)0x0);
          UnityEngine_Renderer__set_sharedMaterials
                    ((UnityEngine_Renderer_o *)renderer,(__this_02->fields).GrowthMaterials,(MethodInfo *)0x0)
          ;
          pMVar7 = MethodInfo_System_Collections_Generic_List_ShifterGrowthEffect_Layer_Add;
          __this_01 = (__this->fields)._layers;
          if (__this_01 != (System_Collections_Generic_List_ShifterGrowthEffect_Layer__o *)0x0) {
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pCVar6 = (__this_01->fields)._items;
            if (pCVar6 != (Characters_ShifterGrowthEffect_Layer_array *)0x0) {
              uVar2 = (__this_01->fields)._size;
              if (uVar2 < (uint)pCVar6->max_length) {
                (__this_01->fields)._size = uVar2 + 1;
                pCVar6->m_Items[(int)uVar2] = __this_02;
                Il2CppCodeGenWriteBarrier(pCVar6->m_Items + (int)uVar2);
                return;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_02,
                         (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
              return;
            }
          }
          break;
        }
        pUVar9 = (__this_02->fields).OriginalMaterials;
        if (pUVar9 == (UnityEngine_Material_array *)0x0) break;
        if ((uint)pUVar9->max_length <= uVar13) goto label_05c1c9d5;
        pUVar3 = pUVar9->m_Items[uVar13];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar8 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar8) {
          if (pUVar3 == (UnityEngine_Material_o *)0x0) break;
          pUVar4 = (__this_02->fields).OriginalShaders;
          pUVar10 = UnityEngine_Material__get_shader(pUVar3,(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_Shader_array *)0x0) break;
          if ((uint)pUVar4->max_length <= uVar13) {
label_05c1c9d5:
            ThrowIndexOutOfRangeException();
          }
          pUVar4->m_Items[uVar13] = pUVar10;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + uVar13);
          pUVar9 = (__this_02->fields).GrowthMaterials;
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
          UnityEngine_Material___ctor_68dcfd0(__this_03,pUVar3,(MethodInfo *)0x0);
          if (__this_03 == (UnityEngine_Material_o *)0x0) break;
          UnityEngine_Material__set_shader(__this_03,(__this->fields)._shader,(MethodInfo *)0x0);
          pSVar11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
          pSVar11 = System_String__Concat_52f0320(pSVar11," growth",(MethodInfo *)0x0);
          UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_03,pSVar11,(MethodInfo *)0x0);
          if (pUVar9 == (UnityEngine_Material_array *)0x0) break;
          pIVar12 = il2cpp_vm_Object_IsInst
                              ((Il2CppObject *)__this_03,(((pUVar9->obj).klass)->_1).element_class);
          if (pIVar12 == (Il2CppObject *)0x0) {
            pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
          }
          if ((uint)pUVar9->max_length <= uVar13) goto label_05c1c9d5;
          pUVar9->m_Items[uVar13] = __this_03;
          Il2CppCodeGenWriteBarrier(pUVar9->m_Items + uVar13);
          pMVar7 = MethodInfo_System_Collections_Generic_List_Object_Add;
          pUVar9 = (__this_02->fields).GrowthMaterials;
          if (pUVar9 == (UnityEngine_Material_array *)0x0) break;
          if ((uint)pUVar9->max_length <= uVar13) goto label_05c1c9d5;
          __this_00 = (__this->fields)._created;
          if (__this_00 == (System_Collections_Generic_List_Object__o *)0x0) break;
          pUVar3 = pUVar9->m_Items[uVar13];
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar5 = (__this_00->fields)._items;
          if (pUVar5 == (UnityEngine_Object_array *)0x0) break;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pUVar5->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pUVar5->m_Items[(int)uVar2] = (UnityEngine_Object_o *)pUVar3;
            Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar3,
                       (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
          }
        }
        uVar13 = uVar13 + 1;
        pUVar9 = (__this_02->fields).GrowthMaterials;
      } while (pUVar9 != (UnityEngine_Material_array *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$CreateChunks
// il2cpp: void Characters_ShifterGrowthEffect__CreateChunks (Characters_ShifterGrowthEffect_o* __this, const MethodInfo* method);
// 0x5c1a6f0

void Characters_ShifterGrowthEffect__CreateChunks(Characters_ShifterGrowthEffect_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_ParticleSystem_o **targetAddress;
  uint uVar2;
  uint32_t uVar3;
  UnityEngine_Renderer_o *pUVar4;
  System_Collections_Generic_List_Object__o *__this_00;
  UnityEngine_Object_array *pUVar5;
  UnityEngine_Component_o *__this_01;
  UnityEngine_ParticleSystem_MinMaxCurve_o value;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_00;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_01;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_02;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_03;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_04;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_05;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_06;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_07;
  UnityEngine_ParticleSystem_MinMaxGradient_o value_08;
  UnityEngine_ParticleSystem_MinMaxGradient_o value_09;
  int32_t value_10;
  UnityEngine_Material_o *source;
  UnityEngine_Material_o *__this_02;
  UnityEngine_Texture_o *value_11;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_ParticleSystem_o *pUVar8;
  UnityEngine_Gradient_o *__this_05;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphaKeys;
  UnityEngine_AnimationCurve_o *curve;
  UnityEngine_ParticleSystemRenderer_o *__this_06;
  MethodInfo *pMVar9;
  float fVar10;
  UnityEngine_Color_o col;
  UnityEngine_Color_o col_00;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_ParticleSystem_MainModule_o local_258;
  UnityEngine_ParticleSystem_ColorOverLifetimeModule_o local_250;
  UnityEngine_GradientAlphaKey_Fields local_248;
  UnityEngine_GradientAlphaKey_Fields local_240;
  UnityEngine_GradientAlphaKey_Fields local_238;
  UnityEngine_GradientAlphaKey_Fields local_230;
  UnityEngine_ParticleSystem_EmissionModule_o local_228;
  UnityEngine_ParticleSystem_SizeOverLifetimeModule_o local_220;
  UnityEngine_ParticleSystem_VelocityOverLifetimeModule_o local_218;
  UnityEngine_ParticleSystem_ShapeModule_o local_210;
  UnityEngine_GradientColorKey_o local_208;
  UnityEngine_GradientColorKey_o local_1e8;
  undefined1 local_1c8 [8];
  float fStack_1c0;
  float fStack_1bc;
  UnityEngine_Gradient_o *local_1b8;
  UnityEngine_Color_Fields UStack_1b0;
  UnityEngine_Color_Fields UStack_1a0;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_188;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_168;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_148;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_128;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_108;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_e8;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_c8;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_a8;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_88;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields local_68;
  
  if (Il2CppMethodInitialized_07547735 == '\0') {
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
    Il2CppMethodInitialized_07547735 = '\x01';
  }
  local_258.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_210.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_ShapeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_218.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_VelocityOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_250.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_ColorOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_220.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_SizeOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_228.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  pUVar4 = (UnityEngine_Renderer_o *)(__this->fields)._body;
  if (pUVar4 != (UnityEngine_Renderer_o *)0x0) {
    UnityEngine_Renderer__get_bounds((UnityEngine_Bounds_o *)local_1c8,pUVar4,(MethodInfo *)0x0);
    fVar10 = local_1b8._0_4_;
    source = UnityEngine_Resources__Load_object_
                       ("Effects/Materials/Smoke1Mat",
                        (MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_Material);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
    UnityEngine_Material___ctor_68dcfd0(__this_02,source,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_Material_o *)0x0) {
      pMVar9 = (MethodInfo *)"Shifter flesh chunk";
      UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_02,"Shifter flesh chunk",(MethodInfo *)0x0);
      value_11 = (UnityEngine_Texture_o *)Characters_ShifterGrowthEffect__CreateChunkTexture(__this,pMVar9);
      UnityEngine_Material__SetTexture(__this_02,"_BaseMap",value_11,(MethodInfo *)0x0);
      pMVar9 = MethodInfo_System_Collections_Generic_List_Object_Add;
      __this_00 = (__this->fields)._created;
      if (__this_00 != (System_Collections_Generic_List_Object__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar5 = (__this_00->fields)._items;
        if (pUVar5 != (UnityEngine_Object_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pUVar5->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pUVar5->m_Items[(int)uVar2] = (UnityEngine_Object_o *)__this_02;
            Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_02,
                       (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
          }
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
          UnityEngine_GameObject___ctor(__this_03,"Shifter flesh chunks",(MethodInfo *)0x0);
          __this_01 = (UnityEngine_Component_o *)(__this->fields)._body;
          if (((__this_01 != (UnityEngine_Component_o *)0x0) &&
              (__this_04 = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0),
              __this_04 != (UnityEngine_GameObject_o *)0x0)) &&
             (value_10 = UnityEngine_GameObject__get_layer(__this_04,(MethodInfo *)0x0),
             __this_03 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__set_layer(__this_03,value_10,(MethodInfo *)0x0);
            pUVar6 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
            pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_692d510(pUVar6,pUVar7,false,(MethodInfo *)0x0);
              pUVar6 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
              pUVar7 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              pUVar4 = (UnityEngine_Renderer_o *)(__this->fields)._body;
              if (((pUVar4 != (UnityEngine_Renderer_o *)0x0) &&
                  (UnityEngine_Renderer__get_bounds
                             ((UnityEngine_Bounds_o *)local_1c8,pUVar4,(MethodInfo *)0x0),
                  pUVar7 != (UnityEngine_Transform_o *)0x0)) &&
                 (UVar11.fields.z = fStack_1c0, UVar11.fields.x = (float)local_1c8._0_4_,
                 UVar11.fields.y = (float)local_1c8._4_4_,
                 UVar11 = UnityEngine_Transform__InverseTransformPoint(pUVar7,UVar11,(MethodInfo *)0x0),
                 pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__set_localPosition(pUVar6,UVar11,(MethodInfo *)0x0);
                pUVar8 = UnityEngine_GameObject__AddComponent_object_
                                   (__this_03,
                                    (MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_ParticleSystem);
                targetAddress = &(__this->fields)._chunks;
                (__this->fields)._chunks = pUVar8;
                Il2CppCodeGenWriteBarrier(targetAddress);
                pUVar8 = (__this->fields)._chunks;
                if (pUVar8 != (UnityEngine_ParticleSystem_o *)0x0) {
                  UnityEngine_ParticleSystem__Stop(pUVar8,true,0,(MethodInfo *)0x0);
                  if (*targetAddress != (UnityEngine_ParticleSystem_o *)0x0) {
                    fVar10 = fVar10 + fVar10;
                    local_258 = UnityEngine_ParticleSystem__get_main(*targetAddress,(MethodInfo *)0x0);
                    UnityEngine_ParticleSystem_MainModule__set_loop(&local_258,true,(MethodInfo *)0x0);
                    UnityEngine_ParticleSystem_MainModule__set_playOnAwake(&local_258,false,(MethodInfo *)0x0)
                    ;
                    UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_88,0.5,(MethodInfo *)0x0);
                    value.fields.m_CurveMin = local_88.m_CurveMin;
                    value.fields.m_Mode = local_88.m_Mode;
                    value.fields.m_CurveMultiplier = local_88.m_CurveMultiplier;
                    value.fields.m_CurveMax = local_88.m_CurveMax;
                    value.fields.m_ConstantMin = local_88.m_ConstantMin;
                    value.fields.m_ConstantMax = local_88.m_ConstantMax;
                    UnityEngine_ParticleSystem_MainModule__set_startLifetime
                              (&local_258,value,(MethodInfo *)0x0);
                    UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_a8,0.0,(MethodInfo *)0x0);
                    value_00.fields.m_CurveMin = local_a8.m_CurveMin;
                    value_00.fields.m_Mode = local_a8.m_Mode;
                    value_00.fields.m_CurveMultiplier = local_a8.m_CurveMultiplier;
                    value_00.fields.m_CurveMax = local_a8.m_CurveMax;
                    value_00.fields.m_ConstantMin = local_a8.m_ConstantMin;
                    value_00.fields.m_ConstantMax = local_a8.m_ConstantMax;
                    UnityEngine_ParticleSystem_MainModule__set_startSpeed
                              (&local_258,value_00,(MethodInfo *)0x0);
                    local_168.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
                    local_168.m_ConstantMin = 0.0;
                    local_168.m_ConstantMax = 0.0;
                    local_168.m_Mode = 0;
                    local_168.m_CurveMultiplier = 0.0;
                    local_168.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
                    UnityEngine_ParticleSystem_MinMaxCurve___ctor_69c47b0
                              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_168,fVar10 * 0.035,
                               fVar10 * 0.075,(MethodInfo *)0x0);
                    value_01.fields.m_CurveMin = local_168.m_CurveMin;
                    value_01.fields.m_Mode = local_168.m_Mode;
                    value_01.fields.m_CurveMultiplier = local_168.m_CurveMultiplier;
                    value_01.fields.m_CurveMax = local_168.m_CurveMax;
                    value_01.fields.m_ConstantMin = local_168.m_ConstantMin;
                    value_01.fields.m_ConstantMax = local_168.m_ConstantMax;
                    UnityEngine_ParticleSystem_MainModule__set_startSize
                              (&local_258,value_01,(MethodInfo *)0x0);
                    if ((TypeInfo_Characters_ShifterGrowthEffect->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Characters_ShifterGrowthEffect);
                    }
                    UStack_1b0.b = 0.0;
                    UStack_1b0.a = 0.0;
                    UStack_1a0.r = 0.0;
                    UStack_1a0.g = 0.0;
                    local_1b8 = (UnityEngine_Gradient_o *)0x0;
                    UStack_1b0.r = 0.0;
                    UStack_1b0.g = 0.0;
                    local_1c8 = (undefined1  [8])0x0;
                    fStack_1c0 = 0.0;
                    fStack_1bc = 0.0;
                    UStack_1a0.b = 0.0;
                    UStack_1a0.a = 0.0;
                    UnityEngine_ParticleSystem_MinMaxGradient___ctor_69c4a00
                              ((UnityEngine_ParticleSystem_MinMaxGradient_o *)local_1c8,
                               (UnityEngine_Color_o)
                               (TypeInfo_Characters_ShifterGrowthEffect->static_fields->ChunkDark).fields,
                               (UnityEngine_Color_o)
                               (TypeInfo_Characters_ShifterGrowthEffect->static_fields->ChunkLight).fields,
                               (MethodInfo *)0x0);
                    value_08.fields.m_GradientMin._4_4_ = fStack_1bc;
                    value_08.fields.m_GradientMin._0_4_ = fStack_1c0;
                    value_08.fields._0_8_ = local_1c8;
                    value_08.fields.m_GradientMax = local_1b8;
                    value_08.fields.m_ColorMin.fields.r = UStack_1b0.r;
                    value_08.fields.m_ColorMin.fields.g = UStack_1b0.g;
                    value_08.fields.m_ColorMin.fields.b = UStack_1b0.b;
                    value_08.fields.m_ColorMin.fields.a = UStack_1b0.a;
                    value_08.fields.m_ColorMax.fields.r = UStack_1a0.r;
                    value_08.fields.m_ColorMax.fields.g = UStack_1a0.g;
                    value_08.fields.m_ColorMax.fields.b = UStack_1a0.b;
                    value_08.fields.m_ColorMax.fields.a = UStack_1a0.a;
                    UnityEngine_ParticleSystem_MainModule__set_startColor
                              (&local_258,value_08,(MethodInfo *)0x0);
                    UnityEngine_ParticleSystem_MainModule__set_simulationSpace(&local_258,0,(MethodInfo *)0x0)
                    ;
                    if (Il2CppMethodInitialized_0753e7f9 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                      Il2CppMethodInitialized_0753e7f9 = '\x01';
                      uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
                    }
                    else {
                      uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
                    }
                    if (uVar3 == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                    }
                    UnityEngine_ParticleSystem_MainModule__set_maxParticles(&local_258,0x44,(MethodInfo *)0x0)
                    ;
                    if (*targetAddress != (UnityEngine_ParticleSystem_o *)0x0) {
                      local_210 = UnityEngine_ParticleSystem__get_shape(*targetAddress,(MethodInfo *)0x0);
                      UnityEngine_ParticleSystem_ShapeModule__set_shapeType(&local_210,0,(MethodInfo *)0x0);
                      UnityEngine_ParticleSystem_ShapeModule__set_radius
                                (&local_210,fVar10 * 0.35,(MethodInfo *)0x0);
                      UnityEngine_ParticleSystem_ShapeModule__set_radiusThickness
                                (&local_210,0.0,(MethodInfo *)0x0);
                      if (*targetAddress != (UnityEngine_ParticleSystem_o *)0x0) {
                        local_218 = UnityEngine_ParticleSystem__get_velocityOverLifetime
                                              (*targetAddress,(MethodInfo *)0x0);
                        UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_enabled
                                  (&local_218,true,(MethodInfo *)0x0);
                        UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_space
                                  (&local_218,0,(MethodInfo *)0x0);
                        UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                                  ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_c8,0.0,(MethodInfo *)0x0
                                  );
                        value_02.fields.m_CurveMin = local_c8.m_CurveMin;
                        value_02.fields.m_Mode = local_c8.m_Mode;
                        value_02.fields.m_CurveMultiplier = local_c8.m_CurveMultiplier;
                        value_02.fields.m_CurveMax = local_c8.m_CurveMax;
                        value_02.fields.m_ConstantMin = local_c8.m_ConstantMin;
                        value_02.fields.m_ConstantMax = local_c8.m_ConstantMax;
                        UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_x
                                  (&local_218,value_02,(MethodInfo *)0x0);
                        UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                                  ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_e8,0.0,(MethodInfo *)0x0
                                  );
                        value_03.fields.m_CurveMin = local_e8.m_CurveMin;
                        value_03.fields.m_Mode = local_e8.m_Mode;
                        value_03.fields.m_CurveMultiplier = local_e8.m_CurveMultiplier;
                        value_03.fields.m_CurveMax = local_e8.m_CurveMax;
                        value_03.fields.m_ConstantMin = local_e8.m_ConstantMin;
                        value_03.fields.m_ConstantMax = local_e8.m_ConstantMax;
                        UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_y
                                  (&local_218,value_03,(MethodInfo *)0x0);
                        UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                                  ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_108,0.0,
                                   (MethodInfo *)0x0);
                        value_04.fields.m_CurveMin = local_108.m_CurveMin;
                        value_04.fields.m_Mode = local_108.m_Mode;
                        value_04.fields.m_CurveMultiplier = local_108.m_CurveMultiplier;
                        value_04.fields.m_CurveMax = local_108.m_CurveMax;
                        value_04.fields.m_ConstantMin = local_108.m_ConstantMin;
                        value_04.fields.m_ConstantMax = local_108.m_ConstantMax;
                        UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_z
                                  (&local_218,value_04,(MethodInfo *)0x0);
                        UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                                  ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_128,
                                   fVar10 * -0.35 + fVar10 * -0.35,(MethodInfo *)0x0);
                        value_05.fields.m_CurveMin = local_128.m_CurveMin;
                        value_05.fields.m_Mode = local_128.m_Mode;
                        value_05.fields.m_CurveMultiplier = local_128.m_CurveMultiplier;
                        value_05.fields.m_CurveMax = local_128.m_CurveMax;
                        value_05.fields.m_ConstantMin = local_128.m_ConstantMin;
                        value_05.fields.m_ConstantMax = local_128.m_ConstantMax;
                        UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_radial
                                  (&local_218,value_05,(MethodInfo *)0x0);
                        if (*targetAddress != (UnityEngine_ParticleSystem_o *)0x0) {
                          local_250 = UnityEngine_ParticleSystem__get_colorOverLifetime
                                                (*targetAddress,(MethodInfo *)0x0);
                          UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_enabled
                                    (&local_250,true,(MethodInfo *)0x0);
                          __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Gradient);
                          UnityEngine_Gradient___ctor(__this_05,(MethodInfo *)0x0);
                          colorKeys = (UnityEngine_GradientColorKey_array *)
                                      SZArrayNew(TypeInfo_UnityEngine_GradientColorKey_array,2);
                          local_1e8.fields.color.fields.r = 0.0;
                          local_1e8.fields.color.fields.g = 0.0;
                          local_1e8.fields.color.fields.b = 0.0;
                          local_1e8.fields.color.fields.a = 0.0;
                          local_1e8.fields.time = 0.0;
                          col.fields.b = 1.0;
                          col.fields.a = 1.0;
                          col.fields.r = 1.0;
                          col.fields.g = 1.0;
                          UnityEngine_GradientColorKey___ctor(&local_1e8,col,0.0,(MethodInfo *)0x0);
                          if (colorKeys != (UnityEngine_GradientColorKey_array *)0x0) {
                            if ((int)colorKeys->max_length != 0) {
                              colorKeys->m_Items[0].fields.time = local_1e8.fields.time;
                              colorKeys->m_Items[0].fields.color.fields.r = local_1e8.fields.color.fields.r;
                              colorKeys->m_Items[0].fields.color.fields.g = local_1e8.fields.color.fields.g;
                              colorKeys->m_Items[0].fields.color.fields.b = local_1e8.fields.color.fields.b;
                              colorKeys->m_Items[0].fields.color.fields.a = local_1e8.fields.color.fields.a;
                              local_208.fields.color.fields.r = 0.0;
                              local_208.fields.color.fields.g = 0.0;
                              local_208.fields.color.fields.b = 0.0;
                              local_208.fields.color.fields.a = 0.0;
                              local_208.fields.time = 0.0;
                              col_00.fields.b = 1.0;
                              col_00.fields.a = 1.0;
                              col_00.fields.r = 1.0;
                              col_00.fields.g = 1.0;
                              UnityEngine_GradientColorKey___ctor(&local_208,col_00,1.0,(MethodInfo *)0x0);
                              if ((colorKeys->max_length & 0xfffffffe) != 0) {
                                colorKeys->m_Items[1].fields.time = local_208.fields.time;
                                colorKeys->m_Items[1].fields.color.fields.r = local_208.fields.color.fields.r;
                                colorKeys->m_Items[1].fields.color.fields.g = local_208.fields.color.fields.g;
                                colorKeys->m_Items[1].fields.color.fields.b = local_208.fields.color.fields.b;
                                colorKeys->m_Items[1].fields.color.fields.a = local_208.fields.color.fields.a;
                                alphaKeys = (UnityEngine_GradientAlphaKey_array *)
                                            SZArrayNew(TypeInfo_UnityEngine_GradientAlphaKey_array,4);
                                local_230.alpha = 0.0;
                                local_230.time = 0.0;
                                UnityEngine_GradientAlphaKey___ctor
                                          ((UnityEngine_GradientAlphaKey_o *)&local_230,0.0,0.0,
                                           (MethodInfo *)0x0);
                                if (alphaKeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_05c1b1e9;
                                if ((int)alphaKeys->max_length != 0) {
                                  alphaKeys->m_Items[0].fields = local_230;
                                  local_238.alpha = 0.0;
                                  local_238.time = 0.0;
                                  UnityEngine_GradientAlphaKey___ctor
                                            ((UnityEngine_GradientAlphaKey_o *)&local_238,1.0,0.2,
                                             (MethodInfo *)0x0);
                                  if ((alphaKeys->max_length & 0xfffffffe) != 0) {
                                    alphaKeys->m_Items[1].fields = local_238;
                                    local_240.alpha = 0.0;
                                    local_240.time = 0.0;
                                    UnityEngine_GradientAlphaKey___ctor
                                              ((UnityEngine_GradientAlphaKey_o *)&local_240,1.0,0.75,
                                               (MethodInfo *)0x0);
                                    if (2 < (uint)alphaKeys->max_length) {
                                      alphaKeys->m_Items[2].fields = local_240;
                                      local_248.alpha = 0.0;
                                      local_248.time = 0.0;
                                      UnityEngine_GradientAlphaKey___ctor
                                                ((UnityEngine_GradientAlphaKey_o *)&local_248,0.0,1.0,
                                                 (MethodInfo *)0x0);
                                      if ((alphaKeys->max_length & 0xfffffffc) != 0) {
                                        alphaKeys->m_Items[3].fields = local_248;
                                        if (__this_05 != (UnityEngine_Gradient_o *)0x0) {
                                          UnityEngine_Gradient__SetKeys
                                                    (__this_05,colorKeys,alphaKeys,(MethodInfo *)0x0);
                                          UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_69c4a70
                                                    ((UnityEngine_ParticleSystem_MinMaxGradient_o *)&local_68,
                                                     __this_05,(MethodInfo *)0x0);
                                          value_09.fields.m_GradientMin = local_68.m_GradientMin;
                                          value_09.fields.m_Mode = local_68.m_Mode;
                                          value_09.fields._4_4_ = local_68._4_4_;
                                          value_09.fields.m_GradientMax = local_68.m_GradientMax;
                                          value_09.fields.m_ColorMin.fields.r = local_68.m_ColorMin.fields.r;
                                          value_09.fields.m_ColorMin.fields.g = local_68.m_ColorMin.fields.g;
                                          value_09.fields.m_ColorMin.fields.b = local_68.m_ColorMin.fields.b;
                                          value_09.fields.m_ColorMin.fields.a = local_68.m_ColorMin.fields.a;
                                          value_09.fields.m_ColorMax.fields.r = local_68.m_ColorMax.fields.r;
                                          value_09.fields.m_ColorMax.fields.g = local_68.m_ColorMax.fields.g;
                                          value_09.fields.m_ColorMax.fields.b = local_68.m_ColorMax.fields.b;
                                          value_09.fields.m_ColorMax.fields.a = local_68.m_ColorMax.fields.a;
                                          UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_color
                                                    (&local_250,value_09,(MethodInfo *)0x0);
                                          if (*targetAddress != (UnityEngine_ParticleSystem_o *)0x0) {
                                            local_220 = UnityEngine_ParticleSystem__get_sizeOverLifetime
                                                                  (*targetAddress,(MethodInfo *)0x0);
                                            UnityEngine_ParticleSystem_SizeOverLifetimeModule__set_enabled
                                                      (&local_220,true,(MethodInfo *)0x0);
                                            curve = UnityEngine_AnimationCurve__Linear
                                                              (0.0,1.0,1.0,0.35,(MethodInfo *)0x0);
                                            local_188.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
                                            local_188.m_ConstantMin = 0.0;
                                            local_188.m_ConstantMax = 0.0;
                                            local_188.m_Mode = 0;
                                            local_188.m_CurveMultiplier = 0.0;
                                            local_188.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
                                            UnityEngine_ParticleSystem_MinMaxCurve___ctor_69c4760
                                                      ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_188,
                                                       1.0,curve,(MethodInfo *)0x0);
                                            value_06.fields.m_CurveMin = local_188.m_CurveMin;
                                            value_06.fields.m_Mode = local_188.m_Mode;
                                            value_06.fields.m_CurveMultiplier = local_188.m_CurveMultiplier;
                                            value_06.fields.m_CurveMax = local_188.m_CurveMax;
                                            value_06.fields.m_ConstantMin = local_188.m_ConstantMin;
                                            value_06.fields.m_ConstantMax = local_188.m_ConstantMax;
                                            UnityEngine_ParticleSystem_SizeOverLifetimeModule__set_size
                                                      (&local_220,value_06,(MethodInfo *)0x0);
                                            if (*targetAddress != (UnityEngine_ParticleSystem_o *)0x0) {
                                              local_228 = UnityEngine_ParticleSystem__get_emission
                                                                    (*targetAddress,(MethodInfo *)0x0);
                                              UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                                                        ((UnityEngine_ParticleSystem_MinMaxCurve_o *)
                                                         &local_148,0.0,(MethodInfo *)0x0);
                                              value_07.fields.m_CurveMin = local_148.m_CurveMin;
                                              value_07.fields.m_Mode = local_148.m_Mode;
                                              value_07.fields.m_CurveMultiplier = local_148.m_CurveMultiplier;
                                              value_07.fields.m_CurveMax = local_148.m_CurveMax;
                                              value_07.fields.m_ConstantMin = local_148.m_ConstantMin;
                                              value_07.fields.m_ConstantMax = local_148.m_ConstantMax;
                                              UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime
                                                        (&local_228,value_07,(MethodInfo *)0x0);
                                              __this_06 = UnityEngine_GameObject__GetComponent_object_
                                                                    (__this_03,
                                                                     (MethodInfo_353B730 *)
                                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer
                                                       );
                                              if (__this_06 != (UnityEngine_ParticleSystemRenderer_o *)0x0) {
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
                                                if (*targetAddress != (UnityEngine_ParticleSystem_o *)0x0) {
                                                  UnityEngine_ParticleSystem__Play
                                                            (*targetAddress,false,(MethodInfo *)0x0);
                                                  return;
                                                }
                                              }
                                            }
                                          }
                                        }
                                        goto label_05c1b1e9;
                                      }
                                    }
                                  }
                                }
                              }
                            }
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
label_05c1b1e9:
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$CreateChunkTexture
// il2cpp: UnityEngine_Texture2D_o* Characters_ShifterGrowthEffect__CreateChunkTexture (Characters_ShifterGrowthEffect_o* __this, const MethodInfo* method);
// 0x5c1c9f0

UnityEngine_Texture2D_o *
Characters_ShifterGrowthEffect__CreateChunkTexture
          (Characters_ShifterGrowthEffect_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Vector2_Fields UVar2;
  uint32_t uVar3;
  uint uVar4;
  System_Collections_Generic_List_Object__o *__this_00;
  UnityEngine_Object_array *pUVar5;
  MethodInfo *pMVar6;
  UnityEngine_Texture_o *__this_01;
  int y;
  int x;
  float fVar7;
  float fVar8;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_07547736 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter flesh chunk");
    Il2CppMethodInitialized_07547736 = '\x01';
  }
  __this_01 = (UnityEngine_Texture_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  y = 0;
  UnityEngine_Texture2D___ctor_68efe30
            ((UnityEngine_Texture2D_o *)__this_01,0x20,0x20,4,false,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_Texture_o *)0x0) {
    UnityEngine_Texture__set_wrapMode(__this_01,1,(MethodInfo *)0x0);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_01,"Shifter flesh chunk",(MethodInfo *)0x0);
    do {
      x = 0;
      do {
        if (Il2CppMethodInitialized_07542885 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_07542885 = '\x01';
        }
        UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields;
        if (Il2CppMethodInitialized_0753e7b5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e7b5 = '\x01';
          uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        if (uVar3 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar7 = ((float)x / 31.0 + (float)x / 31.0) - UVar2.x;
        fVar8 = ((float)y / 31.0 + (float)y / 31.0) - UVar2.y;
        fVar7 = fVar8 * fVar8 + fVar7 * fVar7;
        if (fVar7 < 0.0) {
          fVar7 = sqrtf(fVar7);
        }
        else {
          fVar7 = SQRT(fVar7);
        }
        fVar8 = 1.0;
        if (fVar7 <= 1.0) {
          fVar8 = fVar7;
        }
        fVar8 = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar8);
        fVar7 = fVar8 * 3.0 * fVar8 - (fVar8 + fVar8) * fVar8 * fVar8;
        fVar7 = 1.0 - ((1.0 - fVar7) * 0.55 + fVar7);
        color.fields.r = fVar7 * -0.35 + 1.0;
        color.fields.a = fVar7;
        color.fields.b = color.fields.r;
        color.fields.g = color.fields.r;
        UnityEngine_Texture2D__SetPixel((UnityEngine_Texture2D_o *)__this_01,x,y,color,(MethodInfo *)0x0);
        x = x + 1;
      } while (x != 0x20);
      y = y + 1;
    } while (y != 0x20);
    UnityEngine_Texture2D__Apply((UnityEngine_Texture2D_o *)__this_01,false,true,(MethodInfo *)0x0);
    pMVar6 = MethodInfo_System_Collections_Generic_List_Object_Add;
    __this_00 = (__this->fields)._created;
    if (__this_00 != (System_Collections_Generic_List_Object__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar5 = (__this_00->fields)._items;
      if (pUVar5 != (UnityEngine_Object_array *)0x0) {
        uVar4 = (__this_00->fields)._size;
        if (uVar4 < (uint)pUVar5->max_length) {
          (__this_00->fields)._size = uVar4 + 1;
          pUVar5->m_Items[(int)uVar4] = (UnityEngine_Object_o *)__this_01;
          Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_01,
                     (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
        }
        return (UnityEngine_Texture2D_o *)__this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$LateUpdate
// il2cpp: void Characters_ShifterGrowthEffect__LateUpdate (Characters_ShifterGrowthEffect_o* __this, const MethodInfo* method);
// 0x5c1b200
// eh: try 0x5c1b3e4..0x5c1b5ba -> pad 0x5c1b5d1 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c1b5e9..0x5c1b5ee -> pad 0x5c1b613 cleanup
// eh: try 0x5c1b616..0x5c1b620 -> pad 0x5c1b628 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c1b5bf: jmp 0x5c1b5d1
// asm:   0x5c1b5c1: jmp 0x5c1b5d1
// asm:   0x5c1b5c3: jmp 0x5c1b5d1
// asm:   0x5c1b5c5: jmp 0x5c1b5d1
// asm:   0x5c1b5c7: jmp 0x5c1b5d1
// asm:   0x5c1b5c9: jmp 0x5c1b5d1
// asm:   0x5c1b5cb: jmp 0x5c1b5d1
// asm:   0x5c1b5cd: jmp 0x5c1b5d1
// asm:   0x5c1b5cf: jmp 0x5c1b5d1
// asm:   0x5c1b5d1: mov r14, rax
// asm:   0x5c1b5d4: cmp edx, 1
// asm:   0x5c1b5d7: jne 0x5c1b616
// asm:   0x5c1b5d9: mov rdi, r14
// asm:   0x5c1b5dc: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c1b5e1: mov rbx, qword ptr [rax]
// asm:   0x5c1b5e4: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5c1b5e9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c1b5ee: lea rax, [rip + 0x1673e33]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_Dispose
// asm:   0x5c1b5f5: mov rsi, qword ptr [rax]
// asm:   0x5c1b5f8: lea rdi, [rsp + 0x10]
// asm:   0x5c1b5fd: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c1b602: test rbx, rbx
// asm:   0x5c1b605: je 0x5c1b4a2
// asm:   0x5c1b60b: mov rdi, rbx
// asm:   0x5c1b60e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c1b613: mov r14, rax
// asm:   0x5c1b616: lea rdi, [rsp + 0x30]
// asm:   0x5c1b61b: call 0x2fd9190  ; il2cpp_runtime_helper_02fd9190()
// asm:   0x5c1b620: mov rdi, r14
// asm:   0x5c1b623: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c1b628: mov rdi, rax
// asm:   0x5c1b62b: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_ShifterGrowthEffect__LateUpdate(Characters_ShifterGrowthEffect_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  System_Collections_Generic_List_ShifterGrowthEffect_Layer__o *__this_00;
  UnityEngine_MaterialPropertyBlock_o *pUVar2;
  UnityEngine_Renderer_o *__this_01;
  UnityEngine_ParticleSystem_o *pUVar3;
  Characters_ShifterGrowthEffect_Layer_o *pCVar4;
  bool bVar5;
  MethodInfo *method_00;
  Characters_ShifterGrowthEffect_c *method_01;
  float fVar6;
  float fVar8;
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float local_8c;
  undefined1 local_88 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_80;
  Characters_ShifterGrowthEffect_Layer_o *local_78;
  undefined1 local_68 [16];
  Characters_ShifterGrowthEffect_Layer_o *local_58;
  UnityEngine_ParticleSystem_EmissionModule_o local_50;
  float local_48;
  
  if (Il2CppMethodInitialized_07547737 == '\0') {
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
    Il2CppMethodInitialized_07547737 = '\x01';
  }
  local_88 = (undefined1  [8])0x0;
  pSStack_80 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_78 = (Characters_ShifterGrowthEffect_Layer_o *)0x0;
  if ((__this->fields)._finished != false) {
    return;
  }
  local_48 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  local_48 = local_48 - (__this->fields)._startTime;
  if (local_48 < 3.8) {
    pCVar1 = (__this->fields)._shifter;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method = (MethodInfo *)0x0;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      pCVar1 = (__this->fields)._shifter;
      if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
        if ((pCVar1->fields).Dead != false) goto label_05c1b2ea;
        method_01 = TypeInfo_Characters_ShifterGrowthEffect;
        if ((TypeInfo_Characters_ShifterGrowthEffect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterGrowthEffect);
        }
        fVar6 = Characters_ShifterGrowthEffect__GrowthProgress(local_48,(MethodInfo *)method_01);
        pCVar1 = (__this->fields)._shifter;
        if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
          local_8c = 0.0;
          if ((pCVar1->fields).EffectsEnabled != false) {
            local_8c = 1.0;
          }
          __this_00 = (__this->fields)._layers;
          if (__this_00 != (System_Collections_Generic_List_ShifterGrowthEffect_Layer__o *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_68,
                       (System_Collections_Generic_List_object__o *)__this_00,
                       (MethodInfo_395E050 *)
                       MethodInfo_System_Collections_Generic_List_ShifterGrowthEffect_Layer_GetEnumerator);
            local_78 = local_58;
            local_88 = (undefined1  [8])local_68._0_8_;
            pSStack_80 = (System_Collections_Generic_List_Enumerator_object__o *)local_68._8_8_;
            local_68._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
            local_68._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_88;
            while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                                      (MethodInfo_4C45C50 *)
                                      MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_MoveNext
                                     ), pCVar4 = local_78, bVar5) {
              Characters_ShifterGrowthEffect__SyncMaterials(__this,local_78,method_00);
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
              UnityEngine_MaterialPropertyBlock__SetFloat_68d85d0
                        (pUVar2,TypeInfo_Characters_ShifterGrowthEffect->static_fields->Growth,fVar6 * 1.03,
                         (MethodInfo *)0x0);
              pUVar2 = (pCVar4->fields).Properties;
              if (pUVar2 == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_MaterialPropertyBlock__SetFloat_68d85d0
                        (pUVar2,TypeInfo_Characters_ShifterGrowthEffect->static_fields->TissueIntensity,
                         local_8c,(MethodInfo *)0x0);
              __this_01 = (UnityEngine_Renderer_o *)(pCVar4->fields).Renderer;
              if (__this_01 == (UnityEngine_Renderer_o *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_Renderer__SetPropertyBlock(__this_01,(pCVar4->fields).Properties,(MethodInfo *)0x0);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_Dispose
                      );
            pUVar3 = (__this->fields)._chunks;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar5) {
              pUVar3 = (__this->fields)._chunks;
              if (pUVar3 == (UnityEngine_ParticleSystem_o *)0x0) goto label_05c1b5ba;
              local_50 = UnityEngine_ParticleSystem__get_emission(pUVar3,(MethodInfo *)0x0);
              auVar7._0_4_ = local_48 + -0.2;
              auVar7._4_4_ = local_48 + -1.4;
              auVar7._8_4_ = local_48 + 0.0;
              auVar7._12_4_ = local_48 + 0.0;
              auVar7 = divps(auVar7,_DAT_01007480);
              auVar9 = minps(_DAT_01005870,auVar7);
              fVar6 = (float)(-(uint)(0.0 <= auVar7._0_4_) & auVar9._0_4_);
              fVar8 = (float)(-(uint)(0.0 <= auVar7._4_4_) & auVar9._4_4_);
              fVar10 = fVar6 * 3.0 * fVar6 - fVar6 * (fVar6 + fVar6) * fVar6;
              fVar6 = fVar8 * fVar8 * 3.0 - fVar8 * 2.0 * fVar8 * fVar8;
              UnityEngine_ParticleSystem_EmissionModule__set_rateOverTimeMultiplier
                        (&local_50,
                         ((1.0 - fVar10) * 0.0 + fVar10) * 120.0 * (1.0 - ((1.0 - fVar6) * 0.0 + fVar6)),
                         (MethodInfo *)0x0);
            }
            return;
          }
        }
      }
label_05c1b5ba:
      ThrowNullReferenceException();
    }
  }
label_05c1b2ea:
  Characters_ShifterGrowthEffect__Finish(__this,method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.ShifterGrowthEffect$$GrowthProgress
// il2cpp: float Characters_ShifterGrowthEffect__GrowthProgress (float time, const MethodInfo* method);
// 0x5c1d130
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c1d144: movss xmm0, dword ptr [rip - 0x4c5b5b8]
// asm:   0x5c1d14c: ucomiss xmm0, xmm5
// asm:   0x5c1d14f: jbe 0x5c1d23b

float Characters_ShifterGrowthEffect__GrowthProgress(float time,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07547738 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterGrowthEffect);
    Il2CppMethodInitialized_07547738 = '\x01';
  }
  if (2.6 <= time) {
    fVar2 = time + -2.6;
    fVar3 = 1.0;
    if (fVar2 <= 1.0) {
      fVar3 = fVar2;
    }
    fVar3 = (float)(-(uint)(0.0 <= fVar2) & (uint)fVar3);
    if ((((Il2CppClass *)TypeInfo_Characters_ShifterGrowthEffect)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterGrowthEffect);
    }
    fVar1 = fVar3 * fVar3;
    fVar2 = fVar3 * fVar1;
    return (fVar2 - fVar1) * 0.0 +
           (fVar1 * 3.0 - (fVar2 + fVar2)) +
           (((fVar2 + fVar2) - fVar1 * 3.0) + 1.0) * 0.75 + (fVar3 + (fVar2 - fVar1 * 2.0)) * 0.4;
  }
  fVar2 = time / 2.6;
  fVar3 = 1.0;
  if (fVar2 <= 1.0) {
    fVar3 = fVar2;
  }
  fVar3 = (float)(-(uint)(0.0 <= fVar2) & (uint)fVar3);
  if ((((Il2CppClass *)TypeInfo_Characters_ShifterGrowthEffect)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterGrowthEffect);
  }
  fVar2 = fVar3 * fVar3;
  fVar1 = fVar2 * fVar3;
  return (fVar2 * 3.0 - (fVar1 + fVar1)) * 0.75 +
         (((fVar1 + fVar1) - fVar2 * 3.0) + 1.0) * 0.0 + (fVar3 + (fVar1 - (fVar2 + fVar2))) * 0.0 +
         (fVar1 - fVar2) * 1.04;
}


// Characters.ShifterGrowthEffect$$Hermite
// il2cpp: float Characters_ShifterGrowthEffect__Hermite (float t, float start, float startTangent, float end, float endTangent, const MethodInfo* method);
// 0x5c1d5a0

float Characters_ShifterGrowthEffect__Hermite
                (float t,float start,float startTangent,float end,float endTangent,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = t * t;
  fVar1 = fVar2 * t;
  return (fVar1 - fVar2) * endTangent +
         (fVar2 * 3.0 - (fVar1 + fVar1)) * end +
         (((fVar1 + fVar1) - fVar2 * 3.0) + 1.0) * start + (t + (fVar1 - fVar2 * 2.0)) * startTangent;
}


// Characters.ShifterGrowthEffect$$SyncMaterials
// il2cpp: void Characters_ShifterGrowthEffect__SyncMaterials (Characters_ShifterGrowthEffect_o* __this, Characters_ShifterGrowthEffect_Layer_o* layer, const MethodInfo* method);
// 0x5c1d2f0

void Characters_ShifterGrowthEffect__SyncMaterials
               (Characters_ShifterGrowthEffect_o *__this,Characters_ShifterGrowthEffect_Layer_o *layer,
               MethodInfo *method)

{
  int iVar1;
  UnityEngine_Renderer_o *pUVar2;
  UnityEngine_Material_array *pUVar3;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_Object_o *y;
  UnityEngine_Shader_array *pUVar5;
  bool bVar6;
  bool bVar7;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar8;
  int iVar9;
  System_Collections_Generic_List_Material__o *__this_01;
  ulong uVar10;
  
  if (Il2CppMethodInitialized_07547739 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547739 = '\x01';
  }
  if ((layer != (Characters_ShifterGrowthEffect_Layer_o *)0x0) &&
     (pUVar2 = (UnityEngine_Renderer_o *)(layer->fields).Renderer, pUVar2 != (UnityEngine_Renderer_o *)0x0)) {
    UnityEngine_Renderer__GetSharedMaterials(pUVar2,(__this->fields)._materialBuffer,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._materialBuffer;
    if (__this_01 != (System_Collections_Generic_List_Material__o *)0x0) {
      uVar10 = 0;
      bVar7 = false;
      do {
        pUVar3 = (layer->fields).GrowthMaterials;
        if (pUVar3 == (UnityEngine_Material_array *)0x0) break;
        iVar1 = (__this_01->fields)._size;
        iVar9 = (int)pUVar3->max_length;
        if (iVar1 < iVar9) {
          iVar9 = iVar1;
        }
        if ((long)iVar9 <= (long)uVar10) {
          if (!bVar7) {
            return;
          }
          pUVar2 = (UnityEngine_Renderer_o *)(layer->fields).Renderer;
          if (pUVar2 != (UnityEngine_Renderer_o *)0x0) {
            UnityEngine_Renderer__set_sharedMaterials(pUVar2,pUVar3,(MethodInfo *)0x0);
            return;
          }
          break;
        }
        __this_00 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_01,(int32_t)uVar10,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_Material_get_Item);
        pUVar3 = (layer->fields).GrowthMaterials;
        if (pUVar3 == (UnityEngine_Material_array *)0x0) break;
        if ((uint)pUVar3->max_length <= uVar10) goto label_05c1d58c;
        pUVar4 = pUVar3->m_Items[uVar10];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0)
        ;
        if (!bVar6) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar6) {
            pUVar3 = (layer->fields).GrowthMaterials;
            if (pUVar3 == (UnityEngine_Material_array *)0x0) break;
            if ((uint)pUVar3->max_length <= uVar10) goto label_05c1d58c;
            pUVar4 = pUVar3->m_Items[uVar10];
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar6 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar6) {
              if (__this_00 == (UnityEngine_Material_o *)0x0) break;
              x = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(__this_00,(MethodInfo *)0x0);
              y = (UnityEngine_Object_o *)(__this->fields)._shader;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar7 = UnityEngine_Object__op_Equality(x,y,(MethodInfo *)0x0);
              if (bVar7) {
                pUVar5 = (layer->fields).OriginalShaders;
                if (pUVar5 == (UnityEngine_Shader_array *)0x0) break;
                if ((uint)pUVar5->max_length <= uVar10) goto label_05c1d58c;
                UnityEngine_Material__set_shader(__this_00,pUVar5->m_Items[uVar10],(MethodInfo *)0x0);
              }
              pUVar3 = (layer->fields).OriginalMaterials;
              if (pUVar3 == (UnityEngine_Material_array *)0x0) break;
              pIVar8 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)__this_00,(((pUVar3->obj).klass)->_1).element_class);
              if (pIVar8 == (Il2CppObject *)0x0) {
                pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
              }
              if ((uint)pUVar3->max_length <= uVar10) {
label_05c1d58c:
                ThrowIndexOutOfRangeException();
              }
              pUVar3->m_Items[uVar10] = __this_00;
              Il2CppCodeGenWriteBarrier(pUVar3->m_Items + uVar10);
              pUVar3 = (layer->fields).GrowthMaterials;
              if (pUVar3 == (UnityEngine_Material_array *)0x0) break;
              if ((uint)pUVar3->max_length <= uVar10) goto label_05c1d58c;
              if (pUVar3->m_Items[uVar10] == (UnityEngine_Material_o *)0x0) break;
              UnityEngine_Material__CopyPropertiesFromMaterial
                        (pUVar3->m_Items[uVar10],__this_00,(MethodInfo *)0x0);
              bVar7 = true;
            }
          }
        }
        uVar10 = uVar10 + 1;
        __this_01 = (__this->fields)._materialBuffer;
      } while (__this_01 != (System_Collections_Generic_List_Material__o *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$Finish
// il2cpp: void Characters_ShifterGrowthEffect__Finish (Characters_ShifterGrowthEffect_o* __this, const MethodInfo* method);
// 0x5c1ccc0
// eh: try 0x5c1cdf4..0x5c1d05c -> pad 0x5c1d07b (+15 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c1d093..0x5c1d098 -> pad 0x5c1d0b7 cleanup
// eh: try 0x5c1d0ba..0x5c1d0c4 -> pad 0x5c1d11d catch (...) [compiler noexcept guard]
// eh: try 0x5c1d0de..0x5c1d0e3 -> pad 0x5c1d108 cleanup
// eh: try 0x5c1d10b..0x5c1d115 -> pad 0x5c1d11d catch (...) [compiler noexcept guard]
// asm: 57 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c1cdee: nop 
// asm:   0x5c1cfce: jmp 0x5c1cf80
// asm:   0x5c1d061: jmp 0x5c1d07b
// asm:   0x5c1d063: jmp 0x5c1d0c6
// asm:   0x5c1d065: jmp 0x5c1d07b
// asm:   0x5c1d067: jmp 0x5c1d07b
// asm:   0x5c1d069: jmp 0x5c1d07b
// asm:   0x5c1d06b: jmp 0x5c1d07b
// asm:   0x5c1d06d: jmp 0x5c1d07b
// asm:   0x5c1d06f: jmp 0x5c1d07b
// asm:   0x5c1d071: jmp 0x5c1d07b
// asm:   0x5c1d073: jmp 0x5c1d0c6
// asm:   0x5c1d075: jmp 0x5c1d07b
// asm:   0x5c1d077: jmp 0x5c1d07b
// asm:   0x5c1d079: jmp 0x5c1d0c6
// asm:   0x5c1d07b: mov r14, rax
// asm:   0x5c1d07e: cmp edx, 1
// asm:   0x5c1d081: jne 0x5c1d0ba
// asm:   0x5c1d083: mov rdi, r14
// asm:   0x5c1d086: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c1d08b: mov rbx, qword ptr [rax]
// asm:   0x5c1d08e: mov qword ptr [rsp + 8], rbx
// asm:   0x5c1d093: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c1d098: lea rax, [rip + 0x1672389]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_Dispose
// asm:   0x5c1d09f: mov rsi, qword ptr [rax]
// asm:   0x5c1d0a2: lea rdi, [rsp + 0x40]
// asm:   0x5c1d0a7: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c1d0ac: test rbx, rbx
// asm:   0x5c1d0af: je 0x5c1cea2
// asm:   0x5c1d0b5: jmp 0x5c1d100
// asm:   0x5c1d0b7: mov r14, rax
// asm:   0x5c1d0ba: lea rdi, [rsp + 8]
// asm:   0x5c1d0bf: call 0x2fd91c0  ; il2cpp_runtime_helper_02fd91c0()
// asm:   0x5c1d0c4: jmp 0x5c1d115
// asm:   0x5c1d0c6: mov r14, rax
// asm:   0x5c1d0c9: cmp edx, 1
// asm:   0x5c1d0cc: jne 0x5c1d10b
// asm:   0x5c1d0ce: mov rdi, r14
// asm:   0x5c1d0d1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c1d0d6: mov rbx, qword ptr [rax]
// asm:   0x5c1d0d9: mov qword ptr [rsp + 8], rbx
// asm:   0x5c1d0de: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c1d0e3: lea rax, [rip + 0x1671546]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Object_Dispose
// asm:   0x5c1d0ea: mov rsi, qword ptr [rax]
// asm:   0x5c1d0ed: lea rdi, [rsp + 0x20]
// asm:   0x5c1d0f2: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c1d0f7: test rbx, rbx
// asm:   0x5c1d0fa: je 0x5c1cfeb
// asm:   0x5c1d100: mov rdi, rbx
// asm:   0x5c1d103: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c1d108: mov r14, rax
// asm:   0x5c1d10b: lea rdi, [rsp + 8]
// asm:   0x5c1d110: call 0x2fd91f0  ; il2cpp_runtime_helper_02fd91f0()
// asm:   0x5c1d115: mov rdi, r14
// asm:   0x5c1d118: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c1d11d: mov rdi, rax
// asm:   0x5c1d120: call 0x2ab61e0  ; __clang_call_terminate()

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
  MethodInfo *method_00;
  undefined1 local_80 [16];
  Characters_ShifterGrowthEffect_Layer_o *local_70;
  undefined1 local_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  Characters_ShifterGrowthEffect_Layer_o *local_58;
  undefined1 local_48 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_40;
  Characters_ShifterGrowthEffect_Layer_o *local_38;
  
  if (Il2CppMethodInitialized_0754773a == '\0') {
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
    Il2CppMethodInitialized_0754773a = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_38 = (Characters_ShifterGrowthEffect_Layer_o *)0x0;
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_58 = (Characters_ShifterGrowthEffect_Layer_o *)0x0;
  if ((__this->fields)._finished != false) {
    return;
  }
  (__this->fields)._finished = true;
  pSVar3 = (__this->fields)._layers;
  if (pSVar3 == (System_Collections_Generic_List_ShifterGrowthEffect_Layer__o *)0x0) goto label_05c1d05c;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
             (System_Collections_Generic_List_object__o *)pSVar3,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_ShifterGrowthEffect_Layer_GetEnumerator);
  local_38 = local_70;
  local_48 = (undefined1  [8])local_80._0_8_;
  pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)local_80._8_8_;
  local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_48;
  while (bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                            (MethodInfo_4C45C50 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_MoveNext
                           ), pCVar7 = local_38, bVar8) {
    if (local_38 == (Characters_ShifterGrowthEffect_Layer_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar9 = (UnityEngine_Object_o *)(local_38->fields).Renderer;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar8) {
      Characters_ShifterGrowthEffect__SyncMaterials(__this,pCVar7,method_00);
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
            ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
             (MethodInfo_4C45C40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_ShifterGrowthEffect_Layer_Dispose);
  pUVar5 = (__this->fields)._chunks;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    pUVar5 = (__this->fields)._chunks;
    if (pUVar5 == (UnityEngine_ParticleSystem_o *)0x0) goto label_05c1d05c;
    UnityEngine_ParticleSystem__Stop(pUVar5,true,1,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._chunks;
    if (pUVar5 == (UnityEngine_ParticleSystem_o *)0x0) goto label_05c1d05c;
    pUVar9 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy(pUVar9,0.5,(MethodInfo *)0x0);
  }
  pSVar6 = (__this->fields)._created;
  if (pSVar6 != (System_Collections_Generic_List_Object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
               (System_Collections_Generic_List_object__o *)pSVar6,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Object_GetEnumerator);
    local_58 = local_70;
    local_68 = (undefined1  [8])local_80._0_8_;
    pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_80._8_8_;
    local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
    while (bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_Object_MoveNext),
          pCVar7 = local_58, bVar8) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar8) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pCVar7,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Object_Dispose);
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
label_05c1d05c:
  ThrowNullReferenceException();
}


// Characters.ShifterGrowthEffect$$OnDestroy
// il2cpp: void Characters_ShifterGrowthEffect__OnDestroy (Characters_ShifterGrowthEffect_o* __this, const MethodInfo* method);
// 0x5c1d610

void Characters_ShifterGrowthEffect__OnDestroy(Characters_ShifterGrowthEffect_o *__this,MethodInfo *method)

{
  Characters_ShifterGrowthEffect__Finish(__this,method);
  return;
}


// Characters.ShifterGrowthEffect$$.ctor
// il2cpp: void Characters_ShifterGrowthEffect___ctor (Characters_ShifterGrowthEffect_o* __this, const MethodInfo* method);
// 0x5c1d620

void Characters_ShifterGrowthEffect___ctor(Characters_ShifterGrowthEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ShifterGrowthEffect_Layer__o *__this_00;
  System_Collections_Generic_List_Object__o *__this_01;
  System_Collections_Generic_List_Material__o *__this_02;
  System_Collections_Generic_List_Transform__o *__this_03;
  System_Collections_Generic_Dictionary_Transform__int__o *__this_04;
  
  if (Il2CppMethodInitialized_0754773b == '\0') {
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
    Il2CppMethodInitialized_0754773b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ShifterGrowthEffect_Layer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_ShifterGrowthEffect_Layer_ctor);
  (__this->fields)._layers = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._layers);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Object);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Object_ctor);
  (__this->fields)._created = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._created);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  (__this->fields)._materialBuffer = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._materialBuffer);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Transform);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Transform_ctor);
  (__this->fields)._nodes = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._nodes);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Transform_int);
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_object__int__o *)__this_04,
             (MethodInfo_4A9CB80 *)MethodInfo_System_Collections_Generic_Dictionary_Transform_int_ctor);
  (__this->fields)._nodeIndices = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._nodeIndices);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.ShifterGrowthEffect$$.cctor
// il2cpp: void Characters_ShifterGrowthEffect___cctor (const MethodInfo* method);
// 0x5c1d7d0

void Characters_ShifterGrowthEffect___cctor(MethodInfo *method)

{
  Characters_ShifterGrowthEffect_StaticFields *pCVar1;
  Characters_ShifterGrowthEffect_c *pCVar2;
  int32_t iVar3;
  System_String_array *pSVar4;
  
  if (Il2CppMethodInitialized_0754773c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterGrowthEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"upperchest");
    il2cpp_codegen_initialize_runtime_metadata(&"_TissueIntensity");
    il2cpp_codegen_initialize_runtime_metadata(&"chest");
    il2cpp_codegen_initialize_runtime_metadata(&"_Growth");
    Il2CppMethodInitialized_0754773c = '\x01';
  }
  iVar3 = UnityEngine_Shader__PropertyToID("_Growth",(MethodInfo *)0x0);
  TypeInfo_Characters_ShifterGrowthEffect->static_fields->Growth = iVar3;
  iVar3 = UnityEngine_Shader__PropertyToID("_TissueIntensity",(MethodInfo *)0x0);
  TypeInfo_Characters_ShifterGrowthEffect->static_fields->TissueIntensity = iVar3;
  pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if (pSVar4 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar4->max_length != 0) {
    pSVar4->m_Items[0] = "chest";
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
    if ((pSVar4->max_length & 0xfffffffe) != 0) {
      pSVar4->m_Items[1] = "upperchest";
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
      pCVar1 = TypeInfo_Characters_ShifterGrowthEffect->static_fields;
      pCVar1->Origin = pSVar4;
      Il2CppCodeGenWriteBarrier(&pCVar1->Origin);
      pCVar2 = TypeInfo_Characters_ShifterGrowthEffect;
      pCVar1 = TypeInfo_Characters_ShifterGrowthEffect->static_fields;
      (pCVar1->ChunkDark).fields.r = 0.32;
      (pCVar1->ChunkDark).fields.g = 0.04;
      (pCVar1->ChunkDark).fields.b = 0.03;
      (pCVar1->ChunkDark).fields.a = 1.0;
      pCVar1 = pCVar2->static_fields;
      (pCVar1->ChunkLight).fields.r = 0.72;
      (pCVar1->ChunkLight).fields.g = 0.15;
      (pCVar1->ChunkLight).fields.b = 0.1;
      (pCVar1->ChunkLight).fields.a = 1.0;
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


