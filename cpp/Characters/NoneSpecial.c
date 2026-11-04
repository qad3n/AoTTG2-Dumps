// Type: Characters.NoneSpecial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/NoneSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/NoneSpecial.cs
// --------------------------------

// Characters.NoneSpecial$$.ctor
// il2cpp: void Characters_NoneSpecial___ctor (Characters_NoneSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x182171670

void Characters_NoneSpecial___ctor
               (Characters_NoneSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_SimpleUseable___ctor((Characters_SimpleUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 0.0;
  return;
}


// Characters.NoneSpecial$$CanUse
// il2cpp: bool Characters_NoneSpecial__CanUse (Characters_NoneSpecial_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_NoneSpecial__CanUse(Characters_NoneSpecial_o* __this, MethodInfo* method)

{
  return false;
}


// Characters.NoneSpecial$$Activate
// il2cpp: void Characters_NoneSpecial__Activate (Characters_NoneSpecial_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_NoneSpecial__Activate(Characters_NoneSpecial_o* __this, MethodInfo* method)

{
  return;
}


// Characters.NoneSpecial$$Deactivate
// il2cpp: void Characters_NoneSpecial__Deactivate (Characters_NoneSpecial_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_NoneSpecial__Deactivate(Characters_NoneSpecial_o* __this, MethodInfo* method)

{
  return;
}


