// Type: ApplicationManagers.MusicManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/MusicManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/MusicManager.cs
// --------------------------------

// ApplicationManagers.MusicManager.<FadeNextSong>d__46$$.ctor
// il2cpp: void ApplicationManagers_MusicManager__FadeNextSong_d__46___ctor (ApplicationManagers_MusicManager__FadeNextSong_d__46_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44bc6a0

void ApplicationManagers_MusicManager__FadeNextSong_d__46___ctor
               (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__46$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_MusicManager__FadeNextSong_d__46__System_IDisposable_Dispose (ApplicationManagers_MusicManager__FadeNextSong_d__46_o* __this, const MethodInfo* method);
// 0x44bd6c0

void ApplicationManagers_MusicManager__FadeNextSong_d__46__System_IDisposable_Dispose
               (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__46$$MoveNext
// il2cpp: bool ApplicationManagers_MusicManager__FadeNextSong_d__46__MoveNext (ApplicationManagers_MusicManager__FadeNextSong_d__46_o* __this, const MethodInfo* method);
// 0x44bd6d0

bool_conflict
ApplicationManagers_MusicManager__FadeNextSong_d__46__MoveNext
          (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *__this,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  ApplicationManagers_MusicManager_o *pAVar3;
  UnityEngine_AudioSource_o *pUVar4;
  UnityEngine_AudioClip_o *pUVar5;
  long lVar6;
  bool_conflict bVar7;
  UnityEngine_WaitForSeconds_o *__this_00;
  ApplicationManagers_MusicManager__FadeNextSong_d__46_o *__this_01;
  float fVar8;
  float fVar9;
  float fVar10;
  
  __this_01 = __this;
  if (g_data_057aea77 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicPlaylist);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    __this_01 = (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *)&TypeInfo_WaitForSeconds;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea77 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  pAVar3 = (__this->fields).__4__this;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    fVar8 = (__this->fields)._fadeTimeLeft_5__4;
  }
  else {
    if (iVar2 == 1) {
      (__this->fields).__1__state = -1;
      fVar8 = (__this->fields)._fadeTimeLeft_5__4;
joined_r0x044bd8a6:
      if (0.0 < fVar8) {
        if (pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) goto label_044bdc30;
        pUVar4 = (pAVar3->fields)._audio;
        __this_01 = (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *)0x0;
        if (pUVar4 == (UnityEngine_AudioSource_o *)0x0) goto label_044bdc30;
        UnityEngine_AudioSource__set_volume
                  (pUVar4,(fVar8 / (__this->fields)._fadeOutTime_5__3) * (pAVar3->fields)._songVolume,
                   (MethodInfo *)0x0);
        (__this->fields)._fadeTimeLeft_5__4 = (__this->fields)._fadeTimeLeft_5__4 + -0.1;
        __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(__this_00,0.1,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)__this_00;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_00);
        (__this->fields).__1__state = 1;
        goto label_044bdc20;
      }
      if (pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) goto label_044bdc30;
      pUVar4 = (pAVar3->fields)._audio;
      __this_01 = (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *)0x0;
      if (pUVar4 == (UnityEngine_AudioSource_o *)0x0) goto label_044bdc30;
      UnityEngine_AudioSource__Stop_4daa470(pUVar4,(MethodInfo *)0x0);
    }
    else {
      if (iVar2 != 0) {
        return 0;
      }
      (__this->fields).__1__state = -1;
      (__this->fields)._fadeInTime_5__2 = 5.0;
      (__this->fields)._fadeOutTime_5__3 = 1.0;
      if (**(long **)(TypeInfo_MusicManager + 0xb8) == 0) goto label_044bdc30;
      __this_01 = *(ApplicationManagers_MusicManager__FadeNextSong_d__46_o **)
                   (**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
      if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = System_String__op_Equality
                        ((System_String_o *)__this_01,
                         *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20),(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        (__this->fields)._fadeInTime_5__2 = 1.0;
      }
      if (pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) goto label_044bdc30;
      *(undefined1 *)((long)&(pAVar3->fields)._autoPlay + 1) = 1;
      (__this->fields)._fadeTimeLeft_5__4 = (__this->fields)._fadeOutTime_5__3;
      pUVar4 = (pAVar3->fields)._audio;
      __this_01 = (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *)0x0;
      if (pUVar4 == (UnityEngine_AudioSource_o *)0x0) goto label_044bdc30;
      bVar7 = UnityEngine_AudioSource__get_isPlaying(pUVar4,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        __this_01 = (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *)(pAVar3->fields)._audio;
        if (__this_01 == (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *)0x0) goto label_044bdc30;
        fVar8 = UnityEngine_AudioSource__get_volume((UnityEngine_AudioSource_o *)__this_01,(MethodInfo *)0x0);
        (pAVar3->fields)._songVolume = fVar8;
        fVar8 = (__this->fields)._fadeTimeLeft_5__4;
        goto joined_r0x044bd8a6;
      }
    }
    pUVar5 = (__this->fields).nextClip;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      (pAVar3->fields)._songTimeLeft = 0.0;
      *(undefined1 *)&(pAVar3->fields)._autoPlay = 1;
      return 0;
    }
    pUVar4 = (pAVar3->fields)._audio;
    __this_01 = (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *)0x0;
    if (pUVar4 == (UnityEngine_AudioSource_o *)0x0) goto label_044bdc30;
    UnityEngine_AudioSource__set_clip(pUVar4,(__this->fields).nextClip,(MethodInfo *)0x0);
    pUVar4 = (pAVar3->fields)._audio;
    __this_01 = (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *)0x0;
    if (pUVar4 == (UnityEngine_AudioSource_o *)0x0) goto label_044bdc30;
    UnityEngine_AudioSource__set_volume(pUVar4,0.0,(MethodInfo *)0x0);
    pUVar5 = (__this->fields).nextClip;
    __this_01 = (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *)0x0;
    if (pUVar5 == (UnityEngine_AudioClip_o *)0x0) goto label_044bdc30;
    fVar8 = UnityEngine_AudioClip__get_length(pUVar5,(MethodInfo *)0x0);
    (pAVar3->fields)._songTimeLeft = fVar8 - (__this->fields)._fadeOutTime_5__3;
    fVar8 = (__this->fields).startTime;
    if (0.0 < fVar8) {
      __this_01 = (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *)(__this->fields).nextClip;
      if (__this_01 == (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *)0x0) goto label_044bdc30;
      pUVar4 = (pAVar3->fields)._audio;
      fVar9 = UnityEngine_AudioClip__get_length((UnityEngine_AudioClip_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_AudioSource_o *)0x0) goto label_044bdc30;
      if (fVar9 + -0.1 <= fVar8) {
        fVar8 = fVar9 + -0.1;
      }
      UnityEngine_AudioSource__set_time(pUVar4,fVar8,(MethodInfo *)0x0);
      (pAVar3->fields)._songTimeLeft = (pAVar3->fields)._songTimeLeft - (__this->fields).startTime;
    }
    __this_01 = (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *)(pAVar3->fields)._audio;
    if (__this_01 == (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *)0x0) goto label_044bdc30;
    UnityEngine_AudioSource__Play_4daa2c0((UnityEngine_AudioSource_o *)__this_01,(MethodInfo *)0x0);
    (pAVar3->fields)._songVolume = (__this->fields).volume;
    *(undefined1 *)&(pAVar3->fields)._autoPlay = 1;
    fVar8 = (__this->fields)._fadeInTime_5__2;
    (__this->fields)._fadeTimeLeft_5__4 = fVar8;
  }
  if (fVar8 <= 0.0) {
    if (pAVar3 != (ApplicationManagers_MusicManager_o *)0x0) {
      pUVar4 = (pAVar3->fields)._audio;
      fVar8 = (pAVar3->fields)._songVolume;
      if (g_data_057aea72 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        __this_01 = (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *)&MethodInfo_Single_get_Value;
        il2cpp_runtime_helper_023445d0();
        g_data_057aea72 = '\x01';
      }
      fVar9 = 0.0;
      if (*(char *)(*(long *)(TypeInfo_MusicManager + 0xb8) + 0x10) == '\0') {
        lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x28), lVar6 == 0)) goto label_044bdc30;
        fVar9 = *(float *)(lVar6 + 0x14) * 0.4;
      }
      if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
        UnityEngine_AudioSource__set_volume(pUVar4,fVar8 * fVar9,(MethodInfo *)0x0);
        *(undefined1 *)((long)&(pAVar3->fields)._autoPlay + 1) = 0;
        return 0;
      }
    }
  }
  else if (pAVar3 != (ApplicationManagers_MusicManager_o *)0x0) {
    fVar9 = (__this->fields)._fadeInTime_5__2;
    pUVar4 = (pAVar3->fields)._audio;
    fVar1 = (pAVar3->fields)._songVolume;
    if (g_data_057aea72 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      __this_01 = (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *)&MethodInfo_Single_get_Value;
      il2cpp_runtime_helper_023445d0();
      g_data_057aea72 = '\x01';
    }
    fVar10 = 0.0;
    if (*(char *)(*(long *)(TypeInfo_MusicManager + 0xb8) + 0x10) == '\0') {
      lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
      if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x28), lVar6 == 0)) goto label_044bdc30;
      fVar10 = *(float *)(lVar6 + 0x14) * 0.4;
    }
    if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__set_volume(pUVar4,(1.0 - fVar8 / fVar9) * fVar1 * fVar10,(MethodInfo *)0x0);
      (__this->fields)._fadeTimeLeft_5__4 = (__this->fields)._fadeTimeLeft_5__4 + -0.1;
      __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_00,0.1,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_00;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_00);
      (__this->fields).__1__state = 2;
label_044bdc20:
      return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
    }
  }
label_044bdc30:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(UnityEngine_AudioClip_PCMReaderCallback_o *)(__this_01->fields).__2__current;
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__46$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_MusicManager__FadeNextSong_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_MusicManager__FadeNextSong_d__46_o* __this, const MethodInfo* method);
// 0x44bdc40

Il2CppObject *
ApplicationManagers_MusicManager__FadeNextSong_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__46$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_MusicManager__FadeNextSong_d__46__System_Collections_IEnumerator_Reset (ApplicationManagers_MusicManager__FadeNextSong_d__46_o* __this, const MethodInfo* method);
// 0x44bdc50

void ApplicationManagers_MusicManager__FadeNextSong_d__46__System_Collections_IEnumerator_Reset
               (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__46$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_MusicManager__FadeNextSong_d__46__System_Collections_IEnumerator_get_Current (ApplicationManagers_MusicManager__FadeNextSong_d__46_o* __this, const MethodInfo* method);
// 0x44bdc90

Il2CppObject *
ApplicationManagers_MusicManager__FadeNextSong_d__46__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__41$$.ctor
// il2cpp: void ApplicationManagers_MusicManager__StartSoundEffect_d__41___ctor (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44bc250

void ApplicationManagers_MusicManager__StartSoundEffect_d__41___ctor
               (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__41$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_MusicManager__StartSoundEffect_d__41__System_IDisposable_Dispose (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o* __this, const MethodInfo* method);
// 0x44bdca0

void ApplicationManagers_MusicManager__StartSoundEffect_d__41__System_IDisposable_Dispose
               (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__41$$MoveNext
// il2cpp: bool ApplicationManagers_MusicManager__StartSoundEffect_d__41__MoveNext (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o* __this, const MethodInfo* method);
// 0x44bdcb0

bool_conflict
ApplicationManagers_MusicManager__StartSoundEffect_d__41__MoveNext
          (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_MusicManager_o *pAVar2;
  UnityEngine_AudioSource_o *pUVar3;
  UnityEngine_AudioClip_o *__this_00;
  bool_conflict bVar4;
  UnityEngine_WaitForSeconds_o *__this_01;
  undefined8 uVar5;
  int32_t iVar6;
  ApplicationManagers_MusicManager__StartSoundEffect_d__41_o *pAVar7;
  float seconds;
  
  pAVar7 = __this;
  if (g_data_057aea78 == '\0') {
    pAVar7 = (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o *)&TypeInfo_WaitForSeconds;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea78 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  bVar4 = 0;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    pAVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
      pUVar3 = (pAVar2->fields)._soundEffect;
      pAVar7 = (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o *)0x0;
      if (pUVar3 != (UnityEngine_AudioSource_o *)0x0) {
        UnityEngine_AudioSource__set_volume(pUVar3,(__this->fields).volume,(MethodInfo *)0x0);
        pUVar3 = (pAVar2->fields)._soundEffect;
        pAVar7 = (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o *)0x0;
        if (pUVar3 != (UnityEngine_AudioSource_o *)0x0) {
          UnityEngine_AudioSource__PlayOneShot(pUVar3,(__this->fields).clip,(MethodInfo *)0x0);
          __this_00 = (__this->fields).clip;
          pAVar7 = (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o *)0x0;
          if (__this_00 != (UnityEngine_AudioClip_o *)0x0) {
            seconds = UnityEngine_AudioClip__get_length(__this_00,(MethodInfo *)0x0);
            __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
            UnityEngine_WaitForSeconds___ctor(__this_01,seconds,(MethodInfo *)0x0);
            (__this->fields).__2__current = (Il2CppObject *)__this_01;
            uVar5 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
            bVar4 = (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
            iVar6 = 1;
            goto label_044bdd80;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)(pAVar7->fields).__2__current;
  }
  iVar6 = -1;
label_044bdd80:
  (__this->fields).__1__state = iVar6;
  return bVar4;
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__41$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_MusicManager__StartSoundEffect_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o* __this, const MethodInfo* method);
// 0x44bdd90

Il2CppObject *
ApplicationManagers_MusicManager__StartSoundEffect_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__41$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_MusicManager__StartSoundEffect_d__41__System_Collections_IEnumerator_Reset (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o* __this, const MethodInfo* method);
// 0x44bdda0

void ApplicationManagers_MusicManager__StartSoundEffect_d__41__System_Collections_IEnumerator_Reset
               (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__41$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_MusicManager__StartSoundEffect_d__41__System_Collections_IEnumerator_get_Current (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o* __this, const MethodInfo* method);
// 0x44bdde0

Il2CppObject *
ApplicationManagers_MusicManager__StartSoundEffect_d__41__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.MusicManager$$Init
// il2cpp: void ApplicationManagers_MusicManager__Init (const MethodInfo* method);
// 0x44ba4a0

void ApplicationManagers_MusicManager__Init(MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  long lVar1;
  Il2CppObject *pIVar2;
  System_String_Fields value;
  UnityEngine_GameObject_o *pUVar3;
  System_String_Fields method_00;
  System_String_Fields SVar4;
  System_String_Fields p;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  int iVar7;
  
  if (g_data_057aea5e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_AddComponent_AudioSource);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MusicManager_CreateSingleton_MusicManager);
    il2cpp_runtime_helper_023445d0(&"SoundEffect");
    il2cpp_runtime_helper_023445d0(&"MusicInfo");
    g_data_057aea5e = '\x01';
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8),MethodInfo_MusicManager_CreateSingleton_MusicManager);
  **(undefined8 **)(TypeInfo_MusicManager + 0xb8) = pIVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MusicManager + 0xb8));
  value = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_OnLoadScene);
  Events_OnLoadScene___ctor();
  method_00._stringLength = 0;
  method_00._firstChar = 0;
  method_00._6_2_ = 0;
  Events_EventManager__add_OnLoadScene((Events_OnLoadScene_o *)value,(MethodInfo *)0x0);
  SVar4 = **(System_String_Fields **)(TypeInfo_MusicManager + 0xb8);
  if (SVar4 != (System_String_Fields)0x0) {
    method_00._stringLength = 0;
    method_00._firstChar = 0;
    method_00._6_2_ = 0;
    value = SVar4;
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SVar4,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      method_00 = (System_String_Fields)UnityEngine_GameObject__AddComponent_object_(pUVar3,MethodInfo_AudioSource_AddComponent_AudioSource);
      *(System_String_Fields *)((long)SVar4 + 0x28) = method_00;
      value = (System_String_Fields)((long)SVar4 + 0x28);
      il2cpp_runtime_helper_022b4080();
      if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
         (__this = *(UnityEngine_AudioSource_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x28),
         value._stringLength = 0, value._firstChar = 0, value._6_2_ = 0,
         __this != (UnityEngine_AudioSource_o *)0x0)) {
        UnityEngine_AudioSource__set_ignoreListenerVolume(__this,1,(MethodInfo *)0x0);
        lVar1 = **(long **)(TypeInfo_MusicManager + 0xb8);
        SVar4 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        method_00 = "SoundEffect";
        value = SVar4;
        UnityEngine_GameObject___ctor
                  ((UnityEngine_GameObject_o *)SVar4,(System_String_o *)"SoundEffect",(MethodInfo *)0x0);
        if (lVar1 != 0) {
          *(System_String_Fields *)(lVar1 + 0x30) = SVar4;
          value = (System_String_Fields)(lVar1 + 0x30);
          il2cpp_runtime_helper_022b4080();
          method_00 = SVar4;
          if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
             (pUVar3 = *(UnityEngine_GameObject_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x30),
             value._stringLength = 0, value._firstChar = 0, value._6_2_ = 0,
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            method_00._stringLength = 0;
            method_00._firstChar = 0;
            method_00._6_2_ = 0;
            SVar4 = (System_String_Fields)UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
            value = **(System_String_Fields **)(TypeInfo_MusicManager + 0xb8);
            if (value != (System_String_Fields)0x0) {
              method_00._stringLength = 0;
              method_00._firstChar = 0;
              method_00._6_2_ = 0;
              p = (System_String_Fields)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)value,(MethodInfo *)0x0);
              if (SVar4 != (System_String_Fields)0x0) {
                UnityEngine_Transform__SetParent
                          ((UnityEngine_Transform_o *)SVar4,(UnityEngine_Transform_o *)p,(MethodInfo *)0x0);
                lVar1 = **(long **)(TypeInfo_MusicManager + 0xb8);
                method_00 = p;
                value = SVar4;
                if ((lVar1 != 0) &&
                   (value._stringLength = 0, value._firstChar = 0, value._6_2_ = 0,
                   *(UnityEngine_GameObject_o **)(lVar1 + 0x30) != (UnityEngine_GameObject_o *)0x0)) {
                  pIVar2 = UnityEngine_GameObject__AddComponent_object_
                                     (*(UnityEngine_GameObject_o **)(lVar1 + 0x30),MethodInfo_AudioSource_AddComponent_AudioSource);
                  *(Il2CppObject **)(lVar1 + 0x38) = pIVar2;
                  il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pIVar2);
                  method_01 = extraout_RDX;
                  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    method_01 = extraout_RDX_00;
                  }
                  pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
                  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    method_01 = extraout_RDX_01;
                  }
                  pSVar5 = ApplicationManagers_ResourceManager__TryLoadText(pSVar5,"MusicInfo",method_01);
                  pSVar6 = SimpleJSONFixed_JSON__Parse(pSVar5,(MethodInfo *)0x0);
                  lVar1 = *(long *)(TypeInfo_MusicManager + 0xb8);
                  *(SimpleJSONFixed_JSONNode_o **)(lVar1 + 8) = pSVar6;
                  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar6);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  iVar7 = value._stringLength;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea5f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicPlaylist);
    g_data_057aea5f = '\x01';
  }
  if (4 < iVar7 - 3U) {
    if (iVar7 == 2) {
      if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_MusicManager__SetPlaylist
                (*(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 8),(MethodInfo *)method_00);
      return;
    }
    if (iVar7 != 1) {
      return;
    }
  }
  if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_MusicManager__SetPlaylist
            ((System_String_o *)**(undefined8 **)(TypeInfo_MusicPlaylist + 0xb8),(MethodInfo *)method_00);
  return;
}


// ApplicationManagers.MusicManager$$OnLoadScene
// il2cpp: void ApplicationManagers_MusicManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x44ba7a0

void ApplicationManagers_MusicManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  if (g_data_057aea5f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicPlaylist);
    g_data_057aea5f = '\x01';
  }
  if (4 < sceneName - 3U) {
    if (sceneName == 2) {
      if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_MusicManager__SetPlaylist
                (*(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 8),method);
      return;
    }
    if (sceneName != 1) {
      return;
    }
  }
  if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_MusicManager__SetPlaylist
            ((System_String_o *)**(undefined8 **)(TypeInfo_MusicPlaylist + 0xb8),method);
  return;
}


// ApplicationManagers.MusicManager$$ApplySoundSettings
// il2cpp: void ApplicationManagers_MusicManager__ApplySoundSettings (const MethodInfo* method);
// 0x44b78d0

void ApplicationManagers_MusicManager__ApplySoundSettings(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Object_o *pUVar2;
  long lVar3;
  UnityEngine_AudioSource_o *__this;
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  long *plVar5;
  MethodInfo *method_00;
  float fVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  GameManagers_PhotonVoiceSync_o *pGVar10;
  GameManagers_PhotonVoiceSync_o *__this_04;
  
  if (g_data_057aea60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicPlaylist);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aea60 = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  plVar5 = *(long **)(TypeInfo_MusicManager + 0xb8);
  lVar3 = *plVar5;
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x49) == '\0') {
      __this = *(UnityEngine_AudioSource_o **)(lVar3 + 0x28);
      fVar1 = *(float *)(lVar3 + 0x44);
      if (g_data_057aea72 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
        g_data_057aea72 = '\x01';
        plVar5 = *(long **)(TypeInfo_MusicManager + 0xb8);
      }
      fVar6 = 0.0;
      if ((char)plVar5[2] == '\0') {
        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x28), lVar3 == 0)) goto label_044b7ad2;
        fVar6 = *(float *)(lVar3 + 0x14) * 0.4;
      }
      if (__this == (UnityEngine_AudioSource_o *)0x0) goto label_044b7ad2;
      UnityEngine_AudioSource__set_volume(__this,fVar1 * fVar6,(MethodInfo *)0x0);
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x98), lVar3 != 0)) {
      a = *(System_String_o **)(lVar3 + 0x18);
      if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = *(MethodInfo **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 8);
      bVar4 = System_String__op_Inequality(a,(System_String_o *)method_00,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return;
      }
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x98), lVar3 != 0)) {
        ApplicationManagers_MusicManager__SetPlaylist(*(System_String_o **)(lVar3 + 0x18),method_00);
        return;
      }
    }
  }
label_044b7ad2:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeaa1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonVoiceSync_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameManagers_PhotonVoiceSync_GetEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057aeaa1 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  pGVar10 = (GameManagers_PhotonVoiceSync_o *)0x0;
  pUVar2 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar4 == '\0') &&
     (plVar5 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10), plVar5 != (long *)0x0)) {
    if ((*(byte *)(TypeInfo_InGameManager + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) == TypeInfo_InGameManager)
       ) {
      if ((System_Collections_Generic_List_object__o *)plVar5[0xb] ==
          (System_Collections_Generic_List_object__o *)0x0) {
label_044b7c8a:
        auVar7 = il2cpp_runtime_helper_022b2c90();
        if (auVar7._8_4_ == 1) {
          plVar5 = (long *)__cxa_begin_catch(auVar7._0_8_);
          lVar3 = *plVar5;
          __cxa_end_catch();
          __this_02.fields._8_8_ = pIVar9;
          __this_02.fields._list = pSVar8;
          __this_02.fields._current = (Il2CppObject *)pGVar10;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
          if (lVar3 == 0) {
            return;
          }
          il2cpp_runtime_helper_022fefe0(lVar3);
        }
        __this_03.fields._8_8_ = pIVar9;
        __this_03.fields._list = pSVar8;
        __this_03.fields._current = (Il2CppObject *)pGVar10;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
        _Unwind_Resume(auVar7._0_8_);
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,
                 (System_Collections_Generic_List_object__o *)plVar5[0xb],MethodInfo_List_1_T_Enumerator_GameManagers_PhotonVoiceSync_GetEnum);
      while (__this_04 = pGVar10, __this_00.fields._8_8_ = pIVar9, __this_00.fields._list = pSVar8,
            __this_00.fields._current = (Il2CppObject *)__this_04,
            bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0), (char)bVar4 != '\0')
      {
        pGVar10 = __this_04;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (__this_04 == (GameManagers_PhotonVoiceSync_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_044b7c8a;
          }
          GameManagers_PhotonVoiceSync__Apply(__this_04,(MethodInfo *)0x0);
        }
      }
      __this_01.fields._8_8_ = pIVar9;
      __this_01.fields._list = pSVar8;
      __this_01.fields._current = (Il2CppObject *)__this_04;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
    }
  }
  return;
}


// ApplicationManagers.MusicManager$$PlayDeathSong
// il2cpp: void ApplicationManagers_MusicManager__PlayDeathSong (const MethodInfo* method);
// 0x44baae0

void ApplicationManagers_MusicManager__PlayDeathSong(MethodInfo *method)

{
  int iVar1;
  System_String_c *pSVar2;
  char *pcVar3;
  code *pcVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_AudioSource_o *pUVar6;
  void *pvVar7;
  GameManagers_InGameManager_c *pGVar8;
  UnityEngine_MonoBehaviour_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  char cVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  uint uVar13;
  Il2CppClass *pIVar14;
  Il2CppClass *pIVar15;
  SimpleJSONFixed_JSONNode_o *pSVar16;
  System_String_o *pSVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  Il2CppObject *pIVar21;
  long lVar22;
  SimpleJSONFixed_JSONNode_o *pSVar23;
  Il2CppClass *pIVar24;
  Il2CppClass *pIVar25;
  Il2CppClass *pIVar26;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UnityEngine_Object_o *value;
  Il2CppObject *__this_02;
  SimpleJSONFixed_JSONNode_c *method_00;
  UnityEngine_Object_c *pUVar27;
  long *unaff_RBX;
  long *plVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined8 unaff_RBP;
  MethodInfo *pMVar31;
  Il2CppClass *pIVar32;
  byte bVar33;
  long *unaff_R12;
  undefined8 unaff_R13;
  Il2CppClass *unaff_R14;
  ulong uVar34;
  long *unaff_R15;
  float fVar35;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar36;
  undefined1 auVar37 [16];
  
  puVar30 = &stack0xfffffffffffffff8;
  if (g_data_057aea61 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    method = (MethodInfo *)&"Death";
    il2cpp_runtime_helper_023445d0();
    g_data_057aea61 = '\x01';
  }
  plVar28 = &TypeInfo_MusicManager;
  method_00 = (SimpleJSONFixed_JSONNode_c *)**(long **)(TypeInfo_MusicManager + 0xb8);
  if (method_00 == (SimpleJSONFixed_JSONNode_c *)0x0) {
label_044bab83:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(char *)&(method_00->_1).generic_class == '\0') {
      return;
    }
    method = (MethodInfo *)(*(long **)(TypeInfo_MusicManager + 0xb8))[1];
    if (((Il2CppClass *)method == (Il2CppClass *)0x0) ||
       (pSVar2 = (((Il2CppClass *)method)->_1).image,
       pIVar14 = (Il2CppClass *)
                 (*(pSVar2->vtable)._7_CompareTo.methodPtr)
                           (method,"Death",(pSVar2->vtable)._7_CompareTo.method),
       pIVar14 == (Il2CppClass *)0x0)) goto label_044bab83;
    pSVar2 = (pIVar14->_1).image;
    pIVar15 = (Il2CppClass *)
              (*(pSVar2->vtable)._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)
                        (pIVar14,0,(pSVar2->vtable)._5_System_Collections_IEnumerable_GetEnumerator.method);
    method_00 = (SimpleJSONFixed_JSONNode_c *)**(long **)(TypeInfo_MusicManager + 0xb8);
    method = (MethodInfo *)pIVar14;
    if (method_00 == (SimpleJSONFixed_JSONNode_c *)0x0) goto label_044bab83;
    *(undefined1 *)&(method_00->_1).typeMetadataHandle = 0;
    plVar28 = unaff_RBX;
    puVar30 = (undefined1 *)register0x00000020;
    method = (MethodInfo *)pIVar15;
  }
ApplicationManagers_MusicManager__PlayImmediateTransition:
  *(long **)(puVar30 + -8) = unaff_R15;
  *(Il2CppClass **)(puVar30 + -0x10) = unaff_R14;
  *(long **)(puVar30 + -0x18) = plVar28;
  if (g_data_057aea69 == '\0') {
    *(undefined8 *)(puVar30 + -0x30) = 0x44babb1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)(puVar30 + -0x30) = 0x44babbd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar30 + -0x30) = 0x44babc9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar30 + -0x30) = 0x44babd5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar30 + -0x30) = 0x44babe1;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)(puVar30 + -0x30) = 0x44babed;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)(puVar30 + -0x30) = 0x44babf9;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea69 = '\x01';
  }
  plVar28 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)(puVar30 + -0x30) = 0x44bac18;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar30 + -0x30) = 0x44bac24;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)method,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  pIVar14 = unaff_R14;
  if ((Il2CppClass *)method == (Il2CppClass *)0x0) {
label_044bae61:
    *(undefined8 *)(puVar30 + -0x30) = 0x44bae66;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar2 = (((Il2CppClass *)method)->_1).image;
    pcVar3 = pSVar2[1]._1.namespaze;
    pcVar4 = (code *)pSVar2[1]._1.name;
    *(undefined8 *)(puVar30 + -0x30) = 0x44bac52;
    cVar10 = (*pcVar4)(method,"Name",pcVar3);
    if (cVar10 == '\0') {
      return;
    }
    pSVar2 = (((Il2CppClass *)method)->_1).image;
    pMVar31 = (pSVar2->vtable)._7_CompareTo.method;
    pIVar5 = (pSVar2->vtable)._7_CompareTo.methodPtr;
    *(undefined8 *)(puVar30 + -0x30) = 0x44bac70;
    pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(method,"Name",pMVar31);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar30 + -0x30) = 0x44bac84;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar30 + -0x30) = 0x44bac8e;
    pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar30 + -0x30) = 0x44baca9;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar30 + -0x30) = 0x44bacbd;
    pIVar14 = (Il2CppClass *)
              ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar17,0,(MethodInfo *)method_00);
    if ((pIVar14 == (Il2CppClass *)0x0) || ((pIVar14->_1).image == TypeInfo_AudioClip)) {
      pSVar2 = (((Il2CppClass *)method)->_1).image;
      pMVar31 = (pSVar2->vtable)._7_CompareTo.method;
      pIVar5 = (pSVar2->vtable)._7_CompareTo.methodPtr;
      *(undefined8 *)(puVar30 + -0x30) = 0x44bacf5;
      pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(method,"Volume",pMVar31);
      *(undefined8 *)(puVar30 + -0x30) = 0x44bacff;
      fVar35 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar16,(MethodInfo *)0x0);
      plVar28 = &TypeInfo_MusicManager;
      lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
      if (lVar22 != 0) {
        *(float *)(puVar30 + -0x1c) = fVar35;
        pUVar6 = *(UnityEngine_AudioSource_o **)(lVar22 + 0x28);
        if (pUVar6 != (UnityEngine_AudioSource_o *)0x0) {
          *(undefined8 *)(puVar30 + -0x30) = 0x44bad39;
          UnityEngine_AudioSource__set_clip(pUVar6,(UnityEngine_AudioClip_o *)pIVar14,(MethodInfo *)0x0);
          plVar19 = *(long **)(TypeInfo_MusicManager + 0xb8);
          method_00 = (SimpleJSONFixed_JSONNode_c *)*plVar19;
          if (method_00 != (SimpleJSONFixed_JSONNode_c *)0x0) {
            method = *(MethodInfo **)&(method_00->_1).byval_arg.bits;
            if (g_data_057aea72 == '\0') {
              *(undefined8 *)(puVar30 + -0x30) = 0x44bad64;
              il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
              *(undefined8 *)(puVar30 + -0x30) = 0x44bad70;
              il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
              *(undefined8 *)(puVar30 + -0x30) = 0x44bad7c;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
              g_data_057aea72 = '\x01';
              plVar19 = *(long **)(TypeInfo_MusicManager + 0xb8);
            }
            fVar35 = 0.0;
            if ((char)plVar19[2] == '\0') {
              lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
              if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x28), lVar22 == 0)) goto label_044bae61;
              fVar35 = *(float *)(lVar22 + 0x14) * 0.4;
            }
            if ((Il2CppClass *)method != (Il2CppClass *)0x0) {
              *(undefined8 *)(puVar30 + -0x30) = 0x44badee;
              UnityEngine_AudioSource__set_volume
                        ((UnityEngine_AudioSource_o *)method,*(float *)(puVar30 + -0x1c) * fVar35,
                         (MethodInfo *)0x0);
              if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
                 (pUVar6 = *(UnityEngine_AudioSource_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x28),
                 pUVar6 != (UnityEngine_AudioSource_o *)0x0)) {
                *(undefined8 *)(puVar30 + -0x30) = 0x44bae10;
                UnityEngine_AudioSource__Play_4daa2c0(pUVar6,(MethodInfo *)0x0);
                if (pIVar14 != (Il2CppClass *)0x0) {
                  lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
                  *(undefined8 *)(puVar30 + -0x30) = 0x44bae2c;
                  fVar35 = UnityEngine_AudioClip__get_length
                                     ((UnityEngine_AudioClip_o *)pIVar14,(MethodInfo *)0x0);
                  method = (MethodInfo *)0x0;
                  if (lVar22 != 0) {
                    *(float *)(lVar22 + 0x40) = fVar35;
                    lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
                    *(undefined8 *)(puVar30 + -0x30) = 0x44bae4d;
                    fVar35 = UnityEngine_AudioClip__get_length
                                       ((UnityEngine_AudioClip_o *)pIVar14,(MethodInfo *)0x0);
                    method = (MethodInfo *)0x0;
                    if (lVar22 != 0) {
                      *(float *)(lVar22 + 100) = fVar35;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_044bae61;
    }
  }
  *(undefined8 *)(puVar30 + -0x30) = 0x44bae6e;
  uVar18 = il2cpp_runtime_helper_022b2fd0(pIVar14);
  *(long **)(puVar30 + -0x30) = plVar28;
  *(Il2CppClass **)(puVar30 + -0x38) = pIVar14;
  *(long **)(puVar30 + -0x40) = unaff_R12;
  *(MethodInfo **)(puVar30 + -0x48) = method;
  *(undefined8 *)(puVar30 + -0x50) = uVar18;
  if (g_data_057aea62 == '\0') {
    *(undefined8 *)(puVar30 + -0x58) = 0x44bae8d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar30 + -0x58) = 0x44bae99;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicPlaylist);
    *(undefined8 *)(puVar30 + -0x58) = 0x44baea5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)(puVar30 + -0x58) = 0x44baeb1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)(puVar30 + -0x58) = 0x44baebd;
    il2cpp_runtime_helper_023445d0(&"Grabbed");
    g_data_057aea62 = '\x01';
  }
  lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x38), lVar22 != 0)) {
    if (*(char *)(lVar22 + 0x11) == '\0') {
      return;
    }
    plVar28 = &TypeInfo_MusicManager;
    plVar19 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
    if (plVar19 == (long *)0x0) goto label_044bb042;
    uVar18 = *(undefined8 *)(*plVar19 + 0x1b0);
    pcVar4 = *(code **)(*plVar19 + 0x1a8);
    *(undefined8 *)(puVar30 + -0x58) = 0x44baf34;
    plVar19 = (long *)(*pcVar4)(plVar19,"Grabbed",uVar18);
    if (plVar19 == (long *)0x0) goto label_044bb042;
    method_00 = (SimpleJSONFixed_JSONNode_c *)*plVar19;
    pMVar31 = (method_00->vtable)._5_get_Item.method;
    pIVar5 = (method_00->vtable)._5_get_Item.methodPtr;
    *(undefined8 *)(puVar30 + -0x58) = 0x44baf52;
    pIVar14 = (Il2CppClass *)(*pIVar5)(plVar19,0,pMVar31);
    lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
    if (lVar22 == 0) goto label_044bb042;
    *(undefined1 *)(lVar22 + 0x68) = 0;
    method = *(MethodInfo **)(lVar22 + 0x20);
    unaff_R12 = &TypeInfo_MusicPlaylist;
    if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
      *(undefined8 *)(puVar30 + -0x58) = 0x44baf8c;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar17 = *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
    *(undefined8 *)(puVar30 + -0x58) = 0x44bafa5;
    bVar11 = System_String__op_Equality((System_String_o *)method,pSVar17,(MethodInfo *)0x0);
    method_00 = *(SimpleJSONFixed_JSONNode_c **)(TypeInfo_MusicManager + 0xb8);
    pIVar5 = (method_00->_1).image;
    if ((char)bVar11 != '\0') {
      if (pIVar5 != (Il2CppMethodPointer)0x0) {
        *(undefined8 *)(pIVar5 + 0x70) = *(undefined8 *)(pIVar5 + 0x58);
        *(undefined8 *)(puVar30 + -0x58) = 0x44bafd0;
        il2cpp_runtime_helper_022b4080(pIVar5 + 0x70);
        method = (MethodInfo *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
        if (((Il2CppClass *)method != (Il2CppClass *)0x0) &&
           (pUVar6 = *(UnityEngine_AudioSource_o **)&(((Il2CppClass *)method)->_1).byval_arg.bits,
           pUVar6 != (UnityEngine_AudioSource_o *)0x0)) {
          *(undefined8 *)(puVar30 + -0x58) = 0x44baff2;
          fVar35 = UnityEngine_AudioSource__get_time(pUVar6,(MethodInfo *)0x0);
          *(float *)&(((Il2CppClass *)method)->_1).klass = fVar35;
          goto label_044bb02f;
        }
      }
      goto label_044bb042;
    }
    if (pIVar5 == (Il2CppMethodPointer)0x0) goto label_044bb042;
    *(undefined8 *)(pIVar5 + 0x70) = **(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)(puVar30 + -0x58) = 0x44bb02f;
    il2cpp_runtime_helper_022b4080(pIVar5 + 0x70);
label_044bb02f:
    plVar28 = *(long **)(puVar30 + -0x48);
    unaff_R12 = *(long **)(puVar30 + -0x40);
    unaff_R14 = *(Il2CppClass **)(puVar30 + -0x38);
    unaff_R15 = *(long **)(puVar30 + -0x30);
    puVar30 = puVar30 + -0x28;
    method = (MethodInfo *)pIVar14;
    goto ApplicationManagers_MusicManager__PlayImmediateTransition;
  }
label_044bb042:
  *(undefined8 *)(puVar30 + -0x58) = 0x44bb047;
  uVar18 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar30 + -0x58) = uVar18;
  if (g_data_057aea63 == '\0') {
    *(undefined8 *)(puVar30 + -0x60) = 0x44bb066;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    g_data_057aea63 = '\x01';
  }
  lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar22 != 0) {
    if (0.0 < *(float *)(lVar22 + 100)) {
      *(undefined4 *)(lVar22 + 100) = 0;
      *(undefined4 *)(lVar22 + 0x40) = 0;
      *(undefined1 *)(lVar22 + 0x7c) = 1;
    }
    return;
  }
  *(undefined8 *)(puVar30 + -0x60) = 0x44bb0ac;
  il2cpp_runtime_helper_022b2c90();
  puVar29 = puVar30 + -0x60;
  *(MethodInfo **)(puVar30 + -0x60) = method;
  if (g_data_057aea64 == '\0') {
    *(undefined8 *)(puVar30 + -0x68) = 0x44bb0c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar30 + -0x68) = 0x44bb0d2;
    il2cpp_runtime_helper_023445d0(&"Effect");
    g_data_057aea64 = '\x01';
  }
  plVar19 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if ((SimpleJSONFixed_JSONNode_o *)plVar19 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bb14e:
    *(undefined8 *)(puVar30 + -0x68) = 0x44bb153;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar31 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._7_get_Item.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar30 + -0x68) = 0x44bb10d;
    plVar20 = (long *)(*pIVar5)(plVar19,"Effect",pMVar31);
    if (plVar20 == (long *)0x0) goto label_044bb14e;
    uVar18 = *(undefined8 *)(*plVar20 + 0x1f0);
    pcVar4 = *(code **)(*plVar20 + 0x1e8);
    *(undefined8 *)(puVar30 + -0x68) = 0x44bb128;
    iVar12 = (*pcVar4)(plVar20,uVar18);
    *(undefined8 *)(puVar30 + -0x68) = 0x44bb133;
    uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
    method_00 = (SimpleJSONFixed_JSONNode_c *)*plVar20;
    pMVar31 = (method_00->vtable)._5_get_Item.method;
    pIVar5 = (method_00->vtable)._5_get_Item.methodPtr;
    *(undefined8 *)(puVar30 + -0x68) = 0x44bb148;
    plVar19 = (long *)(*pIVar5)(plVar20,(ulong)uVar13,pMVar31);
    method = *(MethodInfo **)(puVar30 + -0x60);
    puVar29 = puVar30 + -0x58;
  }
  *(long **)(puVar29 + -8) = plVar28;
  *(Il2CppClass **)(puVar29 + -0x10) = pIVar14;
  *(MethodInfo **)(puVar29 + -0x18) = method;
  puVar30 = puVar29 + -0x28;
  if (g_data_057aea68 == '\0') {
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb181;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb18d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb199;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1a5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1b1;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1bd;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1c9;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea68 = '\x01';
  }
  unaff_R15 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1e8;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar15 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar29 + -0x30) = 0x44bb1f4;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)plVar19,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  if ((SimpleJSONFixed_JSONNode_o *)plVar19 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bb384:
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb389;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar31 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._28_HasKey.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._28_HasKey.methodPtr;
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb222;
    cVar10 = (*pIVar5)(plVar19,"Name",pMVar31);
    if (cVar10 == '\0') {
      return;
    }
    pMVar31 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._7_get_Item.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb240;
    pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(plVar19,"Name",pMVar31);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0x30) = 0x44bb254;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb25e;
    pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0x30) = 0x44bb279;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb28d;
    pIVar14 = (Il2CppClass *)
              ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar17,0,(MethodInfo *)method_00);
    if ((pIVar14 == (Il2CppClass *)0x0) || (pIVar15 = TypeInfo_AudioClip, (pIVar14->_1).image == TypeInfo_AudioClip)) {
      pMVar31 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._7_get_Item.method;
      pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar29 + -0x30) = 0x44bb2c5;
      pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(plVar19,"Volume",pMVar31);
      pIVar15 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar29 + -0x30) = 0x44bb2cf;
      fVar35 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar16,(MethodInfo *)0x0);
      *(float *)(puVar29 + -0x1c) = fVar35;
      unaff_R15 = (long *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
      if ((Il2CppClass *)unaff_R15 != (Il2CppClass *)0x0) {
        if (g_data_057aea6a == '\0') {
          *(undefined8 *)(puVar29 + -0x30) = 0x44bb307;
          il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
          g_data_057aea6a = '\x01';
        }
        *(undefined8 *)(puVar29 + -0x30) = 0x44bb31d;
        pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
        pIVar15 = (Il2CppClass *)0x0;
        *(undefined8 *)(puVar29 + -0x30) = 0x44bb32a;
        System_Object___ctor(pIVar21,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar21[1].klass = 0;
        plVar19 = (long *)0x0;
        if (pIVar21 != (Il2CppObject *)0x0) {
          pIVar21[2].klass = (Il2CppClass *)unaff_R15;
          *(undefined8 *)(puVar29 + -0x30) = 0x44bb346;
          il2cpp_runtime_helper_022b4080(pIVar21 + 2,unaff_R15);
          pIVar21[3].klass = pIVar14;
          *(undefined8 *)(puVar29 + -0x30) = 0x44bb359;
          il2cpp_runtime_helper_022b4080(pIVar21 + 3,pIVar14);
          *(undefined4 *)&pIVar21[2].monitor = *(undefined4 *)(puVar29 + -0x1c);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)unaff_R15,(System_Collections_IEnumerator_o *)pIVar21,
                     (MethodInfo *)0x0);
          return;
        }
      }
      goto label_044bb384;
    }
  }
  *(undefined8 *)(puVar29 + -0x30) = 0x44bb391;
  uVar18 = il2cpp_runtime_helper_022b2fd0(pIVar14);
  *(Il2CppClass **)(puVar29 + -0x30) = pIVar14;
  *(long **)(puVar29 + -0x38) = plVar19;
  *(undefined8 *)(puVar29 + -0x40) = uVar18;
  if (g_data_057aea65 == '\0') {
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb3b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb3c5;
    il2cpp_runtime_helper_023445d0(&"Transition");
    g_data_057aea65 = '\x01';
  }
  plVar28 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if ((Il2CppClass *)plVar28 != (Il2CppClass *)0x0) {
    pvVar7 = (((Il2CppClass *)plVar28)->_1).image;
    uVar18 = *(undefined8 *)((long)pvVar7 + 0x1b0);
    pcVar4 = *(code **)((long)pvVar7 + 0x1a8);
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb400;
    pIVar15 = "Transition";
    plVar19 = (long *)(*pcVar4)(plVar28,"Transition",uVar18);
    if ((**(long **)(TypeInfo_MusicManager + 0xb8) == 0) ||
       (*(undefined2 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x68) = 0x101,
       (SimpleJSONFixed_JSONNode_o *)plVar19 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_044bb462;
    pMVar31 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._11_get_Count.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._11_get_Count.methodPtr;
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb433;
    iVar12 = (*pIVar5)(plVar19,pMVar31);
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb43e;
    uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
    method_00 = ((SimpleJSONFixed_JSONNode_o *)plVar19)->klass;
    pMVar31 = (method_00->vtable)._5_get_Item.method;
    pIVar5 = (method_00->vtable)._5_get_Item.methodPtr;
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb453;
    method = (MethodInfo *)(*pIVar5)(plVar19,(ulong)uVar13,pMVar31);
    plVar28 = *(long **)(puVar29 + -0x38);
    unaff_R14 = *(Il2CppClass **)(puVar29 + -0x30);
    goto ApplicationManagers_MusicManager__PlayImmediateTransition;
  }
label_044bb462:
  *(undefined8 *)(puVar29 + -0x48) = 0x44bb467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar29 + -0x48) = unaff_RBP;
  *(long **)(puVar29 + -0x50) = unaff_R15;
  *(long **)(puVar29 + -0x58) = &TypeInfo_MusicManager;
  *(long **)(puVar29 + -0x60) = unaff_R12;
  *(long **)(puVar29 + -0x68) = plVar19;
  pIVar14 = (Il2CppClass *)((ulong)pIVar15 & 0xffffffff);
  plVar20 = plVar28;
  if (g_data_057aea67 == '\0') {
    *(undefined8 *)(puVar29 + -0x70) = 0x44bb493;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    plVar20 = &TypeInfo_MusicPlaylist;
    *(undefined8 *)(puVar29 + -0x70) = 0x44bb49f;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea67 = '\x01';
  }
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    pSVar17 = *(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    *(undefined8 *)(puVar29 + -0x70) = 0x44bb4d1;
    pIVar15 = (Il2CppClass *)plVar28;
    uVar13 = System_String__op_Inequality(pSVar17,(System_String_o *)plVar28,(MethodInfo *)0x0);
    unaff_R12 = (long *)(ulong)uVar13;
    lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
    plVar20 = (long *)0x0;
    if (lVar22 != 0) {
      *(long **)(lVar22 + 0x20) = plVar28;
      plVar20 = (long *)(lVar22 + 0x20);
      *(undefined8 *)(puVar29 + -0x70) = 0x44bb4fa;
      pIVar15 = (Il2CppClass *)plVar28;
      il2cpp_runtime_helper_022b4080();
      lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
      if (lVar22 != 0) {
        cVar10 = *(char *)(lVar22 + 0x68);
        method_00 = (SimpleJSONFixed_JSONNode_c *)CONCAT71((int7)((ulong)method_00 >> 8),cVar10);
        if (*(char *)(lVar22 + 0x60) == '\0') {
          if (cVar10 != '\0') goto label_044bb52e;
          if (0.0 < *(float *)(lVar22 + 100)) {
            *(undefined4 *)(lVar22 + 0x40) = 0;
          }
label_044bb578:
          *(undefined4 *)(lVar22 + 100) = 0;
        }
        else {
          *(undefined4 *)(lVar22 + 0x40) = 0;
          if (cVar10 == '\0') goto label_044bb578;
label_044bb52e:
          plVar19 = &TypeInfo_MusicPlaylist;
          if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
            *(undefined8 *)(puVar29 + -0x70) = 0x44bb546;
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar15 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
          *(undefined8 *)(puVar29 + -0x70) = 0x44bb55e;
          plVar20 = plVar28;
          bVar11 = System_String__op_Equality
                             ((System_String_o *)plVar28,(System_String_o *)pIVar15,(MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
            if (lVar22 == 0) goto label_044bb684;
            goto label_044bb578;
          }
        }
        plVar19 = &TypeInfo_MusicPlaylist;
        if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
          *(undefined8 *)(puVar29 + -0x70) = 0x44bb597;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar15 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
        *(undefined8 *)(puVar29 + -0x70) = 0x44bb5af;
        plVar20 = plVar28;
        bVar11 = System_String__op_Equality
                           ((System_String_o *)plVar28,(System_String_o *)pIVar15,(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') goto label_044bb618;
        lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
        if (lVar22 == 0) goto label_044bb684;
        if (*(char *)(lVar22 + 0x7c) == '\0') {
label_044bb618:
          lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if (lVar22 == 0) goto label_044bb684;
          bVar33 = (byte)uVar13 | (byte)pIVar14;
          unaff_R12 = (long *)(ulong)CONCAT31((int3)(uVar13 >> 8),bVar33);
          if ((bVar33 == 1) && (*(float *)(lVar22 + 100) <= 0.0)) {
            *(undefined4 *)(lVar22 + 0x4c) = 0;
            *(undefined8 *)(puVar29 + -0x70) = 0x44bb648;
            ApplicationManagers_MusicManager__NextSong((MethodInfo *)plVar20);
          }
        }
        else {
          plVar20 = *(long **)(lVar22 + 0x70);
          pIVar15 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          *(undefined8 *)(puVar29 + -0x70) = 0x44bb5f2;
          bVar11 = System_String__op_Inequality
                             ((System_String_o *)plVar20,(System_String_o *)pIVar15,(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') goto label_044bb618;
          lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if (lVar22 == 0) goto label_044bb684;
          plVar20 = *(long **)(lVar22 + 0x70);
          fVar35 = *(float *)(lVar22 + 0x78);
          *(undefined8 *)(puVar29 + -0x70) = 0x44bb616;
          ApplicationManagers_MusicManager__SetSong((System_String_o *)plVar20,fVar35,(MethodInfo *)pIVar15);
        }
        if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
          *(undefined1 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x7c) = 0;
          return;
        }
      }
    }
  }
label_044bb684:
  *(undefined8 *)(puVar29 + -0x70) = 0x44bb689;
  uVar18 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar29 + -0x70) = plVar28;
  *(long **)(puVar29 + -0x78) = &TypeInfo_MusicManager;
  *(Il2CppClass **)(puVar29 + -0x80) = pIVar14;
  *(undefined8 *)(puVar29 + -0x88) = unaff_R13;
  *(long **)(puVar29 + -0x90) = unaff_R12;
  *(long **)(puVar29 + -0x98) = plVar19;
  *(undefined8 *)(puVar29 + -0xa0) = uVar18;
  *(undefined4 *)(puVar29 + -0x9c) = extraout_XMM0_Da;
  if (g_data_057aea6b == '\0') {
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb705;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb711;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb71d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb729;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb735;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb741;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb74d;
    il2cpp_runtime_helper_023445d0(&"Playlist");
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb759;
    il2cpp_runtime_helper_023445d0(&"");
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb765;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea6b = '\x01';
  }
  *(undefined8 *)(puVar29 + -0xa8) = 0x44bb774;
  pSVar16 = ApplicationManagers_MusicManager__FindSong((System_String_o *)plVar20,(MethodInfo *)pIVar15);
  lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
  pIVar32 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (lVar22 == 0) goto label_044bbd3d;
  *(undefined1 *)(lVar22 + 0x48) = 0;
  *(MethodInfo **)(lVar22 + 0x58) = "";
  *(undefined8 *)(puVar29 + -0xa8) = 0x44bb7af;
  il2cpp_runtime_helper_022b4080(lVar22 + 0x58);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb7c8;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar14 = (Il2CppClass *)0x0;
  pIVar25 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar29 + -0xa8) = 0x44bb7d7;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar16,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  *(undefined4 *)(puVar29 + -0xa0) = 0;
  if ((char)bVar11 == '\0') goto label_044bbc73;
  pIVar15 = pIVar25;
  if (pSVar16 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bbd3d:
    pIVar24 = pIVar32;
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bbd42;
    il2cpp_runtime_helper_022b2c90();
    pIVar32 = pIVar14;
    pIVar25 = pIVar24;
  }
  else {
    plVar28 = &"Name";
    pMVar31 = (pSVar16->klass->vtable)._28_HasKey.method;
    pIVar5 = (pSVar16->klass->vtable)._28_HasKey.methodPtr;
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb80f;
    cVar10 = (*pIVar5)(pSVar16,"Name",pMVar31);
    if (cVar10 == '\0') {
      pIVar14 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
      pMVar31 = (pSVar16->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bbab7;
      plVar20 = (long *)(*pIVar5)(pSVar16,"Playlist",pMVar31);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar29 + -0xa8) = 0x44bbacc;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar15 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bbad6;
      pIVar25 = (Il2CppClass *)
                SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                          ((SimpleJSONFixed_JSONNode_o *)plVar20,(MethodInfo *)0x0);
      if (pIVar14 != (Il2CppClass *)0x0) {
        pGVar8 = (pIVar14->_1).image;
        pMVar31 = (pGVar8->vtable)._7_unknown.method;
        pIVar5 = (pGVar8->vtable)._7_unknown.methodPtr;
        *(undefined8 *)(puVar29 + -0xa8) = 0x44bbaf5;
        pIVar24 = (Il2CppClass *)(*pIVar5)(pIVar14,pIVar25,pMVar31);
        pIVar15 = pIVar25;
        if (pIVar24 != (Il2CppClass *)0x0) {
          pUVar27 = (pIVar24->_1).image;
          pIVar15 = pUVar27[1]._1.klass;
          pcVar4 = pUVar27[1]._1.interopData;
          *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb14;
          iVar12 = (*pcVar4)(pIVar24,pIVar15);
          *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb1f;
          uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
          pUVar27 = (pIVar24->_1).image;
          pcVar3 = pUVar27[1]._1.namespaze;
          pIVar15 = (Il2CppClass *)(ulong)uVar13;
          pcVar4 = (code *)pUVar27[1]._1.name;
          *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb34;
          plVar19 = (long *)(*pcVar4)(pIVar24,pIVar15,pcVar3);
          plVar20 = (long *)pIVar24;
          if (plVar19 != (long *)0x0) {
            uVar18 = *(undefined8 *)(*plVar19 + 0x1b0);
            pcVar4 = *(code **)(*plVar19 + 0x1a8);
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb57;
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar4)(plVar19,"Name",uVar18);
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb61;
            plVar20 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb7c;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb90;
            pIVar24 = (Il2CppClass *)
                      ApplicationManagers_ResourceManager__LoadAsset
                                ("Music",(System_String_o *)plVar20,0,(MethodInfo *)pUVar27);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbbab;
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar32 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbbba;
            bVar11 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pIVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            pIVar14 = pIVar32;
            if ((((char)bVar11 != '\0') && (pIVar14 = pIVar24, pIVar24 != (Il2CppClass *)0x0)) &&
               (pIVar15 = TypeInfo_AudioClip, pIVar25 = pIVar24, (pIVar24->_1).image != TypeInfo_AudioClip))
            goto label_044bbd45;
            uVar18 = *(undefined8 *)(*plVar19 + 0x1b0);
            pcVar4 = *(code **)(*plVar19 + 0x1a8);
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbbf7;
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar4)(plVar19,"Volume",uVar18);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc0c;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc16;
            fVar35 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar16,(MethodInfo *)0x0);
            *(float *)(puVar29 + -0xa0) = fVar35;
            lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
            uVar18 = *(undefined8 *)(*plVar19 + 0x1b0);
            pcVar4 = *(code **)(*plVar19 + 0x1a8);
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc4d;
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar4)(plVar19,"Name",uVar18);
            pIVar15 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc57;
            pIVar25 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
            plVar20 = (long *)0x0;
            pIVar32 = (Il2CppClass *)&TypeInfo_MusicManager;
            if (lVar22 != 0) {
              *(Il2CppClass **)(lVar22 + 0x58) = pIVar25;
              plVar20 = (long *)(lVar22 + 0x58);
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc73;
              il2cpp_runtime_helper_022b4080(plVar20);
              goto label_044bbc73;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
    pMVar31 = (pSVar16->klass->vtable)._7_get_Item.method;
    pIVar5 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb82f;
    pSVar23 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar16,"Name",pMVar31);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb844;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb84e;
    plVar20 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar23,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb869;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb87d;
    pIVar24 = (Il2CppClass *)
              ApplicationManagers_ResourceManager__LoadAsset
                        ("Music",(System_String_o *)plVar20,0,(MethodInfo *)method_00);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb898;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb8a7;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pIVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pIVar14 = (Il2CppClass *)0x0;
    if ((((char)bVar11 == '\0') || (pIVar14 = pIVar24, pIVar24 == (Il2CppClass *)0x0)) ||
       (pIVar15 = TypeInfo_AudioClip, pIVar32 = (Il2CppClass *)0x0, pIVar25 = pIVar24,
       (pIVar24->_1).image == TypeInfo_AudioClip)) {
      pMVar31 = (pSVar16->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb8e4;
      pSVar23 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar16,"Volume",pMVar31);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar29 + -0xa8) = 0x44bb8f9;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb903;
      fVar35 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar23,(MethodInfo *)0x0);
      *(float *)(puVar29 + -0xa0) = fVar35;
      lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
      pMVar31 = (pSVar16->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb934;
      pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar16,"Name",pMVar31);
      pIVar15 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb93e;
      pIVar25 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
      plVar20 = (long *)(Il2CppClass *)0x0;
      pIVar32 = (Il2CppClass *)&TypeInfo_MusicManager;
      if (lVar22 != 0) {
        *(Il2CppClass **)(lVar22 + 0x58) = pIVar25;
        *(undefined8 *)(puVar29 + -0xa8) = 0x44bb95a;
        il2cpp_runtime_helper_022b4080(lVar22 + 0x58);
        plVar28 = &TypeInfo_SceneLoader;
        plVar20 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if ((Il2CppClass *)plVar20 != (Il2CppClass *)0x0) {
          pUVar27 = (((Il2CppClass *)plVar20)->_1).image;
          bVar33 = (TypeInfo_InGameManager->_2).naturalAligment;
          if ((bVar33 <= (pUVar27->_2).naturalAligment) &&
             ((pUVar27->_2).typeHierarchy[(ulong)bVar33 - 1] == TypeInfo_InGameManager)) {
            lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
            pIVar15 = pIVar25;
            pIVar32 = (Il2CppClass *)&TypeInfo_InGameManager;
            if ((lVar22 == 0) ||
               (lVar22 = *(long *)(lVar22 + 0x28), pIVar32 = (Il2CppClass *)&TypeInfo_InGameManager, lVar22 == 0))
            goto label_044bbd3d;
            if (0.0 < *(float *)(lVar22 + 0x14)) {
              lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              pIVar32 = (Il2CppClass *)&TypeInfo_InGameManager;
              if ((lVar22 == 0) ||
                 (lVar22 = *(long *)(lVar22 + 0xd8), pIVar32 = (Il2CppClass *)&TypeInfo_InGameManager, lVar22 == 0))
              goto label_044bbd3d;
              if (*(char *)(lVar22 + 0x11) != '\0') {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  *(undefined8 *)(puVar29 + -0xa8) = 0x44bba25;
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar25 = (Il2CppClass *)0x0;
                *(undefined8 *)(puVar29 + -0xa8) = 0x44bba31;
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)plVar20,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar11 != '\0') {
                  pIVar24 = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
                  pIVar15 = pIVar25;
                  pIVar32 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (pIVar24 == (Il2CppClass *)0x0) goto label_044bbd3d;
                  pGVar8 = (pIVar24->_1).image;
                  bVar33 = (TypeInfo_InGameManager->_2).naturalAligment;
                  pIVar15 = TypeInfo_InGameManager;
                  pIVar32 = pIVar14;
                  pIVar25 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (((pGVar8->_2).naturalAligment < bVar33) ||
                     ((pGVar8->_2).typeHierarchy[(ulong)bVar33 - 1] != TypeInfo_InGameManager)) goto label_044bbd45;
                  pIVar25 = (Il2CppClass *)0x0;
                  *(undefined8 *)(puVar29 + -0xa8) = 0x44bba7f;
                  GameManagers_InGameManager__OnSongChange
                            ((GameManagers_InGameManager_o *)pIVar24,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
label_044bbc73:
        __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
        pIVar15 = pIVar25;
        pIVar32 = (Il2CppClass *)&TypeInfo_MusicManager;
        if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
          pIVar15 = (Il2CppClass *)0x0;
          *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc90;
          UnityEngine_MonoBehaviour__StopAllCoroutines(__this,(MethodInfo *)0x0);
          pIVar32 = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
          if (pIVar32 != (Il2CppClass *)0x0) {
            if (g_data_057aea6f == '\0') {
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbcbb;
              il2cpp_runtime_helper_023445d0(&TypeInfo_FadeNextSong_d__46);
              g_data_057aea6f = '\x01';
            }
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbcd1;
            pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeNextSong_d__46);
            pIVar15 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbcde;
            System_Object___ctor(pIVar21,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar21[1].klass = 0;
            plVar20 = (long *)(Il2CppClass *)0x0;
            if (pIVar21 != (Il2CppObject *)0x0) {
              pIVar21[2].klass = pIVar32;
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbcfa;
              il2cpp_runtime_helper_022b4080(pIVar21 + 2,pIVar32);
              pIVar21[2].monitor = pIVar14;
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbd0d;
              il2cpp_runtime_helper_022b4080(&pIVar21[2].monitor,pIVar14);
              *(undefined4 *)((long)&pIVar21[3].klass + 4) = *(undefined4 *)(puVar29 + -0xa0);
              *(undefined4 *)&pIVar21[3].klass = *(undefined4 *)(puVar29 + -0x9c);
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)pIVar32,(System_Collections_IEnumerator_o *)pIVar21,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
  }
label_044bbd45:
  *(undefined8 *)(puVar29 + -0xa8) = 0x44bbd4a;
  il2cpp_runtime_helper_022b2fd0();
  *(long **)(puVar29 + -0xa8) = plVar20;
  if (g_data_057aea6d == '\0') {
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd66;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd72;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd7e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd8a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd96;
    il2cpp_runtime_helper_023445d0(&"Custom");
    pIVar24 = (Il2CppClass *)&"Name";
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbda2;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea6d = '\x01';
  }
  pIVar14 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    pIVar24 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    pIVar15 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbde9;
    bVar11 = System_String__op_Equality
                       ((System_String_o *)pIVar24,(System_String_o *)pIVar15,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return;
    }
    if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
      pIVar24 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
      *(undefined8 *)(puVar29 + -0xb0) = 0x44bbe1a;
      pIVar15 = "Custom";
      bVar11 = System_String__op_Equality
                         ((System_String_o *)pIVar24,(System_String_o *)"Custom",(MethodInfo *)0x0);
      plVar19 = *(long **)(TypeInfo_MusicManager + 0xb8);
      if ((char)bVar11 == '\0') {
        if ((*plVar19 != 0) && (pIVar24 = (Il2CppClass *)plVar19[1], pIVar24 != (Il2CppClass *)0x0)) {
          pIVar15 = *(Il2CppClass **)(*plVar19 + 0x20);
          pGVar8 = (pIVar24->_1).image;
          pMVar31 = (pGVar8->vtable)._7_unknown.method;
          pIVar5 = (pGVar8->vtable)._7_unknown.methodPtr;
          *(undefined8 *)(puVar29 + -0xb0) = 0x44bbea0;
          pIVar26 = (Il2CppClass *)(*pIVar5)(pIVar24,pIVar15,pMVar31);
          if (pIVar26 != (Il2CppClass *)0x0) {
            pGVar8 = (pIVar26->_1).image;
            pMVar31 = (pGVar8->vtable)._11_unknown.method;
            pIVar5 = (pGVar8->vtable)._11_unknown.methodPtr;
            *(undefined8 *)(puVar29 + -0xb0) = 0x44bbebf;
            iVar12 = (*pIVar5)(pIVar26,pMVar31);
            *(undefined8 *)(puVar29 + -0xb0) = 0x44bbeca;
            uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
            pGVar8 = (pIVar26->_1).image;
            pMVar31 = (pGVar8->vtable)._5_unknown.method;
            pIVar15 = (Il2CppClass *)(ulong)uVar13;
            pIVar5 = (pGVar8->vtable)._5_unknown.methodPtr;
            *(undefined8 *)(puVar29 + -0xb0) = 0x44bbedf;
            pIVar24 = pIVar26;
            plVar19 = (long *)(*pIVar5)(pIVar26,pIVar15,pMVar31);
            pIVar14 = pIVar26;
            if (plVar19 != (long *)0x0) {
              uVar18 = *(undefined8 *)(*plVar19 + 0x1b0);
              pcVar4 = *(code **)(*plVar19 + 0x1a8);
              *(undefined8 *)(puVar29 + -0xb0) = 0x44bbf01;
              pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar4)(plVar19,"Name",uVar18);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                *(undefined8 *)(puVar29 + -0xb0) = 0x44bbf1c;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar31 = (MethodInfo *)0x0;
              *(undefined8 *)(puVar29 + -0xb0) = 0x44bbf26;
              pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
              ApplicationManagers_MusicManager__SetSong(pSVar17,0.0,pMVar31);
              return;
            }
          }
        }
      }
      else {
        lVar22 = *plVar19;
        if (lVar22 != 0) {
          __this_00 = *(System_Collections_Generic_List_object__o **)(lVar22 + 0x50);
          pIVar24 = (Il2CppClass *)0x0;
          if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
            iVar1 = (__this_00->fields)._size;
            if (iVar1 == 0) {
              return;
            }
            uVar13 = *(int *)(lVar22 + 0x4c) + 1;
            pMVar31 = (MethodInfo *)0x0;
            if ((int)uVar13 < iVar1) {
              pMVar31 = (MethodInfo *)(ulong)uVar13;
            }
            *(int32_t *)(lVar22 + 0x4c) = (int32_t)pMVar31;
            *(undefined8 *)(puVar29 + -0xb0) = 0x44bbe67;
            pSVar17 = (System_String_o *)
                      System_Collections_Generic_List_object___get_Item
                                (__this_00,(int32_t)pMVar31,MethodInfo_String_get_Item);
            ApplicationManagers_MusicManager__SetSong(pSVar17,0.0,pMVar31);
            return;
          }
        }
      }
    }
  }
  *(undefined8 *)(puVar29 + -0xb0) = 0x44bbf37;
  auVar37 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar29 + -0xb0) = plVar28;
  *(Il2CppClass **)(puVar29 + -0xb8) = pIVar25;
  *(Il2CppClass **)(puVar29 + -0xc0) = pIVar32;
  *(Il2CppClass **)(puVar29 + -200) = pIVar14;
  *(long *)(puVar29 + -0xd0) = auVar37._0_8_;
  uVar34 = auVar37._8_8_ & 0xffffffff;
  if (g_data_057aea83 == '\0') {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf65;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf71;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf7d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf89;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbfa1;
    il2cpp_runtime_helper_023445d0(&"/");
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbfad;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea83 = '\x01';
  }
  *(undefined8 *)(puVar29 + -0xd8) = 0x44bbfc8;
  pMVar31 = "";
  bVar11 = System_String__op_Inequality
                     ((System_String_o *)pIVar24,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbfe3;
    pMVar31 = "/";
    pIVar15 = (Il2CppClass *)
              System_String__Concat_3af7150
                        ((System_String_o *)pIVar24,(System_String_o *)"/",(System_String_o *)pIVar15
                         ,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbffe;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar29 + -0xd8) = 0x44bc006;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              ApplicationManagers_ResourceManager__GetExternalTexture((System_String_o *)pIVar15,pMVar31);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bc021;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar14 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar29 + -0xd8) = 0x44bc02d;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  cVar10 = (char)uVar34;
  if ((char)bVar11 != '\0') {
    if (cVar10 != '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)(puVar29 + -0xd8) = 0x44bc04b;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar32 = (Il2CppClass *)0x0;
      if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      *(undefined8 *)(puVar29 + -0xd8) = 0x44bc073;
      pIVar14 = pIVar15;
      bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         (pSVar9,(Il2CppObject *)pIVar15,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar11 == '\0') {
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          *(undefined8 *)(puVar29 + -0xd8) = 0x44bc088;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
        pIVar32 = (Il2CppClass *)0x0;
        if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
        *(undefined8 *)(puVar29 + -0xd8) = 0x44bc0b3;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar9,(Il2CppObject *)pIVar15,(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
      }
    }
    return;
  }
  if (cVar10 == '\0') {
    UnityEngine_Resources__Load((System_String_o *)pIVar15,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bc0db;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
  pIVar32 = (Il2CppClass *)0x0;
  if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bc103;
    pIVar14 = pIVar15;
    bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar9,(Il2CppObject *)pIVar15,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 == '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)(puVar29 + -0xd8) = 0x44bc118;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar14 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar29 + -0xd8) = 0x44bc12f;
      pIVar32 = pIVar15;
      value = UnityEngine_Resources__Load((System_String_o *)pIVar15,(MethodInfo *)0x0);
      if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      *(undefined8 *)(puVar29 + -0xd8) = 0x44bc14c;
      pIVar14 = pIVar15;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_01,(Il2CppObject *)pIVar15,(Il2CppObject *)value,MethodInfo_Void_set_Item);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0xd8) = 0x44bc15d;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar32 = (Il2CppClass *)0x0;
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)pIVar15,MethodInfo_Object_get_Item);
      return;
    }
  }
label_044bc19f:
  *(undefined8 *)(puVar29 + -0xd8) = 0x44bc1a4;
  uVar36 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar29 + -0xd8) = &TypeInfo_ResourceManager;
  *(ulong *)(puVar29 + -0xe0) = uVar34;
  *(Il2CppClass **)(puVar29 + -0xe8) = pIVar15;
  *(undefined4 *)(puVar29 + -0xec) = uVar36;
  if (g_data_057aea6a == '\0') {
    *(undefined8 *)(puVar29 + -0x100) = 0x44bc1da;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
    g_data_057aea6a = '\x01';
  }
  *(undefined8 *)(puVar29 + -0x100) = 0x44bc1f0;
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
  uVar36 = 0;
  *(undefined8 *)(puVar29 + -0x100) = 0x44bc1fd;
  pIVar21 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = pIVar32;
    *(undefined8 *)(puVar29 + -0x100) = 0x44bc219;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar32);
    __this_02[3].klass = pIVar14;
    *(undefined8 *)(puVar29 + -0x100) = 0x44bc22c;
    il2cpp_runtime_helper_022b4080(__this_02 + 3,pIVar14);
    *(undefined4 *)&__this_02[2].monitor = *(undefined4 *)(puVar29 + -0xec);
    return;
  }
  *(undefined8 *)(puVar29 + -0x100) = 0x44bc249;
  uVar18 = il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_Dictionary_object__object__o **)(puVar29 + -0x100) = __this_01;
  *(undefined8 *)(puVar29 + -0x108) = 0;
  *(undefined8 *)(puVar29 + -0x110) = uVar18;
  *(undefined8 *)(puVar29 + -0x118) = 0x44bc25f;
  System_Object___ctor(pIVar21,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar21[1].klass = uVar36;
  return;
}


// ApplicationManagers.MusicManager$$PlayGrabbedSong
// il2cpp: void ApplicationManagers_MusicManager__PlayGrabbedSong (const MethodInfo* method);
// 0x44bae70

void ApplicationManagers_MusicManager__PlayGrabbedSong(MethodInfo *method)

{
  int iVar1;
  System_String_c *pSVar2;
  char *pcVar3;
  code *pcVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_AudioSource_o *pUVar6;
  void *pvVar7;
  GameManagers_InGameManager_c *pGVar8;
  UnityEngine_MonoBehaviour_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  char cVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  uint uVar13;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  System_String_o *pSVar15;
  undefined8 in_RAX;
  long *plVar16;
  Il2CppClass *pIVar17;
  undefined8 uVar18;
  long *plVar19;
  Il2CppObject *pIVar20;
  long lVar21;
  SimpleJSONFixed_JSONNode_o *pSVar22;
  Il2CppClass *pIVar23;
  Il2CppClass *pIVar24;
  Il2CppClass *pIVar25;
  Il2CppClass *pIVar26;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UnityEngine_Object_o *value;
  Il2CppObject *__this_02;
  SimpleJSONFixed_JSONNode_c *in_RCX;
  UnityEngine_Object_c *pUVar27;
  Il2CppClass *unaff_RBX;
  undefined1 *puVar28;
  undefined8 unaff_RBP;
  long *b;
  MethodInfo *pMVar29;
  Il2CppClass *pIVar30;
  byte bVar31;
  long *unaff_R12;
  undefined8 unaff_R13;
  Il2CppClass *unaff_R14;
  ulong uVar32;
  long *unaff_R15;
  float fVar33;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar34;
  undefined1 auVar35 [16];
  
  do {
    *(long **)((long)register0x00000020 + -8) = unaff_R15;
    *(Il2CppClass **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x18) = unaff_R12;
    *(Il2CppClass **)((long)register0x00000020 + -0x20) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x28) = in_RAX;
    if (g_data_057aea62 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bae8d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bae99;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MusicPlaylist);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44baea5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44baeb1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44baebd;
      il2cpp_runtime_helper_023445d0(&"Grabbed");
      g_data_057aea62 = '\x01';
    }
    lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    pIVar17 = unaff_R14;
    if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x38), lVar21 == 0)) {
label_044bb042:
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb047;
      uVar18 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)register0x00000020 + -0x30) = uVar18;
      if (g_data_057aea63 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x44bb066;
        il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
        g_data_057aea63 = '\x01';
      }
      lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
      if (lVar21 != 0) {
        if (0.0 < *(float *)(lVar21 + 100)) {
          *(undefined4 *)(lVar21 + 100) = 0;
          *(undefined4 *)(lVar21 + 0x40) = 0;
          *(undefined1 *)(lVar21 + 0x7c) = 1;
        }
        return;
      }
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x44bb0ac;
      il2cpp_runtime_helper_022b2c90();
      puVar28 = (undefined1 *)((long)register0x00000020 + -0x38);
      *(Il2CppClass **)((long)register0x00000020 + -0x38) = unaff_RBX;
      if (g_data_057aea64 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44bb0c6;
        il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44bb0d2;
        il2cpp_runtime_helper_023445d0(&"Effect");
        g_data_057aea64 = '\x01';
      }
      plVar16 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
      if ((SimpleJSONFixed_JSONNode_o *)plVar16 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bb14e:
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44bb153;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        pMVar29 = (((SimpleJSONFixed_JSONNode_o *)plVar16)->klass->vtable)._7_get_Item.method;
        pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar16)->klass->vtable)._7_get_Item.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44bb10d;
        plVar19 = (long *)(*pIVar5)(plVar16,"Effect",pMVar29);
        if (plVar19 == (long *)0x0) goto label_044bb14e;
        uVar18 = *(undefined8 *)(*plVar19 + 0x1f0);
        pcVar4 = *(code **)(*plVar19 + 0x1e8);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44bb128;
        iVar12 = (*pcVar4)(plVar19,uVar18);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44bb133;
        uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
        in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar19;
        pMVar29 = (in_RCX->vtable)._5_get_Item.method;
        pIVar5 = (in_RCX->vtable)._5_get_Item.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44bb148;
        plVar16 = (long *)(*pIVar5)(plVar19,(ulong)uVar13,pMVar29);
        unaff_RBX = *(Il2CppClass **)((long)register0x00000020 + -0x38);
        puVar28 = (undefined1 *)((long)register0x00000020 + -0x30);
      }
      *(long **)(puVar28 + -8) = unaff_R15;
      *(Il2CppClass **)(puVar28 + -0x10) = pIVar17;
      *(Il2CppClass **)(puVar28 + -0x18) = unaff_RBX;
      register0x00000020 = (BADSPACEBASE *)(puVar28 + -0x28);
      if (g_data_057aea68 == '\0') {
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb181;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb18d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb199;
        il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb1a5;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb1b1;
        il2cpp_runtime_helper_023445d0(&"Name");
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb1bd;
        il2cpp_runtime_helper_023445d0(&"Music");
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb1c9;
        il2cpp_runtime_helper_023445d0(&"Volume");
        g_data_057aea68 = '\x01';
      }
      plVar19 = &TypeInfo_JSONNode;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb1e8;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar26 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar28 + -0x30) = 0x44bb1f4;
      bVar11 = SimpleJSONFixed_JSONNode__op_Inequality
                         ((SimpleJSONFixed_JSONNode_o *)plVar16,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      if ((SimpleJSONFixed_JSONNode_o *)plVar16 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bb384:
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb389;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        pMVar29 = (((SimpleJSONFixed_JSONNode_o *)plVar16)->klass->vtable)._28_HasKey.method;
        pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar16)->klass->vtable)._28_HasKey.methodPtr;
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb222;
        cVar10 = (*pIVar5)(plVar16,"Name",pMVar29);
        if (cVar10 == '\0') {
          return;
        }
        pMVar29 = (((SimpleJSONFixed_JSONNode_o *)plVar16)->klass->vtable)._7_get_Item.method;
        pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar16)->klass->vtable)._7_get_Item.methodPtr;
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb240;
        pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(plVar16,"Name",pMVar29);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          *(undefined8 *)(puVar28 + -0x30) = 0x44bb254;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb25e;
        pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          *(undefined8 *)(puVar28 + -0x30) = 0x44bb279;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb28d;
        pIVar17 = (Il2CppClass *)
                  ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar15,0,(MethodInfo *)in_RCX);
        if ((pIVar17 == (Il2CppClass *)0x0) || (pIVar26 = TypeInfo_AudioClip, (pIVar17->_1).image == TypeInfo_AudioClip))
        {
          pMVar29 = (((SimpleJSONFixed_JSONNode_o *)plVar16)->klass->vtable)._7_get_Item.method;
          pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar16)->klass->vtable)._7_get_Item.methodPtr;
          *(undefined8 *)(puVar28 + -0x30) = 0x44bb2c5;
          pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(plVar16,"Volume",pMVar29);
          pIVar26 = (Il2CppClass *)0x0;
          *(undefined8 *)(puVar28 + -0x30) = 0x44bb2cf;
          fVar33 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar14,(MethodInfo *)0x0);
          *(float *)(puVar28 + -0x1c) = fVar33;
          plVar19 = (long *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
          if ((Il2CppClass *)plVar19 != (Il2CppClass *)0x0) {
            if (g_data_057aea6a == '\0') {
              *(undefined8 *)(puVar28 + -0x30) = 0x44bb307;
              il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
              g_data_057aea6a = '\x01';
            }
            *(undefined8 *)(puVar28 + -0x30) = 0x44bb31d;
            pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
            pIVar26 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar28 + -0x30) = 0x44bb32a;
            System_Object___ctor(pIVar20,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar20[1].klass = 0;
            plVar16 = (long *)0x0;
            if (pIVar20 != (Il2CppObject *)0x0) {
              pIVar20[2].klass = (Il2CppClass *)plVar19;
              *(undefined8 *)(puVar28 + -0x30) = 0x44bb346;
              il2cpp_runtime_helper_022b4080(pIVar20 + 2,plVar19);
              pIVar20[3].klass = pIVar17;
              *(undefined8 *)(puVar28 + -0x30) = 0x44bb359;
              il2cpp_runtime_helper_022b4080(pIVar20 + 3,pIVar17);
              *(undefined4 *)&pIVar20[2].monitor = *(undefined4 *)(puVar28 + -0x1c);
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)plVar19,(System_Collections_IEnumerator_o *)pIVar20,
                         (MethodInfo *)0x0);
              return;
            }
          }
          goto label_044bb384;
        }
      }
      *(undefined8 *)(puVar28 + -0x30) = 0x44bb391;
      uVar18 = il2cpp_runtime_helper_022b2fd0(pIVar17);
      *(Il2CppClass **)(puVar28 + -0x30) = pIVar17;
      *(long **)(puVar28 + -0x38) = plVar16;
      *(undefined8 *)(puVar28 + -0x40) = uVar18;
      if (g_data_057aea65 == '\0') {
        *(undefined8 *)(puVar28 + -0x48) = 0x44bb3b9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
        *(undefined8 *)(puVar28 + -0x48) = 0x44bb3c5;
        il2cpp_runtime_helper_023445d0(&"Transition");
        g_data_057aea65 = '\x01';
      }
      b = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
      if ((Il2CppClass *)b != (Il2CppClass *)0x0) {
        pvVar7 = (((Il2CppClass *)b)->_1).image;
        uVar18 = *(undefined8 *)((long)pvVar7 + 0x1b0);
        pcVar4 = *(code **)((long)pvVar7 + 0x1a8);
        *(undefined8 *)(puVar28 + -0x48) = 0x44bb400;
        pIVar26 = "Transition";
        plVar16 = (long *)(*pcVar4)(b,"Transition",uVar18);
        if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
           (*(undefined2 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x68) = 0x101,
           (SimpleJSONFixed_JSONNode_o *)plVar16 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
          pMVar29 = (((SimpleJSONFixed_JSONNode_o *)plVar16)->klass->vtable)._11_get_Count.method;
          pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar16)->klass->vtable)._11_get_Count.methodPtr;
          *(undefined8 *)(puVar28 + -0x48) = 0x44bb433;
          iVar12 = (*pIVar5)(plVar16,pMVar29);
          *(undefined8 *)(puVar28 + -0x48) = 0x44bb43e;
          uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
          in_RCX = ((SimpleJSONFixed_JSONNode_o *)plVar16)->klass;
          pMVar29 = (in_RCX->vtable)._5_get_Item.method;
          pIVar5 = (in_RCX->vtable)._5_get_Item.methodPtr;
          *(undefined8 *)(puVar28 + -0x48) = 0x44bb453;
          unaff_RBX = (Il2CppClass *)(*pIVar5)(plVar16,(ulong)uVar13,pMVar29);
          uVar18 = *(undefined8 *)(puVar28 + -0x38);
          unaff_R14 = *(Il2CppClass **)(puVar28 + -0x30);
          goto ApplicationManagers_MusicManager__PlayImmediateTransition;
        }
      }
      *(undefined8 *)(puVar28 + -0x48) = 0x44bb467;
      il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)(puVar28 + -0x48) = unaff_RBP;
      *(long **)(puVar28 + -0x50) = plVar19;
      *(long **)(puVar28 + -0x58) = &TypeInfo_MusicManager;
      *(long **)(puVar28 + -0x60) = unaff_R12;
      *(long **)(puVar28 + -0x68) = plVar16;
      pIVar17 = (Il2CppClass *)((ulong)pIVar26 & 0xffffffff);
      plVar19 = b;
      if (g_data_057aea67 == '\0') {
        *(undefined8 *)(puVar28 + -0x70) = 0x44bb493;
        il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
        plVar19 = &TypeInfo_MusicPlaylist;
        *(undefined8 *)(puVar28 + -0x70) = 0x44bb49f;
        il2cpp_runtime_helper_023445d0();
        g_data_057aea67 = '\x01';
      }
      if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
        pSVar15 = *(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
        *(undefined8 *)(puVar28 + -0x70) = 0x44bb4d1;
        pIVar26 = (Il2CppClass *)b;
        uVar13 = System_String__op_Inequality(pSVar15,(System_String_o *)b,(MethodInfo *)0x0);
        unaff_R12 = (long *)(ulong)uVar13;
        lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
        plVar19 = (long *)0x0;
        if (lVar21 != 0) {
          *(long **)(lVar21 + 0x20) = b;
          plVar19 = (long *)(lVar21 + 0x20);
          *(undefined8 *)(puVar28 + -0x70) = 0x44bb4fa;
          pIVar26 = (Il2CppClass *)b;
          il2cpp_runtime_helper_022b4080();
          lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if (lVar21 != 0) {
            cVar10 = *(char *)(lVar21 + 0x68);
            in_RCX = (SimpleJSONFixed_JSONNode_c *)CONCAT71((int7)((ulong)in_RCX >> 8),cVar10);
            if (*(char *)(lVar21 + 0x60) == '\0') {
              if (cVar10 != '\0') goto label_044bb52e;
              if (0.0 < *(float *)(lVar21 + 100)) {
                *(undefined4 *)(lVar21 + 0x40) = 0;
              }
label_044bb578:
              *(undefined4 *)(lVar21 + 100) = 0;
            }
            else {
              *(undefined4 *)(lVar21 + 0x40) = 0;
              if (cVar10 == '\0') goto label_044bb578;
label_044bb52e:
              plVar16 = &TypeInfo_MusicPlaylist;
              if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
                *(undefined8 *)(puVar28 + -0x70) = 0x44bb546;
                il2cpp_runtime_helper_02337ed0();
              }
              pIVar26 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
              *(undefined8 *)(puVar28 + -0x70) = 0x44bb55e;
              plVar19 = b;
              bVar11 = System_String__op_Equality
                                 ((System_String_o *)b,(System_String_o *)pIVar26,(MethodInfo *)0x0);
              if ((char)bVar11 != '\0') {
                lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
                if (lVar21 == 0) goto label_044bb684;
                goto label_044bb578;
              }
            }
            plVar16 = &TypeInfo_MusicPlaylist;
            if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
              *(undefined8 *)(puVar28 + -0x70) = 0x44bb597;
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar26 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
            *(undefined8 *)(puVar28 + -0x70) = 0x44bb5af;
            plVar19 = b;
            bVar11 = System_String__op_Equality
                               ((System_String_o *)b,(System_String_o *)pIVar26,(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') goto label_044bb618;
            lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
            if (lVar21 == 0) goto label_044bb684;
            if (*(char *)(lVar21 + 0x7c) == '\0') {
label_044bb618:
              lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
              if (lVar21 == 0) goto label_044bb684;
              bVar31 = (byte)uVar13 | (byte)pIVar17;
              unaff_R12 = (long *)(ulong)CONCAT31((int3)(uVar13 >> 8),bVar31);
              if ((bVar31 == 1) && (*(float *)(lVar21 + 100) <= 0.0)) {
                *(undefined4 *)(lVar21 + 0x4c) = 0;
                *(undefined8 *)(puVar28 + -0x70) = 0x44bb648;
                ApplicationManagers_MusicManager__NextSong((MethodInfo *)plVar19);
              }
            }
            else {
              plVar19 = *(long **)(lVar21 + 0x70);
              pIVar26 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
              *(undefined8 *)(puVar28 + -0x70) = 0x44bb5f2;
              bVar11 = System_String__op_Inequality
                                 ((System_String_o *)plVar19,(System_String_o *)pIVar26,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_044bb618;
              lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
              if (lVar21 == 0) goto label_044bb684;
              plVar19 = *(long **)(lVar21 + 0x70);
              fVar33 = *(float *)(lVar21 + 0x78);
              *(undefined8 *)(puVar28 + -0x70) = 0x44bb616;
              ApplicationManagers_MusicManager__SetSong
                        ((System_String_o *)plVar19,fVar33,(MethodInfo *)pIVar26);
            }
            if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
              *(undefined1 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x7c) = 0;
              return;
            }
          }
        }
      }
label_044bb684:
      *(undefined8 *)(puVar28 + -0x70) = 0x44bb689;
      uVar18 = il2cpp_runtime_helper_022b2c90();
      *(long **)(puVar28 + -0x70) = b;
      *(long **)(puVar28 + -0x78) = &TypeInfo_MusicManager;
      *(Il2CppClass **)(puVar28 + -0x80) = pIVar17;
      *(undefined8 *)(puVar28 + -0x88) = unaff_R13;
      *(long **)(puVar28 + -0x90) = unaff_R12;
      *(long **)(puVar28 + -0x98) = plVar16;
      *(undefined8 *)(puVar28 + -0xa0) = uVar18;
      *(undefined4 *)(puVar28 + -0x9c) = extraout_XMM0_Da;
      if (g_data_057aea6b == '\0') {
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6bd;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6c9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6d5;
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6e1;
        il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6ed;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6f9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb705;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb711;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb71d;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb729;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb735;
        il2cpp_runtime_helper_023445d0(&"Name");
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb741;
        il2cpp_runtime_helper_023445d0(&"Music");
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb74d;
        il2cpp_runtime_helper_023445d0(&"Playlist");
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb759;
        il2cpp_runtime_helper_023445d0(&"");
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb765;
        il2cpp_runtime_helper_023445d0(&"Volume");
        g_data_057aea6b = '\x01';
      }
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bb774;
      pSVar14 = ApplicationManagers_MusicManager__FindSong((System_String_o *)plVar19,(MethodInfo *)pIVar26);
      lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
      pIVar30 = (Il2CppClass *)&TypeInfo_MusicManager;
      if (lVar21 == 0) goto label_044bbd3d;
      *(undefined1 *)(lVar21 + 0x48) = 0;
      *(MethodInfo **)(lVar21 + 0x58) = "";
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bb7af;
      il2cpp_runtime_helper_022b4080(lVar21 + 0x58);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb7c8;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar17 = (Il2CppClass *)0x0;
      pIVar24 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bb7d7;
      bVar11 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar14,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      *(undefined4 *)(puVar28 + -0xa0) = 0;
      if ((char)bVar11 == '\0') goto label_044bbc73;
      pIVar26 = pIVar24;
      if (pSVar14 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bbd3d:
        pIVar23 = pIVar30;
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bbd42;
        il2cpp_runtime_helper_022b2c90();
        pIVar30 = pIVar17;
        pIVar24 = pIVar23;
      }
      else {
        b = &"Name";
        pMVar29 = (pSVar14->klass->vtable)._28_HasKey.method;
        pIVar5 = (pSVar14->klass->vtable)._28_HasKey.methodPtr;
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb80f;
        cVar10 = (*pIVar5)(pSVar14,"Name",pMVar29);
        if (cVar10 == '\0') {
          pIVar17 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
          pMVar29 = (pSVar14->klass->vtable)._7_get_Item.method;
          pIVar5 = (pSVar14->klass->vtable)._7_get_Item.methodPtr;
          *(undefined8 *)(puVar28 + -0xa8) = 0x44bbab7;
          plVar19 = (long *)(*pIVar5)(pSVar14,"Playlist",pMVar29);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbacc;
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar26 = (Il2CppClass *)0x0;
          *(undefined8 *)(puVar28 + -0xa8) = 0x44bbad6;
          pIVar24 = (Il2CppClass *)
                    SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                              ((SimpleJSONFixed_JSONNode_o *)plVar19,(MethodInfo *)0x0);
          if (pIVar17 != (Il2CppClass *)0x0) {
            pGVar8 = (pIVar17->_1).image;
            pMVar29 = (pGVar8->vtable)._7_unknown.method;
            pIVar5 = (pGVar8->vtable)._7_unknown.methodPtr;
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbaf5;
            pIVar23 = (Il2CppClass *)(*pIVar5)(pIVar17,pIVar24,pMVar29);
            pIVar26 = pIVar24;
            if (pIVar23 != (Il2CppClass *)0x0) {
              pUVar27 = (pIVar23->_1).image;
              pIVar26 = pUVar27[1]._1.klass;
              pcVar4 = pUVar27[1]._1.interopData;
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb14;
              iVar12 = (*pcVar4)(pIVar23,pIVar26);
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb1f;
              uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
              pUVar27 = (pIVar23->_1).image;
              pcVar3 = pUVar27[1]._1.namespaze;
              pIVar26 = (Il2CppClass *)(ulong)uVar13;
              pcVar4 = (code *)pUVar27[1]._1.name;
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb34;
              plVar16 = (long *)(*pcVar4)(pIVar23,pIVar26,pcVar3);
              plVar19 = (long *)pIVar23;
              if (plVar16 != (long *)0x0) {
                uVar18 = *(undefined8 *)(*plVar16 + 0x1b0);
                pcVar4 = *(code **)(*plVar16 + 0x1a8);
                *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb57;
                pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pcVar4)(plVar16,"Name",uVar18);
                *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb61;
                plVar19 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                  *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb7c;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb90;
                pIVar23 = (Il2CppClass *)
                          ApplicationManagers_ResourceManager__LoadAsset
                                    ("Music",(System_String_o *)plVar19,0,(MethodInfo *)pUVar27);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  *(undefined8 *)(puVar28 + -0xa8) = 0x44bbbab;
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar30 = (Il2CppClass *)0x0;
                *(undefined8 *)(puVar28 + -0xa8) = 0x44bbbba;
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)pIVar23,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                pIVar17 = pIVar30;
                if ((((char)bVar11 != '\0') && (pIVar17 = pIVar23, pIVar23 != (Il2CppClass *)0x0)) &&
                   (pIVar26 = TypeInfo_AudioClip, pIVar24 = pIVar23, (pIVar23->_1).image != TypeInfo_AudioClip))
                goto label_044bbd45;
                uVar18 = *(undefined8 *)(*plVar16 + 0x1b0);
                pcVar4 = *(code **)(*plVar16 + 0x1a8);
                *(undefined8 *)(puVar28 + -0xa8) = 0x44bbbf7;
                pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pcVar4)(plVar16,"Volume",uVar18);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc0c;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc16;
                fVar33 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar14,(MethodInfo *)0x0);
                *(float *)(puVar28 + -0xa0) = fVar33;
                lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
                uVar18 = *(undefined8 *)(*plVar16 + 0x1b0);
                pcVar4 = *(code **)(*plVar16 + 0x1a8);
                *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc4d;
                pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pcVar4)(plVar16,"Name",uVar18);
                pIVar26 = (Il2CppClass *)0x0;
                *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc57;
                pIVar24 = (Il2CppClass *)
                          SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
                plVar19 = (long *)0x0;
                pIVar30 = (Il2CppClass *)&TypeInfo_MusicManager;
                if (lVar21 != 0) {
                  *(Il2CppClass **)(lVar21 + 0x58) = pIVar24;
                  plVar19 = (long *)(lVar21 + 0x58);
                  *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc73;
                  il2cpp_runtime_helper_022b4080(plVar19);
                  goto label_044bbc73;
                }
              }
            }
          }
          goto label_044bbd3d;
        }
        pMVar29 = (pSVar14->klass->vtable)._7_get_Item.method;
        pIVar5 = (pSVar14->klass->vtable)._7_get_Item.methodPtr;
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb82f;
        pSVar22 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar14,"Name",pMVar29);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          *(undefined8 *)(puVar28 + -0xa8) = 0x44bb844;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb84e;
        plVar19 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar22,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          *(undefined8 *)(puVar28 + -0xa8) = 0x44bb869;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb87d;
        pIVar23 = (Il2CppClass *)
                  ApplicationManagers_ResourceManager__LoadAsset
                            ("Music",(System_String_o *)plVar19,0,(MethodInfo *)in_RCX);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar28 + -0xa8) = 0x44bb898;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb8a7;
        bVar11 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pIVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pIVar17 = (Il2CppClass *)0x0;
        if ((((char)bVar11 == '\0') || (pIVar17 = pIVar23, pIVar23 == (Il2CppClass *)0x0)) ||
           (pIVar26 = TypeInfo_AudioClip, pIVar30 = (Il2CppClass *)0x0, pIVar24 = pIVar23,
           (pIVar23->_1).image == TypeInfo_AudioClip)) {
          pMVar29 = (pSVar14->klass->vtable)._7_get_Item.method;
          pIVar5 = (pSVar14->klass->vtable)._7_get_Item.methodPtr;
          *(undefined8 *)(puVar28 + -0xa8) = 0x44bb8e4;
          pSVar22 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar14,"Volume",pMVar29);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bb8f9;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar28 + -0xa8) = 0x44bb903;
          fVar33 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar22,(MethodInfo *)0x0);
          *(float *)(puVar28 + -0xa0) = fVar33;
          lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
          pMVar29 = (pSVar14->klass->vtable)._7_get_Item.method;
          pIVar5 = (pSVar14->klass->vtable)._7_get_Item.methodPtr;
          *(undefined8 *)(puVar28 + -0xa8) = 0x44bb934;
          pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar14,"Name",pMVar29);
          pIVar26 = (Il2CppClass *)0x0;
          *(undefined8 *)(puVar28 + -0xa8) = 0x44bb93e;
          pIVar24 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
          plVar19 = (long *)(Il2CppClass *)0x0;
          pIVar30 = (Il2CppClass *)&TypeInfo_MusicManager;
          if (lVar21 != 0) {
            *(Il2CppClass **)(lVar21 + 0x58) = pIVar24;
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bb95a;
            il2cpp_runtime_helper_022b4080(lVar21 + 0x58);
            b = &TypeInfo_SceneLoader;
            plVar19 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
            if ((Il2CppClass *)plVar19 != (Il2CppClass *)0x0) {
              pUVar27 = (((Il2CppClass *)plVar19)->_1).image;
              bVar31 = (TypeInfo_InGameManager->_2).naturalAligment;
              if ((bVar31 <= (pUVar27->_2).naturalAligment) &&
                 ((pUVar27->_2).typeHierarchy[(ulong)bVar31 - 1] == TypeInfo_InGameManager)) {
                lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
                pIVar26 = pIVar24;
                pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager;
                if ((lVar21 == 0) ||
                   (lVar21 = *(long *)(lVar21 + 0x28), pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager, lVar21 == 0))
                goto label_044bbd3d;
                if (0.0 < *(float *)(lVar21 + 0x14)) {
                  lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                  pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if ((lVar21 == 0) ||
                     (lVar21 = *(long *)(lVar21 + 0xd8), pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager, lVar21 == 0))
                  goto label_044bbd3d;
                  if (*(char *)(lVar21 + 0x11) != '\0') {
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      *(undefined8 *)(puVar28 + -0xa8) = 0x44bba25;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pIVar24 = (Il2CppClass *)0x0;
                    *(undefined8 *)(puVar28 + -0xa8) = 0x44bba31;
                    bVar11 = UnityEngine_Object__op_Inequality
                                       ((UnityEngine_Object_o *)plVar19,(UnityEngine_Object_o *)0x0,
                                        (MethodInfo *)0x0);
                    if ((char)bVar11 != '\0') {
                      pIVar23 = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
                      pIVar26 = pIVar24;
                      pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager;
                      if (pIVar23 == (Il2CppClass *)0x0) goto label_044bbd3d;
                      pGVar8 = (pIVar23->_1).image;
                      bVar31 = (TypeInfo_InGameManager->_2).naturalAligment;
                      pIVar26 = TypeInfo_InGameManager;
                      pIVar30 = pIVar17;
                      pIVar24 = (Il2CppClass *)&TypeInfo_InGameManager;
                      if (((pGVar8->_2).naturalAligment < bVar31) ||
                         ((pGVar8->_2).typeHierarchy[(ulong)bVar31 - 1] != TypeInfo_InGameManager)) goto label_044bbd45;
                      pIVar24 = (Il2CppClass *)0x0;
                      *(undefined8 *)(puVar28 + -0xa8) = 0x44bba7f;
                      GameManagers_InGameManager__OnSongChange
                                ((GameManagers_InGameManager_o *)pIVar23,(MethodInfo *)0x0);
                    }
                  }
                }
              }
            }
label_044bbc73:
            __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
            pIVar26 = pIVar24;
            pIVar30 = (Il2CppClass *)&TypeInfo_MusicManager;
            if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
              pIVar26 = (Il2CppClass *)0x0;
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc90;
              UnityEngine_MonoBehaviour__StopAllCoroutines(__this,(MethodInfo *)0x0);
              pIVar30 = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
              if (pIVar30 != (Il2CppClass *)0x0) {
                if (g_data_057aea6f == '\0') {
                  *(undefined8 *)(puVar28 + -0xa8) = 0x44bbcbb;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_FadeNextSong_d__46);
                  g_data_057aea6f = '\x01';
                }
                *(undefined8 *)(puVar28 + -0xa8) = 0x44bbcd1;
                pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeNextSong_d__46);
                pIVar26 = (Il2CppClass *)0x0;
                *(undefined8 *)(puVar28 + -0xa8) = 0x44bbcde;
                System_Object___ctor(pIVar20,(MethodInfo *)0x0);
                *(undefined4 *)&pIVar20[1].klass = 0;
                plVar19 = (long *)(Il2CppClass *)0x0;
                if (pIVar20 != (Il2CppObject *)0x0) {
                  pIVar20[2].klass = pIVar30;
                  *(undefined8 *)(puVar28 + -0xa8) = 0x44bbcfa;
                  il2cpp_runtime_helper_022b4080(pIVar20 + 2,pIVar30);
                  pIVar20[2].monitor = pIVar17;
                  *(undefined8 *)(puVar28 + -0xa8) = 0x44bbd0d;
                  il2cpp_runtime_helper_022b4080(&pIVar20[2].monitor,pIVar17);
                  *(undefined4 *)((long)&pIVar20[3].klass + 4) = *(undefined4 *)(puVar28 + -0xa0);
                  *(undefined4 *)&pIVar20[3].klass = *(undefined4 *)(puVar28 + -0x9c);
                  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                            ((UnityEngine_MonoBehaviour_o *)pIVar30,
                             (System_Collections_IEnumerator_o *)pIVar20,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          goto label_044bbd3d;
        }
      }
label_044bbd45:
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bbd4a;
      il2cpp_runtime_helper_022b2fd0();
      *(long **)(puVar28 + -0xa8) = plVar19;
      if (g_data_057aea6d == '\0') {
        *(undefined8 *)(puVar28 + -0xb0) = 0x44bbd66;
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        *(undefined8 *)(puVar28 + -0xb0) = 0x44bbd72;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        *(undefined8 *)(puVar28 + -0xb0) = 0x44bbd7e;
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
        *(undefined8 *)(puVar28 + -0xb0) = 0x44bbd8a;
        il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
        *(undefined8 *)(puVar28 + -0xb0) = 0x44bbd96;
        il2cpp_runtime_helper_023445d0(&"Custom");
        pIVar23 = (Il2CppClass *)&"Name";
        *(undefined8 *)(puVar28 + -0xb0) = 0x44bbda2;
        il2cpp_runtime_helper_023445d0();
        g_data_057aea6d = '\x01';
      }
      pIVar17 = (Il2CppClass *)&TypeInfo_MusicManager;
      if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
        pIVar23 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
        pIVar26 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        *(undefined8 *)(puVar28 + -0xb0) = 0x44bbde9;
        bVar11 = System_String__op_Equality
                           ((System_String_o *)pIVar23,(System_String_o *)pIVar26,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          return;
        }
        if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
          pIVar23 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
          *(undefined8 *)(puVar28 + -0xb0) = 0x44bbe1a;
          pIVar26 = "Custom";
          bVar11 = System_String__op_Equality
                             ((System_String_o *)pIVar23,(System_String_o *)"Custom",(MethodInfo *)0x0);
          plVar16 = *(long **)(TypeInfo_MusicManager + 0xb8);
          if ((char)bVar11 == '\0') {
            if ((*plVar16 != 0) && (pIVar23 = (Il2CppClass *)plVar16[1], pIVar23 != (Il2CppClass *)0x0)) {
              pIVar26 = *(Il2CppClass **)(*plVar16 + 0x20);
              pGVar8 = (pIVar23->_1).image;
              pMVar29 = (pGVar8->vtable)._7_unknown.method;
              pIVar5 = (pGVar8->vtable)._7_unknown.methodPtr;
              *(undefined8 *)(puVar28 + -0xb0) = 0x44bbea0;
              pIVar25 = (Il2CppClass *)(*pIVar5)(pIVar23,pIVar26,pMVar29);
              if (pIVar25 != (Il2CppClass *)0x0) {
                pGVar8 = (pIVar25->_1).image;
                pMVar29 = (pGVar8->vtable)._11_unknown.method;
                pIVar5 = (pGVar8->vtable)._11_unknown.methodPtr;
                *(undefined8 *)(puVar28 + -0xb0) = 0x44bbebf;
                iVar12 = (*pIVar5)(pIVar25,pMVar29);
                *(undefined8 *)(puVar28 + -0xb0) = 0x44bbeca;
                uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
                pGVar8 = (pIVar25->_1).image;
                pMVar29 = (pGVar8->vtable)._5_unknown.method;
                pIVar26 = (Il2CppClass *)(ulong)uVar13;
                pIVar5 = (pGVar8->vtable)._5_unknown.methodPtr;
                *(undefined8 *)(puVar28 + -0xb0) = 0x44bbedf;
                pIVar23 = pIVar25;
                plVar16 = (long *)(*pIVar5)(pIVar25,pIVar26,pMVar29);
                pIVar17 = pIVar25;
                if (plVar16 != (long *)0x0) {
                  uVar18 = *(undefined8 *)(*plVar16 + 0x1b0);
                  pcVar4 = *(code **)(*plVar16 + 0x1a8);
                  *(undefined8 *)(puVar28 + -0xb0) = 0x44bbf01;
                  pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pcVar4)(plVar16,"Name",uVar18);
                  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                    *(undefined8 *)(puVar28 + -0xb0) = 0x44bbf1c;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pMVar29 = (MethodInfo *)0x0;
                  *(undefined8 *)(puVar28 + -0xb0) = 0x44bbf26;
                  pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
                  ApplicationManagers_MusicManager__SetSong(pSVar15,0.0,pMVar29);
                  return;
                }
              }
            }
          }
          else {
            lVar21 = *plVar16;
            if (lVar21 != 0) {
              __this_00 = *(System_Collections_Generic_List_object__o **)(lVar21 + 0x50);
              pIVar23 = (Il2CppClass *)0x0;
              if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                iVar1 = (__this_00->fields)._size;
                if (iVar1 == 0) {
                  return;
                }
                uVar13 = *(int *)(lVar21 + 0x4c) + 1;
                pMVar29 = (MethodInfo *)0x0;
                if ((int)uVar13 < iVar1) {
                  pMVar29 = (MethodInfo *)(ulong)uVar13;
                }
                *(int32_t *)(lVar21 + 0x4c) = (int32_t)pMVar29;
                *(undefined8 *)(puVar28 + -0xb0) = 0x44bbe67;
                pSVar15 = (System_String_o *)
                          System_Collections_Generic_List_object___get_Item
                                    (__this_00,(int32_t)pMVar29,MethodInfo_String_get_Item);
                ApplicationManagers_MusicManager__SetSong(pSVar15,0.0,pMVar29);
                return;
              }
            }
          }
        }
      }
      *(undefined8 *)(puVar28 + -0xb0) = 0x44bbf37;
      auVar35 = il2cpp_runtime_helper_022b2c90();
      *(long **)(puVar28 + -0xb0) = b;
      *(Il2CppClass **)(puVar28 + -0xb8) = pIVar24;
      *(Il2CppClass **)(puVar28 + -0xc0) = pIVar30;
      *(Il2CppClass **)(puVar28 + -200) = pIVar17;
      *(long *)(puVar28 + -0xd0) = auVar35._0_8_;
      uVar32 = auVar35._8_8_ & 0xffffffff;
      if (g_data_057aea83 == '\0') {
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bbf65;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bbf71;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bbf7d;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bbf89;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bbf95;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bbfa1;
        il2cpp_runtime_helper_023445d0(&"/");
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bbfad;
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aea83 = '\x01';
      }
      *(undefined8 *)(puVar28 + -0xd8) = 0x44bbfc8;
      pMVar29 = "";
      bVar11 = System_String__op_Inequality
                         ((System_String_o *)pIVar23,(System_String_o *)"",(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bbfe3;
        pMVar29 = "/";
        pIVar26 = (Il2CppClass *)
                  System_String__Concat_3af7150
                            ((System_String_o *)pIVar23,(System_String_o *)"/",
                             (System_String_o *)pIVar26,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bbffe;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar28 + -0xd8) = 0x44bc006;
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  ApplicationManagers_ResourceManager__GetExternalTexture((System_String_o *)pIVar26,pMVar29);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bc021;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar17 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar28 + -0xd8) = 0x44bc02d;
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      cVar10 = (char)uVar32;
      if ((char)bVar11 != '\0') {
        if (cVar10 != '\0') {
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            *(undefined8 *)(puVar28 + -0xd8) = 0x44bc04b;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
                   **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
          pIVar30 = (Il2CppClass *)0x0;
          if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
          *(undefined8 *)(puVar28 + -0xd8) = 0x44bc073;
          pIVar17 = pIVar26;
          bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             (pSVar9,(Il2CppObject *)pIVar26,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar11 == '\0') {
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              *(undefined8 *)(puVar28 + -0xd8) = 0x44bc088;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
            pIVar30 = (Il2CppClass *)0x0;
            if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
            *(undefined8 *)(puVar28 + -0xd8) = 0x44bc0b3;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar9,(Il2CppObject *)pIVar26,(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
          }
        }
        return;
      }
      if (cVar10 == '\0') {
        UnityEngine_Resources__Load((System_String_o *)pIVar26,(MethodInfo *)0x0);
        return;
      }
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bc0db;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar30 = (Il2CppClass *)0x0;
      if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bc103;
        pIVar17 = pIVar26;
        bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                           (pSVar9,(Il2CppObject *)pIVar26,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar11 == '\0') {
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            *(undefined8 *)(puVar28 + -0xd8) = 0x44bc118;
            il2cpp_runtime_helper_02337ed0();
          }
          __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                      **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
          pIVar17 = (Il2CppClass *)0x0;
          *(undefined8 *)(puVar28 + -0xd8) = 0x44bc12f;
          pIVar30 = pIVar26;
          value = UnityEngine_Resources__Load((System_String_o *)pIVar26,(MethodInfo *)0x0);
          if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
          *(undefined8 *)(puVar28 + -0xd8) = 0x44bc14c;
          pIVar17 = pIVar26;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this_01,(Il2CppObject *)pIVar26,(Il2CppObject *)value,MethodInfo_Void_set_Item);
        }
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          *(undefined8 *)(puVar28 + -0xd8) = 0x44bc15d;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar30 = (Il2CppClass *)0x0;
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8)
            != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___get_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)pIVar26,MethodInfo_Object_get_Item);
          return;
        }
      }
label_044bc19f:
      *(undefined8 *)(puVar28 + -0xd8) = 0x44bc1a4;
      uVar34 = il2cpp_runtime_helper_022b2c90();
      *(long **)(puVar28 + -0xd8) = &TypeInfo_ResourceManager;
      *(ulong *)(puVar28 + -0xe0) = uVar32;
      *(Il2CppClass **)(puVar28 + -0xe8) = pIVar26;
      *(undefined4 *)(puVar28 + -0xec) = uVar34;
      if (g_data_057aea6a == '\0') {
        *(undefined8 *)(puVar28 + -0x100) = 0x44bc1da;
        il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
        g_data_057aea6a = '\x01';
      }
      *(undefined8 *)(puVar28 + -0x100) = 0x44bc1f0;
      __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
      uVar34 = 0;
      *(undefined8 *)(puVar28 + -0x100) = 0x44bc1fd;
      pIVar20 = __this_02;
      System_Object___ctor(__this_02,(MethodInfo *)0x0);
      *(undefined4 *)&__this_02[1].klass = 0;
      if (__this_02 != (Il2CppObject *)0x0) {
        __this_02[2].klass = pIVar30;
        *(undefined8 *)(puVar28 + -0x100) = 0x44bc219;
        il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar30);
        __this_02[3].klass = pIVar17;
        *(undefined8 *)(puVar28 + -0x100) = 0x44bc22c;
        il2cpp_runtime_helper_022b4080(__this_02 + 3,pIVar17);
        *(undefined4 *)&__this_02[2].monitor = *(undefined4 *)(puVar28 + -0xec);
        return;
      }
      *(undefined8 *)(puVar28 + -0x100) = 0x44bc249;
      uVar18 = il2cpp_runtime_helper_022b2c90();
      *(System_Collections_Generic_Dictionary_object__object__o **)(puVar28 + -0x100) = __this_01;
      *(undefined8 *)(puVar28 + -0x108) = 0;
      *(undefined8 *)(puVar28 + -0x110) = uVar18;
      *(undefined8 *)(puVar28 + -0x118) = 0x44bc25f;
      System_Object___ctor(pIVar20,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar20[1].klass = uVar34;
      return;
    }
    if (*(char *)(lVar21 + 0x11) == '\0') {
      return;
    }
    unaff_R15 = &TypeInfo_MusicManager;
    plVar16 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
    if (plVar16 == (long *)0x0) goto label_044bb042;
    uVar18 = *(undefined8 *)(*plVar16 + 0x1b0);
    pcVar4 = *(code **)(*plVar16 + 0x1a8);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44baf34;
    plVar16 = (long *)(*pcVar4)(plVar16,"Grabbed",uVar18);
    if (plVar16 == (long *)0x0) goto label_044bb042;
    in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar16;
    pMVar29 = (in_RCX->vtable)._5_get_Item.method;
    pIVar5 = (in_RCX->vtable)._5_get_Item.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44baf52;
    pIVar17 = (Il2CppClass *)(*pIVar5)(plVar16,0,pMVar29);
    lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
    if (lVar21 == 0) goto label_044bb042;
    *(undefined1 *)(lVar21 + 0x68) = 0;
    unaff_RBX = *(Il2CppClass **)(lVar21 + 0x20);
    unaff_R12 = &TypeInfo_MusicPlaylist;
    if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44baf8c;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bafa5;
    bVar11 = System_String__op_Equality((System_String_o *)unaff_RBX,pSVar15,(MethodInfo *)0x0);
    in_RCX = *(SimpleJSONFixed_JSONNode_c **)(TypeInfo_MusicManager + 0xb8);
    pIVar5 = (in_RCX->_1).image;
    if ((char)bVar11 != '\0') {
      if (pIVar5 != (Il2CppMethodPointer)0x0) {
        *(undefined8 *)(pIVar5 + 0x70) = *(undefined8 *)(pIVar5 + 0x58);
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bafd0;
        il2cpp_runtime_helper_022b4080(pIVar5 + 0x70);
        unaff_RBX = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
        if ((unaff_RBX != (Il2CppClass *)0x0) &&
           (pUVar6 = *(UnityEngine_AudioSource_o **)&(unaff_RBX->_1).byval_arg.bits,
           pUVar6 != (UnityEngine_AudioSource_o *)0x0)) {
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44baff2;
          fVar33 = UnityEngine_AudioSource__get_time(pUVar6,(MethodInfo *)0x0);
          *(float *)&(unaff_RBX->_1).klass = fVar33;
          goto label_044bb02f;
        }
      }
      goto label_044bb042;
    }
    if (pIVar5 == (Il2CppMethodPointer)0x0) goto label_044bb042;
    *(undefined8 *)(pIVar5 + 0x70) = **(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb02f;
    il2cpp_runtime_helper_022b4080(pIVar5 + 0x70);
label_044bb02f:
    uVar18 = *(undefined8 *)((long)register0x00000020 + -0x20);
    unaff_R12 = *(long **)((long)register0x00000020 + -0x18);
    unaff_R14 = *(Il2CppClass **)((long)register0x00000020 + -0x10);
    plVar19 = *(long **)((long)register0x00000020 + -8);
    unaff_RBX = pIVar17;
ApplicationManagers_MusicManager__PlayImmediateTransition:
    *(long **)((long)register0x00000020 + -8) = plVar19;
    *(Il2CppClass **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = uVar18;
    if (g_data_057aea69 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44babb1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44babbd;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44babc9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44babd5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44babe1;
      il2cpp_runtime_helper_023445d0(&"Name");
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44babed;
      il2cpp_runtime_helper_023445d0(&"Music");
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44babf9;
      il2cpp_runtime_helper_023445d0(&"Volume");
      g_data_057aea69 = '\x01';
    }
    unaff_R15 = &TypeInfo_JSONNode;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bac18;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bac24;
    bVar11 = SimpleJSONFixed_JSONNode__op_Inequality
                       ((SimpleJSONFixed_JSONNode_o *)unaff_RBX,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return;
    }
    if (unaff_RBX == (Il2CppClass *)0x0) {
label_044bae61:
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bae66;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pSVar2 = (unaff_RBX->_1).image;
      pcVar3 = pSVar2[1]._1.namespaze;
      pcVar4 = (code *)pSVar2[1]._1.name;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bac52;
      cVar10 = (*pcVar4)(unaff_RBX,"Name",pcVar3);
      if (cVar10 == '\0') {
        return;
      }
      pSVar2 = (unaff_RBX->_1).image;
      pMVar29 = (pSVar2->vtable)._7_CompareTo.method;
      pIVar5 = (pSVar2->vtable)._7_CompareTo.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bac70;
      pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(unaff_RBX,"Name",pMVar29);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bac84;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bac8e;
      pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44baca9;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bacbd;
      unaff_R14 = (Il2CppClass *)
                  ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar15,0,(MethodInfo *)in_RCX);
      if ((unaff_R14 == (Il2CppClass *)0x0) || ((unaff_R14->_1).image == TypeInfo_AudioClip)) {
        pSVar2 = (unaff_RBX->_1).image;
        pMVar29 = (pSVar2->vtable)._7_CompareTo.method;
        pIVar5 = (pSVar2->vtable)._7_CompareTo.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bacf5;
        pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(unaff_RBX,"Volume",pMVar29);
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bacff;
        fVar33 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar14,(MethodInfo *)0x0);
        unaff_R15 = &TypeInfo_MusicManager;
        lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
        if (lVar21 != 0) {
          *(float *)((long)register0x00000020 + -0x1c) = fVar33;
          pUVar6 = *(UnityEngine_AudioSource_o **)(lVar21 + 0x28);
          if (pUVar6 != (UnityEngine_AudioSource_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bad39;
            UnityEngine_AudioSource__set_clip(pUVar6,(UnityEngine_AudioClip_o *)unaff_R14,(MethodInfo *)0x0);
            plVar16 = *(long **)(TypeInfo_MusicManager + 0xb8);
            in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar16;
            if (in_RCX != (SimpleJSONFixed_JSONNode_c *)0x0) {
              unaff_RBX = *(Il2CppClass **)&(in_RCX->_1).byval_arg.bits;
              if (g_data_057aea72 == '\0') {
                *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bad64;
                il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
                *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bad70;
                il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bad7c;
                il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
                g_data_057aea72 = '\x01';
                plVar16 = *(long **)(TypeInfo_MusicManager + 0xb8);
              }
              fVar33 = 0.0;
              if ((char)plVar16[2] == '\0') {
                lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
                if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x28), lVar21 == 0)) goto label_044bae61;
                fVar33 = *(float *)(lVar21 + 0x14) * 0.4;
              }
              if (unaff_RBX != (Il2CppClass *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44badee;
                UnityEngine_AudioSource__set_volume
                          ((UnityEngine_AudioSource_o *)unaff_RBX,
                           *(float *)((long)register0x00000020 + -0x1c) * fVar33,(MethodInfo *)0x0);
                if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
                   (pUVar6 = *(UnityEngine_AudioSource_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x28),
                   pUVar6 != (UnityEngine_AudioSource_o *)0x0)) {
                  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bae10;
                  UnityEngine_AudioSource__Play_4daa2c0(pUVar6,(MethodInfo *)0x0);
                  if (unaff_R14 != (Il2CppClass *)0x0) {
                    lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
                    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bae2c;
                    fVar33 = UnityEngine_AudioClip__get_length
                                       ((UnityEngine_AudioClip_o *)unaff_R14,(MethodInfo *)0x0);
                    unaff_RBX = (Il2CppClass *)0x0;
                    if (lVar21 != 0) {
                      *(float *)(lVar21 + 0x40) = fVar33;
                      lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
                      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bae4d;
                      fVar33 = UnityEngine_AudioClip__get_length
                                         ((UnityEngine_AudioClip_o *)unaff_R14,(MethodInfo *)0x0);
                      unaff_RBX = (Il2CppClass *)0x0;
                      if (lVar21 != 0) {
                        *(float *)(lVar21 + 100) = fVar33;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto label_044bae61;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bae6e;
    in_RAX = il2cpp_runtime_helper_022b2fd0(unaff_R14);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x28);
  } while( true );
}


// ApplicationManagers.MusicManager$$OnEscapeGrab
// il2cpp: void ApplicationManagers_MusicManager__OnEscapeGrab (const MethodInfo* method);
// 0x44bb050

void ApplicationManagers_MusicManager__OnEscapeGrab(MethodInfo *method)

{
  int iVar1;
  System_String_c *pSVar2;
  char *pcVar3;
  UnityEngine_AudioSource_o *pUVar4;
  Il2CppMethodPointer pIVar5;
  code *pcVar6;
  void *pvVar7;
  GameManagers_InGameManager_c *pGVar8;
  UnityEngine_MonoBehaviour_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  char cVar10;
  int32_t iVar11;
  uint uVar12;
  bool_conflict bVar13;
  undefined8 in_RAX;
  long *plVar14;
  long *plVar15;
  SimpleJSONFixed_JSONNode_o *pSVar16;
  System_String_o *pSVar17;
  Il2CppObject *pIVar18;
  undefined8 uVar19;
  long lVar20;
  SimpleJSONFixed_JSONNode_o *pSVar21;
  Il2CppClass *pIVar22;
  Il2CppClass *pIVar23;
  Il2CppClass *pIVar24;
  Il2CppClass *pIVar25;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UnityEngine_Object_o *value;
  Il2CppObject *__this_02;
  SimpleJSONFixed_JSONNode_c *in_RCX;
  UnityEngine_Object_c *pUVar26;
  Il2CppClass *unaff_RBX;
  Il2CppClass *pIVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined8 unaff_RBP;
  long *b;
  MethodInfo *pMVar30;
  Il2CppClass *pIVar31;
  byte bVar32;
  long *unaff_R12;
  undefined8 unaff_R13;
  Il2CppClass *unaff_R14;
  ulong uVar33;
  long *unaff_R15;
  float fVar34;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar35;
  undefined1 auVar36 [16];
  
code_r0x044bb050:
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (g_data_057aea63 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x44bb066;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    g_data_057aea63 = '\x01';
  }
  lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar20 != 0) {
    if (0.0 < *(float *)(lVar20 + 100)) {
      *(undefined4 *)(lVar20 + 100) = 0;
      *(undefined4 *)(lVar20 + 0x40) = 0;
      *(undefined1 *)(lVar20 + 0x7c) = 1;
    }
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x10) = 0x44bb0ac;
  il2cpp_runtime_helper_022b2c90();
  puVar29 = (undefined1 *)((long)register0x00000020 + -0x10);
  *(Il2CppClass **)((long)register0x00000020 + -0x10) = unaff_RBX;
  if (g_data_057aea64 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x18) = 0x44bb0c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)((long)register0x00000020 + -0x18) = 0x44bb0d2;
    il2cpp_runtime_helper_023445d0(&"Effect");
    g_data_057aea64 = '\x01';
  }
  plVar15 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if ((SimpleJSONFixed_JSONNode_o *)plVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bb14e:
    *(undefined8 *)((long)register0x00000020 + -0x18) = 0x44bb153;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar30 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._7_get_Item.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x18) = 0x44bb10d;
    plVar14 = (long *)(*pIVar5)(plVar15,"Effect",pMVar30);
    if (plVar14 == (long *)0x0) goto label_044bb14e;
    uVar19 = *(undefined8 *)(*plVar14 + 0x1f0);
    pcVar6 = *(code **)(*plVar14 + 0x1e8);
    *(undefined8 *)((long)register0x00000020 + -0x18) = 0x44bb128;
    iVar11 = (*pcVar6)(plVar14,uVar19);
    *(undefined8 *)((long)register0x00000020 + -0x18) = 0x44bb133;
    uVar12 = UnityEngine_Random__Range_4df2410(0,iVar11,(MethodInfo *)0x0);
    in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar14;
    pMVar30 = (in_RCX->vtable)._5_get_Item.method;
    pIVar5 = (in_RCX->vtable)._5_get_Item.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x18) = 0x44bb148;
    plVar15 = (long *)(*pIVar5)(plVar14,(ulong)uVar12,pMVar30);
    unaff_RBX = *(Il2CppClass **)((long)register0x00000020 + -0x10);
    puVar29 = (undefined1 *)((long)register0x00000020 + -8);
  }
  *(long **)(puVar29 + -8) = unaff_R15;
  *(Il2CppClass **)(puVar29 + -0x10) = unaff_R14;
  *(Il2CppClass **)(puVar29 + -0x18) = unaff_RBX;
  if (g_data_057aea68 == '\0') {
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb181;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb18d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb199;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1a5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1b1;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1bd;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1c9;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea68 = '\x01';
  }
  plVar14 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1e8;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar25 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar29 + -0x30) = 0x44bb1f4;
  bVar13 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)plVar15,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return;
  }
  if ((SimpleJSONFixed_JSONNode_o *)plVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bb384:
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb389;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar30 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._28_HasKey.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._28_HasKey.methodPtr;
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb222;
    cVar10 = (*pIVar5)(plVar15,"Name",pMVar30);
    if (cVar10 == '\0') {
      return;
    }
    pMVar30 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._7_get_Item.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb240;
    pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(plVar15,"Name",pMVar30);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0x30) = 0x44bb254;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb25e;
    pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0x30) = 0x44bb279;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb28d;
    unaff_R14 = (Il2CppClass *)
                ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar17,0,(MethodInfo *)in_RCX);
    if ((unaff_R14 == (Il2CppClass *)0x0) || (pIVar25 = TypeInfo_AudioClip, (unaff_R14->_1).image == TypeInfo_AudioClip))
    {
      pMVar30 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._7_get_Item.method;
      pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar29 + -0x30) = 0x44bb2c5;
      pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(plVar15,"Volume",pMVar30);
      pIVar25 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar29 + -0x30) = 0x44bb2cf;
      fVar34 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar16,(MethodInfo *)0x0);
      *(float *)(puVar29 + -0x1c) = fVar34;
      plVar14 = (long *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
      if ((Il2CppClass *)plVar14 != (Il2CppClass *)0x0) {
        if (g_data_057aea6a == '\0') {
          *(undefined8 *)(puVar29 + -0x30) = 0x44bb307;
          il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
          g_data_057aea6a = '\x01';
        }
        *(undefined8 *)(puVar29 + -0x30) = 0x44bb31d;
        pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
        pIVar25 = (Il2CppClass *)0x0;
        *(undefined8 *)(puVar29 + -0x30) = 0x44bb32a;
        System_Object___ctor(pIVar18,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar18[1].klass = 0;
        plVar15 = (long *)0x0;
        if (pIVar18 != (Il2CppObject *)0x0) {
          pIVar18[2].klass = (Il2CppClass *)plVar14;
          *(undefined8 *)(puVar29 + -0x30) = 0x44bb346;
          il2cpp_runtime_helper_022b4080(pIVar18 + 2,plVar14);
          pIVar18[3].klass = unaff_R14;
          *(undefined8 *)(puVar29 + -0x30) = 0x44bb359;
          il2cpp_runtime_helper_022b4080(pIVar18 + 3,unaff_R14);
          *(undefined4 *)&pIVar18[2].monitor = *(undefined4 *)(puVar29 + -0x1c);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)plVar14,(System_Collections_IEnumerator_o *)pIVar18,
                     (MethodInfo *)0x0);
          return;
        }
      }
      goto label_044bb384;
    }
  }
  *(undefined8 *)(puVar29 + -0x30) = 0x44bb391;
  uVar19 = il2cpp_runtime_helper_022b2fd0(unaff_R14);
  *(Il2CppClass **)(puVar29 + -0x30) = unaff_R14;
  *(long **)(puVar29 + -0x38) = plVar15;
  *(undefined8 *)(puVar29 + -0x40) = uVar19;
  if (g_data_057aea65 == '\0') {
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb3b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb3c5;
    il2cpp_runtime_helper_023445d0(&"Transition");
    g_data_057aea65 = '\x01';
  }
  b = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if ((Il2CppClass *)b != (Il2CppClass *)0x0) {
    pvVar7 = (((Il2CppClass *)b)->_1).image;
    uVar19 = *(undefined8 *)((long)pvVar7 + 0x1b0);
    pcVar6 = *(code **)((long)pvVar7 + 0x1a8);
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb400;
    pIVar25 = "Transition";
    plVar15 = (long *)(*pcVar6)(b,"Transition",uVar19);
    if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
       (*(undefined2 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x68) = 0x101,
       (SimpleJSONFixed_JSONNode_o *)plVar15 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      pMVar30 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._11_get_Count.method;
      pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._11_get_Count.methodPtr;
      *(undefined8 *)(puVar29 + -0x48) = 0x44bb433;
      iVar11 = (*pIVar5)(plVar15,pMVar30);
      *(undefined8 *)(puVar29 + -0x48) = 0x44bb43e;
      uVar12 = UnityEngine_Random__Range_4df2410(0,iVar11,(MethodInfo *)0x0);
      in_RCX = ((SimpleJSONFixed_JSONNode_o *)plVar15)->klass;
      pMVar30 = (in_RCX->vtable)._5_get_Item.method;
      pIVar5 = (in_RCX->vtable)._5_get_Item.methodPtr;
      *(undefined8 *)(puVar29 + -0x48) = 0x44bb453;
      unaff_RBX = (Il2CppClass *)(*pIVar5)(plVar15,(ulong)uVar12,pMVar30);
      uVar19 = *(undefined8 *)(puVar29 + -0x38);
      pIVar25 = *(Il2CppClass **)(puVar29 + -0x30);
      puVar28 = puVar29 + -0x28;
      do {
        *(long **)(puVar28 + -8) = plVar14;
        *(Il2CppClass **)(puVar28 + -0x10) = pIVar25;
        *(undefined8 *)(puVar28 + -0x18) = uVar19;
        if (g_data_057aea69 == '\0') {
          *(undefined8 *)(puVar28 + -0x30) = 0x44babb1;
          il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
          *(undefined8 *)(puVar28 + -0x30) = 0x44babbd;
          il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
          *(undefined8 *)(puVar28 + -0x30) = 0x44babc9;
          il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
          *(undefined8 *)(puVar28 + -0x30) = 0x44babd5;
          il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
          *(undefined8 *)(puVar28 + -0x30) = 0x44babe1;
          il2cpp_runtime_helper_023445d0(&"Name");
          *(undefined8 *)(puVar28 + -0x30) = 0x44babed;
          il2cpp_runtime_helper_023445d0(&"Music");
          *(undefined8 *)(puVar28 + -0x30) = 0x44babf9;
          il2cpp_runtime_helper_023445d0(&"Volume");
          g_data_057aea69 = '\x01';
        }
        unaff_R15 = &TypeInfo_JSONNode;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          *(undefined8 *)(puVar28 + -0x30) = 0x44bac18;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar28 + -0x30) = 0x44bac24;
        bVar13 = SimpleJSONFixed_JSONNode__op_Inequality
                           ((SimpleJSONFixed_JSONNode_o *)unaff_RBX,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          return;
        }
        unaff_R14 = pIVar25;
        if (unaff_RBX == (Il2CppClass *)0x0) {
label_044bae61:
          *(undefined8 *)(puVar28 + -0x30) = 0x44bae66;
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          pSVar2 = (unaff_RBX->_1).image;
          pcVar3 = pSVar2[1]._1.namespaze;
          pcVar6 = (code *)pSVar2[1]._1.name;
          *(undefined8 *)(puVar28 + -0x30) = 0x44bac52;
          cVar10 = (*pcVar6)(unaff_RBX,"Name",pcVar3);
          if (cVar10 == '\0') {
            return;
          }
          pSVar2 = (unaff_RBX->_1).image;
          pMVar30 = (pSVar2->vtable)._7_CompareTo.method;
          pIVar5 = (pSVar2->vtable)._7_CompareTo.methodPtr;
          *(undefined8 *)(puVar28 + -0x30) = 0x44bac70;
          pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(unaff_RBX,"Name",pMVar30);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            *(undefined8 *)(puVar28 + -0x30) = 0x44bac84;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar28 + -0x30) = 0x44bac8e;
          pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            *(undefined8 *)(puVar28 + -0x30) = 0x44baca9;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar28 + -0x30) = 0x44bacbd;
          unaff_R14 = (Il2CppClass *)
                      ApplicationManagers_ResourceManager__LoadAsset
                                ("Music",pSVar17,0,(MethodInfo *)in_RCX);
          if ((unaff_R14 == (Il2CppClass *)0x0) || ((unaff_R14->_1).image == TypeInfo_AudioClip)) {
            pSVar2 = (unaff_RBX->_1).image;
            pMVar30 = (pSVar2->vtable)._7_CompareTo.method;
            pIVar5 = (pSVar2->vtable)._7_CompareTo.methodPtr;
            *(undefined8 *)(puVar28 + -0x30) = 0x44bacf5;
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(unaff_RBX,"Volume",pMVar30);
            *(undefined8 *)(puVar28 + -0x30) = 0x44bacff;
            fVar34 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar16,(MethodInfo *)0x0);
            unaff_R15 = &TypeInfo_MusicManager;
            lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
            if (lVar20 != 0) {
              *(float *)(puVar28 + -0x1c) = fVar34;
              pUVar4 = *(UnityEngine_AudioSource_o **)(lVar20 + 0x28);
              if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                *(undefined8 *)(puVar28 + -0x30) = 0x44bad39;
                UnityEngine_AudioSource__set_clip
                          (pUVar4,(UnityEngine_AudioClip_o *)unaff_R14,(MethodInfo *)0x0);
                plVar15 = *(long **)(TypeInfo_MusicManager + 0xb8);
                in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar15;
                if (in_RCX != (SimpleJSONFixed_JSONNode_c *)0x0) {
                  unaff_RBX = *(Il2CppClass **)&(in_RCX->_1).byval_arg.bits;
                  if (g_data_057aea72 == '\0') {
                    *(undefined8 *)(puVar28 + -0x30) = 0x44bad64;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
                    *(undefined8 *)(puVar28 + -0x30) = 0x44bad70;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                    *(undefined8 *)(puVar28 + -0x30) = 0x44bad7c;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
                    g_data_057aea72 = '\x01';
                    plVar15 = *(long **)(TypeInfo_MusicManager + 0xb8);
                  }
                  fVar34 = 0.0;
                  if ((char)plVar15[2] == '\0') {
                    lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
                    if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x28), lVar20 == 0)) goto label_044bae61;
                    fVar34 = *(float *)(lVar20 + 0x14) * 0.4;
                  }
                  if (unaff_RBX != (Il2CppClass *)0x0) {
                    *(undefined8 *)(puVar28 + -0x30) = 0x44badee;
                    UnityEngine_AudioSource__set_volume
                              ((UnityEngine_AudioSource_o *)unaff_RBX,*(float *)(puVar28 + -0x1c) * fVar34,
                               (MethodInfo *)0x0);
                    if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
                       (pUVar4 = *(UnityEngine_AudioSource_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x28),
                       pUVar4 != (UnityEngine_AudioSource_o *)0x0)) {
                      *(undefined8 *)(puVar28 + -0x30) = 0x44bae10;
                      UnityEngine_AudioSource__Play_4daa2c0(pUVar4,(MethodInfo *)0x0);
                      if (unaff_R14 != (Il2CppClass *)0x0) {
                        lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
                        *(undefined8 *)(puVar28 + -0x30) = 0x44bae2c;
                        fVar34 = UnityEngine_AudioClip__get_length
                                           ((UnityEngine_AudioClip_o *)unaff_R14,(MethodInfo *)0x0);
                        unaff_RBX = (Il2CppClass *)0x0;
                        if (lVar20 != 0) {
                          *(float *)(lVar20 + 0x40) = fVar34;
                          lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
                          *(undefined8 *)(puVar28 + -0x30) = 0x44bae4d;
                          fVar34 = UnityEngine_AudioClip__get_length
                                             ((UnityEngine_AudioClip_o *)unaff_R14,(MethodInfo *)0x0);
                          unaff_RBX = (Il2CppClass *)0x0;
                          if (lVar20 != 0) {
                            *(float *)(lVar20 + 100) = fVar34;
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto label_044bae61;
          }
        }
        *(undefined8 *)(puVar28 + -0x30) = 0x44bae6e;
        uVar19 = il2cpp_runtime_helper_022b2fd0(unaff_R14);
        *(long **)(puVar28 + -0x30) = unaff_R15;
        *(Il2CppClass **)(puVar28 + -0x38) = unaff_R14;
        *(long **)(puVar28 + -0x40) = unaff_R12;
        *(Il2CppClass **)(puVar28 + -0x48) = unaff_RBX;
        register0x00000020 = (BADSPACEBASE *)(puVar28 + -0x50);
        *(undefined8 *)(puVar28 + -0x50) = uVar19;
        if (g_data_057aea62 == '\0') {
          *(undefined8 *)(puVar28 + -0x58) = 0x44bae8d;
          il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
          *(undefined8 *)(puVar28 + -0x58) = 0x44bae99;
          il2cpp_runtime_helper_023445d0(&TypeInfo_MusicPlaylist);
          *(undefined8 *)(puVar28 + -0x58) = 0x44baea5;
          il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
          *(undefined8 *)(puVar28 + -0x58) = 0x44baeb1;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
          *(undefined8 *)(puVar28 + -0x58) = 0x44baebd;
          il2cpp_runtime_helper_023445d0(&"Grabbed");
          g_data_057aea62 = '\x01';
        }
        lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x38), lVar20 == 0)) goto label_044bb042;
        if (*(char *)(lVar20 + 0x11) == '\0') {
          return;
        }
        unaff_R15 = &TypeInfo_MusicManager;
        plVar15 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
        if (plVar15 == (long *)0x0) goto label_044bb042;
        uVar19 = *(undefined8 *)(*plVar15 + 0x1b0);
        pcVar6 = *(code **)(*plVar15 + 0x1a8);
        *(undefined8 *)(puVar28 + -0x58) = 0x44baf34;
        plVar15 = (long *)(*pcVar6)(plVar15,"Grabbed",uVar19);
        if (plVar15 == (long *)0x0) goto label_044bb042;
        in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar15;
        pMVar30 = (in_RCX->vtable)._5_get_Item.method;
        pIVar5 = (in_RCX->vtable)._5_get_Item.methodPtr;
        *(undefined8 *)(puVar28 + -0x58) = 0x44baf52;
        unaff_R14 = (Il2CppClass *)(*pIVar5)(plVar15,0,pMVar30);
        lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
        if (lVar20 == 0) goto label_044bb042;
        *(undefined1 *)(lVar20 + 0x68) = 0;
        unaff_RBX = *(Il2CppClass **)(lVar20 + 0x20);
        unaff_R12 = &TypeInfo_MusicPlaylist;
        if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
          *(undefined8 *)(puVar28 + -0x58) = 0x44baf8c;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar17 = *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
        *(undefined8 *)(puVar28 + -0x58) = 0x44bafa5;
        bVar13 = System_String__op_Equality((System_String_o *)unaff_RBX,pSVar17,(MethodInfo *)0x0);
        in_RCX = *(SimpleJSONFixed_JSONNode_c **)(TypeInfo_MusicManager + 0xb8);
        pIVar5 = (in_RCX->_1).image;
        if ((char)bVar13 == '\0') {
          if (pIVar5 == (Il2CppMethodPointer)0x0) goto label_044bb042;
          *(undefined8 *)(pIVar5 + 0x70) = **(undefined8 **)(g_data_057b9c00 + 0xb8);
          *(undefined8 *)(puVar28 + -0x58) = 0x44bb02f;
          il2cpp_runtime_helper_022b4080(pIVar5 + 0x70);
        }
        else {
          if (pIVar5 == (Il2CppMethodPointer)0x0) goto label_044bb042;
          *(undefined8 *)(pIVar5 + 0x70) = *(undefined8 *)(pIVar5 + 0x58);
          *(undefined8 *)(puVar28 + -0x58) = 0x44bafd0;
          il2cpp_runtime_helper_022b4080(pIVar5 + 0x70);
          unaff_RBX = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
          if ((unaff_RBX == (Il2CppClass *)0x0) ||
             (pUVar4 = *(UnityEngine_AudioSource_o **)&(unaff_RBX->_1).byval_arg.bits,
             pUVar4 == (UnityEngine_AudioSource_o *)0x0)) goto label_044bb042;
          *(undefined8 *)(puVar28 + -0x58) = 0x44baff2;
          fVar34 = UnityEngine_AudioSource__get_time(pUVar4,(MethodInfo *)0x0);
          *(float *)&(unaff_RBX->_1).klass = fVar34;
        }
        uVar19 = *(undefined8 *)(puVar28 + -0x48);
        unaff_R12 = *(long **)(puVar28 + -0x40);
        pIVar25 = *(Il2CppClass **)(puVar28 + -0x38);
        plVar14 = *(long **)(puVar28 + -0x30);
        puVar28 = puVar28 + -0x28;
        unaff_RBX = unaff_R14;
      } while( true );
    }
  }
  *(undefined8 *)(puVar29 + -0x48) = 0x44bb467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar29 + -0x48) = unaff_RBP;
  *(long **)(puVar29 + -0x50) = plVar14;
  *(long **)(puVar29 + -0x58) = &TypeInfo_MusicManager;
  *(long **)(puVar29 + -0x60) = unaff_R12;
  *(long **)(puVar29 + -0x68) = plVar15;
  pIVar27 = (Il2CppClass *)((ulong)pIVar25 & 0xffffffff);
  plVar14 = b;
  if (g_data_057aea67 == '\0') {
    *(undefined8 *)(puVar29 + -0x70) = 0x44bb493;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    plVar14 = &TypeInfo_MusicPlaylist;
    *(undefined8 *)(puVar29 + -0x70) = 0x44bb49f;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea67 = '\x01';
  }
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    pSVar17 = *(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    *(undefined8 *)(puVar29 + -0x70) = 0x44bb4d1;
    pIVar25 = (Il2CppClass *)b;
    uVar12 = System_String__op_Inequality(pSVar17,(System_String_o *)b,(MethodInfo *)0x0);
    unaff_R12 = (long *)(ulong)uVar12;
    lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
    plVar14 = (long *)0x0;
    if (lVar20 != 0) {
      *(long **)(lVar20 + 0x20) = b;
      plVar14 = (long *)(lVar20 + 0x20);
      *(undefined8 *)(puVar29 + -0x70) = 0x44bb4fa;
      pIVar25 = (Il2CppClass *)b;
      il2cpp_runtime_helper_022b4080();
      lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
      if (lVar20 != 0) {
        cVar10 = *(char *)(lVar20 + 0x68);
        in_RCX = (SimpleJSONFixed_JSONNode_c *)CONCAT71((int7)((ulong)in_RCX >> 8),cVar10);
        if (*(char *)(lVar20 + 0x60) == '\0') {
          if (cVar10 != '\0') goto label_044bb52e;
          if (0.0 < *(float *)(lVar20 + 100)) {
            *(undefined4 *)(lVar20 + 0x40) = 0;
          }
label_044bb578:
          *(undefined4 *)(lVar20 + 100) = 0;
        }
        else {
          *(undefined4 *)(lVar20 + 0x40) = 0;
          if (cVar10 == '\0') goto label_044bb578;
label_044bb52e:
          plVar15 = &TypeInfo_MusicPlaylist;
          if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
            *(undefined8 *)(puVar29 + -0x70) = 0x44bb546;
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar25 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
          *(undefined8 *)(puVar29 + -0x70) = 0x44bb55e;
          plVar14 = b;
          bVar13 = System_String__op_Equality
                             ((System_String_o *)b,(System_String_o *)pIVar25,(MethodInfo *)0x0);
          if ((char)bVar13 != '\0') {
            lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
            if (lVar20 == 0) goto label_044bb684;
            goto label_044bb578;
          }
        }
        plVar15 = &TypeInfo_MusicPlaylist;
        if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
          *(undefined8 *)(puVar29 + -0x70) = 0x44bb597;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar25 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
        *(undefined8 *)(puVar29 + -0x70) = 0x44bb5af;
        plVar14 = b;
        bVar13 = System_String__op_Equality((System_String_o *)b,(System_String_o *)pIVar25,(MethodInfo *)0x0)
        ;
        if ((char)bVar13 == '\0') goto label_044bb618;
        lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
        if (lVar20 == 0) goto label_044bb684;
        if (*(char *)(lVar20 + 0x7c) == '\0') {
label_044bb618:
          lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if (lVar20 == 0) goto label_044bb684;
          bVar32 = (byte)uVar12 | (byte)pIVar27;
          unaff_R12 = (long *)(ulong)CONCAT31((int3)(uVar12 >> 8),bVar32);
          if ((bVar32 == 1) && (*(float *)(lVar20 + 100) <= 0.0)) {
            *(undefined4 *)(lVar20 + 0x4c) = 0;
            *(undefined8 *)(puVar29 + -0x70) = 0x44bb648;
            ApplicationManagers_MusicManager__NextSong((MethodInfo *)plVar14);
          }
        }
        else {
          plVar14 = *(long **)(lVar20 + 0x70);
          pIVar25 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          *(undefined8 *)(puVar29 + -0x70) = 0x44bb5f2;
          bVar13 = System_String__op_Inequality
                             ((System_String_o *)plVar14,(System_String_o *)pIVar25,(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') goto label_044bb618;
          lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if (lVar20 == 0) goto label_044bb684;
          plVar14 = *(long **)(lVar20 + 0x70);
          fVar34 = *(float *)(lVar20 + 0x78);
          *(undefined8 *)(puVar29 + -0x70) = 0x44bb616;
          ApplicationManagers_MusicManager__SetSong((System_String_o *)plVar14,fVar34,(MethodInfo *)pIVar25);
        }
        if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
          *(undefined1 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x7c) = 0;
          return;
        }
      }
    }
  }
label_044bb684:
  *(undefined8 *)(puVar29 + -0x70) = 0x44bb689;
  uVar19 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar29 + -0x70) = b;
  *(long **)(puVar29 + -0x78) = &TypeInfo_MusicManager;
  *(Il2CppClass **)(puVar29 + -0x80) = pIVar27;
  *(undefined8 *)(puVar29 + -0x88) = unaff_R13;
  *(long **)(puVar29 + -0x90) = unaff_R12;
  *(long **)(puVar29 + -0x98) = plVar15;
  *(undefined8 *)(puVar29 + -0xa0) = uVar19;
  *(undefined4 *)(puVar29 + -0x9c) = extraout_XMM0_Da;
  if (g_data_057aea6b == '\0') {
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb705;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb711;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb71d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb729;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb735;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb741;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb74d;
    il2cpp_runtime_helper_023445d0(&"Playlist");
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb759;
    il2cpp_runtime_helper_023445d0(&"");
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb765;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea6b = '\x01';
  }
  *(undefined8 *)(puVar29 + -0xa8) = 0x44bb774;
  pSVar16 = ApplicationManagers_MusicManager__FindSong((System_String_o *)plVar14,(MethodInfo *)pIVar25);
  lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
  pIVar31 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (lVar20 == 0) goto label_044bbd3d;
  *(undefined1 *)(lVar20 + 0x48) = 0;
  *(MethodInfo **)(lVar20 + 0x58) = "";
  *(undefined8 *)(puVar29 + -0xa8) = 0x44bb7af;
  il2cpp_runtime_helper_022b4080(lVar20 + 0x58);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb7c8;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar27 = (Il2CppClass *)0x0;
  pIVar23 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar29 + -0xa8) = 0x44bb7d7;
  bVar13 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar16,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  *(undefined4 *)(puVar29 + -0xa0) = 0;
  if ((char)bVar13 == '\0') goto label_044bbc73;
  pIVar25 = pIVar23;
  if (pSVar16 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bbd3d:
    pIVar22 = pIVar31;
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bbd42;
    il2cpp_runtime_helper_022b2c90();
    pIVar31 = pIVar27;
    pIVar23 = pIVar22;
  }
  else {
    b = &"Name";
    pMVar30 = (pSVar16->klass->vtable)._28_HasKey.method;
    pIVar5 = (pSVar16->klass->vtable)._28_HasKey.methodPtr;
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb80f;
    cVar10 = (*pIVar5)(pSVar16,"Name",pMVar30);
    if (cVar10 == '\0') {
      pIVar27 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
      pMVar30 = (pSVar16->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bbab7;
      plVar14 = (long *)(*pIVar5)(pSVar16,"Playlist",pMVar30);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar29 + -0xa8) = 0x44bbacc;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar25 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bbad6;
      pIVar23 = (Il2CppClass *)
                SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                          ((SimpleJSONFixed_JSONNode_o *)plVar14,(MethodInfo *)0x0);
      if (pIVar27 != (Il2CppClass *)0x0) {
        pGVar8 = (pIVar27->_1).image;
        pMVar30 = (pGVar8->vtable)._7_unknown.method;
        pIVar5 = (pGVar8->vtable)._7_unknown.methodPtr;
        *(undefined8 *)(puVar29 + -0xa8) = 0x44bbaf5;
        pIVar22 = (Il2CppClass *)(*pIVar5)(pIVar27,pIVar23,pMVar30);
        pIVar25 = pIVar23;
        if (pIVar22 != (Il2CppClass *)0x0) {
          pUVar26 = (pIVar22->_1).image;
          pIVar25 = pUVar26[1]._1.klass;
          pcVar6 = pUVar26[1]._1.interopData;
          *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb14;
          iVar11 = (*pcVar6)(pIVar22,pIVar25);
          *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb1f;
          uVar12 = UnityEngine_Random__Range_4df2410(0,iVar11,(MethodInfo *)0x0);
          pUVar26 = (pIVar22->_1).image;
          pcVar3 = pUVar26[1]._1.namespaze;
          pIVar25 = (Il2CppClass *)(ulong)uVar12;
          pcVar6 = (code *)pUVar26[1]._1.name;
          *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb34;
          plVar15 = (long *)(*pcVar6)(pIVar22,pIVar25,pcVar3);
          plVar14 = (long *)pIVar22;
          if (plVar15 != (long *)0x0) {
            uVar19 = *(undefined8 *)(*plVar15 + 0x1b0);
            pcVar6 = *(code **)(*plVar15 + 0x1a8);
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb57;
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar6)(plVar15,"Name",uVar19);
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb61;
            plVar14 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb7c;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb90;
            pIVar22 = (Il2CppClass *)
                      ApplicationManagers_ResourceManager__LoadAsset
                                ("Music",(System_String_o *)plVar14,0,(MethodInfo *)pUVar26);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbbab;
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar31 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbbba;
            bVar13 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pIVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            pIVar27 = pIVar31;
            if ((((char)bVar13 != '\0') && (pIVar27 = pIVar22, pIVar22 != (Il2CppClass *)0x0)) &&
               (pIVar25 = TypeInfo_AudioClip, pIVar23 = pIVar22, (pIVar22->_1).image != TypeInfo_AudioClip))
            goto label_044bbd45;
            uVar19 = *(undefined8 *)(*plVar15 + 0x1b0);
            pcVar6 = *(code **)(*plVar15 + 0x1a8);
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbbf7;
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar6)(plVar15,"Volume",uVar19);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc0c;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc16;
            fVar34 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar16,(MethodInfo *)0x0);
            *(float *)(puVar29 + -0xa0) = fVar34;
            lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
            uVar19 = *(undefined8 *)(*plVar15 + 0x1b0);
            pcVar6 = *(code **)(*plVar15 + 0x1a8);
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc4d;
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar6)(plVar15,"Name",uVar19);
            pIVar25 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc57;
            pIVar23 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
            plVar14 = (long *)0x0;
            pIVar31 = (Il2CppClass *)&TypeInfo_MusicManager;
            if (lVar20 != 0) {
              *(Il2CppClass **)(lVar20 + 0x58) = pIVar23;
              plVar14 = (long *)(lVar20 + 0x58);
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc73;
              il2cpp_runtime_helper_022b4080(plVar14);
              goto label_044bbc73;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
    pMVar30 = (pSVar16->klass->vtable)._7_get_Item.method;
    pIVar5 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb82f;
    pSVar21 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar16,"Name",pMVar30);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb844;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb84e;
    plVar14 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar21,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb869;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb87d;
    pIVar22 = (Il2CppClass *)
              ApplicationManagers_ResourceManager__LoadAsset
                        ("Music",(System_String_o *)plVar14,0,(MethodInfo *)in_RCX);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb898;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb8a7;
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pIVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pIVar27 = (Il2CppClass *)0x0;
    if ((((char)bVar13 == '\0') || (pIVar27 = pIVar22, pIVar22 == (Il2CppClass *)0x0)) ||
       (pIVar25 = TypeInfo_AudioClip, pIVar31 = (Il2CppClass *)0x0, pIVar23 = pIVar22,
       (pIVar22->_1).image == TypeInfo_AudioClip)) {
      pMVar30 = (pSVar16->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb8e4;
      pSVar21 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar16,"Volume",pMVar30);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar29 + -0xa8) = 0x44bb8f9;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb903;
      fVar34 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar21,(MethodInfo *)0x0);
      *(float *)(puVar29 + -0xa0) = fVar34;
      lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
      pMVar30 = (pSVar16->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb934;
      pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar16,"Name",pMVar30);
      pIVar25 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb93e;
      pIVar23 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
      plVar14 = (long *)(Il2CppClass *)0x0;
      pIVar31 = (Il2CppClass *)&TypeInfo_MusicManager;
      if (lVar20 != 0) {
        *(Il2CppClass **)(lVar20 + 0x58) = pIVar23;
        *(undefined8 *)(puVar29 + -0xa8) = 0x44bb95a;
        il2cpp_runtime_helper_022b4080(lVar20 + 0x58);
        b = &TypeInfo_SceneLoader;
        plVar14 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if ((Il2CppClass *)plVar14 != (Il2CppClass *)0x0) {
          pUVar26 = (((Il2CppClass *)plVar14)->_1).image;
          bVar32 = (TypeInfo_InGameManager->_2).naturalAligment;
          if ((bVar32 <= (pUVar26->_2).naturalAligment) &&
             ((pUVar26->_2).typeHierarchy[(ulong)bVar32 - 1] == TypeInfo_InGameManager)) {
            lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
            pIVar25 = pIVar23;
            pIVar31 = (Il2CppClass *)&TypeInfo_InGameManager;
            if ((lVar20 == 0) ||
               (lVar20 = *(long *)(lVar20 + 0x28), pIVar31 = (Il2CppClass *)&TypeInfo_InGameManager, lVar20 == 0))
            goto label_044bbd3d;
            if (0.0 < *(float *)(lVar20 + 0x14)) {
              lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              pIVar31 = (Il2CppClass *)&TypeInfo_InGameManager;
              if ((lVar20 == 0) ||
                 (lVar20 = *(long *)(lVar20 + 0xd8), pIVar31 = (Il2CppClass *)&TypeInfo_InGameManager, lVar20 == 0))
              goto label_044bbd3d;
              if (*(char *)(lVar20 + 0x11) != '\0') {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  *(undefined8 *)(puVar29 + -0xa8) = 0x44bba25;
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar23 = (Il2CppClass *)0x0;
                *(undefined8 *)(puVar29 + -0xa8) = 0x44bba31;
                bVar13 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)plVar14,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar13 != '\0') {
                  pIVar22 = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
                  pIVar25 = pIVar23;
                  pIVar31 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (pIVar22 == (Il2CppClass *)0x0) goto label_044bbd3d;
                  pGVar8 = (pIVar22->_1).image;
                  bVar32 = (TypeInfo_InGameManager->_2).naturalAligment;
                  pIVar25 = TypeInfo_InGameManager;
                  pIVar31 = pIVar27;
                  pIVar23 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (((pGVar8->_2).naturalAligment < bVar32) ||
                     ((pGVar8->_2).typeHierarchy[(ulong)bVar32 - 1] != TypeInfo_InGameManager)) goto label_044bbd45;
                  pIVar23 = (Il2CppClass *)0x0;
                  *(undefined8 *)(puVar29 + -0xa8) = 0x44bba7f;
                  GameManagers_InGameManager__OnSongChange
                            ((GameManagers_InGameManager_o *)pIVar22,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
label_044bbc73:
        __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
        pIVar25 = pIVar23;
        pIVar31 = (Il2CppClass *)&TypeInfo_MusicManager;
        if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
          pIVar25 = (Il2CppClass *)0x0;
          *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc90;
          UnityEngine_MonoBehaviour__StopAllCoroutines(__this,(MethodInfo *)0x0);
          pIVar31 = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
          if (pIVar31 != (Il2CppClass *)0x0) {
            if (g_data_057aea6f == '\0') {
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbcbb;
              il2cpp_runtime_helper_023445d0(&TypeInfo_FadeNextSong_d__46);
              g_data_057aea6f = '\x01';
            }
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbcd1;
            pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeNextSong_d__46);
            pIVar25 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbcde;
            System_Object___ctor(pIVar18,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar18[1].klass = 0;
            plVar14 = (long *)(Il2CppClass *)0x0;
            if (pIVar18 != (Il2CppObject *)0x0) {
              pIVar18[2].klass = pIVar31;
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbcfa;
              il2cpp_runtime_helper_022b4080(pIVar18 + 2,pIVar31);
              pIVar18[2].monitor = pIVar27;
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbd0d;
              il2cpp_runtime_helper_022b4080(&pIVar18[2].monitor,pIVar27);
              *(undefined4 *)((long)&pIVar18[3].klass + 4) = *(undefined4 *)(puVar29 + -0xa0);
              *(undefined4 *)&pIVar18[3].klass = *(undefined4 *)(puVar29 + -0x9c);
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)pIVar31,(System_Collections_IEnumerator_o *)pIVar18,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
  }
label_044bbd45:
  *(undefined8 *)(puVar29 + -0xa8) = 0x44bbd4a;
  il2cpp_runtime_helper_022b2fd0();
  *(long **)(puVar29 + -0xa8) = plVar14;
  if (g_data_057aea6d == '\0') {
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd66;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd72;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd7e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd8a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd96;
    il2cpp_runtime_helper_023445d0(&"Custom");
    pIVar22 = (Il2CppClass *)&"Name";
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbda2;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea6d = '\x01';
  }
  pIVar27 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    pIVar22 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    pIVar25 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbde9;
    bVar13 = System_String__op_Equality
                       ((System_String_o *)pIVar22,(System_String_o *)pIVar25,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      return;
    }
    if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
      pIVar22 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
      *(undefined8 *)(puVar29 + -0xb0) = 0x44bbe1a;
      pIVar25 = "Custom";
      bVar13 = System_String__op_Equality
                         ((System_String_o *)pIVar22,(System_String_o *)"Custom",(MethodInfo *)0x0);
      plVar15 = *(long **)(TypeInfo_MusicManager + 0xb8);
      if ((char)bVar13 == '\0') {
        if ((*plVar15 != 0) && (pIVar22 = (Il2CppClass *)plVar15[1], pIVar22 != (Il2CppClass *)0x0)) {
          pIVar25 = *(Il2CppClass **)(*plVar15 + 0x20);
          pGVar8 = (pIVar22->_1).image;
          pMVar30 = (pGVar8->vtable)._7_unknown.method;
          pIVar5 = (pGVar8->vtable)._7_unknown.methodPtr;
          *(undefined8 *)(puVar29 + -0xb0) = 0x44bbea0;
          pIVar24 = (Il2CppClass *)(*pIVar5)(pIVar22,pIVar25,pMVar30);
          if (pIVar24 != (Il2CppClass *)0x0) {
            pGVar8 = (pIVar24->_1).image;
            pMVar30 = (pGVar8->vtable)._11_unknown.method;
            pIVar5 = (pGVar8->vtable)._11_unknown.methodPtr;
            *(undefined8 *)(puVar29 + -0xb0) = 0x44bbebf;
            iVar11 = (*pIVar5)(pIVar24,pMVar30);
            *(undefined8 *)(puVar29 + -0xb0) = 0x44bbeca;
            uVar12 = UnityEngine_Random__Range_4df2410(0,iVar11,(MethodInfo *)0x0);
            pGVar8 = (pIVar24->_1).image;
            pMVar30 = (pGVar8->vtable)._5_unknown.method;
            pIVar25 = (Il2CppClass *)(ulong)uVar12;
            pIVar5 = (pGVar8->vtable)._5_unknown.methodPtr;
            *(undefined8 *)(puVar29 + -0xb0) = 0x44bbedf;
            pIVar22 = pIVar24;
            plVar15 = (long *)(*pIVar5)(pIVar24,pIVar25,pMVar30);
            pIVar27 = pIVar24;
            if (plVar15 != (long *)0x0) {
              uVar19 = *(undefined8 *)(*plVar15 + 0x1b0);
              pcVar6 = *(code **)(*plVar15 + 0x1a8);
              *(undefined8 *)(puVar29 + -0xb0) = 0x44bbf01;
              pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar6)(plVar15,"Name",uVar19);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                *(undefined8 *)(puVar29 + -0xb0) = 0x44bbf1c;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar30 = (MethodInfo *)0x0;
              *(undefined8 *)(puVar29 + -0xb0) = 0x44bbf26;
              pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
              ApplicationManagers_MusicManager__SetSong(pSVar17,0.0,pMVar30);
              return;
            }
          }
        }
      }
      else {
        lVar20 = *plVar15;
        if (lVar20 != 0) {
          __this_00 = *(System_Collections_Generic_List_object__o **)(lVar20 + 0x50);
          pIVar22 = (Il2CppClass *)0x0;
          if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
            iVar1 = (__this_00->fields)._size;
            if (iVar1 == 0) {
              return;
            }
            uVar12 = *(int *)(lVar20 + 0x4c) + 1;
            pMVar30 = (MethodInfo *)0x0;
            if ((int)uVar12 < iVar1) {
              pMVar30 = (MethodInfo *)(ulong)uVar12;
            }
            *(int32_t *)(lVar20 + 0x4c) = (int32_t)pMVar30;
            *(undefined8 *)(puVar29 + -0xb0) = 0x44bbe67;
            pSVar17 = (System_String_o *)
                      System_Collections_Generic_List_object___get_Item
                                (__this_00,(int32_t)pMVar30,MethodInfo_String_get_Item);
            ApplicationManagers_MusicManager__SetSong(pSVar17,0.0,pMVar30);
            return;
          }
        }
      }
    }
  }
  *(undefined8 *)(puVar29 + -0xb0) = 0x44bbf37;
  auVar36 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar29 + -0xb0) = b;
  *(Il2CppClass **)(puVar29 + -0xb8) = pIVar23;
  *(Il2CppClass **)(puVar29 + -0xc0) = pIVar31;
  *(Il2CppClass **)(puVar29 + -200) = pIVar27;
  *(long *)(puVar29 + -0xd0) = auVar36._0_8_;
  uVar33 = auVar36._8_8_ & 0xffffffff;
  if (g_data_057aea83 == '\0') {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf65;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf71;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf7d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf89;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbfa1;
    il2cpp_runtime_helper_023445d0(&"/");
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbfad;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea83 = '\x01';
  }
  *(undefined8 *)(puVar29 + -0xd8) = 0x44bbfc8;
  pMVar30 = "";
  bVar13 = System_String__op_Inequality
                     ((System_String_o *)pIVar22,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbfe3;
    pMVar30 = "/";
    pIVar25 = (Il2CppClass *)
              System_String__Concat_3af7150
                        ((System_String_o *)pIVar22,(System_String_o *)"/",(System_String_o *)pIVar25
                         ,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbffe;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar29 + -0xd8) = 0x44bc006;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              ApplicationManagers_ResourceManager__GetExternalTexture((System_String_o *)pIVar25,pMVar30);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bc021;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar27 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar29 + -0xd8) = 0x44bc02d;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  cVar10 = (char)uVar33;
  if ((char)bVar13 != '\0') {
    if (cVar10 != '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)(puVar29 + -0xd8) = 0x44bc04b;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar31 = (Il2CppClass *)0x0;
      if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      *(undefined8 *)(puVar29 + -0xd8) = 0x44bc073;
      pIVar27 = pIVar25;
      bVar13 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         (pSVar9,(Il2CppObject *)pIVar25,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar13 == '\0') {
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          *(undefined8 *)(puVar29 + -0xd8) = 0x44bc088;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
        pIVar31 = (Il2CppClass *)0x0;
        if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
        *(undefined8 *)(puVar29 + -0xd8) = 0x44bc0b3;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar9,(Il2CppObject *)pIVar25,(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
      }
    }
    return;
  }
  if (cVar10 == '\0') {
    UnityEngine_Resources__Load((System_String_o *)pIVar25,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bc0db;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
  pIVar31 = (Il2CppClass *)0x0;
  if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bc103;
    pIVar27 = pIVar25;
    bVar13 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar9,(Il2CppObject *)pIVar25,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar13 == '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)(puVar29 + -0xd8) = 0x44bc118;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar27 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar29 + -0xd8) = 0x44bc12f;
      pIVar31 = pIVar25;
      value = UnityEngine_Resources__Load((System_String_o *)pIVar25,(MethodInfo *)0x0);
      if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      *(undefined8 *)(puVar29 + -0xd8) = 0x44bc14c;
      pIVar27 = pIVar25;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_01,(Il2CppObject *)pIVar25,(Il2CppObject *)value,MethodInfo_Void_set_Item);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0xd8) = 0x44bc15d;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar31 = (Il2CppClass *)0x0;
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)pIVar25,MethodInfo_Object_get_Item);
      return;
    }
  }
label_044bc19f:
  *(undefined8 *)(puVar29 + -0xd8) = 0x44bc1a4;
  uVar35 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar29 + -0xd8) = &TypeInfo_ResourceManager;
  *(ulong *)(puVar29 + -0xe0) = uVar33;
  *(Il2CppClass **)(puVar29 + -0xe8) = pIVar25;
  *(undefined4 *)(puVar29 + -0xec) = uVar35;
  if (g_data_057aea6a == '\0') {
    *(undefined8 *)(puVar29 + -0x100) = 0x44bc1da;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
    g_data_057aea6a = '\x01';
  }
  *(undefined8 *)(puVar29 + -0x100) = 0x44bc1f0;
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
  uVar35 = 0;
  *(undefined8 *)(puVar29 + -0x100) = 0x44bc1fd;
  pIVar18 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = pIVar31;
    *(undefined8 *)(puVar29 + -0x100) = 0x44bc219;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar31);
    __this_02[3].klass = pIVar27;
    *(undefined8 *)(puVar29 + -0x100) = 0x44bc22c;
    il2cpp_runtime_helper_022b4080(__this_02 + 3,pIVar27);
    *(undefined4 *)&__this_02[2].monitor = *(undefined4 *)(puVar29 + -0xec);
    return;
  }
  *(undefined8 *)(puVar29 + -0x100) = 0x44bc249;
  uVar19 = il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_Dictionary_object__object__o **)(puVar29 + -0x100) = __this_01;
  *(undefined8 *)(puVar29 + -0x108) = 0;
  *(undefined8 *)(puVar29 + -0x110) = uVar19;
  *(undefined8 *)(puVar29 + -0x118) = 0x44bc25f;
  System_Object___ctor(pIVar18,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar18[1].klass = uVar35;
  return;
label_044bb042:
  *(undefined8 *)(puVar28 + -0x58) = 0x44bb047;
  in_RAX = il2cpp_runtime_helper_022b2c90();
  goto code_r0x044bb050;
}


// ApplicationManagers.MusicManager$$PlayEffect
// il2cpp: void ApplicationManagers_MusicManager__PlayEffect (const MethodInfo* method);
// 0x44bb0b0

void ApplicationManagers_MusicManager__PlayEffect(MethodInfo *method)

{
  int iVar1;
  System_String_c *pSVar2;
  char *pcVar3;
  UnityEngine_AudioSource_o *pUVar4;
  Il2CppMethodPointer pIVar5;
  code *pcVar6;
  void *pvVar7;
  GameManagers_InGameManager_c *pGVar8;
  UnityEngine_MonoBehaviour_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  char cVar10;
  int32_t iVar11;
  uint uVar12;
  bool_conflict bVar13;
  long *plVar14;
  long *plVar15;
  SimpleJSONFixed_JSONNode_o *pSVar16;
  System_String_o *pSVar17;
  Il2CppObject *pIVar18;
  undefined8 uVar19;
  long lVar20;
  SimpleJSONFixed_JSONNode_o *pSVar21;
  Il2CppClass *pIVar22;
  Il2CppClass *pIVar23;
  Il2CppClass *pIVar24;
  Il2CppClass *pIVar25;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UnityEngine_Object_o *value;
  Il2CppObject *__this_02;
  SimpleJSONFixed_JSONNode_c *in_RCX;
  UnityEngine_Object_c *pUVar26;
  Il2CppClass *unaff_RBX;
  Il2CppClass *pIVar27;
  undefined1 *puVar28;
  undefined8 unaff_RBP;
  long *b;
  MethodInfo *pMVar29;
  Il2CppClass *pIVar30;
  byte bVar31;
  long *unaff_R12;
  undefined8 unaff_R13;
  Il2CppClass *unaff_R14;
  ulong uVar32;
  long *unaff_R15;
  float fVar33;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar34;
  undefined1 auVar35 [16];
  
code_r0x044bb0b0:
  puVar28 = (undefined1 *)((long)register0x00000020 + -8);
  *(Il2CppClass **)((long)register0x00000020 + -8) = unaff_RBX;
  if (g_data_057aea64 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x44bb0c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x44bb0d2;
    il2cpp_runtime_helper_023445d0(&"Effect");
    g_data_057aea64 = '\x01';
  }
  plVar15 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if ((SimpleJSONFixed_JSONNode_o *)plVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bb14e:
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x44bb153;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar29 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._7_get_Item.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x44bb10d;
    plVar14 = (long *)(*pIVar5)(plVar15,"Effect",pMVar29);
    if (plVar14 == (long *)0x0) goto label_044bb14e;
    uVar19 = *(undefined8 *)(*plVar14 + 0x1f0);
    pcVar6 = *(code **)(*plVar14 + 0x1e8);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x44bb128;
    iVar11 = (*pcVar6)(plVar14,uVar19);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x44bb133;
    uVar12 = UnityEngine_Random__Range_4df2410(0,iVar11,(MethodInfo *)0x0);
    in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar14;
    pMVar29 = (in_RCX->vtable)._5_get_Item.method;
    pIVar5 = (in_RCX->vtable)._5_get_Item.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x44bb148;
    plVar15 = (long *)(*pIVar5)(plVar14,(ulong)uVar12,pMVar29);
    unaff_RBX = *(Il2CppClass **)((long)register0x00000020 + -8);
    puVar28 = (undefined1 *)register0x00000020;
  }
  *(long **)(puVar28 + -8) = unaff_R15;
  *(Il2CppClass **)(puVar28 + -0x10) = unaff_R14;
  *(Il2CppClass **)(puVar28 + -0x18) = unaff_RBX;
  if (g_data_057aea68 == '\0') {
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb181;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb18d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb199;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb1a5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb1b1;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb1bd;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb1c9;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea68 = '\x01';
  }
  plVar14 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb1e8;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar25 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar28 + -0x30) = 0x44bb1f4;
  bVar13 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)plVar15,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return;
  }
  if ((SimpleJSONFixed_JSONNode_o *)plVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bb384:
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb389;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar29 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._28_HasKey.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._28_HasKey.methodPtr;
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb222;
    cVar10 = (*pIVar5)(plVar15,"Name",pMVar29);
    if (cVar10 == '\0') {
      return;
    }
    pMVar29 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._7_get_Item.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb240;
    pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(plVar15,"Name",pMVar29);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar28 + -0x30) = 0x44bb254;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb25e;
    pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar28 + -0x30) = 0x44bb279;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb28d;
    unaff_R14 = (Il2CppClass *)
                ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar17,0,(MethodInfo *)in_RCX);
    if ((unaff_R14 == (Il2CppClass *)0x0) || (pIVar25 = TypeInfo_AudioClip, (unaff_R14->_1).image == TypeInfo_AudioClip))
    {
      pMVar29 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._7_get_Item.method;
      pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar28 + -0x30) = 0x44bb2c5;
      pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(plVar15,"Volume",pMVar29);
      pIVar25 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar28 + -0x30) = 0x44bb2cf;
      fVar33 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar16,(MethodInfo *)0x0);
      *(float *)(puVar28 + -0x1c) = fVar33;
      plVar14 = (long *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
      if ((Il2CppClass *)plVar14 != (Il2CppClass *)0x0) {
        if (g_data_057aea6a == '\0') {
          *(undefined8 *)(puVar28 + -0x30) = 0x44bb307;
          il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
          g_data_057aea6a = '\x01';
        }
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb31d;
        pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
        pIVar25 = (Il2CppClass *)0x0;
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb32a;
        System_Object___ctor(pIVar18,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar18[1].klass = 0;
        plVar15 = (long *)0x0;
        if (pIVar18 != (Il2CppObject *)0x0) {
          pIVar18[2].klass = (Il2CppClass *)plVar14;
          *(undefined8 *)(puVar28 + -0x30) = 0x44bb346;
          il2cpp_runtime_helper_022b4080(pIVar18 + 2,plVar14);
          pIVar18[3].klass = unaff_R14;
          *(undefined8 *)(puVar28 + -0x30) = 0x44bb359;
          il2cpp_runtime_helper_022b4080(pIVar18 + 3,unaff_R14);
          *(undefined4 *)&pIVar18[2].monitor = *(undefined4 *)(puVar28 + -0x1c);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)plVar14,(System_Collections_IEnumerator_o *)pIVar18,
                     (MethodInfo *)0x0);
          return;
        }
      }
      goto label_044bb384;
    }
  }
  *(undefined8 *)(puVar28 + -0x30) = 0x44bb391;
  uVar19 = il2cpp_runtime_helper_022b2fd0(unaff_R14);
  *(Il2CppClass **)(puVar28 + -0x30) = unaff_R14;
  *(long **)(puVar28 + -0x38) = plVar15;
  *(undefined8 *)(puVar28 + -0x40) = uVar19;
  if (g_data_057aea65 == '\0') {
    *(undefined8 *)(puVar28 + -0x48) = 0x44bb3b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar28 + -0x48) = 0x44bb3c5;
    il2cpp_runtime_helper_023445d0(&"Transition");
    g_data_057aea65 = '\x01';
  }
  b = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if ((Il2CppClass *)b != (Il2CppClass *)0x0) {
    pvVar7 = (((Il2CppClass *)b)->_1).image;
    uVar19 = *(undefined8 *)((long)pvVar7 + 0x1b0);
    pcVar6 = *(code **)((long)pvVar7 + 0x1a8);
    *(undefined8 *)(puVar28 + -0x48) = 0x44bb400;
    pIVar25 = "Transition";
    plVar15 = (long *)(*pcVar6)(b,"Transition",uVar19);
    if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
       (*(undefined2 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x68) = 0x101,
       (SimpleJSONFixed_JSONNode_o *)plVar15 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      pMVar29 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._11_get_Count.method;
      pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar15)->klass->vtable)._11_get_Count.methodPtr;
      *(undefined8 *)(puVar28 + -0x48) = 0x44bb433;
      iVar11 = (*pIVar5)(plVar15,pMVar29);
      *(undefined8 *)(puVar28 + -0x48) = 0x44bb43e;
      uVar12 = UnityEngine_Random__Range_4df2410(0,iVar11,(MethodInfo *)0x0);
      in_RCX = ((SimpleJSONFixed_JSONNode_o *)plVar15)->klass;
      pMVar29 = (in_RCX->vtable)._5_get_Item.method;
      pIVar5 = (in_RCX->vtable)._5_get_Item.methodPtr;
      *(undefined8 *)(puVar28 + -0x48) = 0x44bb453;
      unaff_RBX = (Il2CppClass *)(*pIVar5)(plVar15,(ulong)uVar12,pMVar29);
      uVar19 = *(undefined8 *)(puVar28 + -0x38);
      pIVar25 = *(Il2CppClass **)(puVar28 + -0x30);
      puVar28 = puVar28 + -0x28;
      do {
        *(long **)(puVar28 + -8) = plVar14;
        *(Il2CppClass **)(puVar28 + -0x10) = pIVar25;
        *(undefined8 *)(puVar28 + -0x18) = uVar19;
        if (g_data_057aea69 == '\0') {
          *(undefined8 *)(puVar28 + -0x30) = 0x44babb1;
          il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
          *(undefined8 *)(puVar28 + -0x30) = 0x44babbd;
          il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
          *(undefined8 *)(puVar28 + -0x30) = 0x44babc9;
          il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
          *(undefined8 *)(puVar28 + -0x30) = 0x44babd5;
          il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
          *(undefined8 *)(puVar28 + -0x30) = 0x44babe1;
          il2cpp_runtime_helper_023445d0(&"Name");
          *(undefined8 *)(puVar28 + -0x30) = 0x44babed;
          il2cpp_runtime_helper_023445d0(&"Music");
          *(undefined8 *)(puVar28 + -0x30) = 0x44babf9;
          il2cpp_runtime_helper_023445d0(&"Volume");
          g_data_057aea69 = '\x01';
        }
        unaff_R15 = &TypeInfo_JSONNode;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          *(undefined8 *)(puVar28 + -0x30) = 0x44bac18;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar28 + -0x30) = 0x44bac24;
        bVar13 = SimpleJSONFixed_JSONNode__op_Inequality
                           ((SimpleJSONFixed_JSONNode_o *)unaff_RBX,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          return;
        }
        unaff_R14 = pIVar25;
        if (unaff_RBX == (Il2CppClass *)0x0) {
label_044bae61:
          *(undefined8 *)(puVar28 + -0x30) = 0x44bae66;
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          pSVar2 = (unaff_RBX->_1).image;
          pcVar3 = pSVar2[1]._1.namespaze;
          pcVar6 = (code *)pSVar2[1]._1.name;
          *(undefined8 *)(puVar28 + -0x30) = 0x44bac52;
          cVar10 = (*pcVar6)(unaff_RBX,"Name",pcVar3);
          if (cVar10 == '\0') {
            return;
          }
          pSVar2 = (unaff_RBX->_1).image;
          pMVar29 = (pSVar2->vtable)._7_CompareTo.method;
          pIVar5 = (pSVar2->vtable)._7_CompareTo.methodPtr;
          *(undefined8 *)(puVar28 + -0x30) = 0x44bac70;
          pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(unaff_RBX,"Name",pMVar29);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            *(undefined8 *)(puVar28 + -0x30) = 0x44bac84;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar28 + -0x30) = 0x44bac8e;
          pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            *(undefined8 *)(puVar28 + -0x30) = 0x44baca9;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar28 + -0x30) = 0x44bacbd;
          unaff_R14 = (Il2CppClass *)
                      ApplicationManagers_ResourceManager__LoadAsset
                                ("Music",pSVar17,0,(MethodInfo *)in_RCX);
          if ((unaff_R14 == (Il2CppClass *)0x0) || ((unaff_R14->_1).image == TypeInfo_AudioClip)) {
            pSVar2 = (unaff_RBX->_1).image;
            pMVar29 = (pSVar2->vtable)._7_CompareTo.method;
            pIVar5 = (pSVar2->vtable)._7_CompareTo.methodPtr;
            *(undefined8 *)(puVar28 + -0x30) = 0x44bacf5;
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(unaff_RBX,"Volume",pMVar29);
            *(undefined8 *)(puVar28 + -0x30) = 0x44bacff;
            fVar33 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar16,(MethodInfo *)0x0);
            unaff_R15 = &TypeInfo_MusicManager;
            lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
            if (lVar20 != 0) {
              *(float *)(puVar28 + -0x1c) = fVar33;
              pUVar4 = *(UnityEngine_AudioSource_o **)(lVar20 + 0x28);
              if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                *(undefined8 *)(puVar28 + -0x30) = 0x44bad39;
                UnityEngine_AudioSource__set_clip
                          (pUVar4,(UnityEngine_AudioClip_o *)unaff_R14,(MethodInfo *)0x0);
                plVar15 = *(long **)(TypeInfo_MusicManager + 0xb8);
                in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar15;
                if (in_RCX != (SimpleJSONFixed_JSONNode_c *)0x0) {
                  unaff_RBX = *(Il2CppClass **)&(in_RCX->_1).byval_arg.bits;
                  if (g_data_057aea72 == '\0') {
                    *(undefined8 *)(puVar28 + -0x30) = 0x44bad64;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
                    *(undefined8 *)(puVar28 + -0x30) = 0x44bad70;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                    *(undefined8 *)(puVar28 + -0x30) = 0x44bad7c;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
                    g_data_057aea72 = '\x01';
                    plVar15 = *(long **)(TypeInfo_MusicManager + 0xb8);
                  }
                  fVar33 = 0.0;
                  if ((char)plVar15[2] == '\0') {
                    lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
                    if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x28), lVar20 == 0)) goto label_044bae61;
                    fVar33 = *(float *)(lVar20 + 0x14) * 0.4;
                  }
                  if (unaff_RBX != (Il2CppClass *)0x0) {
                    *(undefined8 *)(puVar28 + -0x30) = 0x44badee;
                    UnityEngine_AudioSource__set_volume
                              ((UnityEngine_AudioSource_o *)unaff_RBX,*(float *)(puVar28 + -0x1c) * fVar33,
                               (MethodInfo *)0x0);
                    if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
                       (pUVar4 = *(UnityEngine_AudioSource_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x28),
                       pUVar4 != (UnityEngine_AudioSource_o *)0x0)) {
                      *(undefined8 *)(puVar28 + -0x30) = 0x44bae10;
                      UnityEngine_AudioSource__Play_4daa2c0(pUVar4,(MethodInfo *)0x0);
                      if (unaff_R14 != (Il2CppClass *)0x0) {
                        lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
                        *(undefined8 *)(puVar28 + -0x30) = 0x44bae2c;
                        fVar33 = UnityEngine_AudioClip__get_length
                                           ((UnityEngine_AudioClip_o *)unaff_R14,(MethodInfo *)0x0);
                        unaff_RBX = (Il2CppClass *)0x0;
                        if (lVar20 != 0) {
                          *(float *)(lVar20 + 0x40) = fVar33;
                          lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
                          *(undefined8 *)(puVar28 + -0x30) = 0x44bae4d;
                          fVar33 = UnityEngine_AudioClip__get_length
                                             ((UnityEngine_AudioClip_o *)unaff_R14,(MethodInfo *)0x0);
                          unaff_RBX = (Il2CppClass *)0x0;
                          if (lVar20 != 0) {
                            *(float *)(lVar20 + 100) = fVar33;
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto label_044bae61;
          }
        }
        *(undefined8 *)(puVar28 + -0x30) = 0x44bae6e;
        uVar19 = il2cpp_runtime_helper_022b2fd0(unaff_R14);
        *(long **)(puVar28 + -0x30) = unaff_R15;
        *(Il2CppClass **)(puVar28 + -0x38) = unaff_R14;
        *(long **)(puVar28 + -0x40) = unaff_R12;
        *(Il2CppClass **)(puVar28 + -0x48) = unaff_RBX;
        *(undefined8 *)(puVar28 + -0x50) = uVar19;
        if (g_data_057aea62 == '\0') {
          *(undefined8 *)(puVar28 + -0x58) = 0x44bae8d;
          il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
          *(undefined8 *)(puVar28 + -0x58) = 0x44bae99;
          il2cpp_runtime_helper_023445d0(&TypeInfo_MusicPlaylist);
          *(undefined8 *)(puVar28 + -0x58) = 0x44baea5;
          il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
          *(undefined8 *)(puVar28 + -0x58) = 0x44baeb1;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
          *(undefined8 *)(puVar28 + -0x58) = 0x44baebd;
          il2cpp_runtime_helper_023445d0(&"Grabbed");
          g_data_057aea62 = '\x01';
        }
        lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x38), lVar20 == 0)) goto label_044bb042;
        if (*(char *)(lVar20 + 0x11) == '\0') {
          return;
        }
        unaff_R15 = &TypeInfo_MusicManager;
        plVar15 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
        if (plVar15 == (long *)0x0) goto label_044bb042;
        uVar19 = *(undefined8 *)(*plVar15 + 0x1b0);
        pcVar6 = *(code **)(*plVar15 + 0x1a8);
        *(undefined8 *)(puVar28 + -0x58) = 0x44baf34;
        plVar15 = (long *)(*pcVar6)(plVar15,"Grabbed",uVar19);
        if (plVar15 == (long *)0x0) goto label_044bb042;
        in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar15;
        pMVar29 = (in_RCX->vtable)._5_get_Item.method;
        pIVar5 = (in_RCX->vtable)._5_get_Item.methodPtr;
        *(undefined8 *)(puVar28 + -0x58) = 0x44baf52;
        unaff_R14 = (Il2CppClass *)(*pIVar5)(plVar15,0,pMVar29);
        lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
        if (lVar20 == 0) goto label_044bb042;
        *(undefined1 *)(lVar20 + 0x68) = 0;
        unaff_RBX = *(Il2CppClass **)(lVar20 + 0x20);
        unaff_R12 = &TypeInfo_MusicPlaylist;
        if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
          *(undefined8 *)(puVar28 + -0x58) = 0x44baf8c;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar17 = *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
        *(undefined8 *)(puVar28 + -0x58) = 0x44bafa5;
        bVar13 = System_String__op_Equality((System_String_o *)unaff_RBX,pSVar17,(MethodInfo *)0x0);
        in_RCX = *(SimpleJSONFixed_JSONNode_c **)(TypeInfo_MusicManager + 0xb8);
        pIVar5 = (in_RCX->_1).image;
        if ((char)bVar13 == '\0') {
          if (pIVar5 == (Il2CppMethodPointer)0x0) goto label_044bb042;
          *(undefined8 *)(pIVar5 + 0x70) = **(undefined8 **)(g_data_057b9c00 + 0xb8);
          *(undefined8 *)(puVar28 + -0x58) = 0x44bb02f;
          il2cpp_runtime_helper_022b4080(pIVar5 + 0x70);
        }
        else {
          if (pIVar5 == (Il2CppMethodPointer)0x0) goto label_044bb042;
          *(undefined8 *)(pIVar5 + 0x70) = *(undefined8 *)(pIVar5 + 0x58);
          *(undefined8 *)(puVar28 + -0x58) = 0x44bafd0;
          il2cpp_runtime_helper_022b4080(pIVar5 + 0x70);
          unaff_RBX = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
          if ((unaff_RBX == (Il2CppClass *)0x0) ||
             (pUVar4 = *(UnityEngine_AudioSource_o **)&(unaff_RBX->_1).byval_arg.bits,
             pUVar4 == (UnityEngine_AudioSource_o *)0x0)) goto label_044bb042;
          *(undefined8 *)(puVar28 + -0x58) = 0x44baff2;
          fVar33 = UnityEngine_AudioSource__get_time(pUVar4,(MethodInfo *)0x0);
          *(float *)&(unaff_RBX->_1).klass = fVar33;
        }
        uVar19 = *(undefined8 *)(puVar28 + -0x48);
        unaff_R12 = *(long **)(puVar28 + -0x40);
        pIVar25 = *(Il2CppClass **)(puVar28 + -0x38);
        plVar14 = *(long **)(puVar28 + -0x30);
        puVar28 = puVar28 + -0x28;
        unaff_RBX = unaff_R14;
      } while( true );
    }
  }
  *(undefined8 *)(puVar28 + -0x48) = 0x44bb467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar28 + -0x48) = unaff_RBP;
  *(long **)(puVar28 + -0x50) = plVar14;
  *(long **)(puVar28 + -0x58) = &TypeInfo_MusicManager;
  *(long **)(puVar28 + -0x60) = unaff_R12;
  *(long **)(puVar28 + -0x68) = plVar15;
  pIVar27 = (Il2CppClass *)((ulong)pIVar25 & 0xffffffff);
  plVar14 = b;
  if (g_data_057aea67 == '\0') {
    *(undefined8 *)(puVar28 + -0x70) = 0x44bb493;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    plVar14 = &TypeInfo_MusicPlaylist;
    *(undefined8 *)(puVar28 + -0x70) = 0x44bb49f;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea67 = '\x01';
  }
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    pSVar17 = *(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    *(undefined8 *)(puVar28 + -0x70) = 0x44bb4d1;
    pIVar25 = (Il2CppClass *)b;
    uVar12 = System_String__op_Inequality(pSVar17,(System_String_o *)b,(MethodInfo *)0x0);
    unaff_R12 = (long *)(ulong)uVar12;
    lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
    plVar14 = (long *)0x0;
    if (lVar20 != 0) {
      *(long **)(lVar20 + 0x20) = b;
      plVar14 = (long *)(lVar20 + 0x20);
      *(undefined8 *)(puVar28 + -0x70) = 0x44bb4fa;
      pIVar25 = (Il2CppClass *)b;
      il2cpp_runtime_helper_022b4080();
      lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
      if (lVar20 != 0) {
        cVar10 = *(char *)(lVar20 + 0x68);
        in_RCX = (SimpleJSONFixed_JSONNode_c *)CONCAT71((int7)((ulong)in_RCX >> 8),cVar10);
        if (*(char *)(lVar20 + 0x60) == '\0') {
          if (cVar10 != '\0') goto label_044bb52e;
          if (0.0 < *(float *)(lVar20 + 100)) {
            *(undefined4 *)(lVar20 + 0x40) = 0;
          }
label_044bb578:
          *(undefined4 *)(lVar20 + 100) = 0;
        }
        else {
          *(undefined4 *)(lVar20 + 0x40) = 0;
          if (cVar10 == '\0') goto label_044bb578;
label_044bb52e:
          plVar15 = &TypeInfo_MusicPlaylist;
          if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
            *(undefined8 *)(puVar28 + -0x70) = 0x44bb546;
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar25 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
          *(undefined8 *)(puVar28 + -0x70) = 0x44bb55e;
          plVar14 = b;
          bVar13 = System_String__op_Equality
                             ((System_String_o *)b,(System_String_o *)pIVar25,(MethodInfo *)0x0);
          if ((char)bVar13 != '\0') {
            lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
            if (lVar20 == 0) goto label_044bb684;
            goto label_044bb578;
          }
        }
        plVar15 = &TypeInfo_MusicPlaylist;
        if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
          *(undefined8 *)(puVar28 + -0x70) = 0x44bb597;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar25 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
        *(undefined8 *)(puVar28 + -0x70) = 0x44bb5af;
        plVar14 = b;
        bVar13 = System_String__op_Equality((System_String_o *)b,(System_String_o *)pIVar25,(MethodInfo *)0x0)
        ;
        if ((char)bVar13 == '\0') goto label_044bb618;
        lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
        if (lVar20 == 0) goto label_044bb684;
        if (*(char *)(lVar20 + 0x7c) == '\0') {
label_044bb618:
          lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if (lVar20 == 0) goto label_044bb684;
          bVar31 = (byte)uVar12 | (byte)pIVar27;
          unaff_R12 = (long *)(ulong)CONCAT31((int3)(uVar12 >> 8),bVar31);
          if ((bVar31 == 1) && (*(float *)(lVar20 + 100) <= 0.0)) {
            *(undefined4 *)(lVar20 + 0x4c) = 0;
            *(undefined8 *)(puVar28 + -0x70) = 0x44bb648;
            ApplicationManagers_MusicManager__NextSong((MethodInfo *)plVar14);
          }
        }
        else {
          plVar14 = *(long **)(lVar20 + 0x70);
          pIVar25 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          *(undefined8 *)(puVar28 + -0x70) = 0x44bb5f2;
          bVar13 = System_String__op_Inequality
                             ((System_String_o *)plVar14,(System_String_o *)pIVar25,(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') goto label_044bb618;
          lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if (lVar20 == 0) goto label_044bb684;
          plVar14 = *(long **)(lVar20 + 0x70);
          fVar33 = *(float *)(lVar20 + 0x78);
          *(undefined8 *)(puVar28 + -0x70) = 0x44bb616;
          ApplicationManagers_MusicManager__SetSong((System_String_o *)plVar14,fVar33,(MethodInfo *)pIVar25);
        }
        if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
          *(undefined1 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x7c) = 0;
          return;
        }
      }
    }
  }
label_044bb684:
  *(undefined8 *)(puVar28 + -0x70) = 0x44bb689;
  uVar19 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar28 + -0x70) = b;
  *(long **)(puVar28 + -0x78) = &TypeInfo_MusicManager;
  *(Il2CppClass **)(puVar28 + -0x80) = pIVar27;
  *(undefined8 *)(puVar28 + -0x88) = unaff_R13;
  *(long **)(puVar28 + -0x90) = unaff_R12;
  *(long **)(puVar28 + -0x98) = plVar15;
  *(undefined8 *)(puVar28 + -0xa0) = uVar19;
  *(undefined4 *)(puVar28 + -0x9c) = extraout_XMM0_Da;
  if (g_data_057aea6b == '\0') {
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb705;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb711;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb71d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb729;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb735;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb741;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb74d;
    il2cpp_runtime_helper_023445d0(&"Playlist");
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb759;
    il2cpp_runtime_helper_023445d0(&"");
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb765;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea6b = '\x01';
  }
  *(undefined8 *)(puVar28 + -0xa8) = 0x44bb774;
  pSVar16 = ApplicationManagers_MusicManager__FindSong((System_String_o *)plVar14,(MethodInfo *)pIVar25);
  lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
  pIVar30 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (lVar20 == 0) goto label_044bbd3d;
  *(undefined1 *)(lVar20 + 0x48) = 0;
  *(MethodInfo **)(lVar20 + 0x58) = "";
  *(undefined8 *)(puVar28 + -0xa8) = 0x44bb7af;
  il2cpp_runtime_helper_022b4080(lVar20 + 0x58);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb7c8;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar27 = (Il2CppClass *)0x0;
  pIVar23 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar28 + -0xa8) = 0x44bb7d7;
  bVar13 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar16,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  *(undefined4 *)(puVar28 + -0xa0) = 0;
  if ((char)bVar13 == '\0') goto label_044bbc73;
  pIVar25 = pIVar23;
  if (pSVar16 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bbd3d:
    pIVar22 = pIVar30;
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bbd42;
    il2cpp_runtime_helper_022b2c90();
    pIVar30 = pIVar27;
    pIVar23 = pIVar22;
  }
  else {
    b = &"Name";
    pMVar29 = (pSVar16->klass->vtable)._28_HasKey.method;
    pIVar5 = (pSVar16->klass->vtable)._28_HasKey.methodPtr;
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb80f;
    cVar10 = (*pIVar5)(pSVar16,"Name",pMVar29);
    if (cVar10 == '\0') {
      pIVar27 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
      pMVar29 = (pSVar16->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bbab7;
      plVar14 = (long *)(*pIVar5)(pSVar16,"Playlist",pMVar29);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bbacc;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar25 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bbad6;
      pIVar23 = (Il2CppClass *)
                SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                          ((SimpleJSONFixed_JSONNode_o *)plVar14,(MethodInfo *)0x0);
      if (pIVar27 != (Il2CppClass *)0x0) {
        pGVar8 = (pIVar27->_1).image;
        pMVar29 = (pGVar8->vtable)._7_unknown.method;
        pIVar5 = (pGVar8->vtable)._7_unknown.methodPtr;
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bbaf5;
        pIVar22 = (Il2CppClass *)(*pIVar5)(pIVar27,pIVar23,pMVar29);
        pIVar25 = pIVar23;
        if (pIVar22 != (Il2CppClass *)0x0) {
          pUVar26 = (pIVar22->_1).image;
          pIVar25 = pUVar26[1]._1.klass;
          pcVar6 = pUVar26[1]._1.interopData;
          *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb14;
          iVar11 = (*pcVar6)(pIVar22,pIVar25);
          *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb1f;
          uVar12 = UnityEngine_Random__Range_4df2410(0,iVar11,(MethodInfo *)0x0);
          pUVar26 = (pIVar22->_1).image;
          pcVar3 = pUVar26[1]._1.namespaze;
          pIVar25 = (Il2CppClass *)(ulong)uVar12;
          pcVar6 = (code *)pUVar26[1]._1.name;
          *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb34;
          plVar15 = (long *)(*pcVar6)(pIVar22,pIVar25,pcVar3);
          plVar14 = (long *)pIVar22;
          if (plVar15 != (long *)0x0) {
            uVar19 = *(undefined8 *)(*plVar15 + 0x1b0);
            pcVar6 = *(code **)(*plVar15 + 0x1a8);
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb57;
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar6)(plVar15,"Name",uVar19);
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb61;
            plVar14 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb7c;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb90;
            pIVar22 = (Il2CppClass *)
                      ApplicationManagers_ResourceManager__LoadAsset
                                ("Music",(System_String_o *)plVar14,0,(MethodInfo *)pUVar26);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbbab;
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar30 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbbba;
            bVar13 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pIVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            pIVar27 = pIVar30;
            if ((((char)bVar13 != '\0') && (pIVar27 = pIVar22, pIVar22 != (Il2CppClass *)0x0)) &&
               (pIVar25 = TypeInfo_AudioClip, pIVar23 = pIVar22, (pIVar22->_1).image != TypeInfo_AudioClip))
            goto label_044bbd45;
            uVar19 = *(undefined8 *)(*plVar15 + 0x1b0);
            pcVar6 = *(code **)(*plVar15 + 0x1a8);
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbbf7;
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar6)(plVar15,"Volume",uVar19);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc0c;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc16;
            fVar33 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar16,(MethodInfo *)0x0);
            *(float *)(puVar28 + -0xa0) = fVar33;
            lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
            uVar19 = *(undefined8 *)(*plVar15 + 0x1b0);
            pcVar6 = *(code **)(*plVar15 + 0x1a8);
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc4d;
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar6)(plVar15,"Name",uVar19);
            pIVar25 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc57;
            pIVar23 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
            plVar14 = (long *)0x0;
            pIVar30 = (Il2CppClass *)&TypeInfo_MusicManager;
            if (lVar20 != 0) {
              *(Il2CppClass **)(lVar20 + 0x58) = pIVar23;
              plVar14 = (long *)(lVar20 + 0x58);
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc73;
              il2cpp_runtime_helper_022b4080(plVar14);
              goto label_044bbc73;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
    pMVar29 = (pSVar16->klass->vtable)._7_get_Item.method;
    pIVar5 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb82f;
    pSVar21 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar16,"Name",pMVar29);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bb844;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb84e;
    plVar14 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar21,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bb869;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb87d;
    pIVar22 = (Il2CppClass *)
              ApplicationManagers_ResourceManager__LoadAsset
                        ("Music",(System_String_o *)plVar14,0,(MethodInfo *)in_RCX);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bb898;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb8a7;
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pIVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pIVar27 = (Il2CppClass *)0x0;
    if ((((char)bVar13 == '\0') || (pIVar27 = pIVar22, pIVar22 == (Il2CppClass *)0x0)) ||
       (pIVar25 = TypeInfo_AudioClip, pIVar30 = (Il2CppClass *)0x0, pIVar23 = pIVar22,
       (pIVar22->_1).image == TypeInfo_AudioClip)) {
      pMVar29 = (pSVar16->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bb8e4;
      pSVar21 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar16,"Volume",pMVar29);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb8f9;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bb903;
      fVar33 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar21,(MethodInfo *)0x0);
      *(float *)(puVar28 + -0xa0) = fVar33;
      lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
      pMVar29 = (pSVar16->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bb934;
      pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar16,"Name",pMVar29);
      pIVar25 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bb93e;
      pIVar23 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
      plVar14 = (long *)(Il2CppClass *)0x0;
      pIVar30 = (Il2CppClass *)&TypeInfo_MusicManager;
      if (lVar20 != 0) {
        *(Il2CppClass **)(lVar20 + 0x58) = pIVar23;
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb95a;
        il2cpp_runtime_helper_022b4080(lVar20 + 0x58);
        b = &TypeInfo_SceneLoader;
        plVar14 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if ((Il2CppClass *)plVar14 != (Il2CppClass *)0x0) {
          pUVar26 = (((Il2CppClass *)plVar14)->_1).image;
          bVar31 = (TypeInfo_InGameManager->_2).naturalAligment;
          if ((bVar31 <= (pUVar26->_2).naturalAligment) &&
             ((pUVar26->_2).typeHierarchy[(ulong)bVar31 - 1] == TypeInfo_InGameManager)) {
            lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
            pIVar25 = pIVar23;
            pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager;
            if ((lVar20 == 0) ||
               (lVar20 = *(long *)(lVar20 + 0x28), pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager, lVar20 == 0))
            goto label_044bbd3d;
            if (0.0 < *(float *)(lVar20 + 0x14)) {
              lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager;
              if ((lVar20 == 0) ||
                 (lVar20 = *(long *)(lVar20 + 0xd8), pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager, lVar20 == 0))
              goto label_044bbd3d;
              if (*(char *)(lVar20 + 0x11) != '\0') {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  *(undefined8 *)(puVar28 + -0xa8) = 0x44bba25;
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar23 = (Il2CppClass *)0x0;
                *(undefined8 *)(puVar28 + -0xa8) = 0x44bba31;
                bVar13 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)plVar14,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar13 != '\0') {
                  pIVar22 = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
                  pIVar25 = pIVar23;
                  pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (pIVar22 == (Il2CppClass *)0x0) goto label_044bbd3d;
                  pGVar8 = (pIVar22->_1).image;
                  bVar31 = (TypeInfo_InGameManager->_2).naturalAligment;
                  pIVar25 = TypeInfo_InGameManager;
                  pIVar30 = pIVar27;
                  pIVar23 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (((pGVar8->_2).naturalAligment < bVar31) ||
                     ((pGVar8->_2).typeHierarchy[(ulong)bVar31 - 1] != TypeInfo_InGameManager)) goto label_044bbd45;
                  pIVar23 = (Il2CppClass *)0x0;
                  *(undefined8 *)(puVar28 + -0xa8) = 0x44bba7f;
                  GameManagers_InGameManager__OnSongChange
                            ((GameManagers_InGameManager_o *)pIVar22,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
label_044bbc73:
        __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
        pIVar25 = pIVar23;
        pIVar30 = (Il2CppClass *)&TypeInfo_MusicManager;
        if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
          pIVar25 = (Il2CppClass *)0x0;
          *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc90;
          UnityEngine_MonoBehaviour__StopAllCoroutines(__this,(MethodInfo *)0x0);
          pIVar30 = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
          if (pIVar30 != (Il2CppClass *)0x0) {
            if (g_data_057aea6f == '\0') {
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbcbb;
              il2cpp_runtime_helper_023445d0(&TypeInfo_FadeNextSong_d__46);
              g_data_057aea6f = '\x01';
            }
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbcd1;
            pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeNextSong_d__46);
            pIVar25 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbcde;
            System_Object___ctor(pIVar18,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar18[1].klass = 0;
            plVar14 = (long *)(Il2CppClass *)0x0;
            if (pIVar18 != (Il2CppObject *)0x0) {
              pIVar18[2].klass = pIVar30;
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbcfa;
              il2cpp_runtime_helper_022b4080(pIVar18 + 2,pIVar30);
              pIVar18[2].monitor = pIVar27;
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbd0d;
              il2cpp_runtime_helper_022b4080(&pIVar18[2].monitor,pIVar27);
              *(undefined4 *)((long)&pIVar18[3].klass + 4) = *(undefined4 *)(puVar28 + -0xa0);
              *(undefined4 *)&pIVar18[3].klass = *(undefined4 *)(puVar28 + -0x9c);
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)pIVar30,(System_Collections_IEnumerator_o *)pIVar18,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
  }
label_044bbd45:
  *(undefined8 *)(puVar28 + -0xa8) = 0x44bbd4a;
  il2cpp_runtime_helper_022b2fd0();
  *(long **)(puVar28 + -0xa8) = plVar14;
  if (g_data_057aea6d == '\0') {
    *(undefined8 *)(puVar28 + -0xb0) = 0x44bbd66;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar28 + -0xb0) = 0x44bbd72;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar28 + -0xb0) = 0x44bbd7e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    *(undefined8 *)(puVar28 + -0xb0) = 0x44bbd8a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar28 + -0xb0) = 0x44bbd96;
    il2cpp_runtime_helper_023445d0(&"Custom");
    pIVar22 = (Il2CppClass *)&"Name";
    *(undefined8 *)(puVar28 + -0xb0) = 0x44bbda2;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea6d = '\x01';
  }
  pIVar27 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    pIVar22 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    pIVar25 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)(puVar28 + -0xb0) = 0x44bbde9;
    bVar13 = System_String__op_Equality
                       ((System_String_o *)pIVar22,(System_String_o *)pIVar25,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      return;
    }
    if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
      pIVar22 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
      *(undefined8 *)(puVar28 + -0xb0) = 0x44bbe1a;
      pIVar25 = "Custom";
      bVar13 = System_String__op_Equality
                         ((System_String_o *)pIVar22,(System_String_o *)"Custom",(MethodInfo *)0x0);
      plVar15 = *(long **)(TypeInfo_MusicManager + 0xb8);
      if ((char)bVar13 == '\0') {
        if ((*plVar15 != 0) && (pIVar22 = (Il2CppClass *)plVar15[1], pIVar22 != (Il2CppClass *)0x0)) {
          pIVar25 = *(Il2CppClass **)(*plVar15 + 0x20);
          pGVar8 = (pIVar22->_1).image;
          pMVar29 = (pGVar8->vtable)._7_unknown.method;
          pIVar5 = (pGVar8->vtable)._7_unknown.methodPtr;
          *(undefined8 *)(puVar28 + -0xb0) = 0x44bbea0;
          pIVar24 = (Il2CppClass *)(*pIVar5)(pIVar22,pIVar25,pMVar29);
          if (pIVar24 != (Il2CppClass *)0x0) {
            pGVar8 = (pIVar24->_1).image;
            pMVar29 = (pGVar8->vtable)._11_unknown.method;
            pIVar5 = (pGVar8->vtable)._11_unknown.methodPtr;
            *(undefined8 *)(puVar28 + -0xb0) = 0x44bbebf;
            iVar11 = (*pIVar5)(pIVar24,pMVar29);
            *(undefined8 *)(puVar28 + -0xb0) = 0x44bbeca;
            uVar12 = UnityEngine_Random__Range_4df2410(0,iVar11,(MethodInfo *)0x0);
            pGVar8 = (pIVar24->_1).image;
            pMVar29 = (pGVar8->vtable)._5_unknown.method;
            pIVar25 = (Il2CppClass *)(ulong)uVar12;
            pIVar5 = (pGVar8->vtable)._5_unknown.methodPtr;
            *(undefined8 *)(puVar28 + -0xb0) = 0x44bbedf;
            pIVar22 = pIVar24;
            plVar15 = (long *)(*pIVar5)(pIVar24,pIVar25,pMVar29);
            pIVar27 = pIVar24;
            if (plVar15 != (long *)0x0) {
              uVar19 = *(undefined8 *)(*plVar15 + 0x1b0);
              pcVar6 = *(code **)(*plVar15 + 0x1a8);
              *(undefined8 *)(puVar28 + -0xb0) = 0x44bbf01;
              pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar6)(plVar15,"Name",uVar19);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                *(undefined8 *)(puVar28 + -0xb0) = 0x44bbf1c;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar29 = (MethodInfo *)0x0;
              *(undefined8 *)(puVar28 + -0xb0) = 0x44bbf26;
              pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
              ApplicationManagers_MusicManager__SetSong(pSVar17,0.0,pMVar29);
              return;
            }
          }
        }
      }
      else {
        lVar20 = *plVar15;
        if (lVar20 != 0) {
          __this_00 = *(System_Collections_Generic_List_object__o **)(lVar20 + 0x50);
          pIVar22 = (Il2CppClass *)0x0;
          if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
            iVar1 = (__this_00->fields)._size;
            if (iVar1 == 0) {
              return;
            }
            uVar12 = *(int *)(lVar20 + 0x4c) + 1;
            pMVar29 = (MethodInfo *)0x0;
            if ((int)uVar12 < iVar1) {
              pMVar29 = (MethodInfo *)(ulong)uVar12;
            }
            *(int32_t *)(lVar20 + 0x4c) = (int32_t)pMVar29;
            *(undefined8 *)(puVar28 + -0xb0) = 0x44bbe67;
            pSVar17 = (System_String_o *)
                      System_Collections_Generic_List_object___get_Item
                                (__this_00,(int32_t)pMVar29,MethodInfo_String_get_Item);
            ApplicationManagers_MusicManager__SetSong(pSVar17,0.0,pMVar29);
            return;
          }
        }
      }
    }
  }
  *(undefined8 *)(puVar28 + -0xb0) = 0x44bbf37;
  auVar35 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar28 + -0xb0) = b;
  *(Il2CppClass **)(puVar28 + -0xb8) = pIVar23;
  *(Il2CppClass **)(puVar28 + -0xc0) = pIVar30;
  *(Il2CppClass **)(puVar28 + -200) = pIVar27;
  *(long *)(puVar28 + -0xd0) = auVar35._0_8_;
  uVar32 = auVar35._8_8_ & 0xffffffff;
  if (g_data_057aea83 == '\0') {
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbf65;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbf71;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbf7d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbf89;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbf95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbfa1;
    il2cpp_runtime_helper_023445d0(&"/");
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbfad;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea83 = '\x01';
  }
  *(undefined8 *)(puVar28 + -0xd8) = 0x44bbfc8;
  pMVar29 = "";
  bVar13 = System_String__op_Inequality
                     ((System_String_o *)pIVar22,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbfe3;
    pMVar29 = "/";
    pIVar25 = (Il2CppClass *)
              System_String__Concat_3af7150
                        ((System_String_o *)pIVar22,(System_String_o *)"/",(System_String_o *)pIVar25
                         ,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbffe;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar28 + -0xd8) = 0x44bc006;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              ApplicationManagers_ResourceManager__GetExternalTexture((System_String_o *)pIVar25,pMVar29);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bc021;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar27 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar28 + -0xd8) = 0x44bc02d;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  cVar10 = (char)uVar32;
  if ((char)bVar13 != '\0') {
    if (cVar10 != '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bc04b;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar30 = (Il2CppClass *)0x0;
      if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      *(undefined8 *)(puVar28 + -0xd8) = 0x44bc073;
      pIVar27 = pIVar25;
      bVar13 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         (pSVar9,(Il2CppObject *)pIVar25,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar13 == '\0') {
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          *(undefined8 *)(puVar28 + -0xd8) = 0x44bc088;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
        pIVar30 = (Il2CppClass *)0x0;
        if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bc0b3;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar9,(Il2CppObject *)pIVar25,(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
      }
    }
    return;
  }
  if (cVar10 == '\0') {
    UnityEngine_Resources__Load((System_String_o *)pIVar25,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bc0db;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
  pIVar30 = (Il2CppClass *)0x0;
  if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bc103;
    pIVar27 = pIVar25;
    bVar13 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar9,(Il2CppObject *)pIVar25,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar13 == '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bc118;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar27 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar28 + -0xd8) = 0x44bc12f;
      pIVar30 = pIVar25;
      value = UnityEngine_Resources__Load((System_String_o *)pIVar25,(MethodInfo *)0x0);
      if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      *(undefined8 *)(puVar28 + -0xd8) = 0x44bc14c;
      pIVar27 = pIVar25;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_01,(Il2CppObject *)pIVar25,(Il2CppObject *)value,MethodInfo_Void_set_Item);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar28 + -0xd8) = 0x44bc15d;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar30 = (Il2CppClass *)0x0;
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)pIVar25,MethodInfo_Object_get_Item);
      return;
    }
  }
label_044bc19f:
  *(undefined8 *)(puVar28 + -0xd8) = 0x44bc1a4;
  uVar34 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar28 + -0xd8) = &TypeInfo_ResourceManager;
  *(ulong *)(puVar28 + -0xe0) = uVar32;
  *(Il2CppClass **)(puVar28 + -0xe8) = pIVar25;
  *(undefined4 *)(puVar28 + -0xec) = uVar34;
  if (g_data_057aea6a == '\0') {
    *(undefined8 *)(puVar28 + -0x100) = 0x44bc1da;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
    g_data_057aea6a = '\x01';
  }
  *(undefined8 *)(puVar28 + -0x100) = 0x44bc1f0;
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
  uVar34 = 0;
  *(undefined8 *)(puVar28 + -0x100) = 0x44bc1fd;
  pIVar18 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = pIVar30;
    *(undefined8 *)(puVar28 + -0x100) = 0x44bc219;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar30);
    __this_02[3].klass = pIVar27;
    *(undefined8 *)(puVar28 + -0x100) = 0x44bc22c;
    il2cpp_runtime_helper_022b4080(__this_02 + 3,pIVar27);
    *(undefined4 *)&__this_02[2].monitor = *(undefined4 *)(puVar28 + -0xec);
    return;
  }
  *(undefined8 *)(puVar28 + -0x100) = 0x44bc249;
  uVar19 = il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_Dictionary_object__object__o **)(puVar28 + -0x100) = __this_01;
  *(undefined8 *)(puVar28 + -0x108) = 0;
  *(undefined8 *)(puVar28 + -0x110) = uVar19;
  *(undefined8 *)(puVar28 + -0x118) = 0x44bc25f;
  System_Object___ctor(pIVar18,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar18[1].klass = uVar34;
  return;
label_044bb042:
  *(undefined8 *)(puVar28 + -0x58) = 0x44bb047;
  uVar19 = il2cpp_runtime_helper_022b2c90();
  register0x00000020 = (BADSPACEBASE *)(puVar28 + -0x58);
  *(undefined8 *)(puVar28 + -0x58) = uVar19;
  if (g_data_057aea63 == '\0') {
    *(undefined8 *)(puVar28 + -0x60) = 0x44bb066;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    g_data_057aea63 = '\x01';
  }
  lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar20 != 0) {
    if (0.0 < *(float *)(lVar20 + 100)) {
      *(undefined4 *)(lVar20 + 100) = 0;
      *(undefined4 *)(lVar20 + 0x40) = 0;
      *(undefined1 *)(lVar20 + 0x7c) = 1;
    }
    return;
  }
  *(undefined8 *)(puVar28 + -0x60) = 0x44bb0ac;
  il2cpp_runtime_helper_022b2c90();
  goto code_r0x044bb0b0;
}


// ApplicationManagers.MusicManager$$PlayTransition
// il2cpp: void ApplicationManagers_MusicManager__PlayTransition (const MethodInfo* method);
// 0x44bb3a0

void ApplicationManagers_MusicManager__PlayTransition(MethodInfo *method)

{
  int iVar1;
  System_String_c *pSVar2;
  char *pcVar3;
  UnityEngine_AudioSource_o *pUVar4;
  void *pvVar5;
  code *pcVar6;
  Il2CppMethodPointer pIVar7;
  GameManagers_InGameManager_c *pGVar8;
  UnityEngine_MonoBehaviour_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  char cVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  uint uVar13;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  System_String_o *pSVar15;
  undefined8 uVar16;
  long *plVar17;
  Il2CppObject *pIVar18;
  undefined8 in_RAX;
  Il2CppClass *pIVar19;
  long lVar20;
  SimpleJSONFixed_JSONNode_o *pSVar21;
  Il2CppClass *pIVar22;
  Il2CppClass *pIVar23;
  long *plVar24;
  Il2CppClass *pIVar25;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UnityEngine_Object_o *value;
  Il2CppObject *__this_02;
  SimpleJSONFixed_JSONNode_c *in_RCX;
  UnityEngine_Object_c *pUVar26;
  long *unaff_RBX;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined8 unaff_RBP;
  Il2CppClass *in_RSI;
  MethodInfo *pMVar29;
  Il2CppClass *pIVar30;
  byte bVar31;
  long *unaff_R12;
  undefined8 unaff_R13;
  Il2CppClass *unaff_R14;
  ulong uVar32;
  long *plVar33;
  long *unaff_R15;
  float fVar34;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar35;
  undefined1 auVar36 [16];
  
code_r0x044bb3a0:
  *(Il2CppClass **)((long)register0x00000020 + -8) = unaff_R14;
  *(long **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
  if (g_data_057aea65 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44bb3b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44bb3c5;
    il2cpp_runtime_helper_023445d0(&"Transition");
    g_data_057aea65 = '\x01';
  }
  plVar33 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if ((Il2CppClass *)plVar33 != (Il2CppClass *)0x0) {
    pvVar5 = (((Il2CppClass *)plVar33)->_1).image;
    uVar16 = *(undefined8 *)((long)pvVar5 + 0x1b0);
    pcVar6 = *(code **)((long)pvVar5 + 0x1a8);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44bb400;
    in_RSI = "Transition";
    unaff_RBX = (long *)(*pcVar6)(plVar33,"Transition",uVar16);
    if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
       (*(undefined2 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x68) = 0x101,
       (SimpleJSONFixed_JSONNode_o *)unaff_RBX != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      pMVar29 = (((SimpleJSONFixed_JSONNode_o *)unaff_RBX)->klass->vtable)._11_get_Count.method;
      pIVar7 = (((SimpleJSONFixed_JSONNode_o *)unaff_RBX)->klass->vtable)._11_get_Count.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44bb433;
      iVar12 = (*pIVar7)(unaff_RBX,pMVar29);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44bb43e;
      uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
      in_RCX = ((SimpleJSONFixed_JSONNode_o *)unaff_RBX)->klass;
      pMVar29 = (in_RCX->vtable)._5_get_Item.method;
      pIVar7 = (in_RCX->vtable)._5_get_Item.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44bb453;
      pIVar19 = (Il2CppClass *)(*pIVar7)(unaff_RBX,(ulong)uVar13,pMVar29);
      uVar16 = *(undefined8 *)((long)register0x00000020 + -0x10);
      pIVar30 = *(Il2CppClass **)((long)register0x00000020 + -8);
      puVar27 = (undefined1 *)register0x00000020;
      do {
        *(long **)(puVar27 + -8) = unaff_R15;
        *(Il2CppClass **)(puVar27 + -0x10) = pIVar30;
        *(undefined8 *)(puVar27 + -0x18) = uVar16;
        if (g_data_057aea69 == '\0') {
          *(undefined8 *)(puVar27 + -0x30) = 0x44babb1;
          il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
          *(undefined8 *)(puVar27 + -0x30) = 0x44babbd;
          il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
          *(undefined8 *)(puVar27 + -0x30) = 0x44babc9;
          il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
          *(undefined8 *)(puVar27 + -0x30) = 0x44babd5;
          il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
          *(undefined8 *)(puVar27 + -0x30) = 0x44babe1;
          il2cpp_runtime_helper_023445d0(&"Name");
          *(undefined8 *)(puVar27 + -0x30) = 0x44babed;
          il2cpp_runtime_helper_023445d0(&"Music");
          *(undefined8 *)(puVar27 + -0x30) = 0x44babf9;
          il2cpp_runtime_helper_023445d0(&"Volume");
          g_data_057aea69 = '\x01';
        }
        plVar33 = &TypeInfo_JSONNode;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          *(undefined8 *)(puVar27 + -0x30) = 0x44bac18;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar27 + -0x30) = 0x44bac24;
        bVar11 = SimpleJSONFixed_JSONNode__op_Inequality
                           ((SimpleJSONFixed_JSONNode_o *)pIVar19,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          return;
        }
        unaff_R14 = pIVar30;
        if (pIVar19 == (Il2CppClass *)0x0) {
label_044bae61:
          *(undefined8 *)(puVar27 + -0x30) = 0x44bae66;
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          pSVar2 = (pIVar19->_1).image;
          pcVar3 = pSVar2[1]._1.namespaze;
          pcVar6 = (code *)pSVar2[1]._1.name;
          *(undefined8 *)(puVar27 + -0x30) = 0x44bac52;
          cVar10 = (*pcVar6)(pIVar19,"Name",pcVar3);
          if (cVar10 == '\0') {
            return;
          }
          pSVar2 = (pIVar19->_1).image;
          pMVar29 = (pSVar2->vtable)._7_CompareTo.method;
          pIVar7 = (pSVar2->vtable)._7_CompareTo.methodPtr;
          *(undefined8 *)(puVar27 + -0x30) = 0x44bac70;
          pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar7)(pIVar19,"Name",pMVar29);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            *(undefined8 *)(puVar27 + -0x30) = 0x44bac84;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar27 + -0x30) = 0x44bac8e;
          pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            *(undefined8 *)(puVar27 + -0x30) = 0x44baca9;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar27 + -0x30) = 0x44bacbd;
          unaff_R14 = (Il2CppClass *)
                      ApplicationManagers_ResourceManager__LoadAsset
                                ("Music",pSVar15,0,(MethodInfo *)in_RCX);
          if ((unaff_R14 == (Il2CppClass *)0x0) || ((unaff_R14->_1).image == TypeInfo_AudioClip)) {
            pSVar2 = (pIVar19->_1).image;
            pMVar29 = (pSVar2->vtable)._7_CompareTo.method;
            pIVar7 = (pSVar2->vtable)._7_CompareTo.methodPtr;
            *(undefined8 *)(puVar27 + -0x30) = 0x44bacf5;
            pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar7)(pIVar19,"Volume",pMVar29);
            *(undefined8 *)(puVar27 + -0x30) = 0x44bacff;
            fVar34 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar14,(MethodInfo *)0x0);
            plVar33 = &TypeInfo_MusicManager;
            lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
            if (lVar20 != 0) {
              *(float *)(puVar27 + -0x1c) = fVar34;
              pUVar4 = *(UnityEngine_AudioSource_o **)(lVar20 + 0x28);
              if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                *(undefined8 *)(puVar27 + -0x30) = 0x44bad39;
                UnityEngine_AudioSource__set_clip
                          (pUVar4,(UnityEngine_AudioClip_o *)unaff_R14,(MethodInfo *)0x0);
                plVar17 = *(long **)(TypeInfo_MusicManager + 0xb8);
                in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar17;
                if (in_RCX != (SimpleJSONFixed_JSONNode_c *)0x0) {
                  pIVar19 = *(Il2CppClass **)&(in_RCX->_1).byval_arg.bits;
                  if (g_data_057aea72 == '\0') {
                    *(undefined8 *)(puVar27 + -0x30) = 0x44bad64;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
                    *(undefined8 *)(puVar27 + -0x30) = 0x44bad70;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                    *(undefined8 *)(puVar27 + -0x30) = 0x44bad7c;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
                    g_data_057aea72 = '\x01';
                    plVar17 = *(long **)(TypeInfo_MusicManager + 0xb8);
                  }
                  fVar34 = 0.0;
                  if ((char)plVar17[2] == '\0') {
                    lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
                    if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x28), lVar20 == 0)) goto label_044bae61;
                    fVar34 = *(float *)(lVar20 + 0x14) * 0.4;
                  }
                  if (pIVar19 != (Il2CppClass *)0x0) {
                    *(undefined8 *)(puVar27 + -0x30) = 0x44badee;
                    UnityEngine_AudioSource__set_volume
                              ((UnityEngine_AudioSource_o *)pIVar19,*(float *)(puVar27 + -0x1c) * fVar34,
                               (MethodInfo *)0x0);
                    if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
                       (pUVar4 = *(UnityEngine_AudioSource_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x28),
                       pUVar4 != (UnityEngine_AudioSource_o *)0x0)) {
                      *(undefined8 *)(puVar27 + -0x30) = 0x44bae10;
                      UnityEngine_AudioSource__Play_4daa2c0(pUVar4,(MethodInfo *)0x0);
                      if (unaff_R14 != (Il2CppClass *)0x0) {
                        lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
                        *(undefined8 *)(puVar27 + -0x30) = 0x44bae2c;
                        fVar34 = UnityEngine_AudioClip__get_length
                                           ((UnityEngine_AudioClip_o *)unaff_R14,(MethodInfo *)0x0);
                        pIVar19 = (Il2CppClass *)0x0;
                        if (lVar20 != 0) {
                          *(float *)(lVar20 + 0x40) = fVar34;
                          lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
                          *(undefined8 *)(puVar27 + -0x30) = 0x44bae4d;
                          fVar34 = UnityEngine_AudioClip__get_length
                                             ((UnityEngine_AudioClip_o *)unaff_R14,(MethodInfo *)0x0);
                          pIVar19 = (Il2CppClass *)0x0;
                          if (lVar20 != 0) {
                            *(float *)(lVar20 + 100) = fVar34;
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto label_044bae61;
          }
        }
        *(undefined8 *)(puVar27 + -0x30) = 0x44bae6e;
        uVar16 = il2cpp_runtime_helper_022b2fd0(unaff_R14);
        *(long **)(puVar27 + -0x30) = plVar33;
        *(Il2CppClass **)(puVar27 + -0x38) = unaff_R14;
        *(long **)(puVar27 + -0x40) = unaff_R12;
        *(Il2CppClass **)(puVar27 + -0x48) = pIVar19;
        *(undefined8 *)(puVar27 + -0x50) = uVar16;
        if (g_data_057aea62 == '\0') {
          *(undefined8 *)(puVar27 + -0x58) = 0x44bae8d;
          il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
          *(undefined8 *)(puVar27 + -0x58) = 0x44bae99;
          il2cpp_runtime_helper_023445d0(&TypeInfo_MusicPlaylist);
          *(undefined8 *)(puVar27 + -0x58) = 0x44baea5;
          il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
          *(undefined8 *)(puVar27 + -0x58) = 0x44baeb1;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
          *(undefined8 *)(puVar27 + -0x58) = 0x44baebd;
          il2cpp_runtime_helper_023445d0(&"Grabbed");
          g_data_057aea62 = '\x01';
        }
        lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x38), lVar20 == 0)) goto label_044bb042;
        if (*(char *)(lVar20 + 0x11) == '\0') {
          return;
        }
        plVar33 = &TypeInfo_MusicManager;
        plVar17 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
        if (plVar17 == (long *)0x0) goto label_044bb042;
        uVar16 = *(undefined8 *)(*plVar17 + 0x1b0);
        pcVar6 = *(code **)(*plVar17 + 0x1a8);
        *(undefined8 *)(puVar27 + -0x58) = 0x44baf34;
        plVar17 = (long *)(*pcVar6)(plVar17,"Grabbed",uVar16);
        if (plVar17 == (long *)0x0) goto label_044bb042;
        in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar17;
        pMVar29 = (in_RCX->vtable)._5_get_Item.method;
        pIVar7 = (in_RCX->vtable)._5_get_Item.methodPtr;
        *(undefined8 *)(puVar27 + -0x58) = 0x44baf52;
        unaff_R14 = (Il2CppClass *)(*pIVar7)(plVar17,0,pMVar29);
        lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
        if (lVar20 == 0) goto label_044bb042;
        *(undefined1 *)(lVar20 + 0x68) = 0;
        pIVar19 = *(Il2CppClass **)(lVar20 + 0x20);
        unaff_R12 = &TypeInfo_MusicPlaylist;
        if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
          *(undefined8 *)(puVar27 + -0x58) = 0x44baf8c;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar15 = *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
        *(undefined8 *)(puVar27 + -0x58) = 0x44bafa5;
        bVar11 = System_String__op_Equality((System_String_o *)pIVar19,pSVar15,(MethodInfo *)0x0);
        in_RCX = *(SimpleJSONFixed_JSONNode_c **)(TypeInfo_MusicManager + 0xb8);
        pIVar7 = (in_RCX->_1).image;
        if ((char)bVar11 == '\0') {
          if (pIVar7 == (Il2CppMethodPointer)0x0) goto label_044bb042;
          *(undefined8 *)(pIVar7 + 0x70) = **(undefined8 **)(g_data_057b9c00 + 0xb8);
          *(undefined8 *)(puVar27 + -0x58) = 0x44bb02f;
          il2cpp_runtime_helper_022b4080(pIVar7 + 0x70);
        }
        else {
          if (pIVar7 == (Il2CppMethodPointer)0x0) goto label_044bb042;
          *(undefined8 *)(pIVar7 + 0x70) = *(undefined8 *)(pIVar7 + 0x58);
          *(undefined8 *)(puVar27 + -0x58) = 0x44bafd0;
          il2cpp_runtime_helper_022b4080(pIVar7 + 0x70);
          pIVar19 = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
          if ((pIVar19 == (Il2CppClass *)0x0) ||
             (pUVar4 = *(UnityEngine_AudioSource_o **)&(pIVar19->_1).byval_arg.bits,
             pUVar4 == (UnityEngine_AudioSource_o *)0x0)) goto label_044bb042;
          *(undefined8 *)(puVar27 + -0x58) = 0x44baff2;
          fVar34 = UnityEngine_AudioSource__get_time(pUVar4,(MethodInfo *)0x0);
          *(float *)&(pIVar19->_1).klass = fVar34;
        }
        uVar16 = *(undefined8 *)(puVar27 + -0x48);
        unaff_R12 = *(long **)(puVar27 + -0x40);
        pIVar30 = *(Il2CppClass **)(puVar27 + -0x38);
        unaff_R15 = *(long **)(puVar27 + -0x30);
        puVar27 = puVar27 + -0x28;
        pIVar19 = unaff_R14;
      } while( true );
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44bb467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_RBP;
  *(long **)((long)register0x00000020 + -0x28) = unaff_R15;
  *(long **)((long)register0x00000020 + -0x30) = &TypeInfo_MusicManager;
  *(long **)((long)register0x00000020 + -0x38) = unaff_R12;
  *(long **)((long)register0x00000020 + -0x40) = unaff_RBX;
  pIVar19 = (Il2CppClass *)((ulong)in_RSI & 0xffffffff);
  plVar17 = plVar33;
  if (g_data_057aea67 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb493;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    plVar17 = &TypeInfo_MusicPlaylist;
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb49f;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea67 = '\x01';
  }
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    pSVar15 = *(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb4d1;
    in_RSI = (Il2CppClass *)plVar33;
    uVar13 = System_String__op_Inequality(pSVar15,(System_String_o *)plVar33,(MethodInfo *)0x0);
    unaff_R12 = (long *)(ulong)uVar13;
    lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
    plVar17 = (long *)0x0;
    if (lVar20 != 0) {
      *(long **)(lVar20 + 0x20) = plVar33;
      plVar17 = (long *)(lVar20 + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb4fa;
      in_RSI = (Il2CppClass *)plVar33;
      il2cpp_runtime_helper_022b4080();
      lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
      if (lVar20 != 0) {
        cVar10 = *(char *)(lVar20 + 0x68);
        in_RCX = (SimpleJSONFixed_JSONNode_c *)CONCAT71((int7)((ulong)in_RCX >> 8),cVar10);
        if (*(char *)(lVar20 + 0x60) == '\0') {
          if (cVar10 != '\0') goto label_044bb52e;
          if (0.0 < *(float *)(lVar20 + 100)) {
            *(undefined4 *)(lVar20 + 0x40) = 0;
          }
label_044bb578:
          *(undefined4 *)(lVar20 + 100) = 0;
        }
        else {
          *(undefined4 *)(lVar20 + 0x40) = 0;
          if (cVar10 == '\0') goto label_044bb578;
label_044bb52e:
          unaff_RBX = &TypeInfo_MusicPlaylist;
          if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb546;
            il2cpp_runtime_helper_02337ed0();
          }
          in_RSI = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb55e;
          plVar17 = plVar33;
          bVar11 = System_String__op_Equality
                             ((System_String_o *)plVar33,(System_String_o *)in_RSI,(MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
            if (lVar20 == 0) goto label_044bb684;
            goto label_044bb578;
          }
        }
        unaff_RBX = &TypeInfo_MusicPlaylist;
        if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb597;
          il2cpp_runtime_helper_02337ed0();
        }
        in_RSI = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb5af;
        plVar17 = plVar33;
        bVar11 = System_String__op_Equality
                           ((System_String_o *)plVar33,(System_String_o *)in_RSI,(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') goto label_044bb618;
        lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
        if (lVar20 == 0) goto label_044bb684;
        if (*(char *)(lVar20 + 0x7c) == '\0') {
label_044bb618:
          lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if (lVar20 == 0) goto label_044bb684;
          bVar31 = (byte)uVar13 | (byte)pIVar19;
          unaff_R12 = (long *)(ulong)CONCAT31((int3)(uVar13 >> 8),bVar31);
          if ((bVar31 == 1) && (*(float *)(lVar20 + 100) <= 0.0)) {
            *(undefined4 *)(lVar20 + 0x4c) = 0;
            *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb648;
            ApplicationManagers_MusicManager__NextSong((MethodInfo *)plVar17);
          }
        }
        else {
          plVar17 = *(long **)(lVar20 + 0x70);
          in_RSI = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb5f2;
          bVar11 = System_String__op_Inequality
                             ((System_String_o *)plVar17,(System_String_o *)in_RSI,(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') goto label_044bb618;
          lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if (lVar20 == 0) goto label_044bb684;
          plVar17 = *(long **)(lVar20 + 0x70);
          fVar34 = *(float *)(lVar20 + 0x78);
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb616;
          ApplicationManagers_MusicManager__SetSong((System_String_o *)plVar17,fVar34,(MethodInfo *)in_RSI);
        }
        if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
          *(undefined1 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x7c) = 0;
          return;
        }
      }
    }
  }
label_044bb684:
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb689;
  uVar16 = il2cpp_runtime_helper_022b2c90();
  *(long **)((long)register0x00000020 + -0x48) = plVar33;
  *(long **)((long)register0x00000020 + -0x50) = &TypeInfo_MusicManager;
  *(Il2CppClass **)((long)register0x00000020 + -0x58) = pIVar19;
  *(undefined8 *)((long)register0x00000020 + -0x60) = unaff_R13;
  *(long **)((long)register0x00000020 + -0x68) = unaff_R12;
  *(long **)((long)register0x00000020 + -0x70) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x78) = uVar16;
  *(undefined4 *)((long)register0x00000020 + -0x74) = extraout_XMM0_Da;
  if (g_data_057aea6b == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb6bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb6c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb6d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb6e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb6ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb6f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb705;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb711;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb71d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb729;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb735;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb741;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb74d;
    il2cpp_runtime_helper_023445d0(&"Playlist");
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb759;
    il2cpp_runtime_helper_023445d0(&"");
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb765;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea6b = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb774;
  pSVar14 = ApplicationManagers_MusicManager__FindSong((System_String_o *)plVar17,(MethodInfo *)in_RSI);
  lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
  pIVar30 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (lVar20 == 0) goto label_044bbd3d;
  *(undefined1 *)(lVar20 + 0x48) = 0;
  *(MethodInfo **)(lVar20 + 0x58) = "";
  *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb7af;
  il2cpp_runtime_helper_022b4080(lVar20 + 0x58);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb7c8;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar19 = (Il2CppClass *)0x0;
  pIVar23 = (Il2CppClass *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb7d7;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar14,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  *(undefined4 *)((long)register0x00000020 + -0x78) = 0;
  if ((char)bVar11 == '\0') goto label_044bbc73;
  in_RSI = pIVar23;
  if (pSVar14 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bbd3d:
    pIVar22 = pIVar30;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbd42;
    il2cpp_runtime_helper_022b2c90();
    pIVar30 = pIVar19;
    pIVar23 = pIVar22;
  }
  else {
    plVar33 = &"Name";
    pMVar29 = (pSVar14->klass->vtable)._28_HasKey.method;
    pIVar7 = (pSVar14->klass->vtable)._28_HasKey.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb80f;
    cVar10 = (*pIVar7)(pSVar14,"Name",pMVar29);
    if (cVar10 == '\0') {
      pIVar19 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
      pMVar29 = (pSVar14->klass->vtable)._7_get_Item.method;
      pIVar7 = (pSVar14->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbab7;
      plVar17 = (long *)(*pIVar7)(pSVar14,"Playlist",pMVar29);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbacc;
        il2cpp_runtime_helper_02337ed0();
      }
      in_RSI = (Il2CppClass *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbad6;
      pIVar23 = (Il2CppClass *)
                SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                          ((SimpleJSONFixed_JSONNode_o *)plVar17,(MethodInfo *)0x0);
      if (pIVar19 != (Il2CppClass *)0x0) {
        pGVar8 = (pIVar19->_1).image;
        pMVar29 = (pGVar8->vtable)._7_unknown.method;
        pIVar7 = (pGVar8->vtable)._7_unknown.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbaf5;
        pIVar22 = (Il2CppClass *)(*pIVar7)(pIVar19,pIVar23,pMVar29);
        in_RSI = pIVar23;
        if (pIVar22 != (Il2CppClass *)0x0) {
          pUVar26 = (pIVar22->_1).image;
          pIVar23 = pUVar26[1]._1.klass;
          pcVar6 = pUVar26[1]._1.interopData;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbb14;
          iVar12 = (*pcVar6)(pIVar22,pIVar23);
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbb1f;
          uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
          pUVar26 = (pIVar22->_1).image;
          pcVar3 = pUVar26[1]._1.namespaze;
          in_RSI = (Il2CppClass *)(ulong)uVar13;
          pcVar6 = (code *)pUVar26[1]._1.name;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbb34;
          plVar24 = (long *)(*pcVar6)(pIVar22,in_RSI,pcVar3);
          plVar17 = (long *)pIVar22;
          if (plVar24 != (long *)0x0) {
            uVar16 = *(undefined8 *)(*plVar24 + 0x1b0);
            pcVar6 = *(code **)(*plVar24 + 0x1a8);
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbb57;
            pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pcVar6)(plVar24,"Name",uVar16);
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbb61;
            plVar17 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbb7c;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbb90;
            pIVar22 = (Il2CppClass *)
                      ApplicationManagers_ResourceManager__LoadAsset
                                ("Music",(System_String_o *)plVar17,0,(MethodInfo *)pUVar26);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbbab;
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar30 = (Il2CppClass *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbbba;
            bVar11 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pIVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            pIVar19 = pIVar30;
            if ((((char)bVar11 != '\0') && (pIVar19 = pIVar22, pIVar22 != (Il2CppClass *)0x0)) &&
               (in_RSI = TypeInfo_AudioClip, pIVar23 = pIVar22, (pIVar22->_1).image != TypeInfo_AudioClip))
            goto label_044bbd45;
            uVar16 = *(undefined8 *)(*plVar24 + 0x1b0);
            pcVar6 = *(code **)(*plVar24 + 0x1a8);
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbbf7;
            pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pcVar6)(plVar24,"Volume",uVar16);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbc0c;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbc16;
            fVar34 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar14,(MethodInfo *)0x0);
            *(float *)((long)register0x00000020 + -0x78) = fVar34;
            lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
            uVar16 = *(undefined8 *)(*plVar24 + 0x1b0);
            pcVar6 = *(code **)(*plVar24 + 0x1a8);
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbc4d;
            pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pcVar6)(plVar24,"Name",uVar16);
            in_RSI = (Il2CppClass *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbc57;
            pIVar23 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
            plVar17 = (long *)0x0;
            pIVar30 = (Il2CppClass *)&TypeInfo_MusicManager;
            if (lVar20 != 0) {
              *(Il2CppClass **)(lVar20 + 0x58) = pIVar23;
              plVar17 = (long *)(lVar20 + 0x58);
              *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbc73;
              il2cpp_runtime_helper_022b4080(plVar17);
              goto label_044bbc73;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
    pMVar29 = (pSVar14->klass->vtable)._7_get_Item.method;
    pIVar7 = (pSVar14->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb82f;
    pSVar21 = (SimpleJSONFixed_JSONNode_o *)(*pIVar7)(pSVar14,"Name",pMVar29);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb844;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb84e;
    plVar17 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar21,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb869;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb87d;
    pIVar22 = (Il2CppClass *)
              ApplicationManagers_ResourceManager__LoadAsset
                        ("Music",(System_String_o *)plVar17,0,(MethodInfo *)in_RCX);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb898;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb8a7;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pIVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pIVar19 = (Il2CppClass *)0x0;
    if ((((char)bVar11 == '\0') || (pIVar19 = pIVar22, pIVar22 == (Il2CppClass *)0x0)) ||
       (in_RSI = TypeInfo_AudioClip, pIVar30 = (Il2CppClass *)0x0, pIVar23 = pIVar22,
       (pIVar22->_1).image == TypeInfo_AudioClip)) {
      pMVar29 = (pSVar14->klass->vtable)._7_get_Item.method;
      pIVar7 = (pSVar14->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb8e4;
      pSVar21 = (SimpleJSONFixed_JSONNode_o *)(*pIVar7)(pSVar14,"Volume",pMVar29);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb8f9;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb903;
      fVar34 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar21,(MethodInfo *)0x0);
      *(float *)((long)register0x00000020 + -0x78) = fVar34;
      lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
      pMVar29 = (pSVar14->klass->vtable)._7_get_Item.method;
      pIVar7 = (pSVar14->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb934;
      pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar7)(pSVar14,"Name",pMVar29);
      in_RSI = (Il2CppClass *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb93e;
      pIVar23 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
      plVar17 = (long *)(Il2CppClass *)0x0;
      pIVar30 = (Il2CppClass *)&TypeInfo_MusicManager;
      if (lVar20 != 0) {
        *(Il2CppClass **)(lVar20 + 0x58) = pIVar23;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bb95a;
        il2cpp_runtime_helper_022b4080(lVar20 + 0x58);
        plVar33 = &TypeInfo_SceneLoader;
        plVar17 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if ((Il2CppClass *)plVar17 != (Il2CppClass *)0x0) {
          pUVar26 = (((Il2CppClass *)plVar17)->_1).image;
          bVar31 = (TypeInfo_InGameManager->_2).naturalAligment;
          if ((bVar31 <= (pUVar26->_2).naturalAligment) &&
             ((pUVar26->_2).typeHierarchy[(ulong)bVar31 - 1] == TypeInfo_InGameManager)) {
            lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
            in_RSI = pIVar23;
            pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager;
            if ((lVar20 == 0) ||
               (lVar20 = *(long *)(lVar20 + 0x28), pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager, lVar20 == 0))
            goto label_044bbd3d;
            if (0.0 < *(float *)(lVar20 + 0x14)) {
              lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager;
              if ((lVar20 == 0) ||
                 (lVar20 = *(long *)(lVar20 + 0xd8), pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager, lVar20 == 0))
              goto label_044bbd3d;
              if (*(char *)(lVar20 + 0x11) != '\0') {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bba25;
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar23 = (Il2CppClass *)0x0;
                *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bba31;
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)plVar17,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar11 != '\0') {
                  pIVar22 = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
                  in_RSI = pIVar23;
                  pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (pIVar22 == (Il2CppClass *)0x0) goto label_044bbd3d;
                  pGVar8 = (pIVar22->_1).image;
                  bVar31 = (TypeInfo_InGameManager->_2).naturalAligment;
                  in_RSI = TypeInfo_InGameManager;
                  pIVar30 = pIVar19;
                  pIVar23 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (((pGVar8->_2).naturalAligment < bVar31) ||
                     ((pGVar8->_2).typeHierarchy[(ulong)bVar31 - 1] != TypeInfo_InGameManager)) goto label_044bbd45;
                  pIVar23 = (Il2CppClass *)0x0;
                  *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bba7f;
                  GameManagers_InGameManager__OnSongChange
                            ((GameManagers_InGameManager_o *)pIVar22,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
label_044bbc73:
        __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
        in_RSI = pIVar23;
        pIVar30 = (Il2CppClass *)&TypeInfo_MusicManager;
        if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
          in_RSI = (Il2CppClass *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbc90;
          UnityEngine_MonoBehaviour__StopAllCoroutines(__this,(MethodInfo *)0x0);
          pIVar30 = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
          if (pIVar30 != (Il2CppClass *)0x0) {
            if (g_data_057aea6f == '\0') {
              *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbcbb;
              il2cpp_runtime_helper_023445d0(&TypeInfo_FadeNextSong_d__46);
              g_data_057aea6f = '\x01';
            }
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbcd1;
            pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeNextSong_d__46);
            in_RSI = (Il2CppClass *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbcde;
            System_Object___ctor(pIVar18,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar18[1].klass = 0;
            plVar17 = (long *)(Il2CppClass *)0x0;
            if (pIVar18 != (Il2CppObject *)0x0) {
              pIVar18[2].klass = pIVar30;
              *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbcfa;
              il2cpp_runtime_helper_022b4080(pIVar18 + 2,pIVar30);
              pIVar18[2].monitor = pIVar19;
              *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbd0d;
              il2cpp_runtime_helper_022b4080(&pIVar18[2].monitor,pIVar19);
              *(undefined4 *)((long)&pIVar18[3].klass + 4) = *(undefined4 *)((long)register0x00000020 + -0x78)
              ;
              *(undefined4 *)&pIVar18[3].klass = *(undefined4 *)((long)register0x00000020 + -0x74);
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)pIVar30,(System_Collections_IEnumerator_o *)pIVar18,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
  }
label_044bbd45:
  *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44bbd4a;
  il2cpp_runtime_helper_022b2fd0();
  *(long **)((long)register0x00000020 + -0x80) = plVar17;
  if (g_data_057aea6d == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44bbd66;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44bbd72;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44bbd7e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44bbd8a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44bbd96;
    il2cpp_runtime_helper_023445d0(&"Custom");
    pIVar22 = (Il2CppClass *)&"Name";
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44bbda2;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea6d = '\x01';
  }
  pIVar19 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    pIVar22 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    in_RSI = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44bbde9;
    bVar11 = System_String__op_Equality
                       ((System_String_o *)pIVar22,(System_String_o *)in_RSI,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return;
    }
    if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
      pIVar22 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44bbe1a;
      in_RSI = "Custom";
      bVar11 = System_String__op_Equality
                         ((System_String_o *)pIVar22,(System_String_o *)"Custom",(MethodInfo *)0x0);
      plVar17 = *(long **)(TypeInfo_MusicManager + 0xb8);
      if ((char)bVar11 == '\0') {
        if ((*plVar17 != 0) && (pIVar22 = (Il2CppClass *)plVar17[1], pIVar22 != (Il2CppClass *)0x0)) {
          in_RSI = *(Il2CppClass **)(*plVar17 + 0x20);
          pGVar8 = (pIVar22->_1).image;
          pMVar29 = (pGVar8->vtable)._7_unknown.method;
          pIVar7 = (pGVar8->vtable)._7_unknown.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44bbea0;
          pIVar25 = (Il2CppClass *)(*pIVar7)(pIVar22,in_RSI,pMVar29);
          if (pIVar25 != (Il2CppClass *)0x0) {
            pGVar8 = (pIVar25->_1).image;
            pMVar29 = (pGVar8->vtable)._11_unknown.method;
            pIVar7 = (pGVar8->vtable)._11_unknown.methodPtr;
            *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44bbebf;
            iVar12 = (*pIVar7)(pIVar25,pMVar29);
            *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44bbeca;
            uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
            pGVar8 = (pIVar25->_1).image;
            pMVar29 = (pGVar8->vtable)._5_unknown.method;
            in_RSI = (Il2CppClass *)(ulong)uVar13;
            pIVar7 = (pGVar8->vtable)._5_unknown.methodPtr;
            *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44bbedf;
            pIVar22 = pIVar25;
            plVar17 = (long *)(*pIVar7)(pIVar25,in_RSI,pMVar29);
            pIVar19 = pIVar25;
            if (plVar17 != (long *)0x0) {
              uVar16 = *(undefined8 *)(*plVar17 + 0x1b0);
              pcVar6 = *(code **)(*plVar17 + 0x1a8);
              *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44bbf01;
              pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pcVar6)(plVar17,"Name",uVar16);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44bbf1c;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar29 = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44bbf26;
              pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
              ApplicationManagers_MusicManager__SetSong(pSVar15,0.0,pMVar29);
              return;
            }
          }
        }
      }
      else {
        lVar20 = *plVar17;
        if (lVar20 != 0) {
          __this_00 = *(System_Collections_Generic_List_object__o **)(lVar20 + 0x50);
          pIVar22 = (Il2CppClass *)0x0;
          if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
            iVar1 = (__this_00->fields)._size;
            if (iVar1 == 0) {
              return;
            }
            uVar13 = *(int *)(lVar20 + 0x4c) + 1;
            pMVar29 = (MethodInfo *)0x0;
            if ((int)uVar13 < iVar1) {
              pMVar29 = (MethodInfo *)(ulong)uVar13;
            }
            *(int32_t *)(lVar20 + 0x4c) = (int32_t)pMVar29;
            *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44bbe67;
            pSVar15 = (System_String_o *)
                      System_Collections_Generic_List_object___get_Item
                                (__this_00,(int32_t)pMVar29,MethodInfo_String_get_Item);
            ApplicationManagers_MusicManager__SetSong(pSVar15,0.0,pMVar29);
            return;
          }
        }
      }
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44bbf37;
  auVar36 = il2cpp_runtime_helper_022b2c90();
  *(long **)((long)register0x00000020 + -0x88) = plVar33;
  *(Il2CppClass **)((long)register0x00000020 + -0x90) = pIVar23;
  *(Il2CppClass **)((long)register0x00000020 + -0x98) = pIVar30;
  *(Il2CppClass **)((long)register0x00000020 + -0xa0) = pIVar19;
  *(long *)((long)register0x00000020 + -0xa8) = auVar36._0_8_;
  uVar32 = auVar36._8_8_ & 0xffffffff;
  if (g_data_057aea83 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbf65;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbf71;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbf7d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbf89;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbf95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbfa1;
    il2cpp_runtime_helper_023445d0(&"/");
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbfad;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea83 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbfc8;
  pMVar29 = "";
  bVar11 = System_String__op_Inequality
                     ((System_String_o *)pIVar22,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbfe3;
    pMVar29 = "/";
    in_RSI = (Il2CppClass *)
             System_String__Concat_3af7150
                       ((System_String_o *)pIVar22,(System_String_o *)"/",(System_String_o *)in_RSI,
                        (MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbffe;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bc006;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              ApplicationManagers_ResourceManager__GetExternalTexture((System_String_o *)in_RSI,pMVar29);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bc021;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar19 = (Il2CppClass *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bc02d;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  cVar10 = (char)uVar32;
  if ((char)bVar11 != '\0') {
    if (cVar10 != '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bc04b;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar30 = (Il2CppClass *)0x0;
      if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bc073;
      pIVar19 = in_RSI;
      bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         (pSVar9,(Il2CppObject *)in_RSI,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar11 == '\0') {
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bc088;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
        pIVar30 = (Il2CppClass *)0x0;
        if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bc0b3;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar9,(Il2CppObject *)in_RSI,(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
      }
    }
    return;
  }
  if (cVar10 == '\0') {
    UnityEngine_Resources__Load((System_String_o *)in_RSI,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bc0db;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
  pIVar30 = (Il2CppClass *)0x0;
  if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bc103;
    pIVar19 = in_RSI;
    bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar9,(Il2CppObject *)in_RSI,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 == '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bc118;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar19 = (Il2CppClass *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bc12f;
      pIVar30 = in_RSI;
      value = UnityEngine_Resources__Load((System_String_o *)in_RSI,(MethodInfo *)0x0);
      if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bc14c;
      pIVar19 = in_RSI;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_01,(Il2CppObject *)in_RSI,(Il2CppObject *)value,MethodInfo_Void_set_Item);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bc15d;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar30 = (Il2CppClass *)0x0;
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)in_RSI,MethodInfo_Object_get_Item);
      return;
    }
  }
label_044bc19f:
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bc1a4;
  uVar35 = il2cpp_runtime_helper_022b2c90();
  *(long **)((long)register0x00000020 + -0xb0) = &TypeInfo_ResourceManager;
  *(ulong *)((long)register0x00000020 + -0xb8) = uVar32;
  *(Il2CppClass **)((long)register0x00000020 + -0xc0) = in_RSI;
  *(undefined4 *)((long)register0x00000020 + -0xc4) = uVar35;
  if (g_data_057aea6a == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc1da;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
    g_data_057aea6a = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc1f0;
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
  uVar35 = 0;
  *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc1fd;
  pIVar18 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = pIVar30;
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc219;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar30);
    __this_02[3].klass = pIVar19;
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc22c;
    il2cpp_runtime_helper_022b4080(__this_02 + 3,pIVar19);
    *(undefined4 *)&__this_02[2].monitor = *(undefined4 *)((long)register0x00000020 + -0xc4);
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc249;
  uVar16 = il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_Dictionary_object__object__o **)((long)register0x00000020 + -0xd8) = __this_01;
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0xe8) = uVar16;
  *(undefined8 *)((long)register0x00000020 + -0xf0) = 0x44bc25f;
  System_Object___ctor(pIVar18,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar18[1].klass = uVar35;
  return;
label_044bb042:
  *(undefined8 *)(puVar27 + -0x58) = 0x44bb047;
  uVar16 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar27 + -0x58) = uVar16;
  if (g_data_057aea63 == '\0') {
    *(undefined8 *)(puVar27 + -0x60) = 0x44bb066;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    g_data_057aea63 = '\x01';
  }
  lVar20 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar20 != 0) {
    if (0.0 < *(float *)(lVar20 + 100)) {
      *(undefined4 *)(lVar20 + 100) = 0;
      *(undefined4 *)(lVar20 + 0x40) = 0;
      *(undefined1 *)(lVar20 + 0x7c) = 1;
    }
    return;
  }
  *(undefined8 *)(puVar27 + -0x60) = 0x44bb0ac;
  il2cpp_runtime_helper_022b2c90();
  puVar28 = puVar27 + -0x60;
  *(Il2CppClass **)(puVar27 + -0x60) = pIVar19;
  if (g_data_057aea64 == '\0') {
    *(undefined8 *)(puVar27 + -0x68) = 0x44bb0c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar27 + -0x68) = 0x44bb0d2;
    il2cpp_runtime_helper_023445d0(&"Effect");
    g_data_057aea64 = '\x01';
  }
  unaff_RBX = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if ((SimpleJSONFixed_JSONNode_o *)unaff_RBX == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bb14e:
    *(undefined8 *)(puVar27 + -0x68) = 0x44bb153;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar29 = (((SimpleJSONFixed_JSONNode_o *)unaff_RBX)->klass->vtable)._7_get_Item.method;
    pIVar7 = (((SimpleJSONFixed_JSONNode_o *)unaff_RBX)->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar27 + -0x68) = 0x44bb10d;
    plVar17 = (long *)(*pIVar7)(unaff_RBX,"Effect",pMVar29);
    if (plVar17 == (long *)0x0) goto label_044bb14e;
    uVar16 = *(undefined8 *)(*plVar17 + 0x1f0);
    pcVar6 = *(code **)(*plVar17 + 0x1e8);
    *(undefined8 *)(puVar27 + -0x68) = 0x44bb128;
    iVar12 = (*pcVar6)(plVar17,uVar16);
    *(undefined8 *)(puVar27 + -0x68) = 0x44bb133;
    uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
    in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar17;
    pMVar29 = (in_RCX->vtable)._5_get_Item.method;
    pIVar7 = (in_RCX->vtable)._5_get_Item.methodPtr;
    *(undefined8 *)(puVar27 + -0x68) = 0x44bb148;
    unaff_RBX = (long *)(*pIVar7)(plVar17,(ulong)uVar13,pMVar29);
    pIVar19 = *(Il2CppClass **)(puVar27 + -0x60);
    puVar28 = puVar27 + -0x58;
  }
  *(long **)(puVar28 + -8) = plVar33;
  *(Il2CppClass **)(puVar28 + -0x10) = unaff_R14;
  *(Il2CppClass **)(puVar28 + -0x18) = pIVar19;
  register0x00000020 = (BADSPACEBASE *)(puVar28 + -0x28);
  if (g_data_057aea68 == '\0') {
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb181;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb18d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb199;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb1a5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb1b1;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb1bd;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb1c9;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea68 = '\x01';
  }
  unaff_R15 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb1e8;
    il2cpp_runtime_helper_02337ed0();
  }
  in_RSI = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar28 + -0x30) = 0x44bb1f4;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)unaff_RBX,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  if ((SimpleJSONFixed_JSONNode_o *)unaff_RBX != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pMVar29 = (((SimpleJSONFixed_JSONNode_o *)unaff_RBX)->klass->vtable)._28_HasKey.method;
    pIVar7 = (((SimpleJSONFixed_JSONNode_o *)unaff_RBX)->klass->vtable)._28_HasKey.methodPtr;
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb222;
    cVar10 = (*pIVar7)(unaff_RBX,"Name",pMVar29);
    if (cVar10 == '\0') {
      return;
    }
    pMVar29 = (((SimpleJSONFixed_JSONNode_o *)unaff_RBX)->klass->vtable)._7_get_Item.method;
    pIVar7 = (((SimpleJSONFixed_JSONNode_o *)unaff_RBX)->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb240;
    pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar7)(unaff_RBX,"Name",pMVar29);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar28 + -0x30) = 0x44bb254;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb25e;
    pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar28 + -0x30) = 0x44bb279;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb28d;
    unaff_R14 = (Il2CppClass *)
                ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar15,0,(MethodInfo *)in_RCX);
    if ((unaff_R14 != (Il2CppClass *)0x0) && (in_RSI = TypeInfo_AudioClip, (unaff_R14->_1).image != TypeInfo_AudioClip))
    goto label_044bb389;
    pMVar29 = (((SimpleJSONFixed_JSONNode_o *)unaff_RBX)->klass->vtable)._7_get_Item.method;
    pIVar7 = (((SimpleJSONFixed_JSONNode_o *)unaff_RBX)->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb2c5;
    pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar7)(unaff_RBX,"Volume",pMVar29);
    in_RSI = (Il2CppClass *)0x0;
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb2cf;
    fVar34 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar14,(MethodInfo *)0x0);
    *(float *)(puVar28 + -0x1c) = fVar34;
    unaff_R15 = (long *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
    if ((Il2CppClass *)unaff_R15 != (Il2CppClass *)0x0) {
      if (g_data_057aea6a == '\0') {
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb307;
        il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
        g_data_057aea6a = '\x01';
      }
      *(undefined8 *)(puVar28 + -0x30) = 0x44bb31d;
      pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
      in_RSI = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar28 + -0x30) = 0x44bb32a;
      System_Object___ctor(pIVar18,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar18[1].klass = 0;
      unaff_RBX = (long *)0x0;
      if (pIVar18 != (Il2CppObject *)0x0) {
        pIVar18[2].klass = (Il2CppClass *)unaff_R15;
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb346;
        il2cpp_runtime_helper_022b4080(pIVar18 + 2,unaff_R15);
        pIVar18[3].klass = unaff_R14;
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb359;
        il2cpp_runtime_helper_022b4080(pIVar18 + 3,unaff_R14);
        *(undefined4 *)&pIVar18[2].monitor = *(undefined4 *)(puVar28 + -0x1c);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)unaff_R15,(System_Collections_IEnumerator_o *)pIVar18,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  *(undefined8 *)(puVar28 + -0x30) = 0x44bb389;
  il2cpp_runtime_helper_022b2c90();
label_044bb389:
  *(undefined8 *)(puVar28 + -0x30) = 0x44bb391;
  in_RAX = il2cpp_runtime_helper_022b2fd0(unaff_R14);
  goto code_r0x044bb3a0;
}


// ApplicationManagers.MusicManager$$SetPlaylist
// il2cpp: void ApplicationManagers_MusicManager__SetPlaylist (System_String_o* playlist, const MethodInfo* method);
// 0x44ba830

void ApplicationManagers_MusicManager__SetPlaylist(System_String_o *playlist,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_object__c *pSVar2;
  Il2CppMethodPointer pIVar3;
  UnityEngine_AudioSource_o *pUVar4;
  code *pcVar5;
  void *pvVar6;
  GameManagers_InGameManager_c *pGVar7;
  char *pcVar8;
  UnityEngine_MonoBehaviour_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  char cVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  uint uVar13;
  Il2CppClass *pIVar14;
  Il2CppClass *pIVar15;
  SimpleJSONFixed_JSONNode_o *pSVar16;
  System_String_o *pSVar17;
  undefined8 uVar18;
  long *plVar19;
  Il2CppObject *pIVar20;
  long lVar21;
  SimpleJSONFixed_JSONNode_o *pSVar22;
  Il2CppClass *pIVar23;
  Il2CppClass *pIVar24;
  Il2CppClass *pIVar25;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UnityEngine_Object_o *value;
  Il2CppObject *__this_02;
  SimpleJSONFixed_JSONNode_c *method_00;
  UnityEngine_Object_c *pUVar26;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar27;
  Il2CppClass *unaff_RBX;
  long *plVar28;
  undefined1 *puVar29;
  Il2CppClass **ppIVar30;
  undefined8 unaff_RBP;
  Il2CppClass *pIVar31;
  byte bVar32;
  long *unaff_R12;
  long *unaff_R13;
  ulong uVar33;
  long *plVar34;
  float fVar35;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar36;
  undefined1 auVar37 [16];
  Il2CppClass *pIStack_38;
  undefined8 uStack_30;
  
  pIVar31 = (Il2CppClass *)playlist;
  if (g_data_057aea66 == '\0') {
    uStack_30 = 0x44ba851;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    uStack_30 = 0x44ba85d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    uStack_30 = 0x44ba869;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    uStack_30 = 0x44ba875;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicPlaylist);
    uStack_30 = 0x44ba881;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pIVar31 = (Il2CppClass *)&MethodInfo_String_get_Value;
    uStack_30 = 0x44ba88d;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea66 = '\x01';
  }
  plVar34 = &TypeInfo_SettingsManager;
  lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x98), lVar21 != 0)) {
    unaff_RBX = *(Il2CppClass **)(lVar21 + 0x18);
    unaff_R13 = &TypeInfo_MusicPlaylist;
    if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
      uStack_30 = 0x44ba8e2;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_30 = 0x44ba8fb;
    pIVar31 = unaff_RBX;
    bVar11 = System_String__op_Inequality
                       ((System_String_o *)unaff_RBX,*(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 8)
                        ,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
label_044ba9b6:
      if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
        uStack_30 = 0x44ba9c8;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_30 = 0x44ba9e1;
      pIVar31 = (Il2CppClass *)playlist;
      bVar11 = System_String__op_Equality
                         (playlist,*(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 8),(MethodInfo *)0x0
                         );
      lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
      if (lVar21 != 0) {
        pMVar27 = extraout_RDX;
        if ((char)bVar11 == '\0') {
          *(undefined1 *)(lVar21 + 0x60) = 0;
          bVar11 = 0;
        }
        else {
          *(undefined1 *)(lVar21 + 0x60) = 1;
          if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
            uStack_30 = 0x44baa14;
            il2cpp_runtime_helper_02337ed0();
            pMVar27 = extraout_RDX_00;
          }
          playlist = *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x18);
          bVar11 = 1;
        }
        ApplicationManagers_MusicManager__FinishSetPlaylist(playlist,bVar11,pMVar27);
        return;
      }
    }
    else {
      lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
      if (((lVar21 != 0) && (*(long *)(lVar21 + 0x98) != 0)) && (*(long *)(lVar21 + 0xa0) != 0)) {
        pSVar17 = *(System_String_o **)(*(long *)(lVar21 + 0xa0) + 0x18);
        pIVar31 = (Il2CppClass *)0x0;
        if (pSVar17 != (System_String_o *)0x0) {
          playlist = *(System_String_o **)(*(long *)(lVar21 + 0x98) + 0x18);
          lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
          uStack_30 = 0x44ba970;
          unaff_R12 = (long *)System_String__Split(pSVar17,0x2c,0,(MethodInfo *)0x0);
          uStack_30 = 0x44ba982;
          plVar34 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
          uStack_30 = 0x44ba99a;
          pIVar31 = (Il2CppClass *)plVar34;
          System_Collections_Generic_List_object____ctor_362ba10
                    ((System_Collections_Generic_List_object__o *)plVar34,
                     (System_Collections_Generic_IEnumerable_T__o *)unaff_R12,MethodInfo_List_1_System_String);
          unaff_RBX = (Il2CppClass *)0x0;
          if (lVar21 != 0) {
            *(long **)(lVar21 + 0x50) = plVar34;
            unaff_RBX = (Il2CppClass *)(lVar21 + 0x50);
            uStack_30 = 0x44ba9b6;
            il2cpp_runtime_helper_022b4080(unaff_RBX,plVar34);
            goto label_044ba9b6;
          }
        }
      }
    }
  }
  uStack_30 = 0x44baa46;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea72 == '\0') {
    pIStack_38 = (Il2CppClass *)0x44baa66;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    pIStack_38 = (Il2CppClass *)0x44baa72;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pIVar31 = (Il2CppClass *)&MethodInfo_Single_get_Value;
    pIStack_38 = (Il2CppClass *)0x44baa7e;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea72 = '\x01';
  }
  if (*(char *)(*(long *)(TypeInfo_MusicManager + 0xb8) + 0x10) != '\0') {
    return;
  }
  lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar21 != 0) && (*(long *)(lVar21 + 0x28) != 0)) {
    return;
  }
  pIStack_38 = (Il2CppClass *)0x44baadb;
  il2cpp_runtime_helper_022b2c90(0);
  ppIVar30 = &pIStack_38;
  pIStack_38 = unaff_RBX;
  if (g_data_057aea61 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    pIVar31 = (Il2CppClass *)&"Death";
    il2cpp_runtime_helper_023445d0();
    g_data_057aea61 = '\x01';
  }
  plVar28 = &TypeInfo_MusicManager;
  method_00 = (SimpleJSONFixed_JSONNode_c *)**(long **)(TypeInfo_MusicManager + 0xb8);
  if (method_00 == (SimpleJSONFixed_JSONNode_c *)0x0) {
label_044bab83:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(char *)&(method_00->_1).generic_class == '\0') {
      return;
    }
    pIVar31 = (Il2CppClass *)(*(long **)(TypeInfo_MusicManager + 0xb8))[1];
    if ((pIVar31 == (Il2CppClass *)0x0) ||
       (pSVar2 = (pIVar31->_1).image,
       pIVar14 = (Il2CppClass *)
                 (*(pSVar2->vtable)._7_Insert.methodPtr)
                           (pIVar31,"Death",(pSVar2->vtable)._7_Insert.method),
       pIVar14 == (Il2CppClass *)0x0)) goto label_044bab83;
    pSVar2 = (pIVar14->_1).image;
    pIVar15 = (Il2CppClass *)
              (*(pSVar2->vtable)._5_set_Item.methodPtr)(pIVar14,0,(pSVar2->vtable)._5_set_Item.method);
    method_00 = (SimpleJSONFixed_JSONNode_c *)**(long **)(TypeInfo_MusicManager + 0xb8);
    pIVar31 = pIVar14;
    if (method_00 == (SimpleJSONFixed_JSONNode_c *)0x0) goto label_044bab83;
    *(undefined1 *)&(method_00->_1).typeMetadataHandle = 0;
    plVar28 = (long *)pIStack_38;
    ppIVar30 = (Il2CppClass **)&uStack_30;
    pIVar31 = pIVar15;
  }
ApplicationManagers_MusicManager__PlayImmediateTransition:
  *(long **)((long)ppIVar30 + -8) = plVar34;
  *(System_String_o **)((long)ppIVar30 + -0x10) = playlist;
  *(long **)((long)ppIVar30 + -0x18) = plVar28;
  if (g_data_057aea69 == '\0') {
    *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44babb1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44babbd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44babc9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44babd5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44babe1;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44babed;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44babf9;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea69 = '\x01';
  }
  plVar34 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bac18;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bac24;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pIVar31,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  pIVar14 = (Il2CppClass *)playlist;
  if (pIVar31 == (Il2CppClass *)0x0) {
label_044bae61:
    *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bae66;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar2 = (pIVar31->_1).image;
    pMVar27 = (pSVar2->vtable)._28_RemoveAt.method;
    pIVar3 = (pSVar2->vtable)._28_RemoveAt.methodPtr;
    *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bac52;
    cVar10 = (*pIVar3)(pIVar31,"Name",pMVar27);
    if (cVar10 == '\0') {
      return;
    }
    pSVar2 = (pIVar31->_1).image;
    pMVar27 = (pSVar2->vtable)._7_Insert.method;
    pIVar3 = (pSVar2->vtable)._7_Insert.methodPtr;
    *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bac70;
    pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar3)(pIVar31,"Name",pMVar27);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bac84;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bac8e;
    pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44baca9;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bacbd;
    pIVar14 = (Il2CppClass *)
              ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar17,0,(MethodInfo *)method_00);
    if ((pIVar14 == (Il2CppClass *)0x0) || ((pIVar14->_1).image == TypeInfo_AudioClip)) {
      pSVar2 = (pIVar31->_1).image;
      pMVar27 = (pSVar2->vtable)._7_Insert.method;
      pIVar3 = (pSVar2->vtable)._7_Insert.methodPtr;
      *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bacf5;
      pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar3)(pIVar31,"Volume",pMVar27);
      *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bacff;
      fVar35 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar16,(MethodInfo *)0x0);
      plVar34 = &TypeInfo_MusicManager;
      lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
      if (lVar21 != 0) {
        *(float *)((long)ppIVar30 + -0x1c) = fVar35;
        pUVar4 = *(UnityEngine_AudioSource_o **)(lVar21 + 0x28);
        if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
          *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bad39;
          UnityEngine_AudioSource__set_clip(pUVar4,(UnityEngine_AudioClip_o *)pIVar14,(MethodInfo *)0x0);
          plVar28 = *(long **)(TypeInfo_MusicManager + 0xb8);
          method_00 = (SimpleJSONFixed_JSONNode_c *)*plVar28;
          if (method_00 != (SimpleJSONFixed_JSONNode_c *)0x0) {
            pIVar31 = *(Il2CppClass **)&(method_00->_1).byval_arg.bits;
            if (g_data_057aea72 == '\0') {
              *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bad64;
              il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
              *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bad70;
              il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
              *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bad7c;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
              g_data_057aea72 = '\x01';
              plVar28 = *(long **)(TypeInfo_MusicManager + 0xb8);
            }
            fVar35 = 0.0;
            if ((char)plVar28[2] == '\0') {
              lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
              if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x28), lVar21 == 0)) goto label_044bae61;
              fVar35 = *(float *)(lVar21 + 0x14) * 0.4;
            }
            if (pIVar31 != (Il2CppClass *)0x0) {
              *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44badee;
              UnityEngine_AudioSource__set_volume
                        ((UnityEngine_AudioSource_o *)pIVar31,*(float *)((long)ppIVar30 + -0x1c) * fVar35,
                         (MethodInfo *)0x0);
              if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
                 (pUVar4 = *(UnityEngine_AudioSource_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x28),
                 pUVar4 != (UnityEngine_AudioSource_o *)0x0)) {
                *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bae10;
                UnityEngine_AudioSource__Play_4daa2c0(pUVar4,(MethodInfo *)0x0);
                if (pIVar14 != (Il2CppClass *)0x0) {
                  lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
                  *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bae2c;
                  fVar35 = UnityEngine_AudioClip__get_length
                                     ((UnityEngine_AudioClip_o *)pIVar14,(MethodInfo *)0x0);
                  pIVar31 = (Il2CppClass *)0x0;
                  if (lVar21 != 0) {
                    *(float *)(lVar21 + 0x40) = fVar35;
                    lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
                    *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bae4d;
                    fVar35 = UnityEngine_AudioClip__get_length
                                       ((UnityEngine_AudioClip_o *)pIVar14,(MethodInfo *)0x0);
                    pIVar31 = (Il2CppClass *)0x0;
                    if (lVar21 != 0) {
                      *(float *)(lVar21 + 100) = fVar35;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_044bae61;
    }
  }
  *(undefined8 *)((long)ppIVar30 + -0x30) = 0x44bae6e;
  uVar18 = il2cpp_runtime_helper_022b2fd0(pIVar14);
  *(long **)((long)ppIVar30 + -0x30) = plVar34;
  *(Il2CppClass **)((long)ppIVar30 + -0x38) = pIVar14;
  *(long **)((long)ppIVar30 + -0x40) = unaff_R12;
  *(Il2CppClass **)((long)ppIVar30 + -0x48) = pIVar31;
  *(undefined8 *)((long)ppIVar30 + -0x50) = uVar18;
  if (g_data_057aea62 == '\0') {
    *(undefined8 *)((long)ppIVar30 + -0x58) = 0x44bae8d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)((long)ppIVar30 + -0x58) = 0x44bae99;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicPlaylist);
    *(undefined8 *)((long)ppIVar30 + -0x58) = 0x44baea5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)ppIVar30 + -0x58) = 0x44baeb1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)((long)ppIVar30 + -0x58) = 0x44baebd;
    il2cpp_runtime_helper_023445d0(&"Grabbed");
    g_data_057aea62 = '\x01';
  }
  lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x38), lVar21 != 0)) {
    if (*(char *)(lVar21 + 0x11) == '\0') {
      return;
    }
    plVar34 = &TypeInfo_MusicManager;
    plVar28 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
    if (plVar28 == (long *)0x0) goto label_044bb042;
    uVar18 = *(undefined8 *)(*plVar28 + 0x1b0);
    pcVar5 = *(code **)(*plVar28 + 0x1a8);
    *(undefined8 *)((long)ppIVar30 + -0x58) = 0x44baf34;
    plVar28 = (long *)(*pcVar5)(plVar28,"Grabbed",uVar18);
    if (plVar28 == (long *)0x0) goto label_044bb042;
    method_00 = (SimpleJSONFixed_JSONNode_c *)*plVar28;
    pMVar27 = (method_00->vtable)._5_get_Item.method;
    pIVar3 = (method_00->vtable)._5_get_Item.methodPtr;
    *(undefined8 *)((long)ppIVar30 + -0x58) = 0x44baf52;
    pIVar14 = (Il2CppClass *)(*pIVar3)(plVar28,0,pMVar27);
    lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
    if (lVar21 == 0) goto label_044bb042;
    *(undefined1 *)(lVar21 + 0x68) = 0;
    pIVar31 = *(Il2CppClass **)(lVar21 + 0x20);
    unaff_R12 = &TypeInfo_MusicPlaylist;
    if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
      *(undefined8 *)((long)ppIVar30 + -0x58) = 0x44baf8c;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar17 = *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
    *(undefined8 *)((long)ppIVar30 + -0x58) = 0x44bafa5;
    bVar11 = System_String__op_Equality((System_String_o *)pIVar31,pSVar17,(MethodInfo *)0x0);
    method_00 = *(SimpleJSONFixed_JSONNode_c **)(TypeInfo_MusicManager + 0xb8);
    pIVar3 = (method_00->_1).image;
    if ((char)bVar11 != '\0') {
      if (pIVar3 != (Il2CppMethodPointer)0x0) {
        *(undefined8 *)(pIVar3 + 0x70) = *(undefined8 *)(pIVar3 + 0x58);
        *(undefined8 *)((long)ppIVar30 + -0x58) = 0x44bafd0;
        il2cpp_runtime_helper_022b4080(pIVar3 + 0x70);
        pIVar31 = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
        if ((pIVar31 != (Il2CppClass *)0x0) &&
           (pUVar4 = *(UnityEngine_AudioSource_o **)&(pIVar31->_1).byval_arg.bits,
           pUVar4 != (UnityEngine_AudioSource_o *)0x0)) {
          *(undefined8 *)((long)ppIVar30 + -0x58) = 0x44baff2;
          fVar35 = UnityEngine_AudioSource__get_time(pUVar4,(MethodInfo *)0x0);
          *(float *)&(pIVar31->_1).klass = fVar35;
          goto label_044bb02f;
        }
      }
      goto label_044bb042;
    }
    if (pIVar3 == (Il2CppMethodPointer)0x0) goto label_044bb042;
    *(undefined8 *)(pIVar3 + 0x70) = **(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)((long)ppIVar30 + -0x58) = 0x44bb02f;
    il2cpp_runtime_helper_022b4080(pIVar3 + 0x70);
label_044bb02f:
    plVar28 = *(long **)((long)ppIVar30 + -0x48);
    unaff_R12 = *(long **)((long)ppIVar30 + -0x40);
    playlist = *(System_String_o **)((long)ppIVar30 + -0x38);
    plVar34 = *(long **)((long)ppIVar30 + -0x30);
    ppIVar30 = (Il2CppClass **)((long)ppIVar30 + -0x28);
    pIVar31 = pIVar14;
    goto ApplicationManagers_MusicManager__PlayImmediateTransition;
  }
label_044bb042:
  *(undefined8 *)((long)ppIVar30 + -0x58) = 0x44bb047;
  uVar18 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)ppIVar30 + -0x58) = uVar18;
  if (g_data_057aea63 == '\0') {
    *(undefined8 *)((long)ppIVar30 + -0x60) = 0x44bb066;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    g_data_057aea63 = '\x01';
  }
  lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar21 != 0) {
    if (0.0 < *(float *)(lVar21 + 100)) {
      *(undefined4 *)(lVar21 + 100) = 0;
      *(undefined4 *)(lVar21 + 0x40) = 0;
      *(undefined1 *)(lVar21 + 0x7c) = 1;
    }
    return;
  }
  *(undefined8 *)((long)ppIVar30 + -0x60) = 0x44bb0ac;
  il2cpp_runtime_helper_022b2c90();
  puVar29 = (undefined1 *)((long)ppIVar30 + -0x60);
  *(Il2CppClass **)((long)ppIVar30 + -0x60) = pIVar31;
  if (g_data_057aea64 == '\0') {
    *(undefined8 *)((long)ppIVar30 + -0x68) = 0x44bb0c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)((long)ppIVar30 + -0x68) = 0x44bb0d2;
    il2cpp_runtime_helper_023445d0(&"Effect");
    g_data_057aea64 = '\x01';
  }
  plVar28 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if ((SimpleJSONFixed_JSONNode_o *)plVar28 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bb14e:
    *(undefined8 *)((long)ppIVar30 + -0x68) = 0x44bb153;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar27 = (((SimpleJSONFixed_JSONNode_o *)plVar28)->klass->vtable)._7_get_Item.method;
    pIVar3 = (((SimpleJSONFixed_JSONNode_o *)plVar28)->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)((long)ppIVar30 + -0x68) = 0x44bb10d;
    plVar19 = (long *)(*pIVar3)(plVar28,"Effect",pMVar27);
    if (plVar19 == (long *)0x0) goto label_044bb14e;
    uVar18 = *(undefined8 *)(*plVar19 + 0x1f0);
    pcVar5 = *(code **)(*plVar19 + 0x1e8);
    *(undefined8 *)((long)ppIVar30 + -0x68) = 0x44bb128;
    iVar12 = (*pcVar5)(plVar19,uVar18);
    *(undefined8 *)((long)ppIVar30 + -0x68) = 0x44bb133;
    uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
    method_00 = (SimpleJSONFixed_JSONNode_c *)*plVar19;
    pMVar27 = (method_00->vtable)._5_get_Item.method;
    pIVar3 = (method_00->vtable)._5_get_Item.methodPtr;
    *(undefined8 *)((long)ppIVar30 + -0x68) = 0x44bb148;
    plVar28 = (long *)(*pIVar3)(plVar19,(ulong)uVar13,pMVar27);
    pIVar31 = *(Il2CppClass **)((long)ppIVar30 + -0x60);
    puVar29 = (undefined1 *)((long)ppIVar30 + -0x58);
  }
  *(long **)(puVar29 + -8) = plVar34;
  *(Il2CppClass **)(puVar29 + -0x10) = pIVar14;
  *(Il2CppClass **)(puVar29 + -0x18) = pIVar31;
  ppIVar30 = (Il2CppClass **)(puVar29 + -0x28);
  if (g_data_057aea68 == '\0') {
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb181;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb18d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb199;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1a5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1b1;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1bd;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1c9;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea68 = '\x01';
  }
  plVar34 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1e8;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar31 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar29 + -0x30) = 0x44bb1f4;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)plVar28,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  if ((SimpleJSONFixed_JSONNode_o *)plVar28 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bb384:
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb389;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar27 = (((SimpleJSONFixed_JSONNode_o *)plVar28)->klass->vtable)._28_HasKey.method;
    pIVar3 = (((SimpleJSONFixed_JSONNode_o *)plVar28)->klass->vtable)._28_HasKey.methodPtr;
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb222;
    cVar10 = (*pIVar3)(plVar28,"Name",pMVar27);
    if (cVar10 == '\0') {
      return;
    }
    pMVar27 = (((SimpleJSONFixed_JSONNode_o *)plVar28)->klass->vtable)._7_get_Item.method;
    pIVar3 = (((SimpleJSONFixed_JSONNode_o *)plVar28)->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb240;
    pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar3)(plVar28,"Name",pMVar27);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0x30) = 0x44bb254;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb25e;
    pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0x30) = 0x44bb279;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb28d;
    pIVar14 = (Il2CppClass *)
              ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar17,0,(MethodInfo *)method_00);
    if ((pIVar14 == (Il2CppClass *)0x0) || (pIVar31 = TypeInfo_AudioClip, (pIVar14->_1).image == TypeInfo_AudioClip)) {
      pMVar27 = (((SimpleJSONFixed_JSONNode_o *)plVar28)->klass->vtable)._7_get_Item.method;
      pIVar3 = (((SimpleJSONFixed_JSONNode_o *)plVar28)->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar29 + -0x30) = 0x44bb2c5;
      pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar3)(plVar28,"Volume",pMVar27);
      pIVar31 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar29 + -0x30) = 0x44bb2cf;
      fVar35 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar16,(MethodInfo *)0x0);
      *(float *)(puVar29 + -0x1c) = fVar35;
      plVar34 = (long *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
      if ((Il2CppClass *)plVar34 != (Il2CppClass *)0x0) {
        if (g_data_057aea6a == '\0') {
          *(undefined8 *)(puVar29 + -0x30) = 0x44bb307;
          il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
          g_data_057aea6a = '\x01';
        }
        *(undefined8 *)(puVar29 + -0x30) = 0x44bb31d;
        pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
        pIVar31 = (Il2CppClass *)0x0;
        *(undefined8 *)(puVar29 + -0x30) = 0x44bb32a;
        System_Object___ctor(pIVar20,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar20[1].klass = 0;
        plVar28 = (long *)0x0;
        if (pIVar20 != (Il2CppObject *)0x0) {
          pIVar20[2].klass = (Il2CppClass *)plVar34;
          *(undefined8 *)(puVar29 + -0x30) = 0x44bb346;
          il2cpp_runtime_helper_022b4080(pIVar20 + 2,plVar34);
          pIVar20[3].klass = pIVar14;
          *(undefined8 *)(puVar29 + -0x30) = 0x44bb359;
          il2cpp_runtime_helper_022b4080(pIVar20 + 3,pIVar14);
          *(undefined4 *)&pIVar20[2].monitor = *(undefined4 *)(puVar29 + -0x1c);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)plVar34,(System_Collections_IEnumerator_o *)pIVar20,
                     (MethodInfo *)0x0);
          return;
        }
      }
      goto label_044bb384;
    }
  }
  *(undefined8 *)(puVar29 + -0x30) = 0x44bb391;
  uVar18 = il2cpp_runtime_helper_022b2fd0(pIVar14);
  *(Il2CppClass **)(puVar29 + -0x30) = pIVar14;
  *(long **)(puVar29 + -0x38) = plVar28;
  *(undefined8 *)(puVar29 + -0x40) = uVar18;
  if (g_data_057aea65 == '\0') {
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb3b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb3c5;
    il2cpp_runtime_helper_023445d0(&"Transition");
    g_data_057aea65 = '\x01';
  }
  plVar19 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if ((Il2CppClass *)plVar19 != (Il2CppClass *)0x0) {
    pvVar6 = (((Il2CppClass *)plVar19)->_1).image;
    uVar18 = *(undefined8 *)((long)pvVar6 + 0x1b0);
    pcVar5 = *(code **)((long)pvVar6 + 0x1a8);
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb400;
    pIVar31 = "Transition";
    plVar28 = (long *)(*pcVar5)(plVar19,"Transition",uVar18);
    if ((**(long **)(TypeInfo_MusicManager + 0xb8) == 0) ||
       (*(undefined2 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x68) = 0x101,
       (SimpleJSONFixed_JSONNode_o *)plVar28 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_044bb462;
    pMVar27 = (((SimpleJSONFixed_JSONNode_o *)plVar28)->klass->vtable)._11_get_Count.method;
    pIVar3 = (((SimpleJSONFixed_JSONNode_o *)plVar28)->klass->vtable)._11_get_Count.methodPtr;
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb433;
    iVar12 = (*pIVar3)(plVar28,pMVar27);
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb43e;
    uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
    method_00 = ((SimpleJSONFixed_JSONNode_o *)plVar28)->klass;
    pMVar27 = (method_00->vtable)._5_get_Item.method;
    pIVar3 = (method_00->vtable)._5_get_Item.methodPtr;
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb453;
    pIVar31 = (Il2CppClass *)(*pIVar3)(plVar28,(ulong)uVar13,pMVar27);
    plVar28 = *(long **)(puVar29 + -0x38);
    playlist = *(System_String_o **)(puVar29 + -0x30);
    goto ApplicationManagers_MusicManager__PlayImmediateTransition;
  }
label_044bb462:
  *(undefined8 *)(puVar29 + -0x48) = 0x44bb467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar29 + -0x48) = unaff_RBP;
  *(long **)(puVar29 + -0x50) = plVar34;
  *(long **)(puVar29 + -0x58) = &TypeInfo_MusicManager;
  *(long **)(puVar29 + -0x60) = unaff_R12;
  *(long **)(puVar29 + -0x68) = plVar28;
  pIVar14 = (Il2CppClass *)((ulong)pIVar31 & 0xffffffff);
  plVar34 = plVar19;
  if (g_data_057aea67 == '\0') {
    *(undefined8 *)(puVar29 + -0x70) = 0x44bb493;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    plVar34 = &TypeInfo_MusicPlaylist;
    *(undefined8 *)(puVar29 + -0x70) = 0x44bb49f;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea67 = '\x01';
  }
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    pSVar17 = *(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    *(undefined8 *)(puVar29 + -0x70) = 0x44bb4d1;
    pIVar31 = (Il2CppClass *)plVar19;
    uVar13 = System_String__op_Inequality(pSVar17,(System_String_o *)plVar19,(MethodInfo *)0x0);
    unaff_R12 = (long *)(ulong)uVar13;
    lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
    plVar34 = (long *)0x0;
    if (lVar21 != 0) {
      *(long **)(lVar21 + 0x20) = plVar19;
      plVar34 = (long *)(lVar21 + 0x20);
      *(undefined8 *)(puVar29 + -0x70) = 0x44bb4fa;
      pIVar31 = (Il2CppClass *)plVar19;
      il2cpp_runtime_helper_022b4080();
      lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
      if (lVar21 != 0) {
        cVar10 = *(char *)(lVar21 + 0x68);
        method_00 = (SimpleJSONFixed_JSONNode_c *)CONCAT71((int7)((ulong)method_00 >> 8),cVar10);
        if (*(char *)(lVar21 + 0x60) == '\0') {
          if (cVar10 != '\0') goto label_044bb52e;
          if (0.0 < *(float *)(lVar21 + 100)) {
            *(undefined4 *)(lVar21 + 0x40) = 0;
          }
label_044bb578:
          *(undefined4 *)(lVar21 + 100) = 0;
        }
        else {
          *(undefined4 *)(lVar21 + 0x40) = 0;
          if (cVar10 == '\0') goto label_044bb578;
label_044bb52e:
          plVar28 = &TypeInfo_MusicPlaylist;
          if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
            *(undefined8 *)(puVar29 + -0x70) = 0x44bb546;
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar31 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
          *(undefined8 *)(puVar29 + -0x70) = 0x44bb55e;
          plVar34 = plVar19;
          bVar11 = System_String__op_Equality
                             ((System_String_o *)plVar19,(System_String_o *)pIVar31,(MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
            if (lVar21 == 0) goto label_044bb684;
            goto label_044bb578;
          }
        }
        plVar28 = &TypeInfo_MusicPlaylist;
        if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
          *(undefined8 *)(puVar29 + -0x70) = 0x44bb597;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar31 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
        *(undefined8 *)(puVar29 + -0x70) = 0x44bb5af;
        plVar34 = plVar19;
        bVar11 = System_String__op_Equality
                           ((System_String_o *)plVar19,(System_String_o *)pIVar31,(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') goto label_044bb618;
        lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
        if (lVar21 == 0) goto label_044bb684;
        if (*(char *)(lVar21 + 0x7c) == '\0') {
label_044bb618:
          lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if (lVar21 == 0) goto label_044bb684;
          bVar32 = (byte)uVar13 | (byte)pIVar14;
          unaff_R12 = (long *)(ulong)CONCAT31((int3)(uVar13 >> 8),bVar32);
          if ((bVar32 == 1) && (*(float *)(lVar21 + 100) <= 0.0)) {
            *(undefined4 *)(lVar21 + 0x4c) = 0;
            *(undefined8 *)(puVar29 + -0x70) = 0x44bb648;
            ApplicationManagers_MusicManager__NextSong((MethodInfo *)plVar34);
          }
        }
        else {
          plVar34 = *(long **)(lVar21 + 0x70);
          pIVar31 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          *(undefined8 *)(puVar29 + -0x70) = 0x44bb5f2;
          bVar11 = System_String__op_Inequality
                             ((System_String_o *)plVar34,(System_String_o *)pIVar31,(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') goto label_044bb618;
          lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if (lVar21 == 0) goto label_044bb684;
          plVar34 = *(long **)(lVar21 + 0x70);
          fVar35 = *(float *)(lVar21 + 0x78);
          *(undefined8 *)(puVar29 + -0x70) = 0x44bb616;
          ApplicationManagers_MusicManager__SetSong((System_String_o *)plVar34,fVar35,(MethodInfo *)pIVar31);
        }
        if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
          *(undefined1 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x7c) = 0;
          return;
        }
      }
    }
  }
label_044bb684:
  *(undefined8 *)(puVar29 + -0x70) = 0x44bb689;
  uVar18 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar29 + -0x70) = plVar19;
  *(long **)(puVar29 + -0x78) = &TypeInfo_MusicManager;
  *(Il2CppClass **)(puVar29 + -0x80) = pIVar14;
  *(long **)(puVar29 + -0x88) = unaff_R13;
  *(long **)(puVar29 + -0x90) = unaff_R12;
  *(long **)(puVar29 + -0x98) = plVar28;
  *(undefined8 *)(puVar29 + -0xa0) = uVar18;
  *(undefined4 *)(puVar29 + -0x9c) = extraout_XMM0_Da;
  if (g_data_057aea6b == '\0') {
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb705;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb711;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb71d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb729;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb735;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb741;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb74d;
    il2cpp_runtime_helper_023445d0(&"Playlist");
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb759;
    il2cpp_runtime_helper_023445d0(&"");
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb765;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea6b = '\x01';
  }
  *(undefined8 *)(puVar29 + -0xa8) = 0x44bb774;
  pSVar16 = ApplicationManagers_MusicManager__FindSong((System_String_o *)plVar34,(MethodInfo *)pIVar31);
  lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
  pIVar15 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (lVar21 == 0) goto label_044bbd3d;
  *(undefined1 *)(lVar21 + 0x48) = 0;
  *(MethodInfo **)(lVar21 + 0x58) = "";
  *(undefined8 *)(puVar29 + -0xa8) = 0x44bb7af;
  il2cpp_runtime_helper_022b4080(lVar21 + 0x58);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb7c8;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar14 = (Il2CppClass *)0x0;
  pIVar24 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar29 + -0xa8) = 0x44bb7d7;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar16,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  *(undefined4 *)(puVar29 + -0xa0) = 0;
  if ((char)bVar11 == '\0') goto label_044bbc73;
  pIVar31 = pIVar24;
  if (pSVar16 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bbd3d:
    pIVar23 = pIVar15;
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bbd42;
    il2cpp_runtime_helper_022b2c90();
    pIVar15 = pIVar14;
    pIVar24 = pIVar23;
  }
  else {
    plVar19 = &"Name";
    pMVar27 = (pSVar16->klass->vtable)._28_HasKey.method;
    pIVar3 = (pSVar16->klass->vtable)._28_HasKey.methodPtr;
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb80f;
    cVar10 = (*pIVar3)(pSVar16,"Name",pMVar27);
    if (cVar10 == '\0') {
      pIVar14 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
      pMVar27 = (pSVar16->klass->vtable)._7_get_Item.method;
      pIVar3 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bbab7;
      plVar34 = (long *)(*pIVar3)(pSVar16,"Playlist",pMVar27);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar29 + -0xa8) = 0x44bbacc;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar31 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bbad6;
      pIVar24 = (Il2CppClass *)
                SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                          ((SimpleJSONFixed_JSONNode_o *)plVar34,(MethodInfo *)0x0);
      if (pIVar14 != (Il2CppClass *)0x0) {
        pGVar7 = (pIVar14->_1).image;
        pMVar27 = (pGVar7->vtable)._7_unknown.method;
        pIVar3 = (pGVar7->vtable)._7_unknown.methodPtr;
        *(undefined8 *)(puVar29 + -0xa8) = 0x44bbaf5;
        pIVar23 = (Il2CppClass *)(*pIVar3)(pIVar14,pIVar24,pMVar27);
        pIVar31 = pIVar24;
        if (pIVar23 != (Il2CppClass *)0x0) {
          pUVar26 = (pIVar23->_1).image;
          pIVar31 = pUVar26[1]._1.klass;
          pcVar5 = pUVar26[1]._1.interopData;
          *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb14;
          iVar12 = (*pcVar5)(pIVar23,pIVar31);
          *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb1f;
          uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
          pUVar26 = (pIVar23->_1).image;
          pcVar8 = pUVar26[1]._1.namespaze;
          pIVar31 = (Il2CppClass *)(ulong)uVar13;
          pcVar5 = (code *)pUVar26[1]._1.name;
          *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb34;
          plVar28 = (long *)(*pcVar5)(pIVar23,pIVar31,pcVar8);
          plVar34 = (long *)pIVar23;
          if (plVar28 != (long *)0x0) {
            uVar18 = *(undefined8 *)(*plVar28 + 0x1b0);
            pcVar5 = *(code **)(*plVar28 + 0x1a8);
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb57;
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar5)(plVar28,"Name",uVar18);
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb61;
            plVar34 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb7c;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb90;
            pIVar23 = (Il2CppClass *)
                      ApplicationManagers_ResourceManager__LoadAsset
                                ("Music",(System_String_o *)plVar34,0,(MethodInfo *)pUVar26);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbbab;
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar15 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbbba;
            bVar11 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pIVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            pIVar14 = pIVar15;
            if ((((char)bVar11 != '\0') && (pIVar14 = pIVar23, pIVar23 != (Il2CppClass *)0x0)) &&
               (pIVar31 = TypeInfo_AudioClip, pIVar24 = pIVar23, (pIVar23->_1).image != TypeInfo_AudioClip))
            goto label_044bbd45;
            uVar18 = *(undefined8 *)(*plVar28 + 0x1b0);
            pcVar5 = *(code **)(*plVar28 + 0x1a8);
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbbf7;
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar5)(plVar28,"Volume",uVar18);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc0c;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc16;
            fVar35 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar16,(MethodInfo *)0x0);
            *(float *)(puVar29 + -0xa0) = fVar35;
            lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
            uVar18 = *(undefined8 *)(*plVar28 + 0x1b0);
            pcVar5 = *(code **)(*plVar28 + 0x1a8);
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc4d;
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar5)(plVar28,"Name",uVar18);
            pIVar31 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc57;
            pIVar24 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
            plVar34 = (long *)0x0;
            pIVar15 = (Il2CppClass *)&TypeInfo_MusicManager;
            if (lVar21 != 0) {
              *(Il2CppClass **)(lVar21 + 0x58) = pIVar24;
              plVar34 = (long *)(lVar21 + 0x58);
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc73;
              il2cpp_runtime_helper_022b4080(plVar34);
              goto label_044bbc73;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
    pMVar27 = (pSVar16->klass->vtable)._7_get_Item.method;
    pIVar3 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb82f;
    pSVar22 = (SimpleJSONFixed_JSONNode_o *)(*pIVar3)(pSVar16,"Name",pMVar27);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb844;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb84e;
    plVar34 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar22,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb869;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb87d;
    pIVar23 = (Il2CppClass *)
              ApplicationManagers_ResourceManager__LoadAsset
                        ("Music",(System_String_o *)plVar34,0,(MethodInfo *)method_00);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb898;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb8a7;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pIVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pIVar14 = (Il2CppClass *)0x0;
    if ((((char)bVar11 == '\0') || (pIVar14 = pIVar23, pIVar23 == (Il2CppClass *)0x0)) ||
       (pIVar31 = TypeInfo_AudioClip, pIVar15 = (Il2CppClass *)0x0, pIVar24 = pIVar23,
       (pIVar23->_1).image == TypeInfo_AudioClip)) {
      pMVar27 = (pSVar16->klass->vtable)._7_get_Item.method;
      pIVar3 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb8e4;
      pSVar22 = (SimpleJSONFixed_JSONNode_o *)(*pIVar3)(pSVar16,"Volume",pMVar27);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar29 + -0xa8) = 0x44bb8f9;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb903;
      fVar35 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar22,(MethodInfo *)0x0);
      *(float *)(puVar29 + -0xa0) = fVar35;
      lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
      pMVar27 = (pSVar16->klass->vtable)._7_get_Item.method;
      pIVar3 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb934;
      pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar3)(pSVar16,"Name",pMVar27);
      pIVar31 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb93e;
      pIVar24 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
      plVar34 = (long *)(Il2CppClass *)0x0;
      pIVar15 = (Il2CppClass *)&TypeInfo_MusicManager;
      if (lVar21 != 0) {
        *(Il2CppClass **)(lVar21 + 0x58) = pIVar24;
        *(undefined8 *)(puVar29 + -0xa8) = 0x44bb95a;
        il2cpp_runtime_helper_022b4080(lVar21 + 0x58);
        plVar19 = &TypeInfo_SceneLoader;
        plVar34 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if ((Il2CppClass *)plVar34 != (Il2CppClass *)0x0) {
          pUVar26 = (((Il2CppClass *)plVar34)->_1).image;
          bVar32 = (TypeInfo_InGameManager->_2).naturalAligment;
          if ((bVar32 <= (pUVar26->_2).naturalAligment) &&
             ((pUVar26->_2).typeHierarchy[(ulong)bVar32 - 1] == TypeInfo_InGameManager)) {
            lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
            pIVar31 = pIVar24;
            pIVar15 = (Il2CppClass *)&TypeInfo_InGameManager;
            if ((lVar21 == 0) ||
               (lVar21 = *(long *)(lVar21 + 0x28), pIVar15 = (Il2CppClass *)&TypeInfo_InGameManager, lVar21 == 0))
            goto label_044bbd3d;
            if (0.0 < *(float *)(lVar21 + 0x14)) {
              lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              pIVar15 = (Il2CppClass *)&TypeInfo_InGameManager;
              if ((lVar21 == 0) ||
                 (lVar21 = *(long *)(lVar21 + 0xd8), pIVar15 = (Il2CppClass *)&TypeInfo_InGameManager, lVar21 == 0))
              goto label_044bbd3d;
              if (*(char *)(lVar21 + 0x11) != '\0') {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  *(undefined8 *)(puVar29 + -0xa8) = 0x44bba25;
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar24 = (Il2CppClass *)0x0;
                *(undefined8 *)(puVar29 + -0xa8) = 0x44bba31;
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)plVar34,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar11 != '\0') {
                  pIVar23 = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
                  pIVar31 = pIVar24;
                  pIVar15 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (pIVar23 == (Il2CppClass *)0x0) goto label_044bbd3d;
                  pGVar7 = (pIVar23->_1).image;
                  bVar32 = (TypeInfo_InGameManager->_2).naturalAligment;
                  pIVar31 = TypeInfo_InGameManager;
                  pIVar15 = pIVar14;
                  pIVar24 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (((pGVar7->_2).naturalAligment < bVar32) ||
                     ((pGVar7->_2).typeHierarchy[(ulong)bVar32 - 1] != TypeInfo_InGameManager)) goto label_044bbd45;
                  pIVar24 = (Il2CppClass *)0x0;
                  *(undefined8 *)(puVar29 + -0xa8) = 0x44bba7f;
                  GameManagers_InGameManager__OnSongChange
                            ((GameManagers_InGameManager_o *)pIVar23,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
label_044bbc73:
        __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
        pIVar31 = pIVar24;
        pIVar15 = (Il2CppClass *)&TypeInfo_MusicManager;
        if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
          pIVar31 = (Il2CppClass *)0x0;
          *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc90;
          UnityEngine_MonoBehaviour__StopAllCoroutines(__this,(MethodInfo *)0x0);
          pIVar15 = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
          if (pIVar15 != (Il2CppClass *)0x0) {
            if (g_data_057aea6f == '\0') {
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbcbb;
              il2cpp_runtime_helper_023445d0(&TypeInfo_FadeNextSong_d__46);
              g_data_057aea6f = '\x01';
            }
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbcd1;
            pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeNextSong_d__46);
            pIVar31 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbcde;
            System_Object___ctor(pIVar20,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar20[1].klass = 0;
            plVar34 = (long *)(Il2CppClass *)0x0;
            if (pIVar20 != (Il2CppObject *)0x0) {
              pIVar20[2].klass = pIVar15;
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbcfa;
              il2cpp_runtime_helper_022b4080(pIVar20 + 2,pIVar15);
              pIVar20[2].monitor = pIVar14;
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbd0d;
              il2cpp_runtime_helper_022b4080(&pIVar20[2].monitor,pIVar14);
              *(undefined4 *)((long)&pIVar20[3].klass + 4) = *(undefined4 *)(puVar29 + -0xa0);
              *(undefined4 *)&pIVar20[3].klass = *(undefined4 *)(puVar29 + -0x9c);
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)pIVar15,(System_Collections_IEnumerator_o *)pIVar20,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
  }
label_044bbd45:
  *(undefined8 *)(puVar29 + -0xa8) = 0x44bbd4a;
  il2cpp_runtime_helper_022b2fd0();
  *(long **)(puVar29 + -0xa8) = plVar34;
  if (g_data_057aea6d == '\0') {
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd66;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd72;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd7e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd8a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd96;
    il2cpp_runtime_helper_023445d0(&"Custom");
    pIVar23 = (Il2CppClass *)&"Name";
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbda2;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea6d = '\x01';
  }
  pIVar14 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    pIVar23 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    pIVar31 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbde9;
    bVar11 = System_String__op_Equality
                       ((System_String_o *)pIVar23,(System_String_o *)pIVar31,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return;
    }
    if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
      pIVar23 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
      *(undefined8 *)(puVar29 + -0xb0) = 0x44bbe1a;
      pIVar31 = "Custom";
      bVar11 = System_String__op_Equality
                         ((System_String_o *)pIVar23,(System_String_o *)"Custom",(MethodInfo *)0x0);
      plVar34 = *(long **)(TypeInfo_MusicManager + 0xb8);
      if ((char)bVar11 == '\0') {
        if ((*plVar34 != 0) && (pIVar23 = (Il2CppClass *)plVar34[1], pIVar23 != (Il2CppClass *)0x0)) {
          pIVar31 = *(Il2CppClass **)(*plVar34 + 0x20);
          pGVar7 = (pIVar23->_1).image;
          pMVar27 = (pGVar7->vtable)._7_unknown.method;
          pIVar3 = (pGVar7->vtable)._7_unknown.methodPtr;
          *(undefined8 *)(puVar29 + -0xb0) = 0x44bbea0;
          pIVar25 = (Il2CppClass *)(*pIVar3)(pIVar23,pIVar31,pMVar27);
          if (pIVar25 != (Il2CppClass *)0x0) {
            pGVar7 = (pIVar25->_1).image;
            pMVar27 = (pGVar7->vtable)._11_unknown.method;
            pIVar3 = (pGVar7->vtable)._11_unknown.methodPtr;
            *(undefined8 *)(puVar29 + -0xb0) = 0x44bbebf;
            iVar12 = (*pIVar3)(pIVar25,pMVar27);
            *(undefined8 *)(puVar29 + -0xb0) = 0x44bbeca;
            uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
            pGVar7 = (pIVar25->_1).image;
            pMVar27 = (pGVar7->vtable)._5_unknown.method;
            pIVar31 = (Il2CppClass *)(ulong)uVar13;
            pIVar3 = (pGVar7->vtable)._5_unknown.methodPtr;
            *(undefined8 *)(puVar29 + -0xb0) = 0x44bbedf;
            pIVar23 = pIVar25;
            plVar34 = (long *)(*pIVar3)(pIVar25,pIVar31,pMVar27);
            pIVar14 = pIVar25;
            if (plVar34 != (long *)0x0) {
              uVar18 = *(undefined8 *)(*plVar34 + 0x1b0);
              pcVar5 = *(code **)(*plVar34 + 0x1a8);
              *(undefined8 *)(puVar29 + -0xb0) = 0x44bbf01;
              pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar5)(plVar34,"Name",uVar18);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                *(undefined8 *)(puVar29 + -0xb0) = 0x44bbf1c;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar27 = (MethodInfo *)0x0;
              *(undefined8 *)(puVar29 + -0xb0) = 0x44bbf26;
              pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
              ApplicationManagers_MusicManager__SetSong(pSVar17,0.0,pMVar27);
              return;
            }
          }
        }
      }
      else {
        lVar21 = *plVar34;
        if (lVar21 != 0) {
          __this_00 = *(System_Collections_Generic_List_object__o **)(lVar21 + 0x50);
          pIVar23 = (Il2CppClass *)0x0;
          if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
            iVar1 = (__this_00->fields)._size;
            if (iVar1 == 0) {
              return;
            }
            uVar13 = *(int *)(lVar21 + 0x4c) + 1;
            pMVar27 = (MethodInfo *)0x0;
            if ((int)uVar13 < iVar1) {
              pMVar27 = (MethodInfo *)(ulong)uVar13;
            }
            *(int32_t *)(lVar21 + 0x4c) = (int32_t)pMVar27;
            *(undefined8 *)(puVar29 + -0xb0) = 0x44bbe67;
            pSVar17 = (System_String_o *)
                      System_Collections_Generic_List_object___get_Item
                                (__this_00,(int32_t)pMVar27,MethodInfo_String_get_Item);
            ApplicationManagers_MusicManager__SetSong(pSVar17,0.0,pMVar27);
            return;
          }
        }
      }
    }
  }
  *(undefined8 *)(puVar29 + -0xb0) = 0x44bbf37;
  auVar37 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar29 + -0xb0) = plVar19;
  *(Il2CppClass **)(puVar29 + -0xb8) = pIVar24;
  *(Il2CppClass **)(puVar29 + -0xc0) = pIVar15;
  *(Il2CppClass **)(puVar29 + -200) = pIVar14;
  *(long *)(puVar29 + -0xd0) = auVar37._0_8_;
  uVar33 = auVar37._8_8_ & 0xffffffff;
  if (g_data_057aea83 == '\0') {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf65;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf71;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf7d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf89;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbfa1;
    il2cpp_runtime_helper_023445d0(&"/");
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbfad;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea83 = '\x01';
  }
  *(undefined8 *)(puVar29 + -0xd8) = 0x44bbfc8;
  pMVar27 = "";
  bVar11 = System_String__op_Inequality
                     ((System_String_o *)pIVar23,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbfe3;
    pMVar27 = "/";
    pIVar31 = (Il2CppClass *)
              System_String__Concat_3af7150
                        ((System_String_o *)pIVar23,(System_String_o *)"/",(System_String_o *)pIVar31
                         ,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbffe;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar29 + -0xd8) = 0x44bc006;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              ApplicationManagers_ResourceManager__GetExternalTexture((System_String_o *)pIVar31,pMVar27);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bc021;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar14 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar29 + -0xd8) = 0x44bc02d;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  cVar10 = (char)uVar33;
  if ((char)bVar11 != '\0') {
    if (cVar10 != '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)(puVar29 + -0xd8) = 0x44bc04b;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar15 = (Il2CppClass *)0x0;
      if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      *(undefined8 *)(puVar29 + -0xd8) = 0x44bc073;
      pIVar14 = pIVar31;
      bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         (pSVar9,(Il2CppObject *)pIVar31,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar11 == '\0') {
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          *(undefined8 *)(puVar29 + -0xd8) = 0x44bc088;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
        pIVar15 = (Il2CppClass *)0x0;
        if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
        *(undefined8 *)(puVar29 + -0xd8) = 0x44bc0b3;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar9,(Il2CppObject *)pIVar31,(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
      }
    }
    return;
  }
  if (cVar10 == '\0') {
    UnityEngine_Resources__Load((System_String_o *)pIVar31,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bc0db;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
  pIVar15 = (Il2CppClass *)0x0;
  if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bc103;
    pIVar14 = pIVar31;
    bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar9,(Il2CppObject *)pIVar31,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 == '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)(puVar29 + -0xd8) = 0x44bc118;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar14 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar29 + -0xd8) = 0x44bc12f;
      pIVar15 = pIVar31;
      value = UnityEngine_Resources__Load((System_String_o *)pIVar31,(MethodInfo *)0x0);
      if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      *(undefined8 *)(puVar29 + -0xd8) = 0x44bc14c;
      pIVar14 = pIVar31;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_01,(Il2CppObject *)pIVar31,(Il2CppObject *)value,MethodInfo_Void_set_Item);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0xd8) = 0x44bc15d;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar15 = (Il2CppClass *)0x0;
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)pIVar31,MethodInfo_Object_get_Item);
      return;
    }
  }
label_044bc19f:
  *(undefined8 *)(puVar29 + -0xd8) = 0x44bc1a4;
  uVar36 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar29 + -0xd8) = &TypeInfo_ResourceManager;
  *(ulong *)(puVar29 + -0xe0) = uVar33;
  *(Il2CppClass **)(puVar29 + -0xe8) = pIVar31;
  *(undefined4 *)(puVar29 + -0xec) = uVar36;
  if (g_data_057aea6a == '\0') {
    *(undefined8 *)(puVar29 + -0x100) = 0x44bc1da;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
    g_data_057aea6a = '\x01';
  }
  *(undefined8 *)(puVar29 + -0x100) = 0x44bc1f0;
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
  uVar36 = 0;
  *(undefined8 *)(puVar29 + -0x100) = 0x44bc1fd;
  pIVar20 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = pIVar15;
    *(undefined8 *)(puVar29 + -0x100) = 0x44bc219;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar15);
    __this_02[3].klass = pIVar14;
    *(undefined8 *)(puVar29 + -0x100) = 0x44bc22c;
    il2cpp_runtime_helper_022b4080(__this_02 + 3,pIVar14);
    *(undefined4 *)&__this_02[2].monitor = *(undefined4 *)(puVar29 + -0xec);
    return;
  }
  *(undefined8 *)(puVar29 + -0x100) = 0x44bc249;
  uVar18 = il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_Dictionary_object__object__o **)(puVar29 + -0x100) = __this_01;
  *(undefined8 *)(puVar29 + -0x108) = 0;
  *(undefined8 *)(puVar29 + -0x110) = uVar18;
  *(undefined8 *)(puVar29 + -0x118) = 0x44bc25f;
  System_Object___ctor(pIVar20,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar20[1].klass = uVar36;
  return;
}


// ApplicationManagers.MusicManager$$FinishSetPlaylist
// il2cpp: void ApplicationManagers_MusicManager__FinishSetPlaylist (System_String_o* playlist, bool forceNext, const MethodInfo* method);
// 0x44bb470

void ApplicationManagers_MusicManager__FinishSetPlaylist
               (System_String_o *playlist,bool_conflict forceNext,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  GameManagers_InGameManager_c *pGVar3;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  char cVar4;
  bool_conflict bVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  long lVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_String_o *pSVar11;
  Il2CppClass *__this_01;
  Il2CppClass *pIVar12;
  Il2CppClass *pIVar13;
  Il2CppObject *pIVar14;
  Il2CppClass *pIVar15;
  Il2CppClass *method_00;
  UnityEngine_Texture2D_o *x;
  UnityEngine_Object_o *pUVar16;
  Il2CppObject *__this_02;
  MethodInfo *in_RCX;
  MethodInfo *pMVar17;
  char extraout_DL;
  uint uVar18;
  undefined4 uVar19;
  undefined4 in_register_00000034;
  long *plVar20;
  undefined4 uVar21;
  float fStack_60;
  
  method_00 = (Il2CppClass *)CONCAT44(in_register_00000034,forceNext);
  plVar20 = (long *)playlist;
  if (g_data_057aea67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    plVar20 = &TypeInfo_MusicPlaylist;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea67 = '\x01';
  }
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    method_00 = (Il2CppClass *)playlist;
    bVar5 = System_String__op_Inequality
                      (*(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20),playlist,
                       (MethodInfo *)0x0);
    lVar8 = **(long **)(TypeInfo_MusicManager + 0xb8);
    plVar20 = (long *)(MethodInfo *)0x0;
    if (lVar8 != 0) {
      *(System_String_o **)(lVar8 + 0x20) = playlist;
      plVar20 = (long *)(lVar8 + 0x20);
      method_00 = (Il2CppClass *)playlist;
      il2cpp_runtime_helper_022b4080();
      lVar8 = **(long **)(TypeInfo_MusicManager + 0xb8);
      if (lVar8 != 0) {
        cVar4 = *(char *)(lVar8 + 0x68);
        in_RCX = (MethodInfo *)CONCAT71((int7)((ulong)in_RCX >> 8),cVar4);
        if (*(char *)(lVar8 + 0x60) == '\0') {
          if (cVar4 != '\0') goto label_044bb52e;
          if (0.0 < *(float *)(lVar8 + 100)) {
            *(undefined4 *)(lVar8 + 0x40) = 0;
          }
label_044bb578:
          *(undefined4 *)(lVar8 + 100) = 0;
        }
        else {
          *(undefined4 *)(lVar8 + 0x40) = 0;
          if (cVar4 == '\0') goto label_044bb578;
label_044bb52e:
          if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method_00 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
          plVar20 = (long *)playlist;
          bVar6 = System_String__op_Equality(playlist,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            lVar8 = **(long **)(TypeInfo_MusicManager + 0xb8);
            if (lVar8 == 0) goto label_044bb684;
            goto label_044bb578;
          }
        }
        if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
        bVar6 = System_String__op_Equality(playlist,(System_String_o *)method_00,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') goto label_044bb618;
        lVar8 = **(long **)(TypeInfo_MusicManager + 0xb8);
        plVar20 = (long *)playlist;
        if (lVar8 == 0) goto label_044bb684;
        if (*(char *)(lVar8 + 0x7c) == '\0') {
label_044bb618:
          lVar8 = **(long **)(TypeInfo_MusicManager + 0xb8);
          plVar20 = (long *)playlist;
          if (lVar8 == 0) goto label_044bb684;
          if (((byte)((byte)bVar5 | (byte)forceNext) == 1) && (*(float *)(lVar8 + 100) <= 0.0)) {
            *(undefined4 *)(lVar8 + 0x4c) = 0;
            ApplicationManagers_MusicManager__NextSong((MethodInfo *)playlist);
          }
        }
        else {
          playlist = *(System_String_o **)(lVar8 + 0x70);
          method_00 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          bVar6 = System_String__op_Inequality(playlist,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') goto label_044bb618;
          lVar8 = **(long **)(TypeInfo_MusicManager + 0xb8);
          plVar20 = (long *)playlist;
          if (lVar8 == 0) goto label_044bb684;
          playlist = *(System_String_o **)(lVar8 + 0x70);
          ApplicationManagers_MusicManager__SetSong(playlist,*(float *)(lVar8 + 0x78),(MethodInfo *)method_00)
          ;
        }
        plVar20 = (long *)playlist;
        if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
          *(undefined1 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x7c) = 0;
          return;
        }
      }
    }
  }
label_044bb684:
  uVar21 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Music");
    il2cpp_runtime_helper_023445d0(&"Playlist");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea6b = '\x01';
  }
  pSVar9 = ApplicationManagers_MusicManager__FindSong((System_String_o *)plVar20,(MethodInfo *)method_00);
  lVar8 = **(long **)(TypeInfo_MusicManager + 0xb8);
  pIVar15 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (lVar8 == 0) goto label_044bbd3d;
  *(undefined1 *)(lVar8 + 0x48) = 0;
  *(MethodInfo **)(lVar8 + 0x58) = "";
  il2cpp_runtime_helper_022b4080(lVar8 + 0x58);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar13 = (Il2CppClass *)0x0;
  pIVar12 = (Il2CppClass *)0x0;
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  fStack_60 = 0.0;
  if ((char)bVar5 == '\0') goto label_044bbc73;
  method_00 = pIVar12;
  if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bbd3d:
    __this_01 = pIVar15;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    cVar4 = (*(pSVar9->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar9,"Name",(pSVar9->klass->vtable)._28_HasKey.method);
    if (cVar4 == '\0') {
      plVar20 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
      pSVar9 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar9,"Playlist",(pSVar9->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (Il2CppClass *)0x0;
      pIVar13 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar9,(MethodInfo *)0x0);
      if ((plVar20 != (long *)0x0) &&
         (plVar20 = (long *)(**(code **)(*plVar20 + 0x1a8))(plVar20,pIVar13,*(undefined8 *)(*plVar20 + 0x1b0))
         , method_00 = pIVar13, plVar20 != (long *)0x0)) {
        iVar7 = (**(code **)(*plVar20 + 0x1e8))(plVar20,*(undefined8 *)(*plVar20 + 0x1f0));
        uVar18 = UnityEngine_Random__Range_4df2410(0,iVar7,(MethodInfo *)0x0);
        pMVar17 = (MethodInfo *)*plVar20;
        method_00 = (Il2CppClass *)(ulong)uVar18;
        plVar20 = (long *)(*(code *)pMVar17[4].return_type)(plVar20,method_00,pMVar17[4].parameters);
        if (plVar20 != (long *)0x0) {
          pSVar9 = (SimpleJSONFixed_JSONNode_o *)
                   (**(code **)(*plVar20 + 0x1a8))(plVar20,"Name",*(undefined8 *)(*plVar20 + 0x1b0));
          pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar9,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_01 = (Il2CppClass *)
                      ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar11,0,pMVar17);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          pIVar13 = (Il2CppClass *)0x0;
          if ((((char)bVar5 != '\0') && (pIVar13 = __this_01, __this_01 != (Il2CppClass *)0x0)) &&
             (method_00 = TypeInfo_AudioClip, (__this_01->_1).image != TypeInfo_AudioClip)) goto label_044bbd45;
          pSVar9 = (SimpleJSONFixed_JSONNode_o *)
                   (**(code **)(*plVar20 + 0x1a8))(plVar20,"Volume",*(undefined8 *)(*plVar20 + 0x1b0));
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fStack_60 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar9,(MethodInfo *)0x0);
          lVar8 = **(long **)(TypeInfo_MusicManager + 0xb8);
          pSVar9 = (SimpleJSONFixed_JSONNode_o *)
                   (**(code **)(*plVar20 + 0x1a8))(plVar20,"Name",*(undefined8 *)(*plVar20 + 0x1b0));
          method_00 = (Il2CppClass *)0x0;
          pIVar12 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar9,(MethodInfo *)0x0);
          pIVar15 = (Il2CppClass *)&TypeInfo_MusicManager;
          if (lVar8 != 0) {
            *(Il2CppClass **)(lVar8 + 0x58) = pIVar12;
            il2cpp_runtime_helper_022b4080(lVar8 + 0x58);
            goto label_044bbc73;
          }
        }
      }
      goto label_044bbd3d;
    }
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)
              (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar9,"Name",(pSVar9->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar10,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = (Il2CppClass *)ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar11,0,in_RCX);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pIVar13 = (Il2CppClass *)0x0;
    if ((((char)bVar5 == '\0') || (pIVar13 = __this_01, __this_01 == (Il2CppClass *)0x0)) ||
       (method_00 = TypeInfo_AudioClip, (__this_01->_1).image == TypeInfo_AudioClip)) {
      pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar9,"Volume",(pSVar9->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fStack_60 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar10,(MethodInfo *)0x0);
      lVar8 = **(long **)(TypeInfo_MusicManager + 0xb8);
      pSVar9 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar9,"Name",(pSVar9->klass->vtable)._7_get_Item.method);
      method_00 = (Il2CppClass *)0x0;
      pIVar12 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar9,(MethodInfo *)0x0);
      pIVar15 = (Il2CppClass *)&TypeInfo_MusicManager;
      if (lVar8 != 0) {
        *(Il2CppClass **)(lVar8 + 0x58) = pIVar12;
        il2cpp_runtime_helper_022b4080(lVar8 + 0x58);
        pUVar16 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (pUVar16 != (UnityEngine_Object_o *)0x0) {
          bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
          if ((bVar1 <= (pUVar16->klass->_2).naturalAligment) &&
             ((pUVar16->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
            lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
            method_00 = pIVar12;
            pIVar15 = (Il2CppClass *)&TypeInfo_InGameManager;
            if ((lVar8 == 0) ||
               (lVar8 = *(long *)(lVar8 + 0x28), pIVar15 = (Il2CppClass *)&TypeInfo_InGameManager, lVar8 == 0))
            goto label_044bbd3d;
            if (0.0 < *(float *)(lVar8 + 0x14)) {
              lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              pIVar15 = (Il2CppClass *)&TypeInfo_InGameManager;
              if ((lVar8 == 0) ||
                 (lVar8 = *(long *)(lVar8 + 0xd8), pIVar15 = (Il2CppClass *)&TypeInfo_InGameManager, lVar8 == 0))
              goto label_044bbd3d;
              if (*(char *)(lVar8 + 0x11) != '\0') {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar12 = (Il2CppClass *)0x0;
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar5 != '\0') {
                  __this_01 = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
                  method_00 = pIVar12;
                  pIVar15 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (__this_01 == (Il2CppClass *)0x0) goto label_044bbd3d;
                  pGVar3 = (__this_01->_1).image;
                  bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
                  method_00 = TypeInfo_InGameManager;
                  if (((pGVar3->_2).naturalAligment < bVar1) ||
                     ((pGVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager)) goto label_044bbd45;
                  pIVar12 = (Il2CppClass *)0x0;
                  GameManagers_InGameManager__OnSongChange
                            ((GameManagers_InGameManager_o *)__this_01,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
label_044bbc73:
        method_00 = pIVar12;
        pIVar15 = (Il2CppClass *)&TypeInfo_MusicManager;
        if ((UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8) !=
            (UnityEngine_MonoBehaviour_o *)0x0) {
          method_00 = (Il2CppClass *)0x0;
          UnityEngine_MonoBehaviour__StopAllCoroutines
                    ((UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8),(MethodInfo *)0x0);
          pIVar15 = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
          if (pIVar15 != (Il2CppClass *)0x0) {
            if (g_data_057aea6f == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_FadeNextSong_d__46);
              g_data_057aea6f = '\x01';
            }
            pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeNextSong_d__46);
            method_00 = (Il2CppClass *)0x0;
            System_Object___ctor(pIVar14,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar14[1].klass = 0;
            if (pIVar14 != (Il2CppObject *)0x0) {
              pIVar14[2].klass = pIVar15;
              il2cpp_runtime_helper_022b4080(pIVar14 + 2,pIVar15);
              pIVar14[2].monitor = pIVar13;
              il2cpp_runtime_helper_022b4080(&pIVar14[2].monitor,pIVar13);
              *(float *)((long)&pIVar14[3].klass + 4) = fStack_60;
              *(undefined4 *)&pIVar14[3].klass = uVar21;
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)pIVar15,(System_Collections_IEnumerator_o *)pIVar14,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
  }
label_044bbd45:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057aea6d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0(&"Custom");
    __this_01 = (Il2CppClass *)&"Name";
    il2cpp_runtime_helper_023445d0();
    g_data_057aea6d = '\x01';
  }
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    __this_01 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    method_00 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    bVar5 = System_String__op_Equality
                      ((System_String_o *)__this_01,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
      __this_01 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
      method_00 = "Custom";
      bVar5 = System_String__op_Equality
                        ((System_String_o *)__this_01,(System_String_o *)"Custom",(MethodInfo *)0x0);
      plVar20 = *(long **)(TypeInfo_MusicManager + 0xb8);
      if ((char)bVar5 == '\0') {
        if ((*plVar20 != 0) && (__this_01 = (Il2CppClass *)plVar20[1], __this_01 != (Il2CppClass *)0x0)) {
          method_00 = *(Il2CppClass **)(*plVar20 + 0x20);
          pGVar3 = (__this_01->_1).image;
          pIVar15 = (Il2CppClass *)
                    (*(pGVar3->vtable)._7_unknown.methodPtr)
                              (__this_01,method_00,(pGVar3->vtable)._7_unknown.method);
          if (pIVar15 != (Il2CppClass *)0x0) {
            pGVar3 = (pIVar15->_1).image;
            iVar7 = (*(pGVar3->vtable)._11_unknown.methodPtr)(pIVar15,(pGVar3->vtable)._11_unknown.method);
            uVar18 = UnityEngine_Random__Range_4df2410(0,iVar7,(MethodInfo *)0x0);
            pGVar3 = (pIVar15->_1).image;
            method_00 = (Il2CppClass *)(ulong)uVar18;
            plVar20 = (long *)(*(pGVar3->vtable)._5_unknown.methodPtr)
                                        (pIVar15,method_00,(pGVar3->vtable)._5_unknown.method);
            __this_01 = pIVar15;
            if (plVar20 != (long *)0x0) {
              pSVar9 = (SimpleJSONFixed_JSONNode_o *)
                       (**(code **)(*plVar20 + 0x1a8))(plVar20,"Name",*(undefined8 *)(*plVar20 + 0x1b0))
              ;
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar17 = (MethodInfo *)0x0;
              pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar9,(MethodInfo *)0x0);
              ApplicationManagers_MusicManager__SetSong(pSVar11,0.0,pMVar17);
              return;
            }
          }
        }
      }
      else {
        lVar8 = *plVar20;
        if (lVar8 != 0) {
          __this = *(System_Collections_Generic_List_object__o **)(lVar8 + 0x50);
          __this_01 = (Il2CppClass *)0x0;
          if (__this != (System_Collections_Generic_List_object__o *)0x0) {
            iVar2 = (__this->fields)._size;
            if (iVar2 == 0) {
              return;
            }
            uVar18 = *(int *)(lVar8 + 0x4c) + 1;
            pMVar17 = (MethodInfo *)0x0;
            if ((int)uVar18 < iVar2) {
              pMVar17 = (MethodInfo *)(ulong)uVar18;
            }
            *(int32_t *)(lVar8 + 0x4c) = (int32_t)pMVar17;
            pSVar11 = (System_String_o *)
                      System_Collections_Generic_List_object___get_Item(__this,(int32_t)pMVar17,MethodInfo_String_get_Item);
            ApplicationManagers_MusicManager__SetSong(pSVar11,0.0,pMVar17);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea83 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea83 = '\x01';
  }
  pMVar17 = "";
  bVar5 = System_String__op_Inequality
                    ((System_String_o *)__this_01,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pMVar17 = "/";
    method_00 = (Il2CppClass *)
                System_String__Concat_3af7150
                          ((System_String_o *)__this_01,(System_String_o *)"/",
                           (System_String_o *)method_00,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = ApplicationManagers_ResourceManager__GetExternalTexture((System_String_o *)method_00,pMVar17);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar15 = (Il2CppClass *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (extraout_DL != '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar13 = (Il2CppClass *)0x0;
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      pIVar15 = method_00;
      bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)
                         **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)method_00,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar5 == '\0') {
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar13 = (Il2CppClass *)0x0;
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8)
            == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)
                   **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)method_00,(Il2CppObject *)x,
                   MethodInfo_Void_set_Item);
      }
    }
    return;
  }
  if (extraout_DL == '\0') {
    UnityEngine_Resources__Load((System_String_o *)method_00,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar13 = (Il2CppClass *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar15 = method_00;
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)method_00,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar15 = (Il2CppClass *)0x0;
      pIVar13 = method_00;
      pUVar16 = UnityEngine_Resources__Load((System_String_o *)method_00,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      pIVar15 = method_00;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_00,(Il2CppObject *)method_00,(Il2CppObject *)pUVar16,MethodInfo_Void_set_Item);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar13 = (Il2CppClass *)0x0;
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)method_00,MethodInfo_Object_get_Item);
      return;
    }
  }
label_044bc19f:
  uVar21 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
    g_data_057aea6a = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
  uVar19 = 0;
  pIVar14 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = pIVar13;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar13);
    __this_02[3].klass = pIVar15;
    il2cpp_runtime_helper_022b4080(__this_02 + 3,pIVar15);
    *(undefined4 *)&__this_02[2].monitor = uVar21;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar14,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar14[1].klass = uVar19;
  return;
}


// ApplicationManagers.MusicManager$$PlaySoundEffect
// il2cpp: void ApplicationManagers_MusicManager__PlaySoundEffect (SimpleJSONFixed_JSONNode_o* songInfo, const MethodInfo* method);
// 0x44bb160

void ApplicationManagers_MusicManager__PlaySoundEffect
               (SimpleJSONFixed_JSONNode_o *songInfo,MethodInfo *method)

{
  int iVar1;
  System_String_c *pSVar2;
  char *pcVar3;
  UnityEngine_AudioSource_o *pUVar4;
  Il2CppMethodPointer pIVar5;
  void *pvVar6;
  code *pcVar7;
  GameManagers_InGameManager_c *pGVar8;
  UnityEngine_MonoBehaviour_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  char cVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  uint uVar13;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  System_String_o *pSVar15;
  Il2CppObject *pIVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  SimpleJSONFixed_JSONNode_o *pSVar20;
  Il2CppClass *pIVar21;
  Il2CppClass *pIVar22;
  Il2CppClass *pIVar23;
  Il2CppClass *pIVar24;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UnityEngine_Object_o *value;
  Il2CppObject *__this_02;
  SimpleJSONFixed_JSONNode_c *in_RCX;
  UnityEngine_Object_c *pUVar25;
  Il2CppClass *unaff_RBX;
  Il2CppClass *pIVar26;
  undefined1 *puVar27;
  undefined8 unaff_RBP;
  long *b;
  MethodInfo *pMVar28;
  Il2CppClass *pIVar29;
  byte bVar30;
  long *unaff_R12;
  undefined8 unaff_R13;
  Il2CppClass *unaff_R14;
  ulong uVar31;
  long *unaff_R15;
  long *plVar32;
  float fVar33;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar34;
  undefined1 auVar35 [16];
  
  plVar18 = (long *)songInfo;
code_r0x044bb160:
  *(long **)((long)register0x00000020 + -8) = unaff_R15;
  *(Il2CppClass **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(Il2CppClass **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057aea68 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb181;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb18d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb199;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb1a5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb1b1;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb1bd;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb1c9;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea68 = '\x01';
  }
  plVar32 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb1e8;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar24 = (Il2CppClass *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb1f4;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)plVar18,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  if ((SimpleJSONFixed_JSONNode_o *)plVar18 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bb384:
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb389;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar28 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._28_HasKey.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._28_HasKey.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb222;
    cVar10 = (*pIVar5)(plVar18,"Name",pMVar28);
    if (cVar10 == '\0') {
      return;
    }
    pMVar28 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._7_get_Item.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb240;
    pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(plVar18,"Name",pMVar28);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb254;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb25e;
    pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb279;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb28d;
    unaff_R14 = (Il2CppClass *)
                ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar15,0,(MethodInfo *)in_RCX);
    if ((unaff_R14 == (Il2CppClass *)0x0) || (pIVar24 = TypeInfo_AudioClip, (unaff_R14->_1).image == TypeInfo_AudioClip))
    {
      pMVar28 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._7_get_Item.method;
      pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb2c5;
      pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(plVar18,"Volume",pMVar28);
      pIVar24 = (Il2CppClass *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb2cf;
      fVar33 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar14,(MethodInfo *)0x0);
      *(float *)((long)register0x00000020 + -0x1c) = fVar33;
      plVar32 = (long *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
      if ((Il2CppClass *)plVar32 != (Il2CppClass *)0x0) {
        if (g_data_057aea6a == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb307;
          il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
          g_data_057aea6a = '\x01';
        }
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb31d;
        pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
        pIVar24 = (Il2CppClass *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb32a;
        System_Object___ctor(pIVar16,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar16[1].klass = 0;
        plVar18 = (long *)0x0;
        if (pIVar16 != (Il2CppObject *)0x0) {
          pIVar16[2].klass = (Il2CppClass *)plVar32;
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb346;
          il2cpp_runtime_helper_022b4080(pIVar16 + 2,plVar32);
          pIVar16[3].klass = unaff_R14;
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb359;
          il2cpp_runtime_helper_022b4080(pIVar16 + 3,unaff_R14);
          *(undefined4 *)&pIVar16[2].monitor = *(undefined4 *)((long)register0x00000020 + -0x1c);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)plVar32,(System_Collections_IEnumerator_o *)pIVar16,
                     (MethodInfo *)0x0);
          return;
        }
      }
      goto label_044bb384;
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bb391;
  uVar17 = il2cpp_runtime_helper_022b2fd0(unaff_R14);
  *(Il2CppClass **)((long)register0x00000020 + -0x30) = unaff_R14;
  *(long **)((long)register0x00000020 + -0x38) = plVar18;
  *(undefined8 *)((long)register0x00000020 + -0x40) = uVar17;
  if (g_data_057aea65 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb3b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb3c5;
    il2cpp_runtime_helper_023445d0(&"Transition");
    g_data_057aea65 = '\x01';
  }
  b = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if ((Il2CppClass *)b != (Il2CppClass *)0x0) {
    pvVar6 = (((Il2CppClass *)b)->_1).image;
    uVar17 = *(undefined8 *)((long)pvVar6 + 0x1b0);
    pcVar7 = *(code **)((long)pvVar6 + 0x1a8);
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb400;
    pIVar24 = "Transition";
    plVar18 = (long *)(*pcVar7)(b,"Transition",uVar17);
    if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
       (*(undefined2 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x68) = 0x101,
       (SimpleJSONFixed_JSONNode_o *)plVar18 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      pMVar28 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._11_get_Count.method;
      pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._11_get_Count.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb433;
      iVar12 = (*pIVar5)(plVar18,pMVar28);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb43e;
      uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
      in_RCX = ((SimpleJSONFixed_JSONNode_o *)plVar18)->klass;
      pMVar28 = (in_RCX->vtable)._5_get_Item.method;
      pIVar5 = (in_RCX->vtable)._5_get_Item.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb453;
      unaff_RBX = (Il2CppClass *)(*pIVar5)(plVar18,(ulong)uVar13,pMVar28);
      uVar17 = *(undefined8 *)((long)register0x00000020 + -0x38);
      pIVar24 = *(Il2CppClass **)((long)register0x00000020 + -0x30);
      puVar27 = (undefined1 *)((long)register0x00000020 + -0x28);
      do {
        *(long **)(puVar27 + -8) = plVar32;
        *(Il2CppClass **)(puVar27 + -0x10) = pIVar24;
        *(undefined8 *)(puVar27 + -0x18) = uVar17;
        if (g_data_057aea69 == '\0') {
          *(undefined8 *)(puVar27 + -0x30) = 0x44babb1;
          il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
          *(undefined8 *)(puVar27 + -0x30) = 0x44babbd;
          il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
          *(undefined8 *)(puVar27 + -0x30) = 0x44babc9;
          il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
          *(undefined8 *)(puVar27 + -0x30) = 0x44babd5;
          il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
          *(undefined8 *)(puVar27 + -0x30) = 0x44babe1;
          il2cpp_runtime_helper_023445d0(&"Name");
          *(undefined8 *)(puVar27 + -0x30) = 0x44babed;
          il2cpp_runtime_helper_023445d0(&"Music");
          *(undefined8 *)(puVar27 + -0x30) = 0x44babf9;
          il2cpp_runtime_helper_023445d0(&"Volume");
          g_data_057aea69 = '\x01';
        }
        unaff_R15 = &TypeInfo_JSONNode;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          *(undefined8 *)(puVar27 + -0x30) = 0x44bac18;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar27 + -0x30) = 0x44bac24;
        bVar11 = SimpleJSONFixed_JSONNode__op_Inequality
                           ((SimpleJSONFixed_JSONNode_o *)unaff_RBX,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          return;
        }
        unaff_R14 = pIVar24;
        if (unaff_RBX == (Il2CppClass *)0x0) {
label_044bae61:
          *(undefined8 *)(puVar27 + -0x30) = 0x44bae66;
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          pSVar2 = (unaff_RBX->_1).image;
          pcVar3 = pSVar2[1]._1.namespaze;
          pcVar7 = (code *)pSVar2[1]._1.name;
          *(undefined8 *)(puVar27 + -0x30) = 0x44bac52;
          cVar10 = (*pcVar7)(unaff_RBX,"Name",pcVar3);
          if (cVar10 == '\0') {
            return;
          }
          pSVar2 = (unaff_RBX->_1).image;
          pMVar28 = (pSVar2->vtable)._7_CompareTo.method;
          pIVar5 = (pSVar2->vtable)._7_CompareTo.methodPtr;
          *(undefined8 *)(puVar27 + -0x30) = 0x44bac70;
          pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(unaff_RBX,"Name",pMVar28);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            *(undefined8 *)(puVar27 + -0x30) = 0x44bac84;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar27 + -0x30) = 0x44bac8e;
          pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            *(undefined8 *)(puVar27 + -0x30) = 0x44baca9;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar27 + -0x30) = 0x44bacbd;
          unaff_R14 = (Il2CppClass *)
                      ApplicationManagers_ResourceManager__LoadAsset
                                ("Music",pSVar15,0,(MethodInfo *)in_RCX);
          if ((unaff_R14 == (Il2CppClass *)0x0) || ((unaff_R14->_1).image == TypeInfo_AudioClip)) {
            pSVar2 = (unaff_RBX->_1).image;
            pMVar28 = (pSVar2->vtable)._7_CompareTo.method;
            pIVar5 = (pSVar2->vtable)._7_CompareTo.methodPtr;
            *(undefined8 *)(puVar27 + -0x30) = 0x44bacf5;
            pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(unaff_RBX,"Volume",pMVar28);
            *(undefined8 *)(puVar27 + -0x30) = 0x44bacff;
            fVar33 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar14,(MethodInfo *)0x0);
            unaff_R15 = &TypeInfo_MusicManager;
            lVar19 = **(long **)(TypeInfo_MusicManager + 0xb8);
            if (lVar19 != 0) {
              *(float *)(puVar27 + -0x1c) = fVar33;
              pUVar4 = *(UnityEngine_AudioSource_o **)(lVar19 + 0x28);
              if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                *(undefined8 *)(puVar27 + -0x30) = 0x44bad39;
                UnityEngine_AudioSource__set_clip
                          (pUVar4,(UnityEngine_AudioClip_o *)unaff_R14,(MethodInfo *)0x0);
                plVar18 = *(long **)(TypeInfo_MusicManager + 0xb8);
                in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar18;
                if (in_RCX != (SimpleJSONFixed_JSONNode_c *)0x0) {
                  unaff_RBX = *(Il2CppClass **)&(in_RCX->_1).byval_arg.bits;
                  if (g_data_057aea72 == '\0') {
                    *(undefined8 *)(puVar27 + -0x30) = 0x44bad64;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
                    *(undefined8 *)(puVar27 + -0x30) = 0x44bad70;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                    *(undefined8 *)(puVar27 + -0x30) = 0x44bad7c;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
                    g_data_057aea72 = '\x01';
                    plVar18 = *(long **)(TypeInfo_MusicManager + 0xb8);
                  }
                  fVar33 = 0.0;
                  if ((char)plVar18[2] == '\0') {
                    lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
                    if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x28), lVar19 == 0)) goto label_044bae61;
                    fVar33 = *(float *)(lVar19 + 0x14) * 0.4;
                  }
                  if (unaff_RBX != (Il2CppClass *)0x0) {
                    *(undefined8 *)(puVar27 + -0x30) = 0x44badee;
                    UnityEngine_AudioSource__set_volume
                              ((UnityEngine_AudioSource_o *)unaff_RBX,*(float *)(puVar27 + -0x1c) * fVar33,
                               (MethodInfo *)0x0);
                    if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
                       (pUVar4 = *(UnityEngine_AudioSource_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x28),
                       pUVar4 != (UnityEngine_AudioSource_o *)0x0)) {
                      *(undefined8 *)(puVar27 + -0x30) = 0x44bae10;
                      UnityEngine_AudioSource__Play_4daa2c0(pUVar4,(MethodInfo *)0x0);
                      if (unaff_R14 != (Il2CppClass *)0x0) {
                        lVar19 = **(long **)(TypeInfo_MusicManager + 0xb8);
                        *(undefined8 *)(puVar27 + -0x30) = 0x44bae2c;
                        fVar33 = UnityEngine_AudioClip__get_length
                                           ((UnityEngine_AudioClip_o *)unaff_R14,(MethodInfo *)0x0);
                        unaff_RBX = (Il2CppClass *)0x0;
                        if (lVar19 != 0) {
                          *(float *)(lVar19 + 0x40) = fVar33;
                          lVar19 = **(long **)(TypeInfo_MusicManager + 0xb8);
                          *(undefined8 *)(puVar27 + -0x30) = 0x44bae4d;
                          fVar33 = UnityEngine_AudioClip__get_length
                                             ((UnityEngine_AudioClip_o *)unaff_R14,(MethodInfo *)0x0);
                          unaff_RBX = (Il2CppClass *)0x0;
                          if (lVar19 != 0) {
                            *(float *)(lVar19 + 100) = fVar33;
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto label_044bae61;
          }
        }
        *(undefined8 *)(puVar27 + -0x30) = 0x44bae6e;
        uVar17 = il2cpp_runtime_helper_022b2fd0(unaff_R14);
        *(long **)(puVar27 + -0x30) = unaff_R15;
        *(Il2CppClass **)(puVar27 + -0x38) = unaff_R14;
        *(long **)(puVar27 + -0x40) = unaff_R12;
        *(Il2CppClass **)(puVar27 + -0x48) = unaff_RBX;
        *(undefined8 *)(puVar27 + -0x50) = uVar17;
        if (g_data_057aea62 == '\0') {
          *(undefined8 *)(puVar27 + -0x58) = 0x44bae8d;
          il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
          *(undefined8 *)(puVar27 + -0x58) = 0x44bae99;
          il2cpp_runtime_helper_023445d0(&TypeInfo_MusicPlaylist);
          *(undefined8 *)(puVar27 + -0x58) = 0x44baea5;
          il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
          *(undefined8 *)(puVar27 + -0x58) = 0x44baeb1;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
          *(undefined8 *)(puVar27 + -0x58) = 0x44baebd;
          il2cpp_runtime_helper_023445d0(&"Grabbed");
          g_data_057aea62 = '\x01';
        }
        lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x38), lVar19 == 0)) goto label_044bb042;
        if (*(char *)(lVar19 + 0x11) == '\0') {
          return;
        }
        unaff_R15 = &TypeInfo_MusicManager;
        plVar18 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
        if (plVar18 == (long *)0x0) goto label_044bb042;
        uVar17 = *(undefined8 *)(*plVar18 + 0x1b0);
        pcVar7 = *(code **)(*plVar18 + 0x1a8);
        *(undefined8 *)(puVar27 + -0x58) = 0x44baf34;
        plVar18 = (long *)(*pcVar7)(plVar18,"Grabbed",uVar17);
        if (plVar18 == (long *)0x0) goto label_044bb042;
        in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar18;
        pMVar28 = (in_RCX->vtable)._5_get_Item.method;
        pIVar5 = (in_RCX->vtable)._5_get_Item.methodPtr;
        *(undefined8 *)(puVar27 + -0x58) = 0x44baf52;
        unaff_R14 = (Il2CppClass *)(*pIVar5)(plVar18,0,pMVar28);
        lVar19 = **(long **)(TypeInfo_MusicManager + 0xb8);
        if (lVar19 == 0) goto label_044bb042;
        *(undefined1 *)(lVar19 + 0x68) = 0;
        unaff_RBX = *(Il2CppClass **)(lVar19 + 0x20);
        unaff_R12 = &TypeInfo_MusicPlaylist;
        if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
          *(undefined8 *)(puVar27 + -0x58) = 0x44baf8c;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar15 = *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
        *(undefined8 *)(puVar27 + -0x58) = 0x44bafa5;
        bVar11 = System_String__op_Equality((System_String_o *)unaff_RBX,pSVar15,(MethodInfo *)0x0);
        in_RCX = *(SimpleJSONFixed_JSONNode_c **)(TypeInfo_MusicManager + 0xb8);
        pIVar5 = (in_RCX->_1).image;
        if ((char)bVar11 == '\0') {
          if (pIVar5 == (Il2CppMethodPointer)0x0) goto label_044bb042;
          *(undefined8 *)(pIVar5 + 0x70) = **(undefined8 **)(g_data_057b9c00 + 0xb8);
          *(undefined8 *)(puVar27 + -0x58) = 0x44bb02f;
          il2cpp_runtime_helper_022b4080(pIVar5 + 0x70);
        }
        else {
          if (pIVar5 == (Il2CppMethodPointer)0x0) goto label_044bb042;
          *(undefined8 *)(pIVar5 + 0x70) = *(undefined8 *)(pIVar5 + 0x58);
          *(undefined8 *)(puVar27 + -0x58) = 0x44bafd0;
          il2cpp_runtime_helper_022b4080(pIVar5 + 0x70);
          unaff_RBX = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
          if ((unaff_RBX == (Il2CppClass *)0x0) ||
             (pUVar4 = *(UnityEngine_AudioSource_o **)&(unaff_RBX->_1).byval_arg.bits,
             pUVar4 == (UnityEngine_AudioSource_o *)0x0)) goto label_044bb042;
          *(undefined8 *)(puVar27 + -0x58) = 0x44baff2;
          fVar33 = UnityEngine_AudioSource__get_time(pUVar4,(MethodInfo *)0x0);
          *(float *)&(unaff_RBX->_1).klass = fVar33;
        }
        uVar17 = *(undefined8 *)(puVar27 + -0x48);
        unaff_R12 = *(long **)(puVar27 + -0x40);
        pIVar24 = *(Il2CppClass **)(puVar27 + -0x38);
        plVar32 = *(long **)(puVar27 + -0x30);
        puVar27 = puVar27 + -0x28;
        unaff_RBX = unaff_R14;
      } while( true );
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x44bb467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)register0x00000020 + -0x48) = unaff_RBP;
  *(long **)((long)register0x00000020 + -0x50) = plVar32;
  *(long **)((long)register0x00000020 + -0x58) = &TypeInfo_MusicManager;
  *(long **)((long)register0x00000020 + -0x60) = unaff_R12;
  *(long **)((long)register0x00000020 + -0x68) = plVar18;
  pIVar26 = (Il2CppClass *)((ulong)pIVar24 & 0xffffffff);
  plVar32 = b;
  if (g_data_057aea67 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44bb493;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    plVar32 = &TypeInfo_MusicPlaylist;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44bb49f;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea67 = '\x01';
  }
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    pSVar15 = *(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44bb4d1;
    pIVar24 = (Il2CppClass *)b;
    uVar13 = System_String__op_Inequality(pSVar15,(System_String_o *)b,(MethodInfo *)0x0);
    unaff_R12 = (long *)(ulong)uVar13;
    lVar19 = **(long **)(TypeInfo_MusicManager + 0xb8);
    plVar32 = (long *)0x0;
    if (lVar19 != 0) {
      *(long **)(lVar19 + 0x20) = b;
      plVar32 = (long *)(lVar19 + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44bb4fa;
      pIVar24 = (Il2CppClass *)b;
      il2cpp_runtime_helper_022b4080();
      lVar19 = **(long **)(TypeInfo_MusicManager + 0xb8);
      if (lVar19 != 0) {
        cVar10 = *(char *)(lVar19 + 0x68);
        in_RCX = (SimpleJSONFixed_JSONNode_c *)CONCAT71((int7)((ulong)in_RCX >> 8),cVar10);
        if (*(char *)(lVar19 + 0x60) == '\0') {
          if (cVar10 != '\0') goto label_044bb52e;
          if (0.0 < *(float *)(lVar19 + 100)) {
            *(undefined4 *)(lVar19 + 0x40) = 0;
          }
label_044bb578:
          *(undefined4 *)(lVar19 + 100) = 0;
        }
        else {
          *(undefined4 *)(lVar19 + 0x40) = 0;
          if (cVar10 == '\0') goto label_044bb578;
label_044bb52e:
          plVar18 = &TypeInfo_MusicPlaylist;
          if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44bb546;
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar24 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44bb55e;
          plVar32 = b;
          bVar11 = System_String__op_Equality
                             ((System_String_o *)b,(System_String_o *)pIVar24,(MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            lVar19 = **(long **)(TypeInfo_MusicManager + 0xb8);
            if (lVar19 == 0) goto label_044bb684;
            goto label_044bb578;
          }
        }
        plVar18 = &TypeInfo_MusicPlaylist;
        if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44bb597;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar24 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44bb5af;
        plVar32 = b;
        bVar11 = System_String__op_Equality((System_String_o *)b,(System_String_o *)pIVar24,(MethodInfo *)0x0)
        ;
        if ((char)bVar11 == '\0') goto label_044bb618;
        lVar19 = **(long **)(TypeInfo_MusicManager + 0xb8);
        if (lVar19 == 0) goto label_044bb684;
        if (*(char *)(lVar19 + 0x7c) == '\0') {
label_044bb618:
          lVar19 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if (lVar19 == 0) goto label_044bb684;
          bVar30 = (byte)uVar13 | (byte)pIVar26;
          unaff_R12 = (long *)(ulong)CONCAT31((int3)(uVar13 >> 8),bVar30);
          if ((bVar30 == 1) && (*(float *)(lVar19 + 100) <= 0.0)) {
            *(undefined4 *)(lVar19 + 0x4c) = 0;
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44bb648;
            ApplicationManagers_MusicManager__NextSong((MethodInfo *)plVar32);
          }
        }
        else {
          plVar32 = *(long **)(lVar19 + 0x70);
          pIVar24 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44bb5f2;
          bVar11 = System_String__op_Inequality
                             ((System_String_o *)plVar32,(System_String_o *)pIVar24,(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') goto label_044bb618;
          lVar19 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if (lVar19 == 0) goto label_044bb684;
          plVar32 = *(long **)(lVar19 + 0x70);
          fVar33 = *(float *)(lVar19 + 0x78);
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44bb616;
          ApplicationManagers_MusicManager__SetSong((System_String_o *)plVar32,fVar33,(MethodInfo *)pIVar24);
        }
        if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
          *(undefined1 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x7c) = 0;
          return;
        }
      }
    }
  }
label_044bb684:
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44bb689;
  uVar17 = il2cpp_runtime_helper_022b2c90();
  *(long **)((long)register0x00000020 + -0x70) = b;
  *(long **)((long)register0x00000020 + -0x78) = &TypeInfo_MusicManager;
  *(Il2CppClass **)((long)register0x00000020 + -0x80) = pIVar26;
  *(undefined8 *)((long)register0x00000020 + -0x88) = unaff_R13;
  *(long **)((long)register0x00000020 + -0x90) = unaff_R12;
  *(long **)((long)register0x00000020 + -0x98) = plVar18;
  *(undefined8 *)((long)register0x00000020 + -0xa0) = uVar17;
  *(undefined4 *)((long)register0x00000020 + -0x9c) = extraout_XMM0_Da;
  if (g_data_057aea6b == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb6bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb6c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb6d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb6e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb6ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb6f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb705;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb711;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb71d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb729;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb735;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb741;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb74d;
    il2cpp_runtime_helper_023445d0(&"Playlist");
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb759;
    il2cpp_runtime_helper_023445d0(&"");
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb765;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea6b = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb774;
  pSVar14 = ApplicationManagers_MusicManager__FindSong((System_String_o *)plVar32,(MethodInfo *)pIVar24);
  lVar19 = **(long **)(TypeInfo_MusicManager + 0xb8);
  pIVar29 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (lVar19 == 0) goto label_044bbd3d;
  *(undefined1 *)(lVar19 + 0x48) = 0;
  *(MethodInfo **)(lVar19 + 0x58) = "";
  *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb7af;
  il2cpp_runtime_helper_022b4080(lVar19 + 0x58);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb7c8;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar26 = (Il2CppClass *)0x0;
  pIVar22 = (Il2CppClass *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb7d7;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar14,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  *(undefined4 *)((long)register0x00000020 + -0xa0) = 0;
  if ((char)bVar11 == '\0') goto label_044bbc73;
  pIVar24 = pIVar22;
  if (pSVar14 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bbd3d:
    pIVar21 = pIVar29;
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbd42;
    il2cpp_runtime_helper_022b2c90();
    pIVar29 = pIVar26;
    pIVar22 = pIVar21;
  }
  else {
    b = &"Name";
    pMVar28 = (pSVar14->klass->vtable)._28_HasKey.method;
    pIVar5 = (pSVar14->klass->vtable)._28_HasKey.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb80f;
    cVar10 = (*pIVar5)(pSVar14,"Name",pMVar28);
    if (cVar10 == '\0') {
      pIVar26 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
      pMVar28 = (pSVar14->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar14->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbab7;
      plVar32 = (long *)(*pIVar5)(pSVar14,"Playlist",pMVar28);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbacc;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar24 = (Il2CppClass *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbad6;
      pIVar22 = (Il2CppClass *)
                SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                          ((SimpleJSONFixed_JSONNode_o *)plVar32,(MethodInfo *)0x0);
      if (pIVar26 != (Il2CppClass *)0x0) {
        pGVar8 = (pIVar26->_1).image;
        pMVar28 = (pGVar8->vtable)._7_unknown.method;
        pIVar5 = (pGVar8->vtable)._7_unknown.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbaf5;
        pIVar21 = (Il2CppClass *)(*pIVar5)(pIVar26,pIVar22,pMVar28);
        pIVar24 = pIVar22;
        if (pIVar21 != (Il2CppClass *)0x0) {
          pUVar25 = (pIVar21->_1).image;
          pIVar24 = pUVar25[1]._1.klass;
          pcVar7 = pUVar25[1]._1.interopData;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbb14;
          iVar12 = (*pcVar7)(pIVar21,pIVar24);
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbb1f;
          uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
          pUVar25 = (pIVar21->_1).image;
          pcVar3 = pUVar25[1]._1.namespaze;
          pIVar24 = (Il2CppClass *)(ulong)uVar13;
          pcVar7 = (code *)pUVar25[1]._1.name;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbb34;
          plVar18 = (long *)(*pcVar7)(pIVar21,pIVar24,pcVar3);
          plVar32 = (long *)pIVar21;
          if (plVar18 != (long *)0x0) {
            uVar17 = *(undefined8 *)(*plVar18 + 0x1b0);
            pcVar7 = *(code **)(*plVar18 + 0x1a8);
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbb57;
            pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pcVar7)(plVar18,"Name",uVar17);
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbb61;
            plVar32 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbb7c;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbb90;
            pIVar21 = (Il2CppClass *)
                      ApplicationManagers_ResourceManager__LoadAsset
                                ("Music",(System_String_o *)plVar32,0,(MethodInfo *)pUVar25);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbbab;
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar29 = (Il2CppClass *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbbba;
            bVar11 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pIVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            pIVar26 = pIVar29;
            if ((((char)bVar11 != '\0') && (pIVar26 = pIVar21, pIVar21 != (Il2CppClass *)0x0)) &&
               (pIVar24 = TypeInfo_AudioClip, pIVar22 = pIVar21, (pIVar21->_1).image != TypeInfo_AudioClip))
            goto label_044bbd45;
            uVar17 = *(undefined8 *)(*plVar18 + 0x1b0);
            pcVar7 = *(code **)(*plVar18 + 0x1a8);
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbbf7;
            pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pcVar7)(plVar18,"Volume",uVar17);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbc0c;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbc16;
            fVar33 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar14,(MethodInfo *)0x0);
            *(float *)((long)register0x00000020 + -0xa0) = fVar33;
            lVar19 = **(long **)(TypeInfo_MusicManager + 0xb8);
            uVar17 = *(undefined8 *)(*plVar18 + 0x1b0);
            pcVar7 = *(code **)(*plVar18 + 0x1a8);
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbc4d;
            pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pcVar7)(plVar18,"Name",uVar17);
            pIVar24 = (Il2CppClass *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbc57;
            pIVar22 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
            plVar32 = (long *)0x0;
            pIVar29 = (Il2CppClass *)&TypeInfo_MusicManager;
            if (lVar19 != 0) {
              *(Il2CppClass **)(lVar19 + 0x58) = pIVar22;
              plVar32 = (long *)(lVar19 + 0x58);
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbc73;
              il2cpp_runtime_helper_022b4080(plVar32);
              goto label_044bbc73;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
    pMVar28 = (pSVar14->klass->vtable)._7_get_Item.method;
    pIVar5 = (pSVar14->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb82f;
    pSVar20 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar14,"Name",pMVar28);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb844;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb84e;
    plVar32 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar20,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb869;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb87d;
    pIVar21 = (Il2CppClass *)
              ApplicationManagers_ResourceManager__LoadAsset
                        ("Music",(System_String_o *)plVar32,0,(MethodInfo *)in_RCX);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb898;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb8a7;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pIVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pIVar26 = (Il2CppClass *)0x0;
    if ((((char)bVar11 == '\0') || (pIVar26 = pIVar21, pIVar21 == (Il2CppClass *)0x0)) ||
       (pIVar24 = TypeInfo_AudioClip, pIVar29 = (Il2CppClass *)0x0, pIVar22 = pIVar21,
       (pIVar21->_1).image == TypeInfo_AudioClip)) {
      pMVar28 = (pSVar14->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar14->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb8e4;
      pSVar20 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar14,"Volume",pMVar28);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb8f9;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb903;
      fVar33 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar20,(MethodInfo *)0x0);
      *(float *)((long)register0x00000020 + -0xa0) = fVar33;
      lVar19 = **(long **)(TypeInfo_MusicManager + 0xb8);
      pMVar28 = (pSVar14->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar14->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb934;
      pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar14,"Name",pMVar28);
      pIVar24 = (Il2CppClass *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb93e;
      pIVar22 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
      plVar32 = (long *)(Il2CppClass *)0x0;
      pIVar29 = (Il2CppClass *)&TypeInfo_MusicManager;
      if (lVar19 != 0) {
        *(Il2CppClass **)(lVar19 + 0x58) = pIVar22;
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bb95a;
        il2cpp_runtime_helper_022b4080(lVar19 + 0x58);
        b = &TypeInfo_SceneLoader;
        plVar32 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if ((Il2CppClass *)plVar32 != (Il2CppClass *)0x0) {
          pUVar25 = (((Il2CppClass *)plVar32)->_1).image;
          bVar30 = (TypeInfo_InGameManager->_2).naturalAligment;
          if ((bVar30 <= (pUVar25->_2).naturalAligment) &&
             ((pUVar25->_2).typeHierarchy[(ulong)bVar30 - 1] == TypeInfo_InGameManager)) {
            lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
            pIVar24 = pIVar22;
            pIVar29 = (Il2CppClass *)&TypeInfo_InGameManager;
            if ((lVar19 == 0) ||
               (lVar19 = *(long *)(lVar19 + 0x28), pIVar29 = (Il2CppClass *)&TypeInfo_InGameManager, lVar19 == 0))
            goto label_044bbd3d;
            if (0.0 < *(float *)(lVar19 + 0x14)) {
              lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              pIVar29 = (Il2CppClass *)&TypeInfo_InGameManager;
              if ((lVar19 == 0) ||
                 (lVar19 = *(long *)(lVar19 + 0xd8), pIVar29 = (Il2CppClass *)&TypeInfo_InGameManager, lVar19 == 0))
              goto label_044bbd3d;
              if (*(char *)(lVar19 + 0x11) != '\0') {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bba25;
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar22 = (Il2CppClass *)0x0;
                *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bba31;
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)plVar32,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar11 != '\0') {
                  pIVar21 = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
                  pIVar24 = pIVar22;
                  pIVar29 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (pIVar21 == (Il2CppClass *)0x0) goto label_044bbd3d;
                  pGVar8 = (pIVar21->_1).image;
                  bVar30 = (TypeInfo_InGameManager->_2).naturalAligment;
                  pIVar24 = TypeInfo_InGameManager;
                  pIVar29 = pIVar26;
                  pIVar22 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (((pGVar8->_2).naturalAligment < bVar30) ||
                     ((pGVar8->_2).typeHierarchy[(ulong)bVar30 - 1] != TypeInfo_InGameManager)) goto label_044bbd45;
                  pIVar22 = (Il2CppClass *)0x0;
                  *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bba7f;
                  GameManagers_InGameManager__OnSongChange
                            ((GameManagers_InGameManager_o *)pIVar21,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
label_044bbc73:
        __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
        pIVar24 = pIVar22;
        pIVar29 = (Il2CppClass *)&TypeInfo_MusicManager;
        if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
          pIVar24 = (Il2CppClass *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbc90;
          UnityEngine_MonoBehaviour__StopAllCoroutines(__this,(MethodInfo *)0x0);
          pIVar29 = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
          if (pIVar29 != (Il2CppClass *)0x0) {
            if (g_data_057aea6f == '\0') {
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbcbb;
              il2cpp_runtime_helper_023445d0(&TypeInfo_FadeNextSong_d__46);
              g_data_057aea6f = '\x01';
            }
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbcd1;
            pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeNextSong_d__46);
            pIVar24 = (Il2CppClass *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbcde;
            System_Object___ctor(pIVar16,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar16[1].klass = 0;
            plVar32 = (long *)(Il2CppClass *)0x0;
            if (pIVar16 != (Il2CppObject *)0x0) {
              pIVar16[2].klass = pIVar29;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbcfa;
              il2cpp_runtime_helper_022b4080(pIVar16 + 2,pIVar29);
              pIVar16[2].monitor = pIVar26;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbd0d;
              il2cpp_runtime_helper_022b4080(&pIVar16[2].monitor,pIVar26);
              *(undefined4 *)((long)&pIVar16[3].klass + 4) = *(undefined4 *)((long)register0x00000020 + -0xa0)
              ;
              *(undefined4 *)&pIVar16[3].klass = *(undefined4 *)((long)register0x00000020 + -0x9c);
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)pIVar29,(System_Collections_IEnumerator_o *)pIVar16,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
  }
label_044bbd45:
  *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x44bbd4a;
  il2cpp_runtime_helper_022b2fd0();
  *(long **)((long)register0x00000020 + -0xa8) = plVar32;
  if (g_data_057aea6d == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbd66;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbd72;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbd7e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbd8a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbd96;
    il2cpp_runtime_helper_023445d0(&"Custom");
    pIVar21 = (Il2CppClass *)&"Name";
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbda2;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea6d = '\x01';
  }
  pIVar26 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    pIVar21 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    pIVar24 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbde9;
    bVar11 = System_String__op_Equality
                       ((System_String_o *)pIVar21,(System_String_o *)pIVar24,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return;
    }
    if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
      pIVar21 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbe1a;
      pIVar24 = "Custom";
      bVar11 = System_String__op_Equality
                         ((System_String_o *)pIVar21,(System_String_o *)"Custom",(MethodInfo *)0x0);
      plVar18 = *(long **)(TypeInfo_MusicManager + 0xb8);
      if ((char)bVar11 == '\0') {
        if ((*plVar18 != 0) && (pIVar21 = (Il2CppClass *)plVar18[1], pIVar21 != (Il2CppClass *)0x0)) {
          pIVar24 = *(Il2CppClass **)(*plVar18 + 0x20);
          pGVar8 = (pIVar21->_1).image;
          pMVar28 = (pGVar8->vtable)._7_unknown.method;
          pIVar5 = (pGVar8->vtable)._7_unknown.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbea0;
          pIVar23 = (Il2CppClass *)(*pIVar5)(pIVar21,pIVar24,pMVar28);
          if (pIVar23 != (Il2CppClass *)0x0) {
            pGVar8 = (pIVar23->_1).image;
            pMVar28 = (pGVar8->vtable)._11_unknown.method;
            pIVar5 = (pGVar8->vtable)._11_unknown.methodPtr;
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbebf;
            iVar12 = (*pIVar5)(pIVar23,pMVar28);
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbeca;
            uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
            pGVar8 = (pIVar23->_1).image;
            pMVar28 = (pGVar8->vtable)._5_unknown.method;
            pIVar24 = (Il2CppClass *)(ulong)uVar13;
            pIVar5 = (pGVar8->vtable)._5_unknown.methodPtr;
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbedf;
            pIVar21 = pIVar23;
            plVar18 = (long *)(*pIVar5)(pIVar23,pIVar24,pMVar28);
            pIVar26 = pIVar23;
            if (plVar18 != (long *)0x0) {
              uVar17 = *(undefined8 *)(*plVar18 + 0x1b0);
              pcVar7 = *(code **)(*plVar18 + 0x1a8);
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbf01;
              pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pcVar7)(plVar18,"Name",uVar17);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbf1c;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar28 = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbf26;
              pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
              ApplicationManagers_MusicManager__SetSong(pSVar15,0.0,pMVar28);
              return;
            }
          }
        }
      }
      else {
        lVar19 = *plVar18;
        if (lVar19 != 0) {
          __this_00 = *(System_Collections_Generic_List_object__o **)(lVar19 + 0x50);
          pIVar21 = (Il2CppClass *)0x0;
          if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
            iVar1 = (__this_00->fields)._size;
            if (iVar1 == 0) {
              return;
            }
            uVar13 = *(int *)(lVar19 + 0x4c) + 1;
            pMVar28 = (MethodInfo *)0x0;
            if ((int)uVar13 < iVar1) {
              pMVar28 = (MethodInfo *)(ulong)uVar13;
            }
            *(int32_t *)(lVar19 + 0x4c) = (int32_t)pMVar28;
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbe67;
            pSVar15 = (System_String_o *)
                      System_Collections_Generic_List_object___get_Item
                                (__this_00,(int32_t)pMVar28,MethodInfo_String_get_Item);
            ApplicationManagers_MusicManager__SetSong(pSVar15,0.0,pMVar28);
            return;
          }
        }
      }
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44bbf37;
  auVar35 = il2cpp_runtime_helper_022b2c90();
  *(long **)((long)register0x00000020 + -0xb0) = b;
  *(Il2CppClass **)((long)register0x00000020 + -0xb8) = pIVar22;
  *(Il2CppClass **)((long)register0x00000020 + -0xc0) = pIVar29;
  *(Il2CppClass **)((long)register0x00000020 + -200) = pIVar26;
  *(long *)((long)register0x00000020 + -0xd0) = auVar35._0_8_;
  uVar31 = auVar35._8_8_ & 0xffffffff;
  if (g_data_057aea83 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bbf65;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bbf71;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bbf7d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bbf89;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bbf95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bbfa1;
    il2cpp_runtime_helper_023445d0(&"/");
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bbfad;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea83 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bbfc8;
  pMVar28 = "";
  bVar11 = System_String__op_Inequality
                     ((System_String_o *)pIVar21,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bbfe3;
    pMVar28 = "/";
    pIVar24 = (Il2CppClass *)
              System_String__Concat_3af7150
                        ((System_String_o *)pIVar21,(System_String_o *)"/",(System_String_o *)pIVar24
                         ,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bbffe;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc006;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              ApplicationManagers_ResourceManager__GetExternalTexture((System_String_o *)pIVar24,pMVar28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc021;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar26 = (Il2CppClass *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc02d;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  cVar10 = (char)uVar31;
  if ((char)bVar11 != '\0') {
    if (cVar10 != '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc04b;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar29 = (Il2CppClass *)0x0;
      if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc073;
      pIVar26 = pIVar24;
      bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         (pSVar9,(Il2CppObject *)pIVar24,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar11 == '\0') {
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc088;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
        pIVar29 = (Il2CppClass *)0x0;
        if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
        *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc0b3;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar9,(Il2CppObject *)pIVar24,(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
      }
    }
    return;
  }
  if (cVar10 == '\0') {
    UnityEngine_Resources__Load((System_String_o *)pIVar24,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc0db;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
  pIVar29 = (Il2CppClass *)0x0;
  if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc103;
    pIVar26 = pIVar24;
    bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar9,(Il2CppObject *)pIVar24,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 == '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc118;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar26 = (Il2CppClass *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc12f;
      pIVar29 = pIVar24;
      value = UnityEngine_Resources__Load((System_String_o *)pIVar24,(MethodInfo *)0x0);
      if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc14c;
      pIVar26 = pIVar24;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_01,(Il2CppObject *)pIVar24,(Il2CppObject *)value,MethodInfo_Void_set_Item);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc15d;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar29 = (Il2CppClass *)0x0;
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)pIVar24,MethodInfo_Object_get_Item);
      return;
    }
  }
label_044bc19f:
  *(undefined8 *)((long)register0x00000020 + -0xd8) = 0x44bc1a4;
  uVar34 = il2cpp_runtime_helper_022b2c90();
  *(long **)((long)register0x00000020 + -0xd8) = &TypeInfo_ResourceManager;
  *(ulong *)((long)register0x00000020 + -0xe0) = uVar31;
  *(Il2CppClass **)((long)register0x00000020 + -0xe8) = pIVar24;
  *(undefined4 *)((long)register0x00000020 + -0xec) = uVar34;
  if (g_data_057aea6a == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44bc1da;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
    g_data_057aea6a = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44bc1f0;
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
  uVar34 = 0;
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44bc1fd;
  pIVar16 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = pIVar29;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44bc219;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar29);
    __this_02[3].klass = pIVar26;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44bc22c;
    il2cpp_runtime_helper_022b4080(__this_02 + 3,pIVar26);
    *(undefined4 *)&__this_02[2].monitor = *(undefined4 *)((long)register0x00000020 + -0xec);
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44bc249;
  uVar17 = il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_Dictionary_object__object__o **)((long)register0x00000020 + -0x100) = __this_01
  ;
  *(undefined8 *)((long)register0x00000020 + -0x108) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x110) = uVar17;
  *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44bc25f;
  System_Object___ctor(pIVar16,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar16[1].klass = uVar34;
  return;
label_044bb042:
  *(undefined8 *)(puVar27 + -0x58) = 0x44bb047;
  uVar17 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar27 + -0x58) = uVar17;
  if (g_data_057aea63 == '\0') {
    *(undefined8 *)(puVar27 + -0x60) = 0x44bb066;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    g_data_057aea63 = '\x01';
  }
  lVar19 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar19 != 0) {
    if (0.0 < *(float *)(lVar19 + 100)) {
      *(undefined4 *)(lVar19 + 100) = 0;
      *(undefined4 *)(lVar19 + 0x40) = 0;
      *(undefined1 *)(lVar19 + 0x7c) = 1;
    }
    return;
  }
  *(undefined8 *)(puVar27 + -0x60) = 0x44bb0ac;
  il2cpp_runtime_helper_022b2c90();
  register0x00000020 = (BADSPACEBASE *)(puVar27 + -0x60);
  *(Il2CppClass **)(puVar27 + -0x60) = unaff_RBX;
  if (g_data_057aea64 == '\0') {
    *(undefined8 *)(puVar27 + -0x68) = 0x44bb0c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar27 + -0x68) = 0x44bb0d2;
    il2cpp_runtime_helper_023445d0(&"Effect");
    g_data_057aea64 = '\x01';
  }
  plVar18 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if ((SimpleJSONFixed_JSONNode_o *)plVar18 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pMVar28 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._7_get_Item.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar27 + -0x68) = 0x44bb10d;
    plVar32 = (long *)(*pIVar5)(plVar18,"Effect",pMVar28);
    if (plVar32 != (long *)0x0) {
      uVar17 = *(undefined8 *)(*plVar32 + 0x1f0);
      pcVar7 = *(code **)(*plVar32 + 0x1e8);
      *(undefined8 *)(puVar27 + -0x68) = 0x44bb128;
      iVar12 = (*pcVar7)(plVar32,uVar17);
      *(undefined8 *)(puVar27 + -0x68) = 0x44bb133;
      uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
      in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar32;
      pMVar28 = (in_RCX->vtable)._5_get_Item.method;
      pIVar5 = (in_RCX->vtable)._5_get_Item.methodPtr;
      *(undefined8 *)(puVar27 + -0x68) = 0x44bb148;
      plVar18 = (long *)(*pIVar5)(plVar32,(ulong)uVar13,pMVar28);
      unaff_RBX = *(Il2CppClass **)(puVar27 + -0x60);
      register0x00000020 = (BADSPACEBASE *)(puVar27 + -0x58);
      goto code_r0x044bb160;
    }
  }
  *(undefined8 *)(puVar27 + -0x68) = 0x44bb153;
  il2cpp_runtime_helper_022b2c90();
  goto code_r0x044bb160;
}


// ApplicationManagers.MusicManager$$PlayImmediateTransition
// il2cpp: void ApplicationManagers_MusicManager__PlayImmediateTransition (SimpleJSONFixed_JSONNode_o* songInfo, const MethodInfo* method);
// 0x44bab90

void ApplicationManagers_MusicManager__PlayImmediateTransition
               (SimpleJSONFixed_JSONNode_o *songInfo,MethodInfo *method)

{
  int iVar1;
  System_String_c *pSVar2;
  char *pcVar3;
  code *pcVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_AudioSource_o *pUVar6;
  void *pvVar7;
  GameManagers_InGameManager_c *pGVar8;
  UnityEngine_MonoBehaviour_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  char cVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  uint uVar13;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  System_String_o *pSVar15;
  Il2CppClass *pIVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  Il2CppObject *pIVar20;
  long lVar21;
  SimpleJSONFixed_JSONNode_o *pSVar22;
  Il2CppClass *pIVar23;
  Il2CppClass *pIVar24;
  Il2CppClass *pIVar25;
  Il2CppClass *pIVar26;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UnityEngine_Object_o *value;
  Il2CppObject *__this_02;
  SimpleJSONFixed_JSONNode_c *in_RCX;
  UnityEngine_Object_c *pUVar27;
  undefined8 unaff_RBX;
  undefined1 *puVar28;
  undefined8 unaff_RBP;
  MethodInfo *pMVar29;
  Il2CppClass *pIVar30;
  byte bVar31;
  long *unaff_R12;
  undefined8 unaff_R13;
  Il2CppClass *unaff_R14;
  ulong uVar32;
  long *unaff_R15;
  long *plVar33;
  float fVar34;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar35;
  undefined1 auVar36 [16];
  
code_r0x044bab90:
  *(long **)((long)register0x00000020 + -8) = unaff_R15;
  *(Il2CppClass **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057aea69 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44babb1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44babbd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44babc9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44babd5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44babe1;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44babed;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44babf9;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea69 = '\x01';
  }
  plVar33 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bac18;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bac24;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality(songInfo,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  pIVar16 = unaff_R14;
  if ((Il2CppClass *)songInfo == (Il2CppClass *)0x0) {
label_044bae61:
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bae66;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar2 = (((Il2CppClass *)songInfo)->_1).image;
    pcVar3 = pSVar2[1]._1.namespaze;
    pcVar4 = (code *)pSVar2[1]._1.name;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bac52;
    cVar10 = (*pcVar4)(songInfo,"Name",pcVar3);
    if (cVar10 == '\0') {
      return;
    }
    pSVar2 = (((Il2CppClass *)songInfo)->_1).image;
    pMVar29 = (pSVar2->vtable)._7_CompareTo.method;
    pIVar5 = (pSVar2->vtable)._7_CompareTo.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bac70;
    pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(songInfo,"Name",pMVar29);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bac84;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bac8e;
    pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44baca9;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bacbd;
    pIVar16 = (Il2CppClass *)
              ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar15,0,(MethodInfo *)in_RCX);
    if ((pIVar16 == (Il2CppClass *)0x0) || ((pIVar16->_1).image == TypeInfo_AudioClip)) {
      pSVar2 = (((Il2CppClass *)songInfo)->_1).image;
      pMVar29 = (pSVar2->vtable)._7_CompareTo.method;
      pIVar5 = (pSVar2->vtable)._7_CompareTo.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bacf5;
      pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(songInfo,"Volume",pMVar29);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bacff;
      fVar34 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar14,(MethodInfo *)0x0);
      plVar33 = &TypeInfo_MusicManager;
      lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
      if (lVar21 != 0) {
        *(float *)((long)register0x00000020 + -0x1c) = fVar34;
        pUVar6 = *(UnityEngine_AudioSource_o **)(lVar21 + 0x28);
        if (pUVar6 != (UnityEngine_AudioSource_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bad39;
          UnityEngine_AudioSource__set_clip(pUVar6,(UnityEngine_AudioClip_o *)pIVar16,(MethodInfo *)0x0);
          plVar18 = *(long **)(TypeInfo_MusicManager + 0xb8);
          in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar18;
          if (in_RCX != (SimpleJSONFixed_JSONNode_c *)0x0) {
            songInfo = *(SimpleJSONFixed_JSONNode_o **)&(in_RCX->_1).byval_arg.bits;
            if (g_data_057aea72 == '\0') {
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bad64;
              il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bad70;
              il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bad7c;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
              g_data_057aea72 = '\x01';
              plVar18 = *(long **)(TypeInfo_MusicManager + 0xb8);
            }
            fVar34 = 0.0;
            if ((char)plVar18[2] == '\0') {
              lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
              if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x28), lVar21 == 0)) goto label_044bae61;
              fVar34 = *(float *)(lVar21 + 0x14) * 0.4;
            }
            if ((Il2CppClass *)songInfo != (Il2CppClass *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44badee;
              UnityEngine_AudioSource__set_volume
                        ((UnityEngine_AudioSource_o *)songInfo,
                         *(float *)((long)register0x00000020 + -0x1c) * fVar34,(MethodInfo *)0x0);
              if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
                 (pUVar6 = *(UnityEngine_AudioSource_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x28),
                 pUVar6 != (UnityEngine_AudioSource_o *)0x0)) {
                *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bae10;
                UnityEngine_AudioSource__Play_4daa2c0(pUVar6,(MethodInfo *)0x0);
                if (pIVar16 != (Il2CppClass *)0x0) {
                  lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
                  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bae2c;
                  fVar34 = UnityEngine_AudioClip__get_length
                                     ((UnityEngine_AudioClip_o *)pIVar16,(MethodInfo *)0x0);
                  songInfo = (SimpleJSONFixed_JSONNode_o *)0x0;
                  if (lVar21 != 0) {
                    *(float *)(lVar21 + 0x40) = fVar34;
                    lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
                    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bae4d;
                    fVar34 = UnityEngine_AudioClip__get_length
                                       ((UnityEngine_AudioClip_o *)pIVar16,(MethodInfo *)0x0);
                    songInfo = (SimpleJSONFixed_JSONNode_o *)0x0;
                    if (lVar21 != 0) {
                      *(float *)(lVar21 + 100) = fVar34;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_044bae61;
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x44bae6e;
  uVar17 = il2cpp_runtime_helper_022b2fd0(pIVar16);
  *(long **)((long)register0x00000020 + -0x30) = plVar33;
  *(Il2CppClass **)((long)register0x00000020 + -0x38) = pIVar16;
  *(long **)((long)register0x00000020 + -0x40) = unaff_R12;
  *(SimpleJSONFixed_JSONNode_o **)((long)register0x00000020 + -0x48) = songInfo;
  *(undefined8 *)((long)register0x00000020 + -0x50) = uVar17;
  if (g_data_057aea62 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44bae8d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44bae99;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicPlaylist);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44baea5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44baeb1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44baebd;
    il2cpp_runtime_helper_023445d0(&"Grabbed");
    g_data_057aea62 = '\x01';
  }
  lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x38), lVar21 != 0)) {
    if (*(char *)(lVar21 + 0x11) == '\0') {
      return;
    }
    plVar33 = &TypeInfo_MusicManager;
    plVar18 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
    if (plVar18 == (long *)0x0) goto label_044bb042;
    uVar17 = *(undefined8 *)(*plVar18 + 0x1b0);
    pcVar4 = *(code **)(*plVar18 + 0x1a8);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44baf34;
    plVar18 = (long *)(*pcVar4)(plVar18,"Grabbed",uVar17);
    if (plVar18 == (long *)0x0) goto label_044bb042;
    in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar18;
    pMVar29 = (in_RCX->vtable)._5_get_Item.method;
    pIVar5 = (in_RCX->vtable)._5_get_Item.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44baf52;
    pIVar16 = (Il2CppClass *)(*pIVar5)(plVar18,0,pMVar29);
    lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
    if (lVar21 == 0) goto label_044bb042;
    *(undefined1 *)(lVar21 + 0x68) = 0;
    songInfo = *(SimpleJSONFixed_JSONNode_o **)(lVar21 + 0x20);
    unaff_R12 = &TypeInfo_MusicPlaylist;
    if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44baf8c;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44bafa5;
    bVar11 = System_String__op_Equality((System_String_o *)songInfo,pSVar15,(MethodInfo *)0x0);
    in_RCX = *(SimpleJSONFixed_JSONNode_c **)(TypeInfo_MusicManager + 0xb8);
    pIVar5 = (in_RCX->_1).image;
    if ((char)bVar11 != '\0') {
      if (pIVar5 != (Il2CppMethodPointer)0x0) {
        *(undefined8 *)(pIVar5 + 0x70) = *(undefined8 *)(pIVar5 + 0x58);
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44bafd0;
        il2cpp_runtime_helper_022b4080(pIVar5 + 0x70);
        songInfo = (SimpleJSONFixed_JSONNode_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
        if (((Il2CppClass *)songInfo != (Il2CppClass *)0x0) &&
           (pUVar6 = *(UnityEngine_AudioSource_o **)&(((Il2CppClass *)songInfo)->_1).byval_arg.bits,
           pUVar6 != (UnityEngine_AudioSource_o *)0x0)) {
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44baff2;
          fVar34 = UnityEngine_AudioSource__get_time(pUVar6,(MethodInfo *)0x0);
          *(float *)&(((Il2CppClass *)songInfo)->_1).klass = fVar34;
          goto label_044bb02f;
        }
      }
      goto label_044bb042;
    }
    if (pIVar5 == (Il2CppMethodPointer)0x0) goto label_044bb042;
    *(undefined8 *)(pIVar5 + 0x70) = **(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44bb02f;
    il2cpp_runtime_helper_022b4080(pIVar5 + 0x70);
label_044bb02f:
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x48);
    unaff_R12 = *(long **)((long)register0x00000020 + -0x40);
    unaff_R14 = *(Il2CppClass **)((long)register0x00000020 + -0x38);
    unaff_R15 = *(long **)((long)register0x00000020 + -0x30);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x28);
    songInfo = (SimpleJSONFixed_JSONNode_o *)pIVar16;
    goto code_r0x044bab90;
  }
label_044bb042:
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44bb047;
  uVar17 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)register0x00000020 + -0x58) = uVar17;
  if (g_data_057aea63 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x44bb066;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    g_data_057aea63 = '\x01';
  }
  lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar21 != 0) {
    if (0.0 < *(float *)(lVar21 + 100)) {
      *(undefined4 *)(lVar21 + 100) = 0;
      *(undefined4 *)(lVar21 + 0x40) = 0;
      *(undefined1 *)(lVar21 + 0x7c) = 1;
    }
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x44bb0ac;
  il2cpp_runtime_helper_022b2c90();
  puVar28 = (undefined1 *)((long)register0x00000020 + -0x60);
  *(SimpleJSONFixed_JSONNode_o **)((long)register0x00000020 + -0x60) = songInfo;
  if (g_data_057aea64 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44bb0c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44bb0d2;
    il2cpp_runtime_helper_023445d0(&"Effect");
    g_data_057aea64 = '\x01';
  }
  plVar18 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if ((SimpleJSONFixed_JSONNode_o *)plVar18 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bb14e:
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44bb153;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar29 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._7_get_Item.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44bb10d;
    plVar19 = (long *)(*pIVar5)(plVar18,"Effect",pMVar29);
    if (plVar19 == (long *)0x0) goto label_044bb14e;
    uVar17 = *(undefined8 *)(*plVar19 + 0x1f0);
    pcVar4 = *(code **)(*plVar19 + 0x1e8);
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44bb128;
    iVar12 = (*pcVar4)(plVar19,uVar17);
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44bb133;
    uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
    in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar19;
    pMVar29 = (in_RCX->vtable)._5_get_Item.method;
    pIVar5 = (in_RCX->vtable)._5_get_Item.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44bb148;
    plVar18 = (long *)(*pIVar5)(plVar19,(ulong)uVar13,pMVar29);
    songInfo = *(SimpleJSONFixed_JSONNode_o **)((long)register0x00000020 + -0x60);
    puVar28 = (undefined1 *)((long)register0x00000020 + -0x58);
  }
  *(long **)(puVar28 + -8) = plVar33;
  *(Il2CppClass **)(puVar28 + -0x10) = pIVar16;
  *(SimpleJSONFixed_JSONNode_o **)(puVar28 + -0x18) = songInfo;
  register0x00000020 = (BADSPACEBASE *)(puVar28 + -0x28);
  if (g_data_057aea68 == '\0') {
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb181;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb18d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb199;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb1a5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb1b1;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb1bd;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb1c9;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea68 = '\x01';
  }
  unaff_R15 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb1e8;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar26 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar28 + -0x30) = 0x44bb1f4;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)plVar18,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  if ((SimpleJSONFixed_JSONNode_o *)plVar18 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bb384:
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb389;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar29 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._28_HasKey.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._28_HasKey.methodPtr;
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb222;
    cVar10 = (*pIVar5)(plVar18,"Name",pMVar29);
    if (cVar10 == '\0') {
      return;
    }
    pMVar29 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._7_get_Item.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb240;
    pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(plVar18,"Name",pMVar29);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar28 + -0x30) = 0x44bb254;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb25e;
    pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar28 + -0x30) = 0x44bb279;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar28 + -0x30) = 0x44bb28d;
    pIVar16 = (Il2CppClass *)
              ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar15,0,(MethodInfo *)in_RCX);
    if ((pIVar16 == (Il2CppClass *)0x0) || (pIVar26 = TypeInfo_AudioClip, (pIVar16->_1).image == TypeInfo_AudioClip)) {
      pMVar29 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._7_get_Item.method;
      pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar28 + -0x30) = 0x44bb2c5;
      pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(plVar18,"Volume",pMVar29);
      pIVar26 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar28 + -0x30) = 0x44bb2cf;
      fVar34 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar14,(MethodInfo *)0x0);
      *(float *)(puVar28 + -0x1c) = fVar34;
      unaff_R15 = (long *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
      if ((Il2CppClass *)unaff_R15 != (Il2CppClass *)0x0) {
        if (g_data_057aea6a == '\0') {
          *(undefined8 *)(puVar28 + -0x30) = 0x44bb307;
          il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
          g_data_057aea6a = '\x01';
        }
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb31d;
        pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
        pIVar26 = (Il2CppClass *)0x0;
        *(undefined8 *)(puVar28 + -0x30) = 0x44bb32a;
        System_Object___ctor(pIVar20,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar20[1].klass = 0;
        plVar18 = (long *)0x0;
        if (pIVar20 != (Il2CppObject *)0x0) {
          pIVar20[2].klass = (Il2CppClass *)unaff_R15;
          *(undefined8 *)(puVar28 + -0x30) = 0x44bb346;
          il2cpp_runtime_helper_022b4080(pIVar20 + 2,unaff_R15);
          pIVar20[3].klass = pIVar16;
          *(undefined8 *)(puVar28 + -0x30) = 0x44bb359;
          il2cpp_runtime_helper_022b4080(pIVar20 + 3,pIVar16);
          *(undefined4 *)&pIVar20[2].monitor = *(undefined4 *)(puVar28 + -0x1c);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)unaff_R15,(System_Collections_IEnumerator_o *)pIVar20,
                     (MethodInfo *)0x0);
          return;
        }
      }
      goto label_044bb384;
    }
  }
  *(undefined8 *)(puVar28 + -0x30) = 0x44bb391;
  uVar17 = il2cpp_runtime_helper_022b2fd0(pIVar16);
  *(Il2CppClass **)(puVar28 + -0x30) = pIVar16;
  *(long **)(puVar28 + -0x38) = plVar18;
  *(undefined8 *)(puVar28 + -0x40) = uVar17;
  if (g_data_057aea65 == '\0') {
    *(undefined8 *)(puVar28 + -0x48) = 0x44bb3b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar28 + -0x48) = 0x44bb3c5;
    il2cpp_runtime_helper_023445d0(&"Transition");
    g_data_057aea65 = '\x01';
  }
  plVar33 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if ((Il2CppClass *)plVar33 != (Il2CppClass *)0x0) {
    pvVar7 = (((Il2CppClass *)plVar33)->_1).image;
    uVar17 = *(undefined8 *)((long)pvVar7 + 0x1b0);
    pcVar4 = *(code **)((long)pvVar7 + 0x1a8);
    *(undefined8 *)(puVar28 + -0x48) = 0x44bb400;
    pIVar26 = "Transition";
    plVar18 = (long *)(*pcVar4)(plVar33,"Transition",uVar17);
    if ((**(long **)(TypeInfo_MusicManager + 0xb8) == 0) ||
       (*(undefined2 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x68) = 0x101,
       (SimpleJSONFixed_JSONNode_o *)plVar18 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_044bb462;
    pMVar29 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._11_get_Count.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar18)->klass->vtable)._11_get_Count.methodPtr;
    *(undefined8 *)(puVar28 + -0x48) = 0x44bb433;
    iVar12 = (*pIVar5)(plVar18,pMVar29);
    *(undefined8 *)(puVar28 + -0x48) = 0x44bb43e;
    uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
    in_RCX = ((SimpleJSONFixed_JSONNode_o *)plVar18)->klass;
    pMVar29 = (in_RCX->vtable)._5_get_Item.method;
    pIVar5 = (in_RCX->vtable)._5_get_Item.methodPtr;
    *(undefined8 *)(puVar28 + -0x48) = 0x44bb453;
    songInfo = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(plVar18,(ulong)uVar13,pMVar29);
    unaff_RBX = *(undefined8 *)(puVar28 + -0x38);
    unaff_R14 = *(Il2CppClass **)(puVar28 + -0x30);
    goto code_r0x044bab90;
  }
label_044bb462:
  *(undefined8 *)(puVar28 + -0x48) = 0x44bb467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar28 + -0x48) = unaff_RBP;
  *(long **)(puVar28 + -0x50) = unaff_R15;
  *(long **)(puVar28 + -0x58) = &TypeInfo_MusicManager;
  *(long **)(puVar28 + -0x60) = unaff_R12;
  *(long **)(puVar28 + -0x68) = plVar18;
  pIVar16 = (Il2CppClass *)((ulong)pIVar26 & 0xffffffff);
  plVar19 = plVar33;
  if (g_data_057aea67 == '\0') {
    *(undefined8 *)(puVar28 + -0x70) = 0x44bb493;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    plVar19 = &TypeInfo_MusicPlaylist;
    *(undefined8 *)(puVar28 + -0x70) = 0x44bb49f;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea67 = '\x01';
  }
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    pSVar15 = *(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    *(undefined8 *)(puVar28 + -0x70) = 0x44bb4d1;
    pIVar26 = (Il2CppClass *)plVar33;
    uVar13 = System_String__op_Inequality(pSVar15,(System_String_o *)plVar33,(MethodInfo *)0x0);
    unaff_R12 = (long *)(ulong)uVar13;
    lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
    plVar19 = (long *)0x0;
    if (lVar21 != 0) {
      *(long **)(lVar21 + 0x20) = plVar33;
      plVar19 = (long *)(lVar21 + 0x20);
      *(undefined8 *)(puVar28 + -0x70) = 0x44bb4fa;
      pIVar26 = (Il2CppClass *)plVar33;
      il2cpp_runtime_helper_022b4080();
      lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
      if (lVar21 != 0) {
        cVar10 = *(char *)(lVar21 + 0x68);
        in_RCX = (SimpleJSONFixed_JSONNode_c *)CONCAT71((int7)((ulong)in_RCX >> 8),cVar10);
        if (*(char *)(lVar21 + 0x60) == '\0') {
          if (cVar10 != '\0') goto label_044bb52e;
          if (0.0 < *(float *)(lVar21 + 100)) {
            *(undefined4 *)(lVar21 + 0x40) = 0;
          }
label_044bb578:
          *(undefined4 *)(lVar21 + 100) = 0;
        }
        else {
          *(undefined4 *)(lVar21 + 0x40) = 0;
          if (cVar10 == '\0') goto label_044bb578;
label_044bb52e:
          plVar18 = &TypeInfo_MusicPlaylist;
          if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
            *(undefined8 *)(puVar28 + -0x70) = 0x44bb546;
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar26 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
          *(undefined8 *)(puVar28 + -0x70) = 0x44bb55e;
          plVar19 = plVar33;
          bVar11 = System_String__op_Equality
                             ((System_String_o *)plVar33,(System_String_o *)pIVar26,(MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
            if (lVar21 == 0) goto label_044bb684;
            goto label_044bb578;
          }
        }
        plVar18 = &TypeInfo_MusicPlaylist;
        if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
          *(undefined8 *)(puVar28 + -0x70) = 0x44bb597;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar26 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
        *(undefined8 *)(puVar28 + -0x70) = 0x44bb5af;
        plVar19 = plVar33;
        bVar11 = System_String__op_Equality
                           ((System_String_o *)plVar33,(System_String_o *)pIVar26,(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') goto label_044bb618;
        lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
        if (lVar21 == 0) goto label_044bb684;
        if (*(char *)(lVar21 + 0x7c) == '\0') {
label_044bb618:
          lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if (lVar21 == 0) goto label_044bb684;
          bVar31 = (byte)uVar13 | (byte)pIVar16;
          unaff_R12 = (long *)(ulong)CONCAT31((int3)(uVar13 >> 8),bVar31);
          if ((bVar31 == 1) && (*(float *)(lVar21 + 100) <= 0.0)) {
            *(undefined4 *)(lVar21 + 0x4c) = 0;
            *(undefined8 *)(puVar28 + -0x70) = 0x44bb648;
            ApplicationManagers_MusicManager__NextSong((MethodInfo *)plVar19);
          }
        }
        else {
          plVar19 = *(long **)(lVar21 + 0x70);
          pIVar26 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          *(undefined8 *)(puVar28 + -0x70) = 0x44bb5f2;
          bVar11 = System_String__op_Inequality
                             ((System_String_o *)plVar19,(System_String_o *)pIVar26,(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') goto label_044bb618;
          lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if (lVar21 == 0) goto label_044bb684;
          plVar19 = *(long **)(lVar21 + 0x70);
          fVar34 = *(float *)(lVar21 + 0x78);
          *(undefined8 *)(puVar28 + -0x70) = 0x44bb616;
          ApplicationManagers_MusicManager__SetSong((System_String_o *)plVar19,fVar34,(MethodInfo *)pIVar26);
        }
        if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
          *(undefined1 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x7c) = 0;
          return;
        }
      }
    }
  }
label_044bb684:
  *(undefined8 *)(puVar28 + -0x70) = 0x44bb689;
  uVar17 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar28 + -0x70) = plVar33;
  *(long **)(puVar28 + -0x78) = &TypeInfo_MusicManager;
  *(Il2CppClass **)(puVar28 + -0x80) = pIVar16;
  *(undefined8 *)(puVar28 + -0x88) = unaff_R13;
  *(long **)(puVar28 + -0x90) = unaff_R12;
  *(long **)(puVar28 + -0x98) = plVar18;
  *(undefined8 *)(puVar28 + -0xa0) = uVar17;
  *(undefined4 *)(puVar28 + -0x9c) = extraout_XMM0_Da;
  if (g_data_057aea6b == '\0') {
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb6f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb705;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb711;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb71d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb729;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb735;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb741;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb74d;
    il2cpp_runtime_helper_023445d0(&"Playlist");
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb759;
    il2cpp_runtime_helper_023445d0(&"");
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb765;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea6b = '\x01';
  }
  *(undefined8 *)(puVar28 + -0xa8) = 0x44bb774;
  pSVar14 = ApplicationManagers_MusicManager__FindSong((System_String_o *)plVar19,(MethodInfo *)pIVar26);
  lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
  pIVar30 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (lVar21 == 0) goto label_044bbd3d;
  *(undefined1 *)(lVar21 + 0x48) = 0;
  *(MethodInfo **)(lVar21 + 0x58) = "";
  *(undefined8 *)(puVar28 + -0xa8) = 0x44bb7af;
  il2cpp_runtime_helper_022b4080(lVar21 + 0x58);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb7c8;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar16 = (Il2CppClass *)0x0;
  pIVar24 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar28 + -0xa8) = 0x44bb7d7;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar14,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  *(undefined4 *)(puVar28 + -0xa0) = 0;
  if ((char)bVar11 == '\0') goto label_044bbc73;
  pIVar26 = pIVar24;
  if (pSVar14 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bbd3d:
    pIVar23 = pIVar30;
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bbd42;
    il2cpp_runtime_helper_022b2c90();
    pIVar30 = pIVar16;
    pIVar24 = pIVar23;
  }
  else {
    plVar33 = &"Name";
    pMVar29 = (pSVar14->klass->vtable)._28_HasKey.method;
    pIVar5 = (pSVar14->klass->vtable)._28_HasKey.methodPtr;
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb80f;
    cVar10 = (*pIVar5)(pSVar14,"Name",pMVar29);
    if (cVar10 == '\0') {
      pIVar16 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
      pMVar29 = (pSVar14->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar14->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bbab7;
      plVar19 = (long *)(*pIVar5)(pSVar14,"Playlist",pMVar29);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bbacc;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar26 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bbad6;
      pIVar24 = (Il2CppClass *)
                SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                          ((SimpleJSONFixed_JSONNode_o *)plVar19,(MethodInfo *)0x0);
      if (pIVar16 != (Il2CppClass *)0x0) {
        pGVar8 = (pIVar16->_1).image;
        pMVar29 = (pGVar8->vtable)._7_unknown.method;
        pIVar5 = (pGVar8->vtable)._7_unknown.methodPtr;
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bbaf5;
        pIVar23 = (Il2CppClass *)(*pIVar5)(pIVar16,pIVar24,pMVar29);
        pIVar26 = pIVar24;
        if (pIVar23 != (Il2CppClass *)0x0) {
          pUVar27 = (pIVar23->_1).image;
          pIVar26 = pUVar27[1]._1.klass;
          pcVar4 = pUVar27[1]._1.interopData;
          *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb14;
          iVar12 = (*pcVar4)(pIVar23,pIVar26);
          *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb1f;
          uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
          pUVar27 = (pIVar23->_1).image;
          pcVar3 = pUVar27[1]._1.namespaze;
          pIVar26 = (Il2CppClass *)(ulong)uVar13;
          pcVar4 = (code *)pUVar27[1]._1.name;
          *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb34;
          plVar18 = (long *)(*pcVar4)(pIVar23,pIVar26,pcVar3);
          plVar19 = (long *)pIVar23;
          if (plVar18 != (long *)0x0) {
            uVar17 = *(undefined8 *)(*plVar18 + 0x1b0);
            pcVar4 = *(code **)(*plVar18 + 0x1a8);
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb57;
            pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pcVar4)(plVar18,"Name",uVar17);
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb61;
            plVar19 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb7c;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbb90;
            pIVar23 = (Il2CppClass *)
                      ApplicationManagers_ResourceManager__LoadAsset
                                ("Music",(System_String_o *)plVar19,0,(MethodInfo *)pUVar27);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbbab;
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar30 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbbba;
            bVar11 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pIVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            pIVar16 = pIVar30;
            if ((((char)bVar11 != '\0') && (pIVar16 = pIVar23, pIVar23 != (Il2CppClass *)0x0)) &&
               (pIVar26 = TypeInfo_AudioClip, pIVar24 = pIVar23, (pIVar23->_1).image != TypeInfo_AudioClip))
            goto label_044bbd45;
            uVar17 = *(undefined8 *)(*plVar18 + 0x1b0);
            pcVar4 = *(code **)(*plVar18 + 0x1a8);
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbbf7;
            pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pcVar4)(plVar18,"Volume",uVar17);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc0c;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc16;
            fVar34 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar14,(MethodInfo *)0x0);
            *(float *)(puVar28 + -0xa0) = fVar34;
            lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
            uVar17 = *(undefined8 *)(*plVar18 + 0x1b0);
            pcVar4 = *(code **)(*plVar18 + 0x1a8);
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc4d;
            pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pcVar4)(plVar18,"Name",uVar17);
            pIVar26 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc57;
            pIVar24 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
            plVar19 = (long *)0x0;
            pIVar30 = (Il2CppClass *)&TypeInfo_MusicManager;
            if (lVar21 != 0) {
              *(Il2CppClass **)(lVar21 + 0x58) = pIVar24;
              plVar19 = (long *)(lVar21 + 0x58);
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc73;
              il2cpp_runtime_helper_022b4080(plVar19);
              goto label_044bbc73;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
    pMVar29 = (pSVar14->klass->vtable)._7_get_Item.method;
    pIVar5 = (pSVar14->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb82f;
    pSVar22 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar14,"Name",pMVar29);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bb844;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb84e;
    plVar19 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar22,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bb869;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb87d;
    pIVar23 = (Il2CppClass *)
              ApplicationManagers_ResourceManager__LoadAsset
                        ("Music",(System_String_o *)plVar19,0,(MethodInfo *)in_RCX);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bb898;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar28 + -0xa8) = 0x44bb8a7;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pIVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pIVar16 = (Il2CppClass *)0x0;
    if ((((char)bVar11 == '\0') || (pIVar16 = pIVar23, pIVar23 == (Il2CppClass *)0x0)) ||
       (pIVar26 = TypeInfo_AudioClip, pIVar30 = (Il2CppClass *)0x0, pIVar24 = pIVar23,
       (pIVar23->_1).image == TypeInfo_AudioClip)) {
      pMVar29 = (pSVar14->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar14->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bb8e4;
      pSVar22 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar14,"Volume",pMVar29);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb8f9;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bb903;
      fVar34 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar22,(MethodInfo *)0x0);
      *(float *)(puVar28 + -0xa0) = fVar34;
      lVar21 = **(long **)(TypeInfo_MusicManager + 0xb8);
      pMVar29 = (pSVar14->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar14->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bb934;
      pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar14,"Name",pMVar29);
      pIVar26 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar28 + -0xa8) = 0x44bb93e;
      pIVar24 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
      plVar19 = (long *)(Il2CppClass *)0x0;
      pIVar30 = (Il2CppClass *)&TypeInfo_MusicManager;
      if (lVar21 != 0) {
        *(Il2CppClass **)(lVar21 + 0x58) = pIVar24;
        *(undefined8 *)(puVar28 + -0xa8) = 0x44bb95a;
        il2cpp_runtime_helper_022b4080(lVar21 + 0x58);
        plVar33 = &TypeInfo_SceneLoader;
        plVar19 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if ((Il2CppClass *)plVar19 != (Il2CppClass *)0x0) {
          pUVar27 = (((Il2CppClass *)plVar19)->_1).image;
          bVar31 = (TypeInfo_InGameManager->_2).naturalAligment;
          if ((bVar31 <= (pUVar27->_2).naturalAligment) &&
             ((pUVar27->_2).typeHierarchy[(ulong)bVar31 - 1] == TypeInfo_InGameManager)) {
            lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
            pIVar26 = pIVar24;
            pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager;
            if ((lVar21 == 0) ||
               (lVar21 = *(long *)(lVar21 + 0x28), pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager, lVar21 == 0))
            goto label_044bbd3d;
            if (0.0 < *(float *)(lVar21 + 0x14)) {
              lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager;
              if ((lVar21 == 0) ||
                 (lVar21 = *(long *)(lVar21 + 0xd8), pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager, lVar21 == 0))
              goto label_044bbd3d;
              if (*(char *)(lVar21 + 0x11) != '\0') {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  *(undefined8 *)(puVar28 + -0xa8) = 0x44bba25;
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar24 = (Il2CppClass *)0x0;
                *(undefined8 *)(puVar28 + -0xa8) = 0x44bba31;
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)plVar19,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar11 != '\0') {
                  pIVar23 = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
                  pIVar26 = pIVar24;
                  pIVar30 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (pIVar23 == (Il2CppClass *)0x0) goto label_044bbd3d;
                  pGVar8 = (pIVar23->_1).image;
                  bVar31 = (TypeInfo_InGameManager->_2).naturalAligment;
                  pIVar26 = TypeInfo_InGameManager;
                  pIVar30 = pIVar16;
                  pIVar24 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (((pGVar8->_2).naturalAligment < bVar31) ||
                     ((pGVar8->_2).typeHierarchy[(ulong)bVar31 - 1] != TypeInfo_InGameManager)) goto label_044bbd45;
                  pIVar24 = (Il2CppClass *)0x0;
                  *(undefined8 *)(puVar28 + -0xa8) = 0x44bba7f;
                  GameManagers_InGameManager__OnSongChange
                            ((GameManagers_InGameManager_o *)pIVar23,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
label_044bbc73:
        __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
        pIVar26 = pIVar24;
        pIVar30 = (Il2CppClass *)&TypeInfo_MusicManager;
        if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
          pIVar26 = (Il2CppClass *)0x0;
          *(undefined8 *)(puVar28 + -0xa8) = 0x44bbc90;
          UnityEngine_MonoBehaviour__StopAllCoroutines(__this,(MethodInfo *)0x0);
          pIVar30 = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
          if (pIVar30 != (Il2CppClass *)0x0) {
            if (g_data_057aea6f == '\0') {
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbcbb;
              il2cpp_runtime_helper_023445d0(&TypeInfo_FadeNextSong_d__46);
              g_data_057aea6f = '\x01';
            }
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbcd1;
            pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeNextSong_d__46);
            pIVar26 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar28 + -0xa8) = 0x44bbcde;
            System_Object___ctor(pIVar20,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar20[1].klass = 0;
            plVar19 = (long *)(Il2CppClass *)0x0;
            if (pIVar20 != (Il2CppObject *)0x0) {
              pIVar20[2].klass = pIVar30;
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbcfa;
              il2cpp_runtime_helper_022b4080(pIVar20 + 2,pIVar30);
              pIVar20[2].monitor = pIVar16;
              *(undefined8 *)(puVar28 + -0xa8) = 0x44bbd0d;
              il2cpp_runtime_helper_022b4080(&pIVar20[2].monitor,pIVar16);
              *(undefined4 *)((long)&pIVar20[3].klass + 4) = *(undefined4 *)(puVar28 + -0xa0);
              *(undefined4 *)&pIVar20[3].klass = *(undefined4 *)(puVar28 + -0x9c);
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)pIVar30,(System_Collections_IEnumerator_o *)pIVar20,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
  }
label_044bbd45:
  *(undefined8 *)(puVar28 + -0xa8) = 0x44bbd4a;
  il2cpp_runtime_helper_022b2fd0();
  *(long **)(puVar28 + -0xa8) = plVar19;
  if (g_data_057aea6d == '\0') {
    *(undefined8 *)(puVar28 + -0xb0) = 0x44bbd66;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar28 + -0xb0) = 0x44bbd72;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar28 + -0xb0) = 0x44bbd7e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    *(undefined8 *)(puVar28 + -0xb0) = 0x44bbd8a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar28 + -0xb0) = 0x44bbd96;
    il2cpp_runtime_helper_023445d0(&"Custom");
    pIVar23 = (Il2CppClass *)&"Name";
    *(undefined8 *)(puVar28 + -0xb0) = 0x44bbda2;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea6d = '\x01';
  }
  pIVar16 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    pIVar23 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    pIVar26 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)(puVar28 + -0xb0) = 0x44bbde9;
    bVar11 = System_String__op_Equality
                       ((System_String_o *)pIVar23,(System_String_o *)pIVar26,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return;
    }
    if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
      pIVar23 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
      *(undefined8 *)(puVar28 + -0xb0) = 0x44bbe1a;
      pIVar26 = "Custom";
      bVar11 = System_String__op_Equality
                         ((System_String_o *)pIVar23,(System_String_o *)"Custom",(MethodInfo *)0x0);
      plVar18 = *(long **)(TypeInfo_MusicManager + 0xb8);
      if ((char)bVar11 == '\0') {
        if ((*plVar18 != 0) && (pIVar23 = (Il2CppClass *)plVar18[1], pIVar23 != (Il2CppClass *)0x0)) {
          pIVar26 = *(Il2CppClass **)(*plVar18 + 0x20);
          pGVar8 = (pIVar23->_1).image;
          pMVar29 = (pGVar8->vtable)._7_unknown.method;
          pIVar5 = (pGVar8->vtable)._7_unknown.methodPtr;
          *(undefined8 *)(puVar28 + -0xb0) = 0x44bbea0;
          pIVar25 = (Il2CppClass *)(*pIVar5)(pIVar23,pIVar26,pMVar29);
          if (pIVar25 != (Il2CppClass *)0x0) {
            pGVar8 = (pIVar25->_1).image;
            pMVar29 = (pGVar8->vtable)._11_unknown.method;
            pIVar5 = (pGVar8->vtable)._11_unknown.methodPtr;
            *(undefined8 *)(puVar28 + -0xb0) = 0x44bbebf;
            iVar12 = (*pIVar5)(pIVar25,pMVar29);
            *(undefined8 *)(puVar28 + -0xb0) = 0x44bbeca;
            uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
            pGVar8 = (pIVar25->_1).image;
            pMVar29 = (pGVar8->vtable)._5_unknown.method;
            pIVar26 = (Il2CppClass *)(ulong)uVar13;
            pIVar5 = (pGVar8->vtable)._5_unknown.methodPtr;
            *(undefined8 *)(puVar28 + -0xb0) = 0x44bbedf;
            pIVar23 = pIVar25;
            plVar18 = (long *)(*pIVar5)(pIVar25,pIVar26,pMVar29);
            pIVar16 = pIVar25;
            if (plVar18 != (long *)0x0) {
              uVar17 = *(undefined8 *)(*plVar18 + 0x1b0);
              pcVar4 = *(code **)(*plVar18 + 0x1a8);
              *(undefined8 *)(puVar28 + -0xb0) = 0x44bbf01;
              pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pcVar4)(plVar18,"Name",uVar17);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                *(undefined8 *)(puVar28 + -0xb0) = 0x44bbf1c;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar29 = (MethodInfo *)0x0;
              *(undefined8 *)(puVar28 + -0xb0) = 0x44bbf26;
              pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar14,(MethodInfo *)0x0);
              ApplicationManagers_MusicManager__SetSong(pSVar15,0.0,pMVar29);
              return;
            }
          }
        }
      }
      else {
        lVar21 = *plVar18;
        if (lVar21 != 0) {
          __this_00 = *(System_Collections_Generic_List_object__o **)(lVar21 + 0x50);
          pIVar23 = (Il2CppClass *)0x0;
          if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
            iVar1 = (__this_00->fields)._size;
            if (iVar1 == 0) {
              return;
            }
            uVar13 = *(int *)(lVar21 + 0x4c) + 1;
            pMVar29 = (MethodInfo *)0x0;
            if ((int)uVar13 < iVar1) {
              pMVar29 = (MethodInfo *)(ulong)uVar13;
            }
            *(int32_t *)(lVar21 + 0x4c) = (int32_t)pMVar29;
            *(undefined8 *)(puVar28 + -0xb0) = 0x44bbe67;
            pSVar15 = (System_String_o *)
                      System_Collections_Generic_List_object___get_Item
                                (__this_00,(int32_t)pMVar29,MethodInfo_String_get_Item);
            ApplicationManagers_MusicManager__SetSong(pSVar15,0.0,pMVar29);
            return;
          }
        }
      }
    }
  }
  *(undefined8 *)(puVar28 + -0xb0) = 0x44bbf37;
  auVar36 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar28 + -0xb0) = plVar33;
  *(Il2CppClass **)(puVar28 + -0xb8) = pIVar24;
  *(Il2CppClass **)(puVar28 + -0xc0) = pIVar30;
  *(Il2CppClass **)(puVar28 + -200) = pIVar16;
  *(long *)(puVar28 + -0xd0) = auVar36._0_8_;
  uVar32 = auVar36._8_8_ & 0xffffffff;
  if (g_data_057aea83 == '\0') {
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbf65;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbf71;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbf7d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbf89;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbf95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbfa1;
    il2cpp_runtime_helper_023445d0(&"/");
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbfad;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea83 = '\x01';
  }
  *(undefined8 *)(puVar28 + -0xd8) = 0x44bbfc8;
  pMVar29 = "";
  bVar11 = System_String__op_Inequality
                     ((System_String_o *)pIVar23,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbfe3;
    pMVar29 = "/";
    pIVar26 = (Il2CppClass *)
              System_String__Concat_3af7150
                        ((System_String_o *)pIVar23,(System_String_o *)"/",(System_String_o *)pIVar26
                         ,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bbffe;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar28 + -0xd8) = 0x44bc006;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              ApplicationManagers_ResourceManager__GetExternalTexture((System_String_o *)pIVar26,pMVar29);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bc021;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar16 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar28 + -0xd8) = 0x44bc02d;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  cVar10 = (char)uVar32;
  if ((char)bVar11 != '\0') {
    if (cVar10 != '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bc04b;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar30 = (Il2CppClass *)0x0;
      if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      *(undefined8 *)(puVar28 + -0xd8) = 0x44bc073;
      pIVar16 = pIVar26;
      bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         (pSVar9,(Il2CppObject *)pIVar26,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar11 == '\0') {
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          *(undefined8 *)(puVar28 + -0xd8) = 0x44bc088;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
        pIVar30 = (Il2CppClass *)0x0;
        if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bc0b3;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar9,(Il2CppObject *)pIVar26,(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
      }
    }
    return;
  }
  if (cVar10 == '\0') {
    UnityEngine_Resources__Load((System_String_o *)pIVar26,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bc0db;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
  pIVar30 = (Il2CppClass *)0x0;
  if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    *(undefined8 *)(puVar28 + -0xd8) = 0x44bc103;
    pIVar16 = pIVar26;
    bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar9,(Il2CppObject *)pIVar26,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 == '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)(puVar28 + -0xd8) = 0x44bc118;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar16 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar28 + -0xd8) = 0x44bc12f;
      pIVar30 = pIVar26;
      value = UnityEngine_Resources__Load((System_String_o *)pIVar26,(MethodInfo *)0x0);
      if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      *(undefined8 *)(puVar28 + -0xd8) = 0x44bc14c;
      pIVar16 = pIVar26;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_01,(Il2CppObject *)pIVar26,(Il2CppObject *)value,MethodInfo_Void_set_Item);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar28 + -0xd8) = 0x44bc15d;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar30 = (Il2CppClass *)0x0;
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)pIVar26,MethodInfo_Object_get_Item);
      return;
    }
  }
label_044bc19f:
  *(undefined8 *)(puVar28 + -0xd8) = 0x44bc1a4;
  uVar35 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar28 + -0xd8) = &TypeInfo_ResourceManager;
  *(ulong *)(puVar28 + -0xe0) = uVar32;
  *(Il2CppClass **)(puVar28 + -0xe8) = pIVar26;
  *(undefined4 *)(puVar28 + -0xec) = uVar35;
  if (g_data_057aea6a == '\0') {
    *(undefined8 *)(puVar28 + -0x100) = 0x44bc1da;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
    g_data_057aea6a = '\x01';
  }
  *(undefined8 *)(puVar28 + -0x100) = 0x44bc1f0;
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
  uVar35 = 0;
  *(undefined8 *)(puVar28 + -0x100) = 0x44bc1fd;
  pIVar20 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = pIVar30;
    *(undefined8 *)(puVar28 + -0x100) = 0x44bc219;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar30);
    __this_02[3].klass = pIVar16;
    *(undefined8 *)(puVar28 + -0x100) = 0x44bc22c;
    il2cpp_runtime_helper_022b4080(__this_02 + 3,pIVar16);
    *(undefined4 *)&__this_02[2].monitor = *(undefined4 *)(puVar28 + -0xec);
    return;
  }
  *(undefined8 *)(puVar28 + -0x100) = 0x44bc249;
  uVar17 = il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_Dictionary_object__object__o **)(puVar28 + -0x100) = __this_01;
  *(undefined8 *)(puVar28 + -0x108) = 0;
  *(undefined8 *)(puVar28 + -0x110) = uVar17;
  *(undefined8 *)(puVar28 + -0x118) = 0x44bc25f;
  System_Object___ctor(pIVar20,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar20[1].klass = uVar35;
  return;
}


// ApplicationManagers.MusicManager$$StartSoundEffect
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_MusicManager__StartSoundEffect (ApplicationManagers_MusicManager_o* __this, UnityEngine_AudioClip_o* clip, float volume, const MethodInfo* method);
// 0x44bc1b0

System_Collections_IEnumerator_o *
ApplicationManagers_MusicManager__StartSoundEffect
          (ApplicationManagers_MusicManager_o *__this,UnityEngine_AudioClip_o *clip,float volume,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057aea6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
    g_data_057aea6a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    __this_00[3].klass = (Il2CppClass *)clip;
    il2cpp_runtime_helper_022b4080(__this_00 + 3,clip);
    *(float *)&__this_00[2].monitor = volume;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// ApplicationManagers.MusicManager$$SetSong
// il2cpp: void ApplicationManagers_MusicManager__SetSong (System_String_o* song, float startTime, const MethodInfo* method);
// 0x44bb690

void ApplicationManagers_MusicManager__SetSong(System_String_o *song,float startTime,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  GameManagers_InGameManager_c *pGVar4;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  char cVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_String_o *pSVar10;
  Il2CppClass *__this_01;
  Il2CppClass *pIVar11;
  Il2CppClass *pIVar12;
  Il2CppObject *pIVar13;
  Il2CppClass *pIVar14;
  long *plVar15;
  UnityEngine_Texture2D_o *x;
  UnityEngine_Object_o *pUVar16;
  Il2CppObject *__this_02;
  MethodInfo *in_RCX;
  MethodInfo *pMVar17;
  char extraout_DL;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float local_38;
  
  if (g_data_057aea6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Music");
    il2cpp_runtime_helper_023445d0(&"Playlist");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea6b = '\x01';
  }
  pSVar8 = ApplicationManagers_MusicManager__FindSong(song,method);
  lVar3 = **(long **)(TypeInfo_MusicManager + 0xb8);
  pIVar14 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (lVar3 == 0) goto label_044bbd3d;
  *(undefined1 *)(lVar3 + 0x48) = 0;
  *(MethodInfo **)(lVar3 + 0x58) = "";
  il2cpp_runtime_helper_022b4080(lVar3 + 0x58);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar12 = (Il2CppClass *)0x0;
  pIVar11 = (Il2CppClass *)0x0;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  local_38 = 0.0;
  if ((char)bVar6 == '\0') goto label_044bbc73;
  method = (MethodInfo *)pIVar11;
  if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bbd3d:
    __this_01 = pIVar14;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    cVar5 = (*(pSVar8->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar8,"Name",(pSVar8->klass->vtable)._28_HasKey.method);
    if (cVar5 == '\0') {
      plVar15 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
      pSVar8 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar8,"Playlist",(pSVar8->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method = (MethodInfo *)0x0;
      pIVar12 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar8,(MethodInfo *)0x0);
      if ((plVar15 != (long *)0x0) &&
         (plVar15 = (long *)(**(code **)(*plVar15 + 0x1a8))(plVar15,pIVar12,*(undefined8 *)(*plVar15 + 0x1b0))
         , method = (MethodInfo *)pIVar12, plVar15 != (long *)0x0)) {
        iVar7 = (**(code **)(*plVar15 + 0x1e8))(plVar15,*(undefined8 *)(*plVar15 + 0x1f0));
        uVar18 = UnityEngine_Random__Range_4df2410(0,iVar7,(MethodInfo *)0x0);
        pMVar17 = (MethodInfo *)*plVar15;
        method = (MethodInfo *)(ulong)uVar18;
        plVar15 = (long *)(*(code *)pMVar17[4].return_type)(plVar15,method,pMVar17[4].parameters);
        if (plVar15 != (long *)0x0) {
          pSVar8 = (SimpleJSONFixed_JSONNode_o *)
                   (**(code **)(*plVar15 + 0x1a8))(plVar15,"Name",*(undefined8 *)(*plVar15 + 0x1b0));
          pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar8,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_01 = (Il2CppClass *)
                      ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar10,0,pMVar17);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          pIVar12 = (Il2CppClass *)0x0;
          if ((((char)bVar6 != '\0') && (pIVar12 = __this_01, __this_01 != (Il2CppClass *)0x0)) &&
             (method = (MethodInfo *)TypeInfo_AudioClip, (__this_01->_1).image != TypeInfo_AudioClip)) goto label_044bbd45;
          pSVar8 = (SimpleJSONFixed_JSONNode_o *)
                   (**(code **)(*plVar15 + 0x1a8))(plVar15,"Volume",*(undefined8 *)(*plVar15 + 0x1b0));
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          local_38 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar8,(MethodInfo *)0x0);
          lVar3 = **(long **)(TypeInfo_MusicManager + 0xb8);
          pSVar8 = (SimpleJSONFixed_JSONNode_o *)
                   (**(code **)(*plVar15 + 0x1a8))(plVar15,"Name",*(undefined8 *)(*plVar15 + 0x1b0));
          method = (MethodInfo *)0x0;
          pIVar11 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar8,(MethodInfo *)0x0);
          pIVar14 = (Il2CppClass *)&TypeInfo_MusicManager;
          if (lVar3 != 0) {
            *(Il2CppClass **)(lVar3 + 0x58) = pIVar11;
            il2cpp_runtime_helper_022b4080(lVar3 + 0x58);
            goto label_044bbc73;
          }
        }
      }
      goto label_044bbd3d;
    }
    pSVar9 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar9,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = (Il2CppClass *)ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar10,0,in_RCX);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pIVar12 = (Il2CppClass *)0x0;
    if ((((char)bVar6 == '\0') || (pIVar12 = __this_01, __this_01 == (Il2CppClass *)0x0)) ||
       (method = (MethodInfo *)TypeInfo_AudioClip, (__this_01->_1).image == TypeInfo_AudioClip)) {
      pSVar9 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar8,"Volume",(pSVar8->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      local_38 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar9,(MethodInfo *)0x0);
      lVar3 = **(long **)(TypeInfo_MusicManager + 0xb8);
      pSVar8 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
      method = (MethodInfo *)0x0;
      pIVar11 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar8,(MethodInfo *)0x0);
      pIVar14 = (Il2CppClass *)&TypeInfo_MusicManager;
      if (lVar3 != 0) {
        *(Il2CppClass **)(lVar3 + 0x58) = pIVar11;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x58);
        pUVar16 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (pUVar16 != (UnityEngine_Object_o *)0x0) {
          bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
          if ((bVar1 <= (pUVar16->klass->_2).naturalAligment) &&
             ((pUVar16->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
            lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
            method = (MethodInfo *)pIVar11;
            pIVar14 = (Il2CppClass *)&TypeInfo_InGameManager;
            if ((lVar3 == 0) ||
               (lVar3 = *(long *)(lVar3 + 0x28), pIVar14 = (Il2CppClass *)&TypeInfo_InGameManager, lVar3 == 0))
            goto label_044bbd3d;
            if (0.0 < *(float *)(lVar3 + 0x14)) {
              lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              pIVar14 = (Il2CppClass *)&TypeInfo_InGameManager;
              if ((lVar3 == 0) ||
                 (lVar3 = *(long *)(lVar3 + 0xd8), pIVar14 = (Il2CppClass *)&TypeInfo_InGameManager, lVar3 == 0))
              goto label_044bbd3d;
              if (*(char *)(lVar3 + 0x11) != '\0') {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar11 = (Il2CppClass *)0x0;
                bVar6 = UnityEngine_Object__op_Inequality
                                  (pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar6 != '\0') {
                  __this_01 = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
                  method = (MethodInfo *)pIVar11;
                  pIVar14 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (__this_01 == (Il2CppClass *)0x0) goto label_044bbd3d;
                  pGVar4 = (__this_01->_1).image;
                  bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
                  method = (MethodInfo *)TypeInfo_InGameManager;
                  if (((pGVar4->_2).naturalAligment < bVar1) ||
                     ((pGVar4->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager)) goto label_044bbd45;
                  pIVar11 = (Il2CppClass *)0x0;
                  GameManagers_InGameManager__OnSongChange
                            ((GameManagers_InGameManager_o *)__this_01,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
label_044bbc73:
        method = (MethodInfo *)pIVar11;
        pIVar14 = (Il2CppClass *)&TypeInfo_MusicManager;
        if ((UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8) !=
            (UnityEngine_MonoBehaviour_o *)0x0) {
          method = (MethodInfo *)0x0;
          UnityEngine_MonoBehaviour__StopAllCoroutines
                    ((UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8),(MethodInfo *)0x0);
          pIVar14 = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
          if (pIVar14 != (Il2CppClass *)0x0) {
            if (g_data_057aea6f == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_FadeNextSong_d__46);
              g_data_057aea6f = '\x01';
            }
            pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeNextSong_d__46);
            method = (MethodInfo *)0x0;
            System_Object___ctor(pIVar13,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar13[1].klass = 0;
            if (pIVar13 != (Il2CppObject *)0x0) {
              pIVar13[2].klass = pIVar14;
              il2cpp_runtime_helper_022b4080(pIVar13 + 2,pIVar14);
              pIVar13[2].monitor = pIVar12;
              il2cpp_runtime_helper_022b4080(&pIVar13[2].monitor,pIVar12);
              *(float *)((long)&pIVar13[3].klass + 4) = local_38;
              *(float *)&pIVar13[3].klass = startTime;
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)pIVar14,(System_Collections_IEnumerator_o *)pIVar13,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
  }
label_044bbd45:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057aea6d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0(&"Custom");
    __this_01 = (Il2CppClass *)&"Name";
    il2cpp_runtime_helper_023445d0();
    g_data_057aea6d = '\x01';
  }
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    __this_01 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    method = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    bVar6 = System_String__op_Equality
                      ((System_String_o *)__this_01,(System_String_o *)method,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
      __this_01 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
      method = (MethodInfo *)"Custom";
      bVar6 = System_String__op_Equality
                        ((System_String_o *)__this_01,(System_String_o *)"Custom",(MethodInfo *)0x0);
      plVar15 = *(long **)(TypeInfo_MusicManager + 0xb8);
      if ((char)bVar6 == '\0') {
        if ((*plVar15 != 0) && (__this_01 = (Il2CppClass *)plVar15[1], __this_01 != (Il2CppClass *)0x0)) {
          method = *(MethodInfo **)(*plVar15 + 0x20);
          pGVar4 = (__this_01->_1).image;
          pIVar14 = (Il2CppClass *)
                    (*(pGVar4->vtable)._7_unknown.methodPtr)
                              (__this_01,method,(pGVar4->vtable)._7_unknown.method);
          if (pIVar14 != (Il2CppClass *)0x0) {
            pGVar4 = (pIVar14->_1).image;
            iVar7 = (*(pGVar4->vtable)._11_unknown.methodPtr)(pIVar14,(pGVar4->vtable)._11_unknown.method);
            uVar18 = UnityEngine_Random__Range_4df2410(0,iVar7,(MethodInfo *)0x0);
            pGVar4 = (pIVar14->_1).image;
            method = (MethodInfo *)(ulong)uVar18;
            plVar15 = (long *)(*(pGVar4->vtable)._5_unknown.methodPtr)
                                        (pIVar14,method,(pGVar4->vtable)._5_unknown.method);
            __this_01 = pIVar14;
            if (plVar15 != (long *)0x0) {
              pSVar8 = (SimpleJSONFixed_JSONNode_o *)
                       (**(code **)(*plVar15 + 0x1a8))(plVar15,"Name",*(undefined8 *)(*plVar15 + 0x1b0))
              ;
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar17 = (MethodInfo *)0x0;
              pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar8,(MethodInfo *)0x0);
              ApplicationManagers_MusicManager__SetSong(pSVar10,0.0,pMVar17);
              return;
            }
          }
        }
      }
      else {
        lVar3 = *plVar15;
        if (lVar3 != 0) {
          __this = *(System_Collections_Generic_List_object__o **)(lVar3 + 0x50);
          __this_01 = (Il2CppClass *)0x0;
          if (__this != (System_Collections_Generic_List_object__o *)0x0) {
            iVar2 = (__this->fields)._size;
            if (iVar2 == 0) {
              return;
            }
            uVar18 = *(int *)(lVar3 + 0x4c) + 1;
            pMVar17 = (MethodInfo *)0x0;
            if ((int)uVar18 < iVar2) {
              pMVar17 = (MethodInfo *)(ulong)uVar18;
            }
            *(int32_t *)(lVar3 + 0x4c) = (int32_t)pMVar17;
            pSVar10 = (System_String_o *)
                      System_Collections_Generic_List_object___get_Item(__this,(int32_t)pMVar17,MethodInfo_String_get_Item);
            ApplicationManagers_MusicManager__SetSong(pSVar10,0.0,pMVar17);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea83 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea83 = '\x01';
  }
  pMVar17 = "";
  bVar6 = System_String__op_Inequality
                    ((System_String_o *)__this_01,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pMVar17 = "/";
    method = (MethodInfo *)
             System_String__Concat_3af7150
                       ((System_String_o *)__this_01,(System_String_o *)"/",(System_String_o *)method
                        ,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = ApplicationManagers_ResourceManager__GetExternalTexture((System_String_o *)method,pMVar17);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar14 = (Il2CppClass *)0x0;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if (extraout_DL != '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar12 = (Il2CppClass *)0x0;
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      pIVar14 = (Il2CppClass *)method;
      bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)
                         **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)method,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar6 == '\0') {
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar12 = (Il2CppClass *)0x0;
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8)
            == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)
                   **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)method,(Il2CppObject *)x,
                   MethodInfo_Void_set_Item);
      }
    }
    return;
  }
  if (extraout_DL == '\0') {
    UnityEngine_Resources__Load((System_String_o *)method,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar12 = (Il2CppClass *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar14 = (Il2CppClass *)method;
    bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)method,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar6 == '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar14 = (Il2CppClass *)0x0;
      pIVar12 = (Il2CppClass *)method;
      pUVar16 = UnityEngine_Resources__Load((System_String_o *)method,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      pIVar14 = (Il2CppClass *)method;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_00,(Il2CppObject *)method,(Il2CppObject *)pUVar16,MethodInfo_Void_set_Item);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar12 = (Il2CppClass *)0x0;
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)method,MethodInfo_Object_get_Item);
      return;
    }
  }
label_044bc19f:
  uVar20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
    g_data_057aea6a = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
  uVar19 = 0;
  pIVar13 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = pIVar12;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar12);
    __this_02[3].klass = pIVar14;
    il2cpp_runtime_helper_022b4080(__this_02 + 3,pIVar14);
    *(undefined4 *)&__this_02[2].monitor = uVar20;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar13,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar13[1].klass = uVar19;
  return;
}


// ApplicationManagers.MusicManager$$ChatNextSong
// il2cpp: void ApplicationManagers_MusicManager__ChatNextSong (const MethodInfo* method);
// 0x44bc650

void ApplicationManagers_MusicManager__ChatNextSong(MethodInfo *method)

{
  long lVar1;
  undefined4 in_ESI;
  
  if (g_data_057aea6c == '\0') {
    method = (MethodInfo *)&TypeInfo_MusicManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea6c = '\x01';
  }
  lVar1 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x40) = 0;
    *(undefined4 *)(lVar1 + 100) = 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)method,(MethodInfo *)0x0);
  *(undefined4 *)&method->invoker_method = in_ESI;
  return;
}


// ApplicationManagers.MusicManager$$NextSong
// il2cpp: void ApplicationManagers_MusicManager__NextSong (const MethodInfo* method);
// 0x44bbd50

void ApplicationManagers_MusicManager__NextSong(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar3;
  int32_t maxExclusive;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  long *plVar6;
  SimpleJSONFixed_JSONNode_o *d;
  UnityEngine_Texture2D_o *x;
  UnityEngine_Object_o *value;
  Il2CppObject *__this_01;
  char extraout_DL;
  uint uVar7;
  undefined4 uVar8;
  Il2CppClass *in_RSI;
  Il2CppClass *pIVar9;
  Il2CppClass *pIVar10;
  Il2CppObject *__this_02;
  undefined4 uVar11;
  
  if (g_data_057aea6d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0(&"Custom");
    method = (MethodInfo *)&"Name";
    il2cpp_runtime_helper_023445d0();
    g_data_057aea6d = '\x01';
  }
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    method = *(MethodInfo **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    in_RSI = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    bVar3 = System_String__op_Equality((System_String_o *)method,(System_String_o *)in_RSI,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
      method = *(MethodInfo **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
      in_RSI = "Custom";
      bVar3 = System_String__op_Equality
                        ((System_String_o *)method,(System_String_o *)"Custom",(MethodInfo *)0x0);
      plVar6 = *(long **)(TypeInfo_MusicManager + 0xb8);
      if ((char)bVar3 == '\0') {
        if ((*plVar6 != 0) && (method = (MethodInfo *)plVar6[1], method != (MethodInfo *)0x0)) {
          in_RSI = *(Il2CppClass **)(*plVar6 + 0x20);
          pMVar5 = (MethodInfo *)
                   (*(((System_String_c *)method->methodPointer)->vtable)._7_CompareTo.methodPtr)
                             (method,in_RSI,
                              (((System_String_c *)method->methodPointer)->vtable)._7_CompareTo.method);
          if (pMVar5 != (MethodInfo *)0x0) {
            maxExclusive = (*(((System_String_c *)pMVar5->methodPointer)->vtable).
                             _11_System_IConvertible_ToChar.methodPtr)
                                     (pMVar5,(((System_String_c *)pMVar5->methodPointer)->vtable).
                                             _11_System_IConvertible_ToChar.method);
            uVar7 = UnityEngine_Random__Range_4df2410(0,maxExclusive,(MethodInfo *)0x0);
            in_RSI = (Il2CppClass *)(ulong)uVar7;
            plVar6 = (long *)(*(((System_String_c *)pMVar5->methodPointer)->vtable).
                               _5_System_Collections_IEnumerable_GetEnumerator.methodPtr)
                                       (pMVar5,in_RSI,
                                        (((System_String_c *)pMVar5->methodPointer)->vtable).
                                        _5_System_Collections_IEnumerable_GetEnumerator.method);
            method = pMVar5;
            if (plVar6 != (long *)0x0) {
              d = (SimpleJSONFixed_JSONNode_o *)
                  (**(code **)(*plVar6 + 0x1a8))(plVar6,"Name",*(undefined8 *)(*plVar6 + 0x1b0));
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar5 = (MethodInfo *)0x0;
              pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(d,(MethodInfo *)0x0);
              ApplicationManagers_MusicManager__SetSong(pSVar4,0.0,pMVar5);
              return;
            }
          }
        }
      }
      else {
        lVar2 = *plVar6;
        if (lVar2 != 0) {
          __this = *(System_Collections_Generic_List_object__o **)(lVar2 + 0x50);
          method = (MethodInfo *)0x0;
          if (__this != (System_Collections_Generic_List_object__o *)0x0) {
            iVar1 = (__this->fields)._size;
            if (iVar1 == 0) {
              return;
            }
            uVar7 = *(int *)(lVar2 + 0x4c) + 1;
            pMVar5 = (MethodInfo *)0x0;
            if ((int)uVar7 < iVar1) {
              pMVar5 = (MethodInfo *)(ulong)uVar7;
            }
            *(int32_t *)(lVar2 + 0x4c) = (int32_t)pMVar5;
            pSVar4 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item(__this,(int32_t)pMVar5,MethodInfo_String_get_Item);
            ApplicationManagers_MusicManager__SetSong(pSVar4,0.0,pMVar5);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea83 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea83 = '\x01';
  }
  pMVar5 = "";
  bVar3 = System_String__op_Inequality
                    ((System_String_o *)method,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pMVar5 = "/";
    in_RSI = (Il2CppClass *)
             System_String__Concat_3af7150
                       ((System_String_o *)method,(System_String_o *)"/",(System_String_o *)in_RSI,
                        (MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = ApplicationManagers_ResourceManager__GetExternalTexture((System_String_o *)in_RSI,pMVar5);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar9 = (Il2CppClass *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (extraout_DL != '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar10 = (Il2CppClass *)0x0;
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      pIVar9 = in_RSI;
      bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)
                         **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)in_RSI,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 == '\0') {
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar10 = (Il2CppClass *)0x0;
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8)
            == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)
                   **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)in_RSI,(Il2CppObject *)x,
                   MethodInfo_Void_set_Item);
      }
    }
    return;
  }
  if (extraout_DL == '\0') {
    UnityEngine_Resources__Load((System_String_o *)in_RSI,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar10 = (Il2CppClass *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar9 = in_RSI;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)in_RSI,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar9 = (Il2CppClass *)0x0;
      pIVar10 = in_RSI;
      value = UnityEngine_Resources__Load((System_String_o *)in_RSI,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      pIVar9 = in_RSI;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_00,(Il2CppObject *)in_RSI,(Il2CppObject *)value,MethodInfo_Void_set_Item);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar10 = (Il2CppClass *)0x0;
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)in_RSI,MethodInfo_Object_get_Item);
      return;
    }
  }
label_044bc19f:
  uVar11 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
    g_data_057aea6a = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
  uVar8 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_02,(MethodInfo *)0x0);
    *(undefined4 *)&__this_02[1].klass = uVar8;
    return;
  }
  __this_01[2].klass = pIVar10;
  il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar10);
  __this_01[3].klass = pIVar9;
  il2cpp_runtime_helper_022b4080(__this_01 + 3,pIVar9);
  *(undefined4 *)&__this_01[2].monitor = uVar11;
  return;
}


// ApplicationManagers.MusicManager$$FindSong
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_MusicManager__FindSong (System_String_o* name, const MethodInfo* method);
// 0x44bc270

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_MusicManager__FindSong(System_String_o *name,MethodInfo *method)

{
  long lVar1;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  Il2CppObject *__this_05;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  undefined4 uVar6;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  long *__this_06;
  undefined4 uVar8;
  int32_t in_XMM1_Da;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue;
  undefined8 in_stack_fffffffffffffe98;
  Il2CppMethodPointer in_stack_fffffffffffffea0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffea8;
  int32_t in_stack_fffffffffffffeb0;
  int32_t iVar9;
  int32_t in_stack_fffffffffffffeb4;
  undefined4 in_stack_fffffffffffffeb8;
  undefined4 in_stack_fffffffffffffebc;
  Il2CppClass *in_stack_fffffffffffffec0;
  Il2CppType *in_stack_fffffffffffffec8;
  System_Collections_Generic_List_T__o *in_stack_fffffffffffffed0;
  _union_13 in_stack_fffffffffffffed8;
  _union_14 local_120;
  undefined1 local_118 [80];
  undefined1 local_c8 [80];
  Il2CppMethodPointer local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057aea6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0(&"Name");
    g_data_057aea6e = '\x01';
  }
  local_118._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_118._56_8_ = (Il2CppRGCTXData *)0x0;
  local_118._32_8_ = (Il2CppClass *)0x0;
  local_118._40_8_ = (Il2CppType *)0x0;
  local_118._16_8_ = (InvokerMethod)0x0;
  local_118._24_8_ = (char *)0x0;
  local_118._0_8_ = (Il2CppMethodPointer)0x0;
  local_118._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pcStack_60 = (char *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_c8._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_c8._56_8_ = (Il2CppRGCTXData *)0x0;
  local_c8._32_8_ = (Il2CppClass *)0x0;
  local_c8._40_8_ = (Il2CppType *)0x0;
  local_c8._16_8_ = (InvokerMethod)0x0;
  local_c8._24_8_ = (char *)0x0;
  local_c8._0_8_ = (Il2CppMethodPointer)0x0;
  local_c8._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  pSVar7 = name;
  bVar3 = System_String__op_Equality
                    (name,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pSVar4 = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
    aKeyValue.value = pSVar4;
    aKeyValue.key = pSVar7;
    if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bc599:
      uVar8 = il2cpp_runtime_helper_022b2c90();
      if (g_data_057aea6f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeNextSong_d__46);
        g_data_057aea6f = '\x01';
      }
      __this_05 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeNextSong_d__46);
      uVar6 = 0;
      __this_06 = (long *)__this_05;
      System_Object___ctor(__this_05,(MethodInfo *)0x0);
      *(undefined4 *)&__this_05[1].klass = 0;
      if (__this_05 == (Il2CppObject *)0x0) {
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
        if (g_data_057aea6c == '\0') {
          __this_06 = &TypeInfo_MusicManager;
          il2cpp_runtime_helper_023445d0();
          g_data_057aea6c = '\x01';
        }
        lVar1 = **(long **)(TypeInfo_MusicManager + 0xb8);
        if (lVar1 == 0) {
          il2cpp_runtime_helper_022b2c90();
          System_Object___ctor((Il2CppObject *)__this_06,(MethodInfo *)0x0);
          *(undefined4 *)&((Il2CppObject *)((long)__this_06 + 0x10))->klass = uVar6;
          return extraout_RAX;
        }
        *(undefined4 *)(lVar1 + 0x40) = 0;
        *(undefined4 *)(lVar1 + 100) = 0;
        return pSVar4;
      }
      __this_05[2].klass = (Il2CppClass *)aKeyValue.key;
      il2cpp_runtime_helper_022b4080(__this_05 + 2,(Il2CppClass *)aKeyValue.key);
      __this_05[2].monitor = aKeyValue.value;
      il2cpp_runtime_helper_022b4080(&__this_05[2].monitor,aKeyValue.value);
      *(undefined4 *)((long)&__this_05[3].klass + 4) = uVar8;
      *(int32_t *)&__this_05[3].klass = in_XMM1_Da;
      return (SimpleJSONFixed_JSONNode_o *)__this_05;
    }
    SimpleJSONFixed_JSONNode__get_Values
              ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&stack0xfffffffffffffea0,pSVar4,(MethodInfo *)0x0
              );
    local_38 = local_120;
    local_68 = (InvokerMethod)CONCAT44(in_stack_fffffffffffffeb4,in_stack_fffffffffffffeb0);
    pcStack_60 = (char *)CONCAT44(in_stack_fffffffffffffebc,in_stack_fffffffffffffeb8);
    __this.fields.m_Enumerator.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
    __this.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe98;
    __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
    __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_ = in_stack_fffffffffffffeb0;
    __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_ = in_stack_fffffffffffffeb4;
    __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._0_4_ = in_stack_fffffffffffffeb8;
    __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._4_4_ = in_stack_fffffffffffffebc;
    __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
    __this.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
    __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
    __this.fields.m_Enumerator.fields.m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
    in_XMM1_Da = in_stack_fffffffffffffeb0;
    local_78 = in_stack_fffffffffffffea0;
    pSStack_70 = in_stack_fffffffffffffea8;
    local_58 = in_stack_fffffffffffffec0;
    pIStack_50 = in_stack_fffffffffffffec8;
    local_48 = in_stack_fffffffffffffed0;
    _Stack_40 = in_stack_fffffffffffffed8;
    SimpleJSONFixed_JSONNode_ValueEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&stack0xfffffffffffffea0,__this,
               (MethodInfo *)&local_78);
    local_118._64_8_ = local_120;
    local_118._20_4_ = in_stack_fffffffffffffeb4;
    local_118._16_4_ = in_XMM1_Da;
    local_118._28_4_ = in_stack_fffffffffffffebc;
    local_118._24_4_ = in_stack_fffffffffffffeb8;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
    __this_00.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe98;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_ = in_XMM1_Da;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_ = in_stack_fffffffffffffeb4
    ;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._0_4_ =
         in_stack_fffffffffffffeb8;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._4_4_ =
         in_stack_fffffffffffffebc;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
    iVar9 = in_XMM1_Da;
    local_118._0_8_ = in_stack_fffffffffffffea0;
    local_118._8_8_ = in_stack_fffffffffffffea8;
    local_118._32_8_ = in_stack_fffffffffffffec0;
    local_118._40_8_ = in_stack_fffffffffffffec8;
    local_118._48_8_ = in_stack_fffffffffffffed0;
    local_118._56_8_ = in_stack_fffffffffffffed8;
    bVar3 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext(__this_00,(MethodInfo *)local_118);
    if ((char)bVar3 != '\0') {
      do {
        method_00 = (MethodInfo *)local_118;
        pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
        __this_02.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe98;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_ = iVar9;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_ =
             in_stack_fffffffffffffeb4;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._0_4_ =
             in_stack_fffffffffffffeb8;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._4_4_ =
             in_stack_fffffffffffffebc;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
        pSVar4 = SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current(__this_02,method_00);
        aKeyValue.value = pSVar5;
        aKeyValue.key = (System_String_o *)method_00;
        if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044bc599;
        in_XMM1_Da = iVar9;
        (*(pSVar4->klass->vtable)._32_unknown.methodPtr)
                  (&stack0xfffffffffffffea0,pSVar4,(pSVar4->klass->vtable)._32_unknown.method);
        local_c8._64_8_ = local_120;
        local_c8._20_4_ = in_stack_fffffffffffffeb4;
        local_c8._16_4_ = in_XMM1_Da;
        local_c8._28_4_ = in_stack_fffffffffffffebc;
        local_c8._24_4_ = in_stack_fffffffffffffeb8;
        iVar9 = in_XMM1_Da;
        local_c8._0_8_ = in_stack_fffffffffffffea0;
        local_c8._8_8_ = in_stack_fffffffffffffea8;
        local_c8._32_8_ = in_stack_fffffffffffffec0;
        local_c8._40_8_ = in_stack_fffffffffffffec8;
        local_c8._48_8_ = in_stack_fffffffffffffed0;
        local_c8._56_8_ = in_stack_fffffffffffffed8;
        while (__this_03.fields.m_Object.fields._dictionary =
                    (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0,
              __this_03.fields._0_8_ = in_stack_fffffffffffffe98,
              __this_03.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8,
              __this_03.fields.m_Object.fields._current.fields.key._0_4_ = iVar9,
              __this_03.fields.m_Object.fields._current.fields.key._4_4_ = in_stack_fffffffffffffeb4,
              __this_03.fields.m_Object.fields._current.fields.value._0_4_ = in_stack_fffffffffffffeb8,
              __this_03.fields.m_Object.fields._current.fields.value._4_4_ = in_stack_fffffffffffffebc,
              __this_03.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0,
              __this_03.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8,
              __this_03.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0,
              __this_03.fields.m_Array.fields._current =
                   (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data,
              bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_03,(MethodInfo *)local_c8),
              (char)bVar3 != '\0') {
          __this_04.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
          __this_04.fields._0_8_ = in_stack_fffffffffffffe98;
          __this_04.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
          __this_04.fields.m_Object.fields._current.fields.key._0_4_ = iVar9;
          __this_04.fields.m_Object.fields._current.fields.key._4_4_ = in_stack_fffffffffffffeb4;
          __this_04.fields.m_Object.fields._current.fields.value._0_4_ = in_stack_fffffffffffffeb8;
          __this_04.fields.m_Object.fields._current.fields.value._4_4_ = in_stack_fffffffffffffebc;
          __this_04.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
          __this_04.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
          __this_04.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
          __this_04.fields.m_Array.fields._current =
               (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
          aKeyValue = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                      SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_04,(MethodInfo *)local_c8);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                             ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue,
                              (MethodInfo *)0x0);
          if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044bc599;
          cVar2 = (*(pSVar4->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar4,"Name",(pSVar4->klass->vtable)._28_HasKey.method);
          if (cVar2 != '\0') {
            pSVar5 = (SimpleJSONFixed_JSONNode_o *)
                     (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar4,"Name",(pSVar4->klass->vtable)._7_get_Item.method);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)name,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              return pSVar4;
            }
          }
        }
        __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
        __this_01.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe98;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_ = iVar9;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_ =
             in_stack_fffffffffffffeb4;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._0_4_ =
             in_stack_fffffffffffffeb8;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._4_4_ =
             in_stack_fffffffffffffebc;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
        bVar3 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext(__this_01,(MethodInfo *)local_118);
      } while ((char)bVar3 != '\0');
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// ApplicationManagers.MusicManager$$FadeNextSong
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_MusicManager__FadeNextSong (ApplicationManagers_MusicManager_o* __this, UnityEngine_AudioClip_o* nextClip, float volume, float startTime, const MethodInfo* method);
// 0x44bc5a0

System_Collections_IEnumerator_o *
ApplicationManagers_MusicManager__FadeNextSong
          (ApplicationManagers_MusicManager_o *__this,UnityEngine_AudioClip_o *nextClip,float volume,
          float startTime,MethodInfo *method)

{
  long lVar1;
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *pSVar2;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar3;
  Il2CppObject *__this_01;
  
  if (g_data_057aea6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FadeNextSong_d__46);
    g_data_057aea6f = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeNextSong_d__46);
  uVar3 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    __this_00[2].monitor = nextClip;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,nextClip);
    *(float *)((long)&__this_00[3].klass + 4) = volume;
    *(float *)&__this_00[3].klass = startTime;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  pSVar2 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea6c == '\0') {
    __this_01 = (Il2CppObject *)&TypeInfo_MusicManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea6c = '\x01';
  }
  lVar1 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x40) = 0;
    *(undefined4 *)(lVar1 + 100) = 0;
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar3;
  return extraout_RAX;
}


// ApplicationManagers.MusicManager$$Update
// il2cpp: void ApplicationManagers_MusicManager__Update (ApplicationManagers_MusicManager_o* __this, const MethodInfo* method);
// 0x44bc6c0

void ApplicationManagers_MusicManager__Update(ApplicationManagers_MusicManager_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  UnityEngine_Object_o *pUVar3;
  GameManagers_InGameManager_o *__this_00;
  Characters_BaseCharacter_o *b;
  System_Collections_Generic_IEnumerable_BaseCharacter__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  UnityEngine_Transform_o *pUVar6;
  char cVar7;
  bool_conflict bVar8;
  System_Collections_Generic_IEnumerable_BaseCharacter__o *pSVar9;
  VirtualInvokeData *pVVar10;
  undefined8 *puVar11;
  Characters_BaseCharacter_o *a;
  long *plVar12;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *pMVar13;
  System_String_o *pSVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *unaff_R13;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o UVar21;
  undefined1 auVar22 [12];
  float fStack_80;
  float fStack_7c;
  float fStack_70;
  float fStack_6c;
  
  if (g_data_057aea70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0();
    g_data_057aea70 = '\x01';
  }
  fVar19 = (__this->fields)._songTimeLeft;
  fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._songTimeLeft = fVar19 - fVar18;
  fVar19 = *(float *)((long)&(__this->fields)._currentSongName + 4);
  pMVar13 = (MethodInfo *)0x0;
  fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar19 = fVar19 - fVar18;
  *(float *)((long)&(__this->fields)._currentSongName + 4) = fVar19;
  if (*(char *)&(__this->fields)._currentSongName == '\0') {
    if (0.0 < (__this->fields)._songTimeLeft) {
      return;
    }
    if (0.0 < fVar19) {
      return;
    }
    if ((char)(__this->fields)._autoPlay == '\0') {
      return;
    }
    ApplicationManagers_MusicManager__NextSong(pMVar13);
    return;
  }
  pSVar14 = (__this->fields)._currentPlaylist;
  if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar13 = *(MethodInfo **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
  bVar8 = System_String__op_Inequality(pSVar14,(System_String_o *)pMVar13,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    if (0.0 < *(float *)((long)&(__this->fields)._currentSongName + 4)) {
      if (**(long **)(TypeInfo_MusicManager + 0xb8) == 0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aea71 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_BaseCharacter);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_BaseCharacter);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
          il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
          il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
          il2cpp_runtime_helper_023445d0();
          g_data_057aea71 = '\x01';
        }
        fVar19 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        if (*(float *)&pSVar14[5].monitor + 0.2 <= fVar19) {
          fVar19 = UnityEngine_Time__get_time((MethodInfo *)0x0);
          *(float *)&pSVar14[5].monitor = fVar19;
          if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2) {
            pUVar3 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar8 != '\0') {
              pUVar3 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                plVar12 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                if (plVar12 != (long *)0x0) {
                  if (((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar12 + 0x130)) &&
                      (*(long *)(*(long *)(*plVar12 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8)
                       == TypeInfo_InGameCamera)) &&
                     (__this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10),
                     __this_00 != (GameManagers_InGameManager_o *)0x0)) {
                    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
                    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
                       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
                      b = (Characters_BaseCharacter_o *)plVar12[7];
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar8 = UnityEngine_Object__op_Equality
                                        ((UnityEngine_Object_o *)b,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if ((char)bVar8 == '\0') {
                        pSVar9 = GameManagers_InGameManager__GetAllCharactersEnumerable
                                           (__this_00,(MethodInfo *)0x0);
                        if (pSVar9 == (System_Collections_Generic_IEnumerable_BaseCharacter__o *)0x0) {
label_044bcea9:
                          il2cpp_runtime_helper_022b2c90();
                        }
                        else {
                          pSVar4 = pSVar9->klass;
                          uVar2._0_1_ = (pSVar4->_2).rank;
                          uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
                          if ((ulong)uVar2 != 0) {
                            pIVar5 = (pSVar4->_1).interfaceOffsets;
                            lVar15 = 0;
                            do {
                              if (*(long *)((long)&pIVar5->interfaceType + lVar15) == TypeInfo_IEnumerable_BaseCharacter) {
                                pVVar10 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar15);
                                goto label_044bcb77;
                              }
                              lVar15 = lVar15 + 0x10;
                            } while ((ulong)uVar2 << 4 != lVar15);
                          }
                          pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar9,TypeInfo_IEnumerable_BaseCharacter,0);
label_044bcb77:
                          unaff_R13 = (long *)(*pVVar10->methodPtr)(pSVar9,pVVar10->method);
                          if (unaff_R13 != (long *)0x0) {
label_044bcba6:
                            do {
                              do {
                                lVar15 = *unaff_R13;
                                if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
                                  lVar16 = 0;
                                  do {
                                    if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IEnumerator) {
                                      puVar11 = (undefined8 *)
                                                ((long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) * 0x10
                                                 + lVar15 + 0x138);
                                      goto label_044bcbf8;
                                    }
                                    lVar16 = lVar16 + 0x10;
                                  } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
                                }
                                puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_044bcbf8:
                                cVar7 = (*(code *)*puVar11)(unaff_R13,puVar11[1]);
                                if (cVar7 == '\0') {
                                  lVar15 = 0;
                                  goto joined_r0x044bce18;
                                }
                                lVar15 = *unaff_R13;
                                if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
                                  lVar16 = 0;
                                  do {
                                    if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IEnumerator_BaseCharacter) {
                                      puVar11 = (undefined8 *)
                                                ((long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) * 0x10
                                                 + lVar15 + 0x138);
                                      goto label_044bcc61;
                                    }
                                    lVar16 = lVar16 + 0x10;
                                  } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
                                }
                                puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator_BaseCharacter,0);
label_044bcc61:
                                a = (Characters_BaseCharacter_o *)(*(code *)*puVar11)(unaff_R13,puVar11[1]);
                                if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                bVar8 = GameManagers_TeamInfo__SameTeam_446fee0(a,b,(MethodInfo *)0x0);
                              } while ((char)bVar8 != '\0');
                              if (a == (Characters_BaseCharacter_o *)0x0) {
                                il2cpp_runtime_helper_022b2c90();
label_044bce90:
                                il2cpp_runtime_helper_022b2c90();
label_044bce95:
                                il2cpp_runtime_helper_022b2c90();
label_044bce9a:
                                il2cpp_runtime_helper_022b2c90();
label_044bce9f:
                                il2cpp_runtime_helper_022b2c90();
label_044bcea4:
                                il2cpp_runtime_helper_022b2c90();
                                goto label_044bcea9;
                              }
                              lVar15 = *(long *)&(a->fields).Dead;
                              if (lVar15 == 0) goto label_044bce90;
                              pUVar6 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
                              if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_044bce95;
                              UVar20 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
                              if (b == (Characters_BaseCharacter_o *)0x0) goto label_044bce9a;
                              lVar15 = *(long *)&(b->fields).Dead;
                              if (lVar15 == 0) goto label_044bce9f;
                              pUVar6 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
                              if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_044bcea4;
                              UVar21 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
                              if (g_data_057a68cb == '\0') {
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                g_data_057a68cb = '\x01';
                              }
                              if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              fStack_70 = UVar20.fields.x;
                              fStack_6c = UVar20.fields.y;
                              fStack_80 = UVar21.fields.x;
                              fStack_7c = UVar21.fields.y;
                              fVar19 = UVar20.fields.z - UVar21.fields.z;
                              fVar19 = fVar19 * fVar19 +
                                       (fStack_6c - fStack_7c) * (fStack_6c - fStack_7c) +
                                       (fStack_70 - fStack_80) * (fStack_70 - fStack_80);
                              if (fVar19 < 0.0) {
                                fVar19 = sqrtf(fVar19);
                              }
                              else {
                                fVar19 = SQRT(fVar19);
                              }
                              bVar1 = (TypeInfo_BasicTitan->_2).naturalAligment;
                              if (((a->klass->_2).naturalAligment < bVar1) ||
                                 ((a->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BasicTitan)) {
                                if (fVar19 < 500.0) {
joined_r0x044bce18:
                                  lVar15 = 0;
                                  goto joined_r0x044bce18;
                                }
                                goto label_044bcba6;
                              }
                              if ((fVar19 < 200.0) ||
                                 ((fVar19 < 1000.0 && (0 < *(int *)((long)&a[2].fields.OutlineComponent + 4)))
                                 )) goto joined_r0x044bce18;
                            } while( true );
                          }
                        }
                        il2cpp_runtime_helper_022b2c90();
                        do {
                          auVar22 = il2cpp_runtime_helper_022fefe0();
                          if (auVar22._8_4_ != 1) {
                            if (unaff_R13 == (long *)0x0) goto label_044bd016;
                            lVar15 = *unaff_R13;
                            if ((ulong)*(ushort *)(lVar15 + 0x12e) == 0) goto label_044bcfef;
                            lVar16 = 0;
                            goto label_044bcfe0;
                          }
                          plVar12 = (long *)__cxa_begin_catch();
                          lVar15 = *plVar12;
                          __cxa_end_catch();
joined_r0x044bce18:
                          if (unaff_R13 != (long *)0x0) {
                            lVar16 = *unaff_R13;
                            if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
                              lVar17 = 0;
                              do {
                                if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
                                  puVar11 = (undefined8 *)
                                            (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) *
                                                      0x10 + 0x138);
                                  goto label_044bce6e;
                                }
                                lVar17 = lVar17 + 0x10;
                              } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
                            }
                            puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044bce6e:
                            (*(code *)*puVar11)(unaff_R13,puVar11[1]);
                          }
                        } while (lVar15 != 0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        return;
      }
      if (*(char *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x68) == '\0') goto label_044bc7d9;
    }
    bVar8 = ApplicationManagers_MusicManager__ShouldPlayBattleMusic(__this,pMVar13);
    if ((char)bVar8 != '\0') {
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_00;
      }
      pMVar13 = (MethodInfo *)0x1;
      ApplicationManagers_MusicManager__FinishSetPlaylist
                (*(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20),1,method_00);
    }
  }
label_044bc7d9:
  if (((__this->fields)._songTimeLeft <= 0.0) && ((char)(__this->fields)._autoPlay != '\0')) {
    fVar19 = *(float *)((long)&(__this->fields)._currentSongName + 4);
    if (0.0 < fVar19) goto label_044bc8c4;
    bVar8 = ApplicationManagers_MusicManager__ShouldPlayBattleMusic(__this,pMVar13);
    if ((char)bVar8 == '\0') {
      pSVar14 = (__this->fields)._currentPlaylist;
      if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = System_String__op_Equality
                        (pSVar14,*(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20),
                         (MethodInfo *)0x0);
      pMVar13 = extraout_RDX_03;
      if (((char)bVar8 == '\0') && (*(char *)((long)&(__this->fields)._isDefaultPlaylist + 1) == '\0')) {
        if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar13 = extraout_RDX_05;
        }
        pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x10);
      }
      else {
        if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar13 = extraout_RDX_04;
        }
        pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x18);
      }
    }
    else {
      pMVar13 = extraout_RDX_01;
      if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar13 = extraout_RDX_02;
      }
      pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
    }
    ApplicationManagers_MusicManager__FinishSetPlaylist(pSVar14,1,pMVar13);
  }
  fVar19 = *(float *)((long)&(__this->fields)._currentSongName + 4);
label_044bc8c4:
  if ((fVar19 <= 0.0) && (*(char *)((long)&(__this->fields)._isDefaultPlaylist + 1) != '\0')) {
    *(undefined1 *)((long)&(__this->fields)._isDefaultPlaylist + 1) = 0;
  }
  return;
  while (lVar16 = lVar16 + 0x10, (ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16) {
label_044bcfe0:
    if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IDisposable) {
      puVar11 = (undefined8 *)(lVar15 + (long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) * 0x10 + 0x138);
      goto label_044bd00d;
    }
  }
label_044bcfef:
  puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044bd00d:
  (*(code *)*puVar11)(unaff_R13,puVar11[1]);
label_044bd016:
  _Unwind_Resume(auVar22._0_8_);
}


// ApplicationManagers.MusicManager$$ShouldPlayBattleMusic
// il2cpp: bool ApplicationManagers_MusicManager__ShouldPlayBattleMusic (ApplicationManagers_MusicManager_o* __this, const MethodInfo* method);
// 0x44bc910

bool_conflict
ApplicationManagers_MusicManager__ShouldPlayBattleMusic
          (ApplicationManagers_MusicManager_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_Object_o *pUVar2;
  GameManagers_InGameManager_o *__this_00;
  Characters_BaseCharacter_o *b;
  Characters_BaseCharacter_c *pCVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_Transform_o *pUVar5;
  char cVar6;
  bool_conflict bVar7;
  Characters_BaseCharacter_o *a;
  VirtualInvokeData *pVVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  byte bVar14;
  long *unaff_R13;
  int iVar16;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o UVar19;
  undefined1 auVar20 [12];
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  byte bVar15;
  
  if (g_data_057aea71 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0();
    g_data_057aea71 = '\x01';
  }
  fVar17 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if ((__this->fields)._lastTimeBeforeGrabbed + 0.2 <= fVar17) {
    fVar17 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._lastTimeBeforeGrabbed = fVar17;
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2) {
      pUVar2 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pUVar2 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar7 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          plVar10 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
          if (plVar10 != (long *)0x0) {
            if (((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar10 + 0x130)) &&
                (*(long *)(*(long *)(*plVar10 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) ==
                 TypeInfo_InGameCamera)) &&
               (__this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10),
               __this_00 != (GameManagers_InGameManager_o *)0x0)) {
              bVar14 = (TypeInfo_InGameManager->_2).naturalAligment;
              if ((bVar14 <= (__this_00->klass->_2).naturalAligment) &&
                 ((__this_00->klass->_2).typeHierarchy[(ulong)bVar14 - 1] == TypeInfo_InGameManager)) {
                b = (Characters_BaseCharacter_o *)plVar10[7];
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar7 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)b,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar7 != '\0') {
                  return 0;
                }
                a = (Characters_BaseCharacter_o *)
                    GameManagers_InGameManager__GetAllCharactersEnumerable(__this_00,(MethodInfo *)0x0);
                if (a == (Characters_BaseCharacter_o *)0x0) {
label_044bcea9:
                  il2cpp_runtime_helper_022b2c90();
                }
                else {
                  pCVar3 = a->klass;
                  uVar1._0_1_ = (pCVar3->_2).rank;
                  uVar1._1_1_ = (pCVar3->_2).minimumAlignment;
                  if ((ulong)uVar1 != 0) {
                    pIVar4 = (pCVar3->_1).interfaceOffsets;
                    lVar11 = 0;
                    do {
                      if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_IEnumerable_BaseCharacter) {
                        pVVar8 = &(pCVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar11);
                        goto label_044bcb77;
                      }
                      lVar11 = lVar11 + 0x10;
                    } while ((ulong)uVar1 << 4 != lVar11);
                  }
                  pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IEnumerable_BaseCharacter,0);
label_044bcb77:
                  unaff_R13 = (long *)(*pVVar8->methodPtr)(a,pVVar8->method);
                  if (unaff_R13 != (long *)0x0) {
label_044bcba6:
                    do {
                      do {
                        lVar11 = *unaff_R13;
                        if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
                          lVar12 = 0;
                          do {
                            if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
                              puVar9 = (undefined8 *)
                                       ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11
                                       + 0x138);
                              goto label_044bcbf8;
                            }
                            lVar12 = lVar12 + 0x10;
                          } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
                        }
                        puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_044bcbf8:
                        cVar6 = (*(code *)*puVar9)(unaff_R13,puVar9[1]);
                        if (cVar6 == '\0') {
                          iVar16 = 3;
                          lVar11 = 0;
                          goto label_044bce00;
                        }
                        lVar11 = *unaff_R13;
                        if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
                          lVar12 = 0;
                          do {
                            if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator_BaseCharacter) {
                              puVar9 = (undefined8 *)
                                       ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11
                                       + 0x138);
                              goto label_044bcc61;
                            }
                            lVar12 = lVar12 + 0x10;
                          } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
                        }
                        puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator_BaseCharacter,0);
label_044bcc61:
                        a = (Characters_BaseCharacter_o *)(*(code *)*puVar9)(unaff_R13,puVar9[1]);
                        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        bVar7 = GameManagers_TeamInfo__SameTeam_446fee0(a,b,(MethodInfo *)0x0);
                      } while ((char)bVar7 != '\0');
                      if (a == (Characters_BaseCharacter_o *)0x0) {
                        il2cpp_runtime_helper_022b2c90();
label_044bce90:
                        il2cpp_runtime_helper_022b2c90();
label_044bce95:
                        il2cpp_runtime_helper_022b2c90();
label_044bce9a:
                        il2cpp_runtime_helper_022b2c90();
label_044bce9f:
                        il2cpp_runtime_helper_022b2c90();
label_044bcea4:
                        il2cpp_runtime_helper_022b2c90();
                        goto label_044bcea9;
                      }
                      lVar11 = *(long *)&(a->fields).Dead;
                      if (lVar11 == 0) goto label_044bce90;
                      pUVar5 = *(UnityEngine_Transform_o **)(lVar11 + 0x10);
                      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_044bce95;
                      UVar18 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
                      if (b == (Characters_BaseCharacter_o *)0x0) goto label_044bce9a;
                      lVar11 = *(long *)&(b->fields).Dead;
                      if (lVar11 == 0) goto label_044bce9f;
                      pUVar5 = *(UnityEngine_Transform_o **)(lVar11 + 0x10);
                      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_044bcea4;
                      UVar19 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
                      if (g_data_057a68cb == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                        g_data_057a68cb = '\x01';
                      }
                      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      local_48 = UVar18.fields.x;
                      fStack_44 = UVar18.fields.y;
                      local_58 = UVar19.fields.x;
                      fStack_54 = UVar19.fields.y;
                      fVar17 = UVar18.fields.z - UVar19.fields.z;
                      fVar17 = fVar17 * fVar17 +
                               (fStack_44 - fStack_54) * (fStack_44 - fStack_54) +
                               (local_48 - local_58) * (local_48 - local_58);
                      if (fVar17 < 0.0) {
                        fVar17 = sqrtf(fVar17);
                      }
                      else {
                        fVar17 = SQRT(fVar17);
                      }
                      bVar14 = (TypeInfo_BasicTitan->_2).naturalAligment;
                      if ((bVar14 <= (a->klass->_2).naturalAligment) &&
                         ((a->klass->_2).typeHierarchy[(ulong)bVar14 - 1] == TypeInfo_BasicTitan)) {
                        if ((fVar17 < 200.0) ||
                           ((fVar17 < 1000.0 && (0 < *(int *)((long)&a[2].fields.OutlineComponent + 4)))))
                        goto joined_r0x044bce18;
                        goto label_044bcba6;
                      }
                      if (fVar17 < 500.0) {
joined_r0x044bce18:
                        bVar15 = 1;
                        bVar14 = 1;
                        iVar16 = 9;
                        lVar11 = 0;
                        goto joined_r0x044bce18;
                      }
                    } while( true );
                  }
                }
                il2cpp_runtime_helper_022b2c90();
                while( true ) {
                  auVar20 = il2cpp_runtime_helper_022fefe0();
                  a = auVar20._0_8_;
                  if (auVar20._8_4_ != 1) break;
                  iVar16 = 0;
                  plVar10 = (long *)__cxa_begin_catch();
                  lVar11 = *plVar10;
                  __cxa_end_catch();
label_044bce00:
                  bVar15 = 0;
                  bVar14 = 0;
joined_r0x044bce18:
                  if (unaff_R13 != (long *)0x0) {
                    lVar12 = *unaff_R13;
                    if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
                      lVar13 = 0;
                      do {
                        if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
                          puVar9 = (undefined8 *)
                                   (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 +
                                   0x138);
                          goto label_044bce6e;
                        }
                        lVar13 = lVar13 + 0x10;
                      } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
                    }
                    puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044bce6e:
                    (*(code *)*puVar9)(unaff_R13,puVar9[1]);
                    bVar14 = bVar15;
                  }
                  if (lVar11 == 0) {
                    return (bool_conflict)CONCAT71((int7)((ulong)a >> 8),iVar16 == 9 & bVar14);
                  }
                }
                if (unaff_R13 != (long *)0x0) {
                  lVar11 = *unaff_R13;
                  if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
                    lVar12 = 0;
                    do {
                      if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
                        puVar9 = (undefined8 *)
                                 (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 +
                                 0x138);
                        goto label_044bd00d;
                      }
                      lVar12 = lVar12 + 0x10;
                    } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
                  }
                  puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_044bd00d:
                  (*(code *)*puVar9)(unaff_R13,puVar9[1]);
                }
                _Unwind_Resume(a);
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


// ApplicationManagers.MusicManager$$GetMusicVolume
// il2cpp: float ApplicationManagers_MusicManager__GetMusicVolume (const MethodInfo* method);
// 0x44baa50

float ApplicationManagers_MusicManager__GetMusicVolume(MethodInfo *method)

{
  int iVar1;
  System_String_c *pSVar2;
  char *pcVar3;
  code *pcVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_AudioSource_o *pUVar6;
  void *pvVar7;
  GameManagers_InGameManager_c *pGVar8;
  UnityEngine_MonoBehaviour_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  char cVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  uint uVar13;
  Il2CppClass *pIVar14;
  Il2CppClass *pIVar15;
  SimpleJSONFixed_JSONNode_o *pSVar16;
  System_String_o *pSVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  Il2CppObject *pIVar21;
  long lVar22;
  SimpleJSONFixed_JSONNode_o *pSVar23;
  Il2CppClass *pIVar24;
  Il2CppClass *pIVar25;
  Il2CppClass *pIVar26;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UnityEngine_Object_o *value;
  Il2CppObject *__this_02;
  SimpleJSONFixed_JSONNode_c *method_00;
  UnityEngine_Object_c *pUVar27;
  long *unaff_RBX;
  long *plVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined8 unaff_RBP;
  MethodInfo *pMVar31;
  Il2CppClass *pIVar32;
  byte bVar33;
  long *unaff_R12;
  undefined8 unaff_R13;
  Il2CppClass *unaff_R14;
  ulong uVar34;
  long *unaff_R15;
  float fVar35;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float extraout_XMM0_Da_11;
  float extraout_XMM0_Da_12;
  float extraout_XMM0_Da_13;
  float extraout_XMM0_Da_14;
  float extraout_XMM0_Da_15;
  float extraout_XMM0_Da_16;
  float extraout_XMM0_Da_17;
  float extraout_XMM0_Da_18;
  float extraout_XMM0_Da_19;
  undefined4 uVar36;
  float extraout_XMM0_Da_20;
  undefined1 auVar37 [16];
  undefined1 auStack_8 [8];
  
  if (g_data_057aea72 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    method = (MethodInfo *)&MethodInfo_Single_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea72 = '\x01';
  }
  if (*(char *)(*(long *)(TypeInfo_MusicManager + 0xb8) + 0x10) != '\0') {
    return 0.0;
  }
  lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x28), lVar22 != 0)) {
    return *(float *)(lVar22 + 0x14) * 0.4;
  }
  fVar35 = (float)il2cpp_runtime_helper_022b2c90();
  puVar30 = &stack0xfffffffffffffff0;
  if (g_data_057aea61 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    method = (MethodInfo *)&"Death";
    fVar35 = (float)il2cpp_runtime_helper_023445d0();
    g_data_057aea61 = '\x01';
  }
  plVar28 = &TypeInfo_MusicManager;
  method_00 = (SimpleJSONFixed_JSONNode_c *)**(long **)(TypeInfo_MusicManager + 0xb8);
  if (method_00 == (SimpleJSONFixed_JSONNode_c *)0x0) {
label_044bab83:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(char *)&(method_00->_1).generic_class == '\0') {
      return fVar35;
    }
    method = (MethodInfo *)(*(long **)(TypeInfo_MusicManager + 0xb8))[1];
    if (((Il2CppClass *)method == (Il2CppClass *)0x0) ||
       (pSVar2 = (((Il2CppClass *)method)->_1).image,
       pIVar14 = (Il2CppClass *)
                 (*(pSVar2->vtable)._7_CompareTo.methodPtr)
                           (method,"Death",(pSVar2->vtable)._7_CompareTo.method),
       pIVar14 == (Il2CppClass *)0x0)) goto label_044bab83;
    pSVar2 = (pIVar14->_1).image;
    pIVar15 = (Il2CppClass *)
              (*(pSVar2->vtable)._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)
                        (pIVar14,0,(pSVar2->vtable)._5_System_Collections_IEnumerable_GetEnumerator.method);
    method_00 = (SimpleJSONFixed_JSONNode_c *)**(long **)(TypeInfo_MusicManager + 0xb8);
    method = (MethodInfo *)pIVar14;
    if (method_00 == (SimpleJSONFixed_JSONNode_c *)0x0) goto label_044bab83;
    *(undefined1 *)&(method_00->_1).typeMetadataHandle = 0;
    plVar28 = unaff_RBX;
    puVar30 = auStack_8;
    method = (MethodInfo *)pIVar15;
  }
ApplicationManagers_MusicManager__PlayImmediateTransition:
  *(long **)(puVar30 + -8) = unaff_R15;
  *(Il2CppClass **)(puVar30 + -0x10) = unaff_R14;
  *(long **)(puVar30 + -0x18) = plVar28;
  if (g_data_057aea69 == '\0') {
    *(undefined8 *)(puVar30 + -0x30) = 0x44babb1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)(puVar30 + -0x30) = 0x44babbd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar30 + -0x30) = 0x44babc9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar30 + -0x30) = 0x44babd5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar30 + -0x30) = 0x44babe1;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)(puVar30 + -0x30) = 0x44babed;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)(puVar30 + -0x30) = 0x44babf9;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea69 = '\x01';
  }
  plVar28 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)(puVar30 + -0x30) = 0x44bac18;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar30 + -0x30) = 0x44bac24;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)method,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return extraout_XMM0_Da;
  }
  pIVar14 = unaff_R14;
  if ((Il2CppClass *)method == (Il2CppClass *)0x0) {
label_044bae61:
    *(undefined8 *)(puVar30 + -0x30) = 0x44bae66;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar2 = (((Il2CppClass *)method)->_1).image;
    pcVar3 = pSVar2[1]._1.namespaze;
    pcVar4 = (code *)pSVar2[1]._1.name;
    *(undefined8 *)(puVar30 + -0x30) = 0x44bac52;
    cVar10 = (*pcVar4)(method,"Name",pcVar3);
    if (cVar10 == '\0') {
      return extraout_XMM0_Da_00;
    }
    pSVar2 = (((Il2CppClass *)method)->_1).image;
    pMVar31 = (pSVar2->vtable)._7_CompareTo.method;
    pIVar5 = (pSVar2->vtable)._7_CompareTo.methodPtr;
    *(undefined8 *)(puVar30 + -0x30) = 0x44bac70;
    pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(method,"Name",pMVar31);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar30 + -0x30) = 0x44bac84;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar30 + -0x30) = 0x44bac8e;
    pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar30 + -0x30) = 0x44baca9;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar30 + -0x30) = 0x44bacbd;
    pIVar14 = (Il2CppClass *)
              ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar17,0,(MethodInfo *)method_00);
    if ((pIVar14 == (Il2CppClass *)0x0) || ((pIVar14->_1).image == TypeInfo_AudioClip)) {
      pSVar2 = (((Il2CppClass *)method)->_1).image;
      pMVar31 = (pSVar2->vtable)._7_CompareTo.method;
      pIVar5 = (pSVar2->vtable)._7_CompareTo.methodPtr;
      *(undefined8 *)(puVar30 + -0x30) = 0x44bacf5;
      pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(method,"Volume",pMVar31);
      *(undefined8 *)(puVar30 + -0x30) = 0x44bacff;
      fVar35 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar16,(MethodInfo *)0x0);
      plVar28 = &TypeInfo_MusicManager;
      lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
      if (lVar22 != 0) {
        *(float *)(puVar30 + -0x1c) = fVar35;
        pUVar6 = *(UnityEngine_AudioSource_o **)(lVar22 + 0x28);
        if (pUVar6 != (UnityEngine_AudioSource_o *)0x0) {
          *(undefined8 *)(puVar30 + -0x30) = 0x44bad39;
          UnityEngine_AudioSource__set_clip(pUVar6,(UnityEngine_AudioClip_o *)pIVar14,(MethodInfo *)0x0);
          plVar19 = *(long **)(TypeInfo_MusicManager + 0xb8);
          method_00 = (SimpleJSONFixed_JSONNode_c *)*plVar19;
          if (method_00 != (SimpleJSONFixed_JSONNode_c *)0x0) {
            method = *(MethodInfo **)&(method_00->_1).byval_arg.bits;
            if (g_data_057aea72 == '\0') {
              *(undefined8 *)(puVar30 + -0x30) = 0x44bad64;
              il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
              *(undefined8 *)(puVar30 + -0x30) = 0x44bad70;
              il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
              *(undefined8 *)(puVar30 + -0x30) = 0x44bad7c;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
              g_data_057aea72 = '\x01';
              plVar19 = *(long **)(TypeInfo_MusicManager + 0xb8);
            }
            fVar35 = 0.0;
            if ((char)plVar19[2] == '\0') {
              lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
              if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x28), lVar22 == 0)) goto label_044bae61;
              fVar35 = *(float *)(lVar22 + 0x14) * 0.4;
            }
            if ((Il2CppClass *)method != (Il2CppClass *)0x0) {
              *(undefined8 *)(puVar30 + -0x30) = 0x44badee;
              UnityEngine_AudioSource__set_volume
                        ((UnityEngine_AudioSource_o *)method,*(float *)(puVar30 + -0x1c) * fVar35,
                         (MethodInfo *)0x0);
              if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
                 (pUVar6 = *(UnityEngine_AudioSource_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x28),
                 pUVar6 != (UnityEngine_AudioSource_o *)0x0)) {
                *(undefined8 *)(puVar30 + -0x30) = 0x44bae10;
                UnityEngine_AudioSource__Play_4daa2c0(pUVar6,(MethodInfo *)0x0);
                if (pIVar14 != (Il2CppClass *)0x0) {
                  lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
                  *(undefined8 *)(puVar30 + -0x30) = 0x44bae2c;
                  fVar35 = UnityEngine_AudioClip__get_length
                                     ((UnityEngine_AudioClip_o *)pIVar14,(MethodInfo *)0x0);
                  method = (MethodInfo *)0x0;
                  if (lVar22 != 0) {
                    *(float *)(lVar22 + 0x40) = fVar35;
                    lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
                    *(undefined8 *)(puVar30 + -0x30) = 0x44bae4d;
                    fVar35 = UnityEngine_AudioClip__get_length
                                       ((UnityEngine_AudioClip_o *)pIVar14,(MethodInfo *)0x0);
                    method = (MethodInfo *)0x0;
                    if (lVar22 != 0) {
                      *(float *)(lVar22 + 100) = fVar35;
                      return fVar35;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_044bae61;
    }
  }
  *(undefined8 *)(puVar30 + -0x30) = 0x44bae6e;
  uVar18 = il2cpp_runtime_helper_022b2fd0(pIVar14);
  *(long **)(puVar30 + -0x30) = plVar28;
  *(Il2CppClass **)(puVar30 + -0x38) = pIVar14;
  *(long **)(puVar30 + -0x40) = unaff_R12;
  *(MethodInfo **)(puVar30 + -0x48) = method;
  *(undefined8 *)(puVar30 + -0x50) = uVar18;
  fVar35 = extraout_XMM0_Da_01;
  if (g_data_057aea62 == '\0') {
    *(undefined8 *)(puVar30 + -0x58) = 0x44bae8d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar30 + -0x58) = 0x44bae99;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicPlaylist);
    *(undefined8 *)(puVar30 + -0x58) = 0x44baea5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)(puVar30 + -0x58) = 0x44baeb1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)(puVar30 + -0x58) = 0x44baebd;
    fVar35 = (float)il2cpp_runtime_helper_023445d0(&"Grabbed");
    g_data_057aea62 = '\x01';
  }
  lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x38), lVar22 != 0)) {
    if (*(char *)(lVar22 + 0x11) == '\0') {
      return fVar35;
    }
    plVar28 = &TypeInfo_MusicManager;
    plVar19 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
    if (plVar19 == (long *)0x0) goto label_044bb042;
    uVar18 = *(undefined8 *)(*plVar19 + 0x1b0);
    pcVar4 = *(code **)(*plVar19 + 0x1a8);
    *(undefined8 *)(puVar30 + -0x58) = 0x44baf34;
    plVar19 = (long *)(*pcVar4)(plVar19,"Grabbed",uVar18);
    if (plVar19 == (long *)0x0) goto label_044bb042;
    method_00 = (SimpleJSONFixed_JSONNode_c *)*plVar19;
    pMVar31 = (method_00->vtable)._5_get_Item.method;
    pIVar5 = (method_00->vtable)._5_get_Item.methodPtr;
    *(undefined8 *)(puVar30 + -0x58) = 0x44baf52;
    pIVar14 = (Il2CppClass *)(*pIVar5)(plVar19,0,pMVar31);
    lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
    if (lVar22 == 0) goto label_044bb042;
    *(undefined1 *)(lVar22 + 0x68) = 0;
    method = *(MethodInfo **)(lVar22 + 0x20);
    unaff_R12 = &TypeInfo_MusicPlaylist;
    if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
      *(undefined8 *)(puVar30 + -0x58) = 0x44baf8c;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar17 = *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
    *(undefined8 *)(puVar30 + -0x58) = 0x44bafa5;
    bVar11 = System_String__op_Equality((System_String_o *)method,pSVar17,(MethodInfo *)0x0);
    method_00 = *(SimpleJSONFixed_JSONNode_c **)(TypeInfo_MusicManager + 0xb8);
    pIVar5 = (method_00->_1).image;
    if ((char)bVar11 != '\0') {
      if (pIVar5 != (Il2CppMethodPointer)0x0) {
        *(undefined8 *)(pIVar5 + 0x70) = *(undefined8 *)(pIVar5 + 0x58);
        *(undefined8 *)(puVar30 + -0x58) = 0x44bafd0;
        il2cpp_runtime_helper_022b4080(pIVar5 + 0x70);
        method = (MethodInfo *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
        if (((Il2CppClass *)method != (Il2CppClass *)0x0) &&
           (pUVar6 = *(UnityEngine_AudioSource_o **)&(((Il2CppClass *)method)->_1).byval_arg.bits,
           pUVar6 != (UnityEngine_AudioSource_o *)0x0)) {
          *(undefined8 *)(puVar30 + -0x58) = 0x44baff2;
          fVar35 = UnityEngine_AudioSource__get_time(pUVar6,(MethodInfo *)0x0);
          *(float *)&(((Il2CppClass *)method)->_1).klass = fVar35;
          goto label_044bb02f;
        }
      }
      goto label_044bb042;
    }
    if (pIVar5 == (Il2CppMethodPointer)0x0) goto label_044bb042;
    *(undefined8 *)(pIVar5 + 0x70) = **(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)(puVar30 + -0x58) = 0x44bb02f;
    il2cpp_runtime_helper_022b4080(pIVar5 + 0x70);
label_044bb02f:
    plVar28 = *(long **)(puVar30 + -0x48);
    unaff_R12 = *(long **)(puVar30 + -0x40);
    unaff_R14 = *(Il2CppClass **)(puVar30 + -0x38);
    unaff_R15 = *(long **)(puVar30 + -0x30);
    puVar30 = puVar30 + -0x28;
    method = (MethodInfo *)pIVar14;
    goto ApplicationManagers_MusicManager__PlayImmediateTransition;
  }
label_044bb042:
  *(undefined8 *)(puVar30 + -0x58) = 0x44bb047;
  uVar18 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar30 + -0x58) = uVar18;
  if (g_data_057aea63 == '\0') {
    *(undefined8 *)(puVar30 + -0x60) = 0x44bb066;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    g_data_057aea63 = '\x01';
  }
  lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar22 != 0) {
    fVar35 = *(float *)(lVar22 + 100);
    if (0.0 < fVar35) {
      *(undefined4 *)(lVar22 + 100) = 0;
      *(undefined4 *)(lVar22 + 0x40) = 0;
      *(undefined1 *)(lVar22 + 0x7c) = 1;
    }
    return fVar35;
  }
  *(undefined8 *)(puVar30 + -0x60) = 0x44bb0ac;
  il2cpp_runtime_helper_022b2c90();
  puVar29 = puVar30 + -0x60;
  *(MethodInfo **)(puVar30 + -0x60) = method;
  if (g_data_057aea64 == '\0') {
    *(undefined8 *)(puVar30 + -0x68) = 0x44bb0c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar30 + -0x68) = 0x44bb0d2;
    il2cpp_runtime_helper_023445d0(&"Effect");
    g_data_057aea64 = '\x01';
  }
  plVar19 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if ((SimpleJSONFixed_JSONNode_o *)plVar19 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bb14e:
    *(undefined8 *)(puVar30 + -0x68) = 0x44bb153;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar31 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._7_get_Item.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar30 + -0x68) = 0x44bb10d;
    plVar20 = (long *)(*pIVar5)(plVar19,"Effect",pMVar31);
    if (plVar20 == (long *)0x0) goto label_044bb14e;
    uVar18 = *(undefined8 *)(*plVar20 + 0x1f0);
    pcVar4 = *(code **)(*plVar20 + 0x1e8);
    *(undefined8 *)(puVar30 + -0x68) = 0x44bb128;
    iVar12 = (*pcVar4)(plVar20,uVar18);
    *(undefined8 *)(puVar30 + -0x68) = 0x44bb133;
    uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
    method_00 = (SimpleJSONFixed_JSONNode_c *)*plVar20;
    pMVar31 = (method_00->vtable)._5_get_Item.method;
    pIVar5 = (method_00->vtable)._5_get_Item.methodPtr;
    *(undefined8 *)(puVar30 + -0x68) = 0x44bb148;
    plVar19 = (long *)(*pIVar5)(plVar20,(ulong)uVar13,pMVar31);
    method = *(MethodInfo **)(puVar30 + -0x60);
    puVar29 = puVar30 + -0x58;
  }
  *(long **)(puVar29 + -8) = plVar28;
  *(Il2CppClass **)(puVar29 + -0x10) = pIVar14;
  *(MethodInfo **)(puVar29 + -0x18) = method;
  puVar30 = puVar29 + -0x28;
  if (g_data_057aea68 == '\0') {
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb181;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb18d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb199;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1a5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1b1;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1bd;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1c9;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea68 = '\x01';
  }
  unaff_R15 = &TypeInfo_JSONNode;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb1e8;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar15 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar29 + -0x30) = 0x44bb1f4;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)plVar19,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return extraout_XMM0_Da_02;
  }
  if ((SimpleJSONFixed_JSONNode_o *)plVar19 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bb384:
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb389;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar31 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._28_HasKey.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._28_HasKey.methodPtr;
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb222;
    cVar10 = (*pIVar5)(plVar19,"Name",pMVar31);
    if (cVar10 == '\0') {
      return extraout_XMM0_Da_03;
    }
    pMVar31 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._7_get_Item.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb240;
    pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(plVar19,"Name",pMVar31);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0x30) = 0x44bb254;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb25e;
    pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0x30) = 0x44bb279;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0x30) = 0x44bb28d;
    pIVar14 = (Il2CppClass *)
              ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar17,0,(MethodInfo *)method_00);
    if ((pIVar14 == (Il2CppClass *)0x0) || (pIVar15 = TypeInfo_AudioClip, (pIVar14->_1).image == TypeInfo_AudioClip)) {
      pMVar31 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._7_get_Item.method;
      pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar29 + -0x30) = 0x44bb2c5;
      pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(plVar19,"Volume",pMVar31);
      pIVar15 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar29 + -0x30) = 0x44bb2cf;
      fVar35 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar16,(MethodInfo *)0x0);
      *(float *)(puVar29 + -0x1c) = fVar35;
      unaff_R15 = (long *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
      if ((Il2CppClass *)unaff_R15 != (Il2CppClass *)0x0) {
        if (g_data_057aea6a == '\0') {
          *(undefined8 *)(puVar29 + -0x30) = 0x44bb307;
          il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
          g_data_057aea6a = '\x01';
        }
        *(undefined8 *)(puVar29 + -0x30) = 0x44bb31d;
        pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
        pIVar15 = (Il2CppClass *)0x0;
        *(undefined8 *)(puVar29 + -0x30) = 0x44bb32a;
        System_Object___ctor(pIVar21,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar21[1].klass = 0;
        plVar19 = (long *)0x0;
        if (pIVar21 != (Il2CppObject *)0x0) {
          pIVar21[2].klass = (Il2CppClass *)unaff_R15;
          *(undefined8 *)(puVar29 + -0x30) = 0x44bb346;
          il2cpp_runtime_helper_022b4080(pIVar21 + 2,unaff_R15);
          pIVar21[3].klass = pIVar14;
          *(undefined8 *)(puVar29 + -0x30) = 0x44bb359;
          il2cpp_runtime_helper_022b4080(pIVar21 + 3,pIVar14);
          *(undefined4 *)&pIVar21[2].monitor = *(undefined4 *)(puVar29 + -0x1c);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)unaff_R15,(System_Collections_IEnumerator_o *)pIVar21,
                     (MethodInfo *)0x0);
          return extraout_XMM0_Da_04;
        }
      }
      goto label_044bb384;
    }
  }
  *(undefined8 *)(puVar29 + -0x30) = 0x44bb391;
  uVar18 = il2cpp_runtime_helper_022b2fd0(pIVar14);
  *(Il2CppClass **)(puVar29 + -0x30) = pIVar14;
  *(long **)(puVar29 + -0x38) = plVar19;
  *(undefined8 *)(puVar29 + -0x40) = uVar18;
  if (g_data_057aea65 == '\0') {
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb3b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb3c5;
    il2cpp_runtime_helper_023445d0(&"Transition");
    g_data_057aea65 = '\x01';
  }
  plVar28 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if ((Il2CppClass *)plVar28 != (Il2CppClass *)0x0) {
    pvVar7 = (((Il2CppClass *)plVar28)->_1).image;
    uVar18 = *(undefined8 *)((long)pvVar7 + 0x1b0);
    pcVar4 = *(code **)((long)pvVar7 + 0x1a8);
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb400;
    pIVar15 = "Transition";
    plVar19 = (long *)(*pcVar4)(plVar28,"Transition",uVar18);
    if ((**(long **)(TypeInfo_MusicManager + 0xb8) == 0) ||
       (*(undefined2 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x68) = 0x101,
       (SimpleJSONFixed_JSONNode_o *)plVar19 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_044bb462;
    pMVar31 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._11_get_Count.method;
    pIVar5 = (((SimpleJSONFixed_JSONNode_o *)plVar19)->klass->vtable)._11_get_Count.methodPtr;
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb433;
    iVar12 = (*pIVar5)(plVar19,pMVar31);
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb43e;
    uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
    method_00 = ((SimpleJSONFixed_JSONNode_o *)plVar19)->klass;
    pMVar31 = (method_00->vtable)._5_get_Item.method;
    pIVar5 = (method_00->vtable)._5_get_Item.methodPtr;
    *(undefined8 *)(puVar29 + -0x48) = 0x44bb453;
    method = (MethodInfo *)(*pIVar5)(plVar19,(ulong)uVar13,pMVar31);
    plVar28 = *(long **)(puVar29 + -0x38);
    unaff_R14 = *(Il2CppClass **)(puVar29 + -0x30);
    goto ApplicationManagers_MusicManager__PlayImmediateTransition;
  }
label_044bb462:
  *(undefined8 *)(puVar29 + -0x48) = 0x44bb467;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar29 + -0x48) = unaff_RBP;
  *(long **)(puVar29 + -0x50) = unaff_R15;
  *(long **)(puVar29 + -0x58) = &TypeInfo_MusicManager;
  *(long **)(puVar29 + -0x60) = unaff_R12;
  *(long **)(puVar29 + -0x68) = plVar19;
  pIVar14 = (Il2CppClass *)((ulong)pIVar15 & 0xffffffff);
  plVar20 = plVar28;
  if (g_data_057aea67 == '\0') {
    *(undefined8 *)(puVar29 + -0x70) = 0x44bb493;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    plVar20 = &TypeInfo_MusicPlaylist;
    *(undefined8 *)(puVar29 + -0x70) = 0x44bb49f;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea67 = '\x01';
  }
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    pSVar17 = *(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    *(undefined8 *)(puVar29 + -0x70) = 0x44bb4d1;
    pIVar15 = (Il2CppClass *)plVar28;
    uVar13 = System_String__op_Inequality(pSVar17,(System_String_o *)plVar28,(MethodInfo *)0x0);
    unaff_R12 = (long *)(ulong)uVar13;
    lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
    plVar20 = (long *)0x0;
    if (lVar22 != 0) {
      *(long **)(lVar22 + 0x20) = plVar28;
      plVar20 = (long *)(lVar22 + 0x20);
      *(undefined8 *)(puVar29 + -0x70) = 0x44bb4fa;
      pIVar15 = (Il2CppClass *)plVar28;
      il2cpp_runtime_helper_022b4080();
      lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
      if (lVar22 != 0) {
        cVar10 = *(char *)(lVar22 + 0x68);
        method_00 = (SimpleJSONFixed_JSONNode_c *)CONCAT71((int7)((ulong)method_00 >> 8),cVar10);
        if (*(char *)(lVar22 + 0x60) == '\0') {
          if (cVar10 != '\0') goto label_044bb52e;
          if (0.0 < *(float *)(lVar22 + 100)) {
            *(undefined4 *)(lVar22 + 0x40) = 0;
          }
label_044bb578:
          *(undefined4 *)(lVar22 + 100) = 0;
        }
        else {
          *(undefined4 *)(lVar22 + 0x40) = 0;
          if (cVar10 == '\0') goto label_044bb578;
label_044bb52e:
          plVar19 = &TypeInfo_MusicPlaylist;
          if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
            *(undefined8 *)(puVar29 + -0x70) = 0x44bb546;
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar15 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
          *(undefined8 *)(puVar29 + -0x70) = 0x44bb55e;
          plVar20 = plVar28;
          bVar11 = System_String__op_Equality
                             ((System_String_o *)plVar28,(System_String_o *)pIVar15,(MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
            if (lVar22 == 0) goto label_044bb684;
            goto label_044bb578;
          }
        }
        plVar19 = &TypeInfo_MusicPlaylist;
        if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
          *(undefined8 *)(puVar29 + -0x70) = 0x44bb597;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar15 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
        *(undefined8 *)(puVar29 + -0x70) = 0x44bb5af;
        plVar20 = plVar28;
        bVar11 = System_String__op_Equality
                           ((System_String_o *)plVar28,(System_String_o *)pIVar15,(MethodInfo *)0x0);
        fVar35 = extraout_XMM0_Da_05;
        if ((char)bVar11 == '\0') goto label_044bb618;
        lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
        if (lVar22 == 0) goto label_044bb684;
        if (*(char *)(lVar22 + 0x7c) == '\0') {
label_044bb618:
          lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if (lVar22 == 0) goto label_044bb684;
          bVar33 = (byte)uVar13 | (byte)pIVar14;
          unaff_R12 = (long *)(ulong)CONCAT31((int3)(uVar13 >> 8),bVar33);
          if ((bVar33 == 1) && (fVar35 = 0.0, *(float *)(lVar22 + 100) <= 0.0)) {
            *(undefined4 *)(lVar22 + 0x4c) = 0;
            *(undefined8 *)(puVar29 + -0x70) = 0x44bb648;
            ApplicationManagers_MusicManager__NextSong((MethodInfo *)plVar20);
            fVar35 = extraout_XMM0_Da_08;
          }
        }
        else {
          plVar20 = *(long **)(lVar22 + 0x70);
          pIVar15 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          *(undefined8 *)(puVar29 + -0x70) = 0x44bb5f2;
          bVar11 = System_String__op_Inequality
                             ((System_String_o *)plVar20,(System_String_o *)pIVar15,(MethodInfo *)0x0);
          fVar35 = extraout_XMM0_Da_06;
          if ((char)bVar11 == '\0') goto label_044bb618;
          lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if (lVar22 == 0) goto label_044bb684;
          plVar20 = *(long **)(lVar22 + 0x70);
          fVar35 = *(float *)(lVar22 + 0x78);
          *(undefined8 *)(puVar29 + -0x70) = 0x44bb616;
          ApplicationManagers_MusicManager__SetSong((System_String_o *)plVar20,fVar35,(MethodInfo *)pIVar15);
          fVar35 = extraout_XMM0_Da_07;
        }
        if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
          *(undefined1 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x7c) = 0;
          return fVar35;
        }
      }
    }
  }
label_044bb684:
  *(undefined8 *)(puVar29 + -0x70) = 0x44bb689;
  uVar18 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar29 + -0x70) = plVar28;
  *(long **)(puVar29 + -0x78) = &TypeInfo_MusicManager;
  *(Il2CppClass **)(puVar29 + -0x80) = pIVar14;
  *(undefined8 *)(puVar29 + -0x88) = unaff_R13;
  *(long **)(puVar29 + -0x90) = unaff_R12;
  *(long **)(puVar29 + -0x98) = plVar19;
  *(undefined8 *)(puVar29 + -0xa0) = uVar18;
  *(undefined4 *)(puVar29 + -0x9c) = extraout_XMM0_Da_09;
  if (g_data_057aea6b == '\0') {
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AudioClip);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb6f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb705;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb711;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb71d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb729;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb735;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb741;
    il2cpp_runtime_helper_023445d0(&"Music");
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb74d;
    il2cpp_runtime_helper_023445d0(&"Playlist");
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb759;
    il2cpp_runtime_helper_023445d0(&"");
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb765;
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057aea6b = '\x01';
  }
  *(undefined8 *)(puVar29 + -0xa8) = 0x44bb774;
  pSVar16 = ApplicationManagers_MusicManager__FindSong((System_String_o *)plVar20,(MethodInfo *)pIVar15);
  lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
  pIVar32 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (lVar22 == 0) goto label_044bbd3d;
  *(undefined1 *)(lVar22 + 0x48) = 0;
  *(MethodInfo **)(lVar22 + 0x58) = "";
  *(undefined8 *)(puVar29 + -0xa8) = 0x44bb7af;
  il2cpp_runtime_helper_022b4080(lVar22 + 0x58);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb7c8;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar14 = (Il2CppClass *)0x0;
  pIVar25 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar29 + -0xa8) = 0x44bb7d7;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar16,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  *(undefined4 *)(puVar29 + -0xa0) = 0;
  if ((char)bVar11 == '\0') goto label_044bbc73;
  pIVar15 = pIVar25;
  if (pSVar16 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bbd3d:
    pIVar24 = pIVar32;
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bbd42;
    il2cpp_runtime_helper_022b2c90();
    pIVar32 = pIVar14;
    pIVar25 = pIVar24;
  }
  else {
    plVar28 = &"Name";
    pMVar31 = (pSVar16->klass->vtable)._28_HasKey.method;
    pIVar5 = (pSVar16->klass->vtable)._28_HasKey.methodPtr;
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb80f;
    cVar10 = (*pIVar5)(pSVar16,"Name",pMVar31);
    if (cVar10 == '\0') {
      pIVar14 = *(Il2CppClass **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
      pMVar31 = (pSVar16->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bbab7;
      plVar20 = (long *)(*pIVar5)(pSVar16,"Playlist",pMVar31);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar29 + -0xa8) = 0x44bbacc;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar15 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bbad6;
      pIVar25 = (Il2CppClass *)
                SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                          ((SimpleJSONFixed_JSONNode_o *)plVar20,(MethodInfo *)0x0);
      if (pIVar14 != (Il2CppClass *)0x0) {
        pGVar8 = (pIVar14->_1).image;
        pMVar31 = (pGVar8->vtable)._7_unknown.method;
        pIVar5 = (pGVar8->vtable)._7_unknown.methodPtr;
        *(undefined8 *)(puVar29 + -0xa8) = 0x44bbaf5;
        pIVar24 = (Il2CppClass *)(*pIVar5)(pIVar14,pIVar25,pMVar31);
        pIVar15 = pIVar25;
        if (pIVar24 != (Il2CppClass *)0x0) {
          pUVar27 = (pIVar24->_1).image;
          pIVar15 = pUVar27[1]._1.klass;
          pcVar4 = pUVar27[1]._1.interopData;
          *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb14;
          iVar12 = (*pcVar4)(pIVar24,pIVar15);
          *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb1f;
          uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
          pUVar27 = (pIVar24->_1).image;
          pcVar3 = pUVar27[1]._1.namespaze;
          pIVar15 = (Il2CppClass *)(ulong)uVar13;
          pcVar4 = (code *)pUVar27[1]._1.name;
          *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb34;
          plVar19 = (long *)(*pcVar4)(pIVar24,pIVar15,pcVar3);
          plVar20 = (long *)pIVar24;
          if (plVar19 != (long *)0x0) {
            uVar18 = *(undefined8 *)(*plVar19 + 0x1b0);
            pcVar4 = *(code **)(*plVar19 + 0x1a8);
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb57;
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar4)(plVar19,"Name",uVar18);
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb61;
            plVar20 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb7c;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbb90;
            pIVar24 = (Il2CppClass *)
                      ApplicationManagers_ResourceManager__LoadAsset
                                ("Music",(System_String_o *)plVar20,0,(MethodInfo *)pUVar27);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbbab;
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar32 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbbba;
            bVar11 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pIVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            pIVar14 = pIVar32;
            if ((((char)bVar11 != '\0') && (pIVar14 = pIVar24, pIVar24 != (Il2CppClass *)0x0)) &&
               (pIVar15 = TypeInfo_AudioClip, pIVar25 = pIVar24, (pIVar24->_1).image != TypeInfo_AudioClip))
            goto label_044bbd45;
            uVar18 = *(undefined8 *)(*plVar19 + 0x1b0);
            pcVar4 = *(code **)(*plVar19 + 0x1a8);
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbbf7;
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar4)(plVar19,"Volume",uVar18);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc0c;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc16;
            fVar35 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar16,(MethodInfo *)0x0);
            *(float *)(puVar29 + -0xa0) = fVar35;
            lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
            uVar18 = *(undefined8 *)(*plVar19 + 0x1b0);
            pcVar4 = *(code **)(*plVar19 + 0x1a8);
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc4d;
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar4)(plVar19,"Name",uVar18);
            pIVar15 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc57;
            pIVar25 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
            plVar20 = (long *)0x0;
            pIVar32 = (Il2CppClass *)&TypeInfo_MusicManager;
            if (lVar22 != 0) {
              *(Il2CppClass **)(lVar22 + 0x58) = pIVar25;
              plVar20 = (long *)(lVar22 + 0x58);
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc73;
              il2cpp_runtime_helper_022b4080(plVar20);
              goto label_044bbc73;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
    pMVar31 = (pSVar16->klass->vtable)._7_get_Item.method;
    pIVar5 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb82f;
    pSVar23 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar16,"Name",pMVar31);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb844;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb84e;
    plVar20 = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar23,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb869;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb87d;
    pIVar24 = (Il2CppClass *)
              ApplicationManagers_ResourceManager__LoadAsset
                        ("Music",(System_String_o *)plVar20,0,(MethodInfo *)method_00);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb898;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0xa8) = 0x44bb8a7;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pIVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pIVar14 = (Il2CppClass *)0x0;
    if ((((char)bVar11 == '\0') || (pIVar14 = pIVar24, pIVar24 == (Il2CppClass *)0x0)) ||
       (pIVar15 = TypeInfo_AudioClip, pIVar32 = (Il2CppClass *)0x0, pIVar25 = pIVar24,
       (pIVar24->_1).image == TypeInfo_AudioClip)) {
      pMVar31 = (pSVar16->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb8e4;
      pSVar23 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar16,"Volume",pMVar31);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar29 + -0xa8) = 0x44bb8f9;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb903;
      fVar35 = SimpleJSONFixed_JSONNode__op_Implicit_3f79ed0(pSVar23,(MethodInfo *)0x0);
      *(float *)(puVar29 + -0xa0) = fVar35;
      lVar22 = **(long **)(TypeInfo_MusicManager + 0xb8);
      pMVar31 = (pSVar16->klass->vtable)._7_get_Item.method;
      pIVar5 = (pSVar16->klass->vtable)._7_get_Item.methodPtr;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb934;
      pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pIVar5)(pSVar16,"Name",pMVar31);
      pIVar15 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar29 + -0xa8) = 0x44bb93e;
      pIVar25 = (Il2CppClass *)SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
      plVar20 = (long *)(Il2CppClass *)0x0;
      pIVar32 = (Il2CppClass *)&TypeInfo_MusicManager;
      if (lVar22 != 0) {
        *(Il2CppClass **)(lVar22 + 0x58) = pIVar25;
        *(undefined8 *)(puVar29 + -0xa8) = 0x44bb95a;
        il2cpp_runtime_helper_022b4080(lVar22 + 0x58);
        plVar28 = &TypeInfo_SceneLoader;
        plVar20 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if ((Il2CppClass *)plVar20 != (Il2CppClass *)0x0) {
          pUVar27 = (((Il2CppClass *)plVar20)->_1).image;
          bVar33 = (TypeInfo_InGameManager->_2).naturalAligment;
          if ((bVar33 <= (pUVar27->_2).naturalAligment) &&
             ((pUVar27->_2).typeHierarchy[(ulong)bVar33 - 1] == TypeInfo_InGameManager)) {
            lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
            pIVar15 = pIVar25;
            pIVar32 = (Il2CppClass *)&TypeInfo_InGameManager;
            if ((lVar22 == 0) ||
               (lVar22 = *(long *)(lVar22 + 0x28), pIVar32 = (Il2CppClass *)&TypeInfo_InGameManager, lVar22 == 0))
            goto label_044bbd3d;
            if (0.0 < *(float *)(lVar22 + 0x14)) {
              lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              pIVar32 = (Il2CppClass *)&TypeInfo_InGameManager;
              if ((lVar22 == 0) ||
                 (lVar22 = *(long *)(lVar22 + 0xd8), pIVar32 = (Il2CppClass *)&TypeInfo_InGameManager, lVar22 == 0))
              goto label_044bbd3d;
              if (*(char *)(lVar22 + 0x11) != '\0') {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  *(undefined8 *)(puVar29 + -0xa8) = 0x44bba25;
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar25 = (Il2CppClass *)0x0;
                *(undefined8 *)(puVar29 + -0xa8) = 0x44bba31;
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)plVar20,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar11 != '\0') {
                  pIVar24 = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
                  pIVar15 = pIVar25;
                  pIVar32 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (pIVar24 == (Il2CppClass *)0x0) goto label_044bbd3d;
                  pGVar8 = (pIVar24->_1).image;
                  bVar33 = (TypeInfo_InGameManager->_2).naturalAligment;
                  pIVar15 = TypeInfo_InGameManager;
                  pIVar32 = pIVar14;
                  pIVar25 = (Il2CppClass *)&TypeInfo_InGameManager;
                  if (((pGVar8->_2).naturalAligment < bVar33) ||
                     ((pGVar8->_2).typeHierarchy[(ulong)bVar33 - 1] != TypeInfo_InGameManager)) goto label_044bbd45;
                  pIVar25 = (Il2CppClass *)0x0;
                  *(undefined8 *)(puVar29 + -0xa8) = 0x44bba7f;
                  GameManagers_InGameManager__OnSongChange
                            ((GameManagers_InGameManager_o *)pIVar24,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
label_044bbc73:
        __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
        pIVar15 = pIVar25;
        pIVar32 = (Il2CppClass *)&TypeInfo_MusicManager;
        if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
          pIVar15 = (Il2CppClass *)0x0;
          *(undefined8 *)(puVar29 + -0xa8) = 0x44bbc90;
          UnityEngine_MonoBehaviour__StopAllCoroutines(__this,(MethodInfo *)0x0);
          pIVar32 = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
          if (pIVar32 != (Il2CppClass *)0x0) {
            if (g_data_057aea6f == '\0') {
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbcbb;
              il2cpp_runtime_helper_023445d0(&TypeInfo_FadeNextSong_d__46);
              g_data_057aea6f = '\x01';
            }
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbcd1;
            pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeNextSong_d__46);
            pIVar15 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar29 + -0xa8) = 0x44bbcde;
            System_Object___ctor(pIVar21,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar21[1].klass = 0;
            plVar20 = (long *)(Il2CppClass *)0x0;
            if (pIVar21 != (Il2CppObject *)0x0) {
              pIVar21[2].klass = pIVar32;
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbcfa;
              il2cpp_runtime_helper_022b4080(pIVar21 + 2,pIVar32);
              pIVar21[2].monitor = pIVar14;
              *(undefined8 *)(puVar29 + -0xa8) = 0x44bbd0d;
              il2cpp_runtime_helper_022b4080(&pIVar21[2].monitor,pIVar14);
              *(undefined4 *)((long)&pIVar21[3].klass + 4) = *(undefined4 *)(puVar29 + -0xa0);
              *(undefined4 *)&pIVar21[3].klass = *(undefined4 *)(puVar29 + -0x9c);
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)pIVar32,(System_Collections_IEnumerator_o *)pIVar21,
                         (MethodInfo *)0x0);
              return extraout_XMM0_Da_10;
            }
          }
        }
      }
      goto label_044bbd3d;
    }
  }
label_044bbd45:
  *(undefined8 *)(puVar29 + -0xa8) = 0x44bbd4a;
  il2cpp_runtime_helper_022b2fd0();
  *(long **)(puVar29 + -0xa8) = plVar20;
  if (g_data_057aea6d == '\0') {
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd66;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd72;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd7e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd8a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbd96;
    il2cpp_runtime_helper_023445d0(&"Custom");
    pIVar24 = (Il2CppClass *)&"Name";
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbda2;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea6d = '\x01';
  }
  pIVar14 = (Il2CppClass *)&TypeInfo_MusicManager;
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    pIVar24 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
    pIVar15 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)(puVar29 + -0xb0) = 0x44bbde9;
    bVar11 = System_String__op_Equality
                       ((System_String_o *)pIVar24,(System_String_o *)pIVar15,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return extraout_XMM0_Da_11;
    }
    if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
      pIVar24 = *(Il2CppClass **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
      *(undefined8 *)(puVar29 + -0xb0) = 0x44bbe1a;
      pIVar15 = "Custom";
      bVar11 = System_String__op_Equality
                         ((System_String_o *)pIVar24,(System_String_o *)"Custom",(MethodInfo *)0x0);
      plVar19 = *(long **)(TypeInfo_MusicManager + 0xb8);
      if ((char)bVar11 == '\0') {
        if ((*plVar19 != 0) && (pIVar24 = (Il2CppClass *)plVar19[1], pIVar24 != (Il2CppClass *)0x0)) {
          pIVar15 = *(Il2CppClass **)(*plVar19 + 0x20);
          pGVar8 = (pIVar24->_1).image;
          pMVar31 = (pGVar8->vtable)._7_unknown.method;
          pIVar5 = (pGVar8->vtable)._7_unknown.methodPtr;
          *(undefined8 *)(puVar29 + -0xb0) = 0x44bbea0;
          pIVar26 = (Il2CppClass *)(*pIVar5)(pIVar24,pIVar15,pMVar31);
          if (pIVar26 != (Il2CppClass *)0x0) {
            pGVar8 = (pIVar26->_1).image;
            pMVar31 = (pGVar8->vtable)._11_unknown.method;
            pIVar5 = (pGVar8->vtable)._11_unknown.methodPtr;
            *(undefined8 *)(puVar29 + -0xb0) = 0x44bbebf;
            iVar12 = (*pIVar5)(pIVar26,pMVar31);
            *(undefined8 *)(puVar29 + -0xb0) = 0x44bbeca;
            uVar13 = UnityEngine_Random__Range_4df2410(0,iVar12,(MethodInfo *)0x0);
            pGVar8 = (pIVar26->_1).image;
            pMVar31 = (pGVar8->vtable)._5_unknown.method;
            pIVar15 = (Il2CppClass *)(ulong)uVar13;
            pIVar5 = (pGVar8->vtable)._5_unknown.methodPtr;
            *(undefined8 *)(puVar29 + -0xb0) = 0x44bbedf;
            pIVar24 = pIVar26;
            plVar19 = (long *)(*pIVar5)(pIVar26,pIVar15,pMVar31);
            pIVar14 = pIVar26;
            if (plVar19 != (long *)0x0) {
              uVar18 = *(undefined8 *)(*plVar19 + 0x1b0);
              pcVar4 = *(code **)(*plVar19 + 0x1a8);
              *(undefined8 *)(puVar29 + -0xb0) = 0x44bbf01;
              pSVar16 = (SimpleJSONFixed_JSONNode_o *)(*pcVar4)(plVar19,"Name",uVar18);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                *(undefined8 *)(puVar29 + -0xb0) = 0x44bbf1c;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar31 = (MethodInfo *)0x0;
              *(undefined8 *)(puVar29 + -0xb0) = 0x44bbf26;
              pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar16,(MethodInfo *)0x0);
              ApplicationManagers_MusicManager__SetSong(pSVar17,0.0,pMVar31);
              return extraout_XMM0_Da_14;
            }
          }
        }
      }
      else {
        lVar22 = *plVar19;
        if (lVar22 != 0) {
          __this_00 = *(System_Collections_Generic_List_object__o **)(lVar22 + 0x50);
          pIVar24 = (Il2CppClass *)0x0;
          if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
            iVar1 = (__this_00->fields)._size;
            if (iVar1 == 0) {
              return extraout_XMM0_Da_12;
            }
            uVar13 = *(int *)(lVar22 + 0x4c) + 1;
            pMVar31 = (MethodInfo *)0x0;
            if ((int)uVar13 < iVar1) {
              pMVar31 = (MethodInfo *)(ulong)uVar13;
            }
            *(int32_t *)(lVar22 + 0x4c) = (int32_t)pMVar31;
            *(undefined8 *)(puVar29 + -0xb0) = 0x44bbe67;
            pSVar17 = (System_String_o *)
                      System_Collections_Generic_List_object___get_Item
                                (__this_00,(int32_t)pMVar31,MethodInfo_String_get_Item);
            ApplicationManagers_MusicManager__SetSong(pSVar17,0.0,pMVar31);
            return extraout_XMM0_Da_13;
          }
        }
      }
    }
  }
  *(undefined8 *)(puVar29 + -0xb0) = 0x44bbf37;
  auVar37 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar29 + -0xb0) = plVar28;
  *(Il2CppClass **)(puVar29 + -0xb8) = pIVar25;
  *(Il2CppClass **)(puVar29 + -0xc0) = pIVar32;
  *(Il2CppClass **)(puVar29 + -200) = pIVar14;
  *(long *)(puVar29 + -0xd0) = auVar37._0_8_;
  uVar34 = auVar37._8_8_ & 0xffffffff;
  if (g_data_057aea83 == '\0') {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf65;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf71;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf7d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf89;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbf95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbfa1;
    il2cpp_runtime_helper_023445d0(&"/");
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbfad;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea83 = '\x01';
  }
  *(undefined8 *)(puVar29 + -0xd8) = 0x44bbfc8;
  pMVar31 = "";
  bVar11 = System_String__op_Inequality
                     ((System_String_o *)pIVar24,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbfe3;
    pMVar31 = "/";
    pIVar15 = (Il2CppClass *)
              System_String__Concat_3af7150
                        ((System_String_o *)pIVar24,(System_String_o *)"/",(System_String_o *)pIVar15
                         ,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bbffe;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar29 + -0xd8) = 0x44bc006;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              ApplicationManagers_ResourceManager__GetExternalTexture((System_String_o *)pIVar15,pMVar31);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bc021;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar14 = (Il2CppClass *)0x0;
  *(undefined8 *)(puVar29 + -0xd8) = 0x44bc02d;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  cVar10 = (char)uVar34;
  if ((char)bVar11 != '\0') {
    fVar35 = extraout_XMM0_Da_15;
    if (cVar10 != '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)(puVar29 + -0xd8) = 0x44bc04b;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar32 = (Il2CppClass *)0x0;
      if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      *(undefined8 *)(puVar29 + -0xd8) = 0x44bc073;
      pIVar14 = pIVar15;
      bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         (pSVar9,(Il2CppObject *)pIVar15,MethodInfo_Boolean_ContainsKey);
      fVar35 = extraout_XMM0_Da_16;
      if ((char)bVar11 == '\0') {
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          *(undefined8 *)(puVar29 + -0xd8) = 0x44bc088;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
        pIVar32 = (Il2CppClass *)0x0;
        if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
        *(undefined8 *)(puVar29 + -0xd8) = 0x44bc0b3;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar9,(Il2CppObject *)pIVar15,(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
        fVar35 = extraout_XMM0_Da_17;
      }
    }
    return fVar35;
  }
  if (cVar10 == '\0') {
    UnityEngine_Resources__Load((System_String_o *)pIVar15,(MethodInfo *)0x0);
    return extraout_XMM0_Da_19;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bc0db;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
  pIVar32 = (Il2CppClass *)0x0;
  if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    *(undefined8 *)(puVar29 + -0xd8) = 0x44bc103;
    pIVar14 = pIVar15;
    bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar9,(Il2CppObject *)pIVar15,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 == '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        *(undefined8 *)(puVar29 + -0xd8) = 0x44bc118;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar14 = (Il2CppClass *)0x0;
      *(undefined8 *)(puVar29 + -0xd8) = 0x44bc12f;
      pIVar32 = pIVar15;
      value = UnityEngine_Resources__Load((System_String_o *)pIVar15,(MethodInfo *)0x0);
      if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      *(undefined8 *)(puVar29 + -0xd8) = 0x44bc14c;
      pIVar14 = pIVar15;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_01,(Il2CppObject *)pIVar15,(Il2CppObject *)value,MethodInfo_Void_set_Item);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0xd8) = 0x44bc15d;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar32 = (Il2CppClass *)0x0;
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)pIVar15,MethodInfo_Object_get_Item);
      return extraout_XMM0_Da_18;
    }
  }
label_044bc19f:
  *(undefined8 *)(puVar29 + -0xd8) = 0x44bc1a4;
  uVar36 = il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar29 + -0xd8) = &TypeInfo_ResourceManager;
  *(ulong *)(puVar29 + -0xe0) = uVar34;
  *(Il2CppClass **)(puVar29 + -0xe8) = pIVar15;
  *(undefined4 *)(puVar29 + -0xec) = uVar36;
  if (g_data_057aea6a == '\0') {
    *(undefined8 *)(puVar29 + -0x100) = 0x44bc1da;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
    g_data_057aea6a = '\x01';
  }
  *(undefined8 *)(puVar29 + -0x100) = 0x44bc1f0;
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
  uVar36 = 0;
  *(undefined8 *)(puVar29 + -0x100) = 0x44bc1fd;
  pIVar21 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = pIVar32;
    *(undefined8 *)(puVar29 + -0x100) = 0x44bc219;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar32);
    __this_02[3].klass = pIVar14;
    *(undefined8 *)(puVar29 + -0x100) = 0x44bc22c;
    il2cpp_runtime_helper_022b4080(__this_02 + 3,pIVar14);
    fVar35 = *(float *)(puVar29 + -0xec);
    *(float *)&__this_02[2].monitor = fVar35;
    return fVar35;
  }
  *(undefined8 *)(puVar29 + -0x100) = 0x44bc249;
  uVar18 = il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_Dictionary_object__object__o **)(puVar29 + -0x100) = __this_01;
  *(undefined8 *)(puVar29 + -0x108) = 0;
  *(undefined8 *)(puVar29 + -0x110) = uVar18;
  *(undefined8 *)(puVar29 + -0x118) = 0x44bc25f;
  System_Object___ctor(pIVar21,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar21[1].klass = uVar36;
  return extraout_XMM0_Da_20;
}


// ApplicationManagers.MusicManager$$GetCurrentSong
// il2cpp: System_String_o* ApplicationManagers_MusicManager__GetCurrentSong (const MethodInfo* method);
// 0x44bd070

System_String_o * ApplicationManagers_MusicManager__GetCurrentSong(MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  MethodInfo *pMVar1;
  char cVar2;
  bool_conflict bVar3;
  System_Collections_Generic_HashSet_object__o *__this_08;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  MethodInfo *pMVar5;
  System_String_o *item;
  System_Collections_Generic_List_object__o *pSVar6;
  UnityEngine_MonoBehaviour_o *x;
  undefined4 extraout_var;
  UnityEngine_Object_o *target;
  UnityEngine_AudioClip_o *clip;
  System_String_o *extraout_RAX;
  System_String_o *extraout_RAX_00;
  UnityEngine_MonoBehaviour_o *__this_09;
  undefined8 *unaff_R14;
  long *unaff_R15;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar7;
  Il2CppMethodPointer in_stack_fffffffffffffe98;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffea0;
  InvokerMethod in_stack_fffffffffffffea8;
  Il2CppObject *in_stack_fffffffffffffeb0;
  Il2CppClass *in_stack_fffffffffffffeb8;
  Il2CppType *in_stack_fffffffffffffec0;
  System_Collections_Generic_List_T__o *in_stack_fffffffffffffec8;
  _union_13 in_stack_fffffffffffffed0;
  _union_14 _Stack_128;
  undefined1 auStack_120 [80];
  undefined1 auStack_d0 [80];
  Il2CppMethodPointer pIStack_80;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_78;
  InvokerMethod pIStack_70;
  Il2CppObject *pIStack_68;
  Il2CppClass *pIStack_60;
  Il2CppType *pIStack_58;
  System_Collections_Generic_List_T__o *pSStack_50;
  _union_13 _Stack_48;
  _union_14 _Stack_40;
  long *plStack_38;
  
  if (g_data_057aea73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea73 = '\x01';
  }
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    bVar3 = System_String__op_Equality
                      (*(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x58),"",
                       (MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return "None";
    }
    if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
      return *(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x58);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_38 = &TypeInfo_MusicManager;
  if (g_data_057aea74 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0(&"Name");
    g_data_057aea74 = '\x01';
  }
  auStack_120._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_120._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_120._32_8_ = (Il2CppClass *)0x0;
  auStack_120._40_8_ = (Il2CppType *)0x0;
  auStack_120._16_8_ = (InvokerMethod)0x0;
  auStack_120._24_8_ = (Il2CppObject *)0x0;
  auStack_120._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_120._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_120._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  pSStack_50 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_48.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIStack_60 = (Il2CppClass *)0x0;
  pIStack_58 = (Il2CppType *)0x0;
  pIStack_70 = (InvokerMethod)0x0;
  pIStack_68 = (Il2CppObject *)0x0;
  pIStack_80 = (Il2CppMethodPointer)0x0;
  pSStack_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  _Stack_40.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  auStack_d0._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_d0._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_d0._32_8_ = (Il2CppClass *)0x0;
  auStack_d0._40_8_ = (Il2CppType *)0x0;
  auStack_d0._16_8_ = (InvokerMethod)0x0;
  auStack_d0._24_8_ = (Il2CppObject *)0x0;
  auStack_d0._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_d0._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_d0._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  __this_08 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this_08,MethodInfo_HashSet_1_System_String);
  pSVar4 = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  pMVar1 = (MethodInfo *)&TypeInfo_MusicManager;
  if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bd536:
    pMVar5 = pMVar1;
    il2cpp_runtime_helper_022b2c90();
label_044bd53b:
    x = (UnityEngine_MonoBehaviour_o *)
        (**(code **)(pMVar5->methodPointer + 0x1a8))
                  (pMVar5,*unaff_R14,*(undefined8 *)(pMVar5->methodPointer + 0x1b0));
    if (*(int *)(*unaff_R15 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    SimpleJSONFixed_JSONNode__op_Implicit_3f79b00((SimpleJSONFixed_JSONNode_o *)x,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aea75 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aea75 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_09 = x;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (x == (UnityEngine_MonoBehaviour_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aea76 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          g_data_057aea76 = '\x01';
        }
        pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_System_String);
        __this_09[2].fields.m_CachedPtr = (intptr_t)pSVar6;
        il2cpp_runtime_helper_022b4080(&__this_09[2].fields,pSVar6);
        __this_09[3].fields.m_CachedPtr = **(intptr_t **)(g_data_057b9c00 + 0xb8);
        il2cpp_runtime_helper_022b4080(&__this_09[3].fields);
        UnityEngine_MonoBehaviour___ctor(__this_09,(MethodInfo *)0x0);
        return extraout_RAX_00;
      }
      target = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
      clip = UnityEngine_AudioSource__get_clip((UnityEngine_AudioSource_o *)x,(MethodInfo *)0x0);
      UnityEngine_AudioSource__PlayOneShot((UnityEngine_AudioSource_o *)x,clip,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    return (System_String_o *)CONCAT44(extraout_var,bVar3);
  }
  SimpleJSONFixed_JSONNode__get_Values
            ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&stack0xfffffffffffffe98,pSVar4,(MethodInfo *)0x0);
  _Stack_40 = _Stack_128;
  __this.fields.m_Enumerator.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe98;
  __this.fields.m_Enumerator.fields._0_8_ = __this_08;
  __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea0;
  __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
       (Il2CppObject *)in_stack_fffffffffffffea8;
  __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb0;
  __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffeb8;
  __this.fields.m_Enumerator.fields.m_Array.fields._list =
       (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec0;
  __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffec8;
  __this.fields.m_Enumerator.fields.m_Array.fields._current =
       (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed0.rgctx_data;
  pIStack_80 = in_stack_fffffffffffffe98;
  pSStack_78 = in_stack_fffffffffffffea0;
  pIStack_70 = in_stack_fffffffffffffea8;
  pIStack_68 = in_stack_fffffffffffffeb0;
  pIStack_60 = in_stack_fffffffffffffeb8;
  pIStack_58 = in_stack_fffffffffffffec0;
  pSStack_50 = in_stack_fffffffffffffec8;
  _Stack_48 = in_stack_fffffffffffffed0;
  SimpleJSONFixed_JSONNode_ValueEnumerator__GetEnumerator
            ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&stack0xfffffffffffffe98,__this,
             (MethodInfo *)&pIStack_80);
  auStack_120._64_8_ = _Stack_128;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe98;
  __this_00.fields.m_Enumerator.fields._0_8_ = __this_08;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea0;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
       (Il2CppObject *)in_stack_fffffffffffffea8;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb0;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffeb8;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._list =
       (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec0;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffec8;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._current =
       (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed0.rgctx_data;
  auStack_120._0_8_ = in_stack_fffffffffffffe98;
  auStack_120._8_8_ = in_stack_fffffffffffffea0;
  auStack_120._16_8_ = in_stack_fffffffffffffea8;
  auStack_120._24_8_ = in_stack_fffffffffffffeb0;
  auStack_120._32_8_ = in_stack_fffffffffffffeb8;
  auStack_120._40_8_ = in_stack_fffffffffffffec0;
  auStack_120._48_8_ = in_stack_fffffffffffffec8;
  auStack_120._56_8_ = in_stack_fffffffffffffed0;
  bVar3 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext(__this_00,(MethodInfo *)auStack_120);
  if ((char)bVar3 != '\0') {
    unaff_R15 = &TypeInfo_JSONNode;
    unaff_R14 = &"Name";
    do {
      __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe98;
      __this_02.fields.m_Enumerator.fields._0_8_ = __this_08;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea0;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)in_stack_fffffffffffffea8;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb0;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffeb8;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec0;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffec8;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed0.rgctx_data;
      pSVar4 = SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current(__this_02,(MethodInfo *)auStack_120);
      pMVar1 = (MethodInfo *)auStack_120;
      if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044bd536;
      (*(pSVar4->klass->vtable)._32_unknown.methodPtr)
                (&stack0xfffffffffffffe98,pSVar4,(pSVar4->klass->vtable)._32_unknown.method);
      auStack_d0._64_8_ = _Stack_128;
      __this_03.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe98;
      __this_03.fields._0_8_ = __this_08;
      __this_03.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea0;
      __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffea8;
      __this_03.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb0;
      __this_03.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffeb8;
      __this_03.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec0;
      __this_03.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffec8;
      __this_03.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed0.rgctx_data;
      auStack_d0._0_8_ = in_stack_fffffffffffffe98;
      auStack_d0._8_8_ = in_stack_fffffffffffffea0;
      auStack_d0._16_8_ = in_stack_fffffffffffffea8;
      auStack_d0._24_8_ = in_stack_fffffffffffffeb0;
      auStack_d0._32_8_ = in_stack_fffffffffffffeb8;
      auStack_d0._40_8_ = in_stack_fffffffffffffec0;
      auStack_d0._48_8_ = in_stack_fffffffffffffec8;
      auStack_d0._56_8_ = in_stack_fffffffffffffed0;
      bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_03,(MethodInfo *)auStack_d0);
      if ((char)bVar3 != '\0') {
        if (__this_08 == (System_Collections_Generic_HashSet_object__o *)0x0) {
          do {
            __this_04.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe98;
            __this_04.fields._0_8_ = __this_08;
            __this_04.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea0;
            __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffea8;
            __this_04.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb0;
            __this_04.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffeb8;
            __this_04.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec0;
            __this_04.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffec8;
            __this_04.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed0.rgctx_data;
            SVar7 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_04,(MethodInfo *)auStack_d0);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar5 = (MethodInfo *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar7,(MethodInfo *)0x0);
            pMVar1 = (MethodInfo *)SVar7.fields.key;
            if (pMVar5 == (MethodInfo *)0x0) goto label_044bd536;
            cVar2 = (**(code **)(pMVar5->methodPointer + 0x2f8))
                              (pMVar5,"Name",*(undefined8 *)(pMVar5->methodPointer + 0x300));
            if (cVar2 != '\0') goto label_044bd53b;
            __this_05.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe98;
            __this_05.fields._0_8_ = __this_08;
            __this_05.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea0;
            __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffea8;
            __this_05.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb0;
            __this_05.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffeb8;
            __this_05.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec0;
            __this_05.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffec8;
            __this_05.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed0.rgctx_data;
            bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_05,(MethodInfo *)auStack_d0);
          } while ((char)bVar3 != '\0');
        }
        else {
          do {
            __this_07.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe98;
            __this_07.fields._0_8_ = __this_08;
            __this_07.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea0;
            __this_07.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffea8;
            __this_07.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb0;
            __this_07.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffeb8;
            __this_07.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec0;
            __this_07.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffec8;
            __this_07.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed0.rgctx_data;
            SVar7 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_07,(MethodInfo *)auStack_d0);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar7,(MethodInfo *)0x0);
            pMVar1 = (MethodInfo *)SVar7.fields.key;
            if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044bd536;
            cVar2 = (*(pSVar4->klass->vtable)._28_HasKey.methodPtr)
                              (pSVar4,"Name",(pSVar4->klass->vtable)._28_HasKey.method);
            if (cVar2 != '\0') {
              pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                       (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar4,"Name",(pSVar4->klass->vtable)._7_get_Item.method);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              item = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar4,(MethodInfo *)0x0);
              System_Collections_Generic_HashSet_object___Add(__this_08,(Il2CppObject *)item,MethodInfo_Boolean_Add);
            }
            __this_06.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe98;
            __this_06.fields._0_8_ = __this_08;
            __this_06.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea0;
            __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffea8;
            __this_06.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb0;
            __this_06.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffeb8;
            __this_06.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec0;
            __this_06.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffec8;
            __this_06.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed0.rgctx_data;
            bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_06,(MethodInfo *)auStack_d0);
          } while ((char)bVar3 != '\0');
        }
      }
      __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe98;
      __this_01.fields.m_Enumerator.fields._0_8_ = __this_08;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea0;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)in_stack_fffffffffffffea8;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb0;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffeb8;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec0;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffec8;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed0.rgctx_data;
      bVar3 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext(__this_01,(MethodInfo *)auStack_120);
    } while ((char)bVar3 != '\0');
  }
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor_362ba10
            (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)__this_08,MethodInfo_List_1_System_String);
  return (System_String_o *)pSVar6;
}


// ApplicationManagers.MusicManager$$GetAllSongs
// il2cpp: System_Collections_Generic_List_string__o* ApplicationManagers_MusicManager__GetAllSongs (const MethodInfo* method);
// 0x44bd110

System_Collections_Generic_List_string__o * ApplicationManagers_MusicManager__GetAllSongs(MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  char cVar1;
  bool_conflict bVar2;
  System_Collections_Generic_HashSet_object__o *__this_08;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  MethodInfo *pMVar4;
  System_String_o *item;
  System_Collections_Generic_List_string__o *__this_09;
  UnityEngine_MonoBehaviour_o *x;
  undefined4 extraout_var;
  UnityEngine_Object_o *target;
  UnityEngine_AudioClip_o *clip;
  System_Collections_Generic_List_string__o *extraout_RAX;
  System_Collections_Generic_List_object__o *__this_10;
  System_Collections_Generic_List_string__o *extraout_RAX_00;
  MethodInfo *unaff_RBX;
  UnityEngine_MonoBehaviour_o *__this_11;
  undefined8 *unaff_R14;
  long *unaff_R15;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar5;
  Il2CppMethodPointer in_stack_fffffffffffffea0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffea8;
  InvokerMethod in_stack_fffffffffffffeb0;
  Il2CppObject *in_stack_fffffffffffffeb8;
  Il2CppClass *in_stack_fffffffffffffec0;
  Il2CppType *in_stack_fffffffffffffec8;
  System_Collections_Generic_List_T__o *in_stack_fffffffffffffed0;
  _union_13 in_stack_fffffffffffffed8;
  _union_14 local_120;
  undefined1 local_118 [80];
  undefined1 local_c8 [80];
  Il2CppMethodPointer local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod local_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057aea74 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0(&"Name");
    g_data_057aea74 = '\x01';
  }
  local_118._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_118._56_8_ = (Il2CppRGCTXData *)0x0;
  local_118._32_8_ = (Il2CppClass *)0x0;
  local_118._40_8_ = (Il2CppType *)0x0;
  local_118._16_8_ = (InvokerMethod)0x0;
  local_118._24_8_ = (Il2CppObject *)0x0;
  local_118._0_8_ = (Il2CppMethodPointer)0x0;
  local_118._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_c8._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_c8._56_8_ = (Il2CppRGCTXData *)0x0;
  local_c8._32_8_ = (Il2CppClass *)0x0;
  local_c8._40_8_ = (Il2CppType *)0x0;
  local_c8._16_8_ = (InvokerMethod)0x0;
  local_c8._24_8_ = (Il2CppObject *)0x0;
  local_c8._0_8_ = (Il2CppMethodPointer)0x0;
  local_c8._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  __this_08 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this_08,MethodInfo_HashSet_1_System_String);
  pSVar3 = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044bd536:
    pMVar4 = unaff_RBX;
    il2cpp_runtime_helper_022b2c90();
label_044bd53b:
    x = (UnityEngine_MonoBehaviour_o *)
        (**(code **)(pMVar4->methodPointer + 0x1a8))
                  (pMVar4,*unaff_R14,*(undefined8 *)(pMVar4->methodPointer + 0x1b0));
    if (*(int *)(*unaff_R15 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    SimpleJSONFixed_JSONNode__op_Implicit_3f79b00((SimpleJSONFixed_JSONNode_o *)x,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aea75 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aea75 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_11 = x;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (x == (UnityEngine_MonoBehaviour_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aea76 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          g_data_057aea76 = '\x01';
        }
        __this_10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(__this_10,MethodInfo_List_1_System_String);
        __this_11[2].fields.m_CachedPtr = (intptr_t)__this_10;
        il2cpp_runtime_helper_022b4080(&__this_11[2].fields,__this_10);
        __this_11[3].fields.m_CachedPtr = **(intptr_t **)(g_data_057b9c00 + 0xb8);
        il2cpp_runtime_helper_022b4080(&__this_11[3].fields);
        UnityEngine_MonoBehaviour___ctor(__this_11,(MethodInfo *)0x0);
        return extraout_RAX_00;
      }
      target = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
      clip = UnityEngine_AudioSource__get_clip((UnityEngine_AudioSource_o *)x,(MethodInfo *)0x0);
      UnityEngine_AudioSource__PlayOneShot((UnityEngine_AudioSource_o *)x,clip,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    return (System_Collections_Generic_List_string__o *)CONCAT44(extraout_var,bVar2);
  }
  SimpleJSONFixed_JSONNode__get_Values
            ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&stack0xfffffffffffffea0,pSVar3,(MethodInfo *)0x0);
  local_38 = local_120;
  __this.fields.m_Enumerator.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
  __this.fields.m_Enumerator.fields._0_8_ = __this_08;
  __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
  __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
       (Il2CppObject *)in_stack_fffffffffffffeb0;
  __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb8;
  __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
  __this.fields.m_Enumerator.fields.m_Array.fields._list =
       (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
  __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
  __this.fields.m_Enumerator.fields.m_Array.fields._current =
       (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
  local_78 = in_stack_fffffffffffffea0;
  pSStack_70 = in_stack_fffffffffffffea8;
  local_68 = in_stack_fffffffffffffeb0;
  pIStack_60 = in_stack_fffffffffffffeb8;
  local_58 = in_stack_fffffffffffffec0;
  pIStack_50 = in_stack_fffffffffffffec8;
  local_48 = in_stack_fffffffffffffed0;
  _Stack_40 = in_stack_fffffffffffffed8;
  SimpleJSONFixed_JSONNode_ValueEnumerator__GetEnumerator
            ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&stack0xfffffffffffffea0,__this,
             (MethodInfo *)&local_78);
  local_118._64_8_ = local_120;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
  __this_00.fields.m_Enumerator.fields._0_8_ = __this_08;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
       (Il2CppObject *)in_stack_fffffffffffffeb0;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb8;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._list =
       (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._current =
       (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
  local_118._0_8_ = in_stack_fffffffffffffea0;
  local_118._8_8_ = in_stack_fffffffffffffea8;
  local_118._16_8_ = in_stack_fffffffffffffeb0;
  local_118._24_8_ = in_stack_fffffffffffffeb8;
  local_118._32_8_ = in_stack_fffffffffffffec0;
  local_118._40_8_ = in_stack_fffffffffffffec8;
  local_118._48_8_ = in_stack_fffffffffffffed0;
  local_118._56_8_ = in_stack_fffffffffffffed8;
  bVar2 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext(__this_00,(MethodInfo *)local_118);
  if ((char)bVar2 != '\0') {
    unaff_R15 = &TypeInfo_JSONNode;
    unaff_R14 = &"Name";
    do {
      __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
      __this_02.fields.m_Enumerator.fields._0_8_ = __this_08;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)in_stack_fffffffffffffeb0;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb8;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
      pSVar3 = SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current(__this_02,(MethodInfo *)local_118);
      unaff_RBX = (MethodInfo *)local_118;
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044bd536;
      (*(pSVar3->klass->vtable)._32_unknown.methodPtr)
                (&stack0xfffffffffffffea0,pSVar3,(pSVar3->klass->vtable)._32_unknown.method);
      local_c8._64_8_ = local_120;
      __this_03.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
      __this_03.fields._0_8_ = __this_08;
      __this_03.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
      __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffeb0;
      __this_03.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb8;
      __this_03.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
      __this_03.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
      __this_03.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
      __this_03.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
      local_c8._0_8_ = in_stack_fffffffffffffea0;
      local_c8._8_8_ = in_stack_fffffffffffffea8;
      local_c8._16_8_ = in_stack_fffffffffffffeb0;
      local_c8._24_8_ = in_stack_fffffffffffffeb8;
      local_c8._32_8_ = in_stack_fffffffffffffec0;
      local_c8._40_8_ = in_stack_fffffffffffffec8;
      local_c8._48_8_ = in_stack_fffffffffffffed0;
      local_c8._56_8_ = in_stack_fffffffffffffed8;
      bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_03,(MethodInfo *)local_c8);
      if ((char)bVar2 != '\0') {
        if (__this_08 == (System_Collections_Generic_HashSet_object__o *)0x0) {
          do {
            __this_04.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
            __this_04.fields._0_8_ = __this_08;
            __this_04.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
            __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffeb0;
            __this_04.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb8;
            __this_04.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
            __this_04.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
            __this_04.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
            __this_04.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
            SVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_04,(MethodInfo *)local_c8);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar4 = (MethodInfo *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar5,(MethodInfo *)0x0);
            unaff_RBX = (MethodInfo *)SVar5.fields.key;
            if (pMVar4 == (MethodInfo *)0x0) goto label_044bd536;
            cVar1 = (**(code **)(pMVar4->methodPointer + 0x2f8))
                              (pMVar4,"Name",*(undefined8 *)(pMVar4->methodPointer + 0x300));
            if (cVar1 != '\0') goto label_044bd53b;
            __this_05.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
            __this_05.fields._0_8_ = __this_08;
            __this_05.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
            __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffeb0;
            __this_05.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb8;
            __this_05.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
            __this_05.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
            __this_05.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
            __this_05.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
            bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_05,(MethodInfo *)local_c8);
          } while ((char)bVar2 != '\0');
        }
        else {
          do {
            __this_07.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
            __this_07.fields._0_8_ = __this_08;
            __this_07.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
            __this_07.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffeb0;
            __this_07.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb8;
            __this_07.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
            __this_07.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
            __this_07.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
            __this_07.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
            SVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_07,(MethodInfo *)local_c8);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar5,(MethodInfo *)0x0);
            unaff_RBX = (MethodInfo *)SVar5.fields.key;
            if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044bd536;
            cVar1 = (*(pSVar3->klass->vtable)._28_HasKey.methodPtr)
                              (pSVar3,"Name",(pSVar3->klass->vtable)._28_HasKey.method);
            if (cVar1 != '\0') {
              pSVar3 = (SimpleJSONFixed_JSONNode_o *)
                       (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              item = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar3,(MethodInfo *)0x0);
              System_Collections_Generic_HashSet_object___Add(__this_08,(Il2CppObject *)item,MethodInfo_Boolean_Add);
            }
            __this_06.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
            __this_06.fields._0_8_ = __this_08;
            __this_06.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
            __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffeb0;
            __this_06.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb8;
            __this_06.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
            __this_06.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
            __this_06.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
            __this_06.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
            bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_06,(MethodInfo *)local_c8);
          } while ((char)bVar2 != '\0');
        }
      }
      __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
      __this_01.fields.m_Enumerator.fields._0_8_ = __this_08;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)in_stack_fffffffffffffeb0;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb8;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
      bVar2 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext(__this_01,(MethodInfo *)local_118);
    } while ((char)bVar2 != '\0');
  }
  __this_09 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor_362ba10
            ((System_Collections_Generic_List_object__o *)__this_09,
             (System_Collections_Generic_IEnumerable_T__o *)__this_08,MethodInfo_List_1_System_String);
  return __this_09;
}


// ApplicationManagers.MusicManager$$PlaySoundOneShot
// il2cpp: void ApplicationManagers_MusicManager__PlaySoundOneShot (UnityEngine_AudioSource_o* source, const MethodInfo* method);
// 0x44bd580

void ApplicationManagers_MusicManager__PlaySoundOneShot(UnityEngine_AudioSource_o *source,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *target;
  UnityEngine_AudioClip_o *clip;
  System_Collections_Generic_List_object__o *__this;
  UnityEngine_MonoBehaviour_o *__this_00;
  
  if (g_data_057aea75 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aea75 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)source;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (source != (UnityEngine_AudioSource_o *)0x0) {
    target = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
    clip = UnityEngine_AudioSource__get_clip(source,(MethodInfo *)0x0);
    UnityEngine_AudioSource__PlayOneShot(source,clip,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea76 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057aea76 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_System_String);
  __this_00[2].fields.m_CachedPtr = (intptr_t)__this;
  il2cpp_runtime_helper_022b4080(&__this_00[2].fields,__this);
  __this_00[3].fields.m_CachedPtr = **(intptr_t **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&__this_00[3].fields);
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.MusicManager$$.ctor
// il2cpp: void ApplicationManagers_MusicManager___ctor (ApplicationManagers_MusicManager_o* __this, const MethodInfo* method);
// 0x44bd620

void ApplicationManagers_MusicManager___ctor(ApplicationManagers_MusicManager_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_Collections_Generic_List_object__o *__this_00;
  
  if (g_data_057aea76 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057aea76 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
  *(System_Collections_Generic_List_object__o **)&(__this->fields)._currentSong = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentSong,__this_00);
  uVar1 = **(undefined8 **)(g_data_057b9c00 + 0xb8);
  (__this->fields)._isMenuTransition = (int)uVar1;
  (__this->fields)._justPlayedMenuTransition = (int)((ulong)uVar1 >> 0x20);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._isMenuTransition);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


