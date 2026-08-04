// Type: Characters.ShifterSounds
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/ShifterSounds.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/ShifterSounds.cs
// --------------------------------

// Characters.ShifterSounds$$.ctor
// il2cpp: void Characters_ShifterSounds___ctor (Characters_ShifterSounds_o* __this, const MethodInfo* method);
// 0x4304780

void Characters_ShifterSounds___ctor(Characters_ShifterSounds_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.ShifterSounds$$.cctor
// il2cpp: void Characters_ShifterSounds___cctor (const MethodInfo* method);
// 0x4304790

void Characters_ShifterSounds___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057adf4a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    il2cpp_runtime_helper_023445d0(&"ColossalSteam1");
    il2cpp_runtime_helper_023445d0(&"ErenRoar");
    il2cpp_runtime_helper_023445d0(&"AnnieRoar");
    il2cpp_runtime_helper_023445d0(&"ColossalSteam2");
    il2cpp_runtime_helper_023445d0(&"AnnieHurt");
    il2cpp_runtime_helper_023445d0(&"Thunder");
    g_data_057adf4a = '\x01';
  }
  **(undefined8 **)(TypeInfo_ShifterSounds + 0xb8) = "Thunder";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ShifterSounds + 0xb8),"Thunder");
  lVar1 = *(long *)(TypeInfo_ShifterSounds + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "ErenRoar";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_ShifterSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "AnnieRoar";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_ShifterSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "AnnieHurt";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_ShifterSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "ColossalSteam1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_ShifterSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "ColossalSteam2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  return;
}


