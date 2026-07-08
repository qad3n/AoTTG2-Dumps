// Type: Characters.TitanSounds
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/TitanSounds.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Titan/TitanSounds.cs  [CHANGED since prior version]
// --------------------------------

// Characters.TitanSounds$$GetRandom
// il2cpp: System_String_o* Characters_TitanSounds__GetRandom (System_String_array* sounds, const MethodInfo* method);
// 0x4014eb0

System_String_o * Characters_TitanSounds__GetRandom(System_String_array *sounds,MethodInfo *method)

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


// Characters.TitanSounds$$GetRandomFromList
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomFromList (System_String_array* sounds, const MethodInfo* method);
// 0x4014ee0

System_String_o *
Characters_TitanSounds__GetRandomFromList(System_String_array *sounds,MethodInfo *method)

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


// Characters.TitanSounds$$GetRandomFootstep
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomFootstep (const MethodInfo* method);
// 0x4014f10

System_String_o * Characters_TitanSounds__GetRandomFootstep(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  if (DAT_05704296 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05704296 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x158);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x158);
  }
  if (lVar2 != 0) {
    uVar3 = UnityEngine_Random__Range(0,*(int32_t *)(lVar2 + 0x18),(MethodInfo *)0x0);
    if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    return *(System_String_o **)(lVar2 + 0x20 + (long)(int)uVar3 * 8);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.TitanSounds$$GetRandomHurt
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomHurt (const MethodInfo* method);
// 0x4014fb0

System_String_o * Characters_TitanSounds__GetRandomHurt(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if (DAT_05704297 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05704297 = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,8);
  if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x30);
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x38);
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x40);
          il2cpp_runtime_glue(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x48);
            il2cpp_runtime_glue(lVar2 + 0x38);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x50)
              ;
              il2cpp_runtime_glue(lVar2 + 0x40);
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) =
                     *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x58);
                il2cpp_runtime_glue(lVar2 + 0x48);
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x50) =
                       *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x60);
                  il2cpp_runtime_glue(lVar2 + 0x50);
                  if (7 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x58) =
                         *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x68);
                    il2cpp_runtime_glue();
                    uVar1 = UnityEngine_Random__Range
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
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.TitanSounds$$GetRandomGrabGrunt
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomGrabGrunt (const MethodInfo* method);
// 0x4015170

System_String_o * Characters_TitanSounds__GetRandomGrabGrunt(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if (DAT_05704298 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05704298 = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,10);
  if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x70);
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x78);
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x80);
          il2cpp_runtime_glue(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x88);
            il2cpp_runtime_glue(lVar2 + 0x38);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x90)
              ;
              il2cpp_runtime_glue(lVar2 + 0x40);
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) =
                     *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x98);
                il2cpp_runtime_glue(lVar2 + 0x48);
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x50) =
                       *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa0);
                  il2cpp_runtime_glue(lVar2 + 0x50);
                  if (7 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x58) =
                         *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xa8);
                    il2cpp_runtime_glue(lVar2 + 0x58);
                    if (8 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x60) =
                           *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb0);
                      il2cpp_runtime_glue(lVar2 + 0x60);
                      if (9 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x68) =
                             *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xb8);
                        il2cpp_runtime_glue();
                        uVar1 = UnityEngine_Random__Range
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
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.TitanSounds$$GetRandomLaugh
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomLaugh (const MethodInfo* method);
// 0x4008810

System_String_o * Characters_TitanSounds__GetRandomLaugh(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if (DAT_05704299 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05704299 = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,2);
  if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf8);
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x100);
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


// Characters.TitanSounds$$GetRandomBite
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomBite (const MethodInfo* method);
// 0x400e020

System_String_o * Characters_TitanSounds__GetRandomBite(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if (DAT_0570429a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570429a = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,2);
  if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe8);
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xf0);
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


// Characters.TitanSounds$$.ctor
// il2cpp: void Characters_TitanSounds___ctor (Characters_TitanSounds_o* __this, const MethodInfo* method);
// 0x4015390

void Characters_TitanSounds___ctor(Characters_TitanSounds_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.TitanSounds$$.cctor
// il2cpp: void Characters_TitanSounds___cctor (const MethodInfo* method);
// 0x40153a0

void Characters_TitanSounds___cctor(MethodInfo *method)

{
  long lVar1;
  long lVar2;
  
  if (DAT_0570429b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    il2cpp_init_method_metadata(&"Hurt2");
    il2cpp_init_method_metadata(&"Huff2");
    il2cpp_init_method_metadata(&"Swing3");
    il2cpp_init_method_metadata(&"Huff4");
    il2cpp_init_method_metadata(&"DeathNoFall");
    il2cpp_init_method_metadata(&"Footstep1");
    il2cpp_init_method_metadata(&"RockThrow2");
    il2cpp_init_method_metadata(&"Huff1");
    il2cpp_init_method_metadata(&"Grunt1");
    il2cpp_init_method_metadata(&"TitanJump");
    il2cpp_init_method_metadata(&"Laugh2");
    il2cpp_init_method_metadata(&"Hurt3");
    il2cpp_init_method_metadata(&"Bite1");
    il2cpp_init_method_metadata(&"Huff6");
    il2cpp_init_method_metadata(&"Grunt4");
    il2cpp_init_method_metadata(&"Hurt5");
    il2cpp_init_method_metadata(&"Footstep3");
    il2cpp_init_method_metadata(&"Grunt2");
    il2cpp_init_method_metadata(&"Grunt6");
    il2cpp_init_method_metadata(&"Grunt10");
    il2cpp_init_method_metadata(&"Swing1");
    il2cpp_init_method_metadata(&"Hurt4");
    il2cpp_init_method_metadata(&"Hurt8");
    il2cpp_init_method_metadata(&"Huff5");
    il2cpp_init_method_metadata(&"Hit");
    il2cpp_init_method_metadata(&"Hurt1");
    il2cpp_init_method_metadata(&"Hurt6");
    il2cpp_init_method_metadata(&"Bite2");
    il2cpp_init_method_metadata(&"Swing2");
    il2cpp_init_method_metadata(&"DeathFall");
    il2cpp_init_method_metadata(&"Footstep2");
    il2cpp_init_method_metadata(&"RockPickup");
    il2cpp_init_method_metadata(&"Grunt5");
    il2cpp_init_method_metadata(&"Grunt7");
    il2cpp_init_method_metadata(&"Grunt9");
    il2cpp_init_method_metadata(&"Roar2");
    il2cpp_init_method_metadata(&"Grunt8");
    il2cpp_init_method_metadata(&"Laugh1");
    il2cpp_init_method_metadata(&"Grunt3");
    il2cpp_init_method_metadata(&"Hurt7");
    il2cpp_init_method_metadata(&"Roar1");
    il2cpp_init_method_metadata(&"Huff3");
    il2cpp_init_method_metadata(&"RockThrow1");
    DAT_0570429b = '\x01';
  }
  **(undefined8 **)(TypeInfo_TitanSounds + 0xb8) = "Footstep1";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_TitanSounds + 0xb8),"Footstep1");
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 8) = "Footstep2";
  il2cpp_runtime_glue(lVar2 + 8);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x10) = "Footstep3";
  il2cpp_runtime_glue(lVar2 + 0x10);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x18) = "Swing1";
  il2cpp_runtime_glue(lVar2 + 0x18);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x20) = "Swing2";
  il2cpp_runtime_glue(lVar2 + 0x20);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x28) = "Swing3";
  il2cpp_runtime_glue(lVar2 + 0x28);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x30) = "Hurt1";
  il2cpp_runtime_glue(lVar2 + 0x30);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x38) = "Hurt2";
  il2cpp_runtime_glue(lVar2 + 0x38);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x40) = "Hurt3";
  il2cpp_runtime_glue(lVar2 + 0x40);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x48) = "Hurt4";
  il2cpp_runtime_glue(lVar2 + 0x48);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x50) = "Hurt5";
  il2cpp_runtime_glue(lVar2 + 0x50);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x58) = "Hurt6";
  il2cpp_runtime_glue(lVar2 + 0x58);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x60) = "Hurt7";
  il2cpp_runtime_glue(lVar2 + 0x60);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x68) = "Hurt8";
  il2cpp_runtime_glue(lVar2 + 0x68);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x70) = "Grunt1";
  il2cpp_runtime_glue(lVar2 + 0x70);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x78) = "Grunt2";
  il2cpp_runtime_glue(lVar2 + 0x78);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x80) = "Grunt3";
  il2cpp_runtime_glue(lVar2 + 0x80);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x88) = "Grunt4";
  il2cpp_runtime_glue(lVar2 + 0x88);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x90) = "Grunt5";
  il2cpp_runtime_glue(lVar2 + 0x90);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x98) = "Grunt6";
  il2cpp_runtime_glue(lVar2 + 0x98);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0xa0) = "Grunt7";
  il2cpp_runtime_glue(lVar2 + 0xa0);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0xa8) = "Grunt8";
  il2cpp_runtime_glue(lVar2 + 0xa8);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0xb0) = "Grunt9";
  il2cpp_runtime_glue(lVar2 + 0xb0);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0xb8) = "Grunt10";
  il2cpp_runtime_glue(lVar2 + 0xb8);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0xc0) = "Hit";
  il2cpp_runtime_glue(lVar2 + 0xc0);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 200) = "Roar1";
  il2cpp_runtime_glue(lVar2 + 200);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0xd0) = "Roar2";
  il2cpp_runtime_glue(lVar2 + 0xd0);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0xd8) = "DeathFall";
  il2cpp_runtime_glue(lVar2 + 0xd8);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0xe0) = "DeathNoFall";
  il2cpp_runtime_glue(lVar2 + 0xe0);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0xe8) = "Bite1";
  il2cpp_runtime_glue(lVar2 + 0xe8);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0xf0) = "Bite2";
  il2cpp_runtime_glue(lVar2 + 0xf0);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0xf8) = "Laugh1";
  il2cpp_runtime_glue(lVar2 + 0xf8);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x100) = "Laugh2";
  il2cpp_runtime_glue(lVar2 + 0x100);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x108) = "Huff1";
  il2cpp_runtime_glue(lVar2 + 0x108);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x110) = "Huff2";
  il2cpp_runtime_glue(lVar2 + 0x110);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x118) = "Huff3";
  il2cpp_runtime_glue(lVar2 + 0x118);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x120) = "Huff4";
  il2cpp_runtime_glue(lVar2 + 0x120);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x128) = "Huff5";
  il2cpp_runtime_glue(lVar2 + 0x128);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x130) = "Huff6";
  il2cpp_runtime_glue(lVar2 + 0x130);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x138) = "TitanJump";
  il2cpp_runtime_glue(lVar2 + 0x138);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x140) = "RockPickup";
  il2cpp_runtime_glue(lVar2 + 0x140);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x148) = "RockThrow1";
  il2cpp_runtime_glue(lVar2 + 0x148);
  lVar2 = *(long *)(TypeInfo_TitanSounds + 0xb8);
  *(undefined8 *)(lVar2 + 0x150) = "RockThrow2";
  il2cpp_runtime_glue(lVar2 + 0x150);
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,3);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = **(undefined8 **)(TypeInfo_TitanSounds + 0xb8);
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 8);
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x10);
          il2cpp_runtime_glue(lVar2 + 0x30);
          lVar1 = *(long *)(TypeInfo_TitanSounds + 0xb8);
          *(long *)(lVar1 + 0x158) = lVar2;
          il2cpp_runtime_glue(lVar1 + 0x158,lVar2);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


