// Type: UI.MapEditorCustomAssetPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorCustomAssetPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorCustomAssetPopup.cs
// --------------------------------

// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__15$$.ctor
// il2cpp: void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15___ctor (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4425570

void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15___ctor
               (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__15$$System.IDisposable.Dispose
// il2cpp: void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15__System_IDisposable_Dispose (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o* __this, const MethodInfo* method);
// 0x44257a0

void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15__System_IDisposable_Dispose
               (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o *__this,MethodInfo *method)

{
  return;
}


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__15$$MoveNext
// il2cpp: bool UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15__MoveNext (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o* __this, const MethodInfo* method);
// 0x44257b0

bool_conflict
UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15__MoveNext
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
  long lVar10;
  bool_conflict bVar11;
  System_String_o *pSVar12;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar13;
  UI_MapEditorMenu_o *str;
  UI_MapEditorMenu_o *pUVar14;
  Il2CppClass *pIVar15;
  MethodInfo *method_00;
  UI_MapEditorMenu_o **ppUVar16;
  
  if (g_data_057ae660 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Error loading asset bundle");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae660 = '\x01';
  }
  iVar3 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar3 == 1) {
    (__this->fields).__1__state = -1;
    pSVar12 = (__this->fields).bundle;
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    str = (UI_MapEditorMenu_o *)0x0;
    bVar11 = ApplicationManagers_AssetBundleManager__LoadedBundle(pSVar12,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      pUVar14 = (__this->fields)._menu_5__2;
      if ((pUVar14 != (UI_MapEditorMenu_o *)0x0) &&
         (pUVar9 = (pUVar14->fields).MessagePopup, pUVar9 != (UI_MessagePopup_o *)0x0)) {
        UI_MessagePopup__Show(pUVar9,"Error loading asset bundle",1,(MethodInfo *)0x0);
        return 0;
      }
    }
    else if ((((__this_00 != (UI_MapEditorCustomAssetPopup_o *)0x0) &&
              (pGVar5 = (__this_00->fields)._gameManager, pGVar5 != (GameManagers_MapEditorGameManager_o *)0x0
              )) && (pMVar6 = (pGVar5->fields).MapScript, pMVar6 != (Map_MapScript_o *)0x0)) &&
            (pMVar7 = (pMVar6->fields).CustomAssets, pMVar7 != (Map_MapScriptCustomAssets_o *)0x0)) {
      __this_01 = (pMVar7->fields).CustomAssets;
      str = ",";
      pSVar12 = System_String__Concat_3ae5ba0
                          ((__this->fields).bundle,(System_String_o *)",",(MethodInfo *)0x0);
      lVar10 = MethodInfo_Void_Add;
      if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_04425b06;
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar8 = (__this_01->fields)._items;
      if (pSVar8 == (System_String_array *)0x0) goto label_04425b06;
      uVar4 = (__this_01->fields)._size;
      if (uVar4 < (uint)pSVar8->max_length) {
        (__this_01->fields)._size = uVar4 + 1;
        pSVar8->m_Items[(int)uVar4] = pSVar12;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4,pSVar12);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar12,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      str = (UI_MapEditorMenu_o *)
            System_String__Concat_3ae5ba0
                      ((__this->fields).bundle,(System_String_o *)",",(MethodInfo *)0x0);
      UI_MapEditorCustomAssetPopup__AddAssetRow(__this_00,(System_String_o *)str,method_00);
      pUVar14 = (__this->fields)._menu_5__2;
      if (pUVar14 == (UI_MapEditorMenu_o *)0x0) goto label_04425b06;
      goto label_04425adf;
    }
  }
  else {
    if (iVar3 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      str = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (str != (UI_MapEditorMenu_o *)0x0) goto label_0442586a;
label_044259f2:
      (__this->fields)._menu_5__2 = (UI_MapEditorMenu_o *)0x0;
    }
    else {
      str = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (str == (UI_MapEditorMenu_o *)0x0) goto label_044259f2;
label_0442586a:
      pIVar15 = TypeInfo_MapEditorMenu;
      bVar2 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
      if (((str->klass->_2).naturalAligment < bVar2) ||
         ((str->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorMenu)) goto label_04425b0b;
      (__this->fields)._menu_5__2 = str;
      if (((str->klass->_2).naturalAligment < bVar2) ||
         ((str->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar15)) goto label_04425b0b;
    }
    ppUVar16 = &(__this->fields)._menu_5__2;
    il2cpp_runtime_helper_022b4080(ppUVar16);
    pSVar12 = (__this->fields).bundle;
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    str = (UI_MapEditorMenu_o *)0x0;
    bVar11 = ApplicationManagers_AssetBundleManager__LoadedBundle(pSVar12,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      pSVar12 = (__this->fields).bundle;
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      str = "";
      routine = ApplicationManagers_AssetBundleManager__LoadBundle
                          (pSVar12,(System_String_o *)"",1,(MethodInfo *)0x0);
      if (__this_00 != (UI_MapEditorCustomAssetPopup_o *)0x0) {
        pUVar13 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                            ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar13;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar13);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      }
    }
    else {
      pUVar14 = *ppUVar16;
      if (pUVar14 != (UI_MapEditorMenu_o *)0x0) {
label_04425adf:
        pUVar9 = (pUVar14->fields).MessagePopup;
        if (pUVar9 != (UI_MessagePopup_o *)0x0) {
          (*(pUVar9->klass->vtable)._22_Hide.methodPtr)(pUVar9,(pUVar9->klass->vtable)._22_Hide.method);
          return 0;
        }
      }
    }
  }
label_04425b06:
  pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
label_04425b0b:
  il2cpp_runtime_helper_022b2fd0(str,pIVar15);
  return (bool_conflict)(str->fields).m_CancellationTokenSource;
}


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o* __this, const MethodInfo* method);
// 0x4425b20

Il2CppObject *
UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__15$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15__System_Collections_IEnumerator_Reset (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o* __this, const MethodInfo* method);
// 0x4425b30

void UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15__System_Collections_IEnumerator_Reset
               (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o *__this,MethodInfo *method)

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


// UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__15$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15__System_Collections_IEnumerator_get_Current (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o* __this, const MethodInfo* method);
// 0x4425b70

Il2CppObject *
UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15__System_Collections_IEnumerator_get_Current
          (UI_MapEditorCustomAssetPopup__LoadAssetBundle_d__15_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorCustomAssetPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorCustomAssetPopup__get_Title (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x4423ee0

System_String_o *
UI_MapEditorCustomAssetPopup__get_Title(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae654 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Custom Assets");
    g_data_057ae654 = '\x01';
  }
  return "Custom Assets";
}


// UI.MapEditorCustomAssetPopup$$get_Width
// il2cpp: float UI_MapEditorCustomAssetPopup__get_Width (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x4423f10

float UI_MapEditorCustomAssetPopup__get_Width(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.MapEditorCustomAssetPopup$$get_Height
// il2cpp: float UI_MapEditorCustomAssetPopup__get_Height (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x4423f20

float UI_MapEditorCustomAssetPopup__get_Height(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  return 420.0;
}


// UI.MapEditorCustomAssetPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorCustomAssetPopup__get_VerticalPadding (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x4423f30

int32_t UI_MapEditorCustomAssetPopup__get_VerticalPadding
                  (UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorCustomAssetPopup$$Setup
// il2cpp: void UI_MapEditorCustomAssetPopup__Setup (UI_MapEditorCustomAssetPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4423f40

void UI_MapEditorCustomAssetPopup__Setup
               (UI_MapEditorCustomAssetPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  
  if (g_data_057ae655 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Add");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Add any asset bundle located in Documents/Aottg2/CustomAssets");
    g_data_057ae655 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,130.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Add",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Clear",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel
            ((__this->fields).SinglePanel,__this_00,"Add any asset bundle located in Documents/Aottg2/CustomAssets",0,4,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomAssetPopup$$Show
// il2cpp: void UI_MapEditorCustomAssetPopup__Show (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x4424190

void UI_MapEditorCustomAssetPopup__Show(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  System_Collections_Generic_List_StringSetting__o *pSVar5;
  GameManagers_MapEditorGameManager_o *pGVar6;
  Map_MapScript_o *pMVar7;
  Map_MapScriptCustomAssets_o *pMVar8;
  System_Collections_Generic_List_string__o *__this_00;
  long lVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar10;
  Il2CppClass *pIVar11;
  long *plVar12;
  MethodInfo *method_00;
  GameManagers_MapEditorGameManager_o *pGVar13;
  GameManagers_MapEditorGameManager_o **ppGVar14;
  undefined1 auVar15 [12];
  _union_249689 _Var16;
  Il2CppType *pIVar17;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar18;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_68;
  Il2CppType *pIStack_60;
  System_String_o *pSStack_58;
  _union_249689 _Stack_48;
  Il2CppType *pIStack_40;
  UnityEngine_Object_o *pUStack_38;
  
  if (g_data_057ae656 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae656 = '\x01';
  }
  _Var16.genericMethod = (Il2CppMethodPointer)0x0;
  pIVar17 = (Il2CppType *)0x0;
  obj = (UnityEngine_Object_o *)0x0;
  pSStack_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  pSStack_58 = (System_String_o *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pIVar11 = TypeInfo_MapEditorGameManager;
  pGVar13 = *(GameManagers_MapEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar13 == (GameManagers_MapEditorGameManager_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
  }
  else {
    bVar2 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if (((pGVar13->klass->_2).naturalAligment < bVar2) ||
       ((pGVar13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorGameManager)) goto label_04424497;
    (__this->fields)._gameManager = pGVar13;
    if (((pGVar13->klass->_2).naturalAligment < bVar2) ||
       ((pGVar13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar11)) goto label_04424497;
  }
  ppGVar14 = &(__this->fields)._gameManager;
  il2cpp_runtime_helper_022b4080(ppGVar14);
  pSVar4 = (__this->fields)._elements;
  pGVar13 = (GameManagers_MapEditorGameManager_o *)0x0;
  if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_48,
               (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    _Var16 = _Stack_48;
    pIVar17 = pIStack_40;
    obj = pUStack_38;
    while (__this_01.fields._8_8_ = pIVar17, __this_01.fields._list = _Var16.genericMethod,
          __this_01.fields._current = (Il2CppObject *)obj,
          bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78), (char)bVar10 != '\0')
    {
      pUVar18 = obj;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
      obj = pUVar18;
    }
    __this_02.fields._8_8_ = pIVar17;
    __this_02.fields._list = _Var16.genericMethod;
    __this_02.fields._current = (Il2CppObject *)obj;
    pGVar13 = MethodInfo_Void_Dispose;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    pSVar4 = (__this->fields)._elements;
    if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar3 = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      if (0 < iVar3) {
        pGVar13 = (GameManagers_MapEditorGameManager_o *)0x0;
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar3,(MethodInfo *)0x0);
      }
      pSVar5 = (__this->fields)._settings;
      if (pSVar5 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar3 = (pSVar5->fields)._size;
        (pSVar5->fields)._size = 0;
        if (0 < iVar3) {
          pGVar13 = (GameManagers_MapEditorGameManager_o *)0x0;
          System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar3,(MethodInfo *)0x0);
        }
        pGVar6 = *ppGVar14;
        if (((pGVar6 != (GameManagers_MapEditorGameManager_o *)0x0) &&
            (pMVar7 = (pGVar6->fields).MapScript, pMVar7 != (Map_MapScript_o *)0x0)) &&
           (pMVar8 = (pMVar7->fields).CustomAssets, pMVar8 != (Map_MapScriptCustomAssets_o *)0x0)) {
          __this_00 = (pMVar8->fields).CustomAssets;
          pGVar13 = (GameManagers_MapEditorGameManager_o *)0x0;
          if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)&pSStack_68,
                       (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
            while (__this_03.fields._8_8_ = pIVar17, __this_03.fields._list = _Var16.genericMethod,
                  __this_03.fields._current = (Il2CppObject *)obj,
                  bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (__this_03,(MethodInfo_321A1D0 *)&pSStack_68), (char)bVar10 != '\0') {
              UI_MapEditorCustomAssetPopup__AddAssetRow(__this,pSStack_58,method_00);
            }
            __this_04.fields._8_8_ = pIVar17;
            __this_04.fields._list = _Var16.genericMethod;
            __this_04.fields._current = (Il2CppObject *)obj;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_04,(MethodInfo_321A1C0 *)&pSStack_68);
            return;
          }
        }
      }
    }
  }
  pIVar11 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
label_04424497:
  auVar15 = il2cpp_runtime_helper_022b2fd0(pGVar13,pIVar11);
  if (auVar15._8_4_ == 1) {
    plVar12 = (long *)__cxa_begin_catch(auVar15._0_8_);
    lVar9 = *plVar12;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar17;
    __this_05.fields._list = _Var16.genericMethod;
    __this_05.fields._current = (Il2CppObject *)obj;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)&pSStack_68);
    if (lVar9 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar9);
  }
  __this_06.fields._8_8_ = pIVar17;
  __this_06.fields._list = _Var16.genericMethod;
  __this_06.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&pSStack_68);
  _Unwind_Resume(auVar15._0_8_);
}


// UI.MapEditorCustomAssetPopup$$AddAssetRow
// il2cpp: void UI_MapEditorCustomAssetPopup__AddAssetRow (UI_MapEditorCustomAssetPopup_o* __this, System_String_o* str, const MethodInfo* method);
// 0x4424590

void UI_MapEditorCustomAssetPopup__AddAssetRow
               (UI_MapEditorCustomAssetPopup_o *__this,System_String_o *str,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  System_String_o *value;
  InvokerMethod pIVar3;
  Il2CppRGCTXData *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppClass *pIVar4;
  UI_MapEditorTopPanel_o *__this_02;
  Il2CppMethodPointer pIVar5;
  UI_SetNamePopup_o *__this_03;
  void *pvVar6;
  UI_MessagePopup_o *__this_04;
  long lVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  undefined1 *puVar8;
  uint uVar9;
  bool_conflict bVar10;
  System_String_o *pSVar11;
  UnityEngine_Events_UnityAction_c *pUVar12;
  System_String_array *pSVar13;
  UnityEngine_Events_UnityAction_c *pUVar14;
  UnityEngine_Events_UnityAction_c *pUVar15;
  Il2CppObject *pIVar16;
  Il2CppRuntimeInterfaceOffsetPair *pIVar17;
  System_Collections_Generic_List_Enumerator_T__c *a;
  long *plVar18;
  Il2CppClass **ppIVar19;
  MethodInfo *extraout_RDX;
  UnityEngine_Events_UnityAction_c *method_00;
  UnityEngine_Events_UnityAction_c *__this_09;
  int32_t iVar20;
  undefined1 auVar21 [12];
  undefined8 in_stack_ffffffffffffff50;
  UnityEngine_Events_UnityAction_c *in_stack_ffffffffffffff58;
  Il2CppObject *pIVar22;
  UnityEngine_Events_UnityAction_c *local_90;
  
  if (g_data_057ae657 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Optional: add a URL for players to download the asset bundle, otherwise they must also have the file in CustomAssets folder");
    g_data_057ae657 = '\x01';
    method = extraout_RDX;
  }
  uVar9 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                    (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method,method);
  pSVar11 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar12 = (UnityEngine_Events_UnityAction_c *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  method_00 = (UnityEngine_Events_UnityAction_c *)(ulong)uVar9;
  __this_09 = pUVar12;
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pUVar12,uVar9,120.0,20.0,pSVar11,(MethodInfo *)0x0);
  if (str == (System_String_o *)0x0) {
label_04424806:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    method_00 = (UnityEngine_Events_UnityAction_c *)&g_data_0000002c;
    pSVar13 = System_String__Split(str,0x2c,0,(MethodInfo *)0x0);
    __this_09 = (UnityEngine_Events_UnityAction_c *)str;
    if (pSVar13 == (System_String_array *)0x0) goto label_04424806;
    iVar2 = (int)pSVar13->max_length;
    if ((iVar2 != 0) && (iVar2 != 1)) {
      pSVar11 = pSVar13->m_Items[0];
      value = pSVar13->m_Items[1];
      pUVar14 = (UnityEngine_Events_UnityAction_c *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      method_00 = (UnityEngine_Events_UnityAction_c *)0x0;
      __this_09 = pUVar14;
      Settings_StringSetting___ctor((Settings_StringSetting_o *)pUVar14,(MethodInfo *)0x0);
      if (pUVar14 != (UnityEngine_Events_UnityAction_c *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pUVar14,(Il2CppObject *)value,MethodInfo_Void_set_Value);
        pUVar15 = (UnityEngine_Events_UnityAction_c *)
                  UI_ElementFactory__CreateInputSetting
                            ((__this->fields).SinglePanel,(UI_ElementStyle_o *)pUVar12,
                             (Settings_BaseSetting_o *)pUVar14,pSVar11,"Optional: add a URL for players to download the asset bundle, otherwise they must also have the file in CustomAssets folder",220.0,40.0,0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                             (MethodInfo *)0x0);
        lVar7 = MethodInfo_Void_Add;
        __this_09 = (UnityEngine_Events_UnityAction_c *)(__this->fields)._elements;
        method_00 = pUVar12;
        if (__this_09 != (UnityEngine_Events_UnityAction_c *)0x0) {
          puVar8 = (undefined1 *)((long)&(__this_09->_1).namespaze + 4);
          *(int *)puVar8 = *(int *)puVar8 + 1;
          pIVar3 = (InvokerMethod)(__this_09->_1).name;
          if (pIVar3 != (InvokerMethod)0x0) {
            uVar9 = *(uint *)&(__this_09->_1).namespaze;
            if (uVar9 < *(uint *)(pIVar3 + 0x18)) {
              *(uint *)&(__this_09->_1).namespaze = uVar9 + 1;
              *(UnityEngine_Events_UnityAction_c **)(pIVar3 + (long)(int)uVar9 * 8 + 0x20) = pUVar15;
              il2cpp_runtime_helper_022b4080(pIVar3 + (long)(int)uVar9 * 8 + 0x20);
              __this_09 = (UnityEngine_Events_UnityAction_c *)(__this->fields)._settings;
              method_00 = pUVar15;
              lVar7 = MethodInfo_Void_Add;
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_09,(Il2CppObject *)pUVar15,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              __this_09 = (UnityEngine_Events_UnityAction_c *)(__this->fields)._settings;
              method_00 = pUVar15;
              lVar7 = MethodInfo_Void_Add;
            }
            MethodInfo_Void_Add = lVar7;
            if (__this_09 != (UnityEngine_Events_UnityAction_c *)0x0) {
              puVar8 = (undefined1 *)((long)&(__this_09->_1).namespaze + 4);
              *(int *)puVar8 = *(int *)puVar8 + 1;
              pIVar3 = (InvokerMethod)(__this_09->_1).name;
              if (pIVar3 != (InvokerMethod)0x0) {
                uVar9 = *(uint *)&(__this_09->_1).namespaze;
                if (uVar9 < *(uint *)(pIVar3 + 0x18)) {
                  *(uint *)&(__this_09->_1).namespaze = uVar9 + 1;
                  *(UnityEngine_Events_UnityAction_c **)(pIVar3 + (long)(int)uVar9 * 8 + 0x20) = pUVar14;
                  il2cpp_runtime_helper_022b4080(pIVar3 + (long)(int)uVar9 * 8 + 0x20,pUVar14);
                  return;
                }
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_09,(Il2CppObject *)pUVar14,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
          }
        }
      }
      goto label_04424806;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae658 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__14_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Add");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"Do you want to clear all custom asset bundles?");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Add asset bundle");
    il2cpp_runtime_helper_023445d0(&"Loading asset bundle...");
    il2cpp_runtime_helper_023445d0(&"ConfirmClear");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"Error: bundle name cannot be empty.");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"ConfirmAdd");
    g_data_057ae658 = '\x01';
  }
  pIVar22 = (Il2CppObject *)0x0;
  local_90 = (UnityEngine_Events_UnityAction_c *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar12 = *(UnityEngine_Events_UnityAction_c **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar12 != (UnityEngine_Events_UnityAction_c *)0x0) goto label_044249fa;
label_04424a2c:
    bVar10 = System_String__op_Equality((System_String_o *)method_00,"Back",(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      pUVar14 = method_00;
      bVar10 = System_String__op_Equality((System_String_o *)method_00,"Clear",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        pUVar14 = method_00;
        bVar10 = System_String__op_Equality((System_String_o *)method_00,"ConfirmClear",(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          pUVar14 = method_00;
          bVar10 = System_String__op_Equality((System_String_o *)method_00,"Add",(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            bVar10 = System_String__op_Equality((System_String_o *)method_00,"ConfirmAdd",(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              return;
            }
            if (((pUVar12 != (UnityEngine_Events_UnityAction_c *)0x0) &&
                (pvVar6 = (pUVar12->_1).events, pvVar6 != (void *)0x0)) &&
               (lVar7 = *(long *)((long)pvVar6 + 0xb8), lVar7 != 0)) {
              pSVar11 = *(System_String_o **)(lVar7 + 0x18);
              method_00 = (UnityEngine_Events_UnityAction_c *)0x0;
              if (pSVar11 != (System_String_o *)0x0) {
                a = (System_Collections_Generic_List_Enumerator_T__c *)
                    System_String__Trim(pSVar11,(MethodInfo *)0x0);
                bVar10 = System_String__op_Equality
                                   ((System_String_o *)a,
                                    (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                    (MethodInfo *)0x0);
                __this_04 = (pUVar12->_1).this_arg.data;
                method_00 = (UnityEngine_Events_UnityAction_c *)0x0;
                if (__this_04 != (UI_MessagePopup_o *)0x0) {
                  if ((char)bVar10 != '\0') {
                    UI_MessagePopup__Show(__this_04,"Error: bundle name cannot be empty.",1,(MethodInfo *)0x0);
                    return;
                  }
                  UI_MessagePopup__Show(__this_04,"Loading asset bundle...",0,(MethodInfo *)0x0);
                  if (g_data_057ae659 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadAssetBundle_d__15);
                    g_data_057ae659 = '\x01';
                  }
                  pUVar14 = (UnityEngine_Events_UnityAction_c *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadAssetBundle_d__15);
                  method_00 = pUVar14;
                  System_Object___ctor((Il2CppObject *)pUVar14,(MethodInfo *)0x0);
                  *(undefined4 *)&(pUVar14->_1).name = 0;
                  pUVar12 = (UnityEngine_Events_UnityAction_c *)0x0;
                  if (pUVar14 != (UnityEngine_Events_UnityAction_c *)0x0) {
                    *(UnityEngine_Events_UnityAction_c **)&(pUVar14->_1).byval_arg.bits = __this_09;
                    il2cpp_runtime_helper_022b4080(&(pUVar14->_1).byval_arg.bits,__this_09);
                    (pUVar14->_1).byval_arg.data = a;
                    il2cpp_runtime_helper_022b4080(&(pUVar14->_1).byval_arg,a);
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)__this_09,
                               (System_Collections_IEnumerator_o *)pUVar14,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          else {
            method_00 = pUVar14;
            if (pUVar12 != (UnityEngine_Events_UnityAction_c *)0x0) {
              __this_03 = (pUVar12->_1).events;
              pUVar12 = (UnityEngine_Events_UnityAction_c *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              method_00 = pUVar12;
              UnityEngine_Events_UnityAction___ctor();
              if (__this_03 != (UI_SetNamePopup_o *)0x0) {
                UI_SetNamePopup__Show
                          (__this_03,"",(UnityEngine_Events_UnityAction_o *)pUVar12,"Add asset bundle",
                           (System_String_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        else {
          ppIVar19 = (__this_09->_1).implementedInterfaces;
          method_00 = pUVar14;
          if ((ppIVar19 != (Il2CppClass **)0x0) && (pIVar4 = ppIVar19[5], pIVar4 != (Il2CppClass *)0x0)) {
            lVar7 = *(long *)&(pIVar4->_1).byval_arg.bits;
            pUVar14 = (UnityEngine_Events_UnityAction_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
            method_00 = pUVar14;
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)pUVar14,MethodInfo_List_1_System_String);
            pUVar12 = (UnityEngine_Events_UnityAction_c *)0x0;
            if (lVar7 != 0) {
              *(UnityEngine_Events_UnityAction_c **)(lVar7 + 0x10) = pUVar14;
              pUVar12 = (UnityEngine_Events_UnityAction_c *)(lVar7 + 0x10);
              il2cpp_runtime_helper_022b4080(pUVar12,pUVar14);
              if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              method_00 = (UnityEngine_Events_UnityAction_c *)0x0;
              ApplicationManagers_AssetBundleManager__Clear((MethodInfo *)0x0);
              __this_01 = (System_Collections_Generic_List_object__o *)(__this_09->_1).interfaceOffsets;
              if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff60,
                           __this_01,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
                while (__this_05.fields._8_8_ = in_stack_ffffffffffffff58,
                      __this_05.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50,
                      __this_05.fields._current = pIVar22,
                      bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60),
                      (char)bVar10 != '\0') {
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  pUVar12 = local_90;
                }
                method_00 = (UnityEngine_Events_UnityAction_c *)&stack0xffffffffffffff60;
                __this_06.fields._8_8_ = in_stack_ffffffffffffff58;
                __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
                __this_06.fields._current = pIVar22;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_06,(MethodInfo_321A1C0 *)method_00);
                goto label_04424efc;
              }
            }
          }
        }
      }
      else {
        method_00 = pUVar14;
        if (pUVar12 != (UnityEngine_Events_UnityAction_c *)0x0) {
          __this_00 = *(Il2CppRGCTXData **)&(pUVar12->_1).this_arg.bits;
          pUVar12 = (UnityEngine_Events_UnityAction_c *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          method_00 = pUVar12;
          UnityEngine_Events_UnityAction___ctor();
          if (__this_00 != (Il2CppRGCTXData *)0x0) {
            UI_ConfirmPopup__Show
                      ((UI_ConfirmPopup_o *)__this_00,"Do you want to clear all custom asset bundles?",(UnityEngine_Events_UnityAction_o *)pUVar12
                       ,(System_String_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_04425128;
    }
    in_stack_ffffffffffffff58 = pUVar12;
    pUVar14 = (UnityEngine_Events_UnityAction_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    method_00 = pUVar14;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pUVar14,MethodInfo_List_1_System_String);
    pIVar17 = (__this_09->_1).interfaceOffsets;
    if (pIVar17 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_04425128;
    if (pUVar14 != (UnityEngine_Events_UnityAction_c *)0x0) {
      iVar20 = 0;
      ppIVar19 = (__this_09->_1).implementedInterfaces;
      if (ppIVar19 != (Il2CppClass **)0x0) {
        while (ppIVar19[5] != (Il2CppClass *)0x0) {
          lVar7 = *(long *)&(ppIVar19[5]->_1).byval_arg.bits;
          method_00 = (UnityEngine_Events_UnityAction_c *)0x0;
          if (lVar7 == 0) break;
          method_00 = (UnityEngine_Events_UnityAction_c *)(lVar7 + 0x10);
          pUVar15 = in_stack_ffffffffffffff58;
          if (pIVar17[1].offset <= iVar20) goto label_04424e14;
          method_00 = (method_00->_1).image;
          if (((method_00 == (UnityEngine_Events_UnityAction_c *)0x0) ||
              (pUVar15 = (UnityEngine_Events_UnityAction_c *)
                         System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)method_00,iVar20,MethodInfo_String_get_Item
                                   ), pUVar15 == (UnityEngine_Events_UnityAction_c *)0x0)) ||
             (pSVar13 = System_String__Split((System_String_o *)pUVar15,0x2c,0,(MethodInfo *)0x0),
             method_00 = pUVar15, pSVar13 == (System_String_array *)0x0)) break;
          if ((int)pSVar13->max_length == 0) goto label_044250e4;
          method_00 = (UnityEngine_Events_UnityAction_c *)0x0;
          if (pSVar13->m_Items[0] == (System_String_o *)0x0) break;
          pUVar15 = (UnityEngine_Events_UnityAction_c *)
                    System_String__Trim(pSVar13->m_Items[0],(MethodInfo *)0x0);
          method_00 = __this_09->static_fields;
          if ((method_00 == (UnityEngine_Events_UnityAction_c *)0x0) ||
             (pIVar16 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)method_00,iVar20,MethodInfo_StringSetting_get_Item)
             , pUVar12 = pUVar15, pIVar16 == (Il2CppObject *)0x0)) break;
          method_00 = (UnityEngine_Events_UnityAction_c *)0x0;
          if (pIVar16[1].monitor == (System_String_o *)0x0) break;
          pSVar11 = System_String__Trim(pIVar16[1].monitor,(MethodInfo *)0x0);
          method_00 = pUVar15;
          pSVar11 = System_String__Concat_3af7150
                              ((System_String_o *)pUVar15,",",pSVar11,(MethodInfo *)0x0);
          lVar7 = MethodInfo_Void_Add;
          puVar8 = (undefined1 *)((long)&(pUVar14->_1).namespaze + 4);
          *(int *)puVar8 = *(int *)puVar8 + 1;
          pIVar3 = (InvokerMethod)((UnityEngine_Events_UnityAction_Fields *)&(pUVar14->_1).name)->method_ptr;
          if (pIVar3 == (InvokerMethod)0x0) break;
          uVar9 = *(uint *)&(pUVar14->_1).namespaze;
          if (uVar9 < *(uint *)(pIVar3 + 0x18)) {
            *(uint *)&(pUVar14->_1).namespaze = uVar9 + 1;
            method_00 = (UnityEngine_Events_UnityAction_c *)(pIVar3 + (long)(int)uVar9 * 8 + 0x20);
            *(System_String_o **)(pIVar3 + (long)(int)uVar9 * 8 + 0x20) = pSVar11;
            il2cpp_runtime_helper_022b4080();
            pIVar17 = (__this_09->_1).interfaceOffsets;
          }
          else {
            method_00 = pUVar14;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pUVar14,(Il2CppObject *)pSVar11,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            pIVar17 = (__this_09->_1).interfaceOffsets;
          }
          if (pIVar17 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) break;
          iVar20 = iVar20 + 1;
          ppIVar19 = (__this_09->_1).implementedInterfaces;
          if (ppIVar19 == (Il2CppClass **)0x0) break;
        }
      }
      goto label_04425128;
    }
    ppIVar19 = (__this_09->_1).implementedInterfaces;
    if ((ppIVar19 == (Il2CppClass **)0x0) || (pIVar4 = ppIVar19[5], pIVar4 == (Il2CppClass *)0x0))
    goto label_04425128;
    lVar7 = *(long *)&(pIVar4->_1).byval_arg.bits;
    method_00 = (UnityEngine_Events_UnityAction_c *)0x0;
    if (lVar7 == 0) goto label_04425128;
    method_00 = (UnityEngine_Events_UnityAction_c *)(lVar7 + 0x10);
    pUVar12 = in_stack_ffffffffffffff58;
    pUVar15 = in_stack_ffffffffffffff58;
    if (pIVar17[1].offset < 1) {
label_04424e14:
      (method_00->_1).image = pUVar14;
      in_stack_ffffffffffffff58 = pUVar15;
      il2cpp_runtime_helper_022b4080();
      pUVar12 = pUVar15;
      if (pUVar15 != (UnityEngine_Events_UnityAction_c *)0x0) {
        __this_02 = (UI_MapEditorTopPanel_o *)(pUVar15->_1).interfaceOffsets;
        method_00 = (UnityEngine_Events_UnityAction_c *)0x0;
        if (__this_02 != (UI_MapEditorTopPanel_o *)0x0) {
          UI_MapEditorTopPanel__Save(__this_02,(MethodInfo *)pUVar14);
          pIVar5 = (__this_09->_1).image;
          (**(code **)(pIVar5 + 0x298))(__this_09,*(undefined8 *)(pIVar5 + 0x2a0));
          return;
        }
      }
      goto label_04425128;
    }
  }
  else {
    pUVar12 = *(UnityEngine_Events_UnityAction_c **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar12 == (UnityEngine_Events_UnityAction_c *)0x0) goto label_04424a2c;
label_044249fa:
    pUVar14 = (pUVar12->_1).image;
    bVar1 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
    if ((bVar1 <= (pUVar14->_2).naturalAligment) &&
       ((pUVar14->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MapEditorMenu)) goto label_04424a2c;
    method_00 = pUVar12;
    il2cpp_runtime_helper_022b2fd0();
  }
  method_00 = (method_00->_1).image;
  if (((method_00 != (UnityEngine_Events_UnityAction_c *)0x0) &&
      (pUVar14 = (UnityEngine_Events_UnityAction_c *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)method_00,0,MethodInfo_String_get_Item),
      pUVar14 != (UnityEngine_Events_UnityAction_c *)0x0)) &&
     (pSVar13 = System_String__Split((System_String_o *)pUVar14,0x2c,0,(MethodInfo *)0x0), method_00 = pUVar14
     , pSVar13 != (System_String_array *)0x0)) {
    if ((int)pSVar13->max_length == 0) {
label_044250e4:
      pSVar13 = (System_String_array *)il2cpp_runtime_helper_022b2ca0();
    }
    method_00 = (UnityEngine_Events_UnityAction_c *)0x0;
    if (pSVar13->m_Items[0] != (System_String_o *)0x0) {
      pUVar14 = (UnityEngine_Events_UnityAction_c *)System_String__Trim(pSVar13->m_Items[0],(MethodInfo *)0x0)
      ;
      method_00 = __this_09->static_fields;
      if (((method_00 != (UnityEngine_Events_UnityAction_c *)0x0) &&
          (pIVar16 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)method_00,0,MethodInfo_StringSetting_get_Item),
          pUVar12 = pUVar14, pIVar16 != (Il2CppObject *)0x0)) &&
         (method_00 = pIVar16[1].monitor, method_00 != (UnityEngine_Events_UnityAction_c *)0x0))
      goto label_0442512d;
    }
  }
label_04425128:
  do {
    il2cpp_runtime_helper_022b2c90();
    pUVar14 = pUVar12;
label_0442512d:
    pSVar11 = System_String__Trim((System_String_o *)method_00,(MethodInfo *)0x0);
    System_String__Concat_3af7150((System_String_o *)pUVar14,",",pSVar11,(MethodInfo *)0x0);
    auVar21 = il2cpp_runtime_helper_022b2c90();
    pUVar12 = auVar21._0_8_;
    if (auVar21._8_4_ != 1) {
label_04425197:
      __this_08.fields._8_8_ = in_stack_ffffffffffffff58;
      __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
      __this_08.fields._current = pIVar22;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
      _Unwind_Resume(pUVar12);
    }
    plVar18 = (long *)__cxa_begin_catch(pUVar12);
    lVar7 = *plVar18;
    __cxa_end_catch();
    method_00 = (UnityEngine_Events_UnityAction_c *)&stack0xffffffffffffff60;
    __this_07.fields._8_8_ = in_stack_ffffffffffffff58;
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
    __this_07.fields._current = pIVar22;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_07,(MethodInfo_321A1C0 *)method_00);
    if (lVar7 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar7);
      goto label_04425197;
    }
label_04424efc:
    pvVar6 = __this_09->static_fields;
    if (pvVar6 != (void *)0x0) {
      *(int *)((long)pvVar6 + 0x1c) = *(int *)((long)pvVar6 + 0x1c) + 1;
      iVar20 = *(int32_t *)((long)pvVar6 + 0x18);
      *(undefined4 *)((long)pvVar6 + 0x18) = 0;
      if (0 < iVar20) {
        method_00 = *(UnityEngine_Events_UnityAction_c **)((long)pvVar6 + 0x10);
        System_Array__Clear((System_Array_o *)method_00,0,iVar20,(MethodInfo *)0x0);
      }
      pIVar17 = (__this_09->_1).interfaceOffsets;
      if (pIVar17 != (Il2CppRuntimeInterfaceOffsetPair *)0x0) {
        *(int *)&pIVar17[1].field_0xc = *(int *)&pIVar17[1].field_0xc + 1;
        iVar20 = pIVar17[1].offset;
        pIVar17[1].offset = 0;
        if (0 < iVar20) {
          System_Array__Clear((System_Array_o *)pIVar17[1].interfaceType,0,iVar20,(MethodInfo *)0x0);
        }
        return;
      }
    }
  } while( true );
}


// UI.MapEditorCustomAssetPopup$$OnButtonClick
// il2cpp: void UI_MapEditorCustomAssetPopup__OnButtonClick (UI_MapEditorCustomAssetPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4424810

void UI_MapEditorCustomAssetPopup__OnButtonClick
               (UI_MapEditorCustomAssetPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  Map_MapScript_o *pMVar5;
  Map_MapScriptCustomAssets_o *pMVar6;
  Il2CppRGCTXData *__this_00;
  UI_SetNamePopup_o *__this_01;
  System_Collections_Generic_List_StringSetting__o *pSVar7;
  UI_MessagePopup_o *__this_02;
  long lVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  undefined1 *puVar9;
  bool_conflict bVar10;
  Settings_StringSetting_array *pSVar11;
  Settings_StringSetting_array *pSVar12;
  System_String_array *pSVar13;
  Il2CppObject *pIVar14;
  System_Collections_Generic_List_GameObject__o *pSVar15;
  Settings_StringSetting_array *onSave;
  System_Collections_Generic_List_Enumerator_T__c *a;
  System_String_o *pSVar16;
  long *plVar17;
  GameManagers_MapEditorGameManager_o *pGVar18;
  int32_t iVar19;
  undefined1 auVar20 [12];
  undefined8 in_stack_ffffffffffffffa8;
  Settings_StringSetting_array *in_stack_ffffffffffffffb0;
  Il2CppClass *pIVar21;
  Settings_StringSetting_array *pSStack_38;
  
  if (g_data_057ae658 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__14_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Add");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"Do you want to clear all custom asset bundles?");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Add asset bundle");
    il2cpp_runtime_helper_023445d0(&"Loading asset bundle...");
    il2cpp_runtime_helper_023445d0(&"ConfirmClear");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"Error: bundle name cannot be empty.");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"ConfirmAdd");
    g_data_057ae658 = '\x01';
  }
  pIVar21 = (Il2CppClass *)0x0;
  pSStack_38 = (Settings_StringSetting_array *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    onSave = *(Settings_StringSetting_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (onSave != (Settings_StringSetting_array *)0x0) goto label_044249fa;
label_04424a2c:
    bVar10 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      pSVar11 = (Settings_StringSetting_array *)name;
      bVar10 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        pSVar11 = (Settings_StringSetting_array *)name;
        bVar10 = System_String__op_Equality(name,"ConfirmClear",(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          pSVar11 = (Settings_StringSetting_array *)name;
          bVar10 = System_String__op_Equality(name,"Add",(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            bVar10 = System_String__op_Equality(name,"ConfirmAdd",(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              return;
            }
            if (((onSave != (Settings_StringSetting_array *)0x0) &&
                (*(void **)((long)((Il2CppType *)onSave->m_Items + 6) + 8) != (void *)0x0)) &&
               (lVar8 = *(long *)((long)*(void **)((long)((Il2CppType *)onSave->m_Items + 6) + 8) + 0xb8),
               lVar8 != 0)) {
              pSVar16 = *(System_String_o **)(lVar8 + 0x18);
              name = (System_String_o *)0x0;
              if (pSVar16 != (System_String_o *)0x0) {
                a = (System_Collections_Generic_List_Enumerator_T__c *)
                    System_String__Trim(pSVar16,(MethodInfo *)0x0);
                bVar10 = System_String__op_Equality
                                   ((System_String_o *)a,
                                    (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                    (MethodInfo *)0x0);
                __this_02 = ((Il2CppType *)onSave->m_Items)[1].data;
                name = (System_String_o *)0x0;
                if (__this_02 != (UI_MessagePopup_o *)0x0) {
                  if ((char)bVar10 != '\0') {
                    UI_MessagePopup__Show(__this_02,"Error: bundle name cannot be empty.",1,(MethodInfo *)0x0);
                    return;
                  }
                  UI_MessagePopup__Show(__this_02,"Loading asset bundle...",0,(MethodInfo *)0x0);
                  if (g_data_057ae659 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadAssetBundle_d__15);
                    g_data_057ae659 = '\x01';
                  }
                  pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadAssetBundle_d__15);
                  name = (System_String_o *)pSVar11;
                  System_Object___ctor((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
                  *(undefined4 *)&pSVar11->bounds = 0;
                  onSave = (Settings_StringSetting_array *)0x0;
                  if (pSVar11 != (Settings_StringSetting_array *)0x0) {
                    *(UI_MapEditorCustomAssetPopup_o **)&((Il2CppType *)pSVar11->m_Items)->bits = __this;
                    il2cpp_runtime_helper_022b4080(&((Il2CppType *)pSVar11->m_Items)->bits,__this);
                    ((Il2CppType *)pSVar11->m_Items)->data = a;
                    il2cpp_runtime_helper_022b4080((Il2CppType *)pSVar11->m_Items,a);
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)__this,
                               (System_Collections_IEnumerator_o *)pSVar11,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          else {
            name = (System_String_o *)pSVar11;
            if (onSave != (Settings_StringSetting_array *)0x0) {
              __this_01 = *(void **)((long)((Il2CppType *)onSave->m_Items + 6) + 8);
              onSave = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              name = (System_String_o *)onSave;
              UnityEngine_Events_UnityAction___ctor();
              if (__this_01 != (UI_SetNamePopup_o *)0x0) {
                UI_SetNamePopup__Show
                          (__this_01,"",(UnityEngine_Events_UnityAction_o *)onSave,"Add asset bundle",
                           (System_String_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        else {
          pGVar18 = (__this->fields)._gameManager;
          name = (System_String_o *)pSVar11;
          if ((pGVar18 != (GameManagers_MapEditorGameManager_o *)0x0) &&
             (pMVar5 = (pGVar18->fields).MapScript, pMVar5 != (Map_MapScript_o *)0x0)) {
            onSave = (Settings_StringSetting_array *)(pMVar5->fields).CustomAssets;
            pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
            name = (System_String_o *)pSVar11;
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_System_String);
            if (onSave != (Settings_StringSetting_array *)0x0) {
              onSave->bounds = (Il2CppArrayBounds *)pSVar11;
              onSave = (Settings_StringSetting_array *)&onSave->bounds;
              il2cpp_runtime_helper_022b4080(onSave,pSVar11);
              if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              name = (System_String_o *)0x0;
              ApplicationManagers_AssetBundleManager__Clear((MethodInfo *)0x0);
              pSVar15 = (__this->fields)._elements;
              if (pSVar15 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
                           (System_Collections_Generic_List_object__o *)pSVar15,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
                while (__this_03.fields._8_8_ = in_stack_ffffffffffffffb0,
                      __this_03.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8,
                      __this_03.fields._current = (Il2CppObject *)pIVar21,
                      bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8),
                      (char)bVar10 != '\0') {
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  onSave = pSStack_38;
                }
                name = (System_String_o *)&stack0xffffffffffffffb8;
                __this_04.fields._8_8_ = in_stack_ffffffffffffffb0;
                __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
                __this_04.fields._current = (Il2CppObject *)pIVar21;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_04,(MethodInfo_321A1C0 *)name);
                goto label_04424efc;
              }
            }
          }
        }
      }
      else {
        name = (System_String_o *)pSVar11;
        if (onSave != (Settings_StringSetting_array *)0x0) {
          __this_00 = *(Il2CppRGCTXData **)&((Il2CppType *)onSave->m_Items)[1].bits;
          onSave = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          name = (System_String_o *)onSave;
          UnityEngine_Events_UnityAction___ctor();
          if (__this_00 != (Il2CppRGCTXData *)0x0) {
            UI_ConfirmPopup__Show
                      ((UI_ConfirmPopup_o *)__this_00,"Do you want to clear all custom asset bundles?",(UnityEngine_Events_UnityAction_o *)onSave,
                       (System_String_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_04425128;
    }
    in_stack_ffffffffffffffb0 = onSave;
    pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    name = (System_String_o *)pSVar11;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_System_String);
    pSVar15 = (__this->fields)._elements;
    if (pSVar15 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04425128;
    if (pSVar11 != (Settings_StringSetting_array *)0x0) {
      iVar19 = 0;
      pGVar18 = (__this->fields)._gameManager;
      if (pGVar18 != (GameManagers_MapEditorGameManager_o *)0x0) {
        while (pMVar5 = (pGVar18->fields).MapScript, pMVar5 != (Map_MapScript_o *)0x0) {
          pMVar6 = (pMVar5->fields).CustomAssets;
          name = (System_String_o *)(Settings_StringSetting_array *)0x0;
          if (pMVar6 == (Map_MapScriptCustomAssets_o *)0x0) break;
          name = (System_String_o *)&pMVar6->fields;
          pSVar12 = in_stack_ffffffffffffffb0;
          if ((pSVar15->fields)._size <= iVar19) goto label_04424e14;
          name = (System_String_o *)((Map_MapScriptCustomAssets_Fields *)name)->CustomAssets;
          if ((((Settings_StringSetting_array *)name == (Settings_StringSetting_array *)0x0) ||
              (pSVar12 = (Settings_StringSetting_array *)
                         System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)name,iVar19,MethodInfo_String_get_Item),
              pSVar12 == (Settings_StringSetting_array *)0x0)) ||
             (pSVar13 = System_String__Split((System_String_o *)pSVar12,0x2c,0,(MethodInfo *)0x0),
             name = (System_String_o *)pSVar12, pSVar13 == (System_String_array *)0x0)) break;
          if ((int)pSVar13->max_length == 0) goto label_044250e4;
          name = (System_String_o *)(Settings_StringSetting_array *)0x0;
          if (pSVar13->m_Items[0] == (System_String_o *)0x0) break;
          pSVar12 = (Settings_StringSetting_array *)System_String__Trim(pSVar13->m_Items[0],(MethodInfo *)0x0)
          ;
          name = (System_String_o *)(__this->fields)._settings;
          if (((Settings_StringSetting_array *)name == (Settings_StringSetting_array *)0x0) ||
             (pIVar14 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)name,iVar19,MethodInfo_StringSetting_get_Item),
             onSave = pSVar12, pIVar14 == (Il2CppObject *)0x0)) break;
          name = (System_String_o *)(Settings_StringSetting_array *)0x0;
          if (pIVar14[1].monitor == (System_String_o *)0x0) break;
          pSVar16 = System_String__Trim(pIVar14[1].monitor,(MethodInfo *)0x0);
          name = (System_String_o *)pSVar12;
          pSVar16 = System_String__Concat_3af7150
                              ((System_String_o *)pSVar12,",",pSVar16,(MethodInfo *)0x0);
          lVar8 = MethodInfo_Void_Add;
          puVar9 = (undefined1 *)((long)&pSVar11->max_length + 4);
          *(int *)puVar9 = *(int *)puVar9 + 1;
          pIVar4 = (InvokerMethod)((UnityEngine_Events_UnityAction_Fields *)&pSVar11->bounds)->method_ptr;
          if (pIVar4 == (InvokerMethod)0x0) break;
          uVar2 = *(uint *)&pSVar11->max_length;
          if (uVar2 < *(uint *)(pIVar4 + 0x18)) {
            *(uint *)&pSVar11->max_length = uVar2 + 1;
            name = (System_String_o *)(pIVar4 + (long)(int)uVar2 * 8 + 0x20);
            *(System_String_o **)(pIVar4 + (long)(int)uVar2 * 8 + 0x20) = pSVar16;
            il2cpp_runtime_helper_022b4080();
            pSVar15 = (__this->fields)._elements;
          }
          else {
            name = (System_String_o *)pSVar11;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pSVar16,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            pSVar15 = (__this->fields)._elements;
          }
          if (pSVar15 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
          iVar19 = iVar19 + 1;
          pGVar18 = (__this->fields)._gameManager;
          if (pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) break;
        }
      }
      goto label_04425128;
    }
    pGVar18 = (__this->fields)._gameManager;
    if ((pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) ||
       (pMVar5 = (pGVar18->fields).MapScript, pMVar5 == (Map_MapScript_o *)0x0)) goto label_04425128;
    pMVar6 = (pMVar5->fields).CustomAssets;
    name = (System_String_o *)(Settings_StringSetting_array *)0x0;
    if (pMVar6 == (Map_MapScriptCustomAssets_o *)0x0) goto label_04425128;
    name = (System_String_o *)&pMVar6->fields;
    onSave = in_stack_ffffffffffffffb0;
    pSVar12 = in_stack_ffffffffffffffb0;
    if ((pSVar15->fields)._size < 1) {
label_04424e14:
      (((Settings_StringSetting_array *)name)->obj).klass = (Il2CppClass *)pSVar11;
      in_stack_ffffffffffffffb0 = pSVar12;
      il2cpp_runtime_helper_022b4080();
      onSave = pSVar12;
      if (pSVar12 != (Settings_StringSetting_array *)0x0) {
        name = (System_String_o *)(Settings_StringSetting_array *)0x0;
        if (((Il2CppType *)pSVar12->m_Items)[9].data != (UI_MapEditorTopPanel_o *)0x0) {
          UI_MapEditorTopPanel__Save(((Il2CppType *)pSVar12->m_Items)[9].data,(MethodInfo *)pSVar11);
          (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
          return;
        }
      }
      goto label_04425128;
    }
  }
  else {
    onSave = *(Settings_StringSetting_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (onSave == (Settings_StringSetting_array *)0x0) goto label_04424a2c;
label_044249fa:
    pIVar3 = ((Il2CppClass_1 *)&onSave->obj)->image;
    if (((byte)*(code *)(TypeInfo_MapEditorMenu + 0x130) <= (byte)pIVar3[0x130]) &&
       (*(long *)(*(long *)(pIVar3 + 200) + -8 + (ulong)(byte)*(code *)(TypeInfo_MapEditorMenu + 0x130) * 8) ==
        TypeInfo_MapEditorMenu)) goto label_04424a2c;
    name = (System_String_o *)onSave;
    il2cpp_runtime_helper_022b2fd0();
  }
  name = ((Il2CppClass_1 *)&((Settings_StringSetting_array *)name)->obj)->image;
  if ((((Settings_StringSetting_array *)name != (Settings_StringSetting_array *)0x0) &&
      (pSVar11 = (Settings_StringSetting_array *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)name,0,MethodInfo_String_get_Item),
      pSVar11 != (Settings_StringSetting_array *)0x0)) &&
     (pSVar13 = System_String__Split((System_String_o *)pSVar11,0x2c,0,(MethodInfo *)0x0),
     name = (System_String_o *)pSVar11, pSVar13 != (System_String_array *)0x0)) {
    if ((int)pSVar13->max_length == 0) {
label_044250e4:
      pSVar13 = (System_String_array *)il2cpp_runtime_helper_022b2ca0();
    }
    name = (System_String_o *)(Settings_StringSetting_array *)0x0;
    if (pSVar13->m_Items[0] != (System_String_o *)0x0) {
      pSVar11 = (Settings_StringSetting_array *)System_String__Trim(pSVar13->m_Items[0],(MethodInfo *)0x0);
      name = (System_String_o *)(__this->fields)._settings;
      if ((((Settings_StringSetting_array *)name != (Settings_StringSetting_array *)0x0) &&
          (pIVar14 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)name,0,MethodInfo_StringSetting_get_Item),
          onSave = pSVar11, pIVar14 != (Il2CppObject *)0x0)) &&
         (name = pIVar14[1].monitor,
         (Settings_StringSetting_array *)name != (Settings_StringSetting_array *)0x0)) goto label_0442512d;
    }
  }
label_04425128:
  do {
    il2cpp_runtime_helper_022b2c90();
    pSVar11 = onSave;
label_0442512d:
    pSVar16 = System_String__Trim(name,(MethodInfo *)0x0);
    System_String__Concat_3af7150((System_String_o *)pSVar11,",",pSVar16,(MethodInfo *)0x0);
    auVar20 = il2cpp_runtime_helper_022b2c90();
    onSave = auVar20._0_8_;
    if (auVar20._8_4_ != 1) {
label_04425197:
      __this_06.fields._8_8_ = in_stack_ffffffffffffffb0;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
      __this_06.fields._current = (Il2CppObject *)pIVar21;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
      _Unwind_Resume(onSave);
    }
    plVar17 = (long *)__cxa_begin_catch(onSave);
    lVar8 = *plVar17;
    __cxa_end_catch();
    name = (System_String_o *)&stack0xffffffffffffffb8;
    __this_05.fields._8_8_ = in_stack_ffffffffffffffb0;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
    __this_05.fields._current = (Il2CppObject *)pIVar21;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)name);
    if (lVar8 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar8);
      goto label_04425197;
    }
label_04424efc:
    pSVar7 = (__this->fields)._settings;
    if (pSVar7 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
      piVar1 = &(pSVar7->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar19 = (pSVar7->fields)._size;
      (pSVar7->fields)._size = 0;
      if (0 < iVar19) {
        name = (System_String_o *)(pSVar7->fields)._items;
        System_Array__Clear((System_Array_o *)name,0,iVar19,(MethodInfo *)0x0);
      }
      pSVar15 = (__this->fields)._elements;
      if (pSVar15 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar1 = &(pSVar15->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar19 = (pSVar15->fields)._size;
        (pSVar15->fields)._size = 0;
        if (0 < iVar19) {
          System_Array__Clear((System_Array_o *)(pSVar15->fields)._items,0,iVar19,(MethodInfo *)0x0);
        }
        return;
      }
    }
  } while( true );
}


// UI.MapEditorCustomAssetPopup$$LoadAssetBundle
// il2cpp: System_Collections_IEnumerator_o* UI_MapEditorCustomAssetPopup__LoadAssetBundle (UI_MapEditorCustomAssetPopup_o* __this, System_String_o* bundle, const MethodInfo* method);
// 0x44254e0

System_Collections_IEnumerator_o *
UI_MapEditorCustomAssetPopup__LoadAssetBundle
          (UI_MapEditorCustomAssetPopup_o *__this,System_String_o *bundle,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae659 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadAssetBundle_d__15);
    g_data_057ae659 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadAssetBundle_d__15);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)bundle;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,bundle);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// UI.MapEditorCustomAssetPopup$$.ctor
// il2cpp: void UI_MapEditorCustomAssetPopup___ctor (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x4425590

void UI_MapEditorCustomAssetPopup___ctor(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_StringSetting__o *__this_01;
  
  if (g_data_057ae65a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_StringSetting);
    g_data_057ae65a = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._elements = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._elements,__this_00);
  __this_01 = (System_Collections_Generic_List_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_StringSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Settings_StringSetting);
  (__this->fields)._settings = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._settings);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomAssetPopup$$<Setup>b__11_0
// il2cpp: void UI_MapEditorCustomAssetPopup___Setup_b__11_0 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x4425660

void UI_MapEditorCustomAssetPopup___Setup_b__11_0(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t *piVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  Il2CppArrayBounds *pIVar5;
  Map_MapScript_o *pMVar6;
  Map_MapScriptCustomAssets_o *pMVar7;
  Il2CppRGCTXData *__this_00;
  UI_SetNamePopup_o *__this_01;
  System_Collections_Generic_List_StringSetting__o *pSVar8;
  UI_MessagePopup_o *__this_02;
  long lVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar10;
  Settings_StringSetting_array *pSVar11;
  Settings_StringSetting_array *pSVar12;
  System_String_array *pSVar13;
  Il2CppObject *pIVar14;
  System_Collections_Generic_List_GameObject__o *pSVar15;
  Settings_StringSetting_array *onSave;
  System_Collections_Generic_List_Enumerator_T__c *a;
  System_String_o *pSVar16;
  long *plVar17;
  GameManagers_MapEditorGameManager_o *pGVar18;
  Settings_StringSetting_array *method_00;
  int32_t iVar19;
  undefined1 auVar20 [12];
  undefined8 in_stack_ffffffffffffffa8;
  Settings_StringSetting_array *in_stack_ffffffffffffffb0;
  Il2CppClass *pIVar21;
  Settings_StringSetting_array *pSStack_38;
  
  if (g_data_057ae65b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Add");
    g_data_057ae65b = '\x01';
  }
  method_00 = "Add";
  if (g_data_057ae658 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__14_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Add");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"Do you want to clear all custom asset bundles?");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Add asset bundle");
    il2cpp_runtime_helper_023445d0(&"Loading asset bundle...");
    il2cpp_runtime_helper_023445d0(&"ConfirmClear");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"Error: bundle name cannot be empty.");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"ConfirmAdd");
    g_data_057ae658 = '\x01';
  }
  pIVar21 = (Il2CppClass *)0x0;
  pSStack_38 = (Settings_StringSetting_array *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    onSave = *(Settings_StringSetting_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (onSave != (Settings_StringSetting_array *)0x0) goto label_044249fa;
label_04424a2c:
    bVar10 = System_String__op_Equality((System_String_o *)method_00,"Back",(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      pSVar11 = method_00;
      bVar10 = System_String__op_Equality((System_String_o *)method_00,"Clear",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        pSVar11 = method_00;
        bVar10 = System_String__op_Equality((System_String_o *)method_00,"ConfirmClear",(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          pSVar11 = method_00;
          bVar10 = System_String__op_Equality
                             ((System_String_o *)method_00,(System_String_o *)"Add",(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            bVar10 = System_String__op_Equality((System_String_o *)method_00,"ConfirmAdd",(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              return;
            }
            if (((onSave != (Settings_StringSetting_array *)0x0) &&
                (onSave->m_Items[0xd] != (Settings_StringSetting_o *)0x0)) &&
               (lVar9 = *(long *)((long)onSave->m_Items[0xd] + 0xb8), lVar9 != 0)) {
              pSVar16 = *(System_String_o **)(lVar9 + 0x18);
              method_00 = (Settings_StringSetting_array *)0x0;
              if (pSVar16 != (System_String_o *)0x0) {
                a = (System_Collections_Generic_List_Enumerator_T__c *)
                    System_String__Trim(pSVar16,(MethodInfo *)0x0);
                bVar10 = System_String__op_Equality
                                   ((System_String_o *)a,
                                    (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                    (MethodInfo *)0x0);
                __this_02 = (UI_MessagePopup_o *)onSave->m_Items[2];
                method_00 = (Settings_StringSetting_array *)0x0;
                if (__this_02 != (UI_MessagePopup_o *)0x0) {
                  if ((char)bVar10 != '\0') {
                    UI_MessagePopup__Show(__this_02,"Error: bundle name cannot be empty.",1,(MethodInfo *)0x0);
                    return;
                  }
                  UI_MessagePopup__Show(__this_02,"Loading asset bundle...",0,(MethodInfo *)0x0);
                  if (g_data_057ae659 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadAssetBundle_d__15);
                    g_data_057ae659 = '\x01';
                  }
                  pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadAssetBundle_d__15);
                  method_00 = pSVar11;
                  System_Object___ctor((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
                  *(undefined4 *)&pSVar11->bounds = 0;
                  onSave = (Settings_StringSetting_array *)0x0;
                  if (pSVar11 != (Settings_StringSetting_array *)0x0) {
                    pSVar11->m_Items[1] = (Settings_StringSetting_o *)__this;
                    il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 1,__this);
                    pSVar11->m_Items[0] = (Settings_StringSetting_o *)a;
                    il2cpp_runtime_helper_022b4080(pSVar11->m_Items,a);
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)__this,
                               (System_Collections_IEnumerator_o *)pSVar11,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          else {
            method_00 = pSVar11;
            if (onSave != (Settings_StringSetting_array *)0x0) {
              __this_01 = (UI_SetNamePopup_o *)onSave->m_Items[0xd];
              onSave = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              method_00 = onSave;
              UnityEngine_Events_UnityAction___ctor();
              if (__this_01 != (UI_SetNamePopup_o *)0x0) {
                UI_SetNamePopup__Show
                          (__this_01,"",(UnityEngine_Events_UnityAction_o *)onSave,"Add asset bundle",
                           (System_String_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        else {
          pGVar18 = (__this->fields)._gameManager;
          method_00 = pSVar11;
          if ((pGVar18 != (GameManagers_MapEditorGameManager_o *)0x0) &&
             (pMVar6 = (pGVar18->fields).MapScript, pMVar6 != (Map_MapScript_o *)0x0)) {
            onSave = (Settings_StringSetting_array *)(pMVar6->fields).CustomAssets;
            pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
            method_00 = pSVar11;
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_System_String);
            if (onSave != (Settings_StringSetting_array *)0x0) {
              onSave->bounds = (Il2CppArrayBounds *)pSVar11;
              onSave = (Settings_StringSetting_array *)&onSave->bounds;
              il2cpp_runtime_helper_022b4080(onSave,pSVar11);
              if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              method_00 = (Settings_StringSetting_array *)0x0;
              ApplicationManagers_AssetBundleManager__Clear((MethodInfo *)0x0);
              pSVar15 = (__this->fields)._elements;
              if (pSVar15 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
                           (System_Collections_Generic_List_object__o *)pSVar15,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
                while (__this_03.fields._8_8_ = in_stack_ffffffffffffffb0,
                      __this_03.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8,
                      __this_03.fields._current = (Il2CppObject *)pIVar21,
                      bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8),
                      (char)bVar10 != '\0') {
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  onSave = pSStack_38;
                }
                method_00 = (Settings_StringSetting_array *)&stack0xffffffffffffffb8;
                __this_04.fields._8_8_ = in_stack_ffffffffffffffb0;
                __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
                __this_04.fields._current = (Il2CppObject *)pIVar21;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_04,(MethodInfo_321A1C0 *)method_00);
                goto label_04424efc;
              }
            }
          }
        }
      }
      else {
        method_00 = pSVar11;
        if (onSave != (Settings_StringSetting_array *)0x0) {
          __this_00 = (Il2CppRGCTXData *)onSave->m_Items[3];
          onSave = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          method_00 = onSave;
          UnityEngine_Events_UnityAction___ctor();
          if (__this_00 != (Il2CppRGCTXData *)0x0) {
            UI_ConfirmPopup__Show
                      ((UI_ConfirmPopup_o *)__this_00,"Do you want to clear all custom asset bundles?",(UnityEngine_Events_UnityAction_o *)onSave,
                       (System_String_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_04425128;
    }
    in_stack_ffffffffffffffb0 = onSave;
    pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    method_00 = pSVar11;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_System_String);
    pSVar15 = (__this->fields)._elements;
    if (pSVar15 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04425128;
    if (pSVar11 != (Settings_StringSetting_array *)0x0) {
      iVar19 = 0;
      pGVar18 = (__this->fields)._gameManager;
      if (pGVar18 != (GameManagers_MapEditorGameManager_o *)0x0) {
        while (pMVar6 = (pGVar18->fields).MapScript, pMVar6 != (Map_MapScript_o *)0x0) {
          pMVar7 = (pMVar6->fields).CustomAssets;
          method_00 = (Settings_StringSetting_array *)0x0;
          if (pMVar7 == (Map_MapScriptCustomAssets_o *)0x0) break;
          method_00 = (Settings_StringSetting_array *)&pMVar7->fields;
          pSVar12 = in_stack_ffffffffffffffb0;
          if ((pSVar15->fields)._size <= iVar19) goto label_04424e14;
          method_00 = (Settings_StringSetting_array *)
                      ((Map_MapScriptCustomAssets_Fields *)method_00)->CustomAssets;
          if (((method_00 == (Settings_StringSetting_array *)0x0) ||
              (pSVar12 = (Settings_StringSetting_array *)
                         System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)method_00,iVar19,MethodInfo_String_get_Item
                                   ), pSVar12 == (Settings_StringSetting_array *)0x0)) ||
             (pSVar13 = System_String__Split((System_String_o *)pSVar12,0x2c,0,(MethodInfo *)0x0),
             method_00 = pSVar12, pSVar13 == (System_String_array *)0x0)) break;
          if ((int)pSVar13->max_length == 0) goto label_044250e4;
          method_00 = (Settings_StringSetting_array *)0x0;
          if (pSVar13->m_Items[0] == (System_String_o *)0x0) break;
          pSVar12 = (Settings_StringSetting_array *)System_String__Trim(pSVar13->m_Items[0],(MethodInfo *)0x0)
          ;
          method_00 = (Settings_StringSetting_array *)(__this->fields)._settings;
          if ((method_00 == (Settings_StringSetting_array *)0x0) ||
             (pIVar14 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)method_00,iVar19,MethodInfo_StringSetting_get_Item)
             , onSave = pSVar12, pIVar14 == (Il2CppObject *)0x0)) break;
          method_00 = (Settings_StringSetting_array *)0x0;
          if (pIVar14[1].monitor == (System_String_o *)0x0) break;
          pSVar16 = System_String__Trim(pIVar14[1].monitor,(MethodInfo *)0x0);
          method_00 = pSVar12;
          pSVar16 = System_String__Concat_3af7150
                              ((System_String_o *)pSVar12,",",pSVar16,(MethodInfo *)0x0);
          lVar9 = MethodInfo_Void_Add;
          piVar1 = (int *)((long)&pSVar11->max_length + 4);
          *piVar1 = *piVar1 + 1;
          pIVar5 = pSVar11->bounds;
          if (pIVar5 == (Il2CppArrayBounds *)0x0) break;
          uVar3 = *(uint *)&pSVar11->max_length;
          if (uVar3 < (uint)pIVar5[1].lower_bound) {
            *(uint *)&pSVar11->max_length = uVar3 + 1;
            method_00 = (Settings_StringSetting_array *)(&pIVar5[2].length + (int)uVar3);
            (&pIVar5[2].length)[(int)uVar3] = (il2cpp_array_size_t)pSVar16;
            il2cpp_runtime_helper_022b4080();
            pSVar15 = (__this->fields)._elements;
          }
          else {
            method_00 = pSVar11;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pSVar16,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            pSVar15 = (__this->fields)._elements;
          }
          if (pSVar15 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
          iVar19 = iVar19 + 1;
          pGVar18 = (__this->fields)._gameManager;
          if (pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) break;
        }
      }
      goto label_04425128;
    }
    pGVar18 = (__this->fields)._gameManager;
    if ((pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) ||
       (pMVar6 = (pGVar18->fields).MapScript, pMVar6 == (Map_MapScript_o *)0x0)) goto label_04425128;
    pMVar7 = (pMVar6->fields).CustomAssets;
    method_00 = (Settings_StringSetting_array *)0x0;
    if (pMVar7 == (Map_MapScriptCustomAssets_o *)0x0) goto label_04425128;
    method_00 = (Settings_StringSetting_array *)&pMVar7->fields;
    onSave = in_stack_ffffffffffffffb0;
    pSVar12 = in_stack_ffffffffffffffb0;
    if ((pSVar15->fields)._size < 1) {
label_04424e14:
      (method_00->obj).klass = (Il2CppClass *)pSVar11;
      in_stack_ffffffffffffffb0 = pSVar12;
      il2cpp_runtime_helper_022b4080();
      onSave = pSVar12;
      if (pSVar12 != (Settings_StringSetting_array *)0x0) {
        method_00 = (Settings_StringSetting_array *)0x0;
        if ((UI_MapEditorTopPanel_o *)pSVar12->m_Items[0x12] != (UI_MapEditorTopPanel_o *)0x0) {
          UI_MapEditorTopPanel__Save((UI_MapEditorTopPanel_o *)pSVar12->m_Items[0x12],(MethodInfo *)pSVar11);
          (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
          return;
        }
      }
      goto label_04425128;
    }
  }
  else {
    onSave = *(Settings_StringSetting_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (onSave == (Settings_StringSetting_array *)0x0) goto label_04424a2c;
label_044249fa:
    pIVar4 = (onSave->obj).klass;
    if ((*(byte *)(TypeInfo_MapEditorMenu + 0x130) <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)*(byte *)(TypeInfo_MapEditorMenu + 0x130) - 1] == (Il2CppClass *)TypeInfo_MapEditorMenu)
       ) goto label_04424a2c;
    method_00 = onSave;
    il2cpp_runtime_helper_022b2fd0();
  }
  method_00 = (Settings_StringSetting_array *)(method_00->obj).klass;
  if (((method_00 != (Settings_StringSetting_array *)0x0) &&
      (pSVar11 = (Settings_StringSetting_array *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)method_00,0,MethodInfo_String_get_Item),
      pSVar11 != (Settings_StringSetting_array *)0x0)) &&
     (pSVar13 = System_String__Split((System_String_o *)pSVar11,0x2c,0,(MethodInfo *)0x0), method_00 = pSVar11
     , pSVar13 != (System_String_array *)0x0)) {
    if ((int)pSVar13->max_length == 0) {
label_044250e4:
      pSVar13 = (System_String_array *)il2cpp_runtime_helper_022b2ca0();
    }
    method_00 = (Settings_StringSetting_array *)0x0;
    if (pSVar13->m_Items[0] != (System_String_o *)0x0) {
      pSVar11 = (Settings_StringSetting_array *)System_String__Trim(pSVar13->m_Items[0],(MethodInfo *)0x0);
      method_00 = (Settings_StringSetting_array *)(__this->fields)._settings;
      if (((method_00 != (Settings_StringSetting_array *)0x0) &&
          (pIVar14 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)method_00,0,MethodInfo_StringSetting_get_Item),
          onSave = pSVar11, pIVar14 != (Il2CppObject *)0x0)) &&
         (method_00 = pIVar14[1].monitor, method_00 != (Settings_StringSetting_array *)0x0))
      goto label_0442512d;
    }
  }
label_04425128:
  do {
    il2cpp_runtime_helper_022b2c90();
    pSVar11 = onSave;
label_0442512d:
    pSVar16 = System_String__Trim((System_String_o *)method_00,(MethodInfo *)0x0);
    System_String__Concat_3af7150((System_String_o *)pSVar11,",",pSVar16,(MethodInfo *)0x0);
    auVar20 = il2cpp_runtime_helper_022b2c90();
    onSave = auVar20._0_8_;
    if (auVar20._8_4_ != 1) {
label_04425197:
      __this_06.fields._8_8_ = in_stack_ffffffffffffffb0;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
      __this_06.fields._current = (Il2CppObject *)pIVar21;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
      _Unwind_Resume(onSave);
    }
    plVar17 = (long *)__cxa_begin_catch(onSave);
    lVar9 = *plVar17;
    __cxa_end_catch();
    method_00 = (Settings_StringSetting_array *)&stack0xffffffffffffffb8;
    __this_05.fields._8_8_ = in_stack_ffffffffffffffb0;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
    __this_05.fields._current = (Il2CppObject *)pIVar21;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)method_00);
    if (lVar9 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar9);
      goto label_04425197;
    }
label_04424efc:
    pSVar8 = (__this->fields)._settings;
    if (pSVar8 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
      piVar2 = &(pSVar8->fields)._version;
      *piVar2 = *piVar2 + 1;
      iVar19 = (pSVar8->fields)._size;
      (pSVar8->fields)._size = 0;
      if (0 < iVar19) {
        method_00 = (pSVar8->fields)._items;
        System_Array__Clear((System_Array_o *)method_00,0,iVar19,(MethodInfo *)0x0);
      }
      pSVar15 = (__this->fields)._elements;
      if (pSVar15 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar2 = &(pSVar15->fields)._version;
        *piVar2 = *piVar2 + 1;
        iVar19 = (pSVar15->fields)._size;
        (pSVar15->fields)._size = 0;
        if (0 < iVar19) {
          System_Array__Clear((System_Array_o *)(pSVar15->fields)._items,0,iVar19,(MethodInfo *)0x0);
        }
        return;
      }
    }
  } while( true );
}


// UI.MapEditorCustomAssetPopup$$<Setup>b__11_1
// il2cpp: void UI_MapEditorCustomAssetPopup___Setup_b__11_1 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x44256a0

void UI_MapEditorCustomAssetPopup___Setup_b__11_1(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t *piVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  Il2CppArrayBounds *pIVar5;
  Map_MapScript_o *pMVar6;
  Map_MapScriptCustomAssets_o *pMVar7;
  Il2CppRGCTXData *__this_00;
  UI_SetNamePopup_o *__this_01;
  System_Collections_Generic_List_StringSetting__o *pSVar8;
  UI_MessagePopup_o *__this_02;
  long lVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar10;
  Settings_StringSetting_array *pSVar11;
  Settings_StringSetting_array *pSVar12;
  System_String_array *pSVar13;
  Il2CppObject *pIVar14;
  System_Collections_Generic_List_GameObject__o *pSVar15;
  Settings_StringSetting_array *onSave;
  System_Collections_Generic_List_Enumerator_T__c *a;
  System_String_o *pSVar16;
  long *plVar17;
  GameManagers_MapEditorGameManager_o *pGVar18;
  Settings_StringSetting_array *method_00;
  int32_t iVar19;
  undefined1 auVar20 [12];
  undefined8 in_stack_ffffffffffffffa8;
  Settings_StringSetting_array *in_stack_ffffffffffffffb0;
  Il2CppClass *pIVar21;
  Settings_StringSetting_array *pSStack_38;
  
  if (g_data_057ae65c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Clear");
    g_data_057ae65c = '\x01';
  }
  method_00 = "Clear";
  if (g_data_057ae658 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__14_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Add");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"Do you want to clear all custom asset bundles?");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Add asset bundle");
    il2cpp_runtime_helper_023445d0(&"Loading asset bundle...");
    il2cpp_runtime_helper_023445d0(&"ConfirmClear");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"Error: bundle name cannot be empty.");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"ConfirmAdd");
    g_data_057ae658 = '\x01';
  }
  pIVar21 = (Il2CppClass *)0x0;
  pSStack_38 = (Settings_StringSetting_array *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    onSave = *(Settings_StringSetting_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (onSave != (Settings_StringSetting_array *)0x0) goto label_044249fa;
label_04424a2c:
    bVar10 = System_String__op_Equality((System_String_o *)method_00,"Back",(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      pSVar11 = method_00;
      bVar10 = System_String__op_Equality
                         ((System_String_o *)method_00,(System_String_o *)"Clear",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        pSVar11 = method_00;
        bVar10 = System_String__op_Equality((System_String_o *)method_00,"ConfirmClear",(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          pSVar11 = method_00;
          bVar10 = System_String__op_Equality((System_String_o *)method_00,"Add",(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            bVar10 = System_String__op_Equality((System_String_o *)method_00,"ConfirmAdd",(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              return;
            }
            if (((onSave != (Settings_StringSetting_array *)0x0) &&
                (onSave->m_Items[0xd] != (Settings_StringSetting_o *)0x0)) &&
               (lVar9 = *(long *)((long)onSave->m_Items[0xd] + 0xb8), lVar9 != 0)) {
              pSVar16 = *(System_String_o **)(lVar9 + 0x18);
              method_00 = (Settings_StringSetting_array *)0x0;
              if (pSVar16 != (System_String_o *)0x0) {
                a = (System_Collections_Generic_List_Enumerator_T__c *)
                    System_String__Trim(pSVar16,(MethodInfo *)0x0);
                bVar10 = System_String__op_Equality
                                   ((System_String_o *)a,
                                    (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                    (MethodInfo *)0x0);
                __this_02 = (UI_MessagePopup_o *)onSave->m_Items[2];
                method_00 = (Settings_StringSetting_array *)0x0;
                if (__this_02 != (UI_MessagePopup_o *)0x0) {
                  if ((char)bVar10 != '\0') {
                    UI_MessagePopup__Show(__this_02,"Error: bundle name cannot be empty.",1,(MethodInfo *)0x0);
                    return;
                  }
                  UI_MessagePopup__Show(__this_02,"Loading asset bundle...",0,(MethodInfo *)0x0);
                  if (g_data_057ae659 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadAssetBundle_d__15);
                    g_data_057ae659 = '\x01';
                  }
                  pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadAssetBundle_d__15);
                  method_00 = pSVar11;
                  System_Object___ctor((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
                  *(undefined4 *)&pSVar11->bounds = 0;
                  onSave = (Settings_StringSetting_array *)0x0;
                  if (pSVar11 != (Settings_StringSetting_array *)0x0) {
                    pSVar11->m_Items[1] = (Settings_StringSetting_o *)__this;
                    il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 1,__this);
                    pSVar11->m_Items[0] = (Settings_StringSetting_o *)a;
                    il2cpp_runtime_helper_022b4080(pSVar11->m_Items,a);
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)__this,
                               (System_Collections_IEnumerator_o *)pSVar11,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          else {
            method_00 = pSVar11;
            if (onSave != (Settings_StringSetting_array *)0x0) {
              __this_01 = (UI_SetNamePopup_o *)onSave->m_Items[0xd];
              onSave = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              method_00 = onSave;
              UnityEngine_Events_UnityAction___ctor();
              if (__this_01 != (UI_SetNamePopup_o *)0x0) {
                UI_SetNamePopup__Show
                          (__this_01,"",(UnityEngine_Events_UnityAction_o *)onSave,"Add asset bundle",
                           (System_String_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        else {
          pGVar18 = (__this->fields)._gameManager;
          method_00 = pSVar11;
          if ((pGVar18 != (GameManagers_MapEditorGameManager_o *)0x0) &&
             (pMVar6 = (pGVar18->fields).MapScript, pMVar6 != (Map_MapScript_o *)0x0)) {
            onSave = (Settings_StringSetting_array *)(pMVar6->fields).CustomAssets;
            pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
            method_00 = pSVar11;
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_System_String);
            if (onSave != (Settings_StringSetting_array *)0x0) {
              onSave->bounds = (Il2CppArrayBounds *)pSVar11;
              onSave = (Settings_StringSetting_array *)&onSave->bounds;
              il2cpp_runtime_helper_022b4080(onSave,pSVar11);
              if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              method_00 = (Settings_StringSetting_array *)0x0;
              ApplicationManagers_AssetBundleManager__Clear((MethodInfo *)0x0);
              pSVar15 = (__this->fields)._elements;
              if (pSVar15 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
                           (System_Collections_Generic_List_object__o *)pSVar15,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
                while (__this_03.fields._8_8_ = in_stack_ffffffffffffffb0,
                      __this_03.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8,
                      __this_03.fields._current = (Il2CppObject *)pIVar21,
                      bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8),
                      (char)bVar10 != '\0') {
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  onSave = pSStack_38;
                }
                method_00 = (Settings_StringSetting_array *)&stack0xffffffffffffffb8;
                __this_04.fields._8_8_ = in_stack_ffffffffffffffb0;
                __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
                __this_04.fields._current = (Il2CppObject *)pIVar21;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_04,(MethodInfo_321A1C0 *)method_00);
                goto label_04424efc;
              }
            }
          }
        }
      }
      else {
        method_00 = pSVar11;
        if (onSave != (Settings_StringSetting_array *)0x0) {
          __this_00 = (Il2CppRGCTXData *)onSave->m_Items[3];
          onSave = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          method_00 = onSave;
          UnityEngine_Events_UnityAction___ctor();
          if (__this_00 != (Il2CppRGCTXData *)0x0) {
            UI_ConfirmPopup__Show
                      ((UI_ConfirmPopup_o *)__this_00,"Do you want to clear all custom asset bundles?",(UnityEngine_Events_UnityAction_o *)onSave,
                       (System_String_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_04425128;
    }
    in_stack_ffffffffffffffb0 = onSave;
    pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    method_00 = pSVar11;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_System_String);
    pSVar15 = (__this->fields)._elements;
    if (pSVar15 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04425128;
    if (pSVar11 != (Settings_StringSetting_array *)0x0) {
      iVar19 = 0;
      pGVar18 = (__this->fields)._gameManager;
      if (pGVar18 != (GameManagers_MapEditorGameManager_o *)0x0) {
        while (pMVar6 = (pGVar18->fields).MapScript, pMVar6 != (Map_MapScript_o *)0x0) {
          pMVar7 = (pMVar6->fields).CustomAssets;
          method_00 = (Settings_StringSetting_array *)0x0;
          if (pMVar7 == (Map_MapScriptCustomAssets_o *)0x0) break;
          method_00 = (Settings_StringSetting_array *)&pMVar7->fields;
          pSVar12 = in_stack_ffffffffffffffb0;
          if ((pSVar15->fields)._size <= iVar19) goto label_04424e14;
          method_00 = (Settings_StringSetting_array *)
                      ((Map_MapScriptCustomAssets_Fields *)method_00)->CustomAssets;
          if (((method_00 == (Settings_StringSetting_array *)0x0) ||
              (pSVar12 = (Settings_StringSetting_array *)
                         System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)method_00,iVar19,MethodInfo_String_get_Item
                                   ), pSVar12 == (Settings_StringSetting_array *)0x0)) ||
             (pSVar13 = System_String__Split((System_String_o *)pSVar12,0x2c,0,(MethodInfo *)0x0),
             method_00 = pSVar12, pSVar13 == (System_String_array *)0x0)) break;
          if ((int)pSVar13->max_length == 0) goto label_044250e4;
          method_00 = (Settings_StringSetting_array *)0x0;
          if (pSVar13->m_Items[0] == (System_String_o *)0x0) break;
          pSVar12 = (Settings_StringSetting_array *)System_String__Trim(pSVar13->m_Items[0],(MethodInfo *)0x0)
          ;
          method_00 = (Settings_StringSetting_array *)(__this->fields)._settings;
          if ((method_00 == (Settings_StringSetting_array *)0x0) ||
             (pIVar14 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)method_00,iVar19,MethodInfo_StringSetting_get_Item)
             , onSave = pSVar12, pIVar14 == (Il2CppObject *)0x0)) break;
          method_00 = (Settings_StringSetting_array *)0x0;
          if (pIVar14[1].monitor == (System_String_o *)0x0) break;
          pSVar16 = System_String__Trim(pIVar14[1].monitor,(MethodInfo *)0x0);
          method_00 = pSVar12;
          pSVar16 = System_String__Concat_3af7150
                              ((System_String_o *)pSVar12,",",pSVar16,(MethodInfo *)0x0);
          lVar9 = MethodInfo_Void_Add;
          piVar1 = (int *)((long)&pSVar11->max_length + 4);
          *piVar1 = *piVar1 + 1;
          pIVar5 = pSVar11->bounds;
          if (pIVar5 == (Il2CppArrayBounds *)0x0) break;
          uVar3 = *(uint *)&pSVar11->max_length;
          if (uVar3 < (uint)pIVar5[1].lower_bound) {
            *(uint *)&pSVar11->max_length = uVar3 + 1;
            method_00 = (Settings_StringSetting_array *)(&pIVar5[2].length + (int)uVar3);
            (&pIVar5[2].length)[(int)uVar3] = (il2cpp_array_size_t)pSVar16;
            il2cpp_runtime_helper_022b4080();
            pSVar15 = (__this->fields)._elements;
          }
          else {
            method_00 = pSVar11;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pSVar16,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            pSVar15 = (__this->fields)._elements;
          }
          if (pSVar15 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
          iVar19 = iVar19 + 1;
          pGVar18 = (__this->fields)._gameManager;
          if (pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) break;
        }
      }
      goto label_04425128;
    }
    pGVar18 = (__this->fields)._gameManager;
    if ((pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) ||
       (pMVar6 = (pGVar18->fields).MapScript, pMVar6 == (Map_MapScript_o *)0x0)) goto label_04425128;
    pMVar7 = (pMVar6->fields).CustomAssets;
    method_00 = (Settings_StringSetting_array *)0x0;
    if (pMVar7 == (Map_MapScriptCustomAssets_o *)0x0) goto label_04425128;
    method_00 = (Settings_StringSetting_array *)&pMVar7->fields;
    onSave = in_stack_ffffffffffffffb0;
    pSVar12 = in_stack_ffffffffffffffb0;
    if ((pSVar15->fields)._size < 1) {
label_04424e14:
      (method_00->obj).klass = (Il2CppClass *)pSVar11;
      in_stack_ffffffffffffffb0 = pSVar12;
      il2cpp_runtime_helper_022b4080();
      onSave = pSVar12;
      if (pSVar12 != (Settings_StringSetting_array *)0x0) {
        method_00 = (Settings_StringSetting_array *)0x0;
        if ((UI_MapEditorTopPanel_o *)pSVar12->m_Items[0x12] != (UI_MapEditorTopPanel_o *)0x0) {
          UI_MapEditorTopPanel__Save((UI_MapEditorTopPanel_o *)pSVar12->m_Items[0x12],(MethodInfo *)pSVar11);
          (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
          return;
        }
      }
      goto label_04425128;
    }
  }
  else {
    onSave = *(Settings_StringSetting_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (onSave == (Settings_StringSetting_array *)0x0) goto label_04424a2c;
label_044249fa:
    pIVar4 = (onSave->obj).klass;
    if ((*(byte *)(TypeInfo_MapEditorMenu + 0x130) <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)*(byte *)(TypeInfo_MapEditorMenu + 0x130) - 1] == (Il2CppClass *)TypeInfo_MapEditorMenu)
       ) goto label_04424a2c;
    method_00 = onSave;
    il2cpp_runtime_helper_022b2fd0();
  }
  method_00 = (Settings_StringSetting_array *)(method_00->obj).klass;
  if (((method_00 != (Settings_StringSetting_array *)0x0) &&
      (pSVar11 = (Settings_StringSetting_array *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)method_00,0,MethodInfo_String_get_Item),
      pSVar11 != (Settings_StringSetting_array *)0x0)) &&
     (pSVar13 = System_String__Split((System_String_o *)pSVar11,0x2c,0,(MethodInfo *)0x0), method_00 = pSVar11
     , pSVar13 != (System_String_array *)0x0)) {
    if ((int)pSVar13->max_length == 0) {
label_044250e4:
      pSVar13 = (System_String_array *)il2cpp_runtime_helper_022b2ca0();
    }
    method_00 = (Settings_StringSetting_array *)0x0;
    if (pSVar13->m_Items[0] != (System_String_o *)0x0) {
      pSVar11 = (Settings_StringSetting_array *)System_String__Trim(pSVar13->m_Items[0],(MethodInfo *)0x0);
      method_00 = (Settings_StringSetting_array *)(__this->fields)._settings;
      if (((method_00 != (Settings_StringSetting_array *)0x0) &&
          (pIVar14 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)method_00,0,MethodInfo_StringSetting_get_Item),
          onSave = pSVar11, pIVar14 != (Il2CppObject *)0x0)) &&
         (method_00 = pIVar14[1].monitor, method_00 != (Settings_StringSetting_array *)0x0))
      goto label_0442512d;
    }
  }
label_04425128:
  do {
    il2cpp_runtime_helper_022b2c90();
    pSVar11 = onSave;
label_0442512d:
    pSVar16 = System_String__Trim((System_String_o *)method_00,(MethodInfo *)0x0);
    System_String__Concat_3af7150((System_String_o *)pSVar11,",",pSVar16,(MethodInfo *)0x0);
    auVar20 = il2cpp_runtime_helper_022b2c90();
    onSave = auVar20._0_8_;
    if (auVar20._8_4_ != 1) {
label_04425197:
      __this_06.fields._8_8_ = in_stack_ffffffffffffffb0;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
      __this_06.fields._current = (Il2CppObject *)pIVar21;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
      _Unwind_Resume(onSave);
    }
    plVar17 = (long *)__cxa_begin_catch(onSave);
    lVar9 = *plVar17;
    __cxa_end_catch();
    method_00 = (Settings_StringSetting_array *)&stack0xffffffffffffffb8;
    __this_05.fields._8_8_ = in_stack_ffffffffffffffb0;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
    __this_05.fields._current = (Il2CppObject *)pIVar21;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)method_00);
    if (lVar9 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar9);
      goto label_04425197;
    }
label_04424efc:
    pSVar8 = (__this->fields)._settings;
    if (pSVar8 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
      piVar2 = &(pSVar8->fields)._version;
      *piVar2 = *piVar2 + 1;
      iVar19 = (pSVar8->fields)._size;
      (pSVar8->fields)._size = 0;
      if (0 < iVar19) {
        method_00 = (pSVar8->fields)._items;
        System_Array__Clear((System_Array_o *)method_00,0,iVar19,(MethodInfo *)0x0);
      }
      pSVar15 = (__this->fields)._elements;
      if (pSVar15 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar2 = &(pSVar15->fields)._version;
        *piVar2 = *piVar2 + 1;
        iVar19 = (pSVar15->fields)._size;
        (pSVar15->fields)._size = 0;
        if (0 < iVar19) {
          System_Array__Clear((System_Array_o *)(pSVar15->fields)._items,0,iVar19,(MethodInfo *)0x0);
        }
        return;
      }
    }
  } while( true );
}


// UI.MapEditorCustomAssetPopup$$<Setup>b__11_2
// il2cpp: void UI_MapEditorCustomAssetPopup___Setup_b__11_2 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x44256e0

void UI_MapEditorCustomAssetPopup___Setup_b__11_2(UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t *piVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  Il2CppArrayBounds *pIVar5;
  Map_MapScript_o *pMVar6;
  Map_MapScriptCustomAssets_o *pMVar7;
  Il2CppRGCTXData *__this_00;
  UI_SetNamePopup_o *__this_01;
  System_Collections_Generic_List_StringSetting__o *pSVar8;
  UI_MessagePopup_o *__this_02;
  long lVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar10;
  Settings_StringSetting_array *pSVar11;
  Settings_StringSetting_array *pSVar12;
  System_String_array *pSVar13;
  Il2CppObject *pIVar14;
  System_Collections_Generic_List_GameObject__o *pSVar15;
  Settings_StringSetting_array *onSave;
  System_Collections_Generic_List_Enumerator_T__c *a;
  System_String_o *pSVar16;
  long *plVar17;
  GameManagers_MapEditorGameManager_o *pGVar18;
  Settings_StringSetting_array *method_00;
  int32_t iVar19;
  undefined1 auVar20 [12];
  undefined8 in_stack_ffffffffffffffa8;
  Settings_StringSetting_array *in_stack_ffffffffffffffb0;
  Il2CppClass *pIVar21;
  Settings_StringSetting_array *pSStack_38;
  
  if (g_data_057ae65d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae65d = '\x01';
  }
  method_00 = "Back";
  if (g_data_057ae658 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__14_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Add");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"Do you want to clear all custom asset bundles?");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Add asset bundle");
    il2cpp_runtime_helper_023445d0(&"Loading asset bundle...");
    il2cpp_runtime_helper_023445d0(&"ConfirmClear");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"Error: bundle name cannot be empty.");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"ConfirmAdd");
    g_data_057ae658 = '\x01';
  }
  pIVar21 = (Il2CppClass *)0x0;
  pSStack_38 = (Settings_StringSetting_array *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    onSave = *(Settings_StringSetting_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (onSave != (Settings_StringSetting_array *)0x0) goto label_044249fa;
label_04424a2c:
    bVar10 = System_String__op_Equality
                       ((System_String_o *)method_00,(System_String_o *)"Back",(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      pSVar11 = method_00;
      bVar10 = System_String__op_Equality((System_String_o *)method_00,"Clear",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        pSVar11 = method_00;
        bVar10 = System_String__op_Equality((System_String_o *)method_00,"ConfirmClear",(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          pSVar11 = method_00;
          bVar10 = System_String__op_Equality((System_String_o *)method_00,"Add",(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            bVar10 = System_String__op_Equality((System_String_o *)method_00,"ConfirmAdd",(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              return;
            }
            if (((onSave != (Settings_StringSetting_array *)0x0) &&
                (onSave->m_Items[0xd] != (Settings_StringSetting_o *)0x0)) &&
               (lVar9 = *(long *)((long)onSave->m_Items[0xd] + 0xb8), lVar9 != 0)) {
              pSVar16 = *(System_String_o **)(lVar9 + 0x18);
              method_00 = (Settings_StringSetting_array *)0x0;
              if (pSVar16 != (System_String_o *)0x0) {
                a = (System_Collections_Generic_List_Enumerator_T__c *)
                    System_String__Trim(pSVar16,(MethodInfo *)0x0);
                bVar10 = System_String__op_Equality
                                   ((System_String_o *)a,
                                    (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                    (MethodInfo *)0x0);
                __this_02 = (UI_MessagePopup_o *)onSave->m_Items[2];
                method_00 = (Settings_StringSetting_array *)0x0;
                if (__this_02 != (UI_MessagePopup_o *)0x0) {
                  if ((char)bVar10 != '\0') {
                    UI_MessagePopup__Show(__this_02,"Error: bundle name cannot be empty.",1,(MethodInfo *)0x0);
                    return;
                  }
                  UI_MessagePopup__Show(__this_02,"Loading asset bundle...",0,(MethodInfo *)0x0);
                  if (g_data_057ae659 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadAssetBundle_d__15);
                    g_data_057ae659 = '\x01';
                  }
                  pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadAssetBundle_d__15);
                  method_00 = pSVar11;
                  System_Object___ctor((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
                  *(undefined4 *)&pSVar11->bounds = 0;
                  onSave = (Settings_StringSetting_array *)0x0;
                  if (pSVar11 != (Settings_StringSetting_array *)0x0) {
                    pSVar11->m_Items[1] = (Settings_StringSetting_o *)__this;
                    il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 1,__this);
                    pSVar11->m_Items[0] = (Settings_StringSetting_o *)a;
                    il2cpp_runtime_helper_022b4080(pSVar11->m_Items,a);
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)__this,
                               (System_Collections_IEnumerator_o *)pSVar11,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          else {
            method_00 = pSVar11;
            if (onSave != (Settings_StringSetting_array *)0x0) {
              __this_01 = (UI_SetNamePopup_o *)onSave->m_Items[0xd];
              onSave = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              method_00 = onSave;
              UnityEngine_Events_UnityAction___ctor();
              if (__this_01 != (UI_SetNamePopup_o *)0x0) {
                UI_SetNamePopup__Show
                          (__this_01,"",(UnityEngine_Events_UnityAction_o *)onSave,"Add asset bundle",
                           (System_String_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        else {
          pGVar18 = (__this->fields)._gameManager;
          method_00 = pSVar11;
          if ((pGVar18 != (GameManagers_MapEditorGameManager_o *)0x0) &&
             (pMVar6 = (pGVar18->fields).MapScript, pMVar6 != (Map_MapScript_o *)0x0)) {
            onSave = (Settings_StringSetting_array *)(pMVar6->fields).CustomAssets;
            pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
            method_00 = pSVar11;
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_System_String);
            if (onSave != (Settings_StringSetting_array *)0x0) {
              onSave->bounds = (Il2CppArrayBounds *)pSVar11;
              onSave = (Settings_StringSetting_array *)&onSave->bounds;
              il2cpp_runtime_helper_022b4080(onSave,pSVar11);
              if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              method_00 = (Settings_StringSetting_array *)0x0;
              ApplicationManagers_AssetBundleManager__Clear((MethodInfo *)0x0);
              pSVar15 = (__this->fields)._elements;
              if (pSVar15 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
                           (System_Collections_Generic_List_object__o *)pSVar15,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
                while (__this_03.fields._8_8_ = in_stack_ffffffffffffffb0,
                      __this_03.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8,
                      __this_03.fields._current = (Il2CppObject *)pIVar21,
                      bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8),
                      (char)bVar10 != '\0') {
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  onSave = pSStack_38;
                }
                method_00 = (Settings_StringSetting_array *)&stack0xffffffffffffffb8;
                __this_04.fields._8_8_ = in_stack_ffffffffffffffb0;
                __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
                __this_04.fields._current = (Il2CppObject *)pIVar21;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_04,(MethodInfo_321A1C0 *)method_00);
                goto label_04424efc;
              }
            }
          }
        }
      }
      else {
        method_00 = pSVar11;
        if (onSave != (Settings_StringSetting_array *)0x0) {
          __this_00 = (Il2CppRGCTXData *)onSave->m_Items[3];
          onSave = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          method_00 = onSave;
          UnityEngine_Events_UnityAction___ctor();
          if (__this_00 != (Il2CppRGCTXData *)0x0) {
            UI_ConfirmPopup__Show
                      ((UI_ConfirmPopup_o *)__this_00,"Do you want to clear all custom asset bundles?",(UnityEngine_Events_UnityAction_o *)onSave,
                       (System_String_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_04425128;
    }
    in_stack_ffffffffffffffb0 = onSave;
    pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    method_00 = pSVar11;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_System_String);
    pSVar15 = (__this->fields)._elements;
    if (pSVar15 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04425128;
    if (pSVar11 != (Settings_StringSetting_array *)0x0) {
      iVar19 = 0;
      pGVar18 = (__this->fields)._gameManager;
      if (pGVar18 != (GameManagers_MapEditorGameManager_o *)0x0) {
        while (pMVar6 = (pGVar18->fields).MapScript, pMVar6 != (Map_MapScript_o *)0x0) {
          pMVar7 = (pMVar6->fields).CustomAssets;
          method_00 = (Settings_StringSetting_array *)0x0;
          if (pMVar7 == (Map_MapScriptCustomAssets_o *)0x0) break;
          method_00 = (Settings_StringSetting_array *)&pMVar7->fields;
          pSVar12 = in_stack_ffffffffffffffb0;
          if ((pSVar15->fields)._size <= iVar19) goto label_04424e14;
          method_00 = (Settings_StringSetting_array *)
                      ((Map_MapScriptCustomAssets_Fields *)method_00)->CustomAssets;
          if (((method_00 == (Settings_StringSetting_array *)0x0) ||
              (pSVar12 = (Settings_StringSetting_array *)
                         System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)method_00,iVar19,MethodInfo_String_get_Item
                                   ), pSVar12 == (Settings_StringSetting_array *)0x0)) ||
             (pSVar13 = System_String__Split((System_String_o *)pSVar12,0x2c,0,(MethodInfo *)0x0),
             method_00 = pSVar12, pSVar13 == (System_String_array *)0x0)) break;
          if ((int)pSVar13->max_length == 0) goto label_044250e4;
          method_00 = (Settings_StringSetting_array *)0x0;
          if (pSVar13->m_Items[0] == (System_String_o *)0x0) break;
          pSVar12 = (Settings_StringSetting_array *)System_String__Trim(pSVar13->m_Items[0],(MethodInfo *)0x0)
          ;
          method_00 = (Settings_StringSetting_array *)(__this->fields)._settings;
          if ((method_00 == (Settings_StringSetting_array *)0x0) ||
             (pIVar14 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)method_00,iVar19,MethodInfo_StringSetting_get_Item)
             , onSave = pSVar12, pIVar14 == (Il2CppObject *)0x0)) break;
          method_00 = (Settings_StringSetting_array *)0x0;
          if (pIVar14[1].monitor == (System_String_o *)0x0) break;
          pSVar16 = System_String__Trim(pIVar14[1].monitor,(MethodInfo *)0x0);
          method_00 = pSVar12;
          pSVar16 = System_String__Concat_3af7150
                              ((System_String_o *)pSVar12,",",pSVar16,(MethodInfo *)0x0);
          lVar9 = MethodInfo_Void_Add;
          piVar1 = (int *)((long)&pSVar11->max_length + 4);
          *piVar1 = *piVar1 + 1;
          pIVar5 = pSVar11->bounds;
          if (pIVar5 == (Il2CppArrayBounds *)0x0) break;
          uVar3 = *(uint *)&pSVar11->max_length;
          if (uVar3 < (uint)pIVar5[1].lower_bound) {
            *(uint *)&pSVar11->max_length = uVar3 + 1;
            method_00 = (Settings_StringSetting_array *)(&pIVar5[2].length + (int)uVar3);
            (&pIVar5[2].length)[(int)uVar3] = (il2cpp_array_size_t)pSVar16;
            il2cpp_runtime_helper_022b4080();
            pSVar15 = (__this->fields)._elements;
          }
          else {
            method_00 = pSVar11;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pSVar16,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            pSVar15 = (__this->fields)._elements;
          }
          if (pSVar15 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
          iVar19 = iVar19 + 1;
          pGVar18 = (__this->fields)._gameManager;
          if (pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) break;
        }
      }
      goto label_04425128;
    }
    pGVar18 = (__this->fields)._gameManager;
    if ((pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) ||
       (pMVar6 = (pGVar18->fields).MapScript, pMVar6 == (Map_MapScript_o *)0x0)) goto label_04425128;
    pMVar7 = (pMVar6->fields).CustomAssets;
    method_00 = (Settings_StringSetting_array *)0x0;
    if (pMVar7 == (Map_MapScriptCustomAssets_o *)0x0) goto label_04425128;
    method_00 = (Settings_StringSetting_array *)&pMVar7->fields;
    onSave = in_stack_ffffffffffffffb0;
    pSVar12 = in_stack_ffffffffffffffb0;
    if ((pSVar15->fields)._size < 1) {
label_04424e14:
      (method_00->obj).klass = (Il2CppClass *)pSVar11;
      in_stack_ffffffffffffffb0 = pSVar12;
      il2cpp_runtime_helper_022b4080();
      onSave = pSVar12;
      if (pSVar12 != (Settings_StringSetting_array *)0x0) {
        method_00 = (Settings_StringSetting_array *)0x0;
        if ((UI_MapEditorTopPanel_o *)pSVar12->m_Items[0x12] != (UI_MapEditorTopPanel_o *)0x0) {
          UI_MapEditorTopPanel__Save((UI_MapEditorTopPanel_o *)pSVar12->m_Items[0x12],(MethodInfo *)pSVar11);
          (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
          return;
        }
      }
      goto label_04425128;
    }
  }
  else {
    onSave = *(Settings_StringSetting_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (onSave == (Settings_StringSetting_array *)0x0) goto label_04424a2c;
label_044249fa:
    pIVar4 = (onSave->obj).klass;
    if ((*(byte *)(TypeInfo_MapEditorMenu + 0x130) <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)*(byte *)(TypeInfo_MapEditorMenu + 0x130) - 1] == (Il2CppClass *)TypeInfo_MapEditorMenu)
       ) goto label_04424a2c;
    method_00 = onSave;
    il2cpp_runtime_helper_022b2fd0();
  }
  method_00 = (Settings_StringSetting_array *)(method_00->obj).klass;
  if (((method_00 != (Settings_StringSetting_array *)0x0) &&
      (pSVar11 = (Settings_StringSetting_array *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)method_00,0,MethodInfo_String_get_Item),
      pSVar11 != (Settings_StringSetting_array *)0x0)) &&
     (pSVar13 = System_String__Split((System_String_o *)pSVar11,0x2c,0,(MethodInfo *)0x0), method_00 = pSVar11
     , pSVar13 != (System_String_array *)0x0)) {
    if ((int)pSVar13->max_length == 0) {
label_044250e4:
      pSVar13 = (System_String_array *)il2cpp_runtime_helper_022b2ca0();
    }
    method_00 = (Settings_StringSetting_array *)0x0;
    if (pSVar13->m_Items[0] != (System_String_o *)0x0) {
      pSVar11 = (Settings_StringSetting_array *)System_String__Trim(pSVar13->m_Items[0],(MethodInfo *)0x0);
      method_00 = (Settings_StringSetting_array *)(__this->fields)._settings;
      if (((method_00 != (Settings_StringSetting_array *)0x0) &&
          (pIVar14 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)method_00,0,MethodInfo_StringSetting_get_Item),
          onSave = pSVar11, pIVar14 != (Il2CppObject *)0x0)) &&
         (method_00 = pIVar14[1].monitor, method_00 != (Settings_StringSetting_array *)0x0))
      goto label_0442512d;
    }
  }
label_04425128:
  do {
    il2cpp_runtime_helper_022b2c90();
    pSVar11 = onSave;
label_0442512d:
    pSVar16 = System_String__Trim((System_String_o *)method_00,(MethodInfo *)0x0);
    System_String__Concat_3af7150((System_String_o *)pSVar11,",",pSVar16,(MethodInfo *)0x0);
    auVar20 = il2cpp_runtime_helper_022b2c90();
    onSave = auVar20._0_8_;
    if (auVar20._8_4_ != 1) {
label_04425197:
      __this_06.fields._8_8_ = in_stack_ffffffffffffffb0;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
      __this_06.fields._current = (Il2CppObject *)pIVar21;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
      _Unwind_Resume(onSave);
    }
    plVar17 = (long *)__cxa_begin_catch(onSave);
    lVar9 = *plVar17;
    __cxa_end_catch();
    method_00 = (Settings_StringSetting_array *)&stack0xffffffffffffffb8;
    __this_05.fields._8_8_ = in_stack_ffffffffffffffb0;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
    __this_05.fields._current = (Il2CppObject *)pIVar21;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)method_00);
    if (lVar9 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar9);
      goto label_04425197;
    }
label_04424efc:
    pSVar8 = (__this->fields)._settings;
    if (pSVar8 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
      piVar2 = &(pSVar8->fields)._version;
      *piVar2 = *piVar2 + 1;
      iVar19 = (pSVar8->fields)._size;
      (pSVar8->fields)._size = 0;
      if (0 < iVar19) {
        method_00 = (pSVar8->fields)._items;
        System_Array__Clear((System_Array_o *)method_00,0,iVar19,(MethodInfo *)0x0);
      }
      pSVar15 = (__this->fields)._elements;
      if (pSVar15 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar2 = &(pSVar15->fields)._version;
        *piVar2 = *piVar2 + 1;
        iVar19 = (pSVar15->fields)._size;
        (pSVar15->fields)._size = 0;
        if (0 < iVar19) {
          System_Array__Clear((System_Array_o *)(pSVar15->fields)._items,0,iVar19,(MethodInfo *)0x0);
        }
        return;
      }
    }
  } while( true );
}


// UI.MapEditorCustomAssetPopup$$<OnButtonClick>b__14_0
// il2cpp: void UI_MapEditorCustomAssetPopup___OnButtonClick_b__14_0 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x4425720

void UI_MapEditorCustomAssetPopup___OnButtonClick_b__14_0
               (UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t *piVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  Il2CppArrayBounds *pIVar5;
  Map_MapScript_o *pMVar6;
  Map_MapScriptCustomAssets_o *pMVar7;
  Il2CppRGCTXData *__this_00;
  UI_SetNamePopup_o *__this_01;
  System_Collections_Generic_List_StringSetting__o *pSVar8;
  UI_MessagePopup_o *__this_02;
  long lVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar10;
  Settings_StringSetting_array *pSVar11;
  Settings_StringSetting_array *pSVar12;
  System_String_array *pSVar13;
  Il2CppObject *pIVar14;
  System_Collections_Generic_List_GameObject__o *pSVar15;
  Settings_StringSetting_array *onSave;
  System_Collections_Generic_List_Enumerator_T__c *a;
  System_String_o *pSVar16;
  long *plVar17;
  GameManagers_MapEditorGameManager_o *pGVar18;
  Settings_StringSetting_array *method_00;
  int32_t iVar19;
  undefined1 auVar20 [12];
  undefined8 in_stack_ffffffffffffffa8;
  Settings_StringSetting_array *in_stack_ffffffffffffffb0;
  Il2CppClass *pIVar21;
  Settings_StringSetting_array *pSStack_38;
  
  if (g_data_057ae65e == '\0') {
    il2cpp_runtime_helper_023445d0(&"ConfirmClear");
    g_data_057ae65e = '\x01';
  }
  method_00 = "ConfirmClear";
  if (g_data_057ae658 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__14_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Add");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"Do you want to clear all custom asset bundles?");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Add asset bundle");
    il2cpp_runtime_helper_023445d0(&"Loading asset bundle...");
    il2cpp_runtime_helper_023445d0(&"ConfirmClear");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"Error: bundle name cannot be empty.");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"ConfirmAdd");
    g_data_057ae658 = '\x01';
  }
  pIVar21 = (Il2CppClass *)0x0;
  pSStack_38 = (Settings_StringSetting_array *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    onSave = *(Settings_StringSetting_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (onSave != (Settings_StringSetting_array *)0x0) goto label_044249fa;
label_04424a2c:
    bVar10 = System_String__op_Equality((System_String_o *)method_00,"Back",(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      pSVar11 = method_00;
      bVar10 = System_String__op_Equality((System_String_o *)method_00,"Clear",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        pSVar11 = method_00;
        bVar10 = System_String__op_Equality
                           ((System_String_o *)method_00,(System_String_o *)"ConfirmClear",(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          pSVar11 = method_00;
          bVar10 = System_String__op_Equality((System_String_o *)method_00,"Add",(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            bVar10 = System_String__op_Equality((System_String_o *)method_00,"ConfirmAdd",(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              return;
            }
            if (((onSave != (Settings_StringSetting_array *)0x0) &&
                (onSave->m_Items[0xd] != (Settings_StringSetting_o *)0x0)) &&
               (lVar9 = *(long *)((long)onSave->m_Items[0xd] + 0xb8), lVar9 != 0)) {
              pSVar16 = *(System_String_o **)(lVar9 + 0x18);
              method_00 = (Settings_StringSetting_array *)0x0;
              if (pSVar16 != (System_String_o *)0x0) {
                a = (System_Collections_Generic_List_Enumerator_T__c *)
                    System_String__Trim(pSVar16,(MethodInfo *)0x0);
                bVar10 = System_String__op_Equality
                                   ((System_String_o *)a,
                                    (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                    (MethodInfo *)0x0);
                __this_02 = (UI_MessagePopup_o *)onSave->m_Items[2];
                method_00 = (Settings_StringSetting_array *)0x0;
                if (__this_02 != (UI_MessagePopup_o *)0x0) {
                  if ((char)bVar10 != '\0') {
                    UI_MessagePopup__Show(__this_02,"Error: bundle name cannot be empty.",1,(MethodInfo *)0x0);
                    return;
                  }
                  UI_MessagePopup__Show(__this_02,"Loading asset bundle...",0,(MethodInfo *)0x0);
                  if (g_data_057ae659 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadAssetBundle_d__15);
                    g_data_057ae659 = '\x01';
                  }
                  pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadAssetBundle_d__15);
                  method_00 = pSVar11;
                  System_Object___ctor((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
                  *(undefined4 *)&pSVar11->bounds = 0;
                  onSave = (Settings_StringSetting_array *)0x0;
                  if (pSVar11 != (Settings_StringSetting_array *)0x0) {
                    pSVar11->m_Items[1] = (Settings_StringSetting_o *)__this;
                    il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 1,__this);
                    pSVar11->m_Items[0] = (Settings_StringSetting_o *)a;
                    il2cpp_runtime_helper_022b4080(pSVar11->m_Items,a);
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)__this,
                               (System_Collections_IEnumerator_o *)pSVar11,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          else {
            method_00 = pSVar11;
            if (onSave != (Settings_StringSetting_array *)0x0) {
              __this_01 = (UI_SetNamePopup_o *)onSave->m_Items[0xd];
              onSave = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              method_00 = onSave;
              UnityEngine_Events_UnityAction___ctor();
              if (__this_01 != (UI_SetNamePopup_o *)0x0) {
                UI_SetNamePopup__Show
                          (__this_01,"",(UnityEngine_Events_UnityAction_o *)onSave,"Add asset bundle",
                           (System_String_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        else {
          pGVar18 = (__this->fields)._gameManager;
          method_00 = pSVar11;
          if ((pGVar18 != (GameManagers_MapEditorGameManager_o *)0x0) &&
             (pMVar6 = (pGVar18->fields).MapScript, pMVar6 != (Map_MapScript_o *)0x0)) {
            onSave = (Settings_StringSetting_array *)(pMVar6->fields).CustomAssets;
            pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
            method_00 = pSVar11;
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_System_String);
            if (onSave != (Settings_StringSetting_array *)0x0) {
              onSave->bounds = (Il2CppArrayBounds *)pSVar11;
              onSave = (Settings_StringSetting_array *)&onSave->bounds;
              il2cpp_runtime_helper_022b4080(onSave,pSVar11);
              if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              method_00 = (Settings_StringSetting_array *)0x0;
              ApplicationManagers_AssetBundleManager__Clear((MethodInfo *)0x0);
              pSVar15 = (__this->fields)._elements;
              if (pSVar15 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
                           (System_Collections_Generic_List_object__o *)pSVar15,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
                while (__this_03.fields._8_8_ = in_stack_ffffffffffffffb0,
                      __this_03.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8,
                      __this_03.fields._current = (Il2CppObject *)pIVar21,
                      bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8),
                      (char)bVar10 != '\0') {
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  onSave = pSStack_38;
                }
                method_00 = (Settings_StringSetting_array *)&stack0xffffffffffffffb8;
                __this_04.fields._8_8_ = in_stack_ffffffffffffffb0;
                __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
                __this_04.fields._current = (Il2CppObject *)pIVar21;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_04,(MethodInfo_321A1C0 *)method_00);
                goto label_04424efc;
              }
            }
          }
        }
      }
      else {
        method_00 = pSVar11;
        if (onSave != (Settings_StringSetting_array *)0x0) {
          __this_00 = (Il2CppRGCTXData *)onSave->m_Items[3];
          onSave = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          method_00 = onSave;
          UnityEngine_Events_UnityAction___ctor();
          if (__this_00 != (Il2CppRGCTXData *)0x0) {
            UI_ConfirmPopup__Show
                      ((UI_ConfirmPopup_o *)__this_00,"Do you want to clear all custom asset bundles?",(UnityEngine_Events_UnityAction_o *)onSave,
                       (System_String_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_04425128;
    }
    in_stack_ffffffffffffffb0 = onSave;
    pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    method_00 = pSVar11;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_System_String);
    pSVar15 = (__this->fields)._elements;
    if (pSVar15 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04425128;
    if (pSVar11 != (Settings_StringSetting_array *)0x0) {
      iVar19 = 0;
      pGVar18 = (__this->fields)._gameManager;
      if (pGVar18 != (GameManagers_MapEditorGameManager_o *)0x0) {
        while (pMVar6 = (pGVar18->fields).MapScript, pMVar6 != (Map_MapScript_o *)0x0) {
          pMVar7 = (pMVar6->fields).CustomAssets;
          method_00 = (Settings_StringSetting_array *)0x0;
          if (pMVar7 == (Map_MapScriptCustomAssets_o *)0x0) break;
          method_00 = (Settings_StringSetting_array *)&pMVar7->fields;
          pSVar12 = in_stack_ffffffffffffffb0;
          if ((pSVar15->fields)._size <= iVar19) goto label_04424e14;
          method_00 = (Settings_StringSetting_array *)
                      ((Map_MapScriptCustomAssets_Fields *)method_00)->CustomAssets;
          if (((method_00 == (Settings_StringSetting_array *)0x0) ||
              (pSVar12 = (Settings_StringSetting_array *)
                         System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)method_00,iVar19,MethodInfo_String_get_Item
                                   ), pSVar12 == (Settings_StringSetting_array *)0x0)) ||
             (pSVar13 = System_String__Split((System_String_o *)pSVar12,0x2c,0,(MethodInfo *)0x0),
             method_00 = pSVar12, pSVar13 == (System_String_array *)0x0)) break;
          if ((int)pSVar13->max_length == 0) goto label_044250e4;
          method_00 = (Settings_StringSetting_array *)0x0;
          if (pSVar13->m_Items[0] == (System_String_o *)0x0) break;
          pSVar12 = (Settings_StringSetting_array *)System_String__Trim(pSVar13->m_Items[0],(MethodInfo *)0x0)
          ;
          method_00 = (Settings_StringSetting_array *)(__this->fields)._settings;
          if ((method_00 == (Settings_StringSetting_array *)0x0) ||
             (pIVar14 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)method_00,iVar19,MethodInfo_StringSetting_get_Item)
             , onSave = pSVar12, pIVar14 == (Il2CppObject *)0x0)) break;
          method_00 = (Settings_StringSetting_array *)0x0;
          if (pIVar14[1].monitor == (System_String_o *)0x0) break;
          pSVar16 = System_String__Trim(pIVar14[1].monitor,(MethodInfo *)0x0);
          method_00 = pSVar12;
          pSVar16 = System_String__Concat_3af7150
                              ((System_String_o *)pSVar12,",",pSVar16,(MethodInfo *)0x0);
          lVar9 = MethodInfo_Void_Add;
          piVar1 = (int *)((long)&pSVar11->max_length + 4);
          *piVar1 = *piVar1 + 1;
          pIVar5 = pSVar11->bounds;
          if (pIVar5 == (Il2CppArrayBounds *)0x0) break;
          uVar3 = *(uint *)&pSVar11->max_length;
          if (uVar3 < (uint)pIVar5[1].lower_bound) {
            *(uint *)&pSVar11->max_length = uVar3 + 1;
            method_00 = (Settings_StringSetting_array *)(&pIVar5[2].length + (int)uVar3);
            (&pIVar5[2].length)[(int)uVar3] = (il2cpp_array_size_t)pSVar16;
            il2cpp_runtime_helper_022b4080();
            pSVar15 = (__this->fields)._elements;
          }
          else {
            method_00 = pSVar11;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pSVar16,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            pSVar15 = (__this->fields)._elements;
          }
          if (pSVar15 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
          iVar19 = iVar19 + 1;
          pGVar18 = (__this->fields)._gameManager;
          if (pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) break;
        }
      }
      goto label_04425128;
    }
    pGVar18 = (__this->fields)._gameManager;
    if ((pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) ||
       (pMVar6 = (pGVar18->fields).MapScript, pMVar6 == (Map_MapScript_o *)0x0)) goto label_04425128;
    pMVar7 = (pMVar6->fields).CustomAssets;
    method_00 = (Settings_StringSetting_array *)0x0;
    if (pMVar7 == (Map_MapScriptCustomAssets_o *)0x0) goto label_04425128;
    method_00 = (Settings_StringSetting_array *)&pMVar7->fields;
    onSave = in_stack_ffffffffffffffb0;
    pSVar12 = in_stack_ffffffffffffffb0;
    if ((pSVar15->fields)._size < 1) {
label_04424e14:
      (method_00->obj).klass = (Il2CppClass *)pSVar11;
      in_stack_ffffffffffffffb0 = pSVar12;
      il2cpp_runtime_helper_022b4080();
      onSave = pSVar12;
      if (pSVar12 != (Settings_StringSetting_array *)0x0) {
        method_00 = (Settings_StringSetting_array *)0x0;
        if ((UI_MapEditorTopPanel_o *)pSVar12->m_Items[0x12] != (UI_MapEditorTopPanel_o *)0x0) {
          UI_MapEditorTopPanel__Save((UI_MapEditorTopPanel_o *)pSVar12->m_Items[0x12],(MethodInfo *)pSVar11);
          (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
          return;
        }
      }
      goto label_04425128;
    }
  }
  else {
    onSave = *(Settings_StringSetting_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (onSave == (Settings_StringSetting_array *)0x0) goto label_04424a2c;
label_044249fa:
    pIVar4 = (onSave->obj).klass;
    if ((*(byte *)(TypeInfo_MapEditorMenu + 0x130) <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)*(byte *)(TypeInfo_MapEditorMenu + 0x130) - 1] == (Il2CppClass *)TypeInfo_MapEditorMenu)
       ) goto label_04424a2c;
    method_00 = onSave;
    il2cpp_runtime_helper_022b2fd0();
  }
  method_00 = (Settings_StringSetting_array *)(method_00->obj).klass;
  if (((method_00 != (Settings_StringSetting_array *)0x0) &&
      (pSVar11 = (Settings_StringSetting_array *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)method_00,0,MethodInfo_String_get_Item),
      pSVar11 != (Settings_StringSetting_array *)0x0)) &&
     (pSVar13 = System_String__Split((System_String_o *)pSVar11,0x2c,0,(MethodInfo *)0x0), method_00 = pSVar11
     , pSVar13 != (System_String_array *)0x0)) {
    if ((int)pSVar13->max_length == 0) {
label_044250e4:
      pSVar13 = (System_String_array *)il2cpp_runtime_helper_022b2ca0();
    }
    method_00 = (Settings_StringSetting_array *)0x0;
    if (pSVar13->m_Items[0] != (System_String_o *)0x0) {
      pSVar11 = (Settings_StringSetting_array *)System_String__Trim(pSVar13->m_Items[0],(MethodInfo *)0x0);
      method_00 = (Settings_StringSetting_array *)(__this->fields)._settings;
      if (((method_00 != (Settings_StringSetting_array *)0x0) &&
          (pIVar14 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)method_00,0,MethodInfo_StringSetting_get_Item),
          onSave = pSVar11, pIVar14 != (Il2CppObject *)0x0)) &&
         (method_00 = pIVar14[1].monitor, method_00 != (Settings_StringSetting_array *)0x0))
      goto label_0442512d;
    }
  }
label_04425128:
  do {
    il2cpp_runtime_helper_022b2c90();
    pSVar11 = onSave;
label_0442512d:
    pSVar16 = System_String__Trim((System_String_o *)method_00,(MethodInfo *)0x0);
    System_String__Concat_3af7150((System_String_o *)pSVar11,",",pSVar16,(MethodInfo *)0x0);
    auVar20 = il2cpp_runtime_helper_022b2c90();
    onSave = auVar20._0_8_;
    if (auVar20._8_4_ != 1) {
label_04425197:
      __this_06.fields._8_8_ = in_stack_ffffffffffffffb0;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
      __this_06.fields._current = (Il2CppObject *)pIVar21;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
      _Unwind_Resume(onSave);
    }
    plVar17 = (long *)__cxa_begin_catch(onSave);
    lVar9 = *plVar17;
    __cxa_end_catch();
    method_00 = (Settings_StringSetting_array *)&stack0xffffffffffffffb8;
    __this_05.fields._8_8_ = in_stack_ffffffffffffffb0;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
    __this_05.fields._current = (Il2CppObject *)pIVar21;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)method_00);
    if (lVar9 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar9);
      goto label_04425197;
    }
label_04424efc:
    pSVar8 = (__this->fields)._settings;
    if (pSVar8 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
      piVar2 = &(pSVar8->fields)._version;
      *piVar2 = *piVar2 + 1;
      iVar19 = (pSVar8->fields)._size;
      (pSVar8->fields)._size = 0;
      if (0 < iVar19) {
        method_00 = (pSVar8->fields)._items;
        System_Array__Clear((System_Array_o *)method_00,0,iVar19,(MethodInfo *)0x0);
      }
      pSVar15 = (__this->fields)._elements;
      if (pSVar15 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar2 = &(pSVar15->fields)._version;
        *piVar2 = *piVar2 + 1;
        iVar19 = (pSVar15->fields)._size;
        (pSVar15->fields)._size = 0;
        if (0 < iVar19) {
          System_Array__Clear((System_Array_o *)(pSVar15->fields)._items,0,iVar19,(MethodInfo *)0x0);
        }
        return;
      }
    }
  } while( true );
}


// UI.MapEditorCustomAssetPopup$$<OnButtonClick>b__14_1
// il2cpp: void UI_MapEditorCustomAssetPopup___OnButtonClick_b__14_1 (UI_MapEditorCustomAssetPopup_o* __this, const MethodInfo* method);
// 0x4425760

void UI_MapEditorCustomAssetPopup___OnButtonClick_b__14_1
               (UI_MapEditorCustomAssetPopup_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t *piVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  Il2CppArrayBounds *pIVar5;
  Map_MapScript_o *pMVar6;
  Map_MapScriptCustomAssets_o *pMVar7;
  Il2CppRGCTXData *__this_00;
  UI_SetNamePopup_o *__this_01;
  System_Collections_Generic_List_StringSetting__o *pSVar8;
  UI_MessagePopup_o *__this_02;
  long lVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar10;
  Settings_StringSetting_array *pSVar11;
  Settings_StringSetting_array *pSVar12;
  System_String_array *pSVar13;
  Il2CppObject *pIVar14;
  System_Collections_Generic_List_GameObject__o *pSVar15;
  Settings_StringSetting_array *onSave;
  System_Collections_Generic_List_Enumerator_T__c *a;
  System_String_o *pSVar16;
  long *plVar17;
  GameManagers_MapEditorGameManager_o *pGVar18;
  Settings_StringSetting_array *method_00;
  int32_t iVar19;
  undefined1 auVar20 [12];
  undefined8 in_stack_ffffffffffffffa8;
  Settings_StringSetting_array *in_stack_ffffffffffffffb0;
  Il2CppClass *pIVar21;
  Settings_StringSetting_array *pSStack_38;
  
  if (g_data_057ae65f == '\0') {
    il2cpp_runtime_helper_023445d0(&"ConfirmAdd");
    g_data_057ae65f = '\x01';
  }
  method_00 = "ConfirmAdd";
  if (g_data_057ae658 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__14_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Add");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"Do you want to clear all custom asset bundles?");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Add asset bundle");
    il2cpp_runtime_helper_023445d0(&"Loading asset bundle...");
    il2cpp_runtime_helper_023445d0(&"ConfirmClear");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"Error: bundle name cannot be empty.");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"ConfirmAdd");
    g_data_057ae658 = '\x01';
  }
  pIVar21 = (Il2CppClass *)0x0;
  pSStack_38 = (Settings_StringSetting_array *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    onSave = *(Settings_StringSetting_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (onSave != (Settings_StringSetting_array *)0x0) goto label_044249fa;
label_04424a2c:
    bVar10 = System_String__op_Equality((System_String_o *)method_00,"Back",(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      pSVar11 = method_00;
      bVar10 = System_String__op_Equality((System_String_o *)method_00,"Clear",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        pSVar11 = method_00;
        bVar10 = System_String__op_Equality((System_String_o *)method_00,"ConfirmClear",(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          pSVar11 = method_00;
          bVar10 = System_String__op_Equality((System_String_o *)method_00,"Add",(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            bVar10 = System_String__op_Equality
                               ((System_String_o *)method_00,(System_String_o *)"ConfirmAdd",(MethodInfo *)0x0
                               );
            if ((char)bVar10 == '\0') {
              return;
            }
            if (((onSave != (Settings_StringSetting_array *)0x0) &&
                (onSave->m_Items[0xd] != (Settings_StringSetting_o *)0x0)) &&
               (lVar9 = *(long *)((long)onSave->m_Items[0xd] + 0xb8), lVar9 != 0)) {
              pSVar16 = *(System_String_o **)(lVar9 + 0x18);
              method_00 = (Settings_StringSetting_array *)0x0;
              if (pSVar16 != (System_String_o *)0x0) {
                a = (System_Collections_Generic_List_Enumerator_T__c *)
                    System_String__Trim(pSVar16,(MethodInfo *)0x0);
                bVar10 = System_String__op_Equality
                                   ((System_String_o *)a,
                                    (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                    (MethodInfo *)0x0);
                __this_02 = (UI_MessagePopup_o *)onSave->m_Items[2];
                method_00 = (Settings_StringSetting_array *)0x0;
                if (__this_02 != (UI_MessagePopup_o *)0x0) {
                  if ((char)bVar10 != '\0') {
                    UI_MessagePopup__Show(__this_02,"Error: bundle name cannot be empty.",1,(MethodInfo *)0x0);
                    return;
                  }
                  UI_MessagePopup__Show(__this_02,"Loading asset bundle...",0,(MethodInfo *)0x0);
                  if (g_data_057ae659 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadAssetBundle_d__15);
                    g_data_057ae659 = '\x01';
                  }
                  pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadAssetBundle_d__15);
                  method_00 = pSVar11;
                  System_Object___ctor((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
                  *(undefined4 *)&pSVar11->bounds = 0;
                  onSave = (Settings_StringSetting_array *)0x0;
                  if (pSVar11 != (Settings_StringSetting_array *)0x0) {
                    pSVar11->m_Items[1] = (Settings_StringSetting_o *)__this;
                    il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 1,__this);
                    pSVar11->m_Items[0] = (Settings_StringSetting_o *)a;
                    il2cpp_runtime_helper_022b4080(pSVar11->m_Items,a);
                    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)__this,
                               (System_Collections_IEnumerator_o *)pSVar11,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          else {
            method_00 = pSVar11;
            if (onSave != (Settings_StringSetting_array *)0x0) {
              __this_01 = (UI_SetNamePopup_o *)onSave->m_Items[0xd];
              onSave = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              method_00 = onSave;
              UnityEngine_Events_UnityAction___ctor();
              if (__this_01 != (UI_SetNamePopup_o *)0x0) {
                UI_SetNamePopup__Show
                          (__this_01,"",(UnityEngine_Events_UnityAction_o *)onSave,"Add asset bundle",
                           (System_String_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        else {
          pGVar18 = (__this->fields)._gameManager;
          method_00 = pSVar11;
          if ((pGVar18 != (GameManagers_MapEditorGameManager_o *)0x0) &&
             (pMVar6 = (pGVar18->fields).MapScript, pMVar6 != (Map_MapScript_o *)0x0)) {
            onSave = (Settings_StringSetting_array *)(pMVar6->fields).CustomAssets;
            pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
            method_00 = pSVar11;
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_System_String);
            if (onSave != (Settings_StringSetting_array *)0x0) {
              onSave->bounds = (Il2CppArrayBounds *)pSVar11;
              onSave = (Settings_StringSetting_array *)&onSave->bounds;
              il2cpp_runtime_helper_022b4080(onSave,pSVar11);
              if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              method_00 = (Settings_StringSetting_array *)0x0;
              ApplicationManagers_AssetBundleManager__Clear((MethodInfo *)0x0);
              pSVar15 = (__this->fields)._elements;
              if (pSVar15 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
                           (System_Collections_Generic_List_object__o *)pSVar15,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
                while (__this_03.fields._8_8_ = in_stack_ffffffffffffffb0,
                      __this_03.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8,
                      __this_03.fields._current = (Il2CppObject *)pIVar21,
                      bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8),
                      (char)bVar10 != '\0') {
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  onSave = pSStack_38;
                }
                method_00 = (Settings_StringSetting_array *)&stack0xffffffffffffffb8;
                __this_04.fields._8_8_ = in_stack_ffffffffffffffb0;
                __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
                __this_04.fields._current = (Il2CppObject *)pIVar21;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_04,(MethodInfo_321A1C0 *)method_00);
                goto label_04424efc;
              }
            }
          }
        }
      }
      else {
        method_00 = pSVar11;
        if (onSave != (Settings_StringSetting_array *)0x0) {
          __this_00 = (Il2CppRGCTXData *)onSave->m_Items[3];
          onSave = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          method_00 = onSave;
          UnityEngine_Events_UnityAction___ctor();
          if (__this_00 != (Il2CppRGCTXData *)0x0) {
            UI_ConfirmPopup__Show
                      ((UI_ConfirmPopup_o *)__this_00,"Do you want to clear all custom asset bundles?",(UnityEngine_Events_UnityAction_o *)onSave,
                       (System_String_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_04425128;
    }
    in_stack_ffffffffffffffb0 = onSave;
    pSVar11 = (Settings_StringSetting_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    method_00 = pSVar11;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_System_String);
    pSVar15 = (__this->fields)._elements;
    if (pSVar15 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04425128;
    if (pSVar11 != (Settings_StringSetting_array *)0x0) {
      iVar19 = 0;
      pGVar18 = (__this->fields)._gameManager;
      if (pGVar18 != (GameManagers_MapEditorGameManager_o *)0x0) {
        while (pMVar6 = (pGVar18->fields).MapScript, pMVar6 != (Map_MapScript_o *)0x0) {
          pMVar7 = (pMVar6->fields).CustomAssets;
          method_00 = (Settings_StringSetting_array *)0x0;
          if (pMVar7 == (Map_MapScriptCustomAssets_o *)0x0) break;
          method_00 = (Settings_StringSetting_array *)&pMVar7->fields;
          pSVar12 = in_stack_ffffffffffffffb0;
          if ((pSVar15->fields)._size <= iVar19) goto label_04424e14;
          method_00 = (Settings_StringSetting_array *)
                      ((Map_MapScriptCustomAssets_Fields *)method_00)->CustomAssets;
          if (((method_00 == (Settings_StringSetting_array *)0x0) ||
              (pSVar12 = (Settings_StringSetting_array *)
                         System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)method_00,iVar19,MethodInfo_String_get_Item
                                   ), pSVar12 == (Settings_StringSetting_array *)0x0)) ||
             (pSVar13 = System_String__Split((System_String_o *)pSVar12,0x2c,0,(MethodInfo *)0x0),
             method_00 = pSVar12, pSVar13 == (System_String_array *)0x0)) break;
          if ((int)pSVar13->max_length == 0) goto label_044250e4;
          method_00 = (Settings_StringSetting_array *)0x0;
          if (pSVar13->m_Items[0] == (System_String_o *)0x0) break;
          pSVar12 = (Settings_StringSetting_array *)System_String__Trim(pSVar13->m_Items[0],(MethodInfo *)0x0)
          ;
          method_00 = (Settings_StringSetting_array *)(__this->fields)._settings;
          if ((method_00 == (Settings_StringSetting_array *)0x0) ||
             (pIVar14 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)method_00,iVar19,MethodInfo_StringSetting_get_Item)
             , onSave = pSVar12, pIVar14 == (Il2CppObject *)0x0)) break;
          method_00 = (Settings_StringSetting_array *)0x0;
          if (pIVar14[1].monitor == (System_String_o *)0x0) break;
          pSVar16 = System_String__Trim(pIVar14[1].monitor,(MethodInfo *)0x0);
          method_00 = pSVar12;
          pSVar16 = System_String__Concat_3af7150
                              ((System_String_o *)pSVar12,",",pSVar16,(MethodInfo *)0x0);
          lVar9 = MethodInfo_Void_Add;
          piVar1 = (int *)((long)&pSVar11->max_length + 4);
          *piVar1 = *piVar1 + 1;
          pIVar5 = pSVar11->bounds;
          if (pIVar5 == (Il2CppArrayBounds *)0x0) break;
          uVar3 = *(uint *)&pSVar11->max_length;
          if (uVar3 < (uint)pIVar5[1].lower_bound) {
            *(uint *)&pSVar11->max_length = uVar3 + 1;
            method_00 = (Settings_StringSetting_array *)(&pIVar5[2].length + (int)uVar3);
            (&pIVar5[2].length)[(int)uVar3] = (il2cpp_array_size_t)pSVar16;
            il2cpp_runtime_helper_022b4080();
            pSVar15 = (__this->fields)._elements;
          }
          else {
            method_00 = pSVar11;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pSVar16,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            pSVar15 = (__this->fields)._elements;
          }
          if (pSVar15 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
          iVar19 = iVar19 + 1;
          pGVar18 = (__this->fields)._gameManager;
          if (pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) break;
        }
      }
      goto label_04425128;
    }
    pGVar18 = (__this->fields)._gameManager;
    if ((pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) ||
       (pMVar6 = (pGVar18->fields).MapScript, pMVar6 == (Map_MapScript_o *)0x0)) goto label_04425128;
    pMVar7 = (pMVar6->fields).CustomAssets;
    method_00 = (Settings_StringSetting_array *)0x0;
    if (pMVar7 == (Map_MapScriptCustomAssets_o *)0x0) goto label_04425128;
    method_00 = (Settings_StringSetting_array *)&pMVar7->fields;
    onSave = in_stack_ffffffffffffffb0;
    pSVar12 = in_stack_ffffffffffffffb0;
    if ((pSVar15->fields)._size < 1) {
label_04424e14:
      (method_00->obj).klass = (Il2CppClass *)pSVar11;
      in_stack_ffffffffffffffb0 = pSVar12;
      il2cpp_runtime_helper_022b4080();
      onSave = pSVar12;
      if (pSVar12 != (Settings_StringSetting_array *)0x0) {
        method_00 = (Settings_StringSetting_array *)0x0;
        if ((UI_MapEditorTopPanel_o *)pSVar12->m_Items[0x12] != (UI_MapEditorTopPanel_o *)0x0) {
          UI_MapEditorTopPanel__Save((UI_MapEditorTopPanel_o *)pSVar12->m_Items[0x12],(MethodInfo *)pSVar11);
          (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
          return;
        }
      }
      goto label_04425128;
    }
  }
  else {
    onSave = *(Settings_StringSetting_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (onSave == (Settings_StringSetting_array *)0x0) goto label_04424a2c;
label_044249fa:
    pIVar4 = (onSave->obj).klass;
    if ((*(byte *)(TypeInfo_MapEditorMenu + 0x130) <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)*(byte *)(TypeInfo_MapEditorMenu + 0x130) - 1] == (Il2CppClass *)TypeInfo_MapEditorMenu)
       ) goto label_04424a2c;
    method_00 = onSave;
    il2cpp_runtime_helper_022b2fd0();
  }
  method_00 = (Settings_StringSetting_array *)(method_00->obj).klass;
  if (((method_00 != (Settings_StringSetting_array *)0x0) &&
      (pSVar11 = (Settings_StringSetting_array *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)method_00,0,MethodInfo_String_get_Item),
      pSVar11 != (Settings_StringSetting_array *)0x0)) &&
     (pSVar13 = System_String__Split((System_String_o *)pSVar11,0x2c,0,(MethodInfo *)0x0), method_00 = pSVar11
     , pSVar13 != (System_String_array *)0x0)) {
    if ((int)pSVar13->max_length == 0) {
label_044250e4:
      pSVar13 = (System_String_array *)il2cpp_runtime_helper_022b2ca0();
    }
    method_00 = (Settings_StringSetting_array *)0x0;
    if (pSVar13->m_Items[0] != (System_String_o *)0x0) {
      pSVar11 = (Settings_StringSetting_array *)System_String__Trim(pSVar13->m_Items[0],(MethodInfo *)0x0);
      method_00 = (Settings_StringSetting_array *)(__this->fields)._settings;
      if (((method_00 != (Settings_StringSetting_array *)0x0) &&
          (pIVar14 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)method_00,0,MethodInfo_StringSetting_get_Item),
          onSave = pSVar11, pIVar14 != (Il2CppObject *)0x0)) &&
         (method_00 = pIVar14[1].monitor, method_00 != (Settings_StringSetting_array *)0x0))
      goto label_0442512d;
    }
  }
label_04425128:
  do {
    il2cpp_runtime_helper_022b2c90();
    pSVar11 = onSave;
label_0442512d:
    pSVar16 = System_String__Trim((System_String_o *)method_00,(MethodInfo *)0x0);
    System_String__Concat_3af7150((System_String_o *)pSVar11,",",pSVar16,(MethodInfo *)0x0);
    auVar20 = il2cpp_runtime_helper_022b2c90();
    onSave = auVar20._0_8_;
    if (auVar20._8_4_ != 1) {
label_04425197:
      __this_06.fields._8_8_ = in_stack_ffffffffffffffb0;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
      __this_06.fields._current = (Il2CppObject *)pIVar21;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
      _Unwind_Resume(onSave);
    }
    plVar17 = (long *)__cxa_begin_catch(onSave);
    lVar9 = *plVar17;
    __cxa_end_catch();
    method_00 = (Settings_StringSetting_array *)&stack0xffffffffffffffb8;
    __this_05.fields._8_8_ = in_stack_ffffffffffffffb0;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8;
    __this_05.fields._current = (Il2CppObject *)pIVar21;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)method_00);
    if (lVar9 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar9);
      goto label_04425197;
    }
label_04424efc:
    pSVar8 = (__this->fields)._settings;
    if (pSVar8 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
      piVar2 = &(pSVar8->fields)._version;
      *piVar2 = *piVar2 + 1;
      iVar19 = (pSVar8->fields)._size;
      (pSVar8->fields)._size = 0;
      if (0 < iVar19) {
        method_00 = (pSVar8->fields)._items;
        System_Array__Clear((System_Array_o *)method_00,0,iVar19,(MethodInfo *)0x0);
      }
      pSVar15 = (__this->fields)._elements;
      if (pSVar15 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar2 = &(pSVar15->fields)._version;
        *piVar2 = *piVar2 + 1;
        iVar19 = (pSVar15->fields)._size;
        (pSVar15->fields)._size = 0;
        if (0 < iVar19) {
          System_Array__Clear((System_Array_o *)(pSVar15->fields)._items,0,iVar19,(MethodInfo *)0x0);
        }
        return;
      }
    }
  } while( true );
}


