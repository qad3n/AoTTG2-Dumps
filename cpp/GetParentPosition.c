// Type: GetParentPosition
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Assembly-CSharp/GetParentPosition.cs
// Prior real C# source: none
// --------------------------------

// GetParentPosition$$Update
// il2cpp: void GetParentPosition__Update (GetParentPosition_o* __this, const MethodInfo* method);
// 0x242b380

void GetParentPosition__Update(GetParentPosition_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  GetParentPosition_o *pGVar4;
  GetParentPosition_o *__this_00;
  UnityEngine_Material_o *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector3_o UVar10;
  undefined8 local_28;
  
  if (g_data_057a65d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_Parent_World_Position");
    il2cpp_runtime_helper_023445d0(&"_Parent_Scale");
    g_data_057a65d3 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  __this_00 = __this;
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_0242b5bd;
  pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    local_28 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar8 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    __this_00 = __this;
    pGVar4 = (GetParentPosition_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pGVar4 == (GetParentPosition_o *)0x0) goto label_0242b5bd;
    pUVar3 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pGVar4,(MethodInfo *)0x0);
    __this_00 = pGVar4;
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_0242b5bd;
    UVar10 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
    fVar8 = UVar10.fields.z;
    local_28 = UVar10.fields._0_8_;
  }
  __this_00 = __this;
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_0242b5bd;
  pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar6 = (float)uVar1;
    fVar7 = (float)((ulong)uVar1 >> 0x20);
    fVar9 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    pUVar5 = (__this->fields).material;
    __this_00 = (GetParentPosition_o *)0x0;
    if (pUVar5 == (UnityEngine_Material_o *)0x0) goto label_0242b5bd;
  }
  else {
    __this_00 = __this;
    pGVar4 = (GetParentPosition_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pGVar4 == (GetParentPosition_o *)0x0) goto label_0242b5bd;
    pUVar3 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pGVar4,(MethodInfo *)0x0);
    __this_00 = pGVar4;
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_0242b5bd;
    UVar10 = UnityEngine_Transform__get_lossyScale(pUVar3,(MethodInfo *)0x0);
    fVar9 = UVar10.fields.z;
    fVar6 = UVar10.fields.x;
    fVar7 = UVar10.fields.y;
    pUVar5 = (__this->fields).material;
    if (pUVar5 == (UnityEngine_Material_o *)0x0) {
      __this_00 = (GetParentPosition_o *)0x0;
      goto label_0242b5bd;
    }
  }
  value.fields.y = fVar7;
  value.fields.x = fVar6;
  value.fields.z = fVar9;
  value.fields.w = 0.0;
  UnityEngine_Material__SetVector(pUVar5,"_Parent_Scale",value,(MethodInfo *)0x0);
  pUVar5 = (__this->fields).material;
  __this_00 = (GetParentPosition_o *)0x0;
  if (pUVar5 != (UnityEngine_Material_o *)0x0) {
    value_00.fields.z = fVar8;
    value_00.fields.x = (float)(undefined4)local_28;
    value_00.fields.y = (float)local_28._4_4_;
    value_00.fields.w = 0.0;
    UnityEngine_Material__SetVector(pUVar5,"_Parent_World_Position",value_00,(MethodInfo *)0x0);
    return;
  }
label_0242b5bd:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// GetParentPosition$$.ctor
// il2cpp: void GetParentPosition___ctor (GetParentPosition_o* __this, const MethodInfo* method);
// 0x242b5d0

void GetParentPosition___ctor(GetParentPosition_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


