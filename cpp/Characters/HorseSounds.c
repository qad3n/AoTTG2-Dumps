// Type: Characters.HorseSounds
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HorseSounds.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/HorseSounds.cs
// --------------------------------

// Characters.HorseSounds$$.ctor
// il2cpp: void Characters_HorseSounds___ctor (Characters_HorseSounds_o* __this, const MethodInfo* method);
// 0x42de140

void Characters_HorseSounds___ctor(Characters_HorseSounds_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HorseSounds$$.cctor
// il2cpp: void Characters_HorseSounds___cctor (const MethodInfo* method);
// 0x42de150

void Characters_HorseSounds___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ade54 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseSounds);
    il2cpp_runtime_helper_023445d0(&"Run");
    il2cpp_runtime_helper_023445d0(&"Idle2");
    il2cpp_runtime_helper_023445d0(&"Idle3");
    il2cpp_runtime_helper_023445d0(&"Idle1");
    g_data_057ade54 = '\x01';
  }
  **(undefined8 **)(TypeInfo_HorseSounds + 0xb8) = "Idle1";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_HorseSounds + 0xb8),"Idle1");
  lVar1 = *(long *)(TypeInfo_HorseSounds + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Idle2";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_HorseSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Idle3";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_HorseSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Run";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  return;
}


