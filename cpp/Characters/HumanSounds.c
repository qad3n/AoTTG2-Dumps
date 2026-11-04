// Type: Characters.HumanSounds
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/HumanSounds.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanSounds.cs
// --------------------------------

// Characters.HumanSounds$$GetRandom
// il2cpp: System_String_o* Characters_HumanSounds__GetRandom (System_String_array* sounds, const MethodInfo* method);
// 0x18215c630

System_String_o*
Characters_HumanSounds__GetRandom(System_String_array* sounds, MethodInfo* method)

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


// Characters.HumanSounds$$GetRandomTSLaunch
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomTSLaunch (const MethodInfo* method);
// 0x18215c550

System_String_o * Characters_HumanSounds__GetRandomTSLaunch(MethodInfo *method)

{
  Il2CppClass *value;
  System_String_o *value_00;
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_184346c63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184346c63 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,2);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar2[1].monitor != 0) {
      value = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->TSLaunch1;
      pIVar2[2].klass = value;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,value);
      if (1 < *(uint *)&pIVar2[1].monitor) {
        value_00 = TypeInfo_Characters_HumanSounds->static_fields->TSLaunch2;
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


// Characters.HumanSounds$$GetRandomAPGShot
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAPGShot (const MethodInfo* method);
// 0x18215bfd0

System_String_o * Characters_HumanSounds__GetRandomAPGShot(MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_String_o *pSVar2;
  uint uVar3;
  Il2CppObject *pIVar4;
  
  if (Il2CppMethodInitialized_184346c64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184346c64 = '\x01';
  }
  pIVar4 = SZArrayNew(TypeInfo_string_array,4);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar4 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar4[1].monitor != 0) {
      pIVar1 = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->APGShot1;
      pIVar4[2].klass = pIVar1;
      Il2CppCodeGenWriteBarrier(&pIVar4[2].klass,pIVar1);
      if (1 < *(uint *)&pIVar4[1].monitor) {
        pSVar2 = TypeInfo_Characters_HumanSounds->static_fields->APGShot2;
        pIVar4[2].monitor = pSVar2;
        Il2CppCodeGenWriteBarrier(&pIVar4[2].monitor,pSVar2);
        if (2 < *(uint *)&pIVar4[1].monitor) {
          pIVar1 = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->APGShot3;
          pIVar4[3].klass = pIVar1;
          Il2CppCodeGenWriteBarrier(&pIVar4[3].klass,pIVar1);
          if (3 < *(uint *)&pIVar4[1].monitor) {
            pSVar2 = TypeInfo_Characters_HumanSounds->static_fields->APGShot4;
            pIVar4[3].monitor = pSVar2;
            Il2CppCodeGenWriteBarrier(&pIVar4[3].monitor,pSVar2);
            uVar3 = UnityEngine_Random__RandomRangeInt(0,*(int32_t *)&pIVar4[1].monitor,(MethodInfo *)0x0);
            if (uVar3 < *(uint *)&pIVar4[1].monitor) {
              return (System_String_o *)(&pIVar4[2].klass)[(int)uVar3];
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Characters.HumanSounds$$GetRandomAHSSNapeHitVar1
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAHSSNapeHitVar1 (const MethodInfo* method);
// 0x18215bdb0

System_String_o * Characters_HumanSounds__GetRandomAHSSNapeHitVar1(MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_String_o *value;
  uint uVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_184346c65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184346c65 = '\x01';
  }
  pIVar3 = SZArrayNew(TypeInfo_string_array,3);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar3[1].monitor != 0) {
      pIVar1 = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape1Var1;
      pIVar3[2].klass = pIVar1;
      Il2CppCodeGenWriteBarrier(&pIVar3[2].klass,pIVar1);
      if (1 < *(uint *)&pIVar3[1].monitor) {
        value = TypeInfo_Characters_HumanSounds->static_fields->AHSSNape2Var1;
        pIVar3[2].monitor = value;
        Il2CppCodeGenWriteBarrier(&pIVar3[2].monitor,value);
        if (2 < *(uint *)&pIVar3[1].monitor) {
          pIVar1 = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape3Var1;
          pIVar3[3].klass = pIVar1;
          Il2CppCodeGenWriteBarrier(&pIVar3[3].klass,pIVar1);
          uVar2 = UnityEngine_Random__RandomRangeInt(0,*(int32_t *)&pIVar3[1].monitor,(MethodInfo *)0x0);
          if (uVar2 < *(uint *)&pIVar3[1].monitor) {
            return (System_String_o *)(&pIVar3[2].klass)[(int)uVar2];
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Characters.HumanSounds$$GetRandomAHSSNapeHitVar2
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAHSSNapeHitVar2 (const MethodInfo* method);
// 0x18215bec0

System_String_o * Characters_HumanSounds__GetRandomAHSSNapeHitVar2(MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_String_o *value;
  uint uVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_184346c66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184346c66 = '\x01';
  }
  pIVar3 = SZArrayNew(TypeInfo_string_array,3);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar3[1].monitor != 0) {
      pIVar1 = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape1Var2;
      pIVar3[2].klass = pIVar1;
      Il2CppCodeGenWriteBarrier(&pIVar3[2].klass,pIVar1);
      if (1 < *(uint *)&pIVar3[1].monitor) {
        value = TypeInfo_Characters_HumanSounds->static_fields->AHSSNape2Var2;
        pIVar3[2].monitor = value;
        Il2CppCodeGenWriteBarrier(&pIVar3[2].monitor,value);
        if (2 < *(uint *)&pIVar3[1].monitor) {
          pIVar1 = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape3Var2;
          pIVar3[3].klass = pIVar1;
          Il2CppCodeGenWriteBarrier(&pIVar3[3].klass,pIVar1);
          uVar2 = UnityEngine_Random__RandomRangeInt(0,*(int32_t *)&pIVar3[1].monitor,(MethodInfo *)0x0);
          if (uVar2 < *(uint *)&pIVar3[1].monitor) {
            return (System_String_o *)(&pIVar3[2].klass)[(int)uVar2];
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Characters.HumanSounds$$GetRandomBladeNapeVar1
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomBladeNapeVar1 (const MethodInfo* method);
// 0x18215c110

System_String_o * Characters_HumanSounds__GetRandomBladeNapeVar1(MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_String_o *value;
  uint uVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_184346c67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184346c67 = '\x01';
  }
  pIVar3 = SZArrayNew(TypeInfo_string_array,3);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar3[1].monitor != 0) {
      pIVar1 = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var1;
      pIVar3[2].klass = pIVar1;
      Il2CppCodeGenWriteBarrier(&pIVar3[2].klass,pIVar1);
      if (1 < *(uint *)&pIVar3[1].monitor) {
        value = TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var2;
        pIVar3[2].monitor = value;
        Il2CppCodeGenWriteBarrier(&pIVar3[2].monitor,value);
        if (2 < *(uint *)&pIVar3[1].monitor) {
          pIVar1 = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var3;
          pIVar3[3].klass = pIVar1;
          Il2CppCodeGenWriteBarrier(&pIVar3[3].klass,pIVar1);
          uVar2 = UnityEngine_Random__RandomRangeInt(0,*(int32_t *)&pIVar3[1].monitor,(MethodInfo *)0x0);
          if (uVar2 < *(uint *)&pIVar3[1].monitor) {
            return (System_String_o *)(&pIVar3[2].klass)[(int)uVar2];
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Characters.HumanSounds$$GetRandomBladeNapeVar2
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomBladeNapeVar2 (const MethodInfo* method);
// 0x18215c220

System_String_o * Characters_HumanSounds__GetRandomBladeNapeVar2(MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_String_o *value;
  uint uVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_184346c68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184346c68 = '\x01';
  }
  pIVar3 = SZArrayNew(TypeInfo_string_array,3);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar3[1].monitor != 0) {
      pIVar1 = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var1;
      pIVar3[2].klass = pIVar1;
      Il2CppCodeGenWriteBarrier(&pIVar3[2].klass,pIVar1);
      if (1 < *(uint *)&pIVar3[1].monitor) {
        value = TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var2;
        pIVar3[2].monitor = value;
        Il2CppCodeGenWriteBarrier(&pIVar3[2].monitor,value);
        if (2 < *(uint *)&pIVar3[1].monitor) {
          pIVar1 = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var3;
          pIVar3[3].klass = pIVar1;
          Il2CppCodeGenWriteBarrier(&pIVar3[3].klass,pIVar1);
          uVar2 = UnityEngine_Random__RandomRangeInt(0,*(int32_t *)&pIVar3[1].monitor,(MethodInfo *)0x0);
          if (uVar2 < *(uint *)&pIVar3[1].monitor) {
            return (System_String_o *)(&pIVar3[2].klass)[(int)uVar2];
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Characters.HumanSounds$$GetRandomBladeNapeVar3
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomBladeNapeVar3 (const MethodInfo* method);
// 0x18215c330

System_String_o * Characters_HumanSounds__GetRandomBladeNapeVar3(MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_String_o *value;
  uint uVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_184346c69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184346c69 = '\x01';
  }
  pIVar3 = SZArrayNew(TypeInfo_string_array,3);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar3[1].monitor != 0) {
      pIVar1 = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var1;
      pIVar3[2].klass = pIVar1;
      Il2CppCodeGenWriteBarrier(&pIVar3[2].klass,pIVar1);
      if (1 < *(uint *)&pIVar3[1].monitor) {
        value = TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var2;
        pIVar3[2].monitor = value;
        Il2CppCodeGenWriteBarrier(&pIVar3[2].monitor,value);
        if (2 < *(uint *)&pIVar3[1].monitor) {
          pIVar1 = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var3;
          pIVar3[3].klass = pIVar1;
          Il2CppCodeGenWriteBarrier(&pIVar3[3].klass,pIVar1);
          uVar2 = UnityEngine_Random__RandomRangeInt(0,*(int32_t *)&pIVar3[1].monitor,(MethodInfo *)0x0);
          if (uVar2 < *(uint *)&pIVar3[1].monitor) {
            return (System_String_o *)(&pIVar3[2].klass)[(int)uVar2];
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Characters.HumanSounds$$GetRandomBladeNapeVar4
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomBladeNapeVar4 (const MethodInfo* method);
// 0x18215c440

System_String_o * Characters_HumanSounds__GetRandomBladeNapeVar4(MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_String_o *value;
  uint uVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_184346c6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184346c6a = '\x01';
  }
  pIVar3 = SZArrayNew(TypeInfo_string_array,3);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar3[1].monitor != 0) {
      pIVar1 = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var1;
      pIVar3[2].klass = pIVar1;
      Il2CppCodeGenWriteBarrier(&pIVar3[2].klass,pIVar1);
      if (1 < *(uint *)&pIVar3[1].monitor) {
        value = TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var2;
        pIVar3[2].monitor = value;
        Il2CppCodeGenWriteBarrier(&pIVar3[2].monitor,value);
        if (2 < *(uint *)&pIVar3[1].monitor) {
          pIVar1 = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var3;
          pIVar3[3].klass = pIVar1;
          Il2CppCodeGenWriteBarrier(&pIVar3[3].klass,pIVar1);
          uVar2 = UnityEngine_Random__RandomRangeInt(0,*(int32_t *)&pIVar3[1].monitor,(MethodInfo *)0x0);
          if (uVar2 < *(uint *)&pIVar3[1].monitor) {
            return (System_String_o *)(&pIVar3[2].klass)[(int)uVar2];
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Characters.HumanSounds$$GetRandomAHSSGunShot
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAHSSGunShot (const MethodInfo* method);
// 0x18215bc70

System_String_o * Characters_HumanSounds__GetRandomAHSSGunShot(MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_String_o *pSVar2;
  uint uVar3;
  Il2CppObject *pIVar4;
  
  if (Il2CppMethodInitialized_184346c6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184346c6b = '\x01';
  }
  pIVar4 = SZArrayNew(TypeInfo_string_array,4);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar4 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar4[1].monitor != 0) {
      pIVar1 = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot1;
      pIVar4[2].klass = pIVar1;
      Il2CppCodeGenWriteBarrier(&pIVar4[2].klass,pIVar1);
      if (1 < *(uint *)&pIVar4[1].monitor) {
        pSVar2 = TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot2;
        pIVar4[2].monitor = pSVar2;
        Il2CppCodeGenWriteBarrier(&pIVar4[2].monitor,pSVar2);
        if (2 < *(uint *)&pIVar4[1].monitor) {
          pIVar1 = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot3;
          pIVar4[3].klass = pIVar1;
          Il2CppCodeGenWriteBarrier(&pIVar4[3].klass,pIVar1);
          if (3 < *(uint *)&pIVar4[1].monitor) {
            pSVar2 = TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot4;
            pIVar4[3].monitor = pSVar2;
            Il2CppCodeGenWriteBarrier(&pIVar4[3].monitor,pSVar2);
            uVar3 = UnityEngine_Random__RandomRangeInt(0,*(int32_t *)&pIVar4[1].monitor,(MethodInfo *)0x0);
            if (uVar3 < *(uint *)&pIVar4[1].monitor) {
              return (System_String_o *)(&pIVar4[2].klass)[(int)uVar3];
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Characters.HumanSounds$$GetRandomAHSSGunShotDouble
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAHSSGunShotDouble (const MethodInfo* method);
// 0x18215bb90

System_String_o * Characters_HumanSounds__GetRandomAHSSGunShotDouble(MethodInfo *method)

{
  Il2CppClass *value;
  System_String_o *value_00;
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_184346c6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184346c6c = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,2);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar2[1].monitor != 0) {
      value = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShotDouble1;
      pIVar2[2].klass = value;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,value);
      if (1 < *(uint *)&pIVar2[1].monitor) {
        value_00 = TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShotDouble2;
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


// Characters.HumanSounds$$.ctor
// il2cpp: void Characters_HumanSounds___ctor (Characters_HumanSounds_o* __this, const MethodInfo* method);
// 0x18054c890

void
Characters_HumanSounds___ctor(Characters_HumanSounds_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSounds$$.cctor
// il2cpp: void Characters_HumanSounds___cctor (const MethodInfo* method);
// 0x18215c670

void Characters_HumanSounds___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346c6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&"Death4");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShotDouble2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape2Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"TimerTick");
    il2cpp_codegen_initialize_runtime_metadata(&"TSLaunch2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape1Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape1Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"TimerGo");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape3Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape4Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderspearLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"GasEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"NoGas");
    il2cpp_codegen_initialize_runtime_metadata(&"NapeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep1");
    il2cpp_codegen_initialize_runtime_metadata(&"GunExplode");
    il2cpp_codegen_initialize_runtime_metadata(&"GasStart");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape3Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"HookImpact");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot1");
    il2cpp_codegen_initialize_runtime_metadata(&"Death3");
    il2cpp_codegen_initialize_runtime_metadata(&"Death1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeBreak");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape1Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"LimbHit");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape2Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"Death5");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRetractRight");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing1");
    il2cpp_codegen_initialize_runtime_metadata(&"OldBladeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot2");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape1Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShotDouble1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing4");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape1Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"CrashLand");
    il2cpp_codegen_initialize_runtime_metadata(&"HookImpactLoud");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot4");
    il2cpp_codegen_initialize_runtime_metadata(&"Dodge");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRetractLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"GunExplodeLoud");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape3Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOut");
    il2cpp_codegen_initialize_runtime_metadata(&"Refill");
    il2cpp_codegen_initialize_runtime_metadata(&"Slide");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape2Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape2Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape3Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"HookLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"GasLoop");
    il2cpp_codegen_initialize_runtime_metadata(&"FlareLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape2Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep2");
    il2cpp_codegen_initialize_runtime_metadata(&"Switchback");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot4");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeReloadGround");
    il2cpp_codegen_initialize_runtime_metadata(&"Death2");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape4Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape4Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot2");
    il2cpp_codegen_initialize_runtime_metadata(&"GunReload");
    il2cpp_codegen_initialize_runtime_metadata(&"Checkpoint");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeReloadAir");
    il2cpp_codegen_initialize_runtime_metadata(&"OldNapeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot3");
    il2cpp_codegen_initialize_runtime_metadata(&"WaterSplash");
    il2cpp_codegen_initialize_runtime_metadata(&"OldBladeSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape3Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"GasBurst");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelIn");
    il2cpp_codegen_initialize_runtime_metadata(&"OldHookLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"TSLaunch1");
    Il2CppMethodInitialized_184346c6d = '\x01';
  }
  TypeInfo_Characters_HumanSounds->static_fields->BladeBreak = "BladeBreak";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->BladeBreak,"BladeBreak")
  ;
  TypeInfo_Characters_HumanSounds->static_fields->BladeHit = "BladeHit";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->BladeHit,"BladeHit");
  TypeInfo_Characters_HumanSounds->static_fields->OldBladeHit = "OldBladeHit";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->OldBladeHit,"OldBladeHit");
  TypeInfo_Characters_HumanSounds->static_fields->NapeHit = "NapeHit";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->NapeHit,"NapeHit");
  TypeInfo_Characters_HumanSounds->static_fields->LimbHit = "LimbHit";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->LimbHit,"LimbHit");
  TypeInfo_Characters_HumanSounds->static_fields->OldNapeHit = "OldNapeHit";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->OldNapeHit,"OldNapeHit")
  ;
  TypeInfo_Characters_HumanSounds->static_fields->BladeReloadAir = "BladeReloadAir";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeReloadAir,"BladeReloadAir");
  TypeInfo_Characters_HumanSounds->static_fields->BladeReloadGround = "BladeReloadGround";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeReloadGround,"BladeReloadGround");
  TypeInfo_Characters_HumanSounds->static_fields->GunReload = "GunReload";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->GunReload,"GunReload");
  TypeInfo_Characters_HumanSounds->static_fields->BladeSwing1 = "BladeSwing1";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeSwing1,"BladeSwing1");
  TypeInfo_Characters_HumanSounds->static_fields->BladeSwing2 = "BladeSwing2";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeSwing2,"BladeSwing2");
  TypeInfo_Characters_HumanSounds->static_fields->BladeSwing3 = "BladeSwing3";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeSwing3,"BladeSwing3");
  TypeInfo_Characters_HumanSounds->static_fields->BladeSwing4 = "BladeSwing4";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeSwing4,"BladeSwing4");
  TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing = "OldBladeSwing";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing,"OldBladeSwing");
  TypeInfo_Characters_HumanSounds->static_fields->Dodge = "Dodge";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->Dodge,"Dodge");
  TypeInfo_Characters_HumanSounds->static_fields->FlareLaunch = "FlareLaunch";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->FlareLaunch,"FlareLaunch");
  TypeInfo_Characters_HumanSounds->static_fields->ThunderspearLaunch = "ThunderspearLaunch";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->ThunderspearLaunch,"ThunderspearLaunch");
  TypeInfo_Characters_HumanSounds->static_fields->GasBurst = "GasBurst";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->GasBurst,"GasBurst");
  TypeInfo_Characters_HumanSounds->static_fields->HookLaunch = "HookLaunch";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->HookLaunch,"HookLaunch")
  ;
  TypeInfo_Characters_HumanSounds->static_fields->OldHookLaunch = "OldHookLaunch";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->OldHookLaunch,"OldHookLaunch");
  TypeInfo_Characters_HumanSounds->static_fields->HookRetractLeft = "HookRetractLeft";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->HookRetractLeft,"HookRetractLeft");
  TypeInfo_Characters_HumanSounds->static_fields->HookRetractRight = "HookRetractRight";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->HookRetractRight,"HookRetractRight");
  TypeInfo_Characters_HumanSounds->static_fields->HookImpact = "HookImpact";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->HookImpact,"HookImpact")
  ;
  TypeInfo_Characters_HumanSounds->static_fields->HookImpactLoud = "HookImpactLoud";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->HookImpactLoud,"HookImpactLoud");
  TypeInfo_Characters_HumanSounds->static_fields->GasStart = "GasStart";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->GasStart,"GasStart");
  TypeInfo_Characters_HumanSounds->static_fields->GasLoop = "GasLoop";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->GasLoop,"GasLoop");
  TypeInfo_Characters_HumanSounds->static_fields->GasEnd = "GasEnd";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->GasEnd,"GasEnd");
  TypeInfo_Characters_HumanSounds->static_fields->ReelIn = "ReelIn";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->ReelIn,"ReelIn");
  TypeInfo_Characters_HumanSounds->static_fields->ReelOut = "ReelOut";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->ReelOut,"ReelOut");
  TypeInfo_Characters_HumanSounds->static_fields->CrashLand = "CrashLand";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->CrashLand,"CrashLand");
  TypeInfo_Characters_HumanSounds->static_fields->Jump = "Jump";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->Jump,"Jump");
  TypeInfo_Characters_HumanSounds->static_fields->Land = "Land";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->Land,"Land");
  TypeInfo_Characters_HumanSounds->static_fields->NoGas = "NoGas";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->NoGas,"NoGas");
  TypeInfo_Characters_HumanSounds->static_fields->Refill = "Refill";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->Refill,"Refill");
  TypeInfo_Characters_HumanSounds->static_fields->Slide = "Slide";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->Slide,"Slide");
  TypeInfo_Characters_HumanSounds->static_fields->Footstep1 = "Footstep1";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->Footstep1,"Footstep1");
  TypeInfo_Characters_HumanSounds->static_fields->Footstep2 = "Footstep2";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->Footstep2,"Footstep2");
  TypeInfo_Characters_HumanSounds->static_fields->Death1 = "Death1";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->Death1,"Death1");
  TypeInfo_Characters_HumanSounds->static_fields->Death2 = "Death2";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->Death2,"Death2");
  TypeInfo_Characters_HumanSounds->static_fields->Death3 = "Death3";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->Death3,"Death3");
  TypeInfo_Characters_HumanSounds->static_fields->Death4 = "Death4";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->Death4,"Death4");
  TypeInfo_Characters_HumanSounds->static_fields->Death5 = "Death5";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->Death5,"Death5");
  TypeInfo_Characters_HumanSounds->static_fields->Checkpoint = "Checkpoint";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->Checkpoint,"Checkpoint")
  ;
  TypeInfo_Characters_HumanSounds->static_fields->TimerTick = "TimerTick";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->TimerTick,"TimerTick");
  TypeInfo_Characters_HumanSounds->static_fields->TimerGo = "TimerGo";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->TimerGo,"TimerGo");
  TypeInfo_Characters_HumanSounds->static_fields->GunExplode = "GunExplode";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->GunExplode,"GunExplode")
  ;
  TypeInfo_Characters_HumanSounds->static_fields->GunExplodeLoud = "GunExplodeLoud";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->GunExplodeLoud,"GunExplodeLoud");
  TypeInfo_Characters_HumanSounds->static_fields->WaterSplash = "WaterSplash";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->WaterSplash,"WaterSplash");
  TypeInfo_Characters_HumanSounds->static_fields->Switchback = "Switchback";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->Switchback,"Switchback")
  ;
  TypeInfo_Characters_HumanSounds->static_fields->APGShot1 = "APGShot1";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->APGShot1,"APGShot1");
  TypeInfo_Characters_HumanSounds->static_fields->APGShot2 = "APGShot2";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->APGShot2,"APGShot2");
  TypeInfo_Characters_HumanSounds->static_fields->APGShot3 = "APGShot3";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->APGShot3,"APGShot3");
  TypeInfo_Characters_HumanSounds->static_fields->APGShot4 = "APGShot4";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->APGShot4,"APGShot4");
  TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var1 = "BladeNape1Var1";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var1,"BladeNape1Var1");
  TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var2 = "BladeNape1Var2";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var2,"BladeNape1Var2");
  TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var3 = "BladeNape1Var3";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var3,"BladeNape1Var3");
  TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var1 = "BladeNape2Var1";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var1,"BladeNape2Var1");
  TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var2 = "BladeNape2Var2";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var2,"BladeNape2Var2");
  TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var3 = "BladeNape2Var3";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var3,"BladeNape2Var3");
  TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var1 = "BladeNape3Var1";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var1,"BladeNape3Var1");
  TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var2 = "BladeNape3Var2";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var2,"BladeNape3Var2");
  TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var3 = "BladeNape3Var3";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var3,"BladeNape3Var3");
  TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var1 = "BladeNape4Var1";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var1,"BladeNape4Var1");
  TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var2 = "BladeNape4Var2";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var2,"BladeNape4Var2");
  TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var3 = "BladeNape4Var3";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var3,"BladeNape4Var3");
  TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot1 = "AHSSGunShot1";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot1,"AHSSGunShot1");
  TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot2 = "AHSSGunShot2";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot2,"AHSSGunShot2");
  TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot3 = "AHSSGunShot3";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot3,"AHSSGunShot3");
  TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot4 = "AHSSGunShot4";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot4,"AHSSGunShot4");
  TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShotDouble1 = "AHSSGunShotDouble1";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShotDouble1,"AHSSGunShotDouble1");
  TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShotDouble2 = "AHSSGunShotDouble2";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShotDouble2,"AHSSGunShotDouble2");
  TypeInfo_Characters_HumanSounds->static_fields->AHSSNape1Var1 = "AHSSNape1Var1";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->AHSSNape1Var1,"AHSSNape1Var1");
  TypeInfo_Characters_HumanSounds->static_fields->AHSSNape1Var2 = "AHSSNape1Var2";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->AHSSNape1Var2,"AHSSNape1Var2");
  TypeInfo_Characters_HumanSounds->static_fields->AHSSNape2Var1 = "AHSSNape2Var1";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->AHSSNape2Var1,"AHSSNape2Var1");
  TypeInfo_Characters_HumanSounds->static_fields->AHSSNape2Var2 = "AHSSNape2Var2";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->AHSSNape2Var2,"AHSSNape2Var2");
  TypeInfo_Characters_HumanSounds->static_fields->AHSSNape3Var1 = "AHSSNape3Var1";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->AHSSNape3Var1,"AHSSNape3Var1");
  TypeInfo_Characters_HumanSounds->static_fields->AHSSNape3Var2 = "AHSSNape3Var2";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSounds->static_fields->AHSSNape3Var2,"AHSSNape3Var2");
  TypeInfo_Characters_HumanSounds->static_fields->TSLaunch1 = "TSLaunch1";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->TSLaunch1,"TSLaunch1");
  TypeInfo_Characters_HumanSounds->static_fields->TSLaunch2 = "TSLaunch2";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->TSLaunch2,"TSLaunch2");
  return;
}


