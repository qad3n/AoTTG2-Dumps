// Type: Characters.HumanSounds
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanSounds.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanSounds.cs
// --------------------------------

// Characters.HumanSounds$$GetRandom
// il2cpp: System_String_o* Characters_HumanSounds__GetRandom (System_String_array* sounds, const MethodInfo* method);
// 0x42e14c0

System_String_o * Characters_HumanSounds__GetRandom(System_String_array *sounds,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *extraout_RAX;
  Il2CppObject *__this;
  
  if (sounds == (System_String_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar1 = UnityEngine_Random__Range_4df2410(0,(int32_t)sounds->max_length,(MethodInfo *)0x0);
    if (uVar1 < (uint)sounds->max_length) {
      return sounds->m_Items[(int)uVar1];
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ade62 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade62 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 600);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x260);
        il2cpp_runtime_helper_022b4080();
        uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade63 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x178);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x180);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x188);
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 400);
            il2cpp_runtime_helper_022b4080();
            uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade64 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade64 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x228);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x238);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x248);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade65 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade65 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x230);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x240);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x250);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade66 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x198);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1a0);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1a8);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade67 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1b0);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1b8);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1c0);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade68 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade68 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1c8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1d0);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1d8);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade69 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e0);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e8);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f0);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6a = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x200);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x208);
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x210);
            il2cpp_runtime_helper_022b4080();
            uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6b = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = TypeInfo_HumanSounds;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      __this = (Il2CppObject *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x218);
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x220);
        il2cpp_runtime_helper_022b4080();
        __this = (Il2CppObject *)0x0;
        uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.HumanSounds$$GetRandomTSLaunch
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomTSLaunch (const MethodInfo* method);
// 0x42e14f0

System_String_o * Characters_HumanSounds__GetRandomTSLaunch(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *extraout_RAX;
  Il2CppObject *__this;
  
  if (g_data_057ade62 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade62 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 600);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x260);
        il2cpp_runtime_helper_022b4080();
        uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade63 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x178);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x180);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x188);
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 400);
            il2cpp_runtime_helper_022b4080();
            uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade64 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade64 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x228);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x238);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x248);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade65 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade65 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x230);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x240);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x250);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade66 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x198);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1a0);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1a8);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade67 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1b0);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1b8);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1c0);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade68 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade68 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1c8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1d0);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1d8);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade69 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e0);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e8);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f0);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6a = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x200);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x208);
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x210);
            il2cpp_runtime_helper_022b4080();
            uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6b = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = TypeInfo_HumanSounds;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      __this = (Il2CppObject *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x218);
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x220);
        il2cpp_runtime_helper_022b4080();
        __this = (Il2CppObject *)0x0;
        uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.HumanSounds$$GetRandomAPGShot
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAPGShot (const MethodInfo* method);
// 0x42e15d0

System_String_o * Characters_HumanSounds__GetRandomAPGShot(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *extraout_RAX;
  Il2CppObject *__this;
  
  if (g_data_057ade63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade63 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x178);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x180);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x188);
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 400);
            il2cpp_runtime_helper_022b4080();
            uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade64 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade64 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x228);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x238);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x248);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade65 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade65 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x230);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x240);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x250);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade66 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x198);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1a0);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1a8);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade67 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1b0);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1b8);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1c0);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade68 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade68 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1c8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1d0);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1d8);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade69 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e0);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e8);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f0);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6a = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x200);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x208);
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x210);
            il2cpp_runtime_helper_022b4080();
            uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6b = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = TypeInfo_HumanSounds;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      __this = (Il2CppObject *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x218);
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x220);
        il2cpp_runtime_helper_022b4080();
        __this = (Il2CppObject *)0x0;
        uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.HumanSounds$$GetRandomAHSSNapeHitVar1
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAHSSNapeHitVar1 (const MethodInfo* method);
// 0x42e1700

System_String_o * Characters_HumanSounds__GetRandomAHSSNapeHitVar1(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *extraout_RAX;
  Il2CppObject *__this;
  
  if (g_data_057ade64 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade64 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x228);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x238);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x248);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade65 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade65 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x230);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x240);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x250);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade66 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x198);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1a0);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1a8);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade67 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1b0);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1b8);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1c0);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade68 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade68 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1c8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1d0);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1d8);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade69 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e0);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e8);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f0);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6a = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x200);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x208);
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x210);
            il2cpp_runtime_helper_022b4080();
            uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6b = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = TypeInfo_HumanSounds;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      __this = (Il2CppObject *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x218);
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x220);
        il2cpp_runtime_helper_022b4080();
        __this = (Il2CppObject *)0x0;
        uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.HumanSounds$$GetRandomAHSSNapeHitVar2
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAHSSNapeHitVar2 (const MethodInfo* method);
// 0x42e1810

System_String_o * Characters_HumanSounds__GetRandomAHSSNapeHitVar2(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *extraout_RAX;
  Il2CppObject *__this;
  
  if (g_data_057ade65 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade65 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x230);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x240);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x250);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade66 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x198);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1a0);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1a8);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade67 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1b0);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1b8);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1c0);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade68 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade68 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1c8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1d0);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1d8);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade69 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e0);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e8);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f0);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6a = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x200);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x208);
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x210);
            il2cpp_runtime_helper_022b4080();
            uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6b = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = TypeInfo_HumanSounds;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      __this = (Il2CppObject *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x218);
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x220);
        il2cpp_runtime_helper_022b4080();
        __this = (Il2CppObject *)0x0;
        uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.HumanSounds$$GetRandomBladeNapeVar1
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomBladeNapeVar1 (const MethodInfo* method);
// 0x42e1920

System_String_o * Characters_HumanSounds__GetRandomBladeNapeVar1(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *extraout_RAX;
  Il2CppObject *__this;
  
  if (g_data_057ade66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade66 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x198);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1a0);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1a8);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade67 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1b0);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1b8);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1c0);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade68 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade68 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1c8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1d0);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1d8);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade69 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e0);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e8);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f0);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6a = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x200);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x208);
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x210);
            il2cpp_runtime_helper_022b4080();
            uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6b = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = TypeInfo_HumanSounds;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      __this = (Il2CppObject *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x218);
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x220);
        il2cpp_runtime_helper_022b4080();
        __this = (Il2CppObject *)0x0;
        uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.HumanSounds$$GetRandomBladeNapeVar2
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomBladeNapeVar2 (const MethodInfo* method);
// 0x42e1a30

System_String_o * Characters_HumanSounds__GetRandomBladeNapeVar2(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *extraout_RAX;
  Il2CppObject *__this;
  
  if (g_data_057ade67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade67 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1b0);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1b8);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1c0);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade68 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade68 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1c8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1d0);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1d8);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade69 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e0);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e8);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f0);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6a = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x200);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x208);
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x210);
            il2cpp_runtime_helper_022b4080();
            uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6b = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = TypeInfo_HumanSounds;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      __this = (Il2CppObject *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x218);
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x220);
        il2cpp_runtime_helper_022b4080();
        __this = (Il2CppObject *)0x0;
        uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.HumanSounds$$GetRandomBladeNapeVar3
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomBladeNapeVar3 (const MethodInfo* method);
// 0x42e1b40

System_String_o * Characters_HumanSounds__GetRandomBladeNapeVar3(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *extraout_RAX;
  Il2CppObject *__this;
  
  if (g_data_057ade68 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade68 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1c8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1d0);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1d8);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade69 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e0);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e8);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f0);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6a = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x200);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x208);
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x210);
            il2cpp_runtime_helper_022b4080();
            uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6b = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = TypeInfo_HumanSounds;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      __this = (Il2CppObject *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x218);
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x220);
        il2cpp_runtime_helper_022b4080();
        __this = (Il2CppObject *)0x0;
        uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.HumanSounds$$GetRandomBladeNapeVar4
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomBladeNapeVar4 (const MethodInfo* method);
// 0x42e1c50

System_String_o * Characters_HumanSounds__GetRandomBladeNapeVar4(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *extraout_RAX;
  Il2CppObject *__this;
  
  if (g_data_057ade69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade69 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e0);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1e8);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f0);
          il2cpp_runtime_helper_022b4080();
          uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6a = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x200);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x208);
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x210);
            il2cpp_runtime_helper_022b4080();
            uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6b = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = TypeInfo_HumanSounds;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      __this = (Il2CppObject *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x218);
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x220);
        il2cpp_runtime_helper_022b4080();
        __this = (Il2CppObject *)0x0;
        uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.HumanSounds$$GetRandomAHSSGunShot
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAHSSGunShot (const MethodInfo* method);
// 0x42e1d60

System_String_o * Characters_HumanSounds__GetRandomAHSSGunShot(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *extraout_RAX;
  Il2CppObject *__this;
  
  if (g_data_057ade6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6a = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x1f8);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x200);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x208);
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x210);
            il2cpp_runtime_helper_022b4080();
            uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6b = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = TypeInfo_HumanSounds;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      __this = (Il2CppObject *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x218);
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x220);
        il2cpp_runtime_helper_022b4080();
        __this = (Il2CppObject *)0x0;
        uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.HumanSounds$$GetRandomAHSSGunShotDouble
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAHSSGunShotDouble (const MethodInfo* method);
// 0x42e1e90

System_String_o * Characters_HumanSounds__GetRandomAHSSGunShotDouble(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *extraout_RAX;
  Il2CppObject *__this;
  
  if (g_data_057ade6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ade6b = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*(int *)((long)&TypeInfo_HumanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = TypeInfo_HumanSounds;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      __this = (Il2CppObject *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x218);
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_HumanSounds[0xb].monitor + 0x220);
        il2cpp_runtime_helper_022b4080();
        __this = (Il2CppObject *)0x0;
        uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.HumanSounds$$.ctor
// il2cpp: void Characters_HumanSounds___ctor (Characters_HumanSounds_o* __this, const MethodInfo* method);
// 0x42e1f70

void Characters_HumanSounds___ctor(Characters_HumanSounds_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSounds$$.cctor
// il2cpp: void Characters_HumanSounds___cctor (const MethodInfo* method);
// 0x42e1f80

void Characters_HumanSounds___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ade6c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&"Death4");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShotDouble2");
    il2cpp_runtime_helper_023445d0(&"AHSSNape2Var1");
    il2cpp_runtime_helper_023445d0(&"TSLaunch2");
    il2cpp_runtime_helper_023445d0(&"AHSSNape1Var1");
    il2cpp_runtime_helper_023445d0(&"BladeNape1Var2");
    il2cpp_runtime_helper_023445d0(&"BladeNape3Var1");
    il2cpp_runtime_helper_023445d0(&"BladeNape4Var1");
    il2cpp_runtime_helper_023445d0(&"ThunderspearLaunch");
    il2cpp_runtime_helper_023445d0(&"GasEnd");
    il2cpp_runtime_helper_023445d0(&"NoGas");
    il2cpp_runtime_helper_023445d0(&"NapeHit");
    il2cpp_runtime_helper_023445d0(&"Footstep1");
    il2cpp_runtime_helper_023445d0(&"GunExplode");
    il2cpp_runtime_helper_023445d0(&"GasStart");
    il2cpp_runtime_helper_023445d0(&"BladeSwing2");
    il2cpp_runtime_helper_023445d0(&"AHSSNape3Var1");
    il2cpp_runtime_helper_023445d0(&"BladeHit");
    il2cpp_runtime_helper_023445d0(&"HookImpact");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShot1");
    il2cpp_runtime_helper_023445d0(&"Death3");
    il2cpp_runtime_helper_023445d0(&"Death1");
    il2cpp_runtime_helper_023445d0(&"BladeSwing3");
    il2cpp_runtime_helper_023445d0(&"BladeBreak");
    il2cpp_runtime_helper_023445d0(&"AHSSNape1Var2");
    il2cpp_runtime_helper_023445d0(&"LimbHit");
    il2cpp_runtime_helper_023445d0(&"APGShot1");
    il2cpp_runtime_helper_023445d0(&"BladeNape2Var2");
    il2cpp_runtime_helper_023445d0(&"Death5");
    il2cpp_runtime_helper_023445d0(&"HookRetractRight");
    il2cpp_runtime_helper_023445d0(&"BladeSwing1");
    il2cpp_runtime_helper_023445d0(&"OldBladeHit");
    il2cpp_runtime_helper_023445d0(&"Land");
    il2cpp_runtime_helper_023445d0(&"APGShot2");
    il2cpp_runtime_helper_023445d0(&"BladeNape1Var1");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShotDouble1");
    il2cpp_runtime_helper_023445d0(&"BladeSwing4");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"BladeNape1Var3");
    il2cpp_runtime_helper_023445d0(&"CrashLand");
    il2cpp_runtime_helper_023445d0(&"HookImpactLoud");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShot4");
    il2cpp_runtime_helper_023445d0(&"Dodge");
    il2cpp_runtime_helper_023445d0(&"HookRetractLeft");
    il2cpp_runtime_helper_023445d0(&"GunExplodeLoud");
    il2cpp_runtime_helper_023445d0(&"AHSSNape3Var2");
    il2cpp_runtime_helper_023445d0(&"ReelOut");
    il2cpp_runtime_helper_023445d0(&"Refill");
    il2cpp_runtime_helper_023445d0(&"Slide");
    il2cpp_runtime_helper_023445d0(&"BladeNape2Var1");
    il2cpp_runtime_helper_023445d0(&"BladeNape2Var3");
    il2cpp_runtime_helper_023445d0(&"BladeNape3Var3");
    il2cpp_runtime_helper_023445d0(&"HookLaunch");
    il2cpp_runtime_helper_023445d0(&"GasLoop");
    il2cpp_runtime_helper_023445d0(&"FlareLaunch");
    il2cpp_runtime_helper_023445d0(&"AHSSNape2Var2");
    il2cpp_runtime_helper_023445d0(&"Footstep2");
    il2cpp_runtime_helper_023445d0(&"Switchback");
    il2cpp_runtime_helper_023445d0(&"APGShot4");
    il2cpp_runtime_helper_023445d0(&"BladeReloadGround");
    il2cpp_runtime_helper_023445d0(&"Death2");
    il2cpp_runtime_helper_023445d0(&"APGShot3");
    il2cpp_runtime_helper_023445d0(&"BladeNape4Var3");
    il2cpp_runtime_helper_023445d0(&"BladeNape4Var2");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShot2");
    il2cpp_runtime_helper_023445d0(&"GunReload");
    il2cpp_runtime_helper_023445d0(&"Checkpoint");
    il2cpp_runtime_helper_023445d0(&"BladeReloadAir");
    il2cpp_runtime_helper_023445d0(&"OldNapeHit");
    il2cpp_runtime_helper_023445d0(&"AHSSGunShot3");
    il2cpp_runtime_helper_023445d0(&"WaterSplash");
    il2cpp_runtime_helper_023445d0(&"OldBladeSwing");
    il2cpp_runtime_helper_023445d0(&"BladeNape3Var2");
    il2cpp_runtime_helper_023445d0(&"GasBurst");
    il2cpp_runtime_helper_023445d0(&"ReelIn");
    il2cpp_runtime_helper_023445d0(&"OldHookLaunch");
    il2cpp_runtime_helper_023445d0(&"TSLaunch1");
    g_data_057ade6c = '\x01';
  }
  **(undefined8 **)(TypeInfo_HumanSounds + 0xb8) = "BladeBreak";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_HumanSounds + 0xb8),"BladeBreak");
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "BladeHit";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "OldBladeHit";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "NapeHit";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "LimbHit";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "OldNapeHit";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "BladeReloadAir";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "BladeReloadGround";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "GunReload";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x40);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x48) = "BladeSwing1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x48);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x50) = "BladeSwing2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x50);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x58) = "BladeSwing3";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x58);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x60) = "BladeSwing4";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x60);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x68) = "OldBladeSwing";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x68);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x70) = "Dodge";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x70);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x78) = "FlareLaunch";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x78);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x80) = "ThunderspearLaunch";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x80);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x88) = "GasBurst";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x88);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x90) = "HookLaunch";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x90);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x98) = "OldHookLaunch";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x98);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xa0) = "HookRetractLeft";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xa0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xa8) = "HookRetractRight";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xa8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xb0) = "HookImpact";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xb0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xb8) = "HookImpactLoud";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xb8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xc0) = "GasStart";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xc0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 200) = "GasLoop";
  il2cpp_runtime_helper_022b4080(lVar1 + 200);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xd0) = "GasEnd";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xd0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xd8) = "ReelIn";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xd8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xe0) = "ReelOut";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xe0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xe8) = "CrashLand";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xe8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xf0) = "Jump";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xf0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xf8) = "Land";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xf8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x100) = "NoGas";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x100);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x108) = "Refill";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x108);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x110) = "Slide";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x110);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x118) = "Footstep1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x118);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x120) = "Footstep2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x120);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x128) = "Death1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x128);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x130) = "Death2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x130);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x138) = "Death3";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x138);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x140) = "Death4";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x140);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x148) = "Death5";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x148);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x150) = "Checkpoint";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x150);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x158) = "GunExplode";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x158);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x160) = "GunExplodeLoud";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x160);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x168) = "WaterSplash";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x168);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x170) = "Switchback";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x170);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x178) = "APGShot1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x178);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x180) = "APGShot2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x180);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x188) = "APGShot3";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x188);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 400) = "APGShot4";
  il2cpp_runtime_helper_022b4080(lVar1 + 400);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x198) = "BladeNape1Var1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x198);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1a0) = "BladeNape1Var2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x1a0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1a8) = "BladeNape1Var3";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x1a8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1b0) = "BladeNape2Var1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x1b0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1b8) = "BladeNape2Var2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x1b8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1c0) = "BladeNape2Var3";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x1c0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1c8) = "BladeNape3Var1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x1c8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1d0) = "BladeNape3Var2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x1d0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1d8) = "BladeNape3Var3";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x1d8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1e0) = "BladeNape4Var1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x1e0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1e8) = "BladeNape4Var2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x1e8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1f0) = "BladeNape4Var3";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x1f0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1f8) = "AHSSGunShot1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x1f8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x200) = "AHSSGunShot2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x200);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x208) = "AHSSGunShot3";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x208);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x210) = "AHSSGunShot4";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x210);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x218) = "AHSSGunShotDouble1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x218);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x220) = "AHSSGunShotDouble2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x220);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x228) = "AHSSNape1Var1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x228);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x230) = "AHSSNape1Var2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x230);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x238) = "AHSSNape2Var1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x238);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x240) = "AHSSNape2Var2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x240);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x248) = "AHSSNape3Var1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x248);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x250) = "AHSSNape3Var2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x250);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 600) = "TSLaunch1";
  il2cpp_runtime_helper_022b4080(lVar1 + 600);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x260) = "TSLaunch2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x260);
  return;
}


