// Type: PatreonEffects.RoleSpriteDefinition
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/PatreonEffects/RoleSpriteDefinition.cs
// Prior source: NEW in this update
// --------------------------------

// PatreonEffects.RoleSpriteDefinition$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteDefinition___ctor (PatreonEffects_RoleSpriteDefinition_o __this, System_String_o* roleName, int32_t spriteIndex, const MethodInfo* method);
// 0x403c1e0

void PatreonEffects_RoleSpriteDefinition___ctor
               (PatreonEffects_RoleSpriteDefinition_o __this,System_String_o *roleName,
               int32_t spriteIndex,MethodInfo *method)

{
  (__this.fields.RoleName)->klass = __this.fields._8_8_;
  il2cpp_runtime_glue();
  *(int *)&(__this.fields.RoleName)->monitor = (int)roleName;
  return;
}


