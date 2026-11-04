// Type: GetParentPosition
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Assembly-CSharp/GetParentPosition.cs
// Prior real C# source: none
// --------------------------------

// GetParentPosition$$OnEnable
// il2cpp: void GetParentPosition__OnEnable (GetParentPosition_o* __this, const MethodInfo* method);
// 0x1805280b0

void GetParentPosition__OnEnable(GetParentPosition_o *__this,MethodInfo *method)

{
  UnityEngine_Renderer_o *value;
  UnityEngine_MaterialPropertyBlock_o *__this_00;
  
  if (Il2CppMethodInitialized_18433dbe7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MaterialPropertyBlock);
    Il2CppMethodInitialized_18433dbe7 = '\x01';
  }
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Renderer);
  (__this->fields)._renderer = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._renderer,value);
  if ((__this->fields)._properties == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
    UnityEngine_MaterialPropertyBlock___ctor(__this_00,(MethodInfo *)0x0);
    (__this->fields)._properties = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._properties,__this_00);
  }
  GetParentPosition__UpdateProperties(__this,true,(MethodInfo *)0x0);
  return;
}


// GetParentPosition$$LateUpdate
// il2cpp: void GetParentPosition__LateUpdate (GetParentPosition_o* __this, const MethodInfo* method);
// 0x1805280a0

void GetParentPosition__LateUpdate(GetParentPosition_o *__this,MethodInfo *method)

{
  GetParentPosition__UpdateProperties(__this,false,(MethodInfo *)0x0);
  return;
}


// GetParentPosition$$UpdateProperties
// il2cpp: void GetParentPosition__UpdateProperties (GetParentPosition_o* __this, bool force, const MethodInfo* method);
// 0x180528150

void GetParentPosition__UpdateProperties(GetParentPosition_o *__this,bool force,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  UnityEngine_Vector3_StaticFields *pUVar9;
  UnityEngine_Renderer_o *pUVar10;
  UnityEngine_MaterialPropertyBlock_o *pUVar11;
  bool bVar12;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Vector3_o *pUVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector4_o local_78 [7];
  
  if (Il2CppMethodInitialized_18433dbe8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GetParentPosition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18433dbe8 = '\x01';
  }
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
    pUVar13 = UnityEngine_Transform__GetParent(pUVar13,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar12) {
      if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_1805284ad;
      pUVar14 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_88,pUVar13,(MethodInfo *)0x0);
      fVar1 = (pUVar14->fields).x;
      fVar5 = (pUVar14->fields).y;
      fVar16 = (pUVar14->fields).z;
    }
    else {
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar2 = (pUVar9->zeroVector).fields.x;
      uVar6 = (pUVar9->zeroVector).fields.y;
      fVar16 = (pUVar9->zeroVector).fields.z;
      fVar1 = (float)uVar2;
      fVar5 = (float)uVar6;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar12) {
      if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_1805284ad;
      pUVar14 = UnityEngine_Transform__get_lossyScale
                          ((UnityEngine_Vector3_o *)local_78,pUVar13,(MethodInfo *)0x0);
      fVar3 = (pUVar14->fields).x;
      fVar7 = (pUVar14->fields).y;
      fVar15 = (pUVar14->fields).z;
    }
    else {
      if (Il2CppMethodInitialized_18433dbeb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbeb = '\x01';
      }
      pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar4 = (pUVar9->oneVector).fields.x;
      uVar8 = (pUVar9->oneVector).fields.y;
      fVar15 = (pUVar9->oneVector).fields.z;
      fVar3 = (float)uVar4;
      fVar7 = (float)uVar8;
    }
    local_88.y = fVar7;
    local_88.x = fVar3;
    if (((!force) &&
        (fVar18 = fVar1 - (__this->fields)._lastPosition.fields.x,
        fVar17 = fVar16 - (__this->fields)._lastPosition.fields.z,
        fVar19 = fVar5 - (__this->fields)._lastPosition.fields.y,
        fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17 < 9.9999994e-11)) &&
       (fVar18 = fVar3 - (__this->fields)._lastScale.fields.x,
       fVar19 = fVar7 - (__this->fields)._lastScale.fields.y,
       fVar17 = fVar15 - (__this->fields)._lastScale.fields.z,
       fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17 < 9.9999994e-11)) {
      return;
    }
    pUVar10 = (__this->fields)._renderer;
    if (pUVar10 != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__GetPropertyBlock(pUVar10,(__this->fields)._properties,(MethodInfo *)0x0);
      pUVar11 = (__this->fields)._properties;
      if ((TypeInfo_GetParentPosition->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GetParentPosition);
      }
      if (pUVar11 != (UnityEngine_MaterialPropertyBlock_o *)0x0) {
        local_78[0].fields.w = 0.0;
        local_78[0].fields.x = fVar3;
        local_78[0].fields.y = fVar7;
        local_78[0].fields.z = fVar15;
        UnityEngine_MaterialPropertyBlock__SetVector_2ee0d90
                  (pUVar11,TypeInfo_GetParentPosition->static_fields->ParentScale,local_78,(MethodInfo *)0x0);
        pUVar11 = (__this->fields)._properties;
        if (pUVar11 != (UnityEngine_MaterialPropertyBlock_o *)0x0) {
          local_78[0].fields.w = 0.0;
          local_78[0].fields.x = fVar1;
          local_78[0].fields.y = fVar5;
          local_78[0].fields.z = fVar16;
          UnityEngine_MaterialPropertyBlock__SetVector_2ee0d90
                    (pUVar11,TypeInfo_GetParentPosition->static_fields->ParentWorldPosition,local_78,
                     (MethodInfo *)0x0);
          pUVar10 = (__this->fields)._renderer;
          if (pUVar10 != (UnityEngine_Renderer_o *)0x0) {
            UnityEngine_Renderer__SetPropertyBlock(pUVar10,(__this->fields)._properties,(MethodInfo *)0x0);
            (__this->fields)._lastPosition.fields.x = fVar1;
            (__this->fields)._lastPosition.fields.y = fVar5;
            (__this->fields)._lastScale.fields.x = fVar3;
            (__this->fields)._lastScale.fields.y = fVar7;
            (__this->fields)._lastScale.fields.z = fVar15;
            (__this->fields)._lastPosition.fields.z = fVar16;
            return;
          }
        }
      }
    }
  }
label_1805284ad:
  ThrowNullReferenceException();
}


// GetParentPosition$$.ctor
// il2cpp: void GetParentPosition___ctor (GetParentPosition_o* __this, const MethodInfo* method);
// 0x180528540

void GetParentPosition___ctor(GetParentPosition_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// GetParentPosition$$.cctor
// il2cpp: void GetParentPosition___cctor (const MethodInfo* method);
// 0x1805284c0

void GetParentPosition___cctor(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_18433dbe9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GetParentPosition);
    il2cpp_codegen_initialize_runtime_metadata(&"_Parent_World_Position");
    il2cpp_codegen_initialize_runtime_metadata(&"_Parent_Scale");
    Il2CppMethodInitialized_18433dbe9 = '\x01';
  }
  iVar1 = UnityEngine_Shader__PropertyToID("_Parent_Scale",(MethodInfo *)0x0);
  TypeInfo_GetParentPosition->static_fields->ParentScale = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_Parent_World_Position",(MethodInfo *)0x0);
  TypeInfo_GetParentPosition->static_fields->ParentWorldPosition = iVar1;
  return;
}


