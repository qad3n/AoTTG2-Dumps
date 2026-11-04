// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPublicProfileHoverRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<>c__DisplayClass22_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0___ctor(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<>c__DisplayClass22_0$$<ShowAfterDelay>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0___ShowAfterDelay_b__0 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o* __this, ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* response, const MethodInfo* method);
// 0x181e25030

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0___ShowAfterDelay_b__0
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *__this,
               ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *response,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *pGVar1;
  bool bVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  
  if (Il2CppMethodInitialized_184344d21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_184344d21 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
label_181e2516f:
    ThrowNullReferenceException();
  }
  if ((__this->fields).version == (pGVar1->fields)._version) {
    pGVar1 = (__this->fields).__4__this;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
        bVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled
                          ((UnityEngine_Behaviour_o *)pGVar1,(MethodInfo *)0x0);
        if (!bVar2) {
          return;
        }
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
          root = UnityEngine_Component__GetComponentInParent_object__664f20
                           ((UnityEngine_Component_o *)pGVar1,
                            (MethodInfo_664F20 *)
                            MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
          if ((response == (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0) ||
             ((response->fields)._Success_k__BackingField == false)) {
            pGVar1 = (__this->fields).__4__this;
            if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
              if (response == (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0) {
                Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowError
                          (root,(pGVar1->fields)._accountId,"unknown_error",(MethodInfo *)0x0);
                return;
              }
              Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowError
                        (root,(pGVar1->fields)._accountId,(response->fields)._Error_k__BackingField,
                         (MethodInfo *)0x0);
              return;
            }
          }
          else {
            pGVar1 = (__this->fields).__4__this;
            if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
              Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowReady
                        (root,(pGVar1->fields)._accountId,(response->fields)._Profile_k__BackingField,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_181e2516f;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18___ctor(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_IDisposable_Dispose(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__MoveNext (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x181e222e0

bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__MoveNext
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this_00;
  UnityEngine_WaitForSecondsRealtime_o *__this_01;
  
  if (Il2CppMethodInitialized_184344d22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSecondsRealtime);
    Il2CppMethodInitialized_184344d22 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSecondsRealtime);
    UnityEngine_WaitForSecondsRealtime___ctor(__this_01,0.18,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this_00->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._pendingClose,(void *)0x0);
    if (((__this_00->fields)._anchorHover == false) && ((__this_00->fields)._cardHover == false)) {
      Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow(__this_00,(MethodInfo *)0x0);
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x181e223b0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this,
               MethodInfo *method)

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
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_CloseAfterGrace_d__18_System_Collections_I
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22___ctor(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_IDisposable_Dispose(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__MoveNext (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x181e223f0

bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__MoveNext
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *pGVar2;
  System_String_o *pSVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *pGVar5;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  UnityEngine_GameObject_o *anchor;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o *x_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  
  if (Il2CppMethodInitialized_184344d23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgPublicProfileFetchResponse);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgPublicProfileHoverCardRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_AottgPublicProfileHoverCardRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_c__DisplayClass22_0_ShowAfterDelay_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_c__DisplayClass22_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSecondsRealtime);
    Il2CppMethodInitialized_184344d23 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pGVar5 = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_c__DisplayClass22_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar5,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pGVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1,pGVar5);
    pGVar5 = (__this->fields).__8__1;
    if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *)0x0) {
      (pGVar5->fields).version = (__this->fields).version;
      pGVar5 = (__this->fields).__8__1;
      if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *)0x0) {
        pGVar2 = (__this->fields).__4__this;
        (pGVar5->fields).__4__this = pGVar2;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).__4__this,pGVar2);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSecondsRealtime);
        UnityEngine_WaitForSecondsRealtime___ctor(__this_00,0.2,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)__this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    pGVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
      (pGVar2->fields)._pending = (UnityEngine_Coroutine_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._pending,(void *)0x0);
      pGVar5 = (__this->fields).__8__1;
      if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *)0x0) {
        if ((pGVar5->fields).version == (pGVar2->fields)._version) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((!bVar4) &&
             (bVar4 = UnityEngine_Behaviour__get_isActiveAndEnabled
                                ((UnityEngine_Behaviour_o *)pGVar2,(MethodInfo *)0x0), bVar4)) {
            root = UnityEngine_Component__GetComponentInParent_object__664f20
                             ((UnityEngine_Component_o *)pGVar2,
                              (MethodInfo_664F20 *)
                              MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
            pSVar3 = (pGVar2->fields)._accountId;
            anchor = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pGVar2,(MethodInfo *)0x0);
            x = (UnityEngine_Object_o *)
                Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowLoading
                          (root,pSVar3,anchor,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar4) {
              if (x == (UnityEngine_Object_o *)0x0) goto label_181e226e5;
              x_00 = UnityEngine_GameObject__GetComponent_object_
                               ((UnityEngine_GameObject_o *)x,
                                (MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_AottgPublicProfileHoverCardRuntime
                               );
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar4 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar4) {
                x_00 = UnityEngine_GameObject__AddComponent_object_
                                 ((UnityEngine_GameObject_o *)x,
                                  (MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_AottgPublicProfileHoverCardRuntime
                                 );
              }
              if (x_00 == (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o *)0x0)
              goto label_181e226e5;
              (x_00->fields)._owner = pGVar2;
              Il2CppCodeGenWriteBarrier(&(x_00->fields)._owner,pGVar2);
            }
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            (pGVar2->fields)._open = bVar4;
            pSVar3 = (pGVar2->fields)._accountId;
            pGVar5 = (__this->fields).__8__1;
            __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_AottgPublicProfileFetchResponse);
            System_Action_object____ctor
                      (__this_01,(Il2CppObject *)pGVar5,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_c__DisplayClass22_0_ShowAfterDelay_b__0
                       ,(MethodInfo *)0x0);
            ApplicationManagers_PublicProfiles_AottgPublicProfileService__GetProfile
                      (pSVar3,(System_Action_AottgPublicProfileFetchResponse__o *)__this_01,(MethodInfo *)0x0)
            ;
          }
        }
        return false;
      }
    }
  }
label_181e226e5:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x181e226f0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this,
               MethodInfo *method)

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
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_ShowAfterDelay_d__22_System_Collections_IE
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Setup (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, System_String_o* accountId, const MethodInfo* method);
// 0x180ace2f0

void
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Setup(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, System_String_o* accountId, MethodInfo* method)

{
  (__this->fields)._accountId = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._accountId,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnPointerEnter (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x181e20ea0

void
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnPointerEnter(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, MethodInfo* method)

{
  (__this->fields)._anchorHover = true;
  if ((__this->fields)._pendingClose != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._pendingClose,(MethodInfo *)0x0);
  }
  (__this->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingClose,(void *)0x0);
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Begin(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnPointerExit (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x181e20e80

void
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnPointerExit(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, MethodInfo* method)

{
  (__this->fields)._anchorHover = false;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnSelect (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x181e20ea0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnSelect
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._anchorHover = true;
  if ((__this->fields)._pendingClose != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._pendingClose,(MethodInfo *)0x0);
  }
  (__this->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingClose,(void *)0x0);
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Begin(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDeselect (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x181e20e80

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDeselect
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._anchorHover = false;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDisable (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x181e20e90

void
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDisable(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x181e20e90

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$Begin
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Begin (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x181e20af0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Begin
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *routine;
  UnityEngine_Coroutine_o *value;
  int iVar2;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._accountId,(MethodInfo *)0x0);
  if (((!bVar1) && ((__this->fields)._open == false)) &&
     ((__this->fields)._pending == (UnityEngine_Coroutine_o *)0x0)) {
    iVar2 = (__this->fields)._version + 1;
    bVar1 = Il2CppMethodInitialized_184344d20 == '\0';
    (__this->fields)._version = iVar2;
    if (bVar1) {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_ShowAfterDelay_d__22);
      Il2CppMethodInitialized_184344d20 = '\x01';
    }
    routine = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_ShowAfterDelay_d__22);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    (routine->fields).__1__state = 0;
    (routine->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
    (routine->fields).version = iVar2;
    value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                      ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                       (MethodInfo *)0x0);
    (__this->fields)._pending = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pending,value);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$EndOrDelay
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x181e20da0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *routine;
  UnityEngine_Coroutine_o *value;
  
  if (((__this->fields)._anchorHover == false) && ((__this->fields)._cardHover == false)) {
    if ((__this->fields)._open == false) {
      if ((__this->fields)._pending != (UnityEngine_Coroutine_o *)0x0) {
        UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
                  ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._pending,(MethodInfo *)0x0);
      }
      (__this->fields)._pending = (UnityEngine_Coroutine_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._pending,(void *)0x0);
    }
    else if ((__this->fields)._pendingClose == (UnityEngine_Coroutine_o *)0x0) {
      if (Il2CppMethodInitialized_184344d1e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_CloseAfterGrace_d__18);
        Il2CppMethodInitialized_184344d1e = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_CloseAfterGrace_d__18
                          );
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                         (MethodInfo *)0x0);
      (__this->fields)._pendingClose = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingClose,value);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CloseAfterGrace
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x181e20c80

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this_00;
  
  if (Il2CppMethodInitialized_184344d1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_CloseAfterGrace_d__18);
    Il2CppMethodInitialized_184344d1e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_CloseAfterGrace_d__18)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CloseNow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x181e20cf0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  
  if (Il2CppMethodInitialized_184344d1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    Il2CppMethodInitialized_184344d1f = '\x01';
  }
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  if ((__this->fields)._pending != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._pending,(MethodInfo *)0x0);
  }
  (__this->fields)._pending = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pending,(void *)0x0);
  if ((__this->fields)._pendingClose != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._pendingClose,(MethodInfo *)0x0);
  }
  (__this->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingClose,(void *)0x0);
  (__this->fields)._cardHover = false;
  (__this->fields)._open = false;
  (__this->fields)._anchorHover = false;
  root = UnityEngine_Component__GetComponentInParent_object__664f20
                   ((UnityEngine_Component_o *)__this,
                    (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot)
  ;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Close
            (root,(__this->fields)._accountId,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CancelPending
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CancelPending (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x181e20bf0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CancelPending
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  if ((__this->fields)._pending != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._pending,(MethodInfo *)0x0);
  }
  (__this->fields)._pending = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pending,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CancelClose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CancelClose (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x181e20bb0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CancelClose
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  if ((__this->fields)._pendingClose != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._pendingClose,(MethodInfo *)0x0);
  }
  (__this->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingClose,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$ShowAfterDelay
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, int32_t version, const MethodInfo* method);
// 0x181e20ef0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,int32_t version,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this_00;
  
  if (Il2CppMethodInitialized_184344d20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_ShowAfterDelay_d__22);
    Il2CppMethodInitialized_184344d20 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_ShowAfterDelay_d__22);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).version = version;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CardEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardEnter (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x181e20c30

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardEnter
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  (__this->fields)._cardHover = true;
  if ((__this->fields)._pendingClose != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._pendingClose,(MethodInfo *)0x0);
  }
  (__this->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingClose,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CardExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardExit (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x181e20c70

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardExit
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  (__this->fields)._cardHover = false;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___ctor(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


