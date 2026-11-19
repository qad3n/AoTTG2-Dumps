// Type: ApplicationManagers.MusicManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers/MusicManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/MusicManager.cs
// --------------------------------

// ApplicationManagers.MusicManager.<>c$$.cctor
// il2cpp: void ApplicationManagers_MusicManager___c___cctor (const MethodInfo* method);
// 0x5e1b310

void ApplicationManagers_MusicManager___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07548466 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager_c);
    Il2CppMethodInitialized_07548466 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_MusicManager_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_MusicManager_c->static_fields->__9 =
       (ApplicationManagers_MusicManager___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_MusicManager_c->static_fields->__9);
  return;
}


// ApplicationManagers.MusicManager.<>c$$.ctor
// il2cpp: void ApplicationManagers_MusicManager___c___ctor (ApplicationManagers_MusicManager___c_o* __this, const MethodInfo* method);
// 0x5e1b380

void ApplicationManagers_MusicManager___c___ctor
               (ApplicationManagers_MusicManager___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.MusicManager.<>c$$<SetPlaylist>b__37_0
// il2cpp: bool ApplicationManagers_MusicManager___c___SetPlaylist_b__37_0 (ApplicationManagers_MusicManager___c_o* __this, System_String_o* song, const MethodInfo* method);
// 0x5e1b390

bool ApplicationManagers_MusicManager___c___SetPlaylist_b__37_0
               (ApplicationManagers_MusicManager___c_o *__this,System_String_o *song,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *a;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)song;
  if (Il2CppMethodInitialized_07548467 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548467 = '\x01';
  }
  a = ApplicationManagers_MusicManager__FindSong(song,method_00);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__47$$.ctor
// il2cpp: void ApplicationManagers_MusicManager__FadeNextSong_d__47___ctor (ApplicationManagers_MusicManager__FadeNextSong_d__47_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e1a520

void ApplicationManagers_MusicManager__FadeNextSong_d__47___ctor
               (ApplicationManagers_MusicManager__FadeNextSong_d__47_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__47$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_MusicManager__FadeNextSong_d__47__System_IDisposable_Dispose (ApplicationManagers_MusicManager__FadeNextSong_d__47_o* __this, const MethodInfo* method);
// 0x5e1b3e0

void ApplicationManagers_MusicManager__FadeNextSong_d__47__System_IDisposable_Dispose
               (ApplicationManagers_MusicManager__FadeNextSong_d__47_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__47$$MoveNext
// il2cpp: bool ApplicationManagers_MusicManager__FadeNextSong_d__47__MoveNext (ApplicationManagers_MusicManager__FadeNextSong_d__47_o* __this, const MethodInfo* method);
// 0x5e1b3f0

bool ApplicationManagers_MusicManager__FadeNextSong_d__47__MoveNext
               (ApplicationManagers_MusicManager__FadeNextSong_d__47_o *__this,MethodInfo *method)

{
  float fVar1;
  uint uVar2;
  ApplicationManagers_MusicManager_o *pAVar3;
  ApplicationManagers_MusicManager_o *pAVar4;
  System_String_o *a;
  UnityEngine_AudioSource_o *pUVar5;
  Settings_SoundSettings_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  UnityEngine_AudioClip_o *pUVar8;
  bool bVar9;
  int32_t iVar10;
  UnityEngine_WaitForSeconds_o *pUVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (Il2CppMethodInitialized_07548468 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_07548468 = '\x01';
  }
  uVar2 = (__this->fields).__1__state;
  if (3 < uVar2) {
    return false;
  }
  pAVar3 = (__this->fields).__4__this;
  switch(uVar2) {
  case 0:
    (__this->fields).__1__state = -1;
    (__this->fields)._fadeInTime_5__2 = 5.0;
    (__this->fields)._fadeOutTime_5__3 = 1.0;
    pAVar4 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar4 == (ApplicationManagers_MusicManager_o *)0x0) goto label_05e1b999;
    a = (pAVar4->fields)._currentPlaylist;
    if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
    }
    bVar9 = System_String__op_Equality
                      (a,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Battle,(MethodInfo *)0x0);
    if (bVar9) {
      (__this->fields)._fadeInTime_5__2 = 1.0;
    }
    if (pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) goto label_05e1b999;
    (pAVar3->fields)._isFading = true;
    (__this->fields)._fadeTimeLeft_5__4 = (__this->fields)._fadeOutTime_5__3;
    pUVar5 = (pAVar3->fields)._audio;
    if (pUVar5 == (UnityEngine_AudioSource_o *)0x0) goto label_05e1b999;
    bVar9 = UnityEngine_AudioSource__get_isPlaying(pUVar5,(MethodInfo *)0x0);
    if (bVar9) {
      pUVar5 = (pAVar3->fields)._audio;
      if (pUVar5 == (UnityEngine_AudioSource_o *)0x0) goto label_05e1b999;
      fVar12 = UnityEngine_AudioSource__get_volume(pUVar5,(MethodInfo *)0x0);
      (pAVar3->fields)._songVolume = fVar12;
      fVar12 = (__this->fields)._fadeTimeLeft_5__4;
      goto joined_r0x05e1b5a6;
    }
    break;
  case 1:
    (__this->fields).__1__state = -1;
    fVar12 = (__this->fields)._fadeTimeLeft_5__4;
joined_r0x05e1b5a6:
    if (0.0 < fVar12) {
      if ((pAVar3 != (ApplicationManagers_MusicManager_o *)0x0) &&
         (pUVar5 = (pAVar3->fields)._audio, pUVar5 != (UnityEngine_AudioSource_o *)0x0)) {
        UnityEngine_AudioSource__set_volume
                  (pUVar5,(fVar12 / (__this->fields)._fadeOutTime_5__3) * (pAVar3->fields)._songVolume,
                   (MethodInfo *)0x0);
        (__this->fields)._fadeTimeLeft_5__4 = (__this->fields)._fadeTimeLeft_5__4 + -0.1;
        pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(pUVar11,0.1,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar11;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 1;
        return true;
      }
      goto label_05e1b999;
    }
    if ((pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) ||
       (pUVar5 = (pAVar3->fields)._audio, pUVar5 == (UnityEngine_AudioSource_o *)0x0)) goto label_05e1b999;
    UnityEngine_AudioSource__Stop_68b0850(pUVar5,(MethodInfo *)0x0);
    break;
  case 2:
    (__this->fields).__1__state = -1;
    goto label_05e1b802;
  case 3:
    (__this->fields).__1__state = -1;
    fVar12 = (__this->fields)._fadeTimeLeft_5__4;
    goto joined_r0x05e1b64b;
  }
  pUVar8 = (__this->fields).nextClip;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    (pAVar3->fields)._songTimeLeft = 0.0;
    (pAVar3->fields)._autoPlay = true;
    return false;
  }
  pUVar5 = (pAVar3->fields)._audio;
  if (pUVar5 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_clip(pUVar5,(__this->fields).nextClip,(MethodInfo *)0x0);
    pUVar5 = (pAVar3->fields)._audio;
    if (pUVar5 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__set_volume(pUVar5,0.0,(MethodInfo *)0x0);
      pUVar8 = (__this->fields).nextClip;
      if (pUVar8 != (UnityEngine_AudioClip_o *)0x0) {
        fVar12 = UnityEngine_AudioClip__get_length(pUVar8,(MethodInfo *)0x0);
        (pAVar3->fields)._songTimeLeft = fVar12 - (__this->fields)._fadeOutTime_5__3;
        pUVar5 = (pAVar3->fields)._audio;
        if (pUVar5 != (UnityEngine_AudioSource_o *)0x0) {
          UnityEngine_AudioSource__Play_68b06a0(pUVar5,(MethodInfo *)0x0);
          if (0.0 < (__this->fields).startTime) {
label_05e1b802:
            pUVar8 = (__this->fields).nextClip;
            if (pUVar8 == (UnityEngine_AudioClip_o *)0x0) goto label_05e1b999;
            iVar10 = UnityEngine_AudioClip__get_loadState(pUVar8,(MethodInfo *)0x0);
            if (iVar10 == 1) {
              (__this->fields).__2__current = (Il2CppObject *)0x0;
              Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
              (__this->fields).__1__state = 2;
              return true;
            }
            if ((pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) ||
               (pUVar8 = (__this->fields).nextClip, pUVar8 == (UnityEngine_AudioClip_o *)0x0))
            goto label_05e1b999;
            pUVar5 = (pAVar3->fields)._audio;
            fVar12 = (__this->fields).startTime;
            fVar14 = UnityEngine_AudioClip__get_length(pUVar8,(MethodInfo *)0x0);
            if (pUVar5 == (UnityEngine_AudioSource_o *)0x0) goto label_05e1b999;
            if (fVar14 + -0.1 <= fVar12) {
              fVar12 = fVar14 + -0.1;
            }
            UnityEngine_AudioSource__set_time(pUVar5,fVar12,(MethodInfo *)0x0);
            (pAVar3->fields)._songTimeLeft = (pAVar3->fields)._songTimeLeft - (__this->fields).startTime;
          }
          (pAVar3->fields)._songVolume = (__this->fields).volume;
          (pAVar3->fields)._autoPlay = true;
          fVar12 = (__this->fields)._fadeInTime_5__2;
          (__this->fields)._fadeTimeLeft_5__4 = fVar12;
joined_r0x05e1b64b:
          if (0.0 < fVar12) {
            if (pAVar3 != (ApplicationManagers_MusicManager_o *)0x0) {
              fVar14 = (__this->fields)._fadeInTime_5__2;
              pUVar5 = (pAVar3->fields)._audio;
              fVar1 = (pAVar3->fields)._songVolume;
              if (Il2CppMethodInitialized_07548462 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
                Il2CppMethodInitialized_07548462 = '\x01';
              }
              fVar13 = 0.0;
              if (TypeInfo_ApplicationManagers_MusicManager->static_fields->_muted == false) {
                pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
                if ((pSVar6 == (Settings_SoundSettings_o *)0x0) ||
                   (pSVar7 = (pSVar6->fields).Music, pSVar7 == (Settings_FloatSetting_o *)0x0))
                goto label_05e1b999;
                fVar13 = (pSVar7->fields)._value * 0.4;
              }
              if (pUVar5 != (UnityEngine_AudioSource_o *)0x0) {
                UnityEngine_AudioSource__set_volume
                          (pUVar5,(1.0 - fVar12 / fVar14) * fVar1 * fVar13,(MethodInfo *)0x0);
                (__this->fields)._fadeTimeLeft_5__4 = (__this->fields)._fadeTimeLeft_5__4 + -0.1;
                pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
                UnityEngine_WaitForSeconds___ctor(pUVar11,0.1,(MethodInfo *)0x0);
                (__this->fields).__2__current = (Il2CppObject *)pUVar11;
                Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
                (__this->fields).__1__state = 3;
                return true;
              }
            }
          }
          else if (pAVar3 != (ApplicationManagers_MusicManager_o *)0x0) {
            pUVar5 = (pAVar3->fields)._audio;
            fVar12 = (pAVar3->fields)._songVolume;
            if (Il2CppMethodInitialized_07548462 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
              il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
              Il2CppMethodInitialized_07548462 = '\x01';
            }
            fVar14 = 0.0;
            if (TypeInfo_ApplicationManagers_MusicManager->static_fields->_muted == false) {
              pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
              if ((pSVar6 == (Settings_SoundSettings_o *)0x0) ||
                 (pSVar7 = (pSVar6->fields).Music, pSVar7 == (Settings_FloatSetting_o *)0x0))
              goto label_05e1b999;
              fVar14 = (pSVar7->fields)._value * 0.4;
            }
            if (pUVar5 != (UnityEngine_AudioSource_o *)0x0) {
              UnityEngine_AudioSource__set_volume(pUVar5,fVar12 * fVar14,(MethodInfo *)0x0);
              (pAVar3->fields)._isFading = false;
              return false;
            }
          }
        }
      }
    }
  }
label_05e1b999:
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__47$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_MusicManager__FadeNextSong_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_MusicManager__FadeNextSong_d__47_o* __this, const MethodInfo* method);
// 0x5e1b9a0

Il2CppObject *
ApplicationManagers_MusicManager__FadeNextSong_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_MusicManager__FadeNextSong_d__47_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__47$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_MusicManager__FadeNextSong_d__47__System_Collections_IEnumerator_Reset (ApplicationManagers_MusicManager__FadeNextSong_d__47_o* __this, const MethodInfo* method);
// 0x5e1b9b0

void ApplicationManagers_MusicManager__FadeNextSong_d__47__System_Collections_IEnumerator_Reset
               (ApplicationManagers_MusicManager__FadeNextSong_d__47_o *__this,MethodInfo *method)

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
                  MethodInfo_ApplicationManagers_MusicManager_FadeNextSong_d__47_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.MusicManager.<FadeNextSong>d__47$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_MusicManager__FadeNextSong_d__47__System_Collections_IEnumerator_get_Current (ApplicationManagers_MusicManager__FadeNextSong_d__47_o* __this, const MethodInfo* method);
// 0x5e1b9f0

Il2CppObject *
ApplicationManagers_MusicManager__FadeNextSong_d__47__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_MusicManager__FadeNextSong_d__47_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.MusicManager$$Init
// il2cpp: void ApplicationManagers_MusicManager__Init (const MethodInfo* method);
// 0x5e08f30

void ApplicationManagers_MusicManager__Init(MethodInfo *method)

{
  ApplicationManagers_MusicManager_StaticFields *pAVar1;
  ApplicationManagers_MusicManager_o *pAVar2;
  Events_OnLoadScene_o *__this;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_AudioSource_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *p;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754844d == '\0') {
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
    Il2CppMethodInitialized_0754844d = '\x01';
  }
  pAVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance,
                      (MethodInfo_3680650 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_MusicManager);
  TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance = pAVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnLoadScene);
  Events_OnLoadScene___ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)MethodInfo_ApplicationManagers_MusicManager_OnLoadScene,
             (MethodInfo *)0x0);
  Events_EventManager__add_OnLoadScene(__this,(MethodInfo *)0x0);
  pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pAVar2,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar3,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_AudioSource);
      (pAVar2->fields)._audio = pUVar4;
      Il2CppCodeGenWriteBarrier(&(pAVar2->fields)._audio);
      pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      if ((pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) &&
         (pUVar4 = (pAVar2->fields)._audio, pUVar4 != (UnityEngine_AudioSource_o *)0x0)) {
        UnityEngine_AudioSource__set_ignoreListenerVolume(pUVar4,true,(MethodInfo *)0x0);
        pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
        pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor(pUVar3,"SoundEffect",(MethodInfo *)0x0);
        if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
          (pAVar2->fields)._soundEffectObject = pUVar3;
          Il2CppCodeGenWriteBarrier(&(pAVar2->fields)._soundEffectObject);
          pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
          if ((pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) &&
             (pUVar3 = (pAVar2->fields)._soundEffectObject, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            __this_00 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
            pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
            if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
              p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pAVar2,(MethodInfo *)0x0);
              if (__this_00 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent(__this_00,p,(MethodInfo *)0x0);
                pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
                if ((pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) &&
                   (pUVar3 = (pAVar2->fields)._soundEffectObject, pUVar3 != (UnityEngine_GameObject_o *)0x0))
                {
                  pUVar4 = UnityEngine_GameObject__AddComponent_object_
                                     (pUVar3,(MethodInfo_353B6A0 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_AudioSource);
                  (pAVar2->fields)._soundEffect = pUVar4;
                  Il2CppCodeGenWriteBarrier(&(pAVar2->fields)._soundEffect);
                  method_00 = extraout_RDX;
                  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
                    method_00 = extraout_RDX_00;
                  }
                  pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
                  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
                    method_00 = extraout_RDX_01;
                  }
                  pSVar5 = ApplicationManagers_ResourceManager__TryLoadText
                                     (pSVar5,"MusicInfo",method_00);
                  pSVar6 = SimpleJSONFixed_JSON__Parse(pSVar5,(MethodInfo *)0x0);
                  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields;
                  pAVar1->_musicInfo = pSVar6;
                  Il2CppCodeGenWriteBarrier(&pAVar1->_musicInfo);
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
// 0x5e18580

void ApplicationManagers_MusicManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754844e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    Il2CppMethodInitialized_0754844e = '\x01';
  }
  if (3 < sceneName - 3U) {
    if (sceneName == 2) {
      if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
      }
      ApplicationManagers_MusicManager__SetPlaylist
                (TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Default,method);
      return;
    }
    if (sceneName != 1) {
      return;
    }
  }
  if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
  }
  ApplicationManagers_MusicManager__SetPlaylist
            (TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Menu,method);
  return;
}


// ApplicationManagers.MusicManager$$ApplySoundSettings
// il2cpp: void ApplicationManagers_MusicManager__ApplySoundSettings (const MethodInfo* method);
// 0x5e16170

void ApplicationManagers_MusicManager__ApplySoundSettings(MethodInfo *method)

{
  float fVar1;
  ApplicationManagers_MusicManager_o *pAVar2;
  UnityEngine_AudioSource_o *__this;
  Settings_SoundSettings_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_String_o *a;
  bool bVar6;
  ApplicationManagers_MusicManager_StaticFields *pAVar7;
  MethodInfo *method_00;
  float fVar8;
  
  if (Il2CppMethodInitialized_0754844f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_0754844f = '\x01';
  }
  pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pAVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  pAVar7 = TypeInfo_ApplicationManagers_MusicManager->static_fields;
  pAVar2 = pAVar7->_instance;
  if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
    if ((pAVar2->fields)._isFading == false) {
      __this = (pAVar2->fields)._audio;
      fVar1 = (pAVar2->fields)._songVolume;
      if (Il2CppMethodInitialized_07548462 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
        Il2CppMethodInitialized_07548462 = '\x01';
        pAVar7 = TypeInfo_ApplicationManagers_MusicManager->static_fields;
      }
      fVar8 = 0.0;
      if (pAVar7->_muted == false) {
        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
        if ((pSVar3 == (Settings_SoundSettings_o *)0x0) ||
           (pSVar4 = (pSVar3->fields).Music, pSVar4 == (Settings_FloatSetting_o *)0x0)) goto label_05e16372;
        fVar8 = (pSVar4->fields)._value * 0.4;
      }
      if (__this == (UnityEngine_AudioSource_o *)0x0) goto label_05e16372;
      UnityEngine_AudioSource__set_volume(__this,fVar1 * fVar8,(MethodInfo *)0x0);
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    if ((pSVar3 != (Settings_SoundSettings_o *)0x0) &&
       (pSVar5 = (pSVar3->fields).ForcePlaylist, pSVar5 != (Settings_StringSetting_o *)0x0)) {
      a = (pSVar5->fields)._value;
      if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
      }
      method_00 = (MethodInfo *)TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Default;
      bVar6 = System_String__op_Inequality(a,(System_String_o *)method_00,(MethodInfo *)0x0);
      if (!bVar6) {
        return;
      }
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
      if ((pSVar3 != (Settings_SoundSettings_o *)0x0) &&
         (pSVar5 = (pSVar3->fields).ForcePlaylist, pSVar5 != (Settings_StringSetting_o *)0x0)) {
        ApplicationManagers_MusicManager__SetPlaylist((pSVar5->fields)._value,method_00);
        return;
      }
    }
  }
label_05e16372:
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$PlayDeathSong
// il2cpp: void ApplicationManagers_MusicManager__PlayDeathSong (const MethodInfo* method);
// 0x5e18a20

void ApplicationManagers_MusicManager__PlayDeathSong(MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548450 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Death");
    Il2CppMethodInitialized_07548450 = '\x01';
  }
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
    if ((pAVar1->fields)._isDefaultPlaylist == false) {
      return;
    }
    pSVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_musicInfo;
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar2,"Death",(pSVar2->klass->vtable)._7_get_Item.method);
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        pSVar2 = (*(pSVar2->klass->vtable)._5_get_Item.methodPtr)
                           (pSVar2,0,(pSVar2->klass->vtable)._5_get_Item.method);
        pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
        if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
          (pAVar1->fields)._isMenuTransition = false;
          ApplicationManagers_MusicManager__PlayImmediateTransition(pSVar2,method_00);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$PlayGrabbedSong
// il2cpp: void ApplicationManagers_MusicManager__PlayGrabbedSong (const MethodInfo* method);
// 0x5e18db0

void ApplicationManagers_MusicManager__PlayGrabbedSong(MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  ApplicationManagers_MusicManager_o *pAVar3;
  System_String_o *a;
  UnityEngine_AudioSource_o *__this;
  bool bVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  MethodInfo *method_00;
  System_String_o **ppSVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_07548451 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    ppSVar6 = &"Grabbed";
    il2cpp_codegen_initialize_runtime_metadata(&"Grabbed");
    Il2CppMethodInitialized_07548451 = '\x01';
    method = (MethodInfo *)ppSVar6;
  }
  bVar4 = ApplicationManagers_MusicManager__IsMusicDisabled(method);
  if (bVar4) {
    return;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar1 != (Settings_SoundSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).TitanGrabMusic, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar2->fields)._value == false) {
      return;
    }
    pSVar5 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_musicInfo;
    if ((pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar5,"Grabbed",(pSVar5->klass->vtable)._7_get_Item.method),
       pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      pSVar5 = (*(pSVar5->klass->vtable)._5_get_Item.methodPtr)
                         (pSVar5,0,(pSVar5->klass->vtable)._5_get_Item.method);
      pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      if (pAVar3 != (ApplicationManagers_MusicManager_o *)0x0) {
        (pAVar3->fields)._isMenuTransition = false;
        a = (pAVar3->fields)._currentPlaylist;
        if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
        }
        bVar4 = System_String__op_Equality
                          (a,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Battle,
                           (MethodInfo *)0x0);
        pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
        if (bVar4) {
          if (pAVar3 != (ApplicationManagers_MusicManager_o *)0x0) {
            (pAVar3->fields)._lastSongBeforeGrabbed = (pAVar3->fields)._currentSongName;
            Il2CppCodeGenWriteBarrier(&(pAVar3->fields)._lastSongBeforeGrabbed);
            pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
            if ((pAVar3 != (ApplicationManagers_MusicManager_o *)0x0) &&
               (__this = (pAVar3->fields)._audio, __this != (UnityEngine_AudioSource_o *)0x0)) {
              method_00 = (MethodInfo *)0x0;
              fVar7 = UnityEngine_AudioSource__get_time(__this,(MethodInfo *)0x0);
              (pAVar3->fields)._lastTimeBeforeGrabbed = fVar7;
              goto label_05e18f7c;
            }
          }
        }
        else if (pAVar3 != (ApplicationManagers_MusicManager_o *)0x0) {
          method_00 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
          (pAVar3->fields)._lastSongBeforeGrabbed = (System_String_o *)method_00;
          Il2CppCodeGenWriteBarrier(&(pAVar3->fields)._lastSongBeforeGrabbed);
label_05e18f7c:
          ApplicationManagers_MusicManager__PlayImmediateTransition(pSVar5,method_00);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$OnEscapeGrab
// il2cpp: void ApplicationManagers_MusicManager__OnEscapeGrab (const MethodInfo* method);
// 0x5e19070

void ApplicationManagers_MusicManager__OnEscapeGrab(MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  
  if (Il2CppMethodInitialized_07548452 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    Il2CppMethodInitialized_07548452 = '\x01';
  }
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar1 == (ApplicationManagers_MusicManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (0.0 < (pAVar1->fields)._transitionTimeLeft) {
    (pAVar1->fields)._transitionTimeLeft = 0.0;
    (pAVar1->fields)._songTimeLeft = 0.0;
    (pAVar1->fields)._justEscapedGrab = true;
  }
  return;
}


// ApplicationManagers.MusicManager$$PlayEffect
// il2cpp: void ApplicationManagers_MusicManager__PlayEffect (const MethodInfo* method);
// 0x5e190d0

void ApplicationManagers_MusicManager__PlayEffect(MethodInfo *method)

{
  int32_t maxExclusive;
  uint uVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548453 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Effect");
    Il2CppMethodInitialized_07548453 = '\x01';
  }
  pSVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_musicInfo;
  if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar2,"Effect",(pSVar2->klass->vtable)._7_get_Item.method);
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      maxExclusive = (*(pSVar2->klass->vtable)._11_get_Count.methodPtr)
                               (pSVar2,(pSVar2->klass->vtable)._11_get_Count.method);
      uVar1 = UnityEngine_Random__Range_690e2b0(0,maxExclusive,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)(ulong)uVar1;
      pSVar2 = (*(pSVar2->klass->vtable)._5_get_Item.methodPtr)
                         (pSVar2,uVar1,(pSVar2->klass->vtable)._5_get_Item.method);
      ApplicationManagers_MusicManager__PlaySoundEffect(pSVar2,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$PlayTransition
// il2cpp: void ApplicationManagers_MusicManager__PlayTransition (const MethodInfo* method);
// 0x5e193b0

void ApplicationManagers_MusicManager__PlayTransition(MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  bool bVar2;
  int32_t maxExclusive;
  uint uVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  MethodInfo *method_00;
  System_String_o **ppSVar5;
  
  if (Il2CppMethodInitialized_07548454 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    ppSVar5 = &"Transition";
    il2cpp_codegen_initialize_runtime_metadata(&"Transition");
    Il2CppMethodInitialized_07548454 = '\x01';
    method = (MethodInfo *)ppSVar5;
  }
  bVar2 = ApplicationManagers_MusicManager__IsMusicDisabled(method);
  if (bVar2) {
    return;
  }
  pSVar4 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_musicInfo;
  if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar4,"Transition",(pSVar4->klass->vtable)._7_get_Item.method);
    pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if ((pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) &&
       ((pAVar1->fields)._isMenuTransition = true, (pAVar1->fields)._justPlayedMenuTransition = true,
       pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      maxExclusive = (*(pSVar4->klass->vtable)._11_get_Count.methodPtr)
                               (pSVar4,(pSVar4->klass->vtable)._11_get_Count.method);
      uVar3 = UnityEngine_Random__Range_690e2b0(0,maxExclusive,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)(ulong)uVar3;
      pSVar4 = (*(pSVar4->klass->vtable)._5_get_Item.methodPtr)
                         (pSVar4,uVar3,(pSVar4->klass->vtable)._5_get_Item.method);
      ApplicationManagers_MusicManager__PlayImmediateTransition(pSVar4,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$SetPlaylist
// il2cpp: void ApplicationManagers_MusicManager__SetPlaylist (System_String_o* playlist, const MethodInfo* method);
// 0x5e18620
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e187e0: test r15, r15
// asm:   0x5e187e9: jmp 0x5e18980

void ApplicationManagers_MusicManager__SetPlaylist(System_String_o *playlist,MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  ApplicationManagers_MusicManager_o *pAVar5;
  Il2CppObject *object;
  bool bVar6;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *pSVar7;
  ApplicationManagers_MusicManager___c_StaticFields *pAVar8;
  System_Predicate_T__o *match;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar9;
  
  if (Il2CppMethodInitialized_07548455 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_FindAll);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_MusicManager_c_SetPlaylist_b__37_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager_c);
    Il2CppMethodInitialized_07548455 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar1 == (Settings_SoundSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).ForcePlaylist, pSVar2 == (Settings_StringSetting_o *)0x0)) goto label_05e18980;
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
       (pSVar3 = (pSVar4->fields)._value, pSVar3 == (System_String_o *)0x0)) goto label_05e18980;
    playlist = (pSVar2->fields)._value;
    pAVar5 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    collection = System_String__Split(pSVar3,0x2c,0,(MethodInfo *)0x0);
    pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_395ca70
              ((System_Collections_Generic_List_object__o *)pSVar7,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    if ((TypeInfo_ApplicationManagers_MusicManager_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicManager_c);
      pAVar8 = TypeInfo_ApplicationManagers_MusicManager_c->static_fields;
      match = (System_Predicate_T__o *)pAVar8->__9__37_0;
    }
    else {
      pAVar8 = TypeInfo_ApplicationManagers_MusicManager_c->static_fields;
      match = (System_Predicate_T__o *)pAVar8->__9__37_0;
    }
    if (match == (System_Predicate_T__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_ApplicationManagers_MusicManager_c)->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicManager_c);
        pAVar8 = TypeInfo_ApplicationManagers_MusicManager_c->static_fields;
      }
      object = (Il2CppObject *)pAVar8->__9;
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_string);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,object,
                 (intptr_t)MethodInfo_ApplicationManagers_MusicManager_c_SetPlaylist_b__37_0,
                 (MethodInfo_3DC95B0 *)0x0);
      pAVar8 = TypeInfo_ApplicationManagers_MusicManager_c->static_fields;
      pAVar8->__9__37_0 = (System_Predicate_string__o *)match;
      Il2CppCodeGenWriteBarrier(&pAVar8->__9__37_0);
    }
    if ((pSVar7 == (System_Collections_Generic_List_string__o *)0x0) ||
       (pSVar7 = (System_Collections_Generic_List_string__o *)
                 System_Collections_Generic_List_object___FindAll
                           ((System_Collections_Generic_List_object__o *)pSVar7,match,
                            (MethodInfo_395DAF0 *)MethodInfo_System_Collections_Generic_List_string_FindAll),
       pAVar5 == (ApplicationManagers_MusicManager_o *)0x0)) goto label_05e18980;
    (pAVar5->fields)._customPlaylist = pSVar7;
    Il2CppCodeGenWriteBarrier(&(pAVar5->fields)._customPlaylist);
  }
  if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
  }
  pMVar9 = (MethodInfo *)playlist;
  bVar6 = System_String__op_Equality
                    (playlist,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->None,
                     (MethodInfo *)0x0);
  if (bVar6) {
    ApplicationManagers_MusicManager__StopMusic(pMVar9);
    return;
  }
  if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
  }
  bVar6 = System_String__op_Equality
                    (playlist,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Default,
                     (MethodInfo *)0x0);
  pAVar5 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  pMVar9 = extraout_RDX;
  if (bVar6) {
    if (pAVar5 != (ApplicationManagers_MusicManager_o *)0x0) {
      (pAVar5->fields)._isDefaultPlaylist = true;
      if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
        pMVar9 = extraout_RDX_00;
      }
      playlist = TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Ambient;
label_05e18967:
      ApplicationManagers_MusicManager__FinishSetPlaylist(playlist,bVar6,pMVar9);
      return;
    }
  }
  else if (pAVar5 != (ApplicationManagers_MusicManager_o *)0x0) {
    (pAVar5->fields)._isDefaultPlaylist = false;
    goto label_05e18967;
  }
label_05e18980:
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$IsMusicDisabled
// il2cpp: bool ApplicationManagers_MusicManager__IsMusicDisabled (const MethodInfo* method);
// 0x5e18fa0

bool ApplicationManagers_MusicManager__IsMusicDisabled(MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  System_String_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548456 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548456 = '\x01';
  }
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pAVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar1 == (ApplicationManagers_MusicManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    a = (pAVar1->fields)._currentPlaylist;
    if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
    }
    bVar2 = System_String__op_Equality
                      (a,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->None,(MethodInfo *)0x0);
    return bVar2;
  }
  return false;
}


// ApplicationManagers.MusicManager$$StopMusic
// il2cpp: void ApplicationManagers_MusicManager__StopMusic (const MethodInfo* method);
// 0x5e19490

void ApplicationManagers_MusicManager__StopMusic(MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  UnityEngine_AudioSource_o *pUVar2;
  
  if (Il2CppMethodInitialized_07548457 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    Il2CppMethodInitialized_07548457 = '\x01';
  }
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)pAVar1,(MethodInfo *)0x0);
    pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
      (pAVar1->fields)._isFading = false;
      (pAVar1->fields)._isDefaultPlaylist = false;
      if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
      }
      (pAVar1->fields)._currentPlaylist = TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->None;
      Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._currentPlaylist);
      pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
        (pAVar1->fields)._currentSongName = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._currentSongName);
        pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
        if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
          (pAVar1->fields)._autoPlay = false;
          (pAVar1->fields)._songTimeLeft = 0.0;
          (pAVar1->fields)._transitionTimeLeft = 0.0;
          (pAVar1->fields)._isMenuTransition = false;
          (pAVar1->fields)._justPlayedMenuTransition = false;
          (pAVar1->fields)._lastSongBeforeGrabbed = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._lastSongBeforeGrabbed);
          pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
          if ((pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) &&
             (pUVar2 = (pAVar1->fields)._audio, pUVar2 != (UnityEngine_AudioSource_o *)0x0)) {
            UnityEngine_AudioSource__Stop_68b0850(pUVar2,(MethodInfo *)0x0);
            pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
            if ((pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) &&
               (pUVar2 = (pAVar1->fields)._audio, pUVar2 != (UnityEngine_AudioSource_o *)0x0)) {
              UnityEngine_AudioSource__set_clip(pUVar2,(UnityEngine_AudioClip_o *)0x0,(MethodInfo *)0x0);
              return;
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
// 0x5e19610
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e196c8: jmp 0x5e1971d

void ApplicationManagers_MusicManager__FinishSetPlaylist
               (System_String_o *playlist,bool forceNext,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  ApplicationManagers_MusicManager_o *pAVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548458 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    Il2CppMethodInitialized_07548458 = '\x01';
  }
  pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) goto label_05e19829;
  bVar1 = System_String__op_Inequality((pAVar3->fields)._currentPlaylist,playlist,(MethodInfo *)0x0);
  pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) goto label_05e19829;
  (pAVar3->fields)._currentPlaylist = playlist;
  Il2CppCodeGenWriteBarrier(&(pAVar3->fields)._currentPlaylist);
  pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) goto label_05e19829;
  bVar2 = (pAVar3->fields)._isMenuTransition;
  if ((pAVar3->fields)._isDefaultPlaylist == false) {
    if (bVar2 != false) goto label_05e196d2;
    if (0.0 < (pAVar3->fields)._transitionTimeLeft) {
      (pAVar3->fields)._songTimeLeft = 0.0;
    }
label_05e1971d:
    (pAVar3->fields)._transitionTimeLeft = 0.0;
  }
  else {
    (pAVar3->fields)._songTimeLeft = 0.0;
    if (bVar2 == false) goto label_05e1971d;
label_05e196d2:
    if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
    }
    bVar2 = System_String__op_Equality
                      (playlist,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Battle,
                       (MethodInfo *)0x0);
    if (bVar2) {
      pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      if (pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) goto label_05e19829;
      goto label_05e1971d;
    }
  }
  if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
  }
  bVar2 = System_String__op_Equality
                    (playlist,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Battle,
                     (MethodInfo *)0x0);
  if (!bVar2) goto label_05e197bf;
  pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) goto label_05e19829;
  if ((pAVar3->fields)._justEscapedGrab == false) {
label_05e197bf:
    pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) goto label_05e19829;
    if (((pAVar3->fields)._transitionTimeLeft <= 0.0) && (bVar1 || forceNext)) {
      (pAVar3->fields)._currentSong = 0;
      ApplicationManagers_MusicManager__NextSong((MethodInfo *)playlist);
    }
  }
  else {
    playlist = (pAVar3->fields)._lastSongBeforeGrabbed;
    method_00 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
    bVar2 = System_String__op_Inequality(playlist,(System_String_o *)method_00,(MethodInfo *)0x0);
    if (!bVar2) goto label_05e197bf;
    pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar3 == (ApplicationManagers_MusicManager_o *)0x0) goto label_05e19829;
    ApplicationManagers_MusicManager__SetSong
              ((pAVar3->fields)._lastSongBeforeGrabbed,(pAVar3->fields)._lastTimeBeforeGrabbed,method_00);
  }
  pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar3 != (ApplicationManagers_MusicManager_o *)0x0) {
    (pAVar3->fields)._justEscapedGrab = false;
    return;
  }
label_05e19829:
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$PlaySoundEffect
// il2cpp: void ApplicationManagers_MusicManager__PlaySoundEffect (SimpleJSONFixed_JSONNode_o* songInfo, const MethodInfo* method);
// 0x5e19180

void ApplicationManagers_MusicManager__PlaySoundEffect
               (SimpleJSONFixed_JSONNode_o *songInfo,MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  UnityEngine_AudioSource_o *pUVar2;
  bool bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *name;
  UnityEngine_AudioClip_o *clip;
  MethodInfo *in_R8;
  float value;
  
  if (Il2CppMethodInitialized_07548459 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AudioClip);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Music");
    il2cpp_codegen_initialize_runtime_metadata(&"Volume");
    Il2CppMethodInitialized_07548459 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(songInfo,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if (songInfo == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05e193a2:
      ThrowNullReferenceException();
    }
    bVar3 = (*(songInfo->klass->vtable)._28_HasKey.methodPtr)
                      (songInfo,"Name",(songInfo->klass->vtable)._28_HasKey.method);
    if (bVar3) {
      pSVar4 = (*(songInfo->klass->vtable)._7_get_Item.methodPtr)
                         (songInfo,"Name",(songInfo->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      name = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar4,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      clip = (UnityEngine_AudioClip_o *)
             ApplicationManagers_ResourceManager__LoadAsset("Music",name,false,false,in_R8);
      if ((clip != (UnityEngine_AudioClip_o *)0x0) && (clip->klass != TypeInfo_UnityEngine_AudioClip)) {
        il2cpp_codegen_raise_invalid_cast_exception(clip);
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)clip,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
        if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
          pUVar2 = (pAVar1->fields)._soundEffect;
          pSVar4 = (*(songInfo->klass->vtable)._7_get_Item.methodPtr)
                             (songInfo,"Volume",(songInfo->klass->vtable)._7_get_Item.method);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          value = SimpleJSONFixed_JSONNode__op_Implicit_5763af0(pSVar4,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_AudioSource_o *)0x0) {
            UnityEngine_AudioSource__set_volume(pUVar2,value,(MethodInfo *)0x0);
            pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
            if ((pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) &&
               (pUVar2 = (pAVar1->fields)._soundEffect, pUVar2 != (UnityEngine_AudioSource_o *)0x0)) {
              UnityEngine_AudioSource__PlayOneShot(pUVar2,clip,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto label_05e193a2;
      }
    }
  }
  return;
}


// ApplicationManagers.MusicManager$$PlayImmediateTransition
// il2cpp: void ApplicationManagers_MusicManager__PlayImmediateTransition (SimpleJSONFixed_JSONNode_o* songInfo, const MethodInfo* method);
// 0x5e18ad0

void ApplicationManagers_MusicManager__PlayImmediateTransition
               (SimpleJSONFixed_JSONNode_o *songInfo,MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  UnityEngine_AudioSource_o *pUVar2;
  Settings_SoundSettings_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  bool bVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_String_o *name;
  UnityEngine_AudioClip_o *value;
  ApplicationManagers_MusicManager_StaticFields *pAVar7;
  MethodInfo *in_R8;
  float fVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_0754845a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AudioClip);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Music");
    il2cpp_codegen_initialize_runtime_metadata(&"Volume");
    Il2CppMethodInitialized_0754845a = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(songInfo,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  if (songInfo != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar5 = (*(songInfo->klass->vtable)._28_HasKey.methodPtr)
                      (songInfo,"Name",(songInfo->klass->vtable)._28_HasKey.method);
    if (!bVar5) {
      return;
    }
    pSVar6 = (*(songInfo->klass->vtable)._7_get_Item.methodPtr)
                       (songInfo,"Name",(songInfo->klass->vtable)._7_get_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    name = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar6,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    value = (UnityEngine_AudioClip_o *)
            ApplicationManagers_ResourceManager__LoadAsset("Music",name,false,false,in_R8);
    if ((value != (UnityEngine_AudioClip_o *)0x0) && (value->klass != TypeInfo_UnityEngine_AudioClip)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    pSVar6 = (*(songInfo->klass->vtable)._7_get_Item.methodPtr)
                       (songInfo,"Volume",(songInfo->klass->vtable)._7_get_Item.method);
    fVar8 = SimpleJSONFixed_JSONNode__op_Implicit_5763af0(pSVar6,(MethodInfo *)0x0);
    pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if ((pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) &&
       (pUVar2 = (pAVar1->fields)._audio, pUVar2 != (UnityEngine_AudioSource_o *)0x0)) {
      UnityEngine_AudioSource__set_clip(pUVar2,value,(MethodInfo *)0x0);
      pAVar7 = TypeInfo_ApplicationManagers_MusicManager->static_fields;
      if (pAVar7->_instance != (ApplicationManagers_MusicManager_o *)0x0) {
        pUVar2 = (pAVar7->_instance->fields)._audio;
        if (Il2CppMethodInitialized_07548462 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
          Il2CppMethodInitialized_07548462 = '\x01';
          pAVar7 = TypeInfo_ApplicationManagers_MusicManager->static_fields;
        }
        fVar9 = 0.0;
        if (pAVar7->_muted == false) {
          pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
          if ((pSVar3 == (Settings_SoundSettings_o *)0x0) ||
             (pSVar4 = (pSVar3->fields).Music, pSVar4 == (Settings_FloatSetting_o *)0x0)) goto label_05e18da3;
          fVar9 = (pSVar4->fields)._value * 0.4;
        }
        if (pUVar2 != (UnityEngine_AudioSource_o *)0x0) {
          UnityEngine_AudioSource__set_volume(pUVar2,fVar8 * fVar9,(MethodInfo *)0x0);
          pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
          if (((pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) &&
              (pUVar2 = (pAVar1->fields)._audio, pUVar2 != (UnityEngine_AudioSource_o *)0x0)) &&
             (UnityEngine_AudioSource__Play_68b06a0(pUVar2,(MethodInfo *)0x0),
             value != (UnityEngine_AudioClip_o *)0x0)) {
            pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
            fVar8 = UnityEngine_AudioClip__get_length(value,(MethodInfo *)0x0);
            if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
              (pAVar1->fields)._songTimeLeft = fVar8;
              pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
              fVar8 = UnityEngine_AudioClip__get_length(value,(MethodInfo *)0x0);
              if (pAVar1 != (ApplicationManagers_MusicManager_o *)0x0) {
                (pAVar1->fields)._transitionTimeLeft = fVar8;
                return;
              }
            }
          }
        }
      }
    }
  }
label_05e18da3:
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$SetSong
// il2cpp: void ApplicationManagers_MusicManager__SetSong (System_String_o* song, float startTime, const MethodInfo* method);
// 0x5e19830
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e19d8e: lea r15, [rip + 0x1461323]  ; TypeInfo_ApplicationManagers_MusicManager
// asm:   0x5e19d95: jmp 0x5e19e37
// asm:   0x5e19efe: mov rdi, r15

void ApplicationManagers_MusicManager__SetSong(System_String_o *song,float startTime,MethodInfo *method)

{
  byte bVar1;
  ApplicationManagers_MusicManager_o *pAVar2;
  GameManagers_BaseGameManager_o *x;
  Settings_SoundSettings_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  Settings_UISettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  bool bVar7;
  int32_t iVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_String_o *pSVar11;
  GameManagers_InGameManager_o *__this;
  ApplicationManagers_MusicManager__FadeNextSong_d__47_o *__this_00;
  MethodInfo *in_R8;
  GameManagers_InGameManager_o *pGVar12;
  float local_38;
  
  if (Il2CppMethodInitialized_0754845b == '\0') {
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
    Il2CppMethodInitialized_0754845b = '\x01';
  }
  pSVar9 = ApplicationManagers_MusicManager__FindSong(song,method);
  pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar2 == (ApplicationManagers_MusicManager_o *)0x0) goto label_05e19ef9;
  (pAVar2->fields)._autoPlay = false;
  (pAVar2->fields)._currentSongName = "";
  Il2CppCodeGenWriteBarrier(&(pAVar2->fields)._currentSongName);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pGVar12 = (GameManagers_InGameManager_o *)0x0;
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  local_38 = 0.0;
  if (bVar7) {
    if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e19ef9;
    bVar7 = (*(pSVar9->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar9,"Name",(pSVar9->klass->vtable)._28_HasKey.method);
    if (bVar7) {
      pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar9,"Name",(pSVar9->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar10,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      __this = (GameManagers_InGameManager_o *)
               ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar11,false,false,in_R8)
      ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pGVar12 = (GameManagers_InGameManager_o *)0x0;
      if (bVar7) {
        if (__this == (GameManagers_InGameManager_o *)0x0) {
          pGVar12 = (GameManagers_InGameManager_o *)0x0;
        }
        else {
          if (__this->klass != (GameManagers_InGameManager_c *)TypeInfo_UnityEngine_AudioClip)
          goto label_05e19f01;
          pGVar12 = __this;
        }
      }
      pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar9,"Volume",(pSVar9->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      local_38 = SimpleJSONFixed_JSONNode__op_Implicit_5763af0(pSVar10,(MethodInfo *)0x0);
      pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar9,"Name",(pSVar9->klass->vtable)._7_get_Item.method);
      pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar9,(MethodInfo *)0x0);
      if (pAVar2 == (ApplicationManagers_MusicManager_o *)0x0) goto label_05e19ef9;
      (pAVar2->fields)._currentSongName = pSVar11;
      Il2CppCodeGenWriteBarrier(&(pAVar2->fields)._currentSongName);
      x = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (x != (GameManagers_BaseGameManager_o *)0x0) {
        bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
        if ((bVar1 <= (x->klass->_2).typeHierarchyDepth) &&
           ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
          pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
          if ((pSVar3 == (Settings_SoundSettings_o *)0x0) ||
             (pSVar4 = (pSVar3->fields).Music, pSVar4 == (Settings_FloatSetting_o *)0x0)) goto label_05e19ef9;
          if (0.0 < (pSVar4->fields)._value) {
            pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
            if ((pSVar5 == (Settings_UISettings_o *)0x0) ||
               (pSVar6 = (pSVar5->fields).ShowSongPopup, pSVar6 == (Settings_BoolSetting_o *)0x0))
            goto label_05e19ef9;
            if ((pSVar6->fields)._value != false) {
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar7 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar7) {
                __this = (GameManagers_InGameManager_o *)
                         TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
                if (__this == (GameManagers_InGameManager_o *)0x0) goto label_05e19ef9;
                bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
                if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
label_05e19f01:
                  il2cpp_codegen_raise_invalid_cast_exception(__this);
                }
                GameManagers_InGameManager__OnSongChange(__this,(MethodInfo *)0x0);
              }
            }
          }
        }
      }
    }
    else {
      pSVar10 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_musicInfo;
      pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar9,"Playlist",(pSVar9->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar9,(MethodInfo *)0x0);
      if ((pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (pSVar9 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar10,pSVar11,(pSVar10->klass->vtable)._7_get_Item.method),
         pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05e19ef9;
      iVar8 = (*(pSVar9->klass->vtable)._11_get_Count.methodPtr)
                        (pSVar9,(pSVar9->klass->vtable)._11_get_Count.method);
      iVar8 = UnityEngine_Random__Range_690e2b0(0,iVar8,(MethodInfo *)0x0);
      pSVar9 = (*(pSVar9->klass->vtable)._5_get_Item.methodPtr)
                         (pSVar9,iVar8,(pSVar9->klass->vtable)._5_get_Item.method);
      if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e19ef9;
      pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                (**(code **)((long)pSVar9->klass + 0x1a8))
                          (pSVar9,"Name",*(undefined8 *)((long)pSVar9->klass + 0x1b0));
      pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar10,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      __this = (GameManagers_InGameManager_o *)
               ApplicationManagers_ResourceManager__LoadAsset("Music",pSVar11,false,false,in_R8)
      ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pGVar12 = (GameManagers_InGameManager_o *)0x0;
      if (bVar7) {
        if (__this == (GameManagers_InGameManager_o *)0x0) {
          pGVar12 = (GameManagers_InGameManager_o *)0x0;
        }
        else {
          if (__this->klass != (GameManagers_InGameManager_c *)TypeInfo_UnityEngine_AudioClip)
          goto label_05e19f01;
          pGVar12 = __this;
        }
      }
      pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                (**(code **)((long)pSVar9->klass + 0x1a8))
                          (pSVar9,"Volume",*(undefined8 *)((long)pSVar9->klass + 0x1b0));
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      local_38 = SimpleJSONFixed_JSONNode__op_Implicit_5763af0(pSVar10,(MethodInfo *)0x0);
      pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      pSVar9 = (SimpleJSONFixed_JSONNode_o *)
               (**(code **)((long)pSVar9->klass + 0x1a8))
                         (pSVar9,"Name",*(undefined8 *)((long)pSVar9->klass + 0x1b0));
      pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar9,(MethodInfo *)0x0);
      if (pAVar2 == (ApplicationManagers_MusicManager_o *)0x0) goto label_05e19ef9;
      (pAVar2->fields)._currentSongName = pSVar11;
      Il2CppCodeGenWriteBarrier(&(pAVar2->fields)._currentSongName);
    }
  }
  pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)pAVar2,(MethodInfo *)0x0);
    pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
      if (Il2CppMethodInitialized_0754845f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_ApplicationManagers_MusicManager_FadeNextSong_d__47);
        Il2CppMethodInitialized_0754845f = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_MusicManager_FadeNextSong_d__47);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).__1__state = 0;
      (__this_00->fields).__4__this = pAVar2;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
      (__this_00->fields).nextClip = (UnityEngine_AudioClip_o *)pGVar12;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).nextClip);
      (__this_00->fields).volume = local_38;
      (__this_00->fields).startTime = startTime;
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)pAVar2,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_05e19ef9:
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$ChatNextSong
// il2cpp: void ApplicationManagers_MusicManager__ChatNextSong (const MethodInfo* method);
// 0x5e1a4d0

void ApplicationManagers_MusicManager__ChatNextSong(MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  
  if (Il2CppMethodInitialized_0754845c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    Il2CppMethodInitialized_0754845c = '\x01';
  }
  pAVar1 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar1 == (ApplicationManagers_MusicManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pAVar1->fields)._songTimeLeft = 0.0;
  (pAVar1->fields)._transitionTimeLeft = 0.0;
  return;
}


// ApplicationManagers.MusicManager$$NextSong
// il2cpp: void ApplicationManagers_MusicManager__NextSong (const MethodInfo* method);
// 0x5e19f10

void ApplicationManagers_MusicManager__NextSong(MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_MusicManager_o *pAVar2;
  ApplicationManagers_MusicManager_StaticFields *pAVar3;
  System_Collections_Generic_List_string__o *__this;
  bool bVar4;
  int32_t iVar5;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  uint uVar8;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754845d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_0754845d = '\x01';
  }
  pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
  if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
    bVar4 = System_String__op_Equality
                      ((pAVar2->fields)._currentPlaylist,
                       (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
    if (bVar4) {
      return;
    }
    pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
    if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
      pSVar6 = (pAVar2->fields)._currentPlaylist;
      if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
      }
      bVar4 = System_String__op_Equality
                        (pSVar6,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->None,
                         (MethodInfo *)0x0);
      if (bVar4) {
        return;
      }
      pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      if (pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) {
        bVar4 = System_String__op_Equality
                          ((pAVar2->fields)._currentPlaylist,"Custom",(MethodInfo *)0x0);
        pAVar3 = TypeInfo_ApplicationManagers_MusicManager->static_fields;
        if (bVar4) {
          pAVar2 = pAVar3->_instance;
          if ((pAVar2 != (ApplicationManagers_MusicManager_o *)0x0) &&
             (__this = (pAVar2->fields)._customPlaylist,
             __this != (System_Collections_Generic_List_string__o *)0x0)) {
            iVar1 = (__this->fields)._size;
            if (iVar1 == 0) {
              return;
            }
            uVar8 = (pAVar2->fields)._currentSong + 1;
            method_00 = (MethodInfo *)0x0;
            if ((int)uVar8 < iVar1) {
              method_00 = (MethodInfo *)(ulong)uVar8;
            }
            (pAVar2->fields)._currentSong = (int32_t)method_00;
            pSVar6 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this,(int32_t)method_00,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_string_get_Item);
label_05e1a13f:
            ApplicationManagers_MusicManager__SetSong(pSVar6,0.0,method_00);
            return;
          }
        }
        else if (((pAVar3->_instance != (ApplicationManagers_MusicManager_o *)0x0) &&
                 (pSVar7 = pAVar3->_musicInfo, pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0)) &&
                (pSVar7 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar7,(pAVar3->_instance->fields)._currentPlaylist,
                                     (pSVar7->klass->vtable)._7_get_Item.method),
                pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
          iVar5 = (*(pSVar7->klass->vtable)._11_get_Count.methodPtr)
                            (pSVar7,(pSVar7->klass->vtable)._11_get_Count.method);
          iVar5 = UnityEngine_Random__Range_690e2b0(0,iVar5,(MethodInfo *)0x0);
          pSVar7 = (*(pSVar7->klass->vtable)._5_get_Item.methodPtr)
                             (pSVar7,iVar5,(pSVar7->klass->vtable)._5_get_Item.method);
          if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            pSVar7 = (SimpleJSONFixed_JSONNode_o *)
                     (**(code **)((long)pSVar7->klass + 0x1a8))
                               (pSVar7,"Name",*(undefined8 *)((long)pSVar7->klass + 0x1b0));
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            method_00 = (MethodInfo *)0x0;
            pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar7,(MethodInfo *)0x0);
            goto label_05e1a13f;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.MusicManager$$FindSong
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_MusicManager__FindSong (System_String_o* name, const MethodInfo* method);
// 0x5e1a160
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1a408: jmp 0x5e1a370

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_MusicManager__FindSong(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_160;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_118;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_0754845e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_0754845e = '\x01';
  }
  local_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.m_Array.fields._index = 0;
  local_c8.m_Array.fields._version = 0;
  local_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._getEnumeratorRetType = 0;
  local_c8.m_Object.fields._36_4_ = 0;
  local_c8.m_Object.fields._version = 0;
  local_c8.m_Object.fields._index = 0;
  local_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.type = 0;
  local_c8._4_4_ = 0;
  local_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_118.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_118.m_Array.fields._index = 0;
  local_118.m_Array.fields._version = 0;
  local_118.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_118.m_Object.fields._getEnumeratorRetType = 0;
  local_118.m_Object.fields._36_4_ = 0;
  local_118.m_Object.fields._version = 0;
  local_118.m_Object.fields._index = 0;
  local_118.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_118.type = 0;
  local_118._4_4_ = 0;
  local_118.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar1 = System_String__op_Equality
                    (name,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_musicInfo;
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05e1a429:
      ThrowNullReferenceException();
    }
    SimpleJSONFixed_JSONNode__get_Values
              ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_160,pSVar2,(MethodInfo *)0x0);
    local_78.m_Array.fields._current = local_160.m_Array.fields._current;
    local_78.m_Array.fields._list = local_160.m_Array.fields._list;
    local_78.m_Array.fields._index = local_160.m_Array.fields._index;
    local_78.m_Array.fields._version = local_160.m_Array.fields._version;
    local_78.m_Object.fields._current.fields.value = local_160.m_Object.fields._current.fields.value;
    local_78.m_Object.fields._getEnumeratorRetType = local_160.m_Object.fields._getEnumeratorRetType;
    local_78.m_Object.fields._36_4_ = local_160.m_Object.fields._36_4_;
    local_78.m_Object.fields._version = local_160.m_Object.fields._version;
    local_78.m_Object.fields._index = local_160.m_Object.fields._index;
    local_78.m_Object.fields._current.fields.key = local_160.m_Object.fields._current.fields.key;
    local_78.type = local_160.type;
    local_78._4_4_ = local_160._4_4_;
    local_78.m_Object.fields._dictionary = local_160.m_Object.fields._dictionary;
    SimpleJSONFixed_JSONNode_ValueEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_c8,
               (SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_78,(MethodInfo *)0x0);
    bVar1 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_c8,(MethodInfo *)0x0);
    if (bVar1) {
      do {
        pSVar2 = SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current
                           ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_c8,(MethodInfo *)0x0);
        if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e1a429;
        (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
                  (&local_160,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
        local_118.m_Array.fields._current = local_160.m_Array.fields._current;
        local_118.m_Array.fields._list = local_160.m_Array.fields._list;
        local_118.m_Array.fields._index = local_160.m_Array.fields._index;
        local_118.m_Array.fields._version = local_160.m_Array.fields._version;
        local_118.m_Object.fields._current.fields.value = local_160.m_Object.fields._current.fields.value;
        local_118.m_Object.fields._getEnumeratorRetType = local_160.m_Object.fields._getEnumeratorRetType;
        local_118.m_Object.fields._36_4_ = local_160.m_Object.fields._36_4_;
        local_118.m_Object.fields._version = local_160.m_Object.fields._version;
        local_118.m_Object.fields._index = local_160.m_Object.fields._index;
        local_118.m_Object.fields._current.fields.key = local_160.m_Object.fields._current.fields.key;
        local_118.type = local_160.type;
        local_118._4_4_ = local_160._4_4_;
        local_118.m_Object.fields._dictionary = local_160.m_Object.fields._dictionary;
        while (bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                 ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_118,(MethodInfo *)0x0),
              bVar1) {
          aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_118,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(aKeyValue,(MethodInfo *)0x0);
          if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e1a429;
          bVar1 = (*(pSVar2->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar2,"Name",(pSVar2->klass->vtable)._28_HasKey.method);
          if (bVar1) {
            a = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar2,"Name",(pSVar2->klass->vtable)._7_get_Item.method);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            bVar1 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)name,(MethodInfo *)0x0);
            if (bVar1) {
              return pSVar2;
            }
          }
        }
        bVar1 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_c8,(MethodInfo *)0x0);
      } while (bVar1);
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// ApplicationManagers.MusicManager$$FadeNextSong
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_MusicManager__FadeNextSong (ApplicationManagers_MusicManager_o* __this, UnityEngine_AudioClip_o* nextClip, float volume, float startTime, const MethodInfo* method);
// 0x5e1a430

System_Collections_IEnumerator_o *
ApplicationManagers_MusicManager__FadeNextSong
          (ApplicationManagers_MusicManager_o *__this,UnityEngine_AudioClip_o *nextClip,float volume,
          float startTime,MethodInfo *method)

{
  ApplicationManagers_MusicManager__FadeNextSong_d__47_o *__this_00;
  
  if (Il2CppMethodInitialized_0754845f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager_FadeNextSong_d__47);
    Il2CppMethodInitialized_0754845f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_MusicManager_FadeNextSong_d__47);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).nextClip = nextClip;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).nextClip);
  (__this_00->fields).volume = volume;
  (__this_00->fields).startTime = startTime;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.MusicManager$$Update
// il2cpp: void ApplicationManagers_MusicManager__Update (ApplicationManagers_MusicManager_o* __this, const MethodInfo* method);
// 0x5e1a540

void ApplicationManagers_MusicManager__Update(ApplicationManagers_MusicManager_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  ApplicationManagers_MusicManager_o *pAVar2;
  bool bVar3;
  System_String_o **ppSVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *pMVar5;
  float fVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_07548460 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicPlaylist);
    Il2CppMethodInitialized_07548460 = '\x01';
  }
  fVar7 = (__this->fields)._songTimeLeft;
  fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._songTimeLeft = fVar7 - fVar6;
  fVar7 = (__this->fields)._transitionTimeLeft;
  pMVar5 = (MethodInfo *)0x0;
  fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar7 = fVar7 - fVar6;
  (__this->fields)._transitionTimeLeft = fVar7;
  if ((__this->fields)._isDefaultPlaylist == false) {
    if (0.0 < (__this->fields)._songTimeLeft) {
      return;
    }
    if ((__this->fields)._autoPlay == false) {
      return;
    }
    if (0.0 < fVar7) {
      return;
    }
    ApplicationManagers_MusicManager__NextSong(pMVar5);
    return;
  }
  pSVar1 = (__this->fields)._currentPlaylist;
  if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
  }
  pMVar5 = (MethodInfo *)TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Battle;
  bVar3 = System_String__op_Inequality(pSVar1,(System_String_o *)pMVar5,(MethodInfo *)0x0);
  if (bVar3) {
    if (0.0 < (__this->fields)._transitionTimeLeft) {
      pAVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_instance;
      if (pAVar2 == (ApplicationManagers_MusicManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pAVar2->fields)._isMenuTransition == false) goto label_05e1a659;
    }
    bVar3 = ApplicationManagers_MusicManager__ShouldPlayBattleMusic(__this,pMVar5);
    if (bVar3) {
      method_00 = extraout_RDX;
      if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
        method_00 = extraout_RDX_00;
      }
      pMVar5 = (MethodInfo *)0x1;
      ApplicationManagers_MusicManager__FinishSetPlaylist
                (TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Battle,true,method_00);
    }
  }
label_05e1a659:
  if (((__this->fields)._songTimeLeft <= 0.0) && ((__this->fields)._autoPlay != false)) {
    fVar7 = (__this->fields)._transitionTimeLeft;
    if (0.0 < fVar7) goto label_05e1a74a;
    bVar3 = ApplicationManagers_MusicManager__ShouldPlayBattleMusic(__this,pMVar5);
    if (bVar3) {
      pMVar5 = extraout_RDX_01;
      if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
        pMVar5 = extraout_RDX_02;
      }
      ppSVar4 = &TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Battle;
    }
    else {
      pSVar1 = (__this->fields)._currentPlaylist;
      if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
      }
      bVar3 = System_String__op_Equality
                        (pSVar1,TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Battle,
                         (MethodInfo *)0x0);
      pMVar5 = extraout_RDX_03;
      if ((bVar3) || ((__this->fields)._justPlayedMenuTransition != false)) {
        if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
          pMVar5 = extraout_RDX_04;
        }
        ppSVar4 = &TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Ambient;
      }
      else {
        if ((TypeInfo_ApplicationManagers_MusicPlaylist->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_MusicPlaylist);
          pMVar5 = extraout_RDX_05;
        }
        ppSVar4 = &TypeInfo_ApplicationManagers_MusicPlaylist->static_fields->Peaceful;
      }
    }
    ApplicationManagers_MusicManager__FinishSetPlaylist(*ppSVar4,true,pMVar5);
  }
  fVar7 = (__this->fields)._transitionTimeLeft;
label_05e1a74a:
  if ((fVar7 <= 0.0) && ((__this->fields)._justPlayedMenuTransition != false)) {
    (__this->fields)._justPlayedMenuTransition = false;
  }
  return;
}


// ApplicationManagers.MusicManager$$ShouldPlayBattleMusic
// il2cpp: bool ApplicationManagers_MusicManager__ShouldPlayBattleMusic (ApplicationManagers_MusicManager_o* __this, const MethodInfo* method);
// 0x5e1a790
// eh: try 0x5e1aa7c..0x5e1ac95 -> pad 0x5e1acb9 (+18 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5e1acd1..0x5e1acd6 -> pad 0x5e1ace8 cleanup
// eh: try 0x5e1aceb..0x5e1acf5 -> pad 0x5e1acfd catch (...) [compiler noexcept guard]
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1a922: xor r12d, r12d
// asm:   0x5e1aa1f: lea r13, [rip + 0x145e9d2]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5e1aa26: lea rbp, [rip + 0x14564d3]  ; TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter
// asm:   0x5e1aa2d: jmp 0x5e1aa4d
// asm:   0x5e1aa40: mov rbx, qword ptr [rsp]
// asm:   0x5e1aa44: test rbx, rbx
// asm:   0x5e1aa47: je 0x5e1ac63
// asm:   0x5e1ac61: jmp 0x5e1acd9
// asm:   0x5e1ac95: jmp 0x5e1acb9
// asm:   0x5e1ac97: jmp 0x5e1acb9
// asm:   0x5e1ac99: jmp 0x5e1acb9
// asm:   0x5e1ac9b: jmp 0x5e1acb9
// asm:   0x5e1ac9d: jmp 0x5e1acb9
// asm:   0x5e1ac9f: jmp 0x5e1acb9
// asm:   0x5e1aca1: jmp 0x5e1acb9
// asm:   0x5e1aca3: jmp 0x5e1acb9
// asm:   0x5e1aca5: jmp 0x5e1acb9
// asm:   0x5e1aca7: jmp 0x5e1acb9
// asm:   0x5e1aca9: jmp 0x5e1acb9
// asm:   0x5e1acab: jmp 0x5e1acb9
// asm:   0x5e1acad: jmp 0x5e1acb9
// asm:   0x5e1acaf: jmp 0x5e1acb9
// asm:   0x5e1acb1: jmp 0x5e1acb9
// asm:   0x5e1acb3: jmp 0x5e1acb9
// asm:   0x5e1acb5: jmp 0x5e1acb9
// asm:   0x5e1acb7: jmp 0x5e1acb9
// asm:   0x5e1acb9: mov rbx, rax
// asm:   0x5e1acbc: cmp edx, 1
// asm:   0x5e1acbf: jne 0x5e1aceb
// asm:   0x5e1acc1: mov rdi, rbx
// asm:   0x5e1acc4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e1acc9: mov rax, qword ptr [rax]
// asm:   0x5e1accc: mov qword ptr [rsp + 0x10], rax
// asm:   0x5e1acd1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e1acd9: lea rdi, [rsp + 0x10]
// asm:   0x5e1acde: call 0x2fe04a0  ; il2cpp_runtime_helper_02fe04a0()
// asm:   0x5e1ace3: jmp 0x5e1a925
// asm:   0x5e1ace8: mov rbx, rax
// asm:   0x5e1aceb: lea rdi, [rsp + 0x10]
// asm:   0x5e1acf0: call 0x2fe04a0  ; il2cpp_runtime_helper_02fe04a0()
// asm:   0x5e1acf5: mov rdi, rbx
// asm:   0x5e1acf8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e1acfd: mov rdi, rax
// asm:   0x5e1ad00: call 0x2ab61e0  ; __clang_call_terminate()

bool ApplicationManagers_MusicManager__ShouldPlayBattleMusic
               (ApplicationManagers_MusicManager_o *__this,MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  GameManagers_BaseGameManager_c *pGVar4;
  Characters_BaseCharacter_o *b;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  bool bVar9;
  char cVar10;
  Il2CppObject *pIVar11;
  GameManagers_InGameManager_o *__this_00;
  System_Collections_Generic_IEnumerable_BaseCharacter__o *pSVar12;
  VirtualInvokeData *pVVar13;
  Characters_BaseCharacter_o *a;
  Il2CppObject *pIVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar18;
  Il2CppObject *local_68;
  float local_5c;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_48 [16];
  
  if (Il2CppMethodInitialized_07548461 == '\0') {
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
    Il2CppMethodInitialized_07548461 = '\x01';
  }
  local_68 = (Il2CppObject *)0x0;
  fVar17 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if ((__this->fields)._lastCheckBattleMusic + 0.2 <= fVar17) {
    fVar17 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._lastCheckBattleMusic = fVar17;
    if (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 2) {
      pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar9) {
        pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
          if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
            bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
            if (((bVar1 <= (((Il2CppClass *)pCVar2->klass)->_2).typeHierarchyDepth) &&
                ((((Il2CppClass *)pCVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                 (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) &&
               (pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager,
               pGVar3 != (GameManagers_BaseGameManager_o *)0x0)) {
              pGVar4 = pGVar3->klass;
              bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
              if ((bVar1 <= (pGVar4->_2).typeHierarchyDepth) &&
                 ((pGVar4->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
                pIVar11 = il2cpp_codegen_is_inst_class
                                    ((Il2CppObject *)pCVar2,(Il2CppClass *)TypeInfo_Cameras_InGameCamera);
                if (pIVar11 != (Il2CppObject *)0x0) {
                  pIVar11 = il2cpp_codegen_is_inst_class
                                      ((Il2CppObject *)pCVar2,(Il2CppClass *)TypeInfo_Cameras_InGameCamera);
                  b = pIVar11[3].monitor;
                  __this_00 = (GameManagers_InGameManager_o *)
                              il2cpp_codegen_is_inst_class
                                        ((Il2CppObject *)
                                         TypeInfo_ApplicationManagers_SceneLoader->static_fields->
                                         CurrentGameManager,(Il2CppClass *)TypeInfo_GameManagers_InGameManager
                                        );
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar9 = UnityEngine_Object__op_Equality
                                    ((UnityEngine_Object_o *)b,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if (bVar9) {
                    return false;
                  }
                  if ((__this_00 != (GameManagers_InGameManager_o *)0x0) &&
                     (pSVar12 = GameManagers_InGameManager__GetAllCharactersEnumerable
                                          (__this_00,(MethodInfo *)0x0),
                     pSVar12 != (System_Collections_Generic_IEnumerable_BaseCharacter__o *)0x0)) {
                    pIVar11 = (Il2CppObject *)
                              il2cpp_runtime_helper_02ad5a70(0,TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter,
                                           pSVar12);
                    local_50 = (undefined1 *)&local_68;
                    local_58 = 0;
joined_r0x05e1aa19:
                    do {
                      do {
                        do {
                          local_68 = pIVar11;
                          if (pIVar11 == (Il2CppObject *)0x0) {
                            ThrowNullReferenceException();
                          }
                          pIVar5 = pIVar11->klass;
                          uVar15 = (ulong)(pIVar5->_2).interface_offsets_count;
                          if (uVar15 != 0) {
                            pIVar6 = (pIVar5->_1).interfaceOffsets;
                            lVar16 = 0;
                            do {
                              if (*(Il2CppClass **)((long)&pIVar6->interfaceType + lVar16) ==
                                  (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
                                pVVar13 = (VirtualInvokeData *)
                                          &pIVar5->vtable[*(int *)((long)&pIVar6->offset + lVar16)].methodPtr;
                                goto label_05e1aa9e;
                              }
                              lVar16 = lVar16 + 0x10;
                            } while (uVar15 * 0x10 != lVar16);
                          }
                          pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                                              (pIVar11,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,
                                               0);
label_05e1aa9e:
                          cVar10 = (*pVVar13->methodPtr)(pIVar11,pVVar13->method);
                          pIVar11 = local_68;
                          if (cVar10 == '\0') {
                            cVar10 = '\0';
                            goto label_05e1acd9;
                          }
                          if (local_68 == (Il2CppObject *)0x0) {
                            ThrowNullReferenceException();
                          }
                          pIVar5 = local_68->klass;
                          uVar15 = (ulong)(pIVar5->_2).interface_offsets_count;
                          if (uVar15 != 0) {
                            pIVar6 = (pIVar5->_1).interfaceOffsets;
                            lVar16 = 0;
                            do {
                              if (*(System_Collections_Generic_IEnumerator_BaseCharacter__c **)
                                   ((long)&pIVar6->interfaceType + lVar16) ==
                                  TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter) {
                                pVVar13 = (VirtualInvokeData *)
                                          &pIVar5->vtable[*(int *)((long)&pIVar6->offset + lVar16)].methodPtr;
                                goto label_05e1ab10;
                              }
                              lVar16 = lVar16 + 0x10;
                            } while (uVar15 * 0x10 != lVar16);
                          }
                          pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                                              (local_68,(Il2CppClass *)
                                                                                                                
                                                       TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter
                                               ,0);
label_05e1ab10:
                          a = (Characters_BaseCharacter_o *)(*pVVar13->methodPtr)(pIVar11,pVVar13->method);
                          if (a == (Characters_BaseCharacter_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          bVar9 = (*(a->klass->vtable)._73_ValidTarget.methodPtr)
                                            (a,(a->klass->vtable)._73_ValidTarget.method);
                          pIVar11 = local_68;
                        } while (!bVar9);
                        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
                        }
                        bVar9 = GameManagers_TeamInfo__SameTeam_5858900(a,b,(MethodInfo *)0x0);
                        pIVar11 = local_68;
                      } while (bVar9);
                      pUVar7 = (a->fields).Cache;
                      if (pUVar7 == (Utility_BaseComponentCache_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pUVar8 = (pUVar7->fields).Transform;
                      if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      UVar18 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
                      local_5c = UVar18.fields.z;
                      local_48._8_4_ = extraout_XMM0_Dc;
                      local_48._0_8_ = UVar18.fields._0_8_;
                      local_48._12_4_ = extraout_XMM0_Dd;
                      if (b == (Characters_BaseCharacter_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pUVar7 = (b->fields).Cache;
                      if (pUVar7 == (Utility_BaseComponentCache_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pUVar8 = (pUVar7->fields).Transform;
                      if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      UVar18 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
                      fVar17 = (float)il2cpp_runtime_helper_05956b50(local_48._0_4_,local_5c,UVar18.fields.x,UVar18.fields.z);
                      bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
                      pIVar11 = local_68;
                      if ((bVar1 <= (a->klass->_2).typeHierarchyDepth) &&
                         ((a->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                          (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
                        if (fVar17 < 200.0) goto label_05e1acd9;
                        if (fVar17 < 1000.0) {
                          pIVar11 = il2cpp_codegen_is_inst_class
                                              ((Il2CppObject *)a,(Il2CppClass *)TypeInfo_Characters_BasicTitan
                                              );
                          if (pIVar11 == (Il2CppObject *)0x0) {
                            ThrowNullReferenceException();
                          }
                          pIVar14 = il2cpp_codegen_is_inst_class
                                              ((Il2CppObject *)a,(Il2CppClass *)TypeInfo_Characters_BasicTitan
                                              );
                          pIVar11 = local_68;
                          if (0 < *(int *)((long)&pIVar14[0x38].klass + 4)) goto label_05e1acd9;
                        }
                        goto joined_r0x05e1aa19;
                      }
                      if (fVar17 < 500.0) {
label_05e1acd9:
                        il2cpp_runtime_helper_02fe04a0(&local_58);
                        return (bool)cVar10;
                      }
                    } while( true );
                  }
                }
                ThrowNullReferenceException();
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
// 0x5e18990

float ApplicationManagers_MusicManager__GetMusicVolume(MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_07548462 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_07548462 = '\x01';
  }
  if (TypeInfo_ApplicationManagers_MusicManager->static_fields->_muted != false) {
    return 0.0;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar1 == (Settings_SoundSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Music, pSVar2 == (Settings_FloatSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._value * 0.4;
}


// ApplicationManagers.MusicManager$$GetCurrentSong
// il2cpp: System_String_o* ApplicationManagers_MusicManager__GetCurrentSong (const MethodInfo* method);
// 0x5e1ad10

System_String_o * ApplicationManagers_MusicManager__GetCurrentSong(MethodInfo *method)

{
  ApplicationManagers_MusicManager_o *pAVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548463 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548463 = '\x01';
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
// 0x5e1adb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1b0c0: jmp 0x5e1b010

System_Collections_Generic_List_string__o * ApplicationManagers_MusicManager__GetAllSongs(MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_string__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *item;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar3;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_1a8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_160;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_118;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_07548464 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_07548464 = '\x01';
  }
  local_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.m_Array.fields._index = 0;
  local_c8.m_Array.fields._version = 0;
  local_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._getEnumeratorRetType = 0;
  local_c8.m_Object.fields._36_4_ = 0;
  local_c8.m_Object.fields._version = 0;
  local_c8.m_Object.fields._index = 0;
  local_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.type = 0;
  local_c8._4_4_ = 0;
  local_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_1a8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_1a8.m_Array.fields._index = 0;
  local_1a8.m_Array.fields._version = 0;
  local_1a8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_1a8.m_Object.fields._getEnumeratorRetType = 0;
  local_1a8.m_Object.fields._36_4_ = 0;
  local_1a8.m_Object.fields._version = 0;
  local_1a8.m_Object.fields._index = 0;
  local_1a8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_1a8.type = 0;
  local_1a8._4_4_ = 0;
  local_1a8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_1a8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  pSVar2 = TypeInfo_ApplicationManagers_MusicManager->static_fields->_musicInfo;
  if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05e1b25f:
    ThrowNullReferenceException();
  }
  SimpleJSONFixed_JSONNode__get_Values
            ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_118,pSVar2,(MethodInfo *)0x0);
  local_78.m_Array.fields._current = local_118.m_Array.fields._current;
  local_78.m_Array.fields._list = local_118.m_Array.fields._list;
  local_78.m_Array.fields._index = local_118.m_Array.fields._index;
  local_78.m_Array.fields._version = local_118.m_Array.fields._version;
  local_78.m_Object.fields._current.fields.value = local_118.m_Object.fields._current.fields.value;
  local_78.m_Object.fields._getEnumeratorRetType = local_118.m_Object.fields._getEnumeratorRetType;
  local_78.m_Object.fields._36_4_ = local_118.m_Object.fields._36_4_;
  local_78.m_Object.fields._version = local_118.m_Object.fields._version;
  local_78.m_Object.fields._index = local_118.m_Object.fields._index;
  local_78.m_Object.fields._current.fields.key = local_118.m_Object.fields._current.fields.key;
  local_78.type = local_118.type;
  local_78._4_4_ = local_118._4_4_;
  local_78.m_Object.fields._dictionary = local_118.m_Object.fields._dictionary;
  SimpleJSONFixed_JSONNode_ValueEnumerator__GetEnumerator
            ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_c8,
             (SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_78,(MethodInfo *)0x0);
  bVar1 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext
                    ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_c8,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
      do {
        pSVar2 = SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current
                           ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_c8,(MethodInfo *)0x0);
        if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e1b25f;
        (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
                  (&local_160,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
        local_118.m_Array.fields._current = local_160.m_Array.fields._current;
        local_118.type = local_160.type;
        local_118._4_4_ = local_160._4_4_;
        local_118.m_Object.fields._dictionary = local_160.m_Object.fields._dictionary;
        local_1a8.type = local_160.type;
        local_1a8._4_4_ = local_160._4_4_;
        local_1a8.m_Object.fields._dictionary = local_160.m_Object.fields._dictionary;
        local_1a8.m_Object.fields._version = local_160.m_Object.fields._version;
        local_1a8.m_Object.fields._index = local_160.m_Object.fields._index;
        local_1a8.m_Object.fields._current.fields.key = local_160.m_Object.fields._current.fields.key;
        local_1a8.m_Object.fields._current.fields.value = local_160.m_Object.fields._current.fields.value;
        local_1a8.m_Object.fields._getEnumeratorRetType = local_160.m_Object.fields._getEnumeratorRetType;
        local_1a8.m_Object.fields._36_4_ = local_160.m_Object.fields._36_4_;
        local_1a8.m_Array.fields._list = local_160.m_Array.fields._list;
        local_1a8.m_Array.fields._index = local_160.m_Array.fields._index;
        local_1a8.m_Array.fields._version = local_160.m_Array.fields._version;
        local_1a8.m_Array.fields._current = local_160.m_Array.fields._current;
        while( true ) {
          bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_1a8,(MethodInfo *)0x0);
          if (!bVar1) break;
          SVar3 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_1a8,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar3,(MethodInfo *)0x0);
          if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e1b25f;
          bVar1 = (*(pSVar2->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar2,"Name",(pSVar2->klass->vtable)._28_HasKey.method);
          if (bVar1) {
            pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar2,"Name",(pSVar2->klass->vtable)._7_get_Item.method);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar2,(MethodInfo *)0x0);
            ThrowNullReferenceException();
          }
        }
        bVar1 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_c8,(MethodInfo *)0x0);
      } while (bVar1);
    }
    else {
      do {
        pSVar2 = SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current
                           ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_c8,(MethodInfo *)0x0);
        if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e1b25f;
        (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
                  (&local_160,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
        local_118.m_Array.fields._current = local_160.m_Array.fields._current;
        local_118.type = local_160.type;
        local_118._4_4_ = local_160._4_4_;
        local_118.m_Object.fields._dictionary = local_160.m_Object.fields._dictionary;
        local_1a8.type = local_160.type;
        local_1a8._4_4_ = local_160._4_4_;
        local_1a8.m_Object.fields._dictionary = local_160.m_Object.fields._dictionary;
        local_1a8.m_Object.fields._version = local_160.m_Object.fields._version;
        local_1a8.m_Object.fields._index = local_160.m_Object.fields._index;
        local_1a8.m_Object.fields._current.fields.key = local_160.m_Object.fields._current.fields.key;
        local_1a8.m_Object.fields._current.fields.value = local_160.m_Object.fields._current.fields.value;
        local_1a8.m_Object.fields._getEnumeratorRetType = local_160.m_Object.fields._getEnumeratorRetType;
        local_1a8.m_Object.fields._36_4_ = local_160.m_Object.fields._36_4_;
        local_1a8.m_Array.fields._list = local_160.m_Array.fields._list;
        local_1a8.m_Array.fields._index = local_160.m_Array.fields._index;
        local_1a8.m_Array.fields._version = local_160.m_Array.fields._version;
        local_1a8.m_Array.fields._current = local_160.m_Array.fields._current;
        while( true ) {
          bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_1a8,(MethodInfo *)0x0);
          if (!bVar1) break;
          SVar3 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_1a8,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar3,(MethodInfo *)0x0);
          if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e1b25f;
          bVar1 = (*(pSVar2->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar2,"Name",(pSVar2->klass->vtable)._28_HasKey.method);
          if (bVar1) {
            pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar2,"Name",(pSVar2->klass->vtable)._7_get_Item.method);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            item = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar2,(MethodInfo *)0x0);
            System_Collections_Generic_HashSet_object___Add
                      ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)item,
                       (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          }
        }
        bVar1 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_c8,(MethodInfo *)0x0);
      } while (bVar1);
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor_395ca70
            ((System_Collections_Generic_List_object__o *)__this_00,
             (System_Collections_Generic_IEnumerable_T__o *)__this,
             (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
  return __this_00;
}


// ApplicationManagers.MusicManager$$.ctor
// il2cpp: void ApplicationManagers_MusicManager___ctor (ApplicationManagers_MusicManager_o* __this, const MethodInfo* method);
// 0x5e1b270

void ApplicationManagers_MusicManager___ctor(ApplicationManagers_MusicManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_07548465 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07548465 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._customPlaylist = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._customPlaylist);
  (__this->fields)._lastSongBeforeGrabbed = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastSongBeforeGrabbed);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


