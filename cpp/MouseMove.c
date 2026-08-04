// Type: MouseMove
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MouseMove.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Example/Scripts/MouseMove.cs
// --------------------------------

// MouseMove$$Start
// il2cpp: void MouseMove__Start (MouseMove_o* __this, const MethodInfo* method);
// 0x405f5f0

void MouseMove__Start(MouseMove_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int32_t iVar3;
  int32_t iVar4;
  UnityEngine_Transform_o *pUVar5;
  MouseMove_o *__this_00;
  MouseMove_o *__this_01;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o value;
  float local_30;
  float fStack_2c;
  
  __this_00 = __this;
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    UVar7 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    (__this->fields)._originalPos.fields.x = (float)(int)UVar7.fields._0_8_;
    (__this->fields)._originalPos.fields.y = (float)(int)((ulong)UVar7.fields._0_8_ >> 0x20);
    (__this->fields)._originalPos.fields.z = UVar7.fields.z;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UVar7 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar4 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar6 = (__this_00->fields)._sensitivity;
  __this_01 = __this_00;
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    fVar6 = fVar6 + fVar6;
    uVar1 = (__this_00->fields)._originalPos.fields.x;
    uVar2 = (__this_00->fields)._originalPos.fields.y;
    local_30 = UVar7.fields.x;
    fStack_2c = UVar7.fields.y;
    value.fields.x = (local_30 / (float)iVar3 + -0.5) * fVar6 + (float)uVar1;
    value.fields.z = UVar7.fields.z * fVar6 + (__this_00->fields)._originalPos.fields.z;
    value.fields.y = (fStack_2c / (float)iVar4 + -0.5) * fVar6 + (float)uVar2;
    UnityEngine_Transform__set_position(pUVar5,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (__this_01->fields)._sensitivity = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// MouseMove$$Update
// il2cpp: void MouseMove__Update (MouseMove_o* __this, const MethodInfo* method);
// 0x405f620

void MouseMove__Update(MouseMove_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int32_t iVar3;
  int32_t iVar4;
  UnityEngine_Transform_o *__this_00;
  MouseMove_o *__this_01;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o value;
  float fStack_28;
  float fStack_24;
  
  UVar6 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar4 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar5 = (__this->fields)._sensitivity;
  __this_01 = __this;
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    fVar5 = fVar5 + fVar5;
    uVar1 = (__this->fields)._originalPos.fields.x;
    uVar2 = (__this->fields)._originalPos.fields.y;
    fStack_28 = UVar6.fields.x;
    fStack_24 = UVar6.fields.y;
    value.fields.x = (fStack_28 / (float)iVar3 + -0.5) * fVar5 + (float)uVar1;
    value.fields.z = UVar6.fields.z * fVar5 + (__this->fields)._originalPos.fields.z;
    value.fields.y = (fStack_24 / (float)iVar4 + -0.5) * fVar5 + (float)uVar2;
    UnityEngine_Transform__set_position(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (__this_01->fields)._sensitivity = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// MouseMove$$.ctor
// il2cpp: void MouseMove___ctor (MouseMove_o* __this, const MethodInfo* method);
// 0x405f6f0

void MouseMove___ctor(MouseMove_o *__this,MethodInfo *method)

{
  (__this->fields)._sensitivity = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


