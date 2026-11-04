// Type: ParentFollow
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/ParentFollow.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/ParentFollow.cs
// --------------------------------

// ParentFollow$$Awake
// il2cpp: void ParentFollow__Awake (ParentFollow_o* __this, const MethodInfo* method);
// 0x181dabfa0

void ParentFollow__Awake(ParentFollow_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *value;
  UnityEngine_SkinnedMeshRenderer_o *value_00;
  
  if (Il2CppMethodInitialized_1843448a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
    Il2CppMethodInitialized_1843448a2 = '\x01';
  }
  value = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  (__this->fields).bTransform = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).bTransform,value);
  value_00 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer
                       );
  (__this->fields).ownRenderer = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ownRenderer,value_00);
  (__this->fields).isActiveInScene = true;
  return;
}


// ParentFollow$$SetMaterial
// il2cpp: void ParentFollow__SetMaterial (ParentFollow_o* __this, UnityEngine_Material_o* material, System_Nullable_Color__o tint, const MethodInfo* method);
// 0x181dac1d0

void ParentFollow__SetMaterial
               (ParentFollow_o *__this,UnityEngine_Material_o *material,System_Nullable_Color__o *tint,
               MethodInfo *method)

{
  UnityEngine_Renderer_o *pUVar1;
  bool bVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_1843448a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843448a3 = '\x01';
  }
  pUVar3 = (__this->fields).tintedMaterial;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = (__this->fields).tintedMaterial;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
  }
  pUVar1 = (UnityEngine_Renderer_o *)(__this->fields).ownRenderer;
  if (pUVar1 != (UnityEngine_Renderer_o *)0x0) {
    UnityEngine_Renderer__set_sharedMaterial(pUVar1,material,(MethodInfo *)0x0);
    (__this->fields).tintedMaterial = (UnityEngine_Material_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).tintedMaterial,(void *)0x0);
    if ((tint->fields).hasValue == false) {
      return;
    }
    pUVar1 = (UnityEngine_Renderer_o *)(__this->fields).ownRenderer;
    if ((pUVar1 != (UnityEngine_Renderer_o *)0x0) &&
       (pUVar3 = UnityEngine_Renderer__get_material(pUVar1,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Material_o *)0x0)) {
      local_38.r = (tint->fields).value.fields.r;
      local_38.g = (tint->fields).value.fields.g;
      local_38.b = (tint->fields).value.fields.b;
      local_38.a = (tint->fields).value.fields.a;
      UnityEngine_Material__set_color(pUVar3,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
      pUVar1 = (UnityEngine_Renderer_o *)(__this->fields).ownRenderer;
      if (pUVar1 != (UnityEngine_Renderer_o *)0x0) {
        pUVar3 = UnityEngine_Renderer__get_sharedMaterial(pUVar1,(MethodInfo *)0x0);
        (__this->fields).tintedMaterial = pUVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields).tintedMaterial,pUVar3);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ParentFollow$$OnDestroy
// il2cpp: void ParentFollow__OnDestroy (ParentFollow_o* __this, const MethodInfo* method);
// 0x181dac100

void ParentFollow__OnDestroy(ParentFollow_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843448a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843448a4 = '\x01';
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
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  return;
}


// ParentFollow$$RemoveParent
// il2cpp: void ParentFollow__RemoveParent (ParentFollow_o* __this, const MethodInfo* method);
// 0x181dac190

void ParentFollow__RemoveParent(ParentFollow_o *__this,MethodInfo *method)

{
  (__this->fields).parent = (UnityEngine_Transform_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).parent,(void *)0x0);
  (__this->fields).owner = (Characters_BaseCharacter_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).owner,(void *)0x0);
  return;
}


// ParentFollow$$SetParent
// il2cpp: void ParentFollow__SetParent (ParentFollow_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
// 0x181dac2f0

void ParentFollow__SetParent(ParentFollow_o *__this,UnityEngine_Transform_o *transform,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Vector3_o *pUVar2;
  UnityEngine_Quaternion_o *pUVar3;
  Characters_BaseCharacter_o *value;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_1843448a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_BaseCharacter);
    Il2CppMethodInitialized_1843448a5 = '\x01';
  }
  (__this->fields).parent = transform;
  Il2CppCodeGenWriteBarrier(&(__this->fields).parent,transform);
  if (transform != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = (__this->fields).bTransform;
    pUVar2 = UnityEngine_Transform__get_position
                       ((UnityEngine_Vector3_o *)&local_18,transform,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      local_28.x = (pUVar2->fields).x;
      local_28.y = (pUVar2->fields).y;
      local_28.z = (pUVar2->fields).z;
      UnityEngine_Transform__set_position(pUVar1,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).bTransform;
      pUVar3 = UnityEngine_Transform__get_rotation
                         ((UnityEngine_Quaternion_o *)&local_18,transform,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        local_18.x = (pUVar3->fields).x;
        local_18.y = (pUVar3->fields).y;
        local_18.z = (pUVar3->fields).z;
        local_18.w = (pUVar3->fields).w;
        UnityEngine_Transform__set_rotation(pUVar1,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
        value = UnityEngine_Component__GetComponentInParent_object__664f20
                          ((UnityEngine_Component_o *)transform,
                           (MethodInfo_664F20 *)
                           MethodInfo_UnityEngine_Component_GetComponentInParent_BaseCharacter);
        (__this->fields).owner = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields).owner,value);
        (__this->fields).appliedRenderStateVersion = -1;
        ParentFollow__FollowRenderState(__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ParentFollow$$Update
// il2cpp: void ParentFollow__Update (ParentFollow_o* __this, const MethodInfo* method);
// 0x181dac3f0

void ParentFollow__Update(ParentFollow_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *__this_00;
  bool bVar2;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_GameObject_o *cachedObject;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_1843448a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843448a6 = '\x01';
  }
  if ((__this->fields).isActiveInScene != false) {
    pUVar1 = (__this->fields).parent;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar1 = (__this->fields).parent;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        __this_00 = (__this->fields).bTransform;
        pUVar3 = UnityEngine_Transform__get_position(&local_18,pUVar1,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          local_28.x = (pUVar3->fields).x;
          local_28.y = (pUVar3->fields).y;
          local_28.z = (pUVar3->fields).z;
          UnityEngine_Transform__set_position(__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
          ParentFollow__FollowRenderState(__this,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
    cachedObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
    }
    ClothFactory__DisposeObject(cachedObject,(MethodInfo *)0x0);
  }
  return;
}


// ParentFollow$$FollowRenderState
// il2cpp: void ParentFollow__FollowRenderState (ParentFollow_o* __this, const MethodInfo* method);
// 0x181dac010

void ParentFollow__FollowRenderState(ParentFollow_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  UnityEngine_Object_o *x;
  Characters_AnimationHandler_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843448a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843448a7 = '\x01';
  }
  pCVar1 = (__this->fields).owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    x = (UnityEngine_Object_o *)(__this->fields).ownRenderer;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pCVar1 = (__this->fields).owner;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
label_181dac0ec:
        ThrowNullReferenceException();
      }
      if (((pCVar1->fields).Animation != (Characters_AnimationHandler_o *)0x0) &&
         ((__this->fields).appliedRenderStateVersion !=
          (((pCVar1->fields).Animation)->fields)._renderStateVersion)) {
        pCVar1 = (__this->fields).owner;
        (__this->fields).appliedRenderStateVersion =
             (((((__this->fields).owner)->fields).Animation)->fields)._renderStateVersion;
        if ((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
           (__this_00 = (pCVar1->fields).Animation, __this_00 == (Characters_AnimationHandler_o *)0x0))
        goto label_181dac0ec;
        Characters_AnimationHandler__ApplyRenderState_21069e0
                  (__this_00,(UnityEngine_Renderer_o *)(__this->fields).ownRenderer,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// ParentFollow$$.ctor
// il2cpp: void ParentFollow___ctor (ParentFollow_o* __this, const MethodInfo* method);
// 0x181dac4f0

void ParentFollow___ctor(ParentFollow_o *__this,MethodInfo *method)

{
  (__this->fields).appliedRenderStateVersion = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


