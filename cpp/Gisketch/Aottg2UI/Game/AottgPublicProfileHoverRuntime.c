// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgPublicProfileHoverRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<>c__DisplayClass22_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x590cc80

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<>c__DisplayClass22_0$$<ShowAfterDelay>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0___ShowAfterDelay_b__0 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o* __this, ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* response, const MethodInfo* method);
// 0x590cc90

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0___ShowAfterDelay_b__0
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *__this,
               ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *response,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *pGVar1;
  MethodInfo *pMVar2;
  bool bVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_07545697 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_07545697 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
label_0590cda0:
    ThrowNullReferenceException();
  }
  if ((__this->fields).version == (pGVar1->fields)._version) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
        bVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled
                          ((UnityEngine_Behaviour_o *)pGVar1,(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
          root = UnityEngine_Component__GetComponentInParent_object__34b0d00
                           ((UnityEngine_Component_o *)pGVar1,
                            (MethodInfo_34B0D00 *)
                            MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
          if ((response == (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0) ||
             ((response->fields)._Success_k__BackingField == false)) {
            pMVar2 = (MethodInfo *)(__this->fields).__4__this;
            if (pMVar2 != (MethodInfo *)0x0) {
              if (response == (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0) {
                ppSVar4 = &"unknown_error";
              }
              else {
                ppSVar4 = &(response->fields)._Error_k__BackingField;
              }
              Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowError
                        (root,(System_String_o *)pMVar2->klass,*ppSVar4,pMVar2);
              return;
            }
          }
          else {
            pMVar2 = (MethodInfo *)(__this->fields).__4__this;
            if (pMVar2 != (MethodInfo *)0x0) {
              Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowReady
                        (root,(System_String_o *)pMVar2->klass,(response->fields)._Profile_k__BackingField,
                         pMVar2);
              return;
            }
          }
        }
      }
      goto label_0590cda0;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x590cae0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x590d2f0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__MoveNext (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x590d300

bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__MoveNext
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this_00;
  UnityEngine_WaitForSecondsRealtime_o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545698 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSecondsRealtime);
    Il2CppMethodInitialized_07545698 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSecondsRealtime);
    UnityEngine_WaitForSecondsRealtime___ctor(__this_01,0.18,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this_00->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
    method_00 = (MethodInfo *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._pendingClose);
    if (((__this_00->fields)._anchorHover == false) && ((__this_00->fields)._cardHover == false)) {
      Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow(__this_00,method_00);
    }
  }
  return iVar1 == 0;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x590d3c0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o* __this, const MethodInfo* method);
// 0x590d3d0

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
// 0x590d410

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x590cc10

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x590d420

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__MoveNext (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x590d430

bool Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__MoveNext
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *x;
  System_String_o *pSVar2;
  bool bVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  UnityEngine_GameObject_o *anchor;
  UnityEngine_Object_o *x_00;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o *x_01;
  System_Action_AottgPublicProfileFetchResponse__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *pGVar4;
  UnityEngine_WaitForSecondsRealtime_o *__this_01;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07545699 == '\0') {
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
    Il2CppMethodInitialized_07545699 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pGVar4 = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_c__DisplayClass22_0);
    System_Object___ctor((Il2CppObject *)pGVar4,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pGVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1);
    pGVar4 = (__this->fields).__8__1;
    if (pGVar4 == (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *)0x0)
    goto label_0590d712;
    (pGVar4->fields).version = (__this->fields).version;
    (pGVar4->fields).__4__this = (__this->fields).__4__this;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).__4__this);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSecondsRealtime);
    UnityEngine_WaitForSecondsRealtime___ctor(__this_01,0.2,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    x = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (x != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
      (x->fields)._pending = (UnityEngine_Coroutine_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(x->fields)._pending);
      pGVar4 = (__this->fields).__8__1;
      if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___c__DisplayClass22_0_o *)0x0) {
        if ((pGVar4->fields).version == (x->fields)._version) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar3) {
            bVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled
                              ((UnityEngine_Behaviour_o *)x,(MethodInfo *)0x0);
            if (bVar3) {
              root = UnityEngine_Component__GetComponentInParent_object__34b0d00
                               ((UnityEngine_Component_o *)x,
                                (MethodInfo_34B0D00 *)
                                MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
              pSVar2 = (x->fields)._accountId;
              anchor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
              x_00 = (UnityEngine_Object_o *)
                     Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__ShowLoading
                               (root,pSVar2,anchor,in_RCX);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar3 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar3) {
                if (x_00 == (UnityEngine_Object_o *)0x0) goto label_0590d712;
                x_01 = UnityEngine_GameObject__GetComponent_object_
                                 ((UnityEngine_GameObject_o *)x_00,
                                  (MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_AottgPublicProfileHoverCardRuntime
                                 );
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar3 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
                ;
                if (bVar3) {
                  x_01 = UnityEngine_GameObject__AddComponent_object_
                                   ((UnityEngine_GameObject_o *)x_00,
                                    (MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_AottgPublicProfileHoverCardRuntime
                                   );
                }
                if (x_01 == (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o *)0x0)
                goto label_0590d712;
                (x_01->fields)._owner = x;
                Il2CppCodeGenWriteBarrier(&(x_01->fields)._owner);
              }
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar3 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              (x->fields)._open = bVar3;
              pSVar2 = (x->fields)._accountId;
              pGVar4 = (__this->fields).__8__1;
              __this_00 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Action_AottgPublicProfileFetchResponse);
              System_Action_object____ctor
                        ((System_Action_object__o *)__this_00,(Il2CppObject *)pGVar4,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_c__DisplayClass22_0_ShowAfterDelay_b__0
                         ,(MethodInfo_4A81BE0 *)0x0);
              ApplicationManagers_PublicProfiles_AottgPublicProfileService__GetProfile
                        (pSVar2,__this_00,(MethodInfo *)0x0);
            }
          }
        }
        goto label_0590d6fe;
      }
    }
label_0590d712:
    ThrowNullReferenceException();
  }
label_0590d6fe:
  return iVar1 == 0;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x590db70

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o* __this, const MethodInfo* method);
// 0x590db80

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
// 0x590dbc0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Setup (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, System_String_o* accountId, const MethodInfo* method);
// 0x590c670

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,System_String_o *accountId,
               MethodInfo *method)

{
  (__this->fields)._accountId = accountId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._accountId);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnPointerEnter (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x590c680

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnPointerEnter
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Coroutine_o *routine;
  MethodInfo *method_00;
  
  (__this->fields)._anchorHover = true;
  routine = (__this->fields)._pendingClose;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  (__this->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingClose);
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Begin(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnPointerExit (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x590c7c0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnPointerExit
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._anchorHover = false;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnSelect (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x590c8a0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnSelect
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Coroutine_o *routine;
  MethodInfo *method_00;
  
  (__this->fields)._anchorHover = true;
  routine = (__this->fields)._pendingClose;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  (__this->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingClose);
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Begin(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDeselect (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x590c8f0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDeselect
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._anchorHover = false;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDisable (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x590c900

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDisable
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x590c9c0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$Begin
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Begin (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x590c700

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__Begin
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this_00;
  UnityEngine_Coroutine_o *pUVar2;
  int iVar3;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._accountId,(MethodInfo *)0x0);
  if (((bVar1) || ((__this->fields)._open != false)) ||
     ((__this->fields)._pending != (UnityEngine_Coroutine_o *)0x0)) {
    return;
  }
  iVar3 = (__this->fields)._version + 1;
  (__this->fields)._version = iVar3;
  if (Il2CppMethodInitialized_07545696 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_ShowAfterDelay_d__22);
    Il2CppMethodInitialized_07545696 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_ShowAfterDelay_d__22);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).version = iVar3;
  pUVar2 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                     ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                      (MethodInfo *)0x0);
  (__this->fields)._pending = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pending);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$EndOrDelay
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x590c7d0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **targetAddress;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this_00;
  UnityEngine_Coroutine_o *pUVar1;
  
  if (((__this->fields)._anchorHover == false) && ((__this->fields)._cardHover == false)) {
    if ((__this->fields)._open == false) {
      targetAddress = &(__this->fields)._pending;
      pUVar1 = (__this->fields)._pending;
      if (pUVar1 != (UnityEngine_Coroutine_o *)0x0) {
        UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
                  ((UnityEngine_MonoBehaviour_o *)__this,pUVar1,(MethodInfo *)0x0);
      }
      *targetAddress = (UnityEngine_Coroutine_o *)0x0;
      Il2CppCodeGenWriteBarrier(targetAddress);
      return;
    }
    if ((__this->fields)._pendingClose == (UnityEngine_Coroutine_o *)0x0) {
      if (Il2CppMethodInitialized_07545694 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_CloseAfterGrace_d__18);
        Il2CppMethodInitialized_07545694 = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_CloseAfterGrace_d__18
                            );
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).__1__state = 0;
      (__this_00->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
      pUVar1 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                         ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                          (MethodInfo *)0x0);
      (__this->fields)._pendingClose = pUVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingClose);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CloseAfterGrace
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x590ca70

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseAfterGrace_d__18_o *__this_00;
  
  if (Il2CppMethodInitialized_07545694 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_CloseAfterGrace_d__18);
    Il2CppMethodInitialized_07545694 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_CloseAfterGrace_d__18)
  ;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CloseNow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x590c910

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CloseNow
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Coroutine_o *pUVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545695 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    Il2CppMethodInitialized_07545695 = '\x01';
  }
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar2 = (__this->fields)._pending;
  if (pUVar2 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar2,(MethodInfo *)0x0);
  }
  (__this->fields)._pending = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pending);
  pUVar2 = (__this->fields)._pendingClose;
  if (pUVar2 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar2,(MethodInfo *)0x0);
  }
  (__this->fields)._pendingClose = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingClose);
  (__this->fields)._open = false;
  (__this->fields)._anchorHover = false;
  (__this->fields)._cardHover = false;
  root = UnityEngine_Component__GetComponentInParent_object__34b0d00
                   ((UnityEngine_Component_o *)__this,
                    (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot
                   );
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Close(root,(__this->fields)._accountId,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CancelPending
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CancelPending (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x590ca40

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CancelPending
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **targetAddress;
  UnityEngine_Coroutine_o *routine;
  
  targetAddress = &(__this->fields)._pending;
  routine = (__this->fields)._pending;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  *targetAddress = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CancelClose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CancelClose (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x590c6d0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CancelClose
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **targetAddress;
  UnityEngine_Coroutine_o *routine;
  
  targetAddress = &(__this->fields)._pendingClose;
  routine = (__this->fields)._pendingClose;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  *targetAddress = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$ShowAfterDelay
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, int32_t version, const MethodInfo* method);
// 0x590c9d0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,int32_t version,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__ShowAfterDelay_d__22_o *__this_00;
  
  if (Il2CppMethodInitialized_07545696 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_ShowAfterDelay_d__22);
    Il2CppMethodInitialized_07545696 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_ShowAfterDelay_d__22);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).version = version;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CardEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardEnter (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x590cc30

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardEnter
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **targetAddress;
  UnityEngine_Coroutine_o *routine;
  
  (__this->fields)._cardHover = true;
  targetAddress = &(__this->fields)._pendingClose;
  routine = (__this->fields)._pendingClose;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  *targetAddress = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CardExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardExit (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x590cc60

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardExit
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  (__this->fields)._cardHover = false;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* __this, const MethodInfo* method);
// 0x590cc70

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


