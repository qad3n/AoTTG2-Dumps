// Type: Characters.HumanSounds
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/HumanSounds.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanSounds.cs
// --------------------------------

// Characters.HumanSounds$$GetRandom
// il2cpp: System_String_o* Characters_HumanSounds__GetRandom (System_String_array* sounds, const MethodInfo* method);
// 0x5bf5fd0

System_String_o * Characters_HumanSounds__GetRandom(System_String_array *sounds,MethodInfo *method)

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


// Characters.HumanSounds$$GetRandomTSLaunch
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomTSLaunch (const MethodInfo* method);
// 0x5bf6000

System_String_o * Characters_HumanSounds__GetRandomTSLaunch(MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_07547633 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_07547633 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,2);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor != 0) {
    pIVar2[2].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->TSLaunch1;
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
    if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
      pIVar2[2].monitor = TypeInfo_Characters_HumanSounds->static_fields->TSLaunch2;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor);
      uVar1 = UnityEngine_Random__Range_690e2b0(0,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
      if (uVar1 < *(uint *)&pIVar2[1].monitor) {
        return (System_String_o *)(&pIVar2[2].klass)[(int)uVar1];
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.HumanSounds$$GetRandomAPGShot
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAPGShot (const MethodInfo* method);
// 0x5bf60e0

System_String_o * Characters_HumanSounds__GetRandomAPGShot(MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_07547634 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_07547634 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,4);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor != 0) {
    pIVar2[2].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->APGShot1;
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
    if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
      pIVar2[2].monitor = TypeInfo_Characters_HumanSounds->static_fields->APGShot2;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor);
      if (2 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[3].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->APGShot3;
        Il2CppCodeGenWriteBarrier(&pIVar2[3].klass);
        if (((ulong)pIVar2[1].monitor & 0xfffffffc) != 0) {
          pIVar2[3].monitor = TypeInfo_Characters_HumanSounds->static_fields->APGShot4;
          Il2CppCodeGenWriteBarrier(&pIVar2[3].monitor);
          uVar1 = UnityEngine_Random__Range_690e2b0(0,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
          if (uVar1 < *(uint *)&pIVar2[1].monitor) {
            return (System_String_o *)(&pIVar2[2].klass)[(int)uVar1];
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.HumanSounds$$GetRandomAHSSNapeHitVar1
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAHSSNapeHitVar1 (const MethodInfo* method);
// 0x5bf6210

System_String_o * Characters_HumanSounds__GetRandomAHSSNapeHitVar1(MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_07547635 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_07547635 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,3);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor != 0) {
    pIVar2[2].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape1Var1;
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
    if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
      pIVar2[2].monitor = TypeInfo_Characters_HumanSounds->static_fields->AHSSNape2Var1;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor);
      if (2 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[3].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape3Var1;
        Il2CppCodeGenWriteBarrier(&pIVar2[3].klass);
        uVar1 = UnityEngine_Random__Range_690e2b0(0,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
        if (uVar1 < *(uint *)&pIVar2[1].monitor) {
          return (System_String_o *)(&pIVar2[2].klass)[(int)uVar1];
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.HumanSounds$$GetRandomAHSSNapeHitVar2
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAHSSNapeHitVar2 (const MethodInfo* method);
// 0x5bf6320

System_String_o * Characters_HumanSounds__GetRandomAHSSNapeHitVar2(MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_07547636 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_07547636 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,3);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor != 0) {
    pIVar2[2].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape1Var2;
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
    if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
      pIVar2[2].monitor = TypeInfo_Characters_HumanSounds->static_fields->AHSSNape2Var2;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor);
      if (2 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[3].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape3Var2;
        Il2CppCodeGenWriteBarrier(&pIVar2[3].klass);
        uVar1 = UnityEngine_Random__Range_690e2b0(0,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
        if (uVar1 < *(uint *)&pIVar2[1].monitor) {
          return (System_String_o *)(&pIVar2[2].klass)[(int)uVar1];
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.HumanSounds$$GetRandomBladeNapeVar1
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomBladeNapeVar1 (const MethodInfo* method);
// 0x5bf6430

System_String_o * Characters_HumanSounds__GetRandomBladeNapeVar1(MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_07547637 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_07547637 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,3);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor != 0) {
    pIVar2[2].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var1;
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
    if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
      pIVar2[2].monitor = TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var2;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor);
      if (2 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[3].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var3;
        Il2CppCodeGenWriteBarrier(&pIVar2[3].klass);
        uVar1 = UnityEngine_Random__Range_690e2b0(0,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
        if (uVar1 < *(uint *)&pIVar2[1].monitor) {
          return (System_String_o *)(&pIVar2[2].klass)[(int)uVar1];
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.HumanSounds$$GetRandomBladeNapeVar2
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomBladeNapeVar2 (const MethodInfo* method);
// 0x5bf6540

System_String_o * Characters_HumanSounds__GetRandomBladeNapeVar2(MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_07547638 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_07547638 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,3);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor != 0) {
    pIVar2[2].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var1;
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
    if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
      pIVar2[2].monitor = TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var2;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor);
      if (2 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[3].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var3;
        Il2CppCodeGenWriteBarrier(&pIVar2[3].klass);
        uVar1 = UnityEngine_Random__Range_690e2b0(0,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
        if (uVar1 < *(uint *)&pIVar2[1].monitor) {
          return (System_String_o *)(&pIVar2[2].klass)[(int)uVar1];
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.HumanSounds$$GetRandomBladeNapeVar3
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomBladeNapeVar3 (const MethodInfo* method);
// 0x5bf6650

System_String_o * Characters_HumanSounds__GetRandomBladeNapeVar3(MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_07547639 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_07547639 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,3);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor != 0) {
    pIVar2[2].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var1;
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
    if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
      pIVar2[2].monitor = TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var2;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor);
      if (2 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[3].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var3;
        Il2CppCodeGenWriteBarrier(&pIVar2[3].klass);
        uVar1 = UnityEngine_Random__Range_690e2b0(0,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
        if (uVar1 < *(uint *)&pIVar2[1].monitor) {
          return (System_String_o *)(&pIVar2[2].klass)[(int)uVar1];
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.HumanSounds$$GetRandomBladeNapeVar4
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomBladeNapeVar4 (const MethodInfo* method);
// 0x5bf6760

System_String_o * Characters_HumanSounds__GetRandomBladeNapeVar4(MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_0754763a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_0754763a = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,3);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor != 0) {
    pIVar2[2].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var1;
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
    if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
      pIVar2[2].monitor = TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var2;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor);
      if (2 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[3].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var3;
        Il2CppCodeGenWriteBarrier(&pIVar2[3].klass);
        uVar1 = UnityEngine_Random__Range_690e2b0(0,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
        if (uVar1 < *(uint *)&pIVar2[1].monitor) {
          return (System_String_o *)(&pIVar2[2].klass)[(int)uVar1];
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.HumanSounds$$GetRandomAHSSGunShot
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAHSSGunShot (const MethodInfo* method);
// 0x5bf6870

System_String_o * Characters_HumanSounds__GetRandomAHSSGunShot(MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_0754763b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_0754763b = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,4);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor != 0) {
    pIVar2[2].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot1;
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
    if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
      pIVar2[2].monitor = TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot2;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor);
      if (2 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[3].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot3;
        Il2CppCodeGenWriteBarrier(&pIVar2[3].klass);
        if (((ulong)pIVar2[1].monitor & 0xfffffffc) != 0) {
          pIVar2[3].monitor = TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot4;
          Il2CppCodeGenWriteBarrier(&pIVar2[3].monitor);
          uVar1 = UnityEngine_Random__Range_690e2b0(0,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
          if (uVar1 < *(uint *)&pIVar2[1].monitor) {
            return (System_String_o *)(&pIVar2[2].klass)[(int)uVar1];
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.HumanSounds$$GetRandomAHSSGunShotDouble
// il2cpp: System_String_o* Characters_HumanSounds__GetRandomAHSSGunShotDouble (const MethodInfo* method);
// 0x5bf69a0

System_String_o * Characters_HumanSounds__GetRandomAHSSGunShotDouble(MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_0754763c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_0754763c = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,2);
  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor != 0) {
    pIVar2[2].klass = (Il2CppClass *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShotDouble1;
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
    if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
      pIVar2[2].monitor = TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShotDouble2;
      Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor);
      uVar1 = UnityEngine_Random__Range_690e2b0(0,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
      if (uVar1 < *(uint *)&pIVar2[1].monitor) {
        return (System_String_o *)(&pIVar2[2].klass)[(int)uVar1];
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.HumanSounds$$.ctor
// il2cpp: void Characters_HumanSounds___ctor (Characters_HumanSounds_o* __this, const MethodInfo* method);
// 0x5bf6a80

void Characters_HumanSounds___ctor(Characters_HumanSounds_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSounds$$.cctor
// il2cpp: void Characters_HumanSounds___cctor (const MethodInfo* method);
// 0x5bf6a90

void Characters_HumanSounds___cctor(MethodInfo *method)

{
  Characters_HumanSounds_StaticFields *pCVar1;
  
  if (Il2CppMethodInitialized_0754763d == '\0') {
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
    Il2CppMethodInitialized_0754763d = '\x01';
  }
  TypeInfo_Characters_HumanSounds->static_fields->BladeBreak = "BladeBreak";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSounds->static_fields->BladeBreak);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeHit = "BladeHit";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeHit);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->OldBladeHit = "OldBladeHit";
  Il2CppCodeGenWriteBarrier(&pCVar1->OldBladeHit);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->NapeHit = "NapeHit";
  Il2CppCodeGenWriteBarrier(&pCVar1->NapeHit);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->LimbHit = "LimbHit";
  Il2CppCodeGenWriteBarrier(&pCVar1->LimbHit);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->OldNapeHit = "OldNapeHit";
  Il2CppCodeGenWriteBarrier(&pCVar1->OldNapeHit);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeReloadAir = "BladeReloadAir";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeReloadAir);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeReloadGround = "BladeReloadGround";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeReloadGround);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->GunReload = "GunReload";
  Il2CppCodeGenWriteBarrier(&pCVar1->GunReload);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeSwing1 = "BladeSwing1";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeSwing1);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeSwing2 = "BladeSwing2";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeSwing2);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeSwing3 = "BladeSwing3";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeSwing3);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeSwing4 = "BladeSwing4";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeSwing4);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->OldBladeSwing = "OldBladeSwing";
  Il2CppCodeGenWriteBarrier(&pCVar1->OldBladeSwing);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->Dodge = "Dodge";
  Il2CppCodeGenWriteBarrier(&pCVar1->Dodge);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->FlareLaunch = "FlareLaunch";
  Il2CppCodeGenWriteBarrier(&pCVar1->FlareLaunch);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->ThunderspearLaunch = "ThunderspearLaunch";
  Il2CppCodeGenWriteBarrier(&pCVar1->ThunderspearLaunch);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->GasBurst = "GasBurst";
  Il2CppCodeGenWriteBarrier(&pCVar1->GasBurst);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->HookLaunch = "HookLaunch";
  Il2CppCodeGenWriteBarrier(&pCVar1->HookLaunch);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->OldHookLaunch = "OldHookLaunch";
  Il2CppCodeGenWriteBarrier(&pCVar1->OldHookLaunch);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->HookRetractLeft = "HookRetractLeft";
  Il2CppCodeGenWriteBarrier(&pCVar1->HookRetractLeft);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->HookRetractRight = "HookRetractRight";
  Il2CppCodeGenWriteBarrier(&pCVar1->HookRetractRight);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->HookImpact = "HookImpact";
  Il2CppCodeGenWriteBarrier(&pCVar1->HookImpact);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->HookImpactLoud = "HookImpactLoud";
  Il2CppCodeGenWriteBarrier(&pCVar1->HookImpactLoud);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->GasStart = "GasStart";
  Il2CppCodeGenWriteBarrier(&pCVar1->GasStart);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->GasLoop = "GasLoop";
  Il2CppCodeGenWriteBarrier(&pCVar1->GasLoop);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->GasEnd = "GasEnd";
  Il2CppCodeGenWriteBarrier(&pCVar1->GasEnd);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->ReelIn = "ReelIn";
  Il2CppCodeGenWriteBarrier(&pCVar1->ReelIn);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->ReelOut = "ReelOut";
  Il2CppCodeGenWriteBarrier(&pCVar1->ReelOut);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->CrashLand = "CrashLand";
  Il2CppCodeGenWriteBarrier(&pCVar1->CrashLand);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->Jump = "Jump";
  Il2CppCodeGenWriteBarrier(&pCVar1->Jump);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->Land = "Land";
  Il2CppCodeGenWriteBarrier(&pCVar1->Land);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->NoGas = "NoGas";
  Il2CppCodeGenWriteBarrier(&pCVar1->NoGas);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->Refill = "Refill";
  Il2CppCodeGenWriteBarrier(&pCVar1->Refill);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->Slide = "Slide";
  Il2CppCodeGenWriteBarrier(&pCVar1->Slide);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->Footstep1 = "Footstep1";
  Il2CppCodeGenWriteBarrier(&pCVar1->Footstep1);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->Footstep2 = "Footstep2";
  Il2CppCodeGenWriteBarrier(&pCVar1->Footstep2);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->Death1 = "Death1";
  Il2CppCodeGenWriteBarrier(&pCVar1->Death1);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->Death2 = "Death2";
  Il2CppCodeGenWriteBarrier(&pCVar1->Death2);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->Death3 = "Death3";
  Il2CppCodeGenWriteBarrier(&pCVar1->Death3);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->Death4 = "Death4";
  Il2CppCodeGenWriteBarrier(&pCVar1->Death4);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->Death5 = "Death5";
  Il2CppCodeGenWriteBarrier(&pCVar1->Death5);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->Checkpoint = "Checkpoint";
  Il2CppCodeGenWriteBarrier(&pCVar1->Checkpoint);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->TimerTick = "TimerTick";
  Il2CppCodeGenWriteBarrier(&pCVar1->TimerTick);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->TimerGo = "TimerGo";
  Il2CppCodeGenWriteBarrier(&pCVar1->TimerGo);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->GunExplode = "GunExplode";
  Il2CppCodeGenWriteBarrier(&pCVar1->GunExplode);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->GunExplodeLoud = "GunExplodeLoud";
  Il2CppCodeGenWriteBarrier(&pCVar1->GunExplodeLoud);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->WaterSplash = "WaterSplash";
  Il2CppCodeGenWriteBarrier(&pCVar1->WaterSplash);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->Switchback = "Switchback";
  Il2CppCodeGenWriteBarrier(&pCVar1->Switchback);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->APGShot1 = "APGShot1";
  Il2CppCodeGenWriteBarrier(&pCVar1->APGShot1);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->APGShot2 = "APGShot2";
  Il2CppCodeGenWriteBarrier(&pCVar1->APGShot2);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->APGShot3 = "APGShot3";
  Il2CppCodeGenWriteBarrier(&pCVar1->APGShot3);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->APGShot4 = "APGShot4";
  Il2CppCodeGenWriteBarrier(&pCVar1->APGShot4);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeNape1Var1 = "BladeNape1Var1";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeNape1Var1);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeNape1Var2 = "BladeNape1Var2";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeNape1Var2);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeNape1Var3 = "BladeNape1Var3";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeNape1Var3);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeNape2Var1 = "BladeNape2Var1";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeNape2Var1);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeNape2Var2 = "BladeNape2Var2";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeNape2Var2);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeNape2Var3 = "BladeNape2Var3";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeNape2Var3);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeNape3Var1 = "BladeNape3Var1";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeNape3Var1);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeNape3Var2 = "BladeNape3Var2";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeNape3Var2);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeNape3Var3 = "BladeNape3Var3";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeNape3Var3);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeNape4Var1 = "BladeNape4Var1";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeNape4Var1);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeNape4Var2 = "BladeNape4Var2";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeNape4Var2);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->BladeNape4Var3 = "BladeNape4Var3";
  Il2CppCodeGenWriteBarrier(&pCVar1->BladeNape4Var3);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->AHSSGunShot1 = "AHSSGunShot1";
  Il2CppCodeGenWriteBarrier(&pCVar1->AHSSGunShot1);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->AHSSGunShot2 = "AHSSGunShot2";
  Il2CppCodeGenWriteBarrier(&pCVar1->AHSSGunShot2);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->AHSSGunShot3 = "AHSSGunShot3";
  Il2CppCodeGenWriteBarrier(&pCVar1->AHSSGunShot3);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->AHSSGunShot4 = "AHSSGunShot4";
  Il2CppCodeGenWriteBarrier(&pCVar1->AHSSGunShot4);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->AHSSGunShotDouble1 = "AHSSGunShotDouble1";
  Il2CppCodeGenWriteBarrier(&pCVar1->AHSSGunShotDouble1);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->AHSSGunShotDouble2 = "AHSSGunShotDouble2";
  Il2CppCodeGenWriteBarrier(&pCVar1->AHSSGunShotDouble2);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->AHSSNape1Var1 = "AHSSNape1Var1";
  Il2CppCodeGenWriteBarrier(&pCVar1->AHSSNape1Var1);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->AHSSNape1Var2 = "AHSSNape1Var2";
  Il2CppCodeGenWriteBarrier(&pCVar1->AHSSNape1Var2);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->AHSSNape2Var1 = "AHSSNape2Var1";
  Il2CppCodeGenWriteBarrier(&pCVar1->AHSSNape2Var1);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->AHSSNape2Var2 = "AHSSNape2Var2";
  Il2CppCodeGenWriteBarrier(&pCVar1->AHSSNape2Var2);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->AHSSNape3Var1 = "AHSSNape3Var1";
  Il2CppCodeGenWriteBarrier(&pCVar1->AHSSNape3Var1);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->AHSSNape3Var2 = "AHSSNape3Var2";
  Il2CppCodeGenWriteBarrier(&pCVar1->AHSSNape3Var2);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->TSLaunch1 = "TSLaunch1";
  Il2CppCodeGenWriteBarrier(&pCVar1->TSLaunch1);
  pCVar1 = TypeInfo_Characters_HumanSounds->static_fields;
  pCVar1->TSLaunch2 = "TSLaunch2";
  Il2CppCodeGenWriteBarrier(&pCVar1->TSLaunch2);
  return;
}


