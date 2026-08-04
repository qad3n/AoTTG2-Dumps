// Type: Characters.TitanSounds
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/TitanSounds.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/TitanSounds.cs
// --------------------------------

// Characters.TitanSounds$$GetRandom
// il2cpp: System_String_o* Characters_TitanSounds__GetRandom (System_String_array* sounds, const MethodInfo* method);
// 0x43218b0

System_String_o * Characters_TitanSounds__GetRandom(System_String_array *sounds,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  System_String_o *extraout_RAX;
  System_String_array *pSVar4;
  Il2CppObject *__this;
  
  if (sounds == (System_String_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pSVar4 = sounds;
  }
  else {
    pSVar4 = (System_String_array *)0x0;
    uVar2 = UnityEngine_Random__Range_4df2410(0,(int32_t)sounds->max_length,(MethodInfo *)0x0);
    if (uVar2 < (uint)sounds->max_length) {
      return sounds->m_Items[(int)uVar2];
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pSVar4 == (System_String_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar2 = UnityEngine_Random__Range_4df2410(0,(int32_t)pSVar4->max_length,(MethodInfo *)0x0);
    if (uVar2 < (uint)pSVar4->max_length) {
      return pSVar4->m_Items[(int)uVar2];
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae004 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ae004 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x158);
  }
  else {
    lVar3 = *(long *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x158);
  }
  if (lVar3 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar2 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar3 + 0x18),(MethodInfo *)0x0);
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      return *(System_String_o **)(lVar3 + 0x20 + (long)(int)uVar2 * 8);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae005 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ae005 = '\x01';
  }
  lVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,8);
  if (*(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x30);
      il2cpp_runtime_helper_022b4080(lVar3 + 0x20);
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x38);
        il2cpp_runtime_helper_022b4080(lVar3 + 0x28);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x40);
          il2cpp_runtime_helper_022b4080(lVar3 + 0x30);
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x48);
            il2cpp_runtime_helper_022b4080(lVar3 + 0x38);
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x50);
              il2cpp_runtime_helper_022b4080(lVar3 + 0x40);
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x58);
                il2cpp_runtime_helper_022b4080(lVar3 + 0x48);
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x60);
                  il2cpp_runtime_helper_022b4080(lVar3 + 0x50);
                  if (7 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x68);
                    il2cpp_runtime_helper_022b4080();
                    uVar2 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar3 + 0x18),(MethodInfo *)0x0);
                    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
                      return *(System_String_o **)(lVar3 + 0x20 + (long)(int)uVar2 * 8);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae006 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ae006 = '\x01';
  }
  lVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = TypeInfo_TitanSounds;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      __this = (Il2CppObject *)(lVar3 + 0x20);
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x70);
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar3 + 0x18)) {
        __this = (Il2CppObject *)(lVar3 + 0x28);
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x78);
        il2cpp_runtime_helper_022b4080();
        if (2 < *(uint *)(lVar3 + 0x18)) {
          __this = (Il2CppObject *)(lVar3 + 0x30);
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x80);
          il2cpp_runtime_helper_022b4080();
          if (3 < *(uint *)(lVar3 + 0x18)) {
            __this = (Il2CppObject *)(lVar3 + 0x38);
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x88);
            il2cpp_runtime_helper_022b4080();
            if (4 < *(uint *)(lVar3 + 0x18)) {
              __this = (Il2CppObject *)(lVar3 + 0x40);
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x90);
              il2cpp_runtime_helper_022b4080();
              if (5 < *(uint *)(lVar3 + 0x18)) {
                __this = (Il2CppObject *)(lVar3 + 0x48);
                *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x98);
                il2cpp_runtime_helper_022b4080();
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  __this = (Il2CppObject *)(lVar3 + 0x50);
                  *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xa0);
                  il2cpp_runtime_helper_022b4080();
                  if (7 < *(uint *)(lVar3 + 0x18)) {
                    __this = (Il2CppObject *)(lVar3 + 0x58);
                    *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xa8);
                    il2cpp_runtime_helper_022b4080();
                    if (8 < *(uint *)(lVar3 + 0x18)) {
                      __this = (Il2CppObject *)(lVar3 + 0x60);
                      *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xb0);
                      il2cpp_runtime_helper_022b4080();
                      if (9 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined8 *)(lVar3 + 0x68) =
                             *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xb8);
                        il2cpp_runtime_helper_022b4080();
                        __this = (Il2CppObject *)0x0;
                        uVar2 = UnityEngine_Random__Range_4df2410
                                          (0,*(int32_t *)(lVar3 + 0x18),(MethodInfo *)0x0);
                        if (uVar2 < *(uint *)(lVar3 + 0x18)) {
                          return *(System_String_o **)(lVar3 + 0x20 + (long)(int)uVar2 * 8);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.TitanSounds$$GetRandomFromList
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomFromList (System_String_array* sounds, const MethodInfo* method);
// 0x43218e0

System_String_o * Characters_TitanSounds__GetRandomFromList(System_String_array *sounds,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  System_String_o *extraout_RAX;
  Il2CppObject *__this;
  
  if (sounds == (System_String_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar2 = UnityEngine_Random__Range_4df2410(0,(int32_t)sounds->max_length,(MethodInfo *)0x0);
    if (uVar2 < (uint)sounds->max_length) {
      return sounds->m_Items[(int)uVar2];
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae004 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ae004 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x158);
  }
  else {
    lVar3 = *(long *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x158);
  }
  if (lVar3 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar2 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar3 + 0x18),(MethodInfo *)0x0);
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      return *(System_String_o **)(lVar3 + 0x20 + (long)(int)uVar2 * 8);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae005 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ae005 = '\x01';
  }
  lVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,8);
  if (*(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x30);
      il2cpp_runtime_helper_022b4080(lVar3 + 0x20);
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x38);
        il2cpp_runtime_helper_022b4080(lVar3 + 0x28);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x40);
          il2cpp_runtime_helper_022b4080(lVar3 + 0x30);
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x48);
            il2cpp_runtime_helper_022b4080(lVar3 + 0x38);
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x50);
              il2cpp_runtime_helper_022b4080(lVar3 + 0x40);
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x58);
                il2cpp_runtime_helper_022b4080(lVar3 + 0x48);
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x60);
                  il2cpp_runtime_helper_022b4080(lVar3 + 0x50);
                  if (7 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x68);
                    il2cpp_runtime_helper_022b4080();
                    uVar2 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar3 + 0x18),(MethodInfo *)0x0);
                    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
                      return *(System_String_o **)(lVar3 + 0x20 + (long)(int)uVar2 * 8);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae006 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ae006 = '\x01';
  }
  lVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = TypeInfo_TitanSounds;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      __this = (Il2CppObject *)(lVar3 + 0x20);
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x70);
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar3 + 0x18)) {
        __this = (Il2CppObject *)(lVar3 + 0x28);
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x78);
        il2cpp_runtime_helper_022b4080();
        if (2 < *(uint *)(lVar3 + 0x18)) {
          __this = (Il2CppObject *)(lVar3 + 0x30);
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x80);
          il2cpp_runtime_helper_022b4080();
          if (3 < *(uint *)(lVar3 + 0x18)) {
            __this = (Il2CppObject *)(lVar3 + 0x38);
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x88);
            il2cpp_runtime_helper_022b4080();
            if (4 < *(uint *)(lVar3 + 0x18)) {
              __this = (Il2CppObject *)(lVar3 + 0x40);
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x90);
              il2cpp_runtime_helper_022b4080();
              if (5 < *(uint *)(lVar3 + 0x18)) {
                __this = (Il2CppObject *)(lVar3 + 0x48);
                *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x98);
                il2cpp_runtime_helper_022b4080();
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  __this = (Il2CppObject *)(lVar3 + 0x50);
                  *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xa0);
                  il2cpp_runtime_helper_022b4080();
                  if (7 < *(uint *)(lVar3 + 0x18)) {
                    __this = (Il2CppObject *)(lVar3 + 0x58);
                    *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xa8);
                    il2cpp_runtime_helper_022b4080();
                    if (8 < *(uint *)(lVar3 + 0x18)) {
                      __this = (Il2CppObject *)(lVar3 + 0x60);
                      *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xb0);
                      il2cpp_runtime_helper_022b4080();
                      if (9 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined8 *)(lVar3 + 0x68) =
                             *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xb8);
                        il2cpp_runtime_helper_022b4080();
                        __this = (Il2CppObject *)0x0;
                        uVar2 = UnityEngine_Random__Range_4df2410
                                          (0,*(int32_t *)(lVar3 + 0x18),(MethodInfo *)0x0);
                        if (uVar2 < *(uint *)(lVar3 + 0x18)) {
                          return *(System_String_o **)(lVar3 + 0x20 + (long)(int)uVar2 * 8);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.TitanSounds$$GetRandomFootstep
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomFootstep (const MethodInfo* method);
// 0x4321910

System_String_o * Characters_TitanSounds__GetRandomFootstep(MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  System_String_o *extraout_RAX;
  Il2CppObject *__this;
  
  if (g_data_057ae004 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ae004 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x158);
  }
  else {
    lVar3 = *(long *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x158);
  }
  if (lVar3 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar2 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar3 + 0x18),(MethodInfo *)0x0);
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      return *(System_String_o **)(lVar3 + 0x20 + (long)(int)uVar2 * 8);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae005 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ae005 = '\x01';
  }
  lVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,8);
  if (*(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x30);
      il2cpp_runtime_helper_022b4080(lVar3 + 0x20);
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x38);
        il2cpp_runtime_helper_022b4080(lVar3 + 0x28);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x40);
          il2cpp_runtime_helper_022b4080(lVar3 + 0x30);
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x48);
            il2cpp_runtime_helper_022b4080(lVar3 + 0x38);
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x50);
              il2cpp_runtime_helper_022b4080(lVar3 + 0x40);
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x58);
                il2cpp_runtime_helper_022b4080(lVar3 + 0x48);
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x60);
                  il2cpp_runtime_helper_022b4080(lVar3 + 0x50);
                  if (7 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x68);
                    il2cpp_runtime_helper_022b4080();
                    uVar2 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar3 + 0x18),(MethodInfo *)0x0);
                    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
                      return *(System_String_o **)(lVar3 + 0x20 + (long)(int)uVar2 * 8);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae006 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ae006 = '\x01';
  }
  lVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = TypeInfo_TitanSounds;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      __this = (Il2CppObject *)(lVar3 + 0x20);
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x70);
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar3 + 0x18)) {
        __this = (Il2CppObject *)(lVar3 + 0x28);
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x78);
        il2cpp_runtime_helper_022b4080();
        if (2 < *(uint *)(lVar3 + 0x18)) {
          __this = (Il2CppObject *)(lVar3 + 0x30);
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x80);
          il2cpp_runtime_helper_022b4080();
          if (3 < *(uint *)(lVar3 + 0x18)) {
            __this = (Il2CppObject *)(lVar3 + 0x38);
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x88);
            il2cpp_runtime_helper_022b4080();
            if (4 < *(uint *)(lVar3 + 0x18)) {
              __this = (Il2CppObject *)(lVar3 + 0x40);
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x90);
              il2cpp_runtime_helper_022b4080();
              if (5 < *(uint *)(lVar3 + 0x18)) {
                __this = (Il2CppObject *)(lVar3 + 0x48);
                *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x98);
                il2cpp_runtime_helper_022b4080();
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  __this = (Il2CppObject *)(lVar3 + 0x50);
                  *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xa0);
                  il2cpp_runtime_helper_022b4080();
                  if (7 < *(uint *)(lVar3 + 0x18)) {
                    __this = (Il2CppObject *)(lVar3 + 0x58);
                    *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xa8);
                    il2cpp_runtime_helper_022b4080();
                    if (8 < *(uint *)(lVar3 + 0x18)) {
                      __this = (Il2CppObject *)(lVar3 + 0x60);
                      *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xb0);
                      il2cpp_runtime_helper_022b4080();
                      if (9 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined8 *)(lVar3 + 0x68) =
                             *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xb8);
                        il2cpp_runtime_helper_022b4080();
                        __this = (Il2CppObject *)0x0;
                        uVar2 = UnityEngine_Random__Range_4df2410
                                          (0,*(int32_t *)(lVar3 + 0x18),(MethodInfo *)0x0);
                        if (uVar2 < *(uint *)(lVar3 + 0x18)) {
                          return *(System_String_o **)(lVar3 + 0x20 + (long)(int)uVar2 * 8);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.TitanSounds$$GetRandomHurt
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomHurt (const MethodInfo* method);
// 0x43219b0

System_String_o * Characters_TitanSounds__GetRandomHurt(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *extraout_RAX;
  Il2CppObject *__this;
  
  if (g_data_057ae005 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ae005 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,8);
  if (*(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x30);
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x38);
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x40);
          il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x48);
            il2cpp_runtime_helper_022b4080(lVar2 + 0x38);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x50);
              il2cpp_runtime_helper_022b4080(lVar2 + 0x40);
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x58);
                il2cpp_runtime_helper_022b4080(lVar2 + 0x48);
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x60);
                  il2cpp_runtime_helper_022b4080(lVar2 + 0x50);
                  if (7 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x68);
                    il2cpp_runtime_helper_022b4080();
                    uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
                    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
                      return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae006 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ae006 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = TypeInfo_TitanSounds;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      __this = (Il2CppObject *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x70);
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar2 + 0x18)) {
        __this = (Il2CppObject *)(lVar2 + 0x28);
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x78);
        il2cpp_runtime_helper_022b4080();
        if (2 < *(uint *)(lVar2 + 0x18)) {
          __this = (Il2CppObject *)(lVar2 + 0x30);
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x80);
          il2cpp_runtime_helper_022b4080();
          if (3 < *(uint *)(lVar2 + 0x18)) {
            __this = (Il2CppObject *)(lVar2 + 0x38);
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x88);
            il2cpp_runtime_helper_022b4080();
            if (4 < *(uint *)(lVar2 + 0x18)) {
              __this = (Il2CppObject *)(lVar2 + 0x40);
              *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x90);
              il2cpp_runtime_helper_022b4080();
              if (5 < *(uint *)(lVar2 + 0x18)) {
                __this = (Il2CppObject *)(lVar2 + 0x48);
                *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x98);
                il2cpp_runtime_helper_022b4080();
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  __this = (Il2CppObject *)(lVar2 + 0x50);
                  *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xa0);
                  il2cpp_runtime_helper_022b4080();
                  if (7 < *(uint *)(lVar2 + 0x18)) {
                    __this = (Il2CppObject *)(lVar2 + 0x58);
                    *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xa8);
                    il2cpp_runtime_helper_022b4080();
                    if (8 < *(uint *)(lVar2 + 0x18)) {
                      __this = (Il2CppObject *)(lVar2 + 0x60);
                      *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xb0);
                      il2cpp_runtime_helper_022b4080();
                      if (9 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x68) =
                             *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xb8);
                        il2cpp_runtime_helper_022b4080();
                        __this = (Il2CppObject *)0x0;
                        uVar1 = UnityEngine_Random__Range_4df2410
                                          (0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
                        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
                          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.TitanSounds$$GetRandomGrabGrunt
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomGrabGrunt (const MethodInfo* method);
// 0x4321b70

System_String_o * Characters_TitanSounds__GetRandomGrabGrunt(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *extraout_RAX;
  Il2CppObject *__this;
  
  if (g_data_057ae006 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ae006 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = TypeInfo_TitanSounds;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      __this = (Il2CppObject *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x70);
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar2 + 0x18)) {
        __this = (Il2CppObject *)(lVar2 + 0x28);
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x78);
        il2cpp_runtime_helper_022b4080();
        if (2 < *(uint *)(lVar2 + 0x18)) {
          __this = (Il2CppObject *)(lVar2 + 0x30);
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x80);
          il2cpp_runtime_helper_022b4080();
          if (3 < *(uint *)(lVar2 + 0x18)) {
            __this = (Il2CppObject *)(lVar2 + 0x38);
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x88);
            il2cpp_runtime_helper_022b4080();
            if (4 < *(uint *)(lVar2 + 0x18)) {
              __this = (Il2CppObject *)(lVar2 + 0x40);
              *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x90);
              il2cpp_runtime_helper_022b4080();
              if (5 < *(uint *)(lVar2 + 0x18)) {
                __this = (Il2CppObject *)(lVar2 + 0x48);
                *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x98);
                il2cpp_runtime_helper_022b4080();
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  __this = (Il2CppObject *)(lVar2 + 0x50);
                  *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xa0);
                  il2cpp_runtime_helper_022b4080();
                  if (7 < *(uint *)(lVar2 + 0x18)) {
                    __this = (Il2CppObject *)(lVar2 + 0x58);
                    *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xa8);
                    il2cpp_runtime_helper_022b4080();
                    if (8 < *(uint *)(lVar2 + 0x18)) {
                      __this = (Il2CppObject *)(lVar2 + 0x60);
                      *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xb0);
                      il2cpp_runtime_helper_022b4080();
                      if (9 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x68) =
                             *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xb8);
                        il2cpp_runtime_helper_022b4080();
                        __this = (Il2CppObject *)0x0;
                        uVar1 = UnityEngine_Random__Range_4df2410
                                          (0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
                        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
                          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.TitanSounds$$GetRandomLaugh
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomLaugh (const MethodInfo* method);
// 0x4315120

System_String_o * Characters_TitanSounds__GetRandomLaugh(MethodInfo *method)

{
  Characters_AnimationHandler_o *__this;
  uint uVar1;
  long lVar2;
  System_String_o *pSVar3;
  System_String_o *extraout_RAX;
  Characters_BaseTitan_o *__this_00;
  Characters_BaseTitan_o *pCVar4;
  float stateTime;
  
  if (g_data_057ae007 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ae007 = '\x01';
  }
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
  if ((TypeInfo_TitanSounds->fields)._stepPhase == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = TypeInfo_TitanSounds;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      __this_00 = (Characters_BaseTitan_o *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) =
           *(undefined8 *)&(TypeInfo_TitanSounds->fields).MovementSync[1].fields._correctCamera.fields.w;
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) =
             *(undefined8 *)&(TypeInfo_TitanSounds->fields).MovementSync[1].fields._syncCamera;
        il2cpp_runtime_helper_022b4080();
        __this_00 = (Characters_BaseTitan_o *)0x0;
        uVar1 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar4 = __this_00;
  pSVar3 = (System_String_o *)(*(__this_00->klass->vtable)._123_CanAction.methodPtr)();
  if ((char)pSVar3 != '\0') {
    lVar2 = *(long *)&(__this_00->fields)._furthestCoreLocalPosition.fields.z;
    if ((lVar2 != 0) &&
       (__this = *(Characters_AnimationHandler_o **)&(__this_00->fields)._cameraFPS,
       pCVar4 = (Characters_BaseTitan_o *)0x0, __this != (Characters_AnimationHandler_o *)0x0)) {
      pSVar3 = *(System_String_o **)(lVar2 + 0x228);
      stateTime = Characters_AnimationHandler__GetTotalTime(__this,pSVar3,(MethodInfo *)0x0);
      Characters_BaseTitan__StateActionWithTime(__this_00,0x1a,pSVar3,stateTime,0.1,1,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
    if (*(int *)&(pCVar4->fields).OutlineComponent == 0x1a) {
      pSVar3 = (System_String_o *)(*(pCVar4->klass->vtable)._139_Idle.methodPtr)(0x3e99999a);
      return pSVar3;
    }
    return pSVar3;
  }
  return pSVar3;
}


// Characters.TitanSounds$$GetRandomBite
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomBite (const MethodInfo* method);
// 0x431a930

System_String_o * Characters_TitanSounds__GetRandomBite(MethodInfo *method)

{
  int iVar1;
  Characters_BaseTitanComponentCache_o *pCVar2;
  Il2CppMethodPointer pIVar3;
  System_String_o *b;
  void *pvVar4;
  UnityEngine_Component_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  Characters_AnimationHandler_o *pCVar7;
  System_Action_Hashtable__o *pSVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  System_Threading_CancellationTokenSource_o *pSVar12;
  Characters_BaseMovementSync_o *pCVar13;
  char cVar14;
  uint uVar15;
  bool_conflict bVar16;
  int32_t iVar17;
  undefined4 extraout_var;
  Characters_BaseTitan_o *pCVar18;
  System_String_o *pSVar19;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  Photon_Pun_PhotonView_o *pPVar20;
  undefined4 extraout_var_04;
  Characters_BaseTitan_o *__this;
  Characters_BaseTitan_o *pCVar21;
  long lVar22;
  System_String_o *extraout_RAX;
  System_String_Fields SVar23;
  System_String_o *extraout_RAX_00;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  System_String_o *extraout_RAX_01;
  System_String_o *extraout_RAX_02;
  System_String_o *extraout_RAX_03;
  UnityEngine_Transform_o *pUVar24;
  System_String_o *extraout_RAX_04;
  Characters_BaseCharacter_o *target;
  System_String_o *extraout_RAX_05;
  undefined4 extraout_var_08;
  System_String_o *extraout_RAX_06;
  undefined4 extraout_var_09;
  UnityEngine_Object_o *obj;
  System_String_o *extraout_RAX_07;
  undefined8 uVar25;
  MethodInfo *pMVar26;
  System_String_Fields SVar27;
  System_String_o *extraout_RAX_08;
  System_String_o *extraout_RAX_09;
  byte bVar28;
  undefined8 in_RCX;
  undefined8 *puVar29;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  System_String_Fields SVar30;
  System_String_Fields method_01;
  Characters_BaseTitan_o **ppCVar31;
  Characters_BaseTitan_o *unaff_RBP;
  long *plVar32;
  System_String_Fields SVar33;
  long *__this_00;
  long *__this_01;
  long lVar34;
  System_String_Fields SVar35;
  System_String_o **__this_02;
  System_String_o *in_R8;
  Il2CppClass **in_R9;
  code *UNRECOVERED_JUMPTABLE_00;
  System_String_Fields *unaff_R12;
  long *plVar36;
  undefined8 unaff_R13;
  System_String_Fields *pSVar37;
  Characters_BaseTitan_o **ppCVar38;
  undefined8 unaff_R15;
  long *__this_03;
  uint uVar39;
  float extraout_XMM0_Da;
  undefined4 uVar41;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float fVar40;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  undefined8 uVar43;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined1 auVar44 [12];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar45 [16];
  undefined1 extraout_var_10 [12];
  undefined1 auVar46 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined1 auVar47 [16];
  undefined1 extraout_var_11 [12];
  undefined1 auVar48 [16];
  UnityEngine_Vector2_Fields UVar42;
  float fVar52;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 extraout_XMM0_Qb_11;
  undefined1 auVar49 [16];
  undefined8 extraout_XMM0_Qb_12;
  undefined1 extraout_var_12 [12];
  undefined1 auVar50 [16];
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  float extraout_XMM0_Dc_07;
  float extraout_XMM0_Dc_08;
  float fVar53;
  undefined8 extraout_XMM0_Qb_13;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  undefined8 extraout_XMM0_Qb_16;
  undefined8 extraout_XMM0_Qb_17;
  undefined8 extraout_XMM0_Qb_18;
  undefined8 extraout_XMM0_Qb_19;
  undefined4 extraout_XMM0_Dd_02;
  undefined8 extraout_XMM0_Qb_20;
  undefined8 extraout_XMM0_Qb_21;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined8 extraout_XMM0_Qb_22;
  undefined8 extraout_XMM0_Qb_23;
  undefined8 extraout_XMM0_Qb_24;
  undefined8 extraout_XMM0_Qb_25;
  undefined8 extraout_XMM0_Qb_26;
  undefined4 extraout_XMM0_Dd_05;
  undefined8 extraout_XMM0_Qb_27;
  undefined8 extraout_XMM0_Qb_28;
  undefined4 extraout_XMM0_Dd_06;
  undefined8 extraout_XMM0_Qb_29;
  float extraout_XMM0_Dd_07;
  float extraout_XMM0_Dd_08;
  float fVar54;
  undefined1 auVar51 [16];
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  UnityEngine_Quaternion_o UVar74;
  UnityEngine_Quaternion_o a;
  UnityEngine_Quaternion_o a_00;
  UnityEngine_Quaternion_o a_01;
  UnityEngine_Quaternion_Fields UVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [12];
  UnityEngine_Vector3_o UVar78;
  UnityEngine_Vector3_Fields UVar79;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o a_02;
  UnityEngine_Vector3_o target_00;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o euler_01;
  UnityEngine_Vector3_o euler_02;
  UnityEngine_Vector3_o euler_03;
  UnityEngine_Vector3_o euler_04;
  UnityEngine_Vector3_o a_03;
  UnityEngine_Vector3_o euler_05;
  UnityEngine_Vector3_o euler_06;
  UnityEngine_Vector3_o euler_07;
  UnityEngine_Vector3_o euler_08;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o a_04;
  UnityEngine_Vector3_o point1;
  UnityEngine_Quaternion_o b_00;
  UnityEngine_Quaternion_o b_01;
  UnityEngine_Quaternion_o b_02;
  UnityEngine_Quaternion_o b_03;
  UnityEngine_Vector3_o b_04;
  UnityEngine_Vector3_o b_05;
  UnityEngine_Vector3_o b_06;
  UnityEngine_Vector3_o point2;
  UnityEngine_Vector3_o direction;
  Characters_BaseTitan_o *pCStack_30;
  Characters_BaseTitanComponentCache_o *pCStack_28;
  undefined1 auStack_18 [8];
  undefined1 extraout_var_13 [12];
  
  if (g_data_057ae008 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057ae008 = '\x01';
  }
  pCVar18 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  ppCVar38 = &TypeInfo_TitanSounds;
  if ((TypeInfo_TitanSounds->fields)._stepPhase == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar21 = TypeInfo_TitanSounds;
  if (pCVar18 != (Characters_BaseTitan_o *)0x0) {
    if (*(int *)&(pCVar18->fields).m_CancellationTokenSource != 0) {
      pCVar21 = (Characters_BaseTitan_o *)&(pCVar18->fields).pvCache;
      (pCVar18->fields).pvCache =
           *(Photon_Pun_PhotonView_o **)
            &(TypeInfo_TitanSounds->fields).MovementSync[1].fields._correctVelocity.fields.z;
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)&(pCVar18->fields).m_CancellationTokenSource) {
        pCVar13 = (TypeInfo_TitanSounds->fields).MovementSync + 1;
        fVar65 = (pCVar13->fields)._correctCamera.fields.z;
        (pCVar18->fields).FootstepsEnabled = (bool_conflict)(pCVar13->fields)._correctCamera.fields.y;
        (pCVar18->fields).SoundsEnabled = (bool_conflict)fVar65;
        il2cpp_runtime_helper_022b4080();
        pCVar21 = (Characters_BaseTitan_o *)0x0;
        uVar15 = UnityEngine_Random__Range_4df2410
                           (0,*(int32_t *)&(pCVar18->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
        if (uVar15 < *(uint *)&(pCVar18->fields).m_CancellationTokenSource) {
          return (System_String_o *)(&(pCVar18->fields).pvCache)[(int)uVar15];
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  pSVar19 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  pCStack_28 = (Characters_BaseTitanComponentCache_o *)&TypeInfo_TitanSounds;
  ppCVar31 = &pCStack_30;
  pCStack_30 = pCVar18;
  if (g_data_057adfcc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"TitanEat");
    pSVar19 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
    g_data_057adfcc = '\x01';
  }
  if (*(int *)&(pCVar21->fields).OutlineComponent == 0x1b) {
label_0431ab67:
    if ((char)(pCVar21->fields).CustomDamage != '\0') {
      return pSVar19;
    }
    pCVar18 = (Characters_BaseTitan_o *)(pCVar21->fields).BaseTitanCache;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = pCVar18;
    bVar16 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pCVar18,(MethodInfo *)0x0);
    if ((char)bVar16 == '\0') {
      return (System_String_o *)CONCAT44(extraout_var_02,bVar16);
    }
    pCVar2 = (pCVar21->fields).BaseTitanCache;
    if (pCVar2 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_0431abd7;
    if (*(char *)&(pCVar2->fields).NapeHurtbox != '\0') {
      return (System_String_o *)pCVar2;
    }
    if (*(char *)&(pCVar21->fields).TitanColliderToggler != '\0') {
      return (System_String_o *)pCVar2;
    }
    bVar16 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
    if (((char)bVar16 == '\0') && (*(int *)&(pCVar21->fields).OutlineComponent != 0x1b)) {
      return (System_String_o *)CONCAT44(extraout_var_03,bVar16);
    }
    ppCVar31 = (Characters_BaseTitan_o **)auStack_18;
    pCVar18 = pCStack_30;
    __this = pCVar21;
    ppCVar38 = (Characters_BaseTitan_o **)pCStack_28;
  }
  else {
    pCVar2 = (pCVar21->fields).BaseTitanCache;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar16 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar19 = (System_String_o *)CONCAT44(extraout_var_00,bVar16);
    if (((char)bVar16 != '\0') && (4.72 < (pCVar21->fields)._currentCrippleTime)) {
      pSVar19 = (System_String_o *)
                (*(pCVar21->klass->vtable)._140_IdleWait.methodPtr)
                          (pCVar21,(pCVar21->klass->vtable)._140_IdleWait.method);
      return pSVar19;
    }
    ppCVar38 = (Characters_BaseTitan_o **)&TypeInfo_Object;
    if ((*(int *)&(pCVar21->fields).OutlineComponent == 0x1b) ||
       (4.72 < (pCVar21->fields)._currentCrippleTime)) goto label_0431ab67;
    pCVar2 = (pCVar21->fields).BaseTitanCache;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar16 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar19 = (System_String_o *)CONCAT44(extraout_var_01,bVar16);
    if ((char)bVar16 == '\0') goto label_0431ab67;
    if (*(char *)((long)&(pCVar21->fields).FeedVictimName + 1) == '\0') {
      ppCVar38 = (Characters_BaseTitan_o **)&g_data_00000064;
    }
    else {
      ppCVar38 = (Characters_BaseTitan_o **)(ulong)*(uint *)((long)&(pCVar21->fields).FeedVictimName + 4);
    }
    pCVar2 = (pCVar21->fields).BaseTitanCache;
    __this = pCVar21;
    (*(pCVar21->klass->vtable)._148_Ungrab.methodPtr)();
    pCVar18 = (Characters_BaseTitan_o *)0x0;
    if (pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0) {
      in_R9 = pCVar2->klass[4]._1.nestedTypes;
      in_RCX = "TitanEat";
      in_R8 = "";
      pSVar19 = (System_String_o *)(*pCVar2->klass[4]._1.methods)(pCVar2,pCVar21,ppCVar38);
      goto label_0431ab67;
    }
label_0431abd7:
    unaff_RBP = pCVar18;
    il2cpp_runtime_helper_022b2c90();
    pCVar18 = pCVar21;
  }
  *(undefined8 *)((long)ppCVar31 + -8) = unaff_R15;
  *(Characters_BaseTitan_o ***)((long)ppCVar31 + -0x10) = ppCVar38;
  *(System_String_Fields **)((long)ppCVar31 + -0x18) = unaff_R12;
  *(Characters_BaseTitan_o **)((long)ppCVar31 + -0x20) = pCVar18;
  if (g_data_057adfcd == '\0') {
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431ac03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431ac0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431ac1b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431ac27;
    il2cpp_runtime_helper_023445d0(&"BlowAwayRPC");
    g_data_057adfcd = '\x01';
  }
  if (*(int *)&(__this->fields).OutlineComponent == 0x1b) {
label_0431ac6c:
    pIVar3 = (__this->klass->vtable)._66_GetAimPoint.methodPtr;
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431ac7f;
    auVar77 = (*pIVar3)(__this);
    lVar22 = *(long *)&(__this->fields).Dead;
    if (lVar22 == 0) goto label_0431b168;
    *(long *)((long)ppCVar31 + -0x58) = auVar77._0_8_;
    *(undefined8 *)((long)ppCVar31 + -0x50) = extraout_XMM0_Qb;
    *(int *)((long)ppCVar31 + -0x68) = auVar77._8_4_;
    pUVar24 = *(UnityEngine_Transform_o **)(lVar22 + 0x10);
    if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_0431b168;
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431acab;
    UVar78 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
    lVar22 = *(long *)&(__this->fields).Dead;
    if (lVar22 == 0) goto label_0431b168;
    *(long *)((long)ppCVar31 + -0x78) = UVar78.fields._0_8_;
    *(undefined8 *)((long)ppCVar31 + -0x70) = extraout_XMM0_Qb_00;
    pUVar24 = *(UnityEngine_Transform_o **)(lVar22 + 0x10);
    if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_0431b168;
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431acd0;
    UVar78 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
    fVar65 = UVar78.fields.z;
    auVar76._0_8_ = UVar78.fields._0_8_;
    auVar76._8_8_ = extraout_XMM0_Qb_01;
    fVar40 = *(float *)((long)ppCVar31 + -0x74);
    fVar52 = *(float *)((long)ppCVar31 + -0x58);
    fVar53 = *(float *)((long)ppCVar31 + -0x50);
    fVar54 = *(float *)((long)ppCVar31 + -0x4c);
    if (g_data_057a6845 == '\0') {
      *(float *)((long)ppCVar31 + -0x78) = fVar52;
      *(float *)((long)ppCVar31 + -0x74) = fVar40;
      *(float *)((long)ppCVar31 + -0x70) = fVar53;
      *(float *)((long)ppCVar31 + -0x6c) = fVar54;
      *(float *)((long)ppCVar31 + -0x58) = fVar65;
      *(undefined1 (*) [16])((long)ppCVar31 + -0x48) = auVar76;
      *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431ad05;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      auVar76 = *(undefined1 (*) [16])((long)ppCVar31 + -0x48);
      fVar65 = *(float *)((long)ppCVar31 + -0x58);
      fVar52 = *(float *)((long)ppCVar31 + -0x78);
      fVar40 = *(float *)((long)ppCVar31 + -0x74);
      fVar53 = *(float *)((long)ppCVar31 + -0x70);
      fVar54 = *(float *)((long)ppCVar31 + -0x6c);
      g_data_057a6845 = '\x01';
    }
    auVar56._0_4_ = fVar52 - auVar76._0_4_;
    auVar56._4_4_ = fVar40 - auVar76._4_4_;
    auVar56._8_4_ = fVar53 - auVar76._8_4_;
    auVar56._12_4_ = fVar54 - auVar76._12_4_;
    fVar65 = *(float *)((long)ppCVar31 + -0x68) - fVar65;
    unaff_R12 = &TypeInfo_Math;
    if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
      *(float *)((long)ppCVar31 + -0x68) = fVar65;
      *(undefined1 (*) [16])((long)ppCVar31 + -0x78) = auVar56;
      *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431ad4b;
      il2cpp_runtime_helper_02337ed0();
      auVar56 = *(undefined1 (*) [16])((long)ppCVar31 + -0x78);
      fVar65 = *(float *)((long)ppCVar31 + -0x68);
    }
    fVar40 = fVar65 * fVar65 + auVar56._4_4_ * auVar56._4_4_ + auVar56._0_4_ * auVar56._0_4_;
    uVar25 = 0;
    if (fVar40 < 0.0) {
      *(float *)((long)ppCVar31 + -0x68) = fVar65;
      *(undefined1 (*) [16])((long)ppCVar31 + -0x78) = auVar56;
      *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431add9;
      auVar45._0_4_ = sqrtf(fVar40);
      auVar45._4_12_ = extraout_var_10;
      auVar56 = *(undefined1 (*) [16])((long)ppCVar31 + -0x78);
      fVar65 = *(float *)((long)ppCVar31 + -0x68);
      if (auVar45._0_4_ <= 1e-05) goto label_0431ad86;
label_0431adec:
      auVar46._0_4_ = auVar45._0_4_;
      fVar65 = fVar65 / auVar46._0_4_;
      auVar46._8_4_ = auVar45._8_4_;
      auVar46._12_4_ = auVar45._12_4_;
      auVar46._4_4_ = auVar46._0_4_;
      auVar72 = divps(auVar56,auVar46);
      lVar22._0_4_ = (__this->fields).Dead;
      lVar22._4_4_ = (__this->fields).CustomDamageEnabled;
    }
    else {
      auVar45 = ZEXT416((uint)SQRT(fVar40));
      if (1e-05 < SQRT(fVar40)) goto label_0431adec;
label_0431ad86:
      if (g_data_057a65d5 == '\0') {
        *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431ad9b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
        uVar25 = extraout_XMM1_Qb;
      }
      auVar72._8_8_ = 0;
      auVar72._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
      fVar65 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
      lVar22._0_4_ = (__this->fields).Dead;
      lVar22._4_4_ = (__this->fields).CustomDamageEnabled;
    }
    if (lVar22 == 0) goto label_0431b168;
    *(undefined1 (*) [16])((long)ppCVar31 + -0x78) = auVar72;
    *(float *)((long)ppCVar31 + -0x68) = fVar65;
    pCVar18 = *(Characters_BaseTitan_o **)(lVar22 + 0x10);
    if (pCVar18 == (Characters_BaseTitan_o *)0x0) goto label_0431b168;
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431ae25;
    UVar74 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)pCVar18,(MethodInfo *)0x0);
    *(long *)((long)ppCVar31 + -0x58) = UVar74.fields._0_8_;
    *(undefined8 *)((long)ppCVar31 + -0x50) = extraout_XMM0_Qb_02;
    *(long *)((long)ppCVar31 + -0x48) = UVar74.fields._8_8_;
    *(undefined8 *)((long)ppCVar31 + -0x40) = uVar25;
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431ae40;
    UVar78.fields.z = *(float *)((long)ppCVar31 + -0x68);
    UVar78.fields._0_8_ = *(undefined8 *)((long)ppCVar31 + -0x78);
    auVar76 = ZEXT816(0) << 0x20;
    UVar74 = UnityEngine_Quaternion__LookRotation_4debb20(UVar78,(MethodInfo *)0x0);
    *(long *)((long)ppCVar31 + -0x78) = UVar74.fields._0_8_;
    *(undefined8 *)((long)ppCVar31 + -0x70) = extraout_XMM0_Qb_03;
    *(long *)((long)ppCVar31 + -0x68) = UVar74.fields._8_8_;
    *(long *)((long)ppCVar31 + -0x60) = auVar76._8_8_;
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431ae50;
    fVar65 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    b_00.fields._0_8_ = SUB168(*(undefined1 (*) [16])((long)ppCVar31 + -0x78),0);
    b_00.fields._8_8_ = SUB168(*(undefined1 (*) [16])((long)ppCVar31 + -0x68),0);
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431ae75;
    UVar74.fields._8_8_ = *(undefined8 *)((long)ppCVar31 + -0x48);
    UVar74.fields._0_8_ = *(undefined8 *)((long)ppCVar31 + -0x58);
    UVar74 = UnityEngine_Quaternion__Lerp(UVar74,b_00,fVar65 * 5.0,(MethodInfo *)0x0);
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431ae7f;
    UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)pCVar18,UVar74,(MethodInfo *)0x0);
    pIVar3 = (__this->klass->vtable)._166_GetAnimationTime.methodPtr;
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431ae92;
    pSVar19 = (System_String_o *)(*pIVar3)(__this);
    if (extraout_XMM0_Da_00 <= 0.61) {
      return pSVar19;
    }
    lVar22 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if ((lVar22 == 0) ||
       (pUVar5 = *(UnityEngine_Component_o **)(lVar22 + 0x90), pUVar5 == (UnityEngine_Component_o *)0x0))
    goto label_0431b168;
    ppCVar38 = (Characters_BaseTitan_o **)(__this->fields).BaseTitanCache;
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431aecd;
    pUVar24 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0);
    if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_0431b168;
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431aee0;
    UVar78 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
    *(long *)((long)ppCVar31 + -0x48) = UVar78.fields._0_8_;
    *(undefined8 *)((long)ppCVar31 + -0x40) = extraout_XMM0_Qb_04;
    *(float *)((long)ppCVar31 + -0x58) = UVar78.fields.z;
    pMVar26 = (__this->klass->vtable)._66_GetAimPoint.method;
    pIVar3 = (__this->klass->vtable)._66_GetAimPoint.methodPtr;
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431aefe;
    auVar76 = (*pIVar3)(__this,pMVar26);
    auVar55._0_8_ = auVar76._8_8_;
    auVar55._8_8_ = extraout_XMM1_Qb_00;
    auVar66._8_4_ = (int)extraout_XMM0_Qb_05;
    auVar66._0_8_ = auVar76._0_8_;
    auVar66._12_4_ = (int)((ulong)extraout_XMM0_Qb_05 >> 0x20);
    if (g_data_057a6845 == '\0') {
      *(undefined1 (*) [16])((long)ppCVar31 + -0x78) = auVar66;
      *(int *)((long)ppCVar31 + -0x68) = auVar76._8_4_;
      *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431af20;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      auVar55 = ZEXT416(*(uint *)((long)ppCVar31 + -0x68));
      auVar66 = *(undefined1 (*) [16])((long)ppCVar31 + -0x78);
      g_data_057a6845 = '\x01';
    }
    auVar67._0_4_ = auVar66._0_4_ - *(float *)((long)ppCVar31 + -0x48);
    auVar67._4_4_ = auVar66._4_4_ - *(float *)((long)ppCVar31 + -0x44);
    auVar67._8_4_ = auVar66._8_4_ - *(float *)((long)ppCVar31 + -0x40);
    auVar67._12_4_ = auVar66._12_4_ - *(float *)((long)ppCVar31 + -0x3c);
    auVar77 = auVar55._4_12_;
    fVar65 = auVar55._0_4_ - *(float *)((long)ppCVar31 + -0x58);
    if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
      *(undefined1 (*) [16])((long)ppCVar31 + -0x78) = auVar67;
      *(float *)((long)ppCVar31 + -0x68) = fVar65;
      *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431af58;
      il2cpp_runtime_helper_02337ed0();
      fVar65 = *(float *)((long)ppCVar31 + -0x68);
      auVar77 = (undefined1  [12])0x0;
      auVar67 = *(undefined1 (*) [16])((long)ppCVar31 + -0x78);
    }
    fVar40 = fVar65 * fVar65 + auVar67._4_4_ * auVar67._4_4_ + auVar67._0_4_ * auVar67._0_4_;
    if (fVar40 < 0.0) {
      *(undefined1 (*) [16])((long)ppCVar31 + -0x78) = auVar67;
      *(float *)((long)ppCVar31 + -0x68) = fVar65;
      *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431afe4;
      auVar47._0_4_ = sqrtf(fVar40);
      auVar47._4_12_ = extraout_var_11;
      fVar65 = *(float *)((long)ppCVar31 + -0x68);
      auVar67 = *(undefined1 (*) [16])((long)ppCVar31 + -0x78);
      if (auVar47._0_4_ <= 1e-05) goto label_0431af93;
label_0431aff7:
      auVar48._0_4_ = auVar47._0_4_;
      *(float *)((long)ppCVar31 + -0x68) = fVar65 / auVar48._0_4_;
      auVar48._8_4_ = auVar47._8_4_;
      auVar48._12_4_ = auVar47._12_4_;
      auVar48._4_4_ = auVar48._0_4_;
      auVar76 = divps(auVar67,auVar48);
      *(undefined1 (*) [16])((long)ppCVar31 + -0x78) = auVar76;
    }
    else {
      auVar47._0_4_ = SQRT(fVar40);
      auVar47._4_12_ = auVar77;
      if (1e-05 < auVar47._0_4_) goto label_0431aff7;
label_0431af93:
      if (g_data_057a65d5 == '\0') {
        *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431afa8;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      puVar29 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      *(undefined8 *)((long)ppCVar31 + -0x78) = *puVar29;
      *(undefined8 *)((long)ppCVar31 + -0x70) = 0;
      *(undefined4 *)((long)ppCVar31 + -0x68) = *(undefined4 *)(puVar29 + 1);
    }
    pIVar3 = (__this->klass->vtable)._148_Ungrab.methodPtr;
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431b01f;
    (*pIVar3)(__this);
    if ((Characters_BaseTitanComponentCache_o *)ppCVar38 == (Characters_BaseTitanComponentCache_o *)0x0)
    goto label_0431b168;
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431b032;
    pPVar20 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)ppCVar38,(MethodInfo *)0x0);
    if (pPVar20 == (Photon_Pun_PhotonView_o *)0x0) goto label_0431b168;
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431b045;
    pCVar18 = (Characters_BaseTitan_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar20,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431b060;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431b06c;
    bVar16 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar16 == '\0') {
      return (System_String_o *)CONCAT44(extraout_var_04,bVar16);
    }
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431b07e;
    __this = (Characters_BaseTitan_o *)
             Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)ppCVar38,(MethodInfo *)0x0);
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431b08b;
    pPVar20 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)ppCVar38,(MethodInfo *)0x0);
    if (pPVar20 == (Photon_Pun_PhotonView_o *)0x0) goto label_0431b168;
    *(float *)((long)ppCVar31 + -0x78) = *(float *)((long)ppCVar31 + -0x78) * 150.0;
    *(float *)((long)ppCVar31 + -0x74) = *(float *)((long)ppCVar31 + -0x74) * 150.0;
    *(float *)((long)ppCVar31 + -0x70) = *(float *)((long)ppCVar31 + -0x70) * 0.0;
    *(float *)((long)ppCVar31 + -0x6c) = *(float *)((long)ppCVar31 + -0x6c) * 0.0;
    *(float *)((long)ppCVar31 + -0x68) = *(float *)((long)ppCVar31 + -0x68) * 150.0;
    ppCVar38 = (Characters_BaseTitan_o **)(pPVar20->fields)._Owner_k__BackingField;
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431b0d2;
    unaff_R12 = (System_String_Fields *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
    *(undefined8 *)((long)ppCVar31 + -0x30) = *(undefined8 *)((long)ppCVar31 + -0x78);
    *(undefined4 *)((long)ppCVar31 + -0x28) = *(undefined4 *)((long)ppCVar31 + -0x68);
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431b0fe;
    pCVar21 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3);
    if ((System_Object_array *)unaff_R12 == (System_Object_array *)0x0) goto label_0431b168;
    if (pCVar21 == (Characters_BaseTitan_o *)0x0) {
label_0431b120:
      if ((int)((System_Object_array *)unaff_R12)->max_length != 0) {
        ((System_Object_array *)unaff_R12)->m_Items[0] = (Il2CppObject *)pCVar21;
        *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431b13c;
        il2cpp_runtime_helper_022b4080(((System_Object_array *)unaff_R12)->m_Items);
        pCVar18 = pCVar21;
        if (__this != (Characters_BaseTitan_o *)0x0) {
          *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431b15c;
          Photon_Pun_PhotonView__RPC_3efa220
                    ((Photon_Pun_PhotonView_o *)__this,"BlowAwayRPC",(Photon_Realtime_Player_o *)ppCVar38,
                     (System_Object_array *)unaff_R12,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        goto label_0431b168;
      }
      goto label_0431b16d;
    }
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431b11b;
    lVar22 = il2cpp_runtime_helper_023051f0(pCVar21);
    if (lVar22 != 0) goto label_0431b120;
  }
  else {
    lVar22 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar22 != 0) {
      pSVar19 = *(System_String_o **)(lVar22 + 0x1d0);
      in_RCX = 1;
      in_R8 = (System_String_o *)0x0;
      *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431ac6c;
      Characters_BaseTitan__StateAction(__this,0x1b,pSVar19,0.1,1,(MethodInfo *)0x0);
      goto label_0431ac6c;
    }
label_0431b168:
    pCVar21 = pCVar18;
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431b16d;
    il2cpp_runtime_helper_022b2c90();
label_0431b16d:
    *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431b172;
    il2cpp_runtime_helper_022b2ca0();
  }
  *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431b177;
  SVar23 = (System_String_Fields)il2cpp_runtime_helper_0231b270();
  plVar32._0_4_ = 0;
  plVar32._4_2_ = 0;
  plVar32._6_2_ = 0;
  *(undefined8 *)((long)ppCVar31 + -0x80) = 0x431b181;
  pSVar19 = (System_String_o *)il2cpp_runtime_helper_022b2b10();
  *(Characters_BaseTitan_o **)((long)ppCVar31 + -0x80) = pCVar21;
  if (*(char *)((long)SVar23 + 0x288) == '\0') {
    Characters_BaseTitan__Blind((Characters_BaseTitan_o *)SVar23,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  if ((*(int *)((long)SVar23 + 0xf0) == 0x10) || (*(char *)((long)SVar23 + 0x78) == '\0')) {
    return pSVar19;
  }
  if (*(long *)((long)SVar23 + 0x280) != 0) {
    pSVar19 = *(System_String_o **)(*(long *)((long)SVar23 + 0x280) + 0x210);
    *(undefined8 *)((long)ppCVar31 + -0x88) = 0x431b1dc;
    Characters_BaseTitan__StateAction((Characters_BaseTitan_o *)SVar23,0x10,pSVar19,0.1,1,(MethodInfo *)0x0);
    pSVar19 = (System_String_o *)
              (**(code **)(*(long *)SVar23 + 3000))(SVar23,*(undefined8 *)(*(long *)SVar23 + 0xbc0));
    return pSVar19;
  }
  *(undefined8 *)((long)ppCVar31 + -0x88) = 0x431b20d;
  SVar33 = SVar23;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar31 + -0x88) = auVar76._0_8_;
  if (*(char *)((long)SVar33 + 0x288) == '\0') {
    plVar36 = *(long **)((long)SVar33 + 0x150);
    SVar33._stringLength = 0;
    SVar33._firstChar = 0;
    SVar33._6_2_ = 0;
    if (plVar36 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar36 + 0x218);
      pSVar19 = (System_String_o *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (plVar36,*(undefined8 *)(*plVar36 + 0x220),auVar76._8_8_,UNRECOVERED_JUMPTABLE_00);
      return pSVar19;
    }
  }
  else if (*(long *)((long)SVar33 + 0x280) != 0) {
    return *(System_String_o **)(*(long *)((long)SVar33 + 0x280) + 0x1e8);
  }
  *(undefined8 *)((long)ppCVar31 + -0x90) = 0x431b254;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar31 + -0x90) = auVar76._0_8_;
  if (*(char *)((long)SVar33 + 0x288) == '\0') {
    plVar36 = *(long **)((long)SVar33 + 0x150);
    SVar33._stringLength = 0;
    SVar33._firstChar = 0;
    SVar33._6_2_ = 0;
    if (plVar36 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar36 + 0x248);
      pSVar19 = (System_String_o *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (plVar36,*(undefined8 *)(*plVar36 + 0x250),auVar76._8_8_,UNRECOVERED_JUMPTABLE_00);
      return pSVar19;
    }
  }
  else if (*(long *)((long)SVar33 + 0x280) != 0) {
    return *(System_String_o **)(*(long *)((long)SVar33 + 0x280) + 0x1f8);
  }
  *(undefined8 *)((long)ppCVar31 + -0x98) = 0x431b2a4;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar31 + -0x98) = auVar76._0_8_;
  if (*(char *)((long)SVar33 + 0x288) == '\0') {
    plVar36 = *(long **)((long)SVar33 + 0x150);
    SVar33._stringLength = 0;
    SVar33._firstChar = 0;
    SVar33._6_2_ = 0;
    if (plVar36 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar36 + 0x238);
      pSVar19 = (System_String_o *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (plVar36,*(undefined8 *)(*plVar36 + 0x240),auVar76._8_8_,UNRECOVERED_JUMPTABLE_00);
      return pSVar19;
    }
  }
  else if (*(long *)((long)SVar33 + 0x280) != 0) {
    return *(System_String_o **)(*(long *)((long)SVar33 + 0x280) + 0x1f0);
  }
  *(undefined8 *)((long)ppCVar31 + -0xa0) = 0x431b2f4;
  pSVar19 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  *(System_String_Fields *)((long)ppCVar31 + -0xa0) = SVar23;
  SVar23 = SVar33;
  if (*(char *)((long)SVar33 + 0x288) == '\0') {
    *(float *)((long)ppCVar31 + -0xa4) = extraout_XMM0_Da_01;
    if (*(long *)((long)SVar33 + 0x280) != 0) {
      SVar23 = *(System_String_Fields *)((long)SVar33 + 0x218);
      plVar32 = *(long **)(*(long *)((long)SVar33 + 0x280) + 0x88);
      *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x431b3cd;
      bVar16 = System_String__op_Equality
                         ((System_String_o *)SVar23,(System_String_o *)plVar32,(MethodInfo *)0x0);
      if ((char)bVar16 != '\0') {
        return (System_String_o *)CONCAT44(extraout_var_05,bVar16);
      }
      if (*(long *)((long)SVar33 + 0x280) != 0) {
        pSVar19 = *(System_String_o **)((long)SVar33 + 0x218);
        b = *(System_String_o **)(*(long *)((long)SVar33 + 0x280) + 0x90);
        *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x431b3f2;
        bVar16 = System_String__op_Equality(pSVar19,b,(MethodInfo *)0x0);
        if ((char)bVar16 != '\0') {
          return (System_String_o *)CONCAT44(extraout_var_06,bVar16);
        }
        uVar25 = *(undefined8 *)((long)ppCVar31 + -0xa0);
        *(Characters_BaseTitan_o ***)((long)ppCVar31 + -0xa0) = ppCVar38;
        *(undefined8 *)((long)ppCVar31 + -0xa8) = uVar25;
        *(System_String_o **)((long)ppCVar31 + -0xb0) = (System_String_o *)CONCAT44(extraout_var_06,bVar16);
        *(undefined4 *)((long)ppCVar31 + -0xac) = *(undefined4 *)((long)ppCVar31 + -0xa4);
        if (g_data_057adf80 == '\0') {
          *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x430d302;
          il2cpp_runtime_helper_023445d0(&"",0);
          g_data_057adf80 = '\x01';
        }
        plVar32 = *(long **)((long)SVar33 + 0x150);
        if (plVar32 != (long *)0x0) {
          uVar25 = *(undefined8 *)(*plVar32 + 0x250);
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar32 + 0x248);
          *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x430d329;
          pSVar19 = (System_String_o *)(*UNRECOVERED_JUMPTABLE_00)(plVar32,uVar25);
          *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x430d33d;
          bVar16 = System_String__op_Inequality(pSVar19,"",(MethodInfo *)0x0);
          if (((((char)bVar16 == '\0') || (*(int *)((long)SVar33 + 0xf0) == 0x11)) ||
              (*(char *)((long)SVar33 + 0x78) == '\0')) || (0.0 < *(float *)((long)SVar33 + 0x1ec))) {
            return (System_String_o *)CONCAT44(extraout_var,bVar16);
          }
          fVar65 = *(float *)((long)ppCVar31 + -0xac);
          if (fVar65 <= 0.0) {
            uVar25 = *(undefined8 *)(*(long *)SVar33 + 0x820);
            UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)SVar33 + 0x818);
            *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x430d38d;
            fVar65 = (float)(*UNRECOVERED_JUMPTABLE_00)(SVar33,uVar25);
          }
          *(float *)((long)SVar33 + 0x1e0) = fVar65;
          plVar32 = *(long **)((long)SVar33 + 0x150);
          if (plVar32 != (long *)0x0) {
            uVar25 = *(undefined8 *)(*plVar32 + 0x250);
            UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar32 + 0x248);
            *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x430d3b5;
            pSVar19 = (System_String_o *)(*UNRECOVERED_JUMPTABLE_00)(plVar32,uVar25);
            pCVar7 = *(Characters_AnimationHandler_o **)((long)SVar33 + 0xb0);
            if (pCVar7 != (Characters_AnimationHandler_o *)0x0) {
              *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x430d3d2;
              fVar65 = Characters_AnimationHandler__GetLength(pCVar7,pSVar19,(MethodInfo *)0x0);
              *(float *)((long)ppCVar31 + -0xac) = fVar65;
              *(undefined1 *)((long)SVar33 + 0x228) = 1;
              pCVar7 = *(Characters_AnimationHandler_o **)((long)SVar33 + 0xb0);
              if (pCVar7 != (Characters_AnimationHandler_o *)0x0) {
                *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x430d3f8;
                Characters_AnimationHandler__SetCullingType(pCVar7,0,(MethodInfo *)0x0);
                uVar25 = *(undefined8 *)(*(long *)SVar33 + 0xa80);
                UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)SVar33 + 0xa78);
                *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x430d40b;
                (*UNRECOVERED_JUMPTABLE_00)(SVar33,uVar25);
                uVar25 = *(undefined8 *)(*(long *)SVar33 + 0xb70);
                UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)SVar33 + 0xb68);
                *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x430d41e;
                (*UNRECOVERED_JUMPTABLE_00)(SVar33,uVar25);
                *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x430d436;
                Characters_BaseCharacter__CrossFade
                          ((Characters_BaseCharacter_o *)SVar33,pSVar19,0.1,0.0,(MethodInfo *)0x0);
                *(undefined4 *)((long)SVar33 + 0xf0) = 0x13;
                *(System_String_o **)((long)SVar33 + 0x218) = pSVar19;
                *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x430d456;
                il2cpp_runtime_helper_022b4080((long)SVar33 + 0x218,pSVar19);
                *(undefined4 *)((long)SVar33 + 0x204) = *(undefined4 *)((long)ppCVar31 + -0xac);
                uVar25 = *(undefined8 *)(*(long *)SVar33 + 0xbc0);
                UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)SVar33 + 3000);
                *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x430d47f;
                (*UNRECOVERED_JUMPTABLE_00)(SVar33,uVar25);
                *(undefined4 *)((long)ppCVar31 + -0xac) = *(undefined4 *)((long)SVar33 + 0x1e0);
                uVar25 = *(undefined8 *)(*(long *)SVar33 + 0x8a0);
                UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)SVar33 + 0x898);
                *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x430d4a0;
                pSVar19 = (System_String_o *)(*UNRECOVERED_JUMPTABLE_00)(SVar33,uVar25);
                *(float *)((long)SVar33 + 0x1ec) = extraout_XMM0_Da + *(float *)((long)ppCVar31 + -0xac);
                return pSVar19;
              }
            }
          }
        }
        *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x430d4bb;
        pSVar19 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
        return pSVar19;
      }
    }
  }
  else {
    if (*(int *)((long)SVar33 + 0xf0) == 0x11) {
      return pSVar19;
    }
    if (*(char *)((long)SVar33 + 0x78) == '\0') {
      return pSVar19;
    }
    fVar65 = extraout_XMM0_Da_01;
    if (extraout_XMM0_Da_01 <= 0.0) {
      plVar32 = *(long **)(*(long *)SVar33 + 0x820);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)SVar33 + 0x818);
      *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x431b347;
      fVar65 = (float)(*UNRECOVERED_JUMPTABLE_00)();
    }
    *(float *)((long)SVar33 + 0x1e0) = fVar65;
    if (*(long *)((long)SVar33 + 0x280) != 0) {
      pSVar19 = *(System_String_o **)(*(long *)((long)SVar33 + 0x280) + 0x1f8);
      *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x431b383;
      Characters_BaseTitan__StateAction((Characters_BaseTitan_o *)SVar33,0x13,pSVar19,0.1,1,(MethodInfo *)0x0)
      ;
      pSVar19 = (System_String_o *)
                (**(code **)(*(long *)SVar33 + 3000))(SVar33,*(undefined8 *)(*(long *)SVar33 + 0xbc0));
      return pSVar19;
    }
  }
  *(undefined8 *)((long)ppCVar31 + -0xb8) = 0x431b416;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  SVar35 = auVar76._8_8_;
  pSVar19 = auVar76._0_8_;
  *(Characters_BaseTitan_o **)((long)ppCVar31 + -0xb8) = unaff_RBP;
  *(Characters_BaseTitan_o **)((long)ppCVar31 + -0xc0) = __this;
  *(Characters_BaseTitan_o ***)((long)ppCVar31 + -200) = ppCVar38;
  *(undefined8 *)((long)ppCVar31 + -0xd0) = unaff_R13;
  *(System_String_Fields **)((long)ppCVar31 + -0xd8) = unaff_R12;
  *(System_String_Fields *)((long)ppCVar31 + -0xe0) = SVar33;
  SVar27 = (System_String_Fields)((ulong)in_R9 & 0xffffffff);
  *(undefined8 *)((long)ppCVar31 + -0x108) = in_RCX;
  method_01 = (System_String_Fields)plVar32;
  SVar33 = SVar23;
  if (g_data_057adfce == '\0') {
    *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b45a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCharacter);
    *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b466;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b472;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCollisionHandler);
    *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b47e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b48a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b496;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b4a2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b4ae;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b4ba;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b4c6;
    il2cpp_runtime_helper_023445d0(&"GrabRight");
    *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b4d2;
    il2cpp_runtime_helper_023445d0(&"GrabLeft");
    *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b4de;
    il2cpp_runtime_helper_023445d0(&"TitanStun");
    SVar33 = (System_String_Fields)&"Titan";
    *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b4ea;
    pSVar19 = (System_String_o *)il2cpp_runtime_helper_023445d0();
    g_data_057adfce = '\x01';
  }
  *(long **)((long)ppCVar31 + -0xf8) = plVar32;
  if (*(char *)((long)SVar23 + 0x69) == '\0') {
    plVar36._0_4_ = 100;
    plVar36._4_2_ = 0;
    plVar36._6_2_ = 0;
    if (SVar35 != (System_String_Fields)0x0) goto label_0431b513;
label_0431b576:
    cVar14 = (char)SVar27._stringLength;
    if (*(int *)((long)SVar23 + 0xf0) != 10) {
label_0431b68f:
      if (SVar35 == (System_String_Fields)0x0) goto label_0431b6c5;
      pSVar19 = *(System_String_o **)SVar35;
      bVar28 = (byte)pSVar19[0xc].fields._stringLength;
label_0431b69d:
      method_01._1_7_ = 0;
      method_01._stringLength._0_1_ = *(byte *)(TypeInfo_BaseTitan + 0x130);
      if ((bVar28 < *(byte *)(TypeInfo_BaseTitan + 0x130)) ||
         (pSVar19 = pSVar19[8].monitor, *(long *)((long)pSVar19 + (long)method_01 * 8 + -8) != TypeInfo_BaseTitan))
      goto label_0431b6c5;
      if (cVar14 == '\0') {
        return pSVar19;
      }
      if (*(int *)((long)TypeInfo_EffectPrefabs + 0xe4) == 0) {
        *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b851;
        il2cpp_runtime_helper_02337ed0();
      }
      SVar33 = *(System_String_Fields *)((long)ppCVar31 + -0xf8);
      ppCVar38 = (Characters_BaseTitan_o **)&TypeInfo_EffectPrefabs;
      SVar30 = TypeInfo_EffectPrefabs;
      pSVar37 = (System_String_Fields *)SVar27;
      if (SVar33 == (System_String_Fields)0x0) goto label_0431b9f1;
      ppCVar38 = *(Characters_BaseTitan_o ***)(*(long *)((long)TypeInfo_EffectPrefabs + 0xb8) + 0x28);
      method_01._stringLength = 0;
      method_01._firstChar = 0;
      method_01._6_2_ = 0;
      *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b878;
      pUVar24 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)SVar33,(MethodInfo *)0x0);
      SVar30 = SVar33;
      if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_0431b9f1;
      *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b88b;
      UVar79 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
      if (g_data_057a6843 == '\0') {
        *(long *)((long)ppCVar31 + -0xf8) = UVar79._0_8_;
        *(undefined8 *)((long)ppCVar31 + -0xf0) = extraout_XMM0_Qb_06;
        *(float *)((long)ppCVar31 + -0xfc) = UVar79.z;
        *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b8ab;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        UVar79.z = *(float *)((long)ppCVar31 + -0xfc);
        UVar79._0_8_ = *(undefined8 *)((long)ppCVar31 + -0xf8);
        g_data_057a6843 = '\x01';
      }
      UVar75 = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
      *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b8f0;
      Effects_EffectSpawner__Spawn
                ((System_String_o *)ppCVar38,(UnityEngine_Vector3_o)UVar79,(UnityEngine_Quaternion_o)UVar75,
                 1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
      ppCVar38 = &TypeInfo_TitanSounds;
      if ((TypeInfo_TitanSounds->fields)._stepPhase == 0) {
        *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b909;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar19 = *(System_String_o **)&(TypeInfo_TitanSounds->fields).MovementSync[1].fields.Disabled;
      *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b925;
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)SVar23,pSVar19,(MethodInfo *)0x0);
      if (*(char *)((long)SVar35 + 0x68) != '\0') {
        return extraout_RAX_02;
      }
      method_01._stringLength = 0;
      method_01._firstChar = 0;
      method_01._6_2_ = 0;
      *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b93a;
      bVar16 = Characters_BaseCharacter__IsMainCharacter
                         ((Characters_BaseCharacter_o *)SVar23,(MethodInfo *)0x0);
      if ((char)bVar16 != '\0') {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b957;
          il2cpp_runtime_helper_02337ed0();
        }
        SVar30 = *(System_String_Fields *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        ppCVar38 = (Characters_BaseTitan_o **)&TypeInfo_UIManager;
        if (SVar30 == (System_String_Fields)0x0) goto label_0431b9f1;
        method_01 = TypeInfo_InGameMenu;
        if ((*(byte *)(*(long *)SVar30 + 0x130) < *(byte *)((long)TypeInfo_InGameMenu + 0x130)) ||
           (*(System_String_Fields *)
             (*(long *)(*(long *)SVar30 + 200) + -8 + (ulong)*(byte *)((long)TypeInfo_InGameMenu + 0x130) * 8) !=
            TypeInfo_InGameMenu)) goto label_0431b9ec;
        *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b9a5;
        method_01 = (System_String_Fields)plVar36;
        UI_InGameMenu__ShowKillScore((UI_InGameMenu_o *)SVar30,(int32_t)plVar36,0,(MethodInfo *)0x0);
      }
      SVar30._stringLength = 0;
      SVar30._firstChar = 0;
      SVar30._6_2_ = 0;
      if (*(UnityEngine_Object_o **)((long)ppCVar31 + -0x108) == (UnityEngine_Object_o *)0x0)
      goto label_0431b9f1;
      *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b9b5;
      pSVar19 = UnityEngine_Object__get_name
                          (*(UnityEngine_Object_o **)((long)ppCVar31 + -0x108),(MethodInfo *)0x0);
      puVar29 = &"TitanStun";
label_0431b781:
      uVar25 = *puVar29;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)SVar35 + 0x678);
      uVar43 = *(undefined8 *)(*(long *)SVar35 + 0x680);
label_0431b79e:
      pSVar19 = (System_String_o *)(*UNRECOVERED_JUMPTABLE_00)(SVar35,SVar23,plVar36,uVar25,pSVar19,uVar43);
      return pSVar19;
    }
    method_01 = *(System_String_Fields *)(*(long *)SVar23 + 0x8e0);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)SVar23 + 0x8d8);
    *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b597;
    SVar33 = SVar23;
    pSVar19 = (System_String_o *)(*UNRECOVERED_JUMPTABLE_00)();
    if ((char)pSVar19 == '\0') goto label_0431b68f;
    if (SVar35 != (System_String_Fields)0x0) {
      pSVar19 = *(System_String_o **)SVar35;
      bVar28 = (byte)pSVar19[0xc].fields._stringLength;
      if ((*(byte *)((long)TypeInfo_Human + 0x130) <= bVar28) &&
         (SVar33 = (System_String_Fields)pSVar19[8].monitor,
         ((System_String_Fields *)((long)SVar33 + -8))[*(byte *)((long)TypeInfo_Human + 0x130)] == TypeInfo_Human)
         ) {
        ppCVar38 = *(Characters_BaseTitan_o ***)((long)SVar23 + 0x110);
        plVar36 = &TypeInfo_Object;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b5fd;
          il2cpp_runtime_helper_02337ed0();
        }
        method_01._stringLength = 0;
        method_01._firstChar = 0;
        method_01._6_2_ = 0;
        *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b609;
        SVar30 = (System_String_Fields)ppCVar38;
        bVar16 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)ppCVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pSVar19 = (System_String_o *)CONCAT44(extraout_var_07,bVar16);
        if ((char)bVar16 == '\0') {
          return pSVar19;
        }
        if (cVar14 == '\0') {
          return pSVar19;
        }
        if (*(char *)((long)SVar35 + 0x68) != '\0') {
          return pSVar19;
        }
        lVar22 = ((UI_InGameMenu_Fields *)((long)SVar23 + 0x278))->m_CachedPtr;
        pSVar37 = (System_String_Fields *)SVar27;
        if (lVar22 != 0) {
          ppCVar38 = *(Characters_BaseTitan_o ***)(lVar22 + 0x88);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b64e;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b65d;
          method_01 = (System_String_Fields)ppCVar38;
          bVar16 = UnityEngine_Object__op_Equality
                             (*(UnityEngine_Object_o **)((long)ppCVar31 + -0xf8),
                              (UnityEngine_Object_o *)ppCVar38,(MethodInfo *)0x0);
          *(char *)((long)SVar23 + 0x118) = (char)bVar16;
          SVar30._stringLength = 0;
          SVar30._firstChar = 0;
          SVar30._6_2_ = 0;
          if (*(UnityEngine_Object_o **)((long)ppCVar31 + -0x108) != (UnityEngine_Object_o *)0x0) {
            *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b67a;
            pSVar19 = UnityEngine_Object__get_name
                                (*(UnityEngine_Object_o **)((long)ppCVar31 + -0x108),(MethodInfo *)0x0);
            if ((char)bVar16 == '\0') {
              puVar29 = &"GrabRight";
            }
            else {
              puVar29 = &"GrabLeft";
            }
            uVar25 = *puVar29;
            UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)SVar35 + 0x678);
            uVar43 = *(undefined8 *)(*(long *)SVar35 + 0x680);
            plVar36._0_4_ = 0;
            plVar36._4_2_ = 0;
            plVar36._6_2_ = 0;
            goto label_0431b79e;
          }
        }
        goto label_0431b9f1;
      }
      goto label_0431b69d;
    }
label_0431b6c5:
    if (cVar14 == '\0') {
      return pSVar19;
    }
    ppCVar38 = (Characters_BaseTitan_o **)plVar32;
    SVar30 = SVar33;
    pSVar37 = (System_String_Fields *)SVar27;
    if (SVar35 != (System_String_Fields)0x0) {
      if (*(char *)((long)SVar35 + 0x68) != '\0') {
        return pSVar19;
      }
      method_01._stringLength = 0;
      method_01._firstChar = 0;
      method_01._6_2_ = 0;
      *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b6f3;
      bVar16 = Characters_BaseCharacter__IsMainCharacter
                         ((Characters_BaseCharacter_o *)SVar23,(MethodInfo *)0x0);
      if ((char)bVar16 != '\0') {
        plVar32 = &TypeInfo_UIManager;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b710;
          il2cpp_runtime_helper_02337ed0();
        }
        SVar30 = *(System_String_Fields *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        ppCVar38 = (Characters_BaseTitan_o **)plVar32;
        if (SVar30 == (System_String_Fields)0x0) goto label_0431b9f1;
        method_01 = TypeInfo_InGameMenu;
        if ((*(byte *)(*(long *)SVar30 + 0x130) < *(byte *)((long)TypeInfo_InGameMenu + 0x130)) ||
           (*(System_String_Fields *)
             (*(long *)(*(long *)SVar30 + 200) + -8 + (ulong)*(byte *)((long)TypeInfo_InGameMenu + 0x130) * 8) !=
            TypeInfo_InGameMenu)) goto label_0431b9ec;
        *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b766;
        method_01 = (System_String_Fields)plVar36;
        UI_InGameMenu__ShowKillScore((UI_InGameMenu_o *)SVar30,(int32_t)plVar36,0,(MethodInfo *)0x0);
      }
      SVar30._stringLength = 0;
      SVar30._firstChar = 0;
      SVar30._6_2_ = 0;
      ppCVar38 = (Characters_BaseTitan_o **)plVar32;
      if (*(UnityEngine_Object_o **)((long)ppCVar31 + -0x108) != (UnityEngine_Object_o *)0x0) {
        *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b77a;
        pSVar19 = UnityEngine_Object__get_name
                            (*(UnityEngine_Object_o **)((long)ppCVar31 + -0x108),(MethodInfo *)0x0);
        puVar29 = &"Titan";
        goto label_0431b781;
      }
    }
  }
  else {
    plVar36._4_4_ = 0;
    plVar36._0_4_ = *(uint *)((long)SVar23 + 0x6c);
    if (SVar35 == (System_String_Fields)0x0) goto label_0431b576;
label_0431b513:
    pSVar37 = &TypeInfo_CustomLogicCollisionHandler;
    lVar22 = *(long *)SVar35;
    method_01._1_7_ = 0;
    method_01._stringLength._0_1_ = *(byte *)((long)TypeInfo_CustomLogicCollisionHandler + 0x130);
    ppCVar38 = (Characters_BaseTitan_o **)SVar27;
    SVar30 = SVar35;
    if ((*(byte *)((long)TypeInfo_CustomLogicCollisionHandler + 0x130) <= *(byte *)(lVar22 + 0x130)) &&
       (SVar33 = *(System_String_Fields *)(lVar22 + 200),
       ((System_String_Fields *)((long)SVar33 + -8))[(long)method_01] == TypeInfo_CustomLogicCollisionHandler)) {
      SVar30 = *(System_String_Fields *)((long)ppCVar31 + -0xf8);
      if (SVar30 != (System_String_Fields)0x0) {
        ppCVar38 = *(Characters_BaseTitan_o ***)((long)SVar23 + 0x38);
        method_01._stringLength = 0;
        method_01._firstChar = 0;
        method_01._6_2_ = 0;
        *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b7cb;
        pUVar24 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)SVar30,(MethodInfo *)0x0);
        if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
          *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b7de;
          UVar78 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
          method_01 = TypeInfo_CustomLogicCollisionHandler;
          SVar30 = SVar35;
          if ((*(byte *)((long)TypeInfo_CustomLogicCollisionHandler + 0x130) <= *(byte *)(*(long *)SVar35 + 0x130)) &&
             (*(System_String_Fields *)
               (*(long *)(*(long *)SVar35 + 200) + -8 + (ulong)*(byte *)((long)TypeInfo_CustomLogicCollisionHandler + 0x130) * 8) ==
              TypeInfo_CustomLogicCollisionHandler)) {
            CustomLogic_CustomLogicCollisionHandler__GetHit
                      ((CustomLogic_CustomLogicCollisionHandler_o *)SVar35,
                       (Characters_BaseCharacter_o *)SVar23,(System_String_o *)ppCVar38,(int32_t)plVar36,in_R8
                       ,UVar78,(MethodInfo *)0x0);
            return extraout_RAX_01;
          }
          goto label_0431b9ec;
        }
      }
      goto label_0431b9f1;
    }
    method_01 = TypeInfo_BaseCharacter;
    if ((*(byte *)((long)TypeInfo_BaseCharacter + 0x130) <= *(byte *)(lVar22 + 0x130)) &&
       (pSVar19 = *(System_String_o **)(lVar22 + 200), plVar32 = (long *)SVar27,
       pSVar37 = (System_String_Fields *)SVar27,
       *(System_String_Fields *)((long)pSVar19 + (ulong)*(byte *)((long)TypeInfo_BaseCharacter + 0x130) * 8 + -8) ==
       TypeInfo_BaseCharacter)) goto label_0431b576;
label_0431b9ec:
    *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b9f1;
    il2cpp_runtime_helper_022b2fd0();
  }
label_0431b9f1:
  *(undefined8 *)((long)ppCVar31 + -0x110) = 0x431b9f6;
  auVar77 = il2cpp_runtime_helper_022b2c90();
  *(System_String_o **)((long)ppCVar31 + -0x110) = in_R8;
  *(int *)((long)ppCVar31 + -0x168) = auVar77._8_4_;
  *(long *)((long)ppCVar31 + -0x140) = auVar77._0_8_;
  *(undefined8 *)((long)ppCVar31 + -0x138) = extraout_XMM0_Qb_07;
  __this_00 = (long *)SVar30;
  if (g_data_057adfcf == '\0') {
    __this_00 = &TypeInfo_Util;
    *(undefined8 *)((long)ppCVar31 + -0x178) = 0x431ba28;
    il2cpp_runtime_helper_023445d0();
    g_data_057adfcf = '\x01';
  }
  if ((*(System_String_Fields *)((long)SVar30 + 0x70) != (System_String_Fields)0x0) &&
     (__this_00 = *(long **)((long)*(System_String_Fields *)((long)SVar30 + 0x70) + 0x10),
     (System_String_Fields)__this_00 != (System_String_Fields)0x0)) {
    method_01._stringLength = 0;
    method_01._firstChar = 0;
    method_01._6_2_ = 0;
    *(undefined8 *)((long)ppCVar31 + -0x178) = 0x431ba50;
    UVar78 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
    *(undefined8 *)((long)ppCVar31 + -0x178) = 0x431ba6b;
    fVar65 = atan2f(*(float *)((long)ppCVar31 + -0x168) - UVar78.fields.z,
                    SUB164(*(undefined1 (*) [16])((long)ppCVar31 + -0x140),0) - UVar78.fields.x);
    SVar33 = *(System_String_Fields *)((long)SVar30 + 0x70);
    if (SVar33 != (System_String_Fields)0x0) {
      *(float *)((long)ppCVar31 + -0x160) = fVar65;
      pUVar24 = *(UnityEngine_Transform_o **)((long)SVar33 + 0x10);
      __this_00._0_4_ = 0;
      __this_00._4_2_ = 0;
      __this_00._6_2_ = 0;
      if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
        method_01._stringLength = 0;
        method_01._firstChar = 0;
        method_01._6_2_ = 0;
        *(undefined8 *)((long)ppCVar31 + -0x178) = 0x431ba92;
        UVar74 = UnityEngine_Transform__get_rotation(pUVar24,(MethodInfo *)0x0);
        *(undefined8 *)((long)ppCVar31 + -0x178) = 0x431ba99;
        UVar78 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar74,(MethodInfo *)0x0);
        euler.fields.x = UVar78.fields.x * 57.29578;
        euler.fields.y = UVar78.fields.y * 57.29578;
        euler.fields.z = UVar78.fields.z * 57.29578;
        __this_00._0_4_ = 0;
        __this_00._4_2_ = 0;
        __this_00._6_2_ = 0;
        *(undefined8 *)((long)ppCVar31 + -0x178) = 0x431baaf;
        UVar78 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
        fVar65 = UVar78.fields.y + -90.0 + *(float *)((long)ppCVar31 + -0x160) * 57.29578;
        *(float *)((long)ppCVar31 + -0x160) = fVar65;
        *(float *)((long)ppCVar31 + -0x15c) = UVar78.fields.y;
        *(undefined4 *)((long)ppCVar31 + -0x158) = extraout_XMM0_Dc;
        *(undefined4 *)((long)ppCVar31 + -0x154) = extraout_XMM0_Dd;
        *(undefined8 *)((long)ppCVar31 + -0x178) = 0x431bae3;
        fVar65 = floorf(fVar65 / 360.0);
        pvVar4 = (void *)((UI_InGameMenu_Fields *)((long)SVar30 + 0x278))->m_CachedPtr;
        if (pvVar4 != (void *)0x0) {
          *(float *)((long)ppCVar31 + -0x150) = fVar65;
          __this_00 = *(long **)((long)pvVar4 + 0x40);
          if ((System_String_Fields)__this_00 != (System_String_Fields)0x0) {
            method_01._stringLength = 0;
            method_01._firstChar = 0;
            method_01._6_2_ = 0;
            *(undefined8 *)((long)ppCVar31 + -0x178) = 0x431bb0d;
            UVar78 = UnityEngine_Transform__get_position
                               ((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
            pvVar4 = (void *)((UI_InGameMenu_Fields *)((long)SVar30 + 0x278))->m_CachedPtr;
            if (pvVar4 != (void *)0x0) {
              pUVar24 = *(UnityEngine_Transform_o **)((long)pvVar4 + 0x10);
              __this_00._0_4_ = 0;
              __this_00._4_2_ = 0;
              __this_00._6_2_ = 0;
              if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
                *(undefined4 *)((long)ppCVar31 + -0x120) = *(undefined4 *)((long)ppCVar31 + -0x13c);
                *(undefined4 *)((long)ppCVar31 + -0x11c) = *(undefined4 *)((long)ppCVar31 + -0x13c);
                *(undefined4 *)((long)ppCVar31 + -0x118) = *(undefined4 *)((long)ppCVar31 + -0x138);
                *(undefined4 *)((long)ppCVar31 + -0x114) = *(undefined4 *)((long)ppCVar31 + -0x134);
                auVar77 = ZEXT812(0x43b40000);
                fVar65 = *(float *)((long)ppCVar31 + -0x160) - *(float *)((long)ppCVar31 + -0x150) * 360.0;
                if (fVar65 <= 360.0) {
                  auVar77._4_8_ = 0;
                  auVar77._0_4_ = fVar65;
                }
                fVar65 = (float)(-(uint)(0.0 <= fVar65) & auVar77._0_4_);
                auVar73._0_4_ = ~-(uint)(180.0 < fVar65) & (uint)fVar65;
                auVar73._4_4_ = 0;
                auVar73._8_4_ = *(uint *)((long)ppCVar31 + -0x158) & auVar77._8_4_;
                auVar73._12_4_ = 0;
                auVar73 = auVar73 | ZEXT416((uint)(fVar65 + -360.0) & -(uint)(180.0 < fVar65));
                *(uint *)((long)ppCVar31 + -0x160) = auVar73._0_4_ ^ 0x80000000;
                *(undefined4 *)((long)ppCVar31 + -0x15c) = 0x80000000;
                *(uint *)((long)ppCVar31 + -0x158) = auVar73._8_4_ ^ 0x80000000;
                *(uint *)((long)ppCVar31 + -0x154) = auVar73._12_4_ ^ 0x80000000;
                *(float *)((long)ppCVar31 + -0x150) = UVar78.fields.y;
                *(float *)((long)ppCVar31 + -0x14c) = UVar78.fields.y;
                *(undefined4 *)((long)ppCVar31 + -0x148) = extraout_XMM0_Dc_00;
                *(undefined4 *)((long)ppCVar31 + -0x144) = extraout_XMM0_Dd_00;
                *(undefined8 *)((long)ppCVar31 + -0x178) = 0x431bba6;
                UVar78 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
                fVar65 = UVar78.fields.z;
                auVar68._8_4_ = extraout_XMM0_Dc_01;
                auVar68._0_8_ = UVar78.fields._0_8_;
                auVar68._12_4_ = extraout_XMM0_Dd_01;
                if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                  *(undefined1 (*) [16])((long)ppCVar31 + -0x130) = auVar68;
                  *(float *)((long)ppCVar31 + -0x164) = fVar65;
                  *(undefined8 *)((long)ppCVar31 + -0x178) = 0x431bbcf;
                  il2cpp_runtime_helper_02337ed0();
                  fVar65 = *(float *)((long)ppCVar31 + -0x164);
                  auVar68 = *(undefined1 (*) [16])((long)ppCVar31 + -0x130);
                }
                *(undefined8 *)((long)ppCVar31 + -0x178) = 0x431bbec;
                a_02.fields.z = *(float *)((long)ppCVar31 + -0x168);
                a_02.fields._0_8_ = *(undefined8 *)((long)ppCVar31 + -0x140);
                b_04.fields._0_8_ = auVar68._0_8_;
                b_04.fields.z = fVar65;
                fVar65 = Utility_Util__DistanceIgnoreY(a_02,b_04,(MethodInfo *)0x0);
                *(undefined8 *)((long)ppCVar31 + -0x178) = 0x431bbff;
                atan2f(*(float *)((long)ppCVar31 + -0x150) - *(float *)((long)ppCVar31 + -0x120),fVar65);
                return extraout_RAX_03;
              }
            }
          }
        }
      }
    }
  }
  *(undefined8 *)((long)ppCVar31 + -0x178) = 0x431bc17;
  auVar77 = il2cpp_runtime_helper_022b2c90();
  *(System_String_Fields *)((long)ppCVar31 + -0x178) = SVar35;
  *(System_String_Fields *)((long)ppCVar31 + -0x180) = SVar23;
  *(System_String_Fields *)((long)ppCVar31 + -0x188) = SVar30;
  *(long *)((long)ppCVar31 + -0x1f8) = auVar77._0_8_;
  *(undefined8 *)((long)ppCVar31 + -0x1f0) = extraout_XMM0_Qb_08;
  *(int *)((long)ppCVar31 + -0x218) = auVar77._8_4_;
  __this_01 = __this_00;
  if (g_data_057adfd0 == '\0') {
    *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431bc4e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Quaternion);
    __this_01 = &TypeInfo_SceneLoader;
    *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431bc5a;
    il2cpp_runtime_helper_023445d0();
    g_data_057adfd0 = '\x01';
  }
  if (*(long *)((long)__this_00 + 0x70) != 0) {
    pUVar24 = *(UnityEngine_Transform_o **)(*(long *)((long)__this_00 + 0x70) + 0x10);
    __this_01._0_4_ = 0;
    __this_01._4_2_ = 0;
    __this_01._6_2_ = 0;
    if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
      method_01._stringLength = 0;
      method_01._firstChar = 0;
      method_01._6_2_ = 0;
      *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431bc82;
      UVar78 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
      *(long *)((long)ppCVar31 + -0x198) = UVar78.fields._0_8_;
      *(undefined8 *)((long)ppCVar31 + -400) = extraout_XMM0_Qb_09;
      *(float *)((long)ppCVar31 + -0x1d8) = UVar78.fields.z;
      *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431bca2;
      target_00.fields.z = *(float *)((long)ppCVar31 + -0x218);
      target_00.fields._0_8_ = *(undefined8 *)((long)ppCVar31 + -0x1f8);
      __this_01 = __this_00;
      UVar42 = (UnityEngine_Vector2_Fields)
               Characters_BasicTitan__GetLookAngle
                         ((Characters_BasicTitan_o *)__this_00,target_00,(MethodInfo *)method_01);
      *(UnityEngine_Vector2_Fields *)((long)ppCVar31 + -0x208) = UVar42;
      *(undefined8 *)((long)ppCVar31 + -0x200) = extraout_XMM0_Qb_10;
      fVar65 = UVar42.y;
      SVar30._stringLength._0_1_ = fVar65 < -50.0;
      if ((-120.0 < fVar65 && fVar65 < -50.0) || (50.0 < fVar65 && fVar65 < 120.0)) {
        fVar65 = *(float *)((long)__this_00 + 0x2dc);
        if ((fVar65 < -50.0) || (50.0 < fVar65)) {
          lVar22 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
          if ((lVar22 != 0) &&
             (__this_01 = *(long **)(lVar22 + 0x20),
             (System_String_Fields)__this_01 != (System_String_Fields)0x0)) {
            method_01._stringLength = 0;
            method_01._firstChar = 0;
            method_01._6_2_ = 0;
            *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431be36;
            pUVar24 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
            if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
              method_01._stringLength = 0;
              method_01._firstChar = 0;
              method_01._6_2_ = 0;
              *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431be49;
              UVar78 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
              *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431be51;
              __this_01 = __this_00;
              UVar42 = (UnityEngine_Vector2_Fields)
                       Characters_BasicTitan__GetLookAngle
                                 ((Characters_BasicTitan_o *)__this_00,UVar78,(MethodInfo *)method_01);
              *(UnityEngine_Vector2_Fields *)((long)ppCVar31 + -0x208) = UVar42;
              *(undefined8 *)((long)ppCVar31 + -0x200) = extraout_XMM0_Qb_12;
              fVar65 = *(float *)((long)__this_00 + 0x2dc);
              goto label_0431be5f;
            }
          }
          goto label_0431c19b;
        }
label_0431be5f:
        uVar41 = *(undefined4 *)((long)ppCVar31 + -0x208);
        uVar10 = *(undefined4 *)((long)ppCVar31 + -0x200);
        uVar11 = *(undefined4 *)((long)ppCVar31 + -0x1fc);
        *(undefined4 *)((long)__this_00 + 0x2d8) = uVar41;
        *(undefined4 *)((long)ppCVar31 + -0x208) = uVar41;
        *(float *)((long)ppCVar31 + -0x204) = fVar65;
        *(undefined4 *)((long)ppCVar31 + -0x200) = uVar10;
        *(undefined4 *)((long)ppCVar31 + -0x1fc) = uVar11;
        lVar22 = *(long *)((long)__this_00 + 0x278);
        goto joined_r0x0431bf66;
      }
      if (*(long *)((long)__this_00 + 0x70) != 0) {
        pUVar24 = *(UnityEngine_Transform_o **)(*(long *)((long)__this_00 + 0x70) + 0x10);
        __this_01._0_4_ = 0;
        __this_01._4_2_ = 0;
        __this_01._6_2_ = 0;
        if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
          method_01._stringLength = 0;
          method_01._firstChar = 0;
          method_01._6_2_ = 0;
          *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431bd0c;
          UVar78 = UnityEngine_Transform__get_forward(pUVar24,(MethodInfo *)0x0);
          *(long *)((long)ppCVar31 + -0x1a8) = UVar78.fields._0_8_;
          *(undefined8 *)((long)ppCVar31 + -0x1a0) = extraout_XMM0_Qb_11;
          *(float *)((long)ppCVar31 + -0x1dc) = UVar78.fields.z;
          if (g_data_057a6845 == '\0') {
            *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431bd2c;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6845 = '\x01';
          }
          fVar40 = *(float *)((long)ppCVar31 + -0x1f8) - *(float *)((long)ppCVar31 + -0x198);
          fVar52 = *(float *)((long)ppCVar31 + -500) - *(float *)((long)ppCVar31 + -0x194);
          fVar65 = *(float *)((long)ppCVar31 + -0x218) - *(float *)((long)ppCVar31 + -0x1d8);
          iVar1 = *(int *)((long)TypeInfo_Math + 0xe4);
          *(float *)((long)ppCVar31 + -0x1f8) = fVar40;
          *(float *)((long)ppCVar31 + -500) = fVar52;
          *(float *)((long)ppCVar31 + -0x1f0) =
               *(float *)((long)ppCVar31 + -0x1f0) - *(float *)((long)ppCVar31 + -400);
          *(float *)((long)ppCVar31 + -0x1ec) =
               *(float *)((long)ppCVar31 + -0x1ec) - *(float *)((long)ppCVar31 + -0x18c);
          __this_01 = (long *)TypeInfo_Math;
          if (iVar1 == 0) {
            *(float *)((long)ppCVar31 + -0x218) = fVar65;
            *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431bd6d;
            il2cpp_runtime_helper_02337ed0();
            fVar40 = *(float *)((long)ppCVar31 + -0x1f8);
            fVar52 = *(float *)((long)ppCVar31 + -500);
            fVar65 = *(float *)((long)ppCVar31 + -0x218);
          }
          fVar40 = fVar65 * fVar65 + fVar52 * fVar52 + fVar40 * fVar40;
          if (fVar40 < 0.0) {
            *(float *)((long)ppCVar31 + -0x218) = fVar65;
            *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431be99;
            auVar49._0_4_ = sqrtf(fVar40);
            auVar49._4_12_ = extraout_var_12;
            fVar65 = *(float *)((long)ppCVar31 + -0x218);
            auVar76 = *(undefined1 (*) [16])((long)ppCVar31 + -0x1f8);
            if (auVar49._0_4_ <= 1e-05) goto label_0431bdb2;
label_0431beb0:
            auVar50._0_4_ = auVar49._0_4_;
            fVar65 = fVar65 / auVar50._0_4_;
            auVar50._8_4_ = auVar49._8_4_;
            auVar50._12_4_ = auVar49._12_4_;
            auVar50._4_4_ = auVar50._0_4_;
            auVar76 = divps(auVar76,auVar50);
            uVar25 = auVar76._0_8_;
          }
          else {
            auVar49 = ZEXT416((uint)SQRT(fVar40));
            auVar76 = *(undefined1 (*) [16])((long)ppCVar31 + -0x1f8);
            if (1e-05 < SQRT(fVar40)) goto label_0431beb0;
label_0431bdb2:
            if (g_data_057a65d5 == '\0') {
              __this_01 = &TypeInfo_Vector3;
              *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431bdc7;
              il2cpp_runtime_helper_023445d0();
              g_data_057a65d5 = '\x01';
            }
            uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            fVar65 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
          }
          if (0.0 <= *(float *)((long)ppCVar31 + -0x1dc) * fVar65 +
                     *(float *)((long)ppCVar31 + -0x1a4) * (float)((ulong)uVar25 >> 0x20) +
                     *(float *)((long)ppCVar31 + -0x1a8) * (float)uVar25) {
            *(undefined8 *)((long)__this_00 + 0x2d8) = *(undefined8 *)((long)ppCVar31 + -0x208);
            lVar22 = *(long *)((long)__this_00 + 0x278);
joined_r0x0431bf66:
            if ((lVar22 != 0) &&
               (SVar23 = *(System_String_Fields *)(lVar22 + 0x38), SVar23 != (System_String_Fields)0x0)) {
              method_01._stringLength = 0;
              method_01._firstChar = 0;
              method_01._6_2_ = 0;
              *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431bf83;
              UVar74 = UnityEngine_Transform__get_rotation
                                 ((UnityEngine_Transform_o *)SVar23,(MethodInfo *)0x0);
              *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431bf8a;
              UVar78 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar74,(MethodInfo *)0x0);
              euler_00.fields.x = UVar78.fields.x * 57.29578;
              euler_00.fields.y = UVar78.fields.y * 57.29578;
              euler_00.fields.z = UVar78.fields.z * 57.29578;
              __this_01._0_4_ = 0;
              __this_01._4_2_ = 0;
              __this_01._6_2_ = 0;
              *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431bfa0;
              UVar78 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
              lVar22 = *(long *)((long)__this_00 + 0x278);
              if (lVar22 != 0) {
                *(long *)((long)ppCVar31 + -0x1f8) = UVar78.fields._0_8_;
                *(undefined8 *)((long)ppCVar31 + -0x1f0) = extraout_XMM0_Qb_14;
                pUVar24 = *(UnityEngine_Transform_o **)(lVar22 + 0x38);
                __this_01._0_4_ = 0;
                __this_01._4_2_ = 0;
                __this_01._6_2_ = 0;
                if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
                  method_01._stringLength = 0;
                  method_01._firstChar = 0;
                  method_01._6_2_ = 0;
                  *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431bfc9;
                  UVar74 = UnityEngine_Transform__get_rotation(pUVar24,(MethodInfo *)0x0);
                  *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431bfd0;
                  UVar78 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar74,(MethodInfo *)0x0);
                  euler_01.fields.x = UVar78.fields.x * 57.29578;
                  euler_01.fields.y = UVar78.fields.y * 57.29578;
                  euler_01.fields.z = UVar78.fields.z * 57.29578;
                  __this_01._0_4_ = 0;
                  __this_01._4_2_ = 0;
                  __this_01._6_2_ = 0;
                  *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431bfe6;
                  UVar78 = UnityEngine_Quaternion__Internal_MakePositive(euler_01,(MethodInfo *)0x0);
                  lVar22 = *(long *)((long)__this_00 + 0x278);
                  if (lVar22 != 0) {
                    *(long *)((long)ppCVar31 + -0x218) = UVar78.fields._0_8_;
                    *(undefined8 *)((long)ppCVar31 + -0x210) = extraout_XMM0_Qb_15;
                    pUVar24 = *(UnityEngine_Transform_o **)(lVar22 + 0x38);
                    __this_01._0_4_ = 0;
                    __this_01._4_2_ = 0;
                    __this_01._6_2_ = 0;
                    if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
                      auVar76 = *(undefined1 (*) [16])((long)ppCVar31 + -0x208);
                      auVar56 = minps(_DAT_00d1b490,auVar76);
                      uVar15 = -(uint)(-80.0 <= auVar76._0_4_);
                      uVar39 = -(uint)(-80.0 <= auVar76._4_4_);
                      auVar57._0_4_ = auVar56._0_4_ & uVar15;
                      auVar57._4_4_ = auVar56._4_4_ & uVar39;
                      auVar57._8_4_ = auVar56._8_4_ & -(uint)(0.0 <= auVar76._8_4_);
                      auVar57._12_4_ = auVar56._12_4_ & -(uint)(0.0 <= auVar76._12_4_);
                      auVar69._0_8_ = CONCAT44(~uVar39,~uVar15) & 0xc2a00000c2a00000;
                      auVar69._8_8_ = 0;
                      *(undefined1 (*) [16])((long)ppCVar31 + -0x208) = auVar69 | auVar57;
                      *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431c036;
                      UVar74 = UnityEngine_Transform__get_rotation(pUVar24,(MethodInfo *)0x0);
                      auVar58._8_8_ = auVar57._8_8_;
                      auVar58._0_8_ = UVar74.fields._8_8_;
                      *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431c03d;
                      UVar78 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar74,(MethodInfo *)0x0);
                      auVar77 = auVar58._4_12_;
                      euler_02.fields.x = UVar78.fields.x * 57.29578;
                      euler_02.fields.y = UVar78.fields.y * 57.29578;
                      euler_02.fields.z = UVar78.fields.z * 57.29578;
                      *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431c053;
                      UVar78 = UnityEngine_Quaternion__Internal_MakePositive(euler_02,(MethodInfo *)0x0);
                      euler_03.fields.x =
                           (SUB164(*(undefined1 (*) [16])((long)ppCVar31 + -0x1f8),0) +
                           *(float *)((long)ppCVar31 + -0x208)) * 0.017453292;
                      euler_03.fields.y =
                           (*(float *)((long)ppCVar31 + -0x214) + *(float *)((long)ppCVar31 + -0x204)) *
                           0.017453292;
                      euler_03.fields.z = UVar78.fields.z * 0.017453292;
                      *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431c07f;
                      auVar59._12_4_ = 0;
                      auVar59._0_12_ = auVar77;
                      auVar59 = auVar59 << 0x20;
                      UVar74 = UnityEngine_Quaternion__Internal_FromEulerRad(euler_03,(MethodInfo *)0x0);
                      uVar25 = auVar59._8_8_;
                      method_01._stringLength = 0;
                      method_01._firstChar = 0;
                      method_01._6_2_ = 0;
                      *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431c089;
                      __this_01 = (long *)SVar23;
                      UnityEngine_Transform__set_rotation
                                ((UnityEngine_Transform_o *)SVar23,UVar74,(MethodInfo *)0x0);
                      if ((*(long *)((long)__this_00 + 0x278) != 0) &&
                         (SVar30 = *(System_String_Fields *)(*(long *)((long)__this_00 + 0x278) + 0x38),
                         SVar30 != (System_String_Fields)0x0)) {
                        *(undefined8 *)((long)ppCVar31 + -0x208) = *(undefined8 *)((long)__this_00 + 0x2a0);
                        *(undefined8 *)((long)ppCVar31 + -0x200) = 0;
                        *(undefined8 *)((long)ppCVar31 + -0x1f8) = *(undefined8 *)((long)__this_00 + 0x2a8);
                        *(undefined8 *)((long)ppCVar31 + -0x1f0) = 0;
                        *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431c0cc;
                        UVar74 = UnityEngine_Transform__get_localRotation
                                           ((UnityEngine_Transform_o *)SVar30,(MethodInfo *)0x0);
                        *(long *)((long)ppCVar31 + -0x218) = UVar74.fields._0_8_;
                        *(undefined8 *)((long)ppCVar31 + -0x210) = extraout_XMM0_Qb_16;
                        *(long *)((long)ppCVar31 + -0x1d8) = UVar74.fields._8_8_;
                        *(undefined8 *)((long)ppCVar31 + -0x1d0) = uVar25;
                        *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431c0dc;
                        fVar65 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                        b_01.fields._0_8_ = SUB168(*(undefined1 (*) [16])((long)ppCVar31 + -0x218),0);
                        b_01.fields._8_8_ = SUB168(*(undefined1 (*) [16])((long)ppCVar31 + -0x1d8),0);
                        *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431c101;
                        a.fields._8_8_ = *(undefined8 *)((long)ppCVar31 + -0x1f8);
                        a.fields._0_8_ = *(undefined8 *)((long)ppCVar31 + -0x208);
                        UVar74 = UnityEngine_Quaternion__Lerp(a,b_01,fVar65 * 10.0,(MethodInfo *)0x0);
                        method_01._stringLength = 0;
                        method_01._firstChar = 0;
                        method_01._6_2_ = 0;
                        *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431c10b;
                        __this_01 = (long *)SVar30;
                        UnityEngine_Transform__set_localRotation
                                  ((UnityEngine_Transform_o *)SVar30,UVar74,(MethodInfo *)0x0);
                        if ((*(long *)((long)__this_00 + 0x278) != 0) &&
                           (__this_01 = *(long **)(*(long *)((long)__this_00 + 0x278) + 0x38),
                           (System_String_Fields)__this_01 != (System_String_Fields)0x0)) {
                          method_01._stringLength = 0;
                          method_01._firstChar = 0;
                          method_01._6_2_ = 0;
                          *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431c12b;
                          UVar75 = (UnityEngine_Quaternion_Fields)
                                   UnityEngine_Transform__get_localRotation
                                             ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
                          *(UnityEngine_Quaternion_Fields *)((long)__this_00 + 0x2a0) = UVar75;
                          if (*(long *)((long)__this_00 + 0x278) != 0) {
                            pUVar24 = *(UnityEngine_Transform_o **)(*(long *)((long)__this_00 + 0x278) + 0x38)
                            ;
                            __this_01._0_4_ = 0;
                            __this_01._4_2_ = 0;
                            __this_01._6_2_ = 0;
                            if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
                              *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431c152;
                              UVar74 = UnityEngine_Transform__get_rotation(pUVar24,(MethodInfo *)0x0);
                              *(undefined8 *)((long)ppCVar31 + -0x1c8) = 0;
                              *(undefined8 *)((long)ppCVar31 + -0x1c0) = 0;
                              *(undefined4 *)((long)ppCVar31 + -0x1b8) = 0;
                              *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431c176;
                              System_Nullable_Quaternion____ctor
                                        ((System_Nullable_Quaternion__o)
                                         *(System_Nullable_Quaternion__Fields *)((long)ppCVar31 + -0x218),
                                         UVar74,(MethodInfo_37E8CD0 *)((long)ppCVar31 + -0x1c8));
                              uVar15 = *(uint *)((long)ppCVar31 + -0x1b8);
                              *(uint *)((long)__this_00 + 0x2c0) = uVar15;
                              uVar25 = *(undefined8 *)((long)ppCVar31 + -0x1c0);
                              *(undefined8 *)((long)__this_00 + 0x2b0) =
                                   *(undefined8 *)((long)ppCVar31 + -0x1c8);
                              *(undefined8 *)((long)__this_00 + 0x2b8) = uVar25;
                              return (System_String_o *)(ulong)uVar15;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            lVar22 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
            if ((lVar22 != 0) &&
               (__this_01 = *(long **)(lVar22 + 0x20),
               (System_String_Fields)__this_01 != (System_String_Fields)0x0)) {
              method_01._stringLength = 0;
              method_01._firstChar = 0;
              method_01._6_2_ = 0;
              *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431bf16;
              pUVar24 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
              if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
                method_01._stringLength = 0;
                method_01._firstChar = 0;
                method_01._6_2_ = 0;
                *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431bf29;
                UVar78 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
                *(undefined8 *)((long)ppCVar31 + -0x220) = 0x431bf31;
                __this_01 = __this_00;
                UVar42 = (UnityEngine_Vector2_Fields)
                         Characters_BasicTitan__GetLookAngle
                                   ((Characters_BasicTitan_o *)__this_00,UVar78,(MethodInfo *)method_01);
                *(UnityEngine_Vector2_Fields *)((long)ppCVar31 + -0x208) = UVar42;
                *(undefined8 *)((long)ppCVar31 + -0x200) = extraout_XMM0_Qb_13;
                *(UnityEngine_Vector2_Fields *)((long)__this_00 + 0x2d8) = UVar42;
                lVar22 = *(long *)((long)__this_00 + 0x278);
                goto joined_r0x0431bf66;
              }
            }
          }
        }
      }
    }
  }
label_0431c19b:
  *(code **)((long)ppCVar31 + -0x220) = Characters_BasicTitan__LateUpdateHead;
  il2cpp_runtime_helper_022b2c90();
  *(System_String_Fields *)((long)ppCVar31 + -0x220) = SVar23;
  *(System_String_Fields *)((long)ppCVar31 + -0x228) = SVar30;
  uVar25 = extraout_XMM1_Qb_01;
  if (g_data_057adfd1 == '\0') {
    *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c1c5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c1d1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c1dd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057adfd1 = '\x01';
    uVar25 = extraout_XMM1_Qb_02;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c1fc;
    il2cpp_runtime_helper_02337ed0();
    uVar25 = extraout_XMM1_Qb_03;
  }
  *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c208;
  __this_03 = (long *)method_01;
  bVar16 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)method_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar16 == '\0') {
label_0431c63e:
    pvVar4 = (void *)((UI_InGameMenu_Fields *)((long)__this_01 + 0x278))->m_CachedPtr;
    if ((pvVar4 != (void *)0x0) &&
       (method_01 = *(System_String_Fields *)((long)pvVar4 + 0x38), method_01 != (System_String_Fields)0x0)) {
      *(System_String_c **)((long)ppCVar31 + -0x2a0) = ((System_String_o *)((long)__this_01 + 0x2a0))->klass;
      *(undefined8 *)((long)ppCVar31 + -0x298) = 0;
      *(UI_ExternalLinkPopup_o **)((long)ppCVar31 + -0x2b0) =
           *(UI_ExternalLinkPopup_o **)((long)__this_01 + 0x2a8);
      *(undefined8 *)((long)ppCVar31 + -0x2a8) = 0;
      *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c680;
      UVar74 = UnityEngine_Transform__get_localRotation
                         ((UnityEngine_Transform_o *)method_01,(MethodInfo *)0x0);
      *(long *)((long)ppCVar31 + -0x290) = UVar74.fields._0_8_;
      *(undefined8 *)((long)ppCVar31 + -0x288) = extraout_XMM0_Qb_24;
      *(long *)((long)ppCVar31 + -0x270) = UVar74.fields._8_8_;
      *(undefined8 *)((long)ppCVar31 + -0x268) = uVar25;
      *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c691;
      fVar65 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      b_02.fields._0_8_ = SUB168(*(undefined1 (*) [16])((long)ppCVar31 + -0x290),0);
      b_02.fields._8_8_ = SUB168(*(undefined1 (*) [16])((long)ppCVar31 + -0x270),0);
      *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c6b6;
      a_00.fields._8_8_ = *(undefined8 *)((long)ppCVar31 + -0x2b0);
      a_00.fields._0_8_ = *(undefined8 *)((long)ppCVar31 + -0x2a0);
      UVar74 = UnityEngine_Quaternion__Lerp(a_00,b_02,fVar65 * 10.0,(MethodInfo *)0x0);
      *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c6c0;
      __this_03 = (long *)method_01;
      UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)method_01,UVar74,(MethodInfo *)0x0);
      pvVar4 = (void *)((UI_InGameMenu_Fields *)((long)__this_01 + 0x278))->m_CachedPtr;
      if (pvVar4 != (void *)0x0) {
        pUVar24 = *(UnityEngine_Transform_o **)((long)pvVar4 + 0x38);
        __this_03._0_4_ = 0;
        __this_03._4_2_ = 0;
        __this_03._6_2_ = 0;
        if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
          *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c6dc;
          UVar74 = UnityEngine_Transform__get_localRotation(pUVar24,(MethodInfo *)0x0);
          *(UnityEngine_Quaternion_Fields *)((long)__this_01 + 0x2a0) = UVar74.fields;
          return extraout_RAX_04;
        }
      }
    }
  }
  else if (((method_01 != (System_String_Fields)0x0) &&
           (*(System_String_Fields *)((long)method_01 + 0x70) != (System_String_Fields)0x0)) &&
          (__this_03 = *(long **)((long)*(System_String_Fields *)((long)method_01 + 0x70) + 0x10),
          (System_String_Fields)__this_03 != (System_String_Fields)0x0)) {
    *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c23a;
    UVar78 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
    uVar43 = UVar78.fields._0_8_;
    uVar25 = extraout_XMM0_Qb_17;
    if ((*(byte *)(TypeInfo_BaseTitan + 0x130) <= *(byte *)(*(long *)method_01 + 0x130)) &&
       (*(long *)(*(long *)(*(long *)method_01 + 200) + -8 + (ulong)*(byte *)(TypeInfo_BaseTitan + 0x130) * 8) ==
        TypeInfo_BaseTitan)) {
      if ((*(System_Collections_Generic_Dictionary_string__Type__o **)((long)method_01 + 0xf8) ==
           (System_Collections_Generic_Dictionary_string__Type__o *)0x0) ||
         (__this_03 = (long *)((*(System_Collections_Generic_Dictionary_string__Type__o **)
                                 ((long)method_01 + 0xf8))->fields)._keys,
         (System_String_Fields)__this_03 == (System_String_Fields)0x0)) goto label_0431c6f2;
      *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c288;
      UVar78 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
      uVar43 = UVar78.fields._0_8_;
      uVar25 = extraout_XMM0_Qb_18;
    }
    SVar23 = *(System_String_Fields *)((long)method_01 + 0x70);
    if (SVar23 != (System_String_Fields)0x0) {
      *(undefined8 *)((long)ppCVar31 + -0x2a0) = uVar43;
      *(undefined8 *)((long)ppCVar31 + -0x298) = uVar25;
      __this_03 = *(long **)((long)SVar23 + 0x10);
      if ((System_String_Fields)__this_03 != (System_String_Fields)0x0) {
        *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c2ae;
        UVar78 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
        SVar23 = *(System_String_Fields *)((long)__this_01 + 0x70);
        if (SVar23 != (System_String_Fields)0x0) {
          *(float *)((long)ppCVar31 + -0x290) = UVar78.fields.z;
          *(long *)((long)ppCVar31 + -0x2b0) = UVar78.fields._0_8_;
          *(undefined8 *)((long)ppCVar31 + -0x2a8) = extraout_XMM0_Qb_19;
          __this_03 = *(long **)((long)SVar23 + 0x10);
          if ((System_String_Fields)__this_03 != (System_String_Fields)0x0) {
            *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c2d9;
            UVar78 = UnityEngine_Transform__get_position
                               ((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
            *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c2f3;
            fVar65 = atan2f(*(float *)((long)ppCVar31 + -0x290) - UVar78.fields.z,
                            SUB164(*(undefined1 (*) [16])((long)ppCVar31 + -0x2b0),0) - UVar78.fields.x);
            SVar23 = *(System_String_Fields *)((long)__this_01 + 0x70);
            if (SVar23 != (System_String_Fields)0x0) {
              *(float *)((long)ppCVar31 + -0x2b0) = fVar65;
              pUVar24 = *(UnityEngine_Transform_o **)((long)SVar23 + 0x10);
              __this_03._0_4_ = 0;
              __this_03._4_2_ = 0;
              __this_03._6_2_ = 0;
              if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
                *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c319;
                UVar74 = UnityEngine_Transform__get_rotation(pUVar24,(MethodInfo *)0x0);
                *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c320;
                UVar78 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar74,(MethodInfo *)0x0);
                euler_04.fields.x = UVar78.fields.x * 57.29578;
                euler_04.fields.y = UVar78.fields.y * 57.29578;
                euler_04.fields.z = UVar78.fields.z * 57.29578;
                __this_03._0_4_ = 0;
                __this_03._4_2_ = 0;
                __this_03._6_2_ = 0;
                *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c336;
                UVar78 = UnityEngine_Quaternion__Internal_MakePositive(euler_04,(MethodInfo *)0x0);
                fVar65 = UVar78.fields.y + -90.0 + *(float *)((long)ppCVar31 + -0x2b0) * 57.29578;
                *(float *)((long)ppCVar31 + -0x290) = fVar65;
                *(float *)((long)ppCVar31 + -0x28c) = UVar78.fields.y;
                *(undefined4 *)((long)ppCVar31 + -0x288) = extraout_XMM0_Dc_02;
                *(undefined4 *)((long)ppCVar31 + -0x284) = extraout_XMM0_Dd_02;
                *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c369;
                fVar65 = floorf(fVar65 / 360.0);
                pvVar4 = (void *)((UI_InGameMenu_Fields *)((long)__this_01 + 0x278))->m_CachedPtr;
                if (pvVar4 != (void *)0x0) {
                  *(float *)((long)ppCVar31 + -0x270) = fVar65;
                  __this_03 = *(long **)((long)pvVar4 + 0x40);
                  if ((System_String_Fields)__this_03 != (System_String_Fields)0x0) {
                    *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c393;
                    UVar78 = UnityEngine_Transform__get_position
                                       ((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
                    SVar23 = *(System_String_Fields *)((long)method_01 + 0x70);
                    if (SVar23 != (System_String_Fields)0x0) {
                      *(long *)((long)ppCVar31 + -0x2b0) = UVar78.fields._0_8_;
                      *(undefined8 *)((long)ppCVar31 + -0x2a8) = extraout_XMM0_Qb_20;
                      __this_03 = *(long **)((long)SVar23 + 0x10);
                      if ((System_String_Fields)__this_03 != (System_String_Fields)0x0) {
                        *(undefined4 *)((long)ppCVar31 + -0x260) = *(undefined4 *)((long)__this_01 + 0x11c);
                        *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c3c7;
                        UVar78 = UnityEngine_Transform__get_position
                                           ((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
                        pvVar4 = (void *)((UI_InGameMenu_Fields *)((long)__this_01 + 0x278))->m_CachedPtr;
                        if (pvVar4 != (void *)0x0) {
                          *(float *)((long)ppCVar31 + -0x274) = UVar78.fields.z;
                          *(long *)((long)ppCVar31 + -0x240) = UVar78.fields._0_8_;
                          *(undefined8 *)((long)ppCVar31 + -0x238) = extraout_XMM0_Qb_21;
                          pUVar24 = *(UnityEngine_Transform_o **)((long)pvVar4 + 0x10);
                          __this_03._0_4_ = 0;
                          __this_03._4_2_ = 0;
                          __this_03._6_2_ = 0;
                          if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
                            auVar60._4_4_ = *(undefined4 *)((long)ppCVar31 + -0x2ac);
                            auVar60._0_4_ = *(undefined4 *)((long)ppCVar31 + -0x2ac);
                            auVar60._8_4_ = *(undefined4 *)((long)ppCVar31 + -0x2a8);
                            auVar60._12_4_ = *(undefined4 *)((long)ppCVar31 + -0x2a4);
                            *(undefined1 (*) [16])((long)ppCVar31 + -0x2b0) = auVar60;
                            *(undefined4 *)((long)ppCVar31 + -0x2a0) =
                                 *(undefined4 *)((long)ppCVar31 + -0x29c);
                            *(undefined4 *)((long)ppCVar31 + -0x29c) =
                                 *(undefined4 *)((long)ppCVar31 + -0x29c);
                            *(undefined4 *)((long)ppCVar31 + -0x298) =
                                 *(undefined4 *)((long)ppCVar31 + -0x298);
                            *(undefined4 *)((long)ppCVar31 + -0x294) =
                                 *(undefined4 *)((long)ppCVar31 + -0x294);
                            *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c410;
                            UVar78 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
                            fVar65 = UVar78.fields.z;
                            auVar70._8_4_ = extraout_XMM0_Dc_03;
                            auVar70._0_8_ = UVar78.fields._0_8_;
                            auVar70._12_4_ = extraout_XMM0_Dd_03;
                            if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                              *(undefined1 (*) [16])((long)ppCVar31 + -0x250) = auVar70;
                              *(float *)((long)ppCVar31 + -0x278) = fVar65;
                              *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c439;
                              il2cpp_runtime_helper_02337ed0();
                              fVar65 = *(float *)((long)ppCVar31 + -0x278);
                              auVar70 = *(undefined1 (*) [16])((long)ppCVar31 + -0x250);
                            }
                            __this_03._0_4_ = 0;
                            __this_03._4_2_ = 0;
                            __this_03._6_2_ = 0;
                            *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c456;
                            a_03.fields.z = *(float *)((long)ppCVar31 + -0x274);
                            a_03.fields._0_8_ = *(undefined8 *)((long)ppCVar31 + -0x240);
                            b_05.fields._0_8_ = auVar70._0_8_;
                            b_05.fields.z = fVar65;
                            fVar65 = Utility_Util__DistanceIgnoreY(a_03,b_05,(MethodInfo *)0x0);
                            *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c476;
                            fVar65 = atan2f((*(float *)((long)ppCVar31 + -0x2b0) +
                                            *(float *)((long)ppCVar31 + -0x260) +
                                            *(float *)((long)ppCVar31 + -0x260)) -
                                            *(float *)((long)ppCVar31 + -0x2a0),fVar65);
                            pvVar4 = (void *)((UI_InGameMenu_Fields *)((long)__this_01 + 0x278))->m_CachedPtr;
                            if (pvVar4 != (void *)0x0) {
                              *(float *)((long)ppCVar31 + -0x2a0) = fVar65;
                              *(undefined4 *)((long)ppCVar31 + -0x29c) = extraout_XMM0_Db;
                              *(undefined4 *)((long)ppCVar31 + -0x298) = extraout_XMM0_Dc_04;
                              *(undefined4 *)((long)ppCVar31 + -0x294) = extraout_XMM0_Dd_04;
                              method_01 = *(System_String_Fields *)((long)pvVar4 + 0x38);
                              if (method_01 != (System_String_Fields)0x0) {
                                *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c4a2;
                                UVar74 = UnityEngine_Transform__get_rotation
                                                   ((UnityEngine_Transform_o *)method_01,(MethodInfo *)0x0);
                                *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c4a9;
                                UVar78 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar74,(MethodInfo *)0x0)
                                ;
                                euler_05.fields.x = UVar78.fields.x * 57.29578;
                                euler_05.fields.y = UVar78.fields.y * 57.29578;
                                euler_05.fields.z = UVar78.fields.z * 57.29578;
                                __this_03._0_4_ = 0;
                                __this_03._4_2_ = 0;
                                __this_03._6_2_ = 0;
                                *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c4bf;
                                UVar78 = UnityEngine_Quaternion__Internal_MakePositive
                                                   (euler_05,(MethodInfo *)0x0);
                                pvVar4 = (void *)((UI_InGameMenu_Fields *)((long)__this_01 + 0x278))->
                                                 m_CachedPtr;
                                if (pvVar4 != (void *)0x0) {
                                  *(long *)((long)ppCVar31 + -0x2b0) = UVar78.fields._0_8_;
                                  *(undefined8 *)((long)ppCVar31 + -0x2a8) = extraout_XMM0_Qb_22;
                                  pUVar24 = *(UnityEngine_Transform_o **)((long)pvVar4 + 0x38);
                                  __this_03._0_4_ = 0;
                                  __this_03._4_2_ = 0;
                                  __this_03._6_2_ = 0;
                                  if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
                                    *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c4e7;
                                    UVar74 = UnityEngine_Transform__get_rotation(pUVar24,(MethodInfo *)0x0);
                                    *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c4ee;
                                    UVar78 = UnityEngine_Quaternion__Internal_ToEulerRad
                                                       (UVar74,(MethodInfo *)0x0);
                                    euler_06.fields.x = UVar78.fields.x * 57.29578;
                                    euler_06.fields.y = UVar78.fields.y * 57.29578;
                                    euler_06.fields.z = UVar78.fields.z * 57.29578;
                                    __this_03._0_4_ = 0;
                                    __this_03._4_2_ = 0;
                                    __this_03._6_2_ = 0;
                                    *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c504;
                                    UVar78 = UnityEngine_Quaternion__Internal_MakePositive
                                                       (euler_06,(MethodInfo *)0x0);
                                    pvVar4 = (void *)((UI_InGameMenu_Fields *)((long)__this_01 + 0x278))->
                                                     m_CachedPtr;
                                    if (pvVar4 != (void *)0x0) {
                                      *(long *)((long)ppCVar31 + -0x260) = UVar78.fields._0_8_;
                                      *(undefined8 *)((long)ppCVar31 + -600) = extraout_XMM0_Qb_23;
                                      pUVar24 = *(UnityEngine_Transform_o **)((long)pvVar4 + 0x38);
                                      __this_03._0_4_ = 0;
                                      __this_03._4_2_ = 0;
                                      __this_03._6_2_ = 0;
                                      if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
                                        fVar40 = *(float *)((long)ppCVar31 + -0x290) -
                                                 *(float *)((long)ppCVar31 + -0x270) * 360.0;
                                        fVar65 = 360.0;
                                        if (fVar40 <= 360.0) {
                                          fVar65 = fVar40;
                                        }
                                        fVar65 = (float)(-(uint)(0.0 <= fVar40) & (uint)fVar65);
                                        fVar40 = (float)(~-(uint)(180.0 < fVar65) & (uint)fVar65 |
                                                        (uint)(fVar65 + -360.0) & -(uint)(180.0 < fVar65));
                                        fVar52 = -fVar40;
                                        fVar65 = 40.0;
                                        if (fVar52 <= 40.0) {
                                          fVar65 = fVar52;
                                        }
                                        uVar15 = -(uint)(fVar40 <= 40.0);
                                        fVar40 = *(float *)((long)ppCVar31 + -0x2a0) * 57.29578;
                                        *(undefined1 (*) [16])((long)ppCVar31 + -0x290) =
                                             ZEXT416(~uVar15 & 0xc2200000 | (uint)fVar65 & uVar15);
                                        auVar44 = ZEXT812(0x41f00000);
                                        if (fVar40 <= 30.0) {
                                          auVar44._4_8_ = 0;
                                          auVar44._0_4_ = fVar40;
                                        }
                                        auVar61._0_12_ = ZEXT812(0xc2200000);
                                        auVar61._12_4_ = 0;
                                        *(uint *)((long)ppCVar31 + -0x2a0) =
                                             ~-(uint)(-40.0 <= fVar40) & 0xc2200000 |
                                             auVar44._0_4_ & -(uint)(-40.0 <= fVar40);
                                        *(undefined4 *)((long)ppCVar31 + -0x29c) = 0;
                                        *(uint *)((long)ppCVar31 + -0x298) =
                                             auVar44._8_4_ & *(uint *)((long)ppCVar31 + -0x298);
                                        *(undefined4 *)((long)ppCVar31 + -0x294) = 0;
                                        *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c5e3;
                                        UVar74 = UnityEngine_Transform__get_rotation
                                                           (pUVar24,(MethodInfo *)0x0);
                                        auVar62._8_8_ = auVar61._8_8_;
                                        auVar62._0_8_ = UVar74.fields._8_8_;
                                        *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c5ea;
                                        UVar78 = UnityEngine_Quaternion__Internal_ToEulerRad
                                                           (UVar74,(MethodInfo *)0x0);
                                        auVar77 = auVar62._4_12_;
                                        euler_07.fields.x = UVar78.fields.x * 57.29578;
                                        euler_07.fields.y = UVar78.fields.y * 57.29578;
                                        euler_07.fields.z = UVar78.fields.z * 57.29578;
                                        *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c600;
                                        UVar78 = UnityEngine_Quaternion__Internal_MakePositive
                                                           (euler_07,(MethodInfo *)0x0);
                                        euler_08.fields.x =
                                             (SUB164(*(undefined1 (*) [16])((long)ppCVar31 + -0x2b0),0) +
                                             SUB164(*(undefined1 (*) [16])((long)ppCVar31 + -0x2a0),0)) *
                                             0.017453292;
                                        euler_08.fields.y =
                                             (*(float *)((long)ppCVar31 + -0x25c) +
                                             *(float *)((long)ppCVar31 + -0x290)) * 0.017453292;
                                        euler_08.fields.z = UVar78.fields.z * 0.017453292;
                                        *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c634;
                                        auVar63._12_4_ = 0;
                                        auVar63._0_12_ = auVar77;
                                        auVar63 = auVar63 << 0x20;
                                        UVar74 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                           (euler_08,(MethodInfo *)0x0);
                                        uVar25 = auVar63._8_8_;
                                        *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c63e;
                                        __this_03 = (long *)method_01;
                                        UnityEngine_Transform__set_rotation
                                                  ((UnityEngine_Transform_o *)method_01,UVar74,
                                                   (MethodInfo *)0x0);
                                        goto label_0431c63e;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_0431c6f2:
  *(undefined8 *)((long)ppCVar31 + -0x2b8) = 0x431c6f7;
  il2cpp_runtime_helper_022b2c90();
  *(Characters_BaseTitan_o ***)((long)ppCVar31 + -0x2b8) = ppCVar38;
  *(long **)((long)ppCVar31 + -0x2c0) = __this_00;
  *(long **)((long)ppCVar31 + -0x2c8) = __this_01;
  *(System_String_Fields **)((long)ppCVar31 + -0x2d0) = pSVar37;
  *(long **)((long)ppCVar31 + -0x2d8) = plVar36;
  *(System_String_Fields *)((long)ppCVar31 + -0x2e0) = method_01;
  if (g_data_057adfd2 == '\0') {
    *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c726;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCharacter);
    *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c732;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ITargetable);
    *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c73e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c74a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Quaternion_get_Value);
    *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c756;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057adfd2 = '\x01';
  }
  *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c767;
  Characters_BaseTitan__LateUpdate((Characters_BaseTitan_o *)__this_03,(MethodInfo *)0x0);
  fVar65 = *(float *)((long)__this_03 + 0x30c);
  fVar40 = *(float *)((long)__this_03 + 0x310);
  auVar76 = ZEXT416((uint)fVar40);
  if ((fVar40 != fVar65) || (NAN(fVar40) || NAN(fVar65))) {
    *(float *)((long)__this_03 + 0x310) = fVar65;
    *(float *)((long)__this_03 + 0x314) = fVar65;
    *(float *)((long)__this_03 + 0x318) = fVar65;
  }
  if (*(long *)((long)__this_03 + 0x278) == 0) goto label_0431ce75;
  pUVar24 = *(UnityEngine_Transform_o **)(*(long *)((long)__this_03 + 0x278) + 0x38);
  if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_0431ce75;
  *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c7bf;
  UVar78 = UnityEngine_Transform__get_localScale(pUVar24,(MethodInfo *)0x0);
  auVar64._12_4_ = 0;
  auVar64._0_12_ = auVar76._4_12_;
  auVar64 = auVar64 << 0x20;
  if ((UVar78.fields.x != *(float *)((long)__this_03 + 0x310)) ||
     (NAN(UVar78.fields.x) || NAN(*(float *)((long)__this_03 + 0x310)))) {
    if (*(long *)((long)__this_03 + 0x278) == 0) goto label_0431ce75;
    pUVar24 = *(UnityEngine_Transform_o **)(*(long *)((long)__this_03 + 0x278) + 0x38);
    if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_0431ce75;
    UVar79 = *(UnityEngine_Vector3_Fields *)((long)__this_03 + 0x310);
    *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c801;
    auVar64 = ZEXT816(0) << 0x20;
    UnityEngine_Transform__set_localScale(pUVar24,(UnityEngine_Vector3_o)UVar79,(MethodInfo *)0x0);
  }
  *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c80b;
  bVar16 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this_03,(MethodInfo *)0x0);
  uVar15 = *(uint *)((long)__this_03 + 0xf0);
  pMVar26 = extraout_RDX;
  if ((char)bVar16 == '\0') {
    if (*(char *)((long)__this_03 + 0x78) != '\0') {
      if ((*(char *)((long)__this_03 + 0x308) != '\0') &&
         (iVar17 = *(int32_t *)((long)__this_03 + 0x304), -1 < iVar17)) {
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c8d8;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c8e1;
        target = Utility_Util__FindCharacterByViewId(iVar17,(MethodInfo *)0x0);
        *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c8ec;
        Characters_BasicTitan__LateUpdateHead((Characters_BasicTitan_o *)__this_03,target,method_00);
        lVar22 = *(long *)((long)__this_03 + 0x278);
        goto joined_r0x0431c938;
      }
      goto label_0431cae2;
    }
    if ((*(byte *)((long)__this_03 + 0x2c4) & (uVar15 == 0x18 || (uVar15 < 2 || uVar15 == 3))) != 0) {
      if (*(long *)((long)__this_03 + 0x278) == 0) goto label_0431ce75;
      pUVar24 = *(UnityEngine_Transform_o **)(*(long *)((long)__this_03 + 0x278) + 0x38);
      *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c996;
      UVar74 = System_Nullable_Quaternion___get_Value
                         ((System_Nullable_Quaternion__o)
                          *(System_Nullable_Quaternion__Fields *)((long)ppCVar31 + -0x328),
                          (MethodInfo_37E8CF0 *)((long)__this_03 + 0x2c4));
      uVar25 = auVar64._8_8_;
      if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_0431ce75;
      *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c9a9;
      UnityEngine_Transform__set_rotation(pUVar24,UVar74,(MethodInfo *)0x0);
      if (*(long *)((long)__this_03 + 0x278) == 0) goto label_0431ce75;
      pUVar24 = *(UnityEngine_Transform_o **)(*(long *)((long)__this_03 + 0x278) + 0x38);
      if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_0431ce75;
      *(undefined8 *)((long)ppCVar31 + -0x2f8) = *(undefined8 *)((long)__this_03 + 0x2a0);
      *(undefined8 *)((long)ppCVar31 + -0x2f0) = 0;
      *(undefined8 *)((long)ppCVar31 + -0x308) = *(undefined8 *)((long)__this_03 + 0x2a8);
      *(undefined8 *)((long)ppCVar31 + -0x300) = 0;
      *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c9ec;
      UVar74 = UnityEngine_Transform__get_localRotation(pUVar24,(MethodInfo *)0x0);
      *(long *)((long)ppCVar31 + -0x318) = UVar74.fields._0_8_;
      *(undefined8 *)((long)ppCVar31 + -0x310) = extraout_XMM0_Qb_25;
      *(long *)((long)ppCVar31 + -0x328) = UVar74.fields._8_8_;
      *(undefined8 *)((long)ppCVar31 + -800) = uVar25;
      *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c9fc;
      fVar65 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431ca21;
      a_01.fields._8_8_ = *(undefined8 *)((long)ppCVar31 + -0x308);
      a_01.fields._0_8_ = *(undefined8 *)((long)ppCVar31 + -0x2f8);
      b_03.fields._8_8_ = *(undefined8 *)((long)ppCVar31 + -0x328);
      b_03.fields._0_8_ = *(undefined8 *)((long)ppCVar31 + -0x318);
      UVar74 = UnityEngine_Quaternion__Lerp(a_01,b_03,fVar65 * 10.0,(MethodInfo *)0x0);
      *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431ca2b;
      UnityEngine_Transform__set_localRotation(pUVar24,UVar74,(MethodInfo *)0x0);
      lVar22 = *(long *)((long)__this_03 + 0x278);
      goto joined_r0x0431ca35;
    }
  }
  else {
    SVar23._1_7_ = method_01._1_7_;
    if (*(char *)((long)__this_03 + 0x78) == '\0') {
      if (3 < uVar15) goto label_0431ce7a;
      if (uVar15 == 2) goto label_0431ce7a;
      pMVar26 = *(MethodInfo **)(*__this_03 + 0x560);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*__this_03 + 0x558);
      *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c926;
      auVar76 = (*UNRECOVERED_JUMPTABLE_00)(__this_03);
      *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c92e;
      Characters_BasicTitan__LateUpdateHeadPosition
                ((Characters_BasicTitan_o *)__this_03,(UnityEngine_Vector3_o)auVar76._0_12_,pMVar26);
      lVar22 = *(long *)((long)__this_03 + 0x278);
      goto joined_r0x0431c938;
    }
    plVar32 = *(long **)((long)__this_03 + 0x148);
    if (plVar32 == (long *)0x0) {
label_0431cacf:
      *(undefined4 *)((long)__this_03 + 0x304) = 0xffffffff;
    }
    else {
      lVar22 = *plVar32;
      if ((ulong)*(ushort *)(lVar22 + 0x12e) != 0) {
        lVar34 = 0;
        do {
          if (*(long *)(*(long *)(lVar22 + 0xb0) + lVar34) == TypeInfo_ITargetable) {
            puVar29 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar22 + 0xb0) + 8 + lVar34) + 2) * 0x10 + lVar22 + 0x138);
            goto label_0431ca87;
          }
          lVar34 = lVar34 + 0x10;
        } while ((ulong)*(ushort *)(lVar22 + 0x12e) << 4 != lVar34);
      }
      *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431c890;
      puVar29 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar32,TypeInfo_ITargetable,2);
label_0431ca87:
      UNRECOVERED_JUMPTABLE_00 = (code *)*puVar29;
      *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431ca90;
      cVar14 = (*UNRECOVERED_JUMPTABLE_00)();
      pMVar26 = extraout_RDX_00;
      if ((cVar14 == '\0') || (plVar32 = *(long **)((long)__this_03 + 0x148), plVar32 == (long *)0x0))
      goto label_0431cacf;
      pMVar26 = (MethodInfo *)(ulong)*(byte *)((long)TypeInfo_BaseCharacter + 0x130);
      if ((*(byte *)(*plVar32 + 0x130) < *(byte *)((long)TypeInfo_BaseCharacter + 0x130)) ||
         (*(System_String_Fields *)(*(long *)(*plVar32 + 200) + -8 + (long)pMVar26 * 8) != TypeInfo_BaseCharacter))
      goto label_0431cacf;
      if (plVar32[0xe] == 0) goto label_0431ce75;
      lVar22 = *(long *)(plVar32[0xe] + 0x20);
      if (lVar22 == 0) goto label_0431ce75;
      *(undefined4 *)((long)__this_03 + 0x304) = *(undefined4 *)(lVar22 + 0x94);
      bVar9 = false;
      if (*(char *)((long)__this_03 + 0x288) == '\0') {
        lVar22 = *plVar32;
        if ((ulong)*(ushort *)(lVar22 + 0x12e) != 0) {
          lVar34 = 0;
          do {
            if (*(long *)(*(long *)(lVar22 + 0xb0) + lVar34) == TypeInfo_ITargetable) {
              puVar29 = (undefined8 *)
                        (lVar22 + (long)(*(int *)(*(long *)(lVar22 + 0xb0) + 8 + lVar34) + 1) * 0x10 + 0x138);
              goto label_0431cf26;
            }
            lVar34 = lVar34 + 0x10;
          } while ((ulong)*(ushort *)(lVar22 + 0x12e) << 4 != lVar34);
        }
        *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cf0d;
        puVar29 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar32,TypeInfo_ITargetable,1);
label_0431cf26:
        UNRECOVERED_JUMPTABLE_00 = (code *)*puVar29;
        *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cf2f;
        auVar77 = (*UNRECOVERED_JUMPTABLE_00)(plVar32);
        lVar22 = *(long *)((long)__this_03 + 0x278);
        if (lVar22 == 0) goto label_0431ce75;
        *(int *)((long)ppCVar31 + -0x308) = auVar77._8_4_;
        *(long *)((long)ppCVar31 + -0x2f8) = auVar77._0_8_;
        *(undefined8 *)((long)ppCVar31 + -0x2f0) = extraout_XMM0_Qb_26;
        pUVar24 = *(UnityEngine_Transform_o **)(lVar22 + 0x10);
        if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_0431ce75;
        *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cf5e;
        UVar78 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
        fVar65 = UVar78.fields.z;
        auVar71._8_4_ = extraout_XMM0_Dc_05;
        auVar71._0_8_ = UVar78.fields._0_8_;
        auVar71._12_4_ = extraout_XMM0_Dd_05;
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          *(undefined1 (*) [16])((long)ppCVar31 + -0x318) = auVar71;
          *(float *)((long)ppCVar31 + -0x328) = fVar65;
          *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cf86;
          il2cpp_runtime_helper_02337ed0();
          fVar65 = *(float *)((long)ppCVar31 + -0x328);
          auVar71 = *(undefined1 (*) [16])((long)ppCVar31 + -0x318);
        }
        *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cfa2;
        a_04.fields.z = *(float *)((long)ppCVar31 + -0x308);
        a_04.fields._0_8_ = *(undefined8 *)((long)ppCVar31 + -0x2f8);
        b_06.fields._0_8_ = auVar71._0_8_;
        b_06.fields.z = fVar65;
        fVar65 = Utility_Util__DistanceIgnoreY(a_04,b_06,(MethodInfo *)0x0);
        bVar9 = fVar65 < 100.0;
        pMVar26 = extraout_RDX_01;
      }
      SVar23._stringLength._0_1_ = uVar15 < 2 || uVar15 == 3;
      if ((bool)(bVar9 & SVar23._stringLength._0_1_)) {
        *(undefined1 *)((long)__this_03 + 0x308) = 1;
        SVar33 = *(System_String_Fields *)((long)__this_03 + 0x148);
        if (SVar33 != (System_String_Fields)0x0) {
          pMVar26 = (MethodInfo *)(ulong)*(byte *)((long)TypeInfo_BaseCharacter + 0x130);
          if ((*(byte *)(*(long *)SVar33 + 0x130) < *(byte *)((long)TypeInfo_BaseCharacter + 0x130)) ||
             (*(System_String_Fields *)(*(long *)(*(long *)SVar33 + 200) + -8 + (long)pMVar26 * 8) !=
              TypeInfo_BaseCharacter)) {
            *(code **)((long)ppCVar31 + -0x330) = Characters_BasicTitan__OnDestroy;
            il2cpp_runtime_helper_022b2fd0();
            *(long **)((long)ppCVar31 + -0x330) = __this_03;
            *(long **)((long)ppCVar31 + -0x338) = plVar32;
            *(System_String_Fields *)((long)ppCVar31 + -0x340) = SVar23;
            if (g_data_057adfd3 == '\0') {
              *(undefined8 *)((long)ppCVar31 + -0x348) = 0x431d03d;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              g_data_057adfd3 = '\x01';
            }
            *(undefined8 *)((long)ppCVar31 + -0x348) = 0x431d04e;
            SVar35 = SVar33;
            Characters_BaseCharacter__OnDestroy((Characters_BaseCharacter_o *)SVar33,(MethodInfo *)0x0);
            if (*(System_String_o **)((long)SVar33 + 0x278) != (System_String_o *)0x0) {
              SVar23 = (*(System_String_o **)((long)SVar33 + 0x278))[0xd].fields;
              __this_03 = &TypeInfo_Object;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)((long)ppCVar31 + -0x348) = 0x431d07d;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)ppCVar31 + -0x348) = 0x431d089;
              SVar35 = SVar23;
              bVar16 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)SVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                 );
              if ((char)bVar16 == '\0') {
label_0431d0d2:
                if (*(long *)((long)SVar33 + 0x278) != 0) {
                  SVar23 = *(System_String_Fields *)(*(long *)((long)SVar33 + 0x278) + 0x150);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    *(undefined8 *)((long)ppCVar31 + -0x348) = 0x431d0f6;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  *(undefined8 *)((long)ppCVar31 + -0x348) = 0x431d102;
                  SVar35 = SVar23;
                  bVar16 = UnityEngine_Object__op_Inequality
                                     ((UnityEngine_Object_o *)SVar23,(UnityEngine_Object_o *)0x0,
                                      (MethodInfo *)0x0);
                  if ((char)bVar16 == '\0') {
                    return (System_String_o *)CONCAT44(extraout_var_09,bVar16);
                  }
                  if (*(long *)((long)SVar33 + 0x278) != 0) {
                    pUVar5 = *(UnityEngine_Component_o **)(*(long *)((long)SVar33 + 0x278) + 0x150);
                    SVar35._stringLength = 0;
                    SVar35._firstChar = 0;
                    SVar35._6_2_ = 0;
                    if (pUVar5 != (UnityEngine_Component_o *)0x0) {
                      *(undefined8 *)((long)ppCVar31 + -0x348) = 0x431d125;
                      obj = (UnityEngine_Object_o *)
                            UnityEngine_Component__get_gameObject(pUVar5,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        *(undefined8 *)((long)ppCVar31 + -0x348) = 0x431d139;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
                      return extraout_RAX_07;
                    }
                  }
                }
              }
              else if (*(long *)((long)SVar33 + 0x278) != 0) {
                pUVar5 = *(UnityEngine_Component_o **)(*(long *)((long)SVar33 + 0x278) + 0x148);
                SVar35._stringLength = 0;
                SVar35._firstChar = 0;
                SVar35._6_2_ = 0;
                if (pUVar5 != (UnityEngine_Component_o *)0x0) {
                  *(undefined8 *)((long)ppCVar31 + -0x348) = 0x431d0b4;
                  SVar23 = (System_String_Fields)
                           UnityEngine_Component__get_gameObject(pUVar5,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    *(undefined8 *)((long)ppCVar31 + -0x348) = 0x431d0c8;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  *(undefined8 *)((long)ppCVar31 + -0x348) = 0x431d0d2;
                  SVar35 = SVar23;
                  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar23,(MethodInfo *)0x0);
                  goto label_0431d0d2;
                }
              }
            }
            *(undefined8 *)((long)ppCVar31 + -0x348) = 0x431d153;
            uVar25 = il2cpp_runtime_helper_022b2c90();
            *(System_String_Fields *)((long)ppCVar31 + -0x348) = SVar33;
            *(System_String_Fields *)((long)ppCVar31 + -0x350) = SVar23;
            *(undefined8 *)((long)ppCVar31 + -0x358) = uVar25;
            if (g_data_057adfd4 == '\0') {
              *(undefined8 *)((long)ppCVar31 + -0x360) = 0x431d17c;
              il2cpp_runtime_helper_023445d0(&"");
              g_data_057adfd4 = '\x01';
            }
            pCVar18 = *(Characters_BaseTitan_o **)((long)SVar35 + 0x280);
            if (pCVar18 != (Characters_BaseTitan_o *)0x0) {
              SVar23 = *(System_String_Fields *)((long)SVar35 + 0xb0);
              pIVar3 = (pCVar18->klass->vtable)._7_unknown.methodPtr;
              *(undefined8 *)((long)ppCVar31 + -0x360) = 0x431d1aa;
              pMVar26 = (MethodInfo *)(*pIVar3)();
              if (SVar23 != (System_String_Fields)0x0) {
                *(undefined8 *)((long)ppCVar31 + -0x360) = 0x431d1c0;
                bVar16 = Characters_AnimationHandler__IsPlaying
                                   ((Characters_AnimationHandler_o *)SVar23,(System_String_o *)pMVar26,
                                    (MethodInfo *)0x0);
                if ((char)bVar16 == '\0') {
                  *(undefined8 *)((long)ppCVar31 + -0x360) = 0x431d213;
                  pSVar19 = Characters_BasicTitan__GetPlayingRunAnimation
                                      ((Characters_BasicTitan_o *)SVar35,pMVar26);
                  *(undefined8 *)((long)ppCVar31 + -0x360) = 0x431d227;
                  bVar16 = System_String__op_Inequality(pSVar19,"",(MethodInfo *)0x0);
                  if ((char)bVar16 == '\0') {
                    return (System_String_o *)(ulong)*(uint *)((long)SVar35 + 0xd0);
                  }
                  pMVar26 = *(MethodInfo **)((long)SVar35 + 0xb0);
                  pCVar18 = (Characters_BaseTitan_o *)0x0;
                  if (pMVar26 != (MethodInfo *)0x0) {
                    *(undefined8 *)((long)ppCVar31 + -0x360) = 0x431d23e;
                    fVar65 = Characters_AnimationHandler__GetCurrentNormalizedTime
                                       ((Characters_AnimationHandler_o *)pMVar26,(MethodInfo *)0x0);
                    *(undefined8 *)((long)ppCVar31 + -0x360) = 0x431d24b;
                    fVar65 = fmodf(fVar65,1.0,pMVar26);
                    if (fVar65 < 0.0) {
                      return (System_String_o *)0x1;
                    }
                    return (System_String_o *)(ulong)(0.5 <= fVar65);
                  }
                }
                else {
                  pMVar26 = *(MethodInfo **)((long)SVar35 + 0xb0);
                  pCVar18 = (Characters_BaseTitan_o *)0x0;
                  if (pMVar26 != (MethodInfo *)0x0) {
                    *(undefined8 *)((long)ppCVar31 + -0x360) = 0x431d1dd;
                    fVar65 = Characters_AnimationHandler__GetCurrentNormalizedTime
                                       ((Characters_AnimationHandler_o *)pMVar26,(MethodInfo *)0x0);
                    *(undefined8 *)((long)ppCVar31 + -0x360) = 0x431d1ea;
                    fVar65 = fmodf(fVar65,1.0,pMVar26);
                    if (fVar65 < 0.1) {
                      return (System_String_o *)0x0;
                    }
                    return (System_String_o *)(ulong)(fVar65 < 0.6);
                  }
                }
              }
            }
            *(code **)((long)ppCVar31 + -0x360) = Characters_BasicTitan__GetPlayingRunAnimation;
            uVar25 = il2cpp_runtime_helper_022b2c90();
            *(long **)((long)ppCVar31 + -0x360) = __this_03;
            *(System_String_Fields *)((long)ppCVar31 + -0x368) = SVar35;
            *(System_String_Fields **)((long)ppCVar31 + -0x370) = &TypeInfo_BaseCharacter;
            *(System_String_Fields *)((long)ppCVar31 + -0x378) = SVar23;
            *(undefined8 *)((long)ppCVar31 + -0x380) = uVar25;
            __this_02 = (System_String_o **)pCVar18;
            if (g_data_057adfd5 == '\0') {
              __this_02 = &"";
              *(undefined8 *)((long)ppCVar31 + -0x388) = 0x431d2a0;
              il2cpp_runtime_helper_023445d0();
              g_data_057adfd5 = '\x01';
            }
            lVar22 = *(long *)&(pCVar18->fields)._furthestCoreLocalPosition.fields.z;
            if ((lVar22 == 0) ||
               (__this_02 = *(System_String_o ***)&(pCVar18->fields)._cameraFPS,
               (Characters_BaseTitan_o *)__this_02 == (Characters_BaseTitan_o *)0x0)) {
label_0431d34f:
              *(undefined8 *)((long)ppCVar31 + -0x388) = 0x431d354;
              il2cpp_runtime_helper_022b2c90();
            }
            else {
              pSVar19 = *(System_String_o **)(lVar22 + 0x18);
              *(undefined8 *)((long)ppCVar31 + -0x388) = 0x431d2d2;
              bVar16 = Characters_AnimationHandler__IsPlaying
                                 ((Characters_AnimationHandler_o *)__this_02,pSVar19,(MethodInfo *)0x0);
              lVar22 = *(long *)&(pCVar18->fields)._furthestCoreLocalPosition.fields.z;
              if (lVar22 == 0) goto label_0431d34f;
              if ((char)bVar16 != '\0') {
                return *(System_String_o **)(lVar22 + 0x18);
              }
              __this_03 = *(long **)(lVar22 + 0x10);
              if ((System_String_Fields)__this_03 == (System_String_Fields)0x0) goto label_0431d34f;
              SVar23._stringLength = 0;
              SVar23._firstChar = 0;
              SVar23._6_2_ = 0;
              while( true ) {
                SVar27._4_4_ = 0;
                SVar27._stringLength = *(uint *)((long)__this_03 + 0x18);
                if ((long)(int)*(uint *)((long)__this_03 + 0x18) <= (long)SVar23) {
                  return "";
                }
                if ((ulong)SVar27 <= (ulong)SVar23) break;
                __this_02 = *(System_String_o ***)&(pCVar18->fields)._cameraFPS;
                if ((Characters_BaseTitan_o *)__this_02 == (Characters_BaseTitan_o *)0x0) goto label_0431d34f;
                pSVar19 = *(System_String_o **)((long)__this_03 + 0x20 + (long)SVar23 * 8);
                *(undefined8 *)((long)ppCVar31 + -0x388) = 0x431d32c;
                bVar16 = Characters_AnimationHandler__IsPlaying
                                   ((Characters_AnimationHandler_o *)__this_02,pSVar19,(MethodInfo *)0x0);
                SVar23 = (System_String_Fields)((long)SVar23 + 1);
                if ((char)bVar16 != '\0') {
                  return pSVar19;
                }
              }
            }
            *(undefined8 *)((long)ppCVar31 + -0x388) = 0x431d359;
            il2cpp_runtime_helper_022b2ca0();
            *(ulong *)((long)ppCVar31 + -0x388) = CONCAT71(SUB87(ppCVar38,1),uVar15 == 3);
            *(Characters_BaseTitan_o **)((long)ppCVar31 + -0x390) = pCVar18;
            *(System_String_Fields *)((long)ppCVar31 + -0x398) = SVar23;
            if (g_data_057adfd6 == '\0') {
              *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d383;
              il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
              *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d38f;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
              g_data_057adfd6 = '\x01';
            }
            *(undefined8 *)((long)ppCVar31 + -0x3ac) = 0;
            *(undefined8 *)((long)ppCVar31 + -0x3a4) = 0;
            *(undefined8 *)((long)ppCVar31 + -0x3b8) = 0;
            *(undefined8 *)((long)ppCVar31 + -0x3b0) = 0;
            *(undefined8 *)((long)ppCVar31 + -0x3c8) = 0;
            *(undefined8 *)((long)ppCVar31 + -0x3c0) = 0;
            *(undefined4 *)((long)ppCVar31 + -0x440) = 0;
            pSVar8 = (((Characters_BaseTitan_o *)__this_02)->fields).OnPlayerPropertiesChanged;
            if (pSVar8 != (System_Action_Hashtable__o *)0x0) {
              pCVar18 = *(Characters_BaseTitan_o **)&(pSVar8->fields).method_is_virtual;
              if (pCVar18 != (Characters_BaseTitan_o *)0x0) {
                bVar28 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
                if (((pCVar18->klass->_2).naturalAligment < bVar28) ||
                   ((pCVar18->klass->_2).typeHierarchy[(ulong)bVar28 - 1] != TypeInfo_CapsuleCollider)) goto label_0431d85d;
              }
              cVar14 = *(char *)&(((Characters_BaseTitan_o *)__this_02)->fields)._rootMotionAnimations;
              if (*(int *)&(((Characters_BaseTitan_o *)__this_02)->fields).OutlineComponent - 5U < 2) {
                if (pCVar18 != (Characters_BaseTitan_o *)0x0) {
                  fVar65 = *(float *)&(((Characters_BaseTitan_o *)((long)__this_02 + 0x2a0))->fields).
                                      FeedKillerName * 0.7;
                  if (cVar14 == '\0') {
label_0431d48f:
                    *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d499;
                    UnityEngine_CapsuleCollider__set_radius
                              ((UnityEngine_CapsuleCollider_o *)pCVar18,fVar65,(MethodInfo *)0x0);
                    goto label_0431d499;
                  }
label_0431d460:
                  *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d46a;
                  UnityEngine_CapsuleCollider__set_height
                            ((UnityEngine_CapsuleCollider_o *)pCVar18,fVar65,(MethodInfo *)0x0);
                  cVar14 = *(char *)&(((Characters_BaseTitan_o *)__this_02)->fields)._rootMotionAnimations;
joined_r0x0431d4a0:
                  if (cVar14 == '\0') {
                    *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d828;
                    Characters_BaseTitan__CheckGround((Characters_BaseTitan_o *)__this_02,(MethodInfo *)0x0);
                    return extraout_RAX_08;
                  }
                  pSVar8 = (((Characters_BaseTitan_o *)__this_02)->fields).OnPlayerPropertiesChanged;
                  if ((pSVar8 != (System_Action_Hashtable__o *)0x0) &&
                     (pUVar5 = *(UnityEngine_Component_o **)&(pSVar8->fields).method_is_virtual,
                     pUVar5 != (UnityEngine_Component_o *)0x0)) {
                    *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d4ca;
                    pUVar24 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0);
                    if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
                      *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d4dd;
                      UVar78 = UnityEngine_Transform__get_lossyScale(pUVar24,(MethodInfo *)0x0);
                      *(long *)((long)ppCVar31 + -0x418) = UVar78.fields._0_8_;
                      *(undefined8 *)((long)ppCVar31 + -0x410) = extraout_XMM0_Qb_27;
                      *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d4ec;
                      fVar65 = UnityEngine_CapsuleCollider__get_radius
                                         ((UnityEngine_CapsuleCollider_o *)pCVar18,(MethodInfo *)0x0);
                      pSVar8 = (((Characters_BaseTitan_o *)__this_02)->fields).OnPlayerPropertiesChanged;
                      if (pSVar8 != (System_Action_Hashtable__o *)0x0) {
                        *(float *)((long)ppCVar31 + -0x438) = fVar65;
                        pUVar5 = *(UnityEngine_Component_o **)&(pSVar8->fields).method_is_virtual;
                        if (pUVar5 != (UnityEngine_Component_o *)0x0) {
                          *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d516;
                          pUVar24 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0);
                          if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
                            *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d529;
                            UVar78 = UnityEngine_Transform__get_lossyScale(pUVar24,(MethodInfo *)0x0);
                            *(long *)((long)ppCVar31 + -0x3f8) = UVar78.fields._0_8_;
                            *(undefined8 *)((long)ppCVar31 + -0x3f0) = extraout_XMM0_Qb_28;
                            *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d538;
                            fVar65 = UnityEngine_CapsuleCollider__get_height
                                               ((UnityEngine_CapsuleCollider_o *)pCVar18,(MethodInfo *)0x0);
                            *(float *)((long)ppCVar31 + -0x428) = fVar65;
                            *(undefined4 *)((long)ppCVar31 + -0x424) = extraout_XMM0_Db_00;
                            *(undefined4 *)((long)ppCVar31 + -0x420) = extraout_XMM0_Dc_06;
                            *(undefined4 *)((long)ppCVar31 + -0x41c) = extraout_XMM0_Dd_06;
                            lVar22 = *(long *)&(((Characters_BaseTitan_o *)__this_02)->fields).Dead;
                            if ((lVar22 != 0) &&
                               (pUVar24 = *(UnityEngine_Transform_o **)(lVar22 + 0x10),
                               pUVar24 != (UnityEngine_Transform_o *)0x0)) {
                              *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d55e;
                              UVar78 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
                              *(long *)((long)ppCVar31 + -1000) = UVar78.fields._0_8_;
                              *(undefined8 *)((long)ppCVar31 + -0x3e0) = extraout_XMM0_Qb_29;
                              *(float *)((long)ppCVar31 + -0x3d8) = UVar78.fields.z;
                              if (g_data_057a6844 == '\0') {
                                *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d57e;
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                                g_data_057a6844 = '\x01';
                              }
                              lVar22 = *(long *)&(((Characters_BaseTitan_o *)__this_02)->fields).Dead;
                              if ((lVar22 != 0) &&
                                 (pUVar24 = *(UnityEngine_Transform_o **)(lVar22 + 0x10),
                                 pUVar24 != (UnityEngine_Transform_o *)0x0)) {
                                fVar65 = *(float *)((long)ppCVar31 + -0x418);
                                lVar22 = *(long *)(TypeInfo_Vector3 + 0xb8);
                                *(undefined8 *)((long)ppCVar31 + -0x408) = *(undefined8 *)(lVar22 + 0x18);
                                *(undefined8 *)((long)ppCVar31 + -0x400) = 0;
                                *(float *)((long)ppCVar31 + -0x418) =
                                     fVar65 * *(float *)((long)ppCVar31 + -0x438);
                                *(undefined4 *)((long)ppCVar31 + -0x414) =
                                     *(undefined4 *)((long)ppCVar31 + -0x414);
                                *(undefined4 *)((long)ppCVar31 + -0x410) =
                                     *(undefined4 *)((long)ppCVar31 + -0x410);
                                *(undefined4 *)((long)ppCVar31 + -0x40c) =
                                     *(undefined4 *)((long)ppCVar31 + -0x40c);
                                fVar40 = fVar65 * *(float *)((long)ppCVar31 + -0x438) + 1.0;
                                fVar65 = *(float *)(lVar22 + 0x20);
                                *(undefined1 (*) [16])((long)ppCVar31 + -0x438) = ZEXT416((uint)fVar40);
                                *(float *)((long)ppCVar31 + -0x444) = fVar65 * fVar40;
                                *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d5f2;
                                UVar78 = UnityEngine_Transform__get_forward(pUVar24,(MethodInfo *)0x0);
                                lVar22 = *(long *)&(((Characters_BaseTitan_o *)__this_02)->fields).Dead;
                                if (lVar22 != 0) {
                                  pUVar24 = *(UnityEngine_Transform_o **)(lVar22 + 0x10);
                                  if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
                                    fVar65 = *(float *)((long)ppCVar31 + -0x420);
                                    fVar40 = *(float *)((long)ppCVar31 + -0x41c);
                                    fVar52 = (*(float *)((long)ppCVar31 + -0x428) *
                                              *(float *)((long)ppCVar31 + -0x3f8) -
                                             (*(float *)((long)ppCVar31 + -0x418) +
                                             *(float *)((long)ppCVar31 + -0x418))) * 0.5;
                                    *(float *)((long)ppCVar31 + -1000) =
                                         *(float *)((long)ppCVar31 + -1000) +
                                         *(float *)((long)ppCVar31 + -0x438) *
                                         *(float *)((long)ppCVar31 + -0x408);
                                    *(float *)((long)ppCVar31 + -0x3e4) =
                                         *(float *)((long)ppCVar31 + -0x3e4) +
                                         *(float *)((long)ppCVar31 + -0x438) *
                                         *(float *)((long)ppCVar31 + -0x404);
                                    *(float *)((long)ppCVar31 + -0x3e0) =
                                         *(float *)((long)ppCVar31 + -0x3e0) +
                                         *(float *)((long)ppCVar31 + -0x430) *
                                         *(float *)((long)ppCVar31 + -0x400);
                                    *(float *)((long)ppCVar31 + -0x3dc) =
                                         *(float *)((long)ppCVar31 + -0x3dc) +
                                         *(float *)((long)ppCVar31 + -0x42c) *
                                         *(float *)((long)ppCVar31 + -0x3fc);
                                    *(float *)((long)ppCVar31 + -0x3d8) =
                                         *(float *)((long)ppCVar31 + -0x3d8) +
                                         *(float *)((long)ppCVar31 + -0x444);
                                    *(float *)((long)ppCVar31 + -0x428) = fVar52;
                                    *(undefined4 *)((long)ppCVar31 + -0x424) =
                                         *(undefined4 *)((long)ppCVar31 + -0x424);
                                    *(float *)((long)ppCVar31 + -0x420) = fVar65;
                                    *(float *)((long)ppCVar31 + -0x41c) = fVar40;
                                    *(float *)((long)ppCVar31 + -0x438) = fVar52;
                                    *(float *)((long)ppCVar31 + -0x434) = fVar52;
                                    *(float *)((long)ppCVar31 + -0x430) = fVar65;
                                    *(float *)((long)ppCVar31 + -0x42c) = fVar40;
                                    *(float *)((long)ppCVar31 + -0x3f8) = UVar78.fields.x * fVar52;
                                    *(float *)((long)ppCVar31 + -0x3f4) = UVar78.fields.y * fVar52;
                                    *(float *)((long)ppCVar31 + -0x3f0) = extraout_XMM0_Dc_07 * fVar65;
                                    *(float *)((long)ppCVar31 + -0x3ec) = extraout_XMM0_Dd_07 * fVar40;
                                    *(float *)((long)ppCVar31 + -0x408) = UVar78.fields.z * fVar52;
                                    *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d683;
                                    UVar78 = UnityEngine_Transform__get_forward(pUVar24,(MethodInfo *)0x0);
                                    fVar40 = UVar78.fields.x * *(float *)((long)ppCVar31 + -0x438);
                                    fVar52 = UVar78.fields.y * *(float *)((long)ppCVar31 + -0x434);
                                    fVar53 = extraout_XMM0_Dc_08 * *(float *)((long)ppCVar31 + -0x430);
                                    fVar54 = extraout_XMM0_Dd_08 * *(float *)((long)ppCVar31 + -0x42c);
                                    fVar65 = UVar78.fields.z * *(float *)((long)ppCVar31 + -0x428);
                                    *(undefined1 *)
                                     ((long)&(((Characters_BaseTitan_o *)__this_02)->fields).Animation + 5) =
                                         0;
                                    if (g_data_057ac31b == '\0') {
                                      *(float *)((long)ppCVar31 + -0x428) = fVar40;
                                      *(float *)((long)ppCVar31 + -0x424) = fVar52;
                                      *(float *)((long)ppCVar31 + -0x420) = fVar53;
                                      *(float *)((long)ppCVar31 + -0x41c) = fVar54;
                                      *(float *)((long)ppCVar31 + -0x438) = fVar65;
                                      *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d6b5;
                                      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                                      fVar65 = *(float *)((long)ppCVar31 + -0x438);
                                      fVar40 = *(float *)((long)ppCVar31 + -0x428);
                                      fVar52 = *(float *)((long)ppCVar31 + -0x424);
                                      fVar53 = *(float *)((long)ppCVar31 + -0x420);
                                      fVar54 = *(float *)((long)ppCVar31 + -0x41c);
                                      g_data_057ac31b = '\x01';
                                    }
                                    *(float *)((long)ppCVar31 + -0x3f8) =
                                         *(float *)((long)ppCVar31 + -1000) -
                                         *(float *)((long)ppCVar31 + -0x3f8);
                                    *(float *)((long)ppCVar31 + -0x3f4) =
                                         *(float *)((long)ppCVar31 + -0x3e4) -
                                         *(float *)((long)ppCVar31 + -0x3f4);
                                    *(float *)((long)ppCVar31 + -0x3f0) =
                                         *(float *)((long)ppCVar31 + -0x3e0) -
                                         *(float *)((long)ppCVar31 + -0x3f0);
                                    *(float *)((long)ppCVar31 + -0x3ec) =
                                         *(float *)((long)ppCVar31 + -0x3dc) -
                                         *(float *)((long)ppCVar31 + -0x3ec);
                                    *(float *)((long)ppCVar31 + -0x408) =
                                         *(float *)((long)ppCVar31 + -0x3d8) -
                                         *(float *)((long)ppCVar31 + -0x408);
                                    *(float *)((long)ppCVar31 + -0x428) =
                                         fVar40 + *(float *)((long)ppCVar31 + -1000);
                                    *(float *)((long)ppCVar31 + -0x424) =
                                         fVar52 + *(float *)((long)ppCVar31 + -0x3e4);
                                    *(float *)((long)ppCVar31 + -0x420) =
                                         fVar53 + *(float *)((long)ppCVar31 + -0x3e0);
                                    *(float *)((long)ppCVar31 + -0x41c) =
                                         fVar54 + *(float *)((long)ppCVar31 + -0x3dc);
                                    *(float *)((long)ppCVar31 + -0x438) =
                                         fVar65 + *(float *)((long)ppCVar31 + -0x3d8);
                                    lVar22 = *(long *)(TypeInfo_Vector3 + 0xb8);
                                    *(undefined8 *)((long)ppCVar31 + -0x3d8) = *(undefined8 *)(lVar22 + 0x24);
                                    *(undefined8 *)((long)ppCVar31 + -0x3d0) = 0;
                                    *(undefined4 *)((long)ppCVar31 + -1000) = *(undefined4 *)(lVar22 + 0x2c);
                                    pMVar26 = (((Characters_BaseTitan_o *)__this_02)->klass->vtable).
                                              _61_get_GroundDistance.method;
                                    pIVar3 = (((Characters_BaseTitan_o *)__this_02)->klass->vtable).
                                             _61_get_GroundDistance.methodPtr;
                                    *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d733;
                                    uVar41 = (*pIVar3)(__this_02,pMVar26);
                                    *(undefined4 *)((long)ppCVar31 + -0x444) = uVar41;
                                    pIVar3 = (((Characters_BaseTitan_o *)__this_02)->klass->vtable).
                                             _60_get_GroundMask.methodPtr;
                                    *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d74c;
                                    uVar41 = (*pIVar3)(__this_02);
                                    *(undefined4 *)((long)ppCVar31 + -0x440) = uVar41;
                                    *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d75c;
                                    iVar17 = UnityEngine_LayerMask__get_value
                                                       ((UnityEngine_LayerMask_Fields)
                                                        (int32_t)(undefined1 *)((long)ppCVar31 + -0x440),
                                                        (MethodInfo *)0x0);
                                    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                                      *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d776;
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d7bb;
                                    point1.fields.z = *(float *)((long)ppCVar31 + -0x408);
                                    point1.fields._0_8_ = *(undefined8 *)((long)ppCVar31 + -0x3f8);
                                    point2.fields.z = *(float *)((long)ppCVar31 + -0x438);
                                    point2.fields._0_8_ = *(undefined8 *)((long)ppCVar31 + -0x428);
                                    direction.fields.z = *(float *)((long)ppCVar31 + -1000);
                                    direction.fields._0_8_ = *(undefined8 *)((long)ppCVar31 + -0x3d8);
                                    bVar16 = UnityEngine_Physics__CapsuleCast_4e787e0
                                                       (point1,point2,*(float *)((long)ppCVar31 + -0x418),
                                                        direction,
                                                        (UnityEngine_RaycastHit_o *)((long)ppCVar31 + -0x3c8),
                                                        *(float *)((long)ppCVar31 + -0x444) + 1.0,iVar17,
                                                        (MethodInfo *)0x0);
                                    if ((char)bVar16 != '\0') {
                                      if (*(char *)((long)&(((Characters_BaseTitan_o *)__this_02)->fields).
                                                           Animation + 4) == '\0') {
                                        *(undefined2 *)
                                         ((long)&(((Characters_BaseTitan_o *)__this_02)->fields).Animation + 4
                                         ) = 0x101;
                                      }
                                      *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d7e0;
                                      auVar51._0_4_ =
                                           UnityEngine_RaycastHit__get_distance
                                                     ((UnityEngine_RaycastHit_o)
                                                      *(UnityEngine_RaycastHit_Fields *)
                                                       ((long)ppCVar31 + -0x448),
                                                      (MethodInfo *)((long)ppCVar31 + -0x3c8));
                                      auVar51._4_12_ = extraout_var_13;
                                      *(undefined1 (*) [16])((long)ppCVar31 + -0x418) = auVar51;
                                      pMVar26 = (((Characters_BaseTitan_o *)__this_02)->klass->vtable).
                                                _61_get_GroundDistance.method;
                                      pIVar3 = (((Characters_BaseTitan_o *)__this_02)->klass->vtable).
                                               _61_get_GroundDistance.methodPtr;
                                      *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d7f8;
                                      pSVar19 = (System_String_o *)(*pIVar3)(__this_02,pMVar26);
                                      fVar40 = *(float *)((long)ppCVar31 + -0x418) + -1.0;
                                      fVar65 = extraout_XMM0_Da_02;
                                      if (fVar40 <= extraout_XMM0_Da_02) {
                                        fVar65 = fVar40;
                                      }
                                      (((Characters_BaseTitan_o *)__this_02)->fields)._turnTargetRotation.
                                      fields.x = (float)(-(uint)(0.0 <= fVar40) & (uint)fVar65);
                                      return pSVar19;
                                    }
                                    *(undefined1 *)
                                     ((long)&(((Characters_BaseTitan_o *)__this_02)->fields).Animation + 4) =
                                         0;
                                    pMVar26 = (((Characters_BaseTitan_o *)__this_02)->klass->vtable).
                                              _61_get_GroundDistance.method;
                                    pIVar3 = (((Characters_BaseTitan_o *)__this_02)->klass->vtable).
                                             _61_get_GroundDistance.methodPtr;
                                    *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d844;
                                    pSVar19 = (System_String_o *)(*pIVar3)(__this_02,pMVar26);
                                    (((Characters_BaseTitan_o *)__this_02)->fields)._turnTargetRotation.fields
                                    .x = extraout_XMM0_Da_03;
                                    return pSVar19;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else if (pCVar18 != (Characters_BaseTitan_o *)0x0) {
                if (cVar14 == '\0') {
                  *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d47d;
                  fVar40 = UnityEngine_CapsuleCollider__get_radius
                                     ((UnityEngine_CapsuleCollider_o *)pCVar18,(MethodInfo *)0x0);
                  fVar65 = *(float *)&(((Characters_BaseTitan_o *)((long)__this_02 + 0x2a0))->fields).
                                      FeedKillerName;
                  if ((fVar40 != fVar65) || (NAN(fVar40) || NAN(fVar65))) goto label_0431d48f;
                }
                else {
                  *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d44e;
                  fVar40 = UnityEngine_CapsuleCollider__get_height
                                     ((UnityEngine_CapsuleCollider_o *)pCVar18,(MethodInfo *)0x0);
                  fVar65 = *(float *)&(((Characters_BaseTitan_o *)((long)__this_02 + 0x2a0))->fields).
                                      FeedKillerName;
                  if ((fVar40 != fVar65) || (NAN(fVar40) || NAN(fVar65))) goto label_0431d460;
                }
label_0431d499:
                cVar14 = *(char *)&(((Characters_BaseTitan_o *)__this_02)->fields)._rootMotionAnimations;
                goto joined_r0x0431d4a0;
              }
            }
            *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d85d;
            il2cpp_runtime_helper_022b2c90();
label_0431d85d:
            *(undefined8 *)((long)ppCVar31 + -0x450) = 0x431d865;
            pCVar21 = pCVar18;
            il2cpp_runtime_helper_022b2fd0();
            *(long **)((long)ppCVar31 + -0x450) = __this_03;
            *(Characters_BaseTitan_o **)((long)ppCVar31 + -0x458) = pCVar18;
            *(System_String_o ***)((long)ppCVar31 + -0x460) = __this_02;
            if (g_data_057adfd7 == '\0') {
              *(undefined8 *)((long)ppCVar31 + -0x4a8) = 0x431d891;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Quaternion);
              g_data_057adfd7 = '\x01';
            }
            if (g_data_057a6843 == '\0') {
              *(undefined8 *)((long)ppCVar31 + -0x4a8) = 0x431d8ad;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            UVar75 = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
            *(undefined8 *)((long)ppCVar31 + -0x480) = 0;
            *(undefined8 *)((long)ppCVar31 + -0x478) = 0;
            *(undefined4 *)((long)ppCVar31 + -0x470) = 0;
            *(undefined8 *)((long)ppCVar31 + -0x4a8) = 0x431d8f2;
            System_Nullable_Quaternion____ctor
                      ((System_Nullable_Quaternion__o)
                       *(System_Nullable_Quaternion__Fields *)((long)ppCVar31 + -0x4a0),
                       (UnityEngine_Quaternion_o)UVar75,(MethodInfo_37E8CD0 *)((long)ppCVar31 + -0x480));
            *(undefined4 *)&pCVar21[1].fields.pvCache = *(undefined4 *)((long)ppCVar31 + -0x470);
            pSVar12 = *(System_Threading_CancellationTokenSource_o **)((long)ppCVar31 + -0x478);
            pCVar21[1].fields.m_CachedPtr = *(intptr_t *)((long)ppCVar31 + -0x480);
            pCVar21[1].fields.m_CancellationTokenSource = pSVar12;
            if (g_data_057a6843 == '\0') {
              *(undefined8 *)((long)ppCVar31 + -0x4a8) = 0x431d91d;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
            }
            UVar75 = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
            *(undefined8 *)((long)ppCVar31 + -0x4a0) = 0;
            *(undefined8 *)((long)ppCVar31 + -0x498) = 0;
            *(undefined4 *)((long)ppCVar31 + -0x490) = 0;
            *(undefined8 *)((long)ppCVar31 + -0x4a8) = 0x431d951;
            System_Nullable_Quaternion____ctor
                      ((System_Nullable_Quaternion__o)
                       *(System_Nullable_Quaternion__Fields *)((long)ppCVar31 + -0x4a0),
                       (UnityEngine_Quaternion_o)UVar75,(MethodInfo_37E8CD0 *)((long)ppCVar31 + -0x4a0));
            pCVar21[1].fields.MaxSoundDistance = *(float *)((long)ppCVar31 + -0x490);
            uVar25 = *(undefined8 *)((long)ppCVar31 + -0x498);
            *(undefined8 *)((long)&pCVar21[1].fields.pvCache + 4) = *(undefined8 *)((long)ppCVar31 + -0x4a0);
            pCVar21[1].fields.SoundsEnabled = (int)uVar25;
            pCVar21[1].fields.MaxFootstepDistance = (float)(int)((ulong)uVar25 >> 0x20);
            if (g_data_057a694c == '\0') {
              *(undefined8 *)((long)ppCVar31 + -0x4a8) = 0x431d97b;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
              g_data_057a694c = '\x01';
            }
            *(undefined8 *)&pCVar21[1].fields._disableKinematicTimeLeft =
                 **(undefined8 **)(TypeInfo_Vector2 + 0xb8);
            *(undefined4 *)&pCVar21[1].fields.RichTextName = 0x40b00000;
            *(undefined8 *)((long)&pCVar21[1].fields.VisibleName + 4) = 0x430c000041400000;
            *(undefined4 *)((long)&pCVar21[1].fields.FeedKillerName + 4) = 0xffffffff;
            *(undefined4 *)((long)&pCVar21[1].fields.FeedVictimName + 4) = 0x3f800000;
            if (g_data_057a6932 == '\0') {
              *(undefined8 *)((long)ppCVar31 + -0x4a8) = 0x431d9e1;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a6932 = '\x01';
            }
            uVar25 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            iVar17 = *(int32_t *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
            pCVar21[1].fields.Dead = (int)uVar25;
            pCVar21[1].fields.CustomDamageEnabled = (int)((ulong)uVar25 >> 0x20);
            pCVar21[1].fields.CustomDamage = iVar17;
            *(undefined8 *)((long)ppCVar31 + -0x4a8) = 0x431da17;
            Characters_BaseTitan___ctor(pCVar21,(MethodInfo *)0x0);
            return extraout_RAX_09;
          }
        }
        *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431d000;
        Characters_BasicTitan__LateUpdateHead
                  ((Characters_BasicTitan_o *)__this_03,(Characters_BaseCharacter_o *)SVar33,pMVar26);
        lVar22 = *(long *)((long)__this_03 + 0x278);
        goto joined_r0x0431c938;
      }
    }
    *(undefined1 *)((long)__this_03 + 0x308) = 0;
label_0431cae2:
    *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431caec;
    Characters_BasicTitan__LateUpdateHead
              ((Characters_BasicTitan_o *)__this_03,(Characters_BaseCharacter_o *)0x0,pMVar26);
  }
  lVar22 = *(long *)((long)__this_03 + 0x278);
joined_r0x0431c938:
  do {
    if (lVar22 != 0) {
      pUVar24 = *(UnityEngine_Transform_o **)(lVar22 + 0x110);
      if (*(char *)((long)__this_03 + 0x18c) == '\0') {
        if (g_data_057a6932 == '\0') {
          *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cdd8;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6932 = '\x01';
        }
        if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
          UVar79 = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
          *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431ce0d;
          UnityEngine_Transform__set_localScale(pUVar24,(UnityEngine_Vector3_o)UVar79,(MethodInfo *)0x0);
          lVar22 = *(long *)((long)__this_03 + 0x278);
joined_r0x0431ce17:
          if (lVar22 != 0) {
            pUVar24 = *(UnityEngine_Transform_o **)(lVar22 + 0x118);
            if (*(char *)((long)__this_03 + 0x18d) == '\0') {
              if (g_data_057a6932 == '\0') {
                *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431ce34;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a6932 = '\x01';
              }
              if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
                UVar79 = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
                *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431ce65;
                UnityEngine_Transform__set_localScale(pUVar24,(UnityEngine_Vector3_o)UVar79,(MethodInfo *)0x0)
                ;
                lVar22 = *(long *)((long)__this_03 + 0x278);
joined_r0x0431ce6f:
                if ((lVar22 != 0) &&
                   (pUVar5 = *(UnityEngine_Component_o **)(lVar22 + 0x148),
                   pUVar5 != (UnityEngine_Component_o *)0x0)) {
                  *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cc61;
                  pUVar24 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0);
                  if ((*(long *)((long)__this_03 + 0x278) != 0) &&
                     (pUVar6 = *(UnityEngine_Transform_o **)(*(long *)((long)__this_03 + 0x278) + 0x110),
                     pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                    *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cc8b;
                    UVar78 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
                    if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
                      *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cc9e;
                      UnityEngine_Transform__set_position(pUVar24,UVar78,(MethodInfo *)0x0);
                      if ((*(long *)((long)__this_03 + 0x278) != 0) &&
                         (pUVar5 = *(UnityEngine_Component_o **)(*(long *)((long)__this_03 + 0x278) + 0x150),
                         pUVar5 != (UnityEngine_Component_o *)0x0)) {
                        *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431ccc5;
                        pUVar24 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0);
                        if ((*(long *)((long)__this_03 + 0x278) != 0) &&
                           (pUVar6 = *(UnityEngine_Transform_o **)(*(long *)((long)__this_03 + 0x278) + 0x118)
                           , pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                          *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431ccef;
                          UVar78 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
                          if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
                            *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cd02;
                            UnityEngine_Transform__set_position(pUVar24,UVar78,(MethodInfo *)0x0);
                            if (*(char *)((long)__this_03 + 0x78) != '\0') {
                              return extraout_RAX_05;
                            }
                            if ((*(long *)((long)__this_03 + 0x280) != 0) &&
                               (pCVar7 = *(Characters_AnimationHandler_o **)((long)__this_03 + 0xb0),
                               pCVar7 != (Characters_AnimationHandler_o *)0x0)) {
                              pSVar19 = *(System_String_o **)(*(long *)((long)__this_03 + 0x280) + 0x18);
                              *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cd38;
                              bVar16 = Characters_AnimationHandler__IsPlaying
                                                 (pCVar7,pSVar19,(MethodInfo *)0x0);
                              if ((char)bVar16 == '\0') {
                                return (System_String_o *)CONCAT44(extraout_var_08,bVar16);
                              }
                              if (*(long *)((long)__this_03 + 0x278) != 0) {
                                pUVar24 = *(UnityEngine_Transform_o **)
                                           (*(long *)((long)__this_03 + 0x278) + 0x120);
                                *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cd65;
                                UVar74 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                   ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),
                                                    (MethodInfo *)0x0);
                                if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
                                  *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cd78;
                                  UnityEngine_Transform__set_localRotation(pUVar24,UVar74,(MethodInfo *)0x0);
                                  if ((*(long *)((long)__this_03 + 0x278) != 0) &&
                                     (pUVar24 = *(UnityEngine_Transform_o **)
                                                 (*(long *)((long)__this_03 + 0x278) + 0x48),
                                     pUVar24 != (UnityEngine_Transform_o *)0x0)) {
                                    UnityEngine_Transform__set_localPosition
                                              (pUVar24,(UnityEngine_Vector3_o)ZEXT812(0xbd4ccccd00000000),
                                               (MethodInfo *)0x0);
                                    return extraout_RAX_06;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
              *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cbda;
              value_00.fields.z = 0.01;
              value_00.fields.x = 0.01;
              value_00.fields.y = 0.01;
              UnityEngine_Transform__set_localScale(pUVar24,value_00,(MethodInfo *)0x0);
              if (*(long *)((long)__this_03 + 0x278) != 0) {
                pUVar24 = *(UnityEngine_Transform_o **)(*(long *)((long)__this_03 + 0x278) + 0x118);
                if (g_data_057a6843 == '\0') {
                  *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cc06;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
                  g_data_057a6843 = '\x01';
                }
                if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
                  UVar75 = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
                  *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cc3a;
                  UnityEngine_Transform__set_localRotation
                            (pUVar24,(UnityEngine_Quaternion_o)UVar75,(MethodInfo *)0x0);
                  lVar22 = *(long *)((long)__this_03 + 0x278);
                  goto joined_r0x0431ce6f;
                }
              }
            }
          }
        }
      }
      else if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
        *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cb33;
        value.fields.z = 0.01;
        value.fields.x = 0.01;
        value.fields.y = 0.01;
        UnityEngine_Transform__set_localScale(pUVar24,value,(MethodInfo *)0x0);
        if (*(long *)((long)__this_03 + 0x278) != 0) {
          pUVar24 = *(UnityEngine_Transform_o **)(*(long *)((long)__this_03 + 0x278) + 0x110);
          if (g_data_057a6843 == '\0') {
            *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cb5f;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
            g_data_057a6843 = '\x01';
          }
          if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
            UVar75 = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
            *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431cb93;
            UnityEngine_Transform__set_localRotation
                      (pUVar24,(UnityEngine_Quaternion_o)UVar75,(MethodInfo *)0x0);
            lVar22 = *(long *)((long)__this_03 + 0x278);
            goto joined_r0x0431ce17;
          }
        }
      }
    }
label_0431ce75:
    do {
      *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431ce7a;
      il2cpp_runtime_helper_022b2c90();
label_0431ce7a:
      *(undefined8 *)((long)__this_03 + 0x2b0) = 0;
      *(undefined8 *)((long)__this_03 + 0x2b8) = 0;
      *(undefined4 *)((long)__this_03 + 0x2c0) = 0;
      lVar22 = *(long *)((long)__this_03 + 0x278);
joined_r0x0431ca35:
    } while ((lVar22 == 0) ||
            (pUVar24 = *(UnityEngine_Transform_o **)(lVar22 + 0x38), pUVar24 == (UnityEngine_Transform_o *)0x0
            ));
    *(undefined8 *)((long)ppCVar31 + -0x330) = 0x431ca4f;
    UVar75 = (UnityEngine_Quaternion_Fields)
             UnityEngine_Transform__get_localRotation(pUVar24,(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)((long)__this_03 + 0x2a0) = UVar75;
    lVar22 = *(long *)((long)__this_03 + 0x278);
  } while( true );
}


// Characters.TitanSounds$$.ctor
// il2cpp: void Characters_TitanSounds___ctor (Characters_TitanSounds_o* __this, const MethodInfo* method);
// 0x4321d90

void Characters_TitanSounds___ctor(Characters_TitanSounds_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.TitanSounds$$.cctor
// il2cpp: void Characters_TitanSounds___cctor (const MethodInfo* method);
// 0x4321da0

void Characters_TitanSounds___cctor(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  System_Object_array *pSVar4;
  undefined1 uVar5;
  char cVar6;
  bool_conflict bVar7;
  int iVar8;
  int32_t iVar9;
  long lVar10;
  System_Collections_Generic_List_object__o *pSVar11;
  long *plVar12;
  Characters_TitanAttackKeyframe_o *pCVar13;
  Characters_TitanAttackKeyframe_o *a;
  Characters_TitanAttackKeyframe_o *pCVar14;
  Characters_TitanAttackKeyframe_o *data;
  Characters_TitanAttackKeyframe_o *pCVar15;
  Characters_TitanAttackKeyframe_o *__this;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  float in_XMM1_Da;
  undefined1 auVar24 [16];
  
  if (g_data_057ae009 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    il2cpp_runtime_helper_023445d0(&"Hurt2");
    il2cpp_runtime_helper_023445d0(&"Huff2");
    il2cpp_runtime_helper_023445d0(&"Swing3");
    il2cpp_runtime_helper_023445d0(&"Huff4");
    il2cpp_runtime_helper_023445d0(&"DeathNoFall");
    il2cpp_runtime_helper_023445d0(&"Footstep1");
    il2cpp_runtime_helper_023445d0(&"RockThrow2");
    il2cpp_runtime_helper_023445d0(&"Huff1");
    il2cpp_runtime_helper_023445d0(&"Grunt1");
    il2cpp_runtime_helper_023445d0(&"TitanJump");
    il2cpp_runtime_helper_023445d0(&"Laugh2");
    il2cpp_runtime_helper_023445d0(&"Hurt3");
    il2cpp_runtime_helper_023445d0(&"Bite1");
    il2cpp_runtime_helper_023445d0(&"Huff6");
    il2cpp_runtime_helper_023445d0(&"Grunt4");
    il2cpp_runtime_helper_023445d0(&"Hurt5");
    il2cpp_runtime_helper_023445d0(&"Footstep3");
    il2cpp_runtime_helper_023445d0(&"Grunt2");
    il2cpp_runtime_helper_023445d0(&"Grunt6");
    il2cpp_runtime_helper_023445d0(&"Grunt10");
    il2cpp_runtime_helper_023445d0(&"Swing1");
    il2cpp_runtime_helper_023445d0(&"Hurt4");
    il2cpp_runtime_helper_023445d0(&"Hurt8");
    il2cpp_runtime_helper_023445d0(&"Huff5");
    il2cpp_runtime_helper_023445d0(&"Hit");
    il2cpp_runtime_helper_023445d0(&"Hurt1");
    il2cpp_runtime_helper_023445d0(&"Hurt6");
    il2cpp_runtime_helper_023445d0(&"Bite2");
    il2cpp_runtime_helper_023445d0(&"Swing2");
    il2cpp_runtime_helper_023445d0(&"DeathFall");
    il2cpp_runtime_helper_023445d0(&"Footstep2");
    il2cpp_runtime_helper_023445d0(&"RockPickup");
    il2cpp_runtime_helper_023445d0(&"Grunt5");
    il2cpp_runtime_helper_023445d0(&"Grunt7");
    il2cpp_runtime_helper_023445d0(&"Grunt9");
    il2cpp_runtime_helper_023445d0(&"Roar2");
    il2cpp_runtime_helper_023445d0(&"Grunt8");
    il2cpp_runtime_helper_023445d0(&"Laugh1");
    il2cpp_runtime_helper_023445d0(&"Grunt3");
    il2cpp_runtime_helper_023445d0(&"Hurt7");
    il2cpp_runtime_helper_023445d0(&"Roar1");
    il2cpp_runtime_helper_023445d0(&"Huff3");
    il2cpp_runtime_helper_023445d0(&"RockThrow1");
    g_data_057ae009 = '\x01';
  }
  **(undefined8 **)(TypeInfo_TitanSounds + 0xb8) = "Footstep1";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_TitanSounds + 0xb8),"Footstep1");
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 8) = "Footstep2";
  il2cpp_runtime_helper_022b4080(lVar10 + 8);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x10) = "Footstep3";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x10);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x18) = "Swing1";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x18);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x20) = "Swing2";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x20);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x28) = "Swing3";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x28);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x30) = "Hurt1";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x30);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x38) = "Hurt2";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x38);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x40) = "Hurt3";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x40);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x48) = "Hurt4";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x48);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x50) = "Hurt5";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x50);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x58) = "Hurt6";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x58);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x60) = "Hurt7";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x60);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x68) = "Hurt8";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x68);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x70) = "Grunt1";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x70);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x78) = "Grunt2";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x78);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x80) = "Grunt3";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x80);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x88) = "Grunt4";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x88);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x90) = "Grunt5";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x90);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x98) = "Grunt6";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x98);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0xa0) = "Grunt7";
  il2cpp_runtime_helper_022b4080(lVar10 + 0xa0);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0xa8) = "Grunt8";
  il2cpp_runtime_helper_022b4080(lVar10 + 0xa8);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0xb0) = "Grunt9";
  il2cpp_runtime_helper_022b4080(lVar10 + 0xb0);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0xb8) = "Grunt10";
  il2cpp_runtime_helper_022b4080(lVar10 + 0xb8);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0xc0) = "Hit";
  il2cpp_runtime_helper_022b4080(lVar10 + 0xc0);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 200) = "Roar1";
  il2cpp_runtime_helper_022b4080(lVar10 + 200);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0xd0) = "Roar2";
  il2cpp_runtime_helper_022b4080(lVar10 + 0xd0);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0xd8) = "DeathFall";
  il2cpp_runtime_helper_022b4080(lVar10 + 0xd8);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0xe0) = "DeathNoFall";
  il2cpp_runtime_helper_022b4080(lVar10 + 0xe0);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0xe8) = "Bite1";
  il2cpp_runtime_helper_022b4080(lVar10 + 0xe8);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0xf0) = "Bite2";
  il2cpp_runtime_helper_022b4080(lVar10 + 0xf0);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0xf8) = "Laugh1";
  il2cpp_runtime_helper_022b4080(lVar10 + 0xf8);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x100) = "Laugh2";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x100);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x108) = "Huff1";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x108);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x110) = "Huff2";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x110);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x118) = "Huff3";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x118);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x120) = "Huff4";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x120);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x128) = "Huff5";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x128);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x130) = "Huff6";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x130);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x138) = "TitanJump";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x138);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x140) = "RockPickup";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x140);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x148) = "RockThrow1";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x148);
  lVar10 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar10 + 0x150) = "RockThrow2";
  il2cpp_runtime_helper_022b4080(lVar10 + 0x150);
  pCVar14 = (Characters_TitanAttackKeyframe_o *)0x3;
  pCVar15 = TypeInfo_string;
  lVar10 = il2cpp_runtime_helper_022b2a40();
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x18) != 0) {
      pCVar14 = (Characters_TitanAttackKeyframe_o *)**(undefined8 **)(TypeInfo_TitanSounds + 0xb8);
      pCVar15 = (Characters_TitanAttackKeyframe_o *)(lVar10 + 0x20);
      *(Characters_TitanAttackKeyframe_o **)(lVar10 + 0x20) = pCVar14;
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar10 + 0x18)) {
        pCVar14 = *(Characters_TitanAttackKeyframe_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 8);
        pCVar15 = (Characters_TitanAttackKeyframe_o *)(lVar10 + 0x28);
        *(Characters_TitanAttackKeyframe_o **)(lVar10 + 0x28) = pCVar14;
        il2cpp_runtime_helper_022b4080();
        if (2 < *(uint *)(lVar10 + 0x18)) {
          *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x10);
          il2cpp_runtime_helper_022b4080(lVar10 + 0x30);
          lVar3 = *(long *)(TypeInfo_TitanSounds + 0xb8);
          *(long *)(lVar3 + 0x158) = lVar10;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x158,lVar10);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae00a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Characters_TitanAttackKeyframe);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_TitanAttackKeyframe);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanAttackKeyframe);
    il2cpp_runtime_helper_023445d0(&"Ranges");
    il2cpp_runtime_helper_023445d0(&"RightArm");
    il2cpp_runtime_helper_023445d0(&"Z");
    il2cpp_runtime_helper_023445d0(&"Keyframes");
    il2cpp_runtime_helper_023445d0(&"Far");
    il2cpp_runtime_helper_023445d0(&"LeftArm");
    il2cpp_runtime_helper_023445d0(&"MapObject");
    il2cpp_runtime_helper_023445d0(&"Y");
    il2cpp_runtime_helper_023445d0(&"X");
    il2cpp_runtime_helper_023445d0(&"HumanOnly");
    g_data_057ae00a = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_TitanAttackKeyframe);
  System_Collections_Generic_List_object____ctor(pSVar11,MethodInfo_List_1_Characters_TitanAttackKeyframe);
  *(System_Collections_Generic_List_object__o **)&pCVar15[1].fields = pSVar11;
  il2cpp_runtime_helper_022b4080();
  data = (Characters_TitanAttackKeyframe_o *)0x0;
  __this = pCVar15;
  System_Object___ctor((Il2CppObject *)pCVar15,(MethodInfo *)0x0);
  fVar19 = in_XMM1_Da;
  if ((pCVar14 != (Characters_TitanAttackKeyframe_o *)0x0) &&
     (data = "HumanOnly", __this = pCVar14,
     plVar12 = (long *)(*pCVar14->klass[1]._1.this_arg.data)
                                 (pCVar14,"HumanOnly",*(undefined8 *)&pCVar14->klass[1]._1.this_arg.bits),
     fVar19 = in_XMM1_Da, plVar12 != (long *)0x0)) {
    uVar5 = (**(code **)(*plVar12 + 0x3a8))(plVar12,*(undefined8 *)(*plVar12 + 0x3b0));
    *(undefined1 *)&(pCVar15->fields).Frame = uVar5;
    cVar6 = (*pCVar14->klass[2]._1.gc_desc)(pCVar14,"MapObject",pCVar14->klass[2]._1.name);
    uVar5 = 1;
    if (cVar6 != '\0') {
      data = "MapObject";
      __this = pCVar14;
      plVar12 = (long *)(*pCVar14->klass[1]._1.this_arg.data)
                                  (pCVar14,"MapObject",*(undefined8 *)&pCVar14->klass[1]._1.this_arg.bits);
      fVar19 = in_XMM1_Da;
      if (plVar12 == (long *)0x0) goto label_04323022;
      uVar5 = (**(code **)(*plVar12 + 0x3a8))(plVar12,*(undefined8 *)(*plVar12 + 0x3b0));
    }
    *(undefined1 *)((long)&(pCVar15->fields).Frame + 1) = uVar5;
    data = "Far";
    __this = pCVar14;
    plVar12 = (long *)(*pCVar14->klass[1]._1.this_arg.data)
                                (pCVar14,"Far",*(undefined8 *)&pCVar14->klass[1]._1.this_arg.bits);
    fVar19 = in_XMM1_Da;
    if (plVar12 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar12 + 0x3a8))(plVar12,*(undefined8 *)(*plVar12 + 0x3b0));
      *(undefined1 *)((long)&(pCVar15->fields).Frame + 2) = uVar5;
      cVar6 = (*pCVar14->klass[2]._1.gc_desc)(pCVar14,"LeftArm",pCVar14->klass[2]._1.name);
      if (cVar6 == '\0') {
        uVar5 = 0;
      }
      else {
        data = "LeftArm";
        __this = pCVar14;
        plVar12 = (long *)(*pCVar14->klass[1]._1.this_arg.data)
                                    (pCVar14,"LeftArm",*(undefined8 *)&pCVar14->klass[1]._1.this_arg.bits);
        fVar19 = in_XMM1_Da;
        if (plVar12 == (long *)0x0) goto label_04323022;
        uVar5 = (**(code **)(*plVar12 + 0x3a8))(plVar12,*(undefined8 *)(*plVar12 + 0x3b0));
      }
      *(undefined1 *)((long)&(pCVar15->fields).Frame + 3) = uVar5;
      cVar6 = (*pCVar14->klass[2]._1.gc_desc)(pCVar14,"RightArm",pCVar14->klass[2]._1.name);
      if (cVar6 == '\0') {
        uVar5 = 0;
      }
      else {
        data = "RightArm";
        __this = pCVar14;
        plVar12 = (long *)(*pCVar14->klass[1]._1.this_arg.data)
                                    (pCVar14,"RightArm",*(undefined8 *)&pCVar14->klass[1]._1.this_arg.bits);
        fVar19 = in_XMM1_Da;
        if (plVar12 == (long *)0x0) goto label_04323022;
        uVar5 = (**(code **)(*plVar12 + 0x3a8))(plVar12,*(undefined8 *)(*plVar12 + 0x3b0));
      }
      *(undefined1 *)&(pCVar15->fields)._localPosition.fields.x = uVar5;
      cVar6 = (*pCVar14->klass[2]._1.gc_desc)(pCVar14,"Ranges",pCVar14->klass[2]._1.name);
      if (cVar6 != '\0') {
        data = "Ranges";
        pCVar13 = (Characters_TitanAttackKeyframe_o *)
                  (*pCVar14->klass[1]._1.this_arg.data)
                            (pCVar14,"Ranges",*(undefined8 *)&pCVar14->klass[1]._1.this_arg.bits);
        __this = pCVar14;
        fVar19 = in_XMM1_Da;
        if ((pCVar13 == (Characters_TitanAttackKeyframe_o *)0x0) ||
           (data = "X", __this = pCVar13,
           pCVar14 = (Characters_TitanAttackKeyframe_o *)
                     (*pCVar13->klass[1]._1.this_arg.data)
                               (pCVar13,"X",*(undefined8 *)&pCVar13->klass[1]._1.this_arg.bits),
           fVar19 = in_XMM1_Da, pCVar14 == (Characters_TitanAttackKeyframe_o *)0x0)) goto label_04323022;
        data = (Characters_TitanAttackKeyframe_o *)0x0;
        plVar12 = (long *)(*(code *)pCVar14->klass[1]._1.name)(pCVar14,0,pCVar14->klass[1]._1.namespaze);
        __this = pCVar14;
        fVar19 = in_XMM1_Da;
        if (plVar12 == (long *)0x0) goto label_04323022;
        fVar17 = (float)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
        data = "Y";
        __this = pCVar13;
        pCVar14 = (Characters_TitanAttackKeyframe_o *)
                  (*pCVar13->klass[1]._1.this_arg.data)
                            (pCVar13,"Y",*(undefined8 *)&pCVar13->klass[1]._1.this_arg.bits);
        fVar19 = in_XMM1_Da;
        if (pCVar14 == (Characters_TitanAttackKeyframe_o *)0x0) goto label_04323022;
        data = (Characters_TitanAttackKeyframe_o *)0x0;
        plVar12 = (long *)(*(code *)pCVar14->klass[1]._1.name)(pCVar14,0,pCVar14->klass[1]._1.namespaze);
        __this = pCVar14;
        fVar19 = in_XMM1_Da;
        if (plVar12 == (long *)0x0) goto label_04323022;
        fVar18 = (float)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
        data = "Z";
        __this = pCVar13;
        pCVar14 = (Characters_TitanAttackKeyframe_o *)
                  (*pCVar13->klass[1]._1.this_arg.data)
                            (pCVar13,"Z",*(undefined8 *)&pCVar13->klass[1]._1.this_arg.bits);
        fVar19 = in_XMM1_Da;
        if (pCVar14 == (Characters_TitanAttackKeyframe_o *)0x0) goto label_04323022;
        data = (Characters_TitanAttackKeyframe_o *)0x0;
        plVar12 = (long *)(*(code *)pCVar14->klass[1]._1.name)(pCVar14,0,pCVar14->klass[1]._1.namespaze);
        __this = pCVar14;
        fVar19 = in_XMM1_Da;
        if (plVar12 == (long *)0x0) goto label_04323022;
        fVar19 = (float)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
        (pCVar15->fields)._localPosition.fields.y = fVar17;
        (pCVar15->fields)._localPosition.fields.z = fVar18;
        (pCVar15->fields)._radius = fVar19;
        data = "X";
        __this = pCVar13;
        pCVar14 = (Characters_TitanAttackKeyframe_o *)
                  (*pCVar13->klass[1]._1.this_arg.data)
                            (pCVar13,"X",*(undefined8 *)&pCVar13->klass[1]._1.this_arg.bits);
        fVar19 = fVar18;
        if (pCVar14 == (Characters_TitanAttackKeyframe_o *)0x0) goto label_04323022;
        data = (Characters_TitanAttackKeyframe_o *)0x1;
        plVar12 = (long *)(*(code *)pCVar14->klass[1]._1.name)(pCVar14,1,pCVar14->klass[1]._1.namespaze);
        __this = pCVar14;
        fVar19 = fVar18;
        if (plVar12 == (long *)0x0) goto label_04323022;
        uVar20 = (**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
        data = "Y";
        __this = pCVar13;
        pCVar14 = (Characters_TitanAttackKeyframe_o *)
                  (*pCVar13->klass[1]._1.this_arg.data)
                            (pCVar13,"Y",*(undefined8 *)&pCVar13->klass[1]._1.this_arg.bits);
        fVar19 = fVar18;
        if (pCVar14 == (Characters_TitanAttackKeyframe_o *)0x0) goto label_04323022;
        data = (Characters_TitanAttackKeyframe_o *)0x1;
        plVar12 = (long *)(*(code *)pCVar14->klass[1]._1.name)(pCVar14,1,pCVar14->klass[1]._1.namespaze);
        __this = pCVar14;
        fVar19 = fVar18;
        if (plVar12 == (long *)0x0) goto label_04323022;
        in_XMM1_Da = (float)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
        data = "Z";
        pCVar14 = (Characters_TitanAttackKeyframe_o *)
                  (*pCVar13->klass[1]._1.this_arg.data)
                            (pCVar13,"Z",*(undefined8 *)&pCVar13->klass[1]._1.this_arg.bits);
        __this = pCVar13;
        fVar19 = fVar18;
        if (pCVar14 == (Characters_TitanAttackKeyframe_o *)0x0) goto label_04323022;
        data = (Characters_TitanAttackKeyframe_o *)0x1;
        plVar12 = (long *)(*(code *)pCVar14->klass[1]._1.name)(pCVar14,1,pCVar14->klass[1]._1.namespaze);
        __this = pCVar14;
        fVar19 = fVar18;
        if (plVar12 == (long *)0x0) goto label_04323022;
        uVar21 = (**(code **)(*plVar12 + 0x388))(plVar12);
        *(undefined4 *)&pCVar15->field_0x24 = uVar20;
        *(float *)&pCVar15[1].klass = in_XMM1_Da;
        *(undefined4 *)((long)&pCVar15[1].klass + 4) = uVar21;
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      data = (Characters_TitanAttackKeyframe_o *)0x0;
      __this = a;
      bVar7 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      *(undefined1 *)&pCVar15[1].monitor = 1;
      fVar19 = in_XMM1_Da;
      if ((a != (Characters_TitanAttackKeyframe_o *)0x0) &&
         (data = "Keyframes", __this = a,
         plVar12 = (long *)(*a->klass[1]._1.this_arg.data)
                                     (a,"Keyframes",*(undefined8 *)&a->klass[1]._1.this_arg.bits),
         fVar19 = in_XMM1_Da, plVar12 != (long *)0x0)) {
        iVar16 = 0;
        do {
          iVar8 = (**(code **)(*plVar12 + 0x1e8))(plVar12,*(undefined8 *)(*plVar12 + 0x1f0));
          if (iVar8 <= iVar16) {
            data = "Ranges";
            __this = a;
            pCVar14 = (Characters_TitanAttackKeyframe_o *)
                      (*a->klass[1]._1.this_arg.data)
                                (a,"Ranges",*(undefined8 *)&a->klass[1]._1.this_arg.bits);
            fVar19 = in_XMM1_Da;
            if ((pCVar14 != (Characters_TitanAttackKeyframe_o *)0x0) &&
               (data = "X", __this = pCVar14,
               pCVar13 = (Characters_TitanAttackKeyframe_o *)
                         (*pCVar14->klass[1]._1.this_arg.data)
                                   (pCVar14,"X",*(undefined8 *)&pCVar14->klass[1]._1.this_arg.bits),
               fVar19 = in_XMM1_Da, pCVar13 != (Characters_TitanAttackKeyframe_o *)0x0)) {
              data = (Characters_TitanAttackKeyframe_o *)0x0;
              plVar12 = (long *)(*(code *)pCVar13->klass[1]._1.name)(pCVar13,0,pCVar13->klass[1]._1.namespaze)
              ;
              __this = pCVar13;
              fVar19 = in_XMM1_Da;
              if (plVar12 != (long *)0x0) {
                fVar17 = (float)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
                data = "Y";
                __this = pCVar14;
                pCVar13 = (Characters_TitanAttackKeyframe_o *)
                          (*pCVar14->klass[1]._1.this_arg.data)
                                    (pCVar14,"Y",*(undefined8 *)&pCVar14->klass[1]._1.this_arg.bits);
                fVar19 = in_XMM1_Da;
                if (pCVar13 != (Characters_TitanAttackKeyframe_o *)0x0) {
                  data = (Characters_TitanAttackKeyframe_o *)0x0;
                  plVar12 = (long *)(*(code *)pCVar13->klass[1]._1.name)
                                              (pCVar13,0,pCVar13->klass[1]._1.namespaze);
                  __this = pCVar13;
                  fVar19 = in_XMM1_Da;
                  if (plVar12 != (long *)0x0) {
                    fVar18 = (float)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390))
                    ;
                    data = "Z";
                    __this = pCVar14;
                    pCVar13 = (Characters_TitanAttackKeyframe_o *)
                              (*pCVar14->klass[1]._1.this_arg.data)
                                        (pCVar14,"Z",
                                         *(undefined8 *)&pCVar14->klass[1]._1.this_arg.bits);
                    fVar19 = in_XMM1_Da;
                    if (pCVar13 != (Characters_TitanAttackKeyframe_o *)0x0) {
                      data = (Characters_TitanAttackKeyframe_o *)0x0;
                      plVar12 = (long *)(*(code *)pCVar13->klass[1]._1.name)
                                                  (pCVar13,0,pCVar13->klass[1]._1.namespaze);
                      __this = pCVar13;
                      fVar19 = in_XMM1_Da;
                      if (plVar12 != (long *)0x0) {
                        fVar19 = (float)(**(code **)(*plVar12 + 0x388))
                                                  (plVar12,*(undefined8 *)(*plVar12 + 0x390));
                        (pCVar15->fields)._localPosition.fields.y = fVar17;
                        (pCVar15->fields)._localPosition.fields.z = fVar18;
                        (pCVar15->fields)._radius = fVar19;
                        data = "X";
                        __this = pCVar14;
                        pCVar13 = (Characters_TitanAttackKeyframe_o *)
                                  (*pCVar14->klass[1]._1.this_arg.data)
                                            (pCVar14,"X",
                                             *(undefined8 *)&pCVar14->klass[1]._1.this_arg.bits);
                        fVar19 = fVar18;
                        if (pCVar13 != (Characters_TitanAttackKeyframe_o *)0x0) {
                          data = (Characters_TitanAttackKeyframe_o *)0x1;
                          plVar12 = (long *)(*(code *)pCVar13->klass[1]._1.name)
                                                      (pCVar13,1,pCVar13->klass[1]._1.namespaze);
                          __this = pCVar13;
                          fVar19 = fVar18;
                          if (plVar12 != (long *)0x0) {
                            uVar20 = (**(code **)(*plVar12 + 0x388))
                                               (plVar12,*(undefined8 *)(*plVar12 + 0x390));
                            data = "Y";
                            __this = pCVar14;
                            pCVar13 = (Characters_TitanAttackKeyframe_o *)
                                      (*pCVar14->klass[1]._1.this_arg.data)
                                                (pCVar14,"Y",
                                                 *(undefined8 *)&pCVar14->klass[1]._1.this_arg.bits);
                            fVar19 = fVar18;
                            if (pCVar13 != (Characters_TitanAttackKeyframe_o *)0x0) {
                              data = (Characters_TitanAttackKeyframe_o *)0x1;
                              plVar12 = (long *)(*(code *)pCVar13->klass[1]._1.name)
                                                          (pCVar13,1,pCVar13->klass[1]._1.namespaze);
                              __this = pCVar13;
                              fVar19 = fVar18;
                              if (plVar12 != (long *)0x0) {
                                uVar21 = (**(code **)(*plVar12 + 0x388))
                                                   (plVar12,*(undefined8 *)(*plVar12 + 0x390));
                                data = "Z";
                                pCVar13 = (Characters_TitanAttackKeyframe_o *)
                                          (*pCVar14->klass[1]._1.this_arg.data)
                                                    (pCVar14,"Z",
                                                     *(undefined8 *)&pCVar14->klass[1]._1.this_arg.bits);
                                __this = pCVar14;
                                fVar19 = fVar18;
                                if (pCVar13 != (Characters_TitanAttackKeyframe_o *)0x0) {
                                  data = (Characters_TitanAttackKeyframe_o *)0x1;
                                  plVar12 = (long *)(*(code *)pCVar13->klass[1]._1.name)
                                                              (pCVar13,1,pCVar13->klass[1]._1.namespaze);
                                  __this = pCVar13;
                                  fVar19 = fVar18;
                                  if (plVar12 != (long *)0x0) {
                                    uVar22 = (**(code **)(*plVar12 + 0x388))
                                                       (plVar12,*(undefined8 *)(*plVar12 + 0x390));
                                    *(undefined4 *)&pCVar15->field_0x24 = uVar20;
                                    *(undefined4 *)&pCVar15[1].klass = uVar21;
                                    *(undefined4 *)((long)&pCVar15[1].klass + 4) = uVar22;
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          }
          pSVar11 = *(System_Collections_Generic_List_object__o **)&pCVar15[1].fields;
          data = "Keyframes";
          __this = a;
          plVar12 = (long *)(*a->klass[1]._1.this_arg.data)
                                      (a,"Keyframes",*(undefined8 *)&a->klass[1]._1.this_arg.bits);
          fVar19 = in_XMM1_Da;
          if (plVar12 == (long *)0x0) break;
          data = (Characters_TitanAttackKeyframe_o *)
                 (**(code **)(*plVar12 + 0x188))(plVar12,iVar16,*(undefined8 *)(*plVar12 + 400));
          auVar24 = il2cpp_runtime_helper_023052d0(TypeInfo_TitanAttackKeyframe);
          pCVar14 = auVar24._0_8_;
          __this = pCVar14;
          Characters_TitanAttackKeyframe___ctor(pCVar14,(SimpleJSONFixed_JSONNode_o *)data,auVar24._8_8_);
          lVar10 = MethodInfo_Void_Add;
          fVar19 = in_XMM1_Da;
          if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) break;
          piVar1 = &(pSVar11->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar11->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) break;
          uVar2 = (pSVar11->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar11->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pCVar14;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pCVar14);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar11,(Il2CppObject *)pCVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          iVar16 = iVar16 + 1;
          data = "Keyframes";
          __this = a;
          plVar12 = (long *)(*a->klass[1]._1.this_arg.data)
                                      (a,"Keyframes",*(undefined8 *)&a->klass[1]._1.this_arg.bits);
          fVar19 = in_XMM1_Da;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
label_04323022:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae00c == '\0') {
    il2cpp_runtime_helper_023445d0(&"x");
    il2cpp_runtime_helper_023445d0(&"f");
    il2cpp_runtime_helper_023445d0(&"y");
    il2cpp_runtime_helper_023445d0(&"z");
    il2cpp_runtime_helper_023445d0(&"r");
    g_data_057ae00c = '\x01';
  }
  pCVar15 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((data != (Characters_TitanAttackKeyframe_o *)0x0) &&
     (pCVar15 = data,
     plVar12 = (long *)(*data->klass[1]._1.this_arg.data)
                                 (data,"f",*(undefined8 *)&data->klass[1]._1.this_arg.bits),
     plVar12 != (long *)0x0)) {
    iVar9 = (**(code **)(*plVar12 + 0x368))(plVar12,*(undefined8 *)(*plVar12 + 0x370));
    (__this->fields).Frame = iVar9;
    pCVar15 = data;
    plVar12 = (long *)(*data->klass[1]._1.this_arg.data)
                                (data,"x",*(undefined8 *)&data->klass[1]._1.this_arg.bits);
    if (plVar12 != (long *)0x0) {
      fVar17 = (float)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
      pCVar15 = data;
      plVar12 = (long *)(*data->klass[1]._1.this_arg.data)
                                  (data,"y",*(undefined8 *)&data->klass[1]._1.this_arg.bits);
      if (plVar12 != (long *)0x0) {
        fVar18 = (float)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
        pCVar15 = data;
        plVar12 = (long *)(*data->klass[1]._1.this_arg.data)
                                    (data,"z",*(undefined8 *)&data->klass[1]._1.this_arg.bits);
        if (plVar12 != (long *)0x0) {
          fVar19 = (float)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
          (__this->fields)._localPosition.fields.x = fVar17;
          (__this->fields)._localPosition.fields.y = fVar18;
          (__this->fields)._localPosition.fields.z = fVar19;
          plVar12 = (long *)(*data->klass[1]._1.this_arg.data)
                                      (data,"r",*(undefined8 *)&data->klass[1]._1.this_arg.bits);
          pCVar15 = data;
          fVar19 = fVar18;
          if (plVar12 != (long *)0x0) {
            fVar19 = (float)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
            (__this->fields)._radius = fVar19;
            return;
          }
        }
      }
    }
  }
  uVar23 = il2cpp_runtime_helper_022b2c90();
  fVar17 = (float)((ulong)uVar23 >> 0x20);
  if ((float)uVar23 < (pCVar15->fields)._localPosition.fields.y) {
    return;
  }
  if (fVar17 < (pCVar15->fields)._localPosition.fields.z) {
    return;
  }
  if ((pCVar15->fields)._radius <= fVar19) {
    if (*(float *)&pCVar15->field_0x24 < (float)uVar23) {
      return;
    }
    if (fVar17 <= *(float *)&pCVar15[1].klass) {
      return;
    }
    return;
  }
  return;
}


