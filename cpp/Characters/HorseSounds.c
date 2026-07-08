// Type: Characters.HorseSounds
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/HorseSounds.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Horse/HorseSounds.cs  [prior source available (delta unverified)]
// --------------------------------

// Characters.HorseSounds$$.ctor
// il2cpp: void Characters_HorseSounds___ctor (Characters_HorseSounds_o* __this, const MethodInfo* method);
// 0x3fd1880

void Characters_HorseSounds___ctor(Characters_HorseSounds_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HorseSounds$$.cctor
// il2cpp: void Characters_HorseSounds___cctor (const MethodInfo* method);
// 0x3fd1890

void Characters_HorseSounds___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057040e6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseSounds);
    il2cpp_init_method_metadata(&"Run");
    il2cpp_init_method_metadata(&"Idle2");
    il2cpp_init_method_metadata(&"Idle3");
    il2cpp_init_method_metadata(&"Idle1");
    DAT_057040e6 = '\x01';
  }
  **(undefined8 **)(TypeInfo_HorseSounds + 0xb8) = "Idle1";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_HorseSounds + 0xb8),"Idle1");
  lVar1 = *(long *)(TypeInfo_HorseSounds + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Idle2";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_HorseSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Idle3";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_HorseSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Run";
  il2cpp_runtime_glue(lVar1 + 0x18);
  return;
}


