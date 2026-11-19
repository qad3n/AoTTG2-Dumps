// Type: ClothFactory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/ClothFactory.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/ClothFactory.cs
// --------------------------------

// ClothFactory.<>c$$.cctor
// il2cpp: void ClothFactory___c___cctor (const MethodInfo* method);
// 0x58450c0

void ClothFactory___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07544ff0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory_c);
    Il2CppMethodInitialized_07544ff0 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ClothFactory_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_ClothFactory_c->static_fields->__9 = (ClothFactory___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ClothFactory_c->static_fields->__9);
  return;
}


// ClothFactory.<>c$$.ctor
// il2cpp: void ClothFactory___c___ctor (ClothFactory___c_o* __this, const MethodInfo* method);
// 0x5845130

void ClothFactory___c___ctor(ClothFactory___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ClothFactory.<>c$$<GetCloth>b__7_0
// il2cpp: bool ClothFactory___c___GetCloth_b__7_0 (ClothFactory___c_o* __this, UnityEngine_GameObject_o* cloth, const MethodInfo* method);
// 0x5845140

bool ClothFactory___c___GetCloth_b__7_0
               (ClothFactory___c_o *__this,UnityEngine_GameObject_o *cloth,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07544ff1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07544ff1 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)cloth,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// ClothFactory.<>c$$<GetCloth>b__7_1
// il2cpp: bool ClothFactory___c___GetCloth_b__7_1 (ClothFactory___c_o* __this, UnityEngine_GameObject_o* cloth, const MethodInfo* method);
// 0x5845190

bool ClothFactory___c___GetCloth_b__7_1
               (ClothFactory___c_o *__this,UnityEngine_GameObject_o *cloth,MethodInfo *method)

{
  ParentFollow_o *pPVar1;
  
  if (Il2CppMethodInitialized_07544ff2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParentFollow);
    Il2CppMethodInitialized_07544ff2 = '\x01';
  }
  if (cloth != (UnityEngine_GameObject_o *)0x0) {
    pPVar1 = UnityEngine_GameObject__GetComponent_object_
                       (cloth,(MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_ParentFollow);
    if (pPVar1 != (ParentFollow_o *)0x0) {
      return (pPVar1->fields).isActiveInScene == false;
    }
  }
  ThrowNullReferenceException();
}


// ClothFactory$$ClearClothCache
// il2cpp: void ClothFactory__ClearClothCache (const MethodInfo* method);
// 0x5843d00

void ClothFactory__ClearClothCache(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (Il2CppMethodInitialized_07544fe6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_Clear);
    Il2CppMethodInitialized_07544fe6 = '\x01';
    uVar1 = (TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ClothFactory->static_fields->clothCache;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((Il2CppClass *)TypeInfo_ClothFactory)->static_fields;
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Clear
            (__this,(MethodInfo_4AAD690 *)
                    MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_Clear);
  return;
}


// ClothFactory$$DisposeAllObjects
// il2cpp: void ClothFactory__DisposeAllObjects (const MethodInfo* method);
// 0x5843d90

void ClothFactory__DisposeAllObjects(MethodInfo *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  il2cpp_array_size_t iVar3;
  UnityEngine_GameObject_o *cachedObject;
  long lVar4;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07544fe7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_FindObjectsByType_Cloth);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07544fe7 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pSVar2 = UnityEngine_Object__FindObjectsByType_object__35a3fa0
                     (1,0,(MethodInfo_35A3FA0 *)MethodInfo_UnityEngine_Object_FindObjectsByType_Cloth);
  if (pSVar2 == (System_Object_array *)0x0) {
label_05843e70:
    ThrowNullReferenceException();
  }
  iVar3 = pSVar2->max_length;
  if ((iVar3 != 0) && (0 < (int)iVar3)) {
    lVar4 = 0;
    do {
      if ((uint)iVar3 <= (uint)lVar4) {
        ThrowIndexOutOfRangeException();
      }
      if ((UnityEngine_Component_o *)pSVar2->m_Items[lVar4] == (UnityEngine_Component_o *)0x0)
      goto label_05843e70;
      method_00 = (MethodInfo *)0x0;
      cachedObject = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pSVar2->m_Items[lVar4],(MethodInfo *)0x0);
      if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
      }
      ClothFactory__DisposeObject(cachedObject,method_00);
      uVar1 = (uint)pSVar2->max_length;
      iVar3 = (il2cpp_array_size_t)uVar1;
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < (int)uVar1);
  }
  return;
}


// ClothFactory$$DisposeObject
// il2cpp: void ClothFactory__DisposeObject (UnityEngine_GameObject_o* cachedObject, const MethodInfo* method);
// 0x5843e80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5843ff9: nop dword ptr [rax]

void ClothFactory__DisposeObject(UnityEngine_GameObject_o *cachedObject,MethodInfo *method)

{
  bool bVar1;
  ParentFollow_o *x;
  UnityEngine_Cloth_o *__this;
  UnityEngine_SkinnedMeshRenderer_o *__this_00;
  UnityEngine_Transform_array *value;
  UnityEngine_Transform_o *pUVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  ulong uVar5;
  
  if (Il2CppMethodInitialized_07544fe8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Cloth);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParentFollow);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07544fe8 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)cachedObject,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (cachedObject != (UnityEngine_GameObject_o *)0x0) {
    x = UnityEngine_GameObject__GetComponent_object_
                  (cachedObject,
                   (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_ParentFollow);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)cachedObject,(MethodInfo *)0x0);
      return;
    }
    if (x != (ParentFollow_o *)0x0) {
      if ((x->fields).isActiveInScene == false) {
        return;
      }
      __this = UnityEngine_GameObject__GetComponent_object_
                         (cachedObject,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Cloth);
      if (__this != (UnityEngine_Cloth_o *)0x0) {
        UnityEngine_Cloth__set_enabled(__this,false,(MethodInfo *)0x0);
        __this_00 = UnityEngine_GameObject__GetComponent_object_
                              (cachedObject,
                               (MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
        if (__this_00 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)__this_00,false,(MethodInfo *)0x0);
          value = UnityEngine_SkinnedMeshRenderer__get_bones(__this_00,(MethodInfo *)0x0);
          if (value != (UnityEngine_Transform_array *)0x0) {
            if (0 < (int)value->max_length) {
              lVar4 = 0x20;
              uVar5 = 0;
              do {
                pUVar2 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
                   (pIVar3 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)pUVar2,(((value->obj).klass)->_1).element_class),
                   pIVar3 == (Il2CppObject *)0x0)) {
                  pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                }
                if ((uint)value->max_length <= uVar5) {
                  ThrowIndexOutOfRangeException();
                }
                value->m_Items[uVar5] = pUVar2;
                Il2CppCodeGenWriteBarrier((void **)((long)value->m_Items + lVar4 + -0x20));
                uVar5 = uVar5 + 1;
                lVar4 = lVar4 + 8;
              } while ((long)uVar5 < (long)(int)value->max_length);
            }
            UnityEngine_SkinnedMeshRenderer__set_bones(__this_00,value,(MethodInfo *)0x0);
            UnityEngine_SkinnedMeshRenderer__set_rootBone
                      (__this_00,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
            (x->fields).isActiveInScene = false;
            pUVar2 = UnityEngine_GameObject__get_transform(cachedObject,(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_position
                        (pUVar2,(UnityEngine_Vector3_o)ZEXT812(0xc7c34f8000000000),(MethodInfo *)0x0);
              (x->fields).parent = (UnityEngine_Transform_o *)0x0;
              Il2CppCodeGenWriteBarrier(&(x->fields).parent);
              (x->fields).owner = (Characters_BaseCharacter_o *)0x0;
              Il2CppCodeGenWriteBarrier(&(x->fields).owner);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ClothFactory$$GenerateCloth
// il2cpp: UnityEngine_GameObject_o* ClothFactory__GenerateCloth (UnityEngine_GameObject_o* go, System_String_o* res, const MethodInfo* method);
// 0x5844120

UnityEngine_GameObject_o *
ClothFactory__GenerateCloth(UnityEngine_GameObject_o *go,System_String_o *res,MethodInfo *method)

{
  System_String_o *path;
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_SkinnedMeshRenderer_o *pUVar3;
  UnityEngine_Transform_array *value;
  UnityEngine_Transform_o *__this;
  UnityEngine_GameObject_o *pUVar4;
  
  if (Il2CppMethodInitialized_07544fe9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    Il2CppMethodInitialized_07544fe9 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_353B730 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      UnityEngine_GameObject__AddComponent_object_
                (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_SkinnedMeshRenderer);
    }
    pUVar3 = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_353B730 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    if (pUVar3 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
      value = UnityEngine_SkinnedMeshRenderer__get_bones(pUVar3,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar2 = ApplicationManagers_ResourceManager__LoadAsset(path,res,true,false,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pUVar2 = UnityEngine_Object__Instantiate_69209e0(pUVar2,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Object_o *)0x0) {
        if (pUVar2->klass != (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
        }
        pUVar3 = UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)pUVar2,
                            (MethodInfo_353B730 *)
                            MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
        if (pUVar3 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
          __this = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e4b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b7 = '\x01';
          }
          if (__this != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localScale
                      (__this,(UnityEngine_Vector3_o)
                              (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
                       (MethodInfo *)0x0);
            UnityEngine_SkinnedMeshRenderer__set_bones(pUVar3,value,(MethodInfo *)0x0);
            UnityEngine_SkinnedMeshRenderer__set_quality(pUVar3,4,(MethodInfo *)0x0);
            pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
            return pUVar4;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ClothFactory$$GetCape
// il2cpp: UnityEngine_GameObject_o* ClothFactory__GetCape (UnityEngine_GameObject_o* reference, System_String_o* name, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x5844340

UnityEngine_GameObject_o *
ClothFactory__GetCape
          (UnityEngine_GameObject_o *reference,System_String_o *name,UnityEngine_Material_o *material,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  
  if (Il2CppMethodInitialized_07544fea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    Il2CppMethodInitialized_07544fea = '\x01';
  }
  if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
  }
  pUVar1 = ClothFactory__GetCloth(reference,name,material,(System_Nullable_Color__o)ZEXT820(0),method);
  return pUVar1;
}


// ClothFactory$$GetHair
// il2cpp: UnityEngine_GameObject_o* ClothFactory__GetHair (UnityEngine_GameObject_o* reference, System_String_o* name, UnityEngine_Material_o* material, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5844900

UnityEngine_GameObject_o *
ClothFactory__GetHair
          (UnityEngine_GameObject_o *reference,System_String_o *name,UnityEngine_Material_o *material,
          UnityEngine_Color_o color,MethodInfo *method)

{
  System_Nullable_Color__o color_00;
  UnityEngine_GameObject_o *pUVar1;
  float fVar2;
  float fVar3;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar4;
  float fVar5;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o value;
  System_Nullable_Color__Fields local_58;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  fVar2 = color.fields.r;
  fVar3 = color.fields.g;
  fVar4 = color.fields.b;
  fVar5 = color.fields.a;
  if (g_data_07544feb == '\0') {
    local_28._8_4_ = in_XMM1_Dc;
    local_28._0_8_ = color.fields._8_8_;
    local_28._12_4_ = in_XMM1_Dd;
    local_38._8_4_ = in_XMM0_Dc;
    local_38._0_8_ = color.fields._0_8_;
    local_38._12_4_ = in_XMM0_Dd;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_ctor);
    g_data_07544feb = '\x01';
    fVar2 = (float)local_38._0_4_;
    fVar3 = (float)local_38._4_4_;
    fVar4 = (float)local_28._0_4_;
    fVar5 = (float)local_28._4_4_;
  }
  local_58.hasValue = false;
  local_58._1_3_ = 0;
  local_58.value.fields.r = 0.0;
  local_58.value.fields.g = 0.0;
  local_58.value.fields.b = 0.0;
  local_58.value.fields.a = 0.0;
  value.fields.g = fVar3;
  value.fields.r = fVar2;
  value.fields.a = fVar5;
  value.fields.b = fVar4;
  System_Nullable_Color____ctor
            ((System_Nullable_Color__o *)&local_58,value,
             (MethodInfo_3CD1300 *)MethodInfo_System_Nullable_Color_ctor);
  if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
  }
  color_00.fields.value.fields.g = local_58.value.fields.g;
  color_00.fields.value.fields.b = local_58.value.fields.b;
  color_00.fields.hasValue = local_58.hasValue;
  color_00.fields._1_3_ = local_58._1_3_;
  color_00.fields.value.fields.r = local_58.value.fields.r;
  color_00.fields.value.fields.a = local_58.value.fields.a;
  pUVar1 = ClothFactory__GetCloth(reference,name,material,color_00,method);
  return pUVar1;
}


// ClothFactory$$GetCloth
// il2cpp: UnityEngine_GameObject_o* ClothFactory__GetCloth (UnityEngine_GameObject_o* reference, System_String_o* name, UnityEngine_Material_o* material, System_Nullable_Color__o color, const MethodInfo* method);
// 0x58443c0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x584459e: test r13, r13
// asm:   0x58445a7: jmp 0x58448ef
// asm:   0x5844661: test r13, r13
// asm:   0x5844664: jne 0x58446ee
// asm:   0x584466a: jmp 0x58448ef

UnityEngine_GameObject_o *
ClothFactory__GetCloth
          (UnityEngine_GameObject_o *reference,System_String_o *name,UnityEngine_Material_o *material,
          System_Nullable_Color__o color,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_array *pUVar5;
  bool bVar6;
  System_Collections_Generic_List_GameObject__o *pSVar7;
  ClothFactory___c_StaticFields *pCVar8;
  System_Predicate_T__o *pSVar9;
  UnityEngine_Object_o *x;
  ParentFollow_o *__this;
  UnityEngine_Transform_o *transform;
  UnityEngine_SkinnedMeshRenderer_o *__this_00;
  UnityEngine_Cloth_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *pMVar10;
  MethodInfo *method_00;
  System_Collections_Generic_List_GameObject__o *local_60;
  System_Nullable_Color__Fields local_58;
  UnityEngine_Material_o *local_38;
  
  local_38 = material;
  if (Il2CppMethodInitialized_07544fec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ParentFollow);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Cloth);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParentFollow);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Find);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ClothFactory_c_GetCloth_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ClothFactory_c_GetCloth_b__7_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory_c);
    Il2CppMethodInitialized_07544fec = '\x01';
  }
  local_60 = (System_Collections_Generic_List_GameObject__o *)0x0;
  if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_ClothFactory->static_fields->clothCache;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar3,(Il2CppObject *)name,(Il2CppObject **)&local_60,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_TryGetValue);
    if (!bVar6) {
      pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pSVar7,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
      local_60 = pSVar7;
      if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ClothFactory->static_fields->clothCache;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_058448ef;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar3,(Il2CppObject *)name,(Il2CppObject *)local_60,
                 (MethodInfo_4AAD4E0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_Add);
    }
    pSVar7 = local_60;
    if ((TypeInfo_ClothFactory_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory_c);
      pCVar8 = TypeInfo_ClothFactory_c->static_fields;
      pSVar9 = (System_Predicate_T__o *)pCVar8->__9__7_0;
    }
    else {
      pCVar8 = TypeInfo_ClothFactory_c->static_fields;
      pSVar9 = (System_Predicate_T__o *)pCVar8->__9__7_0;
    }
    if (pSVar9 == (System_Predicate_T__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_ClothFactory_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory_c);
        pCVar8 = TypeInfo_ClothFactory_c->static_fields;
      }
      pIVar4 = (Il2CppObject *)pCVar8->__9;
      pSVar9 = (System_Predicate_T__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_GameObject);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)pSVar9,pIVar4,
                 (intptr_t)MethodInfo_ClothFactory_c_GetCloth_b__7_0,(MethodInfo_3DC95B0 *)0x0);
      pCVar8 = TypeInfo_ClothFactory_c->static_fields;
      pCVar8->__9__7_0 = (System_Predicate_GameObject__o *)pSVar9;
      Il2CppCodeGenWriteBarrier(&pCVar8->__9__7_0);
    }
    if (pSVar7 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      System_Collections_Generic_List_object___RemoveAll
                ((System_Collections_Generic_List_object__o *)pSVar7,pSVar9,
                 (MethodInfo_395EF50 *)MethodInfo_System_Collections_Generic_List_GameObject_RemoveAll);
      pSVar7 = local_60;
      if ((TypeInfo_ClothFactory_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory_c);
        pCVar8 = TypeInfo_ClothFactory_c->static_fields;
        pSVar9 = (System_Predicate_T__o *)pCVar8->__9__7_1;
      }
      else {
        pCVar8 = TypeInfo_ClothFactory_c->static_fields;
        pSVar9 = (System_Predicate_T__o *)pCVar8->__9__7_1;
      }
      if (pSVar9 == (System_Predicate_T__o *)0x0) {
        if ((((Il2CppClass *)TypeInfo_ClothFactory_c)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory_c);
          pCVar8 = TypeInfo_ClothFactory_c->static_fields;
        }
        pIVar4 = (Il2CppObject *)pCVar8->__9;
        pSVar9 = (System_Predicate_T__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_GameObject);
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)pSVar9,pIVar4,
                   (intptr_t)MethodInfo_ClothFactory_c_GetCloth_b__7_1,(MethodInfo_3DC95B0 *)0x0);
        pCVar8 = TypeInfo_ClothFactory_c->static_fields;
        pCVar8->__9__7_1 = (System_Predicate_GameObject__o *)pSVar9;
        Il2CppCodeGenWriteBarrier(&pCVar8->__9__7_1);
      }
      if (pSVar7 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        x = (UnityEngine_Object_o *)
            System_Collections_Generic_List_object___Find
                      ((System_Collections_Generic_List_object__o *)pSVar7,pSVar9,
                       (MethodInfo_395DA40 *)MethodInfo_System_Collections_Generic_List_GameObject_Find);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          pMVar10 = extraout_RDX;
          if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
            pMVar10 = extraout_RDX_00;
          }
          x = (UnityEngine_Object_o *)ClothFactory__GenerateCloth(reference,name,pMVar10);
          if ((x == (UnityEngine_Object_o *)0x0) ||
             (__this = UnityEngine_GameObject__AddComponent_object_
                                 ((UnityEngine_GameObject_o *)x,
                                  (MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_ParentFollow),
             pMVar10 = MethodInfo_System_Collections_Generic_List_GameObject_Add,
             local_60 == (System_Collections_Generic_List_GameObject__o *)0x0)) goto label_058448ef;
          piVar1 = &(local_60->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar5 = (local_60->fields)._items;
          if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto label_058448ef;
          uVar2 = (local_60->fields)._size;
          if (uVar2 < (uint)pUVar5->max_length) {
            (local_60->fields)._size = uVar2 + 1;
            pUVar5->m_Items[(int)uVar2] = (UnityEngine_GameObject_o *)x;
            Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2);
            pMVar10 = extraout_RDX_01;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)local_60,(Il2CppObject *)x,
                       (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
            pMVar10 = extraout_RDX_05;
          }
          local_58.value.fields.a = color.fields.value.fields.a;
          local_58.hasValue = color.fields.hasValue;
          local_58._1_3_ = color.fields._1_3_;
          local_58.value.fields.r = color.fields.value.fields.r;
          local_58.value.fields.g = color.fields.value.fields.g;
          local_58.value.fields.b = color.fields.value.fields.b;
          if (__this == (ParentFollow_o *)0x0) goto label_058448ef;
        }
        else {
          if ((x == (UnityEngine_Object_o *)0x0) ||
             (__this = UnityEngine_GameObject__GetComponent_object_
                                 ((UnityEngine_GameObject_o *)x,
                                  (MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_ParentFollow),
             __this == (ParentFollow_o *)0x0)) goto label_058448ef;
          (__this->fields).isActiveInScene = true;
          pMVar10 = extraout_RDX_02;
          if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
            pMVar10 = extraout_RDX_03;
          }
          ClothFactory__ReapplyClothBones(reference,(UnityEngine_GameObject_o *)x,pMVar10);
          pMVar10 = extraout_RDX_04;
        }
        local_58.value.fields.a = color.fields.value.fields.a;
        local_58.value.fields.g = color.fields.value.fields.g;
        local_58.value.fields.b = color.fields.value.fields.b;
        local_58.hasValue = color.fields.hasValue;
        local_58._1_3_ = color.fields._1_3_;
        local_58.value.fields.r = color.fields.value.fields.r;
        ParentFollow__SetMaterial(__this,local_38,color,pMVar10);
        if (reference != (UnityEngine_GameObject_o *)0x0) {
          transform = UnityEngine_GameObject__get_transform(reference,(MethodInfo *)0x0);
          ParentFollow__SetParent(__this,transform,method_00);
          __this_00 = UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)x,
                                 (MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
          if (__this_00 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
            UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)__this_00,true,(MethodInfo *)0x0);
            __this_01 = UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)x,
                                   (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Cloth)
            ;
            if (__this_01 != (UnityEngine_Cloth_o *)0x0) {
              UnityEngine_Cloth__set_enabled(__this_01,true,(MethodInfo *)0x0);
              return (UnityEngine_GameObject_o *)x;
            }
          }
        }
      }
    }
  }
label_058448ef:
  ThrowNullReferenceException();
}


// ClothFactory$$GetDebugInfo
// il2cpp: System_String_o* ClothFactory__GetDebugInfo (const MethodInfo* method);
// 0x5844cc0
// eh: try 0x5844e24..0x5844fcd -> pad 0x5844fdf (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5844ff7..0x5844ffc -> pad 0x5845021 cleanup
// eh: try 0x5845024..0x584502e -> pad 0x5845036 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5844eff: jmp 0x5844f03
// asm:   0x5844fd7: jmp 0x5844fdf
// asm:   0x5844fd9: jmp 0x5844fdf
// asm:   0x5844fdb: jmp 0x5844fdf
// asm:   0x5844fdd: jmp 0x5844fdf
// asm:   0x5844fdf: mov rbx, rax
// asm:   0x5844fe2: cmp edx, 1
// asm:   0x5844fe5: jne 0x5845024
// asm:   0x5844fe7: mov rdi, rbx
// asm:   0x5844fea: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5844fef: mov rbx, qword ptr [rax]
// asm:   0x5844ff2: mov qword ptr [rsp + 0x40], rbx
// asm:   0x5844ff7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5844ffc: lea rax, [rip + 0x1a4ad3d]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_List_GameObject_Dispose
// asm:   0x5845003: mov rsi, qword ptr [rax]
// asm:   0x5845006: lea rdi, [rsp + 0x10]
// asm:   0x584500b: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5845010: test rbx, rbx
// asm:   0x5845013: je 0x5844e8d
// asm:   0x5845019: mov rdi, rbx
// asm:   0x584501c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5845021: mov rbx, rax
// asm:   0x5845024: lea rdi, [rsp + 0x40]
// asm:   0x5845029: call 0x2fce0d0  ; il2cpp_runtime_helper_02fce0d0()
// asm:   0x584502e: mov rdi, rbx
// asm:   0x5845031: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5845036: mov rdi, rax
// asm:   0x5845039: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o * ClothFactory__GetDebugInfo(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  System_Object_array *pSVar4;
  Il2CppObject *arg1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this;
  Il2CppObject *arg2;
  System_String_o *pSVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int32_t iStack_90;
  int iStack_8c;
  undefined1 auStack_88 [8];
  System_Collections_Generic_Dictionary_Enumerator_object__object__o *pSStack_80;
  Il2CppObject *pIStack_78;
  Il2CppObject *pIStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [16];
  Il2CppObject *pIStack_48;
  Il2CppObject *pIStack_40;
  int32_t iStack_38;
  undefined4 uStack_34;
  
  if (Il2CppMethodInitialized_07544fed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_List_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_List_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_List_GameObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_List_GameObject_get_Count
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_List_GameObject_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_FindObjectsOfType_Cloth);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"{0} cached cloths, {1} active cloths, {2} types cached");
    Il2CppMethodInitialized_07544fed = '\x01';
  }
  pIStack_78 = (Il2CppObject *)0x0;
  pIStack_70 = (Il2CppObject *)0x0;
  auStack_88 = (undefined1  [8])0x0;
  pSStack_80 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)0x0;
  uStack_68._0_4_ = 0;
  uStack_68._4_4_ = 0;
  if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_ClothFactory->static_fields->clothCache;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,pSVar1,
               (MethodInfo_4AAD970 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_GetEnumerator);
    uStack_68._0_4_ = iStack_38;
    uStack_68._4_4_ = uStack_34;
    pIStack_78 = pIStack_48;
    pIStack_70 = pIStack_40;
    auStack_88 = (undefined1  [8])auStack_58._0_8_;
    pSStack_80 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_58._8_8_;
    auStack_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    iVar9 = 0;
    auStack_58._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_88;
    while (bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                             ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_88
                              ,(MethodInfo_4CE66D0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_List_GameObject_MoveNext
                             ), pIVar3 = pIStack_78, bVar2) {
      if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ClothFactory->static_fields->clothCache;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,pIVar3,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_get_Item);
      if (pIVar3 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      iVar9 = iVar9 + *(int *)&pIVar3[1].monitor;
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_88,
               (MethodInfo_4CE67F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_List_GameObject_Dispose);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pSVar4 = UnityEngine_Object__FindObjectsOfType_object_
                       ((MethodInfo_35A4050 *)MethodInfo_UnityEngine_Object_FindObjectsOfType_Cloth);
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar6 = (uint)pSVar4->max_length;
      if ((int)uVar6 < 1) {
        iVar8 = 0;
      }
      else {
        uVar7 = 0;
        iVar8 = 0;
        do {
          if (uVar6 <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          if ((UnityEngine_Cloth_o *)pSVar4->m_Items[(int)uVar7] == (UnityEngine_Cloth_o *)0x0)
          goto label_05844fcd;
          bVar2 = UnityEngine_Cloth__get_enabled
                            ((UnityEngine_Cloth_o *)pSVar4->m_Items[(int)uVar7],(MethodInfo *)0x0);
          iVar8 = iVar8 + (uint)bVar2;
          uVar7 = uVar7 + 1;
          uVar6 = (uint)pSVar4->max_length;
        } while ((int)uVar7 < (int)uVar6);
      }
      auStack_58._0_4_ = iVar9;
      pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,auStack_58);
      iStack_8c = iVar8;
      arg1 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_8c);
      if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ClothFactory->static_fields->clothCache;
      if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this = System_Collections_Generic_Dictionary_object__object___get_Keys
                             (pSVar1,(MethodInfo_4AAD0F0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_get_Keys
                             ),
         __this != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
        iStack_90 = System_Collections_Generic_Dictionary_KeyCollection_object__object___get_Count
                              (__this,(MethodInfo_511A660 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_List_GameObject_get_Count
                              );
        arg2 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_90);
        pSVar5 = System_String__Format_5302ca0("{0} cached cloths, {1} active cloths, {2} types cached",pIVar3,arg1,arg2,(MethodInfo *)0x0);
        return pSVar5;
      }
    }
  }
label_05844fcd:
  ThrowNullReferenceException();
}


// ClothFactory$$ReapplyClothBones
// il2cpp: void ClothFactory__ReapplyClothBones (UnityEngine_GameObject_o* reference, UnityEngine_GameObject_o* clothObject, const MethodInfo* method);
// 0x58449c0

void ClothFactory__ReapplyClothBones
               (UnityEngine_GameObject_o *reference,UnityEngine_GameObject_o *clothObject,MethodInfo *method)

{
  UnityEngine_SkinnedMeshRenderer_o *__this;
  UnityEngine_SkinnedMeshRenderer_o *__this_00;
  UnityEngine_Transform_array *value;
  UnityEngine_Transform_o *__this_01;
  
  if (Il2CppMethodInitialized_07544fee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    Il2CppMethodInitialized_07544fee = '\x01';
  }
  if (reference != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__GetComponent_object_
                       (reference,
                        (MethodInfo_353B730 *)
                        MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    if (clothObject != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__GetComponent_object_
                            (clothObject,
                             (MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
      if (__this != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
        value = UnityEngine_SkinnedMeshRenderer__get_bones(__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
          UnityEngine_SkinnedMeshRenderer__set_bones(__this_00,value,(MethodInfo *)0x0);
          __this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e4b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b7 = '\x01';
          }
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localScale
                      (__this_01,
                       (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ClothFactory$$.cctor
// il2cpp: void ClothFactory___cctor (const MethodInfo* method);
// 0x5845040

void ClothFactory___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__List_GameObject___o *__this;
  
  if (Il2CppMethodInitialized_07544fef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_List_GameObject);
    Il2CppMethodInitialized_07544fef = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_List_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_ctor);
  TypeInfo_ClothFactory->static_fields->clothCache = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ClothFactory->static_fields->clothCache);
  return;
}


