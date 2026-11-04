// Type: Characters.RechargeableUseable
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/RechargeableUseable.cs
// Prior real C# source: none
// --------------------------------

// Characters.RechargeableUseable$$.ctor
// il2cpp: void Characters_RechargeableUseable___ctor (Characters_RechargeableUseable_o* __this, Characters_BaseCharacter_o* owner, float reduceCooldownAmount, const MethodInfo* method);
// 0x18211cf80

void Characters_RechargeableUseable___ctor
               (Characters_RechargeableUseable_o *__this,Characters_BaseCharacter_o *owner,
               float reduceCooldownAmount,MethodInfo *method)

{
  (__this->fields)._lastUseTime = -1000.0;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner,owner);
  (__this->fields).ReduceCooldownAmount = reduceCooldownAmount;
  (__this->fields).Cooldown = 0.0;
  (__this->fields).UsesLeft = -1;
  (__this->fields).MaxUses = -1;
  return;
}


// Characters.RechargeableUseable$$ReduceCooldown
// il2cpp: void Characters_RechargeableUseable__ReduceCooldown (Characters_RechargeableUseable_o* __this, const MethodInfo* method);
// 0x18211cf70

void Characters_RechargeableUseable__ReduceCooldown
               (Characters_RechargeableUseable_o *__this,MethodInfo *method)

{
  (__this->fields)._lastUseTime = (__this->fields)._lastUseTime - (__this->fields).ReduceCooldownAmount;
  return;
}


