// Type: Characters.RechargeableUseable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/RechargeableUseable.cs
// Prior source: NEW in this update
// --------------------------------

// Characters.RechargeableUseable$$.ctor
// il2cpp: void Characters_RechargeableUseable___ctor (Characters_RechargeableUseable_o* __this, Characters_BaseCharacter_o* owner, float reduceCooldownAmount, const MethodInfo* method);
// 0x3f9c980

void Characters_RechargeableUseable___ctor
               (Characters_RechargeableUseable_o *__this,Characters_BaseCharacter_o *owner,
               float reduceCooldownAmount,MethodInfo *method)

{
  (__this->fields)._lastUseTime = -1000.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._owner = owner;
  il2cpp_runtime_glue(&(__this->fields)._owner,owner);
  (__this->fields).Cooldown = 0.0;
  (__this->fields).UsesLeft = -1;
  (__this->fields).MaxUses = -1;
  (__this->fields).ReduceCooldownAmount = reduceCooldownAmount;
  return;
}


// Characters.RechargeableUseable$$ReduceCooldown
// il2cpp: void Characters_RechargeableUseable__ReduceCooldown (Characters_RechargeableUseable_o* __this, const MethodInfo* method);
// 0x3f9c9e0

void Characters_RechargeableUseable__ReduceCooldown
               (Characters_RechargeableUseable_o *__this,MethodInfo *method)

{
  (__this->fields)._lastUseTime =
       (__this->fields)._lastUseTime - (__this->fields).ReduceCooldownAmount;
  return;
}


