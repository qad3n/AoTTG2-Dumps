// Type: Gisketch.Aottg2UI.Game.AottgGisketchUiHost
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgGisketchUiHost.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.LegacyPopupSorting$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost_LegacyPopupSorting__OnEnable (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_LegacyPopupSorting_o* __this, const MethodInfo* method);
// 0x5e74c20

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost_LegacyPopupSorting__OnEnable
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_LegacyPopupSorting_o *__this,MethodInfo *method)

{
  UnityEngine_Canvas_o *__this_00;
  
  if (Il2CppMethodInitialized_075487a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    Il2CppMethodInitialized_075487a9 = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
  if (__this_00 == (UnityEngine_Canvas_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Canvas__set_overrideSorting(__this_00,true,(MethodInfo *)0x0);
  UnityEngine_Canvas__set_sortingOrder(__this_00,0x1771,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.LegacyPopupSorting$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost_LegacyPopupSorting___ctor (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_LegacyPopupSorting_o* __this, const MethodInfo* method);
// 0x5e74c80

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost_LegacyPopupSorting___ctor
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_LegacyPopupSorting_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<>c__DisplayClass37_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass37_0___ctor (Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass37_0_o* __this, const MethodInfo* method);
// 0x5e74820

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass37_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass37_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<>c__DisplayClass37_0$$<HideInGameOverlay>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass37_0___HideInGameOverlay_b__0 (Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass37_0_o* __this, const MethodInfo* method);
// 0x5e74c90

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass37_0___HideInGameOverlay_b__0
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass37_0_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar1;
  MethodInfo *in_RDX;
  
  pGVar1 = (__this->fields).host;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetVisible(pGVar1,false,in_RDX);
    pGVar1 = (__this->fields).host;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
      (pGVar1->fields)._inGameOverlayClosing = false;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<ApplyLanguageAfterFrame>d__34$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34___ctor (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e74510

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34___ctor
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<ApplyLanguageAfterFrame>d__34$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34_o* __this, const MethodInfo* method);
// 0x5e74cc0

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<ApplyLanguageAfterFrame>d__34$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34__MoveNext (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34_o* __this, const MethodInfo* method);
// 0x5e74cd0

bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34__MoveNext
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34_o *__this,
               MethodInfo *method)

{
  int iVar1;
  
  if (Il2CppMethodInitialized_075487aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_075487aa = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    UI_UIManager__ApplyLanguageAndTheme((MethodInfo *)0x0);
  }
  return iVar1 == 0;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<ApplyLanguageAfterFrame>d__34$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34_o* __this, const MethodInfo* method);
// 0x5e74d60

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<ApplyLanguageAfterFrame>d__34$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34_o* __this, const MethodInfo* method);
// 0x5e74d70

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34_o *__this,
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
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_ApplyLanguageAfterFrame_d__34_System_Collections_IEnu
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<ApplyLanguageAfterFrame>d__34$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34_o* __this, const MethodInfo* method);
// 0x5e74db0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__35$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35___ctor (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e74530

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35___ctor
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__35$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35_o* __this, const MethodInfo* method);
// 0x5e74dc0

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__35$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35__MoveNext (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35_o* __this, const MethodInfo* method);
// 0x5e74dd0

bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35__MoveNext
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar3;
  bool bVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_075487ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_075487ab = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  pGVar2 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
label_05e74ed9:
      ThrowNullReferenceException();
    }
    pGVar3 = (pGVar2->fields)._root;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    bVar5 = false;
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(pGVar3,(MethodInfo *)0x0);
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) goto label_05e74ed9;
    pGVar3 = (pGVar2->fields)._root;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    bVar5 = false;
    bVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(pGVar3,(MethodInfo *)0x0);
    if (!bVar4) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 2;
      bVar5 = true;
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__35$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35_o* __this, const MethodInfo* method);
// 0x5e74ee0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__35$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35_o* __this, const MethodInfo* method);
// 0x5e74ef0

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35_o *__this,
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
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_RefreshGameCreateAfterActivation_d__35_System_Collect
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__35$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35_o* __this, const MethodInfo* method);
// 0x5e74f30

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$get_Root
// il2cpp: Gisketch_Aottg2UI_GisketchUIRoot_o* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root (const MethodInfo* method);
// 0x5e732a0

Gisketch_Aottg2UI_GisketchUIRoot_o * Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar1;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_07548790 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu");
    Il2CppMethodInitialized_07548790 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Ensure("main-menu",in_RSI);
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pGVar1->fields)._root;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$get_IsInGameOverlayActive
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsInGameOverlayActive (const MethodInfo* method);
// 0x5e73430

bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsInGameOverlayActive(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar1;
  bool bVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548791 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07548791 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar2) && (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 2)) {
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pGVar1->fields)._inGameOverlayClosing == false) {
      bVar2 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsVisible(pGVar1,method_00);
      return bVar2;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$get_IsPauseScreenActive
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsPauseScreenActive (const MethodInfo* method);
// 0x5e735d0

bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsPauseScreenActive(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RSI;
  System_String_o **ppSVar2;
  
  if (g_data_07548792 == '\0') {
    ppSVar2 = &"pause";
    il2cpp_codegen_initialize_runtime_metadata(&"pause");
    g_data_07548792 = '\x01';
    method = (MethodInfo *)ppSVar2;
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsInGameOverlayActive(method);
  if (bVar1) {
    bVar1 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__IsScreenActive("pause",in_RSI);
    return bVar1;
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$get_ClosedInGameOverlayThisFrame
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_ClosedInGameOverlayThisFrame (const MethodInfo* method);
// 0x5e73710

bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_ClosedInGameOverlayThisFrame(MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar2;
  bool bVar3;
  int32_t iVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_07548793 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548793 = '\x01';
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = false;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar1 = (pGVar2->fields)._lastHiddenFrame;
    iVar4 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    bVar5 = iVar1 == iVar4;
  }
  return bVar5;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$get_IsVisible
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsVisible (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* __this, const MethodInfo* method);
// 0x5e734f0

bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsVisible
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  bool bVar2;
  UnityEngine_Canvas_o *x;
  
  if (Il2CppMethodInitialized_07548794 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_Canvas_71a4da8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548794 = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  x = (UnityEngine_Canvas_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05e735bd;
    x = UnityEngine_Component__GetComponentInChildren_object_
                  ((UnityEngine_Component_o *)pGVar1,true,
                   (MethodInfo_34B0B60 *)
                   MethodInfo_UnityEngine_Component_GetComponentInChildren_Canvas_71a4da8);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  if (x != (UnityEngine_Canvas_o *)0x0) {
    bVar2 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)x,(MethodInfo *)0x0);
    return bVar2;
  }
label_05e735bd:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$IsScreenActive
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__IsScreenActive (System_String_o* screenId, const MethodInfo* method);
// 0x5e73610

bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__IsScreenActive(System_String_o *screenId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_07548795 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548795 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
label_05e73706:
      ThrowNullReferenceException();
    }
    pGVar2 = (pGVar1->fields)._root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
      if ((pGVar1 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) ||
         (pGVar2 = (pGVar1->fields)._root, pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0))
      goto label_05e73706;
      pGVar3 = (pGVar2->fields)._Screens_k__BackingField;
      if (pGVar3 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        bVar4 = System_String__op_Equality((pGVar3->fields)._activeId,screenId,(MethodInfo *)0x0);
        return bVar4;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$AboveOverlay<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_ (Il2CppObject* popup, const MethodInfo_3488650* method);
// 0x3588650

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_
          (Il2CppObject *popup,MethodInfo_3488650 *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Il2CppObject *local_18;
  Il2CppObject *local_10;
  
  if (Il2CppMethodInitialized_0753e83d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_TryGetComponent_AottgGisketchUiHost_LegacyPopupSorting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGisketchUiHost_LegacyPopupSorting);
    Il2CppMethodInitialized_0753e83d = '\x01';
  }
  local_10 = (Il2CppObject *)0x0;
  local_18 = (Il2CppObject *)0x0;
  if (popup == (Il2CppObject *)0x0) goto label_0358875e;
  bVar1 = UnityEngine_Component__TryGetComponent_object_
                    ((UnityEngine_Component_o *)popup,&local_10,
                     (MethodInfo_34B1690 *)
                     MethodInfo_UnityEngine_Component_TryGetComponent_AottgGisketchUiHost_LegacyPopupSorting);
  if (!bVar1) {
    bVar1 = UnityEngine_Component__TryGetComponent_object_
                      ((UnityEngine_Component_o *)popup,&local_18,
                       (MethodInfo_34B1690 *)MethodInfo_UnityEngine_Component_TryGetComponent_Canvas);
    if (!bVar1) {
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_0358875e;
      UnityEngine_GameObject__AddComponent_object_
                (pUVar2,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_0358875e;
      UnityEngine_GameObject__AddComponent_object_
                (pUVar2,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster)
      ;
    }
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
label_0358875e:
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__AddComponent_object_
              (pUVar2,(MethodInfo_353B6A0 *)
                      MethodInfo_UnityEngine_GameObject_AddComponent_AottgGisketchUiHost_LegacyPopupSorting);
  }
  return popup;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ShowMainMenu
// il2cpp: Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowMainMenu (const MethodInfo* method);
// 0x5e737b0

Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowMainMenu(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_07548796 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu");
    Il2CppMethodInitialized_07548796 = '\x01';
  }
  __this = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowMenuScreen("main-menu",in_RSI);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost__EnsureMainMenuControllers(__this,in_RSI);
  return (__this->fields)._tipPanel;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ShowMenuScreen
// il2cpp: Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowMenuScreen (System_String_o* screenId, const MethodInfo* method);
// 0x5e73800

Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowMenuScreen(System_String_o *screenId,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  
  __this_00 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Ensure(screenId,method);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyThemeAndScale(__this_00,method);
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetCanvasSorting(__this_00,false,method_00);
    pGVar1 = (__this_00->fields)._root;
    if (pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (pGVar1->fields)._Screens_k__BackingField;
      method_01 = extraout_RDX;
      if (__this != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen(__this,screenId,(MethodInfo *)0x0);
        method_01 = extraout_RDX_00;
      }
      Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetVisible(__this_00,true,method_01);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$PrepareForScene
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__PrepareForScene (int32_t sceneName, const MethodInfo* method);
// 0x5e73ec0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e73ee3: lea rax, [rip + 0x1487906]  ; "snapshot-viewer"
// asm:   0x5e73eea: mov rdi, qword ptr [rax]
// asm:   0x5e73eed: test rdi, rdi
// asm:   0x5e73ef0: je 0x5e73f57
// asm:   0x5e73f48: lea rax, [rip + 0x1481b21]  ; "gallery"
// asm:   0x5e73f4f: mov rdi, qword ptr [rax]
// asm:   0x5e73f52: test rdi, rdi

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__PrepareForScene(int32_t sceneName,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this;
  System_String_o *screenId;
  bool bVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar3;
  
  if (Il2CppMethodInitialized_07548797 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548797 = '\x01';
    if (Il2CppMethodInitialized_07548798 == '\0') goto label_05e73f24;
label_05e73ed9:
    screenId = "gallery";
    if (sceneName == 6) goto joined_r0x05e73f55;
label_05e73ede:
    screenId = "snapshot-viewer";
    if (sceneName == 5) goto joined_r0x05e73f55;
  }
  else {
    if (Il2CppMethodInitialized_07548798 != '\0') goto label_05e73ed9;
label_05e73f24:
    il2cpp_codegen_initialize_runtime_metadata(&"gallery");
    il2cpp_codegen_initialize_runtime_metadata(&"snapshot-viewer");
    Il2CppMethodInitialized_07548798 = '\x01';
    screenId = "gallery";
    if (sceneName != 6) goto label_05e73ede;
joined_r0x05e73f55:
    if (screenId != (System_String_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowMenuScreen(screenId,method);
      return;
    }
  }
  pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((sceneName == 1) || (bVar2)) {
    return;
  }
  pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
label_05e73ff5:
    ThrowNullReferenceException();
  }
  (pGVar3->fields)._inGameOverlayClosing = false;
  pGVar1 = (pGVar3->fields)._root;
  method_00 = extraout_RDX;
  if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this = (pGVar1->fields)._Screens_k__BackingField,
     __this != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DeactivateActive
              (__this,false,(System_Action_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
    method_00 = extraout_RDX_00;
    if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) goto label_05e73ff5;
  }
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetVisible(pGVar3,false,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ViewerScreenId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ViewerScreenId (int32_t sceneName, const MethodInfo* method);
// 0x5e74000

System_String_o *
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ViewerScreenId(int32_t sceneName,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548798 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"gallery");
    il2cpp_codegen_initialize_runtime_metadata(&"snapshot-viewer");
    Il2CppMethodInitialized_07548798 = '\x01';
  }
  if (sceneName == 5) {
    return "snapshot-viewer";
  }
  if (sceneName == 6) {
    return "gallery";
  }
  return (System_String_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ShowPause
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowPause (const MethodInfo* method);
// 0x5e74060

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowPause(MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this;
  int32_t iVar3;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_07548799 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    il2cpp_codegen_initialize_runtime_metadata(&"pause");
    Il2CppMethodInitialized_07548799 = '\x01';
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Ensure("pause",in_RSI);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
    iVar1 = (__this_00->fields)._lastHiddenFrame;
    iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    if (iVar1 == iVar3) {
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    }
    Gisketch_Aottg2UI_Actions_GisketchInputCapture__BlockThisFrame((MethodInfo *)0x0);
    (__this_00->fields)._inGameOverlayClosing = false;
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyThemeAndScale(__this_00,in_RSI);
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetCanvasSorting(__this_00,true,method_00);
    pGVar2 = (__this_00->fields)._root;
    if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (pGVar2->fields)._Screens_k__BackingField;
      method_01 = extraout_RDX;
      if (__this != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
                  (__this,"pause",(MethodInfo *)0x0);
        method_01 = extraout_RDX_00;
      }
      Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetVisible(__this_00,true,method_01);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ShowGameCreate
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowGameCreate (bool multiplayer, bool restart, const MethodInfo* method);
// 0x5e74130

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowGameCreate
               (bool multiplayer,bool restart,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar4;
  uint launchContext;
  bool bVar5;
  
  if (Il2CppMethodInitialized_0754879a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create");
    Il2CppMethodInitialized_0754879a = '\x01';
  }
  bVar5 = multiplayer;
  if ((!restart) || (multiplayer)) goto label_05e741ea;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar5 = false;
  bVar3 = Photon_Pun_PhotonNetwork__get_InRoom((MethodInfo *)0x0);
  if (!bVar3) goto label_05e741ea;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    if (g_data_07544cc2 != '\0') goto label_05e741cc;
label_05e7432d:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    g_data_07544cc2 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_07544cc2 == '\0') goto label_05e7432d;
label_05e741cc:
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar5 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode == false;
label_05e741ea:
  launchContext = 2;
  if (!restart) {
    launchContext = (uint)multiplayer;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pMVar4 = (MethodInfo *)(ulong)bVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__Begin(launchContext,bVar5,(MethodInfo *)0x0);
  __this_00 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Ensure("game-create",pMVar4);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
    (__this_00->fields)._inGameOverlayClosing = false;
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyThemeAndScale(__this_00,pMVar4);
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetCanvasSorting(__this_00,restart,method_00);
    pGVar2 = (__this_00->fields)._root;
    if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (pGVar2->fields)._Screens_k__BackingField;
      pMVar4 = extraout_RDX;
      if (__this != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
                  (__this,"game-create",(MethodInfo *)0x0);
        pMVar4 = extraout_RDX_00;
      }
      Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetVisible(__this_00,true,pMVar4);
      pGVar2 = (__this_00->fields)._root;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      bVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(pGVar2,(MethodInfo *)0x0);
      if (bVar5) {
        return;
      }
      if (Il2CppMethodInitialized_0754879d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_RefreshGameCreateAfterActivation_d__35
                  );
        Il2CppMethodInitialized_0754879d = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_RefreshGameCreateAfterActivation_d__35
                            );
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      (__this_01->fields).__1__state = 0;
      (__this_01->fields).__4__this = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)__this_01,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ApplyLanguageNextFrame
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageNextFrame (const MethodInfo* method);
// 0x5e743e0

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageNextFrame(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34_o *__this;
  
  if (Il2CppMethodInitialized_0754879b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754879b = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (Il2CppMethodInitialized_0754879c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_ApplyLanguageAfterFrame_d__34);
      Il2CppMethodInitialized_0754879c = '\x01';
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_ApplyLanguageAfterFrame_d__34);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).__1__state = 0;
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)pGVar1,(System_Collections_IEnumerator_o *)__this,
               (MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ApplyLanguageAfterFrame
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* __this, const MethodInfo* method);
// 0x5e744c0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame
          (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageAfterFrame_d__34_o *__this_00;
  
  if (Il2CppMethodInitialized_0754879c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_ApplyLanguageAfterFrame_d__34);
    Il2CppMethodInitialized_0754879c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_ApplyLanguageAfterFrame_d__34);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$RefreshGameCreateAfterActivation
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* __this, const MethodInfo* method);
// 0x5e74370

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation
          (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__35_o *__this_00;
  
  if (Il2CppMethodInitialized_0754879d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_RefreshGameCreateAfterActivation_d__35);
    Il2CppMethodInitialized_0754879d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_RefreshGameCreateAfterActivation_d__35
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$CloseOverlays
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__CloseOverlays (const MethodInfo* method);
// 0x5e74550

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__CloseOverlays(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar3;
  
  if (Il2CppMethodInitialized_0754879e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754879e = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
      ThrowNullReferenceException();
    }
    pGVar2 = (pGVar1->fields)._root;
    if ((pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this = (pGVar2->fields)._Overlays_k__BackingField,
       __this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseAll(__this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$HideInGameOverlay
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__HideInGameOverlay (bool returnToGameplay, const MethodInfo* method);
// 0x5e74600

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__HideInGameOverlay(bool returnToGameplay,MethodInfo *method)

{
  byte bVar1;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar2;
  UI_BaseMenu_o *pUVar3;
  UI_BaseMenu_c *pUVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar5;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this;
  bool bVar6;
  int32_t iVar7;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass37_0_o *__this_00;
  System_Action_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass37_0_Fields *targetAddress;
  
  if (Il2CppMethodInitialized_0754879f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_c__DisplayClass37_0_HideInGameOverlay_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_c__DisplayClass37_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_0754879f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_c__DisplayClass37_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass37_0_o *)0x0) {
    targetAddress = &__this_00->fields;
    (__this_00->fields).host = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
    Il2CppCodeGenWriteBarrier(&targetAddress->host);
    pGVar2 = (__this_00->fields).host;
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
      (pGVar2->fields)._inGameOverlayClosing = true;
      iVar7 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
      (pGVar2->fields)._lastHiddenFrame = iVar7;
      method_00 = extraout_RDX;
      if (returnToGameplay) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          method_00 = extraout_RDX_00;
        }
        pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar3 != (UI_BaseMenu_o *)0x0) {
          pUVar4 = pUVar3->klass;
          bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
          method_00 = (MethodInfo *)(ulong)bVar1;
          if ((bVar1 <= (pUVar4->_2).typeHierarchyDepth) &&
             ((pUVar4->_2).typeHierarchy[(long)&method_00[-1].field_0x57] ==
              (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
            if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
            }
            UI_CursorManager__SetHidden(true,(MethodInfo *)0x0);
            method_00 = extraout_RDX_01;
          }
        }
      }
      pGVar2 = targetAddress->host;
      if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
        pGVar5 = (pGVar2->fields)._root;
        if ((pGVar5 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
           (__this = (pGVar5->fields)._Screens_k__BackingField,
           __this != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) {
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (__this_01,(Il2CppObject *)__this_00,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_c__DisplayClass37_0_HideInGameOverlay_b__0
                     ,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DeactivateActive
                    (__this,true,__this_01,(MethodInfo *)0x0);
          return;
        }
        Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetVisible(pGVar2,false,method_00);
        if (targetAddress->host != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
          (targetAddress->host->fields)._inGameOverlayClosing = false;
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$Ensure
// il2cpp: Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Ensure (System_String_o* initialScreenId, const MethodInfo* method);
// 0x5e732e0

Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Ensure(System_String_o *initialScreenId,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *target;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075487a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Gisketch UI");
    Il2CppMethodInitialized_075487a0 = '\x01';
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
label_05e7340a:
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  }
  target = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)target,"AoTTG Gisketch UI",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
  if (target != (UnityEngine_Object_o *)0x0) {
    pGVar2 = UnityEngine_GameObject__AddComponent_object_
                       ((UnityEngine_GameObject_o *)target,
                        (MethodInfo_353B6A0 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_AottgGisketchUiHost);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance = pGVar2;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Initialize(pGVar2,initialScreenId,method_00);
      goto label_05e7340a;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$Initialize
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Initialize (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* __this, System_String_o* initialScreenId, const MethodInfo* method);
// 0x5e74830

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Initialize
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this,System_String_o *initialScreenId,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o **targetAddress;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar3;
  Gisketch_Aottg2UI_Game_AottgGameUiActions_o *pGVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075487a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateFileWatcher);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameUiActions);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgMobileUiSafeArea);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIRoot)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu");
    Il2CppMethodInitialized_075487a1 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pGVar3 = UnityEngine_GameObject__AddComponent_object_
                       (pUVar2,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIRoot);
    targetAddress = &(__this->fields)._root;
    (__this->fields)._root = pGVar3;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pGVar4 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar2,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameUiActions);
      (__this->fields)._actions = pGVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._actions);
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__AddComponent_object_
                              (pUVar2,(MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateFileWatcher
                              );
        if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_o *)0x0) {
          Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher__Setup(__this_00,*targetAddress,(MethodInfo *)0x0)
          ;
          bVar1 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
          if (bVar1) {
            pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_05e749b6;
            UnityEngine_GameObject__AddComponent_object_
                      (pUVar2,(MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_AottgMobileUiSafeArea);
          }
          pGVar3 = *targetAddress;
          bVar1 = System_String__IsNullOrEmpty(initialScreenId,(MethodInfo *)0x0);
          if (pGVar3 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
            if (bVar1) {
              initialScreenId = "main-menu";
            }
            Gisketch_Aottg2UI_GisketchUIRoot__SetSelectedScreen(pGVar3,initialScreenId,(MethodInfo *)0x0);
            if (*targetAddress != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
              method_00 = (MethodInfo *)(__this->fields)._actions;
              Gisketch_Aottg2UI_GisketchUIRoot__SetActionHandler
                        (*targetAddress,(UnityEngine_MonoBehaviour_o *)method_00,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyThemeAndScale(__this,method_00);
              return;
            }
          }
        }
      }
    }
  }
label_05e749b6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ApplyThemeAndScale
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyThemeAndScale (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* __this, const MethodInfo* method);
// 0x5e73a30

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyThemeAndScale
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *pGVar2;
  Gisketch_Aottg2UI_Game_AottgGameUiActions_o *pGVar3;
  Settings_UISettings_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  bool bVar6;
  System_String_o *path;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar7;
  
  if (Il2CppMethodInitialized_075487a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_075487a2 = '\x01';
  }
  pGVar7 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  path = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__GisketchThemePath((MethodInfo *)pGVar7);
  x = (UnityEngine_Object_o *)
      UnityEngine_Resources__Load_object_
                (path,(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_TextAsset);
  pGVar7 = (__this->fields)._root;
  if (pGVar7 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05e73c1e;
  pGVar1 = (pGVar7->fields)._State_k__BackingField;
  if ((__this->fields)._refreshPending == false) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pGVar7 = (__this->fields)._root;
    if (bVar6) {
      if (pGVar7 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05e73c1e;
      Gisketch_Aottg2UI_GisketchUIRoot__SetTheme(pGVar7,(UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    }
    else {
      if (pGVar7 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05e73c1e;
      if ((pGVar7->fields)._Manifest_k__BackingField ==
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
        Gisketch_Aottg2UI_GisketchUIRoot__Build(pGVar7,(MethodInfo *)0x0);
      }
    }
  }
  else {
    Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen
              (pGVar7,(UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
  }
  (__this->fields)._refreshPending = false;
  pGVar7 = (__this->fields)._root;
  if (pGVar7 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    if ((pGVar7->fields)._State_k__BackingField != pGVar1) {
      pGVar2 = (__this->fields)._tipPanel;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar6) {
        pGVar2 = (__this->fields)._tipPanel;
        if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) goto label_05e73c1e;
        Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(pGVar2,false,(MethodInfo *)0x0);
      }
      pGVar3 = (__this->fields)._actions;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar6) {
        pGVar3 = (__this->fields)._actions;
        if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) goto label_05e73c1e;
        Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(pGVar3,(MethodInfo *)0x0);
      }
    }
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if (pSVar4 == (Settings_UISettings_o *)0x0) {
      return;
    }
    pSVar5 = (pSVar4->fields).UIMasterScale;
    if ((pSVar5 != (Settings_FloatSetting_o *)0x0) &&
       (pGVar7 = (__this->fields)._root, pGVar7 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) {
      Gisketch_Aottg2UI_GisketchUIRoot__SetScale_521b170(pGVar7,(pSVar5->fields)._value,(MethodInfo *)0x0);
      return;
    }
  }
label_05e73c1e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$EnsureMainMenuControllers
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__EnsureMainMenuControllers (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* __this, const MethodInfo* method);
// 0x5e73870

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__EnsureMainMenuControllers
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o **targetAddress;
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *pGVar2;
  UnityEngine_GameObject_o *pUVar3;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *pGVar4;
  
  if (Il2CppMethodInitialized_075487a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgMainMenuPanelHoverSlide);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgMainMenuPanelHoverSlide);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgMainMenuTipPanelController);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_AottgMainMenuTipPanelController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075487a3 = '\x01';
  }
  pGVar2 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)
                      MethodInfo_UnityEngine_Component_GetComponent_AottgMainMenuPanelHoverSlide);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_05e73a26;
    pGVar2 = UnityEngine_GameObject__AddComponent_object_
                       (pUVar3,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_AottgMainMenuPanelHoverSlide);
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *)0x0) goto label_05e73a26;
    (pGVar2->fields)._root = (__this->fields)._root;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._root);
  }
  pGVar4 = (__this->fields)._tipPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    targetAddress = &(__this->fields)._tipPanel;
    pGVar4 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar3,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_AottgMainMenuTipPanelController)
    ;
    *targetAddress = pGVar4;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pGVar4 = *targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_05e73a26;
      pGVar4 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar3,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_AottgMainMenuTipPanelController
                         );
      *targetAddress = pGVar4;
      Il2CppCodeGenWriteBarrier(targetAddress);
    }
    if (*targetAddress != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__Setup
                (*targetAddress,(__this->fields)._root,(MethodInfo *)0x0);
      return;
    }
  }
label_05e73a26:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$SetVisible
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetVisible (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* __this, bool visible, const MethodInfo* method);
// 0x5e73da0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e73e7c: nop dword ptr [rax]

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetVisible
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this,bool visible,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Game_AottgGameUiActions_o *pGVar2;
  bool bVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_075487a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075487a4 = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05e73eb2;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pGVar1,visible,(MethodInfo *)0x0);
  }
  pGVar2 = (__this->fields)._actions;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar2 = (__this->fields)._actions;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) goto label_05e73eb2;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pGVar2,visible,(MethodInfo *)0x0);
  }
  pSVar5 = UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,true,
                      (MethodInfo_34B1260 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Canvas);
  if (pSVar5 != (System_Object_array *)0x0) {
    uVar4 = (uint)pSVar5->max_length;
    if (0 < (int)uVar4) {
      uVar6 = 0;
      do {
        if (uVar4 <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        if ((UnityEngine_Behaviour_o *)pSVar5->m_Items[(int)uVar6] == (UnityEngine_Behaviour_o *)0x0)
        goto label_05e73eb2;
        UnityEngine_Behaviour__set_enabled
                  ((UnityEngine_Behaviour_o *)pSVar5->m_Items[(int)uVar6],visible,(MethodInfo *)0x0);
        uVar6 = uVar6 + 1;
        uVar4 = (uint)pSVar5->max_length;
      } while ((int)uVar6 < (int)uVar4);
    }
    return;
  }
label_05e73eb2:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$SetCanvasSorting
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetCanvasSorting (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* __this, bool inGameOverlay, const MethodInfo* method);
// 0x5e73c30

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetCanvasSorting
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this,bool inGameOverlay,MethodInfo *method)

{
  UnityEngine_Canvas_o *__this_00;
  bool bVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this_01;
  System_String_o *a;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (Il2CppMethodInitialized_075487a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Canvas);
    Il2CppMethodInitialized_075487a5 = '\x01';
  }
  (__this->fields)._inGameOverlaySorting = inGameOverlay;
  pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,true,
                      (MethodInfo_34B1260 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Canvas);
  if (pSVar3 == (System_Object_array *)0x0) {
label_05e73d91:
    ThrowNullReferenceException();
  }
  uVar5 = 0;
  iVar4 = 5000;
  if (!inGameOverlay) {
    iVar4 = 0;
  }
  uVar2 = (uint)pSVar3->max_length;
  if (0 < (int)uVar2) {
    do {
      if (uVar2 <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (UnityEngine_Canvas_o *)pSVar3->m_Items[(int)uVar5];
      if (__this_00 == (UnityEngine_Canvas_o *)0x0) goto label_05e73d91;
      __this_01 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Object_o *)0x0) goto label_05e73d91;
      a = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_075487a6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Toasts");
        il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Overlays");
        Il2CppMethodInitialized_075487a6 = '\x01';
      }
      bVar1 = System_String__op_Equality(a,"AoTTG Overlays",(MethodInfo *)0x0);
      iVar6 = 900;
      if (!bVar1) {
        bVar1 = System_String__op_Equality(a,"AoTTG Toasts",(MethodInfo *)0x0);
        iVar6 = 1000;
        if (!bVar1) {
          iVar6 = 0;
        }
      }
      UnityEngine_Canvas__set_overrideSorting(__this_00,iVar6 != 0 || inGameOverlay,(MethodInfo *)0x0);
      UnityEngine_Canvas__set_sortingOrder(__this_00,iVar6 + iVar4,(MethodInfo *)0x0);
      uVar5 = uVar5 + 1;
      uVar2 = (uint)pSVar3->max_length;
    } while ((int)uVar5 < (int)uVar2);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$LayerSortingOrder
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgGisketchUiHost__LayerSortingOrder (System_String_o* layerName, const MethodInfo* method);
// 0x5e74a70

int32_t Gisketch_Aottg2UI_Game_AottgGisketchUiHost__LayerSortingOrder
                  (System_String_o *layerName,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_075487a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Toasts");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Overlays");
    Il2CppMethodInitialized_075487a6 = '\x01';
  }
  bVar1 = System_String__op_Equality(layerName,"AoTTG Overlays",(MethodInfo *)0x0);
  iVar2 = 900;
  if (!bVar1) {
    bVar1 = System_String__op_Equality(layerName,"AoTTG Toasts",(MethodInfo *)0x0);
    iVar2 = 1000;
    if (!bVar1) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$RefreshLanguageAndTheme
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshLanguageAndTheme (const MethodInfo* method);
// 0x5e74af0

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshLanguageAndTheme(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  bool bVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_075487a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075487a7 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
label_05e74c07:
      ThrowNullReferenceException();
    }
    pGVar2 = (pGVar1->fields)._root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_01 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
      if ((pGVar1 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) ||
         (pGVar2 = (pGVar1->fields)._root, pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0))
      goto label_05e74c07;
      if ((pGVar2->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0
         ) {
        (pGVar1->fields)._refreshPending = true;
        bVar3 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsVisible(pGVar1,method_01);
        if (bVar3) {
          pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
          if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyThemeAndScale(pGVar1,method_01);
            pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
            if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
              Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetCanvasSorting
                        (pGVar1,(pGVar1->fields)._inGameOverlaySorting,method_00);
              return;
            }
          }
          goto label_05e74c07;
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$GisketchThemePath
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__GisketchThemePath (const MethodInfo* method);
// 0x5e749c0

System_String_o * Gisketch_Aottg2UI_Game_AottgGisketchUiHost__GisketchThemePath(MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075487a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Light");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Themes/Aottg2Dark");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Themes/Aottg2Light");
    Il2CppMethodInitialized_075487a8 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (pSVar1 != (Settings_UISettings_o *)0x0) {
    pSVar2 = (pSVar1->fields).UITheme;
    if (pSVar2 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = System_String__op_Equality((pSVar2->fields)._value,"Light",(MethodInfo *)0x0);
    if (bVar3) {
      return "UI/Themes/Aottg2Light";
    }
  }
  return "UI/Themes/Aottg2Dark";
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost___ctor (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* __this, const MethodInfo* method);
// 0x5e74c10

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost___ctor
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this,MethodInfo *method)

{
  (__this->fields)._lastHiddenFrame = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


