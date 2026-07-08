// Type: ApplicationManagers.MusicManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/MusicManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/MusicManager.cs  [CHANGED since prior version]
// --------------------------------

// ApplicationManagers.MusicManager.<FadeNextSong>d__46$$.ctor
// il2cpp: void ApplicationManagers_MusicManager__FadeNextSong_d__46___ctor (ApplicationManagers_MusicManager__FadeNextSong_d__46_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41a3520

void ApplicationManagers_MusicManager_<FadeNextSong>d__46___ctor
               (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__46$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_MusicManager__FadeNextSong_d__46__System_IDisposable_Dispose (ApplicationManagers_MusicManager__FadeNextSong_d__46_o* __this, const MethodInfo* method);
// 0x41a4540

void ApplicationManagers_MusicManager_<FadeNextSong>d__46__System_IDisposable_Dispose
               (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__46$$MoveNext
// il2cpp: bool ApplicationManagers_MusicManager__FadeNextSong_d__46__MoveNext (ApplicationManagers_MusicManager__FadeNextSong_d__46_o* __this, const MethodInfo* method);
// 0x41a4550

bool_conflict
ApplicationManagers_MusicManager_<FadeNextSong>d__46__MoveNext
          (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *__this,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  ApplicationManagers_MusicManager_o *pAVar3;
  System_String_o *a;
  UnityEngine_AudioSource_o *pUVar4;
  UnityEngine_AudioClip_o *pUVar5;
  long lVar6;
  bool_conflict bVar7;
  UnityEngine_WaitForSeconds_o *__this_00;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (DAT_05704ca9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&TypeInfo_MusicPlaylist);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_05704ca9 = '\x01';
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
joined_r0x041a4726:
      if (0.0 < fVar8) {
        if ((pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) ||
           (pUVar4 = (pAVar3->fields)._audio, pUVar4 == (UnityEngine_AudioSource_o *)0x0))
        goto LAB_041a4ab0;
        UnityEngine_AudioSource__set_volume
                  (pUVar4,(fVar8 / (__this->fields)._fadeOutTime_5__3) *
                          (pAVar3->fields)._songVolume,(MethodInfo *)0x0);
        (__this->fields)._fadeTimeLeft_5__4 = (__this->fields)._fadeTimeLeft_5__4 + -0.1;
        __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(__this_00,0.1,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)__this_00;
        il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
        (__this->fields).__1__state = 1;
        goto LAB_041a4aa0;
      }
      if ((pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) ||
         (pUVar4 = (pAVar3->fields)._audio, pUVar4 == (UnityEngine_AudioSource_o *)0x0))
      goto LAB_041a4ab0;
      UnityEngine_AudioSource__Stop(pUVar4,(MethodInfo *)0x0);
    }
    else {
      if (iVar2 != 0) {
        return 0;
      }
      (__this->fields).__1__state = -1;
      (__this->fields)._fadeInTime_5__2 = 5.0;
      (__this->fields)._fadeOutTime_5__3 = 1.0;
      if (**(long **)(TypeInfo_MusicManager + 0xb8) == 0) goto LAB_041a4ab0;
      a = *(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20);
      if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar7 = System_String__op_Equality
                        (a,*(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20),
                         (MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        (__this->fields)._fadeInTime_5__2 = 1.0;
      }
      if (pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) goto LAB_041a4ab0;
      *(undefined1 *)((long)&(pAVar3->fields)._autoPlay + 1) = 1;
      (__this->fields)._fadeTimeLeft_5__4 = (__this->fields)._fadeOutTime_5__3;
      pUVar4 = (pAVar3->fields)._audio;
      if (pUVar4 == (UnityEngine_AudioSource_o *)0x0) goto LAB_041a4ab0;
      bVar7 = UnityEngine_AudioSource__get_isPlaying(pUVar4,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pUVar4 = (pAVar3->fields)._audio;
        if (pUVar4 == (UnityEngine_AudioSource_o *)0x0) goto LAB_041a4ab0;
        fVar8 = UnityEngine_AudioSource__get_volume(pUVar4,(MethodInfo *)0x0);
        (pAVar3->fields)._songVolume = fVar8;
        fVar8 = (__this->fields)._fadeTimeLeft_5__4;
        goto joined_r0x041a4726;
      }
    }
    pUVar5 = (__this->fields).nextClip;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar7 != '\0') {
      (pAVar3->fields)._songTimeLeft = 0.0;
      *(undefined1 *)&(pAVar3->fields)._autoPlay = 1;
      return 0;
    }
    pUVar4 = (pAVar3->fields)._audio;
    if (pUVar4 == (UnityEngine_AudioSource_o *)0x0) goto LAB_041a4ab0;
    UnityEngine_AudioSource__set_clip(pUVar4,(__this->fields).nextClip,(MethodInfo *)0x0);
    pUVar4 = (pAVar3->fields)._audio;
    if (pUVar4 == (UnityEngine_AudioSource_o *)0x0) goto LAB_041a4ab0;
    UnityEngine_AudioSource__set_volume(pUVar4,0.0,(MethodInfo *)0x0);
    pUVar5 = (__this->fields).nextClip;
    if (pUVar5 == (UnityEngine_AudioClip_o *)0x0) goto LAB_041a4ab0;
    fVar8 = UnityEngine_AudioClip__get_length(pUVar5,(MethodInfo *)0x0);
    (pAVar3->fields)._songTimeLeft = fVar8 - (__this->fields)._fadeOutTime_5__3;
    fVar8 = (__this->fields).startTime;
    if (0.0 < fVar8) {
      pUVar5 = (__this->fields).nextClip;
      if (pUVar5 == (UnityEngine_AudioClip_o *)0x0) goto LAB_041a4ab0;
      pUVar4 = (pAVar3->fields)._audio;
      fVar9 = UnityEngine_AudioClip__get_length(pUVar5,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_AudioSource_o *)0x0) goto LAB_041a4ab0;
      if (fVar9 + -0.1 <= fVar8) {
        fVar8 = fVar9 + -0.1;
      }
      UnityEngine_AudioSource__set_time(pUVar4,fVar8,(MethodInfo *)0x0);
      (pAVar3->fields)._songTimeLeft = (pAVar3->fields)._songTimeLeft - (__this->fields).startTime;
    }
    pUVar4 = (pAVar3->fields)._audio;
    if (pUVar4 == (UnityEngine_AudioSource_o *)0x0) goto LAB_041a4ab0;
    UnityEngine_AudioSource__Play(pUVar4,(MethodInfo *)0x0);
    (pAVar3->fields)._songVolume = (__this->fields).volume;
    *(undefined1 *)&(pAVar3->fields)._autoPlay = 1;
    fVar8 = (__this->fields)._fadeInTime_5__2;
    (__this->fields)._fadeTimeLeft_5__4 = fVar8;
  }
  if (fVar8 <= 0.0) {
    if (pAVar3 != (ApplicationManagers_MusicManager_o *)0x0) {
      pUVar4 = (pAVar3->fields)._audio;
      fVar8 = (pAVar3->fields)._songVolume;
      if (DAT_05704ca4 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_MusicManager);
        il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
        il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
        DAT_05704ca4 = '\x01';
      }
      fVar9 = 0.0;
      if (*(char *)(*(long *)(TypeInfo_MusicManager + 0xb8) + 0x10) == '\0') {
        lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x28), lVar6 == 0)) goto LAB_041a4ab0;
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
    if (DAT_05704ca4 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_MusicManager);
      il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
      il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
      DAT_05704ca4 = '\x01';
    }
    fVar10 = 0.0;
    if (*(char *)(*(long *)(TypeInfo_MusicManager + 0xb8) + 0x10) == '\0') {
      lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
      if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x28), lVar6 == 0)) goto LAB_041a4ab0;
      fVar10 = *(float *)(lVar6 + 0x14) * 0.4;
    }
    if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__set_volume
                (pUVar4,(1.0 - fVar8 / fVar9) * fVar1 * fVar10,(MethodInfo *)0x0);
      (__this->fields)._fadeTimeLeft_5__4 = (__this->fields)._fadeTimeLeft_5__4 + -0.1;
      __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_00,0.1,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_00;
      il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
      (__this->fields).__1__state = 2;
LAB_041a4aa0:
      return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
    }
  }
LAB_041a4ab0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__46$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_MusicManager__FadeNextSong_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_MusicManager__FadeNextSong_d__46_o* __this, const MethodInfo* method);
// 0x41a4ac0

Il2CppObject *
ApplicationManagers_MusicManager_<FadeNextSong>d__46__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__46$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_MusicManager__FadeNextSong_d__46__System_Collections_IEnumerator_Reset (ApplicationManagers_MusicManager__FadeNextSong_d__46_o* __this, const MethodInfo* method);
// 0x41a4ad0

void ApplicationManagers_MusicManager_<FadeNextSong>d__46__System_Collections_IEnumerator_Reset
               (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__46$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_MusicManager__FadeNextSong_d__46__System_Collections_IEnumerator_get_Current (ApplicationManagers_MusicManager__FadeNextSong_d__46_o* __this, const MethodInfo* method);
// 0x41a4b10

Il2CppObject *
ApplicationManagers_MusicManager_<FadeNextSong>d__46__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_MusicManager__FadeNextSong_d__46_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__41$$.ctor
// il2cpp: void ApplicationManagers_MusicManager__StartSoundEffect_d__41___ctor (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41a30d0

void ApplicationManagers_MusicManager_<StartSoundEffect>d__41___ctor
               (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__41$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_MusicManager__StartSoundEffect_d__41__System_IDisposable_Dispose (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o* __this, const MethodInfo* method);
// 0x41a4b20

void ApplicationManagers_MusicManager_<StartSoundEffect>d__41__System_IDisposable_Dispose
               (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o *__this,
               MethodInfo *method)

{
  return;
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__41$$MoveNext
// il2cpp: bool ApplicationManagers_MusicManager__StartSoundEffect_d__41__MoveNext (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o* __this, const MethodInfo* method);
// 0x41a4b30

bool_conflict
ApplicationManagers_MusicManager_<StartSoundEffect>d__41__MoveNext
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
  float seconds;
  
  if (DAT_05704caa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_05704caa = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  bVar4 = 0;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
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
          seconds = UnityEngine_AudioClip__get_length(__this_00,(MethodInfo *)0x0);
          __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
          UnityEngine_WaitForSeconds___ctor(__this_01,seconds,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)__this_01;
          uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
          bVar4 = (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
          iVar6 = 1;
          goto LAB_041a4c00;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar6 = -1;
LAB_041a4c00:
  (__this->fields).__1__state = iVar6;
  return bVar4;
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__41$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_MusicManager__StartSoundEffect_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o* __this, const MethodInfo* method);
// 0x41a4c10

Il2CppObject *
ApplicationManagers_MusicManager_<StartSoundEffect>d__41__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__41$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_MusicManager__StartSoundEffect_d__41__System_Collections_IEnumerator_Reset (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o* __this, const MethodInfo* method);
// 0x41a4c20

void ApplicationManagers_MusicManager_<StartSoundEffect>d__41__System_Collections_IEnumerator_Reset
               (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.MusicManager.<StartSoundEffect>d__41$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_MusicManager__StartSoundEffect_d__41__System_Collections_IEnumerator_get_Current (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o* __this, const MethodInfo* method);
// 0x41a4c60

Il2CppObject *
ApplicationManagers_MusicManager_<StartSoundEffect>d__41__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_MusicManager__StartSoundEffect_d__41_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.MusicManager$$Init
// il2cpp: void ApplicationManagers_MusicManager__Init (const MethodInfo* method);
// 0x41a1320

void ApplicationManagers_MusicManager__Init(MethodInfo *method)

{
  UnityEngine_Component_o *__this;
  UnityEngine_AudioSource_o *__this_00;
  long lVar1;
  Il2CppObject *pIVar2;
  Events_OnLoadScene_o *value;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *p;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  
  if (DAT_05704c90 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_AddComponent_AudioSource);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&TypeInfo_OnLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_MusicManager_CreateSingleton_MusicManager);
    il2cpp_init_method_metadata(&"SoundEffect");
    il2cpp_init_method_metadata(&"MusicInfo");
    DAT_05704c90 = '\x01';
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8),MethodInfo_MusicManager_CreateSingleton_MusicManager);
  **(undefined8 **)(TypeInfo_MusicManager + 0xb8) = pIVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_MusicManager + 0xb8));
  value = (Events_OnLoadScene_o *)il2cpp_runtime_glue(TypeInfo_OnLoadScene);
  Events_OnLoadScene___ctor();
  Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
  __this = (UnityEngine_Component_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
  if (__this != (UnityEngine_Component_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pIVar2 = UnityEngine_GameObject__AddComponent<object>(pUVar3,MethodInfo_AudioSource_AddComponent_AudioSource);
      __this[1].fields.m_CachedPtr = (intptr_t)pIVar2;
      il2cpp_runtime_glue(&__this[1].fields,pIVar2);
      if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
         (__this_00 = *(UnityEngine_AudioSource_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x28),
         __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
        UnityEngine_AudioSource__set_ignoreListenerVolume(__this_00,1,(MethodInfo *)0x0);
        lVar1 = **(long **)(TypeInfo_MusicManager + 0xb8);
        pUVar3 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(pUVar3,"SoundEffect",(MethodInfo *)0x0);
        if (lVar1 != 0) {
          *(UnityEngine_GameObject_o **)(lVar1 + 0x30) = pUVar3;
          il2cpp_runtime_glue(lVar1 + 0x30);
          if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
             (pUVar3 = *(UnityEngine_GameObject_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x30),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            __this_01 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
            if ((UnityEngine_Component_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8) !=
                (UnityEngine_Component_o *)0x0) {
              p = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8),
                             (MethodInfo *)0x0);
              if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent(__this_01,p,(MethodInfo *)0x0);
                lVar1 = **(long **)(TypeInfo_MusicManager + 0xb8);
                if ((lVar1 != 0) &&
                   (*(UnityEngine_GameObject_o **)(lVar1 + 0x30) != (UnityEngine_GameObject_o *)0x0)
                   ) {
                  pIVar2 = UnityEngine_GameObject__AddComponent<object>
                                     (*(UnityEngine_GameObject_o **)(lVar1 + 0x30),MethodInfo_AudioSource_AddComponent_AudioSource);
                  *(Il2CppObject **)(lVar1 + 0x38) = pIVar2;
                  il2cpp_runtime_glue(lVar1 + 0x38,pIVar2);
                  method_00 = extraout_RDX;
                  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_init_class();
                    method_00 = extraout_RDX_00;
                  }
                  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
                  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                    il2cpp_init_class();
                    method_00 = extraout_RDX_01;
                  }
                  pSVar4 = ApplicationManagers_ResourceManager__TryLoadText
                                     (pSVar4,"MusicInfo",method_00);
                  pSVar5 = SimpleJSONFixed_JSON__Parse(pSVar4,(MethodInfo *)0x0);
                  lVar1 = *(long *)(TypeInfo_MusicManager + 0xb8);
                  *(SimpleJSONFixed_JSONNode_o **)(lVar1 + 8) = pSVar5;
                  il2cpp_runtime_glue(lVar1 + 8,pSVar5);
                  return;
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


// ApplicationManagers.MusicManager$$OnLoadScene
// il2cpp: void ApplicationManagers_MusicManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x41a1620

void ApplicationManagers_MusicManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  if (DAT_05704c91 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MusicPlaylist);
    DAT_05704c91 = '\x01';
  }
  if (4 < sceneName - 3U) {
    if (sceneName == 2) {
      if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
        il2cpp_init_class();
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
    il2cpp_init_class();
  }
  ApplicationManagers_MusicManager__SetPlaylist
            ((System_String_o *)**(undefined8 **)(TypeInfo_MusicPlaylist + 0xb8),method);
  return;
}


// ApplicationManagers.MusicManager$$ApplySoundSettings
// il2cpp: void ApplicationManagers_MusicManager__ApplySoundSettings (const MethodInfo* method);
// 0x419e750

void ApplicationManagers_MusicManager__ApplySoundSettings(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Object_o *x;
  long lVar2;
  UnityEngine_AudioSource_o *__this;
  System_String_o *a;
  bool_conflict bVar3;
  long *plVar4;
  MethodInfo *method_00;
  float fVar5;
  
  if (DAT_05704c92 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&TypeInfo_MusicPlaylist);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704c92 = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  plVar4 = *(long **)(TypeInfo_MusicManager + 0xb8);
  lVar2 = *plVar4;
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x49) == '\0') {
      __this = *(UnityEngine_AudioSource_o **)(lVar2 + 0x28);
      fVar1 = *(float *)(lVar2 + 0x44);
      if (DAT_05704ca4 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_MusicManager);
        il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
        il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
        DAT_05704ca4 = '\x01';
        plVar4 = *(long **)(TypeInfo_MusicManager + 0xb8);
      }
      fVar5 = 0.0;
      if ((char)plVar4[2] == '\0') {
        lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x28), lVar2 == 0)) goto LAB_0419e952;
        fVar5 = *(float *)(lVar2 + 0x14) * 0.4;
      }
      if (__this == (UnityEngine_AudioSource_o *)0x0) goto LAB_0419e952;
      UnityEngine_AudioSource__set_volume(__this,fVar1 * fVar5,(MethodInfo *)0x0);
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x98), lVar2 != 0)) {
      a = *(System_String_o **)(lVar2 + 0x18);
      if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = *(MethodInfo **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 8);
      bVar3 = System_String__op_Inequality(a,(System_String_o *)method_00,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x98), lVar2 != 0)) {
        ApplicationManagers_MusicManager__SetPlaylist(*(System_String_o **)(lVar2 + 0x18),method_00)
        ;
        return;
      }
    }
  }
LAB_0419e952:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$PlayDeathSong
// il2cpp: void ApplicationManagers_MusicManager__PlayDeathSong (const MethodInfo* method);
// 0x41a1960

void ApplicationManagers_MusicManager__PlayDeathSong(MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  SimpleJSONFixed_JSONNode_o *songInfo;
  MethodInfo *method_00;
  
  if (DAT_05704c93 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&"Death");
    DAT_05704c93 = '\x01';
  }
  lVar1 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x60) == '\0') {
      return;
    }
    plVar2 = (long *)(*(long **)(TypeInfo_MusicManager + 0xb8))[1];
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                 (plVar2,"Death",*(undefined8 *)(*plVar2 + 0x1b0));
      if (plVar2 != (long *)0x0) {
        method_00 = (MethodInfo *)0x0;
        songInfo = (SimpleJSONFixed_JSONNode_o *)
                   (**(code **)(*plVar2 + 0x188))(plVar2,0,*(undefined8 *)(*plVar2 + 400));
        if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
          *(undefined1 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x68) = 0;
          ApplicationManagers_MusicManager__PlayImmediateTransition(songInfo,method_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$PlayGrabbedSong
// il2cpp: void ApplicationManagers_MusicManager__PlayGrabbedSong (const MethodInfo* method);
// 0x41a1cf0

void ApplicationManagers_MusicManager__PlayGrabbedSong(MethodInfo *method)

{
  long lVar1;
  System_String_o *a;
  bool_conflict bVar2;
  long *plVar3;
  SimpleJSONFixed_JSONNode_o *songInfo;
  MethodInfo *method_00;
  float fVar4;
  
  if (DAT_05704c94 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&TypeInfo_MusicPlaylist);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"Grabbed");
    DAT_05704c94 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x38), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x11) == '\0') {
      return;
    }
    plVar3 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1a8))
                                 (plVar3,"Grabbed",*(undefined8 *)(*plVar3 + 0x1b0));
      if (plVar3 != (long *)0x0) {
        songInfo = (SimpleJSONFixed_JSONNode_o *)
                   (**(code **)(*plVar3 + 0x188))(plVar3,0,*(undefined8 *)(*plVar3 + 400));
        lVar1 = **(long **)(TypeInfo_MusicManager + 0xb8);
        if (lVar1 != 0) {
          *(undefined1 *)(lVar1 + 0x68) = 0;
          a = *(System_String_o **)(lVar1 + 0x20);
          if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = System_String__op_Equality
                            (a,*(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20),
                             (MethodInfo *)0x0);
          lVar1 = **(long **)(TypeInfo_MusicManager + 0xb8);
          if ((char)bVar2 == '\0') {
            if (lVar1 != 0) {
              method_00 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
              *(MethodInfo **)(lVar1 + 0x70) = method_00;
              il2cpp_runtime_glue(lVar1 + 0x70);
LAB_041a1eaf:
              ApplicationManagers_MusicManager__PlayImmediateTransition(songInfo,method_00);
              return;
            }
          }
          else if (lVar1 != 0) {
            *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar1 + 0x58);
            il2cpp_runtime_glue(lVar1 + 0x70);
            lVar1 = **(long **)(TypeInfo_MusicManager + 0xb8);
            if ((lVar1 != 0) &&
               (*(UnityEngine_AudioSource_o **)(lVar1 + 0x28) != (UnityEngine_AudioSource_o *)0x0))
            {
              method_00 = (MethodInfo *)0x0;
              fVar4 = UnityEngine_AudioSource__get_time
                                (*(UnityEngine_AudioSource_o **)(lVar1 + 0x28),(MethodInfo *)0x0);
              *(float *)(lVar1 + 0x78) = fVar4;
              goto LAB_041a1eaf;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$OnEscapeGrab
// il2cpp: void ApplicationManagers_MusicManager__OnEscapeGrab (const MethodInfo* method);
// 0x41a1ed0

void ApplicationManagers_MusicManager__OnEscapeGrab(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704c95 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    DAT_05704c95 = '\x01';
  }
  lVar1 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar1 != 0) {
    if (0.0 < *(float *)(lVar1 + 100)) {
      *(undefined4 *)(lVar1 + 100) = 0;
      *(undefined4 *)(lVar1 + 0x40) = 0;
      *(undefined1 *)(lVar1 + 0x7c) = 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$PlayEffect
// il2cpp: void ApplicationManagers_MusicManager__PlayEffect (const MethodInfo* method);
// 0x41a1f30

void ApplicationManagers_MusicManager__PlayEffect(MethodInfo *method)

{
  Il2CppClass *__this;
  char cVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  long *plVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *d;
  System_String_o *name;
  Il2CppClass *pIVar6;
  Il2CppObject *__this_00;
  MethodInfo *method_00;
  float fVar7;
  
  if (DAT_05704c96 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&"Effect");
    DAT_05704c96 = '\x01';
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if ((plVar4 == (long *)0x0) ||
     (plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))
                                 (plVar4,"Effect",*(undefined8 *)(*plVar4 + 0x1b0)),
     plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar2 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
  iVar2 = UnityEngine_Random__Range(0,iVar2,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)*plVar4;
  pSVar5 = (SimpleJSONFixed_JSONNode_o *)
           (*(code *)method_00[4].return_type)(plVar4,iVar2,method_00[4].parameters);
  if (DAT_05704c9a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AudioClip);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Music");
    il2cpp_init_method_metadata(&"Volume");
    DAT_05704c9a = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar1 = (*(pSVar5->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar5,"Name",(pSVar5->klass->vtable)._28_HasKey.method);
    if (cVar1 == '\0') {
      return;
    }
    d = (SimpleJSONFixed_JSONNode_o *)
        (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                  (pSVar5,"Name",(pSVar5->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    name = SimpleJSONFixed_JSONNode__op_Implicit(d,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar6 = (Il2CppClass *)
             ApplicationManagers_ResourceManager__LoadAsset("Music",name,0,method_00);
    if ((pIVar6 != (Il2CppClass *)0x0) && ((pIVar6->_1).image != TypeInfo_AudioClip)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar6);
    }
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar5,"Volume",(pSVar5->klass->vtable)._7_get_Item.method);
    fVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
    __this = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
    if (__this != (Il2CppClass *)0x0) {
      if (DAT_05704c9c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_StartSoundEffect_d__41);
        DAT_05704c9c = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_StartSoundEffect_d__41);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 != (Il2CppObject *)0x0) {
        __this_00[2].klass = __this;
        il2cpp_runtime_glue(__this_00 + 2,__this);
        __this_00[3].klass = pIVar6;
        il2cpp_runtime_glue(__this_00 + 3,pIVar6);
        *(float *)&__this_00[2].monitor = fVar7;
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,
                   (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$PlayTransition
// il2cpp: void ApplicationManagers_MusicManager__PlayTransition (const MethodInfo* method);
// 0x41a2220

void ApplicationManagers_MusicManager__PlayTransition(MethodInfo *method)

{
  int32_t maxExclusive;
  uint uVar1;
  long *plVar2;
  SimpleJSONFixed_JSONNode_o *songInfo;
  MethodInfo *method_00;
  
  if (DAT_05704c97 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&"Transition");
    DAT_05704c97 = '\x01';
  }
  plVar2 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                               (plVar2,"Transition",*(undefined8 *)(*plVar2 + 0x1b0));
    if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
       (*(undefined2 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x68) = 0x101, plVar2 != (long *)0x0)) {
      maxExclusive = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
      uVar1 = UnityEngine_Random__Range(0,maxExclusive,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)(ulong)uVar1;
      songInfo = (SimpleJSONFixed_JSONNode_o *)
                 (**(code **)(*plVar2 + 0x188))(plVar2,method_00,*(undefined8 *)(*plVar2 + 400));
      ApplicationManagers_MusicManager__PlayImmediateTransition(songInfo,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$SetPlaylist
// il2cpp: void ApplicationManagers_MusicManager__SetPlaylist (System_String_o* playlist, const MethodInfo* method);
// 0x41a16b0

void ApplicationManagers_MusicManager__SetPlaylist(System_String_o *playlist,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  System_String_array *collection;
  System_Collections_Generic_List_object__o *__this;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar4;
  
  if (DAT_05704c98 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&TypeInfo_MusicPlaylist);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704c98 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x98), lVar1 == 0)) goto LAB_041a18c1;
  pSVar2 = *(System_String_o **)(lVar1 + 0x18);
  if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = System_String__op_Inequality
                    (pSVar2,*(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 8),
                     (MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if ((((lVar1 == 0) || (*(long *)(lVar1 + 0x98) == 0)) || (*(long *)(lVar1 + 0xa0) == 0)) ||
       (pSVar2 = *(System_String_o **)(*(long *)(lVar1 + 0xa0) + 0x18),
       pSVar2 == (System_String_o *)0x0)) goto LAB_041a18c1;
    playlist = *(System_String_o **)(*(long *)(lVar1 + 0x98) + 0x18);
    lVar1 = **(long **)(TypeInfo_MusicManager + 0xb8);
    collection = System_String__Split(pSVar2,0x2c,0,(MethodInfo *)0x0);
    __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor
              (__this,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_String);
    if (lVar1 == 0) goto LAB_041a18c1;
    *(System_Collections_Generic_List_object__o **)(lVar1 + 0x50) = __this;
    il2cpp_runtime_glue(lVar1 + 0x50,__this);
  }
  if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = System_String__op_Equality
                    (playlist,*(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 8),
                     (MethodInfo *)0x0);
  lVar1 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar1 != 0) {
    pMVar4 = extraout_RDX;
    if ((char)bVar3 == '\0') {
      *(undefined1 *)(lVar1 + 0x60) = 0;
      bVar3 = 0;
    }
    else {
      *(undefined1 *)(lVar1 + 0x60) = 1;
      if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar4 = extraout_RDX_00;
      }
      playlist = *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x18);
      bVar3 = 1;
    }
    ApplicationManagers_MusicManager__FinishSetPlaylist(playlist,bVar3,pMVar4);
    return;
  }
LAB_041a18c1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$FinishSetPlaylist
// il2cpp: void ApplicationManagers_MusicManager__FinishSetPlaylist (System_String_o* playlist, bool forceNext, const MethodInfo* method);
// 0x41a22f0

void ApplicationManagers_MusicManager__FinishSetPlaylist
               (System_String_o *playlist,bool_conflict forceNext,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  long lVar3;
  MethodInfo *method_00;
  
  if (DAT_05704c99 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&TypeInfo_MusicPlaylist);
    DAT_05704c99 = '\x01';
  }
  if (**(long **)(TypeInfo_MusicManager + 0xb8) == 0) goto LAB_041a2504;
  bVar1 = System_String__op_Inequality
                    (*(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20),playlist,
                     (MethodInfo *)0x0);
  lVar3 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar3 == 0) goto LAB_041a2504;
  *(System_String_o **)(lVar3 + 0x20) = playlist;
  il2cpp_runtime_glue(lVar3 + 0x20,playlist);
  lVar3 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar3 == 0) goto LAB_041a2504;
  if (*(char *)(lVar3 + 0x60) == '\0') {
    if (*(char *)(lVar3 + 0x68) != '\0') goto LAB_041a23ae;
    if (0.0 < *(float *)(lVar3 + 100)) {
      *(undefined4 *)(lVar3 + 0x40) = 0;
    }
LAB_041a23f8:
    *(undefined4 *)(lVar3 + 100) = 0;
  }
  else {
    *(undefined4 *)(lVar3 + 0x40) = 0;
    if (*(char *)(lVar3 + 0x68) == '\0') goto LAB_041a23f8;
LAB_041a23ae:
    if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = System_String__op_Equality
                      (playlist,*(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20),
                       (MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      lVar3 = **(long **)(TypeInfo_MusicManager + 0xb8);
      if (lVar3 == 0) goto LAB_041a2504;
      goto LAB_041a23f8;
    }
  }
  if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = System_String__op_Equality
                    (playlist,*(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20),
                     (MethodInfo *)0x0);
  if ((char)bVar2 == '\0') goto LAB_041a2498;
  lVar3 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar3 == 0) goto LAB_041a2504;
  if (*(char *)(lVar3 + 0x7c) == '\0') {
LAB_041a2498:
    lVar3 = **(long **)(TypeInfo_MusicManager + 0xb8);
    if (lVar3 == 0) goto LAB_041a2504;
    if (((byte)((byte)bVar1 | (byte)forceNext) == 1) && (*(float *)(lVar3 + 100) <= 0.0)) {
      *(undefined4 *)(lVar3 + 0x4c) = 0;
      ApplicationManagers_MusicManager__NextSong((MethodInfo *)playlist);
    }
  }
  else {
    playlist = *(System_String_o **)(lVar3 + 0x70);
    method_00 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    bVar2 = System_String__op_Inequality(playlist,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto LAB_041a2498;
    lVar3 = **(long **)(TypeInfo_MusicManager + 0xb8);
    if (lVar3 == 0) goto LAB_041a2504;
    ApplicationManagers_MusicManager__SetSong
              (*(System_String_o **)(lVar3 + 0x70),*(float *)(lVar3 + 0x78),method_00);
  }
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    *(undefined1 *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x7c) = 0;
    return;
  }
LAB_041a2504:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$PlaySoundEffect
// il2cpp: void ApplicationManagers_MusicManager__PlaySoundEffect (SimpleJSONFixed_JSONNode_o* songInfo, const MethodInfo* method);
// 0x41a1fe0

void ApplicationManagers_MusicManager__PlaySoundEffect
               (SimpleJSONFixed_JSONNode_o *songInfo,MethodInfo *method)

{
  Il2CppClass *__this;
  char cVar1;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *name;
  Il2CppClass *pIVar4;
  Il2CppObject *__this_00;
  MethodInfo *in_RCX;
  float fVar5;
  
  if (DAT_05704c9a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AudioClip);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Music");
    il2cpp_init_method_metadata(&"Volume");
    DAT_05704c9a = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(songInfo,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (songInfo != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar1 = (*(songInfo->klass->vtable)._28_HasKey.methodPtr)
                      (songInfo,"Name",(songInfo->klass->vtable)._28_HasKey.method);
    if (cVar1 == '\0') {
      return;
    }
    pSVar3 = (SimpleJSONFixed_JSONNode_o *)
             (*(songInfo->klass->vtable)._7_get_Item.methodPtr)
                       (songInfo,"Name",(songInfo->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    name = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar4 = (Il2CppClass *)
             ApplicationManagers_ResourceManager__LoadAsset("Music",name,0,in_RCX);
    if ((pIVar4 != (Il2CppClass *)0x0) && ((pIVar4->_1).image != TypeInfo_AudioClip)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar4);
    }
    pSVar3 = (SimpleJSONFixed_JSONNode_o *)
             (*(songInfo->klass->vtable)._7_get_Item.methodPtr)
                       (songInfo,"Volume",(songInfo->klass->vtable)._7_get_Item.method);
    fVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
    __this = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
    if (__this != (Il2CppClass *)0x0) {
      if (DAT_05704c9c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_StartSoundEffect_d__41);
        DAT_05704c9c = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_StartSoundEffect_d__41);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 != (Il2CppObject *)0x0) {
        __this_00[2].klass = __this;
        il2cpp_runtime_glue(__this_00 + 2,__this);
        __this_00[3].klass = pIVar4;
        il2cpp_runtime_glue(__this_00 + 3,pIVar4);
        *(float *)&__this_00[2].monitor = fVar5;
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,
                   (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$PlayImmediateTransition
// il2cpp: void ApplicationManagers_MusicManager__PlayImmediateTransition (SimpleJSONFixed_JSONNode_o* songInfo, const MethodInfo* method);
// 0x41a1a10

void ApplicationManagers_MusicManager__PlayImmediateTransition
               (SimpleJSONFixed_JSONNode_o *songInfo,MethodInfo *method)

{
  UnityEngine_AudioSource_o *pUVar1;
  long lVar2;
  char cVar3;
  bool_conflict bVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *name;
  UnityEngine_AudioClip_o *value;
  long *plVar6;
  MethodInfo *in_RCX;
  float fVar7;
  float fVar8;
  
  if (DAT_05704c9b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AudioClip);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Music");
    il2cpp_init_method_metadata(&"Volume");
    DAT_05704c9b = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(songInfo,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  if (songInfo != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar3 = (*(songInfo->klass->vtable)._28_HasKey.methodPtr)
                      (songInfo,"Name",(songInfo->klass->vtable)._28_HasKey.method);
    if (cVar3 == '\0') {
      return;
    }
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)
             (*(songInfo->klass->vtable)._7_get_Item.methodPtr)
                       (songInfo,"Name",(songInfo->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    name = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = (UnityEngine_AudioClip_o *)
            ApplicationManagers_ResourceManager__LoadAsset("Music",name,0,in_RCX);
    if ((value != (UnityEngine_AudioClip_o *)0x0) && (value->klass != TypeInfo_AudioClip)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(value);
    }
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)
             (*(songInfo->klass->vtable)._7_get_Item.methodPtr)
                       (songInfo,"Volume",(songInfo->klass->vtable)._7_get_Item.method);
    fVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
    if ((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
       (pUVar1 = *(UnityEngine_AudioSource_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x28),
       pUVar1 != (UnityEngine_AudioSource_o *)0x0)) {
      UnityEngine_AudioSource__set_clip(pUVar1,value,(MethodInfo *)0x0);
      plVar6 = *(long **)(TypeInfo_MusicManager + 0xb8);
      if (*plVar6 != 0) {
        pUVar1 = *(UnityEngine_AudioSource_o **)(*plVar6 + 0x28);
        if (DAT_05704ca4 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_MusicManager);
          il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
          il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
          DAT_05704ca4 = '\x01';
          plVar6 = *(long **)(TypeInfo_MusicManager + 0xb8);
        }
        fVar8 = 0.0;
        if ((char)plVar6[2] == '\0') {
          lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
          if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x28), lVar2 == 0)) goto LAB_041a1ce1;
          fVar8 = *(float *)(lVar2 + 0x14) * 0.4;
        }
        if (pUVar1 != (UnityEngine_AudioSource_o *)0x0) {
          UnityEngine_AudioSource__set_volume(pUVar1,fVar7 * fVar8,(MethodInfo *)0x0);
          if (((**(long **)(TypeInfo_MusicManager + 0xb8) != 0) &&
              (pUVar1 = *(UnityEngine_AudioSource_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x28),
              pUVar1 != (UnityEngine_AudioSource_o *)0x0)) &&
             (UnityEngine_AudioSource__Play(pUVar1,(MethodInfo *)0x0),
             value != (UnityEngine_AudioClip_o *)0x0)) {
            lVar2 = **(long **)(TypeInfo_MusicManager + 0xb8);
            fVar7 = UnityEngine_AudioClip__get_length(value,(MethodInfo *)0x0);
            if (lVar2 != 0) {
              *(float *)(lVar2 + 0x40) = fVar7;
              lVar2 = **(long **)(TypeInfo_MusicManager + 0xb8);
              fVar7 = UnityEngine_AudioClip__get_length(value,(MethodInfo *)0x0);
              if (lVar2 != 0) {
                *(float *)(lVar2 + 100) = fVar7;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_041a1ce1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$StartSoundEffect
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_MusicManager__StartSoundEffect (ApplicationManagers_MusicManager_o* __this, UnityEngine_AudioClip_o* clip, float volume, const MethodInfo* method);
// 0x41a3030

System_Collections_IEnumerator_o *
ApplicationManagers_MusicManager__StartSoundEffect
          (ApplicationManagers_MusicManager_o *__this,UnityEngine_AudioClip_o *clip,float volume,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704c9c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StartSoundEffect_d__41);
    DAT_05704c9c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_StartSoundEffect_d__41);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    __this_00[3].klass = (Il2CppClass *)clip;
    il2cpp_runtime_glue(__this_00 + 3,clip);
    *(float *)&__this_00[2].monitor = volume;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$SetSong
// il2cpp: void ApplicationManagers_MusicManager__SetSong (System_String_o* song, float startTime, const MethodInfo* method);
// 0x41a2510

void ApplicationManagers_MusicManager__SetSong
               (System_String_o *song,float startTime,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  UnityEngine_Object_o *x;
  Il2CppClass *__this;
  char cVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_String_o *pSVar8;
  GameManagers_InGameManager_o *__this_00;
  long *plVar9;
  Il2CppObject *__this_01;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  GameManagers_InGameManager_o *pGVar10;
  float local_38;
  
  if (DAT_05704c9d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AudioClip);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Music");
    il2cpp_init_method_metadata(&"Playlist");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Volume");
    DAT_05704c9d = '\x01';
  }
  pSVar6 = ApplicationManagers_MusicManager__FindSong(song,method);
  lVar2 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar2 == 0) goto LAB_041a2bbd;
  *(undefined1 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x58) = "";
  il2cpp_runtime_glue(lVar2 + 0x58);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pGVar10 = (GameManagers_InGameManager_o *)0x0;
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  local_38 = 0.0;
  if ((char)bVar4 != '\0') {
    if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041a2bbd;
    cVar3 = (*(pSVar6->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar6,"Name",(pSVar6->klass->vtable)._28_HasKey.method);
    if (cVar3 == '\0') {
      plVar9 = *(long **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
      pSVar6 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar6,"Playlist",(pSVar6->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
      if ((plVar9 == (long *)0x0) ||
         (plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                     (plVar9,pSVar8,*(undefined8 *)(*plVar9 + 0x1b0)),
         plVar9 == (long *)0x0)) goto LAB_041a2bbd;
      iVar5 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
      iVar5 = UnityEngine_Random__Range(0,iVar5,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)*plVar9;
      plVar9 = (long *)(*(code *)method_00[4].return_type)(plVar9,iVar5,method_00[4].parameters);
      if (plVar9 == (long *)0x0) goto LAB_041a2bbd;
      pSVar6 = (SimpleJSONFixed_JSONNode_o *)
               (**(code **)(*plVar9 + 0x1a8))(plVar9,"Name",*(undefined8 *)(*plVar9 + 0x1b0));
      pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_00 = (GameManagers_InGameManager_o *)
                  ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar8,0,method_00);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      pGVar10 = (GameManagers_InGameManager_o *)0x0;
      if ((((char)bVar4 != '\0') &&
          (pGVar10 = __this_00, __this_00 != (GameManagers_InGameManager_o *)0x0)) &&
         (__this_00->klass != TypeInfo_AudioClip)) goto LAB_041a2bc5;
      pSVar6 = (SimpleJSONFixed_JSONNode_o *)
               (**(code **)(*plVar9 + 0x1a8))(plVar9,"Volume",*(undefined8 *)(*plVar9 + 0x1b0));
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      local_38 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
      lVar2 = **(long **)(TypeInfo_MusicManager + 0xb8);
      pSVar6 = (SimpleJSONFixed_JSONNode_o *)
               (**(code **)(*plVar9 + 0x1a8))(plVar9,"Name",*(undefined8 *)(*plVar9 + 0x1b0));
      pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
      if (lVar2 == 0) goto LAB_041a2bbd;
      *(System_String_o **)(lVar2 + 0x58) = pSVar8;
      il2cpp_runtime_glue(lVar2 + 0x58);
    }
    else {
      pSVar7 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar6,"Name",(pSVar6->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_00 = (GameManagers_InGameManager_o *)
                  ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar8,0,in_RCX);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      pGVar10 = (GameManagers_InGameManager_o *)0x0;
      if ((((char)bVar4 != '\0') &&
          (pGVar10 = __this_00, __this_00 != (GameManagers_InGameManager_o *)0x0)) &&
         (__this_00->klass != TypeInfo_AudioClip)) {
LAB_041a2bc5:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_00);
      }
      pSVar7 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar6,"Volume",(pSVar6->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      local_38 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
      lVar2 = **(long **)(TypeInfo_MusicManager + 0xb8);
      pSVar6 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar6,"Name",(pSVar6->klass->vtable)._7_get_Item.method);
      pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
      if (lVar2 == 0) goto LAB_041a2bbd;
      *(System_String_o **)(lVar2 + 0x58) = pSVar8;
      il2cpp_runtime_glue(lVar2 + 0x58);
      x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (x != (UnityEngine_Object_o *)0x0) {
        bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
        if ((bVar1 <= (x->klass->_2).naturalAligment) &&
           ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
          lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
          if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x28), lVar2 == 0)) goto LAB_041a2bbd;
          if (0.0 < *(float *)(lVar2 + 0x14)) {
            lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
            if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0xd8), lVar2 == 0)) goto LAB_041a2bbd;
            if (*(char *)(lVar2 + 0x11) != '\0') {
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar4 = UnityEngine_Object__op_Inequality
                                (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                __this_00 = *(GameManagers_InGameManager_o **)
                             (*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
                if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto LAB_041a2bbd;
                bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
                if (((__this_00->klass->_2).naturalAligment < bVar1) ||
                   ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager))
                goto LAB_041a2bc5;
                GameManagers_InGameManager__OnSongChange(__this_00,(MethodInfo *)0x0);
              }
            }
          }
        }
      }
    }
  }
  if ((UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8) !=
      (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines
              ((UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8),
               (MethodInfo *)0x0);
    __this = (Il2CppClass *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
    if (__this != (Il2CppClass *)0x0) {
      if (DAT_05704ca1 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_FadeNextSong_d__46);
        DAT_05704ca1 = '\x01';
      }
      __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_FadeNextSong_d__46);
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      *(undefined4 *)&__this_01[1].klass = 0;
      if (__this_01 != (Il2CppObject *)0x0) {
        __this_01[2].klass = __this;
        il2cpp_runtime_glue(__this_01 + 2,__this);
        __this_01[2].monitor = pGVar10;
        il2cpp_runtime_glue(&__this_01[2].monitor,pGVar10);
        *(float *)((long)&__this_01[3].klass + 4) = local_38;
        *(float *)&__this_01[3].klass = startTime;
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,
                   (System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_041a2bbd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$ChatNextSong
// il2cpp: void ApplicationManagers_MusicManager__ChatNextSong (const MethodInfo* method);
// 0x41a34d0

void ApplicationManagers_MusicManager__ChatNextSong(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704c9e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    DAT_05704c9e = '\x01';
  }
  lVar1 = **(long **)(TypeInfo_MusicManager + 0xb8);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x40) = 0;
    *(undefined4 *)(lVar1 + 100) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$NextSong
// il2cpp: void ApplicationManagers_MusicManager__NextSong (const MethodInfo* method);
// 0x41a2bd0

void ApplicationManagers_MusicManager__NextSong(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this;
  long *plVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  System_String_o *pSVar6;
  long *plVar7;
  SimpleJSONFixed_JSONNode_o *d;
  uint uVar8;
  MethodInfo *pMVar9;
  
  if (DAT_05704c9f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"Name");
    DAT_05704c9f = '\x01';
  }
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    bVar4 = System_String__op_Equality
                      (*(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20),
                       (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
      bVar4 = System_String__op_Equality
                        (*(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x20),"Custom"
                         ,(MethodInfo *)0x0);
      plVar7 = *(long **)(TypeInfo_MusicManager + 0xb8);
      if ((char)bVar4 == '\0') {
        if (((*plVar7 != 0) && (plVar3 = (long *)plVar7[1], plVar3 != (long *)0x0)) &&
           (plVar7 = (long *)(**(code **)(*plVar3 + 0x1a8))
                                       (plVar3,*(undefined8 *)(*plVar7 + 0x20),
                                        *(undefined8 *)(*plVar3 + 0x1b0)), plVar7 != (long *)0x0)) {
          iVar5 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
          iVar5 = UnityEngine_Random__Range(0,iVar5,(MethodInfo *)0x0);
          plVar7 = (long *)(**(code **)(*plVar7 + 0x188))
                                     (plVar7,iVar5,*(undefined8 *)(*plVar7 + 400));
          if (plVar7 != (long *)0x0) {
            d = (SimpleJSONFixed_JSONNode_o *)
                (**(code **)(*plVar7 + 0x1a8))(plVar7,"Name",*(undefined8 *)(*plVar7 + 0x1b0))
            ;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pMVar9 = (MethodInfo *)0x0;
            pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(d,(MethodInfo *)0x0);
            ApplicationManagers_MusicManager__SetSong(pSVar6,0.0,pMVar9);
            return;
          }
        }
      }
      else {
        lVar2 = *plVar7;
        if ((lVar2 != 0) &&
           (__this = *(System_Collections_Generic_List_object__o **)(lVar2 + 0x50),
           __this != (System_Collections_Generic_List_object__o *)0x0)) {
          iVar1 = (__this->fields)._size;
          if (iVar1 == 0) {
            return;
          }
          uVar8 = *(int *)(lVar2 + 0x4c) + 1;
          pMVar9 = (MethodInfo *)0x0;
          if ((int)uVar8 < iVar1) {
            pMVar9 = (MethodInfo *)(ulong)uVar8;
          }
          *(int32_t *)(lVar2 + 0x4c) = (int32_t)pMVar9;
          pSVar6 = (System_String_o *)
                   System_Collections_Generic_List<object>__get_Item
                             (__this,(int32_t)pMVar9,MethodInfo_String_get_Item);
          ApplicationManagers_MusicManager__SetSong(pSVar6,0.0,pMVar9);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$FindSong
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_MusicManager__FindSong (System_String_o* name, const MethodInfo* method);
// 0x41a30f0

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_MusicManager__FindSong(System_String_o *name,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  char cVar1;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  undefined8 in_stack_fffffffffffffe98;
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
  
  if (DAT_05704ca0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&"Name");
    DAT_05704ca0 = '\x01';
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
  bVar2 = System_String__op_Equality
                    (name,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pSVar3 = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
    if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_041a3419:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    SimpleJSONFixed_JSONNode__get_Values
              ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&stack0xfffffffffffffea0,pSVar3,
               (MethodInfo *)0x0);
    local_38 = local_120;
    __this.fields.m_Enumerator.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
    __this.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe98;
    __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
    __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
         (Il2CppObject *)in_stack_fffffffffffffeb0;
    __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         in_stack_fffffffffffffeb8;
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
    __this_00.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe98;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
         (Il2CppObject *)in_stack_fffffffffffffeb0;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         in_stack_fffffffffffffeb8;
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
      do {
        __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
        __this_02.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe98;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_fffffffffffffeb0;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             in_stack_fffffffffffffeb8;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
        pSVar3 = SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current
                           (__this_02,(MethodInfo *)local_118);
        if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041a3419;
        (*(pSVar3->klass->vtable)._32_unknown.methodPtr)
                  (&stack0xfffffffffffffea0,pSVar3,(pSVar3->klass->vtable)._32_unknown.method);
        local_c8._64_8_ = local_120;
        local_c8._0_8_ = in_stack_fffffffffffffea0;
        local_c8._8_8_ = in_stack_fffffffffffffea8;
        local_c8._16_8_ = in_stack_fffffffffffffeb0;
        local_c8._24_8_ = in_stack_fffffffffffffeb8;
        local_c8._32_8_ = in_stack_fffffffffffffec0;
        local_c8._40_8_ = in_stack_fffffffffffffec8;
        local_c8._48_8_ = in_stack_fffffffffffffed0;
        local_c8._56_8_ = in_stack_fffffffffffffed8;
        while (__this_03.fields.m_Object.fields._dictionary =
                    (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                    in_stack_fffffffffffffea0, __this_03.fields._0_8_ = in_stack_fffffffffffffe98,
              __this_03.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8,
              __this_03.fields.m_Object.fields._current.fields.key =
                   (Il2CppObject *)in_stack_fffffffffffffeb0,
              __this_03.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb8,
              __this_03.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0,
              __this_03.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8,
              __this_03.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0,
              __this_03.fields.m_Array.fields._current =
                   (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data,
              bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                (__this_03,(MethodInfo *)local_c8), (char)bVar2 != '\0') {
          __this_04.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
          __this_04.fields._0_8_ = in_stack_fffffffffffffe98;
          __this_04.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
          __this_04.fields.m_Object.fields._current.fields.key =
               (Il2CppObject *)in_stack_fffffffffffffeb0;
          __this_04.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb8;
          __this_04.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
          __this_04.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
          __this_04.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
          __this_04.fields.m_Array.fields._current =
               (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
          aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                (__this_04,(MethodInfo *)local_c8);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(aKeyValue,(MethodInfo *)0x0);
          if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041a3419;
          cVar1 = (*(pSVar3->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar3,"Name",(pSVar3->klass->vtable)._28_HasKey.method);
          if (cVar1 != '\0') {
            a = (SimpleJSONFixed_JSONNode_o *)
                (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar2 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)name,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              return pSVar3;
            }
          }
        }
        __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
        __this_01.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe98;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_fffffffffffffeb0;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             in_stack_fffffffffffffeb8;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
        bVar2 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext
                          (__this_01,(MethodInfo *)local_118);
      } while ((char)bVar2 != '\0');
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// ApplicationManagers.MusicManager$$FadeNextSong
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_MusicManager__FadeNextSong (ApplicationManagers_MusicManager_o* __this, UnityEngine_AudioClip_o* nextClip, float volume, float startTime, const MethodInfo* method);
// 0x41a3420

System_Collections_IEnumerator_o *
ApplicationManagers_MusicManager__FadeNextSong
          (ApplicationManagers_MusicManager_o *__this,UnityEngine_AudioClip_o *nextClip,float volume
          ,float startTime,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704ca1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FadeNextSong_d__46);
    DAT_05704ca1 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_FadeNextSong_d__46);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    __this_00[2].monitor = nextClip;
    il2cpp_runtime_glue(&__this_00[2].monitor,nextClip);
    *(float *)((long)&__this_00[3].klass + 4) = volume;
    *(float *)&__this_00[3].klass = startTime;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$Update
// il2cpp: void ApplicationManagers_MusicManager__Update (ApplicationManagers_MusicManager_o* __this, const MethodInfo* method);
// 0x41a3540

void ApplicationManagers_MusicManager__Update
               (ApplicationManagers_MusicManager_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *pMVar2;
  System_String_o *pSVar3;
  float fVar4;
  float fVar5;
  
  if (DAT_05704ca2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata();
    DAT_05704ca2 = '\x01';
  }
  fVar5 = (__this->fields)._songTimeLeft;
  fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._songTimeLeft = fVar5 - fVar4;
  fVar5 = *(float *)((long)&(__this->fields)._currentSongName + 4);
  pMVar2 = (MethodInfo *)0x0;
  fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar5 = fVar5 - fVar4;
  *(float *)((long)&(__this->fields)._currentSongName + 4) = fVar5;
  if (*(char *)&(__this->fields)._currentSongName == '\0') {
    if (0.0 < (__this->fields)._songTimeLeft) {
      return;
    }
    if (0.0 < fVar5) {
      return;
    }
    if ((char)(__this->fields)._autoPlay == '\0') {
      return;
    }
    ApplicationManagers_MusicManager__NextSong(pMVar2);
    return;
  }
  pSVar3 = (__this->fields)._currentPlaylist;
  if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar2 = *(MethodInfo **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
  bVar1 = System_String__op_Inequality(pSVar3,(System_String_o *)pMVar2,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (0.0 < *(float *)((long)&(__this->fields)._currentSongName + 4)) {
      if (**(long **)(TypeInfo_MusicManager + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(char *)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x68) == '\0') goto LAB_041a3659;
    }
    bVar1 = ApplicationManagers_MusicManager__ShouldPlayBattleMusic(__this,pMVar2);
    if ((char)bVar1 != '\0') {
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
        il2cpp_init_class();
        method_00 = extraout_RDX_00;
      }
      pMVar2 = (MethodInfo *)0x1;
      ApplicationManagers_MusicManager__FinishSetPlaylist
                (*(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20),1,method_00);
    }
  }
LAB_041a3659:
  if (((__this->fields)._songTimeLeft <= 0.0) && ((char)(__this->fields)._autoPlay != '\0')) {
    fVar5 = *(float *)((long)&(__this->fields)._currentSongName + 4);
    if (0.0 < fVar5) goto LAB_041a3744;
    bVar1 = ApplicationManagers_MusicManager__ShouldPlayBattleMusic(__this,pMVar2);
    if ((char)bVar1 == '\0') {
      pSVar3 = (__this->fields)._currentPlaylist;
      if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = System_String__op_Equality
                        (pSVar3,*(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20),
                         (MethodInfo *)0x0);
      pMVar2 = extraout_RDX_03;
      if (((char)bVar1 == '\0') &&
         (*(char *)((long)&(__this->fields)._isDefaultPlaylist + 1) == '\0')) {
        if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
          il2cpp_init_class();
          pMVar2 = extraout_RDX_05;
        }
        pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x10);
      }
      else {
        if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
          il2cpp_init_class();
          pMVar2 = extraout_RDX_04;
        }
        pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x18);
      }
    }
    else {
      pMVar2 = extraout_RDX_01;
      if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar2 = extraout_RDX_02;
      }
      pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 0x20);
    }
    ApplicationManagers_MusicManager__FinishSetPlaylist(pSVar3,1,pMVar2);
  }
  fVar5 = *(float *)((long)&(__this->fields)._currentSongName + 4);
LAB_041a3744:
  if ((fVar5 <= 0.0) && (*(char *)((long)&(__this->fields)._isDefaultPlaylist + 1) != '\0')) {
    *(undefined1 *)((long)&(__this->fields)._isDefaultPlaylist + 1) = 0;
  }
  return;
}


// ApplicationManagers.MusicManager$$ShouldPlayBattleMusic
// il2cpp: bool ApplicationManagers_MusicManager__ShouldPlayBattleMusic (ApplicationManagers_MusicManager_o* __this, const MethodInfo* method);
// 0x41a3790

/* WARNING: Removing unreachable block (ram,0x041a3d33) */

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
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  byte bVar13;
  int iVar15;
  int iVar16;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o UVar19;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  byte bVar14;
  
  if (DAT_05704ca3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata();
    DAT_05704ca3 = '\x01';
  }
  fVar17 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if ((__this->fields)._lastTimeBeforeGrabbed + 0.2 <= fVar17) {
    fVar17 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._lastTimeBeforeGrabbed = fVar17;
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2) {
      pUVar2 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pUVar2 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          plVar9 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
          if (plVar9 != (long *)0x0) {
            if (((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
                (*(long *)(*(long *)(*plVar9 + 200) + -8 +
                          (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) == TypeInfo_InGameCamera)) &&
               (__this_00 = *(GameManagers_InGameManager_o **)
                             (*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10),
               __this_00 != (GameManagers_InGameManager_o *)0x0)) {
              bVar13 = (TypeInfo_InGameManager->_2).naturalAligment;
              if ((bVar13 <= (__this_00->klass->_2).naturalAligment) &&
                 ((__this_00->klass->_2).typeHierarchy[(ulong)bVar13 - 1] == TypeInfo_InGameManager)) {
                b = (Characters_BaseCharacter_o *)plVar9[7];
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar7 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)b,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar7 != '\0') {
                  return 0;
                }
                a = (Characters_BaseCharacter_o *)
                    GameManagers_InGameManager__GetAllCharactersEnumerable
                              (__this_00,(MethodInfo *)0x0);
                if (a == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pCVar3 = a->klass;
                uVar1._0_1_ = (pCVar3->_2).rank;
                uVar1._1_1_ = (pCVar3->_2).minimumAlignment;
                if ((ulong)uVar1 != 0) {
                  pIVar4 = (pCVar3->_1).interfaceOffsets;
                  lVar11 = 0;
                  do {
                    if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_IEnumerable_BaseCharacter) {
                      pVVar8 = &(pCVar3->vtable)._0_Equals +
                               *(int *)((long)&pIVar4->offset + lVar11);
                      goto LAB_041a39f7;
                    }
                    lVar11 = lVar11 + 0x10;
                  } while ((ulong)uVar1 << 4 != lVar11);
                }
                pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(a,TypeInfo_IEnumerable_BaseCharacter,0);
LAB_041a39f7:
                plVar9 = (long *)(*pVVar8->methodPtr)(a,pVVar8->method);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
LAB_041a3a26:
                do {
                  do {
                    lVar11 = *plVar9;
                    if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
                      lVar12 = 0;
                      do {
                        if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
                          puVar10 = (undefined8 *)
                                    ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 +
                                     lVar11 + 0x138);
                          goto LAB_041a3a78;
                        }
                        lVar12 = lVar12 + 0x10;
                      } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
                    }
                    puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator,0);
LAB_041a3a78:
                    cVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                    if (cVar6 == '\0') {
                      iVar16 = 3;
                      iVar15 = 3;
                      bVar14 = 0;
                      bVar13 = 0;
joined_r0x041a3c86:
                      if (plVar9 == (long *)0x0) goto LAB_041a3cf7;
                      goto LAB_041a3c9a;
                    }
                    lVar11 = *plVar9;
                    if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
                      lVar12 = 0;
                      do {
                        if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator_BaseCharacter) {
                          puVar10 = (undefined8 *)
                                    ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 +
                                     lVar11 + 0x138);
                          goto LAB_041a3ae1;
                        }
                        lVar12 = lVar12 + 0x10;
                      } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
                    }
                    puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator_BaseCharacter,0);
LAB_041a3ae1:
                    a = (Characters_BaseCharacter_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
                    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    bVar7 = GameManagers_TeamInfo__SameTeam(a,b,(MethodInfo *)0x0);
                  } while ((char)bVar7 != '\0');
                  if (a == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  lVar11 = *(long *)&(a->fields).Dead;
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar5 = *(UnityEngine_Transform_o **)(lVar11 + 0x10);
                  if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  UVar18 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
                  if (b == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  lVar11 = *(long *)&(b->fields).Dead;
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar5 = *(UnityEngine_Transform_o **)(lVar11 + 0x10);
                  if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  UVar19 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
                  if (DAT_056fdea6 == '\0') {
                    il2cpp_init_method_metadata(&TypeInfo_Math);
                    DAT_056fdea6 = '\x01';
                  }
                  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                    il2cpp_init_class();
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
                  bVar13 = (TypeInfo_BasicTitan->_2).naturalAligment;
                  if ((bVar13 <= (a->klass->_2).naturalAligment) &&
                     ((a->klass->_2).typeHierarchy[(ulong)bVar13 - 1] == TypeInfo_BasicTitan)) {
                    bVar14 = 1;
                    bVar13 = 1;
                    iVar16 = 9;
                    iVar15 = 9;
                    if ((fVar17 < 200.0) ||
                       ((fVar17 < 1000.0 && (0 < *(int *)((long)&a[2].fields.OutlineComponent + 4)))
                       )) goto joined_r0x041a3c86;
                    goto LAB_041a3a26;
                  }
                } while (500.0 <= fVar17);
                bVar13 = 1;
                iVar15 = 9;
                iVar16 = 9;
                bVar14 = 1;
                if (plVar9 != (long *)0x0) {
LAB_041a3c9a:
                  bVar13 = bVar14;
                  iVar15 = iVar16;
                  lVar11 = *plVar9;
                  if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
                    lVar12 = 0;
                    do {
                      if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
                        puVar10 = (undefined8 *)
                                  (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) *
                                            0x10 + 0x138);
                        goto LAB_041a3cee;
                      }
                      lVar12 = lVar12 + 0x10;
                    } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
                  }
                  puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IDisposable,0);
LAB_041a3cee:
                  (*(code *)*puVar10)(plVar9,puVar10[1]);
                }
LAB_041a3cf7:
                return (bool_conflict)CONCAT71((int7)((ulong)a >> 8),iVar15 == 9 & bVar13);
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
// 0x41a18d0

float ApplicationManagers_MusicManager__GetMusicVolume(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704ca4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    DAT_05704ca4 = '\x01';
  }
  if (*(char *)(*(long *)(TypeInfo_MusicManager + 0xb8) + 0x10) != '\0') {
    return 0.0;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) {
    return *(float *)(lVar1 + 0x14) * 0.4;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$GetCurrentSong
// il2cpp: System_String_o* ApplicationManagers_MusicManager__GetCurrentSong (const MethodInfo* method);
// 0x41a3ef0

System_String_o * ApplicationManagers_MusicManager__GetCurrentSong(MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704ca5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"");
    DAT_05704ca5 = '\x01';
  }
  if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
    bVar1 = System_String__op_Equality
                      (*(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x58),"",
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return "None";
    }
    if (**(long **)(TypeInfo_MusicManager + 0xb8) != 0) {
      return *(System_String_o **)(**(long **)(TypeInfo_MusicManager + 0xb8) + 0x58);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$GetAllSongs
// il2cpp: System_Collections_Generic_List_string__o* ApplicationManagers_MusicManager__GetAllSongs (const MethodInfo* method);
// 0x41a3f90

System_Collections_Generic_List_string__o *
ApplicationManagers_MusicManager__GetAllSongs(MethodInfo *method)

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
  System_String_o *item;
  System_Collections_Generic_List_string__o *__this_09;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar4;
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
  
  if (DAT_05704ca6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&"Name");
    DAT_05704ca6 = '\x01';
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
  __this_08 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this_08,MethodInfo_HashSet_1_System_String);
  pSVar3 = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_MusicManager + 0xb8) + 8);
  if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_041a43b6:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  SimpleJSONFixed_JSONNode__get_Values
            ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&stack0xfffffffffffffea0,pSVar3,
             (MethodInfo *)0x0);
  local_38 = local_120;
  __this.fields.m_Enumerator.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
  __this.fields.m_Enumerator.fields._0_8_ = __this_08;
  __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
  __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
       (Il2CppObject *)in_stack_fffffffffffffeb0;
  __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
       in_stack_fffffffffffffeb8;
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
  __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
       in_stack_fffffffffffffeb8;
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
    do {
      __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
      __this_02.fields.m_Enumerator.fields._0_8_ = __this_08;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)in_stack_fffffffffffffeb0;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           in_stack_fffffffffffffeb8;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
      pSVar3 = SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current
                         (__this_02,(MethodInfo *)local_118);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041a43b6;
      (*(pSVar3->klass->vtable)._32_unknown.methodPtr)
                (&stack0xfffffffffffffea0,pSVar3,(pSVar3->klass->vtable)._32_unknown.method);
      local_c8._64_8_ = local_120;
      __this_03.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
      __this_03.fields._0_8_ = __this_08;
      __this_03.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
      __this_03.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)in_stack_fffffffffffffeb0;
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
            __this_04.fields.m_Object.fields._current.fields.key =
                 (Il2CppObject *)in_stack_fffffffffffffeb0;
            __this_04.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb8;
            __this_04.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
            __this_04.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
            __this_04.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
            __this_04.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
            SVar4 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (__this_04,(MethodInfo *)local_c8);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(SVar4,(MethodInfo *)0x0);
            if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041a43b6;
            cVar1 = (*(pSVar3->klass->vtable)._28_HasKey.methodPtr)
                              (pSVar3,"Name",(pSVar3->klass->vtable)._28_HasKey.method);
            if (cVar1 != '\0') {
              pSVar3 = (SimpleJSONFixed_JSONNode_o *)
                       (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_init_class();
              }
              SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            __this_05.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
            __this_05.fields._0_8_ = __this_08;
            __this_05.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
            __this_05.fields.m_Object.fields._current.fields.key =
                 (Il2CppObject *)in_stack_fffffffffffffeb0;
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
            __this_07.fields.m_Object.fields._current.fields.key =
                 (Il2CppObject *)in_stack_fffffffffffffeb0;
            __this_07.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffeb8;
            __this_07.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
            __this_07.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
            __this_07.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
            __this_07.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
            SVar4 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (__this_07,(MethodInfo *)local_c8);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(SVar4,(MethodInfo *)0x0);
            if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041a43b6;
            cVar1 = (*(pSVar3->klass->vtable)._28_HasKey.methodPtr)
                              (pSVar3,"Name",(pSVar3->klass->vtable)._28_HasKey.method);
            if (cVar1 != '\0') {
              pSVar3 = (SimpleJSONFixed_JSONNode_o *)
                       (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_init_class();
              }
              item = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
              System_Collections_Generic_HashSet<object>__Add
                        (__this_08,(Il2CppObject *)item,MethodInfo_Boolean_Add);
            }
            __this_06.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea0;
            __this_06.fields._0_8_ = __this_08;
            __this_06.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffea8;
            __this_06.fields.m_Object.fields._current.fields.key =
                 (Il2CppObject *)in_stack_fffffffffffffeb0;
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
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           in_stack_fffffffffffffeb8;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffec0;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffed0;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffed8.rgctx_data;
      bVar2 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext(__this_01,(MethodInfo *)local_118);
    } while ((char)bVar2 != '\0');
  }
  __this_09 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_09,
             (System_Collections_Generic_IEnumerable_T__o *)__this_08,MethodInfo_List_1_System_String);
  return __this_09;
}


// ApplicationManagers.MusicManager$$PlaySoundOneShot
// il2cpp: void ApplicationManagers_MusicManager__PlaySoundOneShot (UnityEngine_AudioSource_o* source, const MethodInfo* method);
// 0x41a4400

void ApplicationManagers_MusicManager__PlaySoundOneShot
               (UnityEngine_AudioSource_o *source,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *target;
  UnityEngine_AudioClip_o *clip;
  
  if (DAT_05704ca7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ca7 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (source != (UnityEngine_AudioSource_o *)0x0) {
    target = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
    clip = UnityEngine_AudioSource__get_clip(source,(MethodInfo *)0x0);
    UnityEngine_AudioSource__PlayOneShot(source,clip,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.MusicManager$$.ctor
// il2cpp: void ApplicationManagers_MusicManager___ctor (ApplicationManagers_MusicManager_o* __this, const MethodInfo* method);
// 0x41a44a0

void ApplicationManagers_MusicManager___ctor
               (ApplicationManagers_MusicManager_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_Collections_Generic_List_object__o *__this_00;
  
  if (DAT_05704ca8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704ca8 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
  *(System_Collections_Generic_List_object__o **)&(__this->fields)._currentSong = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._currentSong,__this_00);
  uVar1 = **(undefined8 **)(DAT_057110b0 + 0xb8);
  (__this->fields)._isMenuTransition = (int)uVar1;
  (__this->fields)._justPlayedMenuTransition = (int)((ulong)uVar1 >> 0x20);
  il2cpp_runtime_glue(&(__this->fields)._isMenuTransition);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


