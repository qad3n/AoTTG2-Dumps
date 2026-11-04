// Type: ClothFactory
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/ClothFactory.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/ClothFactory.cs
// --------------------------------

// ClothFactory.<>c$$.cctor
// il2cpp: void ClothFactory___c___cctor (const MethodInfo* method);
// 0x181db12d0

void ClothFactory___c___cctor(MethodInfo *method)

{
  ClothFactory___c_o *__this;
  
  if (Il2CppMethodInitialized_18434489f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory_c);
    Il2CppMethodInitialized_18434489f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ClothFactory_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_ClothFactory_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ClothFactory_c->static_fields->__9,__this);
  return;
}


// ClothFactory.<>c$$.ctor
// il2cpp: void ClothFactory___c___ctor (ClothFactory___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
ClothFactory___c___ctor(ClothFactory___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ClothFactory.<>c$$<GetCloth>b__7_0
// il2cpp: bool ClothFactory___c___GetCloth_b__7_0 (ClothFactory___c_o* __this, UnityEngine_GameObject_o* cloth, const MethodInfo* method);
// 0x181db0f30

bool ClothFactory___c___GetCloth_b__7_0
               (ClothFactory___c_o *__this,UnityEngine_GameObject_o *cloth,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843448a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843448a0 = '\x01';
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
// 0x181db0f80

bool ClothFactory___c___GetCloth_b__7_1
               (ClothFactory___c_o *__this,UnityEngine_GameObject_o *cloth,MethodInfo *method)

{
  ParentFollow_o *pPVar1;
  
  if (Il2CppMethodInitialized_1843448a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParentFollow);
    Il2CppMethodInitialized_1843448a1 = '\x01';
  }
  if (cloth != (UnityEngine_GameObject_o *)0x0) {
    pPVar1 = UnityEngine_GameObject__GetComponent_object_
                       (cloth,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_ParentFollow
                       );
    if (pPVar1 != (ParentFollow_o *)0x0) {
      return (pPVar1->fields).isActiveInScene == false;
    }
  }
  ThrowNullReferenceException();
}


// ClothFactory$$ClearClothCache
// il2cpp: void ClothFactory__ClearClothCache (const MethodInfo* method);
// 0x181d9fae0

void ClothFactory__ClearClothCache(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__List_GameObject___o *__this;
  
  if (Il2CppMethodInitialized_184344895 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_Clear);
    Il2CppMethodInitialized_184344895 = '\x01';
  }
  if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
  }
  __this = TypeInfo_ClothFactory->static_fields->clothCache;
  if (__this != (System_Collections_Generic_Dictionary_string__List_GameObject___o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_Clear);
    return;
  }
  ThrowNullReferenceException();
}


// ClothFactory$$DisposeAllObjects
// il2cpp: void ClothFactory__DisposeAllObjects (const MethodInfo* method);
// 0x181d9fb50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181d9fbcf: nop 

void ClothFactory__DisposeAllObjects(MethodInfo *method)

{
  System_Object_array *pSVar1;
  UnityEngine_GameObject_o *cachedObject;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184344896 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_FindObjectsByType_Cloth);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344896 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pSVar1 = UnityEngine_Object__FindObjectsByType_object__745290
                     (1,0,(MethodInfo_745290 *)MethodInfo_UnityEngine_Object_FindObjectsByType_Cloth);
  if (pSVar1 != (System_Object_array *)0x0) {
    if (pSVar1->max_length != 0) {
      for (uVar2 = 0; (int)uVar2 < (int)pSVar1->max_length; uVar2 = uVar2 + 1) {
        if ((uint)pSVar1->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        if ((UnityEngine_Component_o *)pSVar1->m_Items[(int)uVar2] == (UnityEngine_Component_o *)0x0)
        goto label_181d9fc2c;
        cachedObject = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pSVar1->m_Items[(int)uVar2],(MethodInfo *)0x0);
        if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
        }
        ClothFactory__DisposeObject(cachedObject,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181d9fc2c:
  ThrowNullReferenceException();
}


// ClothFactory$$DisposeObject
// il2cpp: void ClothFactory__DisposeObject (UnityEngine_GameObject_o* cachedObject, const MethodInfo* method);
// 0x181d9fc40
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181d9fe9b: xor edx, edx
// asm:   0x181d9fe9d: mov rcx, rbp
// asm:   0x181d9fea0: call 0x182f1ff70  ; UnityEngine_Object__Destroy()
// asm:   0x181d9fea5: jmp 0x181d9fe67

void ClothFactory__DisposeObject(UnityEngine_GameObject_o *cachedObject,MethodInfo *method)

{
  bool bVar1;
  ParentFollow_o *x;
  UnityEngine_Cloth_o *__this;
  UnityEngine_SkinnedMeshRenderer_o *__this_00;
  UnityEngine_Transform_array *value;
  UnityEngine_Transform_o *pUVar2;
  Il2CppObject *pIVar3;
  uint uVar4;
  UnityEngine_Vector3_o local_28;
  
  if (Il2CppMethodInitialized_184344897 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Cloth);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParentFollow);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344897 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)cachedObject,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (cachedObject != (UnityEngine_GameObject_o *)0x0) {
      x = UnityEngine_GameObject__GetComponent_object_
                    (cachedObject,
                     (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_ParentFollow);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)cachedObject,(MethodInfo *)0x0);
        return;
      }
      if (x != (ParentFollow_o *)0x0) {
        if ((x->fields).isActiveInScene == false) {
          return;
        }
        __this = UnityEngine_GameObject__GetComponent_object_
                           (cachedObject,
                            (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Cloth);
        if (__this != (UnityEngine_Cloth_o *)0x0) {
          UnityEngine_Cloth__set_enabled(__this,false,(MethodInfo *)0x0);
          __this_00 = UnityEngine_GameObject__GetComponent_object_
                                (cachedObject,
                                 (MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
          if (__this_00 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
            UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)__this_00,false,(MethodInfo *)0x0);
            value = UnityEngine_SkinnedMeshRenderer__get_bones(__this_00,(MethodInfo *)0x0);
            if (value != (UnityEngine_Transform_array *)0x0) {
              for (uVar4 = 0; (int)uVar4 < (int)value->max_length; uVar4 = uVar4 + 1) {
                pUVar2 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
                   (pIVar3 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)pUVar2,(((value->obj).klass)->_1).element_class),
                   pIVar3 == (Il2CppObject *)0x0)) {
                  pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                }
                if ((uint)value->max_length <= uVar4) {
                  ThrowIndexOutOfRangeException();
                }
                value->m_Items[(int)uVar4] = pUVar2;
                Il2CppCodeGenWriteBarrier(value->m_Items + (int)uVar4,pUVar2);
              }
              UnityEngine_SkinnedMeshRenderer__set_bones(__this_00,value,(MethodInfo *)0x0);
              UnityEngine_SkinnedMeshRenderer__set_rootBone
                        (__this_00,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
              (x->fields).isActiveInScene = false;
              pUVar2 = UnityEngine_GameObject__get_transform(cachedObject,(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                local_28.fields.x = 0.0;
                local_28.fields.y = -99999.0;
                local_28.fields.z = 0.0;
                UnityEngine_Transform__set_position(pUVar2,&local_28,(MethodInfo *)0x0);
                (x->fields).parent = (UnityEngine_Transform_o *)0x0;
                Il2CppCodeGenWriteBarrier(&(x->fields).parent,(void *)0x0);
                (x->fields).owner = (Characters_BaseCharacter_o *)0x0;
                Il2CppCodeGenWriteBarrier(&(x->fields).owner,(void *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// ClothFactory$$GenerateCloth
// il2cpp: UnityEngine_GameObject_o* ClothFactory__GenerateCloth (UnityEngine_GameObject_o* go, System_String_o* res, const MethodInfo* method);
// 0x181d9fed0

UnityEngine_GameObject_o *
ClothFactory__GenerateCloth(UnityEngine_GameObject_o *go,System_String_o *res,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_Vector3_StaticFields *pUVar1;
  bool bVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_SkinnedMeshRenderer_o *pUVar4;
  UnityEngine_Transform_array *value;
  UnityEngine_Transform_o *__this;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184344898 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    Il2CppMethodInitialized_184344898 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_6F5650 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      UnityEngine_GameObject__AddComponent_object_
                (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_SkinnedMeshRenderer);
    }
    pUVar4 = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_6F5650 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    if (pUVar4 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
      value = UnityEngine_SkinnedMeshRenderer__get_bones(pUVar4,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar3 = ApplicationManagers_ResourceManager__LoadAsset(path,res,true,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pUVar3 = UnityEngine_Object__Instantiate_2f212a0(pUVar3,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Object_o *)0x0) {
        pUVar6 = (UnityEngine_Object_o *)0x0;
        if (pUVar3->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
          pUVar6 = pUVar3;
        }
        if (pUVar6 == (UnityEngine_Object_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
        }
        pUVar6 = (UnityEngine_Object_o *)0x0;
        if (pUVar3->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
          pUVar6 = pUVar3;
        }
        pUVar4 = UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)pUVar6,
                            (MethodInfo_6F5650 *)
                            MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
        if (pUVar4 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
          __this = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433dbeb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbeb = '\x01';
          }
          if (__this != (UnityEngine_Transform_o *)0x0) {
            pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
            local_18.x = (pUVar1->oneVector).fields.x;
            local_18.y = (pUVar1->oneVector).fields.y;
            local_18.z = (pUVar1->oneVector).fields.z;
            UnityEngine_Transform__set_localScale(__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0)
            ;
            UnityEngine_SkinnedMeshRenderer__set_bones(pUVar4,value,(MethodInfo *)0x0);
            UnityEngine_SkinnedMeshRenderer__set_quality(pUVar4,4,(MethodInfo *)0x0);
            pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
            return pUVar5;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ClothFactory$$GetCape
// il2cpp: UnityEngine_GameObject_o* ClothFactory__GetCape (UnityEngine_GameObject_o* reference, System_String_o* name, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x181da0120

UnityEngine_GameObject_o *
ClothFactory__GetCape
          (UnityEngine_GameObject_o *reference,System_String_o *name,UnityEngine_Material_o *material,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  System_Nullable_Color__Fields local_58 [2];
  
  if (Il2CppMethodInitialized_184344899 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    Il2CppMethodInitialized_184344899 = '\x01';
  }
  if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
  }
  local_58[0].hasValue = false;
  local_58[0]._1_3_ = 0;
  local_58[0].value.fields.r = 0.0;
  local_58[0].value.fields.g = 0.0;
  local_58[0].value.fields.b = 0.0;
  local_58[0].value.fields.a = 0.0;
  pUVar1 = ClothFactory__GetCloth
                     (reference,name,material,(System_Nullable_Color__o *)local_58,(MethodInfo *)0x0);
  return pUVar1;
}


// ClothFactory$$GetHair
// il2cpp: UnityEngine_GameObject_o* ClothFactory__GetHair (UnityEngine_GameObject_o* reference, System_String_o* name, UnityEngine_Material_o* material, UnityEngine_Color_o color, const MethodInfo* method);
// 0x181da0ce0

UnityEngine_GameObject_o *
ClothFactory__GetHair
          (UnityEngine_GameObject_o *reference,System_String_o *name,UnityEngine_Material_o *material,
          UnityEngine_Color_o *color,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  System_Nullable_Color__Fields local_68;
  System_Nullable_Color__Fields local_48 [2];
  
  if (Il2CppMethodInitialized_18434489a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_ctor);
    Il2CppMethodInitialized_18434489a = '\x01';
  }
  local_48[0].hasValue = false;
  local_48[0]._1_3_ = 0;
  local_48[0].value.fields.r = 0.0;
  local_48[0].value.fields.g = 0.0;
  local_48[0].value.fields.b = 0.0;
  local_68._0_8_ = *(undefined8 *)&color->fields;
  local_68.value.fields.g = (color->fields).b;
  local_68.value.fields.b = (color->fields).a;
  local_48[0].value.fields.a = 0.0;
  System_Nullable_Vector4____ctor
            ((System_Nullable_Vector4__o *)local_48,(UnityEngine_Vector4_o *)&local_68,
             (MethodInfo_AE2670 *)MethodInfo_System_Nullable_Color_ctor);
  if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
  }
  local_68.value.fields.a = local_48[0].value.fields.a;
  local_68.hasValue = local_48[0].hasValue;
  local_68._1_3_ = local_48[0]._1_3_;
  local_68.value.fields.r = local_48[0].value.fields.r;
  local_68.value.fields.g = local_48[0].value.fields.g;
  local_68.value.fields.b = local_48[0].value.fields.b;
  pUVar1 = ClothFactory__GetCloth
                     (reference,name,material,(System_Nullable_Color__o *)&local_68,(MethodInfo *)0x0);
  return pUVar1;
}


// ClothFactory$$GetCloth
// il2cpp: UnityEngine_GameObject_o* ClothFactory__GetCloth (UnityEngine_GameObject_o* reference, System_String_o* name, UnityEngine_Material_o* material, System_Nullable_Color__o color, const MethodInfo* method);
// 0x181da01a0

UnityEngine_GameObject_o *
ClothFactory__GetCloth
          (UnityEngine_GameObject_o *reference,System_String_o *name,UnityEngine_Material_o *material,
          System_Nullable_Color__o *color,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_GameObject_array *pUVar6;
  UnityEngine_Renderer_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  MethodInfo *pMVar15;
  bool bVar16;
  System_Collections_Generic_List_GameObject__o *pSVar17;
  System_Predicate_T__o *pSVar18;
  UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_Fields x;
  ParentFollow_o *__this;
  UnityEngine_SkinnedMeshRenderer_o *pUVar19;
  UnityEngine_SkinnedMeshRenderer_o *__this_00;
  UnityEngine_Transform_array *value;
  UnityEngine_Transform_o *pUVar20;
  UnityEngine_Material_o *pUVar21;
  UnityEngine_Vector3_o *pUVar22;
  UnityEngine_Quaternion_o *pUVar23;
  Characters_BaseCharacter_o *value_00;
  UnityEngine_Cloth_o *__this_01;
  System_Collections_Generic_List_GameObject__o *local_res10;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Color_o local_48;
  float fStack_38;
  
  if (Il2CppMethodInitialized_18434489b == '\0') {
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
    Il2CppMethodInitialized_18434489b = '\x01';
  }
  local_res10 = (System_Collections_Generic_List_GameObject__o *)0x0;
  if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_ClothFactory->static_fields->clothCache;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar16 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                       (pSVar3,(Il2CppObject *)name,(Il2CppObject **)&local_res10,
                        (MethodInfo_14769C0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_TryGetValue);
    if (!bVar16) {
      pSVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)pSVar17,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
      local_res10 = pSVar17;
      if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ClothFactory->static_fields->clothCache;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181da0965;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar3,(Il2CppObject *)name,(Il2CppObject *)local_res10,
                 (MethodInfo_146B4B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_Add);
    }
    pSVar17 = local_res10;
    if ((TypeInfo_ClothFactory_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory_c);
    }
    pSVar18 = (System_Predicate_T__o *)TypeInfo_ClothFactory_c->static_fields->__9__7_0;
    if (pSVar18 == (System_Predicate_T__o *)0x0) {
      if ((TypeInfo_ClothFactory_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory_c);
      }
      pIVar4 = (Il2CppObject *)TypeInfo_ClothFactory_c->static_fields->__9;
      pSVar18 = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_GameObject);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)pSVar18,pIVar4,
                 (intptr_t)MethodInfo_ClothFactory_c_GetCloth_b__7_0,(MethodInfo_B61EB0 *)0x0);
      TypeInfo_ClothFactory_c->static_fields->__9__7_0 = (System_Predicate_GameObject__o *)pSVar18;
      Il2CppCodeGenWriteBarrier(&TypeInfo_ClothFactory_c->static_fields->__9__7_0,pSVar18);
    }
    if (pSVar17 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      System_Collections_Generic_List_object___RemoveAll
                ((System_Collections_Generic_List_object__o *)pSVar17,pSVar18,
                 (MethodInfo_946210 *)MethodInfo_System_Collections_Generic_List_GameObject_RemoveAll);
      pSVar17 = local_res10;
      if ((TypeInfo_ClothFactory_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory_c);
      }
      pSVar18 = (System_Predicate_T__o *)TypeInfo_ClothFactory_c->static_fields->__9__7_1;
      if (pSVar18 == (System_Predicate_T__o *)0x0) {
        if ((TypeInfo_ClothFactory_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory_c);
        }
        pIVar4 = (Il2CppObject *)TypeInfo_ClothFactory_c->static_fields->__9;
        pSVar18 = (System_Predicate_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_GameObject);
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)pSVar18,pIVar4,
                   (intptr_t)MethodInfo_ClothFactory_c_GetCloth_b__7_1,(MethodInfo_B61EB0 *)0x0);
        TypeInfo_ClothFactory_c->static_fields->__9__7_1 = (System_Predicate_GameObject__o *)pSVar18;
        Il2CppCodeGenWriteBarrier(&TypeInfo_ClothFactory_c->static_fields->__9__7_1,pSVar18);
      }
      if (pSVar17 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        x = (UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_Fields)
            System_Collections_Generic_List_object___Find
                      ((System_Collections_Generic_List_T__o *)pSVar17,pSVar18,
                       (MethodInfo_91E910 *)MethodInfo_System_Collections_Generic_List_GameObject_Find);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar16 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar16) {
          if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
          }
          x = (UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_Fields)
              ClothFactory__GenerateCloth(reference,name,(MethodInfo *)0x0);
          if (x == (UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_Fields)0x0)
          goto label_181da0965;
          __this = UnityEngine_GameObject__AddComponent_object_
                             ((UnityEngine_GameObject_o *)x,
                              (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_ParentFollow
                             );
          pMVar15 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
          if (local_res10 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_181da0965;
          piVar1 = &(local_res10->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar6 = (local_res10->fields)._items;
          if (pUVar6 == (UnityEngine_GameObject_array *)0x0) goto label_181da0965;
          uVar2 = (local_res10->fields)._size;
          if (uVar2 < (uint)pUVar6->max_length) {
            (local_res10->fields)._size = uVar2 + 1;
            if ((uint)pUVar6->max_length <= uVar2) {
              ThrowIndexOutOfRangeException();
            }
            *(UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_Fields *)
             (pUVar6->m_Items + (int)uVar2) = x;
            Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar2,(void *)x);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)local_res10,(Il2CppObject *)x,
                       (MethodInfo_93DD50 *)pMVar15->klass->rgctx_data[0xe].method);
          }
          if (__this == (ParentFollow_o *)0x0) goto label_181da0965;
        }
        else {
          if (x == (UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_Fields)0x0)
          goto label_181da0965;
          __this = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)x,
                              (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_ParentFollow
                             );
          if (__this == (ParentFollow_o *)0x0) goto label_181da0965;
          (__this->fields).isActiveInScene = true;
          if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
          }
          if (Il2CppMethodInitialized_18434489d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
            Il2CppMethodInitialized_18434489d = '\x01';
          }
          if (reference == (UnityEngine_GameObject_o *)0x0) goto label_181da0965;
          pUVar19 = UnityEngine_GameObject__GetComponent_object_
                              (reference,
                               (MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
          __this_00 = UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)x,
                                 (MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
          if (pUVar19 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) goto label_181da0965;
          value = UnityEngine_SkinnedMeshRenderer__get_bones(pUVar19,(MethodInfo *)0x0);
          if (__this_00 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) goto label_181da0965;
          UnityEngine_SkinnedMeshRenderer__set_bones(__this_00,value,(MethodInfo *)0x0);
          pUVar20 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433dbeb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbeb = '\x01';
          }
          if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_181da0965;
          pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_58.x = (pUVar5->oneVector).fields.x;
          local_58.y = (pUVar5->oneVector).fields.y;
          local_58.z = (pUVar5->oneVector).fields.z;
          UnityEngine_Transform__set_localScale(pUVar20,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
        }
        uVar9 = *(undefined8 *)&(color->fields).field_0x1;
        uVar10 = *(undefined8 *)((longlong)&(color->fields).value.fields.g + 1);
        fStack_38 = (color->fields).value.fields.a;
        local_48.fields.r._1_3_ = (undefined3)uVar9;
        local_48.fields.g = (float)((ulonglong)uVar9 >> 0x18);
        local_48.fields.b._0_1_ = (undefined1)((ulonglong)uVar9 >> 0x38);
        local_48.fields.b._1_3_ = (undefined3)uVar10;
        local_48.fields.a = (float)((ulonglong)uVar10 >> 0x18);
        if (Il2CppMethodInitialized_1843448a3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_GetValueOrDefault);
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_get_HasValue);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_1843448a3 = '\x01';
        }
        pUVar21 = (__this->fields).tintedMaterial;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar16 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar16) {
          pUVar21 = (__this->fields).tintedMaterial;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar21,(MethodInfo *)0x0);
        }
        pUVar7 = (UnityEngine_Renderer_o *)(__this->fields).ownRenderer;
        if (pUVar7 != (UnityEngine_Renderer_o *)0x0) {
          UnityEngine_Renderer__set_sharedMaterial(pUVar7,material,(MethodInfo *)0x0);
          (__this->fields).tintedMaterial = (UnityEngine_Material_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(__this->fields).tintedMaterial,(void *)0x0);
          if ((color->fields).hasValue != false) {
            pUVar7 = (UnityEngine_Renderer_o *)(__this->fields).ownRenderer;
            if (pUVar7 == (UnityEngine_Renderer_o *)0x0) goto label_181da0965;
            pUVar21 = UnityEngine_Renderer__get_material(pUVar7,(MethodInfo *)0x0);
            if (pUVar21 == (UnityEngine_Material_o *)0x0) goto label_181da0965;
            local_48.fields.r = local_48.fields.g;
            local_48.fields.g = local_48.fields.b;
            local_48.fields.b = local_48.fields.a;
            local_48.fields.a = fStack_38;
            UnityEngine_Material__set_color(pUVar21,&local_48,(MethodInfo *)0x0);
            pUVar7 = (UnityEngine_Renderer_o *)(__this->fields).ownRenderer;
            if (pUVar7 == (UnityEngine_Renderer_o *)0x0) goto label_181da0965;
            pUVar21 = UnityEngine_Renderer__get_sharedMaterial(pUVar7,(MethodInfo *)0x0);
            (__this->fields).tintedMaterial = pUVar21;
            Il2CppCodeGenWriteBarrier(&(__this->fields).tintedMaterial,pUVar21);
          }
          if (reference != (UnityEngine_GameObject_o *)0x0) {
            pUVar20 = UnityEngine_GameObject__get_transform(reference,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_1843448a5 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_UnityEngine_Component_GetComponentInParent_BaseCharacter);
              Il2CppMethodInitialized_1843448a5 = '\x01';
            }
            (__this->fields).parent = pUVar20;
            Il2CppCodeGenWriteBarrier(&(__this->fields).parent,pUVar20);
            if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
              pUVar8 = (__this->fields).bTransform;
              pUVar22 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)&local_48,pUVar20,(MethodInfo *)0x0);
              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                local_58.x = (pUVar22->fields).x;
                local_58.y = (pUVar22->fields).y;
                local_58.z = (pUVar22->fields).z;
                UnityEngine_Transform__set_position
                          (pUVar8,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
                pUVar8 = (__this->fields).bTransform;
                pUVar23 = UnityEngine_Transform__get_rotation
                                    ((UnityEngine_Quaternion_o *)&local_48,pUVar20,(MethodInfo *)0x0);
                if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                  uVar11 = (pUVar23->fields).x;
                  uVar12 = (pUVar23->fields).y;
                  uVar13 = (pUVar23->fields).z;
                  uVar14 = (pUVar23->fields).w;
                  local_48.fields.r = (float)uVar11;
                  local_48.fields.g = (float)uVar12;
                  local_48.fields.b = (float)uVar13;
                  local_48.fields.a = (float)uVar14;
                  UnityEngine_Transform__set_rotation
                            (pUVar8,(UnityEngine_Quaternion_o *)&local_48,(MethodInfo *)0x0);
                  value_00 = UnityEngine_Component__GetComponentInParent_object__664f20
                                       ((UnityEngine_Component_o *)pUVar20,
                                        (MethodInfo_664F20 *)
                                        MethodInfo_UnityEngine_Component_GetComponentInParent_BaseCharacter);
                  (__this->fields).owner = value_00;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).owner,value_00);
                  (__this->fields).appliedRenderStateVersion = -1;
                  ParentFollow__FollowRenderState(__this,(MethodInfo *)0x0);
                  pUVar19 = UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)x,
                                       (MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
                  if (pUVar19 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
                    UnityEngine_Renderer__set_enabled
                              ((UnityEngine_Renderer_o *)pUVar19,true,(MethodInfo *)0x0);
                    __this_01 = UnityEngine_GameObject__GetComponent_object_
                                          ((UnityEngine_GameObject_o *)x,
                                           (MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_Cloth);
                    if (__this_01 != (UnityEngine_Cloth_o *)0x0) {
                      UnityEngine_Cloth__set_enabled(__this_01,true,(MethodInfo *)0x0);
                      return (UnityEngine_GameObject_o *)x;
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
label_181da0965:
  ThrowNullReferenceException();
}


// ClothFactory$$GetDebugInfo
// il2cpp: System_String_o* ClothFactory__GetDebugInfo (const MethodInfo* method);
// 0x181da0980
// eh: try 0x181da0ad4..0x181da0cca -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181da0b55: mov rdx, qword ptr [rip + 0x2316664]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_List_GameObject_Dispose
// asm:   0x181da0b5c: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181da0b61: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181da0b66: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181da0b6b: test rcx, rcx
// asm:   0x181da0b6e: jne 0x181da0cca
// asm:   0x181da0b74: mov edi, dword ptr [rsp + 0xd8]
// asm:   0x181da0cca: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

System_String_o * ClothFactory__GetDebugInfo(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__List_GameObject___o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar2;
  Il2CppObject *pIVar3;
  System_Object_array *pSVar4;
  longlong lVar5;
  Il2CppObject *arg1;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  Il2CppObject *arg2;
  System_String_o *pSVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_res10 [2];
  int local_res18 [2];
  int32_t local_res20 [2];
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_80;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_18434489c == '\0') {
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
    Il2CppMethodInitialized_18434489c = '\x01';
  }
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
  }
  pSVar1 = TypeInfo_ClothFactory->static_fields->clothCache;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__List_GameObject___o *)0x0) {
    iVar8 = 0;
    local_res10[0] = 0;
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_58,(System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_GetEnumerator);
    local_80.fields._dictionary = local_58.fields._dictionary;
    local_80.fields._version = local_58.fields._version;
    local_80.fields._index = local_58.fields._index;
    local_80.fields._current.fields.key = local_58.fields._current.fields.key;
    local_80.fields._current.fields.value = local_58.fields._current.fields.value;
    local_80.fields._getEnumeratorRetType = local_58.fields._getEnumeratorRetType;
    local_80.fields._36_4_ = local_58.fields._36_4_;
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (&local_80,
                         (MethodInfo_1585360 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_List_GameObject_MoveNext
                        );
      pIVar3 = local_80.fields._current.fields.key;
      if (!bVar2) break;
      if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
      }
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_ClothFactory->static_fields->clothCache;
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this,pIVar3,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_get_Item);
      if (pIVar3 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      iVar8 = iVar8 + *(int *)&pIVar3[1].monitor;
      local_res10[0] = iVar8;
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_80,
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_List_GameObject_Dispose);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pSVar4 = UnityEngine_Object__FindObjectsOfType_object_
                       ((MethodInfo_7453E0 *)MethodInfo_UnityEngine_Object_FindObjectsOfType_Cloth);
    if (pSVar4 != (System_Object_array *)0x0) {
      iVar9 = 0;
      uVar7 = 0;
      while( true ) {
        if ((int)pSVar4->max_length <= (int)uVar7) {
          local_res10[0] = iVar8;
          pIVar3 = il2cpp_value_box(g_data_184354e08,local_res10);
          local_res18[0] = iVar9;
          arg1 = il2cpp_value_box(g_data_184354e08,local_res18);
          if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
          }
          pSVar1 = TypeInfo_ClothFactory->static_fields->clothCache;
          if (pSVar1 != (System_Collections_Generic_Dictionary_string__List_GameObject___o *)0x0) {
            __this_00 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                                   (MethodInfo_13C6500 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_get_Keys
                                  );
            if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
              local_res20[0] =
                   System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___get_Count
                             (__this_00,
                              (MethodInfo_F21A00 *)
                              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_List_GameObject_get_Count
                             );
              arg2 = il2cpp_value_box(g_data_184354e08,local_res20);
              pSVar6 = System_String__Format_196d050("{0} cached cloths, {1} active cloths, {2} types cached",pIVar3,arg1,arg2,(MethodInfo *)0x0)
              ;
              return pSVar6;
            }
          }
          ThrowNullReferenceException();
        }
        if ((uint)pSVar4->max_length <= uVar7) {
          ThrowIndexOutOfRangeException();
        }
        lVar5 = (longlong)(int)uVar7;
        if ((UnityEngine_Cloth_o *)pSVar4->m_Items[lVar5] == (UnityEngine_Cloth_o *)0x0) break;
        uVar7 = uVar7 + 1;
        bVar2 = UnityEngine_Cloth__get_enabled
                          ((UnityEngine_Cloth_o *)pSVar4->m_Items[lVar5],(MethodInfo *)0x0);
        iVar9 = (iVar9 + 1) - (uint)!bVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// ClothFactory$$ReapplyClothBones
// il2cpp: void ClothFactory__ReapplyClothBones (UnityEngine_GameObject_o* reference, UnityEngine_GameObject_o* clothObject, const MethodInfo* method);
// 0x181da0da0

void ClothFactory__ReapplyClothBones
               (UnityEngine_GameObject_o *reference,UnityEngine_GameObject_o *clothObject,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  UnityEngine_SkinnedMeshRenderer_o *__this;
  UnityEngine_SkinnedMeshRenderer_o *__this_00;
  UnityEngine_Transform_array *value;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18434489d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    Il2CppMethodInitialized_18434489d = '\x01';
  }
  if (reference != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__GetComponent_object_
                       (reference,
                        (MethodInfo_6F5650 *)
                        MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    if (clothObject != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__GetComponent_object_
                            (clothObject,
                             (MethodInfo_6F5650 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
      if (__this != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
        value = UnityEngine_SkinnedMeshRenderer__get_bones(__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
          UnityEngine_SkinnedMeshRenderer__set_bones(__this_00,value,(MethodInfo *)0x0);
          __this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433dbeb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbeb = '\x01';
          }
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
            local_18.x = (pUVar1->oneVector).fields.x;
            local_18.y = (pUVar1->oneVector).fields.y;
            local_18.z = (pUVar1->oneVector).fields.z;
            UnityEngine_Transform__set_localScale
                      (__this_01,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
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
// 0x181da0eb0

void ClothFactory___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__List_GameObject___o *__this;
  
  if (Il2CppMethodInitialized_18434489e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_List_GameObject);
    Il2CppMethodInitialized_18434489e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_List_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_ctor);
  TypeInfo_ClothFactory->static_fields->clothCache = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ClothFactory->static_fields->clothCache,__this);
  return;
}


