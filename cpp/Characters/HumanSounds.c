// Type: Characters.HumanSounds
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/HumanSounds.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/HumanSounds.cs  [CHANGED since prior version]
// --------------------------------

// Characters.HumanSounds$$GetRandom
// il2cpp: System_String_o* Characters_HumanSounds__GetRandom (System_String_array* sounds, const MethodInfo* method);
// 0x3fd4c00

System_String_o * Characters_HumanSounds__GetRandom(System_String_array *sounds,MethodInfo *method)

{
  uint uVar1;
  
  if (sounds == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar1 = UnityEngine_Random__Range(0,(int32_t)sounds->max_length,(MethodInfo *)0x0);
  if (uVar1 < (uint)sounds->max_length) {
    return sounds->m_Items[(int)uVar1];
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSounds$$GetRandomTSLaunch
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomTSLaunch (const MethodInfo* method);
// 0x3fd4c30

System_String_o * Characters_HumanSounds__GetRandomTSLaunch(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if (DAT_057040f4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_057040f4 = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,2);
  if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 600);
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x260);
        il2cpp_runtime_glue();
        uVar1 = UnityEngine_Random__Range(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSounds$$GetRandomAPGShot
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAPGShot (const MethodInfo* method);
// 0x3fd4d10

System_String_o * Characters_HumanSounds__GetRandomAPGShot(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if (DAT_057040f5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_057040f5 = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,4);
  if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x178);
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x180);
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x188);
          il2cpp_runtime_glue(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 400);
            il2cpp_runtime_glue();
            uVar1 = UnityEngine_Random__Range(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSounds$$GetRandomAHSSNapeHitVar1
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAHSSNapeHitVar1 (const MethodInfo* method);
// 0x3fd4e40

System_String_o * Characters_HumanSounds__GetRandomAHSSNapeHitVar1(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if (DAT_057040f6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_057040f6 = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,3);
  if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x228);
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x238);
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x248);
          il2cpp_runtime_glue();
          uVar1 = UnityEngine_Random__Range(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSounds$$GetRandomAHSSNapeHitVar2
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAHSSNapeHitVar2 (const MethodInfo* method);
// 0x3fd4f50

System_String_o * Characters_HumanSounds__GetRandomAHSSNapeHitVar2(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if (DAT_057040f7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_057040f7 = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,3);
  if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x230);
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x240);
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x250);
          il2cpp_runtime_glue();
          uVar1 = UnityEngine_Random__Range(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSounds$$GetRandomBladeNapeVar1
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomBladeNapeVar1 (const MethodInfo* method);
// 0x3fd5060

System_String_o * Characters_HumanSounds__GetRandomBladeNapeVar1(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if (DAT_057040f8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_057040f8 = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,3);
  if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x198);
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a0);
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a8);
          il2cpp_runtime_glue();
          uVar1 = UnityEngine_Random__Range(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSounds$$GetRandomBladeNapeVar2
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomBladeNapeVar2 (const MethodInfo* method);
// 0x3fd5170

System_String_o * Characters_HumanSounds__GetRandomBladeNapeVar2(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if (DAT_057040f9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_057040f9 = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,3);
  if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b0);
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b8);
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c0);
          il2cpp_runtime_glue();
          uVar1 = UnityEngine_Random__Range(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSounds$$GetRandomBladeNapeVar3
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomBladeNapeVar3 (const MethodInfo* method);
// 0x3fd5280

System_String_o * Characters_HumanSounds__GetRandomBladeNapeVar3(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if (DAT_057040fa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_057040fa = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,3);
  if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c8);
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d0);
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d8);
          il2cpp_runtime_glue();
          uVar1 = UnityEngine_Random__Range(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSounds$$GetRandomBladeNapeVar4
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomBladeNapeVar4 (const MethodInfo* method);
// 0x3fd5390

System_String_o * Characters_HumanSounds__GetRandomBladeNapeVar4(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if (DAT_057040fb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_057040fb = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,3);
  if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e0);
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e8);
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f0);
          il2cpp_runtime_glue();
          uVar1 = UnityEngine_Random__Range(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSounds$$GetRandomAHSSGunShot
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAHSSGunShot (const MethodInfo* method);
// 0x3fd54a0

System_String_o * Characters_HumanSounds__GetRandomAHSSGunShot(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if (DAT_057040fc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_057040fc = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,4);
  if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f8);
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x200);
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x208);
          il2cpp_runtime_glue(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x210);
            il2cpp_runtime_glue();
            uVar1 = UnityEngine_Random__Range(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSounds$$GetRandomAHSSGunShotDouble
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAHSSGunShotDouble (const MethodInfo* method);
// 0x3fd55d0

System_String_o * Characters_HumanSounds__GetRandomAHSSGunShotDouble(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if (DAT_057040fd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_057040fd = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,2);
  if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x218);
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x220);
        il2cpp_runtime_glue();
        uVar1 = UnityEngine_Random__Range(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar1 * 8);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSounds$$.ctor
// il2cpp: void Characters_HumanSounds___ctor (Characters_HumanSounds_o* __this, const MethodInfo* method);
// 0x3fd56b0

void Characters_HumanSounds___ctor(Characters_HumanSounds_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSounds$$.cctor
// il2cpp: void Characters_HumanSounds___cctor (const MethodInfo* method);
// 0x3fd56c0

void Characters_HumanSounds___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057040fe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&"Death4");
    il2cpp_init_method_metadata(&"AHSSGunShotDouble2");
    il2cpp_init_method_metadata(&"AHSSNape2Var1");
    il2cpp_init_method_metadata(&"TSLaunch2");
    il2cpp_init_method_metadata(&"AHSSNape1Var1");
    il2cpp_init_method_metadata(&"BladeNape1Var2");
    il2cpp_init_method_metadata(&"BladeNape3Var1");
    il2cpp_init_method_metadata(&"BladeNape4Var1");
    il2cpp_init_method_metadata(&"ThunderspearLaunch");
    il2cpp_init_method_metadata(&"GasEnd");
    il2cpp_init_method_metadata(&"NoGas");
    il2cpp_init_method_metadata(&"NapeHit");
    il2cpp_init_method_metadata(&"Footstep1");
    il2cpp_init_method_metadata(&"GunExplode");
    il2cpp_init_method_metadata(&"GasStart");
    il2cpp_init_method_metadata(&"BladeSwing2");
    il2cpp_init_method_metadata(&"AHSSNape3Var1");
    il2cpp_init_method_metadata(&"BladeHit");
    il2cpp_init_method_metadata(&"HookImpact");
    il2cpp_init_method_metadata(&"AHSSGunShot1");
    il2cpp_init_method_metadata(&"Death3");
    il2cpp_init_method_metadata(&"Death1");
    il2cpp_init_method_metadata(&"BladeSwing3");
    il2cpp_init_method_metadata(&"BladeBreak");
    il2cpp_init_method_metadata(&"AHSSNape1Var2");
    il2cpp_init_method_metadata(&"LimbHit");
    il2cpp_init_method_metadata(&"APGShot1");
    il2cpp_init_method_metadata(&"BladeNape2Var2");
    il2cpp_init_method_metadata(&"Death5");
    il2cpp_init_method_metadata(&"HookRetractRight");
    il2cpp_init_method_metadata(&"BladeSwing1");
    il2cpp_init_method_metadata(&"OldBladeHit");
    il2cpp_init_method_metadata(&"Land");
    il2cpp_init_method_metadata(&"APGShot2");
    il2cpp_init_method_metadata(&"BladeNape1Var1");
    il2cpp_init_method_metadata(&"AHSSGunShotDouble1");
    il2cpp_init_method_metadata(&"BladeSwing4");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"BladeNape1Var3");
    il2cpp_init_method_metadata(&"CrashLand");
    il2cpp_init_method_metadata(&"HookImpactLoud");
    il2cpp_init_method_metadata(&"AHSSGunShot4");
    il2cpp_init_method_metadata(&"Dodge");
    il2cpp_init_method_metadata(&"HookRetractLeft");
    il2cpp_init_method_metadata(&"GunExplodeLoud");
    il2cpp_init_method_metadata(&"AHSSNape3Var2");
    il2cpp_init_method_metadata(&"ReelOut");
    il2cpp_init_method_metadata(&"Refill");
    il2cpp_init_method_metadata(&"Slide");
    il2cpp_init_method_metadata(&"BladeNape2Var1");
    il2cpp_init_method_metadata(&"BladeNape2Var3");
    il2cpp_init_method_metadata(&"BladeNape3Var3");
    il2cpp_init_method_metadata(&"HookLaunch");
    il2cpp_init_method_metadata(&"GasLoop");
    il2cpp_init_method_metadata(&"FlareLaunch");
    il2cpp_init_method_metadata(&"AHSSNape2Var2");
    il2cpp_init_method_metadata(&"Footstep2");
    il2cpp_init_method_metadata(&"Switchback");
    il2cpp_init_method_metadata(&"APGShot4");
    il2cpp_init_method_metadata(&"BladeReloadGround");
    il2cpp_init_method_metadata(&"Death2");
    il2cpp_init_method_metadata(&"APGShot3");
    il2cpp_init_method_metadata(&"BladeNape4Var3");
    il2cpp_init_method_metadata(&"BladeNape4Var2");
    il2cpp_init_method_metadata(&"AHSSGunShot2");
    il2cpp_init_method_metadata(&"GunReload");
    il2cpp_init_method_metadata(&"Checkpoint");
    il2cpp_init_method_metadata(&"BladeReloadAir");
    il2cpp_init_method_metadata(&"OldNapeHit");
    il2cpp_init_method_metadata(&"AHSSGunShot3");
    il2cpp_init_method_metadata(&"WaterSplash");
    il2cpp_init_method_metadata(&"OldBladeSwing");
    il2cpp_init_method_metadata(&"BladeNape3Var2");
    il2cpp_init_method_metadata(&"GasBurst");
    il2cpp_init_method_metadata(&"ReelIn");
    il2cpp_init_method_metadata(&"OldHookLaunch");
    il2cpp_init_method_metadata(&"TSLaunch1");
    DAT_057040fe = '\x01';
  }
  **(undefined8 **)(TypeInfo_HumanSounds + 0xb8) = "BladeBreak";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_HumanSounds + 0xb8),"BladeBreak");
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "BladeHit";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "OldBladeHit";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "NapeHit";
  il2cpp_runtime_glue(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "LimbHit";
  il2cpp_runtime_glue(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "OldNapeHit";
  il2cpp_runtime_glue(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "BladeReloadAir";
  il2cpp_runtime_glue(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "BladeReloadGround";
  il2cpp_runtime_glue(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "GunReload";
  il2cpp_runtime_glue(lVar1 + 0x40);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x48) = "BladeSwing1";
  il2cpp_runtime_glue(lVar1 + 0x48);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x50) = "BladeSwing2";
  il2cpp_runtime_glue(lVar1 + 0x50);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x58) = "BladeSwing3";
  il2cpp_runtime_glue(lVar1 + 0x58);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x60) = "BladeSwing4";
  il2cpp_runtime_glue(lVar1 + 0x60);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x68) = "OldBladeSwing";
  il2cpp_runtime_glue(lVar1 + 0x68);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x70) = "Dodge";
  il2cpp_runtime_glue(lVar1 + 0x70);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x78) = "FlareLaunch";
  il2cpp_runtime_glue(lVar1 + 0x78);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x80) = "ThunderspearLaunch";
  il2cpp_runtime_glue(lVar1 + 0x80);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x88) = "GasBurst";
  il2cpp_runtime_glue(lVar1 + 0x88);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x90) = "HookLaunch";
  il2cpp_runtime_glue(lVar1 + 0x90);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x98) = "OldHookLaunch";
  il2cpp_runtime_glue(lVar1 + 0x98);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xa0) = "HookRetractLeft";
  il2cpp_runtime_glue(lVar1 + 0xa0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xa8) = "HookRetractRight";
  il2cpp_runtime_glue(lVar1 + 0xa8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xb0) = "HookImpact";
  il2cpp_runtime_glue(lVar1 + 0xb0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xb8) = "HookImpactLoud";
  il2cpp_runtime_glue(lVar1 + 0xb8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xc0) = "GasStart";
  il2cpp_runtime_glue(lVar1 + 0xc0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 200) = "GasLoop";
  il2cpp_runtime_glue(lVar1 + 200);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xd0) = "GasEnd";
  il2cpp_runtime_glue(lVar1 + 0xd0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xd8) = "ReelIn";
  il2cpp_runtime_glue(lVar1 + 0xd8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xe0) = "ReelOut";
  il2cpp_runtime_glue(lVar1 + 0xe0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xe8) = "CrashLand";
  il2cpp_runtime_glue(lVar1 + 0xe8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xf0) = "Jump";
  il2cpp_runtime_glue(lVar1 + 0xf0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0xf8) = "Land";
  il2cpp_runtime_glue(lVar1 + 0xf8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x100) = "NoGas";
  il2cpp_runtime_glue(lVar1 + 0x100);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x108) = "Refill";
  il2cpp_runtime_glue(lVar1 + 0x108);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x110) = "Slide";
  il2cpp_runtime_glue(lVar1 + 0x110);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x118) = "Footstep1";
  il2cpp_runtime_glue(lVar1 + 0x118);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x120) = "Footstep2";
  il2cpp_runtime_glue(lVar1 + 0x120);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x128) = "Death1";
  il2cpp_runtime_glue(lVar1 + 0x128);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x130) = "Death2";
  il2cpp_runtime_glue(lVar1 + 0x130);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x138) = "Death3";
  il2cpp_runtime_glue(lVar1 + 0x138);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x140) = "Death4";
  il2cpp_runtime_glue(lVar1 + 0x140);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x148) = "Death5";
  il2cpp_runtime_glue(lVar1 + 0x148);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x150) = "Checkpoint";
  il2cpp_runtime_glue(lVar1 + 0x150);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x158) = "GunExplode";
  il2cpp_runtime_glue(lVar1 + 0x158);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x160) = "GunExplodeLoud";
  il2cpp_runtime_glue(lVar1 + 0x160);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x168) = "WaterSplash";
  il2cpp_runtime_glue(lVar1 + 0x168);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x170) = "Switchback";
  il2cpp_runtime_glue(lVar1 + 0x170);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x178) = "APGShot1";
  il2cpp_runtime_glue(lVar1 + 0x178);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x180) = "APGShot2";
  il2cpp_runtime_glue(lVar1 + 0x180);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x188) = "APGShot3";
  il2cpp_runtime_glue(lVar1 + 0x188);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 400) = "APGShot4";
  il2cpp_runtime_glue(lVar1 + 400);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x198) = "BladeNape1Var1";
  il2cpp_runtime_glue(lVar1 + 0x198);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1a0) = "BladeNape1Var2";
  il2cpp_runtime_glue(lVar1 + 0x1a0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1a8) = "BladeNape1Var3";
  il2cpp_runtime_glue(lVar1 + 0x1a8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1b0) = "BladeNape2Var1";
  il2cpp_runtime_glue(lVar1 + 0x1b0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1b8) = "BladeNape2Var2";
  il2cpp_runtime_glue(lVar1 + 0x1b8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1c0) = "BladeNape2Var3";
  il2cpp_runtime_glue(lVar1 + 0x1c0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1c8) = "BladeNape3Var1";
  il2cpp_runtime_glue(lVar1 + 0x1c8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1d0) = "BladeNape3Var2";
  il2cpp_runtime_glue(lVar1 + 0x1d0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1d8) = "BladeNape3Var3";
  il2cpp_runtime_glue(lVar1 + 0x1d8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1e0) = "BladeNape4Var1";
  il2cpp_runtime_glue(lVar1 + 0x1e0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1e8) = "BladeNape4Var2";
  il2cpp_runtime_glue(lVar1 + 0x1e8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1f0) = "BladeNape4Var3";
  il2cpp_runtime_glue(lVar1 + 0x1f0);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x1f8) = "AHSSGunShot1";
  il2cpp_runtime_glue(lVar1 + 0x1f8);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x200) = "AHSSGunShot2";
  il2cpp_runtime_glue(lVar1 + 0x200);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x208) = "AHSSGunShot3";
  il2cpp_runtime_glue(lVar1 + 0x208);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x210) = "AHSSGunShot4";
  il2cpp_runtime_glue(lVar1 + 0x210);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x218) = "AHSSGunShotDouble1";
  il2cpp_runtime_glue(lVar1 + 0x218);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x220) = "AHSSGunShotDouble2";
  il2cpp_runtime_glue(lVar1 + 0x220);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x228) = "AHSSNape1Var1";
  il2cpp_runtime_glue(lVar1 + 0x228);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x230) = "AHSSNape1Var2";
  il2cpp_runtime_glue(lVar1 + 0x230);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x238) = "AHSSNape2Var1";
  il2cpp_runtime_glue(lVar1 + 0x238);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x240) = "AHSSNape2Var2";
  il2cpp_runtime_glue(lVar1 + 0x240);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x248) = "AHSSNape3Var1";
  il2cpp_runtime_glue(lVar1 + 0x248);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x250) = "AHSSNape3Var2";
  il2cpp_runtime_glue(lVar1 + 0x250);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 600) = "TSLaunch1";
  il2cpp_runtime_glue(lVar1 + 600);
  lVar1 = *(long *)(TypeInfo_HumanSounds + 0xb8);
  *(undefined8 *)(lVar1 + 0x260) = "TSLaunch2";
  il2cpp_runtime_glue(lVar1 + 0x260);
  return;
}


