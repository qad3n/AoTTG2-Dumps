// Type: UI.ItemHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ItemHandler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/ItemHandler.cs  [CHANGED since prior version]
// --------------------------------

// UI.ItemHandler.<UpdateForever>d__8$$.ctor
// il2cpp: void UI_ItemHandler__UpdateForever_d__8___ctor (UI_ItemHandler__UpdateForever_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40bbbe0

void UI_ItemHandler_<UpdateForever>d__8___ctor
               (UI_ItemHandler__UpdateForever_d__8_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.ItemHandler.<UpdateForever>d__8$$System.IDisposable.Dispose
// il2cpp: void UI_ItemHandler__UpdateForever_d__8__System_IDisposable_Dispose (UI_ItemHandler__UpdateForever_d__8_o* __this, const MethodInfo* method);
// 0x40bbfa0

void UI_ItemHandler_<UpdateForever>d__8__System_IDisposable_Dispose
               (UI_ItemHandler__UpdateForever_d__8_o *__this,MethodInfo *method)

{
  return;
}


// UI.ItemHandler.<UpdateForever>d__8$$MoveNext
// il2cpp: bool UI_ItemHandler__UpdateForever_d__8__MoveNext (UI_ItemHandler__UpdateForever_d__8_o* __this, const MethodInfo* method);
// 0x40bbfb0

bool_conflict
UI_ItemHandler_<UpdateForever>d__8__MoveNext
          (UI_ItemHandler__UpdateForever_d__8_o *__this,MethodInfo *method)

{
  float seconds;
  byte bVar1;
  int iVar2;
  UI_ItemHandler_o *__this_00;
  long lVar3;
  long *plVar4;
  UI_WheelPopup_o *__this_01;
  System_String_o *openKey;
  System_Collections_Generic_List_string__o *options;
  UnityEngine_Events_UnityAction_o *callback;
  UnityEngine_WaitForSeconds_o *__this_02;
  undefined8 uVar5;
  MethodInfo *method_00;
  
  if (DAT_05704686 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__UpdateForever_b__8_0);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    il2cpp_init_method_metadata(&TypeInfo_WheelPopup);
    DAT_05704686 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 != 1) {
    if (iVar2 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
LAB_040bc113:
    seconds = (__this->fields).delay;
    __this_02 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_02,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_02;
    uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_02);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (__this_00 != (UI_ItemHandler_o *)0x0) {
    if ((char)(__this_00->fields).IsActive == '\0') goto LAB_040bc113;
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x48), lVar3 != 0)) &&
       (plVar4 = *(long **)(lVar3 + 0x38), plVar4 != (long *)0x0)) {
      __this_01 = (UI_WheelPopup_o *)(__this_00->fields)._itemWheelPopup;
      lVar3 = *plVar4;
      method_00 = *(MethodInfo **)(lVar3 + 0x170);
      openKey = (System_String_o *)(**(code **)(lVar3 + 0x168))();
      options = UI_ItemHandler__GetItemWheelOptions(__this_00,method_00);
      callback = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_01 != (UI_WheelPopup_o *)0x0) {
        bVar1 = (TypeInfo_WheelPopup->_2).naturalAligment;
        if (((__this_01->klass->_2).naturalAligment < bVar1) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WheelPopup)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_01);
        }
        UI_WheelPopup__Show(__this_01,openKey,options,callback,(MethodInfo *)0x0);
        goto LAB_040bc113;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ItemHandler.<UpdateForever>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_ItemHandler__UpdateForever_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_ItemHandler__UpdateForever_d__8_o* __this, const MethodInfo* method);
// 0x40bc180

Il2CppObject *
UI_ItemHandler_<UpdateForever>d__8__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_ItemHandler__UpdateForever_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.ItemHandler.<UpdateForever>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_ItemHandler__UpdateForever_d__8__System_Collections_IEnumerator_Reset (UI_ItemHandler__UpdateForever_d__8_o* __this, const MethodInfo* method);
// 0x40bc190

void UI_ItemHandler_<UpdateForever>d__8__System_Collections_IEnumerator_Reset
               (UI_ItemHandler__UpdateForever_d__8_o *__this,MethodInfo *method)

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


// UI.ItemHandler.<UpdateForever>d__8$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_ItemHandler__UpdateForever_d__8__System_Collections_IEnumerator_get_Current (UI_ItemHandler__UpdateForever_d__8_o* __this, const MethodInfo* method);
// 0x40bc1d0

Il2CppObject *
UI_ItemHandler_<UpdateForever>d__8__System_Collections_IEnumerator_get_Current
          (UI_ItemHandler__UpdateForever_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.ItemHandler$$Awake
// il2cpp: void UI_ItemHandler__Awake (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x40bb4c0

void UI_ItemHandler__Awake(UI_ItemHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *pGVar2;
  Il2CppClass *pIVar3;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_00;
  UI_BasePopup_o *pUVar4;
  
  if (DAT_05704680 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAndSetupPanel_WheelPopup);
    il2cpp_init_method_metadata(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&"Prefabs/InGame/WheelMenu");
    DAT_05704680 = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  __this_00 = UI_ElementFactory__InstantiateAndSetupPanel<object>
                        (parent,"Prefabs/InGame/WheelMenu",0,MethodInfo_GameObject_InstantiateAndSetupPanel_WheelPopup);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = (UI_BasePopup_o *)UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_BasePopup_GetComponent_BasePopup);
    (__this->fields)._itemWheelPopup = pUVar4;
    il2cpp_runtime_glue(&(__this->fields)._itemWheelPopup,pUVar4);
    pIVar3 = TypeInfo_InGameManager;
    pGVar2 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
      (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
      il2cpp_runtime_glue(&(__this->fields)._inGameManager);
      return;
    }
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar1 <= (pGVar2->klass->_2).naturalAligment) &&
       ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      (__this->fields)._inGameManager = pGVar2;
      if ((bVar1 <= (pGVar2->klass->_2).naturalAligment) &&
         ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) {
        il2cpp_runtime_glue(&(__this->fields)._inGameManager);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pGVar2,pIVar3);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ItemHandler$$Start
// il2cpp: void UI_ItemHandler__Start (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x40bb600

void UI_ItemHandler__Start(UI_ItemHandler_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704682 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UpdateForever_d__8);
    DAT_05704682 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_UpdateForever_d__8);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    *(undefined4 *)&__this_00[2].klass = 0x3f800000;
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ItemHandler$$ToggleItemWheel
// il2cpp: void UI_ItemHandler__ToggleItemWheel (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x40bb700

void UI_ItemHandler__ToggleItemWheel(UI_ItemHandler_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_ItemHandler__SetItemWheel(__this,(uint)((char)(__this->fields).IsActive == '\0'),in_RDX);
  return;
}


// UI.ItemHandler$$SetItemWheel
// il2cpp: void UI_ItemHandler__SetItemWheel (UI_ItemHandler_o* __this, bool enable, const MethodInfo* method);
// 0x40ba510

void UI_ItemHandler__SetItemWheel(UI_ItemHandler_o *__this,bool_conflict enable,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  UI_WheelPopup_o *__this_00;
  UI_BasePopup_o *pUVar4;
  undefined1 uVar5;
  bool_conflict bVar6;
  System_String_o *openKey;
  System_Collections_Generic_List_string__o *options;
  UnityEngine_Events_UnityAction_o *callback;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  Il2CppClass **method_01;
  
  method_01 = (Il2CppClass **)__this;
  if (DAT_05704681 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__SetItemWheel_b__7_0);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    method_01 = &TypeInfo_WheelPopup;
    il2cpp_init_method_metadata();
    DAT_05704681 = '\x01';
    method = extraout_RDX;
  }
  if ((char)enable == '\0') {
    pUVar4 = (__this->fields)._itemWheelPopup;
    if (pUVar4 != (UI_BasePopup_o *)0x0) {
      (*(pUVar4->klass->vtable)._22_Hide.methodPtr)
                (pUVar4,(pUVar4->klass->vtable)._22_Hide.method,method);
      uVar5 = 0;
LAB_040ba65b:
      *(undefined1 *)&(__this->fields).IsActive = uVar5;
      return;
    }
  }
  else {
    bVar6 = UI_InGameMenu__InMenu((MethodInfo *)method_01);
    if ((char)bVar6 != '\0') {
      return;
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x48), lVar2 != 0)) &&
       (plVar3 = *(long **)(lVar2 + 0x38), plVar3 != (long *)0x0)) {
      __this_00 = (UI_WheelPopup_o *)(__this->fields)._itemWheelPopup;
      lVar2 = *plVar3;
      method_00 = *(MethodInfo **)(lVar2 + 0x170);
      openKey = (System_String_o *)(**(code **)(lVar2 + 0x168))();
      options = UI_ItemHandler__GetItemWheelOptions(__this,method_00);
      callback = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_00 != (UI_WheelPopup_o *)0x0) {
        bVar1 = (TypeInfo_WheelPopup->_2).naturalAligment;
        if (((__this_00->klass->_2).naturalAligment < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WheelPopup)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_00);
        }
        UI_WheelPopup__Show(__this_00,openKey,options,callback,(MethodInfo *)0x0);
        uVar5 = 1;
        goto LAB_040ba65b;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ItemHandler$$UpdateForever
// il2cpp: System_Collections_IEnumerator_o* UI_ItemHandler__UpdateForever (UI_ItemHandler_o* __this, float delay, const MethodInfo* method);
// 0x40bb680

System_Collections_IEnumerator_o *
UI_ItemHandler__UpdateForever(UI_ItemHandler_o *__this,float delay,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704682 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UpdateForever_d__8);
    DAT_05704682 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_UpdateForever_d__8);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    *(float *)&__this_00[2].klass = delay;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ItemHandler$$OnItemWheelSelect
// il2cpp: void UI_ItemHandler__OnItemWheelSelect (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x40bbc00

void UI_ItemHandler__OnItemWheelSelect(UI_ItemHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  GameManagers_InGameManager_o *pGVar3;
  UI_BasePopup_o *pUVar4;
  Characters_BaseCharacter_o *x;
  long lVar5;
  long *plVar6;
  bool_conflict bVar7;
  
  if (DAT_05704683 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_WheelPopup);
    DAT_05704683 = '\x01';
  }
  pGVar3 = (__this->fields)._inGameManager;
  if ((pGVar3 != (GameManagers_InGameManager_o *)0x0) &&
     (pUVar4 = (__this->fields)._itemWheelPopup, pUVar4 != (UI_BasePopup_o *)0x0)) {
    bVar1 = (TypeInfo_WheelPopup->_2).naturalAligment;
    if (((pUVar4->klass->_2).naturalAligment < bVar1) ||
       ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WheelPopup)) {
LAB_040bbd88:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    x = (pGVar3->fields).CurrentCharacter;
    uVar2 = (uint)pUVar4[1].fields.m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      if ((x == (Characters_BaseCharacter_o *)0x0) ||
         (lVar5 = *(long *)&(x->fields).CurrentHealth, lVar5 == 0)) goto LAB_040bbd83;
      if ((int)uVar2 < *(int *)(lVar5 + 0x18)) {
        (*(x->klass->vtable)._75_UseItem.methodPtr)
                  (x,(ulong)uVar2,(x->klass->vtable)._75_UseItem.method);
      }
    }
    pUVar4 = (__this->fields)._itemWheelPopup;
    if (pUVar4 != (UI_BasePopup_o *)0x0) {
      (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
      *(undefined1 *)&(__this->fields).IsActive = 0;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      plVar6 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (plVar6 != (long *)0x0) {
        if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) ==
            TypeInfo_InGameMenu)) {
          *(undefined1 *)(plVar6 + 0x2e) = 1;
          return;
        }
        goto LAB_040bbd88;
      }
    }
  }
LAB_040bbd83:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ItemHandler$$GetItemWheelOptions
// il2cpp: System_Collections_Generic_List_string__o* UI_ItemHandler__GetItemWheelOptions (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x40bb710

System_Collections_Generic_List_string__o *
UI_ItemHandler__GetItemWheelOptions(UI_ItemHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  GameManagers_InGameManager_o *pGVar3;
  Characters_BaseCharacter_o *x;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_array *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  long lVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_string__o *__this_04;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  float fVar9;
  undefined1 in_stack_ffffffffffffff88 [12];
  int iVar10;
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_05704684 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseUseable_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Characters_BaseUseable__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&")");
    il2cpp_init_method_metadata(&" (");
    DAT_05704684 = '\x01';
  }
  iVar10 = 0;
  pGVar3 = (__this->fields)._inGameManager;
  if (pGVar3 == (GameManagers_InGameManager_o *)0x0) {
LAB_040bb9e9:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  x = (pGVar3->fields).CurrentCharacter;
  __this_04 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if ((x == (Characters_BaseCharacter_o *)0x0) ||
       (__this_00 = *(System_Collections_Generic_List_object__o **)&(x->fields).CurrentHealth,
       __this_00 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_040bb9e9;
    System_Collections_Generic_List<object>__GetEnumerator(&local_48,__this_00,MethodInfo_List_1_T__Enumerator_Characters_BaseUseable__Get);
    if (__this_04 == (System_Collections_Generic_List_string__o *)0x0) {
      __this_02.fields._version = iVar10;
      __this_02.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
      __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_02.fields._current = (Il2CppObject *)local_48.fields._list;
      bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar6 != '\0') {
        if ((Characters_BaseUseable_o *)local_48.fields._current != (Characters_BaseUseable_o *)0x0)
        {
          pSVar8 = ((Characters_BaseUseable_Fields *)((long)local_48.fields._current + 0x10))->Name;
          if (((Characters_BaseUseable_Fields *)((long)local_48.fields._current + 0x10))->MaxUses ==
              -1) {
            fVar9 = Characters_BaseUseable__GetCooldownLeft
                              ((Characters_BaseUseable_o *)local_48.fields._current,
                               (MethodInfo *)0x0);
            if (0.0 < fVar9) {
              Characters_BaseUseable__GetCooldownLeft
                        ((Characters_BaseUseable_o *)local_48.fields._current,(MethodInfo *)0x0);
              pSVar7 = System_Int32__ToString((int32_t)&stack0xffffffffffffff94,(MethodInfo *)0x0);
              System_String__Concat(pSVar8," (",pSVar7,")",(MethodInfo *)0x0);
            }
          }
          else {
            pSVar7 = System_Int32__ToString((int)local_48.fields._current + 0x14,(MethodInfo *)0x0);
            System_String__Concat(pSVar8," (",pSVar7,")",(MethodInfo *)0x0);
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_040bb9f8:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
      while (__this_01.fields._version = iVar10,
            __this_01.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_,
            __this_01.fields._index = in_stack_ffffffffffffff88._8_4_,
            __this_01.fields._current = (Il2CppObject *)pSVar11,
            bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
            local_48.fields._list = (System_Collections_Generic_List_T__o *)pSVar11,
            (char)bVar6 != '\0') {
        if ((Characters_BaseUseable_o *)local_48.fields._current == (Characters_BaseUseable_o *)0x0)
        goto LAB_040bb9f8;
        pSVar8 = ((Characters_BaseUseable_Fields *)((long)local_48.fields._current + 0x10))->Name;
        if (((Characters_BaseUseable_Fields *)((long)local_48.fields._current + 0x10))->MaxUses ==
            -1) {
          fVar9 = Characters_BaseUseable__GetCooldownLeft
                            ((Characters_BaseUseable_o *)local_48.fields._current,(MethodInfo *)0x0)
          ;
          if (0.0 < fVar9) {
            fVar9 = Characters_BaseUseable__GetCooldownLeft
                              ((Characters_BaseUseable_o *)local_48.fields._current,
                               (MethodInfo *)0x0);
            iVar10 = (int)fVar9;
            pSVar7 = System_Int32__ToString((int32_t)&stack0xffffffffffffff94,(MethodInfo *)0x0);
            pSVar8 = System_String__Concat
                               (pSVar8," (",pSVar7,")",(MethodInfo *)0x0);
          }
        }
        else {
          pSVar7 = System_Int32__ToString((int)local_48.fields._current + 0x14,(MethodInfo *)0x0);
          pSVar8 = System_String__Concat(pSVar8," (",pSVar7,")",(MethodInfo *)0x0);
        }
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this_04->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_04->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (__this_04->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_04->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = pSVar8;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pSVar8);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)pSVar8,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_03.fields._version = iVar10;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_
    ;
    __this_03.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_03.fields._current = (Il2CppObject *)local_48.fields._list;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
  }
  return __this_04;
}


// UI.ItemHandler$$.ctor
// il2cpp: void UI_ItemHandler___ctor (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x40bbd90

void UI_ItemHandler___ctor(UI_ItemHandler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ItemHandler$$.cctor
// il2cpp: void UI_ItemHandler___cctor (const MethodInfo* method);
// 0x40bbda0

void UI_ItemHandler___cctor(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  Il2CppObject *pIVar5;
  System_Collections_Generic_List_object__o *__this;
  
  if (DAT_05704685 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ItemHandler);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"Flare1");
    il2cpp_init_method_metadata(&"Flare2");
    il2cpp_init_method_metadata(&"Flare3");
    DAT_05704685 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_System_String);
  pIVar5 = "Flare1";
  lVar4 = MethodInfo_Void_Add;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pIVar5;
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this,pIVar5,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      pIVar5 = "Flare2";
      lVar4 = MethodInfo_Void_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar5;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,pIVar5,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        pIVar5 = "Flare3";
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pIVar5;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this,pIVar5,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          **(undefined8 **)(TypeInfo_ItemHandler + 0xb8) = __this;
          il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_ItemHandler + 0xb8),__this);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ItemHandler$$<SetItemWheel>b__7_0
// il2cpp: void UI_ItemHandler___SetItemWheel_b__7_0 (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x40bbf80

void UI_ItemHandler__<SetItemWheel>b__7_0(UI_ItemHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  GameManagers_InGameManager_o *pGVar3;
  UI_BasePopup_o *pUVar4;
  Characters_BaseCharacter_o *x;
  long lVar5;
  long *plVar6;
  bool_conflict bVar7;
  
  if (DAT_05704683 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_WheelPopup);
    DAT_05704683 = '\x01';
  }
  pGVar3 = (__this->fields)._inGameManager;
  if ((pGVar3 != (GameManagers_InGameManager_o *)0x0) &&
     (pUVar4 = (__this->fields)._itemWheelPopup, pUVar4 != (UI_BasePopup_o *)0x0)) {
    bVar1 = (TypeInfo_WheelPopup->_2).naturalAligment;
    if (((pUVar4->klass->_2).naturalAligment < bVar1) ||
       ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WheelPopup)) {
LAB_040bbd88:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    x = (pGVar3->fields).CurrentCharacter;
    uVar2 = (uint)pUVar4[1].fields.m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      if ((x == (Characters_BaseCharacter_o *)0x0) ||
         (lVar5 = *(long *)&(x->fields).CurrentHealth, lVar5 == 0)) goto LAB_040bbd83;
      if ((int)uVar2 < *(int *)(lVar5 + 0x18)) {
        (*(x->klass->vtable)._75_UseItem.methodPtr)
                  (x,(ulong)uVar2,(x->klass->vtable)._75_UseItem.method);
      }
    }
    pUVar4 = (__this->fields)._itemWheelPopup;
    if (pUVar4 != (UI_BasePopup_o *)0x0) {
      (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
      *(undefined1 *)&(__this->fields).IsActive = 0;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      plVar6 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (plVar6 != (long *)0x0) {
        if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) ==
            TypeInfo_InGameMenu)) {
          *(undefined1 *)(plVar6 + 0x2e) = 1;
          return;
        }
        goto LAB_040bbd88;
      }
    }
  }
LAB_040bbd83:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ItemHandler$$<UpdateForever>b__8_0
// il2cpp: void UI_ItemHandler___UpdateForever_b__8_0 (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x40bbf90

void UI_ItemHandler__<UpdateForever>b__8_0(UI_ItemHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  GameManagers_InGameManager_o *pGVar3;
  UI_BasePopup_o *pUVar4;
  Characters_BaseCharacter_o *x;
  long lVar5;
  long *plVar6;
  bool_conflict bVar7;
  
  if (DAT_05704683 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_WheelPopup);
    DAT_05704683 = '\x01';
  }
  pGVar3 = (__this->fields)._inGameManager;
  if ((pGVar3 != (GameManagers_InGameManager_o *)0x0) &&
     (pUVar4 = (__this->fields)._itemWheelPopup, pUVar4 != (UI_BasePopup_o *)0x0)) {
    bVar1 = (TypeInfo_WheelPopup->_2).naturalAligment;
    if (((pUVar4->klass->_2).naturalAligment < bVar1) ||
       ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WheelPopup)) {
LAB_040bbd88:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    x = (pGVar3->fields).CurrentCharacter;
    uVar2 = (uint)pUVar4[1].fields.m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      if ((x == (Characters_BaseCharacter_o *)0x0) ||
         (lVar5 = *(long *)&(x->fields).CurrentHealth, lVar5 == 0)) goto LAB_040bbd83;
      if ((int)uVar2 < *(int *)(lVar5 + 0x18)) {
        (*(x->klass->vtable)._75_UseItem.methodPtr)
                  (x,(ulong)uVar2,(x->klass->vtable)._75_UseItem.method);
      }
    }
    pUVar4 = (__this->fields)._itemWheelPopup;
    if (pUVar4 != (UI_BasePopup_o *)0x0) {
      (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
      *(undefined1 *)&(__this->fields).IsActive = 0;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      plVar6 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (plVar6 != (long *)0x0) {
        if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) ==
            TypeInfo_InGameMenu)) {
          *(undefined1 *)(plVar6 + 0x2e) = 1;
          return;
        }
        goto LAB_040bbd88;
      }
    }
  }
LAB_040bbd83:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


