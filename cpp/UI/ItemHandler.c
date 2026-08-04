// Type: UI.ItemHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ItemHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ItemHandler.cs
// --------------------------------

// UI.ItemHandler.<UpdateForever>d__8$$.ctor
// il2cpp: void UI_ItemHandler__UpdateForever_d__8___ctor (UI_ItemHandler__UpdateForever_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x43cde00

void UI_ItemHandler__UpdateForever_d__8___ctor
               (UI_ItemHandler__UpdateForever_d__8_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.ItemHandler.<UpdateForever>d__8$$System.IDisposable.Dispose
// il2cpp: void UI_ItemHandler__UpdateForever_d__8__System_IDisposable_Dispose (UI_ItemHandler__UpdateForever_d__8_o* __this, const MethodInfo* method);
// 0x43ce1c0

void UI_ItemHandler__UpdateForever_d__8__System_IDisposable_Dispose
               (UI_ItemHandler__UpdateForever_d__8_o *__this,MethodInfo *method)

{
  return;
}


// UI.ItemHandler.<UpdateForever>d__8$$MoveNext
// il2cpp: bool UI_ItemHandler__UpdateForever_d__8__MoveNext (UI_ItemHandler__UpdateForever_d__8_o* __this, const MethodInfo* method);
// 0x43ce1d0

bool_conflict
UI_ItemHandler__UpdateForever_d__8__MoveNext(UI_ItemHandler__UpdateForever_d__8_o *__this,MethodInfo *method)

{
  float seconds;
  byte bVar1;
  int iVar2;
  UI_ItemHandler_o *__this_00;
  long lVar3;
  long *plVar4;
  System_String_o *openKey;
  System_Collections_Generic_List_string__o *options;
  UnityEngine_Events_UnityAction_o *callback;
  UnityEngine_WaitForSeconds_o *__this_01;
  undefined8 uVar5;
  MethodInfo *method_00;
  UI_WheelPopup_o *unaff_R14;
  
  if (g_data_057ae417 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateForever_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSeconds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WheelPopup);
    g_data_057ae417 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 != 1) {
    if (iVar2 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
label_043ce333:
    seconds = (__this->fields).delay;
    __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    uVar5 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (__this_00 != (UI_ItemHandler_o *)0x0) {
    if ((char)(__this_00->fields).IsActive == '\0') goto label_043ce333;
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x48), lVar3 != 0)) &&
       (plVar4 = *(long **)(lVar3 + 0x38), plVar4 != (long *)0x0)) {
      unaff_R14 = (UI_WheelPopup_o *)(__this_00->fields)._itemWheelPopup;
      lVar3 = *plVar4;
      method_00 = *(MethodInfo **)(lVar3 + 0x170);
      openKey = (System_String_o *)(**(code **)(lVar3 + 0x168))();
      options = UI_ItemHandler__GetItemWheelOptions(__this_00,method_00);
      callback = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (unaff_R14 != (UI_WheelPopup_o *)0x0) {
        bVar1 = (TypeInfo_WheelPopup->_2).naturalAligment;
        if ((bVar1 <= (unaff_R14->klass->_2).naturalAligment) &&
           ((unaff_R14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_WheelPopup)) {
          UI_WheelPopup__Show(unaff_R14,openKey,options,callback,(MethodInfo *)0x0);
          goto label_043ce333;
        }
        goto label_043ce391;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043ce391:
  il2cpp_runtime_helper_022b2fd0();
  return (bool_conflict)(unaff_R14->fields).m_CancellationTokenSource;
}


// UI.ItemHandler.<UpdateForever>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_ItemHandler__UpdateForever_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_ItemHandler__UpdateForever_d__8_o* __this, const MethodInfo* method);
// 0x43ce3a0

Il2CppObject *
UI_ItemHandler__UpdateForever_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_ItemHandler__UpdateForever_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.ItemHandler.<UpdateForever>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_ItemHandler__UpdateForever_d__8__System_Collections_IEnumerator_Reset (UI_ItemHandler__UpdateForever_d__8_o* __this, const MethodInfo* method);
// 0x43ce3b0

void UI_ItemHandler__UpdateForever_d__8__System_Collections_IEnumerator_Reset
               (UI_ItemHandler__UpdateForever_d__8_o *__this,MethodInfo *method)

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


// UI.ItemHandler.<UpdateForever>d__8$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_ItemHandler__UpdateForever_d__8__System_Collections_IEnumerator_get_Current (UI_ItemHandler__UpdateForever_d__8_o* __this, const MethodInfo* method);
// 0x43ce3f0

Il2CppObject *
UI_ItemHandler__UpdateForever_d__8__System_Collections_IEnumerator_get_Current
          (UI_ItemHandler__UpdateForever_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.ItemHandler$$Awake
// il2cpp: void UI_ItemHandler__Awake (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x43cd570

void UI_ItemHandler__Awake(UI_ItemHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  GameManagers_InGameManager_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UI_BasePopup_o *pUVar3;
  Il2CppObject *__this_02;
  UI_ItemHandler_o *__this_03;
  MethodInfo *method_00;
  Il2CppObject *pIVar4;
  UI_ItemHandler_o *__this_04;
  undefined4 uVar5;
  
  if (g_data_057ae411 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_WheelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/WheelMenu");
    g_data_057ae411 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                        ((UnityEngine_Transform_o *)__this_00,"Prefabs/InGame/WheelMenu",0,MethodInfo_GameObject_InstantiateAndSetupPanel_WheelPopup);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = (UI_BasePopup_o *)UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_BasePopup_GetComponent_BasePopup);
    (__this->fields)._itemWheelPopup = pUVar3;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._itemWheelPopup,pUVar3);
    pIVar2 = TypeInfo_InGameManager;
    __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
      (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._inGameManager);
      return;
    }
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      (__this->fields)._inGameManager = __this_00;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar2)) {
        il2cpp_runtime_helper_022b4080(&(__this->fields)._inGameManager);
        return;
      }
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae413 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UpdateForever_d__8);
    g_data_057ae413 = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_UpdateForever_d__8);
  pIVar4 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].monitor = __this_00;
    il2cpp_runtime_helper_022b4080(&__this_02[2].monitor,__this_00);
    *(undefined4 *)&__this_02[2].klass = 0x3f800000;
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)__this_02,
               (MethodInfo *)0x0);
    return;
  }
  uVar5 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae413 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UpdateForever_d__8);
    g_data_057ae413 = '\x01';
  }
  __this_03 = (UI_ItemHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UpdateForever_d__8);
  __this_04 = __this_03;
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_03->fields).m_CachedPtr = 0;
  if (__this_03 != (UI_ItemHandler_o *)0x0) {
    *(Il2CppObject **)&(__this_03->fields).IsActive = pIVar4;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).IsActive,pIVar4);
    *(undefined4 *)&(__this_03->fields)._itemWheelPopup = uVar5;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UI_ItemHandler__SetItemWheel(__this_04,(uint)((char)(__this_04->fields).IsActive == '\0'),method_00);
  return;
}


// UI.ItemHandler$$Start
// il2cpp: void UI_ItemHandler__Start (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x43cd6b0

void UI_ItemHandler__Start(UI_ItemHandler_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  UI_ItemHandler_o *__this_01;
  MethodInfo *method_00;
  Il2CppObject *pIVar1;
  UI_ItemHandler_o *__this_02;
  undefined4 uVar2;
  
  if (g_data_057ae413 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UpdateForever_d__8);
    g_data_057ae413 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_UpdateForever_d__8);
  pIVar1 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,__this);
    *(undefined4 *)&__this_00[2].klass = 0x3f800000;
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae413 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UpdateForever_d__8);
    g_data_057ae413 = '\x01';
  }
  __this_01 = (UI_ItemHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UpdateForever_d__8);
  __this_02 = __this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_01->fields).m_CachedPtr = 0;
  if (__this_01 != (UI_ItemHandler_o *)0x0) {
    *(Il2CppObject **)&(__this_01->fields).IsActive = pIVar1;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).IsActive,pIVar1);
    *(undefined4 *)&(__this_01->fields)._itemWheelPopup = uVar2;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UI_ItemHandler__SetItemWheel(__this_02,(uint)((char)(__this_02->fields).IsActive == '\0'),method_00);
  return;
}


// UI.ItemHandler$$ToggleItemWheel
// il2cpp: void UI_ItemHandler__ToggleItemWheel (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x43cd7b0

void UI_ItemHandler__ToggleItemWheel(UI_ItemHandler_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_ItemHandler__SetItemWheel(__this,(uint)((char)(__this->fields).IsActive == '\0'),in_RDX);
  return;
}


// UI.ItemHandler$$SetItemWheel
// il2cpp: void UI_ItemHandler__SetItemWheel (UI_ItemHandler_o* __this, bool enable, const MethodInfo* method);
// 0x43cd7c0

void UI_ItemHandler__SetItemWheel(UI_ItemHandler_o *__this,bool_conflict enable,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  UI_BasePopup_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Object_o *x;
  System_Object_array *pSVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined1 uVar8;
  bool_conflict bVar9;
  System_Collections_Generic_List_object__o *__this_05;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  long *plVar12;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UI_WheelPopup_o *pUVar13;
  _union_249689 unaff_R12;
  UnityEngine_Events_UnityAction_o *unaff_R13;
  UI_WheelPopup_o *unaff_R14;
  System_String_o *unaff_R15;
  float fVar14;
  undefined1 auVar15 [12];
  undefined1 in_stack_ffffffffffffff50 [12];
  int iVar16;
  System_Collections_Generic_List_Enumerator_T__c *pSVar17;
  Characters_BaseUseable_o *pCStack_90;
  System_Collections_Generic_List_Enumerator_T__o SStack_80;
  Il2CppRGCTXData *pIStack_68;
  _union_249689 _Stack_60;
  UnityEngine_Events_UnityAction_o *pUStack_58;
  UI_WheelPopup_o *pUStack_50;
  System_String_o *pSStack_48;
  ulong uStack_40;
  
  if (g_data_057ae412 == '\0') {
    uStack_40 = 0x43cd7e5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetItemWheel_b__7_0);
    uStack_40 = 0x43cd7f1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    uStack_40 = 0x43cd7fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    uStack_40 = 0x43cd809;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae412 = '\x01';
    method = extraout_RDX;
  }
  if ((char)enable == '\0') {
    pUVar5 = (__this->fields)._itemWheelPopup;
    if (pUVar5 != (UI_BasePopup_o *)0x0) {
      uStack_40 = 0x43cd90b;
      (*(pUVar5->klass->vtable)._22_Hide.methodPtr)(pUVar5,(pUVar5->klass->vtable)._22_Hide.method,method);
      uVar8 = 0;
label_043cd90d:
      *(undefined1 *)&(__this->fields).IsActive = uVar8;
      return;
    }
label_043cd91f:
    uStack_40 = 0x43cd924;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uStack_40 = 0x43cd820;
    bVar9 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x48), lVar4 == 0)) ||
       (plVar12 = *(long **)(lVar4 + 0x38), plVar12 == (long *)0x0)) goto label_043cd91f;
    unaff_R14 = (UI_WheelPopup_o *)(__this->fields)._itemWheelPopup;
    lVar4 = *plVar12;
    method_00 = *(MethodInfo **)(lVar4 + 0x170);
    uStack_40 = 0x43cd874;
    unaff_R15 = (System_String_o *)(**(code **)(lVar4 + 0x168))();
    uStack_40 = 0x43cd87f;
    unaff_R12.genericMethod = UI_ItemHandler__GetItemWheelOptions(__this,method_00);
    uStack_40 = 0x43cd891;
    unaff_R13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    uStack_40 = 0x43cd8ab;
    UnityEngine_Events_UnityAction___ctor();
    if (unaff_R14 == (UI_WheelPopup_o *)0x0) goto label_043cd91f;
    bVar2 = (TypeInfo_WheelPopup->_2).naturalAligment;
    if ((bVar2 <= (unaff_R14->klass->_2).naturalAligment) &&
       ((unaff_R14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_WheelPopup)) {
      uStack_40 = 0x43cd8ee;
      UI_WheelPopup__Show(unaff_R14,unaff_R15,unaff_R12.genericMethod,unaff_R13,(MethodInfo *)0x0);
      uVar8 = 1;
      goto label_043cd90d;
    }
  }
  uStack_40 = 0x43cd92c;
  pUVar13 = unaff_R14;
  il2cpp_runtime_helper_022b2fd0();
  pIStack_68 = (Il2CppRGCTXData *)__this;
  _Stack_60 = unaff_R12;
  pUStack_58 = unaff_R13;
  pUStack_50 = unaff_R14;
  pSStack_48 = unaff_R15;
  uStack_40 = (ulong)(uint)enable;
  if (g_data_057ae415 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseUseable_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_BaseUseable_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&" (");
    g_data_057ae415 = '\x01';
  }
  pSVar17 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pCStack_90 = (Characters_BaseUseable_o *)0x0;
  iVar16 = 0;
  pUVar6 = (pUVar13->fields).DoublePanelRight;
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    x = (UnityEngine_Object_o *)pUVar6[4].fields.m_CachedPtr;
    __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_System_String);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    if ((x != (UnityEngine_Object_o *)0x0) && (x[6].klass != (UnityEngine_Object_c *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_80,(System_Collections_Generic_List_object__o *)x[6].klass,MethodInfo_List_1_T_Enumerator_Characters_BaseUseable_GetEnumerator);
      pCStack_90 = (Characters_BaseUseable_o *)SStack_80.fields._current;
      if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
        pSVar17 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_80.fields._list;
        while (__this_00.fields._version = iVar16,
              __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50._0_8_
              , __this_00.fields._index = in_stack_ffffffffffffff50._8_4_,
              __this_00.fields._current = (Il2CppObject *)pSVar17,
              bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60),
              SStack_80.fields._list = (System_Collections_Generic_List_T__o *)pSVar17, (char)bVar9 != '\0') {
          if ((Characters_BaseUseable_o *)SStack_80.fields._current == (Characters_BaseUseable_o *)0x0)
          goto label_043cdc18;
          pSVar11 = ((Characters_BaseUseable_Fields *)((long)SStack_80.fields._current + 0x10))->Name;
          if (((Characters_BaseUseable_Fields *)((long)SStack_80.fields._current + 0x10))->MaxUses == -1) {
            fVar14 = Characters_BaseUseable__GetCooldownLeft
                               ((Characters_BaseUseable_o *)SStack_80.fields._current,(MethodInfo *)0x0);
            if (0.0 < fVar14) {
              fVar14 = Characters_BaseUseable__GetCooldownLeft
                                 ((Characters_BaseUseable_o *)SStack_80.fields._current,(MethodInfo *)0x0);
              iVar16 = (int)fVar14;
              pSVar10 = System_Int32__ToString((int32_t)&stack0xffffffffffffff5c,(MethodInfo *)0x0);
              pSVar11 = System_String__Concat_3af7470
                                  (pSVar11," (",pSVar10,")",(MethodInfo *)0x0);
            }
          }
          else {
            pSVar10 = System_Int32__ToString((int)SStack_80.fields._current + 0x14,(MethodInfo *)0x0);
            pSVar11 = System_String__Concat_3af7470
                                (pSVar11," (",pSVar10,")",(MethodInfo *)0x0);
          }
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(__this_05->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (__this_05->fields)._items;
          if (pSVar7 == (System_Object_array *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_043cdc09;
          }
          uVar3 = (__this_05->fields)._size;
          if (uVar3 < (uint)pSVar7->max_length) {
            (__this_05->fields)._size = uVar3 + 1;
            pSVar7->m_Items[(int)uVar3] = (Il2CppObject *)pSVar11;
            il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar3,pSVar11);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_05,(Il2CppObject *)pSVar11,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
        }
label_043cdbde:
        __this_02.fields._version = iVar16;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50._0_8_;
        __this_02.fields._index = in_stack_ffffffffffffff50._8_4_;
        __this_02.fields._current = (Il2CppObject *)SStack_80.fields._list;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
        return;
      }
      __this_01.fields._version = iVar16;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50._0_8_;
      __this_01.fields._index = in_stack_ffffffffffffff50._8_4_;
      __this_01.fields._current = (Il2CppObject *)SStack_80.fields._list;
      bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60);
      pSVar17 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_80.fields._list;
      if ((char)bVar9 == '\0') goto label_043cdbde;
      goto label_043cdc0e;
    }
  }
label_043cdc09:
  il2cpp_runtime_helper_022b2c90();
label_043cdc0e:
  if (pCStack_90 == (Characters_BaseUseable_o *)0x0) {
label_043cdc18:
    il2cpp_runtime_helper_022b2c90();
  }
  pSVar11 = (pCStack_90->fields).Name;
  if ((pCStack_90->fields).MaxUses == -1) {
    fVar14 = Characters_BaseUseable__GetCooldownLeft(pCStack_90,(MethodInfo *)0x0);
    if (0.0 < fVar14) {
      fVar14 = Characters_BaseUseable__GetCooldownLeft(pCStack_90,(MethodInfo *)0x0);
      iVar16 = (int)fVar14;
      pSVar10 = System_Int32__ToString((int32_t)&stack0xffffffffffffff5c,(MethodInfo *)0x0);
      System_String__Concat_3af7470(pSVar11," (",pSVar10,")",(MethodInfo *)0x0);
    }
  }
  else {
    pSVar10 = System_Int32__ToString((int)pCStack_90 + 0x14,(MethodInfo *)0x0);
    System_String__Concat_3af7470(pSVar11," (",pSVar10,")",(MethodInfo *)0x0);
  }
  auVar15 = il2cpp_runtime_helper_022b2c90();
  if (auVar15._8_4_ == 1) {
    plVar12 = (long *)__cxa_begin_catch(auVar15._0_8_);
    lVar4 = *plVar12;
    __cxa_end_catch();
    __this_03.fields._version = iVar16;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff50._8_4_;
    __this_03.fields._current = (Il2CppObject *)pSVar17;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
    if (lVar4 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_04.fields._version = iVar16;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffff50._8_4_;
  __this_04.fields._current = (Il2CppObject *)pSVar17;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
  _Unwind_Resume(auVar15._0_8_);
}


// UI.ItemHandler$$UpdateForever
// il2cpp: System_Collections_IEnumerator_o* UI_ItemHandler__UpdateForever (UI_ItemHandler_o* __this, float delay, const MethodInfo* method);
// 0x43cd730

System_Collections_IEnumerator_o *
UI_ItemHandler__UpdateForever(UI_ItemHandler_o *__this,float delay,MethodInfo *method)

{
  UI_ItemHandler_o *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  MethodInfo *method_00;
  UI_ItemHandler_o *__this_01;
  
  if (g_data_057ae413 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UpdateForever_d__8);
    g_data_057ae413 = '\x01';
  }
  __this_00 = (UI_ItemHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UpdateForever_d__8);
  __this_01 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields).m_CachedPtr = 0;
  if (__this_00 != (UI_ItemHandler_o *)0x0) {
    *(UI_ItemHandler_o **)&(__this_00->fields).IsActive = __this;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).IsActive,__this);
    *(float *)&(__this_00->fields)._itemWheelPopup = delay;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  UI_ItemHandler__SetItemWheel(__this_01,(uint)((char)(__this_01->fields).IsActive == '\0'),method_00);
  return extraout_RAX;
}


// UI.ItemHandler$$OnItemWheelSelect
// il2cpp: void UI_ItemHandler__OnItemWheelSelect (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x43cde20

void UI_ItemHandler__OnItemWheelSelect(UI_ItemHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  GameManagers_InGameManager_o *pGVar3;
  Characters_BaseCharacter_o *x;
  long lVar4;
  UI_BasePopup_o *pUVar5;
  bool_conflict bVar6;
  Il2CppClass **__this_00;
  
  __this_00 = (Il2CppClass **)__this;
  if (g_data_057ae414 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    __this_00 = &TypeInfo_WheelPopup;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae414 = '\x01';
  }
  pGVar3 = (__this->fields)._inGameManager;
  if ((pGVar3 != (GameManagers_InGameManager_o *)0x0) &&
     (__this_00 = (Il2CppClass **)(__this->fields)._itemWheelPopup,
     (Characters_BaseCharacter_o *)__this_00 != (Characters_BaseCharacter_o *)0x0)) {
    bVar1 = (TypeInfo_WheelPopup->_2).naturalAligment;
    if (((((Characters_BaseCharacter_o *)__this_00)->klass->_2).naturalAligment < bVar1) ||
       ((((Characters_BaseCharacter_o *)__this_00)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WheelPopup
       )) goto label_043cdfa8;
    x = (pGVar3->fields).CurrentCharacter;
    uVar2 = *(uint *)&(((Characters_BaseCharacter_o *)__this_00)->fields).MovementSync;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = (Il2CppClass **)x;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if ((x == (Characters_BaseCharacter_o *)0x0) ||
         (lVar4 = *(long *)&(x->fields).CurrentHealth, lVar4 == 0)) goto label_043cdfa3;
      if ((int)uVar2 < *(int *)(lVar4 + 0x18)) {
        (*(x->klass->vtable)._75_UseItem.methodPtr)(x,(ulong)uVar2,(x->klass->vtable)._75_UseItem.method);
      }
    }
    pUVar5 = (__this->fields)._itemWheelPopup;
    __this_00 = (Il2CppClass **)0x0;
    if (pUVar5 != (UI_BasePopup_o *)0x0) {
      (*(pUVar5->klass->vtable)._22_Hide.methodPtr)();
      *(undefined1 *)&(__this->fields).IsActive = 0;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = *(Il2CppClass ***)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((Characters_BaseCharacter_o *)__this_00 != (Characters_BaseCharacter_o *)0x0) {
        bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
        if ((bVar1 <= (((Characters_BaseCharacter_o *)__this_00)->klass->_2).naturalAligment) &&
           ((((Characters_BaseCharacter_o *)__this_00)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            TypeInfo_InGameMenu)) {
          *(undefined1 *)&(((Characters_BaseCharacter_o *)((long)__this_00 + 0x108))->fields).Dead = 1;
          return;
        }
        goto label_043cdfa8;
      }
    }
  }
label_043cdfa3:
  il2cpp_runtime_helper_022b2c90();
label_043cdfa8:
  il2cpp_runtime_helper_022b2fd0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.ItemHandler$$GetItemWheelOptions
// il2cpp: System_Collections_Generic_List_string__o* UI_ItemHandler__GetItemWheelOptions (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x43cd930

System_Collections_Generic_List_string__o *
UI_ItemHandler__GetItemWheelOptions(UI_ItemHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  GameManagers_InGameManager_o *pGVar3;
  Characters_BaseCharacter_o *x;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_array *pSVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  long *plVar9;
  System_Collections_Generic_List_string__o *unaff_R12;
  float fVar10;
  undefined1 auVar11 [12];
  undefined1 in_stack_ffffffffffffff88 [12];
  int iVar12;
  System_Collections_Generic_List_Enumerator_T__c *pSVar13;
  Characters_BaseUseable_o *local_58;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (g_data_057ae415 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseUseable_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_BaseUseable_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&" (");
    g_data_057ae415 = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  local_58 = (Characters_BaseUseable_o *)0x0;
  iVar12 = 0;
  pGVar3 = (__this->fields)._inGameManager;
  if (pGVar3 != (GameManagers_InGameManager_o *)0x0) {
    x = (pGVar3->fields).CurrentCharacter;
    unaff_R12 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_System_String);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return unaff_R12;
    }
    if ((x != (Characters_BaseCharacter_o *)0x0) &&
       (__this_00 = *(System_Collections_Generic_List_object__o **)&(x->fields).CurrentHealth,
       __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator(&local_48,__this_00,MethodInfo_List_1_T_Enumerator_Characters_BaseUseable_GetEnumerator);
      local_58 = (Characters_BaseUseable_o *)local_48.fields._current;
      if (unaff_R12 != (System_Collections_Generic_List_string__o *)0x0) {
        pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
        while (__this_01.fields._version = iVar12,
              __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_
              , __this_01.fields._index = in_stack_ffffffffffffff88._8_4_,
              __this_01.fields._current = (Il2CppObject *)pSVar13,
              bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
              local_48.fields._list = (System_Collections_Generic_List_T__o *)pSVar13, (char)bVar6 != '\0') {
          if ((Characters_BaseUseable_o *)local_48.fields._current == (Characters_BaseUseable_o *)0x0)
          goto label_043cdc18;
          pSVar8 = ((Characters_BaseUseable_Fields *)((long)local_48.fields._current + 0x10))->Name;
          if (((Characters_BaseUseable_Fields *)((long)local_48.fields._current + 0x10))->MaxUses == -1) {
            fVar10 = Characters_BaseUseable__GetCooldownLeft
                               ((Characters_BaseUseable_o *)local_48.fields._current,(MethodInfo *)0x0);
            if (0.0 < fVar10) {
              fVar10 = Characters_BaseUseable__GetCooldownLeft
                                 ((Characters_BaseUseable_o *)local_48.fields._current,(MethodInfo *)0x0);
              iVar12 = (int)fVar10;
              pSVar7 = System_Int32__ToString((int32_t)&stack0xffffffffffffff94,(MethodInfo *)0x0);
              pSVar8 = System_String__Concat_3af7470
                                 (pSVar8," (",pSVar7,")",(MethodInfo *)0x0);
            }
          }
          else {
            pSVar7 = System_Int32__ToString((int)local_48.fields._current + 0x14,(MethodInfo *)0x0);
            pSVar8 = System_String__Concat_3af7470(pSVar8," (",pSVar7,")",(MethodInfo *)0x0);
          }
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(unaff_R12->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (unaff_R12->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_043cdc09;
          }
          uVar2 = (unaff_R12->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (unaff_R12->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = pSVar8;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar8);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)unaff_R12,(Il2CppObject *)pSVar8,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
label_043cdbde:
        __this_03.fields._version = iVar12;
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
        __this_03.fields._index = in_stack_ffffffffffffff88._8_4_;
        __this_03.fields._current = (Il2CppObject *)local_48.fields._list;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        return unaff_R12;
      }
      __this_02.fields._version = iVar12;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
      __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_02.fields._current = (Il2CppObject *)local_48.fields._list;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
      if ((char)bVar6 == '\0') goto label_043cdbde;
      goto label_043cdc0e;
    }
  }
label_043cdc09:
  il2cpp_runtime_helper_022b2c90();
label_043cdc0e:
  if (local_58 == (Characters_BaseUseable_o *)0x0) {
label_043cdc18:
    il2cpp_runtime_helper_022b2c90();
  }
  pSVar8 = (local_58->fields).Name;
  if ((local_58->fields).MaxUses == -1) {
    fVar10 = Characters_BaseUseable__GetCooldownLeft(local_58,(MethodInfo *)0x0);
    if (0.0 < fVar10) {
      fVar10 = Characters_BaseUseable__GetCooldownLeft(local_58,(MethodInfo *)0x0);
      iVar12 = (int)fVar10;
      pSVar7 = System_Int32__ToString((int32_t)&stack0xffffffffffffff94,(MethodInfo *)0x0);
      System_String__Concat_3af7470(pSVar8," (",pSVar7,")",(MethodInfo *)0x0);
    }
  }
  else {
    pSVar7 = System_Int32__ToString((int)local_58 + 0x14,(MethodInfo *)0x0);
    System_String__Concat_3af7470(pSVar8," (",pSVar7,")",(MethodInfo *)0x0);
  }
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar5 = *plVar9;
    __cxa_end_catch();
    __this_04.fields._version = iVar12;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
    __this_04.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_04.fields._current = (Il2CppObject *)pSVar13;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar5 == 0) {
      return unaff_R12;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_05.fields._version = iVar12;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
  __this_05.fields._index = in_stack_ffffffffffffff88._8_4_;
  __this_05.fields._current = (Il2CppObject *)pSVar13;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar11._0_8_);
}


// UI.ItemHandler$$.ctor
// il2cpp: void UI_ItemHandler___ctor (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x43cdfb0

void UI_ItemHandler___ctor(UI_ItemHandler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ItemHandler$$.cctor
// il2cpp: void UI_ItemHandler___cctor (const MethodInfo* method);
// 0x43cdfc0

void UI_ItemHandler___cctor(MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  System_Object_array *pSVar7;
  bool_conflict bVar8;
  System_Collections_Generic_List_object__o *pSVar9;
  Il2CppClass **__this;
  System_Collections_Generic_List_object__o *pSVar10;
  
  if (g_data_057ae416 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ItemHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"Flare1");
    il2cpp_runtime_helper_023445d0(&"Flare2");
    il2cpp_runtime_helper_023445d0(&"Flare3");
    g_data_057ae416 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pSVar10 = pSVar9;
  System_Collections_Generic_List_object____ctor(pSVar9,MethodInfo_List_1_System_String);
  pIVar6 = "Flare1";
  lVar5 = MethodInfo_Void_Add;
  if (pSVar9 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(pSVar9->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar7 = (pSVar9->fields)._items;
    if (pSVar7 != (System_Object_array *)0x0) {
      uVar4 = (pSVar9->fields)._size;
      if (uVar4 < (uint)pSVar7->max_length) {
        (pSVar9->fields)._size = uVar4 + 1;
        pSVar10 = (System_Collections_Generic_List_object__o *)(pSVar7->m_Items + (int)uVar4);
        pSVar7->m_Items[(int)uVar4] = pIVar6;
        il2cpp_runtime_helper_022b4080();
      }
      else {
        pSVar10 = pSVar9;
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar9,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      pIVar6 = "Flare2";
      lVar5 = MethodInfo_Void_Add;
      piVar1 = &(pSVar9->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar7 = (pSVar9->fields)._items;
      if (pSVar7 != (System_Object_array *)0x0) {
        uVar4 = (pSVar9->fields)._size;
        if (uVar4 < (uint)pSVar7->max_length) {
          (pSVar9->fields)._size = uVar4 + 1;
          pSVar10 = (System_Collections_Generic_List_object__o *)(pSVar7->m_Items + (int)uVar4);
          pSVar7->m_Items[(int)uVar4] = pIVar6;
          il2cpp_runtime_helper_022b4080();
        }
        else {
          pSVar10 = pSVar9;
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar9,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
          ;
        }
        pIVar6 = "Flare3";
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(pSVar9->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (pSVar9->fields)._items;
        if (pSVar7 != (System_Object_array *)0x0) {
          uVar4 = (pSVar9->fields)._size;
          if (uVar4 < (uint)pSVar7->max_length) {
            (pSVar9->fields)._size = uVar4 + 1;
            pSVar7->m_Items[(int)uVar4] = pIVar6;
            il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar4);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar9,pIVar6,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          **(undefined8 **)(TypeInfo_ItemHandler + 0xb8) = pSVar9;
          il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ItemHandler + 0xb8),pSVar9);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this = (Il2CppClass **)pSVar10;
  if (g_data_057ae414 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    __this = &TypeInfo_WheelPopup;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae414 = '\x01';
  }
  if ((pSVar10[1].monitor != (void *)0x0) &&
     (__this = &((pSVar10->fields)._syncRoot)->klass,
     (System_Collections_Generic_List_object__o *)__this != (System_Collections_Generic_List_object__o *)0x0))
  {
    bVar2 = (TypeInfo_WheelPopup->_2).naturalAligment;
    if (((((System_Collections_Generic_List_object__o *)__this)->klass->_2).naturalAligment < bVar2) ||
       ((((System_Collections_Generic_List_object__o *)__this)->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        TypeInfo_WheelPopup)) goto label_043cdfa8;
    pSVar9 = *(System_Collections_Generic_List_object__o **)((long)pSVar10[1].monitor + 0x70);
    iVar3 = (((System_Collections_Generic_List_object__o *)((long)__this + 0xa0))->fields)._size;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = (Il2CppClass **)pSVar9;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pSVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if ((pSVar9 == (System_Collections_Generic_List_object__o *)0x0) ||
         (lVar5 = *(long *)&pSVar9[3].fields._size, lVar5 == 0)) goto label_043cdfa3;
      if (iVar3 < *(int *)(lVar5 + 0x18)) {
        (*(code *)pSVar9->klass[1].vtable._20_System_Collections_IList_Add.method)
                  (pSVar9,iVar3,pSVar9->klass[1].vtable._21_System_Collections_IList_Contains.methodPtr);
      }
    }
    pIVar6 = (pSVar10->fields)._syncRoot;
    __this = (Il2CppClass **)0x0;
    if (pIVar6 != (Il2CppObject *)0x0) {
      (*pIVar6->klass->vtable[0x16].methodPtr)();
      *(undefined1 *)&pSVar10[1].klass = 0;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(Il2CppClass ***)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((System_Collections_Generic_List_object__o *)__this !=
          (System_Collections_Generic_List_object__o *)0x0) {
        bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
        if ((bVar2 <= (((System_Collections_Generic_List_object__o *)__this)->klass->_2).naturalAligment) &&
           ((((System_Collections_Generic_List_object__o *)__this)->klass->_2).typeHierarchy[(ulong)bVar2 - 1]
            == TypeInfo_InGameMenu)) {
          *(undefined1 *)
           &(((System_Collections_Generic_List_object__o *)((long)__this + 0x168))->fields)._items = 1;
          return;
        }
        goto label_043cdfa8;
      }
    }
  }
label_043cdfa3:
  il2cpp_runtime_helper_022b2c90();
label_043cdfa8:
  il2cpp_runtime_helper_022b2fd0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ItemHandler$$<SetItemWheel>b__7_0
// il2cpp: void UI_ItemHandler___SetItemWheel_b__7_0 (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x43ce1a0

void UI_ItemHandler___SetItemWheel_b__7_0(UI_ItemHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  GameManagers_InGameManager_o *pGVar3;
  Characters_BaseCharacter_o *x;
  long lVar4;
  UI_BasePopup_o *pUVar5;
  bool_conflict bVar6;
  Il2CppClass **__this_00;
  
  __this_00 = (Il2CppClass **)__this;
  if (g_data_057ae414 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    __this_00 = &TypeInfo_WheelPopup;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae414 = '\x01';
  }
  pGVar3 = (__this->fields)._inGameManager;
  if ((pGVar3 != (GameManagers_InGameManager_o *)0x0) &&
     (__this_00 = (Il2CppClass **)(__this->fields)._itemWheelPopup,
     (Characters_BaseCharacter_o *)__this_00 != (Characters_BaseCharacter_o *)0x0)) {
    bVar1 = (TypeInfo_WheelPopup->_2).naturalAligment;
    if (((((Characters_BaseCharacter_o *)__this_00)->klass->_2).naturalAligment < bVar1) ||
       ((((Characters_BaseCharacter_o *)__this_00)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WheelPopup
       )) goto label_043cdfa8;
    x = (pGVar3->fields).CurrentCharacter;
    uVar2 = *(uint *)&(((Characters_BaseCharacter_o *)__this_00)->fields).MovementSync;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = (Il2CppClass **)x;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if ((x == (Characters_BaseCharacter_o *)0x0) ||
         (lVar4 = *(long *)&(x->fields).CurrentHealth, lVar4 == 0)) goto label_043cdfa3;
      if ((int)uVar2 < *(int *)(lVar4 + 0x18)) {
        (*(x->klass->vtable)._75_UseItem.methodPtr)(x,(ulong)uVar2,(x->klass->vtable)._75_UseItem.method);
      }
    }
    pUVar5 = (__this->fields)._itemWheelPopup;
    __this_00 = (Il2CppClass **)0x0;
    if (pUVar5 != (UI_BasePopup_o *)0x0) {
      (*(pUVar5->klass->vtable)._22_Hide.methodPtr)();
      *(undefined1 *)&(__this->fields).IsActive = 0;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = *(Il2CppClass ***)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((Characters_BaseCharacter_o *)__this_00 != (Characters_BaseCharacter_o *)0x0) {
        bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
        if ((bVar1 <= (((Characters_BaseCharacter_o *)__this_00)->klass->_2).naturalAligment) &&
           ((((Characters_BaseCharacter_o *)__this_00)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            TypeInfo_InGameMenu)) {
          *(undefined1 *)&(((Characters_BaseCharacter_o *)((long)__this_00 + 0x108))->fields).Dead = 1;
          return;
        }
        goto label_043cdfa8;
      }
    }
  }
label_043cdfa3:
  il2cpp_runtime_helper_022b2c90();
label_043cdfa8:
  il2cpp_runtime_helper_022b2fd0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.ItemHandler$$<UpdateForever>b__8_0
// il2cpp: void UI_ItemHandler___UpdateForever_b__8_0 (UI_ItemHandler_o* __this, const MethodInfo* method);
// 0x43ce1b0

void UI_ItemHandler___UpdateForever_b__8_0(UI_ItemHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  GameManagers_InGameManager_o *pGVar3;
  Characters_BaseCharacter_o *x;
  long lVar4;
  UI_BasePopup_o *pUVar5;
  bool_conflict bVar6;
  Il2CppClass **__this_00;
  
  __this_00 = (Il2CppClass **)__this;
  if (g_data_057ae414 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    __this_00 = &TypeInfo_WheelPopup;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae414 = '\x01';
  }
  pGVar3 = (__this->fields)._inGameManager;
  if ((pGVar3 != (GameManagers_InGameManager_o *)0x0) &&
     (__this_00 = (Il2CppClass **)(__this->fields)._itemWheelPopup,
     (Characters_BaseCharacter_o *)__this_00 != (Characters_BaseCharacter_o *)0x0)) {
    bVar1 = (TypeInfo_WheelPopup->_2).naturalAligment;
    if (((((Characters_BaseCharacter_o *)__this_00)->klass->_2).naturalAligment < bVar1) ||
       ((((Characters_BaseCharacter_o *)__this_00)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WheelPopup
       )) goto label_043cdfa8;
    x = (pGVar3->fields).CurrentCharacter;
    uVar2 = *(uint *)&(((Characters_BaseCharacter_o *)__this_00)->fields).MovementSync;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = (Il2CppClass **)x;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if ((x == (Characters_BaseCharacter_o *)0x0) ||
         (lVar4 = *(long *)&(x->fields).CurrentHealth, lVar4 == 0)) goto label_043cdfa3;
      if ((int)uVar2 < *(int *)(lVar4 + 0x18)) {
        (*(x->klass->vtable)._75_UseItem.methodPtr)(x,(ulong)uVar2,(x->klass->vtable)._75_UseItem.method);
      }
    }
    pUVar5 = (__this->fields)._itemWheelPopup;
    __this_00 = (Il2CppClass **)0x0;
    if (pUVar5 != (UI_BasePopup_o *)0x0) {
      (*(pUVar5->klass->vtable)._22_Hide.methodPtr)();
      *(undefined1 *)&(__this->fields).IsActive = 0;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = *(Il2CppClass ***)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((Characters_BaseCharacter_o *)__this_00 != (Characters_BaseCharacter_o *)0x0) {
        bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
        if ((bVar1 <= (((Characters_BaseCharacter_o *)__this_00)->klass->_2).naturalAligment) &&
           ((((Characters_BaseCharacter_o *)__this_00)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            TypeInfo_InGameMenu)) {
          *(undefined1 *)&(((Characters_BaseCharacter_o *)((long)__this_00 + 0x108))->fields).Dead = 1;
          return;
        }
        goto label_043cdfa8;
      }
    }
  }
label_043cdfa3:
  il2cpp_runtime_helper_022b2c90();
label_043cdfa8:
  il2cpp_runtime_helper_022b2fd0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


