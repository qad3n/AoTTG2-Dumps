// Type: UI.MapEditorCustomAssetPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorCustomAssetPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorCustomAssetPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__15$$.ctor
// il2cpp: void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15___ctor (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41110a0

void UI_MapEditorCustomAssetPopup_<LoadAssetBundle>d__15___ctor
               (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__15$$System.IDisposable.Dispose
// il2cpp: void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15__System_IDisposable_Dispose (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o* __this, const MethodInfo* method);
// 0x41112d0

void UI_MapEditorCustomAssetPopup_<LoadAssetBundle>d__15__System_IDisposable_Dispose
               (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o *__this,MethodInfo *method)

{
  return;
}


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__15$$MoveNext
// il2cpp: bool UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15__MoveNext (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o* __this, const MethodInfo* method);
// 0x41112e0

bool_conflict
UI_MapEditorCustomAssetPopup_<LoadAssetBundle>d__15__MoveNext
          (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  UI_MapEditorCustomAssetPopup_o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar5;
  Map_MapScript_o *pMVar6;
  Map_MapScriptCustomAssets_o *pMVar7;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_array *pSVar8;
  UI_MessagePopup_o *pUVar9;
  Il2CppClass *pIVar10;
  long lVar11;
  bool_conflict bVar12;
  System_String_o *pSVar13;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar14;
  MethodInfo *method_00;
  UI_MapEditorMenu_o *pUVar15;
  UI_MapEditorMenu_o **ppUVar16;
  
  if (DAT_057048c4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Error loading asset bundle");
    il2cpp_init_method_metadata(&",");
    il2cpp_init_method_metadata(&"");
    DAT_057048c4 = '\x01';
  }
  iVar3 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar3 == 1) {
    (__this->fields).__1__state = -1;
    pSVar13 = (__this->fields).bundle;
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar12 = ApplicationManagers_AssetBundleManager__LoadedBundle(pSVar13,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      pUVar15 = (__this->fields)._menu_5__2;
      if ((pUVar15 != (UI_MapEditorMenu_o *)0x0) &&
         (pUVar9 = (pUVar15->fields).MessagePopup, pUVar9 != (UI_MessagePopup_o *)0x0)) {
        UI_MessagePopup__Show(pUVar9,"Error loading asset bundle",1,(MethodInfo *)0x0);
        return 0;
      }
      goto LAB_04111636;
    }
    if ((((__this_00 == (UI_MapEditorCustomAssetPopup_o *)0x0) ||
         (pGVar5 = (__this_00->fields)._gameManager,
         pGVar5 == (GameManagers_MapEditorGameManager_o *)0x0)) ||
        (pMVar6 = (pGVar5->fields).MapScript, pMVar6 == (Map_MapScript_o *)0x0)) ||
       (pMVar7 = (pMVar6->fields).CustomAssets, pMVar7 == (Map_MapScriptCustomAssets_o *)0x0))
    goto LAB_04111636;
    __this_01 = (pMVar7->fields).CustomAssets;
    pSVar13 = System_String__Concat((__this->fields).bundle,",",(MethodInfo *)0x0);
    lVar11 = MethodInfo_Void_Add;
    if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_04111636;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (__this_01->fields)._items;
    if (pSVar8 == (System_String_array *)0x0) goto LAB_04111636;
    uVar4 = (__this_01->fields)._size;
    if (uVar4 < (uint)pSVar8->max_length) {
      (__this_01->fields)._size = uVar4 + 1;
      pSVar8->m_Items[(int)uVar4] = pSVar13;
      il2cpp_runtime_glue(pSVar8->m_Items + (int)uVar4,pSVar13);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar13,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    pSVar13 = System_String__Concat((__this->fields).bundle,",",(MethodInfo *)0x0);
    UI_MapEditorCustomAssetPopup__AddAssetRow(__this_00,pSVar13,method_00);
    pUVar15 = (__this->fields)._menu_5__2;
  }
  else {
    if (iVar3 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
      pUVar15 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar15 == (UI_MapEditorMenu_o *)0x0) goto LAB_04111522;
LAB_0411139a:
      pIVar10 = TypeInfo_MapEditorMenu;
      bVar2 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
      if (((pUVar15->klass->_2).naturalAligment < bVar2) ||
         ((pUVar15->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorMenu)) {
LAB_0411163b:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pUVar15,pIVar10);
      }
      (__this->fields)._menu_5__2 = pUVar15;
      if (((pUVar15->klass->_2).naturalAligment < bVar2) ||
         ((pUVar15->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar10)) goto LAB_0411163b;
    }
    else {
      pUVar15 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar15 != (UI_MapEditorMenu_o *)0x0) goto LAB_0411139a;
LAB_04111522:
      (__this->fields)._menu_5__2 = (UI_MapEditorMenu_o *)0x0;
    }
    ppUVar16 = &(__this->fields)._menu_5__2;
    il2cpp_runtime_glue(ppUVar16);
    pSVar13 = (__this->fields).bundle;
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar12 = ApplicationManagers_AssetBundleManager__LoadedBundle(pSVar13,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      pSVar13 = (__this->fields).bundle;
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      routine = ApplicationManagers_AssetBundleManager__LoadBundle
                          (pSVar13,"",1,(MethodInfo *)0x0);
      if (__this_00 != (UI_MapEditorCustomAssetPopup_o *)0x0) {
        pUVar14 = UnityEngine_MonoBehaviour__StartCoroutine
                            ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar14;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar14);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      }
      goto LAB_04111636;
    }
    pUVar15 = *ppUVar16;
  }
  if ((pUVar15 != (UI_MapEditorMenu_o *)0x0) &&
     (pUVar9 = (pUVar15->fields).MessagePopup, pUVar9 != (UI_MessagePopup_o *)0x0)) {
    (*(pUVar9->klass->vtable)._22_Hide.methodPtr)(pUVar9,(pUVar9->klass->vtable)._22_Hide.method);
    return 0;
  }
LAB_04111636:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o* __this, const MethodInfo* method);
// 0x4111650

Il2CppObject *
UI_MapEditorCustomAssetPopup_<LoadAssetBundle>d__15__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__15$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15__System_Collections_IEnumerator_Reset (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o* __this, const MethodInfo* method);
// 0x4111660

void UI_MapEditorCustomAssetPopup_<LoadAssetBundle>d__15__System_Collections_IEnumerator_Reset
               (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o *__this,MethodInfo *method)

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


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__15$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15__System_Collections_IEnumerator_get_Current (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o* __this, const MethodInfo* method);
// 0x41116a0

Il2CppObject *
UI_MapEditorCustomAssetPopup_<LoadAssetBundle>d__15__System_Collections_IEnumerator_get_Current
          (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorCustomAssetPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorCustomAssetPopup__get_Title (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x410fa10

System_String_o *
UI_MapEditorCustomAssetPopup__get_Title(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  if (DAT_057048b8 == '\0') {
    il2cpp_init_method_metadata(&"Custom Assets");
    DAT_057048b8 = '\x01';
  }
  return "Custom Assets";
}


// UI.MapEditorCustomAssetPopup$$get_Width
// il2cpp: float UI_MapEditorCustomAssetPopup__get_Width (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x410fa40

float UI_MapEditorCustomAssetPopup__get_Width
                (UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.MapEditorCustomAssetPopup$$get_Height
// il2cpp: float UI_MapEditorCustomAssetPopup__get_Height (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x410fa50

float UI_MapEditorCustomAssetPopup__get_Height
                (UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  return 420.0;
}


// UI.MapEditorCustomAssetPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorCustomAssetPopup__get_VerticalPadding (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x410fa60

int32_t UI_MapEditorCustomAssetPopup__get_VerticalPadding
                  (UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorCustomAssetPopup$$Setup
// il2cpp: void UI_MapEditorCustomAssetPopup__Setup (UI_MapEditorCustomAssetPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x410fa70

void UI_MapEditorCustomAssetPopup__Setup
               (UI_MapEditorCustomAssetPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  
  if (DAT_057048b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__11_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__11_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__11_2);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Add");
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Add any asset bundle located in Documents/Aottg2/CustomAssets");
    DAT_057048b9 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,130.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Add",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Clear",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel
            ((__this->fields).SinglePanel,__this_00,"Add any asset bundle located in Documents/Aottg2/CustomAssets",0,4,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomAssetPopup$$Show
// il2cpp: void UI_MapEditorCustomAssetPopup__Show (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x410fcc0

void UI_MapEditorCustomAssetPopup__Show(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t iVar3;
  GameManagers_MapEditorGameManager_o *pGVar4;
  System_Collections_Generic_List_GameObject__o *pSVar5;
  System_Collections_Generic_List_StringSetting__o *pSVar6;
  Map_MapScript_o *pMVar7;
  Map_MapScriptCustomAssets_o *pMVar8;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  Il2CppClass *pIVar9;
  bool_conflict bVar10;
  MethodInfo *method_00;
  GameManagers_MapEditorGameManager_o **ppGVar11;
  _union_247328 _Var12;
  Il2CppType *pIVar13;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar14;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_68;
  Il2CppType *pIStack_60;
  System_String_o *pSStack_58;
  _union_247328 _Stack_48;
  Il2CppType *pIStack_40;
  UnityEngine_Object_o *pUStack_38;
  
  if (DAT_057048ba == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057048ba = '\x01';
  }
  pSStack_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  pSStack_58 = (System_String_o *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pIVar9 = TypeInfo_MapEditorGameManager;
  pGVar4 = *(GameManagers_MapEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar4 == (GameManagers_MapEditorGameManager_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
LAB_0410fe38:
    ppGVar11 = &(__this->fields)._gameManager;
    il2cpp_runtime_glue(ppGVar11);
    pSVar5 = (__this->fields)._elements;
    if (pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_48,
                 (System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
      _Var12 = _Stack_48;
      pIVar13 = pIStack_40;
      obj = pUStack_38;
      while (__this_01.fields._8_8_ = pIVar13, __this_01.fields._list = _Var12.genericMethod,
            __this_01.fields._current = (Il2CppObject *)obj,
            bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff78),
            (char)bVar10 != '\0') {
        pUVar14 = obj;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
        obj = pUVar14;
      }
      __this_02.fields._8_8_ = pIVar13;
      __this_02.fields._list = _Var12.genericMethod;
      __this_02.fields._current = (Il2CppObject *)obj;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
      pSVar5 = (__this->fields)._elements;
      if (pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar3 = (pSVar5->fields)._size;
        (pSVar5->fields)._size = 0;
        if (0 < iVar3) {
          System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar3,(MethodInfo *)0x0);
        }
        pSVar6 = (__this->fields)._settings;
        if (pSVar6 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          iVar3 = (pSVar6->fields)._size;
          (pSVar6->fields)._size = 0;
          if (0 < iVar3) {
            System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar3,(MethodInfo *)0x0)
            ;
          }
          pGVar4 = *ppGVar11;
          if ((((pGVar4 != (GameManagers_MapEditorGameManager_o *)0x0) &&
               (pMVar7 = (pGVar4->fields).MapScript, pMVar7 != (Map_MapScript_o *)0x0)) &&
              (pMVar8 = (pMVar7->fields).CustomAssets, pMVar8 != (Map_MapScriptCustomAssets_o *)0x0)
              ) && (__this_00 = (pMVar8->fields).CustomAssets,
                   __this_00 != (System_Collections_Generic_List_string__o *)0x0)) {
            System_Collections_Generic_List<object>__GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)&pSStack_68,
                       (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
            while (__this_03.fields._8_8_ = pIVar13, __this_03.fields._list = _Var12.genericMethod,
                  __this_03.fields._current = (Il2CppObject *)obj,
                  bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (__this_03,(MethodInfo_3185E20 *)&pSStack_68),
                  (char)bVar10 != '\0') {
              UI_MapEditorCustomAssetPopup__AddAssetRow(__this,pSStack_58,method_00);
            }
            __this_04.fields._8_8_ = pIVar13;
            __this_04.fields._list = _Var12.genericMethod;
            __this_04.fields._current = (Il2CppObject *)obj;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_04,(MethodInfo_3185E10 *)&pSStack_68);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar2 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
  if ((bVar2 <= (pGVar4->klass->_2).naturalAligment) &&
     ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_MapEditorGameManager)) {
    (__this->fields)._gameManager = pGVar4;
    if ((bVar2 <= (pGVar4->klass->_2).naturalAligment) &&
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == pIVar9)) goto LAB_0410fe38;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pGVar4,pIVar9);
}


// UI.MapEditorCustomAssetPopup$$AddAssetRow
// il2cpp: void UI_MapEditorCustomAssetPopup__AddAssetRow (UI_MapEditorCustomAssetPopup_o* __this, System_String_o* str, const MethodInfo* method);
// 0x41100c0

void UI_MapEditorCustomAssetPopup__AddAssetRow
               (UI_MapEditorCustomAssetPopup_o *__this,System_String_o *str,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_String_o *value;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar4;
  System_Collections_Generic_List_StringSetting__o *__this_01;
  Settings_StringSetting_array *pSVar5;
  long lVar6;
  int32_t fontSize;
  System_String_o *pSVar7;
  UI_ElementStyle_o *__this_02;
  System_String_array *pSVar8;
  Settings_StringSetting_o *__this_03;
  UnityEngine_GameObject_o *item;
  MethodInfo *extraout_RDX;
  
  if (DAT_057048bb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"Optional: add a URL for players to download the asset bundle, otherwise they must also have the file in CustomAssets folder");
    DAT_057048bb = '\x01';
    method = extraout_RDX;
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method,method);
  pSVar7 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_02,fontSize,120.0,20.0,pSVar7,(MethodInfo *)0x0);
  if ((str != (System_String_o *)0x0) &&
     (pSVar8 = System_String__Split(str,0x2c,0,(MethodInfo *)0x0),
     pSVar8 != (System_String_array *)0x0)) {
    iVar2 = (int)pSVar8->max_length;
    if ((iVar2 == 0) || (iVar2 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar7 = pSVar8->m_Items[0];
    value = pSVar8->m_Items[1];
    __this_03 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
    Settings_StringSetting___ctor(__this_03,(MethodInfo *)0x0);
    if (__this_03 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this_03,(Il2CppObject *)value,MethodInfo_Void_set_Value);
      item = UI_ElementFactory__CreateInputSetting
                       ((__this->fields).SinglePanel,__this_02,(Settings_BaseSetting_o *)__this_03,
                        pSVar7,"Optional: add a URL for players to download the asset bundle, otherwise they must also have the file in CustomAssets folder",220.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                        (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                        (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      lVar6 = MethodInfo_Void_Add;
      __this_00 = (__this->fields)._elements;
      if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (__this_00->fields)._items;
        if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
          uVar3 = (__this_00->fields)._size;
          if (uVar3 < (uint)pUVar4->max_length) {
            (__this_00->fields)._size = uVar3 + 1;
            pUVar4->m_Items[(int)uVar3] = item;
            il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar3,item);
            __this_01 = (__this->fields)._settings;
            lVar6 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            __this_01 = (__this->fields)._settings;
            lVar6 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar6;
          if (__this_01 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this_01->fields)._items;
            if (pSVar5 != (Settings_StringSetting_array *)0x0) {
              uVar3 = (__this_01->fields)._size;
              if (uVar3 < (uint)pSVar5->max_length) {
                (__this_01->fields)._size = uVar3 + 1;
                pSVar5->m_Items[(int)uVar3] = __this_03;
                il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar3,__this_03);
                return;
              }
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,
                         (Il2CppObject *)__this_03,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorCustomAssetPopup$$OnButtonClick
// il2cpp: void UI_MapEditorCustomAssetPopup__OnButtonClick (UI_MapEditorCustomAssetPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4110340

void UI_MapEditorCustomAssetPopup__OnButtonClick
               (UI_MapEditorCustomAssetPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  System_Collections_Generic_List_StringSetting__o *pSVar3;
  System_Object_array *pSVar4;
  Map_MapScript_o *pMVar5;
  Map_MapScriptCustomAssets_o *pMVar6;
  UI_ConfirmPopup_o *__this_00;
  UI_SetNamePopup_o *__this_01;
  long lVar7;
  UI_MessagePopup_o *__this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  int32_t *piVar8;
  bool_conflict bVar9;
  MethodInfo *method_00;
  System_String_o *pSVar10;
  System_String_array *pSVar11;
  Il2CppObject *pIVar12;
  System_String_o *pSVar13;
  System_Collections_Generic_List_GameObject__o *pSVar14;
  UnityEngine_Events_UnityAction_o *pUVar15;
  System_Collections_Generic_List_string__o *__this_05;
  Il2CppClass *a;
  GameManagers_MapEditorGameManager_o *pGVar16;
  Map_MapScriptCustomAssets_Fields *pMVar17;
  int index;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 in_stack_ffffffffffffffb0;
  long *plVar18;
  
  if (DAT_057048bc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_StringSetting_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__14_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__14_1);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Add");
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"Do you want to clear all custom asset bundles?");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Add asset bundle");
    il2cpp_init_method_metadata(&"Loading asset bundle...");
    il2cpp_init_method_metadata(&"ConfirmClear");
    il2cpp_init_method_metadata(&",");
    il2cpp_init_method_metadata(&"Error: bundle name cannot be empty.");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"ConfirmAdd");
    DAT_057048bc = '\x01';
  }
  pIVar12 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    plVar18 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    plVar18 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (plVar18 != (long *)0x0) {
    if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(TypeInfo_MapEditorMenu + 0x130)) ||
       (*(long *)(*(long *)(*plVar18 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MapEditorMenu + 0x130) * 8) !=
        TypeInfo_MapEditorMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(plVar18);
    }
  }
  bVar9 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    bVar9 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      bVar9 = System_String__op_Equality(name,"ConfirmClear",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        bVar9 = System_String__op_Equality(name,"Add",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          bVar9 = System_String__op_Equality(name,"ConfirmAdd",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          if ((((plVar18 != (long *)0x0) && (plVar18[0x11] != 0)) &&
              (lVar7 = *(long *)(plVar18[0x11] + 0xb8), lVar7 != 0)) &&
             (pSVar10 = *(System_String_o **)(lVar7 + 0x18), pSVar10 != (System_String_o *)0x0)) {
            a = (Il2CppClass *)System_String__Trim(pSVar10,(MethodInfo *)0x0);
            bVar9 = System_String__op_Equality
                              ((System_String_o *)a,
                               (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                               (MethodInfo *)0x0);
            __this_02 = (UI_MessagePopup_o *)plVar18[6];
            if (__this_02 != (UI_MessagePopup_o *)0x0) {
              if ((char)bVar9 == '\0') {
                UI_MessagePopup__Show(__this_02,"Loading asset bundle...",0,(MethodInfo *)0x0);
                if (DAT_057048bd == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_LoadAssetBundle_d__15);
                  DAT_057048bd = '\x01';
                }
                pIVar12 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadAssetBundle_d__15);
                System_Object___ctor(pIVar12,(MethodInfo *)0x0);
                *(undefined4 *)&pIVar12[1].klass = 0;
                if (pIVar12 == (Il2CppObject *)0x0) goto LAB_04110c58;
                pIVar12[2].monitor = __this;
                il2cpp_runtime_glue(&pIVar12[2].monitor,__this);
                pIVar12[2].klass = a;
                il2cpp_runtime_glue(pIVar12 + 2,a);
                UnityEngine_MonoBehaviour__StartCoroutine
                          ((UnityEngine_MonoBehaviour_o *)__this,
                           (System_Collections_IEnumerator_o *)pIVar12,(MethodInfo *)0x0);
              }
              else {
                UI_MessagePopup__Show(__this_02,"Error: bundle name cannot be empty.",1,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
        else if (plVar18 != (long *)0x0) {
          __this_01 = (UI_SetNamePopup_o *)plVar18[0x11];
          pUVar15 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_01 != (UI_SetNamePopup_o *)0x0) {
            UI_SetNamePopup__Show
                      (__this_01,"",pUVar15,"Add asset bundle",(System_String_o *)0x0,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pGVar16 = (__this->fields)._gameManager;
        if ((pGVar16 != (GameManagers_MapEditorGameManager_o *)0x0) &&
           (pMVar5 = (pGVar16->fields).MapScript, pMVar5 != (Map_MapScript_o *)0x0)) {
          pMVar6 = (pMVar5->fields).CustomAssets;
          __this_05 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
          System_Collections_Generic_List<object>___ctor
                    ((System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_System_String);
          if (pMVar6 != (Map_MapScriptCustomAssets_o *)0x0) {
            (pMVar6->fields).CustomAssets = __this_05;
            il2cpp_runtime_glue(&pMVar6->fields,__this_05);
            if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            ApplicationManagers_AssetBundleManager__Clear((MethodInfo *)0x0);
            pSVar14 = (__this->fields)._elements;
            if (pSVar14 != (System_Collections_Generic_List_GameObject__o *)0x0) {
              System_Collections_Generic_List<object>__GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8
                         ,(System_Collections_Generic_List_object__o *)pSVar14,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
              while (__this_03.fields._index = (int)in_stack_ffffffffffffffb0,
                    __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffffb0 >> 0x20),
                    __this_03.fields._list =
                         (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8,
                    __this_03.fields._current = pIVar12,
                    bVar9 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                      (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8),
                    (char)bVar9 != '\0') {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                UnityEngine_Object__Destroy((UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              }
              __this_04.fields._index = (int)in_stack_ffffffffffffffb0;
              __this_04.fields._version = (int)((ulong)in_stack_ffffffffffffffb0 >> 0x20);
              __this_04.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
              __this_04.fields._current = pIVar12;
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
              pSVar3 = (__this->fields)._settings;
              if (pSVar3 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
                piVar8 = &(pSVar3->fields)._version;
                *piVar8 = *piVar8 + 1;
                iVar2 = (pSVar3->fields)._size;
                (pSVar3->fields)._size = 0;
                if (0 < iVar2) {
                  System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,
                                      (MethodInfo *)0x0);
                }
                pSVar14 = (__this->fields)._elements;
                if (pSVar14 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                  piVar8 = &(pSVar14->fields)._version;
                  *piVar8 = *piVar8 + 1;
                  iVar2 = (pSVar14->fields)._size;
                  (pSVar14->fields)._size = 0;
                  if (iVar2 < 1) {
                    return;
                  }
                  System_Array__Clear((System_Array_o *)(pSVar14->fields)._items,0,iVar2,
                                      (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    else if (plVar18 != (long *)0x0) {
      __this_00 = (UI_ConfirmPopup_o *)plVar18[7];
      pUVar15 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show
                  (__this_00,"Do you want to clear all custom asset bundles?",pUVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)method_00,MethodInfo_List_1_System_String);
    pSVar14 = (__this->fields)._elements;
    if (pSVar14 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      if (method_00 == (MethodInfo *)0x0) {
        pGVar16 = (__this->fields)._gameManager;
        if (((pGVar16 != (GameManagers_MapEditorGameManager_o *)0x0) &&
            (pMVar5 = (pGVar16->fields).MapScript, pMVar5 != (Map_MapScript_o *)0x0)) &&
           (pMVar6 = (pMVar5->fields).CustomAssets, pMVar6 != (Map_MapScriptCustomAssets_o *)0x0)) {
          pMVar17 = &pMVar6->fields;
          if ((pSVar14->fields)._size < 1) {
LAB_04110944:
            pMVar17->CustomAssets = (System_Collections_Generic_List_string__o *)method_00;
            il2cpp_runtime_glue();
            if ((plVar18 != (long *)0x0) &&
               ((UI_MapEditorTopPanel_o *)plVar18[0x16] != (UI_MapEditorTopPanel_o *)0x0)) {
              UI_MapEditorTopPanel__Save((UI_MapEditorTopPanel_o *)plVar18[0x16],method_00);
              (*(__this->klass->vtable)._22_Hide.methodPtr)
                        (__this,(__this->klass->vtable)._22_Hide.method);
              return;
            }
          }
          else if (((pMVar17->CustomAssets != (System_Collections_Generic_List_string__o *)0x0) &&
                   (pSVar10 = (System_String_o *)
                              System_Collections_Generic_List<object>__get_Item
                                        ((System_Collections_Generic_List_object__o *)
                                         pMVar17->CustomAssets,0,MethodInfo_String_get_Item),
                   pSVar10 != (System_String_o *)0x0)) &&
                  (pSVar11 = System_String__Split(pSVar10,0x2c,0,(MethodInfo *)0x0),
                  pSVar11 != (System_String_array *)0x0)) {
            if ((int)pSVar11->max_length == 0) {
LAB_04110c14:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if (pSVar11->m_Items[0] != (System_String_o *)0x0) {
              pSVar10 = System_String__Trim(pSVar11->m_Items[0],(MethodInfo *)0x0);
              pSVar3 = (__this->fields)._settings;
              if (((pSVar3 != (System_Collections_Generic_List_StringSetting__o *)0x0) &&
                  (pIVar12 = System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)pSVar3,0,
                                        MethodInfo_StringSetting_get_Item), pIVar12 != (Il2CppObject *)0x0)) &&
                 (pIVar12[1].monitor != (System_String_o *)0x0)) {
                pSVar13 = System_String__Trim(pIVar12[1].monitor,(MethodInfo *)0x0);
                System_String__Concat(pSVar10,",",pSVar13,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
            }
          }
        }
      }
      else {
        index = 0;
        pGVar16 = (__this->fields)._gameManager;
        if (pGVar16 != (GameManagers_MapEditorGameManager_o *)0x0) {
          while ((pMVar5 = (pGVar16->fields).MapScript, pMVar5 != (Map_MapScript_o *)0x0 &&
                 (pMVar6 = (pMVar5->fields).CustomAssets,
                 pMVar6 != (Map_MapScriptCustomAssets_o *)0x0))) {
            pMVar17 = &pMVar6->fields;
            if ((pSVar14->fields)._size <= index) goto LAB_04110944;
            if (((pMVar17->CustomAssets == (System_Collections_Generic_List_string__o *)0x0) ||
                (pSVar10 = (System_String_o *)
                           System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)
                                      pMVar17->CustomAssets,index,MethodInfo_String_get_Item),
                pSVar10 == (System_String_o *)0x0)) ||
               (pSVar11 = System_String__Split(pSVar10,0x2c,0,(MethodInfo *)0x0),
               pSVar11 == (System_String_array *)0x0)) break;
            if ((int)pSVar11->max_length == 0) goto LAB_04110c14;
            if (pSVar11->m_Items[0] == (System_String_o *)0x0) break;
            pSVar10 = System_String__Trim(pSVar11->m_Items[0],(MethodInfo *)0x0);
            pSVar3 = (__this->fields)._settings;
            if (((pSVar3 == (System_Collections_Generic_List_StringSetting__o *)0x0) ||
                (pIVar12 = System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                      MethodInfo_StringSetting_get_Item), pIVar12 == (Il2CppObject *)0x0)) ||
               (pIVar12[1].monitor == (System_String_o *)0x0)) break;
            pSVar13 = System_String__Trim(pIVar12[1].monitor,(MethodInfo *)0x0);
            pSVar10 = System_String__Concat(pSVar10,",",pSVar13,(MethodInfo *)0x0);
            lVar7 = MethodInfo_Void_Add;
            piVar8 = (int32_t *)((long)&method_00->name + 4);
            *piVar8 = *piVar8 + 1;
            pSVar4 = ((System_Collections_Generic_List_object__Fields *)&method_00->invoker_method)
                     ->_items;
            if (pSVar4 == (System_Object_array *)0x0) break;
            uVar1 = *(uint *)&method_00->name;
            if (uVar1 < (uint)pSVar4->max_length) {
              *(uint *)&method_00->name = uVar1 + 1;
              pSVar4->m_Items[(int)uVar1] = (Il2CppObject *)pSVar10;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar1,pSVar10);
              pSVar14 = (__this->fields)._elements;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)method_00,
                         (Il2CppObject *)pSVar10,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
              ;
              pSVar14 = (__this->fields)._elements;
            }
            if (pSVar14 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
            index = index + 1;
            pGVar16 = (__this->fields)._gameManager;
            if (pGVar16 == (GameManagers_MapEditorGameManager_o *)0x0) break;
          }
        }
      }
    }
  }
LAB_04110c58:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorCustomAssetPopup$$LoadAssetBundle
// il2cpp: System_Collections_IEnumerator_o* UI_MapEditorCustomAssetPopup__LoadAssetBundle (UI_MapEditorCustomAssetPopup_o* __this, System_String_o* bundle, const MethodInfo* method);
// 0x4111010

System_Collections_IEnumerator_o *
UI_MapEditorCustomAssetPopup__LoadAssetBundle
          (UI_MapEditorCustomAssetPopup_o *__this,System_String_o *bundle,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057048bd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadAssetBundle_d__15);
    DAT_057048bd = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadAssetBundle_d__15);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)bundle;
    il2cpp_runtime_glue(__this_00 + 2,bundle);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorCustomAssetPopup$$.ctor
// il2cpp: void UI_MapEditorCustomAssetPopup___ctor (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x41110c0

void UI_MapEditorCustomAssetPopup___ctor(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_StringSetting__o *__this_01;
  
  if (DAT_057048be == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_StringSetting);
    DAT_057048be = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._elements = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._elements,__this_00);
  __this_01 = (System_Collections_Generic_List_StringSetting__o *)il2cpp_runtime_glue(TypeInfo_List_StringSetting);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Settings_StringSetting);
  (__this->fields)._settings = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._settings);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomAssetPopup$$<Setup>b__11_0
// il2cpp: void UI_MapEditorCustomAssetPopup___Setup_b__11_0 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x4111190

void UI_MapEditorCustomAssetPopup__<Setup>b__11_0
               (UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057048bf == '\0') {
    il2cpp_init_method_metadata(&"Add");
    DAT_057048bf = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCustomAssetPopup__OnButtonClick(__this,"Add",in_RDX);
  return;
}


// UI.MapEditorCustomAssetPopup$$<Setup>b__11_1
// il2cpp: void UI_MapEditorCustomAssetPopup___Setup_b__11_1 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x41111d0

void UI_MapEditorCustomAssetPopup__<Setup>b__11_1
               (UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057048c0 == '\0') {
    il2cpp_init_method_metadata(&"Clear");
    DAT_057048c0 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCustomAssetPopup__OnButtonClick(__this,"Clear",in_RDX);
  return;
}


// UI.MapEditorCustomAssetPopup$$<Setup>b__11_2
// il2cpp: void UI_MapEditorCustomAssetPopup___Setup_b__11_2 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x4111210

void UI_MapEditorCustomAssetPopup__<Setup>b__11_2
               (UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057048c1 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_057048c1 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCustomAssetPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


// UI.MapEditorCustomAssetPopup$$<OnButtonClick>b__14_0
// il2cpp: void UI_MapEditorCustomAssetPopup___OnButtonClick_b__14_0 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x4111250

void UI_MapEditorCustomAssetPopup__<OnButtonClick>b__14_0
               (UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057048c2 == '\0') {
    il2cpp_init_method_metadata(&"ConfirmClear");
    DAT_057048c2 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCustomAssetPopup__OnButtonClick(__this,"ConfirmClear",in_RDX);
  return;
}


// UI.MapEditorCustomAssetPopup$$<OnButtonClick>b__14_1
// il2cpp: void UI_MapEditorCustomAssetPopup___OnButtonClick_b__14_1 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x4111290

void UI_MapEditorCustomAssetPopup__<OnButtonClick>b__14_1
               (UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057048c3 == '\0') {
    il2cpp_init_method_metadata(&"ConfirmAdd");
    DAT_057048c3 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCustomAssetPopup__OnButtonClick(__this,"ConfirmAdd",in_RDX);
  return;
}


