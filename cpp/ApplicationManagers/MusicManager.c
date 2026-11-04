// Type: ApplicationManagers.MusicManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers/MusicManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/MusicManager.cs
// --------------------------------

// ApplicationManagers.MusicManager.<FadeNextSong>d__48$$.ctor
// il2cpp: void ApplicationManagers_MusicManager__FadeNextSong_d__48___ctor (ApplicationManagers_MusicManager__FadeNextSong_d__48_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_MusicManager__FadeNextSong_d__48___ctor(ApplicationManagers_MusicManager__FadeNextSong_d__48_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__48$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_MusicManager__FadeNextSong_d__48__System_IDisposable_Dispose (ApplicationManagers_MusicManager__FadeNextSong_d__48_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_MusicManager__FadeNextSong_d__48__System_IDisposable_Dispose(ApplicationManagers_MusicManager__FadeNextSong_d__48_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__48$$MoveNext
// il2cpp: bool ApplicationManagers_MusicManager__FadeNextSong_d__48__MoveNext (ApplicationManagers_MusicManager__FadeNextSong_d__48_o* __this, const MethodInfo* method);
// 0x1823593e0
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182359483: jmp 0x182359543
// asm:   0x182359716: movss xmm2, dword ptr [rip + 0xfff4ea]
// asm:   0x18235971e: xor r8d, r8d
// asm:   0x182359721: subss xmm2, xmm6
// asm:   0x182359725: mov rcx, rsi
// asm:   0x182359728: mulss xmm7, xmm2
// asm:   0x18235972c: mulss xmm7, xmm0
// asm:   0x182359730: movaps xmm1, xmm7
// asm:   0x182359733: call 0x182eb56f0  ; UnityEngine_AudioSource__set_volume()
// asm:   0x182359738: movss xmm0, dword ptr [rdi + 0x40]
// asm:   0x18235973d: subss xmm0, xmm8
// asm:   0x182359742: movss dword ptr [rdi + 0x40], xmm0
// asm:   0x182359747: mov rcx, qword ptr [rip + 0x1d3d2e2]  ; TypeInfo_UnityEngine_WaitForSeconds
// asm:   0x18235974e: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x182359753: xor r8d, r8d
// asm:   0x182359756: movaps xmm1, xmm8
// asm:   0x18235975a: mov rcx, rax
// asm:   0x18235975d: mov rbx, rax
// asm:   0x182359760: call 0x181d89ae0  ; UnityEngine_WaitForSeconds___ctor()
// asm:   0x182359765: lea rcx, [rdi + 0x18]
// asm:   0x182359769: mov qword ptr [rdi + 0x18], rbx
// asm:   0x18235976d: mov rdx, rbx
// asm:   0x182359770: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x182359775: mov dword ptr [rdi + 0x10], 2
// asm:   0x18235977c: jmp 0x1823595b7
// asm:   0x182359794: mulss xmm0, xmm6
// asm:   0x182359798: xor r8d, r8d
// asm:   0x18235979b: mov rcx, rdi
// asm:   0x18235979e: movaps xmm1, xmm0
// asm:   0x1823597a1: call 0x182eb56f0  ; UnityEngine_AudioSource__set_volume()
// asm:   0x1823597a6: xor al, al
// asm:   0x1823597a8: mov byte ptr [rbx + 0x49], 0
// asm:   0x1823597ac: jmp 0x1823595b9
// asm:   0x1823597b1: mov dword ptr [rbx + 0x40], 0
// asm:   0x1823597b8: mov byte ptr [rbx + 0x48], 1
// asm:   0x1823597bc: xor al, al
// asm:   0x1823597be: jmp 0x1823595b9

bool ApplicationManagers_MusicManager__FadeNextSong_d__48__MoveNext
               (ApplicationManagers_MusicManager__FadeNextSong_d__48_o *__this,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  ApplicationManagers_MusicManager_o *pAVar3;
  ApplicationManagers_MusicManager_o *pAVar4;
  System_String_o *a;
  UnityEngine_AudioClip_o *pUVar5;
  UnityEngine_AudioSource_o *pUVar6;
  bool bVar7;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *pPVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (Il2CppMethodInitialized_1843479ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_1843479ac = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  pAVar3 = (__this->fields).__4__this;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields)._fadeInTime_5__2 = 5.0;
    (__this->fields)._fadeOutTime_5__3 = 1.0;
    pAVar4 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar4 == (ApplicationManagers_MusicManager_o *)0x0) goto label_1823597c3;
    a = (pAVar4->fields)._currentPlaylist;
    if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
    }
    bVar7 = System_String__op_Equality
                      (a,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Battle,(MethodInfo *)0x0);
    if (bVar7) {
      (__this->fields)._fadeInTime_5__2 = 1.0;
    }
    if (pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) goto label_1823597c3;
    (pAVar3->fields)._isFading = true;
    (__this->fields)._fadeTimeLeft_5__4 = (__this->fields)._fadeOutTime_5__3;
    pUVar6 = (pAVar3->fields)._audio;
    if (pUVar6 == (UnityEngine_AudioSource_o *)0x0) goto label_1823597c3;
    bVar7 = UnityEngine_AudioSource__get_isPlaying(pUVar6,(MethodInfo *)0x0);
    if (bVar7) {
      pUVar6 = (pAVar3->fields)._audio;
      if (pUVar6 == (UnityEngine_AudioSource_o *)0x0) goto label_1823597c3;
      fVar9 = UnityEngine_AudioSource__get_volume(pUVar6,(MethodInfo *)0x0);
      (pAVar3->fields)._songVolume = fVar9;
      goto label_182359543;
    }
label_1823595e9:
    pUVar5 = (__this->fields).nextClip;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      (pAVar3->fields)._songTimeLeft = 0.0;
      (pAVar3->fields)._autoPlay = true;
      return false;
    }
    pUVar6 = (pAVar3->fields)._audio;
    if (pUVar6 == (UnityEngine_AudioSource_o *)0x0) goto label_1823597c3;
    UnityEngine_AudioSource__set_generatorObject
              (pUVar6,(UnityEngine_Object_o *)(__this->fields).nextClip,(MethodInfo *)0x0);
    pUVar6 = (pAVar3->fields)._audio;
    if (pUVar6 == (UnityEngine_AudioSource_o *)0x0) goto label_1823597c3;
    UnityEngine_AudioSource__set_volume(pUVar6,0.0,(MethodInfo *)0x0);
    pUVar5 = (__this->fields).nextClip;
    if (pUVar5 == (UnityEngine_AudioClip_o *)0x0) goto label_1823597c3;
    fVar9 = UnityEngine_AudioClip__get_length(pUVar5,(MethodInfo *)0x0);
    (pAVar3->fields)._songTimeLeft = fVar9 - (__this->fields)._fadeOutTime_5__3;
    fVar9 = (__this->fields).startTime;
    if (0.0 < fVar9) {
      pUVar5 = (__this->fields).nextClip;
      if (pUVar5 == (UnityEngine_AudioClip_o *)0x0) goto label_1823597c3;
      pUVar6 = (pAVar3->fields)._audio;
      fVar11 = UnityEngine_AudioClip__get_length(pUVar5,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_AudioSource_o *)0x0) goto label_1823597c3;
      if (fVar11 - 0.1 <= fVar9) {
        fVar9 = fVar11 - 0.1;
      }
      UnityEngine_AudioSource__set_time(pUVar6,fVar9,(MethodInfo *)0x0);
      (pAVar3->fields)._songTimeLeft = (pAVar3->fields)._songTimeLeft - (__this->fields).startTime;
    }
    pUVar6 = (pAVar3->fields)._audio;
    if (pUVar6 == (UnityEngine_AudioSource_o *)0x0) goto label_1823597c3;
    UnityEngine_AudioSource__Play_2eb4470(pUVar6,(MethodInfo *)0x0);
    (pAVar3->fields)._songVolume = (__this->fields).volume;
    (pAVar3->fields)._autoPlay = true;
    (__this->fields)._fadeTimeLeft_5__4 = (__this->fields)._fadeInTime_5__2;
  }
  else {
    if (iVar2 == 1) {
      (__this->fields).__1__state = -1;
      if (pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) goto label_1823597c3;
label_182359543:
      fVar9 = (__this->fields)._fadeTimeLeft_5__4;
      pUVar6 = (pAVar3->fields)._audio;
      if (0.0 < fVar9) {
        if (pUVar6 != (UnityEngine_AudioSource_o *)0x0) {
          UnityEngine_AudioSource__set_volume
                    (pUVar6,(fVar9 / (__this->fields)._fadeOutTime_5__3) * (pAVar3->fields)._songVolume,
                     (MethodInfo *)0x0);
          (__this->fields)._fadeTimeLeft_5__4 = (__this->fields)._fadeTimeLeft_5__4 - 0.1;
          pPVar8 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
          UnityEngine_WaitForSeconds___ctor(pPVar8,0.1,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)pPVar8;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar8);
          (__this->fields).__1__state = 1;
          return true;
        }
        goto label_1823597c3;
      }
      if (pUVar6 == (UnityEngine_AudioSource_o *)0x0) goto label_1823597c3;
      UnityEngine_AudioSource__Stop_2eb4660(pUVar6,(MethodInfo *)0x0);
      goto label_1823595e9;
    }
    if (iVar2 != 2) {
      return false;
    }
    (__this->fields).__1__state = -1;
  }
  if (pAVar3 != (ApplicationManagers_MusicManager_o *)0x0) {
    fVar9 = (__this->fields)._fadeTimeLeft_5__4;
    if (fVar9 <= 0.0) {
      pUVar6 = (pAVar3->fields)._audio;
      fVar9 = (pAVar3->fields)._songVolume;
      fVar11 = ApplicationManagers_MusicManager__GetMusicVolume((MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_AudioSource_o *)0x0) {
        UnityEngine_AudioSource__set_volume(pUVar6,fVar11 * fVar9,(MethodInfo *)0x0);
        (pAVar3->fields)._isFading = false;
        return false;
      }
    }
    else {
      pUVar6 = (pAVar3->fields)._audio;
      fVar11 = (__this->fields)._fadeInTime_5__2;
      fVar1 = (pAVar3->fields)._songVolume;
      fVar10 = ApplicationManagers_MusicManager__GetMusicVolume((MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_AudioSource_o *)0x0) {
        UnityEngine_AudioSource__set_volume(pUVar6,fVar1 * (1.0 - fVar9 / fVar11) * fVar10,(MethodInfo *)0x0);
        (__this->fields)._fadeTimeLeft_5__4 = (__this->fields)._fadeTimeLeft_5__4 - 0.1;
        pPVar8 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(pPVar8,0.1,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pPVar8;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar8);
        (__this->fields).__1__state = 2;
        return true;
      }
    }
  }
label_1823597c3:
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__48$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_MusicManager__FadeNextSong_d__48__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_MusicManager__FadeNextSong_d__48_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_MusicManager__FadeNextSong_d__48__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_MusicManager__FadeNextSong_d__48_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__48$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_MusicManager__FadeNextSong_d__48__System_Collections_IEnumerator_Reset (ApplicationManagers_MusicManager__FadeNextSong_d__48_o* __this, const MethodInfo* method);
// 0x1823597d0

void ApplicationManagers_MusicManager__FadeNextSong_d__48__System_Collections_IEnumerator_Reset
               (ApplicationManagers_MusicManager__FadeNextSong_d__48_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_MusicManager_FadeNextSong_d__48_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__48$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_MusicManager__FadeNextSong_d__48__System_Collections_IEnumerator_get_Current (ApplicationManagers_MusicManager__FadeNextSong_d__48_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_MusicManager__FadeNextSong_d__48__System_Collections_IEnumerator_get_Current(ApplicationManagers_MusicManager__FadeNextSong_d__48_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__43$$.ctor
// il2cpp: void ApplicationManagers_MusicManager__StartSoundEffect_d__43___ctor (ApplicationManagers_MusicManager__StartSoundEffect_d__43_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_MusicManager__StartSoundEffect_d__43___ctor(ApplicationManagers_MusicManager__StartSoundEffect_d__43_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__43$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_MusicManager__StartSoundEffect_d__43__System_IDisposable_Dispose (ApplicationManagers_MusicManager__StartSoundEffect_d__43_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_MusicManager__StartSoundEffect_d__43__System_IDisposable_Dispose(ApplicationManagers_MusicManager__StartSoundEffect_d__43_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__43$$MoveNext
// il2cpp: bool ApplicationManagers_MusicManager__StartSoundEffect_d__43__MoveNext (ApplicationManagers_MusicManager__StartSoundEffect_d__43_o* __this, const MethodInfo* method);
// 0x18235dc10

bool ApplicationManagers_MusicManager__StartSoundEffect_d__43__MoveNext
               (ApplicationManagers_MusicManager__StartSoundEffect_d__43_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_MusicManager_o *pAVar2;
  UnityEngine_AudioSource_o *pUVar3;
  UnityEngine_AudioClip_o *__this_00;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_01;
  float amplificationFactor;
  
  if (Il2CppMethodInitialized_1843479ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_1843479ad = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    pAVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) &&
       (pUVar3 = (pAVar2->fields)._soundEffect, pUVar3 != (UnityEngine_AudioSource_o *)0x0)) {
      UnityEngine_AudioSource__set_volume(pUVar3,(__this->fields).volume,(MethodInfo *)0x0);
      pUVar3 = (pAVar2->fields)._soundEffect;
      if (pUVar3 != (UnityEngine_AudioSource_o *)0x0) {
        UnityEngine_AudioSource__PlayOneShot(pUVar3,(__this->fields).clip,(MethodInfo *)0x0);
        __this_00 = (__this->fields).clip;
        if (__this_00 != (UnityEngine_AudioClip_o *)0x0) {
          amplificationFactor = UnityEngine_AudioClip__get_length(__this_00,(MethodInfo *)0x0);
          __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
          UnityEngine_WaitForSeconds___ctor
                    (__this_01,amplificationFactor,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)__this_01;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
          (__this->fields).__1__state = 1;
          return true;
        }
      }
    }
    ThrowNullReferenceException();
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  return false;
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__43$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_MusicManager__StartSoundEffect_d__43__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_MusicManager__StartSoundEffect_d__43_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_MusicManager__StartSoundEffect_d__43__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_MusicManager__StartSoundEffect_d__43_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__43$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_MusicManager__StartSoundEffect_d__43__System_Collections_IEnumerator_Reset (ApplicationManagers_MusicManager__StartSoundEffect_d__43_o* __this, const MethodInfo* method);
// 0x18235dd00

void ApplicationManagers_MusicManager__StartSoundEffect_d__43__System_Collections_IEnumerator_Reset
               (ApplicationManagers_MusicManager__StartSoundEffect_d__43_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_MusicManager_StartSoundEffect_d__43_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__43$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_MusicManager__StartSoundEffect_d__43__System_Collections_IEnumerator_get_Current (ApplicationManagers_MusicManager__StartSoundEffect_d__43_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_MusicManager__StartSoundEffect_d__43__System_Collections_IEnumerator_get_Current(ApplicationManagers_MusicManager__StartSoundEffect_d__43_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.MusicManager$$Init
// il2cpp: void ApplicationManagers_MusicManager__Init (const MethodInfo* method);
// 0x1823527c0

void ApplicationManagers_MusicManager__Init(MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  Events_OnLoadScene_o *value;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_AudioSource_o *pUVar3;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *p;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *value_00;
  
  if (Il2CppMethodInitialized_184347991 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ApplicationManagers_MusicManager_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SoundEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"MusicInfo");
    Il2CppMethodInitialized_184347991 = '\x01';
  }
  pAVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance,
                      (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_MusicManager);
  TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance = pAVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance,pAVar1);
  value = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnLoadScene);
  Events_OnLoadScene___ctor
            ((UnityEngine_AudioClip_PCMSetPositionCallback_o *)value,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_ApplicationManagers_MusicManager_OnLoadScene,(MethodInfo *)0x0);
  Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pAVar1,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar2,(MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_AudioSource);
      (pAVar1->fields)._audio = pUVar3;
      Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._audio,pUVar3);
      pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      if ((pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) &&
         (pUVar3 = (pAVar1->fields)._audio, pUVar3 != (UnityEngine_AudioSource_o *)0x0)) {
        UnityEngine_AudioSource__set_ignoreListenerVolume(pUVar3,true,(MethodInfo *)0x0);
        pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
        pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor(pUVar2,"SoundEffect",(MethodInfo *)0x0);
        if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
          (pAVar1->fields)._soundEffectObject = pUVar2;
          Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._soundEffectObject,pUVar2);
          pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
          if ((pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) &&
             (pUVar2 = (pAVar1->fields)._soundEffectObject, pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            __this = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
            pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
            if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
              p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pAVar1,(MethodInfo *)0x0);
              if (__this != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent(__this,p,(MethodInfo *)0x0);
                pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
                if ((pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) &&
                   (pUVar2 = (pAVar1->fields)._soundEffectObject, pUVar2 != (UnityEngine_GameObject_o *)0x0))
                {
                  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
                  pUVar3 = UnityEngine_GameObject__AddComponent_object_
                                     (pUVar2,(MethodInfo_6F4D60 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_AudioSource);
                  (pAVar1->fields)._soundEffect = pUVar3;
                  Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._soundEffect,pUVar3);
                  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
                  }
                  pSVar4 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
                  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
                  }
                  pSVar4 = ApplicationManagers_ResourceManager__TryLoadText
                                     (pSVar4,"MusicInfo",(MethodInfo *)0x0);
                  value_00 = SimpleJSONFixed_JSON__Parse(pSVar4,(MethodInfo *)0x0);
                  TypeInfo_ApplicationManagers_MusicManager->static_fields->_musicInfo = value_00;
                  Il2CppCodeGenWriteBarrier
                            (&TypeInfo_ApplicationManagers_MusicManager->static_fields->_musicInfo,value_00);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$OnLoadScene
// il2cpp: void ApplicationManagers_MusicManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x182352f00

void ApplicationManagers_MusicManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347992 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    Il2CppMethodInitialized_184347992 = '\x01';
  }
  if (((sceneName != 1) && (3 < sceneName - 3U)) && (sceneName != 7)) {
    if (sceneName == 2) {
      if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
      }
      ApplicationManagers_MusicManager__SetPlaylist
                (TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Default,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
  }
  ApplicationManagers_MusicManager__SetPlaylist
            (TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Menu,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.MusicManager$$ApplySoundSettings
// il2cpp: void ApplicationManagers_MusicManager__ApplySoundSettings (const MethodInfo* method);
// 0x182351b60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182351cd5: movaps xmm6, xmmword ptr [rsp + 0x20]

void ApplicationManagers_MusicManager__ApplySoundSettings(MethodInfo *method)

{
  float fVar1;
  ApplicationManagers_MusicManager_o *pAVar2;
  UnityEngine_AudioSource_o *__this;
  Settings_SoundSettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o *a;
  bool bVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184347993 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184347993 = '\x01';
  }
  pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pAVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
    if ((pAVar2->fields)._isFading == false) {
      __this = (pAVar2->fields)._audio;
      fVar1 = (pAVar2->fields)._songVolume;
      fVar6 = ApplicationManagers_MusicManager__GetMusicVolume((MethodInfo *)0x0);
      if (__this == (UnityEngine_AudioSource_o *)0x0) goto label_182351ce0;
      UnityEngine_AudioSource__set_volume(__this,fVar6 * fVar1,(MethodInfo *)0x0);
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    if ((pSVar3 != (Settings_SoundSettings_o *)0x0) &&
       (pSVar4 = (pSVar3->fields).ForcePlaylist, pSVar4 != (Settings_StringSetting_o *)0x0)) {
      a = (pSVar4->fields)._value;
      if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
      }
      bVar5 = System_String__op_Inequality
                        (a,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Default,
                         (MethodInfo *)0x0);
      if (bVar5) {
        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
        if ((pSVar3 == (Settings_SoundSettings_o *)0x0) ||
           (pSVar4 = (pSVar3->fields).ForcePlaylist, pSVar4 == (Settings_StringSetting_o *)0x0))
        goto label_182351ce0;
        ApplicationManagers_MusicManager__SetPlaylist((pSVar4->fields)._value,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_182351ce0:
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$PlayDeathSong
// il2cpp: void ApplicationManagers_MusicManager__PlayDeathSong (const MethodInfo* method);
// 0x182352fb0

void ApplicationManagers_MusicManager__PlayDeathSong(MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347994 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Death");
    Il2CppMethodInitialized_184347994 = '\x01';
  }
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
    if ((pAVar1->fields)._isDefaultPlaylist == false) {
      return;
    }
    pSVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_musicInfo;
    if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar2 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)(pSVar3,(MethodInfo *)"Death");
      if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar3 = (SimpleJSONFixed_JSONNode_o *)
                 (*(pSVar2->klass->vtable)._5_OnRemove.methodPtr)
                           (pSVar2,(System_Type_o *)0x0,(pSVar2->klass->vtable)._5_OnRemove.method);
        pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
        if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
          (pAVar1->fields)._isMenuTransition = false;
          ApplicationManagers_MusicManager__PlayImmediateTransition(pSVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$PlayGrabbedSong
// il2cpp: void ApplicationManagers_MusicManager__PlayGrabbedSong (const MethodInfo* method);
// 0x182353130

void ApplicationManagers_MusicManager__PlayGrabbedSong(MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  ApplicationManagers_MusicManager_o *pAVar3;
  System_String_o *pSVar4;
  UnityEngine_AudioSource_o *__this;
  bool bVar5;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  float fVar8;
  
  if (Il2CppMethodInitialized_184347995 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Grabbed");
    Il2CppMethodInitialized_184347995 = '\x01';
  }
  bVar5 = ApplicationManagers_MusicManager__IsMusicDisabled((MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar1 != (Settings_SoundSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).TitanGrabMusic, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar2->fields)._value == false) {
      return;
    }
    pSVar7 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_musicInfo;
    if ((pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (pSVar6 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)(pSVar7,(MethodInfo *)"Grabbed"),
       pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
      pSVar7 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar6->klass->vtable)._5_OnRemove.methodPtr)
                         (pSVar6,(System_Type_o *)0x0,(pSVar6->klass->vtable)._5_OnRemove.method);
      pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      if (pAVar3 != (ApplicationManagers_MusicManager_o *)0x0) {
        (pAVar3->fields)._isMenuTransition = false;
        pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
        if (pAVar3 != (ApplicationManagers_MusicManager_o *)0x0) {
          pSVar4 = (pAVar3->fields)._currentPlaylist;
          if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
          }
          bVar5 = System_String__op_Equality
                            (pSVar4,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Battle,
                             (MethodInfo *)0x0);
          if (bVar5) {
            pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
            if (pAVar3 != (ApplicationManagers_MusicManager_o *)0x0) {
              pSVar4 = (pAVar3->fields)._currentSongName;
              (pAVar3->fields)._lastSongBeforeGrabbed = pSVar4;
              Il2CppCodeGenWriteBarrier(&(pAVar3->fields)._lastSongBeforeGrabbed,pSVar4);
              pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
              if ((pAVar3 != (ApplicationManagers_MusicManager_o *)0x0) &&
                 (__this = (pAVar3->fields)._audio, __this != (UnityEngine_AudioSource_o *)0x0)) {
                pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
                fVar8 = UnityEngine_AudioSource__get_time(__this,(MethodInfo *)0x0);
                (pAVar3->fields)._lastTimeBeforeGrabbed = fVar8;
                goto label_182353329;
              }
            }
          }
          else {
            pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
            if (pAVar3 != (ApplicationManagers_MusicManager_o *)0x0) {
              pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
              (pAVar3->fields)._lastSongBeforeGrabbed = pSVar4;
              Il2CppCodeGenWriteBarrier(&(pAVar3->fields)._lastSongBeforeGrabbed,pSVar4);
label_182353329:
              ApplicationManagers_MusicManager__PlayImmediateTransition(pSVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$OnEscapeGrab
// il2cpp: void ApplicationManagers_MusicManager__OnEscapeGrab (const MethodInfo* method);
// 0x182352e70

void ApplicationManagers_MusicManager__OnEscapeGrab(MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  
  if (Il2CppMethodInitialized_184347996 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    Il2CppMethodInitialized_184347996 = '\x01';
  }
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
    if ((pAVar1->fields)._transitionTimeLeft <= 0.0) {
      return;
    }
    (pAVar1->fields)._transitionTimeLeft = 0.0;
    pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
      (pAVar1->fields)._songTimeLeft = 0.0;
      pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
        (pAVar1->fields)._justEscapedGrab = true;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$PlayEffect
// il2cpp: void ApplicationManagers_MusicManager__PlayEffect (const MethodInfo* method);
// 0x182353070

void ApplicationManagers_MusicManager__PlayEffect(MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  
  if (Il2CppMethodInitialized_184347997 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Effect");
    Il2CppMethodInitialized_184347997 = '\x01';
  }
  pSVar4 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_musicInfo;
  if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)(pSVar4,(MethodInfo *)"Effect");
    if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar3 = (*(pSVar2->klass->vtable)._11_get_NameAttribute.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._11_get_NameAttribute.method);
      iVar1 = UnityEngine_Random__RandomRangeInt(0,(int32_t)pSVar3,(MethodInfo *)0x0);
      pSVar4 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar2->klass->vtable)._5_OnRemove.methodPtr)
                         (pSVar2,(System_Type_o *)iVar1,(pSVar2->klass->vtable)._5_OnRemove.method);
      ApplicationManagers_MusicManager__PlaySoundEffect(pSVar4,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$PlayTransition
// il2cpp: void ApplicationManagers_MusicManager__PlayTransition (const MethodInfo* method);
// 0x1823538c0

void ApplicationManagers_MusicManager__PlayTransition(MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  bool bVar2;
  int32_t iVar3;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  
  if (Il2CppMethodInitialized_184347998 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Transition");
    Il2CppMethodInitialized_184347998 = '\x01';
  }
  bVar2 = ApplicationManagers_MusicManager__IsMusicDisabled((MethodInfo *)0x0);
  if (!bVar2) {
    pSVar6 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_musicInfo;
    if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar4 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)"Transition");
      pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
        (pAVar1->fields)._isMenuTransition = true;
        pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
        if ((pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) &&
           ((pAVar1->fields)._justPlayedMenuTransition = true, pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0)
           ) {
          pSVar5 = (*(pSVar4->klass->vtable)._11_get_NameAttribute.methodPtr)
                             (pSVar4,(pSVar4->klass->vtable)._11_get_NameAttribute.method);
          iVar3 = UnityEngine_Random__RandomRangeInt(0,(int32_t)pSVar5,(MethodInfo *)0x0);
          pSVar6 = (SimpleJSONFixed_JSONNode_o *)
                   (*(pSVar4->klass->vtable)._5_OnRemove.methodPtr)
                             (pSVar4,(System_Type_o *)iVar3,(pSVar4->klass->vtable)._5_OnRemove.method);
          ApplicationManagers_MusicManager__PlayImmediateTransition(pSVar6,(MethodInfo *)0x0);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// ApplicationManagers.MusicManager$$SetPlaylist
// il2cpp: void ApplicationManagers_MusicManager__SetPlaylist (System_String_o* playlist, const MethodInfo* method);
// 0x1823539d0

void ApplicationManagers_MusicManager__SetPlaylist(System_String_o *playlist,MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  ApplicationManagers_MusicManager_o *pAVar5;
  bool bVar6;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *__this;
  
  if (Il2CppMethodInitialized_184347999 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184347999 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar1 == (Settings_SoundSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).ForcePlaylist, pSVar2 == (Settings_StringSetting_o *)0x0)) goto label_182353c4c;
  pSVar3 = (pSVar2->fields)._value;
  if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
  }
  bVar6 = System_String__op_Inequality
                    (pSVar3,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Default,
                     (MethodInfo *)0x0);
  if (bVar6) {
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    if ((((pSVar1 == (Settings_SoundSettings_o *)0x0) ||
         (pSVar2 = (pSVar1->fields).ForcePlaylist, pSVar2 == (Settings_StringSetting_o *)0x0)) ||
        (pSVar4 = (pSVar1->fields).CustomPlaylist, pSVar4 == (Settings_StringSetting_o *)0x0)) ||
       (pSVar3 = (pSVar4->fields)._value, pSVar3 == (System_String_o *)0x0)) goto label_182353c4c;
    playlist = (pSVar2->fields)._value;
    pAVar5 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    collection = System_String__Split(pSVar3,0x2c,0,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_94fb10
              ((System_Collections_Generic_List_object__o *)__this,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    if (pAVar5 == (ApplicationManagers_MusicManager_o *)0x0) goto label_182353c4c;
    (pAVar5->fields)._customPlaylist = __this;
    Il2CppCodeGenWriteBarrier(&(pAVar5->fields)._customPlaylist,__this);
  }
  if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
  }
  bVar6 = System_String__op_Equality
                    (playlist,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->None,
                     (MethodInfo *)0x0);
  if (bVar6) {
    ApplicationManagers_MusicManager__StopMusic((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
    }
    bVar6 = System_String__op_Equality
                      (playlist,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Default,
                       (MethodInfo *)0x0);
    pAVar5 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (bVar6) {
      if (pAVar5 == (ApplicationManagers_MusicManager_o *)0x0) goto label_182353c4c;
      (pAVar5->fields)._isDefaultPlaylist = true;
      if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
      }
      bVar6 = true;
      playlist = TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Ambient;
    }
    else {
      if (pAVar5 == (ApplicationManagers_MusicManager_o *)0x0) {
label_182353c4c:
        ThrowNullReferenceException();
      }
      bVar6 = false;
      (pAVar5->fields)._isDefaultPlaylist = false;
    }
    ApplicationManagers_MusicManager__FinishSetPlaylist(playlist,bVar6,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.MusicManager$$IsMusicDisabled
// il2cpp: bool ApplicationManagers_MusicManager__IsMusicDisabled (const MethodInfo* method);
// 0x182352ae0

bool ApplicationManagers_MusicManager__IsMusicDisabled(MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  System_String_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434799a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434799a = '\x01';
  }
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pAVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
    a = (pAVar1->fields)._currentPlaylist;
    if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
    }
    bVar2 = System_String__op_Equality
                      (a,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->None,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$StopMusic
// il2cpp: void ApplicationManagers_MusicManager__StopMusic (const MethodInfo* method);
// 0x182354a20

void ApplicationManagers_MusicManager__StopMusic(MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  System_String_o *pSVar2;
  UnityEngine_AudioSource_o *pUVar3;
  
  if (Il2CppMethodInitialized_18434799b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    Il2CppMethodInitialized_18434799b = '\x01';
  }
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)pAVar1,(MethodInfo *)0x0);
    pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
      (pAVar1->fields)._isFading = false;
      pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
        (pAVar1->fields)._isDefaultPlaylist = false;
        pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
        if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
        }
        if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
          pSVar2 = TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->None;
          (pAVar1->fields)._currentPlaylist = pSVar2;
          Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._currentPlaylist,pSVar2);
          pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
          if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
            pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
            (pAVar1->fields)._currentSongName = pSVar2;
            Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._currentSongName,pSVar2);
            pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
            if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
              (pAVar1->fields)._autoPlay = false;
              pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
              if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
                (pAVar1->fields)._songTimeLeft = 0.0;
                pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
                if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
                  (pAVar1->fields)._transitionTimeLeft = 0.0;
                  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
                  if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
                    (pAVar1->fields)._isMenuTransition = false;
                    pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
                    if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
                      (pAVar1->fields)._justPlayedMenuTransition = false;
                      pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
                      if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
                        pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
                        (pAVar1->fields)._lastSongBeforeGrabbed = pSVar2;
                        Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._lastSongBeforeGrabbed,pSVar2);
                        pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
                        if ((pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) &&
                           (pUVar3 = (pAVar1->fields)._audio, pUVar3 != (UnityEngine_AudioSource_o *)0x0)) {
                          UnityEngine_AudioSource__Stop_2eb4660(pUVar3,(MethodInfo *)0x0);
                          pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
                          if ((pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) &&
                             (pUVar3 = (pAVar1->fields)._audio, pUVar3 != (UnityEngine_AudioSource_o *)0x0)) {
                            UnityEngine_AudioSource__set_generatorObject
                                      (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
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
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$FinishSetPlaylist
// il2cpp: void ApplicationManagers_MusicManager__FinishSetPlaylist (System_String_o* playlist, bool forceNext, const MethodInfo* method);
// 0x1823520f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18235221e: mov rdx, qword ptr [rip + 0x1d7a7fb]  ; TypeInfo_ApplicationManagers_MusicManager
// asm:   0x1823522e2: mov rcx, qword ptr [rip + 0x1d7a737]  ; TypeInfo_ApplicationManagers_MusicManager
// asm:   0x182352311: mov rcx, qword ptr [rip + 0x1d7a708]  ; TypeInfo_ApplicationManagers_MusicManager

void ApplicationManagers_MusicManager__FinishSetPlaylist
               (System_String_o *playlist,bool forceNext,MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_18434799c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    Il2CppMethodInitialized_18434799c = '\x01';
  }
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar1 == (ApplicationManagers_MusicManager_o *)0x0) goto label_182352340;
  bVar2 = System_String__op_Inequality((pAVar1->fields)._currentPlaylist,playlist,(MethodInfo *)0x0);
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar1 == (ApplicationManagers_MusicManager_o *)0x0) goto label_182352340;
  (pAVar1->fields)._currentPlaylist = playlist;
  Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._currentPlaylist,playlist);
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar1 == (ApplicationManagers_MusicManager_o *)0x0) goto label_182352340;
  if (((pAVar1->fields)._isDefaultPlaylist != false) ||
     (((pAVar1->fields)._isMenuTransition == false && (0.0 < (pAVar1->fields)._transitionTimeLeft)))) {
    (TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance->fields)._songTimeLeft = 0.0;
  }
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar1 == (ApplicationManagers_MusicManager_o *)0x0) goto label_182352340;
  if ((pAVar1->fields)._isMenuTransition == false) {
label_182352225:
    pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar1 == (ApplicationManagers_MusicManager_o *)0x0) goto label_182352340;
    (pAVar1->fields)._transitionTimeLeft = 0.0;
  }
  else {
    if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
    }
    bVar3 = System_String__op_Equality
                      (playlist,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Battle,
                       (MethodInfo *)0x0);
    if (bVar3) goto label_182352225;
  }
  if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
  }
  bVar3 = System_String__op_Equality
                    (playlist,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Battle,
                     (MethodInfo *)0x0);
  if (bVar3) {
    pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar1 == (ApplicationManagers_MusicManager_o *)0x0) goto label_182352340;
    if (((pAVar1->fields)._justEscapedGrab == false) ||
       (bVar3 = System_String__op_Inequality
                          ((pAVar1->fields)._lastSongBeforeGrabbed,
                           (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0),
       !bVar3)) goto label_1823522e9;
    pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar1 == (ApplicationManagers_MusicManager_o *)0x0) goto label_182352340;
    ApplicationManagers_MusicManager__SetSong
              ((pAVar1->fields)._lastSongBeforeGrabbed,(pAVar1->fields)._lastTimeBeforeGrabbed,
               (MethodInfo *)0x0);
  }
  else {
label_1823522e9:
    pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar1 == (ApplicationManagers_MusicManager_o *)0x0) goto label_182352340;
    if (((pAVar1->fields)._transitionTimeLeft <= 0.0) && (bVar2 || forceNext)) {
      (pAVar1->fields)._currentSong = 0;
      ApplicationManagers_MusicManager__NextSong((MethodInfo *)0x0);
    }
  }
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
    (pAVar1->fields)._justEscapedGrab = false;
    return;
  }
label_182352340:
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$PlaySoundEffect
// il2cpp: void ApplicationManagers_MusicManager__PlaySoundEffect (SimpleJSONFixed_JSONNode_o* songInfo, const MethodInfo* method);
// 0x1823535d0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823537e2: mov rdi, qword ptr [rsp + 0x50]
// asm:   0x1823537e7: mov rsi, qword ptr [rsp + 0x48]
// asm:   0x1823537ec: movaps xmm6, xmmword ptr [rsp + 0x20]

void ApplicationManagers_MusicManager__PlaySoundEffect
               (SimpleJSONFixed_JSONNode_o *songInfo,MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *__this;
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  System_String_o *name;
  UnityEngine_AudioClip_o *pUVar3;
  ApplicationManagers_MusicManager__StartSoundEffect_d__43_o *routine;
  UnityEngine_AudioClip_o *value;
  float fVar4;
  
  if (Il2CppMethodInitialized_18434799d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AudioClip);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Music");
    il2cpp_codegen_initialize_runtime_metadata(&"Volume");
    Il2CppMethodInitialized_18434799d = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(songInfo,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (songInfo == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_1823537f7:
      ThrowNullReferenceException();
    }
    bVar1 = (*(songInfo->klass->vtable)._28_HasKey.methodPtr)(songInfo,(MethodInfo *)"Name");
    if (bVar1) {
      pSVar2 = (*(songInfo->klass->vtable)._7_get_Item.methodPtr)
                         (songInfo,(MethodInfo *)"Name");
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      name = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                       ((SimpleJSONFixed_JSONNode_o *)pSVar2,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar3 = (UnityEngine_AudioClip_o *)
               ApplicationManagers_ResourceManager__LoadAsset
                         ("Music",name,false,(MethodInfo *)0x0);
      value = (UnityEngine_AudioClip_o *)0x0;
      if (pUVar3 != (UnityEngine_AudioClip_o *)0x0) {
        if (pUVar3->klass == TypeInfo_UnityEngine_AudioClip) {
          value = pUVar3;
        }
        if (value == (UnityEngine_AudioClip_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
        }
      }
      pSVar2 = (*(songInfo->klass->vtable)._7_get_Item.methodPtr)
                         (songInfo,(MethodInfo *)"Volume");
      fVar4 = SimpleJSONFixed_JSONNode__op_Implicit_1dc40b0
                        ((SimpleJSONFixed_JSONNode_o *)pSVar2,(MethodInfo *)0x0);
      __this = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      if (__this == (ApplicationManagers_MusicManager_o *)0x0) goto label_1823537f7;
      if (Il2CppMethodInitialized_18434799f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_ApplicationManagers_MusicManager_StartSoundEffect_d__43);
        Il2CppMethodInitialized_18434799f = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_MusicManager_StartSoundEffect_d__43);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      (routine->fields).clip = value;
      Il2CppCodeGenWriteBarrier(&(routine->fields).clip,value);
      (routine->fields).volume = fVar4;
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
    }
  }
  return;
}


// ApplicationManagers.MusicManager$$PlayImmediateTransition
// il2cpp: void ApplicationManagers_MusicManager__PlayImmediateTransition (SimpleJSONFixed_JSONNode_o* songInfo, const MethodInfo* method);
// 0x182353350

void ApplicationManagers_MusicManager__PlayImmediateTransition
               (SimpleJSONFixed_JSONNode_o *songInfo,MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  UnityEngine_AudioSource_o *pUVar2;
  bool bVar3;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  System_String_o *name;
  UnityEngine_AudioClip_o *pUVar5;
  UnityEngine_AudioClip_o *__this;
  float fVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_18434799e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AudioClip);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Music");
    il2cpp_codegen_initialize_runtime_metadata(&"Volume");
    Il2CppMethodInitialized_18434799e = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(songInfo,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (songInfo != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar3 = (*(songInfo->klass->vtable)._28_HasKey.methodPtr)(songInfo,(MethodInfo *)"Name");
      if (!bVar3) {
        return;
      }
      pSVar4 = (*(songInfo->klass->vtable)._7_get_Item.methodPtr)
                         (songInfo,(MethodInfo *)"Name");
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      name = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                       ((SimpleJSONFixed_JSONNode_o *)pSVar4,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar5 = (UnityEngine_AudioClip_o *)
               ApplicationManagers_ResourceManager__LoadAsset
                         ("Music",name,false,(MethodInfo *)0x0);
      __this = (UnityEngine_AudioClip_o *)0x0;
      if (pUVar5 != (UnityEngine_AudioClip_o *)0x0) {
        if (pUVar5->klass == TypeInfo_UnityEngine_AudioClip) {
          __this = pUVar5;
        }
        if (__this == (UnityEngine_AudioClip_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
        }
      }
      pSVar4 = (*(songInfo->klass->vtable)._7_get_Item.methodPtr)
                         (songInfo,(MethodInfo *)"Volume");
      fVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc40b0
                        ((SimpleJSONFixed_JSONNode_o *)pSVar4,(MethodInfo *)0x0);
      pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      if ((pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) &&
         (pUVar2 = (pAVar1->fields)._audio, pUVar2 != (UnityEngine_AudioSource_o *)0x0)) {
        UnityEngine_AudioSource__set_generatorObject(pUVar2,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
        pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
        if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
          pUVar2 = (pAVar1->fields)._audio;
          fVar7 = ApplicationManagers_MusicManager__GetMusicVolume((MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_AudioSource_o *)0x0) {
            UnityEngine_AudioSource__set_volume(pUVar2,fVar7 * fVar6,(MethodInfo *)0x0);
            pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
            if (((pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) &&
                (pUVar2 = (pAVar1->fields)._audio, pUVar2 != (UnityEngine_AudioSource_o *)0x0)) &&
               (UnityEngine_AudioSource__Play_2eb4470(pUVar2,(MethodInfo *)0x0),
               __this != (UnityEngine_AudioClip_o *)0x0)) {
              pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
              fVar6 = UnityEngine_AudioClip__get_length(__this,(MethodInfo *)0x0);
              if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
                (pAVar1->fields)._songTimeLeft = fVar6;
                pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
                fVar6 = UnityEngine_AudioClip__get_length(__this,(MethodInfo *)0x0);
                if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
                  (pAVar1->fields)._transitionTimeLeft = fVar6;
                  return;
                }
              }
            }
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// ApplicationManagers.MusicManager$$StartSoundEffect
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_MusicManager__StartSoundEffect (ApplicationManagers_MusicManager_o* __this, UnityEngine_AudioClip_o* clip, float volume, const MethodInfo* method);
// 0x182354980

System_Collections_IEnumerator_o *
ApplicationManagers_MusicManager__StartSoundEffect
          (ApplicationManagers_MusicManager_o *__this,UnityEngine_AudioClip_o *clip,float volume,
          MethodInfo *method)

{
  ApplicationManagers_MusicManager__StartSoundEffect_d__43_o *__this_00;
  
  if (Il2CppMethodInitialized_18434799f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_MusicManager_StartSoundEffect_d__43);
    Il2CppMethodInitialized_18434799f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_MusicManager_StartSoundEffect_d__43);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).clip = clip;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).clip,clip);
  (__this_00->fields).volume = volume;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.MusicManager$$SetSong
// il2cpp: void ApplicationManagers_MusicManager__SetSong (System_String_o* song, float startTime, const MethodInfo* method);
// 0x182353c60

void ApplicationManagers_MusicManager__SetSong(System_String_o *song,float startTime,MethodInfo *method)

{
  byte bVar1;
  ApplicationManagers_MusicManager_o *pAVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  GameManagers_BaseGameManager_c *pGVar5;
  Settings_SoundSettings_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  Settings_UISettings_o *pSVar8;
  Settings_BoolSetting_o *pSVar9;
  GameManagers_InGameManager_o *__this;
  bool bVar10;
  uint uVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  System_Xml_Schema_XmlSchema_o *pSVar13;
  MethodInfo *pMVar14;
  System_Xml_Schema_XmlSchema_o *pSVar15;
  longlong *plVar16;
  System_String_o *pSVar17;
  UnityEngine_AudioClip_o *pUVar18;
  ApplicationManagers_MusicManager__FadeNextSong_d__48_o *routine;
  UnityEngine_AudioClip_o *value;
  float fVar19;
  
  if (Il2CppMethodInitialized_1843479a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AudioClip);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Music");
    il2cpp_codegen_initialize_runtime_metadata(&"Playlist");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Volume");
    Il2CppMethodInitialized_1843479a0 = '\x01';
  }
  pSVar12 = ApplicationManagers_MusicManager__FindSong(song,(MethodInfo *)0x0);
  pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
    (pAVar2->fields)._autoPlay = false;
    pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
      value = (UnityEngine_AudioClip_o *)0x0;
      (pAVar2->fields)._currentSongName = "";
      fVar19 = 0.0;
      Il2CppCodeGenWriteBarrier(&(pAVar2->fields)._currentSongName,"");
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar10 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar10) {
        if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182354332;
        bVar10 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)(pSVar12,(MethodInfo *)"Name")
        ;
        if (bVar10) {
          pSVar13 = (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                              (pSVar12,(MethodInfo *)"Name");
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                              ((SimpleJSONFixed_JSONNode_o *)pSVar13,(MethodInfo *)0x0);
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pUVar18 = (UnityEngine_AudioClip_o *)
                    ApplicationManagers_ResourceManager__LoadAsset
                              ("Music",pSVar17,false,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar10 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((bVar10) && (pUVar18 != (UnityEngine_AudioClip_o *)0x0)) {
            if (pUVar18->klass == TypeInfo_UnityEngine_AudioClip) {
              value = pUVar18;
            }
            if (value == (UnityEngine_AudioClip_o *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception(pUVar18);
            }
          }
          pSVar13 = (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                              (pSVar12,(MethodInfo *)"Volume");
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          fVar19 = SimpleJSONFixed_JSONNode__op_Implicit_1dc40b0
                             ((SimpleJSONFixed_JSONNode_o *)pSVar13,(MethodInfo *)0x0);
          pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
          pSVar13 = (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                              (pSVar12,(MethodInfo *)"Name");
          pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                              ((SimpleJSONFixed_JSONNode_o *)pSVar13,(MethodInfo *)0x0);
          if (pAVar2 == (ApplicationManagers_MusicManager_o *)0x0) goto label_182354332;
          (pAVar2->fields)._currentSongName = pSVar17;
          Il2CppCodeGenWriteBarrier(&(pAVar2->fields)._currentSongName,pSVar17);
          pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
          if (pGVar4 != (GameManagers_BaseGameManager_o *)0x0) {
            pGVar5 = pGVar4->klass;
            bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
            if ((bVar1 <= (pGVar5->_2).typeHierarchyDepth) &&
               ((pGVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
              pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
              if ((pSVar6 == (Settings_SoundSettings_o *)0x0) ||
                 (pSVar7 = (pSVar6->fields).Music, pSVar7 == (Settings_FloatSetting_o *)0x0))
              goto label_182354332;
              if (0.0 < (pSVar7->fields)._value) {
                pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                if ((pSVar8 == (Settings_UISettings_o *)0x0) ||
                   (pSVar9 = (pSVar8->fields).ShowSongPopup, pSVar9 == (Settings_BoolSetting_o *)0x0))
                goto label_182354332;
                if ((pSVar9->fields)._value != false) {
                  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar10 = UnityEngine_Object__op_Inequality
                                     ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,
                                      (MethodInfo *)0x0);
                  if (bVar10) {
                    __this = (GameManagers_InGameManager_o *)
                             TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
                    if (__this == (GameManagers_InGameManager_o *)0x0) goto label_182354332;
                    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
                    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
                       ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
                      il2cpp_codegen_raise_invalid_cast_exception(__this,TypeInfo_GameManagers_InGameManager);
                    }
                    GameManagers_InGameManager__OnSongChange(__this,(MethodInfo *)0x0);
                  }
                }
              }
            }
          }
        }
        else {
          pSVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_musicInfo;
          pSVar13 = (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                              (pSVar12,(MethodInfo *)"Playlist");
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pMVar14 = (MethodInfo *)
                    SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                              ((SimpleJSONFixed_JSONNode_o *)pSVar13,(MethodInfo *)0x0);
          if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182354332;
          pSVar13 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)(pSVar3,pMVar14);
          if (pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_182354332;
          pSVar15 = (*(pSVar13->klass->vtable)._11_get_NameAttribute.methodPtr)
                              (pSVar13,(pSVar13->klass->vtable)._11_get_NameAttribute.method);
          uVar11 = UnityEngine_Random__RandomRangeInt(0,(int32_t)pSVar15,(MethodInfo *)0x0);
          plVar16 = (longlong *)
                    (*(pSVar13->klass->vtable)._5_OnRemove.methodPtr)
                              (pSVar13,(System_Type_o *)(ulonglong)uVar11,
                               (pSVar13->klass->vtable)._5_OnRemove.method);
          if (plVar16 == (longlong *)0x0) goto label_182354332;
          pSVar12 = (SimpleJSONFixed_JSONNode_o *)(**(code **)(*plVar16 + 0x1a8))(plVar16);
          pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450(pSVar12,(MethodInfo *)0x0);
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pUVar18 = (UnityEngine_AudioClip_o *)
                    ApplicationManagers_ResourceManager__LoadAsset
                              ("Music",pSVar17,false,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar10 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((bVar10) && (pUVar18 != (UnityEngine_AudioClip_o *)0x0)) {
            if (pUVar18->klass == TypeInfo_UnityEngine_AudioClip) {
              value = pUVar18;
            }
            if (value == (UnityEngine_AudioClip_o *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception(pUVar18);
            }
          }
          pSVar12 = (SimpleJSONFixed_JSONNode_o *)
                    (**(code **)(*plVar16 + 0x1a8))
                              (plVar16,"Volume",*(undefined8 *)(*plVar16 + 0x1b0));
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          fVar19 = SimpleJSONFixed_JSONNode__op_Implicit_1dc40b0(pSVar12,(MethodInfo *)0x0);
          pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
          pSVar12 = (SimpleJSONFixed_JSONNode_o *)(**(code **)(*plVar16 + 0x1a8))(plVar16);
          pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450(pSVar12,(MethodInfo *)0x0);
          if (pAVar2 == (ApplicationManagers_MusicManager_o *)0x0) goto label_182354332;
          (pAVar2->fields)._currentSongName = pSVar17;
          Il2CppCodeGenWriteBarrier(&(pAVar2->fields)._currentSongName,pSVar17);
        }
      }
      pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
        UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)pAVar2,(MethodInfo *)0x0);
        pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
        if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
          if (Il2CppMethodInitialized_1843479a4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_ApplicationManagers_MusicManager_FadeNextSong_d__48);
            Il2CppMethodInitialized_1843479a4 = '\x01';
          }
          routine = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_ApplicationManagers_MusicManager_FadeNextSong_d__48);
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
          (routine->fields).__1__state = 0;
          (routine->fields).__4__this = pAVar2;
          Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,pAVar2);
          (routine->fields).nextClip = value;
          Il2CppCodeGenWriteBarrier(&(routine->fields).nextClip,value);
          (routine->fields).volume = fVar19;
          (routine->fields).startTime = startTime;
          UnityEngine_MonoBehaviour__StartCoroutine_Auto
                    ((UnityEngine_MonoBehaviour_o *)pAVar2,(System_Collections_IEnumerator_o *)routine,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_182354332:
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$ChatNextSong
// il2cpp: void ApplicationManagers_MusicManager__ChatNextSong (const MethodInfo* method);
// 0x182351cf0

void ApplicationManagers_MusicManager__ChatNextSong(MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  
  if (Il2CppMethodInitialized_1843479a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    Il2CppMethodInitialized_1843479a1 = '\x01';
  }
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
    (pAVar1->fields)._songTimeLeft = 0.0;
    pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
      (pAVar1->fields)._transitionTimeLeft = 0.0;
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$NextSong
// il2cpp: void ApplicationManagers_MusicManager__NextSong (const MethodInfo* method);
// 0x182352bb0

void ApplicationManagers_MusicManager__NextSong(MethodInfo *method)

{
  int32_t *piVar1;
  ApplicationManagers_MusicManager_o *pAVar2;
  ApplicationManagers_MusicManager_StaticFields *pAVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  bool bVar5;
  int32_t iVar6;
  System_Xml_Schema_XmlSchema_o *pSVar7;
  System_Xml_Schema_XmlSchema_o *pSVar8;
  longlong *plVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_String_o *pSVar11;
  
  if (Il2CppMethodInitialized_1843479a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_1843479a2 = '\x01';
  }
  pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
    bVar5 = System_String__op_Equality
                      ((pAVar2->fields)._currentPlaylist,
                       (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    if (bVar5) {
      return;
    }
    pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
      pSVar11 = (pAVar2->fields)._currentPlaylist;
      if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
      }
      bVar5 = System_String__op_Equality
                        (pSVar11,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->None,
                         (MethodInfo *)0x0);
      if (bVar5) {
        return;
      }
      pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
        bVar5 = System_String__op_Equality
                          ((pAVar2->fields)._currentPlaylist,"Custom",(MethodInfo *)0x0);
        pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields;
        if (bVar5) {
          if ((pAVar3->_instance != (ApplicationManagers_MusicManager_o *)0x0) &&
             (pSVar4 = (pAVar3->_instance->fields)._customPlaylist,
             pSVar4 != (System_Collections_Generic_List_string__o *)0x0)) {
            if ((pSVar4->fields)._size == 0) {
              return;
            }
            piVar1 = &(TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance->fields).
                      _currentSong;
            *piVar1 = *piVar1 + 1;
            pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
            if ((pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) &&
               (pSVar4 = (pAVar2->fields)._customPlaylist,
               pSVar4 != (System_Collections_Generic_List_string__o *)0x0)) {
              if ((pSVar4->fields)._size <= (pAVar2->fields)._currentSong) {
                (TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance->fields)._currentSong = 0
                ;
              }
              pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
              if ((pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) &&
                 (pSVar4 = (pAVar2->fields)._customPlaylist,
                 pSVar4 != (System_Collections_Generic_List_string__o *)0x0)) {
                pSVar11 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar4,
                                     (TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance->
                                     fields)._currentSong,
                                     (MethodInfo_92B830 *)
                                     MethodInfo_System_Collections_Generic_List_string_get_Item);
                goto label_182352dae;
              }
            }
          }
        }
        else if (((pAVar3->_instance != (ApplicationManagers_MusicManager_o *)0x0) &&
                 (pSVar10 = pAVar3->_musicInfo, pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0)) &&
                (pSVar7 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,(MethodInfo *)(pAVar3->_instance->fields)._currentPlaylist),
                pSVar7 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
          pSVar8 = (*(pSVar7->klass->vtable)._11_get_NameAttribute.methodPtr)
                             (pSVar7,(pSVar7->klass->vtable)._11_get_NameAttribute.method);
          iVar6 = UnityEngine_Random__RandomRangeInt(0,(int32_t)pSVar8,(MethodInfo *)0x0);
          plVar9 = (longlong *)
                   (*(pSVar7->klass->vtable)._5_OnRemove.methodPtr)
                             (pSVar7,(System_Type_o *)iVar6,(pSVar7->klass->vtable)._5_OnRemove.method);
          if (plVar9 != (longlong *)0x0) {
            pSVar10 = (SimpleJSONFixed_JSONNode_o *)(**(code **)(*plVar9 + 0x1a8))(plVar9);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450(pSVar10,(MethodInfo *)0x0);
label_182352dae:
            ApplicationManagers_MusicManager__SetSong(pSVar11,0.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$FindSong
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_MusicManager__FindSong (System_String_o* name, const MethodInfo* method);
// 0x182351e00
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182351fdf: nop 
// asm:   0x1823520da: mov rax, rbx
// asm:   0x1823520dd: jmp 0x1823520b1

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_MusicManager__FindSong(System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar2;
  bool bVar3;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar4;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  undefined8 *puVar7;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar8;
  System_Xml_Schema_XmlSchema_o *a;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_178;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_128;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_68;
  
  if (Il2CppMethodInitialized_1843479a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_1843479a3 = '\x01';
  }
  local_128.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_178.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_128.type = 0;
  local_128._4_4_ = 0;
  local_128.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_128.m_Object.fields._version = 0;
  local_128.m_Object.fields._index = 0;
  local_128.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_128.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_128.m_Object.fields._getEnumeratorRetType = 0;
  local_128.m_Object.fields._36_4_ = 0;
  local_128.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_128.m_Array.fields._index = 0;
  local_128.m_Array.fields._version = 0;
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  local_178.type = 0;
  local_178._4_4_ = 0;
  local_178.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_178.m_Object.fields._version = 0;
  local_178.m_Object.fields._index = 0;
  local_178.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_178.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_178.m_Object.fields._getEnumeratorRetType = 0;
  local_178.m_Object.fields._36_4_ = 0;
  local_178.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_178.m_Array.fields._index = 0;
  local_178.m_Array.fields._version = 0;
  bVar3 = System_String__op_Equality
                    (name,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (!bVar3) {
    pSVar6 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_musicInfo;
    if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_1823520df:
      ThrowNullReferenceException();
    }
    pSVar4 = SimpleJSONFixed_JSONNode__get_Values(&local_68,pSVar6,(MethodInfo *)0x0);
    local_d8.type = (pSVar4->fields).m_Enumerator.fields.type;
    local_d8._4_4_ = *(undefined4 *)&(pSVar4->fields).m_Enumerator.fields.field_0x4;
    local_d8.m_Object.fields._dictionary = (pSVar4->fields).m_Enumerator.fields.m_Object.fields._dictionary;
    pSVar2 = &(pSVar4->fields).m_Enumerator;
    local_d8.m_Object.fields._version = (pSVar2->fields).m_Object.fields._version;
    local_d8.m_Object.fields._index = (pSVar2->fields).m_Object.fields._index;
    local_d8.m_Object.fields._current.fields.key =
         (pSVar4->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
    local_d8.m_Object.fields._current.fields.value =
         (pSVar4->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
    pSVar2 = &(pSVar4->fields).m_Enumerator;
    local_d8.m_Object.fields._getEnumeratorRetType = (pSVar2->fields).m_Object.fields._getEnumeratorRetType;
    local_d8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar2->fields).m_Object.fields.field_0x24;
    local_d8.m_Array.fields._list = (pSVar4->fields).m_Enumerator.fields.m_Array.fields._list;
    pSVar2 = &(pSVar4->fields).m_Enumerator;
    local_d8.m_Array.fields._index = (pSVar2->fields).m_Array.fields._index;
    local_d8.m_Array.fields._version = (pSVar2->fields).m_Array.fields._version;
    local_d8.m_Array.fields._current = (pSVar4->fields).m_Enumerator.fields.m_Array.fields._current;
    pSVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                       ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_68,
                        (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
    local_128.type = (pSVar5->fields).m_Enumerator.fields.type;
    local_128._4_4_ = *(undefined4 *)&(pSVar5->fields).m_Enumerator.fields.field_0x4;
    local_128.m_Object.fields._dictionary = (pSVar5->fields).m_Enumerator.fields.m_Object.fields._dictionary;
    pSVar2 = &(pSVar5->fields).m_Enumerator;
    local_128.m_Object.fields._version = (pSVar2->fields).m_Object.fields._version;
    local_128.m_Object.fields._index = (pSVar2->fields).m_Object.fields._index;
    local_128.m_Object.fields._current.fields.key =
         (pSVar5->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
    local_128.m_Object.fields._current.fields.value =
         (pSVar5->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
    pSVar2 = &(pSVar5->fields).m_Enumerator;
    local_128.m_Object.fields._getEnumeratorRetType = (pSVar2->fields).m_Object.fields._getEnumeratorRetType;
    local_128.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar2->fields).m_Object.fields.field_0x24;
    local_128.m_Array.fields._list = (pSVar5->fields).m_Enumerator.fields.m_Array.fields._list;
    pSVar2 = &(pSVar5->fields).m_Enumerator;
    local_128.m_Array.fields._index = (pSVar2->fields).m_Array.fields._index;
    local_128.m_Array.fields._version = (pSVar2->fields).m_Array.fields._version;
    local_128.m_Array.fields._current = (pSVar5->fields).m_Enumerator.fields.m_Array.fields._current;
    bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_128,(MethodInfo *)0x0);
    while (bVar3) {
      pSVar6 = SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current
                         ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_128,(MethodInfo *)0x0);
      if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_1823520df;
      puVar7 = (undefined8 *)(*(pSVar6->klass->vtable)._32_unknown.methodPtr)(&local_68);
      local_178._0_8_ = *puVar7;
      local_178.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar7[1];
      local_178.m_Object.fields._8_8_ = puVar7[2];
      local_178.m_Object.fields._current.fields.key = (Il2CppObject *)puVar7[3];
      local_178.m_Object.fields._current.fields.value = (Il2CppObject *)puVar7[4];
      local_178.m_Object.fields._32_8_ = puVar7[5];
      local_178.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar7[6];
      local_178.m_Array.fields._8_8_ = puVar7[7];
      local_178.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar7[8];
      bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_178,(MethodInfo *)0x0);
      if (bVar3) {
        do {
          pSVar8 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_178,(MethodInfo *)0x0)
          ;
          pSVar1 = (pSVar8->fields).key;
          pSVar6 = (pSVar8->fields).value;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          local_88.fields.key = pSVar1;
          local_88.fields.value = pSVar6;
          pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
          if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_1823520df;
          bVar3 = (*(pSVar6->klass->vtable)._28_HasKey.methodPtr)(pSVar6,(MethodInfo *)"Name");
          if (bVar3) {
            a = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)"Name");
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                              ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)name,(MethodInfo *)0x0);
            if (bVar3) {
              return pSVar6;
            }
          }
          bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_178,(MethodInfo *)0x0);
        } while (bVar3);
      }
      bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_128,(MethodInfo *)0x0);
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// ApplicationManagers.MusicManager$$FadeNextSong
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_MusicManager__FadeNextSong (ApplicationManagers_MusicManager_o* __this, UnityEngine_AudioClip_o* nextClip, float volume, float startTime, const MethodInfo* method);
// 0x182351d50

System_Collections_IEnumerator_o *
ApplicationManagers_MusicManager__FadeNextSong
          (ApplicationManagers_MusicManager_o *__this,UnityEngine_AudioClip_o *nextClip,float volume,
          float startTime,MethodInfo *method)

{
  ApplicationManagers_MusicManager__FadeNextSong_d__48_o *__this_00;
  
  if (Il2CppMethodInitialized_1843479a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager_FadeNextSong_d__48);
    Il2CppMethodInitialized_1843479a4 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_MusicManager_FadeNextSong_d__48);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).nextClip = nextClip;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).nextClip,nextClip);
  (__this_00->fields).volume = volume;
  (__this_00->fields).startTime = startTime;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.MusicManager$$Update
// il2cpp: void ApplicationManagers_MusicManager__Update (ApplicationManagers_MusicManager_o* __this, const MethodInfo* method);
// 0x182354c60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182354ea6: mov rdi, qword ptr [rsp + 0x40]

void ApplicationManagers_MusicManager__Update(ApplicationManagers_MusicManager_o *__this,MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  bool bVar2;
  System_String_o *pSVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_1843479a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    Il2CppMethodInitialized_1843479a5 = '\x01';
  }
  fVar5 = (__this->fields)._songTimeLeft;
  fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._songTimeLeft = fVar5 - fVar4;
  fVar5 = (__this->fields)._transitionTimeLeft;
  fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar5 = fVar5 - fVar4;
  (__this->fields)._transitionTimeLeft = fVar5;
  if ((__this->fields)._isDefaultPlaylist == false) {
    if (0.0 < (__this->fields)._songTimeLeft) {
      return;
    }
    if ((__this->fields)._autoPlay == false) {
      return;
    }
    if (0.0 < fVar5) {
      return;
    }
    ApplicationManagers_MusicManager__NextSong((MethodInfo *)0x0);
    return;
  }
  pSVar3 = (__this->fields)._currentPlaylist;
  if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
  }
  bVar2 = System_String__op_Inequality
                    (pSVar3,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Battle,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if (0.0 < (__this->fields)._transitionTimeLeft) {
      pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      if (pAVar1 == (ApplicationManagers_MusicManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pAVar1->fields)._isMenuTransition == false) goto label_182354da1;
    }
    bVar2 = ApplicationManagers_MusicManager__ShouldPlayBattleMusic(__this,(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
      }
      ApplicationManagers_MusicManager__FinishSetPlaylist
                (TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Battle,true,(MethodInfo *)0x0);
    }
  }
label_182354da1:
  if (((__this->fields)._songTimeLeft <= 0.0) && ((__this->fields)._autoPlay != false)) {
    if (0.0 < (__this->fields)._transitionTimeLeft) {
      return;
    }
    bVar2 = ApplicationManagers_MusicManager__ShouldPlayBattleMusic(__this,(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
      }
      pSVar3 = TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Battle;
    }
    else {
      pSVar3 = (__this->fields)._currentPlaylist;
      if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
      }
      bVar2 = System_String__op_Equality
                        (pSVar3,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Battle,
                         (MethodInfo *)0x0);
      if ((bVar2) || ((__this->fields)._justPlayedMenuTransition != false)) {
        if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
        }
        pSVar3 = TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Ambient;
      }
      else {
        if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
        }
        pSVar3 = TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Peaceful;
      }
    }
    ApplicationManagers_MusicManager__FinishSetPlaylist(pSVar3,true,(MethodInfo *)0x0);
  }
  if (((__this->fields)._transitionTimeLeft <= 0.0) && ((__this->fields)._justPlayedMenuTransition != false))
  {
    (__this->fields)._justPlayedMenuTransition = false;
  }
  return;
}


// ApplicationManagers.MusicManager$$ShouldPlayBattleMusic
// il2cpp: bool ApplicationManagers_MusicManager__ShouldPlayBattleMusic (ApplicationManagers_MusicManager_o* __this, const MethodInfo* method);
// 0x182354360
// eh: try 0x18235463d..0x182354950 -> pad 0x1833288d0 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823548d0: jmp 0x1823548f8
// asm:   0x1823548d2: mov r8, qword ptr [rsp + 0x78]
// asm:   0x1823548d7: cmp qword ptr [r8], 0
// asm:   0x1823548db: je 0x1823548ee
// asm:   0x1823548dd: xor ecx, ecx
// asm:   0x1823548df: mov r8, qword ptr [r8]
// asm:   0x1823548e2: mov rdx, qword ptr [rip + 0x1d44a17]  ; TypeInfo_System_IDisposable
// asm:   0x1823548e9: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1823548ee: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x1823548f3: test rcx, rcx
// asm:   0x1823548f6: jne 0x182354950
// asm:   0x182354950: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833288d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833288d5: push rbp
// asm:   0x1833288d6: sub rsp, 0x20
// asm:   0x1833288da: mov rbp, rdx
// asm:   0x1833288dd: mov rax, qword ptr [rbp + 0x20]
// asm:   0x1833288e1: mov rcx, qword ptr [rax]
// asm:   0x1833288e4: mov qword ptr [rbp + 0x70], rcx
// asm:   0x1833288e8: movabs rax, 0
// asm:   0x1833288f2: add rsp, 0x20
// asm:   0x1833288f6: pop rbp
// asm:   0x1833288f7: ret 

bool ApplicationManagers_MusicManager__ShouldPlayBattleMusic
               (ApplicationManagers_MusicManager_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  ushort uVar3;
  Cameras_BaseCamera_o *pCVar4;
  GameManagers_BaseGameManager_o *pGVar5;
  Cameras_BaseCamera_c *pCVar6;
  GameManagers_BaseGameManager_c *pGVar7;
  GameManagers_InGameManager_o *__this_00;
  Il2CppClass *pIVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  Utility_BaseComponentCache_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  Characters_BaseCharacter_c *pCVar12;
  bool bVar13;
  Il2CppObject *pIVar14;
  void *pvVar15;
  VirtualInvokeData *pVVar16;
  Characters_BaseCharacter_o *a;
  UnityEngine_Vector3_o *pUVar17;
  ushort uVar18;
  float fVar19;
  Il2CppObject *local_res8 [4];
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  UnityEngine_Vector3_o local_98;
  UnityEngine_Vector3_o local_88;
  undefined8 local_78;
  Il2CppObject **local_70;
  
  if (Il2CppMethodInitialized_1843479a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_1843479a6 = '\x01';
  }
  local_res8[0] = (Il2CppObject *)0x0;
  fVar19 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if ((__this->fields)._lastCheckBattleMusic + 0.2 <= fVar19) {
    fVar19 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._lastCheckBattleMusic = fVar19;
    if (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 2) {
      pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar13 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar13) {
        pGVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar13 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pGVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((bVar13) &&
           (pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera,
           pCVar4 != (Cameras_BaseCamera_o *)0x0)) {
          pCVar6 = pCVar4->klass;
          bVar2 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
          if ((bVar2 <= (pCVar6->_2).typeHierarchyDepth) &&
             (((pCVar6->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
               (Il2CppClass *)TypeInfo_Cameras_InGameCamera &&
              (pGVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager,
              pGVar5 != (GameManagers_BaseGameManager_o *)0x0)))) {
            pGVar7 = pGVar5->klass;
            bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
            if ((bVar2 <= (pGVar7->_2).typeHierarchyDepth) &&
               ((pGVar7->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
                (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
              pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
              bVar2 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
              if (((pCVar4->klass->_2).typeHierarchyDepth < bVar2) ||
                 ((pCVar4->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                  (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
                il2cpp_codegen_raise_invalid_cast_exception(pCVar4);
              }
              __this_00 = (GameManagers_InGameManager_o *)
                          TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
              bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
              if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
                 ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                  (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
                il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_GameManagers_InGameManager);
              }
              pCVar6 = (*(uint64_t *)((char *)pCVar4 + 0x38));
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar13 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                 );
              if (!bVar13) {
                pIVar14 = (Il2CppObject *)
                          GameManagers_InGameManager__GetAllCharactersEnumerable(__this_00,(MethodInfo *)0x0);
                if (pIVar14 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                local_res8[0] =
                     InterfaceInvoker0_Invoke
                               (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter
                                ,pIVar14);
                local_78 = 0;
                local_70 = local_res8;
                while( true ) {
                  if (local_res8[0] == (Il2CppObject *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pvVar15 = InterfaceInvoker0_Invoke
                                      (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res8[0])
                  ;
                  pIVar14 = local_res8[0];
                  if ((char)pvVar15 == '\0') break;
                  if (local_res8[0] == (Il2CppObject *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pIVar8 = local_res8[0]->klass;
                  uVar3 = (pIVar8->_2).interface_offsets_count;
                  if (uVar3 != 0) {
                    uVar18 = 0;
                    pIVar9 = (pIVar8->_1).interfaceOffsets;
                    do {
                      if (pIVar9[uVar18].interfaceType ==
                          (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter) {
                        pVVar16 = pIVar8->vtable + pIVar9[uVar18].offset;
                        goto label_1823546e6;
                      }
                      uVar18 = uVar18 + 1;
                    } while (uVar18 < uVar3);
                  }
                  pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                                      (local_res8[0],
                                       (Il2CppClass *)
                                       TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter,0);
label_1823546e6:
                  a = (Characters_BaseCharacter_o *)(*pVVar16->methodPtr)(pIVar14,pVVar16->method);
                  if (a == (Characters_BaseCharacter_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar13 = (*(a->klass->vtable)._73_ValidTarget.methodPtr)
                                     (a,(a->klass->vtable)._73_ValidTarget.method);
                  if (bVar13) {
                    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
                    }
                    bVar13 = GameManagers_TeamInfo__SameTeam_1e770d0
                                       (a,(Characters_BaseCharacter_o *)pCVar6,(MethodInfo *)0x0);
                    if (!bVar13) {
                      pUVar10 = (a->fields).Cache;
                      if (pUVar10 == (Utility_BaseComponentCache_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pUVar11 = (pUVar10->fields).Transform;
                      if (pUVar11 == (UnityEngine_Transform_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pUVar17 = UnityEngine_Transform__get_position(&local_98,pUVar11,(MethodInfo *)0x0);
                      if (pCVar6 == (Cameras_BaseCamera_c *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pIVar8 = (pCVar6->_1).klass;
                      if (pIVar8 == (Il2CppClass *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pUVar11 = ((Utility_BaseComponentCache_Fields *)&(pIVar8->_1).name)->Transform;
                      if (pUVar11 == (UnityEngine_Transform_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      uVar1._0_4_ = (pUVar17->fields).x;
                      uVar1._4_4_ = (pUVar17->fields).y;
                      fVar19 = (pUVar17->fields).z;
                      pUVar17 = UnityEngine_Transform__get_position(&local_88,pUVar11,(MethodInfo *)0x0);
                      local_b8._0_4_ = (pUVar17->fields).x;
                      local_b8._4_4_ = (pUVar17->fields).y;
                      local_b0 = (pUVar17->fields).z;
                      local_a8 = uVar1;
                      local_a0 = fVar19;
                      fVar19 = (float)il2cpp_runtime_helper_180562c80(&local_a8,&local_b8,0);
                      pCVar12 = a->klass;
                      bVar2 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
                      if (((pCVar12->_2).typeHierarchyDepth < bVar2) ||
                         ((pCVar12->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                          (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
                        if (fVar19 < 500.0) {
                          if (local_res8[0] != (Il2CppObject *)0x0) {
                            InterfaceInvoker0_Invoke
                                      (0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res8[0]);
                          }
                          return true;
                        }
                      }
                      else {
                        if (fVar19 < 200.0) {
                          if (local_res8[0] == (Il2CppObject *)0x0) {
                            return true;
                          }
                          InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res8[0])
                          ;
                          return true;
                        }
                        if (fVar19 < 1000.0) {
                          bVar2 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
                          if (((pCVar12->_2).typeHierarchyDepth < bVar2) ||
                             ((pCVar12->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                              (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
                            il2cpp_codegen_raise_invalid_cast_exception(a);
                          }
                          if (0 < (*(uint32_t *)((char *)a + 0x36c))) {
                            if (local_res8[0] == (Il2CppObject *)0x0) {
                              return true;
                            }
                            InterfaceInvoker0_Invoke
                                      (0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res8[0]);
                            return true;
                          }
                        }
                      }
                    }
                  }
                }
                if (local_res8[0] != (Il2CppObject *)0x0) {
                  InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res8[0]);
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}


// ApplicationManagers.MusicManager$$GetMusicVolume
// il2cpp: float ApplicationManagers_MusicManager__GetMusicVolume (const MethodInfo* method);
// 0x182352730

float ApplicationManagers_MusicManager__GetMusicVolume(MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843479a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_1843479a7 = '\x01';
  }
  if (TypeInfo_ApplicationManagers_MusicManager->static_fields->_muted == false) {
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    if ((pSVar1 != (Settings_SoundSettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).Music, pSVar2 != (Settings_FloatSetting_o *)0x0)) {
      return (pSVar2->fields)._value * 0.4;
    }
    ThrowNullReferenceException();
  }
  return 0.0;
}


// ApplicationManagers.MusicManager$$GetCurrentSong
// il2cpp: System_String_o* ApplicationManagers_MusicManager__GetCurrentSong (const MethodInfo* method);
// 0x182352690

System_String_o * ApplicationManagers_MusicManager__GetCurrentSong(MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843479a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843479a8 = '\x01';
  }
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
    bVar2 = System_String__op_Equality
                      ((pAVar1->fields)._currentSongName,"",(MethodInfo *)0x0);
    if (bVar2) {
      return "None";
    }
    pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
      return (pAVar1->fields)._currentSongName;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$GetAllSongs
// il2cpp: System_Collections_Generic_List_string__o* ApplicationManagers_MusicManager__GetAllSongs (const MethodInfo* method);
// 0x182352350
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823524eb: nop dword ptr [rax + rax]
// asm:   0x18235255f: nop 

System_Collections_Generic_List_string__o * ApplicationManagers_MusicManager__GetAllSongs(MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  bool bVar2;
  System_Collections_Generic_HashSet_string__o *__this;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar3;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  undefined8 *puVar6;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar7;
  System_Xml_Schema_XmlSchema_o *d;
  System_String_o *pSVar8;
  System_Collections_Generic_List_string__o *__this_00;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_178;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_128;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_68;
  
  if (Il2CppMethodInitialized_1843479a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_1843479a9 = '\x01';
  }
  local_128.type = 0;
  local_128._4_4_ = 0;
  local_128.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_128.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_128.m_Object.fields._version = 0;
  local_128.m_Object.fields._index = 0;
  local_128.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_128.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_128.m_Object.fields._getEnumeratorRetType = 0;
  local_128.m_Object.fields._36_4_ = 0;
  local_178.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_128.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_128.m_Array.fields._index = 0;
  local_128.m_Array.fields._version = 0;
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  local_178.type = 0;
  local_178._4_4_ = 0;
  local_178.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_178.m_Object.fields._version = 0;
  local_178.m_Object.fields._index = 0;
  local_178.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_178.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_178.m_Object.fields._getEnumeratorRetType = 0;
  local_178.m_Object.fields._36_4_ = 0;
  local_178.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_178.m_Array.fields._index = 0;
  local_178.m_Array.fields._version = 0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  pSVar5 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_musicInfo;
  if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_182352683:
    ThrowNullReferenceException();
  }
  pSVar3 = SimpleJSONFixed_JSONNode__get_Values(&local_68,pSVar5,(MethodInfo *)0x0);
  local_d8.type = (pSVar3->fields).m_Enumerator.fields.type;
  local_d8._4_4_ = *(undefined4 *)&(pSVar3->fields).m_Enumerator.fields.field_0x4;
  local_d8.m_Object.fields._dictionary = (pSVar3->fields).m_Enumerator.fields.m_Object.fields._dictionary;
  pSVar1 = &(pSVar3->fields).m_Enumerator;
  local_d8.m_Object.fields._version = (pSVar1->fields).m_Object.fields._version;
  local_d8.m_Object.fields._index = (pSVar1->fields).m_Object.fields._index;
  local_d8.m_Object.fields._current.fields.key =
       (pSVar3->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
  local_d8.m_Object.fields._current.fields.value =
       (pSVar3->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
  pSVar1 = &(pSVar3->fields).m_Enumerator;
  local_d8.m_Object.fields._getEnumeratorRetType = (pSVar1->fields).m_Object.fields._getEnumeratorRetType;
  local_d8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar1->fields).m_Object.fields.field_0x24;
  local_d8.m_Array.fields._list = (pSVar3->fields).m_Enumerator.fields.m_Array.fields._list;
  pSVar1 = &(pSVar3->fields).m_Enumerator;
  local_d8.m_Array.fields._index = (pSVar1->fields).m_Array.fields._index;
  local_d8.m_Array.fields._version = (pSVar1->fields).m_Array.fields._version;
  local_d8.m_Array.fields._current = (pSVar3->fields).m_Enumerator.fields.m_Array.fields._current;
  pSVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                     ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_68,
                      (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
  local_128.type = (pSVar4->fields).m_Enumerator.fields.type;
  local_128._4_4_ = *(undefined4 *)&(pSVar4->fields).m_Enumerator.fields.field_0x4;
  local_128.m_Object.fields._dictionary = (pSVar4->fields).m_Enumerator.fields.m_Object.fields._dictionary;
  pSVar1 = &(pSVar4->fields).m_Enumerator;
  local_128.m_Object.fields._version = (pSVar1->fields).m_Object.fields._version;
  local_128.m_Object.fields._index = (pSVar1->fields).m_Object.fields._index;
  local_128.m_Object.fields._current.fields.key =
       (pSVar4->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
  local_128.m_Object.fields._current.fields.value =
       (pSVar4->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
  pSVar1 = &(pSVar4->fields).m_Enumerator;
  local_128.m_Object.fields._getEnumeratorRetType = (pSVar1->fields).m_Object.fields._getEnumeratorRetType;
  local_128.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar1->fields).m_Object.fields.field_0x24;
  local_128.m_Array.fields._list = (pSVar4->fields).m_Enumerator.fields.m_Array.fields._list;
  pSVar1 = &(pSVar4->fields).m_Enumerator;
  local_128.m_Array.fields._index = (pSVar1->fields).m_Array.fields._index;
  local_128.m_Array.fields._version = (pSVar1->fields).m_Array.fields._version;
  local_128.m_Array.fields._current = (pSVar4->fields).m_Enumerator.fields.m_Array.fields._current;
  bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                    ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_128,(MethodInfo *)0x0);
  if (bVar2) {
    do {
      pSVar5 = SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current
                         ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_128,(MethodInfo *)0x0);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182352683;
      puVar6 = (undefined8 *)(*(pSVar5->klass->vtable)._32_unknown.methodPtr)(&local_68);
      local_178._0_8_ = *puVar6;
      local_178.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar6[1];
      local_178.m_Object.fields._8_8_ = puVar6[2];
      local_178.m_Object.fields._current.fields.key = (Il2CppObject *)puVar6[3];
      local_178.m_Object.fields._current.fields.value = (Il2CppObject *)puVar6[4];
      local_178.m_Object.fields._32_8_ = puVar6[5];
      local_178.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar6[6];
      local_178.m_Array.fields._8_8_ = puVar6[7];
      local_178.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar6[8];
      bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_178,(MethodInfo *)0x0);
      if (bVar2) {
        do {
          pSVar7 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_178,(MethodInfo *)0x0)
          ;
          pSVar8 = (pSVar7->fields).key;
          pSVar5 = (pSVar7->fields).value;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          local_88.fields.key = pSVar8;
          local_88.fields.value = pSVar5;
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
          if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182352683;
          bVar2 = (*(pSVar5->klass->vtable)._28_HasKey.methodPtr)(pSVar5,(MethodInfo *)"Name");
          if (bVar2) {
            d = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"Name");
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                               ((SimpleJSONFixed_JSONNode_o *)d,(MethodInfo *)0x0);
            if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_182352683;
            System_Collections_Generic_HashSet_object___Add
                      ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)pSVar8,
                       (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          }
          bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_178,(MethodInfo *)0x0);
        } while (bVar2);
      }
      bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_128,(MethodInfo *)0x0);
    } while (bVar2);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor_94fb10
            ((System_Collections_Generic_List_object__o *)__this_00,
             (System_Collections_Generic_IEnumerable_T__o *)__this,
             (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
  return __this_00;
}


// ApplicationManagers.MusicManager$$PlaySoundOneShot
// il2cpp: void ApplicationManagers_MusicManager__PlaySoundOneShot (UnityEngine_AudioSource_o* source, const MethodInfo* method);
// 0x182353810

void ApplicationManagers_MusicManager__PlaySoundOneShot(UnityEngine_AudioSource_o *source,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *target;
  UnityEngine_AudioClip_o *clip;
  
  if (Il2CppMethodInitialized_1843479aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843479aa = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (source == (UnityEngine_AudioSource_o *)0x0) {
      ThrowNullReferenceException();
    }
    target = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
    clip = UnityEngine_AudioSource__get_clip(source,(MethodInfo *)0x0);
    UnityEngine_AudioSource__PlayOneShot(source,clip,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.MusicManager$$.ctor
// il2cpp: void ApplicationManagers_MusicManager___ctor (ApplicationManagers_MusicManager_o* __this, const MethodInfo* method);
// 0x182354ec0

void ApplicationManagers_MusicManager___ctor(ApplicationManagers_MusicManager_o *__this,MethodInfo *method)

{
  System_String_o *value;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_1843479ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_1843479ab = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._customPlaylist = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._customPlaylist,__this_00);
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._lastSongBeforeGrabbed = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastSongBeforeGrabbed,value);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


