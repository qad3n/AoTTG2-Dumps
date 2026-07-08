// Type: GetParentPosition
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Assembly-CSharp/GetParentPosition.cs
// Prior source: NEW in this update
// --------------------------------

// GetParentPosition$$Update
// il2cpp: void GetParentPosition__Update (GetParentPosition_o* __this, const MethodInfo* method);
// 0x23ed270

void GetParentPosition__Update(GetParentPosition_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *pUVar2;
  bool_conflict bVar3;
  UnityEngine_Transform_o *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  undefined8 local_28;
  
  if (DAT_056fdd13 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"_Parent_World_Position");
    il2cpp_init_method_metadata(&"_Parent_Scale");
    DAT_056fdd13 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      local_28 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar7 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((pUVar4 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_023ed4ad;
      UVar9 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      fVar7 = UVar9.fields.z;
      local_28 = UVar9.fields._0_8_;
    }
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar5 = (float)uVar1;
        fVar6 = (float)((ulong)uVar1 >> 0x20);
        fVar8 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        pUVar2 = (__this->fields).material;
      }
      else {
        pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((pUVar4 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0),
           pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_023ed4ad;
        UVar9 = UnityEngine_Transform__get_lossyScale(pUVar4,(MethodInfo *)0x0);
        fVar8 = UVar9.fields.z;
        fVar5 = UVar9.fields.x;
        fVar6 = UVar9.fields.y;
        pUVar2 = (__this->fields).material;
      }
      if (pUVar2 != (UnityEngine_Material_o *)0x0) {
        value.fields.y = fVar6;
        value.fields.x = fVar5;
        value.fields.z = fVar8;
        value.fields.w = 0.0;
        UnityEngine_Material__SetVector(pUVar2,"_Parent_Scale",value,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).material;
        if (pUVar2 != (UnityEngine_Material_o *)0x0) {
          value_00.fields.z = fVar7;
          value_00.fields.x = (float)(undefined4)local_28;
          value_00.fields.y = (float)local_28._4_4_;
          value_00.fields.w = 0.0;
          UnityEngine_Material__SetVector(pUVar2,"_Parent_World_Position",value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_023ed4ad:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GetParentPosition$$.ctor
// il2cpp: void GetParentPosition___ctor (GetParentPosition_o* __this, const MethodInfo* method);
// 0x23ed4c0

void GetParentPosition___ctor(GetParentPosition_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


