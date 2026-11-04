// Type: Characters.TitanSounds
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/TitanSounds.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/TitanSounds.cs
// --------------------------------

// Characters.TitanSounds$$GetRandom
// il2cpp: System_String_o* Characters_TitanSounds__GetRandom (System_String_array* sounds, const MethodInfo* method);
// 0x18215c630

System_String_o*
Characters_TitanSounds__GetRandom(System_String_array* sounds, MethodInfo* method)

{
  uint uVar1;
  
  if (sounds == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = UnityEngine_Random__RandomRangeInt(0,(int32_t)sounds->max_length,(MethodInfo *)0x0);
  if (uVar1 < (uint)sounds->max_length) {
    return sounds->m_Items[(int)uVar1];
  }
  ThrowIndexOutOfRangeException();
}


// Characters.TitanSounds$$GetRandomFromList
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomFromList (System_String_array* sounds, const MethodInfo* method);
// 0x18215c630

System_String_o * Characters_TitanSounds__GetRandomFromList(System_String_array *sounds,MethodInfo *method)

{
  uint uVar1;
  
  if (sounds == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = UnityEngine_Random__RandomRangeInt(0,(int32_t)sounds->max_length,(MethodInfo *)0x0);
  if (uVar1 < (uint)sounds->max_length) {
    return sounds->m_Items[(int)uVar1];
  }
  ThrowIndexOutOfRangeException();
}


// Characters.TitanSounds$$GetRandomFootstep
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomFootstep (const MethodInfo* method);
// 0x1821cd8c0

System_String_o * Characters_TitanSounds__GetRandomFootstep(MethodInfo *method)

{
  System_String_array *pSVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184346ea1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346ea1 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  pSVar1 = TypeInfo_Characters_TitanSounds->static_fields->Footsteps;
  if (pSVar1 != (System_String_array *)0x0) {
    uVar2 = UnityEngine_Random__RandomRangeInt(0,(int32_t)pSVar1->max_length,(MethodInfo *)0x0);
    if (uVar2 < (uint)pSVar1->max_length) {
      return pSVar1->m_Items[(int)uVar2];
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Characters.TitanSounds$$GetRandomHurt
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomHurt (const MethodInfo* method);
// 0x1821cdb80

System_String_o * Characters_TitanSounds__GetRandomHurt(MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_String_o *pSVar2;
  uint uVar3;
  Il2CppObject *pIVar4;
  
  if (Il2CppMethodInitialized_184346ea2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346ea2 = '\x01';
  }
  pIVar4 = SZArrayNew(TypeInfo_string_array,8);
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  if (pIVar4 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar4[1].monitor != 0) {
      pIVar1 = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Hurt1;
      pIVar4[2].klass = pIVar1;
      Il2CppCodeGenWriteBarrier(&pIVar4[2].klass,pIVar1);
      if (1 < *(uint *)&pIVar4[1].monitor) {
        pSVar2 = TypeInfo_Characters_TitanSounds->static_fields->Hurt2;
        pIVar4[2].monitor = pSVar2;
        Il2CppCodeGenWriteBarrier(&pIVar4[2].monitor,pSVar2);
        if (2 < *(uint *)&pIVar4[1].monitor) {
          pIVar1 = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Hurt3;
          pIVar4[3].klass = pIVar1;
          Il2CppCodeGenWriteBarrier(&pIVar4[3].klass,pIVar1);
          if (3 < *(uint *)&pIVar4[1].monitor) {
            pSVar2 = TypeInfo_Characters_TitanSounds->static_fields->Hurt4;
            pIVar4[3].monitor = pSVar2;
            Il2CppCodeGenWriteBarrier(&pIVar4[3].monitor,pSVar2);
            if (4 < *(uint *)&pIVar4[1].monitor) {
              pIVar1 = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Hurt5;
              pIVar4[4].klass = pIVar1;
              Il2CppCodeGenWriteBarrier(&pIVar4[4].klass,pIVar1);
              if (5 < *(uint *)&pIVar4[1].monitor) {
                pSVar2 = TypeInfo_Characters_TitanSounds->static_fields->Hurt6;
                pIVar4[4].monitor = pSVar2;
                Il2CppCodeGenWriteBarrier(&pIVar4[4].monitor,pSVar2);
                if (6 < *(uint *)&pIVar4[1].monitor) {
                  pIVar1 = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Hurt7;
                  pIVar4[5].klass = pIVar1;
                  Il2CppCodeGenWriteBarrier(&pIVar4[5].klass,pIVar1);
                  if (7 < *(uint *)&pIVar4[1].monitor) {
                    pSVar2 = TypeInfo_Characters_TitanSounds->static_fields->Hurt8;
                    pIVar4[5].monitor = pSVar2;
                    Il2CppCodeGenWriteBarrier(&pIVar4[5].monitor,pSVar2);
                    uVar3 = UnityEngine_Random__RandomRangeInt
                                      (0,*(int32_t *)&pIVar4[1].monitor,(MethodInfo *)0x0);
                    if (uVar3 < *(uint *)&pIVar4[1].monitor) {
                      return (System_String_o *)(&pIVar4[2].klass)[(int)uVar3];
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Characters.TitanSounds$$GetRandomGrabGrunt
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomGrabGrunt (const MethodInfo* method);
// 0x1821cd940

System_String_o * Characters_TitanSounds__GetRandomGrabGrunt(MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_String_o *pSVar2;
  uint uVar3;
  Il2CppObject *pIVar4;
  
  if (Il2CppMethodInitialized_184346ea3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346ea3 = '\x01';
  }
  pIVar4 = SZArrayNew(TypeInfo_string_array,10);
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  if (pIVar4 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar4[1].monitor != 0) {
      pIVar1 = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Grunt1;
      pIVar4[2].klass = pIVar1;
      Il2CppCodeGenWriteBarrier(&pIVar4[2].klass,pIVar1);
      if (1 < *(uint *)&pIVar4[1].monitor) {
        pSVar2 = TypeInfo_Characters_TitanSounds->static_fields->Grunt2;
        pIVar4[2].monitor = pSVar2;
        Il2CppCodeGenWriteBarrier(&pIVar4[2].monitor,pSVar2);
        if (2 < *(uint *)&pIVar4[1].monitor) {
          pIVar1 = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Grunt3;
          pIVar4[3].klass = pIVar1;
          Il2CppCodeGenWriteBarrier(&pIVar4[3].klass,pIVar1);
          if (3 < *(uint *)&pIVar4[1].monitor) {
            pSVar2 = TypeInfo_Characters_TitanSounds->static_fields->Grunt4;
            pIVar4[3].monitor = pSVar2;
            Il2CppCodeGenWriteBarrier(&pIVar4[3].monitor,pSVar2);
            if (4 < *(uint *)&pIVar4[1].monitor) {
              pIVar1 = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Grunt5;
              pIVar4[4].klass = pIVar1;
              Il2CppCodeGenWriteBarrier(&pIVar4[4].klass,pIVar1);
              if (5 < *(uint *)&pIVar4[1].monitor) {
                pSVar2 = TypeInfo_Characters_TitanSounds->static_fields->Grunt6;
                pIVar4[4].monitor = pSVar2;
                Il2CppCodeGenWriteBarrier(&pIVar4[4].monitor,pSVar2);
                if (6 < *(uint *)&pIVar4[1].monitor) {
                  pIVar1 = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Grunt7;
                  pIVar4[5].klass = pIVar1;
                  Il2CppCodeGenWriteBarrier(&pIVar4[5].klass,pIVar1);
                  if (7 < *(uint *)&pIVar4[1].monitor) {
                    pSVar2 = TypeInfo_Characters_TitanSounds->static_fields->Grunt8;
                    pIVar4[5].monitor = pSVar2;
                    Il2CppCodeGenWriteBarrier(&pIVar4[5].monitor,pSVar2);
                    if (8 < *(uint *)&pIVar4[1].monitor) {
                      pIVar1 = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Grunt9;
                      pIVar4[6].klass = pIVar1;
                      Il2CppCodeGenWriteBarrier(&pIVar4[6].klass,pIVar1);
                      if (9 < *(uint *)&pIVar4[1].monitor) {
                        pSVar2 = TypeInfo_Characters_TitanSounds->static_fields->Grunt10;
                        pIVar4[6].monitor = pSVar2;
                        Il2CppCodeGenWriteBarrier(&pIVar4[6].monitor,pSVar2);
                        uVar3 = UnityEngine_Random__RandomRangeInt
                                          (0,*(int32_t *)&pIVar4[1].monitor,(MethodInfo *)0x0);
                        if (uVar3 < *(uint *)&pIVar4[1].monitor) {
                          return (System_String_o *)(&pIVar4[2].klass)[(int)uVar3];
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
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Characters.TitanSounds$$GetRandomLaugh
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomLaugh (const MethodInfo* method);
// 0x1821cdd50

System_String_o * Characters_TitanSounds__GetRandomLaugh(MethodInfo *method)

{
  Il2CppClass *value;
  System_String_o *value_00;
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_184346ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346ea4 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,2);
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar2[1].monitor != 0) {
      value = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Laugh1;
      pIVar2[2].klass = value;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,value);
      if (1 < *(uint *)&pIVar2[1].monitor) {
        value_00 = TypeInfo_Characters_TitanSounds->static_fields->Laugh2;
        pIVar2[2].monitor = value_00;
        Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor,value_00);
        uVar1 = UnityEngine_Random__RandomRangeInt(0,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
        if (uVar1 < *(uint *)&pIVar2[1].monitor) {
          return (System_String_o *)(&pIVar2[2].klass)[(int)uVar1];
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Characters.TitanSounds$$GetRandomBite
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomBite (const MethodInfo* method);
// 0x1821cd7e0

System_String_o * Characters_TitanSounds__GetRandomBite(MethodInfo *method)

{
  Il2CppClass *value;
  System_String_o *value_00;
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_184346ea5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346ea5 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,2);
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar2[1].monitor != 0) {
      value = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Bite1;
      pIVar2[2].klass = value;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,value);
      if (1 < *(uint *)&pIVar2[1].monitor) {
        value_00 = TypeInfo_Characters_TitanSounds->static_fields->Bite2;
        pIVar2[2].monitor = value_00;
        Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor,value_00);
        uVar1 = UnityEngine_Random__RandomRangeInt(0,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
        if (uVar1 < *(uint *)&pIVar2[1].monitor) {
          return (System_String_o *)(&pIVar2[2].klass)[(int)uVar1];
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Characters.TitanSounds$$.ctor
// il2cpp: void Characters_TitanSounds___ctor (Characters_TitanSounds_o* __this, const MethodInfo* method);
// 0x18054c890

void
Characters_TitanSounds___ctor(Characters_TitanSounds_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.TitanSounds$$.cctor
// il2cpp: void Characters_TitanSounds___cctor (const MethodInfo* method);
// 0x1821cde30

void Characters_TitanSounds___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *value;
  
  if (Il2CppMethodInitialized_184346ea6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt2");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff2");
    il2cpp_codegen_initialize_runtime_metadata(&"Swing3");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff4");
    il2cpp_codegen_initialize_runtime_metadata(&"DeathNoFall");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep1");
    il2cpp_codegen_initialize_runtime_metadata(&"RockThrow2");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff1");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt1");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanJump");
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh2");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt3");
    il2cpp_codegen_initialize_runtime_metadata(&"Bite1");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff6");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt4");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt5");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep3");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt2");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt6");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt10");
    il2cpp_codegen_initialize_runtime_metadata(&"Swing1");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt4");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt8");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff5");
    il2cpp_codegen_initialize_runtime_metadata(&"Hit");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt1");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt6");
    il2cpp_codegen_initialize_runtime_metadata(&"Bite2");
    il2cpp_codegen_initialize_runtime_metadata(&"Decapitate");
    il2cpp_codegen_initialize_runtime_metadata(&"Swing2");
    il2cpp_codegen_initialize_runtime_metadata(&"DeathFall");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep2");
    il2cpp_codegen_initialize_runtime_metadata(&"RockPickup");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt5");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt7");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt9");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar2");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt8");
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh1");
    il2cpp_codegen_initialize_runtime_metadata(&"Grunt3");
    il2cpp_codegen_initialize_runtime_metadata(&"Hurt7");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar1");
    il2cpp_codegen_initialize_runtime_metadata(&"Huff3");
    il2cpp_codegen_initialize_runtime_metadata(&"Steam");
    il2cpp_codegen_initialize_runtime_metadata(&"RockThrow1");
    Il2CppMethodInitialized_184346ea6 = '\x01';
  }
  TypeInfo_Characters_TitanSounds->static_fields->Footstep1 = "Footstep1";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Footstep1,"Footstep1");
  TypeInfo_Characters_TitanSounds->static_fields->Footstep2 = "Footstep2";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Footstep2,"Footstep2");
  TypeInfo_Characters_TitanSounds->static_fields->Footstep3 = "Footstep3";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Footstep3,"Footstep3");
  TypeInfo_Characters_TitanSounds->static_fields->Swing1 = "Swing1";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Swing1,"Swing1");
  TypeInfo_Characters_TitanSounds->static_fields->Swing2 = "Swing2";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Swing2,"Swing2");
  TypeInfo_Characters_TitanSounds->static_fields->Swing3 = "Swing3";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Swing3,"Swing3");
  TypeInfo_Characters_TitanSounds->static_fields->Hurt1 = "Hurt1";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Hurt1,"Hurt1");
  TypeInfo_Characters_TitanSounds->static_fields->Hurt2 = "Hurt2";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Hurt2,"Hurt2");
  TypeInfo_Characters_TitanSounds->static_fields->Hurt3 = "Hurt3";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Hurt3,"Hurt3");
  TypeInfo_Characters_TitanSounds->static_fields->Hurt4 = "Hurt4";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Hurt4,"Hurt4");
  TypeInfo_Characters_TitanSounds->static_fields->Hurt5 = "Hurt5";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Hurt5,"Hurt5");
  TypeInfo_Characters_TitanSounds->static_fields->Hurt6 = "Hurt6";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Hurt6,"Hurt6");
  TypeInfo_Characters_TitanSounds->static_fields->Hurt7 = "Hurt7";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Hurt7,"Hurt7");
  TypeInfo_Characters_TitanSounds->static_fields->Hurt8 = "Hurt8";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Hurt8,"Hurt8");
  TypeInfo_Characters_TitanSounds->static_fields->Grunt1 = "Grunt1";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Grunt1,"Grunt1");
  TypeInfo_Characters_TitanSounds->static_fields->Grunt2 = "Grunt2";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Grunt2,"Grunt2");
  TypeInfo_Characters_TitanSounds->static_fields->Grunt3 = "Grunt3";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Grunt3,"Grunt3");
  TypeInfo_Characters_TitanSounds->static_fields->Grunt4 = "Grunt4";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Grunt4,"Grunt4");
  TypeInfo_Characters_TitanSounds->static_fields->Grunt5 = "Grunt5";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Grunt5,"Grunt5");
  TypeInfo_Characters_TitanSounds->static_fields->Grunt6 = "Grunt6";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Grunt6,"Grunt6");
  TypeInfo_Characters_TitanSounds->static_fields->Grunt7 = "Grunt7";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Grunt7,"Grunt7");
  TypeInfo_Characters_TitanSounds->static_fields->Grunt8 = "Grunt8";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Grunt8,"Grunt8");
  TypeInfo_Characters_TitanSounds->static_fields->Grunt9 = "Grunt9";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Grunt9,"Grunt9");
  TypeInfo_Characters_TitanSounds->static_fields->Grunt10 = "Grunt10";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Grunt10,"Grunt10");
  TypeInfo_Characters_TitanSounds->static_fields->Hit = "Hit";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Hit,"Hit");
  TypeInfo_Characters_TitanSounds->static_fields->Roar1 = "Roar1";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Roar1,"Roar1");
  TypeInfo_Characters_TitanSounds->static_fields->Roar2 = "Roar2";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Roar2,"Roar2");
  TypeInfo_Characters_TitanSounds->static_fields->DeathFall = "DeathFall";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->DeathFall,"DeathFall");
  TypeInfo_Characters_TitanSounds->static_fields->DeathNoFall = "DeathNoFall";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_TitanSounds->static_fields->DeathNoFall,"DeathNoFall");
  TypeInfo_Characters_TitanSounds->static_fields->Steam = "Steam";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Steam,"Steam");
  TypeInfo_Characters_TitanSounds->static_fields->Bite1 = "Bite1";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Bite1,"Bite1");
  TypeInfo_Characters_TitanSounds->static_fields->Bite2 = "Bite2";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Bite2,"Bite2");
  TypeInfo_Characters_TitanSounds->static_fields->Laugh1 = "Laugh1";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Laugh1,"Laugh1");
  TypeInfo_Characters_TitanSounds->static_fields->Laugh2 = "Laugh2";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Laugh2,"Laugh2");
  TypeInfo_Characters_TitanSounds->static_fields->Huff1 = "Huff1";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Huff1,"Huff1");
  TypeInfo_Characters_TitanSounds->static_fields->Huff2 = "Huff2";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Huff2,"Huff2");
  TypeInfo_Characters_TitanSounds->static_fields->Huff3 = "Huff3";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Huff3,"Huff3");
  TypeInfo_Characters_TitanSounds->static_fields->Huff4 = "Huff4";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Huff4,"Huff4");
  TypeInfo_Characters_TitanSounds->static_fields->Huff5 = "Huff5";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Huff5,"Huff5");
  TypeInfo_Characters_TitanSounds->static_fields->Huff6 = "Huff6";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Huff6,"Huff6");
  TypeInfo_Characters_TitanSounds->static_fields->TitanJump = "TitanJump";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->TitanJump,"TitanJump");
  TypeInfo_Characters_TitanSounds->static_fields->RockPickup = "RockPickup";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->RockPickup,"RockPickup")
  ;
  TypeInfo_Characters_TitanSounds->static_fields->RockThrow1 = "RockThrow1";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->RockThrow1,"RockThrow1")
  ;
  TypeInfo_Characters_TitanSounds->static_fields->RockThrow2 = "RockThrow2";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->RockThrow2,"RockThrow2")
  ;
  TypeInfo_Characters_TitanSounds->static_fields->Decapitate = "Decapitate";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Decapitate,"Decapitate")
  ;
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      pSVar1 = TypeInfo_Characters_TitanSounds->static_fields->Footstep1;
      value->m_Items[0] = pSVar1;
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar1);
      if (1 < (uint)value->max_length) {
        pSVar1 = TypeInfo_Characters_TitanSounds->static_fields->Footstep2;
        value->m_Items[1] = pSVar1;
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar1);
        if (2 < (uint)value->max_length) {
          pSVar1 = TypeInfo_Characters_TitanSounds->static_fields->Footstep3;
          value->m_Items[2] = pSVar1;
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar1);
          TypeInfo_Characters_TitanSounds->static_fields->Footsteps = value;
          Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Footsteps,value);
          return;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


