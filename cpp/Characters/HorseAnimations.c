// Type: Characters.HorseAnimations
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/HorseAnimations.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Horse/HorseAnimations.cs  [prior source available (delta unverified)]
// --------------------------------

// Characters.HorseAnimations$$.ctor
// il2cpp: void Characters_HorseAnimations___ctor (Characters_HorseAnimations_o* __this, const MethodInfo* method);
// 0x3fd1640

void Characters_HorseAnimations___ctor(Characters_HorseAnimations_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HorseAnimations$$.cctor
// il2cpp: void Characters_HorseAnimations___cctor (const MethodInfo* method);
// 0x3fd1650

void Characters_HorseAnimations___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057040e4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    il2cpp_init_method_metadata(&"horse_crazy");
    il2cpp_init_method_metadata(&"horse_WALK");
    il2cpp_init_method_metadata(&"horse_Run");
    il2cpp_init_method_metadata(&"horse_idle1");
    il2cpp_init_method_metadata(&"horse_idle0");
    il2cpp_init_method_metadata(&"horse_idle2");
    il2cpp_init_method_metadata(&"horse_idle3");
    DAT_057040e4 = '\x01';
  }
  **(undefined8 **)(TypeInfo_HorseAnimations + 0xb8) = "horse_idle0";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_HorseAnimations + 0xb8),"horse_idle0");
  lVar1 = *(long *)(TypeInfo_HorseAnimations + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "horse_idle1";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_HorseAnimations + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "horse_idle2";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_HorseAnimations + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "horse_idle3";
  il2cpp_runtime_glue(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_HorseAnimations + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "horse_crazy";
  il2cpp_runtime_glue(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_HorseAnimations + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "horse_Run";
  il2cpp_runtime_glue(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_HorseAnimations + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "horse_WALK";
  il2cpp_runtime_glue(lVar1 + 0x30);
  return;
}


