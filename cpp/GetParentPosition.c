// Type: GetParentPosition
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Assembly-CSharp/GetParentPosition.cs
// Prior real C# source: none
// --------------------------------

// GetParentPosition$$OnEnable
// il2cpp: void GetParentPosition__OnEnable (GetParentPosition_o* __this, const MethodInfo* method);
// 0x323c330

void GetParentPosition__OnEnable(GetParentPosition_o *__this,MethodInfo *method)

{
  UnityEngine_MaterialPropertyBlock_o **targetAddress;
  UnityEngine_Renderer_o *pUVar1;
  UnityEngine_MaterialPropertyBlock_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0753e4b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MaterialPropertyBlock);
    Il2CppMethodInitialized_0753e4b3 = '\x01';
  }
  pUVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Renderer);
  (__this->fields)._renderer = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._renderer);
  method_00 = extraout_RDX;
  if ((__this->fields)._properties == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
    targetAddress = &(__this->fields)._properties;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
    UnityEngine_MaterialPropertyBlock___ctor(__this_00,(MethodInfo *)0x0);
    *targetAddress = __this_00;
    Il2CppCodeGenWriteBarrier(targetAddress);
    method_00 = extraout_RDX_00;
  }
  GetParentPosition__UpdateProperties(__this,true,method_00);
  return;
}


// GetParentPosition$$LateUpdate
// il2cpp: void GetParentPosition__LateUpdate (GetParentPosition_o* __this, const MethodInfo* method);
// 0x323c6b0

void GetParentPosition__LateUpdate(GetParentPosition_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  GetParentPosition__UpdateProperties(__this,false,in_RDX);
  return;
}


// GetParentPosition$$UpdateProperties
// il2cpp: void GetParentPosition__UpdateProperties (GetParentPosition_o* __this, bool force, const MethodInfo* method);
// 0x323c3d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x323c479: jmp 0x323c4c7
// asm:   0x323c507: jmp 0x323c5ce

void GetParentPosition__UpdateProperties(GetParentPosition_o *__this,bool force,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint32_t uVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  UnityEngine_Renderer_o *pUVar7;
  UnityEngine_MaterialPropertyBlock_o *pUVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  UnityEngine_Transform_o *pUVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  float fStack_58;
  float fStack_54;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_0753e4b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GetParentPosition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0753e4b4 = '\x01';
  }
  pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
    pUVar12 = UnityEngine_Transform__get_parent(pUVar12,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar11) {
      if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_0323c6a3;
      UVar16 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
      fVar13 = UVar16.fields.z;
      uVar9 = UVar16.fields._0_8_;
      uVar5 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar9._0_4_ = (pUVar6->zeroVector).fields.x;
      uVar9._4_4_ = (pUVar6->zeroVector).fields.y;
      fVar13 = (pUVar6->zeroVector).fields.z;
      uVar5 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    }
    if (uVar5 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    fStack_38 = (float)uVar9;
    fStack_34 = (float)((ulong)uVar9 >> 0x20);
    if (bVar11) {
      if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_0323c6a3;
      UVar16 = UnityEngine_Transform__get_lossyScale(pUVar12,(MethodInfo *)0x0);
      fVar14 = UVar16.fields.z;
      uVar10 = UVar16.fields._0_8_;
    }
    else {
      if (Il2CppMethodInitialized_0753e4b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b7 = '\x01';
      }
      pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar10._0_4_ = (pUVar6->oneVector).fields.x;
      uVar10._4_4_ = (pUVar6->oneVector).fields.y;
      fVar14 = (pUVar6->oneVector).fields.z;
    }
    if ((!force) &&
       (uVar1 = (__this->fields)._lastPosition.fields.x, uVar3 = (__this->fields)._lastPosition.fields.y,
       fVar15 = fVar13 - (__this->fields)._lastPosition.fields.z,
       (fStack_34 - (float)uVar3) * (fStack_34 - (float)uVar3) +
       (fStack_38 - (float)uVar1) * (fStack_38 - (float)uVar1) + fVar15 * fVar15 < 9.9999994e-11)) {
      uVar2 = (__this->fields)._lastScale.fields.x;
      uVar4 = (__this->fields)._lastScale.fields.y;
      fStack_58 = (float)uVar10;
      fStack_54 = (float)((ulong)uVar10 >> 0x20);
      fVar15 = fVar14 - (__this->fields)._lastScale.fields.z;
      if ((fStack_54 - (float)uVar4) * (fStack_54 - (float)uVar4) +
          (fStack_58 - (float)uVar2) * (fStack_58 - (float)uVar2) + fVar15 * fVar15 < 9.9999994e-11) {
        return;
      }
    }
    pUVar7 = (__this->fields)._renderer;
    if (pUVar7 != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__GetPropertyBlock(pUVar7,(__this->fields)._properties,(MethodInfo *)0x0);
      pUVar8 = (__this->fields)._properties;
      if ((TypeInfo_GetParentPosition->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GetParentPosition);
      }
      if (pUVar8 != (UnityEngine_MaterialPropertyBlock_o *)0x0) {
        value.fields.z = fVar14;
        value.fields.x = (float)(int)uVar10;
        value.fields.y = (float)(int)((ulong)uVar10 >> 0x20);
        value.fields.w = 0.0;
        UnityEngine_MaterialPropertyBlock__SetVector_68d8740
                  (pUVar8,TypeInfo_GetParentPosition->static_fields->ParentScale,value,(MethodInfo *)0x0);
        pUVar8 = (__this->fields)._properties;
        if (pUVar8 != (UnityEngine_MaterialPropertyBlock_o *)0x0) {
          value_00.fields.z = fVar13;
          value_00.fields.x = (float)(int)uVar9;
          value_00.fields.y = (float)(int)((ulong)uVar9 >> 0x20);
          value_00.fields.w = 0.0;
          UnityEngine_MaterialPropertyBlock__SetVector_68d8740
                    (pUVar8,TypeInfo_GetParentPosition->static_fields->ParentWorldPosition,value_00,
                     (MethodInfo *)0x0);
          pUVar7 = (__this->fields)._renderer;
          if (pUVar7 != (UnityEngine_Renderer_o *)0x0) {
            UnityEngine_Renderer__SetPropertyBlock(pUVar7,(__this->fields)._properties,(MethodInfo *)0x0);
            (__this->fields)._lastPosition.fields.x = (float)(int)uVar9;
            (__this->fields)._lastPosition.fields.y = (float)(int)((ulong)uVar9 >> 0x20);
            (__this->fields)._lastPosition.fields.z = fVar13;
            (__this->fields)._lastScale.fields.x = (float)(int)uVar10;
            (__this->fields)._lastScale.fields.y = (float)(int)((ulong)uVar10 >> 0x20);
            (__this->fields)._lastScale.fields.z = fVar14;
            return;
          }
        }
      }
    }
  }
label_0323c6a3:
  ThrowNullReferenceException();
}


// GetParentPosition$$.ctor
// il2cpp: void GetParentPosition___ctor (GetParentPosition_o* __this, const MethodInfo* method);
// 0x323c6c0

void GetParentPosition___ctor(GetParentPosition_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// GetParentPosition$$.cctor
// il2cpp: void GetParentPosition___cctor (const MethodInfo* method);
// 0x323c6d0

void GetParentPosition___cctor(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_0753e4b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GetParentPosition);
    il2cpp_codegen_initialize_runtime_metadata(&"_Parent_World_Position");
    il2cpp_codegen_initialize_runtime_metadata(&"_Parent_Scale");
    Il2CppMethodInitialized_0753e4b5 = '\x01';
  }
  iVar1 = UnityEngine_Shader__PropertyToID("_Parent_Scale",(MethodInfo *)0x0);
  TypeInfo_GetParentPosition->static_fields->ParentScale = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_Parent_World_Position",(MethodInfo *)0x0);
  TypeInfo_GetParentPosition->static_fields->ParentWorldPosition = iVar1;
  return;
}


