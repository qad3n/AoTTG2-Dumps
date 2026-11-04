// Type: Effects.EffectPrefabs
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Effects/EffectPrefabs.cs
// Prior real C# source (older reference): Assets/Scripts/Effects/EffectPrefabs.cs
// --------------------------------

// Effects.EffectPrefabs$$.ctor
// il2cpp: void Effects_EffectPrefabs___ctor (Effects_EffectPrefabs_o* __this, const MethodInfo* method);
// 0x18054c890

void
Effects_EffectPrefabs___ctor(Effects_EffectPrefabs_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Effects.EffectPrefabs$$.cctor
// il2cpp: void Effects_EffectPrefabs___cctor (const MethodInfo* method);
// 0x181e63ef0

void Effects_EffectPrefabs___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344f4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Boom7Effect");
    il2cpp_codegen_initialize_runtime_metadata(&"GasBurstEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom5Effect");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeThrowHitEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom3Effect");
    il2cpp_codegen_initialize_runtime_metadata(&"Splash3Effect");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom1Effect");
    il2cpp_codegen_initialize_runtime_metadata(&"Blood2Effect");
    il2cpp_codegen_initialize_runtime_metadata(&"GunExplodeEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderspearExplodeEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Splash1Effect");
    il2cpp_codegen_initialize_runtime_metadata(&"Splash2Effect");
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalKickEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom2Effect");
    il2cpp_codegen_initialize_runtime_metadata(&"SplashEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom4Effect");
    il2cpp_codegen_initialize_runtime_metadata(&"CriticalHitEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanDie1Effect");
    il2cpp_codegen_initialize_runtime_metadata(&"BiteEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom8Effect");
    il2cpp_codegen_initialize_runtime_metadata(&"Boom6Effect");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterThunderEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalSpawnEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"APGTrailEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanDie2Effect");
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalRockSpawnEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Blood1Effect");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanSpawnEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"GroundShatterEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"PunchHitEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"WaterWakeEffect");
    Il2CppMethodInitialized_184344f4f = '\x01';
  }
  TypeInfo_Effects_EffectPrefabs->static_fields->ThunderspearExplode = "ThunderspearExplodeEffect";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Effects_EffectPrefabs->static_fields->ThunderspearExplode,"ThunderspearExplodeEffect");
  TypeInfo_Effects_EffectPrefabs->static_fields->GasBurst = "GasBurstEffect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->GasBurst,"GasBurstEffect");
  TypeInfo_Effects_EffectPrefabs->static_fields->GroundShatter = "GroundShatterEffect";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Effects_EffectPrefabs->static_fields->GroundShatter,"GroundShatterEffect");
  TypeInfo_Effects_EffectPrefabs->static_fields->Blood1 = "Blood1Effect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->Blood1,"Blood1Effect");
  TypeInfo_Effects_EffectPrefabs->static_fields->Blood2 = "Blood2Effect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->Blood2,"Blood2Effect");
  TypeInfo_Effects_EffectPrefabs->static_fields->PunchHit = "PunchHitEffect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->PunchHit,"PunchHitEffect");
  TypeInfo_Effects_EffectPrefabs->static_fields->GunExplode = "GunExplodeEffect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->GunExplode,"GunExplodeEffect");
  TypeInfo_Effects_EffectPrefabs->static_fields->CriticalHit = "CriticalHitEffect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->CriticalHit,"CriticalHitEffect")
  ;
  TypeInfo_Effects_EffectPrefabs->static_fields->TitanSpawn = "TitanSpawnEffect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->TitanSpawn,"TitanSpawnEffect");
  TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie1 = "TitanDie1Effect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie1,"TitanDie1Effect");
  TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie2 = "TitanDie2Effect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie2,"TitanDie2Effect");
  TypeInfo_Effects_EffectPrefabs->static_fields->Boom1 = "Boom1Effect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->Boom1,"Boom1Effect");
  TypeInfo_Effects_EffectPrefabs->static_fields->Boom2 = "Boom2Effect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->Boom2,"Boom2Effect");
  TypeInfo_Effects_EffectPrefabs->static_fields->Boom3 = "Boom3Effect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->Boom3,"Boom3Effect");
  TypeInfo_Effects_EffectPrefabs->static_fields->Boom4 = "Boom4Effect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->Boom4,"Boom4Effect");
  TypeInfo_Effects_EffectPrefabs->static_fields->Boom5 = "Boom5Effect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->Boom5,"Boom5Effect");
  TypeInfo_Effects_EffectPrefabs->static_fields->Boom6 = "Boom6Effect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->Boom6,"Boom6Effect");
  TypeInfo_Effects_EffectPrefabs->static_fields->Boom7 = "Boom7Effect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->Boom7,"Boom7Effect");
  TypeInfo_Effects_EffectPrefabs->static_fields->Boom8 = "Boom8Effect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->Boom8,"Boom8Effect");
  TypeInfo_Effects_EffectPrefabs->static_fields->Splash = "SplashEffect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->Splash,"SplashEffect");
  TypeInfo_Effects_EffectPrefabs->static_fields->TitanBite = "BiteEffect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->TitanBite,"BiteEffect");
  TypeInfo_Effects_EffectPrefabs->static_fields->ShifterThunder = "ShifterThunderEffect";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Effects_EffectPrefabs->static_fields->ShifterThunder,"ShifterThunderEffect");
  TypeInfo_Effects_EffectPrefabs->static_fields->BladeThrowHit = "BladeThrowHitEffect";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Effects_EffectPrefabs->static_fields->BladeThrowHit,"BladeThrowHitEffect");
  TypeInfo_Effects_EffectPrefabs->static_fields->APGTrail = "APGTrailEffect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->APGTrail,"APGTrailEffect");
  TypeInfo_Effects_EffectPrefabs->static_fields->SingleSplash = "SplashEffect";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Effects_EffectPrefabs->static_fields->SingleSplash,"SplashEffect");
  TypeInfo_Effects_EffectPrefabs->static_fields->Splash1 = "Splash1Effect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->Splash1,"Splash1Effect");
  TypeInfo_Effects_EffectPrefabs->static_fields->Splash2 = "Splash2Effect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->Splash2,"Splash2Effect");
  TypeInfo_Effects_EffectPrefabs->static_fields->Splash3 = "Splash3Effect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->Splash3,"Splash3Effect");
  TypeInfo_Effects_EffectPrefabs->static_fields->WaterWake = "WaterWakeEffect";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->WaterWake,"WaterWakeEffect");
  TypeInfo_Effects_EffectPrefabs->static_fields->ColossalSpawn = "ColossalSpawnEffect";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Effects_EffectPrefabs->static_fields->ColossalSpawn,"ColossalSpawnEffect");
  TypeInfo_Effects_EffectPrefabs->static_fields->ColossalRockSpawn = "ColossalRockSpawnEffect";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Effects_EffectPrefabs->static_fields->ColossalRockSpawn,"ColossalRockSpawnEffect");
  TypeInfo_Effects_EffectPrefabs->static_fields->ColossalKick = "ColossalKickEffect";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Effects_EffectPrefabs->static_fields->ColossalKick,"ColossalKickEffect");
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar1,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (pSVar1 != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)pSVar1,
               (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->GasBurst,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)pSVar1,
               (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->GroundShatter,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)pSVar1,
               (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Blood1,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)pSVar1,
               (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Blood2,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)pSVar1,
               (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->PunchHit,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)pSVar1,
               (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->GunExplode,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)pSVar1,
               (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->CriticalHit,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)pSVar1,
               (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Splash,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)pSVar1,
               (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Splash1,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)pSVar1,
               (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Splash2,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)pSVar1,
               (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Splash3,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)pSVar1,
               (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->WaterWake,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)pSVar1,
               (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->TitanBite,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)pSVar1,
               (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->BladeThrowHit,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)pSVar1,
               (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->APGTrail,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_Effects_EffectPrefabs->static_fields->SmallEffects = pSVar1;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->SmallEffects,pSVar1);
    pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
    System_Collections_Generic_HashSet_object____ctor
              ((System_Collections_Generic_HashSet_object__o *)pSVar1,
               (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    if (pSVar1 != (System_Collections_Generic_HashSet_string__o *)0x0) {
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)pSVar1,
                 (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->TitanSpawn,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)pSVar1,
                 (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie1,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)pSVar1,
                 (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie2,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)pSVar1,
                 (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom1,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)pSVar1,
                 (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom2,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)pSVar1,
                 (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom3,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)pSVar1,
                 (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom4,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)pSVar1,
                 (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom5,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)pSVar1,
                 (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom6,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)pSVar1,
                 (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom7,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)pSVar1,
                 (Il2CppObject *)TypeInfo_Effects_EffectPrefabs->static_fields->Boom8,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      TypeInfo_Effects_EffectPrefabs->static_fields->MediumEffects = pSVar1;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectPrefabs->static_fields->MediumEffects,pSVar1);
      return;
    }
  }
  ThrowNullReferenceException();
}


