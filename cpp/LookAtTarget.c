// Type: LookAtTarget
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/LookAtTarget.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Example/Scripts/LookAtTarget.cs
// --------------------------------

// LookAtTarget$$Update
// il2cpp: void LookAtTarget__Update (LookAtTarget_o* __this, const MethodInfo* method);
// 0x405f510

void LookAtTarget__Update(LookAtTarget_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_Transform_o *pUVar4;
  LookAtTarget_o *__this_00;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  float local_28;
  float fStack_24;
  float local_18;
  float fStack_14;
  
  pUVar4 = (__this->fields)._target;
  __this_00 = (LookAtTarget_o *)0x0;
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    uVar2 = (__this->fields)._lookAtTarget.fields.x;
    uVar3 = (__this->fields)._lookAtTarget.fields.y;
    fVar1 = (__this->fields)._lookAtTarget.fields.z;
    UVar7 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar5 = fVar5 * (__this->fields)._speed;
    fVar6 = 1.0;
    if (fVar5 <= 1.0) {
      fVar6 = fVar5;
    }
    fVar6 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar6);
    local_28 = UVar7.fields.x;
    fStack_24 = UVar7.fields.y;
    (__this->fields)._lookAtTarget.fields.x = fVar6 * (local_28 - (float)uVar2) + (float)uVar2;
    (__this->fields)._lookAtTarget.fields.y = fVar6 * (fStack_24 - (float)uVar3) + (float)uVar3;
    (__this->fields)._lookAtTarget.fields.z = (UVar7.fields.z - fVar1) * fVar6 + fVar1;
    __this_00 = __this;
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__LookAt_4e0aa40
                (pUVar4,(UnityEngine_Vector3_o)(__this->fields)._lookAtTarget.fields,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  (__this_00->fields)._speed = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// LookAtTarget$$.ctor
// il2cpp: void LookAtTarget___ctor (LookAtTarget_o* __this, const MethodInfo* method);
// 0x405f5e0

void LookAtTarget___ctor(LookAtTarget_o *__this,MethodInfo *method)

{
  (__this->fields)._speed = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


