// Type: Characters.UnarmedWeapon
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Characters/UnarmedWeapon.cs
// Prior real C# source: none
// --------------------------------

// Characters.UnarmedWeapon$$.ctor
// il2cpp: void Characters_UnarmedWeapon___ctor (Characters_UnarmedWeapon_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x182179b40

void Characters_UnarmedWeapon___ctor
               (Characters_UnarmedWeapon_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_BaseUseable___ctor((Characters_BaseUseable_o *)__this,owner,0.0,-1,(MethodInfo *)0x0);
  return;
}


// Characters.UnarmedWeapon$$CanUse
// il2cpp: bool Characters_UnarmedWeapon__CanUse (Characters_UnarmedWeapon_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_UnarmedWeapon__CanUse(Characters_UnarmedWeapon_o* __this, MethodInfo* method)

{
  return false;
}


