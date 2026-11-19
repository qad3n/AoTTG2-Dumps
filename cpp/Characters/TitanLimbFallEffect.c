// Type: Characters.TitanLimbFallEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/TitanLimbFallEffect.cs
// Prior real C# source: none
// --------------------------------

// Characters.TitanLimbFallEffect.Attachment$$.ctor
// il2cpp: void Characters_TitanLimbFallEffect_Attachment___ctor (Characters_TitanLimbFallEffect_Attachment_o* __this, UnityEngine_Mesh_o* mesh, UnityEngine_Matrix4x4_o matrix, bool ownsMesh, const MethodInfo* method);
// 0x5c51630

void Characters_TitanLimbFallEffect_Attachment___ctor
               (Characters_TitanLimbFallEffect_Attachment_o *__this,UnityEngine_Mesh_o *mesh,
               UnityEngine_Matrix4x4_o matrix,bool ownsMesh,MethodInfo *method)

{
  System_Collections_Generic_List_Material__o *__this_00;
  UnityEngine_MaterialPropertyBlock_o *__this_01;
  
  if (Il2CppMethodInitialized_0754785e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MaterialPropertyBlock);
    Il2CppMethodInitialized_0754785e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  (__this->fields).Materials = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Materials);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
  UnityEngine_MaterialPropertyBlock___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields).Properties = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Properties);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Mesh = mesh;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Mesh);
  (__this->fields).Matrix.fields.m03 = matrix.fields.m03;
  (__this->fields).Matrix.fields.m13 = matrix.fields.m13;
  (__this->fields).Matrix.fields.m23 = matrix.fields.m23;
  (__this->fields).Matrix.fields.m33 = matrix.fields.m33;
  (__this->fields).Matrix.fields.m02 = matrix.fields.m02;
  (__this->fields).Matrix.fields.m12 = matrix.fields.m12;
  (__this->fields).Matrix.fields.m22 = matrix.fields.m22;
  (__this->fields).Matrix.fields.m32 = matrix.fields.m32;
  (__this->fields).Matrix.fields.m01 = matrix.fields.m01;
  (__this->fields).Matrix.fields.m11 = matrix.fields.m11;
  (__this->fields).Matrix.fields.m21 = matrix.fields.m21;
  (__this->fields).Matrix.fields.m31 = matrix.fields.m31;
  (__this->fields).Matrix.fields.m00 = matrix.fields.m00;
  (__this->fields).Matrix.fields.m10 = matrix.fields.m10;
  (__this->fields).Matrix.fields.m20 = matrix.fields.m20;
  (__this->fields).Matrix.fields.m30 = matrix.fields.m30;
  (__this->fields)._ownsMesh = ownsMesh;
  return;
}


// Characters.TitanLimbFallEffect.Attachment$$Dispose
// il2cpp: void Characters_TitanLimbFallEffect_Attachment__Dispose (Characters_TitanLimbFallEffect_Attachment_o* __this, const MethodInfo* method);
// 0x5c53390
// eh: try 0x5c53470..0x5c534a0 -> pad 0x5c534c7 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c534df..0x5c534e4 -> pad 0x5c53503 cleanup
// eh: try 0x5c53506..0x5c53510 -> pad 0x5c53518 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c534c5: jmp 0x5c534c7
// asm:   0x5c534c7: mov rbx, rax
// asm:   0x5c534ca: cmp edx, 1
// asm:   0x5c534cd: jne 0x5c53506
// asm:   0x5c534cf: mov rdi, rbx
// asm:   0x5c534d2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c534d7: mov rbx, qword ptr [rax]
// asm:   0x5c534da: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c534df: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c534e4: lea rax, [rip + 0x163af95]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x5c534eb: mov rsi, qword ptr [rax]
// asm:   0x5c534ee: mov rdi, rsp
// asm:   0x5c534f1: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c534f6: test rbx, rbx
// asm:   0x5c534f9: je 0x5c534b4
// asm:   0x5c534fb: mov rdi, rbx
// asm:   0x5c534fe: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c53503: mov rbx, rax
// asm:   0x5c53506: lea rdi, [rsp + 0x18]
// asm:   0x5c5350b: call 0x2fd9a80  ; il2cpp_runtime_helper_02fd9a80()
// asm:   0x5c53510: mov rdi, rbx
// asm:   0x5c53513: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c53518: mov rdi, rax
// asm:   0x5c5351b: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_TitanLimbFallEffect_Attachment__Dispose
               (Characters_TitanLimbFallEffect_Attachment_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  System_Collections_Generic_List_Material__o *__this_00;
  Il2CppObject *obj_00;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_0754785f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754785f = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._ownsMesh != false) {
    obj = (UnityEngine_Object_o *)(__this->fields).Mesh;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).Materials;
  if (__this_00 == (System_Collections_Generic_List_Material__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
  local_30 = 0;
  local_28 = (undefined1 *)&local_48;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
    obj_00 = local_48.fields._current;
    if (!bVar1) break;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)obj_00,(MethodInfo *)0x0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
  return;
}


// Characters.TitanLimbFallEffect.<>c$$.cctor
// il2cpp: void Characters_TitanLimbFallEffect___c___cctor (const MethodInfo* method);
// 0x5c53d80

void Characters_TitanLimbFallEffect___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547860 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect_c);
    Il2CppMethodInitialized_07547860 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Characters_TitanLimbFallEffect_c->static_fields->__9 =
       (Characters_TitanLimbFallEffect___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanLimbFallEffect_c->static_fields->__9);
  return;
}


// Characters.TitanLimbFallEffect.<>c$$.ctor
// il2cpp: void Characters_TitanLimbFallEffect___c___ctor (Characters_TitanLimbFallEffect___c_o* __this, const MethodInfo* method);
// 0x5c53df0

void Characters_TitanLimbFallEffect___c___ctor
               (Characters_TitanLimbFallEffect___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.TitanLimbFallEffect.<>c$$<Play>b__51_0
// il2cpp: bool Characters_TitanLimbFallEffect___c___Play_b__51_0 (Characters_TitanLimbFallEffect___c_o* __this, Characters_TitanLimbFallEffect_o* piece, const MethodInfo* method);
// 0x5c53e00

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
// 0x5c4d460

void Characters_TitanLimbFallEffect__PlayHead
               (UnityEngine_SkinnedMeshRenderer_o *source,UnityEngine_Transform_o *head,
               UnityEngine_Vector3_o velocity,UnityEngine_ParticleSystem_o *neckBlood,float dissolveDelay,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Mesh_o *limb;
  Characters_TitanLimbFallEffect_o *__this;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_0754784a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    Il2CppMethodInitialized_0754784a = '\x01';
  }
  if (source == (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
label_05c4d581:
    ThrowNullReferenceException();
  }
  limb = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(source,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
  }
  method_00 = (MethodInfo *)0x0;
  __this = Characters_TitanLimbFallEffect__Play
                     (source,limb,(UnityEngine_Material_o *)0x0,(UnityEngine_Mesh_o *)0x0,0.0,velocity,head,
                      in_R9);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (__this == (Characters_TitanLimbFallEffect_o *)0x0) goto label_05c4d581;
    (__this->fields)._dissolveDelay = dissolveDelay;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)neckBlood,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      Characters_TitanLimbFallEffect__PlayBlood(__this,neckBlood,head,method_00);
      return;
    }
  }
  return;
}


// Characters.TitanLimbFallEffect$$Play
// il2cpp: Characters_TitanLimbFallEffect_o* Characters_TitanLimbFallEffect__Play (UnityEngine_SkinnedMeshRenderer_o* source, UnityEngine_Mesh_o* limb, UnityEngine_Material_o* wound, UnityEngine_Mesh_o* growth, float progress, UnityEngine_Vector3_o velocity, UnityEngine_Transform_o* attachments, const MethodInfo* method);
// 0x5c4d590
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c4d849: test rbp, rbp
// asm:   0x5c4d852: jmp 0x5c4dae9

Characters_TitanLimbFallEffect_o *
Characters_TitanLimbFallEffect__Play
          (UnityEngine_SkinnedMeshRenderer_o *source,UnityEngine_Mesh_o *limb,UnityEngine_Material_o *wound,
          UnityEngine_Mesh_o *growth,float progress,UnityEngine_Vector3_o velocity,
          UnityEngine_Transform_o *attachments,MethodInfo *method)

{
  Characters_TitanLimbFallEffect_StaticFields *pCVar1;
  System_Collections_Generic_List_TitanLimbFallEffect__o *pSVar2;
  Il2CppObject *object;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Shader_o *pUVar5;
  Characters_TitanLimbFallEffect___c_StaticFields *pCVar6;
  System_Predicate_T__o *match;
  Characters_TitanLimbFallEffect_o *__this;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_MaterialPropertyBlock_o *pUVar8;
  Characters_BasicTitanComponentCache_c *method_00;
  MethodInfo *in_stack_ffffffffffffff98;
  
  if (Il2CppMethodInitialized_0754784b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Characters_TitanLimbFallEffect_c_Play_b__51_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Falling titan limb");
    Il2CppMethodInitialized_0754784b = '\x01';
  }
  if (source != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
    bVar3 = UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)source,(MethodInfo *)0x0);
    if (!bVar3) {
      return (Characters_TitanLimbFallEffect_o *)0x0;
    }
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      __this = (Characters_TitanLimbFallEffect_o *)0x0;
      bVar3 = UnityEngine_GameObject__get_activeInHierarchy(pUVar4,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)limb,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          return (Characters_TitanLimbFallEffect_o *)0x0;
        }
        if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
        }
        pUVar7 = (UnityEngine_Object_o *)TypeInfo_Characters_TitanLimbFallEffect->static_fields->_shader;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          method_00 = TypeInfo_Characters_BasicTitanComponentCache;
          if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
          }
          pUVar5 = Characters_BasicTitanComponentCache__LoadDissolveShader((MethodInfo *)method_00);
          if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
          }
          pCVar1 = TypeInfo_Characters_TitanLimbFallEffect->static_fields;
          pCVar1->_shader = pUVar5;
          Il2CppCodeGenWriteBarrier(&pCVar1->_shader);
        }
        if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
        }
        pUVar7 = (UnityEngine_Object_o *)TypeInfo_Characters_TitanLimbFallEffect->static_fields->_shader;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          return (Characters_TitanLimbFallEffect_o *)0x0;
        }
        if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
        }
        pSVar2 = TypeInfo_Characters_TitanLimbFallEffect->static_fields->Pool;
        if ((TypeInfo_Characters_TitanLimbFallEffect_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect_c);
          pCVar6 = TypeInfo_Characters_TitanLimbFallEffect_c->static_fields;
          match = (System_Predicate_T__o *)pCVar6->__9__51_0;
        }
        else {
          pCVar6 = TypeInfo_Characters_TitanLimbFallEffect_c->static_fields;
          match = (System_Predicate_T__o *)pCVar6->__9__51_0;
        }
        if (match == (System_Predicate_T__o *)0x0) {
          if ((((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect_c)->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect_c);
            pCVar6 = TypeInfo_Characters_TitanLimbFallEffect_c->static_fields;
          }
          object = (Il2CppObject *)pCVar6->__9;
          match = (System_Predicate_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_TitanLimbFallEffect);
          System_Predicate_object____ctor
                    ((System_Predicate_object__o *)match,object,
                     (intptr_t)MethodInfo_Characters_TitanLimbFallEffect_c_Play_b__51_0,
                     (MethodInfo_3DC95B0 *)0x0);
          pCVar6 = TypeInfo_Characters_TitanLimbFallEffect_c->static_fields;
          pCVar6->__9__51_0 = (System_Predicate_TitanLimbFallEffect__o *)match;
          Il2CppCodeGenWriteBarrier(&pCVar6->__9__51_0);
        }
        if (pSVar2 == (System_Collections_Generic_List_TitanLimbFallEffect__o *)0x0) goto label_05c4dae9;
        __this = System_Collections_Generic_List_object___Find
                           ((System_Collections_Generic_List_object__o *)pSVar2,match,
                            (MethodInfo_395DA40 *)
                            MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Find);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
          }
          pSVar2 = TypeInfo_Characters_TitanLimbFallEffect->static_fields->Pool;
          if (pSVar2 == (System_Collections_Generic_List_TitanLimbFallEffect__o *)0x0) goto label_05c4dae9;
          if (0x17 < (pSVar2->fields)._size) {
            return (Characters_TitanLimbFallEffect_o *)0x0;
          }
          pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
          UnityEngine_GameObject___ctor(pUVar4,"Falling titan limb",(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05c4dae9;
          __this = UnityEngine_GameObject__AddComponent_object_
                             (pUVar4,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_TitanLimbFallEffect);
          pUVar7 = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh)
          ;
          UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pUVar7,(MethodInfo *)0x0);
          if ((pUVar7 == (UnityEngine_Object_o *)0x0) ||
             (UnityEngine_Object__set_name(pUVar7,"Falling titan limb",(MethodInfo *)0x0),
             __this == (Characters_TitanLimbFallEffect_o *)0x0)) goto label_05c4dae9;
          (__this->fields)._mesh = (UnityEngine_Mesh_o *)pUVar7;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._mesh);
          pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
          UnityEngine_MaterialPropertyBlock___ctor(pUVar8,(MethodInfo *)0x0);
          (__this->fields)._properties = pUVar8;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._properties);
          pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
          UnityEngine_MaterialPropertyBlock___ctor(pUVar8,(MethodInfo *)0x0);
          (__this->fields)._growthProperties = pUVar8;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._growthProperties);
          if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
          }
          pSVar2 = TypeInfo_Characters_TitanLimbFallEffect->static_fields->Pool;
          if (pSVar2 == (System_Collections_Generic_List_TitanLimbFallEffect__o *)0x0) goto label_05c4dae9;
          il2cpp_runtime_helper_02fd97e0(pSVar2,__this,MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Add);
        }
        else if (__this == (Characters_TitanLimbFallEffect_o *)0x0) goto label_05c4dae9;
        Characters_TitanLimbFallEffect__Initialize
                  (__this,source,limb,wound,growth,progress,velocity,attachments,in_stack_ffffffffffffff98);
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05c4dae9;
        UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
      }
      return __this;
    }
  }
label_05c4dae9:
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$PlayBlood
// il2cpp: void Characters_TitanLimbFallEffect__PlayBlood (Characters_TitanLimbFallEffect_o* __this, UnityEngine_ParticleSystem_o* neckBlood, UnityEngine_Transform_o* head, const MethodInfo* method);
// 0x5c4daf0

void Characters_TitanLimbFallEffect__PlayBlood
               (Characters_TitanLimbFallEffect_o *__this,UnityEngine_ParticleSystem_o *neckBlood,
               UnityEngine_Transform_o *head,MethodInfo *method)

{
  UnityEngine_ParticleSystem_o **targetAddress;
  UnityEngine_Vector3_StaticFields *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_ParticleSystem_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  float fVar7;
  float fVar8;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar9;
  float in_XMM1_Db;
  float fVar10;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Quaternion_o UVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_Fields UStack_98;
  float fStack_8c;
  undefined1 auStack_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [8];
  float fStack_70;
  float fStack_6c;
  UnityEngine_Vector3_Fields UStack_68;
  undefined1 auStack_58 [16];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (Il2CppMethodInitialized_0754784c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_GameObject_71af8b0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754784c = '\x01';
  }
  pUVar5 = (__this->fields)._blood;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._blood;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (neckBlood == (UnityEngine_ParticleSystem_o *)0x0) goto label_05c4deb4;
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)neckBlood,(MethodInfo *)0x0);
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pUVar3 = UnityEngine_Object__Instantiate_object__35a4410
                       ((Il2CppObject *)pUVar3,pUVar4,
                        (MethodInfo_35A4410 *)MethodInfo_UnityEngine_Object_Instantiate_GameObject_71af8b0);
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_05c4deb4;
    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar3,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem);
    *targetAddress = pUVar5;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  if (head != (UnityEngine_Transform_o *)0x0) {
    UVar15 = UnityEngine_Transform__get_position(head,(MethodInfo *)0x0);
    fStack_80 = (float)extraout_XMM0_Dc;
    auStack_88 = (undefined1  [8])UVar15.fields._0_8_;
    fStack_7c = (float)extraout_XMM0_Dd;
    auStack_78._4_4_ = in_XMM1_Db;
    auStack_78._0_4_ = UVar15.fields.z;
    fStack_70 = (float)in_XMM1_Dc;
    fStack_6c = (float)in_XMM1_Dd;
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar15 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      if (*targetAddress != (UnityEngine_ParticleSystem_o *)0x0) {
        fStack_48 = (float)auStack_88._4_4_ - UVar15.fields.y;
        fStack_70 = (float)auStack_78._4_4_ - in_XMM1_Db;
        auStack_78._4_4_ = (float)auStack_88._0_4_ - UVar15.fields.x;
        auStack_78._0_4_ = (float)auStack_78._0_4_ - UVar15.fields.z;
        fStack_6c = (float)auStack_88._4_4_ - UVar15.fields.y;
        auStack_88._4_4_ = fStack_48;
        auStack_88._0_4_ = (float)auStack_88._0_4_ - UVar15.fields.x;
        fStack_80 = fStack_80 - extraout_XMM0_Dc_00;
        fStack_7c = fStack_7c - extraout_XMM0_Dd_00;
        fStack_44 = fStack_48;
        fStack_40 = fStack_48;
        fStack_3c = fStack_48;
        pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
        UVar15 = UnityEngine_Transform__get_position(head,(MethodInfo *)0x0);
        fStack_8c = UVar15.fields.z;
        auStack_58._8_4_ = extraout_XMM0_Dc_01;
        auStack_58._0_8_ = UVar15.fields._0_8_;
        auStack_58._12_4_ = extraout_XMM0_Dd_01;
        fVar7 = (float)auStack_78._4_4_ * (float)auStack_78._4_4_;
        if (fVar7 + fStack_48 * fStack_48 + (float)auStack_78._0_4_ * (float)auStack_78._0_4_ <= 0.0001) {
          if (neckBlood == (UnityEngine_ParticleSystem_o *)0x0) goto label_05c4deb4;
          fVar13 = fVar7;
          pUVar6 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)neckBlood,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_05c4deb4;
          UVar14 = UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
          fStack_80 = (float)extraout_XMM0_Dc_02;
          auStack_88 = (undefined1  [8])UVar14.fields._0_8_;
          fStack_7c = (float)extraout_XMM0_Dd_02;
          fStack_70 = fVar7;
          auStack_78 = (undefined1  [8])UVar14.fields._8_8_;
          fStack_6c = fVar13;
          UStack_98.x = 3.1415927;
          UStack_98.y = 0.0;
          UStack_98.z = 0.0;
          UVar14 = UnityEngine_Quaternion__Internal_FromEulerRad
                             ((UnityEngine_Vector3_o *)&UStack_98,(MethodInfo *)0x0);
          fVar9 = UVar14.fields.z;
          fVar10 = UVar14.fields.w;
          fVar13 = UVar14.fields.x;
          fVar8 = UVar14.fields.y;
          fVar7 = (fVar10 * (float)auStack_88._0_4_ + (float)auStack_78._4_4_ * fVar13 +
                  (float)auStack_88._4_4_ * fVar9) - (float)auStack_78._0_4_ * fVar8;
          fVar11 = ((float)auStack_88._4_4_ * fVar10 + fVar8 * (float)auStack_78._4_4_ +
                   fVar13 * (float)auStack_78._0_4_) - fVar9 * (float)auStack_88._0_4_;
          fVar12 = ((float)auStack_78._4_4_ * fVar9 + fVar10 * (float)auStack_78._0_4_ +
                   fVar8 * (float)auStack_88._0_4_) - fVar13 * (float)auStack_88._4_4_;
          fVar13 = ((fVar10 * (float)auStack_78._4_4_ - fVar13 * (float)auStack_88._0_4_) -
                   fVar8 * (float)auStack_88._4_4_) - fVar9 * (float)auStack_78._0_4_;
        }
        else {
          UStack_98.y = (float)auStack_88._4_4_;
          UStack_98.x = (float)auStack_78._4_4_;
          UStack_98.z = (float)auStack_78._0_4_;
          if (Il2CppMethodInitialized_0753e72c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e72c = '\x01';
          }
          pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
          UStack_68.x = (pUVar1->upVector).fields.x;
          UStack_68.y = (pUVar1->upVector).fields.y;
          UStack_68.z = (pUVar1->upVector).fields.z;
          UVar14 = UnityEngine_Quaternion__Internal_LookRotation
                             ((UnityEngine_Vector3_o *)&UStack_98,(UnityEngine_Vector3_o *)&UStack_68,
                              (MethodInfo *)0x0);
          fVar12 = UVar14.fields.z;
          fVar13 = UVar14.fields.w;
          fVar7 = UVar14.fields.x;
          fVar11 = UVar14.fields.y;
        }
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UVar14.fields.y = fVar11;
          UVar14.fields.x = fVar7;
          UVar14.fields.w = fVar13;
          UVar14.fields.z = fVar12;
          UVar15.fields.z = fStack_8c;
          UVar15.fields.x = (float)auStack_58._0_4_;
          UVar15.fields.y = (float)auStack_58._4_4_;
          UnityEngine_Transform__SetPositionAndRotation(pUVar4,UVar15,UVar14,(MethodInfo *)0x0);
          if (*targetAddress != (UnityEngine_ParticleSystem_o *)0x0) {
            pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
            if (neckBlood != (UnityEngine_ParticleSystem_o *)0x0) {
              pUVar6 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)neckBlood,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                UVar15 = UnityEngine_Transform__get_lossyScale(pUVar6,(MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_localScale(pUVar4,UVar15,(MethodInfo *)0x0);
                  if (*targetAddress != (UnityEngine_ParticleSystem_o *)0x0) {
                    UnityEngine_ParticleSystem__Clear(*targetAddress,true,(MethodInfo *)0x0);
                    if (*targetAddress != (UnityEngine_ParticleSystem_o *)0x0) {
                      UnityEngine_ParticleSystem__Play(*targetAddress,true,(MethodInfo *)0x0);
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
label_05c4deb4:
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$Initialize
// il2cpp: void Characters_TitanLimbFallEffect__Initialize (Characters_TitanLimbFallEffect_o* __this, UnityEngine_SkinnedMeshRenderer_o* source, UnityEngine_Mesh_o* limb, UnityEngine_Material_o* wound, UnityEngine_Mesh_o* growth, float progress, UnityEngine_Vector3_o velocity, UnityEngine_Transform_o* attachments, const MethodInfo* method);
// 0x5c4dec0
// eh: try 0x5c4f2c4..0x5c4f4ac -> pad 0x5c4f4ae (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c4f4cb..0x5c4f4d0 -> pad 0x5c4f4f8 cleanup
// eh: try 0x5c4f4fb..0x5c4f508 -> pad 0x5c4f510 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c4f111: jmp 0x5c4f125
// asm:   0x5c4f49d: jmp 0x5c4ea05
// asm:   0x5c4f4ac: jmp 0x5c4f4b0
// asm:   0x5c4f4ae: jmp 0x5c4f4b0
// asm:   0x5c4f4b0: mov rbp, rax
// asm:   0x5c4f4b3: cmp edx, 1
// asm:   0x5c4f4b6: jne 0x5c4f4fb
// asm:   0x5c4f4b8: mov rdi, rbp
// asm:   0x5c4f4bb: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c4f4c0: mov rbp, qword ptr [rax]
// asm:   0x5c4f4c3: mov qword ptr [rsp + 0x90], rbp
// asm:   0x5c4f4cb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c4f4d0: lea rax, [rip + 0x163efa9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x5c4f4d7: mov rsi, qword ptr [rax]
// asm:   0x5c4f4da: lea rdi, [rsp + 0x130]
// asm:   0x5c4f4e2: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c4f4e7: test rbp, rbp
// asm:   0x5c4f4ea: je 0x5c4f31f
// asm:   0x5c4f4f0: mov rdi, rbp
// asm:   0x5c4f4f3: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c4f4f8: mov rbp, rax
// asm:   0x5c4f4fb: lea rdi, [rsp + 0x90]
// asm:   0x5c4f503: call 0x2fd9830  ; il2cpp_runtime_helper_02fd9830()
// asm:   0x5c4f508: mov rdi, rbp
// asm:   0x5c4f50b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c4f510: mov rdi, rax
// asm:   0x5c4f513: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_TitanLimbFallEffect__Initialize
               (Characters_TitanLimbFallEffect_o *__this,UnityEngine_SkinnedMeshRenderer_o *source,
               UnityEngine_Mesh_o *limb,UnityEngine_Material_o *wound,UnityEngine_Mesh_o *growth,
               float progress,UnityEngine_Vector3_o velocity,UnityEngine_Transform_o *attachments,
               MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Vector3_o *pUVar2;
  UnityEngine_Mesh_o **targetAddress;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  int iVar11;
  uint uVar12;
  uint32_t uVar13;
  UnityEngine_ParticleSystem_o *pUVar14;
  System_Collections_Generic_List_Vector3__o *pSVar15;
  System_Collections_Generic_List_Material__o *pSVar16;
  UnityEngine_Material_array *pUVar17;
  System_Collections_Generic_List_Material__o *pSVar18;
  UnityEngine_MaterialPropertyBlock_o *pUVar19;
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  Il2CppObject *__this_00;
  undefined8 uVar24;
  bool bVar25;
  int32_t iVar26;
  UnityEngine_Transform_o *pUVar27;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Object_o *pUVar28;
  UnityEngine_Mesh_o *pUVar29;
  UnityEngine_Vector3_StaticFields *pUVar30;
  MethodInfo *method_00;
  MethodInfo *pMVar31;
  int count;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int index;
  MethodInfo *pMVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  float fVar43;
  UnityEngine_Vector3_o UVar44;
  float local_18c;
  float local_188;
  float fStack_184;
  float local_178;
  float fStack_174;
  undefined8 local_158;
  float local_148;
  float fStack_144;
  float local_138;
  float fStack_134;
  undefined1 local_108 [12];
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  undefined8 local_e8;
  float local_e0;
  float local_dc;
  ulong local_d8;
  float local_d0;
  float local_cc;
  undefined8 local_c8;
  UnityEngine_Vector3_Fields UStack_c0;
  UnityEngine_Transform_o *local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  undefined1 local_48 [16];
  
  local_18c = velocity.fields.z;
  pMVar32 = (MethodInfo *)growth;
  local_b0 = attachments;
  if (Il2CppMethodInitialized_0754784d == '\0') {
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
    Il2CppMethodInitialized_0754784d = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  method_00 = (MethodInfo *)(__this->fields)._mesh;
  Characters_TitanLimbFallEffect__Bake(__this,source,limb,(UnityEngine_Mesh_o *)method_00,pMVar32);
  if ((source == (UnityEngine_SkinnedMeshRenderer_o *)0x0) ||
     (pUVar27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)source,(MethodInfo *)0x0),
     pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05c4f4a2;
  UnityEngine_Transform__get_localToWorldMatrix
            ((UnityEngine_Matrix4x4_o *)local_108,pUVar27,(MethodInfo *)0x0);
  fVar39 = fStack_f4;
  fVar34 = local_f8;
  pUVar29 = (__this->fields)._mesh;
  if (pUVar29 == (UnityEngine_Mesh_o *)0x0) goto label_05c4f4a2;
  uVar23 = local_108._8_4_;
  local_48 = ZEXT416((uint)fStack_fc);
  _local_78 = ZEXT416((uint)local_ec);
  _local_98 = ZEXT416((uint)local_dc);
  local_c8 = local_108._0_8_;
  UStack_c0.x = 0.0;
  UStack_c0.y = 0.0;
  local_88._8_8_ = 0;
  local_88._0_8_ = local_d8;
  local_a8 = ZEXT416((uint)local_cc);
  UnityEngine_Mesh__get_bounds((UnityEngine_Bounds_o *)local_108,pUVar29,(MethodInfo *)0x0);
  fVar36 = local_108._0_4_;
  fVar8 = local_108._4_4_;
  fVar37 = local_e0 * (float)local_108._8_4_ + local_f0 * fVar8 + (float)uVar23 * fVar36 + local_d0;
  fVar6 = local_c8._4_4_ * 0.0 + (float)local_c8 * 0.0;
  local_148 = (float)local_e8;
  fStack_144 = SUB84(local_e8,4);
  fVar4 = (float)uVar23 * 0.0;
  (__this->fields)._origin.fields.z = fVar37;
  fVar33 = (float)local_108._8_4_ * local_148 + fVar8 * fVar34 + fVar36 * (float)local_c8 +
           (float)local_88._0_4_;
  fVar36 = (float)local_108._8_4_ * fStack_144 + fVar8 * fVar39 + fVar36 * local_c8._4_4_ +
           (float)local_88._4_4_;
  fVar8 = local_f0 * 0.0;
  (__this->fields)._origin.fields.x = fVar33;
  (__this->fields)._origin.fields.y = fVar36;
  (__this->fields)._meshOffset.fields.m00 =
       (fVar4 + local_c8._4_4_ * 0.0 + (float)local_c8) - (float)local_48._0_4_ * fVar33;
  (__this->fields)._meshOffset.fields.m10 =
       (fVar4 + (float)local_c8 * 0.0 + local_c8._4_4_) - (float)local_48._0_4_ * fVar36;
  (__this->fields)._meshOffset.fields.m20 = ((float)uVar23 + fVar6) - (float)local_48._0_4_ * fVar37;
  (__this->fields)._meshOffset.fields.m30 = fVar6 + fVar4 + (float)local_48._0_4_;
  fVar6 = fVar39 * 0.0 + fVar34 * 0.0;
  fVar4 = local_e0 * 0.0;
  (__this->fields)._meshOffset.fields.m01 = (fVar8 + fVar39 * 0.0 + fVar34) - (float)local_78._0_4_ * fVar33;
  (__this->fields)._meshOffset.fields.m11 = (fVar8 + fVar34 * 0.0 + fVar39) - (float)local_78._0_4_ * fVar36;
  (__this->fields)._meshOffset.fields.m21 = (local_f0 + fVar6) - (float)local_78._0_4_ * fVar37;
  (__this->fields)._meshOffset.fields.m31 = fVar6 + fVar8 + (float)local_78._0_4_;
  fVar8 = fStack_144 * 0.0 + local_148 * 0.0;
  (__this->fields)._meshOffset.fields.m02 =
       (fVar4 + fStack_144 * 0.0 + local_148) - (float)local_98._0_4_ * fVar33;
  (__this->fields)._meshOffset.fields.m12 =
       (fVar4 + local_148 * 0.0 + fStack_144) - (float)local_98._0_4_ * fVar36;
  (__this->fields)._meshOffset.fields.m22 = (local_e0 + fVar8) - (float)local_98._0_4_ * fVar37;
  (__this->fields)._meshOffset.fields.m32 = fVar8 + fVar4 + (float)local_98._0_4_;
  fVar4 = (float)local_88._4_4_ * 0.0 + (float)local_88._0_4_ * 0.0;
  fVar8 = local_d0 * 0.0;
  (__this->fields)._meshOffset.fields.m03 =
       (fVar8 + (float)local_88._4_4_ * 0.0 + (float)local_88._0_4_) - (float)local_a8._0_4_ * fVar33;
  (__this->fields)._meshOffset.fields.m13 =
       (fVar8 + (float)local_88._0_4_ * 0.0 + (float)local_88._4_4_) - (float)local_a8._0_4_ * fVar36;
  (__this->fields)._meshOffset.fields.m23 = (local_d0 + fVar4) - fVar37 * (float)local_a8._0_4_;
  (__this->fields)._meshOffset.fields.m33 = fVar4 + fVar8 + (float)local_a8._0_4_;
  pUVar27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  uVar3 = (__this->fields)._origin.fields.x;
  uVar7 = (__this->fields)._origin.fields.y;
  UVar44.fields.y = (float)uVar7;
  UVar44.fields.x = (float)uVar3;
  fVar33 = (__this->fields)._origin.fields.z;
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    local_a8._0_4_ = fVar33;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
    fVar33 = (float)local_a8._0_4_;
  }
  if (pUVar27 == (UnityEngine_Transform_o *)0x0) goto label_05c4f4a2;
  UVar44.fields.z = fVar33;
  UnityEngine_Transform__SetPositionAndRotation
            (pUVar27,UVar44,
             (UnityEngine_Quaternion_o)
             *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
             (MethodInfo *)0x0);
  pUVar29 = (__this->fields)._mesh;
  if (pUVar29 == (UnityEngine_Mesh_o *)0x0) goto label_05c4f4a2;
  UnityEngine_Mesh__get_bounds((UnityEngine_Bounds_o *)local_108,pUVar29,(MethodInfo *)0x0);
  fVar37 = fStack_fc + fStack_fc;
  fVar36 = local_f8 + local_f8;
  fVar8 = fStack_f4 + fStack_f4;
  fVar4 = (float)local_c8 * fVar37;
  fVar33 = local_c8._4_4_ * fVar37;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  fVar4 = fVar34 * fVar36 + fVar4 + local_148 * fVar8;
  fVar39 = fVar39 * fVar36 + fVar33 + fStack_144 * fVar8;
  fVar34 = local_f0 * fVar36 + (float)uVar23 * fVar37 + local_e0 * fVar8;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar34 = fVar34 * fVar34 + fVar39 * fVar39 + fVar4 * fVar4;
  if (fVar34 < 0.0) {
    fVar34 = sqrtf(fVar34);
  }
  else {
    fVar34 = SQRT(fVar34);
  }
  local_a8._0_4_ = fVar34;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar25 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)local_b0,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar25) {
    pUVar29 = (__this->fields)._mesh;
    if (pUVar29 == (UnityEngine_Mesh_o *)0x0) goto label_05c4f4a2;
  }
  else {
    if (limb == (UnityEngine_Mesh_o *)0x0) goto label_05c4f4a2;
    pUVar29 = limb;
  }
  UnityEngine_Mesh__get_bounds((UnityEngine_Bounds_o *)local_108,pUVar29,(MethodInfo *)0x0);
  fVar33 = fStack_f4;
  fVar39 = local_f8;
  fVar34 = fStack_fc;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  fVar39 = fVar39 + fVar39;
  fVar34 = fVar34 + fVar34;
  fVar33 = fVar33 + fVar33;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar34 = fVar33 * fVar33 + fVar39 * fVar39 + fVar34 * fVar34;
  if (fVar34 < 0.0) {
    fVar34 = sqrtf(fVar34);
  }
  else {
    fVar34 = SQRT(fVar34);
  }
  pUVar27 = UnityEngine_SkinnedMeshRenderer__get_rootBone(source,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar25 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar25) {
    pUVar27 = UnityEngine_SkinnedMeshRenderer__get_rootBone(source,(MethodInfo *)0x0);
  }
  else {
    pUVar27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
  }
  if (pUVar27 == (UnityEngine_Transform_o *)0x0) goto label_05c4f4a2;
  UVar44 = UnityEngine_Transform__get_position(pUVar27,(MethodInfo *)0x0);
  pUVar2 = &(__this->fields)._origin;
  uVar21 = (pUVar2->fields).x;
  uVar22 = (pUVar2->fields).y;
  fVar39 = (__this->fields)._origin.fields.z;
  fVar33 = (pUVar2->fields).x;
  fVar36 = (__this->fields)._origin.fields.y;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
    fVar33 = (float)uVar21;
    fVar36 = (float)uVar22;
  }
  auVar42 = _local_98;
  pUVar30 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (pUVar30->upVector).fields.x;
  fVar8 = (pUVar30->upVector).fields.y;
  local_98._4_4_ = fVar8;
  local_98._0_4_ = fVar4;
  fVar37 = (pUVar30->upVector).fields.z;
  fVar6 = 0.0;
  fVar10 = 0.0;
  if (Il2CppMethodInitialized_07545e2d == '\0') {
    local_c8 = CONCAT44(local_c8._4_4_,fVar37);
    _fStack_90 = 0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_07545e2d = '\x01';
    fVar37 = (float)local_c8;
    fVar4 = (float)local_98._0_4_;
    fVar8 = (float)local_98._4_4_;
    fVar6 = fStack_90;
    fVar10 = fStack_8c;
    auVar42 = _local_98;
  }
  _local_98 = auVar42;
  auVar42._0_4_ = fVar33 - UVar44.fields.x;
  auVar42._4_4_ = fVar36 - UVar44.fields.y;
  auVar42._8_4_ = 0.0 - extraout_XMM0_Dc;
  auVar42._12_4_ = 0.0 - extraout_XMM0_Dd;
  fVar39 = fVar39 - UVar44.fields.z;
  fVar33 = fVar37 * fVar37 + fVar8 * fVar8 + fVar4 * fVar4;
  if (TypeInfo_UnityEngine_Mathf->static_fields->Epsilon <= fVar33) {
    fVar33 = (fVar39 * fVar37 + auVar42._4_4_ * fVar8 + auVar42._0_4_ * fVar4) / fVar33;
    auVar42._0_4_ = auVar42._0_4_ - fVar33 * fVar4;
    auVar42._4_4_ = auVar42._4_4_ - fVar33 * fVar8;
    auVar42._8_4_ = auVar42._8_4_ - fVar33 * fVar6;
    auVar42._12_4_ = auVar42._12_4_ - fVar33 * fVar10;
    fVar39 = fVar39 - fVar37 * fVar33;
  }
  local_158._0_4_ = velocity.fields.x;
  local_158._4_4_ = velocity.fields.y;
  fVar37 = auVar42._4_4_ * auVar42._4_4_;
  fVar36 = fVar39 * fVar39;
  fVar33 = 0.0;
  if (fVar37 + auVar42._0_4_ * auVar42._0_4_ + fVar36 < 0.0001) {
    pUVar27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
    if (pUVar27 == (UnityEngine_Transform_o *)0x0) goto label_05c4f4a2;
    UVar44 = UnityEngine_Transform__get_right(pUVar27,(MethodInfo *)0x0);
    fVar39 = UVar44.fields.z;
    auVar42._0_8_ = UVar44.fields._0_8_;
    auVar42._8_4_ = extraout_XMM0_Dc_00;
    auVar42._12_4_ = extraout_XMM0_Dd_00;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar30 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar5 = (pUVar30->upVector).fields.x;
    uVar9 = (pUVar30->upVector).fields.y;
    fVar33 = (pUVar30->upVector).fields.z;
    if (Il2CppMethodInitialized_07545e2d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
      Il2CppMethodInitialized_07545e2d = '\x01';
    }
    fVar36 = fVar33 * fVar33 + (float)uVar9 * (float)uVar9 + (float)uVar5 * (float)uVar5;
    if (TypeInfo_UnityEngine_Mathf->static_fields->Epsilon <= fVar36) {
      fVar36 = (fVar39 * fVar33 + UVar44.fields.y * (float)uVar9 + UVar44.fields.x * (float)uVar5) / fVar36;
      auVar42._0_4_ = UVar44.fields.x - fVar36 * (float)uVar5;
      auVar42._4_4_ = UVar44.fields.y - fVar36 * (float)uVar9;
      auVar42._8_4_ = extraout_XMM0_Dc_00 - fVar36 * 0.0;
      auVar42._12_4_ = extraout_XMM0_Dd_00 - fVar36 * 0.0;
      fVar39 = fVar39 - fVar33 * fVar36;
    }
    fVar36 = fVar39 * fVar39;
    fVar33 = fVar37;
  }
  fVar37 = auVar42._4_4_ * auVar42._4_4_;
  fVar36 = fVar37 + auVar42._0_4_ * auVar42._0_4_ + fVar36;
  if (0.0001 <= fVar36) {
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72d = '\x01';
      local_108._0_4_ = 0.0;
      local_108._4_4_ = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05c4f3cf;
label_05c4ee5b:
      local_108._0_8_ = 0;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_05c4ee72;
label_05c4f414:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      if (fVar36 < 0.0) goto label_05c4f440;
label_05c4ee7e:
      fVar36 = SQRT(fVar36);
      if (fVar36 <= 1e-05) goto label_05c4ee8f;
label_05c4f468:
      fVar39 = fVar39 / fVar36;
      auVar20._4_4_ = fVar36;
      auVar20._0_4_ = fVar36;
      auVar20._8_4_ = fVar37;
      auVar20._12_4_ = fVar37;
      auVar42 = divps(auVar42,auVar20);
      local_108._0_8_ = auVar42._0_8_;
      pUVar30 = (UnityEngine_Vector3_StaticFields *)local_108;
    }
    else {
      local_108._0_4_ = 0.0;
      local_108._4_4_ = 0.0;
      if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05c4ee5b;
label_05c4f3cf:
      local_108._0_8_ = 0;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_05c4f414;
label_05c4ee72:
      if (0.0 <= fVar36) goto label_05c4ee7e;
label_05c4f440:
      fVar36 = sqrtf(fVar36);
      fVar37 = extraout_XMM0_Db_00;
      if (1e-05 < fVar36) goto label_05c4f468;
label_05c4ee8f:
      pUVar30 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar39 = (pUVar30->zeroVector).fields.z;
      fVar33 = 0.0;
    }
    uVar24._0_4_ = (pUVar30->zeroVector).fields.x;
    uVar24._4_4_ = (pUVar30->zeroVector).fields.y;
    fVar36 = (float)(undefined4)uVar24;
    fVar37 = (float)uVar24._4_4_;
  }
  else {
    if (Il2CppMethodInitialized_07544d56 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_07544d56 = '\x01';
    }
    pUVar30 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar24._0_4_ = (pUVar30->rightVector).fields.x;
    uVar24._4_4_ = (pUVar30->rightVector).fields.y;
    fVar39 = (pUVar30->rightVector).fields.z;
    fVar33 = 0.0;
    fVar36 = (float)(undefined4)uVar24;
    fVar37 = (float)uVar24._4_4_;
  }
  local_138 = (float)uVar24;
  fStack_134 = (float)((ulong)uVar24 >> 0x20);
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
    fVar36 = local_138;
    fVar37 = fStack_134;
  }
  auVar42 = _local_98;
  pUVar30 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar6 = (pUVar30->upVector).fields.x;
  fVar10 = (pUVar30->upVector).fields.y;
  local_98._4_4_ = fVar10;
  local_98._0_4_ = fVar6;
  fVar4 = (pUVar30->upVector).fields.z;
  fVar38 = fVar10 * fVar39;
  fVar35 = fVar37 * fVar6;
  fVar8 = fVar39 * fVar6;
  fVar40 = fVar4 * fVar37;
  fVar43 = fVar10 * fVar36;
  fVar41 = fVar4;
  if (Il2CppMethodInitialized_07545e2d == '\0') {
    local_c8 = (ulong)(uint)fVar4;
    UStack_c0.x = 0.0;
    UStack_c0.y = 0.0;
    _fStack_90 = 0;
    local_78._4_4_ = fVar10;
    local_78._0_4_ = fVar10 * fVar36;
    fStack_70 = fVar10;
    fStack_6c = fVar10;
    local_88._4_4_ = fVar4 * fVar37;
    local_88._0_4_ = fVar39 * fVar6;
    local_88._8_4_ = fVar33 * 0.0;
    local_88._12_4_ = 0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_07545e2d = '\x01';
    fVar6 = (float)local_98._0_4_;
    fVar10 = (float)local_98._4_4_;
    fVar8 = (float)local_88._0_4_;
    fVar40 = (float)local_88._4_4_;
    fVar43 = (float)local_78._0_4_;
    fVar41 = (float)local_c8;
    auVar42 = _local_98;
  }
  _local_98 = auVar42;
  fVar33 = fVar41 * fVar41 + fVar10 * fVar10 + fVar6 * fVar6;
  uVar24 = velocity.fields._0_8_;
  if (TypeInfo_UnityEngine_Mathf->static_fields->Epsilon <= fVar33) {
    fVar33 = (fVar41 * local_18c + fVar10 * local_158._4_4_ + fVar6 * (float)local_158) / fVar33;
    local_158 = CONCAT44(local_158._4_4_ - fVar33 * fVar10,(float)local_158 - fVar33 * fVar6);
    local_18c = local_18c - fVar41 * fVar33;
    uVar24 = local_158;
  }
  local_158 = uVar24;
  fVar33 = UnityEngine_Random__Range(10.0,16.0,(MethodInfo *)0x0);
  local_c8 = CONCAT44(extraout_XMM0_Db,fVar33);
  UStack_c0.y = extraout_XMM0_Dd_01;
  UStack_c0.x = extraout_XMM0_Dc_01;
  fVar37 = UnityEngine_Random__Range(-1.5,1.5,(MethodInfo *)0x0);
  (__this->fields)._velocity.fields.x =
       (fVar38 - fVar40) * fVar37 + local_138 * (float)local_c8 + (float)local_158;
  (__this->fields)._velocity.fields.y =
       (fVar36 * fVar4 - fVar8) * fVar37 + fStack_134 * (float)local_c8 + local_158._4_4_;
  (__this->fields)._velocity.fields.z = (fVar35 - fVar43) * fVar37 + fVar39 * fVar33 + local_18c;
  UVar44 = UnityEngine_Random__get_onUnitSphere((MethodInfo *)0x0);
  fVar39 = UnityEngine_Random__Range(45.0,90.0,(MethodInfo *)0x0);
  local_188 = UVar44.fields.x;
  fStack_184 = UVar44.fields.y;
  (__this->fields)._angularVelocity.fields.x = fVar39 * local_188;
  (__this->fields)._angularVelocity.fields.y = fVar39 * fStack_184;
  (__this->fields)._angularVelocity.fields.z = UVar44.fields.z * fVar39;
  __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    iVar26 = UnityEngine_GameObject__get_layer(__this_01,(MethodInfo *)0x0);
    (__this->fields)._layer = iVar26;
    bVar25 = UnityEngine_Renderer__get_receiveShadows((UnityEngine_Renderer_o *)source,(MethodInfo *)0x0);
    (__this->fields)._receiveShadows = bVar25;
    (__this->fields)._age = 0.0;
    (__this->fields)._dissolveDelay = 5.0;
    pUVar14 = (__this->fields)._blood;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar25 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pMVar31 = extraout_RDX;
    if (bVar25) {
      pUVar14 = (__this->fields)._blood;
      if (pUVar14 == (UnityEngine_ParticleSystem_o *)0x0) goto label_05c4f4a2;
      method_00 = (MethodInfo *)0x0;
      UnityEngine_ParticleSystem__Stop(pUVar14,true,0,(MethodInfo *)0x0);
      pMVar31 = extraout_RDX_00;
    }
    (__this->fields)._landed = false;
    (__this->fields)._radius = 0.0;
    (__this->fields)._groundAge = 0.0;
    pSVar15 = (__this->fields)._supportVertices;
    if (pSVar15 != (System_Collections_Generic_List_Vector3__o *)0x0) {
      piVar1 = &(pSVar15->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar15->fields)._size = 0;
      Characters_TitanLimbFallEffect__AddSupportVertices(__this,(__this->fields)._mesh,-1.0,pMVar31);
      UnityEngine_Renderer__GetSharedMaterials
                ((UnityEngine_Renderer_o *)source,(__this->fields)._sourceMaterials,(MethodInfo *)0x0);
      if (limb != (UnityEngine_Mesh_o *)0x0) {
        iVar26 = UnityEngine_Mesh__get_subMeshCount(limb,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar25 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)wound,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pSVar16 = (__this->fields)._sourceMaterials;
        if (pSVar16 != (System_Collections_Generic_List_Material__o *)0x0) {
          index = iVar26 - (uint)bVar25;
          iVar11 = (pSVar16->fields)._size;
          count = iVar11 - index;
          if (count != 0 && index <= iVar11) {
            method_00 = MethodInfo_System_Collections_Generic_List_Material_RemoveRange;
            System_Collections_Generic_List_object___RemoveRange
                      ((System_Collections_Generic_List_object__o *)pSVar16,index,count,
                       (MethodInfo_395F1A0 *)MethodInfo_System_Collections_Generic_List_Material_RemoveRange);
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar25 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)wound,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          pMVar31 = MethodInfo_System_Collections_Generic_List_Material_Add;
          if (bVar25) {
            pSVar16 = (__this->fields)._sourceMaterials;
            if (pSVar16 == (System_Collections_Generic_List_Material__o *)0x0) goto label_05c4f4a2;
            piVar1 = &(pSVar16->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar17 = (pSVar16->fields)._items;
            if (pUVar17 == (UnityEngine_Material_array *)0x0) goto label_05c4f4a2;
            uVar12 = (pSVar16->fields)._size;
            if (uVar12 < (uint)pUVar17->max_length) {
              method_00 = (MethodInfo *)(ulong)(uVar12 + 1);
              (pSVar16->fields)._size = uVar12 + 1;
              pUVar17->m_Items[(int)uVar12] = wound;
              Il2CppCodeGenWriteBarrier(pUVar17->m_Items + (int)uVar12);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar16,(Il2CppObject *)wound,
                         (MethodInfo_395D230 *)pMVar31->klass->rgctx_data[0xe].method);
              method_00 = pMVar31;
            }
          }
          pSVar16 = (__this->fields)._materials;
          pSVar18 = (__this->fields)._sourceMaterials;
          if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
          }
          Characters_TitanLimbFallEffect__CopyMaterials(pSVar16,pSVar18,false,fVar34,method_00);
          UnityEngine_Renderer__GetPropertyBlock
                    ((UnityEngine_Renderer_o *)source,(__this->fields)._properties,(MethodInfo *)0x0);
          pUVar19 = (__this->fields)._properties;
          if (pUVar19 != (UnityEngine_MaterialPropertyBlock_o *)0x0) {
            UnityEngine_MaterialPropertyBlock__SetFloat_68d85d0
                      (pUVar19,TypeInfo_Characters_TitanLimbFallEffect->static_fields->Dissolve,0.0,
                       (MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar25 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)growth,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            (__this->fields)._hasGrowth = bVar25;
            if (bVar25) {
              pUVar28 = (UnityEngine_Object_o *)(__this->fields)._growthMesh;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar25 = UnityEngine_Object__op_Equality(pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar25) {
                pUVar28 = (UnityEngine_Object_o *)
                          il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
                UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pUVar28,(MethodInfo *)0x0);
                if (pUVar28 == (UnityEngine_Object_o *)0x0) goto label_05c4f4a2;
                targetAddress = &(__this->fields)._growthMesh;
                UnityEngine_Object__set_name(pUVar28,"Falling regrown hand",(MethodInfo *)0x0);
                *targetAddress = (UnityEngine_Mesh_o *)pUVar28;
                Il2CppCodeGenWriteBarrier(targetAddress);
              }
              method_00 = (MethodInfo *)(__this->fields)._growthMesh;
              Characters_TitanLimbFallEffect__Bake
                        (__this,source,growth,(UnityEngine_Mesh_o *)method_00,pMVar32);
              Characters_TitanLimbFallEffect__AddSupportVertices
                        (__this,(__this->fields)._growthMesh,progress,method_01);
              pSVar16 = (__this->fields)._sourceMaterials;
              if (pSVar16 == (System_Collections_Generic_List_Material__o *)0x0) goto label_05c4f4a2;
              System_Collections_Generic_List_object___RemoveAt
                        ((System_Collections_Generic_List_object__o *)pSVar16,(pSVar16->fields)._size + -1,
                         (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_Material_RemoveAt);
              pSVar16 = (__this->fields)._growthMaterials;
              pSVar18 = (__this->fields)._sourceMaterials;
              UnityEngine_Mesh__get_bounds((UnityEngine_Bounds_o *)local_108,limb,(MethodInfo *)0x0);
              fVar39 = fStack_fc;
              if (Il2CppMethodInitialized_0753e729 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                Il2CppMethodInitialized_0753e729 = '\x01';
              }
              fVar39 = fVar39 + fVar39;
              if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              }
              fVar39 = (fStack_f4 + fStack_f4) * (fStack_f4 + fStack_f4) +
                       (local_f8 + local_f8) * (local_f8 + local_f8) + fVar39 * fVar39;
              if (fVar39 < 0.0) {
                fVar39 = sqrtf(fVar39);
                uVar13 = (TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor;
              }
              else {
                fVar39 = SQRT(fVar39);
                uVar13 = (TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor;
              }
              if (uVar13 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
              }
              Characters_TitanLimbFallEffect__CopyMaterials(pSVar16,pSVar18,true,fVar39,method_00);
              UnityEngine_Renderer__GetPropertyBlock
                        ((UnityEngine_Renderer_o *)source,(__this->fields)._growthProperties,(MethodInfo *)0x0
                        );
              pUVar19 = (__this->fields)._growthProperties;
              if (pUVar19 == (UnityEngine_MaterialPropertyBlock_o *)0x0) goto label_05c4f4a2;
              UnityEngine_MaterialPropertyBlock__SetFloat
                        (pUVar19,"_Growth",progress,(MethodInfo *)0x0);
              pUVar19 = (__this->fields)._growthProperties;
              if (pUVar19 == (UnityEngine_MaterialPropertyBlock_o *)0x0) goto label_05c4f4a2;
              UnityEngine_MaterialPropertyBlock__SetFloat_68d85d0
                        (pUVar19,TypeInfo_Characters_TitanLimbFallEffect->static_fields->Dissolve,0.0,
                         (MethodInfo *)0x0);
            }
            pSVar16 = (__this->fields)._sourceMaterials;
            if (pSVar16 != (System_Collections_Generic_List_Material__o *)0x0) {
              piVar1 = &(pSVar16->fields)._version;
              *piVar1 = *piVar1 + 1;
              iVar11 = (pSVar16->fields)._size;
              (pSVar16->fields)._size = 0;
              if (0 < iVar11) {
                method_00 = (MethodInfo *)0x0;
                System_Array__Clear((System_Array_o *)(pSVar16->fields)._items,0,iVar11,(MethodInfo *)0x0);
              }
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              pMVar32 = (MethodInfo *)0x0;
              bVar25 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)local_b0,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if (bVar25) {
                pUVar29 = (__this->fields)._mesh;
                if ((TypeInfo_Characters_TitanDeathDissolve->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
                }
                pUVar29 = Characters_TitanDeathDissolve__CreateTissueMesh(pUVar29,fVar34,pMVar32);
                (__this->fields)._tissueMesh = pUVar29;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._tissueMesh);
                pSVar16 = (__this->fields)._materials;
                pSVar18 = (__this->fields)._tissueMaterials;
                if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
                }
                Characters_TitanLimbFallEffect__CopyMaterials(pSVar18,pSVar16,false,fVar34,method_00);
                pSVar16 = (__this->fields)._tissueMaterials;
                if (pSVar16 == (System_Collections_Generic_List_Material__o *)0x0) goto label_05c4f4a2;
                System_Collections_Generic_List_object___GetEnumerator
                          (&local_68,(System_Collections_Generic_List_object__o *)pSVar16,
                           (MethodInfo_395E050 *)
                           MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
                local_108._0_8_ = 0;
                unique0x100037c2 = &local_68;
                while (bVar25 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                          ((System_Collections_Generic_List_Enumerator_object__o *)&local_68,
                                           (MethodInfo_4C45C50 *)
                                           MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext
                                          ), __this_00 = local_68.fields._current, bVar25) {
                  if ((UnityEngine_Material_o *)local_68.fields._current == (UnityEngine_Material_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  UnityEngine_Material__SetFloat
                            ((UnityEngine_Material_o *)local_68.fields._current,"_Layer",1.0,
                             (MethodInfo *)0x0);
                  UnityEngine_Material__set_renderQueue
                            ((UnityEngine_Material_o *)__this_00,0x7d1,(MethodInfo *)0x0);
                }
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((System_Collections_Generic_List_Enumerator_object__o *)&local_68,
                           (MethodInfo_4C45C40 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
                pMVar32 = (MethodInfo *)source;
                Characters_TitanLimbFallEffect__AddAttachments(__this,source,local_b0,fVar34,method_00);
              }
              UVar44 = Characters_TitanLimbFallEffect__GetRestNormal(__this,pMVar32);
              (__this->fields)._restNormal.fields.x = UVar44.fields.x;
              (__this->fields)._restNormal.fields.y = UVar44.fields.y;
              (__this->fields)._restNormal.fields.z = UVar44.fields.z;
              fVar34 = Characters_TitanLimbFallEffect__GetUpwardSpeed(__this,pMVar32);
              (__this->fields)._velocity.fields.y = fVar34;
              Characters_TitanLimbFallEffect__PrepareSteam(__this,source,(float)local_a8._0_4_,method_02);
              return;
            }
          }
        }
      }
    }
  }
label_05c4f4a2:
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$AddAttachments
// il2cpp: void Characters_TitanLimbFallEffect__AddAttachments (Characters_TitanLimbFallEffect_o* __this, UnityEngine_SkinnedMeshRenderer_o* source, UnityEngine_Transform_o* root, float size, const MethodInfo* method);
// 0x5c50030
// eh: try 0x5c507d4..0x5c50930 -> pad 0x5c50939 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c50955..0x5c5095a -> pad 0x5c509ca cleanup
// eh: try 0x5c509cd..0x5c509d7 -> pad 0x5c509df catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c501df: nop 
// asm:   0x5c50337: jmp 0x5c503ce
// asm:   0x5c503b7: jmp 0x5c503ce
// asm:   0x5c507cc: nop dword ptr [rax]
// asm:   0x5c50935: jmp 0x5c50939
// asm:   0x5c50937: jmp 0x5c50939
// asm:   0x5c50939: mov rbx, rax
// asm:   0x5c5093c: cmp edx, 1
// asm:   0x5c5093f: jne 0x5c509cd
// asm:   0x5c50945: mov rdi, rbx
// asm:   0x5c50948: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c5094d: mov rbx, qword ptr [rax]
// asm:   0x5c50950: mov qword ptr [rsp + 0x60], rbx
// asm:   0x5c50955: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c5095a: lea rax, [rip + 0x163db1f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x5c50961: mov rsi, qword ptr [rax]
// asm:   0x5c50964: lea rdi, [rsp + 0xb0]
// asm:   0x5c5096c: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c50971: test rbx, rbx
// asm:   0x5c50974: je 0x5c50819
// asm:   0x5c5097a: mov rdi, rbx
// asm:   0x5c5097d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c509ca: mov rbx, rax
// asm:   0x5c509cd: lea rdi, [rsp + 0x60]
// asm:   0x5c509d2: call 0x2fd9860  ; il2cpp_runtime_helper_02fd9860()
// asm:   0x5c509d7: mov rdi, rbx
// asm:   0x5c509da: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c509df: mov rdi, rax
// asm:   0x5c509e2: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_TitanLimbFallEffect__AddAttachments
               (Characters_TitanLimbFallEffect_o *__this,UnityEngine_SkinnedMeshRenderer_o *source,
               UnityEngine_Transform_o *root,float size,MethodInfo *method)

{
  UnityEngine_Matrix4x4_o *pUVar1;
  int32_t *piVar2;
  byte bVar3;
  byte bVar4;
  uint32_t uVar5;
  uint uVar6;
  int32_t length;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_Material__o *pSVar7;
  System_Collections_Generic_List_Material__o *sources;
  UnityEngine_MaterialPropertyBlock_o *pUVar8;
  System_Collections_Generic_List_TitanLimbFallEffect_Attachment__o *__this_00;
  Characters_TitanLimbFallEffect_Attachment_array *pCVar9;
  UnityEngine_Matrix4x4_o matrix;
  bool bVar10;
  System_Object_array *pSVar11;
  ulong uVar12;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Object_o *pUVar13;
  UnityEngine_Object_c *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  Characters_TitanLimbFallEffect_Attachment_o *__this_02;
  MethodInfo *pMVar16;
  ulong uVar17;
  bool local_280;
  undefined1 local_268 [12];
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  UnityEngine_Object_o *local_228;
  UnityEngine_MeshFilter_o *local_220;
  undefined1 local_218 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_210;
  UnityEngine_Material_o *local_208;
  UnityEngine_Object_o *local_200;
  undefined8 local_1f8;
  System_Collections_Generic_List_Enumerator_object__o *pSStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  System_Collections_Generic_List_Enumerator_object__o *local_1d8;
  undefined8 local_1c8;
  float local_1b8;
  float local_1a8;
  float local_198;
  float local_188;
  float local_178;
  float local_168;
  float local_158;
  float local_148;
  float local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
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
  
  if (Il2CppMethodInitialized_0754784e == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"Detached head attachment");
    il2cpp_codegen_initialize_runtime_metadata(&"_UseMeshPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"_Flesh");
    il2cpp_codegen_initialize_runtime_metadata(&"_MeshToDissolve");
    Il2CppMethodInitialized_0754784e = '\x01';
  }
  local_220 = (UnityEngine_MeshFilter_o *)0x0;
  local_218 = (undefined1  [8])0x0;
  pSStack_210 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_208 = (UnityEngine_Material_o *)0x0;
  if (root != (UnityEngine_Transform_o *)0x0) {
    pSVar11 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                        ((UnityEngine_Component_o *)root,
                         (MethodInfo_34B11B0 *)
                         MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    if (pSVar11 != (System_Object_array *)0x0) {
      if (0 < (int)pSVar11->max_length) {
        uVar12 = pSVar11->max_length & 0xffffffff;
        uVar17 = 0;
        local_228 = (UnityEngine_Object_o *)source;
        do {
          if (uVar12 <= uVar17) {
            ThrowIndexOutOfRangeException();
          }
          x = (UnityEngine_Object_o *)pSVar11->m_Items[uVar17];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar10 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)source,(MethodInfo *)0x0);
          if (!bVar10) {
            if (x == (UnityEngine_Object_o *)0x0) goto label_05c509c0;
            bVar10 = UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
            if (bVar10) {
              __this_01 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
              if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_05c509c0;
              bVar10 = UnityEngine_GameObject__get_activeInHierarchy(__this_01,(MethodInfo *)0x0);
              if (bVar10) {
                pUVar14 = x->klass;
                bVar3 = (pUVar14->_2).typeHierarchyDepth;
                pMVar16 = (MethodInfo *)(ulong)bVar3;
                bVar4 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
                if ((bVar3 < bVar4) ||
                   ((pUVar14->_2).typeHierarchy[(ulong)bVar4 - 1] !=
                    (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer)) {
label_05c50347:
                  bVar3 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth;
                  if (((byte)pMVar16 < bVar3) ||
                     ((pUVar14->_2).typeHierarchy[(ulong)bVar3 - 1] !=
                      (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer)) {
label_05c503b9:
                    pUVar13 = (UnityEngine_Object_o *)0x0;
                    uVar5 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
                  }
                  else {
                    bVar10 = UnityEngine_Component__TryGetComponent_object_
                                       ((UnityEngine_Component_o *)x,(Il2CppObject **)&local_220,
                                        (MethodInfo_34B1690 *)
                                        MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter);
                    if (!bVar10) goto label_05c503b9;
                    if (local_220 == (UnityEngine_MeshFilter_o *)0x0) goto label_05c509c0;
                    pUVar13 = (UnityEngine_Object_o *)
                              UnityEngine_MeshFilter__get_sharedMesh(local_220,(MethodInfo *)0x0);
                    uVar5 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
                  }
                  bVar10 = false;
                  local_280 = false;
                }
                else {
                  pUVar13 = (UnityEngine_Object_o *)
                            UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                                      ((UnityEngine_SkinnedMeshRenderer_o *)x,(MethodInfo *)0x0);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar10 = UnityEngine_Object__op_Inequality
                                     (pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if (!bVar10) {
                    pUVar14 = x->klass;
                    pMVar16 = (MethodInfo *)(ulong)(pUVar14->_2).typeHierarchyDepth;
                    goto label_05c50347;
                  }
                  pUVar13 = (UnityEngine_Object_o *)
                            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
                  UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pUVar13,(MethodInfo *)0x0);
                  if (pUVar13 == (UnityEngine_Object_o *)0x0) goto label_05c509c0;
                  UnityEngine_Object__set_name(pUVar13,"Detached head attachment",(MethodInfo *)0x0);
                  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
                  }
                  MiscExtensions__BakeLocalMesh
                            ((UnityEngine_SkinnedMeshRenderer_o *)x,(UnityEngine_Mesh_o *)pUVar13,
                             (MethodInfo *)0x0);
                  bVar10 = true;
                  local_280 = true;
                  uVar5 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
                }
                if (uVar5 == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  local_280 = bVar10;
                }
                bVar10 = UnityEngine_Object__op_Equality
                                   (pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (!bVar10) {
                  if ((UnityEngine_Object_o *)source == (UnityEngine_Object_o *)0x0) goto label_05c509c0;
                  pUVar15 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
                  if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_05c509c0;
                  local_200 = pUVar13;
                  UnityEngine_Transform__get_worldToLocalMatrix
                            ((UnityEngine_Matrix4x4_o *)local_268,pUVar15,(MethodInfo *)0x0);
                  local_f8 = CONCAT44(local_268._4_4_,local_268._0_4_);
                  uStack_f0 = stack0xfffffffffffffda0;
                  local_e8 = local_258;
                  fStack_e4 = fStack_254;
                  fStack_e0 = fStack_250;
                  fStack_dc = fStack_24c;
                  local_d8 = local_248;
                  fStack_d4 = fStack_244;
                  fStack_d0 = fStack_240;
                  fStack_cc = fStack_23c;
                  local_c8 = local_238;
                  fStack_c4 = fStack_234;
                  fStack_c0 = fStack_230;
                  fStack_bc = fStack_22c;
                  pUVar15 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
                  if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_05c509c0;
                  UnityEngine_Transform__get_localToWorldMatrix
                            ((UnityEngine_Matrix4x4_o *)local_268,pUVar15,(MethodInfo *)0x0);
                  local_1f8 = CONCAT44(local_268._4_4_,local_268._0_4_);
                  pSStack_1f0 = stack0xfffffffffffffda0;
                  local_1e8 = CONCAT44(local_268._8_4_,local_268._4_4_);
                  uStack_1e0 = CONCAT44(local_258,fStack_25c);
                  local_1d8 = stack0xfffffffffffffda0;
                  local_1c8 = CONCAT44(local_258,fStack_25c);
                  local_1b8 = local_258;
                  local_1a8 = fStack_254;
                  local_198 = fStack_250;
                  local_188 = fStack_24c;
                  local_178 = local_248;
                  local_168 = fStack_244;
                  local_158 = fStack_240;
                  local_148 = fStack_23c;
                  local_138 = local_238;
                  local_128 = ZEXT416((uint)fStack_234);
                  local_118 = ZEXT416((uint)fStack_230);
                  local_108 = ZEXT416((uint)fStack_22c);
                  __this_02 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect_Attachment);
                  local_78 = (float)local_1c8 * local_c8 +
                             local_1d8._0_4_ * local_d8 +
                             (float)local_1e8 * local_e8 + (float)local_1f8 * (float)local_f8;
                  fStack_74 = (float)local_1c8 * fStack_c4 +
                              local_1d8._0_4_ * fStack_d4 +
                              (float)local_1e8 * fStack_e4 + (float)local_1f8 * local_f8._4_4_;
                  fStack_70 = (float)local_1c8 * fStack_c0 +
                              local_1d8._0_4_ * fStack_d0 +
                              (float)local_1e8 * fStack_e0 + (float)local_1f8 * (float)uStack_f0;
                  fStack_6c = (float)local_1c8 * fStack_bc +
                              local_1d8._0_4_ * fStack_cc +
                              (float)local_1e8 * fStack_dc + (float)local_1f8 * uStack_f0._4_4_;
                  local_68 = local_188 * local_c8 +
                             local_198 * local_d8 + local_1a8 * local_e8 + local_1b8 * (float)local_f8;
                  fStack_64 = local_188 * fStack_c4 +
                              local_198 * fStack_d4 + local_1a8 * fStack_e4 + local_1b8 * local_f8._4_4_;
                  fStack_60 = local_188 * fStack_c0 +
                              local_198 * fStack_d0 + local_1a8 * fStack_e0 + local_1b8 * (float)uStack_f0;
                  fStack_5c = local_188 * fStack_bc +
                              local_198 * fStack_cc + local_1a8 * fStack_dc + local_1b8 * uStack_f0._4_4_;
                  local_58 = local_148 * local_c8 +
                             local_158 * local_d8 + local_168 * local_e8 + local_178 * (float)local_f8;
                  fStack_54 = local_148 * fStack_c4 +
                              local_158 * fStack_d4 + local_168 * fStack_e4 + local_178 * local_f8._4_4_;
                  fStack_50 = local_148 * fStack_c0 +
                              local_158 * fStack_d0 + local_168 * fStack_e0 + local_178 * (float)uStack_f0;
                  fStack_4c = local_148 * fStack_bc +
                              local_158 * fStack_cc + local_168 * fStack_dc + local_178 * uStack_f0._4_4_;
                  local_48 = (float)local_108._0_4_ * local_c8 +
                             (float)local_118._0_4_ * local_d8 +
                             (float)local_128._0_4_ * local_e8 + local_138 * (float)local_f8;
                  fStack_44 = (float)local_108._0_4_ * fStack_c4 +
                              (float)local_118._0_4_ * fStack_d4 +
                              (float)local_128._0_4_ * fStack_e4 + local_138 * local_f8._4_4_;
                  fStack_40 = (float)local_108._0_4_ * fStack_c0 +
                              (float)local_118._0_4_ * fStack_d0 +
                              (float)local_128._0_4_ * fStack_e0 + local_138 * (float)uStack_f0;
                  fStack_3c = (float)local_108._0_4_ * fStack_bc +
                              (float)local_118._0_4_ * fStack_cc +
                              (float)local_128._0_4_ * fStack_dc + local_138 * uStack_f0._4_4_;
                  matrix.fields.m10 = fStack_74;
                  matrix.fields.m00 = local_78;
                  matrix.fields.m30 = fStack_6c;
                  matrix.fields.m20 = fStack_70;
                  matrix.fields.m11 = fStack_64;
                  matrix.fields.m01 = local_68;
                  matrix.fields.m31 = fStack_5c;
                  matrix.fields.m21 = fStack_60;
                  matrix.fields.m12 = fStack_54;
                  matrix.fields.m02 = local_58;
                  matrix.fields.m32 = fStack_4c;
                  matrix.fields.m22 = fStack_50;
                  matrix.fields.m13 = fStack_44;
                  matrix.fields.m03 = local_48;
                  matrix.fields.m33 = fStack_3c;
                  matrix.fields.m23 = fStack_40;
                  Characters_TitanLimbFallEffect_Attachment___ctor
                            (__this_02,(UnityEngine_Mesh_o *)local_200,matrix,local_280,pMVar16);
                  UnityEngine_Renderer__GetSharedMaterials
                            ((UnityEngine_Renderer_o *)x,(__this->fields)._sourceMaterials,(MethodInfo *)0x0);
                  if (__this_02 == (Characters_TitanLimbFallEffect_Attachment_o *)0x0) goto label_05c509c0;
                  pSVar7 = (__this_02->fields).Materials;
                  sources = (__this->fields)._sourceMaterials;
                  if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
                  }
                  Characters_TitanLimbFallEffect__CopyMaterials(pSVar7,sources,false,size,pMVar16);
                  pSVar7 = (__this_02->fields).Materials;
                  if (pSVar7 == (System_Collections_Generic_List_Material__o *)0x0) goto label_05c509c0;
                  System_Collections_Generic_List_object___GetEnumerator
                            ((System_Collections_Generic_List_Enumerator_T__o *)local_268,
                             (System_Collections_Generic_List_object__o *)pSVar7,
                             (MethodInfo_395E050 *)
                             MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
                  local_208 = (UnityEngine_Material_o *)CONCAT44(fStack_254,local_258);
                  local_218 = (undefined1  [8])CONCAT44(local_268._4_4_,local_268._0_4_);
                  pSStack_210 = stack0xfffffffffffffda0;
                  local_268._0_4_ = 0.0;
                  local_268._4_4_ = 0.0;
                  unique0x100024b5 = (System_Collections_Generic_List_Enumerator_object__o *)local_218;
                  while( true ) {
                    bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                       ((System_Collections_Generic_List_Enumerator_object__o *)local_218,
                                        (MethodInfo_4C45C50 *)
                                        MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext
                                       );
                    if (!bVar10) break;
                    if (local_208 == (UnityEngine_Material_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    UnityEngine_Material__SetFloat(local_208,"_Flesh",0.0,(MethodInfo *)0x0);
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_218,
                             (MethodInfo_4C45C40 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
                  UnityEngine_Renderer__GetPropertyBlock
                            ((UnityEngine_Renderer_o *)x,(__this_02->fields).Properties,(MethodInfo *)0x0);
                  pUVar8 = (__this_02->fields).Properties;
                  if (pUVar8 == (UnityEngine_MaterialPropertyBlock_o *)0x0) goto label_05c509c0;
                  UnityEngine_MaterialPropertyBlock__SetFloat
                            (pUVar8,"_UseMeshPosition",1.0,(MethodInfo *)0x0);
                  pUVar8 = (__this_02->fields).Properties;
                  if (pUVar8 == (UnityEngine_MaterialPropertyBlock_o *)0x0) goto label_05c509c0;
                  pUVar1 = &(__this_02->fields).Matrix;
                  local_b8._0_4_ = (pUVar1->fields).m00;
                  local_b8._4_4_ = (pUVar1->fields).m10;
                  uStack_b0._0_4_ = (__this_02->fields).Matrix.fields.m20;
                  uStack_b0._4_4_ = (__this_02->fields).Matrix.fields.m30;
                  local_a8._0_4_ = (__this_02->fields).Matrix.fields.m01;
                  local_a8._4_4_ = (__this_02->fields).Matrix.fields.m11;
                  uStack_a0._0_4_ = (__this_02->fields).Matrix.fields.m21;
                  uStack_a0._4_4_ = (__this_02->fields).Matrix.fields.m31;
                  local_98._0_4_ = (__this_02->fields).Matrix.fields.m02;
                  local_98._4_4_ = (__this_02->fields).Matrix.fields.m12;
                  uStack_90._0_4_ = (__this_02->fields).Matrix.fields.m22;
                  uStack_90._4_4_ = (__this_02->fields).Matrix.fields.m32;
                  local_88._0_4_ = (__this_02->fields).Matrix.fields.m03;
                  local_88._4_4_ = (__this_02->fields).Matrix.fields.m13;
                  uStack_80._0_4_ = (__this_02->fields).Matrix.fields.m23;
                  uStack_80._4_4_ = (__this_02->fields).Matrix.fields.m33;
                  UnityEngine_MaterialPropertyBlock__SetMatrix
                            (pUVar8,"_MeshToDissolve",(UnityEngine_Matrix4x4_o)pUVar1->fields,
                             (MethodInfo *)0x0);
                  pMVar16 = MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Attachment_Add;
                  __this_00 = (__this->fields)._attachments;
                  if (__this_00 == (System_Collections_Generic_List_TitanLimbFallEffect_Attachment__o *)0x0)
                  goto label_05c509c0;
                  piVar2 = &(__this_00->fields)._version;
                  *piVar2 = *piVar2 + 1;
                  pCVar9 = (__this_00->fields)._items;
                  if (pCVar9 == (Characters_TitanLimbFallEffect_Attachment_array *)0x0) goto label_05c509c0;
                  uVar6 = (__this_00->fields)._size;
                  if (uVar6 < (uint)pCVar9->max_length) {
                    (__this_00->fields)._size = uVar6 + 1;
                    pCVar9->m_Items[(int)uVar6] = __this_02;
                    Il2CppCodeGenWriteBarrier(pCVar9->m_Items + (int)uVar6);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_00,
                               (Il2CppObject *)__this_02,
                               (MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method);
                  }
                  source = (UnityEngine_SkinnedMeshRenderer_o *)local_228;
                }
              }
            }
          }
          uVar17 = uVar17 + 1;
          uVar6 = (uint)pSVar11->max_length;
          uVar12 = (ulong)uVar6;
        } while ((long)uVar17 < (long)(int)uVar6);
      }
      pSVar7 = (__this->fields)._sourceMaterials;
      if (pSVar7 != (System_Collections_Generic_List_Material__o *)0x0) {
        piVar2 = &(pSVar7->fields)._version;
        *piVar2 = *piVar2 + 1;
        length = (pSVar7->fields)._size;
        (pSVar7->fields)._size = 0;
        if (0 < length) {
          System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,length,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
label_05c509c0:
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$GetUpwardSpeed
// il2cpp: float Characters_TitanLimbFallEffect__GetUpwardSpeed (Characters_TitanLimbFallEffect_o* __this, const MethodInfo* method);
// 0x5c51020

float Characters_TitanLimbFallEffect__GetUpwardSpeed
                (Characters_TitanLimbFallEffect_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int32_t layerMask;
  UnityEngine_Quaternion_Fields rotation;
  UnityEngine_Vector3_Fields direction;
  bool bVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  MethodInfo *method_00;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o normal;
  float local_98;
  float fStack_94;
  UnityEngine_RaycastHit_o local_48;
  
  if (Il2CppMethodInitialized_0754784f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    Il2CppMethodInitialized_0754784f = '\x01';
  }
  local_48.fields.m_UV.fields.x = 0.0;
  local_48.fields.m_UV.fields.y = 0.0;
  local_48.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_48.fields.m_Normal.fields.y = 0.0;
  local_48.fields.m_Normal.fields.z = 0.0;
  local_48.fields.m_FaceID = 0;
  local_48.fields.m_Distance = 0.0;
  local_48.fields.m_Point.fields.x = 0.0;
  local_48.fields.m_Point.fields.y = 0.0;
  local_48.fields.m_Point.fields.z = 0.0;
  local_48.fields.m_Normal.fields.x = 0.0;
  fVar12 = (__this->fields)._radius + 0.05;
  uVar3 = (__this->fields)._origin.fields.x;
  uVar6 = (__this->fields)._origin.fields.y;
  fVar11 = (__this->fields)._origin.fields.z;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar4 = (pUVar10->upVector).fields.x;
  uVar7 = (pUVar10->upVector).fields.y;
  fVar1 = (pUVar10->upVector).fields.z;
  if (Il2CppMethodInitialized_075450a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_075450a5 = '\x01';
    pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
  }
  direction = (pUVar10->downVector).fields;
  fVar2 = (__this->fields)._radius;
  if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
  }
  UVar13.fields.x = (float)uVar3 + fVar12 * (float)uVar4;
  UVar13.fields.y = (float)uVar6 + fVar12 * (float)uVar7;
  UVar13.fields.z = fVar11 + fVar1 * fVar12;
  layerMask = TypeInfo_Characters_TitanLimbFallEffect->static_fields->GroundMask;
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  bVar9 = UnityEngine_Physics__Raycast_69d9950
                    (UVar13,(UnityEngine_Vector3_o)direction,&local_48,fVar12 + fVar2 + 2.0,layerMask,1,
                     (MethodInfo *)0x0);
  fVar11 = 0.0;
  if (bVar9) {
    UVar13 = UnityEngine_RaycastHit__get_normal(&local_48,(MethodInfo *)0x0);
    fVar11 = 0.0;
    if (0.2 < UVar13.fields.y) {
      uVar5 = (__this->fields)._origin.fields.x;
      uVar8 = (__this->fields)._origin.fields.y;
      fVar11 = (__this->fields)._origin.fields.z;
      UVar13 = UnityEngine_RaycastHit__get_point(&local_48,(MethodInfo *)0x0);
      UVar14 = UnityEngine_RaycastHit__get_normal(&local_48,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e72b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_0753e72b = '\x01';
      }
      rotation = *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields;
      method_00 = (MethodInfo *)0x0;
      normal = UnityEngine_RaycastHit__get_normal(&local_48,(MethodInfo *)0x0);
      fVar12 = Characters_TitanLimbFallEffect__GetSupportHeight
                         (__this,(UnityEngine_Quaternion_o)rotation,normal,method_00);
      fVar12 = ((UVar14.fields.z * (fVar11 - UVar13.fields.z) +
                UVar14.fields.y * ((float)uVar8 - UVar13.fields.y) +
                UVar14.fields.x * ((float)uVar5 - UVar13.fields.x)) - fVar12) * -0.5 + 1.0;
      fVar11 = 1.0;
      if (fVar12 <= 1.0) {
        fVar11 = fVar12;
      }
      fVar11 = (float)(-(uint)(0.0 <= fVar12) & (uint)fVar11);
    }
  }
  fVar12 = 0.0;
  if (0.0 <= fVar11) {
    fVar12 = fVar11;
  }
  fVar11 = UnityEngine_Random__Range(fVar11 * 8.0,fVar12 * 4.0 + 6.0,(MethodInfo *)0x0);
  return fVar11;
}


// Characters.TitanLimbFallEffect$$AddSupportVertices
// il2cpp: void Characters_TitanLimbFallEffect__AddSupportVertices (Characters_TitanLimbFallEffect_o* __this, UnityEngine_Mesh_o* mesh, float growth, const MethodInfo* method);
// 0x5c4f640
// eh: try 0x5c4f764..0x5c4f8c9 -> pad 0x5c4f950 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c4f8ed..0x5c4f8f2 -> pad 0x5c4f939 cleanup
// eh: try 0x5c4f93c..0x5c4f946 -> pad 0x5c4f99d catch (...) [compiler noexcept guard]
// eh: try 0x5c4f968..0x5c4f96d -> pad 0x5c4f98e cleanup
// eh: try 0x5c4f991..0x5c4f99b -> pad 0x5c4f99d catch (...) [compiler noexcept guard]
// asm: 50 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c4f8bb: jmp 0x5c4f925
// asm:   0x5c4f8cb: jmp 0x5c4f8d5
// asm:   0x5c4f8cd: jmp 0x5c4f8d5
// asm:   0x5c4f8cf: jmp 0x5c4f8d5
// asm:   0x5c4f8d1: jmp 0x5c4f8d5
// asm:   0x5c4f8d3: jmp 0x5c4f8d5
// asm:   0x5c4f8d5: mov rbp, rax
// asm:   0x5c4f8d8: cmp edx, 1
// asm:   0x5c4f8db: jne 0x5c4f93c
// asm:   0x5c4f8dd: mov rdi, rbp
// asm:   0x5c4f8e0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c4f8e5: mov rbp, qword ptr [rax]
// asm:   0x5c4f8e8: mov qword ptr [rsp + 8], rbp
// asm:   0x5c4f8ed: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c4f8f2: lea rax, [rip + 0x163e8ff]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5c4f8f9: mov rsi, qword ptr [rax]
// asm:   0x5c4f8fc: mov rdi, r13
// asm:   0x5c4f8ff: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5c4f904: test rbp, rbp
// asm:   0x5c4f907: je 0x5c4f892
// asm:   0x5c4f909: mov rdi, rbp
// asm:   0x5c4f90c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c4f939: mov rbp, rax
// asm:   0x5c4f93c: lea rdi, [rsp + 8]
// asm:   0x5c4f941: call 0x2fd98c0  ; il2cpp_runtime_helper_02fd98c0()
// asm:   0x5c4f946: mov rdi, rbp
// asm:   0x5c4f949: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c4f94e: jmp 0x5c4f950
// asm:   0x5c4f950: mov rbp, rax
// asm:   0x5c4f953: cmp edx, 1
// asm:   0x5c4f956: jne 0x5c4f991
// asm:   0x5c4f958: mov rdi, rbp
// asm:   0x5c4f95b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c4f960: mov rbx, qword ptr [rax]
// asm:   0x5c4f963: mov qword ptr [rsp + 8], rbx
// asm:   0x5c4f968: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c4f96d: lea rax, [rip + 0x163f484]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose
// asm:   0x5c4f974: mov rsi, qword ptr [rax]
// asm:   0x5c4f977: lea rdi, [rsp + 0x50]
// asm:   0x5c4f97c: call 0x4d66410  ; System_Collections_Generic_List_Enumerator_Vector3___Dispose()
// asm:   0x5c4f981: test rbx, rbx
// asm:   0x5c4f984: je 0x5c4f925
// asm:   0x5c4f986: mov rdi, rbx
// asm:   0x5c4f989: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c4f98e: mov rbp, rax
// asm:   0x5c4f991: lea rdi, [rsp + 8]
// asm:   0x5c4f996: call 0x2fd9890  ; il2cpp_runtime_helper_02fd9890()
// asm:   0x5c4f99b: jmp 0x5c4f946
// asm:   0x5c4f99d: mov rdi, rax
// asm:   0x5c4f9a0: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_TitanLimbFallEffect__AddSupportVertices
               (Characters_TitanLimbFallEffect_o *__this,UnityEngine_Mesh_o *mesh,float growth,
               MethodInfo *method)

{
  System_Collections_Generic_List_Vector3__o *pSVar1;
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_List_Vector2__o *__this_01;
  UnityEngine_Vector2_o UVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t iVar5;
  ulong uVar6;
  MethodInfo *pMVar7;
  uint uVar8;
  UnityEngine_Vector3_o UVar9;
  undefined1 local_a0 [16];
  Il2CppObject *local_90;
  undefined1 local_88 [8];
  System_Collections_Generic_List_Enumerator_int__o *pSStack_80;
  Il2CppObject *local_78;
  UnityEngine_Mesh_o *local_68;
  ulong local_60;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  float fStack_40;
  undefined4 uStack_3c;
  
  if (Il2CppMethodInitialized_07547850 == '\0') {
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
    Il2CppMethodInitialized_07547850 = '\x01';
  }
  local_58.fields._current = (Il2CppObject *)0x0;
  fStack_40 = 0.0;
  uStack_3c = 0;
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_88 = (undefined1  [8])0x0;
  pSStack_80 = (System_Collections_Generic_List_Enumerator_int__o *)0x0;
  local_78 = (Il2CppObject *)0x0;
  if (mesh == (UnityEngine_Mesh_o *)0x0) {
label_05c4f934:
    ThrowNullReferenceException();
  }
  UnityEngine_Mesh__GetVertices(mesh,(__this->fields)._vertices,(MethodInfo *)0x0);
  if (0.0 <= growth) {
    UnityEngine_Mesh__GetUVs(mesh,1,(__this->fields)._growthCoordinates,(MethodInfo *)0x0);
    iVar5 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
    uVar6 = 0;
    if (0 < iVar5) {
      local_68 = mesh;
      do {
        local_60 = uVar6;
        UnityEngine_Mesh__GetTriangles_68ea7f0
                  (mesh,(__this->fields)._indices,(int32_t)uVar6,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._indices;
        if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c4f934;
        System_Collections_Generic_List_int___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,__this_00,
                   (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
        local_78 = local_90;
        local_88 = (undefined1  [8])local_a0._0_8_;
        pSStack_80 = (System_Collections_Generic_List_Enumerator_int__o *)local_a0._8_8_;
        local_a0._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_a0._8_8_ = (System_Collections_Generic_List_Enumerator_int__o *)local_88;
        while (bVar4 = System_Collections_Generic_List_Enumerator_int___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_int__o *)local_88,
                                  (MethodInfo_4C3B4A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext),
              pIVar3 = local_78, bVar4) {
          __this_01 = (__this->fields)._growthCoordinates;
          if (__this_01 == (System_Collections_Generic_List_Vector2__o *)0x0) {
            ThrowNullReferenceException();
          }
          iVar5 = (int32_t)local_78;
          UVar2 = System_Collections_Generic_List_Vector2___get_Item
                            (__this_01,(int32_t)local_78,
                             (MethodInfo_39F9280 *)MethodInfo_System_Collections_Generic_List_Vector2_get_Item
                            );
          if (UVar2.fields.x <= growth) {
            pSVar1 = (__this->fields)._vertices;
            if (pSVar1 == (System_Collections_Generic_List_Vector3__o *)0x0) {
              ThrowNullReferenceException();
            }
            pMVar7 = (MethodInfo *)((ulong)pIVar3 & 0xffffffff);
            UVar9 = System_Collections_Generic_List_Vector3___get_Item
                              (pSVar1,iVar5,
                               (MethodInfo_39FF5D0 *)
                               MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
            Characters_TitanLimbFallEffect__AddSupportVertex(__this,UVar9,pMVar7);
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose
                  ((System_Collections_Generic_List_Enumerator_int__o *)local_88,
                   (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
        mesh = local_68;
        uVar8 = (int)local_60 + 1;
        uVar6 = (ulong)uVar8;
        iVar5 = UnityEngine_Mesh__get_subMeshCount(local_68,(MethodInfo *)0x0);
      } while ((int)uVar8 < iVar5);
    }
  }
  else {
    pSVar1 = (__this->fields)._vertices;
    if (pSVar1 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c4f934;
    System_Collections_Generic_List_Vector3___GetEnumerator
              (&local_58,pSVar1,
               (MethodInfo_3A00880 *)MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
    local_a0._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_a0._8_8_ = &local_58;
    while (pMVar7 = MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext,
          bVar4 = System_Collections_Generic_List_Enumerator_Vector3___MoveNext
                            (&local_58,
                             (MethodInfo_4C66420 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext), bVar4) {
      UVar9.fields.z = fStack_40;
      UVar9.fields._0_8_ = local_58.fields._current;
      Characters_TitanLimbFallEffect__AddSupportVertex(__this,UVar9,pMVar7);
    }
    System_Collections_Generic_List_Enumerator_Vector3___Dispose
              (&local_58,
               (MethodInfo_4C66410 *)MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
  }
  return;
}


// Characters.TitanLimbFallEffect$$AddSupportVertex
// il2cpp: void Characters_TitanLimbFallEffect__AddSupportVertex (Characters_TitanLimbFallEffect_o* __this, UnityEngine_Vector3_o vertex, const MethodInfo* method);
// 0x5c518f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c51a4b: jmp 0x5c51a89

void Characters_TitanLimbFallEffect__AddSupportVertex
               (Characters_TitanLimbFallEffect_o *__this,UnityEngine_Vector3_o vertex,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  System_Collections_Generic_List_Vector3__o *__this_00;
  UnityEngine_Vector3_array *pUVar9;
  MethodInfo *pMVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_o item;
  
  fVar12 = vertex.fields.z;
  fVar11 = vertex.fields.x;
  fVar14 = vertex.fields.y;
  if (Il2CppMethodInitialized_07547851 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    Il2CppMethodInitialized_07547851 = '\x01';
  }
  pMVar10 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
  __this_00 = (__this->fields)._supportVertices;
  if (__this_00 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    fVar16 = (__this->fields)._meshOffset.fields.m12 * fVar12 +
             (__this->fields)._meshOffset.fields.m11 * fVar14 +
             (__this->fields)._meshOffset.fields.m10 * fVar11 + (__this->fields)._meshOffset.fields.m13;
    fVar2 = (__this->fields)._meshOffset.fields.m01;
    fVar3 = (__this->fields)._meshOffset.fields.m20;
    fVar4 = (__this->fields)._meshOffset.fields.m21;
    fVar5 = (__this->fields)._meshOffset.fields.m00;
    fVar6 = (__this->fields)._meshOffset.fields.m22;
    fVar7 = (__this->fields)._meshOffset.fields.m02;
    fVar15 = (__this->fields)._meshOffset.fields.m23;
    fVar13 = (__this->fields)._meshOffset.fields.m03;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar9 = (__this_00->fields)._items;
    if (pUVar9 != (UnityEngine_Vector3_array *)0x0) {
      fVar13 = fVar13 + fVar12 * fVar7 + fVar5 * fVar11 + fVar14 * fVar2;
      fVar15 = fVar15 + fVar12 * fVar6 + fVar4 * fVar14 + fVar11 * fVar3;
      uVar8 = (__this_00->fields)._size;
      if (uVar8 < (uint)pUVar9->max_length) {
        (__this_00->fields)._size = uVar8 + 1;
        pUVar9->m_Items[(int)uVar8].fields.x = fVar13;
        pUVar9->m_Items[(int)uVar8].fields.y = fVar16;
        pUVar9->m_Items[(int)uVar8].fields.z = fVar15;
        fVar11 = (__this->fields)._radius;
      }
      else {
        item.fields.y = fVar16;
        item.fields.x = fVar13;
        item.fields.z = fVar15;
        System_Collections_Generic_List_Vector3___AddWithResize
                  (__this_00,item,(MethodInfo_39FF950 *)pMVar10->klass->rgctx_data[0xe].method);
        fVar11 = (__this->fields)._radius;
      }
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar14 = fVar15 * fVar15 + fVar16 * fVar16 + fVar13 * fVar13;
      if (fVar14 < 0.0) {
        fVar14 = sqrtf(fVar14);
      }
      else {
        fVar14 = SQRT(fVar14);
      }
      if (fVar11 <= fVar14) {
        fVar11 = fVar14;
      }
      (__this->fields)._radius = fVar11;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$GetRestNormal
// il2cpp: UnityEngine_Vector3_o Characters_TitanLimbFallEffect__GetRestNormal (Characters_TitanLimbFallEffect_o* __this, const MethodInfo* method);
// 0x5c509f0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c50b31: jmp 0x5c50b67
// asm:   0x5c50e50: movaps xmm0, xmm1
// asm:   0x5c50fa9: movaps xmm3, xmmword ptr [rsp + 0x50]
// asm:   0x5c50fae: jmp 0x5c50e50

UnityEngine_Vector3_o
Characters_TitanLimbFallEffect__GetRestNormal(Characters_TitanLimbFallEffect_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  uint32_t uVar2;
  System_Collections_Generic_List_Vector3__o *__this_00;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  UnityEngine_Vector3_o *pUVar7;
  int iVar8;
  MethodInfo *method_00;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float fVar13;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar14;
  float fVar15;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  UnityEngine_Vector3_o UVar25;
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_o UVar27;
  float local_c8;
  float fStack_c4;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined1 local_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  UnityEngine_Vector3_Fields local_50;
  float fStack_44;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  undefined8 uStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (Il2CppMethodInitialized_07547852 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    Il2CppMethodInitialized_07547852 = '\x01';
  }
  __this_00 = (__this->fields)._supportVertices;
  if (__this_00 == (System_Collections_Generic_List_Vector3__o *)0x0) {
    ThrowNullReferenceException();
  }
  if (1 < (__this_00->fields)._size) {
    method_00 = (MethodInfo *)0x0;
    UVar25 = System_Collections_Generic_List_Vector3___get_Item
                       (__this_00,0,
                        (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    UVar25 = Characters_TitanLimbFallEffect__GetFarthestVertex(__this,UVar25,method_00);
    UVar26 = Characters_TitanLimbFallEffect__GetFarthestVertex(__this,UVar25,method_00);
    local_c8 = UVar25.fields.x;
    fStack_c4 = UVar25.fields.y;
    auVar19._0_4_ = UVar26.fields.x - local_c8;
    auVar19._4_4_ = UVar26.fields.y - fStack_c4;
    auVar19._8_4_ = extraout_XMM0_Dc_00 - extraout_XMM0_Dc;
    auVar19._12_4_ = extraout_XMM0_Dd_00 - extraout_XMM0_Dd;
    fVar15 = UVar26.fields.z - UVar25.fields.z;
    fVar20 = fVar15 * fVar15 + auVar19._4_4_ * auVar19._4_4_ + auVar19._0_4_ * auVar19._0_4_;
    if (1e-06 <= fVar20) {
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        in_XMM1_Db = 0;
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        Il2CppMethodInitialized_0753e729 = '\x01';
        uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        in_XMM1_Db = 0;
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
      }
      _local_b8 = ZEXT816(0);
      if (fVar20 < 0.0) {
        fVar20 = sqrtf(fVar20);
        in_XMM1_Db = 0;
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
      }
      else {
        fVar20 = SQRT(fVar20);
      }
      fVar16 = 0.0;
      fVar11 = 0.0;
      fVar10 = 0.0;
      fVar9 = 0.0;
      if (1e-05 < fVar20) {
        auVar4._4_4_ = fVar20;
        auVar4._0_4_ = fVar20;
        auVar4._8_4_ = fVar20;
        auVar4._12_4_ = fVar20;
        auVar19 = divps(auVar19,auVar4);
        fVar9 = auVar19._0_4_;
        fVar10 = auVar19._4_4_;
        fVar11 = auVar19._8_4_;
        fVar16 = auVar19._12_4_;
        local_b8._4_4_ = in_XMM1_Db;
        local_b8._0_4_ = fVar15 / fVar20;
        fStack_b0 = (float)in_XMM1_Dc;
        fStack_ac = (float)in_XMM1_Dd;
      }
      if (0.9 <= ABS(fVar10)) {
        if (Il2CppMethodInitialized_07544d56 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_07544d56 = '\x01';
        }
        pUVar7 = &TypeInfo_UnityEngine_Vector3->static_fields->rightVector;
        pUVar5 = &TypeInfo_UnityEngine_Vector3->static_fields->rightVector;
      }
      else {
        if (Il2CppMethodInitialized_0753e72c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72c = '\x01';
        }
        pUVar7 = &TypeInfo_UnityEngine_Vector3->static_fields->upVector;
        pUVar5 = &TypeInfo_UnityEngine_Vector3->static_fields->upVector;
      }
      fVar15 = (pUVar7->fields).x;
      uVar1._0_4_ = (pUVar7->fields).y;
      fVar20 = (pUVar5->fields).z;
      uVar1._4_4_ = (float)uVar1;
      fVar12 = fVar9;
      fVar13 = 0.0;
      fVar14 = 0.0;
      fVar21 = fVar20;
      fVar22 = (float)local_b8._0_4_;
      fVar23 = 0.0;
      fVar24 = (float)local_b8._4_4_;
      if (Il2CppMethodInitialized_0753e72d == '\0') {
        local_38._4_4_ = local_b8._0_4_;
        local_38._0_4_ = fVar20;
        uStack_30 = (ulong)(uint)local_b8._4_4_ << 0x20;
        fStack_44 = fVar9;
        local_50.z = (float)uVar1;
        uStack_40._0_4_ = 0.0;
        uStack_40._4_4_ = 0.0;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72d = '\x01';
        uVar1._4_4_ = local_50.z;
        fVar12 = fStack_44;
        fVar13 = (float)uStack_40;
        fVar14 = uStack_40._4_4_;
        fVar21 = (float)local_38._0_4_;
        fVar22 = (float)local_38._4_4_;
        fVar23 = (float)uStack_30;
        fVar24 = uStack_30._4_4_;
      }
      local_50.x = 0.0;
      local_50.y = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
      }
      auVar18._0_4_ = fVar10 * fVar21 - (float)local_b8._0_4_ * uVar1._4_4_;
      auVar18._4_4_ = fVar15 * fVar22 - fVar20 * fVar12;
      auVar18._8_4_ = fVar11 * fVar23 - (float)local_b8._4_4_ * fVar13;
      auVar18._12_4_ = fVar16 * fVar24 - fVar14 * 0.0;
      fVar20 = (float)uVar1 * fVar9 - fVar15 * fVar10;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar15 = fVar20 * fVar20 + auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_;
      if (fVar15 < 0.0) {
        fVar15 = sqrtf(fVar15);
        uVar1._0_4_ = extraout_XMM0_Db;
        if (1e-05 < fVar15) goto label_05c50dae;
label_05c50d68:
        pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar20 = (pUVar6->zeroVector).fields.z;
      }
      else {
        fVar15 = SQRT(fVar15);
        if (fVar15 <= 1e-05) goto label_05c50d68;
label_05c50dae:
        fVar20 = fVar20 / fVar15;
        auVar3._4_4_ = fVar15;
        auVar3._0_4_ = fVar15;
        auVar3._8_4_ = (float)uVar1;
        auVar3._12_4_ = (float)uVar1;
        auVar19 = divps(auVar18,auVar3);
        local_50.x = auVar19._0_4_;
        local_50.y = auVar19._4_4_;
        pUVar6 = (UnityEngine_Vector3_StaticFields *)&local_50;
      }
      uVar1._0_4_ = (pUVar6->zeroVector).fields.x;
      uVar1._4_4_ = (pUVar6->zeroVector).fields.y;
      uStack_70 = 0;
      uStack_6c = 0;
      fStack_24 = (float)local_b8._0_4_ * (float)uVar1 - fVar9 * fVar20;
      local_28 = fVar20 * fVar10 - uVar1._4_4_ * (float)local_b8._0_4_;
      fStack_20 = fStack_b0 * 0.0 - fVar11 * (float)local_b8._0_4_;
      fStack_1c = fStack_ac * 0.0 - fVar16 * (float)local_b8._0_4_;
      fStack_44 = uVar1._4_4_;
      local_50.z = uVar1._4_4_ * fVar9 - fVar10 * (float)uVar1;
      uStack_40._4_4_ = uVar1._4_4_;
      uStack_40._0_4_ = uVar1._4_4_;
      iVar8 = 0;
      uStack_30._0_4_ = 0.0;
      uStack_30._4_4_ = 0.0;
      fVar9 = 3.4028235e+38;
      fVar15 = fVar20;
      local_38 = (undefined1  [8])uVar1;
      do {
        local_78._4_4_ = uVar1._4_4_;
        local_78._0_4_ = (float)uVar1;
        fVar10 = (float)iVar8 * 3.1415927 * 0.03125;
        fVar11 = cosf(fVar10);
        fVar10 = sinf(fVar10);
        if (Il2CppMethodInitialized_0753e72b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_0753e72b = '\x01';
        }
        fVar16 = fVar10 * local_28 + fVar11 * (float)local_38._0_4_;
        uVar1._0_4_ = fVar10 * fStack_24 + fVar11 * (float)local_38._4_4_;
        auVar17._0_8_ = (undefined1  [8])CONCAT44((float)uVar1,fVar16);
        auVar17._8_4_ = fVar10 * fStack_20 + fVar11 * (float)uStack_30;
        auVar17._12_4_ = fVar10 * fStack_1c + fVar11 * uStack_30._4_4_;
        UVar25.fields.z = local_50.z * fVar10 + fVar20 * fVar11;
        UVar25.fields.x = fVar16;
        UVar25.fields.y = (float)uVar1;
        fVar10 = Characters_TitanLimbFallEffect__GetSupportHeight
                           (__this,(UnityEngine_Quaternion_o)
                                   *(UnityEngine_Quaternion_Fields *)
                                    TypeInfo_UnityEngine_Quaternion->static_fields,UVar25,method_00);
        if (Il2CppMethodInitialized_0753e72b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_0753e72b = '\x01';
        }
        UVar26.fields._0_8_ = (ulong)auVar17._0_8_ ^ 0x8000000080000000;
        UVar26.fields.z = -UVar25.fields.z;
        fVar11 = Characters_TitanLimbFallEffect__GetSupportHeight
                           (__this,(UnityEngine_Quaternion_o)
                                   *(UnityEngine_Quaternion_Fields *)
                                    TypeInfo_UnityEngine_Quaternion->static_fields,UVar26,method_00);
        fVar10 = fVar10 + fVar11;
        fVar11 = fVar10;
        auVar19 = auVar17;
        if (fVar9 <= fVar10) {
          fVar11 = fVar9;
          auVar17._0_8_ = local_78;
          auVar19 = _local_78;
        }
        fVar15 = (float)(~-(uint)(fVar10 < fVar9) & (uint)fVar15 |
                        (uint)UVar25.fields.z & -(uint)(fVar10 < fVar9));
        iVar8 = iVar8 + 1;
        uVar1._0_4_ = auVar19._0_4_;
        uVar1._4_4_ = auVar19._4_4_;
        uStack_70 = auVar19._8_4_;
        uStack_6c = auVar19._12_4_;
        fVar9 = fVar11;
      } while (iVar8 != 0x20);
      goto label_05c50ad1;
    }
  }
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
  auVar17._0_4_ = (pUVar6->upVector).fields.x;
  auVar17._4_4_ = (pUVar6->upVector).fields.y;
  fVar15 = (pUVar6->upVector).fields.z;
label_05c50ad1:
  UVar27.fields.z = fVar15;
  UVar27.fields.x = (float)SUB84(auVar17._0_8_,0);
  UVar27.fields.y = (float)(int)((ulong)auVar17._0_8_ >> 0x20);
  return (UnityEngine_Vector3_o)UVar27.fields;
}


// Characters.TitanLimbFallEffect$$GetFarthestVertex
// il2cpp: UnityEngine_Vector3_o Characters_TitanLimbFallEffect__GetFarthestVertex (Characters_TitanLimbFallEffect_o* __this, UnityEngine_Vector3_o origin, const MethodInfo* method);
// 0x5c51b20
// eh: try 0x5c51be3..0x5c51beb -> pad 0x5c51c65 catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c51c7d..0x5c51c82 -> pad 0x5c51ca3 cleanup
// eh: try 0x5c51ca6..0x5c51cb0 -> pad 0x5c51cb8 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c51bdd: nop dword ptr [rax]
// asm:   0x5c51c65: mov rbx, rax
// asm:   0x5c51c68: cmp edx, 1
// asm:   0x5c51c6b: jne 0x5c51ca6
// asm:   0x5c51c6d: mov rdi, rbx
// asm:   0x5c51c70: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c51c75: mov rbx, qword ptr [rax]
// asm:   0x5c51c78: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5c51c7d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c51c82: lea rax, [rip + 0x163d16f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose
// asm:   0x5c51c89: mov rsi, qword ptr [rax]
// asm:   0x5c51c8c: lea rdi, [rsp + 0x30]
// asm:   0x5c51c91: call 0x4d66410  ; System_Collections_Generic_List_Enumerator_Vector3___Dispose()
// asm:   0x5c51c96: test rbx, rbx
// asm:   0x5c51c99: je 0x5c51c4b
// asm:   0x5c51c9b: mov rdi, rbx
// asm:   0x5c51c9e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c51ca3: mov rbx, rax
// asm:   0x5c51ca6: lea rdi, [rsp + 0x20]
// asm:   0x5c51cab: call 0x2fd98f0  ; il2cpp_runtime_helper_02fd98f0()
// asm:   0x5c51cb0: mov rdi, rbx
// asm:   0x5c51cb3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c51cb8: mov rdi, rax
// asm:   0x5c51cbb: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Vector3_o
Characters_TitanLimbFallEffect__GetFarthestVertex
          (Characters_TitanLimbFallEffect_o *__this,UnityEngine_Vector3_o origin,MethodInfo *method)

{
  System_Collections_Generic_List_Vector3__o *__this_00;
  float fVar1;
  bool bVar2;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  float local_8c;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  undefined8 uStack_50;
  Il2CppObject *local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  float local_28;
  float fStack_24;
  undefined4 uStack_1c;
  
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = origin.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_07547853 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
    Il2CppMethodInitialized_07547853 = '\x01';
  }
  local_68.fields._current = (Il2CppObject *)0x0;
  uStack_50 = 0;
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  __this_00 = (__this->fields)._supportVertices;
  if (__this_00 == (System_Collections_Generic_List_Vector3__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_Vector3___GetEnumerator
            (&local_68,__this_00,
             (MethodInfo_3A00880 *)MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
  fStack_24 = (float)local_38._0_4_;
  uStack_1c = local_38._4_4_;
  local_8c = 0.0;
  local_48 = local_38._0_8_;
  uStack_40 = local_38._8_8_;
  local_28 = origin.fields.z;
  fVar1 = origin.fields.z;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator_Vector3___MoveNext
                      (&local_68,
                       (MethodInfo_4C66420 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext);
    if (!bVar2) break;
    fVar3 = (float)((ulong)local_68.fields._current >> 0x20) - (float)local_38._4_4_;
    fVar4 = SUB84(local_68.fields._current,0) - fStack_24;
    fVar3 = fVar3 * fVar3 + fVar4 * fVar4 + ((float)uStack_50 - local_28) * ((float)uStack_50 - local_28);
    if (local_8c < fVar3) {
      local_48 = local_68.fields._current;
      uStack_40 = 0;
      local_8c = fVar3;
      fVar1 = (float)uStack_50;
    }
  }
  System_Collections_Generic_List_Enumerator_Vector3___Dispose
            (&local_68,
             (MethodInfo_4C66410 *)MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
  UVar5.fields.z = fVar1;
  UVar5.fields._0_8_ = local_48;
  return (UnityEngine_Vector3_o)UVar5.fields;
}


// Characters.TitanLimbFallEffect$$Bake
// il2cpp: void Characters_TitanLimbFallEffect__Bake (Characters_TitanLimbFallEffect_o* __this, UnityEngine_SkinnedMeshRenderer_o* source, UnityEngine_Mesh_o* mesh, UnityEngine_Mesh_o* destination, const MethodInfo* method);
// 0x5c4f520
// eh: try 0x5c4f56e..0x5c4f5f6 -> pad 0x5c4f5fe (+2 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5c4f618..0x5c4f61d -> pad 0x5c4f622 cleanup
// eh: try 0x5c4f625..0x5c4f62f -> pad 0x5c4f637 catch (...) [compiler noexcept guard]
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c4f5f6: mov rdi, r15
// asm:   0x5c4f5f9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c4f5fe: jmp 0x5c4f600
// asm:   0x5c4f600: mov r15, rax
// asm:   0x5c4f603: cmp edx, 1
// asm:   0x5c4f606: jne 0x5c4f625
// asm:   0x5c4f608: mov rdi, r15
// asm:   0x5c4f60b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c4f610: mov r15, qword ptr [rax]
// asm:   0x5c4f613: mov qword ptr [rsp + 0x10], r15
// asm:   0x5c4f618: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c4f61d: jmp 0x5c4f596
// asm:   0x5c4f622: mov r15, rax
// asm:   0x5c4f625: lea rdi, [rsp + 0x10]
// asm:   0x5c4f62a: call 0x2fd9920  ; il2cpp_runtime_helper_02fd9920()
// asm:   0x5c4f62f: mov rdi, r15
// asm:   0x5c4f632: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c4f637: mov rdi, rax
// asm:   0x5c4f63a: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_TitanLimbFallEffect__Bake
               (Characters_TitanLimbFallEffect_o *__this,UnityEngine_SkinnedMeshRenderer_o *source,
               UnityEngine_Mesh_o *mesh,UnityEngine_Mesh_o *destination,MethodInfo *method)

{
  UnityEngine_SkinnedMeshRenderer_o *local_48;
  UnityEngine_Mesh_o *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  UnityEngine_Mesh_o **local_28;
  
  local_48 = source;
  if (source != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
    local_40 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(source,(MethodInfo *)0x0);
    local_30 = (undefined1 *)&local_48;
    local_38 = 0;
    local_28 = &local_40;
    UnityEngine_SkinnedMeshRenderer__set_sharedMesh(source,mesh,(MethodInfo *)0x0);
    if (local_48 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_SkinnedMeshRenderer__BakeMesh(local_48,destination,true,(MethodInfo *)0x0);
    if ((local_48 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) &&
       (UnityEngine_SkinnedMeshRenderer__set_sharedMesh(local_48,local_40,(MethodInfo *)0x0),
       destination != (UnityEngine_Mesh_o *)0x0)) {
      UnityEngine_Mesh__GetVertices(destination,(__this->fields)._vertices,(MethodInfo *)0x0);
      UnityEngine_Mesh__SetUVs_68e9880(destination,3,(__this->fields)._vertices,(MethodInfo *)0x0);
      UnityEngine_Mesh__RecalculateBounds(destination,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$CopyMaterials
// il2cpp: void Characters_TitanLimbFallEffect__CopyMaterials (System_Collections_Generic_List_Material__o* materials, System_Collections_Generic_List_Material__o* sources, bool growth, float size, const MethodInfo* method);
// 0x5c4f9b0
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c4fad7: lea r15, [rip + 0x162e06a]  ; TypeInfo_Characters_TitanLimbFallEffect
// asm:   0x5c4fade: lea r13, [rip + 0x162afeb]  ; TypeInfo_UnityEngine_Material
// asm:   0x5c4fae5: lea r14, [rip + 0x1645c84]  ; MethodInfo_System_Collections_Generic_List_Material_Add
// asm:   0x5c4faec: jmp 0x5c4fb1b
// asm:   0x5c4fba5: lea r14, [rip + 0x1645c14]  ; MethodInfo_System_Collections_Generic_List_Material_get_Item
// asm:   0x5c4fbac: lea r15, [rip + 0x162b83d]  ; TypeInfo_UnityEngine_Object
// asm:   0x5c4fbb3: lea r12, [rip + 0x1645be6]  ; MethodInfo_System_Collections_Generic_List_Material_RemoveAt
// asm:   0x5c4fbba: jmp 0x5c4fbe6
// asm:   0x5c4fd4f: jmp 0x5c50010

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
  int iVar6;
  UnityEngine_Material_o *pUVar7;
  UnityEngine_Material_o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar8;
  UnityEngine_Texture_o *value;
  System_String_o **ppSVar9;
  int32_t index;
  int iVar10;
  System_String_o *pSVar11;
  float value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_Vector2_Fields value_02;
  UnityEngine_Color_o value_03;
  float local_40;
  
  if (Il2CppMethodInitialized_07547854 == '\0') {
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
    Il2CppMethodInitialized_07547854 = '\x01';
  }
  if ((materials == (System_Collections_Generic_List_Material__o *)0x0) ||
     (sources == (System_Collections_Generic_List_Material__o *)0x0)) {
label_05c5001f:
    ThrowNullReferenceException();
  }
  iVar10 = (materials->fields)._size;
  iVar6 = (sources->fields)._size;
  if (iVar10 < iVar6) {
    do {
      if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
      }
      shader = TypeInfo_Characters_TitanLimbFallEffect->static_fields->_shader;
      pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
      UnityEngine_Material___ctor(pUVar7,shader,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_Material_Add;
      piVar1 = &(materials->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (materials->fields)._items;
      if (pUVar3 == (UnityEngine_Material_array *)0x0) goto label_05c5001f;
      uVar2 = (materials->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (materials->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2] = pUVar7;
        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)materials,(Il2CppObject *)pUVar7,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      iVar10 = (materials->fields)._size;
      iVar6 = (sources->fields)._size;
    } while (iVar10 < iVar6);
  }
  if (iVar6 < iVar10) {
    do {
      pUVar7 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)materials,iVar10 + -1,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Material_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)materials,(materials->fields)._size + -1,
                 (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_Material_RemoveAt);
      iVar10 = (materials->fields)._size;
      iVar6 = (sources->fields)._size;
    } while (iVar6 < iVar10);
  }
  if (0 < iVar6) {
    if (size <= 0.001) {
      size = 0.001;
    }
    local_40 = 1.0;
    if (!growth) {
      local_40 = 0.0;
    }
    index = 0;
    do {
      while( true ) {
        pUVar7 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)sources,index,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Material_get_Item
                           );
        __this = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)materials,index,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Material_get_Item
                           );
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar5) break;
        if (__this == (UnityEngine_Material_o *)0x0) goto label_05c5001f;
        UnityEngine_Material__SetColor
                  (__this,"_BaseColor",(UnityEngine_Color_o)ZEXT816(0),(MethodInfo *)0x0);
        UnityEngine_Material__SetFloat(__this,"_Flesh",0.0,(MethodInfo *)0x0);
        index = index + 1;
        if ((sources->fields)._size <= index) {
          return;
        }
      }
      if (__this == (UnityEngine_Material_o *)0x0) goto label_05c5001f;
      UnityEngine_Material__CopyPropertiesFromMaterial(__this,pUVar7,(MethodInfo *)0x0);
      if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
      }
      UnityEngine_Material__set_shader
                (__this,TypeInfo_Characters_TitanLimbFallEffect->static_fields->_shader,(MethodInfo *)0x0);
      UnityEngine_Material__set_renderQueue(__this,2000,(MethodInfo *)0x0);
      UnityEngine_Material__SetFloat(__this,"_Layer",0.0,(MethodInfo *)0x0);
      UnityEngine_Material__SetFloat(__this,"_Flesh",1.0,(MethodInfo *)0x0);
      if ((pUVar7 == (UnityEngine_Material_o *)0x0) ||
         (__this_00 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(pUVar7,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_Object_o *)0x0)) goto label_05c5001f;
      pSVar8 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      bVar5 = System_String__op_Equality(pSVar8,"AoTTG/TitanWound",(MethodInfo *)0x0);
      value_00 = 1.0;
      if (!bVar5) {
        value_00 = 0.0;
      }
      UnityEngine_Material__SetFloat(__this,"_VertexColor",value_00,(MethodInfo *)0x0);
      UnityEngine_Material__SetFloat(__this,"_Regrowth",local_40,(MethodInfo *)0x0);
      UnityEngine_Material__SetFloat(__this,"_DissolveScale",8.0 / size,(MethodInfo *)0x0);
      bVar5 = UnityEngine_Material__HasProperty_68dd940(pUVar7,"_BaseMap",(MethodInfo *)0x0);
      ppSVar9 = &"_BaseMap";
      if (bVar5) {
label_05c4feaf:
        pSVar11 = "_BaseMap";
        pSVar8 = *ppSVar9;
        if (pSVar8 == (System_String_o *)0x0) goto label_05c4ff20;
        value = UnityEngine_Material__GetTexture(pUVar7,pSVar8,(MethodInfo *)0x0);
        UnityEngine_Material__SetTexture(__this,pSVar11,value,(MethodInfo *)0x0);
        pSVar11 = "_BaseMap";
        value_01 = UnityEngine_Material__GetTextureScale(pUVar7,pSVar8,(MethodInfo *)0x0);
        UnityEngine_Material__SetTextureScale(__this,pSVar11,value_01,(MethodInfo *)0x0);
        pSVar11 = "_BaseMap";
        value_02 = (UnityEngine_Vector2_Fields)
                   UnityEngine_Material__GetTextureOffset(pUVar7,pSVar8,(MethodInfo *)0x0);
      }
      else {
        bVar5 = UnityEngine_Material__HasProperty_68dd940(pUVar7,"_MainTex",(MethodInfo *)0x0);
        ppSVar9 = &"_MainTex";
        if (bVar5) goto label_05c4feaf;
label_05c4ff20:
        UnityEngine_Material__SetTexture
                  (__this,"_BaseMap",(UnityEngine_Texture_o *)0x0,(MethodInfo *)0x0);
        pSVar8 = "_BaseMap";
        if (Il2CppMethodInitialized_07542885 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_07542885 = '\x01';
        }
        UnityEngine_Material__SetTextureScale
                  (__this,pSVar8,
                   (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                   (MethodInfo *)0x0);
        pSVar11 = "_BaseMap";
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        value_02 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
      }
      UnityEngine_Material__SetTextureOffset(__this,pSVar11,(UnityEngine_Vector2_o)value_02,(MethodInfo *)0x0)
      ;
      bVar5 = UnityEngine_Material__HasProperty_68dd940(pUVar7,"_BaseColor",(MethodInfo *)0x0);
      ppSVar9 = &"_BaseColor";
      if (bVar5) {
label_05c4ffeb:
        pSVar8 = "_BaseColor";
        if (*ppSVar9 == (System_String_o *)0x0) goto label_05c4fc80;
        value_03 = UnityEngine_Material__GetColor(pUVar7,*ppSVar9,(MethodInfo *)0x0);
      }
      else {
        bVar5 = UnityEngine_Material__HasProperty_68dd940(pUVar7,"_Color",(MethodInfo *)0x0);
        ppSVar9 = &"_Color";
        if (bVar5) goto label_05c4ffeb;
label_05c4fc80:
        value_03.fields.b = 1.0;
        value_03.fields.a = 1.0;
        value_03.fields.r = 1.0;
        value_03.fields.g = 1.0;
        pSVar8 = "_BaseColor";
      }
      UnityEngine_Material__SetColor(__this,pSVar8,value_03,(MethodInfo *)0x0);
      index = index + 1;
    } while (index < (sources->fields)._size);
  }
  return;
}


// Characters.TitanLimbFallEffect$$PrepareSteam
// il2cpp: void Characters_TitanLimbFallEffect__PrepareSteam (Characters_TitanLimbFallEffect_o* __this, UnityEngine_SkinnedMeshRenderer_o* source, float size, const MethodInfo* method);
// 0x5c513a0

void Characters_TitanLimbFallEffect__PrepareSteam
               (Characters_TitanLimbFallEffect_o *__this,UnityEngine_SkinnedMeshRenderer_o *source,float size,
               MethodInfo *method)

{
  UnityEngine_ParticleSystem_o **targetAddress;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_ParticleSystem_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  MethodInfo *method_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_ParticleSystem_EmissionModule_o local_50;
  undefined1 local_48 [16];
  
  local_48._0_4_ = size;
  if (Il2CppMethodInitialized_07547855 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_GameObject_71af8b0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSteamEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"ArmSmokeParticle");
    Il2CppMethodInitialized_07547855 = '\x01';
  }
  local_50.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  pUVar4 = (__this->fields)._steam;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._steam;
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
    }
    pUVar2 = Characters_BasicTitanComponentCache__LoadParticle("ArmSmokeParticle",method_00);
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pUVar2 = UnityEngine_Object__Instantiate_object__35a4410
                       ((Il2CppObject *)pUVar2,pUVar3,
                        (MethodInfo_35A4410 *)MethodInfo_UnityEngine_Object_Instantiate_GameObject_71af8b0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_05c51623;
    pUVar4 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar2,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem);
    *targetAddress = pUVar4;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  pUVar4 = *targetAddress;
  if ((TypeInfo_Characters_TitanSteamEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSteamEffect);
  }
  Characters_TitanSteamEffect__Configure
            (pUVar4,(float)local_48._0_4_ + (float)local_48._0_4_,false,42.0,(MethodInfo *)0x0);
  if (*targetAddress != (UnityEngine_ParticleSystem_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0)
    ;
    if (source != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
      pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        UVar6 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
        local_48._8_4_ = extraout_XMM0_Dc;
        local_48._0_8_ = UVar6.fields._0_8_;
        local_48._12_4_ = extraout_XMM0_Dd;
        pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          rotation = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            UVar6.fields.x = (float)local_48._0_4_;
            UVar6.fields.y = (float)local_48._4_4_;
            UnityEngine_Transform__SetPositionAndRotation(pUVar3,UVar6,rotation,(MethodInfo *)0x0);
            if (*targetAddress != (UnityEngine_ParticleSystem_o *)0x0) {
              pUVar3 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
              pUVar5 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                UVar6 = UnityEngine_Transform__get_lossyScale(pUVar5,(MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_localScale(pUVar3,UVar6,(MethodInfo *)0x0);
                  Characters_TitanSteamEffect__SetSurface
                            ((__this->fields)._steam,(__this->fields)._mesh,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields)._steam;
                  if (pUVar4 != (UnityEngine_ParticleSystem_o *)0x0) {
                    local_50 = UnityEngine_ParticleSystem__get_emission(pUVar4,(MethodInfo *)0x0);
                    UnityEngine_ParticleSystem_EmissionModule__set_enabled(&local_50,false,(MethodInfo *)0x0);
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
label_05c51623:
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$LateUpdate
// il2cpp: void Characters_TitanLimbFallEffect__LateUpdate (Characters_TitanLimbFallEffect_o* __this, const MethodInfo* method);
// 0x5c51cc0
// eh: try 0x5c52303..0x5c52516 -> pad 0x5c52527 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5c52542..0x5c52547 -> pad 0x5c52549 cleanup
// eh: try 0x5c5254c..0x5c52559 -> pad 0x5c52561 catch (...) [compiler noexcept guard]
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c52523: jmp 0x5c52527
// asm:   0x5c52525: jmp 0x5c52527
// asm:   0x5c52527: mov rbx, rax
// asm:   0x5c5252a: cmp edx, 1
// asm:   0x5c5252d: jne 0x5c5254c
// asm:   0x5c5252f: mov rdi, rbx
// asm:   0x5c52532: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c52537: mov rbx, qword ptr [rax]
// asm:   0x5c5253a: mov qword ptr [rsp + 0xc0], rbx
// asm:   0x5c52542: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c52547: jmp 0x5c524e6
// asm:   0x5c52549: mov rbx, rax
// asm:   0x5c5254c: lea rdi, [rsp + 0xc0]
// asm:   0x5c52554: call 0x2fd9960  ; il2cpp_runtime_helper_02fd9960()
// asm:   0x5c52559: mov rdi, rbx
// asm:   0x5c5255c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c52561: mov rdi, rax
// asm:   0x5c52564: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_TitanLimbFallEffect__LateUpdate(Characters_TitanLimbFallEffect_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_ParticleSystem_o *pUVar3;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_TitanLimbFallEffect_Attachment__o *__this_00;
  UnityEngine_Matrix4x4_o matrix;
  UnityEngine_Matrix4x4_o matrix_00;
  UnityEngine_Matrix4x4_o matrix_01;
  UnityEngine_Matrix4x4_o matrix_02;
  undefined8 uVar4;
  bool bVar5;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *in_R8;
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
  UnityEngine_ParticleSystem_EmissionModule_o local_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [12];
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  System_Collections_Generic_List_Enumerator_T__o local_148;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (Il2CppMethodInitialized_07547856 == '\0') {
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
    Il2CppMethodInitialized_07547856 = '\x01';
  }
  local_148.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_148.fields._index = 0;
  local_148.fields._version = 0;
  local_148.fields._current = (Il2CppObject *)0x0;
  fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  Characters_TitanLimbFallEffect__UpdateMotion(__this,fVar6,method);
  pUVar3 = (__this->fields)._blood;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar5) && ((__this->fields)._dissolveDelay <= (__this->fields)._age)) {
    pUVar3 = (__this->fields)._blood;
    if (pUVar3 == (UnityEngine_ParticleSystem_o *)0x0) goto label_05c52516;
    bVar5 = UnityEngine_ParticleSystem__get_isEmitting(pUVar3,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar3 = (__this->fields)._blood;
      if (pUVar3 == (UnityEngine_ParticleSystem_o *)0x0) goto label_05c52516;
      UnityEngine_ParticleSystem__Stop(pUVar3,true,1,(MethodInfo *)0x0);
    }
  }
  fVar6 = (__this->fields)._age - (__this->fields)._dissolveDelay;
  if (4.3 <= fVar6) {
    pUVar3 = (__this->fields)._steam;
    if (pUVar3 != (UnityEngine_ParticleSystem_o *)0x0) {
      UnityEngine_ParticleSystem__Stop(pUVar3,true,0,(MethodInfo *)0x0);
      __this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pUVar3 = (__this->fields)._steam;
    if (pUVar3 != (UnityEngine_ParticleSystem_o *)0x0) {
      local_1b0 = UnityEngine_ParticleSystem__get_emission(pUVar3,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_EmissionModule__set_enabled
                (&local_1b0,(bool)(-(0.0 < fVar6 && fVar6 < 3.0) & 1),(MethodInfo *)0x0);
      bVar5 = UnityEngine_ParticleSystem_EmissionModule__get_enabled(&local_1b0,(MethodInfo *)0x0);
      if (bVar5) {
        pUVar3 = (__this->fields)._steam;
        if (pUVar3 == (UnityEngine_ParticleSystem_o *)0x0) goto label_05c52516;
        bVar5 = UnityEngine_ParticleSystem__get_isPlaying(pUVar3,(MethodInfo *)0x0);
        if (!bVar5) {
          pUVar3 = (__this->fields)._steam;
          if (pUVar3 == (UnityEngine_ParticleSystem_o *)0x0) goto label_05c52516;
          UnityEngine_ParticleSystem__Play(pUVar3,false,(MethodInfo *)0x0);
        }
      }
      if (fVar6 < 3.0) {
        __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_05c52516;
        fVar6 = fVar6 / 3.0;
        fVar13 = 1.0;
        if (fVar6 <= 1.0) {
          fVar13 = fVar6;
        }
        fVar13 = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar13);
        UnityEngine_Transform__get_localToWorldMatrix
                  ((UnityEngine_Matrix4x4_o *)local_188,__this_01,(MethodInfo *)0x0);
        fVar6 = (__this->fields)._meshOffset.fields.m01;
        fVar16 = (__this->fields)._meshOffset.fields.m00;
        fVar8 = (__this->fields)._meshOffset.fields.m11;
        fVar10 = (__this->fields)._meshOffset.fields.m10;
        fVar1 = (__this->fields)._meshOffset.fields.m21;
        fVar2 = (__this->fields)._meshOffset.fields.m20;
        fVar19 = (__this->fields)._meshOffset.fields.m31;
        fVar20 = (__this->fields)._meshOffset.fields.m30;
        local_1a8 = fVar20 * local_158 +
                    fVar2 * local_168 + fVar10 * local_178 + fVar16 * (float)local_188._0_4_;
        fStack_1a4 = fVar19 * fStack_154 +
                     fVar1 * fStack_164 + fVar8 * fStack_174 + fVar6 * (float)local_188._4_4_;
        fStack_1a0 = fVar20 * fStack_150 +
                     fVar2 * fStack_160 + fVar10 * fStack_170 + fVar16 * (float)local_188._8_4_;
        fStack_19c = fVar19 * fStack_14c + fVar1 * fStack_15c + fVar8 * fStack_16c + fVar6 * fStack_17c;
        local_198 = fVar19 * local_158 +
                    fVar1 * local_168 + fVar8 * local_178 + fVar6 * (float)local_188._0_4_;
        fStack_194 = fVar20 * fStack_154 +
                     fVar2 * fStack_164 + fVar10 * fStack_174 + fVar16 * (float)local_188._4_4_;
        fStack_190 = fVar19 * fStack_150 +
                     fVar1 * fStack_160 + fVar8 * fStack_170 + fVar6 * (float)local_188._8_4_;
        fStack_18c = fVar20 * fStack_14c + fVar2 * fStack_15c + fVar10 * fStack_16c + fVar16 * fStack_17c;
        fVar6 = (__this->fields)._meshOffset.fields.m02;
        fVar16 = (__this->fields)._meshOffset.fields.m12;
        fVar8 = (__this->fields)._meshOffset.fields.m22;
        fVar10 = (__this->fields)._meshOffset.fields.m32;
        fVar1 = (__this->fields)._meshOffset.fields.m03;
        fVar2 = (__this->fields)._meshOffset.fields.m13;
        fVar19 = (__this->fields)._meshOffset.fields.m23;
        fVar20 = (__this->fields)._meshOffset.fields.m33;
        x = (UnityEngine_Object_o *)(__this->fields)._tissueMesh;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        fVar14 = fVar8 * local_168 + fVar16 * local_178 + fVar6 * (float)local_188._0_4_ + fVar10 * local_158;
        fVar15 = fVar8 * fStack_164 + fVar16 * fStack_174 + fVar6 * (float)local_188._4_4_ +
                 fVar10 * fStack_154;
        fVar17 = fVar8 * fStack_160 + fVar16 * fStack_170 + fVar6 * (float)local_188._8_4_ +
                 fVar10 * fStack_150;
        fVar18 = fVar8 * fStack_15c + fVar16 * fStack_16c + fVar6 * fStack_17c + fVar10 * fStack_14c;
        fVar7 = fVar19 * local_168 + fVar2 * local_178 + fVar1 * (float)local_188._0_4_ + fVar20 * local_158;
        fVar9 = fVar19 * fStack_164 + fVar2 * fStack_174 + fVar1 * (float)local_188._4_4_ +
                fVar20 * fStack_154;
        fVar11 = fVar19 * fStack_160 + fVar2 * fStack_170 + fVar1 * (float)local_188._8_4_ +
                 fVar20 * fStack_150;
        fVar12 = fVar19 * fStack_15c + fVar2 * fStack_16c + fVar1 * fStack_17c + fVar20 * fStack_14c;
        bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar20 = fStack_18c;
        fVar19 = fStack_190;
        fVar2 = fStack_194;
        fVar1 = local_198;
        fVar10 = fStack_19c;
        fVar8 = fStack_1a0;
        fVar16 = fStack_1a4;
        fVar6 = local_1a8;
        if (bVar5) {
          local_68 = local_1a8;
          fStack_64 = fStack_194;
          fStack_60 = fStack_1a0;
          fStack_5c = fStack_18c;
          local_58 = local_198;
          fStack_54 = fStack_1a4;
          fStack_50 = fStack_190;
          fStack_4c = fStack_19c;
          local_48 = CONCAT44(fVar15,fVar14);
          uStack_40 = CONCAT44(fVar18,fVar17);
          local_38 = CONCAT44(fVar9,fVar7);
          uStack_30 = CONCAT44(fVar12,fVar11);
          matrix.fields.m10 = fStack_194;
          matrix.fields.m00 = local_1a8;
          matrix.fields.m30 = fStack_18c;
          matrix.fields.m20 = fStack_1a0;
          matrix.fields.m11 = fStack_1a4;
          matrix.fields.m01 = local_198;
          matrix.fields.m31 = fStack_19c;
          matrix.fields.m21 = fStack_190;
          matrix.fields.m02 = fVar14;
          matrix.fields.m12 = fVar15;
          matrix.fields.m22 = fVar17;
          matrix.fields.m32 = fVar18;
          matrix.fields.m03 = fVar7;
          matrix.fields.m13 = fVar9;
          matrix.fields.m23 = fVar11;
          matrix.fields.m33 = fVar12;
          Characters_TitanLimbFallEffect__Draw
                    (__this,(__this->fields)._tissueMesh,(__this->fields)._tissueMaterials,
                     (__this->fields)._properties,matrix,fVar13,in_R8);
        }
        if (fVar13 <= 0.85950404) {
          local_88 = CONCAT44(fVar15,fVar14);
          uStack_80 = CONCAT44(fVar18,fVar17);
          local_78 = CONCAT44(fVar9,fVar7);
          uStack_70 = CONCAT44(fVar12,fVar11);
          matrix_00.fields.m10 = fVar2;
          matrix_00.fields.m00 = fVar6;
          matrix_00.fields.m30 = fVar20;
          matrix_00.fields.m20 = fVar8;
          matrix_00.fields.m11 = fVar16;
          matrix_00.fields.m01 = fVar1;
          matrix_00.fields.m31 = fVar10;
          matrix_00.fields.m21 = fVar19;
          matrix_00.fields.m02 = fVar14;
          matrix_00.fields.m12 = fVar15;
          matrix_00.fields.m22 = fVar17;
          matrix_00.fields.m32 = fVar18;
          matrix_00.fields.m03 = fVar7;
          matrix_00.fields.m13 = fVar9;
          matrix_00.fields.m23 = fVar11;
          matrix_00.fields.m33 = fVar12;
          local_a8 = fVar6;
          fStack_a4 = fVar2;
          fStack_a0 = fVar8;
          fStack_9c = fVar20;
          local_98 = fVar1;
          fStack_94 = fVar16;
          fStack_90 = fVar19;
          fStack_8c = fVar10;
          Characters_TitanLimbFallEffect__Draw
                    (__this,(__this->fields)._mesh,(__this->fields)._materials,(__this->fields)._properties,
                     matrix_00,fVar13,in_R8);
          if ((__this->fields)._hasGrowth != false) {
            local_e8 = CONCAT44(fVar2,fVar6);
            uStack_e0 = CONCAT44(fVar20,fVar8);
            local_d8 = CONCAT44(fVar16,fVar1);
            uStack_d0 = CONCAT44(fVar10,fVar19);
            local_c8 = CONCAT44(fVar15,fVar14);
            uStack_c0 = CONCAT44(fVar18,fVar17);
            local_b8 = CONCAT44(fVar9,fVar7);
            uStack_b0 = CONCAT44(fVar12,fVar11);
            matrix_01.fields.m20 = fVar8;
            matrix_01.fields.m30 = fVar20;
            matrix_01.fields.m00 = fVar6;
            matrix_01.fields.m10 = fVar2;
            matrix_01.fields.m01 = fVar1;
            matrix_01.fields.m11 = fVar16;
            matrix_01.fields.m21 = fVar19;
            matrix_01.fields.m31 = fVar10;
            matrix_01.fields.m02 = fVar14;
            matrix_01.fields.m12 = fVar15;
            matrix_01.fields.m22 = fVar17;
            matrix_01.fields.m32 = fVar18;
            matrix_01.fields.m03 = fVar7;
            matrix_01.fields.m13 = fVar9;
            matrix_01.fields.m23 = fVar11;
            matrix_01.fields.m33 = fVar12;
            Characters_TitanLimbFallEffect__Draw
                      (__this,(__this->fields)._growthMesh,(__this->fields)._growthMaterials,
                       (__this->fields)._growthProperties,matrix_01,fVar13,in_R8);
          }
          __this_00 = (__this->fields)._attachments;
          if (__this_00 == (System_Collections_Generic_List_TitanLimbFallEffect_Attachment__o *)0x0)
          goto label_05c52516;
          System_Collections_Generic_List_object___GetEnumerator
                    (&local_148,(System_Collections_Generic_List_object__o *)__this_00,
                     (MethodInfo_395E050 *)
                     MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Attachment_GetEnumerator);
          local_188._0_8_ = 0;
          unique0x1000234d = &local_148;
          while( true ) {
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)&local_148,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_MoveNext
                              );
            uVar4 = local_188._0_8_;
            if (!bVar5) break;
            if (local_148.fields._current == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            fVar8 = SUB84(local_148.fields._current[1].monitor,0);
            fVar10 = (float)((ulong)local_148.fields._current[1].monitor >> 0x20);
            fVar6 = *(float *)&local_148.fields._current[2].klass;
            fVar16 = *(float *)((long)&local_148.fields._current[2].klass + 4);
            local_128 = fVar16 * fVar7 + fVar6 * fVar14 + fVar8 * local_1a8 + fVar10 * local_198;
            fStack_124 = fVar16 * fVar9 + fVar6 * fVar15 + fVar10 * fStack_1a4 + fVar8 * fStack_194;
            fStack_120 = fVar16 * fVar11 + fVar6 * fVar17 + fVar8 * fStack_1a0 + fVar10 * fStack_190;
            fStack_11c = fVar16 * fVar12 + fVar6 * fVar18 + fVar10 * fStack_19c + fVar8 * fStack_18c;
            fVar6 = *(float *)&local_148.fields._current[3].klass;
            fVar16 = *(float *)((long)&local_148.fields._current[3].klass + 4);
            fVar8 = *(float *)&local_148.fields._current[4].klass;
            fVar10 = *(float *)((long)&local_148.fields._current[4].klass + 4);
            fVar1 = *(float *)&local_148.fields._current[5].klass;
            fVar2 = *(float *)((long)&local_148.fields._current[5].klass + 4);
            fVar19 = SUB84(local_148.fields._current[2].monitor,0);
            fVar20 = (float)((ulong)local_148.fields._current[2].monitor >> 0x20);
            local_118 = fVar16 * fVar7 + fVar6 * fVar14 + fVar19 * local_1a8 + fVar20 * local_198;
            fStack_114 = fVar16 * fVar9 + fVar6 * fVar15 + fVar20 * fStack_1a4 + fVar19 * fStack_194;
            fStack_110 = fVar16 * fVar11 + fVar6 * fVar17 + fVar19 * fStack_1a0 + fVar20 * fStack_190;
            fStack_10c = fVar16 * fVar12 + fVar6 * fVar18 + fVar20 * fStack_19c + fVar19 * fStack_18c;
            fVar6 = SUB84(local_148.fields._current[3].monitor,0);
            fVar16 = (float)((ulong)local_148.fields._current[3].monitor >> 0x20);
            local_108 = fVar10 * fVar7 + fVar8 * fVar14 + fVar6 * local_1a8 + fVar16 * local_198;
            fStack_104 = fVar10 * fVar9 + fVar8 * fVar15 + fVar16 * fStack_1a4 + fVar6 * fStack_194;
            fStack_100 = fVar10 * fVar11 + fVar8 * fVar17 + fVar6 * fStack_1a0 + fVar16 * fStack_190;
            fStack_fc = fVar10 * fVar12 + fVar8 * fVar18 + fVar16 * fStack_19c + fVar6 * fStack_18c;
            fVar6 = SUB84(local_148.fields._current[4].monitor,0);
            fVar16 = (float)((ulong)local_148.fields._current[4].monitor >> 0x20);
            local_f8 = fVar2 * fVar7 + fVar1 * fVar14 + fVar6 * local_1a8 + fVar16 * local_198;
            fStack_f4 = fVar2 * fVar9 + fVar1 * fVar15 + fVar16 * fStack_1a4 + fVar6 * fStack_194;
            fStack_f0 = fVar2 * fVar11 + fVar1 * fVar17 + fVar6 * fStack_1a0 + fVar16 * fStack_190;
            fStack_ec = fVar2 * fVar12 + fVar1 * fVar18 + fVar16 * fStack_19c + fVar6 * fStack_18c;
            matrix_02.fields.m10 = fStack_124;
            matrix_02.fields.m00 = local_128;
            matrix_02.fields.m30 = fStack_11c;
            matrix_02.fields.m20 = fStack_120;
            matrix_02.fields.m11 = fStack_114;
            matrix_02.fields.m01 = local_118;
            matrix_02.fields.m31 = fStack_10c;
            matrix_02.fields.m21 = fStack_110;
            matrix_02.fields.m12 = fStack_104;
            matrix_02.fields.m02 = local_108;
            matrix_02.fields.m32 = fStack_fc;
            matrix_02.fields.m22 = fStack_100;
            matrix_02.fields.m13 = fStack_f4;
            matrix_02.fields.m03 = local_f8;
            matrix_02.fields.m33 = fStack_ec;
            matrix_02.fields.m23 = fStack_f0;
            Characters_TitanLimbFallEffect__Draw
                      (__this,(UnityEngine_Mesh_o *)local_148.fields._current[1].klass,
                       local_148.fields._current[5].monitor,
                       (UnityEngine_MaterialPropertyBlock_o *)local_148.fields._current[6].klass,matrix_02,
                       fVar13,in_R8);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)stack0xfffffffffffffe80,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_Dispose
                    );
          if (uVar4 != 0) {
            il2cpp_codegen_rethrow(uVar4);
          }
        }
      }
      return;
    }
  }
label_05c52516:
  ThrowNullReferenceException();
}


// Characters.TitanLimbFallEffect$$UpdateMotion
// il2cpp: void Characters_TitanLimbFallEffect__UpdateMotion (Characters_TitanLimbFallEffect_o* __this, float deltaTime, const MethodInfo* method);
// 0x5c52570
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c52c5c: movaps xmm1, xmmword ptr [rsp + 0x10]
// asm:   0x5c52c61: movaps xmm0, xmmword ptr [rsp + 0x70]
// asm:   0x5c52c66: shufps xmm0, xmm1, 0x52
// asm:   0x5c52c6a: mov rdi, rax
// asm:   0x5c52c6d: movaps xmm2, xmmword ptr [rsp + 0x60]
// asm:   0x5c52c72: movaps xmm3, xmmword ptr [rsp + 0x50]

void Characters_TitanLimbFallEffect__UpdateMotion
               (Characters_TitanLimbFallEffect_o *__this,float deltaTime,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar10;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar11;
  int32_t layerMask;
  Characters_TitanLimbFallEffect_StaticFields *pCVar18;
  UnityEngine_Quaternion_Fields UVar19;
  bool bVar20;
  UnityEngine_Transform_o *pUVar21;
  UnityEngine_Vector3_StaticFields *pUVar22;
  MethodInfo *pMVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float fVar32;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar33;
  undefined1 auVar34 [16];
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  UnityEngine_Quaternion_o UVar46;
  UnityEngine_Quaternion_o UVar47;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar48;
  UnityEngine_Vector3_o UVar49;
  UnityEngine_Vector3_o UVar50;
  float local_138;
  float fStack_134;
  undefined8 local_128;
  float local_f8;
  undefined8 local_e8;
  undefined8 local_d8;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  UnityEngine_Quaternion_Fields local_b8;
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  UnityEngine_Quaternion_Fields local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  UnityEngine_RaycastHit_o local_48;
  
  if (Il2CppMethodInitialized_07547857 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    Il2CppMethodInitialized_07547857 = '\x01';
  }
  local_48.fields.m_UV.fields.x = 0.0;
  local_48.fields.m_UV.fields.y = 0.0;
  local_48.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_48.fields.m_Normal.fields.y = 0.0;
  local_48.fields.m_Normal.fields.z = 0.0;
  local_48.fields.m_FaceID = 0;
  local_48.fields.m_Distance = 0.0;
  local_48.fields.m_Point.fields.x = 0.0;
  local_48.fields.m_Point.fields.y = 0.0;
  local_48.fields.m_Point.fields.z = 0.0;
  local_48.fields.m_Normal.fields.x = 0.0;
  fVar26 = 0.0;
  (__this->fields)._age = (__this->fields)._age + deltaTime;
  if ((__this->fields)._landed == false) {
    pUVar21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_05c52ea1;
    UVar48 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
    uVar10._0_4_ = (__this->fields)._velocity.fields.x;
    uVar10._4_4_ = (__this->fields)._velocity.fields.y;
    fVar25 = (__this->fields)._velocity.fields.z;
    _local_58 = ZEXT416((uint)fVar25);
    uStack_80 = 0;
    local_88 = uVar10;
    if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
      uVar6 = (__this->fields)._velocity.fields.x;
      uVar14 = (__this->fields)._velocity.fields.y;
      fVar25 = (__this->fields)._velocity.fields.z;
      uVar10._0_4_ = (float)uVar6;
      uVar10._4_4_ = (float)uVar14;
    }
    pCVar18 = TypeInfo_Characters_TitanLimbFallEffect->static_fields;
    uVar7 = (pCVar18->Gravity).fields.x;
    uVar15 = (pCVar18->Gravity).fields.y;
    fVar37 = (pCVar18->Gravity).fields.z;
    _local_a8 = ZEXT416((uint)fVar37);
    (__this->fields)._velocity.fields.x = (float)uVar7 * deltaTime + (float)uVar10;
    (__this->fields)._velocity.fields.y = (float)uVar15 * deltaTime + uVar10._4_4_;
    (__this->fields)._velocity.fields.z = fVar37 * deltaTime + fVar25;
    uVar8 = (__this->fields)._angularVelocity.fields.x;
    uVar16 = (__this->fields)._angularVelocity.fields.y;
    local_b8.z = (__this->fields)._angularVelocity.fields.z * deltaTime * 0.017453292;
    auVar34 = ZEXT416((uint)local_b8.z);
    local_b8.y = (float)uVar16 * deltaTime * 0.017453292;
    local_b8.x = (float)uVar8 * deltaTime * 0.017453292;
    UVar46 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
    pUVar21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_05c52ea1;
    local_138 = UVar48.fields.x;
    fStack_134 = UVar48.fields.y;
    uVar10._0_4_ = deltaTime * 0.5 * deltaTime;
    fVar30 = (float)uVar15 * (float)uVar10 + local_88._4_4_ * deltaTime + fStack_134;
    fVar25 = (float)uVar10 * (float)local_a8._0_4_ + UVar48.fields.z + (float)local_58._0_4_ * deltaTime;
    fVar27 = (float)uVar10 * (float)uVar7 + local_138 + (float)local_88 * deltaTime;
    fVar26 = (float)uVar10 * (float)local_a8._4_4_ + fVar26 + (float)local_58._4_4_ * deltaTime;
    uVar10._0_4_ = (float)uVar10 * (float)uVar15 + fStack_134 + local_88._4_4_ * deltaTime;
    fVar37 = fVar27;
    fVar29 = (float)uVar10;
    UVar47 = UnityEngine_Transform__get_rotation(pUVar21,(MethodInfo *)0x0);
    fVar9 = UVar47.fields.x;
    fVar17 = UVar47.fields.y;
    local_e8._0_4_ = UVar46.fields.x;
    local_e8._4_4_ = UVar46.fields.y;
    local_d8._0_4_ = UVar46.fields.z;
    local_d8._4_4_ = UVar46.fields.w;
    fStack_d0 = auVar34._8_4_;
    fStack_cc = auVar34._12_4_;
    fVar32 = UVar47.fields.z;
    fVar33 = UVar47.fields.w;
    local_138 = (fVar17 * (float)local_e8 + fVar33 * (float)local_d8 + local_d8._4_4_ * fVar32) -
                local_e8._4_4_ * fVar9;
    local_128._0_4_ =
         (fVar32 * local_e8._4_4_ + fVar9 * local_d8._4_4_ + (float)local_e8 * fVar33) -
         (float)local_d8 * fVar17;
    uVar10._4_4_ = ((fVar33 * local_d8._4_4_ - fVar9 * (float)local_e8) - fVar17 * local_e8._4_4_) -
                   fVar32 * (float)local_d8;
    local_128._4_4_ =
         (fVar9 * (float)local_d8 + fVar33 * local_e8._4_4_ + fVar17 * local_d8._4_4_) -
         fVar32 * (float)local_e8;
    local_88 = CONCAT44((float)local_128,local_138);
    uStack_80 = CONCAT44((extraout_XMM0_Dd_00 * extraout_XMM0_Dd + fVar29 * fStack_cc + fStack_cc * fVar29) -
                         extraout_XMM0_Dd * extraout_XMM0_Dd_00,
                         (extraout_XMM0_Dc_00 * extraout_XMM0_Dc + fVar37 * fStack_d0 + fStack_d0 * fVar37) -
                         extraout_XMM0_Dc * extraout_XMM0_Dc_00);
    local_58._4_4_ = local_128._4_4_;
    local_58._0_4_ = uVar10._4_4_;
    fStack_50 = ((fVar37 * local_d8._4_4_ - extraout_XMM0_Dc_00 * extraout_XMM0_Dc) -
                extraout_XMM0_Dc_00 * extraout_XMM0_Dc) - fVar32 * local_d8._4_4_;
    fStack_4c = ((fVar29 * local_d8._4_4_ - extraout_XMM0_Dd_00 * extraout_XMM0_Dd) -
                extraout_XMM0_Dd_00 * extraout_XMM0_Dd) - fVar32 * local_e8._4_4_;
    if ((__this->fields)._velocity.fields.y <= 0.0) {
      fStack_134 = fStack_134 - fVar30;
      if (fStack_134 <= 0.0) {
        fStack_134 = 0.0;
      }
      fVar37 = fStack_134 + (__this->fields)._radius + 0.05;
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
      }
      auVar34 = _local_a8;
      pUVar22 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar9 = (pUVar22->upVector).fields.x;
      fVar17 = (pUVar22->upVector).fields.y;
      local_a8._4_4_ = fVar17;
      local_a8._0_4_ = fVar9;
      fVar29 = (pUVar22->upVector).fields.z;
      fVar32 = 0.0;
      fVar33 = 0.0;
      fVar38 = fVar37;
      fVar40 = fVar37;
      fVar42 = fVar37;
      fVar44 = fVar37;
      if (Il2CppMethodInitialized_075450a5 == '\0') {
        _fStack_a0 = 0;
        local_78 = fVar37;
        fStack_74 = fVar37;
        fStack_70 = fVar37;
        fStack_6c = fVar37;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_075450a5 = '\x01';
        pUVar22 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar9 = (float)local_a8._0_4_;
        fVar17 = (float)local_a8._4_4_;
        fVar32 = fStack_a0;
        fVar33 = fStack_9c;
        fVar38 = local_78;
        fVar40 = fStack_74;
        fVar42 = fStack_70;
        fVar44 = fStack_6c;
        auVar34 = _local_a8;
      }
      _local_a8 = auVar34;
      uVar11._0_4_ = (pUVar22->downVector).fields.x;
      uVar11._4_4_ = (pUVar22->downVector).fields.y;
      fVar2 = (pUVar22->downVector).fields.z;
      fVar3 = (__this->fields)._radius;
      fVar28 = fVar27;
      fVar31 = fVar30;
      uVar35 = 0;
      uVar36 = 0;
      fVar39 = fVar38 * fVar9;
      fVar41 = fVar40 * fVar17;
      fVar43 = fVar42 * fVar32;
      fVar45 = fVar44 * fVar33;
      if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
        local_a8._4_4_ = fVar30;
        local_a8._0_4_ = fVar27;
        fStack_a0 = fVar26;
        fStack_9c = (float)uVar10;
        uStack_60 = 0;
        local_78 = fVar38 * fVar9;
        fStack_74 = fVar40 * fVar17;
        fStack_70 = fVar42 * fVar32;
        fStack_6c = fVar44 * fVar33;
        local_68 = uVar11;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
        fVar28 = (float)local_a8._0_4_;
        fVar31 = (float)local_a8._4_4_;
        fVar26 = fStack_a0;
        uVar10._0_4_ = fStack_9c;
        uVar11._0_4_ = (undefined4)local_68;
        uVar11._4_4_ = local_68._4_4_;
        uVar35 = (undefined4)uStack_60;
        uVar36 = uStack_60._4_4_;
        fVar39 = local_78;
        fVar41 = fStack_74;
        fVar43 = fStack_70;
        fVar45 = fStack_6c;
      }
      UVar48.fields.z = fVar29 * fVar37 + fVar25;
      layerMask = TypeInfo_Characters_TitanLimbFallEffect->static_fields->GroundMask;
      fVar29 = fVar28 + fVar39;
      fVar9 = fVar31 + fVar41;
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        local_a8._4_4_ = fVar31 + fVar41;
        local_a8._0_4_ = fVar28 + fVar39;
        fStack_a0 = fVar26 + fVar43;
        fStack_9c = (float)uVar10 + fVar45;
        local_68 = CONCAT44(uVar11._4_4_,(undefined4)uVar11);
        uStack_60 = CONCAT44(uVar36,uVar35);
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
        fVar29 = (float)local_a8._0_4_;
        fVar9 = (float)local_a8._4_4_;
        uVar11._0_4_ = (undefined4)local_68;
        uVar11._4_4_ = local_68._4_4_;
      }
      UVar48.fields.y = fVar9;
      UVar48.fields.x = fVar29;
      UVar49.fields.y = (float)uVar11._4_4_;
      UVar49.fields.x = (float)(undefined4)uVar11;
      UVar49.fields.z = fVar2;
      bVar20 = UnityEngine_Physics__Raycast_69d9950
                         (UVar48,UVar49,&local_48,fVar37 + fVar3,layerMask,1,(MethodInfo *)0x0);
      if ((bVar20) &&
         (UVar48 = UnityEngine_RaycastHit__get_normal(&local_48,(MethodInfo *)0x0), 0.2 < UVar48.fields.y)) {
        UVar48 = UnityEngine_RaycastHit__get_point(&local_48,(MethodInfo *)0x0);
        UVar49 = UnityEngine_RaycastHit__get_normal(&local_48,(MethodInfo *)0x0);
        local_f8 = UVar48.fields.x;
        pMVar23 = (MethodInfo *)0x0;
        UVar50 = UnityEngine_RaycastHit__get_normal(&local_48,(MethodInfo *)0x0);
        UVar46.fields.z = local_138;
        UVar46.fields.w = uVar10._4_4_;
        UVar46.fields.x = (float)local_128;
        UVar46.fields.y = local_128._4_4_;
        fVar26 = Characters_TitanLimbFallEffect__GetSupportHeight(__this,UVar46,UVar50,pMVar23);
        if ((fVar27 - local_f8) * UVar49.fields.x + UVar49.fields.y * (fVar30 - UVar48.fields.y) +
            (fVar25 - UVar48.fields.z) * UVar49.fields.z <= fVar26 + 0.02) {
          fVar26 = (float)local_88;
          fVar25 = local_88._4_4_;
          (__this->fields)._landed = true;
          UVar48 = UnityEngine_RaycastHit__get_point(&local_48,(MethodInfo *)0x0);
          (__this->fields)._groundPoint.fields.x = UVar48.fields.x;
          (__this->fields)._groundPoint.fields.y = UVar48.fields.y;
          (__this->fields)._groundPoint.fields.z = UVar48.fields.z;
          UVar48 = UnityEngine_RaycastHit__get_normal(&local_48,(MethodInfo *)0x0);
          (__this->fields)._groundNormal.fields.x = UVar48.fields.x;
          (__this->fields)._groundNormal.fields.y = UVar48.fields.y;
          (__this->fields)._groundNormal.fields.z = UVar48.fields.z;
          UVar19.z = local_138;
          UVar19.x = (float)local_128;
          UVar19.y = local_128._4_4_;
          UVar19.w = uVar10._4_4_;
          (__this->fields)._landingRotation.fields = UVar19;
          UVar47.fields.z = local_138;
          UVar47.fields.w = uVar10._4_4_;
          UVar47.fields.x = (float)local_128;
          UVar47.fields.y = local_128._4_4_;
          UVar48 = UnityEngine_Quaternion__op_Multiply_6905700
                             (UVar47,(UnityEngine_Vector3_o)(__this->fields)._restNormal.fields,
                              (MethodInfo *)0x0);
          uVar10._0_4_ = UVar48.fields.z;
          UVar49 = UnityEngine_RaycastHit__get_normal(&local_48,(MethodInfo *)0x0);
          local_128._0_4_ = UVar48.fields.x;
          local_128._4_4_ = UVar48.fields.y;
          uVar10._4_4_ = UVar49.fields.z * (float)uVar10 +
                         UVar49.fields.y * local_128._4_4_ + UVar49.fields.x * (float)local_128;
          local_128 = UVar48.fields._0_8_;
          if (uVar10._4_4_ < 0.0) {
            local_128 = UVar48.fields._0_8_ ^ 0x8000000080000000;
          }
          uVar24 = -(uint)(uVar10._4_4_ < 0.0);
          UVar48 = UnityEngine_RaycastHit__get_normal(&local_48,(MethodInfo *)0x0);
          local_b8.x = (float)local_128;
          local_b8.y = local_128._4_4_;
          local_b8.z = (float)(~uVar24 & (uint)(float)uVar10 | (uint)-(float)uVar10 & uVar24);
          local_98._0_8_ = UVar48.fields._0_8_;
          local_98.z = UVar48.fields.z;
          UVar46 = UnityEngine_Quaternion__Internal_FromToRotation
                             ((UnityEngine_Vector3_o *)&local_b8,(UnityEngine_Vector3_o *)&local_98,
                              (MethodInfo *)0x0);
          uVar10._0_4_ = UVar46.fields.x;
          uVar10._4_4_ = UVar46.fields.y;
          fVar37 = UVar46.fields.z;
          fVar29 = UVar46.fields.w;
          local_98.x = ((float)local_88 * uVar10._4_4_ +
                       local_88._4_4_ * fVar29 + (float)uVar10 * (float)local_58._0_4_) -
                       fVar37 * (float)local_58._4_4_;
          local_98.y = (local_88._4_4_ * fVar37 +
                       uVar10._4_4_ * (float)local_58._0_4_ + fVar29 * (float)local_58._4_4_) -
                       (float)local_88 * (float)uVar10;
          local_98.z = ((float)local_58._0_4_ * fVar37 + fVar29 * (float)local_88 +
                       (float)local_58._4_4_ * (float)uVar10) - fVar25 * uVar10._4_4_;
          local_98.w = (((float)local_58._0_4_ * fVar29 - (float)uVar10 * local_88._4_4_) -
                       (float)local_58._4_4_ * uVar10._4_4_) - fVar26 * fVar37;
          (__this->fields)._restRotation.fields.x = local_98.x;
          (__this->fields)._restRotation.fields.y = local_98.y;
          (__this->fields)._restRotation.fields.z = local_98.z;
          (__this->fields)._restRotation.fields.w = local_98.w;
          local_b8.x = (__this->fields)._landingRotation.fields.x;
          local_b8.y = (__this->fields)._landingRotation.fields.y;
          local_b8.z = (__this->fields)._landingRotation.fields.z;
          local_b8.w = (__this->fields)._landingRotation.fields.w;
          fVar25 = (__this->fields)._groundAge * 4.0;
          fVar26 = 1.0;
          if (fVar25 <= 1.0) {
            fVar26 = fVar25;
          }
          fVar26 = (float)(-(uint)(0.0 <= fVar25) & (uint)fVar26);
          goto label_05c5264e;
        }
      }
    }
    pUVar21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_05c52ea1;
  }
  else {
    fVar26 = (__this->fields)._groundAge;
    fVar25 = deltaTime + fVar26;
    (__this->fields)._groundAge = fVar25;
    if (0.25 <= fVar26) {
      return;
    }
    local_b8.x = (__this->fields)._landingRotation.fields.x;
    local_b8.y = (__this->fields)._landingRotation.fields.y;
    local_b8.z = (__this->fields)._landingRotation.fields.z;
    local_b8.w = (__this->fields)._landingRotation.fields.w;
    fVar25 = fVar25 * 4.0;
    local_98.x = (__this->fields)._restRotation.fields.x;
    local_98.y = (__this->fields)._restRotation.fields.y;
    local_98.z = (__this->fields)._restRotation.fields.z;
    local_98.w = (__this->fields)._restRotation.fields.w;
    fVar26 = 1.0;
    if (fVar25 <= 1.0) {
      fVar26 = fVar25;
    }
    fVar26 = (float)(-(uint)(0.0 <= fVar25) & (uint)fVar26);
label_05c5264e:
    UVar46 = UnityEngine_Quaternion__Internal_Slerp
                       ((UnityEngine_Quaternion_o *)&local_b8,(UnityEngine_Quaternion_o *)&local_98,fVar26,
                        (MethodInfo *)0x0);
    pMVar23 = (MethodInfo *)0x0;
    pUVar21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    uVar4 = (__this->fields)._groundPoint.fields.x;
    uVar12 = (__this->fields)._groundPoint.fields.y;
    fVar25 = (__this->fields)._groundPoint.fields.z;
    pUVar1 = &(__this->fields)._groundNormal;
    uVar5 = (pUVar1->fields).x;
    uVar13 = (pUVar1->fields).y;
    fVar26 = (__this->fields)._groundNormal.fields.z;
    uVar10._0_4_ = Characters_TitanLimbFallEffect__GetSupportHeight
                             (__this,UVar46,(UnityEngine_Vector3_o)pUVar1->fields,pMVar23);
    if (pUVar21 == (UnityEngine_Transform_o *)0x0) {
label_05c52ea1:
      ThrowNullReferenceException();
    }
    uVar10._0_4_ = (float)uVar10 + 0.02;
    fVar25 = fVar25 + fVar26 * (float)uVar10;
    fVar27 = (float)uVar4 + (float)uVar5 * (float)uVar10;
    fVar30 = (float)uVar12 + (float)uVar13 * (float)uVar10;
    local_128._0_4_ = UVar46.fields.x;
    local_128._4_4_ = UVar46.fields.y;
    local_138 = UVar46.fields.z;
    fStack_134 = UVar46.fields.w;
    uVar10._4_4_ = fStack_134;
  }
  rotation.fields.y = local_128._4_4_;
  rotation.fields.x = (float)local_128;
  rotation.fields.w = uVar10._4_4_;
  rotation.fields.z = local_138;
  UVar50.fields.y = fVar30;
  UVar50.fields.x = fVar27;
  UVar50.fields.z = fVar25;
  UnityEngine_Transform__SetPositionAndRotation(pUVar21,UVar50,rotation,(MethodInfo *)0x0);
  return;
}


// Characters.TitanLimbFallEffect$$GetSupportHeight
// il2cpp: float Characters_TitanLimbFallEffect__GetSupportHeight (Characters_TitanLimbFallEffect_o* __this, UnityEngine_Quaternion_o rotation, UnityEngine_Vector3_o normal, const MethodInfo* method);
// 0x5c51730
// eh: try 0x5c51823..0x5c5182b -> pad 0x5c5188f catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c518a7..0x5c518ac -> pad 0x5c518cd cleanup
// eh: try 0x5c518d0..0x5c518da -> pad 0x5c518e2 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c5185d: movaps xmmword ptr [rsp], xmm1
// asm:   0x5c51861: jmp 0x5c51820
// asm:   0x5c5188f: mov rbx, rax
// asm:   0x5c51892: cmp edx, 1
// asm:   0x5c51895: jne 0x5c518d0
// asm:   0x5c51897: mov rdi, rbx
// asm:   0x5c5189a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c5189f: mov rbx, qword ptr [rax]
// asm:   0x5c518a2: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5c518a7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c518ac: lea rax, [rip + 0x163d545]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose
// asm:   0x5c518b3: mov rsi, qword ptr [rax]
// asm:   0x5c518b6: lea rdi, [rsp + 0x40]
// asm:   0x5c518bb: call 0x4d66410  ; System_Collections_Generic_List_Enumerator_Vector3___Dispose()
// asm:   0x5c518c0: test rbx, rbx
// asm:   0x5c518c3: je 0x5c51877
// asm:   0x5c518c5: mov rdi, rbx
// asm:   0x5c518c8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c518cd: mov rbx, rax
// asm:   0x5c518d0: lea rdi, [rsp + 0x10]
// asm:   0x5c518d5: call 0x2fd9990  ; il2cpp_runtime_helper_02fd9990()
// asm:   0x5c518da: mov rdi, rbx
// asm:   0x5c518dd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c518e2: mov rdi, rax
// asm:   0x5c518e5: call 0x2ab61e0  ; __clang_call_terminate()

float Characters_TitanLimbFallEffect__GetSupportHeight
                (Characters_TitanLimbFallEffect_o *__this,UnityEngine_Quaternion_o rotation,
                UnityEngine_Vector3_o normal,MethodInfo *method)

{
  System_Collections_Generic_List_Vector3__o *__this_00;
  bool bVar1;
  float fVar2;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  UnityEngine_Quaternion_o rotation_00;
  UnityEngine_Vector3_o UVar3;
  float local_88;
  undefined1 local_78 [12];
  float fStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 uStack_30;
  undefined1 local_28 [24];
  
  UVar3.fields.z = normal.fields.z;
  local_58._8_4_ = in_XMM2_Dc;
  local_58._0_8_ = normal.fields._0_8_;
  local_58._12_4_ = in_XMM2_Dd;
  local_78._0_4_ = rotation.fields.x;
  local_78._4_4_ = rotation.fields.y;
  local_78._8_4_ = rotation.fields.z;
  fStack_6c = rotation.fields.w;
  if (g_data_07547858 == '\0') {
    local_68._8_4_ = in_XMM1_Dc;
    local_68._0_8_ = rotation.fields._8_8_;
    local_68._12_4_ = in_XMM1_Dd;
    local_28._8_4_ = in_XMM0_Dc;
    local_28._0_8_ = rotation.fields._0_8_;
    local_28._12_4_ = in_XMM0_Dd;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
    g_data_07547858 = '\x01';
    local_78._0_4_ = local_28._0_4_;
    local_78._4_4_ = local_28._4_4_;
    local_78._8_4_ = local_68._0_4_;
    fStack_6c = (float)local_68._4_4_;
  }
  local_48.fields._current = (Il2CppObject *)0x0;
  uStack_30 = 0;
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  rotation_00 = UnityEngine_Quaternion__Internal_Inverse
                          ((UnityEngine_Quaternion_o *)local_78,(MethodInfo *)0x0);
  UVar3.fields.x = (float)local_58._0_4_;
  UVar3.fields.y = (float)local_58._4_4_;
  UVar3 = UnityEngine_Quaternion__op_Multiply_6905700(rotation_00,UVar3,(MethodInfo *)0x0);
  local_58._8_4_ = extraout_XMM0_Dc;
  local_58._0_8_ = UVar3.fields._0_8_;
  local_58._12_4_ = extraout_XMM0_Dd;
  local_68._0_4_ = UVar3.fields.z;
  __this_00 = (__this->fields)._supportVertices;
  if (__this_00 == (System_Collections_Generic_List_Vector3__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_Vector3___GetEnumerator
            (&local_48,__this_00,
             (MethodInfo_3A00880 *)MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
  local_78._0_4_ = 0.0;
  local_78._4_4_ = 0.0;
  local_88 = 3.4028235e+38;
  unique0x100004c7 = &local_48;
  while (bVar1 = System_Collections_Generic_List_Enumerator_Vector3___MoveNext
                           (&local_48,
                            (MethodInfo_4C66420 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext), bVar1) {
    fVar2 = (float)uStack_30 * (float)local_68._0_4_ +
            (float)((ulong)local_48.fields._current >> 0x20) * (float)local_58._4_4_ +
            SUB84(local_48.fields._current,0) * (float)local_58._0_4_;
    if (fVar2 <= local_88) {
      local_88 = fVar2;
    }
  }
  System_Collections_Generic_List_Enumerator_Vector3___Dispose
            (&local_48,
             (MethodInfo_4C66410 *)MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
  return -local_88;
}


// Characters.TitanLimbFallEffect$$SetGroundPose
// il2cpp: void Characters_TitanLimbFallEffect__SetGroundPose (Characters_TitanLimbFallEffect_o* __this, const MethodInfo* method);
// 0x5c53090

void Characters_TitanLimbFallEffect__SetGroundPose
               (Characters_TitanLimbFallEffect_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *method_00;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o position;
  float fStack_58;
  float fStack_54;
  float fStack_48;
  float fStack_44;
  UnityEngine_Quaternion_Fields UStack_30;
  UnityEngine_Quaternion_o UStack_20;
  
  UStack_20.fields.x = (__this->fields)._landingRotation.fields.x;
  UStack_20.fields.y = (__this->fields)._landingRotation.fields.y;
  UStack_20.fields.z = (__this->fields)._landingRotation.fields.z;
  UStack_20.fields.w = (__this->fields)._landingRotation.fields.w;
  fVar6 = (__this->fields)._groundAge * 4.0;
  UStack_30.x = (__this->fields)._restRotation.fields.x;
  UStack_30.y = (__this->fields)._restRotation.fields.y;
  UStack_30.z = (__this->fields)._restRotation.fields.z;
  UStack_30.w = (__this->fields)._restRotation.fields.w;
  fVar8 = 1.0;
  if (fVar6 <= 1.0) {
    fVar8 = fVar6;
  }
  rotation = UnityEngine_Quaternion__Internal_Slerp
                       (&UStack_20,(UnityEngine_Quaternion_o *)&UStack_30,
                        (float)(-(uint)(0.0 <= fVar6) & (uint)fVar8),(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  uVar2 = (__this->fields)._groundPoint.fields.x;
  uVar4 = (__this->fields)._groundPoint.fields.y;
  fVar8 = (__this->fields)._groundPoint.fields.z;
  pUVar1 = &(__this->fields)._groundNormal;
  uVar3 = (pUVar1->fields).x;
  uVar5 = (pUVar1->fields).y;
  fVar6 = (__this->fields)._groundNormal.fields.z;
  fVar7 = Characters_TitanLimbFallEffect__GetSupportHeight
                    (__this,rotation,(UnityEngine_Vector3_o)pUVar1->fields,method_00);
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar7 = fVar7 + 0.02;
  position.fields.z = fVar8 + fVar6 * fVar7;
  position.fields.x = (float)uVar2 + (float)uVar3 * fVar7;
  position.fields.y = (float)uVar4 + (float)uVar5 * fVar7;
  UnityEngine_Transform__SetPositionAndRotation(__this_00,position,rotation,(MethodInfo *)0x0);
  return;
}


// Characters.TitanLimbFallEffect$$Draw
// il2cpp: void Characters_TitanLimbFallEffect__Draw (Characters_TitanLimbFallEffect_o* __this, UnityEngine_Mesh_o* mesh, System_Collections_Generic_List_Material__o* materials, UnityEngine_MaterialPropertyBlock_o* properties, UnityEngine_Matrix4x4_o matrix, float dissolve, const MethodInfo* method);
// 0x5c52eb0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c52ee8: test r13, r13
// asm:   0x5c52eed: jmp 0x5c53081

void Characters_TitanLimbFallEffect__Draw
               (Characters_TitanLimbFallEffect_o *__this,UnityEngine_Mesh_o *mesh,
               System_Collections_Generic_List_Material__o *materials,
               UnityEngine_MaterialPropertyBlock_o *properties,UnityEngine_Matrix4x4_o matrix,float dissolve,
               MethodInfo *method)

{
  bool receiveShadows;
  uint32_t uVar1;
  int iVar2;
  int32_t iVar3;
  int32_t iVar4;
  UnityEngine_Material_o *material;
  
  if (Il2CppMethodInitialized_07547859 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Graphics);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    Il2CppMethodInitialized_07547859 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
  }
  if (((properties == (UnityEngine_MaterialPropertyBlock_o *)0x0) ||
      (UnityEngine_MaterialPropertyBlock__SetFloat_68d85d0
                 (properties,
                  *(int32_t *)
                   ((long)((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect)->static_fields + 0x18),
                  dissolve,(MethodInfo *)0x0), mesh == (UnityEngine_Mesh_o *)0x0)) ||
     (iVar3 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0),
     materials == (System_Collections_Generic_List_Material__o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar2 = (materials->fields)._size;
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      material = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)materials,iVar3,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Material_get_Item
                           );
      iVar4 = (__this->fields)._layer;
      receiveShadows = (__this->fields)._receiveShadows;
      if ((TypeInfo_UnityEngine_Graphics->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Graphics);
      }
      UnityEngine_Graphics__DrawMesh_68d1a90
                (mesh,matrix,material,iVar4,(UnityEngine_Camera_o *)0x0,iVar3,properties,0,receiveShadows,
                 (MethodInfo *)0x0);
      iVar3 = iVar3 + 1;
      iVar4 = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
      iVar2 = (materials->fields)._size;
      if (iVar4 < iVar2) {
        iVar2 = iVar4;
      }
    } while (iVar3 < iVar2);
  }
  return;
}


// Characters.TitanLimbFallEffect$$OnDisable
// il2cpp: void Characters_TitanLimbFallEffect__OnDisable (Characters_TitanLimbFallEffect_o* __this, const MethodInfo* method);
// 0x5c531a0
// eh: try 0x5c532c3..0x5c5332a -> pad 0x5c53333 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c5334b..0x5c53350 -> pad 0x5c5336f cleanup
// eh: try 0x5c53372..0x5c5337c -> pad 0x5c53384 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c5332f: jmp 0x5c53333
// asm:   0x5c53331: jmp 0x5c53333
// asm:   0x5c53333: mov r14, rax
// asm:   0x5c53336: cmp edx, 1
// asm:   0x5c53339: jne 0x5c53372
// asm:   0x5c5333b: mov rdi, r14
// asm:   0x5c5333e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c53343: mov rbx, qword ptr [rax]
// asm:   0x5c53346: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c5334b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c53350: lea rax, [rip + 0x163c161]  ; MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_Dispose
// asm:   0x5c53357: mov rsi, qword ptr [rax]
// asm:   0x5c5335a: mov rdi, rsp
// asm:   0x5c5335d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c53362: test rbx, rbx
// asm:   0x5c53365: je 0x5c532f2
// asm:   0x5c53367: mov rdi, rbx
// asm:   0x5c5336a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c5336f: mov r14, rax
// asm:   0x5c53372: lea rdi, [rsp + 0x18]
// asm:   0x5c53377: call 0x2fd99c0  ; il2cpp_runtime_helper_02fd99c0()
// asm:   0x5c5337c: mov rdi, r14
// asm:   0x5c5337f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c53384: mov rdi, rax
// asm:   0x5c53387: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_TitanLimbFallEffect__OnDisable(Characters_TitanLimbFallEffect_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Mesh_o **targetAddress;
  int32_t length;
  UnityEngine_Object_o *pUVar2;
  System_Collections_Generic_List_TitanLimbFallEffect_Attachment__o *pSVar3;
  bool bVar4;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (Il2CppMethodInitialized_0754785a == '\0') {
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
    Il2CppMethodInitialized_0754785a = '\x01';
  }
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._tissueMesh;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    targetAddress = &(__this->fields)._tissueMesh;
    pUVar2 = (UnityEngine_Object_o *)*targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
    *targetAddress = (UnityEngine_Mesh_o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  pSVar3 = (__this->fields)._attachments;
  if (pSVar3 != (System_Collections_Generic_List_TitanLimbFallEffect_Attachment__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&SStack_48,(System_Collections_Generic_List_object__o *)pSVar3,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Attachment_GetEnumerator);
    uStack_30 = 0;
    puStack_28 = (undefined1 *)&SStack_48;
    while( true ) {
      method_00 = 
      MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_MoveNext;
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_MoveNext
                        );
      if (!bVar4) break;
      if ((Characters_TitanLimbFallEffect_Attachment_o *)SStack_48.fields._current ==
          (Characters_TitanLimbFallEffect_Attachment_o *)0x0) {
        ThrowNullReferenceException();
      }
      Characters_TitanLimbFallEffect_Attachment__Dispose
                ((Characters_TitanLimbFallEffect_Attachment_o *)SStack_48.fields._current,method_00);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
               (MethodInfo_4C45C40 *)
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
// 0x5c53520
// eh: try 0x5c536e0..0x5c53831 -> pad 0x5c538fc (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c5387c..0x5c53881 -> pad 0x5c5389f cleanup
// eh: try 0x5c538a2..0x5c538ac -> pad 0x5c53953 catch (...) [compiler noexcept guard]
// eh: try 0x5c538c9..0x5c538ce -> pad 0x5c538ed cleanup
// eh: try 0x5c538f0..0x5c538fa -> pad 0x5c53953 catch (...) [compiler noexcept guard]
// eh: try 0x5c53914..0x5c53919 -> pad 0x5c5393e cleanup
// eh: try 0x5c53941..0x5c5394b -> pad 0x5c53953 catch (...) [compiler noexcept guard]
// asm: 64 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c5385b: jmp 0x5c53864
// asm:   0x5c5385d: jmp 0x5c538b1
// asm:   0x5c5385f: jmp 0x5c538fc
// asm:   0x5c53864: mov rbx, rax
// asm:   0x5c53867: cmp edx, 1
// asm:   0x5c5386a: jne 0x5c538a2
// asm:   0x5c5386c: mov rdi, rbx
// asm:   0x5c5386f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c53874: mov rbx, qword ptr [rax]
// asm:   0x5c53877: mov qword ptr [rsp + 8], rbx
// asm:   0x5c5387c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c53881: lea rax, [rip + 0x163abf8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x5c53888: mov rsi, qword ptr [rax]
// asm:   0x5c5388b: lea rdi, [rsp + 0x20]
// asm:   0x5c53890: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c53895: test rbx, rbx
// asm:   0x5c53898: je 0x5c53847
// asm:   0x5c5389a: jmp 0x5c53936
// asm:   0x5c5389f: mov rbx, rax
// asm:   0x5c538a2: lea rdi, [rsp + 8]
// asm:   0x5c538a7: call 0x2fd9a50  ; il2cpp_runtime_helper_02fd9a50()
// asm:   0x5c538ac: jmp 0x5c5394b
// asm:   0x5c538b1: mov rbx, rax
// asm:   0x5c538b4: cmp edx, 1
// asm:   0x5c538b7: jne 0x5c538f0
// asm:   0x5c538b9: mov rdi, rbx
// asm:   0x5c538bc: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c538c1: mov rbx, qword ptr [rax]
// asm:   0x5c538c4: mov qword ptr [rsp + 8], rbx
// asm:   0x5c538c9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c538ce: lea rax, [rip + 0x163abab]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x5c538d5: mov rsi, qword ptr [rax]
// asm:   0x5c538d8: lea rdi, [rsp + 0x20]
// asm:   0x5c538dd: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c538e2: test rbx, rbx
// asm:   0x5c538e5: je 0x5c537b7
// asm:   0x5c538eb: jmp 0x5c53936
// asm:   0x5c538ed: mov rbx, rax
// asm:   0x5c538f0: lea rdi, [rsp + 8]
// asm:   0x5c538f5: call 0x2fd9a20  ; il2cpp_runtime_helper_02fd9a20()
// asm:   0x5c538fa: jmp 0x5c5394b
// asm:   0x5c538fc: mov rbx, rax
// asm:   0x5c538ff: cmp edx, 1
// asm:   0x5c53902: jne 0x5c53941
// asm:   0x5c53904: mov rdi, rbx
// asm:   0x5c53907: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c5390c: mov rbx, qword ptr [rax]
// asm:   0x5c5390f: mov qword ptr [rsp + 8], rbx
// asm:   0x5c53914: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c53919: lea rax, [rip + 0x163ab60]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x5c53920: mov rsi, qword ptr [rax]
// asm:   0x5c53923: lea rdi, [rsp + 0x20]
// asm:   0x5c53928: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c5392d: test rbx, rbx
// asm:   0x5c53930: je 0x5c53727
// asm:   0x5c53936: mov rdi, rbx
// asm:   0x5c53939: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c5393e: mov rbx, rax
// asm:   0x5c53941: lea rdi, [rsp + 8]
// asm:   0x5c53946: call 0x2fd99f0  ; il2cpp_runtime_helper_02fd99f0()
// asm:   0x5c5394b: mov rdi, rbx
// asm:   0x5c5394e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c53953: mov rdi, rax
// asm:   0x5c53956: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_TitanLimbFallEffect__OnDestroy(Characters_TitanLimbFallEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_TitanLimbFallEffect__o *__this_00;
  UnityEngine_Object_o *pUVar1;
  System_Collections_Generic_List_Material__o *pSVar2;
  bool bVar3;
  undefined1 auStack_60 [16];
  UnityEngine_Object_o *pUStack_50;
  undefined1 auStack_48 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_40;
  UnityEngine_Object_o *pUStack_38;
  
  if (Il2CppMethodInitialized_0754785b == '\0') {
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
    Il2CppMethodInitialized_0754785b = '\x01';
  }
  auStack_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pUStack_38 = (UnityEngine_Object_o *)0x0;
  if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
  }
  __this_00 = TypeInfo_Characters_TitanLimbFallEffect->static_fields->Pool;
  if (__this_00 != (System_Collections_Generic_List_TitanLimbFallEffect__o *)0x0) {
    System_Collections_Generic_List_object___Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
               (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Remove);
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
      UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
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
      UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields)._materials;
    if (pSVar2 != (System_Collections_Generic_List_Material__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,
                 (System_Collections_Generic_List_object__o *)pSVar2,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
      pUStack_38 = pUStack_50;
      auStack_48 = (undefined1  [8])auStack_60._0_8_;
      pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_60._8_8_;
      auStack_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      auStack_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_48;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
        pUVar1 = pUStack_38;
        if (!bVar3) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose)
      ;
      pSVar2 = (__this->fields)._growthMaterials;
      if (pSVar2 != (System_Collections_Generic_List_Material__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,
                   (System_Collections_Generic_List_object__o *)pSVar2,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
        pUStack_38 = pUStack_50;
        auStack_48 = (undefined1  [8])auStack_60._0_8_;
        pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_60._8_8_;
        auStack_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        auStack_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_48;
        while( true ) {
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
          pUVar1 = pUStack_38;
          if (!bVar3) break;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
        pSVar2 = (__this->fields)._tissueMaterials;
        if (pSVar2 != (System_Collections_Generic_List_Material__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,
                     (System_Collections_Generic_List_object__o *)pSVar2,
                     (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
          pUStack_38 = pUStack_50;
          auStack_48 = (undefined1  [8])auStack_60._0_8_;
          pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_60._8_8_;
          auStack_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          auStack_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_48;
          while( true ) {
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
            pUVar1 = pUStack_38;
            if (!bVar3) break;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                     (MethodInfo_4C45C40 *)
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
// 0x5c53960

void Characters_TitanLimbFallEffect___ctor(Characters_TitanLimbFallEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Material__o *pSVar1;
  System_Collections_Generic_List_Vector3__o *pSVar2;
  System_Collections_Generic_List_Vector2__o *__this_00;
  System_Collections_Generic_List_int__o *__this_01;
  System_Collections_Generic_List_TitanLimbFallEffect_Attachment__o *__this_02;
  
  if (Il2CppMethodInitialized_0754785c == '\0') {
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
    Il2CppMethodInitialized_0754785c = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  (__this->fields)._materials = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._materials);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  (__this->fields)._growthMaterials = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._growthMaterials);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  (__this->fields)._tissueMaterials = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tissueMaterials);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  (__this->fields)._sourceMaterials = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._sourceMaterials);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (pSVar2,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._vertices = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._vertices);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (pSVar2,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._supportVertices = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._supportVertices);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector2);
  System_Collections_Generic_List_Vector2____ctor
            (__this_00,(MethodInfo_39F8C70 *)MethodInfo_System_Collections_Generic_List_Vector2_ctor);
  (__this->fields)._growthCoordinates = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._growthCoordinates);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (__this_01,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  (__this->fields)._indices = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._indices);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_TitanLimbFallEffect_Attachment);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Attachment_ctor);
  (__this->fields)._attachments = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._attachments);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.TitanLimbFallEffect$$.cctor
// il2cpp: void Characters_TitanLimbFallEffect___cctor (const MethodInfo* method);
// 0x5c53bb0

void Characters_TitanLimbFallEffect___cctor(MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  Characters_TitanLimbFallEffect_StaticFields *pCVar6;
  Utility_PhysicsLayer_StaticFields *pUVar7;
  UnityEngine_LayerMask_o mask;
  int32_t iVar8;
  System_Int32_array *layers;
  System_Collections_Generic_List_TitanLimbFallEffect__o *__this;
  
  if (Il2CppMethodInitialized_0754785d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_TitanLimbFallEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"_Dissolve");
    Il2CppMethodInitialized_0754785d = '\x01';
  }
  if (Il2CppMethodInitialized_075450a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_075450a5 = '\x01';
  }
  pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2 = (pUVar5->downVector).fields.x;
  uVar3 = (pUVar5->downVector).fields.y;
  fVar1 = (pUVar5->downVector).fields.z;
  pCVar6 = TypeInfo_Characters_TitanLimbFallEffect->static_fields;
  (pCVar6->Gravity).fields.x = (float)uVar2 * 22.5;
  (pCVar6->Gravity).fields.y = (float)uVar3 * 22.5;
  (pCVar6->Gravity).fields.z = fVar1 * 22.5;
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,4);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar4 = (uint)layers->max_length;
  if (uVar4 != 0) {
    pUVar7 = TypeInfo_Utility_PhysicsLayer->static_fields;
    layers->m_Items[0] = pUVar7->MapObjectAll;
    if (((uVar4 != 1) && (layers->m_Items[1] = pUVar7->MapObjectEntities, 2 < uVar4)) &&
       (layers->m_Items[2] = pUVar7->MapObjectCharacters, uVar4 != 3)) {
      layers->m_Items[3] = pUVar7->MapObjectTitans;
      mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      iVar8 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
      TypeInfo_Characters_TitanLimbFallEffect->static_fields->GroundMask = iVar8;
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_TitanLimbFallEffect);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_ctor);
      pCVar6 = TypeInfo_Characters_TitanLimbFallEffect->static_fields;
      pCVar6->Pool = __this;
      Il2CppCodeGenWriteBarrier(&pCVar6->Pool);
      iVar8 = UnityEngine_Shader__PropertyToID("_Dissolve",(MethodInfo *)0x0);
      TypeInfo_Characters_TitanLimbFallEffect->static_fields->Dissolve = iVar8;
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


