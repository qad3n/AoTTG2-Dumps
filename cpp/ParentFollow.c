// Type: ParentFollow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/ParentFollow.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/ParentFollow.cs
// --------------------------------

// ParentFollow$$Awake
// il2cpp: void ParentFollow__Awake (ParentFollow_o* __this, const MethodInfo* method);
// 0x58451e0

void ParentFollow__Awake(ParentFollow_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_SkinnedMeshRenderer_o *pUVar2;
  
  if (Il2CppMethodInitialized_07544ff3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
    Il2CppMethodInitialized_07544ff3 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  (__this->fields).bTransform = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).bTransform);
  pUVar2 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer)
  ;
  (__this->fields).ownRenderer = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ownRenderer);
  (__this->fields).isActiveInScene = true;
  return;
}


// ParentFollow$$SetMaterial
// il2cpp: void ParentFollow__SetMaterial (ParentFollow_o* __this, UnityEngine_Material_o* material, System_Nullable_Color__o tint, const MethodInfo* method);
// 0x5844ab0

void ParentFollow__SetMaterial
               (ParentFollow_o *__this,UnityEngine_Material_o *material,System_Nullable_Color__o tint,
               MethodInfo *method)

{
  UnityEngine_Material_o **targetAddress;
  UnityEngine_Renderer_o *pUVar1;
  bool bVar2;
  UnityEngine_Material_o *pUVar3;
  
  if (Il2CppMethodInitialized_07544ff4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07544ff4 = '\x01';
  }
  pUVar3 = (__this->fields).tintedMaterial;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields).tintedMaterial;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = *targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
  }
  pUVar1 = (UnityEngine_Renderer_o *)(__this->fields).ownRenderer;
  if (pUVar1 != (UnityEngine_Renderer_o *)0x0) {
    UnityEngine_Renderer__set_material(pUVar1,material,(MethodInfo *)0x0);
    *targetAddress = (UnityEngine_Material_o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
    if (tint.fields.hasValue == false) {
      return;
    }
    pUVar1 = (UnityEngine_Renderer_o *)(__this->fields).ownRenderer;
    if (pUVar1 != (UnityEngine_Renderer_o *)0x0) {
      pUVar3 = UnityEngine_Renderer__get_material(pUVar1,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_color(pUVar3,tint.fields.value.fields,(MethodInfo *)0x0);
        pUVar1 = (UnityEngine_Renderer_o *)(__this->fields).ownRenderer;
        if (pUVar1 != (UnityEngine_Renderer_o *)0x0) {
          pUVar3 = UnityEngine_Renderer__get_sharedMaterial(pUVar1,(MethodInfo *)0x0);
          *targetAddress = pUVar3;
          Il2CppCodeGenWriteBarrier(targetAddress);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ParentFollow$$OnDestroy
// il2cpp: void ParentFollow__OnDestroy (ParentFollow_o* __this, const MethodInfo* method);
// 0x5845250

void ParentFollow__OnDestroy(ParentFollow_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07544ff5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07544ff5 = '\x01';
  }
  pUVar1 = (__this->fields).tintedMaterial;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).tintedMaterial;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ParentFollow$$RemoveParent
// il2cpp: void ParentFollow__RemoveParent (ParentFollow_o* __this, const MethodInfo* method);
// 0x58440f0

void ParentFollow__RemoveParent(ParentFollow_o *__this,MethodInfo *method)

{
  (__this->fields).parent = (UnityEngine_Transform_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).parent);
  (__this->fields).owner = (Characters_BaseCharacter_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).owner);
  return;
}


// ParentFollow$$SetParent
// il2cpp: void ParentFollow__SetParent (ParentFollow_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
// 0x5844c00

void ParentFollow__SetParent(ParentFollow_o *__this,UnityEngine_Transform_o *transform,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Characters_BaseCharacter_o *method_00;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o value_00;
  
  if (Il2CppMethodInitialized_07544ff6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_BaseCharacter);
    Il2CppMethodInitialized_07544ff6 = '\x01';
  }
  (__this->fields).parent = transform;
  Il2CppCodeGenWriteBarrier(&(__this->fields).parent);
  if (transform != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = (__this->fields).bTransform;
    value_00 = UnityEngine_Transform__get_position(transform,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_position(pUVar1,value_00,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).bTransform;
      value = UnityEngine_Transform__get_rotation(transform,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar1,value,(MethodInfo *)0x0);
        method_00 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                              ((UnityEngine_Component_o *)transform,
                               (MethodInfo_34B0D00 *)
                               MethodInfo_UnityEngine_Component_GetComponentInParent_BaseCharacter);
        (__this->fields).owner = method_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).owner);
        (__this->fields).appliedRenderStateVersion = -1;
        ParentFollow__FollowRenderState(__this,(MethodInfo *)method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ParentFollow$$Update
// il2cpp: void ParentFollow__Update (ParentFollow_o* __this, const MethodInfo* method);
// 0x5845390

void ParentFollow__Update(ParentFollow_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *__this_00;
  bool bVar2;
  UnityEngine_GameObject_o *cachedObject;
  MethodInfo *pMVar3;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07544ff7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07544ff7 = '\x01';
  }
  if ((__this->fields).isActiveInScene == false) {
    return;
  }
  pUVar1 = (__this->fields).parent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pMVar3 = (MethodInfo *)0x0;
    cachedObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
    }
    ClothFactory__DisposeObject(cachedObject,pMVar3);
    return;
  }
  pUVar1 = (__this->fields).parent;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    __this_00 = (__this->fields).bTransform;
    value = UnityEngine_Transform__get_position(pUVar1,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      pMVar3 = (MethodInfo *)0x0;
      UnityEngine_Transform__set_position(__this_00,value,(MethodInfo *)0x0);
      ParentFollow__FollowRenderState(__this,pMVar3);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ParentFollow$$FollowRenderState
// il2cpp: void ParentFollow__FollowRenderState (ParentFollow_o* __this, const MethodInfo* method);
// 0x58452d0

void ParentFollow__FollowRenderState(ParentFollow_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_BaseCharacter_o *pCVar2;
  UnityEngine_Object_o *x;
  Characters_AnimationHandler_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07544ff8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07544ff8 = '\x01';
  }
  pCVar2 = (__this->fields).owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    x = (UnityEngine_Object_o *)(__this->fields).ownRenderer;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pCVar2 = (__this->fields).owner;
      if (pCVar2 == (Characters_BaseCharacter_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_00 = (pCVar2->fields).Animation;
      if ((__this_00 != (Characters_AnimationHandler_o *)0x0) &&
         (iVar1 = (__this_00->fields)._renderStateVersion, (__this->fields).appliedRenderStateVersion != iVar1
         )) {
        (__this->fields).appliedRenderStateVersion = iVar1;
        Characters_AnimationHandler__ApplyRenderState_5ab2690
                  (__this_00,(UnityEngine_Renderer_o *)(__this->fields).ownRenderer,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// ParentFollow$$.ctor
// il2cpp: void ParentFollow___ctor (ParentFollow_o* __this, const MethodInfo* method);
// 0x5845470

void ParentFollow___ctor(ParentFollow_o *__this,MethodInfo *method)

{
  (__this->fields).appliedRenderStateVersion = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


