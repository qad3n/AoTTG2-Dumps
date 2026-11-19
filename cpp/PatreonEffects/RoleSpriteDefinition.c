// Type: PatreonEffects.RoleSpriteDefinition
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/RoleSpriteDefinition.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.RoleSpriteDefinition$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteDefinition___ctor (PatreonEffects_RoleSpriteDefinition_o __this, System_String_o* roleName, int32_t spriteIndex, const MethodInfo* method);
// 0x59c9cb0

void PatreonEffects_RoleSpriteDefinition___ctor
               (PatreonEffects_RoleSpriteDefinition_o *__this,System_String_o *roleName,int32_t spriteIndex,
               MethodInfo *method)

{
  (__this->fields).RoleName = roleName;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).SpriteIndex = spriteIndex;
  return;
}


