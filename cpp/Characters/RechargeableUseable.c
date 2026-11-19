// Type: Characters.RechargeableUseable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/RechargeableUseable.cs
// Prior real C# source: none
// --------------------------------

// Characters.RechargeableUseable$$.ctor
// il2cpp: void Characters_RechargeableUseable___ctor (Characters_RechargeableUseable_o* __this, Characters_BaseCharacter_o* owner, float reduceCooldownAmount, const MethodInfo* method);
// 0x5be1980

void Characters_RechargeableUseable___ctor
               (Characters_RechargeableUseable_o *__this,Characters_BaseCharacter_o *owner,
               float reduceCooldownAmount,MethodInfo *method)

{
  Characters_ExtendedUseable___ctor((Characters_ExtendedUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).ReduceCooldownAmount = reduceCooldownAmount;
  return;
}


// Characters.RechargeableUseable$$ReduceCooldown
// il2cpp: void Characters_RechargeableUseable__ReduceCooldown (Characters_RechargeableUseable_o* __this, const MethodInfo* method);
// 0x5be19b0

void Characters_RechargeableUseable__ReduceCooldown
               (Characters_RechargeableUseable_o *__this,MethodInfo *method)

{
  (__this->fields)._lastUseTime = (__this->fields)._lastUseTime - (__this->fields).ReduceCooldownAmount;
  return;
}


