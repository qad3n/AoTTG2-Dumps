// Type: Characters.TitanSounds
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/TitanSounds.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/TitanSounds.cs
// --------------------------------

// Characters.TitanSounds$$GetRandom
// il2cpp: System_String_o* Characters_TitanSounds__GetRandom (System_String_array* sounds, const MethodInfo* method);
// 0x5c5fb70

System_String_o * Characters_TitanSounds__GetRandom(System_String_array *sounds,MethodInfo *method)

{
  uint uVar1;
  
  if (sounds == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = UnityEngine_Random__Range_690e2b0(0,(int32_t)sounds->max_length,(MethodInfo *)0x0);
  if ((uint)sounds->max_length <= uVar1) {
    ThrowIndexOutOfRangeException();
  }
  return sounds->m_Items[(int)uVar1];
}


// Characters.TitanSounds$$GetRandomFromList
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomFromList (System_String_array* sounds, const MethodInfo* method);
// 0x5c5fba0

System_String_o * Characters_TitanSounds__GetRandomFromList(System_String_array *sounds,MethodInfo *method)

{
  uint uVar1;
  
  if (sounds == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = UnityEngine_Random__Range_690e2b0(0,(int32_t)sounds->max_length,(MethodInfo *)0x0);
  if ((uint)sounds->max_length <= uVar1) {
    ThrowIndexOutOfRangeException();
  }
  return sounds->m_Items[(int)uVar1];
}


// Characters.TitanSounds$$GetRandomFootstep
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomFootstep (const MethodInfo* method);
// 0x5c5fbd0

System_String_o * Characters_TitanSounds__GetRandomFootstep(MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *pSVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_07547893 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07547893 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    pSVar2 = TypeInfo_Characters_TitanSounds->static_fields->Footsteps;
  }
  else {
    pSVar2 = *(System_String_array **)
              ((long)((Il2CppClass *)TypeInfo_Characters_TitanSounds)->static_fields + 0x168);
  }
  if (pSVar2 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar3 = UnityEngine_Random__Range_690e2b0(0,(int32_t)pSVar2->max_length,(MethodInfo *)0x0);
  if ((uint)pSVar2->max_length <= uVar3) {
    ThrowIndexOutOfRangeException();
  }
  return pSVar2->m_Items[(int)uVar3];
}


// Characters.TitanSounds$$GetRandomHurt
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomHurt (const MethodInfo* method);
// 0x5c5fc70

System_String_o * Characters_TitanSounds__GetRandomHurt(MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_07547894 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07547894 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,8);
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor != 0) {
    pIVar2[2].klass = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Hurt1;
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
    if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
      pIVar2[2].monitor = TypeInfo_Characters_TitanSounds->static_fields->Hurt2;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor);
      if (2 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[3].klass = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Hurt3;
        Il2CppCodeGenWriteBarrier(&pIVar2[3].klass);
        if (((ulong)pIVar2[1].monitor & 0xfffffffc) != 0) {
          pIVar2[3].monitor = TypeInfo_Characters_TitanSounds->static_fields->Hurt4;
          Il2CppCodeGenWriteBarrier(&pIVar2[3].monitor);
          if (4 < *(uint *)&pIVar2[1].monitor) {
            pIVar2[4].klass = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Hurt5;
            Il2CppCodeGenWriteBarrier(&pIVar2[4].klass);
            if (5 < *(uint *)&pIVar2[1].monitor) {
              pIVar2[4].monitor = TypeInfo_Characters_TitanSounds->static_fields->Hurt6;
              Il2CppCodeGenWriteBarrier(&pIVar2[4].monitor);
              if (6 < *(uint *)&pIVar2[1].monitor) {
                pIVar2[5].klass = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Hurt7;
                Il2CppCodeGenWriteBarrier(&pIVar2[5].klass);
                if (((ulong)pIVar2[1].monitor & 0xfffffff8) != 0) {
                  pIVar2[5].monitor = TypeInfo_Characters_TitanSounds->static_fields->Hurt8;
                  Il2CppCodeGenWriteBarrier(&pIVar2[5].monitor);
                  uVar1 = UnityEngine_Random__Range_690e2b0
                                    (0,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
                  if (uVar1 < *(uint *)&pIVar2[1].monitor) {
                    return (System_String_o *)(&pIVar2[2].klass)[(int)uVar1];
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


// Characters.TitanSounds$$GetRandomGrabGrunt
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomGrabGrunt (const MethodInfo* method);
// 0x5c5fe30

System_String_o * Characters_TitanSounds__GetRandomGrabGrunt(MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_07547895 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07547895 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,10);
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor != 0) {
    pIVar2[2].klass = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Grunt1;
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
    if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
      pIVar2[2].monitor = TypeInfo_Characters_TitanSounds->static_fields->Grunt2;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor);
      if (2 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[3].klass = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Grunt3;
        Il2CppCodeGenWriteBarrier(&pIVar2[3].klass);
        if (((ulong)pIVar2[1].monitor & 0xfffffffc) != 0) {
          pIVar2[3].monitor = TypeInfo_Characters_TitanSounds->static_fields->Grunt4;
          Il2CppCodeGenWriteBarrier(&pIVar2[3].monitor);
          if (4 < *(uint *)&pIVar2[1].monitor) {
            pIVar2[4].klass = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Grunt5;
            Il2CppCodeGenWriteBarrier(&pIVar2[4].klass);
            if (5 < *(uint *)&pIVar2[1].monitor) {
              pIVar2[4].monitor = TypeInfo_Characters_TitanSounds->static_fields->Grunt6;
              Il2CppCodeGenWriteBarrier(&pIVar2[4].monitor);
              if (6 < *(uint *)&pIVar2[1].monitor) {
                pIVar2[5].klass = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Grunt7;
                Il2CppCodeGenWriteBarrier(&pIVar2[5].klass);
                if (((ulong)pIVar2[1].monitor & 0xfffffff8) != 0) {
                  pIVar2[5].monitor = TypeInfo_Characters_TitanSounds->static_fields->Grunt8;
                  Il2CppCodeGenWriteBarrier(&pIVar2[5].monitor);
                  if (8 < *(uint *)&pIVar2[1].monitor) {
                    pIVar2[6].klass = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Grunt9;
                    Il2CppCodeGenWriteBarrier(&pIVar2[6].klass);
                    if (9 < *(uint *)&pIVar2[1].monitor) {
                      pIVar2[6].monitor = TypeInfo_Characters_TitanSounds->static_fields->Grunt10;
                      Il2CppCodeGenWriteBarrier(&pIVar2[6].monitor);
                      uVar1 = UnityEngine_Random__Range_690e2b0
                                        (0,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
                      if (uVar1 < *(uint *)&pIVar2[1].monitor) {
                        return (System_String_o *)(&pIVar2[2].klass)[(int)uVar1];
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


// Characters.TitanSounds$$GetRandomLaugh
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomLaugh (const MethodInfo* method);
// 0x5c60050

System_String_o * Characters_TitanSounds__GetRandomLaugh(MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_07547896 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07547896 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,2);
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor != 0) {
    pIVar2[2].klass = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Laugh1;
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
    if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
      pIVar2[2].monitor = TypeInfo_Characters_TitanSounds->static_fields->Laugh2;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor);
      uVar1 = UnityEngine_Random__Range_690e2b0(0,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
      if (uVar1 < *(uint *)&pIVar2[1].monitor) {
        return (System_String_o *)(&pIVar2[2].klass)[(int)uVar1];
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.TitanSounds$$GetRandomBite
// il2cpp: System_String_o* Characters_TitanSounds__GetRandomBite (const MethodInfo* method);
// 0x5c60130

System_String_o * Characters_TitanSounds__GetRandomBite(MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_07547897 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07547897 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,2);
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor != 0) {
    pIVar2[2].klass = (Il2CppClass *)TypeInfo_Characters_TitanSounds->static_fields->Bite1;
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
    if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
      pIVar2[2].monitor = TypeInfo_Characters_TitanSounds->static_fields->Bite2;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor);
      uVar1 = UnityEngine_Random__Range_690e2b0(0,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
      if (uVar1 < *(uint *)&pIVar2[1].monitor) {
        return (System_String_o *)(&pIVar2[2].klass)[(int)uVar1];
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.TitanSounds$$.ctor
// il2cpp: void Characters_TitanSounds___ctor (Characters_TitanSounds_o* __this, const MethodInfo* method);
// 0x5c60210

void Characters_TitanSounds___ctor(Characters_TitanSounds_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.TitanSounds$$.cctor
// il2cpp: void Characters_TitanSounds___cctor (const MethodInfo* method);
// 0x5c60220

void Characters_TitanSounds___cctor(MethodInfo *method)

{
  Characters_TitanSounds_StaticFields *pCVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_07547898 == '\0') {
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
    Il2CppMethodInitialized_07547898 = '\x01';
  }
  TypeInfo_Characters_TitanSounds->static_fields->Footstep1 = "Footstep1";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanSounds->static_fields->Footstep1);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Footstep2 = "Footstep2";
  Il2CppCodeGenWriteBarrier(&pCVar1->Footstep2);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Footstep3 = "Footstep3";
  Il2CppCodeGenWriteBarrier(&pCVar1->Footstep3);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Swing1 = "Swing1";
  Il2CppCodeGenWriteBarrier(&pCVar1->Swing1);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Swing2 = "Swing2";
  Il2CppCodeGenWriteBarrier(&pCVar1->Swing2);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Swing3 = "Swing3";
  Il2CppCodeGenWriteBarrier(&pCVar1->Swing3);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Hurt1 = "Hurt1";
  Il2CppCodeGenWriteBarrier(&pCVar1->Hurt1);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Hurt2 = "Hurt2";
  Il2CppCodeGenWriteBarrier(&pCVar1->Hurt2);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Hurt3 = "Hurt3";
  Il2CppCodeGenWriteBarrier(&pCVar1->Hurt3);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Hurt4 = "Hurt4";
  Il2CppCodeGenWriteBarrier(&pCVar1->Hurt4);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Hurt5 = "Hurt5";
  Il2CppCodeGenWriteBarrier(&pCVar1->Hurt5);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Hurt6 = "Hurt6";
  Il2CppCodeGenWriteBarrier(&pCVar1->Hurt6);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Hurt7 = "Hurt7";
  Il2CppCodeGenWriteBarrier(&pCVar1->Hurt7);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Hurt8 = "Hurt8";
  Il2CppCodeGenWriteBarrier(&pCVar1->Hurt8);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Grunt1 = "Grunt1";
  Il2CppCodeGenWriteBarrier(&pCVar1->Grunt1);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Grunt2 = "Grunt2";
  Il2CppCodeGenWriteBarrier(&pCVar1->Grunt2);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Grunt3 = "Grunt3";
  Il2CppCodeGenWriteBarrier(&pCVar1->Grunt3);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Grunt4 = "Grunt4";
  Il2CppCodeGenWriteBarrier(&pCVar1->Grunt4);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Grunt5 = "Grunt5";
  Il2CppCodeGenWriteBarrier(&pCVar1->Grunt5);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Grunt6 = "Grunt6";
  Il2CppCodeGenWriteBarrier(&pCVar1->Grunt6);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Grunt7 = "Grunt7";
  Il2CppCodeGenWriteBarrier(&pCVar1->Grunt7);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Grunt8 = "Grunt8";
  Il2CppCodeGenWriteBarrier(&pCVar1->Grunt8);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Grunt9 = "Grunt9";
  Il2CppCodeGenWriteBarrier(&pCVar1->Grunt9);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Grunt10 = "Grunt10";
  Il2CppCodeGenWriteBarrier(&pCVar1->Grunt10);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Hit = "Hit";
  Il2CppCodeGenWriteBarrier(&pCVar1->Hit);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Roar1 = "Roar1";
  Il2CppCodeGenWriteBarrier(&pCVar1->Roar1);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Roar2 = "Roar2";
  Il2CppCodeGenWriteBarrier(&pCVar1->Roar2);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->DeathFall = "DeathFall";
  Il2CppCodeGenWriteBarrier(&pCVar1->DeathFall);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->DeathNoFall = "DeathNoFall";
  Il2CppCodeGenWriteBarrier(&pCVar1->DeathNoFall);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Steam = "Steam";
  Il2CppCodeGenWriteBarrier(&pCVar1->Steam);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Bite1 = "Bite1";
  Il2CppCodeGenWriteBarrier(&pCVar1->Bite1);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Bite2 = "Bite2";
  Il2CppCodeGenWriteBarrier(&pCVar1->Bite2);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Laugh1 = "Laugh1";
  Il2CppCodeGenWriteBarrier(&pCVar1->Laugh1);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Laugh2 = "Laugh2";
  Il2CppCodeGenWriteBarrier(&pCVar1->Laugh2);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Huff1 = "Huff1";
  Il2CppCodeGenWriteBarrier(&pCVar1->Huff1);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Huff2 = "Huff2";
  Il2CppCodeGenWriteBarrier(&pCVar1->Huff2);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Huff3 = "Huff3";
  Il2CppCodeGenWriteBarrier(&pCVar1->Huff3);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Huff4 = "Huff4";
  Il2CppCodeGenWriteBarrier(&pCVar1->Huff4);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Huff5 = "Huff5";
  Il2CppCodeGenWriteBarrier(&pCVar1->Huff5);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Huff6 = "Huff6";
  Il2CppCodeGenWriteBarrier(&pCVar1->Huff6);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->TitanJump = "TitanJump";
  Il2CppCodeGenWriteBarrier(&pCVar1->TitanJump);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->RockPickup = "RockPickup";
  Il2CppCodeGenWriteBarrier(&pCVar1->RockPickup);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->RockThrow1 = "RockThrow1";
  Il2CppCodeGenWriteBarrier(&pCVar1->RockThrow1);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->RockThrow2 = "RockThrow2";
  Il2CppCodeGenWriteBarrier(&pCVar1->RockThrow2);
  pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
  pCVar1->Decapitate = "Decapitate";
  Il2CppCodeGenWriteBarrier(&pCVar1->Decapitate);
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  if (pSVar2 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = TypeInfo_Characters_TitanSounds->static_fields->Footstep1;
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1] = TypeInfo_Characters_TitanSounds->static_fields->Footstep2;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = TypeInfo_Characters_TitanSounds->static_fields->Footstep3;
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
        pCVar1 = TypeInfo_Characters_TitanSounds->static_fields;
        pCVar1->Footsteps = pSVar2;
        Il2CppCodeGenWriteBarrier(&pCVar1->Footsteps);
        return;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


