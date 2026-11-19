// Type: MouseMove
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/MouseMove.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Example/Scripts/MouseMove.cs
// --------------------------------

// MouseMove$$Start
// il2cpp: void MouseMove__Start (MouseMove_o* __this, const MethodInfo* method);
// 0x5849200

void MouseMove__Start(MouseMove_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  (__this->fields)._originalPos.fields = UVar1;
  return;
}


// MouseMove$$Update
// il2cpp: void MouseMove__Update (MouseMove_o* __this, const MethodInfo* method);
// 0x5849230

void MouseMove__Update(MouseMove_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int32_t iVar3;
  int32_t iVar4;
  UnityEngine_Transform_o *__this_00;
  float fVar5;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  UnityEngine_Vector3_o UVar8;
  
  UVar8 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  auVar6._8_4_ = extraout_XMM0_Dc;
  auVar6._0_8_ = UVar8.fields._0_8_;
  auVar6._12_4_ = extraout_XMM0_Dd;
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar4 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar5 = (__this->fields)._sensitivity;
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar5 = fVar5 + fVar5;
  UVar8.fields.z = UVar8.fields.z * fVar5 + (__this->fields)._originalPos.fields.z;
  auVar7._0_4_ = (float)iVar3;
  auVar7._4_4_ = (float)iVar4;
  auVar7._8_8_ = 0;
  auVar6 = divps(auVar6,auVar7);
  uVar1 = (__this->fields)._originalPos.fields.x;
  uVar2 = (__this->fields)._originalPos.fields.y;
  UVar8.fields.x = fVar5 * (auVar6._0_4_ + -0.5) + (float)uVar1;
  UVar8.fields.y = fVar5 * (auVar6._4_4_ + -0.5) + (float)uVar2;
  UnityEngine_Transform__set_position(__this_00,UVar8,(MethodInfo *)0x0);
  return;
}


// MouseMove$$.ctor
// il2cpp: void MouseMove___ctor (MouseMove_o* __this, const MethodInfo* method);
// 0x58492e0

void MouseMove___ctor(MouseMove_o *__this,MethodInfo *method)

{
  (__this->fields)._sensitivity = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


