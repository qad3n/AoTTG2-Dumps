// Type: PatreonEffects.RoleSpriteDefinition
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/RoleSpriteDefinition.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.RoleSpriteDefinition$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteDefinition___ctor (PatreonEffects_RoleSpriteDefinition_o __this, System_String_o* roleName, int32_t spriteIndex, const MethodInfo* method);
// 0x43314b0

void PatreonEffects_RoleSpriteDefinition___ctor
               (PatreonEffects_RoleSpriteDefinition_o __this,System_String_o *roleName,int32_t spriteIndex,
               MethodInfo *method)

{
  (__this.fields.RoleName)->klass = __this.fields._8_8_;
  il2cpp_runtime_helper_022b4080();
  *(int *)&(__this.fields.RoleName)->monitor = (int)roleName;
  return;
}


