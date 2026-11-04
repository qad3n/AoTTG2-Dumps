// Type: Gisketch.Aottg2UI.Game.AottgGisketchUiHost
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGisketchUiHost.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.LegacyPopupSorting$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost_LegacyPopupSorting__OnEnable (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_LegacyPopupSorting_o* __this, const MethodInfo* method);
// 0x1823b9330

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost_LegacyPopupSorting__OnEnable
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_LegacyPopupSorting_o *__this,MethodInfo *method)

{
  UnityEngine_Canvas_o *__this_00;
  
  if (Il2CppMethodInitialized_184347c7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    Il2CppMethodInitialized_184347c7d = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
  if (__this_00 != (UnityEngine_Canvas_o *)0x0) {
    UnityEngine_Canvas__set_overrideSorting(__this_00,true,(MethodInfo *)0x0);
    UnityEngine_Canvas__set_sortingOrder(__this_00,0x1771,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.LegacyPopupSorting$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost_LegacyPopupSorting___ctor (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_LegacyPopupSorting_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgGisketchUiHost_LegacyPopupSorting___ctor(Gisketch_Aottg2UI_Game_AottgGisketchUiHost_LegacyPopupSorting_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<>c__DisplayClass29_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass29_0___ctor (Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass29_0___ctor(Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass29_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<>c__DisplayClass29_0$$<HideInGameOverlay>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass29_0___HideInGameOverlay_b__0 (Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x1823bcfb0

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass29_0___HideInGameOverlay_b__0
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass29_0_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar1;
  
  pGVar1 = (__this->fields).host;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetVisible(pGVar1,false,(MethodInfo *)0x0);
    pGVar1 = (__this->fields).host;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
      (pGVar1->fields)._inGameOverlayClosing = false;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__28$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28___ctor (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28___ctor(Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__28$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28__System_IDisposable_Dispose(Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__28$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28__MoveNext (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28_o* __this, const MethodInfo* method);
// 0x1823b9550

bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28__MoveNext
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347c7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_184347c7e = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  pGVar2 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) goto label_1823b9659;
    pGVar3 = (pGVar2->fields)._root;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    bVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(pGVar3,(MethodInfo *)0x0);
    if (!bVar4) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
      (__this->fields).__1__state = 2;
      return true;
    }
  }
  else if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
      pGVar3 = (pGVar2->fields)._root;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(pGVar3,(MethodInfo *)0x0);
      return false;
    }
label_1823b9659:
    ThrowNullReferenceException();
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__28$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28_o* __this, const MethodInfo* method);
// 0x1823b9660

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28_o *__this,
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
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_RefreshGameCreateAfterActivation_d__28_System_Collect
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__28$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$get_Root
// il2cpp: Gisketch_Aottg2UI_GisketchUIRoot_o* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root (const MethodInfo* method);
// 0x1823b15c0

Gisketch_Aottg2UI_GisketchUIRoot_o * Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347c6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu");
    Il2CppMethodInitialized_184347c6a = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Ensure("main-menu",(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
    return (pGVar1->fields)._root;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$get_IsInGameOverlayActive
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsInGameOverlayActive (const MethodInfo* method);
// 0x1823b1110

bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsInGameOverlayActive(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  bool bVar3;
  UnityEngine_Canvas_o *x;
  
  if (Il2CppMethodInitialized_184347c6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184347c6b = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar3) && (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 2)) {
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
label_1823b1280:
      ThrowNullReferenceException();
    }
    if ((pGVar1->fields)._inGameOverlayClosing == false) {
      if (Il2CppMethodInitialized_184347c6e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_Component_GetComponentInChildren_Canvas_40a8798);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184347c6e = '\x01';
      }
      pGVar2 = (pGVar1->fields)._root;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pGVar2 = (pGVar1->fields)._root;
        if (pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_1823b1280;
        x = UnityEngine_Component__GetComponentInChildren_object_
                      ((UnityEngine_Component_o *)pGVar2,true,
                       (MethodInfo_664AA0 *)
                       MethodInfo_UnityEngine_Component_GetComponentInChildren_Canvas_40a8798);
      }
      else {
        x = (UnityEngine_Canvas_o *)0x0;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (x != (UnityEngine_Canvas_o *)0x0) {
          bVar3 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)x,(MethodInfo *)0x0);
          return bVar3;
        }
        goto label_1823b1280;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$get_IsPauseScreenActive
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsPauseScreenActive (const MethodInfo* method);
// 0x1823b1290

bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsPauseScreenActive(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  bool bVar3;
  UnityEngine_Canvas_o *x;
  
  if (Il2CppMethodInitialized_184347c6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"pause");
    Il2CppMethodInitialized_184347c6c = '\x01';
  }
  if (Il2CppMethodInitialized_184347c6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184347c6b = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar3) && (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 2)) {
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) goto label_1823b14dd;
    if ((pGVar1->fields)._inGameOverlayClosing == false) {
      if (Il2CppMethodInitialized_184347c6e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_Component_GetComponentInChildren_Canvas_40a8798);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184347c6e = '\x01';
      }
      pGVar2 = (pGVar1->fields)._root;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pGVar2 = (pGVar1->fields)._root;
        if (pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_1823b14dd;
        x = UnityEngine_Component__GetComponentInChildren_object_
                      ((UnityEngine_Component_o *)pGVar2,true,
                       (MethodInfo_664AA0 *)
                       MethodInfo_UnityEngine_Component_GetComponentInChildren_Canvas_40a8798);
      }
      else {
        x = (UnityEngine_Canvas_o *)0x0;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (x == (UnityEngine_Canvas_o *)0x0) {
label_1823b14dd:
          ThrowNullReferenceException();
        }
        bVar3 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)x,(MethodInfo *)0x0);
        if (bVar3) {
          pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
          if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) goto label_1823b14dd;
          pGVar2 = (pGVar1->fields)._root;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
            if ((pGVar1 == (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) ||
               (pGVar2 = (pGVar1->fields)._root, pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0))
            goto label_1823b14dd;
            if ((pGVar2->fields)._Screens_k__BackingField !=
                (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
              bVar3 = System_String__op_Equality
                                ((((((TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->
                                      _instance->fields)._root)->fields)._Screens_k__BackingField)->fields).
                                 _activeId,"pause",(MethodInfo *)0x0);
              return bVar3;
            }
          }
        }
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$get_ClosedInGameOverlayThisFrame
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_ClosedInGameOverlayThisFrame (const MethodInfo* method);
// 0x1823b1070

bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_ClosedInGameOverlayThisFrame(MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar2;
  bool bVar3;
  int32_t iVar4;
  
  if (Il2CppMethodInitialized_184347c6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347c6d = '\x01';
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return false;
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
    iVar1 = (pGVar2->fields)._lastHiddenFrame;
    iVar4 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    return iVar1 == iVar4;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$get_IsVisible
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsVisible (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* __this, const MethodInfo* method);
// 0x1823b14f0

bool Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsVisible
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  bool bVar2;
  UnityEngine_Canvas_o *x;
  
  if (Il2CppMethodInitialized_184347c6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_Canvas_40a8798);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347c6e = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_1823b15b7;
    x = UnityEngine_Component__GetComponentInChildren_object_
                  ((UnityEngine_Component_o *)pGVar1,true,
                   (MethodInfo_664AA0 *)MethodInfo_UnityEngine_Component_GetComponentInChildren_Canvas_40a8798
                  );
  }
  else {
    x = (UnityEngine_Canvas_o *)0x0;
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
label_1823b15b7:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$AboveOverlay<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_ (Il2CppObject* popup, const MethodInfo_68B9A0* method);
// 0x18068b9a0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_
          (Il2CppObject *popup,MethodInfo_68B9A0 *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Il2CppObject *local_res8 [2];
  Il2CppObject *local_res18 [2];
  
  if (Il2CppMethodInitialized_18433df6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_TryGetComponent_AottgGisketchUiHost_LegacyPopupSorting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGisketchUiHost_LegacyPopupSorting);
    Il2CppMethodInitialized_18433df6e = '\x01';
  }
  local_res8[0] = (Il2CppObject *)0x0;
  local_res18[0] = (Il2CppObject *)0x0;
  if (popup == (Il2CppObject *)0x0) goto label_18068ba9d;
  bVar1 = UnityEngine_Component__TryGetComponent_object_
                    ((UnityEngine_Component_o *)popup,local_res8,
                     (MethodInfo_6657C0 *)
                     MethodInfo_UnityEngine_Component_TryGetComponent_AottgGisketchUiHost_LegacyPopupSorting);
  if (!bVar1) {
    bVar1 = UnityEngine_Component__TryGetComponent_object_
                      ((UnityEngine_Component_o *)popup,local_res18,
                       (MethodInfo_6657C0 *)MethodInfo_UnityEngine_Component_TryGetComponent_Canvas);
    if (!bVar1) {
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_18068ba9d;
      UnityEngine_GameObject__AddComponent_object_
                (pUVar2,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_18068ba9d;
      UnityEngine_GameObject__AddComponent_object_
                (pUVar2,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    }
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
label_18068ba9d:
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__AddComponent_object_
              (pUVar2,(MethodInfo_6F4D60 *)
                      MethodInfo_UnityEngine_GameObject_AddComponent_AottgGisketchUiHost_LegacyPopupSorting);
  }
  return popup;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ShowMainMenu
// il2cpp: Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowMainMenu (const MethodInfo* method);
// 0x1823b0ee0

Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowMainMenu(MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this_00;
  
  if (Il2CppMethodInitialized_184347c6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu");
    Il2CppMethodInitialized_184347c6f = '\x01';
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Ensure("main-menu",(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyThemeAndScale(__this_00,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetCanvasSorting(__this_00,false,(MethodInfo *)0x0);
    pGVar1 = (__this_00->fields)._root;
    if (pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (pGVar1->fields)._Screens_k__BackingField;
      if (__this != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
                  (__this,"main-menu",(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetVisible(__this_00,true,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgGisketchUiHost__EnsureMainMenuControllers(__this_00,(MethodInfo *)0x0);
      return (__this_00->fields)._tipPanel;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$PrepareForScene
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__PrepareForScene (int32_t sceneName, const MethodInfo* method);
// 0x1823b0900

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__PrepareForScene(int32_t sceneName,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184347c70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347c70 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar3) || (sceneName == 1)) {
    return;
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
    (pGVar1->fields)._inGameOverlayClosing = false;
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
      pGVar2 = (pGVar1->fields)._root;
      if ((pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
         (__this = (pGVar2->fields)._Screens_k__BackingField,
         __this != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DeactivateActive
                  (__this,false,(System_Action_o *)0x0,(MethodInfo *)0x0);
      }
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetVisible(pGVar1,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ShowPause
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowPause (const MethodInfo* method);
// 0x1823b0f80

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowPause(MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this;
  int32_t iVar3;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this_00;
  
  if (Il2CppMethodInitialized_184347c71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    il2cpp_codegen_initialize_runtime_metadata(&"pause");
    Il2CppMethodInitialized_184347c71 = '\x01';
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Ensure("pause",(MethodInfo *)0x0);
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
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyThemeAndScale(__this_00,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetCanvasSorting(__this_00,true,(MethodInfo *)0x0);
    pGVar2 = (__this_00->fields)._root;
    if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (pGVar2->fields)._Screens_k__BackingField;
      if (__this != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
                  (__this,"pause",(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetVisible(__this_00,true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ShowGameCreate
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowGameCreate (bool multiplayer, bool restart, const MethodInfo* method);
// 0x1823b0d10

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowGameCreate
               (bool multiplayer,bool restart,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28_o *routine;
  int32_t launchContext;
  
  if (Il2CppMethodInitialized_184347c72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create");
    Il2CppMethodInitialized_184347c72 = '\x01';
  }
  if (multiplayer) {
    bVar2 = true;
    if (restart) {
      launchContext = 2;
    }
    else {
      launchContext = 1;
    }
  }
  else if (restart) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar2 = Photon_Pun_PhotonNetwork__get_InRoom((MethodInfo *)0x0);
    launchContext = 2;
  }
  else {
    launchContext = 0;
    bVar2 = false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__Begin(launchContext,bVar2,(MethodInfo *)0x0);
  __this_00 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Ensure("game-create",(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
    (__this_00->fields)._inGameOverlayClosing = false;
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyThemeAndScale(__this_00,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetCanvasSorting(__this_00,restart,(MethodInfo *)0x0);
    pGVar1 = (__this_00->fields)._root;
    if (pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (pGVar1->fields)._Screens_k__BackingField;
      if (__this != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
                  (__this,"game-create",(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetVisible(__this_00,true,(MethodInfo *)0x0);
      pGVar1 = (__this_00->fields)._root;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(pGVar1,(MethodInfo *)0x0);
      if (!bVar2) {
        if (Il2CppMethodInitialized_184347c73 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_RefreshGameCreateAfterActivation_d__28
                    );
          Il2CppMethodInitialized_184347c73 = '\x01';
        }
        routine = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_RefreshGameCreateAfterActivation_d__28
                            );
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
        (routine->fields).__1__state = 0;
        (routine->fields).__4__this = __this_00;
        Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this_00);
        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                  ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)routine,
                   (MethodInfo *)0x0);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$RefreshGameCreateAfterActivation
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* __this, const MethodInfo* method);
// 0x1823b0a00

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation
          (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshGameCreateAfterActivation_d__28_o *__this_00;
  
  if (Il2CppMethodInitialized_184347c73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_RefreshGameCreateAfterActivation_d__28);
    Il2CppMethodInitialized_184347c73 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_RefreshGameCreateAfterActivation_d__28
                        );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$HideInGameOverlay
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__HideInGameOverlay (bool returnToGameplay, const MethodInfo* method);
// 0x1823b04e0

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
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass29_0_o *object;
  System_Action_o *__this_00;
  
  if (Il2CppMethodInitialized_184347c74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_c__DisplayClass29_0_HideInGameOverlay_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_c__DisplayClass29_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184347c74 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_c__DisplayClass29_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  if (object != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost___c__DisplayClass29_0_o *)0x0) {
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
    (object->fields).host = pGVar2;
    Il2CppCodeGenWriteBarrier(&(object->fields).host,pGVar2);
    pGVar2 = (object->fields).host;
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
      (pGVar2->fields)._inGameOverlayClosing = true;
      pGVar2 = (object->fields).host;
      iVar7 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
        (pGVar2->fields)._lastHiddenFrame = iVar7;
        if (returnToGameplay) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (pUVar3 != (UI_BaseMenu_o *)0x0) {
            pUVar4 = pUVar3->klass;
            bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
            if ((bVar1 <= (pUVar4->_2).typeHierarchyDepth) &&
               ((pUVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
              if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
              }
              UI_CursorManager__SetHidden(true,(MethodInfo *)0x0);
            }
          }
        }
        pGVar2 = (object->fields).host;
        if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
          pGVar5 = (pGVar2->fields)._root;
          if ((pGVar5 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
             ((pGVar5->fields)._Screens_k__BackingField ==
              (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) {
            Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetVisible(pGVar2,false,(MethodInfo *)0x0);
            pGVar2 = (object->fields).host;
            if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
              (pGVar2->fields)._inGameOverlayClosing = false;
              return;
            }
          }
          else if (pGVar5 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
            __this = (pGVar5->fields)._Screens_k__BackingField;
            __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
            System_Action___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_c__DisplayClass29_0_HideInGameOverlay_b__0
                       ,(MethodInfo *)0x0);
            if (__this != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
              Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DeactivateActive
                        (__this,true,__this_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$Ensure
// il2cpp: Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Ensure (System_String_o* initialScreenId, const MethodInfo* method);
// 0x1823b0190

Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *
Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Ensure(System_String_o *initialScreenId,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *target;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar2;
  UnityEngine_GameObject_o *pUVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar4;
  Gisketch_Aottg2UI_Game_AottgGameUiActions_o *value;
  Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_o *__this;
  
  if (Il2CppMethodInitialized_184347c75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGisketchUiHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Gisketch UI");
    Il2CppMethodInitialized_184347c75 = '\x01';
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    target = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject)
    ;
    UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)target,"AoTTG Gisketch UI",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
    if (target != (UnityEngine_Object_o *)0x0) {
      pGVar2 = UnityEngine_GameObject__AddComponent_object_
                         ((UnityEngine_GameObject_o *)target,
                          (MethodInfo_6F4D60 *)
                          MethodInfo_UnityEngine_GameObject_AddComponent_AottgGisketchUiHost);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance = pGVar2;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance,pGVar2);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
      if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) {
        if (Il2CppMethodInitialized_184347c76 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateFileWatcher);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameUiActions);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIRoot);
          il2cpp_codegen_initialize_runtime_metadata(&"main-menu");
          Il2CppMethodInitialized_184347c76 = '\x01';
        }
        pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar2,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          pGVar4 = UnityEngine_GameObject__AddComponent_object_
                             (pUVar3,(MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIRoot);
          (pGVar2->fields)._root = pGVar4;
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._root,pGVar4);
          pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar2,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            value = UnityEngine_GameObject__AddComponent_object_
                              (pUVar3,(MethodInfo_6F4D60 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameUiActions);
            (pGVar2->fields)._actions = value;
            Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._actions,value);
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pGVar2,(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
              __this = UnityEngine_GameObject__AddComponent_object_
                                 (pUVar3,(MethodInfo_6F4D60 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateFileWatcher
                                 );
              if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_o *)0x0) {
                Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher__Setup
                          (__this,(pGVar2->fields)._root,(MethodInfo *)0x0);
                pGVar4 = (pGVar2->fields)._root;
                bVar1 = System_String__IsNullOrEmpty(initialScreenId,(MethodInfo *)0x0);
                if (bVar1) {
                  initialScreenId = "main-menu";
                }
                if (pGVar4 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                  Gisketch_Aottg2UI_GisketchUIRoot__SetSelectedScreen
                            (pGVar4,initialScreenId,(MethodInfo *)0x0);
                  pGVar4 = (pGVar2->fields)._root;
                  if (pGVar4 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                    Gisketch_Aottg2UI_GisketchUIRoot__SetActionHandler
                              (pGVar4,(UnityEngine_MonoBehaviour_o *)(pGVar2->fields)._actions,
                               (MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyThemeAndScale(pGVar2,(MethodInfo *)0x0);
                    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
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
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost->static_fields->_instance;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$Initialize
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Initialize (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* __this, System_String_o* initialScreenId, const MethodInfo* method);
// 0x1823b0730

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Initialize
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this,System_String_o *initialScreenId,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar3;
  Gisketch_Aottg2UI_Game_AottgGameUiActions_o *value;
  Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_o *__this_00;
  
  if (Il2CppMethodInitialized_184347c76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateFileWatcher);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameUiActions);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIRoot)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu");
    Il2CppMethodInitialized_184347c76 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pGVar3 = UnityEngine_GameObject__AddComponent_object_
                       (pUVar2,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIRoot);
    (__this->fields)._root = pGVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._root,pGVar3);
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      value = UnityEngine_GameObject__AddComponent_object_
                        (pUVar2,(MethodInfo_6F4D60 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameUiActions);
      (__this->fields)._actions = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._actions,value);
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__AddComponent_object_
                              (pUVar2,(MethodInfo_6F4D60 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateFileWatcher
                              );
        if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_o *)0x0) {
          Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher__Setup
                    (__this_00,(__this->fields)._root,(MethodInfo *)0x0);
          pGVar3 = (__this->fields)._root;
          bVar1 = System_String__IsNullOrEmpty(initialScreenId,(MethodInfo *)0x0);
          if (bVar1) {
            initialScreenId = "main-menu";
          }
          if (pGVar3 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
            Gisketch_Aottg2UI_GisketchUIRoot__SetSelectedScreen(pGVar3,initialScreenId,(MethodInfo *)0x0);
            pGVar3 = (__this->fields)._root;
            if (pGVar3 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
              Gisketch_Aottg2UI_GisketchUIRoot__SetActionHandler
                        (pGVar3,(UnityEngine_MonoBehaviour_o *)(__this->fields)._actions,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyThemeAndScale(__this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ApplyThemeAndScale
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyThemeAndScale (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* __this, const MethodInfo* method);
// 0x1823afe20

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyThemeAndScale
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  bool bVar4;
  UnityEngine_Object_o *x;
  System_String_o *path;
  
  if (Il2CppMethodInitialized_184347c77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_184347c77 = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  if (Il2CppMethodInitialized_184347c7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Light");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Themes/Aottg2Dark");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Themes/Aottg2Light");
    Il2CppMethodInitialized_184347c7c = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->UISettings == (Settings_UISettings_o *)0x0) {
label_1823aff2a:
    path = "UI/Themes/Aottg2Dark";
  }
  else {
    pSVar2 = (TypeInfo_Settings_SettingsManager->static_fields->UISettings->fields).UITheme;
    if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_1823affd0;
    bVar4 = System_String__op_Equality((pSVar2->fields)._value,"Light",(MethodInfo *)0x0);
    path = "UI/Themes/Aottg2Light";
    if (!bVar4) goto label_1823aff2a;
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Resources__Load_object_
                (path,(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_TextAsset);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pGVar1 = (__this->fields)._root;
  if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
label_1823affd0:
    ThrowNullReferenceException();
  }
  if (bVar4) {
    Gisketch_Aottg2UI_GisketchUIRoot__SetTheme(pGVar1,(UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
  }
  else if ((pGVar1->fields)._Manifest_k__BackingField ==
           (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    Gisketch_Aottg2UI_GisketchUIRoot__Build(pGVar1,(MethodInfo *)0x0);
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->UISettings != (Settings_UISettings_o *)0x0) {
    pSVar3 = (TypeInfo_Settings_SettingsManager->static_fields->UISettings->fields).UIMasterScale;
    if ((pSVar3 == (Settings_FloatSetting_o *)0x0) ||
       (pGVar1 = (__this->fields)._root, pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0))
    goto label_1823affd0;
    Gisketch_Aottg2UI_GisketchUIRoot__SetScale_189adb0(pGVar1,(pSVar3->fields)._value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$EnsureMainMenuControllers
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__EnsureMainMenuControllers (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* __this, const MethodInfo* method);
// 0x1823affe0

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__EnsureMainMenuControllers
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *value;
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *pGVar2;
  UnityEngine_GameObject_o *pUVar3;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *pGVar4;
  
  if (Il2CppMethodInitialized_184347c78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgMainMenuPanelHoverSlide);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgMainMenuPanelHoverSlide);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgMainMenuTipPanelController);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_AottgMainMenuTipPanelController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347c78 = '\x01';
  }
  pGVar2 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)
                      MethodInfo_UnityEngine_Component_GetComponent_AottgMainMenuPanelHoverSlide);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
       (pGVar2 = UnityEngine_GameObject__AddComponent_object_
                           (pUVar3,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_AottgMainMenuPanelHoverSlide
                           ), pGVar2 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *)0x0))
    goto label_1823b0185;
    value = (__this->fields)._root;
    (pGVar2->fields)._root = value;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._root,value);
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
    pGVar4 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar3,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_AottgMainMenuTipPanelController)
    ;
    (__this->fields)._tipPanel = pGVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._tipPanel,pGVar4);
    pGVar4 = (__this->fields)._tipPanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_1823b0185;
      pGVar4 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar3,(MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_AottgMainMenuTipPanelController
                         );
      (__this->fields)._tipPanel = pGVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._tipPanel,pGVar4);
    }
    pGVar4 = (__this->fields)._tipPanel;
    if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__Setup
                (pGVar4,(__this->fields)._root,(MethodInfo *)0x0);
      return;
    }
  }
label_1823b0185:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$SetVisible
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetVisible (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* __this, bool visible, const MethodInfo* method);
// 0x1823b0be0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823b0cbc: nop dword ptr [rax]

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetVisible
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this,bool visible,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Game_AottgGameUiActions_o *pGVar2;
  bool bVar3;
  System_Object_array *pSVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184347c79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347c79 = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_1823b0cff;
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
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) goto label_1823b0cff;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pGVar2,visible,(MethodInfo *)0x0);
  }
  pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,true,
                      (MethodInfo_665440 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Canvas);
  if (pSVar4 != (System_Object_array *)0x0) {
    uVar5 = 0;
    while( true ) {
      if ((int)pSVar4->max_length <= (int)uVar5) {
        return;
      }
      if ((uint)pSVar4->max_length <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      if ((UnityEngine_Behaviour_o *)pSVar4->m_Items[(int)uVar5] == (UnityEngine_Behaviour_o *)0x0) break;
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)pSVar4->m_Items[(int)uVar5],visible,(MethodInfo *)0x0);
      uVar5 = uVar5 + 1;
    }
  }
label_1823b0cff:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$SetCanvasSorting
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetCanvasSorting (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* __this, bool inGameOverlay, const MethodInfo* method);
// 0x1823b0a70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823b0ace: nop 

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost__SetCanvasSorting
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this,bool inGameOverlay,MethodInfo *method)

{
  UnityEngine_Canvas_o *__this_00;
  bool bVar1;
  System_Object_array *pSVar2;
  UnityEngine_Object_o *__this_01;
  System_String_o *a;
  uint uVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184347c7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Canvas);
    Il2CppMethodInitialized_184347c7a = '\x01';
  }
  pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,true,
                      (MethodInfo_665440 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Canvas);
  if (pSVar2 != (System_Object_array *)0x0) {
    uVar4 = 0;
    while( true ) {
      if ((int)pSVar2->max_length <= (int)uVar4) {
        return;
      }
      if ((uint)pSVar2->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (UnityEngine_Canvas_o *)pSVar2->m_Items[(int)uVar4];
      if ((__this_00 == (UnityEngine_Canvas_o *)0x0) ||
         (__this_01 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_Object_o *)0x0)) break;
      a = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184347c7b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Toasts");
        il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Overlays");
        Il2CppMethodInitialized_184347c7b = '\x01';
      }
      bVar1 = System_String__op_Equality(a,"AoTTG Overlays",(MethodInfo *)0x0);
      if (bVar1) {
        uVar3 = 900;
      }
      else {
        bVar1 = System_String__op_Equality(a,"AoTTG Toasts",(MethodInfo *)0x0);
        uVar3 = -(uint)bVar1 & 1000;
      }
      UnityEngine_Canvas__set_overrideSorting(__this_00,inGameOverlay || uVar3 != 0,(MethodInfo *)0x0);
      UnityEngine_Canvas__set_sortingOrder(__this_00,(-(uint)inGameOverlay & 5000) + uVar3,(MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$LayerSortingOrder
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgGisketchUiHost__LayerSortingOrder (System_String_o* layerName, const MethodInfo* method);
// 0x1823b0880

int32_t Gisketch_Aottg2UI_Game_AottgGisketchUiHost__LayerSortingOrder
                  (System_String_o *layerName,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347c7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Toasts");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Overlays");
    Il2CppMethodInitialized_184347c7b = '\x01';
  }
  bVar1 = System_String__op_Equality(layerName,"AoTTG Overlays",(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality(layerName,"AoTTG Toasts",(MethodInfo *)0x0);
    return -(uint)bVar1 & 1000;
  }
  return 900;
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$GisketchThemePath
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGisketchUiHost__GisketchThemePath (const MethodInfo* method);
// 0x1823b0430

System_String_o * Gisketch_Aottg2UI_Game_AottgGisketchUiHost__GisketchThemePath(MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347c7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Light");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Themes/Aottg2Dark");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Themes/Aottg2Light");
    Il2CppMethodInitialized_184347c7c = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->UISettings != (Settings_UISettings_o *)0x0) {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->UISettings->fields).UITheme;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = System_String__op_Equality((pSVar1->fields)._value,"Light",(MethodInfo *)0x0);
    if (bVar2) {
      return "UI/Themes/Aottg2Light";
    }
  }
  return "UI/Themes/Aottg2Dark";
}


// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGisketchUiHost___ctor (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o* __this, const MethodInfo* method);
// 0x1823b1060

void Gisketch_Aottg2UI_Game_AottgGisketchUiHost___ctor
               (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *__this,MethodInfo *method)

{
  (__this->fields)._lastHiddenFrame = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


