// Type: MouseMove
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MouseMove.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Example/Scripts/MouseMove.cs
// --------------------------------

// MouseMove$$Start
// il2cpp: void MouseMove__Start (MouseMove_o* __this, const MethodInfo* method);
// 0x181da84d0

void MouseMove__Start(MouseMove_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Vector3_o local_18;
  
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__get_position(&local_18,__this_00,(MethodInfo *)0x0);
    fVar2 = (pUVar3->fields).y;
    fVar1 = (pUVar3->fields).z;
    (__this->fields)._originalPos.fields.x = (pUVar3->fields).x;
    (__this->fields)._originalPos.fields.y = fVar2;
    (__this->fields)._originalPos.fields.z = fVar1;
    return;
  }
  ThrowNullReferenceException();
}


// MouseMove$$Update
// il2cpp: void MouseMove__Update (MouseMove_o* __this, const MethodInfo* method);
// 0x181da8510

void MouseMove__Update(MouseMove_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int32_t iVar4;
  int32_t iVar5;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  float fVar7;
  UnityEngine_Vector3_o local_58 [6];
  
  pUVar6 = UnityEngine_Input__get_mousePosition(local_58,(MethodInfo *)0x0);
  fVar1 = (pUVar6->fields).x;
  fVar2 = (pUVar6->fields).y;
  fVar3 = (pUVar6->fields).z;
  iVar4 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar5 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar7 = (__this->fields)._sensitivity;
  fVar7 = fVar7 + fVar7;
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    local_58[0].fields.z = fVar3 * fVar7 + (__this->fields)._originalPos.fields.z;
    local_58[0].fields.x = (fVar1 / (float)iVar4 - 0.5) * fVar7 + (__this->fields)._originalPos.fields.x;
    local_58[0].fields.y = (fVar2 / (float)iVar5 - 0.5) * fVar7 + (__this->fields)._originalPos.fields.y;
    UnityEngine_Transform__set_position(__this_00,local_58,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// MouseMove$$.ctor
// il2cpp: void MouseMove___ctor (MouseMove_o* __this, const MethodInfo* method);
// 0x181da8600

void MouseMove___ctor(MouseMove_o *__this,MethodInfo *method)

{
  (__this->fields)._sensitivity = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


