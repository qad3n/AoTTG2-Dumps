// Type: LookAtTarget
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/LookAtTarget.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Example/Scripts/LookAtTarget.cs
// --------------------------------

// LookAtTarget$$Update
// il2cpp: void LookAtTarget__Update (LookAtTarget_o* __this, const MethodInfo* method);
// 0x181da3ef0

void LookAtTarget__Update(LookAtTarget_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  float fVar9;
  UnityEngine_Vector3_Fields local_78 [9];
  
  pUVar8 = (__this->fields)._target;
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    fVar1 = (__this->fields)._lookAtTarget.fields.x;
    fVar2 = (__this->fields)._lookAtTarget.fields.y;
    fVar3 = (__this->fields)._lookAtTarget.fields.z;
    pUVar7 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)local_78,pUVar8,(MethodInfo *)0x0);
    fVar4 = (pUVar7->fields).x;
    fVar5 = (pUVar7->fields).y;
    fVar6 = (pUVar7->fields).z;
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar9 = fVar9 * (__this->fields)._speed;
    if (fVar9 < 0.0) {
      fVar9 = 0.0;
    }
    else if (1.0 < fVar9) {
      fVar9 = 1.0;
    }
    (__this->fields)._lookAtTarget.fields.x = (fVar4 - fVar1) * fVar9 + fVar1;
    (__this->fields)._lookAtTarget.fields.y = (fVar5 - fVar2) * fVar9 + fVar2;
    (__this->fields)._lookAtTarget.fields.z = (fVar6 - fVar3) * fVar9 + fVar3;
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      local_78[0].z = (__this->fields)._lookAtTarget.fields.z;
      local_78[0].x = (__this->fields)._lookAtTarget.fields.x;
      local_78[0].y = (__this->fields)._lookAtTarget.fields.y;
      UnityEngine_Transform__LookAt_2f599f0(pUVar8,(UnityEngine_Vector3_o *)local_78,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// LookAtTarget$$.ctor
// il2cpp: void LookAtTarget___ctor (LookAtTarget_o* __this, const MethodInfo* method);
// 0x181da4020

void LookAtTarget___ctor(LookAtTarget_o *__this,MethodInfo *method)

{
  (__this->fields)._speed = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


