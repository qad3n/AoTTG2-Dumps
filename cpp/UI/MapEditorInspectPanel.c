// Type: UI.MapEditorInspectPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorInspectPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorInspectPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorInspectPanel.<>c__DisplayClass57_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass57_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass57_0_o* __this, const MethodInfo* method);
// 0x4119e40

void UI_MapEditorInspectPanel_<>c__DisplayClass57_0___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass57_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass57_0$$<Show>b__34
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass57_0___Show_b__34 (UI_MapEditorInspectPanel___c__DisplayClass57_0_o* __this, const MethodInfo* method);
// 0x4120f00

void UI_MapEditorInspectPanel_<>c__DisplayClass57_0__<Show>b__34
               (UI_MapEditorInspectPanel___c__DisplayClass57_0_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorInspectPanel_o *)0x0) {
    UI_MapEditorInspectPanel__OnButtonClick(__this_00,(__this->fields).name,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass59_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass59_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass59_0_o* __this, const MethodInfo* method);
// 0x411b910

void UI_MapEditorInspectPanel_<>c__DisplayClass59_0___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass59_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass59_0$$<OnButtonClick>b__1
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass59_0___OnButtonClick_b__1 (UI_MapEditorInspectPanel___c__DisplayClass59_0_o* __this, const MethodInfo* method);
// 0x4120f20

void UI_MapEditorInspectPanel_<>c__DisplayClass59_0__<OnButtonClick>b__1
               (UI_MapEditorInspectPanel___c__DisplayClass59_0_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorInspectPanel_o *)0x0) {
    UI_MapEditorInspectPanel__OnDeleteComponent(__this_00,(__this->fields).index,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass68_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass68_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass68_0_o* __this, const MethodInfo* method);
// 0x4120290

void UI_MapEditorInspectPanel_<>c__DisplayClass68_0___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass68_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass68_0$$<ApplyMixedIndicators>b__0
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass68_0___ApplyMixedIndicators_b__0 (UI_MapEditorInspectPanel___c__DisplayClass68_0_o* __this, bool __, const MethodInfo* method);
// 0x4120f40

void UI_MapEditorInspectPanel_<>c__DisplayClass68_0__<ApplyMixedIndicators>b__0
               (UI_MapEditorInspectPanel___c__DisplayClass68_0_o *__this,bool_conflict __,
               MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_UI_Image_o *__this_00;
  UI_MapEditorInspectPanel_o *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  bool_conflict bVar3;
  
  if (DAT_057048ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057048ee = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).labelGO;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).labelGO;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar1,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).checkmark;
  if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,1,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).__4__this;
    if ((pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) &&
       (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (pUVar2->fields)._syncedSerialized,
       __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      System_Collections_Generic_Dictionary<object__object>__Remove
                (__this_01,(Il2CppObject *)(__this->fields).capturedKey,MethodInfo_Boolean_Remove);
      pUVar2 = (__this->fields).__4__this;
      if ((pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) &&
         (__this_02 = (System_Collections_Generic_HashSet_object__o *)(pUVar2->fields)._mixedFields,
         __this_02 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet<object>__Remove
                  (__this_02,(Il2CppObject *)(__this->fields).capturedKey,MethodInfo_Boolean_Remove);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__58$$.ctor
// il2cpp: void UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58___ctor (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x411b690

void UI_MapEditorInspectPanel_<WaitAndEnablePanel>d__58___ctor
               (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__58$$System.IDisposable.Dispose
// il2cpp: void UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58__System_IDisposable_Dispose (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58_o* __this, const MethodInfo* method);
// 0x4121040

void UI_MapEditorInspectPanel_<WaitAndEnablePanel>d__58__System_IDisposable_Dispose
               (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58_o *__this,MethodInfo *method)

{
  return;
}


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__58$$MoveNext
// il2cpp: bool UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58__MoveNext (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58_o* __this, const MethodInfo* method);
// 0x4121050

bool_conflict
UI_MapEditorInspectPanel_<WaitAndEnablePanel>d__58__MoveNext
          (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MapEditorInspectPanel_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *__this_01;
  UnityEngine_GameObject_o *__this_02;
  bool_conflict bVar3;
  
  if (DAT_057048ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    DAT_057048ef = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (((pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) &&
        (__this_00 = (pUVar2->fields).SinglePanel, __this_00 != (UnityEngine_Transform_o *)0x0)) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,1,(MethodInfo *)0x0);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)__this_01,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_01;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    bVar3 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  else {
    bVar3 = 0;
  }
  return bVar3;
}


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__58$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58_o* __this, const MethodInfo* method);
// 0x4121110

Il2CppObject *
UI_MapEditorInspectPanel_<WaitAndEnablePanel>d__58__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__58$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58__System_Collections_IEnumerator_Reset (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58_o* __this, const MethodInfo* method);
// 0x4121120

void UI_MapEditorInspectPanel_<WaitAndEnablePanel>d__58__System_Collections_IEnumerator_Reset
               (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58_o *__this,MethodInfo *method)

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


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__58$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58__System_Collections_IEnumerator_get_Current (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58_o* __this, const MethodInfo* method);
// 0x4121160

Il2CppObject *
UI_MapEditorInspectPanel_<WaitAndEnablePanel>d__58__System_Collections_IEnumerator_get_Current
          (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__58_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorInspectPanel$$get_Width
// il2cpp: float UI_MapEditorInspectPanel__get_Width (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x41150d0

float UI_MapEditorInspectPanel__get_Width(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  return 400.0;
}


// UI.MapEditorInspectPanel$$get_Height
// il2cpp: float UI_MapEditorInspectPanel__get_Height (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x41150e0

float UI_MapEditorInspectPanel__get_Height(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  return 990.0;
}


// UI.MapEditorInspectPanel$$get_TopBarHeight
// il2cpp: float UI_MapEditorInspectPanel__get_TopBarHeight (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x41150f0

float UI_MapEditorInspectPanel__get_TopBarHeight
                (UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorInspectPanel$$get_BottomBarHeight
// il2cpp: float UI_MapEditorInspectPanel__get_BottomBarHeight (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4115100

float UI_MapEditorInspectPanel__get_BottomBarHeight
                (UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorInspectPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorInspectPanel__get_VerticalSpacing (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4115110

float UI_MapEditorInspectPanel__get_VerticalSpacing
                (UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.MapEditorInspectPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorInspectPanel__get_HorizontalPadding (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4115120

int32_t UI_MapEditorInspectPanel__get_HorizontalPadding
                  (UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.MapEditorInspectPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorInspectPanel__get_VerticalPadding (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4115130

int32_t UI_MapEditorInspectPanel__get_VerticalPadding
                  (UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.MapEditorInspectPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorInspectPanel__get_ScrollBar (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4115140

bool_conflict
UI_MapEditorInspectPanel__get_ScrollBar(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorInspectPanel$$Setup
// il2cpp: void UI_MapEditorInspectPanel__Setup (UI_MapEditorInspectPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4115150

void UI_MapEditorInspectPanel__Setup
               (UI_MapEditorInspectPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  UI_MapEditorMenu_o *pUVar3;
  
  if (DAT_057048da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorMenu);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057048da = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    pUVar3 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar3 != (UI_MapEditorMenu_o *)0x0) goto LAB_041151ca;
LAB_04115245:
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    pUVar3 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar3 == (UI_MapEditorMenu_o *)0x0) goto LAB_04115245;
LAB_041151ca:
    pIVar2 = TypeInfo_MapEditorMenu;
    bVar1 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
    if (((pUVar3->klass->_2).naturalAligment < bVar1) ||
       ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorMenu)) goto LAB_041152c0;
    (__this->fields)._menu = pUVar3;
    if (((pUVar3->klass->_2).naturalAligment < bVar1) ||
       ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar2)) goto LAB_041152c0;
  }
  il2cpp_runtime_glue(&(__this->fields)._menu);
  pIVar2 = TypeInfo_MapEditorGameManager;
  pUVar3 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pUVar3 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
LAB_041152d6:
    il2cpp_runtime_glue(&(__this->fields)._gameManager);
    return;
  }
  bVar1 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
  if ((bVar1 <= (pUVar3->klass->_2).naturalAligment) &&
     ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MapEditorGameManager)) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)pUVar3;
    if ((bVar1 <= (pUVar3->klass->_2).naturalAligment) &&
       ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar2)) goto LAB_041152d6;
  }
LAB_041152c0:
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pUVar3,pIVar2);
}


// UI.MapEditorInspectPanel$$HasNonConvexMeshCollider
// il2cpp: bool UI_MapEditorInspectPanel__HasNonConvexMeshCollider (UI_MapEditorInspectPanel_o* __this, Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x41152f0

bool_conflict
UI_MapEditorInspectPanel__HasNonConvexMeshCollider
          (UI_MapEditorInspectPanel_o *__this,Map_MapObject_o *mapObject,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_MeshCollider_o *__this_01;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  ulong uVar5;
  
  if (DAT_057048db == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Collider___GetComponentsInChildren_Collider);
    il2cpp_init_method_metadata(&TypeInfo_MeshCollider);
    DAT_057048db = '\x01';
  }
  if (((mapObject != (Map_MapObject_o *)0x0) &&
      (__this_00 = (mapObject->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) &&
     (pSVar4 = UnityEngine_GameObject__GetComponentsInChildren<object>(__this_00,MethodInfo_Collider___GetComponentsInChildren_Collider),
     pSVar4 != (System_Object_array *)0x0)) {
    if ((int)pSVar4->max_length < 1) {
      return 0;
    }
    uVar5 = 0;
    if ((pSVar4->max_length & 0xffffffff) != 0) {
      do {
        __this_01 = (UnityEngine_MeshCollider_o *)pSVar4->m_Items[uVar5];
        if (__this_01 != (UnityEngine_MeshCollider_o *)0x0) {
          bVar1 = (TypeInfo_MeshCollider->_2).naturalAligment;
          if (((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
              ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MeshCollider)) &&
             (bVar3 = UnityEngine_MeshCollider__get_convex(__this_01,(MethodInfo *)0x0),
             (char)bVar3 == '\0')) {
            return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar3 >> 8),1);
          }
        }
        uVar5 = uVar5 + 1;
        uVar2 = (uint)pSVar4->max_length;
        if ((long)(int)uVar2 <= (long)uVar5) {
          return 0;
        }
      } while (uVar5 < uVar2);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel$$CopyID
// il2cpp: void UI_MapEditorInspectPanel__CopyID (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x41153e0

void UI_MapEditorInspectPanel__CopyID(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *value;
  
  pMVar1 = (__this->fields)._mapObject;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    value = System_Int32__ToString((int)pMVar2 + 0x20,(MethodInfo *)0x0);
    UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel$$CopyAssetCSV
// il2cpp: void UI_MapEditorInspectPanel__CopyAssetCSV (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4115420

void UI_MapEditorInspectPanel__CopyAssetCSV(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *value;
  
  pMVar1 = (__this->fields)._mapObject;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    value = (System_String_o *)(*(pMVar2->klass->vtable)._8_Serialize.methodPtr)();
    UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel$$Show
// il2cpp: void UI_MapEditorInspectPanel__Show (UI_MapEditorInspectPanel_o* __this, Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x4115460

void UI_MapEditorInspectPanel__Show
               (UI_MapEditorInspectPanel_o *__this,Map_MapObject_o *mapObject,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapObject_array *pMVar3;
  long lVar4;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_057048dc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_List_MapObject);
    DAT_057048dc = '\x01';
  }
  mapObjects = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_glue(TypeInfo_List_MapObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)mapObjects,MethodInfo_List_1_Map_MapObject);
  lVar4 = MethodInfo_Void_Add;
  if (mapObjects != (System_Collections_Generic_List_MapObject__o *)0x0) {
    piVar1 = &(mapObjects->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar3 = (mapObjects->fields)._items;
    if (pMVar3 != (Map_MapObject_array *)0x0) {
      uVar2 = (mapObjects->fields)._size;
      if (uVar2 < (uint)pMVar3->max_length) {
        (mapObjects->fields)._size = uVar2 + 1;
        pMVar3->m_Items[(int)uVar2] = mapObject;
        il2cpp_runtime_glue(pMVar3->m_Items + (int)uVar2,mapObject);
        method_00 = extraout_RDX;
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)mapObjects,(Il2CppObject *)mapObject
                   ,*(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        method_00 = extraout_RDX_00;
      }
      UI_MapEditorInspectPanel__Show(__this,mapObjects,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel$$Show
// il2cpp: void UI_MapEditorInspectPanel__Show (UI_MapEditorInspectPanel_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x4115540

void UI_MapEditorInspectPanel__Show
               (UI_MapEditorInspectPanel_o *__this,
               System_Collections_Generic_List_MapObject__o *mapObjects,MethodInfo *method)

{
  int32_t *piVar1;
  Map_MapObject_o **ppMVar2;
  byte bVar3;
  byte bVar4;
  int32_t length;
  uint uVar5;
  int iVar6;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_GameObject__o *pSVar7;
  Map_MapScriptBaseObject_o *pMVar8;
  Settings_BoolSetting_o *pSVar9;
  Settings_StringSetting_o *pSVar10;
  Settings_IntSetting_o *setting;
  UI_MapEditorMenu_o *pUVar11;
  Settings_ColorSetting_o *pSVar12;
  UI_ColorPickPopup_o *pUVar13;
  System_Collections_Generic_List_string__o *__this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  long lVar14;
  bool_conflict bVar15;
  System_Collections_Generic_List_MapObject__o *pSVar16;
  Map_MapObject_o *pMVar17;
  System_String_o *pSVar18;
  UI_ElementStyle_o *pUVar19;
  UnityEngine_GameObject_o *pUVar20;
  UnityEngine_Transform_o *pUVar21;
  UnityEngine_Events_UnityAction_o *pUVar22;
  MethodInfo *__this_06;
  System_Func_TSource__bool__o *predicate;
  System_String_array *pSVar23;
  System_String_array *pSVar24;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *pSVar25;
  Il2CppObject *pIVar26;
  System_Collections_Generic_Dictionary_object__object__o *__this_07;
  System_Collections_Generic_Dictionary_object__object__o *__this_08;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar27;
  System_Collections_Generic_List_object__o *__this_09;
  System_String_o *item;
  System_Object_array *pSVar28;
  MethodInfo *pMVar29;
  UnityEngine_Events_UnityAction_o *pUVar30;
  Il2CppClass *pIVar31;
  System_String_o **ppSVar32;
  Settings_FloatSetting_o *pSVar33;
  UnityEngine_Events_UnityAction_o *onChangeColor;
  Il2CppObject *pIVar34;
  int local_98;
  uint local_94;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *local_90;
  _union_231280 local_88;
  undefined8 uStack_80;
  System_String_o *local_78;
  UI_ColorPickPopup_o *local_68;
  System_Collections_Generic_Dictionary_object__object__o *local_60;
  System_Collections_Generic_Dictionary_object__object__o *local_58;
  Il2CppObject *local_50;
  _union_231280 local_48;
  undefined8 uStack_40;
  System_String_o *local_38;
  
  if (DAT_057048dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_ColorSetting);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_String___get_Item);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Any_MapObject);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_Func_MapObject__bool);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_List_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_HasNonConvexMeshCollider);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_10);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_11);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_12);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_13);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_14);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_15);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_16);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_17);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_18);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_19);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_20);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_21);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_22);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_23);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_24);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_25);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_26);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_27);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_28);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_29);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_30);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_31);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_32);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_33);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_35);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_36);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_37);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_38);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_39);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_3);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_4);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_5);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_6);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_7);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_8);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__57_9);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideMode);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectPhysicsMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectShader);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__34);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass57_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&TypeInfo_Vector3Setting);
    il2cpp_init_method_metadata(&"Scale");
    il2cpp_init_method_metadata(&"CollideMode");
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"Z");
    il2cpp_init_method_metadata(&"Id: ");
    il2cpp_init_method_metadata(&"Add Component");
    il2cpp_init_method_metadata(&"Offset X");
    il2cpp_init_method_metadata(&"DeleteComponent");
    il2cpp_init_method_metadata(&"Offset Y");
    il2cpp_init_method_metadata(&"Asset: ");
    il2cpp_init_method_metadata(&"Dropbox");
    il2cpp_init_method_metadata(&"Networked");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Visible");
    il2cpp_init_method_metadata(&"Physics Material");
    il2cpp_init_method_metadata(&" objects");
    il2cpp_init_method_metadata(&"Texture");
    il2cpp_init_method_metadata(&"Selected ");
    il2cpp_init_method_metadata(&"Delete");
    il2cpp_init_method_metadata(&"Tiling Y");
    il2cpp_init_method_metadata(&"Icons/Navigation/CopyIcon");
    il2cpp_init_method_metadata(&"Active");
    il2cpp_init_method_metadata(&"Rotation");
    il2cpp_init_method_metadata(&"Tooltip");
    il2cpp_init_method_metadata(&"Tiling X");
    il2cpp_init_method_metadata(&"Shader");
    il2cpp_init_method_metadata(&"Parent Id");
    il2cpp_init_method_metadata(&"Static");
    il2cpp_init_method_metadata(&"Y");
    il2cpp_init_method_metadata(&"CollideWith");
    il2cpp_init_method_metadata(&"X");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Reflect color");
    il2cpp_init_method_metadata(&"Description");
    il2cpp_init_method_metadata(&"Collide Mode");
    il2cpp_init_method_metadata(&"Collide With");
    il2cpp_init_method_metadata(&"PhysicsMaterial");
    DAT_057048dd = '\x01';
  }
  local_94 = 0;
  local_98 = 0;
  local_88.genericMethod = (void *)0x0;
  uStack_80 = 0;
  local_78 = (System_String_o *)0x0;
  UI_BasePanel__Show((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  pSVar16 = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_glue(TypeInfo_List_MapObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar16,
             (System_Collections_Generic_IEnumerable_T__o *)mapObjects,MethodInfo_List_1_Map_MapObject);
  (__this->fields)._mapObjects = pSVar16;
  il2cpp_runtime_glue(&(__this->fields)._mapObjects);
  pSVar16 = (__this->fields)._mapObjects;
  if (pSVar16 == (System_Collections_Generic_List_MapObject__o *)0x0) goto LAB_0411891d;
  pMVar17 = (Map_MapObject_o *)
            System_Collections_Generic_List<object>__get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar16,0,MethodInfo_MapObject_get_Item);
  ppMVar2 = &(__this->fields)._mapObject;
  (__this->fields)._mapObject = pMVar17;
  il2cpp_runtime_glue(ppMVar2,pMVar17);
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_0411891d;
  pMVar29 = MethodInfo_Void_Clear;
  System_Collections_Generic_HashSet<object>__Clear(__this_00,(MethodInfo_335C410 *)MethodInfo_Void_Clear);
  pSVar7 = (__this->fields)._mixedNumericElements;
  if (pSVar7 == (System_Collections_Generic_List_GameObject__o *)0x0) goto LAB_0411891d;
  piVar1 = &(pSVar7->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar7->fields)._size;
  (pSVar7->fields)._size = 0;
  if (0 < length) {
    pMVar29 = (MethodInfo *)0x0;
    System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,length,(MethodInfo *)0x0);
  }
  UI_MapEditorInspectPanel__SyncSettings(__this,pMVar29);
  pSVar18 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar19 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar19,0x12,80.0,10.0,pSVar18,(MethodInfo *)0x0);
  pSVar16 = (__this->fields)._mapObjects;
  if (pSVar16 == (System_Collections_Generic_List_MapObject__o *)0x0) goto LAB_0411891d;
  uVar5 = (pSVar16->fields)._size;
  pUVar21 = (__this->fields).SinglePanel;
  if (uVar5 == 1) {
    pUVar20 = UI_ElementFactory__CreateHorizontalGroup(pUVar21,20.0,3,(MethodInfo *)0x0);
    if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto LAB_0411891d;
    pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
    pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateIconButton
              (pUVar21,pUVar19,"Icons/Navigation/CopyIcon",32.0,32.0,pUVar22,(MethodInfo *)0x0);
    pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
    pUVar20 = UI_ElementFactory__CreateVerticalGroup(pUVar21,10.0,0,(MethodInfo *)0x0);
    if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto LAB_0411891d;
    pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
    pMVar17 = *ppMVar2;
    if ((pMVar17 == (Map_MapObject_o *)0x0) ||
       (pMVar8 = (pMVar17->fields).ScriptObject, pMVar8 == (Map_MapScriptBaseObject_o *)0x0))
    goto LAB_0411891d;
    pSVar18 = System_Int32__ToString((int)pMVar8 + 0x20,(MethodInfo *)0x0);
    pSVar18 = System_String__Concat("Id: ",pSVar18,(MethodInfo *)0x0);
    pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateTextButton(pUVar21,pUVar19,pSVar18,0.0,pUVar22,(MethodInfo *)0x0);
    pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
    pMVar17 = (__this->fields)._mapObject;
    if ((pMVar17 == (Map_MapObject_o *)0x0) ||
       (pMVar8 = (pMVar17->fields).ScriptObject, pMVar8 == (Map_MapScriptBaseObject_o *)0x0))
    goto LAB_0411891d;
    pSVar18 = System_String__Concat("Asset: ",(pMVar8->fields).Asset,(MethodInfo *)0x0);
    pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateTextButton(pUVar21,pUVar19,pSVar18,0.0,pUVar22,(MethodInfo *)0x0);
  }
  else {
    local_94 = uVar5;
    pSVar18 = System_Int32__ToString((int32_t)&local_94,(MethodInfo *)0x0);
    pSVar18 = System_String__Concat("Selected ",pSVar18," objects",(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar21,pUVar19,pSVar18,0,3,(MethodInfo *)0x0);
  }
  pUVar20 = UI_ElementFactory__CreateHorizontalGroup
                      ((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
  if ((pUVar20 == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0),
     pUVar19 == (UI_ElementStyle_o *)0x0)) goto LAB_0411891d;
  (pUVar19->fields).TitleWidth = 45.0;
  pSVar9 = (__this->fields)._active;
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateToggleSetting
            (pUVar21,pUVar19,(Settings_BaseSetting_o *)pSVar9,"Active",
             (System_String_o *)"",25.0,25.0,pUVar22,(MethodInfo *)0x0);
  pSVar9 = (__this->fields)._static;
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateToggleSetting
            (pUVar21,pUVar19,(Settings_BaseSetting_o *)pSVar9,"Static",
             (System_String_o *)"",25.0,25.0,pUVar22,(MethodInfo *)0x0);
  (pUVar19->fields).TitleWidth = 80.0;
  pSVar9 = (__this->fields)._networked;
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateToggleSetting
            (pUVar21,pUVar19,(Settings_BaseSetting_o *)pSVar9,"Networked",
             (System_String_o *)"",25.0,25.0,pUVar22,(MethodInfo *)0x0);
  pUVar21 = (__this->fields).SinglePanel;
  pSVar10 = (__this->fields)._name;
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateInputSetting
            (pUVar21,pUVar19,(Settings_BaseSetting_o *)pSVar10,"Name",
             (System_String_o *)"",140.0,35.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
             pUVar22,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
             (MethodInfo *)0x0);
  pUVar21 = (__this->fields).SinglePanel;
  setting = (__this->fields)._parent;
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateInputSetting
            (pUVar21,pUVar19,(Settings_BaseSetting_o *)setting,"Parent Id",
             (System_String_o *)"",140.0,35.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
             pUVar22,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
             (MethodInfo *)0x0);
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  pSVar18 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar19 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar19,0x12,15.0,5.0,pSVar18,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel
            ((__this->fields).SinglePanel,pUVar19,"Position",0,4,(MethodInfo *)0x0);
  pUVar20 = UI_ElementFactory__CreateHorizontalGroup
                      ((__this->fields).SinglePanel,15.0,3,(MethodInfo *)0x0);
  if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto LAB_0411891d;
  pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
  pSVar33 = (__this->fields)._positionX;
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateInputSetting
            (pUVar21,pUVar19,(Settings_BaseSetting_o *)pSVar33,"X",
             (System_String_o *)"",80.0,35.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
             pUVar22,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
             (MethodInfo *)0x0);
  pSVar33 = (__this->fields)._positionY;
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateInputSetting
            (pUVar21,pUVar19,(Settings_BaseSetting_o *)pSVar33,"Y",
             (System_String_o *)"",80.0,35.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
             pUVar22,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
             (MethodInfo *)0x0);
  pSVar33 = (__this->fields)._positionZ;
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateInputSetting
            (pUVar21,pUVar19,(Settings_BaseSetting_o *)pSVar33,"Z",
             (System_String_o *)"",80.0,35.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
             pUVar22,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel
            ((__this->fields).SinglePanel,pUVar19,"Rotation",0,4,(MethodInfo *)0x0);
  pUVar20 = UI_ElementFactory__CreateHorizontalGroup
                      ((__this->fields).SinglePanel,15.0,3,(MethodInfo *)0x0);
  if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto LAB_0411891d;
  pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
  pSVar33 = (__this->fields)._rotationX;
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateInputSetting
            (pUVar21,pUVar19,(Settings_BaseSetting_o *)pSVar33,"X",
             (System_String_o *)"",80.0,35.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
             pUVar22,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
             (MethodInfo *)0x0);
  pSVar33 = (__this->fields)._rotationY;
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateInputSetting
            (pUVar21,pUVar19,(Settings_BaseSetting_o *)pSVar33,"Y",
             (System_String_o *)"",80.0,35.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
             pUVar22,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
             (MethodInfo *)0x0);
  pSVar33 = (__this->fields)._rotationZ;
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateInputSetting
            (pUVar21,pUVar19,(Settings_BaseSetting_o *)pSVar33,"Z",
             (System_String_o *)"",80.0,35.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
             pUVar22,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel
            ((__this->fields).SinglePanel,pUVar19,"Scale",0,4,(MethodInfo *)0x0);
  pUVar20 = UI_ElementFactory__CreateHorizontalGroup
                      ((__this->fields).SinglePanel,15.0,3,(MethodInfo *)0x0);
  if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto LAB_0411891d;
  pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
  pSVar33 = (__this->fields)._scaleX;
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateInputSetting
            (pUVar21,pUVar19,(Settings_BaseSetting_o *)pSVar33,"X",
             (System_String_o *)"",80.0,35.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
             pUVar22,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
             (MethodInfo *)0x0);
  pSVar33 = (__this->fields)._scaleY;
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateInputSetting
            (pUVar21,pUVar19,(Settings_BaseSetting_o *)pSVar33,"Y",
             (System_String_o *)"",80.0,35.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
             pUVar22,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
             (MethodInfo *)0x0);
  pSVar33 = (__this->fields)._scaleZ;
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pMVar29 = "";
  UI_ElementFactory__CreateInputSetting
            (pUVar21,pUVar19,(Settings_BaseSetting_o *)pSVar33,"Z",
             (System_String_o *)"",80.0,35.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
             pUVar22,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
             (MethodInfo *)0x0);
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  pSVar18 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_06 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_06,0x12,160.0,20.0,pSVar18,(MethodInfo *)0x0);
  pSVar16 = (__this->fields)._mapObjects;
  predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_MapObject__bool);
  System_Func<object__bool>___ctor();
  bVar15 = System_Linq_Enumerable__Any<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar16,predicate,
                      MethodInfo_Boolean_Any_MapObject);
  if ((char)bVar15 == '\0') {
    pSVar23 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,3);
    if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pSVar23 == (System_String_array *)0x0) goto LAB_0411891d;
    if ((int)pSVar23->max_length == 0) goto LAB_04118922;
    pSVar23->m_Items[0] = (System_String_o *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
    il2cpp_runtime_glue(pSVar23->m_Items);
    if ((uint)pSVar23->max_length < 2) goto LAB_04118922;
    pSVar23->m_Items[1] = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 8);
    il2cpp_runtime_glue(pSVar23->m_Items + 1);
    if ((uint)pSVar23->max_length < 3) goto LAB_04118922;
    ppSVar32 = pSVar23->m_Items + 2;
    pSVar23->m_Items[2] = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10);
  }
  else {
    pSVar23 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
    if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pSVar23 == (System_String_array *)0x0) goto LAB_0411891d;
    if ((int)pSVar23->max_length == 0) goto LAB_04118922;
    pSVar23->m_Items[0] = (System_String_o *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
    il2cpp_runtime_glue(pSVar23->m_Items);
    if ((uint)pSVar23->max_length < 2) goto LAB_04118922;
    ppSVar32 = pSVar23->m_Items + 1;
    pSVar23->m_Items[1] = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10);
  }
  il2cpp_runtime_glue(ppSVar32);
  pUVar21 = (__this->fields).SinglePanel;
  pSVar10 = (__this->fields)._collideMode;
  pSVar23 = UI_MapEditorInspectPanel__WithMixedOption(__this,pSVar23,"CollideMode",pSVar10,pMVar29);
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateDropdownSetting
            (pUVar21,(UI_ElementStyle_o *)__this_06,(Settings_BaseSetting_o *)pSVar10,"Collide Mode",
             pSVar23,(System_String_o *)"",140.0,30.0,300.0,(System_Nullable_float__o)0x0,
             pUVar22,(MethodInfo *)0x0);
  pUVar21 = (__this->fields).SinglePanel;
  pSVar10 = (__this->fields)._collideWith;
  pSVar24 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,8);
  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pSVar24 == (System_String_array *)0x0) goto LAB_0411891d;
  if ((int)pSVar24->max_length == 0) {
LAB_04118922:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar24->m_Items[0] = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
  il2cpp_runtime_glue(pSVar24->m_Items);
  if ((uint)pSVar24->max_length < 2) goto LAB_04118922;
  pSVar24->m_Items[1] = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x10);
  il2cpp_runtime_glue(pSVar24->m_Items + 1);
  if ((uint)pSVar24->max_length < 3) goto LAB_04118922;
  pSVar24->m_Items[2] = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x18);
  il2cpp_runtime_glue(pSVar24->m_Items + 2);
  if ((uint)pSVar24->max_length < 4) goto LAB_04118922;
  pSVar24->m_Items[3] = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x20);
  il2cpp_runtime_glue(pSVar24->m_Items + 3);
  if ((uint)pSVar24->max_length < 5) goto LAB_04118922;
  pSVar24->m_Items[4] = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x28);
  il2cpp_runtime_glue(pSVar24->m_Items + 4);
  if ((uint)pSVar24->max_length < 6) goto LAB_04118922;
  pSVar24->m_Items[5] = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x38);
  il2cpp_runtime_glue(pSVar24->m_Items + 5);
  if ((uint)pSVar24->max_length < 7) goto LAB_04118922;
  pSVar24->m_Items[6] = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 8);
  il2cpp_runtime_glue(pSVar24->m_Items + 6);
  if ((uint)pSVar24->max_length < 8) goto LAB_04118922;
  pSVar24->m_Items[7] = (System_String_o *)**(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8);
  il2cpp_runtime_glue(pSVar24->m_Items + 7);
  pSVar23 = UI_MapEditorInspectPanel__WithMixedOption
                      (__this,pSVar24,"CollideWith",(__this->fields)._collideWith,
                       (MethodInfo *)pSVar23);
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateDropdownSetting
            (pUVar21,(UI_ElementStyle_o *)__this_06,(Settings_BaseSetting_o *)pSVar10,"Collide With",
             pSVar23,(System_String_o *)"",140.0,30.0,300.0,(System_Nullable_float__o)0x0,
             pUVar22,(MethodInfo *)0x0);
  pUVar21 = (__this->fields).SinglePanel;
  pSVar10 = (__this->fields)._physicsMaterial;
  pSVar24 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
  if (*(int *)(TypeInfo_MapObjectPhysicsMaterial + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pSVar24 == (System_String_array *)0x0) goto LAB_0411891d;
  if ((int)pSVar24->max_length == 0) goto LAB_04118922;
  pSVar24->m_Items[0] = (System_String_o *)**(undefined8 **)(TypeInfo_MapObjectPhysicsMaterial + 0xb8);
  il2cpp_runtime_glue(pSVar24->m_Items);
  if ((uint)pSVar24->max_length < 2) goto LAB_04118922;
  pSVar24->m_Items[1] = *(System_String_o **)(*(long *)(TypeInfo_MapObjectPhysicsMaterial + 0xb8) + 8);
  il2cpp_runtime_glue(pSVar24->m_Items + 1);
  pSVar23 = UI_MapEditorInspectPanel__WithMixedOption
                      (__this,pSVar24,"PhysicsMaterial",(__this->fields)._physicsMaterial,
                       (MethodInfo *)pSVar23);
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateDropdownSetting
            (pUVar21,(UI_ElementStyle_o *)__this_06,(Settings_BaseSetting_o *)pSVar10,"Physics Material",
             pSVar23,(System_String_o *)"",140.0,30.0,300.0,(System_Nullable_float__o)0x0,
             pUVar22,(MethodInfo *)0x0);
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  pUVar21 = (__this->fields).SinglePanel;
  pSVar9 = (__this->fields)._visible;
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pMVar29 = "";
  UI_ElementFactory__CreateToggleSetting
            (pUVar21,(UI_ElementStyle_o *)__this_06,(Settings_BaseSetting_o *)pSVar9,"Visible",
             (System_String_o *)"",25.0,25.0,pUVar22,(MethodInfo *)0x0);
  pUVar21 = (__this->fields).SinglePanel;
  pSVar10 = (__this->fields)._shader;
  pSVar23 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,6);
  if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pSVar23 == (System_String_array *)0x0) goto LAB_0411891d;
  if ((int)pSVar23->max_length == 0) goto LAB_04118922;
  pSVar23->m_Items[0] = (System_String_o *)**(undefined8 **)(TypeInfo_MapObjectShader + 0xb8);
  il2cpp_runtime_glue(pSVar23->m_Items);
  if ((uint)pSVar23->max_length < 2) goto LAB_04118922;
  pSVar23->m_Items[1] = *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x18);
  il2cpp_runtime_glue(pSVar23->m_Items + 1);
  if ((uint)pSVar23->max_length < 3) goto LAB_04118922;
  pSVar23->m_Items[2] = *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x20);
  il2cpp_runtime_glue(pSVar23->m_Items + 2);
  if ((uint)pSVar23->max_length < 4) goto LAB_04118922;
  pSVar23->m_Items[3] = *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x28);
  il2cpp_runtime_glue(pSVar23->m_Items + 3);
  if ((uint)pSVar23->max_length < 5) goto LAB_04118922;
  pSVar23->m_Items[4] = *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8);
  il2cpp_runtime_glue(pSVar23->m_Items + 4);
  if ((uint)pSVar23->max_length < 6) goto LAB_04118922;
  pSVar23->m_Items[5] = *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10);
  il2cpp_runtime_glue(pSVar23->m_Items + 5);
  pSVar23 = UI_MapEditorInspectPanel__WithMixedOption
                      (__this,pSVar23,"Shader",(__this->fields)._shader,pMVar29);
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pIVar34 = (Il2CppObject *)0x0;
  onChangeColor = (UnityEngine_Events_UnityAction_o *)0x0;
  UI_ElementFactory__CreateDropdownSetting
            (pUVar21,(UI_ElementStyle_o *)__this_06,(Settings_BaseSetting_o *)pSVar10,"Shader",
             pSVar23,(System_String_o *)"",140.0,30.0,300.0,(System_Nullable_float__o)0x0,
             pUVar22,(MethodInfo *)0x0);
  pSVar10 = (__this->fields)._shader;
  if (pSVar10 == (Settings_StringSetting_o *)0x0) goto LAB_0411891d;
  bVar15 = System_String__op_Inequality
                     ((pSVar10->fields)._value,
                      *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8),(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    pUVar11 = (__this->fields)._menu;
    if (pUVar11 == (UI_MapEditorMenu_o *)0x0) goto LAB_0411891d;
    pUVar21 = (__this->fields).SinglePanel;
    pSVar12 = (__this->fields)._color;
    pUVar13 = (pUVar11->fields).ColorPickPopup;
    onChangeColor = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    pUVar22 = (UnityEngine_Events_UnityAction_o *)0x0;
    UI_ElementFactory__CreateColorSetting
              (pUVar21,(UI_ElementStyle_o *)__this_06,(Settings_BaseSetting_o *)pSVar12,"Color"
               ,pUVar13,(System_String_o *)"",90.0,25.0,onChangeColor,(MethodInfo *)0x0);
  }
  pSVar10 = (__this->fields)._shader;
  if (pSVar10 == (Settings_StringSetting_o *)0x0) goto LAB_0411891d;
  pSVar18 = (pSVar10->fields)._value;
  if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar15 = Map_MapObjectShader__IsLegacyShader(pSVar18,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    pSVar10 = (__this->fields)._shader;
    if (pSVar10 == (Settings_StringSetting_o *)0x0) goto LAB_0411891d;
    pSVar18 = (pSVar10->fields)._value;
    if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar15 = System_String__op_Equality
                       (pSVar18,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10),
                        (MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      pUVar21 = (__this->fields).SinglePanel;
      pSVar33 = (__this->fields)._tilingX;
      pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      UI_ElementFactory__CreateInputSetting
                (pUVar21,(UI_ElementStyle_o *)__this_06,(Settings_BaseSetting_o *)pSVar33,
                 "Tiling X",(System_String_o *)"",80.0,35.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,pUVar22,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar21 = (__this->fields).SinglePanel;
      pSVar33 = (__this->fields)._tilingY;
      pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      goto LAB_04117224;
    }
    pSVar10 = (__this->fields)._shader;
    if (pSVar10 == (Settings_StringSetting_o *)0x0) goto LAB_0411891d;
    pSVar18 = (pSVar10->fields)._value;
    if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar15 = System_String__op_Inequality
                       (pSVar18,(System_String_o *)**(undefined8 **)(TypeInfo_MapObjectShader + 0xb8),
                        (MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      pSVar10 = (__this->fields)._shader;
      if (pSVar10 == (Settings_StringSetting_o *)0x0) goto LAB_0411891d;
      pSVar18 = (pSVar10->fields)._value;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar15 = System_String__op_Inequality
                         (pSVar18,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8),
                          (MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        pSVar10 = (__this->fields)._shader;
        if (pSVar10 == (Settings_StringSetting_o *)0x0) goto LAB_0411891d;
        pSVar18 = (pSVar10->fields)._value;
        if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar15 = System_String__op_Inequality
                           (pSVar18,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10),
                            (MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          pSVar10 = (__this->fields)._shader;
          if (pSVar10 == (Settings_StringSetting_o *)0x0) goto LAB_0411891d;
          pSVar18 = (pSVar10->fields)._value;
          if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar15 = System_String__op_Equality
                             (pSVar18,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x28),
                              (MethodInfo *)0x0);
          if ((char)bVar15 != '\0') {
            pUVar11 = (__this->fields)._menu;
            if (pUVar11 == (UI_MapEditorMenu_o *)0x0) goto LAB_0411891d;
            pUVar21 = (__this->fields).SinglePanel;
            pSVar12 = (__this->fields)._reflectColor;
            pUVar13 = (pUVar11->fields).ColorPickPopup;
            pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            UI_ElementFactory__CreateColorSetting
                      (pUVar21,(UI_ElementStyle_o *)__this_06,(Settings_BaseSetting_o *)pSVar12,
                       "Reflect color",pUVar13,(System_String_o *)"",90.0,25.0,pUVar22,
                       (MethodInfo *)0x0);
          }
          pUVar20 = UI_ElementFactory__CreateHorizontalGroup
                              ((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
          if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto LAB_0411891d;
          pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
          pUVar20 = UI_ElementFactory__CreateDefaultLabel
                              (pUVar21,(UI_ElementStyle_o *)__this_06,"Texture",0,3,
                               (MethodInfo *)0x0);
          if ((pUVar20 == (UnityEngine_GameObject_o *)0x0) ||
             (pIVar34 = UnityEngine_GameObject__GetComponent<object>(pUVar20,MethodInfo_LayoutElement_GetComponent_LayoutElement),
             pIVar34 == (Il2CppObject *)0x0)) goto LAB_0411891d;
          (*pIVar34->klass->vtable[0x24].methodPtr)
                    (0x43200000,pIVar34,pIVar34->klass->vtable[0x24].method);
          pSVar10 = (__this->fields)._texture;
          if (pSVar10 == (Settings_StringSetting_o *)0x0) goto LAB_0411891d;
          pSVar18 = (pSVar10->fields)._value;
          pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateDefaultButton
                    (pUVar21,(UI_ElementStyle_o *)__this_06,pSVar18,0.0,0.0,pUVar22,
                     (MethodInfo *)0x0);
          pUVar21 = (__this->fields).SinglePanel;
          pSVar33 = (__this->fields)._tilingX;
          pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateInputSetting
                    (pUVar21,(UI_ElementStyle_o *)__this_06,(Settings_BaseSetting_o *)pSVar33,
                     "Tiling X",(System_String_o *)"",80.0,35.0,0,
                     (UnityEngine_Events_UnityAction_o *)0x0,pUVar22,
                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                     (MethodInfo *)0x0);
          pUVar21 = (__this->fields).SinglePanel;
          pSVar33 = (__this->fields)._tilingY;
          pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateInputSetting
                    (pUVar21,(UI_ElementStyle_o *)__this_06,(Settings_BaseSetting_o *)pSVar33,
                     "Tiling Y",(System_String_o *)"",80.0,35.0,0,
                     (UnityEngine_Events_UnityAction_o *)0x0,pUVar22,
                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                     (MethodInfo *)0x0);
          pUVar21 = (__this->fields).SinglePanel;
          pSVar33 = (__this->fields)._offsetX;
          pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateInputSetting
                    (pUVar21,(UI_ElementStyle_o *)__this_06,(Settings_BaseSetting_o *)pSVar33,
                     "Offset X",(System_String_o *)"",80.0,35.0,0,
                     (UnityEngine_Events_UnityAction_o *)0x0,pUVar22,
                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                     (MethodInfo *)0x0);
          pUVar21 = (__this->fields).SinglePanel;
          pSVar33 = (__this->fields)._offsetY;
          pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          pIVar34 = (Il2CppObject *)0x0;
          onChangeColor = (UnityEngine_Events_UnityAction_o *)0x0;
          UI_ElementFactory__CreateInputSetting
                    (pUVar21,(UI_ElementStyle_o *)__this_06,(Settings_BaseSetting_o *)pSVar33,
                     "Offset Y",(System_String_o *)"",80.0,35.0,0,
                     (UnityEngine_Events_UnityAction_o *)0x0,pUVar22,
                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                     (MethodInfo *)0x0);
        }
      }
    }
  }
  else {
    pUVar20 = UI_ElementFactory__CreateHorizontalGroup
                        ((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
    if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto LAB_0411891d;
    UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
    pUVar21 = (__this->fields).SinglePanel;
    pSVar33 = (__this->fields)._tilingX;
    pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateInputSetting
              (pUVar21,(UI_ElementStyle_o *)__this_06,(Settings_BaseSetting_o *)pSVar33,"Tiling X"
               ,(System_String_o *)"",80.0,35.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
               pUVar22,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
               (MethodInfo *)0x0);
    pUVar21 = (__this->fields).SinglePanel;
    pSVar33 = (__this->fields)._tilingY;
    pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
LAB_04117224:
    UnityEngine_Events_UnityAction___ctor();
    pIVar34 = (Il2CppObject *)0x0;
    onChangeColor = (UnityEngine_Events_UnityAction_o *)0x0;
    UI_ElementFactory__CreateInputSetting
              (pUVar21,(UI_ElementStyle_o *)__this_06,(Settings_BaseSetting_o *)pSVar33,"Tiling Y"
               ,(System_String_o *)"",80.0,35.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
               pUVar22,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
               (MethodInfo *)0x0);
  }
  pMVar29 = (MethodInfo *)(__this->fields).SinglePanel;
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(UnityEngine_Transform_o *)pMVar29,1.0,(MethodInfo *)0x0);
  pSVar16 = (__this->fields)._mapObjects;
  if (pSVar16 != (System_Collections_Generic_List_MapObject__o *)0x0) {
    if ((pSVar16->fields)._size == 1) {
      local_98 = 0;
      pSVar25 = (__this->fields)._components;
      if (pSVar25 != (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) {
LAB_041172d0:
        if ((pSVar25->fields)._size <= local_98) {
          pUVar21 = (__this->fields).SinglePanel;
          pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateDefaultButton
                    (pUVar21,(UI_ElementStyle_o *)__this_06,"Add Component",0.0,0.0,pUVar22,
                     (MethodInfo *)0x0);
          pMVar29 = __this_06;
          goto LAB_041183a3;
        }
        pIVar26 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass57_0);
        System_Object___ctor(pIVar26,(MethodInfo *)0x0);
        if (pIVar26 != (Il2CppObject *)0x0) {
          pIVar26[1].monitor = __this;
          local_50 = pIVar26;
          il2cpp_runtime_glue(&pIVar26[1].monitor,__this);
          __this_01 = (__this->fields)._componentNames;
          if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
            pUVar21 = (__this->fields).SinglePanel;
            pSVar18 = (System_String_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,local_98,
                                 MethodInfo_String_get_Item);
            UI_ElementFactory__CreateDefaultLabel
                      (pUVar21,(UI_ElementStyle_o *)__this_06,pSVar18,0,4,(MethodInfo *)0x0);
            pSVar25 = (__this->fields)._components;
            if (pSVar25 != (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0
               ) {
              local_90 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar25,local_98,
                                    MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
              if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar18 = CustomLogic_CustomLogicManager__GetModeDescription
                                  (local_90,(MethodInfo *)0x0);
              bVar15 = System_String__op_Inequality
                                 (pSVar18,(System_String_o *)"",(MethodInfo *)0x0);
              if ((char)bVar15 != '\0') {
                UI_ElementFactory__CreateDefaultLabel
                          ((__this->fields).SinglePanel,(UI_ElementStyle_o *)__this_06,pSVar18,0,3,
                           (MethodInfo *)0x0);
              }
              __this_07 = (System_Collections_Generic_Dictionary_object__object__o *)
                          il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
              System_Collections_Generic_Dictionary<object__object>___ctor(__this_07,MethodInfo_Dictionary_2_System_String_System_String);
              __this_08 = (System_Collections_Generic_Dictionary_object__object__o *)
                          il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
              System_Collections_Generic_Dictionary<object__object>___ctor(__this_08,MethodInfo_Dictionary_2_System_String_System_String);
              if ((local_90 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)
                 && (local_60 = __this_07,
                    pSVar27 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                                        ((System_Collections_Generic_Dictionary_object__object__o *)
                                         local_90,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
                    pSVar27 !=
                    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
                System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                            *)&local_48,pSVar27,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
                local_78 = local_38;
                local_88 = local_48;
                uStack_80 = uStack_40;
                local_58 = __this_08;
LAB_04117490:
                __this_02.fields._8_8_ = pUVar22;
                __this_02.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)onChangeColor;
                __this_02.fields._currentKey = pIVar34;
                bVar15 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                   (__this_02,(MethodInfo_31D0850 *)&local_88);
                pSVar18 = local_78;
                if ((char)bVar15 != '\0') {
                  pIVar26 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                      ((System_Collections_Generic_Dictionary_object__object__o *)
                                       local_90,(Il2CppObject *)local_78,MethodInfo_BaseSetting_get_Item);
                  if (pSVar18 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  bVar15 = System_String__EndsWith(pSVar18,"Tooltip",(MethodInfo *)0x0);
                  if (((char)bVar15 != '\0') && (pIVar26 != (Il2CppObject *)0x0)) {
                    bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
                    if ((bVar3 <= (pIVar26->klass->_2).naturalAligment) &&
                       ((pIVar26->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_StringSetting)) {
                      pSVar18 = System_String__Substring
                                          (pSVar18,0,(pSVar18->fields)._stringLength + -7,
                                           (MethodInfo *)0x0);
                      bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
                      if (((pIVar26->klass->_2).naturalAligment < bVar3) ||
                         ((pIVar26->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_StringSetting)) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_unwind_resume(pIVar26);
                      }
                      if (local_60 == (System_Collections_Generic_Dictionary_object__object__o *)0x0
                         ) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      System_Collections_Generic_Dictionary<object__object>__set_Item
                                (local_60,(Il2CppObject *)pSVar18,pIVar26[1].monitor,MethodInfo_Void_set_Item);
                      goto LAB_04117490;
                    }
                  }
                  bVar15 = System_String__EndsWith(pSVar18,"Dropbox",(MethodInfo *)0x0);
                  if (((char)bVar15 != '\0') && (pIVar26 != (Il2CppObject *)0x0)) {
                    bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
                    if ((bVar3 <= (pIVar26->klass->_2).naturalAligment) &&
                       ((pIVar26->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_StringSetting)) {
                      __this_09 = (System_Collections_Generic_List_object__o *)
                                  il2cpp_runtime_glue(TypeInfo_List_string);
                      System_Collections_Generic_List<object>___ctor(__this_09,MethodInfo_List_1_System_String);
                      bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
                      if (((pIVar26->klass->_2).naturalAligment < bVar3) ||
                         ((pIVar26->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_StringSetting)) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_unwind_resume(pIVar26);
                      }
                      if (pIVar26[1].monitor == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      pSVar23 = System_String__Split(pIVar26[1].monitor,0x2c,0,(MethodInfo *)0x0);
                      local_94 = 0;
                      if (pSVar23 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      iVar6 = (int)pSVar23->max_length;
                      if (__this_09 == (System_Collections_Generic_List_object__o *)0x0) {
                        if (iVar6 < 1) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
                        if (pSVar23->m_Items[0] != (System_String_o *)0x0) {
                          System_String__Trim(pSVar23->m_Items[0],(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
LAB_04117f10:
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      if (0 < iVar6) {
                        if (iVar6 == 0) {
LAB_04117e85:
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
                        while( true ) {
                          if (pSVar23->m_Items[(int)local_94] == (System_String_o *)0x0)
                          goto LAB_04117f10;
                          item = System_String__Trim(pSVar23->m_Items[(int)local_94],
                                                     (MethodInfo *)0x0);
                          lVar14 = MethodInfo_Void_Add;
                          piVar1 = &(__this_09->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar28 = (__this_09->fields)._items;
                          if (pSVar28 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                            il2cpp_raise_exception();
                          }
                          uVar5 = (__this_09->fields)._size;
                          if (uVar5 < (uint)pSVar28->max_length) {
                            (__this_09->fields)._size = uVar5 + 1;
                            pSVar28->m_Items[(int)uVar5] = (Il2CppObject *)item;
                            il2cpp_runtime_glue(pSVar28->m_Items + (int)uVar5);
                          }
                          else {
                            System_Collections_Generic_List<object>__AddWithResize
                                      (__this_09,(Il2CppObject *)item,
                                       *(MethodInfo_35A7350 **)
                                        (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                          }
                          local_94 = local_94 + 1;
                          uVar5 = (uint)pSVar23->max_length;
                          if ((int)uVar5 <= (int)local_94) break;
                          if (uVar5 <= local_94) goto LAB_04117e85;
                        }
                      }
                      pIVar26 = "None";
                      lVar14 = MethodInfo_Void_Add;
                      if ((__this_09->fields)._size == 0) {
                        piVar1 = &(__this_09->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar28 = (__this_09->fields)._items;
                        if (pSVar28 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
                        if ((int)pSVar28->max_length == 0) {
                          System_Collections_Generic_List<object>__AddWithResize
                                    (__this_09,pIVar26,
                                     *(MethodInfo_35A7350 **)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                        }
                        else {
                          (__this_09->fields)._size = 1;
                          pSVar28->m_Items[0] = pIVar26;
                          il2cpp_runtime_glue(pSVar28->m_Items);
                        }
                      }
                      pSVar18 = System_String__Substring
                                          (pSVar18,0,(pSVar18->fields)._stringLength + -7,
                                           (MethodInfo *)0x0);
                      pSVar28 = System_Collections_Generic_List<object>__ToArray
                                          (__this_09,MethodInfo_String___ToArray);
                      if (__this_08 ==
                          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      System_Collections_Generic_Dictionary<object__object>__set_Item
                                (__this_08,(Il2CppObject *)pSVar18,&pSVar28->obj,MethodInfo_Void_set_Item);
                    }
                  }
                  goto LAB_04117490;
                }
                __this_03.fields._8_8_ = pUVar22;
                __this_03.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)onChangeColor;
                __this_03.fields._currentKey = pIVar34;
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                          (__this_03,(MethodInfo_31D0840 *)&local_88);
                pSVar27 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                                    ((System_Collections_Generic_Dictionary_object__object__o *)
                                     local_90,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
                if (pSVar27 !=
                    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
                  System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                              *)&local_48,pSVar27,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
                  local_78 = local_38;
                  local_88 = local_48;
                  uStack_80 = uStack_40;
LAB_04117850:
                  do {
                    __this_04.fields._8_8_ = pUVar22;
                    __this_04.fields._dictionary =
                         (System_Collections_Generic_Dictionary_TKey__TValue__o *)onChangeColor;
                    __this_04.fields._currentKey = pIVar34;
                    bVar15 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                       (__this_04,(MethodInfo_31D0850 *)&local_88);
                    pSVar18 = local_78;
                    if ((char)bVar15 == '\0') goto LAB_04117da0;
                    pIVar26 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                        ((System_Collections_Generic_Dictionary_object__object__o *)
                                         local_90,(Il2CppObject *)local_78,MethodInfo_BaseSetting_get_Item);
                    bVar15 = System_String__op_Equality(pSVar18,"Description",(MethodInfo *)0x0);
                    if ((char)bVar15 == '\0') {
                      if (pSVar18 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      bVar15 = System_String__EndsWith(pSVar18,"Tooltip",(MethodInfo *)0x0);
                      if (((char)bVar15 != '\0') && (pIVar26 != (Il2CppObject *)0x0)) {
                        bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
                        if ((bVar3 <= (pIVar26->klass->_2).naturalAligment) &&
                           ((pIVar26->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_StringSetting))
                        goto LAB_04117850;
                      }
                      bVar15 = System_String__EndsWith(pSVar18,"Dropbox",(MethodInfo *)0x0);
                      pMVar29 = "";
                      if (((char)bVar15 != '\0') && (pIVar26 != (Il2CppObject *)0x0)) {
                        bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
                        if ((bVar3 <= (pIVar26->klass->_2).naturalAligment) &&
                           ((pIVar26->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_StringSetting))
                        goto LAB_04117850;
                      }
                      if (local_60 == (System_Collections_Generic_Dictionary_object__object__o *)0x0
                         ) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      bVar15 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                         (local_60,(Il2CppObject *)pSVar18,MethodInfo_Boolean_ContainsKey);
                      if ((char)bVar15 != '\0') {
                        pMVar29 = (MethodInfo *)
                                  System_Collections_Generic_Dictionary<object__object>__get_Item
                                            (local_60,(Il2CppObject *)pSVar18,MethodInfo_String_get_Item);
                      }
                      if (local_58 == (System_Collections_Generic_Dictionary_object__object__o *)0x0
                         ) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      bVar15 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                         (local_58,(Il2CppObject *)pSVar18,MethodInfo_Boolean_ContainsKey);
                      if ((char)bVar15 == '\0') {
                        if (pIVar26 == (Il2CppObject *)0x0) goto LAB_04117850;
                      }
                      else {
                        if (pIVar26 == (Il2CppObject *)0x0) goto LAB_04117850;
                        bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
                        if ((bVar3 <= (pIVar26->klass->_2).naturalAligment) &&
                           ((pIVar26->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_StringSetting)) {
                          pUVar21 = (__this->fields).SinglePanel;
                          pSVar23 = (System_String_array *)
                                    System_Collections_Generic_Dictionary<object__object>__get_Item
                                              (local_58,(Il2CppObject *)pSVar18,MethodInfo_String___get_Item);
                          pUVar22 = (UnityEngine_Events_UnityAction_o *)
                                    il2cpp_runtime_glue(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          pIVar34 = (Il2CppObject *)0x0;
                          onChangeColor = (UnityEngine_Events_UnityAction_o *)0x0;
                          UI_ElementFactory__CreateDropdownSetting
                                    (pUVar21,(UI_ElementStyle_o *)__this_06,
                                     (Settings_BaseSetting_o *)pIVar26,pSVar18,pSVar23,
                                     (System_String_o *)pMVar29,140.0,35.0,300.0,
                                     (System_Nullable_float__o)0x0,pUVar22,(MethodInfo *)0x0);
                          goto LAB_04117850;
                        }
                      }
                      pIVar31 = pIVar26->klass;
                      bVar3 = (pIVar31->_2).naturalAligment;
                      bVar4 = (TypeInfo_BoolSetting->_2).naturalAligment;
                      if ((bVar3 < bVar4) ||
                         ((pIVar31->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BoolSetting)) {
                        bVar4 = (TypeInfo_StringSetting->_2).naturalAligment;
                        if ((((bVar3 < bVar4) ||
                             ((pIVar31->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_StringSetting)) &&
                            ((bVar4 = (TypeInfo_FloatSetting->_2).naturalAligment, bVar3 < bVar4 ||
                             ((pIVar31->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_FloatSetting)))) &&
                           ((bVar4 = (TypeInfo_IntSetting->_2).naturalAligment, bVar3 < bVar4 ||
                            ((pIVar31->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_IntSetting)))) {
                          bVar4 = (TypeInfo_ColorSetting->_2).naturalAligment;
                          if ((bVar3 < bVar4) ||
                             ((pIVar31->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_ColorSetting)) {
                            bVar4 = (TypeInfo_Vector3Setting->_2).naturalAligment;
                            if ((bVar4 <= bVar3) &&
                               ((pIVar31->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_Vector3Setting)) {
                              pUVar11 = (__this->fields)._menu;
                              if (pUVar11 == (UI_MapEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                il2cpp_raise_exception();
                              }
                              pUVar21 = (__this->fields).SinglePanel;
                              local_68 = (UI_ColorPickPopup_o *)(pUVar11->fields).Vector3Popup;
                              onChangeColor =
                                   (UnityEngine_Events_UnityAction_o *)
                                   il2cpp_runtime_glue(TypeInfo_UnityAction);
                              UnityEngine_Events_UnityAction___ctor();
                              pUVar22 = (UnityEngine_Events_UnityAction_o *)0x0;
                              UI_ElementFactory__CreateVector3Setting
                                        (pUVar21,(UI_ElementStyle_o *)__this_06,
                                         (Settings_BaseSetting_o *)pIVar26,pSVar18,
                                         (UI_Vector3Popup_o *)local_68,(System_String_o *)pMVar29,
                                         90.0,30.0,onChangeColor,(MethodInfo *)0x0);
                            }
                          }
                          else {
                            pUVar11 = (__this->fields)._menu;
                            if (pUVar11 == (UI_MapEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            pUVar21 = (__this->fields).SinglePanel;
                            local_68 = (pUVar11->fields).ColorPickPopup;
                            onChangeColor =
                                 (UnityEngine_Events_UnityAction_o *)
                                 il2cpp_runtime_glue(TypeInfo_UnityAction);
                            UnityEngine_Events_UnityAction___ctor();
                            pUVar22 = (UnityEngine_Events_UnityAction_o *)0x0;
                            UI_ElementFactory__CreateColorSetting
                                      (pUVar21,(UI_ElementStyle_o *)__this_06,
                                       (Settings_BaseSetting_o *)pIVar26,pSVar18,local_68,
                                       (System_String_o *)pMVar29,90.0,30.0,onChangeColor,
                                       (MethodInfo *)0x0);
                          }
                        }
                        else {
                          pUVar21 = (__this->fields).SinglePanel;
                          pUVar22 = (UnityEngine_Events_UnityAction_o *)
                                    il2cpp_runtime_glue(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          pIVar34 = (Il2CppObject *)0x0;
                          onChangeColor = (UnityEngine_Events_UnityAction_o *)0x0;
                          UI_ElementFactory__CreateInputSetting
                                    (pUVar21,(UI_ElementStyle_o *)__this_06,
                                     (Settings_BaseSetting_o *)pIVar26,pSVar18,
                                     (System_String_o *)pMVar29,140.0,35.0,0,
                                     (UnityEngine_Events_UnityAction_o *)0x0,pUVar22,
                                     (System_Func_string__bool__o *)0x0,
                                     (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                        }
                      }
                      else {
                        pUVar21 = (__this->fields).SinglePanel;
                        pUVar30 = (UnityEngine_Events_UnityAction_o *)
                                  il2cpp_runtime_glue(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        onChangeColor = (UnityEngine_Events_UnityAction_o *)0x0;
                        UI_ElementFactory__CreateToggleSetting
                                  (pUVar21,(UI_ElementStyle_o *)__this_06,
                                   (Settings_BaseSetting_o *)pIVar26,pSVar18,
                                   (System_String_o *)pMVar29,30.0,30.0,pUVar30,(MethodInfo *)0x0);
                      }
                    }
                  } while( true );
                }
              }
            }
          }
        }
      }
    }
    else {
LAB_041183a3:
      UI_MapEditorInspectPanel__ApplyMixedIndicators(__this,pMVar29);
      UI_MapEditorInspectPanel__CaptureSyncedValues(__this,pMVar29);
      pUVar21 = (__this->fields).SinglePanel;
      if ((pUVar21 != (UnityEngine_Transform_o *)0x0) &&
         (pUVar20 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar21,(MethodInfo *)0x0),
         pUVar20 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar20,0,(MethodInfo *)0x0);
        if (DAT_057048de == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_WaitAndEnablePanel_d__58);
          DAT_057048de = '\x01';
        }
        pIVar34 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndEnablePanel_d__58);
        System_Object___ctor(pIVar34,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar34[1].klass = 0;
        if (pIVar34 != (Il2CppObject *)0x0) {
          pIVar34[2].klass = (Il2CppClass *)__this;
          il2cpp_runtime_glue(pIVar34 + 2,__this);
          UnityEngine_MonoBehaviour__StartCoroutine
                    ((UnityEngine_MonoBehaviour_o *)__this,
                     (System_Collections_IEnumerator_o *)pIVar34,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0411891d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_04117da0:
  __this_05.fields._8_8_ = pUVar22;
  __this_05.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)onChangeColor;
  __this_05.fields._currentKey = pIVar34;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
            (__this_05,(MethodInfo_31D0840 *)&local_88);
  pSVar18 = System_Int32__ToString((int32_t)&local_98,(MethodInfo *)0x0);
  pIVar31 = (Il2CppClass *)System_String__Concat("DeleteComponent",pSVar18,(MethodInfo *)0x0);
  local_50[1].klass = pIVar31;
  il2cpp_runtime_glue(local_50 + 1,pIVar31);
  pUVar21 = (__this->fields).SinglePanel;
  pUVar30 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateDefaultButton
            (pUVar21,(UI_ElementStyle_o *)__this_06,"Delete",0.0,0.0,pUVar30,(MethodInfo *)0x0);
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  local_98 = local_98 + 1;
  pSVar25 = (__this->fields)._components;
  if (pSVar25 == (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0)
  goto LAB_0411891d;
  goto LAB_041172d0;
}


// UI.MapEditorInspectPanel$$WaitAndEnablePanel
// il2cpp: System_Collections_IEnumerator_o* UI_MapEditorInspectPanel__WaitAndEnablePanel (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x411b620

System_Collections_IEnumerator_o *
UI_MapEditorInspectPanel__WaitAndEnablePanel(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057048de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndEnablePanel_d__58);
    DAT_057048de = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndEnablePanel_d__58);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel$$OnButtonClick
// il2cpp: void UI_MapEditorInspectPanel__OnButtonClick (UI_MapEditorInspectPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x411b6b0

void UI_MapEditorInspectPanel__OnButtonClick
               (UI_MapEditorInspectPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_MapEditorTexturePopup_o *pUVar2;
  UI_MapEditorAddComponentPopup_o *__this_00;
  UI_ConfirmPopup_o *__this_01;
  bool_conflict bVar3;
  int32_t iVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  Il2CppObject *__this_02;
  System_String_o *s;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)name;
  if (DAT_057048df == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__59_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass59_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"DeleteComponent");
    il2cpp_init_method_metadata(&"AddComponent");
    il2cpp_init_method_metadata(&"Texture");
    il2cpp_init_method_metadata(&"Delete this component?");
    DAT_057048df = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
    bVar3 = UI_MapEditorMenu__IsPopupActive(pUVar1,method_00);
    if ((char)bVar3 != '\0') {
      return;
    }
    bVar3 = System_String__op_Equality(name,"Texture",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      bVar3 = System_String__op_Equality(name,"AddComponent",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (name != (System_String_o *)0x0) {
          bVar3 = System_String__StartsWith(name,"DeleteComponent",(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            return;
          }
          __this_02 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass59_0);
          System_Object___ctor(__this_02,(MethodInfo *)0x0);
          if (__this_02 != (Il2CppObject *)0x0) {
            __this_02[1].monitor = __this;
            il2cpp_runtime_glue(&__this_02[1].monitor,__this);
            if ("DeleteComponent" != (System_String_o *)0x0) {
              s = System_String__Substring
                            (name,("DeleteComponent"->fields)._stringLength,(MethodInfo *)0x0);
              iVar4 = System_Int32__Parse(s,(MethodInfo *)0x0);
              *(int32_t *)&__this_02[1].klass = iVar4;
              pUVar1 = (__this->fields)._menu;
              if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
                __this_01 = (pUVar1->fields).ConfirmPopup;
                pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
                  UI_ConfirmPopup__Show
                            (__this_01,"Delete this component?",pUVar5,(System_String_o *)0x0,(MethodInfo *)0x0)
                  ;
                  return;
                }
              }
            }
          }
        }
      }
      else {
        pUVar1 = (__this->fields)._menu;
        if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
          __this_00 = (pUVar1->fields).AddComponentPopup;
          pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_00 != (UI_MapEditorAddComponentPopup_o *)0x0) {
            UI_MapEditorAddComponentPopup__Show(__this_00,pUVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      pUVar1 = (__this->fields)._menu;
      if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).TexturePopup, pUVar2 != (UI_MapEditorTexturePopup_o *)0x0)) {
        (*(pUVar2->klass->vtable)._21_Show.methodPtr)
                  (pUVar2,(pUVar2->klass->vtable)._21_Show.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel$$OnAddComponent
// il2cpp: void UI_MapEditorInspectPanel__OnAddComponent (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x411b920

void UI_MapEditorInspectPanel__OnAddComponent(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UI_MapEditorMenu_o *pUVar3;
  UI_MapEditorAddComponentPopup_o *pUVar4;
  Settings_StringSetting_o *pSVar5;
  GameManagers_MapEditorGameManager_o *pGVar6;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  System_Collections_Generic_Dictionary_string__BaseSetting__array *pSVar7;
  System_String_array *pSVar8;
  long lVar9;
  bool_conflict bVar10;
  System_Collections_Generic_List_string__o *pSVar11;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *item;
  MethodInfo *method_00;
  MethodInfo *component;
  
  if (DAT_057048e0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057048e0 = '\x01';
  }
  pUVar3 = (__this->fields)._menu;
  if ((((pUVar3 != (UI_MapEditorMenu_o *)0x0) &&
       (pUVar4 = (pUVar3->fields).AddComponentPopup,
       pUVar4 != (UI_MapEditorAddComponentPopup_o *)0x0)) &&
      (pSVar5 = (pUVar4->fields).FinishSetting, pSVar5 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar11 = (__this->fields)._componentNames,
     pSVar11 != (System_Collections_Generic_List_string__o *)0x0)) {
    component = (MethodInfo *)(pSVar5->fields)._value;
    method_00 = component;
    bVar10 = System_Collections_Generic_List<object>__Contains
                       ((System_Collections_Generic_List_object__o *)pSVar11,
                        (Il2CppObject *)component,MethodInfo_Boolean_Contains);
    if ((char)bVar10 != '\0') {
LAB_0411bb0d:
      UI_MapEditorInspectPanel__OnChange(__this,method_00);
      return;
    }
    pGVar6 = (__this->fields)._gameManager;
    if (pGVar6 != (GameManagers_MapEditorGameManager_o *)0x0) {
      __this_00 = (__this->fields)._components;
      __this_01 = (pGVar6->fields).LogicEvaluator;
      pSVar11 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_System_String);
      if ((__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
         (item = CustomLogic_CustomLogicEvaluator__GetComponentSettings
                           (__this_01,(System_String_o *)component,pSVar11,(MethodInfo *)0x0),
         lVar9 = MethodInfo_Void_Add,
         __this_00 != (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0)) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (__this_00->fields)._items;
        if (pSVar7 != (System_Collections_Generic_Dictionary_string__BaseSetting__array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar7->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar7->m_Items[(int)uVar2] = item;
            il2cpp_runtime_glue(pSVar7->m_Items + (int)uVar2,item);
            pSVar11 = (__this->fields)._componentNames;
            lVar9 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            pSVar11 = (__this->fields)._componentNames;
            lVar9 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar9;
          if (pSVar11 != (System_Collections_Generic_List_string__o *)0x0) {
            piVar1 = &(pSVar11->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (pSVar11->fields)._items;
            if (pSVar8 != (System_String_array *)0x0) {
              uVar2 = (pSVar11->fields)._size;
              if (uVar2 < (uint)pSVar8->max_length) {
                (pSVar11->fields)._size = uVar2 + 1;
                pSVar8->m_Items[(int)uVar2] = (System_String_o *)component;
                il2cpp_runtime_glue(pSVar8->m_Items + (int)uVar2);
                method_00 = component;
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar11,
                           (Il2CppObject *)component,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                method_00 = component;
              }
              goto LAB_0411bb0d;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel$$OnDeleteComponent
// il2cpp: void UI_MapEditorInspectPanel__OnDeleteComponent (UI_MapEditorInspectPanel_o* __this, int32_t index, const MethodInfo* method);
// 0x411fb70

void UI_MapEditorInspectPanel__OnDeleteComponent
               (UI_MapEditorInspectPanel_o *__this,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)index;
  if (DAT_057048e1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    DAT_057048e1 = '\x01';
  }
  __this_00 = (__this->fields)._components;
  if (__this_00 != (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) {
    System_Collections_Generic_List<object>__RemoveAt
              ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_Void_RemoveAt);
    __this_01 = (__this->fields)._componentNames;
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_Void_RemoveAt);
      UI_MapEditorInspectPanel__OnChange(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel$$SanitizeName
// il2cpp: System_String_o* UI_MapEditorInspectPanel__SanitizeName (UI_MapEditorInspectPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x411fbf0

System_String_o *
UI_MapEditorInspectPanel__SanitizeName
          (UI_MapEditorInspectPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Array_o *array;
  ulong uVar2;
  System_String_o *pSVar3;
  ulong uVar4;
  undefined2 local_2a;
  
  if (DAT_057048e2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_char);
    il2cpp_init_method_metadata(&fld_619EB2C637D6EE6BE496B015CCC320AC0B7F976E145A608);
    DAT_057048e2 = '\x01';
  }
  local_2a = 0;
  bVar1 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  array = (System_Array_o *)il2cpp_glue_02274930(TypeInfo_char,8);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            (array,fld_619EB2C637D6EE6BE496B015CCC320AC0B7F976E145A608,(MethodInfo *)0x0);
  if (array != (System_Array_o *)0x0) {
    if (0 < (int)array[1].monitor) {
      uVar2 = (ulong)array[1].monitor & 0xffffffff;
      uVar4 = 0;
      do {
        if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        local_2a = *(undefined2 *)((long)&array[2].klass + uVar4 * 2);
        if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar3 = System_Char__ToString((uint16_t)&local_2a,(MethodInfo *)0x0);
        if (name == (System_String_o *)0x0) goto LAB_0411fd61;
        name = System_String__Replace
                         (name,pSVar3,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                          (MethodInfo *)0x0);
        uVar4 = uVar4 + 1;
        uVar2 = (ulong)*(uint *)&array[1].monitor;
      } while ((long)uVar4 < (long)(int)*(uint *)&array[1].monitor);
    }
    if ((name != (System_String_o *)0x0) &&
       (((name->fields)._stringLength < 0x100 ||
        (name = System_String__Substring(name,0,0xff,(MethodInfo *)0x0),
        name != (System_String_o *)0x0)))) {
      pSVar3 = System_String__Trim(name,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
LAB_0411fd61:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel$$SyncSettings
// il2cpp: void UI_MapEditorInspectPanel__SyncSettings (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4118990

void UI_MapEditorInspectPanel__SyncSettings(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  System_Collections_Generic_HashSet_string__o **ppSVar3;
  System_Collections_Generic_List_string__o **ppSVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  Map_MapObject_o *pMVar8;
  Map_MapScriptBaseObject_o *__this_00;
  Settings_StringSetting_o *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  Settings_IntSetting_o *pSVar11;
  Settings_FloatSetting_o *pSVar12;
  Settings_ColorSetting_o *pSVar13;
  System_String_c *pSVar14;
  System_Collections_Generic_List_MapObject__o *pSVar15;
  System_Collections_Generic_List_object__o *__this_01;
  Map_MapScriptBaseObject_c *pMVar16;
  Il2CppClass *pIVar17;
  char *pcVar18;
  System_String_array *pSVar19;
  GameManagers_MapEditorGameManager_o *pGVar20;
  CustomLogic_CustomLogicEvaluator_o *__this_02;
  System_Collections_Generic_Dictionary_string__BaseSetting__array *pSVar21;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_RuntimeTypeHandle_o handle;
  long lVar22;
  char cVar23;
  bool_conflict bVar24;
  System_String_o *pSVar25;
  Utility_Color255_o *pUVar26;
  System_Type_o *pSVar27;
  System_Type_o *pSVar28;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *pSVar29;
  System_Collections_Generic_List_string__o *pSVar30;
  Il2CppObject *pIVar31;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *item;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  Il2CppObject **__this_05;
  UI_MapEditorInspectPanel_o *__this_06;
  Il2CppClass *pIVar32;
  int index;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  UnityEngine_Vector3_o UVar38;
  undefined1 in_stack_ffffffffffffff78 [12];
  float value;
  System_Collections_Generic_List_Enumerator_T__c *local_68;
  Il2CppType *pIStack_60;
  Il2CppObject *local_58;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  __this_05 = (Il2CppObject **)__this;
  if (DAT_057048e3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptComponent_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapScriptComponent__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Dictionary_2_System_String_Settings_BaseS);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_Dictionary_string__BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeRef_MapScriptBasicMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptDefaultTiledMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptLegacyMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptReflectiveMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"CollideMode");
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"ScaleY");
    il2cpp_init_method_metadata(&"RotationZ");
    il2cpp_init_method_metadata(&"Networked");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"--");
    il2cpp_init_method_metadata(&"RotationY");
    il2cpp_init_method_metadata(&"Visible");
    il2cpp_init_method_metadata(&"Misc/None");
    il2cpp_init_method_metadata(&"Texture");
    il2cpp_init_method_metadata(&"RotationX");
    il2cpp_init_method_metadata(&"PositionZ");
    il2cpp_init_method_metadata(&"Active");
    il2cpp_init_method_metadata(&"Parent");
    il2cpp_init_method_metadata(&"ScaleX");
    il2cpp_init_method_metadata(&"Shader");
    il2cpp_init_method_metadata(&"Static");
    il2cpp_init_method_metadata(&"ScaleZ");
    il2cpp_init_method_metadata(&"PositionY");
    il2cpp_init_method_metadata(&"CollideWith");
    il2cpp_init_method_metadata(&"PositionX");
    __this_05 = &"PhysicsMaterial";
    il2cpp_init_method_metadata();
    DAT_057048e3 = '\x01';
    in_RDX = extraout_RDX;
  }
  local_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (Il2CppObject *)0x0;
  pMVar8 = (__this->fields)._mapObject;
  if ((pMVar8 == (Map_MapObject_o *)0x0) ||
     (__this_00 = (pMVar8->fields).ScriptObject, __this_00 == (Map_MapScriptBaseObject_o *)0x0))
  goto LAB_04119bfe;
  bVar5 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar5) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_MapScriptSceneObject)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(__this_00);
  }
  pSVar9 = (__this->fields)._name;
  pSVar25 = UI_MapEditorInspectPanel__SanitizeName
                      ((UI_MapEditorInspectPanel_o *)__this_05,
                       *(System_String_o **)&(__this_00->fields).Visible,in_RDX);
  if (pSVar9 == (Settings_StringSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar9,(Il2CppObject *)pSVar25,MethodInfo_Void_set_Value);
  pSVar10 = (__this->fields)._active;
  if (pSVar10 == (Settings_BoolSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<bool>__set_Value
            ((Settings_TypedSetting_bool__o *)pSVar10,(uint)(byte)(__this_00->fields).Active,
             MethodInfo_Void_set_Value);
  pSVar10 = (__this->fields)._static;
  if (pSVar10 == (Settings_BoolSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<bool>__set_Value
            ((Settings_TypedSetting_bool__o *)pSVar10,
             (uint)*(byte *)((long)&(__this_00->fields).Active + 1),MethodInfo_Void_set_Value);
  pSVar10 = (__this->fields)._networked;
  if (pSVar10 == (Settings_BoolSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<bool>__set_Value
            ((Settings_TypedSetting_bool__o *)pSVar10,
             (uint)*(byte *)((long)&(__this_00->fields).Active + 3),MethodInfo_Void_set_Value);
  pSVar11 = (__this->fields)._parent;
  if (pSVar11 == (Settings_IntSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<int>__set_Value
            ((Settings_TypedSetting_int__o *)pSVar11,(__this_00->fields).Parent,MethodInfo_Void_set_Value);
  pSVar10 = (__this->fields)._visible;
  if (pSVar10 == (Settings_BoolSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<bool>__set_Value
            ((Settings_TypedSetting_bool__o *)pSVar10,
             (uint)*(byte *)((long)&(__this_00->fields).Active + 2),MethodInfo_Void_set_Value);
  UVar38 = Map_MapScriptBaseObject__GetPosition(__this_00,(MethodInfo *)0x0);
  fVar36 = UVar38.fields.z;
  pSVar12 = (__this->fields)._positionX;
  if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
  fVar33 = UVar38.fields.y;
  Settings_TypedSetting<float>__set_Value
            ((Settings_TypedSetting_float__o *)pSVar12,UVar38.fields.x,MethodInfo_Void_set_Value);
  pSVar12 = (__this->fields)._positionY;
  if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<float>__set_Value
            ((Settings_TypedSetting_float__o *)pSVar12,fVar33,MethodInfo_Void_set_Value);
  pSVar12 = (__this->fields)._positionZ;
  if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<float>__set_Value
            ((Settings_TypedSetting_float__o *)pSVar12,fVar36,MethodInfo_Void_set_Value);
  UVar38 = Map_MapScriptBaseObject__GetRotation(__this_00,(MethodInfo *)0x0);
  fVar36 = UVar38.fields.z;
  pSVar12 = (__this->fields)._rotationX;
  if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
  fVar33 = UVar38.fields.y;
  Settings_TypedSetting<float>__set_Value
            ((Settings_TypedSetting_float__o *)pSVar12,UVar38.fields.x,MethodInfo_Void_set_Value);
  pSVar12 = (__this->fields)._rotationY;
  if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<float>__set_Value
            ((Settings_TypedSetting_float__o *)pSVar12,fVar33,MethodInfo_Void_set_Value);
  pSVar12 = (__this->fields)._rotationZ;
  if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<float>__set_Value
            ((Settings_TypedSetting_float__o *)pSVar12,fVar36,MethodInfo_Void_set_Value);
  UVar38 = Map_MapScriptBaseObject__GetScale(__this_00,(MethodInfo *)0x0);
  fVar36 = UVar38.fields.z;
  fVar33 = UVar38.fields.x;
  pSVar12 = (__this->fields)._scaleX;
  if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
  value = UVar38.fields.y;
  Settings_TypedSetting<float>__set_Value
            ((Settings_TypedSetting_float__o *)pSVar12,fVar33,MethodInfo_Void_set_Value);
  pSVar12 = (__this->fields)._scaleY;
  if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<float>__set_Value
            ((Settings_TypedSetting_float__o *)pSVar12,value,MethodInfo_Void_set_Value);
  pSVar12 = (__this->fields)._scaleZ;
  if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<float>__set_Value
            ((Settings_TypedSetting_float__o *)pSVar12,fVar36,MethodInfo_Void_set_Value);
  pSVar9 = (__this->fields)._collideMode;
  if (pSVar9 == (Settings_StringSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar9,*(Il2CppObject **)&(__this_00->fields).ScaleZ,
             MethodInfo_Void_set_Value);
  pSVar9 = (__this->fields)._collideWith;
  if (pSVar9 == (Settings_StringSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar9,(Il2CppObject *)__this_00[1].klass,MethodInfo_Void_set_Value);
  pSVar9 = (__this->fields)._physicsMaterial;
  if (pSVar9 == (Settings_StringSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar9,__this_00[1].monitor,MethodInfo_Void_set_Value);
  pSVar25 = __this_00[1].fields.Type;
  if ((pSVar25 == (System_String_o *)0x0) ||
     (pSVar9 = (__this->fields)._shader, pSVar9 == (Settings_StringSetting_o *)0x0))
  goto LAB_04119bfe;
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar9,(Il2CppObject *)pSVar25->fields,MethodInfo_Void_set_Value);
  pSVar25 = __this_00[1].fields.Type;
  if ((pSVar25 == (System_String_o *)0x0) ||
     (pSVar13 = (__this->fields)._color, pSVar13 == (Settings_ColorSetting_o *)0x0))
  goto LAB_04119bfe;
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar13,(Il2CppObject *)pSVar25[1].klass,MethodInfo_Void_set_Value);
  pSVar13 = (__this->fields)._reflectColor;
  pUVar26 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar26,(MethodInfo *)0x0);
  if (pSVar13 == (Settings_ColorSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar13,(Il2CppObject *)pUVar26,MethodInfo_Void_set_Value);
  pSVar9 = (__this->fields)._texture;
  if (pSVar9 == (Settings_StringSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar9,"Misc/None",MethodInfo_Void_set_Value);
  pSVar12 = (__this->fields)._tilingX;
  if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<float>__set_Value
            ((Settings_TypedSetting_float__o *)pSVar12,1.0,MethodInfo_Void_set_Value);
  pSVar12 = (__this->fields)._tilingY;
  if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<float>__set_Value
            ((Settings_TypedSetting_float__o *)pSVar12,1.0,MethodInfo_Void_set_Value);
  pSVar12 = (__this->fields)._offsetX;
  if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<float>__set_Value
            ((Settings_TypedSetting_float__o *)pSVar12,0.0,MethodInfo_Void_set_Value);
  pSVar12 = (__this->fields)._offsetY;
  if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<float>__set_Value
            ((Settings_TypedSetting_float__o *)pSVar12,0.0,MethodInfo_Void_set_Value);
  handle = TypeRef_MapScriptBasicMaterial;
  pSVar25 = __this_00[1].fields.Type;
  if (pSVar25 != (System_String_o *)0x0) {
    pSVar14 = pSVar25->klass;
    bVar5 = (pSVar14->_2).naturalAligment;
    bVar6 = (TypeInfo_MapScriptLegacyMaterial->_2).naturalAligment;
    if (((bVar5 < bVar6) || ((pSVar14->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_MapScriptLegacyMaterial)) &&
       ((bVar6 = (TypeInfo_MapScriptDefaultTiledMaterial->_2).naturalAligment, bVar5 < bVar6 ||
        ((pSVar14->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_MapScriptDefaultTiledMaterial)))) goto LAB_041190b0;
    pSVar12 = (__this->fields)._tilingX;
    if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
    Settings_TypedSetting<float>__set_Value
              ((Settings_TypedSetting_float__o *)pSVar12,*(float *)&pSVar25[1].monitor,MethodInfo_Void_set_Value)
    ;
    pSVar12 = (__this->fields)._tilingY;
    if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
    Settings_TypedSetting<float>__set_Value
              ((Settings_TypedSetting_float__o *)pSVar12,*(float *)((long)&pSVar25[1].monitor + 4),
               MethodInfo_Void_set_Value);
    goto LAB_0411929a;
  }
LAB_041190b0:
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar27 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  pSVar25 = __this_00[1].fields.Type;
  if ((pSVar25 == (System_String_o *)0x0) ||
     (pSVar28 = System_Object__GetType((Il2CppObject *)pSVar25,(MethodInfo *)0x0),
     pSVar27 == (System_Type_o *)0x0)) goto LAB_04119bfe;
  cVar23 = (*(pSVar27->klass->vtable)._22_IsAssignableFrom.methodPtr)
                     (pSVar27,pSVar28,(pSVar27->klass->vtable)._22_IsAssignableFrom.method);
  if (cVar23 == '\0') goto LAB_0411929a;
  pIVar32 = (Il2CppClass *)__this_00[1].fields.Type;
  if (pIVar32 == (Il2CppClass *)0x0) goto LAB_04119bfe;
  pSVar14 = (pIVar32->_1).image;
  bVar5 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
  if (((pSVar14->_2).naturalAligment < bVar5) ||
     ((pSVar14->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_MapScriptBasicMaterial)) goto LAB_04119c06;
  pSVar9 = (__this->fields)._texture;
  if (pSVar9 == (Settings_StringSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar9,(pIVar32->_1).byval_arg.data,MethodInfo_Void_set_Value);
  pSVar12 = (__this->fields)._tilingX;
  if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<float>__set_Value
            ((Settings_TypedSetting_float__o *)pSVar12,(float)(pIVar32->_1).byval_arg.bits,
             MethodInfo_Void_set_Value);
  pSVar12 = (__this->fields)._tilingY;
  if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<float>__set_Value
            ((Settings_TypedSetting_float__o *)pSVar12,*(float *)&(pIVar32->_1).byval_arg.field_0xc,
             MethodInfo_Void_set_Value);
  pSVar12 = (__this->fields)._offsetX;
  if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<float>__set_Value
            ((Settings_TypedSetting_float__o *)pSVar12,*(float *)&(pIVar32->_1).this_arg.data,
             MethodInfo_Void_set_Value);
  pSVar12 = (__this->fields)._offsetY;
  if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
  Settings_TypedSetting<float>__set_Value
            ((Settings_TypedSetting_float__o *)pSVar12,
             *(float *)((long)&(pIVar32->_1).this_arg.data + 4),MethodInfo_Void_set_Value);
  pSVar25 = __this_00[1].fields.Type;
  if (pSVar25 == (System_String_o *)0x0) {
LAB_0411929a:
    __this_06 = (UI_MapEditorInspectPanel_o *)(__this->fields)._mapObjects;
  }
  else {
    bVar5 = (TypeInfo_MapScriptReflectiveMaterial->_2).naturalAligment;
    if (((pSVar25->klass->_2).naturalAligment < bVar5) ||
       ((pSVar25->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_MapScriptReflectiveMaterial)) goto LAB_0411929a;
    pSVar13 = (__this->fields)._reflectColor;
    if (pSVar13 == (Settings_ColorSetting_o *)0x0) goto LAB_04119bfe;
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)pSVar13,pSVar25[2].monitor,MethodInfo_Void_set_Value);
    __this_06 = (UI_MapEditorInspectPanel_o *)(__this->fields)._mapObjects;
  }
  if (__this_06 != (UI_MapEditorInspectPanel_o *)0x0) {
    ppSVar3 = &(__this->fields)._mixedFields;
    index = 1;
    if (1 < *(int *)&(__this_06->fields).m_CancellationTokenSource) {
      do {
        pIVar31 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_06,index,
                             MethodInfo_MapObject_get_Item);
        if ((pIVar31 == (Il2CppObject *)0x0) ||
           (pIVar32 = pIVar31[2].klass, pIVar32 == (Il2CppClass *)0x0)) goto LAB_04119bfe;
        pMVar16 = (pIVar32->_1).image;
        bVar5 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
        if (((pMVar16->_2).naturalAligment < bVar5) ||
           ((pMVar16->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_MapScriptSceneObject)) goto LAB_04119c06;
        pSVar25 = UI_MapEditorInspectPanel__SanitizeName
                            (__this_06,(pIVar32->_1).this_arg.data,method_00);
        pSVar9 = (__this->fields)._name;
        if (pSVar9 == (Settings_StringSetting_o *)0x0) goto LAB_04119bfe;
        bVar24 = System_String__op_Inequality(pSVar25,(pSVar9->fields)._value,(MethodInfo *)0x0);
        if ((char)bVar24 != '\0') {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"Name",
                     MethodInfo_Boolean_Add);
        }
        pSVar10 = (__this->fields)._active;
        if (pSVar10 == (Settings_BoolSetting_o *)0x0) goto LAB_04119bfe;
        if ((char)(pIVar32->_1).byval_arg.bits !=
            *(char *)((long)&(pSVar10->fields).DefaultValue + 1)) {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"Active",
                     MethodInfo_Boolean_Add);
        }
        pSVar10 = (__this->fields)._static;
        if (pSVar10 == (Settings_BoolSetting_o *)0x0) goto LAB_04119bfe;
        if (*(undefined1 *)((long)&(pIVar32->_1).byval_arg.bits + 1) !=
            *(char *)((long)&(pSVar10->fields).DefaultValue + 1)) {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"Static",
                     MethodInfo_Boolean_Add);
        }
        pSVar10 = (__this->fields)._networked;
        if (pSVar10 == (Settings_BoolSetting_o *)0x0) goto LAB_04119bfe;
        if (*(undefined1 *)((long)&(pIVar32->_1).byval_arg.bits + 3) !=
            *(char *)((long)&(pSVar10->fields).DefaultValue + 1)) {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"Networked",
                     MethodInfo_Boolean_Add);
        }
        pSVar10 = (__this->fields)._visible;
        if (pSVar10 == (Settings_BoolSetting_o *)0x0) goto LAB_04119bfe;
        if (*(undefined1 *)((long)&(pIVar32->_1).byval_arg.bits + 2) !=
            *(char *)((long)&(pSVar10->fields).DefaultValue + 1)) {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"Visible",
                     MethodInfo_Boolean_Add);
        }
        pSVar11 = (__this->fields)._parent;
        if (pSVar11 == (Settings_IntSetting_o *)0x0) goto LAB_04119bfe;
        if (*(int32_t *)((long)&(pIVar32->_1).byval_arg.data + 4) != (pSVar11->fields)._value) {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"Parent",
                     MethodInfo_Boolean_Add);
        }
        UVar38 = Map_MapScriptBaseObject__GetPosition
                           ((Map_MapScriptBaseObject_o *)pIVar32,(MethodInfo *)0x0);
        fVar37 = UVar38.fields.z;
        fVar34 = UVar38.fields.x;
        fVar35 = UVar38.fields.y;
        pSVar12 = (__this->fields)._positionX;
        if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
        pfVar1 = &(pSVar12->fields)._value;
        if ((fVar34 != *pfVar1) || (NAN(fVar34) || NAN(*pfVar1))) {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"PositionX",
                     MethodInfo_Boolean_Add);
          fVar36 = fVar37;
          fVar33 = fVar34;
          value = fVar35;
        }
        pSVar12 = (__this->fields)._positionY;
        if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
        pfVar1 = &(pSVar12->fields)._value;
        if ((fVar35 != *pfVar1) || (NAN(fVar35) || NAN(*pfVar1))) {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"PositionY",
                     MethodInfo_Boolean_Add);
          fVar36 = fVar37;
        }
        pSVar12 = (__this->fields)._positionZ;
        if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
        pfVar1 = &(pSVar12->fields)._value;
        if ((fVar37 != *pfVar1) || (NAN(fVar37) || NAN(*pfVar1))) {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"PositionZ",
                     MethodInfo_Boolean_Add);
        }
        UVar38 = Map_MapScriptBaseObject__GetRotation
                           ((Map_MapScriptBaseObject_o *)pIVar32,(MethodInfo *)0x0);
        fVar37 = UVar38.fields.z;
        fVar34 = UVar38.fields.x;
        fVar35 = UVar38.fields.y;
        pSVar12 = (__this->fields)._rotationX;
        if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
        pfVar1 = &(pSVar12->fields)._value;
        if ((fVar34 != *pfVar1) || (NAN(fVar34) || NAN(*pfVar1))) {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"RotationX",
                     MethodInfo_Boolean_Add);
          fVar36 = fVar37;
          fVar33 = fVar34;
          value = fVar35;
        }
        pSVar12 = (__this->fields)._rotationY;
        if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
        pfVar1 = &(pSVar12->fields)._value;
        if ((fVar35 != *pfVar1) || (NAN(fVar35) || NAN(*pfVar1))) {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"RotationY",
                     MethodInfo_Boolean_Add);
          fVar36 = fVar37;
        }
        pSVar12 = (__this->fields)._rotationZ;
        if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
        pfVar1 = &(pSVar12->fields)._value;
        if ((fVar37 != *pfVar1) || (NAN(fVar37) || NAN(*pfVar1))) {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"RotationZ",
                     MethodInfo_Boolean_Add);
        }
        UVar38 = Map_MapScriptBaseObject__GetScale
                           ((Map_MapScriptBaseObject_o *)pIVar32,(MethodInfo *)0x0);
        fVar37 = UVar38.fields.z;
        fVar34 = UVar38.fields.x;
        fVar35 = UVar38.fields.y;
        pSVar12 = (__this->fields)._scaleX;
        if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
        pfVar1 = &(pSVar12->fields)._value;
        if ((fVar34 != *pfVar1) || (NAN(fVar34) || NAN(*pfVar1))) {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"ScaleX",
                     MethodInfo_Boolean_Add);
          fVar36 = fVar37;
          fVar33 = fVar34;
          value = fVar35;
        }
        pSVar12 = (__this->fields)._scaleY;
        if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
        pfVar1 = &(pSVar12->fields)._value;
        if ((fVar35 != *pfVar1) || (NAN(fVar35) || NAN(*pfVar1))) {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"ScaleY",
                     MethodInfo_Boolean_Add);
          fVar36 = fVar37;
        }
        pSVar12 = (__this->fields)._scaleZ;
        if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto LAB_04119bfe;
        pfVar1 = &(pSVar12->fields)._value;
        if ((fVar37 != *pfVar1) || (NAN(fVar37) || NAN(*pfVar1))) {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"ScaleZ",
                     MethodInfo_Boolean_Add);
        }
        pSVar9 = (__this->fields)._collideMode;
        if (pSVar9 == (Settings_StringSetting_o *)0x0) goto LAB_04119bfe;
        bVar24 = System_String__op_Inequality
                           ((pIVar32->_1).generic_class,(pSVar9->fields)._value,(MethodInfo *)0x0);
        if ((char)bVar24 != '\0') {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"CollideMode",
                     MethodInfo_Boolean_Add);
        }
        pSVar9 = (__this->fields)._collideWith;
        if (pSVar9 == (Settings_StringSetting_o *)0x0) goto LAB_04119bfe;
        bVar24 = System_String__op_Inequality
                           ((pIVar32->_1).typeMetadataHandle,(pSVar9->fields)._value,
                            (MethodInfo *)0x0);
        if ((char)bVar24 != '\0') {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"CollideWith",
                     MethodInfo_Boolean_Add);
        }
        pSVar9 = (__this->fields)._physicsMaterial;
        if (pSVar9 == (Settings_StringSetting_o *)0x0) goto LAB_04119bfe;
        bVar24 = System_String__op_Inequality
                           ((pIVar32->_1).interopData,(pSVar9->fields)._value,(MethodInfo *)0x0);
        if ((char)bVar24 != '\0') {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"PhysicsMaterial",
                     MethodInfo_Boolean_Add);
        }
        pIVar17 = (pIVar32->_1).klass;
        if ((pIVar17 == (Il2CppClass *)0x0) ||
           (pSVar9 = (__this->fields)._shader, pSVar9 == (Settings_StringSetting_o *)0x0))
        goto LAB_04119bfe;
        bVar24 = System_String__op_Inequality
                           ((System_String_o *)(pIVar17->_1).name,(pSVar9->fields)._value,
                            (MethodInfo *)0x0);
        if ((char)bVar24 != '\0') {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"Shader",
                     MethodInfo_Boolean_Add);
        }
        pIVar32 = (pIVar32->_1).klass;
        if ((((pIVar32 == (Il2CppClass *)0x0) ||
             (pSVar13 = (__this->fields)._color, pSVar13 == (Settings_ColorSetting_o *)0x0)) ||
            (pcVar18 = (pIVar32->_1).namespaze, pcVar18 == (char *)0x0)) ||
           (pUVar26 = (pSVar13->fields)._value, pUVar26 == (Utility_Color255_o *)0x0))
        goto LAB_04119bfe;
        if (((*(int *)(pcVar18 + 0x10) != (pUVar26->fields).R) ||
            (*(int *)(pcVar18 + 0x14) != (pUVar26->fields).G)) ||
           ((*(int *)(pcVar18 + 0x18) != (pUVar26->fields).B ||
            (*(int *)(pcVar18 + 0x1c) != (pUVar26->fields).A)))) {
          if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 ==
              (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04119bfe;
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"Color",
                     MethodInfo_Boolean_Add);
        }
        index = index + 1;
        __this_06 = (UI_MapEditorInspectPanel_o *)(__this->fields)._mapObjects;
        if (__this_06 == (UI_MapEditorInspectPanel_o *)0x0) goto LAB_04119bfe;
      } while (index < *(int *)&(__this_06->fields).m_CancellationTokenSource);
    }
    if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 !=
        (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar24 = System_Collections_Generic_HashSet<object>__Contains
                         ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"Name",
                          MethodInfo_Boolean_Contains);
      if ((char)bVar24 != '\0') {
        pSVar9 = (__this->fields)._name;
        if (pSVar9 == (Settings_StringSetting_o *)0x0) goto LAB_04119bfe;
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)pSVar9,"--",MethodInfo_Void_set_Value);
      }
      if ((System_Collections_Generic_HashSet_object__o *)*ppSVar3 !=
          (System_Collections_Generic_HashSet_object__o *)0x0) {
        bVar24 = System_Collections_Generic_HashSet<object>__Contains
                           ((System_Collections_Generic_HashSet_object__o *)*ppSVar3,"Texture",
                            MethodInfo_Boolean_Contains);
        if ((char)bVar24 != '\0') {
          pSVar9 = (__this->fields)._texture;
          if (pSVar9 == (Settings_StringSetting_o *)0x0) goto LAB_04119bfe;
          Settings_TypedSetting<object>__set_Value
                    ((Settings_TypedSetting_T__o *)pSVar9,"--",MethodInfo_Void_set_Value);
        }
        pSVar29 = (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)
                  il2cpp_runtime_glue(TypeInfo_List_Dictionary_string__BaseSetting);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)pSVar29,MethodInfo_List_1_Dictionary_2_System_String_Settings_BaseS);
        (__this->fields)._components = pSVar29;
        il2cpp_runtime_glue(&(__this->fields)._components,pSVar29);
        pSVar30 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)pSVar30,MethodInfo_List_1_System_String);
        ppSVar4 = &(__this->fields)._componentNames;
        (__this->fields)._componentNames = pSVar30;
        il2cpp_runtime_glue(ppSVar4,pSVar30);
        pSVar15 = (__this->fields)._mapObjects;
        if (pSVar15 != (System_Collections_Generic_List_MapObject__o *)0x0) {
          if ((pSVar15->fields)._size != 1) {
LAB_04119bdc:
            (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)
                      (__this,(__this->klass->vtable)._23_SyncSettingElements.method);
            return;
          }
          pMVar8 = (__this->fields)._mapObject;
          if ((pMVar8 != (Map_MapObject_o *)0x0) &&
             (pIVar32 = (Il2CppClass *)(pMVar8->fields).ScriptObject, pIVar32 != (Il2CppClass *)0x0)
             ) {
            pSVar14 = (pIVar32->_1).image;
            bVar5 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
            if (((pSVar14->_2).naturalAligment < bVar5) ||
               ((pSVar14->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_MapScriptSceneObject)) {
LAB_04119c06:
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pIVar32);
            }
            __this_01 = (pIVar32->_1).fields;
            if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
              System_Collections_Generic_List<object>__GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_01,
                         MethodInfo_List_1_T__Enumerator_Map_MapScriptComponent__Get);
              local_58 = local_38;
              local_68 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
              pIStack_60 = (Il2CppType *)local_48._8_8_;
              while (__this_03.fields._version = (int32_t)fVar36,
                    __this_03.fields._list =
                         (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78._0_8_,
                    __this_03.fields._index = in_stack_ffffffffffffff78._8_4_,
                    __this_03.fields._current._0_4_ = fVar33,
                    __this_03.fields._current._4_4_ = value,
                    bVar24 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                       (__this_03,(MethodInfo_3185E20 *)&local_68),
                    pIVar31 = local_58, lVar22 = MethodInfo_Void_Add, (char)bVar24 != '\0') {
                if (local_58 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar30 = *ppSVar4;
                if (pSVar30 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pIVar32 = local_58[1].klass;
                piVar2 = &(pSVar30->fields)._version;
                *piVar2 = *piVar2 + 1;
                pSVar19 = (pSVar30->fields)._items;
                if (pSVar19 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                uVar7 = (pSVar30->fields)._size;
                if (uVar7 < (uint)pSVar19->max_length) {
                  (pSVar30->fields)._size = uVar7 + 1;
                  pSVar19->m_Items[(int)uVar7] = (System_String_o *)pIVar32;
                  il2cpp_runtime_glue(pSVar19->m_Items + (int)uVar7);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar30,
                             (Il2CppObject *)pIVar32,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
                pGVar20 = (__this->fields)._gameManager;
                if (pGVar20 == (GameManagers_MapEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                __this_02 = (pGVar20->fields).LogicEvaluator;
                if (__this_02 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar29 = (__this->fields)._components;
                item = CustomLogic_CustomLogicEvaluator__GetComponentSettings
                                 (__this_02,(System_String_o *)pIVar31[1].klass,pIVar31[1].monitor,
                                  (MethodInfo *)0x0);
                lVar22 = MethodInfo_Void_Add;
                if (pSVar29 ==
                    (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                piVar2 = &(pSVar29->fields)._version;
                *piVar2 = *piVar2 + 1;
                pSVar21 = (pSVar29->fields)._items;
                if (pSVar21 ==
                    (System_Collections_Generic_Dictionary_string__BaseSetting__array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                uVar7 = (pSVar29->fields)._size;
                if (uVar7 < (uint)pSVar21->max_length) {
                  (pSVar29->fields)._size = uVar7 + 1;
                  pSVar21->m_Items[(int)uVar7] = item;
                  il2cpp_runtime_glue(pSVar21->m_Items + (int)uVar7,item);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar29,
                             (Il2CppObject *)item,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
              }
              __this_04.fields._version = (int32_t)fVar36;
              __this_04.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78._0_8_;
              __this_04.fields._index = in_stack_ffffffffffffff78._8_4_;
              __this_04.fields._current._0_4_ = fVar33;
              __this_04.fields._current._4_4_ = value;
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (__this_04,(MethodInfo_3185E10 *)&local_68);
              goto LAB_04119bdc;
            }
          }
        }
      }
    }
  }
LAB_04119bfe:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel$$ColorEquals
// il2cpp: bool UI_MapEditorInspectPanel__ColorEquals (Utility_Color255_o* a, Utility_Color255_o* b, const MethodInfo* method);
// 0x411fd70

bool_conflict
UI_MapEditorInspectPanel__ColorEquals
          (Utility_Color255_o *a,Utility_Color255_o *b,MethodInfo *method)

{
  int iVar1;
  
  if ((a == (Utility_Color255_o *)0x0) || (b == (Utility_Color255_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((((a->fields).R == (b->fields).R) && ((a->fields).G == (b->fields).G)) &&
     ((a->fields).B == (b->fields).B)) {
    iVar1 = (a->fields).A;
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == (b->fields).A);
  }
  return 0;
}


// UI.MapEditorInspectPanel$$WithMixedOption
// il2cpp: System_String_array* UI_MapEditorInspectPanel__WithMixedOption (UI_MapEditorInspectPanel_o* __this, System_String_array* options, System_String_o* fieldKey, Settings_StringSetting_o* setting, const MethodInfo* method);
// 0x4119d00

System_String_array *
UI_MapEditorInspectPanel__WithMixedOption
          (UI_MapEditorInspectPanel_o *__this,System_String_array *options,System_String_o *fieldKey
          ,Settings_StringSetting_o *setting,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar1;
  System_Collections_Generic_List_object__o *__this_01;
  System_String_array *pSVar2;
  
  if (DAT_057048e4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Void_Insert);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"--");
    DAT_057048e4 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (__this_00,(Il2CppObject *)fieldKey,MethodInfo_Boolean_Contains);
    if ((char)bVar1 == '\0') {
      return options;
    }
    if (setting != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)setting,"--",MethodInfo_Void_set_Value);
      __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
      System_Collections_Generic_List<object>___ctor
                (__this_01,(System_Collections_Generic_IEnumerable_T__o *)options,MethodInfo_List_1_System_String);
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__Insert(__this_01,0,"--",MethodInfo_Void_Insert);
        pSVar2 = (System_String_array *)
                 System_Collections_Generic_List<object>__ToArray(__this_01,MethodInfo_String___ToArray);
        return pSVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel$$CaptureSyncedValues
// il2cpp: void UI_MapEditorInspectPanel__CaptureSyncedValues (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x411acd0

void UI_MapEditorInspectPanel__CaptureSyncedValues
               (UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_MapEditorInspectPanel_o *__this_00;
  UI_MapEditorInspectPanel_o *__this_01;
  float __this_02;
  float __this_03;
  float __this_04;
  float __this_05;
  float __this_06;
  float __this_07;
  float __this_08;
  float __this_09;
  float __this_10;
  float __this_11;
  float __this_12;
  float __this_13;
  float __this_14;
  undefined1 local_29;
  float local_28;
  int32_t local_24;
  
  if (DAT_057048e5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"OffsetY");
    il2cpp_init_method_metadata(&"TilingX");
    il2cpp_init_method_metadata(&"CollideMode");
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"ReflectColor");
    il2cpp_init_method_metadata(&"R");
    il2cpp_init_method_metadata(&"ScaleY");
    il2cpp_init_method_metadata(&"RotationZ");
    il2cpp_init_method_metadata(&"Networked");
    il2cpp_init_method_metadata(&"TilingY");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"RotationY");
    il2cpp_init_method_metadata(&"Visible");
    il2cpp_init_method_metadata(&"Texture");
    il2cpp_init_method_metadata(&"RotationX");
    il2cpp_init_method_metadata(&"PositionZ");
    il2cpp_init_method_metadata(&"Active");
    il2cpp_init_method_metadata(&"Parent");
    il2cpp_init_method_metadata(&"ScaleX");
    il2cpp_init_method_metadata(&"OffsetX");
    il2cpp_init_method_metadata(&"Shader");
    il2cpp_init_method_metadata(&"Static");
    il2cpp_init_method_metadata(&"ScaleZ");
    il2cpp_init_method_metadata(&"PositionY");
    il2cpp_init_method_metadata(&"CollideWith");
    il2cpp_init_method_metadata(&"PositionX");
    il2cpp_init_method_metadata(&"PhysicsMaterial");
    DAT_057048e5 = '\x01';
  }
  local_29 = 0;
  local_24 = 0;
  local_28 = 0.0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           (__this->fields)._syncedSerialized;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(pSVar1,MethodInfo_Void_Clear);
    pSVar2 = (__this->fields)._name;
    if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
       (pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._syncedSerialized,
       pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (pSVar1,"Name",(Il2CppObject *)(pSVar2->fields)._value,MethodInfo_Void_set_Item);
      pSVar3 = (__this->fields)._active;
      if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._syncedSerialized;
        local_29 = *(undefined1 *)((long)&(pSVar3->fields).DefaultValue + 1);
        if (*(int *)(DAT_05711048 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar6 = System_Boolean__ToString((bool_conflict)&local_29,(MethodInfo *)0x0);
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    (pSVar1,"Active",(Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
          pSVar3 = (__this->fields)._static;
          if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._syncedSerialized;
            local_29 = *(undefined1 *)((long)&(pSVar3->fields).DefaultValue + 1);
            pSVar6 = System_Boolean__ToString((bool_conflict)&local_29,(MethodInfo *)0x0);
            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary<object__object>__set_Item
                        (pSVar1,"Static",(Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
              pSVar3 = (__this->fields)._networked;
              if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields)._syncedSerialized;
                local_29 = *(undefined1 *)((long)&(pSVar3->fields).DefaultValue + 1);
                pSVar6 = System_Boolean__ToString((bool_conflict)&local_29,(MethodInfo *)0x0);
                if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary<object__object>__set_Item
                            (pSVar1,"Networked",(Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
                  pSVar3 = (__this->fields)._visible;
                  if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
                    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields)._syncedSerialized;
                    local_29 = *(undefined1 *)((long)&(pSVar3->fields).DefaultValue + 1);
                    pSVar6 = System_Boolean__ToString((bool_conflict)&local_29,(MethodInfo *)0x0);
                    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      System_Collections_Generic_Dictionary<object__object>__set_Item
                                (pSVar1,"Visible",(Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
                      pSVar4 = (__this->fields)._parent;
                      if (pSVar4 != (Settings_IntSetting_o *)0x0) {
                        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                 (__this->fields)._syncedSerialized;
                        local_24 = (pSVar4->fields)._value;
                        pSVar6 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
                        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0
                           ) {
                          System_Collections_Generic_Dictionary<object__object>__set_Item
                                    (pSVar1,"Parent",(Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
                          pSVar5 = (__this->fields)._positionX;
                          if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                     (__this->fields)._syncedSerialized;
                            local_28 = (pSVar5->fields)._value;
                            pSVar6 = System_Single__ToString
                                               (__this_02,(System_String_o *)&local_28,"R")
                            ;
                            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *
                                          )0x0) {
                              System_Collections_Generic_Dictionary<object__object>__set_Item
                                        (pSVar1,"PositionX",(Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
                              pSVar5 = (__this->fields)._positionY;
                              if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                         (__this->fields)._syncedSerialized;
                                local_28 = (pSVar5->fields)._value;
                                pSVar6 = System_Single__ToString
                                                   (__this_03,(System_String_o *)&local_28,
                                                    "R");
                                if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o
                                               *)0x0) {
                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                            (pSVar1,"PositionY",(Il2CppObject *)pSVar6,MethodInfo_Void_set_Item
                                            );
                                  pSVar5 = (__this->fields)._positionZ;
                                  if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                                    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o
                                              *)(__this->fields)._syncedSerialized;
                                    local_28 = (pSVar5->fields)._value;
                                    pSVar6 = System_Single__ToString
                                                       (__this_04,(System_String_o *)&local_28,
                                                        "R");
                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                      System_Collections_Generic_Dictionary<object__object>__set_Item
                                                (pSVar1,"PositionZ",(Il2CppObject *)pSVar6,
                                                 MethodInfo_Void_set_Item);
                                      pSVar5 = (__this->fields)._rotationX;
                                      if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                                        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields)._syncedSerialized;
                                        local_28 = (pSVar5->fields)._value;
                                        pSVar6 = System_Single__ToString
                                                           (__this_05,(System_String_o *)&local_28,
                                                            "R");
                                        if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                          System_Collections_Generic_Dictionary<object__object>__set_Item
                                                    (pSVar1,"RotationX",(Il2CppObject *)pSVar6,
                                                     MethodInfo_Void_set_Item);
                                          pSVar5 = (__this->fields)._rotationY;
                                          if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                                            pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields)._syncedSerialized;
                                            local_28 = (pSVar5->fields)._value;
                                            pSVar6 = System_Single__ToString
                                                               (__this_06,
                                                                (System_String_o *)&local_28,
                                                                "R");
                                            if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                              System_Collections_Generic_Dictionary<object__object>__set_Item
                                                        (pSVar1,"RotationY",(Il2CppObject *)pSVar6,
                                                         MethodInfo_Void_set_Item);
                                              pSVar5 = (__this->fields)._rotationZ;
                                              if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                                                pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields)._syncedSerialized;
                                                local_28 = (pSVar5->fields)._value;
                                                pSVar6 = System_Single__ToString
                                                                   (__this_07,
                                                                    (System_String_o *)&local_28,
                                                                    "R");
                                                if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,"RotationZ",
                                                             (Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
                                                  pSVar5 = (__this->fields)._scaleX;
                                                  if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields)._syncedSerialized;
                                                  local_28 = (pSVar5->fields)._value;
                                                  pSVar6 = System_Single__ToString
                                                                     (__this_08,
                                                                      (System_String_o *)&local_28,
                                                                      "R");
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,"ScaleX",
                                                             (Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
                                                  pSVar5 = (__this->fields)._scaleY;
                                                  if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields)._syncedSerialized;
                                                  local_28 = (pSVar5->fields)._value;
                                                  pSVar6 = System_Single__ToString
                                                                     (__this_09,
                                                                      (System_String_o *)&local_28,
                                                                      "R");
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,"ScaleY",
                                                             (Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
                                                  pSVar5 = (__this->fields)._scaleZ;
                                                  if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields)._syncedSerialized;
                                                  local_28 = (pSVar5->fields)._value;
                                                  pSVar6 = System_Single__ToString
                                                                     (__this_10,
                                                                      (System_String_o *)&local_28,
                                                                      "R");
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,"ScaleZ",
                                                             (Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
                                                  pSVar2 = (__this->fields)._collideMode;
                                                  if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
                                                     (pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields)._syncedSerialized,
                                                  pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0)) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,"CollideMode",
                                                             (Il2CppObject *)(pSVar2->fields)._value
                                                             ,MethodInfo_Void_set_Item);
                                                  pSVar2 = (__this->fields)._collideWith;
                                                  if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
                                                     (pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields)._syncedSerialized,
                                                  pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0)) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,"CollideWith",
                                                             (Il2CppObject *)(pSVar2->fields)._value
                                                             ,MethodInfo_Void_set_Item);
                                                  pSVar2 = (__this->fields)._physicsMaterial;
                                                  if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
                                                     (pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields)._syncedSerialized,
                                                  pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0)) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,"PhysicsMaterial",
                                                             (Il2CppObject *)(pSVar2->fields)._value
                                                             ,MethodInfo_Void_set_Item);
                                                  pSVar2 = (__this->fields)._shader;
                                                  if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
                                                     (__this_00 = (UI_MapEditorInspectPanel_o *)
                                                                  (__this->fields)._syncedSerialized
                                                     , __this_00 !=
                                                       (UI_MapEditorInspectPanel_o *)0x0)) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)__this_00,"Shader",
                                                  (Il2CppObject *)(pSVar2->fields)._value,
                                                  MethodInfo_Void_set_Item);
                                                  __this_01 = (UI_MapEditorInspectPanel_o *)
                                                              (__this->fields)._syncedSerialized;
                                                  pSVar6 = 
                                                  UI_MapEditorInspectPanel__SerializeSetting
                                                            (__this_00,
                                                             (Settings_BaseSetting_o *)
                                                             (__this->fields)._color,method_00);
                                                  if (__this_01 != (UI_MapEditorInspectPanel_o *)0x0
                                                     ) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)__this_01,"Color",(Il2CppObject *)pSVar6,
                                                  MethodInfo_Void_set_Item);
                                                  pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields)._syncedSerialized;
                                                  pSVar6 = 
                                                  UI_MapEditorInspectPanel__SerializeSetting
                                                            (__this_01,
                                                             (Settings_BaseSetting_o *)
                                                             (__this->fields)._reflectColor,
                                                             method_01);
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,"ReflectColor",
                                                             (Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
                                                  pSVar2 = (__this->fields)._texture;
                                                  if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
                                                     (pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields)._syncedSerialized,
                                                  pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0)) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,"Texture",
                                                             (Il2CppObject *)(pSVar2->fields)._value
                                                             ,MethodInfo_Void_set_Item);
                                                  pSVar5 = (__this->fields)._tilingX;
                                                  if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields)._syncedSerialized;
                                                  local_28 = (pSVar5->fields)._value;
                                                  pSVar6 = System_Single__ToString
                                                                     (__this_11,
                                                                      (System_String_o *)&local_28,
                                                                      "R");
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,"TilingX",
                                                             (Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
                                                  pSVar5 = (__this->fields)._tilingY;
                                                  if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields)._syncedSerialized;
                                                  local_28 = (pSVar5->fields)._value;
                                                  pSVar6 = System_Single__ToString
                                                                     (__this_12,
                                                                      (System_String_o *)&local_28,
                                                                      "R");
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,"TilingY",
                                                             (Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
                                                  pSVar5 = (__this->fields)._offsetX;
                                                  if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields)._syncedSerialized;
                                                  local_28 = (pSVar5->fields)._value;
                                                  pSVar6 = System_Single__ToString
                                                                     (__this_13,
                                                                      (System_String_o *)&local_28,
                                                                      "R");
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,"OffsetX",
                                                             (Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
                                                  pSVar5 = (__this->fields)._offsetY;
                                                  if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                                                    pSVar1 = (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)(__this->fields)._syncedSerialized;
                                                  local_28 = (pSVar5->fields)._value;
                                                  pSVar6 = System_Single__ToString
                                                                     (__this_14,
                                                                      (System_String_o *)&local_28,
                                                                      "R");
                                                  if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                                            (pSVar1,"OffsetY",
                                                             (Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
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


// UI.MapEditorInspectPanel$$IsModified
// il2cpp: bool UI_MapEditorInspectPanel__IsModified (UI_MapEditorInspectPanel_o* __this, System_String_o* key, System_String_o* current, const MethodInfo* method);
// 0x4120210

bool_conflict
UI_MapEditorInspectPanel__IsModified
          (UI_MapEditorInspectPanel_o *__this,System_String_o *key,System_String_o *current,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  System_String_o *local_20;
  
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_20 = (System_String_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields)._syncedSerialized;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this_00,(Il2CppObject *)key,(Il2CppObject **)&local_20,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 == '\0') {
      bVar1 = 0;
    }
    else {
      bVar1 = System_String__op_Inequality(local_20,current,(MethodInfo *)0x0);
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel$$ApplyMixedIndicators
// il2cpp: void UI_MapEditorInspectPanel__ApplyMixedIndicators (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4119e50

void UI_MapEditorInspectPanel__ApplyMixedIndicators
               (UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  UnityEngine_Component_o *pUVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  UnityEngine_Object_o *x;
  long *plVar5;
  UnityEngine_UI_ToggleGroup_o *__this_00;
  System_RuntimeTypeHandle_o SVar6;
  bool_conflict bVar7;
  int iVar8;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Type_o *pSVar9;
  System_Reflection_FieldInfo_o *left;
  System_Object_array *pSVar10;
  Il2CppObject *pIVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  System_Type_array *components;
  long lVar14;
  Il2CppClass *__this_02;
  UnityEngine_RectTransform_o *pUVar15;
  UnityEngine_UI_Text_o *__this_03;
  UnityEngine_Font_o *value;
  UnityEngine_Events_UnityAction_T0__o *call;
  undefined8 uVar16;
  UnityEngine_UI_Toggle_o *__this_04;
  int32_t value_00;
  Il2CppObject *pIVar17;
  ulong uVar18;
  UnityEngine_UI_InputField_o *__this_05;
  UnityEngine_Rect_o UVar19;
  Il2CppClass *local_68;
  Il2CppObject *local_60;
  UnityEngine_Transform_o *local_58;
  UnityEngine_Transform_o *local_50;
  UnityEngine_Transform_o *local_48;
  Il2CppObject *local_40;
  System_Collections_Generic_Dictionary_object__object__o *local_38;
  
  if (DAT_057048e7 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_BaseSettingElement);
    il2cpp_init_method_metadata(&TypeInfo_BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Toggle_GetComponent_Toggle);
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement___GetComponentsInChildren_In);
    il2cpp_init_method_metadata(&MethodInfo_ToggleSettingElement___GetComponentsInChildren_T);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_Settings_BaseSetting_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_BaseSetting__string);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Font_GetBuiltinResource_Font);
    il2cpp_init_method_metadata(&TypeRef_Text);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&MethodInfo_Void__ApplyMixedIndicators_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass68_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_bool);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    il2cpp_init_method_metadata(&"OffsetY");
    il2cpp_init_method_metadata(&"TilingX");
    il2cpp_init_method_metadata(&"Arial.ttf");
    il2cpp_init_method_metadata(&"InputField");
    il2cpp_init_method_metadata(&"ScaleY");
    il2cpp_init_method_metadata(&"RotationZ");
    il2cpp_init_method_metadata(&"Networked");
    il2cpp_init_method_metadata(&"Background");
    il2cpp_init_method_metadata(&"_setting");
    il2cpp_init_method_metadata(&"TilingY");
    il2cpp_init_method_metadata(&"--");
    il2cpp_init_method_metadata(&"RotationY");
    il2cpp_init_method_metadata(&"Visible");
    il2cpp_init_method_metadata(&"RotationX");
    il2cpp_init_method_metadata(&"PositionZ");
    il2cpp_init_method_metadata(&"Active");
    il2cpp_init_method_metadata(&"Parent");
    il2cpp_init_method_metadata(&"ScaleX");
    il2cpp_init_method_metadata(&"OffsetX");
    il2cpp_init_method_metadata(&"Static");
    il2cpp_init_method_metadata(&"MixedLabel");
    il2cpp_init_method_metadata(&"ScaleZ");
    il2cpp_init_method_metadata(&"PositionY");
    il2cpp_init_method_metadata(&"PositionX");
    il2cpp_init_method_metadata(&"Toggle");
    il2cpp_init_method_metadata(&"Checkmark");
    DAT_057048e7 = '\x01';
  }
  local_40 = (Il2CppObject *)0x0;
  local_68 = (Il2CppClass *)0x0;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_BaseSetting__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_01,MethodInfo_Dictionary_2_Settings_BaseSetting_System_String);
  if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_0411aca8:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._positionX,"PositionX",MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._positionY,"PositionY",MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._positionZ,"PositionZ",MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._rotationX,"RotationX",MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._rotationY,"RotationY",MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._rotationZ,"RotationZ",MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._scaleX,"ScaleX",MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._scaleY,"ScaleY",MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._scaleZ,"ScaleZ",MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._tilingX,"TilingX",MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._tilingY,"TilingY",MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._offsetX,"OffsetX",MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._offsetY,"OffsetY",MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._parent,"Parent",MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._active,"Active",MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._static,"Static",MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._networked,"Networked",MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this_01,(Il2CppObject *)(__this->fields)._visible,"Visible",MethodInfo_Void_Add);
  SVar6 = TypeRef_BaseSettingElement;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar9 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
  if (pSVar9 == (System_Type_o *)0x0) goto LAB_0411aca8;
  left = (System_Reflection_FieldInfo_o *)
         (*(pSVar9->klass->vtable)._89_unknown.methodPtr)(pSVar9,"_setting",0x24);
  bVar7 = System_Reflection_FieldInfo__op_Equality
                    (left,(System_Reflection_FieldInfo_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pUVar12 = (__this->fields).SinglePanel;
    if ((pUVar12 == (UnityEngine_Transform_o *)0x0) ||
       (pSVar10 = UnityEngine_Component__GetComponentsInChildren<object>
                            ((UnityEngine_Component_o *)pUVar12,1,MethodInfo_InputSettingElement___GetComponentsInChildren_In),
       pSVar10 == (System_Object_array *)0x0)) goto LAB_0411aca8;
    iVar8 = (int)pSVar10->max_length;
    if (left == (System_Reflection_FieldInfo_o *)0x0) {
      if (0 < iVar8) goto LAB_0411aca8;
    }
    else if (0 < iVar8) {
      uVar18 = 0;
      if ((pSVar10->max_length & 0xffffffff) != 0) {
        do {
          pUVar3 = (UnityEngine_Component_o *)pSVar10->m_Items[uVar18];
          pIVar11 = (Il2CppObject *)
                    (*(left->klass->vtable)._26_unknown.methodPtr)
                              (left,pUVar3,(left->klass->vtable)._26_unknown.method);
          if (pIVar11 != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
            if (((bVar1 <= (pIVar11->klass->_2).naturalAligment) &&
                ((pIVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseSetting)) &&
               (bVar7 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                                  (__this_01,pIVar11,&local_40,MethodInfo_Boolean_TryGetValue), (char)bVar7 != '\0'))
            {
              pSVar4 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields
              ;
              if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_0411aca8;
              bVar7 = System_Collections_Generic_HashSet<object>__Contains
                                (pSVar4,local_40,MethodInfo_Boolean_Contains);
              if ((char)bVar7 != '\0') {
                if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
                   (pUVar12 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0),
                   pUVar12 == (UnityEngine_Transform_o *)0x0)) goto LAB_0411aca8;
                pUVar12 = UnityEngine_Transform__Find(pUVar12,"InputField",(MethodInfo *)0x0);
                __this_05 = (UnityEngine_UI_InputField_o *)0x0;
                if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
                  if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto LAB_0411aca8;
                  __this_05 = (UnityEngine_UI_InputField_o *)
                              UnityEngine_Component__GetComponent<object>
                                        ((UnityEngine_Component_o *)pUVar12,MethodInfo_InputField_GetComponent_InputField);
                }
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar7 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar7 != '\0') {
                  if (__this_05 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_0411aca8;
                  UnityEngine_UI_InputField__set_text(__this_05,"--",(MethodInfo *)0x0);
                }
              }
            }
          }
          uVar18 = uVar18 + 1;
          uVar2 = (uint)pSVar10->max_length;
          if ((long)(int)uVar2 <= (long)uVar18) goto LAB_0411a563;
        } while (uVar18 < uVar2);
      }
      goto LAB_0411acad;
    }
LAB_0411a563:
    pUVar12 = (__this->fields).SinglePanel;
    if ((pUVar12 == (UnityEngine_Transform_o *)0x0) ||
       (pSVar10 = UnityEngine_Component__GetComponentsInChildren<object>
                            ((UnityEngine_Component_o *)pUVar12,1,MethodInfo_ToggleSettingElement___GetComponentsInChildren_T),
       pSVar10 == (System_Object_array *)0x0)) goto LAB_0411aca8;
    if (0 < (int)pSVar10->max_length) {
      local_48 = (UnityEngine_Transform_o *)0x0;
      pUVar12 = (UnityEngine_Transform_o *)0x0;
      uVar18 = 0;
      if ((pSVar10->max_length & 0xffffffff) != 0) {
        do {
          if (left == (System_Reflection_FieldInfo_o *)0x0) goto LAB_0411aca8;
          pUVar3 = (UnityEngine_Component_o *)pSVar10->m_Items[uVar18];
          pIVar11 = (Il2CppObject *)
                    (*(left->klass->vtable)._26_unknown.methodPtr)
                              (left,pUVar3,(left->klass->vtable)._26_unknown.method);
          if (pIVar11 != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
            if (((bVar1 <= (pIVar11->klass->_2).naturalAligment) &&
                ((pIVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseSetting)) &&
               (bVar7 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                                  (__this_01,pIVar11,(Il2CppObject **)&local_68,MethodInfo_Boolean_TryGetValue),
               (char)bVar7 != '\0')) {
              pSVar4 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields
              ;
              if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_0411aca8;
              bVar7 = System_Collections_Generic_HashSet<object>__Contains
                                (pSVar4,(Il2CppObject *)local_68,MethodInfo_Boolean_Contains);
              if ((char)bVar7 != '\0') {
                local_38 = __this_01;
                pIVar11 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass68_0);
                System_Object___ctor(pIVar11,(MethodInfo *)0x0);
                if (pIVar11 == (Il2CppObject *)0x0) goto LAB_0411aca8;
                pIVar11[2].monitor = __this;
                il2cpp_runtime_glue(&pIVar11[2].monitor);
                if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
                   (pUVar13 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0),
                   __this_01 = local_38, pUVar13 == (UnityEngine_Transform_o *)0x0))
                goto LAB_0411aca8;
                pUVar13 = UnityEngine_Transform__Find(pUVar13,"Toggle",(MethodInfo *)0x0);
                __this_04 = (UnityEngine_UI_Toggle_o *)0x0;
                if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                  if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto LAB_0411aca8;
                  __this_04 = (UnityEngine_UI_Toggle_o *)
                              UnityEngine_Component__GetComponent<object>
                                        ((UnityEngine_Component_o *)pUVar13,MethodInfo_Toggle_GetComponent_Toggle);
                  pUVar12 = pUVar13;
                }
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar7 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar7 == '\0') {
                  if ((__this_04 == (UnityEngine_UI_Toggle_o *)0x0) ||
                     (pUVar13 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0),
                     pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_0411aca8;
                  pUVar13 = UnityEngine_Transform__Find(pUVar13,"Background",(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  bVar7 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  local_58 = pUVar13;
                  local_50 = pUVar12;
                  if ((char)bVar7 == '\0') {
                    pIVar17 = (Il2CppObject *)0x0;
                  }
                  else {
                    if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto LAB_0411aca8;
                    pUVar12 = UnityEngine_Transform__Find(pUVar13,"Checkmark",(MethodInfo *)0x0);
                    pIVar17 = (Il2CppObject *)0x0;
                    if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
                      if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto LAB_0411aca8;
                      pIVar17 = UnityEngine_Component__GetComponent<object>
                                          ((UnityEngine_Component_o *)pUVar12,MethodInfo_Image_GetComponent_Image);
                      local_48 = pUVar12;
                    }
                  }
                  pIVar11[1].monitor = pIVar17;
                  il2cpp_runtime_glue(&pIVar11[1].monitor);
                  x = pIVar11[1].monitor;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  bVar7 = UnityEngine_Object__op_Equality
                                    (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  pUVar12 = local_50;
                  if ((char)bVar7 == '\0') {
                    UnityEngine_UI_Toggle__SetIsOnWithoutNotify(__this_04,0,(MethodInfo *)0x0);
                    if (pIVar11[1].monitor == (UnityEngine_Behaviour_o *)0x0) goto LAB_0411aca8;
                    UnityEngine_Behaviour__set_enabled(pIVar11[1].monitor,0,(MethodInfo *)0x0);
                    components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
                    SVar6 = TypeRef_RectTransform;
                    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    pSVar9 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
                    if (components == (System_Type_array *)0x0) goto LAB_0411aca8;
                    if ((pSVar9 != (System_Type_o *)0x0) &&
                       (lVar14 = il2cpp_runtime_glue(pSVar9,(((components->obj).klass)->_1).
                                                           element_class), lVar14 == 0)) {
LAB_0411acb2:
                      uVar16 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
                      il2cpp_glue_02274a00(uVar16,0);
                    }
                    if ((int)components->max_length == 0) break;
                    components->m_Items[0] = pSVar9;
                    il2cpp_runtime_glue(components->m_Items);
                    pSVar9 = System_Type__GetTypeFromHandle(TypeRef_Text,(MethodInfo *)0x0);
                    if ((pSVar9 != (System_Type_o *)0x0) &&
                       (lVar14 = il2cpp_runtime_glue(pSVar9,(((components->obj).klass)->_1).
                                                           element_class), lVar14 == 0))
                    goto LAB_0411acb2;
                    if ((uint)components->max_length < 2) break;
                    components->m_Items[1] = pSVar9;
                    il2cpp_runtime_glue(components->m_Items + 1,pSVar9);
                    __this_02 = (Il2CppClass *)il2cpp_runtime_glue(TypeInfo_GameObject);
                    UnityEngine_GameObject___ctor
                              ((UnityEngine_GameObject_o *)__this_02,"MixedLabel",components,
                               (MethodInfo *)0x0);
                    local_60 = pIVar11 + 1;
                    pIVar11[1].klass = __this_02;
                    il2cpp_runtime_glue();
                    if ((pIVar11[1].klass == (Il2CppClass *)0x0) ||
                       (pUVar12 = UnityEngine_GameObject__get_transform
                                            ((UnityEngine_GameObject_o *)pIVar11[1].klass,
                                             (MethodInfo *)0x0),
                       pUVar12 == (UnityEngine_Transform_o *)0x0)) goto LAB_0411aca8;
                    UnityEngine_Transform__SetParent(pUVar12,local_58,0,(MethodInfo *)0x0);
                    if (local_60->klass == (Il2CppClass *)0x0) goto LAB_0411aca8;
                    pUVar15 = (UnityEngine_RectTransform_o *)
                              UnityEngine_GameObject__get_transform
                                        ((UnityEngine_GameObject_o *)local_60->klass,
                                         (MethodInfo *)0x0);
                    if ((pUVar15 != (UnityEngine_RectTransform_o *)0x0) &&
                       (pUVar15->klass != TypeInfo_RectTransform)) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_unwind_resume(pUVar15);
                    }
                    if (DAT_056fe093 == '\0') {
                      il2cpp_init_method_metadata(&TypeInfo_Vector2);
                      DAT_056fe093 = '\x01';
                    }
                    if (pUVar15 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0411aca8;
                    UnityEngine_RectTransform__set_anchorMin
                              (pUVar15,(UnityEngine_Vector2_o)
                                       **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                               (MethodInfo *)0x0);
                    if (DAT_0570136e == '\0') {
                      il2cpp_init_method_metadata(&TypeInfo_Vector2);
                      DAT_0570136e = '\x01';
                    }
                    UnityEngine_RectTransform__set_anchorMax
                              (pUVar15,(UnityEngine_Vector2_o)
                                       *(UnityEngine_Vector2_Fields *)
                                        (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0);
                    if (DAT_056fe093 == '\0') {
                      il2cpp_init_method_metadata(&TypeInfo_Vector2);
                      DAT_056fe093 = '\x01';
                    }
                    UnityEngine_RectTransform__set_offsetMin
                              (pUVar15,(UnityEngine_Vector2_o)
                                       **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                               (MethodInfo *)0x0);
                    if (DAT_056fe093 == '\0') {
                      il2cpp_init_method_metadata(&TypeInfo_Vector2);
                      DAT_056fe093 = '\x01';
                    }
                    UnityEngine_RectTransform__set_offsetMax
                              (pUVar15,(UnityEngine_Vector2_o)
                                       **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                               (MethodInfo *)0x0);
                    if ((local_60->klass == (Il2CppClass *)0x0) ||
                       (__this_03 = (UnityEngine_UI_Text_o *)
                                    UnityEngine_GameObject__GetComponent<object>
                                              ((UnityEngine_GameObject_o *)local_60->klass,
                                               MethodInfo_Text_GetComponent_Text),
                       __this_03 == (UnityEngine_UI_Text_o *)0x0)) goto LAB_0411aca8;
                    (*(__this_03->klass->vtable)._75_set_text.methodPtr)
                              (__this_03,"--",(__this_03->klass->vtable)._75_set_text.method
                              );
                    UnityEngine_UI_Text__set_alignment(__this_03,4,(MethodInfo *)0x0);
                    plVar5 = pIVar11[1].monitor;
                    if (plVar5 == (long *)0x0) goto LAB_0411aca8;
                    (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
                    (*(__this_03->klass->vtable)._23_set_color.methodPtr)
                              (__this_03,(__this_03->klass->vtable)._23_set_color.method);
                    (*(__this_03->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (__this_03,0,(__this_03->klass->vtable)._25_set_raycastTarget.method);
                    value = (UnityEngine_Font_o *)
                            UnityEngine_Resources__GetBuiltinResource<object>
                                      ("Arial.ttf",MethodInfo_Font_GetBuiltinResource_Font);
                    UnityEngine_UI_Text__set_font(__this_03,value,(MethodInfo *)0x0);
                    if ((local_58 == (UnityEngine_Transform_o *)0x0) ||
                       (pUVar15 = (UnityEngine_RectTransform_o *)
                                  UnityEngine_Component__GetComponent<object>
                                            ((UnityEngine_Component_o *)local_58,MethodInfo_RectTransform_GetComponent_RectTransform),
                       pUVar15 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0411aca8;
                    UVar19 = UnityEngine_RectTransform__get_rect(pUVar15,(MethodInfo *)0x0);
                    value_00 = (int32_t)(UVar19.fields.m_Height * 0.9);
                    if (value_00 < 10) {
                      value_00 = 10;
                    }
                    UnityEngine_UI_Text__set_fontSize(__this_03,value_00,(MethodInfo *)0x0);
                    UnityEngine_UI_Text__set_fontStyle(__this_03,1,(MethodInfo *)0x0);
                    pIVar11[2].klass = local_68;
                    il2cpp_runtime_glue(pIVar11 + 2);
                    __this_00 = (__this_04->fields).m_Group;
                    call = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_bool);
                    UnityEngine_Events_UnityAction<bool>___ctor();
                    if (__this_00 == (UnityEngine_UI_ToggleGroup_o *)0x0) goto LAB_0411aca8;
                    UnityEngine_Events_UnityEvent<bool>__AddListener
                              ((UnityEngine_Events_UnityEvent_bool__o *)__this_00,call,MethodInfo_Void_AddListener)
                    ;
                    pUVar12 = local_50;
                  }
                }
              }
            }
          }
          uVar18 = uVar18 + 1;
          uVar2 = (uint)pSVar10->max_length;
          if ((long)(int)uVar2 <= (long)uVar18) {
            return;
          }
        } while (uVar18 < uVar2);
      }
LAB_0411acad:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// UI.MapEditorInspectPanel$$OnSelectTexture
// il2cpp: void UI_MapEditorInspectPanel__OnSelectTexture (UI_MapEditorInspectPanel_o* __this, System_String_o* texture, const MethodInfo* method);
// 0x41202a0

void UI_MapEditorInspectPanel__OnSelectTexture
               (UI_MapEditorInspectPanel_o *__this,System_String_o *texture,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Il2CppObject *pIVar1;
  Il2CppClass *method_00;
  
  if (DAT_057048e8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapTextures);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBasicMaterial_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057048e8 = '\x01';
  }
  __this_00 = (__this->fields)._texture;
  if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_01 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 8);
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar1 = System_Collections_Generic_Dictionary<object__object>__get_Item
                       (__this_01,(Il2CppObject *)texture,MethodInfo_MapScriptBasicMaterial_get_Item);
    if ((pIVar1 != (Il2CppObject *)0x0) && (__this_00 != (Settings_StringSetting_o *)0x0)) {
      method_00 = pIVar1[2].klass;
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)method_00,MethodInfo_Void_set_Value);
      UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel$$OnChange
// il2cpp: void UI_MapEditorInspectPanel__OnChange (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x411bb20

/* WARNING: Removing unreachable block (ram,0x0411e4e9) */
/* WARNING: Removing unreachable block (ram,0x0411f491) */
/* WARNING: Removing unreachable block (ram,0x0411e867) */
/* WARNING: Removing unreachable block (ram,0x0411f2ca) */
/* WARNING: Removing unreachable block (ram,0x0411eaaf) */
/* WARNING: Removing unreachable block (ram,0x0411eea4) */
/* WARNING: Removing unreachable block (ram,0x0411eed8) */
/* WARNING: Removing unreachable block (ram,0x0411eec1) */
/* WARNING: Removing unreachable block (ram,0x0411eed3) */
/* WARNING: Removing unreachable block (ram,0x0411f30e) */
/* WARNING: Type propagation algorithm not settling */

void UI_MapEditorInspectPanel__OnChange(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  void **ppvVar2;
  System_Collections_Generic_Dictionary_string__string__o **ppSVar3;
  byte bVar4;
  byte bVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  System_Collections_Generic_List_MapObject__o *pSVar9;
  Map_MapScriptBaseObject_o *__this_00;
  UnityEngine_GameObject_o *pUVar10;
  Map_MapObject_array *pMVar11;
  Settings_ColorSetting_o *pSVar12;
  System_String_c *pSVar13;
  Il2CppClass **ppIVar14;
  Utility_Color255_o *pUVar15;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *__this_01;
  System_Collections_Generic_List_string__o *pSVar16;
  System_Object_array *pSVar17;
  GameManagers_MapEditorGameManager_o *pGVar18;
  UI_MapEditorMenu_o *pUVar19;
  UI_MapEditorHierarchyPanel_o *__this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_07;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  System_Collections_Generic_List_Enumerator_object__o __this_11;
  System_Collections_Generic_List_Enumerator_object__o __this_12;
  bool_conflict *pbVar20;
  Map_MapScriptBaseObject_Fields *pMVar21;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  System_RuntimeTypeHandle_o handle;
  Il2CppClass *pIVar22;
  long lVar23;
  Map_MapObject_o *pMVar24;
  int iVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  bool_conflict bVar29;
  System_String_o *pSVar30;
  System_Collections_Generic_List_MapObject__o *mapObjects_00;
  Il2CppObject *pIVar31;
  UnityEngine_Transform_o *pUVar32;
  Map_MapScriptBaseMaterial_o *__this_13;
  System_Type_o *pSVar33;
  System_Type_o *pSVar34;
  float *pfVar35;
  Map_MapScriptDefaultTiledMaterial_o *__this_14;
  Map_MapScriptBasicMaterial_o *__this_15;
  System_Collections_Generic_Dictionary_object__object__o *pSVar36;
  System_Collections_Generic_List_object__o *pSVar37;
  System_Collections_Generic_List_string__o *pSVar38;
  UI_MapEditorInspectPanel_o *__this_16;
  System_Collections_Generic_HashSet_object__o *__this_17;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_18;
  System_String_array *pSVar39;
  Map_MapScriptComponent_o *__this_19;
  Map_MapScriptReflectiveMaterial_o *__this_20;
  Map_MapScriptLegacyMaterial_o *__this_21;
  MethodInfo *pMVar40;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  Settings_FloatSetting_o *pSVar41;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar42;
  _union_247328 _Var43;
  UI_MapEditorInspectPanel_o *__this_22;
  MethodInfo **material;
  ulong uVar44;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float extraout_XMM0_Da_11;
  float extraout_XMM0_Da_12;
  float extraout_XMM0_Da_13;
  float extraout_XMM0_Da_14;
  float extraout_XMM0_Da_15;
  float extraout_XMM0_Da_16;
  float extraout_XMM0_Da_17;
  float extraout_XMM0_Da_18;
  float extraout_XMM0_Da_19;
  float extraout_XMM0_Da_20;
  float extraout_XMM0_Da_21;
  float extraout_XMM0_Da_22;
  float extraout_XMM0_Da_23;
  float extraout_XMM0_Da_24;
  ulong in_XMM1_Qa;
  uint uVar45;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  UnityEngine_Vector3_o UVar53;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o a;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o b;
  undefined4 in_stack_fffffffffffffe18;
  uint uVar54;
  uint in_stack_fffffffffffffe20;
  undefined4 uVar55;
  float fVar56;
  UI_MapEditorInspectPanel_o *pUVar57;
  _union_247328 local_1c8;
  undefined8 uStack_1c0;
  Map_MapObject_o *local_1b8;
  byte local_1ac;
  byte local_1ab;
  byte local_1aa;
  byte local_1a9;
  Map_MapObject_o *local_1a8;
  bool_conflict local_1a0;
  bool_conflict local_19c;
  bool_conflict local_198;
  bool_conflict local_194;
  bool_conflict local_190;
  bool_conflict local_18c;
  bool_conflict local_188;
  bool_conflict local_184;
  bool_conflict local_180;
  bool_conflict local_17c;
  bool_conflict local_178;
  bool_conflict local_174;
  bool_conflict local_170;
  uint local_16c;
  System_Collections_Generic_List_MapObject__o *local_168;
  bool_conflict local_160;
  uint local_15c;
  bool_conflict local_158;
  bool_conflict local_154;
  bool_conflict local_150;
  bool_conflict local_14c;
  bool_conflict local_148;
  bool_conflict local_144;
  bool_conflict local_140;
  bool_conflict local_13c;
  bool_conflict local_138;
  bool_conflict local_134;
  uint local_130;
  int32_t local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  System_Collections_Generic_List_object__o *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  float local_dc;
  _union_247328 local_d8;
  undefined8 uStack_d0;
  Map_MapObject_o *local_c8;
  _union_247328 local_b8;
  undefined8 uStack_b0;
  Map_MapObject_o *local_a8;
  _union_247328 local_98;
  undefined8 uStack_90;
  Map_MapObject_o *local_88;
  System_String_o **local_78;
  undefined8 uStack_70;
  System_Collections_Generic_List_MapObject__o *local_68;
  System_Collections_Generic_List_MapObject__o *local_60;
  _union_247328 local_58;
  undefined8 uStack_50;
  Map_MapObject_o *local_48;
  Map_MapScriptBaseObject_o *local_38;
  
  if (DAT_057048e9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CompositeCommand);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__List_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptComponent_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapScriptComponent__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapScriptComponent);
    il2cpp_init_method_metadata(&MethodInfo_List_1_MapEditor_BaseCommand);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_BaseCommand_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_MapScriptComponent);
    il2cpp_init_method_metadata(&TypeInfo_List_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_List_BaseCommand);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectShader);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptBaseMaterial);
    il2cpp_init_method_metadata(&TypeRef_MapScriptBasicMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptComponent);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptDefaultTiledMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptLegacyMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptReflectiveMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_TransformPositionCommand);
    il2cpp_init_method_metadata(&TypeInfo_TransformRotationCommand);
    il2cpp_init_method_metadata(&TypeInfo_TransformScaleCommand);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"OffsetY");
    il2cpp_init_method_metadata(&"TilingX");
    il2cpp_init_method_metadata(&"CollideMode");
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"ReflectColor");
    il2cpp_init_method_metadata(&"R");
    il2cpp_init_method_metadata(&"ScaleY");
    il2cpp_init_method_metadata(&"Dropbox");
    il2cpp_init_method_metadata(&"RotationZ");
    il2cpp_init_method_metadata(&"Networked");
    il2cpp_init_method_metadata(&"TilingY");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"--");
    il2cpp_init_method_metadata(&"RotationY");
    il2cpp_init_method_metadata(&"Visible");
    il2cpp_init_method_metadata(&"Texture");
    il2cpp_init_method_metadata(&"RotationX");
    il2cpp_init_method_metadata(&"PositionZ");
    il2cpp_init_method_metadata(&":");
    il2cpp_init_method_metadata(&"Active");
    il2cpp_init_method_metadata(&"Parent");
    il2cpp_init_method_metadata(&"Tooltip");
    il2cpp_init_method_metadata(&"ScaleX");
    il2cpp_init_method_metadata(&"OffsetX");
    il2cpp_init_method_metadata(&"Shader");
    il2cpp_init_method_metadata(&"Static");
    il2cpp_init_method_metadata(&"ScaleZ");
    il2cpp_init_method_metadata(&"PositionY");
    il2cpp_init_method_metadata(&"CollideWith");
    il2cpp_init_method_metadata(&"PositionX");
    il2cpp_init_method_metadata(&"Description");
    il2cpp_init_method_metadata(&"PhysicsMaterial");
    DAT_057048e9 = '\x01';
  }
  pIVar31 = "Name";
  uVar54 = in_stack_fffffffffffffe20 & 0xffffff;
  local_12c = 0;
  local_98.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  uStack_90 = 0;
  local_88 = (Map_MapObject_o *)0x0;
  local_e0 = 0.0;
  local_e8 = (System_Collections_Generic_List_object__o *)0x0;
  local_f0 = 0.0;
  local_f8 = (System_Collections_Generic_List_object__o *)0x0;
  local_100 = 0.0;
  local_108 = (System_Collections_Generic_List_object__o *)0x0;
  local_b8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  uStack_b0 = 0;
  local_a8 = (Map_MapObject_o *)0x0;
  local_58.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  uStack_50 = 0;
  local_48 = (Map_MapObject_o *)0x0;
  local_d8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  uStack_d0 = 0;
  local_c8 = (Map_MapObject_o *)0x0;
  pSVar6 = (__this->fields)._name;
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto LAB_0411f2c5;
  pSVar30 = (pSVar6->fields)._value;
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  pSVar36 = (System_Collections_Generic_Dictionary_object__object__o *)
            (__this->fields)._syncedSerialized;
  if (pSVar36 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     (pSVar36,pIVar31,&local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    cVar26 = '\0';
    pSVar7 = (__this->fields)._active;
  }
  else {
    bVar29 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    cVar26 = (char)bVar29;
    pSVar7 = (__this->fields)._active;
  }
  if (pSVar7 == (Settings_BoolSetting_o *)0x0) goto LAB_0411f2c5;
  uVar54 = uVar54 & 0xffffff;
  if (*(int *)(DAT_05711048 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppSVar3 = &(__this->fields)._syncedSerialized;
  pSVar30 = System_Boolean__ToString((bool_conflict)&stack0xfffffffffffffe23,(MethodInfo *)0x0);
  pIVar31 = "Active";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_134 = 0;
    pSVar7 = (__this->fields)._static;
  }
  else {
    local_134 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar7 = (__this->fields)._static;
  }
  if (pSVar7 == (Settings_BoolSetting_o *)0x0) goto LAB_0411f2c5;
  uVar54 = uVar54 & 0xffffff;
  pSVar30 = System_Boolean__ToString((bool_conflict)&stack0xfffffffffffffe23,(MethodInfo *)0x0);
  pIVar31 = "Static";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_138 = 0;
    pSVar7 = (__this->fields)._networked;
  }
  else {
    local_138 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar7 = (__this->fields)._networked;
  }
  if (pSVar7 == (Settings_BoolSetting_o *)0x0) goto LAB_0411f2c5;
  uVar54 = uVar54 & 0xffffff;
  pSVar30 = System_Boolean__ToString((bool_conflict)&stack0xfffffffffffffe23,(MethodInfo *)0x0);
  pIVar31 = "Networked";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_13c = 0;
    pSVar7 = (__this->fields)._visible;
  }
  else {
    local_13c = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar7 = (__this->fields)._visible;
  }
  if (pSVar7 == (Settings_BoolSetting_o *)0x0) goto LAB_0411f2c5;
  uVar55 = CONCAT13(*(undefined1 *)((long)&(pSVar7->fields).DefaultValue + 1),(int3)uVar54);
  pSVar30 = System_Boolean__ToString((bool_conflict)&stack0xfffffffffffffe23,(MethodInfo *)0x0);
  pIVar31 = "Visible";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_140 = 0;
    pSVar8 = (__this->fields)._parent;
  }
  else {
    local_140 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar8 = (__this->fields)._parent;
  }
  if (pSVar8 == (Settings_IntSetting_o *)0x0) goto LAB_0411f2c5;
  local_12c = (pSVar8->fields)._value;
  pSVar30 = System_Int32__ToString((int32_t)&local_12c,(MethodInfo *)0x0);
  pIVar31 = "Parent";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_144 = 0;
    pSVar41 = (__this->fields)._positionX;
    fVar47 = extraout_XMM0_Da;
  }
  else {
    local_144 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar41 = (__this->fields)._positionX;
    fVar47 = extraout_XMM0_Da_00;
  }
  if (pSVar41 == (Settings_FloatSetting_o *)0x0) goto LAB_0411f2c5;
  material = &"R";
  pSVar30 = System_Single__ToString(fVar47,(System_String_o *)&stack0xfffffffffffffe24,"R")
  ;
  pIVar31 = "PositionX";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_170 = 0;
    pSVar41 = (__this->fields)._positionY;
    fVar47 = extraout_XMM0_Da_01;
  }
  else {
    local_170 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar41 = (__this->fields)._positionY;
    fVar47 = extraout_XMM0_Da_02;
  }
  if (pSVar41 == (Settings_FloatSetting_o *)0x0) goto LAB_0411f2c5;
  pSVar30 = System_Single__ToString(fVar47,(System_String_o *)&stack0xfffffffffffffe24,"R")
  ;
  pIVar31 = "PositionY";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_174 = 0;
    pSVar41 = (__this->fields)._positionZ;
    fVar47 = extraout_XMM0_Da_03;
  }
  else {
    local_174 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar41 = (__this->fields)._positionZ;
    fVar47 = extraout_XMM0_Da_04;
  }
  if (pSVar41 == (Settings_FloatSetting_o *)0x0) goto LAB_0411f2c5;
  pSVar30 = System_Single__ToString(fVar47,(System_String_o *)&stack0xfffffffffffffe24,"R")
  ;
  pIVar31 = "PositionZ";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_178 = 0;
    pSVar41 = (__this->fields)._rotationX;
    fVar47 = extraout_XMM0_Da_05;
  }
  else {
    local_178 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar41 = (__this->fields)._rotationX;
    fVar47 = extraout_XMM0_Da_06;
  }
  if (pSVar41 == (Settings_FloatSetting_o *)0x0) goto LAB_0411f2c5;
  pSVar30 = System_Single__ToString(fVar47,(System_String_o *)&stack0xfffffffffffffe24,"R")
  ;
  pIVar31 = "RotationX";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_17c = 0;
    pSVar41 = (__this->fields)._rotationY;
    fVar47 = extraout_XMM0_Da_07;
  }
  else {
    local_17c = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar41 = (__this->fields)._rotationY;
    fVar47 = extraout_XMM0_Da_08;
  }
  if (pSVar41 == (Settings_FloatSetting_o *)0x0) goto LAB_0411f2c5;
  pSVar30 = System_Single__ToString(fVar47,(System_String_o *)&stack0xfffffffffffffe24,"R")
  ;
  pIVar31 = "RotationY";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_180 = 0;
    pSVar41 = (__this->fields)._rotationZ;
    fVar47 = extraout_XMM0_Da_09;
  }
  else {
    local_180 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar41 = (__this->fields)._rotationZ;
    fVar47 = extraout_XMM0_Da_10;
  }
  if (pSVar41 == (Settings_FloatSetting_o *)0x0) goto LAB_0411f2c5;
  pSVar30 = System_Single__ToString(fVar47,(System_String_o *)&stack0xfffffffffffffe24,"R")
  ;
  pIVar31 = "RotationZ";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_184 = 0;
    pSVar41 = (__this->fields)._scaleX;
    fVar47 = extraout_XMM0_Da_11;
  }
  else {
    local_184 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar41 = (__this->fields)._scaleX;
    fVar47 = extraout_XMM0_Da_12;
  }
  if (pSVar41 == (Settings_FloatSetting_o *)0x0) goto LAB_0411f2c5;
  pSVar30 = System_Single__ToString(fVar47,(System_String_o *)&stack0xfffffffffffffe24,"R")
  ;
  pIVar31 = "ScaleX";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_188 = 0;
    pSVar41 = (__this->fields)._scaleY;
    fVar47 = extraout_XMM0_Da_13;
  }
  else {
    local_188 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar41 = (__this->fields)._scaleY;
    fVar47 = extraout_XMM0_Da_14;
  }
  if (pSVar41 == (Settings_FloatSetting_o *)0x0) goto LAB_0411f2c5;
  pSVar30 = System_Single__ToString(fVar47,(System_String_o *)&stack0xfffffffffffffe24,"R")
  ;
  pIVar31 = "ScaleY";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_18c = 0;
    pSVar41 = (__this->fields)._scaleZ;
    fVar47 = extraout_XMM0_Da_15;
  }
  else {
    local_18c = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar41 = (__this->fields)._scaleZ;
    fVar47 = extraout_XMM0_Da_16;
  }
  if (pSVar41 == (Settings_FloatSetting_o *)0x0) goto LAB_0411f2c5;
  pSVar30 = System_Single__ToString(fVar47,(System_String_o *)&stack0xfffffffffffffe24,"R")
  ;
  pIVar31 = "ScaleZ";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_190 = 0;
    pSVar6 = (__this->fields)._collideMode;
    pIVar31 = "CollideMode";
  }
  else {
    local_190 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar6 = (__this->fields)._collideMode;
    pIVar31 = "CollideMode";
  }
  "CollideMode" = pIVar31;
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto LAB_0411f2c5;
  pSVar30 = (pSVar6->fields)._value;
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_148 = 0;
    pSVar6 = (__this->fields)._collideWith;
    pIVar31 = "CollideWith";
  }
  else {
    local_148 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar6 = (__this->fields)._collideWith;
    pIVar31 = "CollideWith";
  }
  "CollideWith" = pIVar31;
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto LAB_0411f2c5;
  pSVar30 = (pSVar6->fields)._value;
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_14c = 0;
    pSVar6 = (__this->fields)._physicsMaterial;
    pIVar31 = "PhysicsMaterial";
  }
  else {
    local_14c = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar6 = (__this->fields)._physicsMaterial;
    pIVar31 = "PhysicsMaterial";
  }
  "PhysicsMaterial" = pIVar31;
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto LAB_0411f2c5;
  pSVar30 = (pSVar6->fields)._value;
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_150 = 0;
    pSVar6 = (__this->fields)._shader;
    pIVar31 = "Shader";
  }
  else {
    local_150 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar6 = (__this->fields)._shader;
    pIVar31 = "Shader";
  }
  "Shader" = pIVar31;
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto LAB_0411f2c5;
  pSVar30 = (pSVar6->fields)._value;
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  _Var43.genericMethod = *ppSVar3;
  if (_Var43.genericMethod == (UI_MapEditorInspectPanel_o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     (_Var43.genericMethod,pIVar31,&local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_154 = 0;
    pMVar40 = extraout_RDX;
  }
  else {
    _Var43 = local_1c8;
    local_154 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pMVar40 = extraout_RDX_00;
  }
  pSVar30 = UI_MapEditorInspectPanel__SerializeSetting
                      (_Var43.genericMethod,(Settings_BaseSetting_o *)(__this->fields)._color,
                       pMVar40);
  pIVar31 = "Color";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  _Var43.genericMethod = *ppSVar3;
  if (_Var43.genericMethod == (UI_MapEditorInspectPanel_o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     (_Var43.genericMethod,pIVar31,&local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_158 = 0;
    pMVar40 = extraout_RDX_01;
  }
  else {
    _Var43 = local_1c8;
    local_158 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pMVar40 = extraout_RDX_02;
  }
  pSVar30 = UI_MapEditorInspectPanel__SerializeSetting
                      (_Var43.genericMethod,(Settings_BaseSetting_o *)(__this->fields)._reflectColor
                       ,pMVar40);
  pIVar31 = "ReflectColor";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_160 = 0;
    pSVar6 = (__this->fields)._texture;
    pIVar31 = "Texture";
  }
  else {
    local_160 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar6 = (__this->fields)._texture;
    pIVar31 = "Texture";
  }
  "Texture" = pIVar31;
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto LAB_0411f2c5;
  pSVar30 = (pSVar6->fields)._value;
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_128 = (System_Collections_Generic_Dictionary_object__object__o *)
                ((ulong)local_128._4_4_ << 0x20);
    pSVar41 = (__this->fields)._tilingX;
    fVar47 = extraout_XMM0_Da_17;
  }
  else {
    bVar29 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    local_128 = (System_Collections_Generic_Dictionary_object__object__o *)
                CONCAT44(local_128._4_4_,bVar29);
    pSVar41 = (__this->fields)._tilingX;
    fVar47 = extraout_XMM0_Da_18;
  }
  if (pSVar41 == (Settings_FloatSetting_o *)0x0) goto LAB_0411f2c5;
  pSVar30 = System_Single__ToString(fVar47,(System_String_o *)&stack0xfffffffffffffe24,"R")
  ;
  pIVar31 = "TilingX";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_19c = 0;
    pSVar41 = (__this->fields)._tilingY;
    fVar47 = extraout_XMM0_Da_19;
  }
  else {
    local_19c = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar41 = (__this->fields)._tilingY;
    fVar47 = extraout_XMM0_Da_20;
  }
  if (pSVar41 == (Settings_FloatSetting_o *)0x0) goto LAB_0411f2c5;
  pSVar30 = System_Single__ToString(fVar47,(System_String_o *)&stack0xfffffffffffffe24,"R")
  ;
  pIVar31 = "TilingY";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_1a0 = 0;
    pSVar41 = (__this->fields)._offsetX;
    fVar47 = extraout_XMM0_Da_21;
  }
  else {
    local_1a0 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar41 = (__this->fields)._offsetX;
    fVar47 = extraout_XMM0_Da_22;
  }
  if (pSVar41 == (Settings_FloatSetting_o *)0x0) goto LAB_0411f2c5;
  pSVar30 = System_Single__ToString(fVar47,(System_String_o *)&stack0xfffffffffffffe24,"R")
  ;
  pIVar31 = "OffsetX";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar29 == '\0') {
    local_194 = 0;
    pSVar41 = (__this->fields)._offsetY;
    fVar47 = extraout_XMM0_Da_23;
  }
  else {
    local_194 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    pSVar41 = (__this->fields)._offsetY;
    fVar47 = extraout_XMM0_Da_24;
  }
  if (pSVar41 == (Settings_FloatSetting_o *)0x0) goto LAB_0411f2c5;
  fVar56 = (pSVar41->fields)._value;
  pSVar30 = System_Single__ToString(fVar47,(System_String_o *)&stack0xfffffffffffffe24,"R")
  ;
  pIVar31 = "OffsetY";
  if (DAT_057048e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057048e6 = '\x01';
  }
  local_1c8.genericMethod = (UI_MapEditorInspectPanel_o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0411f2c5;
  bVar29 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar3,pIVar31,
                      &local_1c8.genericMethod,MethodInfo_Boolean_TryGetValue);
  pUVar57 = __this;
  if ((char)bVar29 == '\0') {
    local_198 = 0;
    if (cVar26 == '\0') goto LAB_0411d206;
LAB_0411d258:
    pSVar6 = (__this->fields)._name;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) goto LAB_0411f2c5;
    local_130 = System_String__op_Equality((pSVar6->fields)._value,"--",(MethodInfo *)0x0);
    local_130 = local_130 ^ 1;
    if ((char)local_128 != '\0') goto LAB_0411d21b;
LAB_0411d290:
    local_15c = 0;
  }
  else {
    local_198 = System_String__op_Inequality(local_1c8.genericMethod,pSVar30,(MethodInfo *)0x0);
    if (cVar26 != '\0') goto LAB_0411d258;
LAB_0411d206:
    local_130 = 0;
    if ((char)local_128 == '\0') goto LAB_0411d290;
LAB_0411d21b:
    pSVar6 = (__this->fields)._texture;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) goto LAB_0411f2c5;
    local_15c = System_String__op_Equality((pSVar6->fields)._value,"--",(MethodInfo *)0x0);
    local_15c = local_15c ^ 1;
  }
  local_60 = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_glue(TypeInfo_List_MapObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)local_60,MethodInfo_List_1_Map_MapObject);
  local_68 = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_glue(TypeInfo_List_MapObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)local_68,MethodInfo_List_1_Map_MapObject);
  mapObjects_00 = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_glue(TypeInfo_List_MapObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)mapObjects_00,MethodInfo_List_1_Map_MapObject);
  pSVar9 = (__this->fields)._mapObjects;
  if (pSVar9 == (System_Collections_Generic_List_MapObject__o *)0x0) goto LAB_0411f2c5;
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&local_1c8,
             (System_Collections_Generic_List_object__o *)pSVar9,MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato);
  local_88 = local_1b8;
  local_98 = local_1c8;
  uStack_90 = uStack_1c0;
  local_1a9 = (byte)local_170 | (byte)local_174 | (byte)local_178;
  local_1aa = (byte)local_17c | (byte)local_180 | (byte)local_184;
  local_1ab = (byte)local_188 | (byte)local_18c | (byte)local_190;
  cVar26 = (char)local_1a0;
  cVar27 = (char)local_19c;
  local_1ac = (byte)local_194 | (byte)local_198;
  local_16c = 0;
  uVar54 = 0;
  local_168 = mapObjects_00;
  while (__this_03.fields._list._4_4_ = uVar54,
        __this_03.fields._list._0_4_ = in_stack_fffffffffffffe18, __this_03.fields._index = uVar55,
        __this_03.fields._version = (int32_t)fVar56,
        __this_03.fields._current = (Il2CppObject *)pUVar57,
        bVar29 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (__this_03,(MethodInfo_3185E20 *)&local_98), (char)bVar29 != '\0') {
    if (local_88 == (Map_MapObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    local_1a8 = local_88;
    __this_00 = (local_88->fields).ScriptObject;
    if (__this_00 != (Map_MapScriptBaseObject_o *)0x0) {
      bVar4 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar4) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_MapScriptSceneObject)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_00);
      }
    }
    if ((char)local_130 != '\0') {
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar6 = (__this->fields)._name;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pbVar20 = &(__this_00->fields).Visible;
      bVar29 = System_String__op_Inequality
                         (*(System_String_o **)pbVar20,(pSVar6->fields)._value,(MethodInfo *)0x0);
      local_16c = local_16c & 0xff;
      if ((char)bVar29 != '\0') {
        local_16c = 1;
      }
      pSVar6 = (__this->fields)._name;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(System_String_o **)pbVar20 = (pSVar6->fields)._value;
      il2cpp_runtime_glue(pbVar20);
    }
    if ((char)local_134 != '\0') {
      pSVar7 = (__this->fields)._active;
      if (pSVar7 == (Settings_BoolSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(undefined1 *)&(__this_00->fields).Active =
           *(undefined1 *)((long)&(pSVar7->fields).DefaultValue + 1);
    }
    if ((char)local_138 != '\0') {
      pSVar7 = (__this->fields)._static;
      if (pSVar7 == (Settings_BoolSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(undefined1 *)((long)&(__this_00->fields).Active + 1) =
           *(undefined1 *)((long)&(pSVar7->fields).DefaultValue + 1);
    }
    if ((char)local_13c != '\0') {
      pSVar7 = (__this->fields)._networked;
      if (pSVar7 == (Settings_BoolSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(undefined1 *)((long)&(__this_00->fields).Active + 3) =
           *(undefined1 *)((long)&(pSVar7->fields).DefaultValue + 1);
    }
    if ((char)local_140 != '\0') {
      pSVar7 = (__this->fields)._visible;
      if (pSVar7 == (Settings_BoolSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(undefined1 *)((long)&(__this_00->fields).Active + 2) =
           *(undefined1 *)((long)&(pSVar7->fields).DefaultValue + 1);
    }
    if ((char)local_144 != '\0') {
      pSVar8 = (__this->fields)._parent;
      if (pSVar8 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar42 = (pSVar8->fields)._value;
      iVar25 = iVar42;
      if (iVar42 < 1) {
LAB_0411d61d:
        iVar42 = iVar25;
        if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if ((System_Collections_Generic_Dictionary_int__object__o *)
            **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
            (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar29 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                           ((System_Collections_Generic_Dictionary_int__object__o *)
                            **(undefined8 **)(TypeInfo_MapLoader + 0xb8),iVar42,MethodInfo_Boolean_ContainsKey);
        iVar25 = 0;
        if ((char)bVar29 == '\0') goto LAB_0411d61d;
        if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (iVar42 == (__this_00->fields).Id) {
LAB_0411d617:
          iVar42 = 0;
        }
        else {
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if ((System_Collections_Generic_Dictionary_int__object__o *)
              **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
              (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pIVar31 = System_Collections_Generic_Dictionary<int__object>__get_Item
                              ((System_Collections_Generic_Dictionary_int__object__o *)
                               **(undefined8 **)(TypeInfo_MapLoader + 0xb8),iVar42,MethodInfo_MapObject_get_Item);
          if (pIVar31 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (*(int *)&pIVar31[1].klass == (__this_00->fields).Id) goto LAB_0411d617;
        }
      }
      (__this_00->fields).Parent = iVar42;
    }
    uVar50 = (undefined4)(in_XMM1_Qa >> 0x20);
    if (local_1a9 != 0) {
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UVar53 = Map_MapScriptBaseObject__GetPosition(__this_00,(MethodInfo *)0x0);
      fVar47 = UVar53.fields.x;
      if ((char)local_170 != '\0') {
        pSVar41 = (__this->fields)._positionX;
        if (pSVar41 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        fVar47 = (pSVar41->fields)._value;
      }
      fVar48 = UVar53.fields.y;
      if ((byte)local_174 != '\0') {
        pSVar41 = (__this->fields)._positionY;
        if (pSVar41 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        fVar48 = (pSVar41->fields)._value;
      }
      fVar49 = UVar53.fields.z;
      uVar51 = in_XMM1_Dc;
      uVar52 = in_XMM1_Dd;
      if ((byte)local_178 != '\0') {
        pSVar41 = (__this->fields)._positionZ;
        if (pSVar41 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar50 = 0;
        fVar49 = (pSVar41->fields)._value;
        uVar51 = 0;
        uVar52 = 0;
      }
      local_e8 = (System_Collections_Generic_List_object__o *)CONCAT44(fVar48,fVar47);
      fVar48 = fVar48 - UVar53.fields.y;
      local_128 = (System_Collections_Generic_Dictionary_object__object__o *)CONCAT44(uVar50,fVar49)
      ;
      local_118 = local_e8;
      uStack_110 = 0;
      fVar46 = fVar49 - UVar53.fields.z;
      fVar47 = fVar47 - UVar53.fields.x;
      in_XMM1_Qa = 0;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      uStack_120 = uVar51;
      uStack_11c = uVar52;
      local_e0 = fVar49;
      if (9.9999994e-11 <= fVar47 * fVar47 + fVar48 * fVar48 + fVar46 * fVar46) {
        pUVar10 = (local_1a8->fields).GameObject;
        if (pUVar10 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar32 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
        if (pUVar32 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UVar53.fields.z = (float)local_128;
        UVar53.fields._0_8_ = local_118;
        in_XMM1_Qa = (ulong)local_128 & 0xffffffff00000000;
        in_XMM1_Dc = uStack_120;
        in_XMM1_Dd = uStack_11c;
        UnityEngine_Transform__set_position(pUVar32,UVar53,(MethodInfo *)0x0);
        lVar23 = MethodInfo_Void_Add;
        if (local_60 == (System_Collections_Generic_List_MapObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = &(local_60->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar11 = (local_60->fields)._items;
        if (pMVar11 == (Map_MapObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar45 = (local_60->fields)._size;
        if (uVar45 < (uint)pMVar11->max_length) {
          (local_60->fields)._size = uVar45 + 1;
          pMVar11->m_Items[(int)uVar45] = local_1a8;
          il2cpp_runtime_glue(pMVar11->m_Items + (int)uVar45);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)local_60,(Il2CppObject *)local_1a8
                     ,*(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    uVar50 = (undefined4)(in_XMM1_Qa >> 0x20);
    if (local_1aa != 0) {
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UVar53 = Map_MapScriptBaseObject__GetRotation(__this_00,(MethodInfo *)0x0);
      fVar47 = UVar53.fields.x;
      if ((char)local_17c != '\0') {
        pSVar41 = (__this->fields)._rotationX;
        if (pSVar41 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        fVar47 = (pSVar41->fields)._value;
      }
      fVar48 = UVar53.fields.y;
      if ((byte)local_180 != '\0') {
        pSVar41 = (__this->fields)._rotationY;
        if (pSVar41 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        fVar48 = (pSVar41->fields)._value;
      }
      fVar49 = UVar53.fields.z;
      uVar51 = in_XMM1_Dc;
      uVar52 = in_XMM1_Dd;
      if ((byte)local_184 != '\0') {
        pSVar41 = (__this->fields)._rotationZ;
        if (pSVar41 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar50 = 0;
        fVar49 = (pSVar41->fields)._value;
        uVar51 = 0;
        uVar52 = 0;
      }
      local_f8 = (System_Collections_Generic_List_object__o *)CONCAT44(fVar48,fVar47);
      local_78 = (System_String_o **)CONCAT44(fVar48,fVar48);
      uStack_70 = 0;
      fVar48 = fVar48 - UVar53.fields.y;
      local_128 = (System_Collections_Generic_Dictionary_object__object__o *)CONCAT44(uVar50,fVar49)
      ;
      local_118 = local_f8;
      uStack_110 = 0;
      fVar46 = fVar49 - UVar53.fields.z;
      fVar47 = fVar47 - UVar53.fields.x;
      in_XMM1_Qa = 0;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      uStack_120 = uVar51;
      uStack_11c = uVar52;
      local_f0 = fVar49;
      if (9.9999994e-11 <= fVar47 * fVar47 + fVar48 * fVar48 + fVar46 * fVar46) {
        pUVar10 = (local_1a8->fields).GameObject;
        if (pUVar10 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar32 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
        euler.fields.x = local_118._0_4_ * 0.017453292;
        euler.fields.z = (float)local_128 * 0.017453292;
        euler.fields.y = local_78._0_4_ * 0.017453292;
        in_XMM1_Dc = uStack_120;
        in_XMM1_Dd = uStack_11c;
        value = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
        in_XMM1_Qa = value.fields._8_8_;
        if (pUVar32 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_Transform__set_rotation(pUVar32,value,(MethodInfo *)0x0);
        lVar23 = MethodInfo_Void_Add;
        if (local_68 == (System_Collections_Generic_List_MapObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = &(local_68->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar11 = (local_68->fields)._items;
        if (pMVar11 == (Map_MapObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar45 = (local_68->fields)._size;
        if (uVar45 < (uint)pMVar11->max_length) {
          (local_68->fields)._size = uVar45 + 1;
          pMVar11->m_Items[(int)uVar45] = local_1a8;
          il2cpp_runtime_glue(pMVar11->m_Items + (int)uVar45);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)local_68,(Il2CppObject *)local_1a8
                     ,*(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    uVar50 = (undefined4)(in_XMM1_Qa >> 0x20);
    if (local_1ab != 0) {
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UVar53 = Map_MapScriptBaseObject__GetScale(__this_00,(MethodInfo *)0x0);
      fVar47 = UVar53.fields.x;
      if ((char)local_188 != '\0') {
        pSVar41 = (__this->fields)._scaleX;
        if (pSVar41 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        fVar47 = (pSVar41->fields)._value;
      }
      fVar48 = UVar53.fields.y;
      if ((byte)local_18c != '\0') {
        pSVar41 = (__this->fields)._scaleY;
        if (pSVar41 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        fVar48 = (pSVar41->fields)._value;
      }
      fVar49 = UVar53.fields.z;
      uVar51 = in_XMM1_Dc;
      uVar52 = in_XMM1_Dd;
      if ((byte)local_190 != '\0') {
        pSVar41 = (__this->fields)._scaleZ;
        if (pSVar41 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar50 = 0;
        fVar49 = (pSVar41->fields)._value;
        uVar51 = 0;
        uVar52 = 0;
      }
      local_108 = (System_Collections_Generic_List_object__o *)CONCAT44(fVar48,fVar47);
      fVar48 = fVar48 - UVar53.fields.y;
      local_128 = (System_Collections_Generic_Dictionary_object__object__o *)CONCAT44(uVar50,fVar49)
      ;
      local_118 = local_108;
      uStack_110 = 0;
      fVar46 = fVar49 - UVar53.fields.z;
      fVar47 = fVar47 - UVar53.fields.x;
      in_XMM1_Qa = 0;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      uStack_120 = uVar51;
      uStack_11c = uVar52;
      local_100 = fVar49;
      if (9.9999994e-11 <= fVar47 * fVar47 + fVar48 * fVar48 + fVar46 * fVar46) {
        pUVar10 = (local_1a8->fields).GameObject;
        if (pUVar10 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar32 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
        local_78 = *(System_String_o ***)&(local_1a8->fields).BaseScale.fields;
        uStack_70 = 0;
        local_dc = (local_1a8->fields).BaseScale.fields.z;
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        a.fields.z = local_dc;
        a.fields._0_8_ = local_78;
        uVar45 = 0;
        b.fields.z = (float)local_128;
        b.fields._0_8_ = local_118;
        UVar53 = Utility_Util__MultiplyVectors(a,b,(MethodInfo *)0x0);
        if (pUVar32 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        in_XMM1_Qa = (ulong)uVar45 << 0x20;
        UnityEngine_Transform__set_localScale(pUVar32,UVar53,(MethodInfo *)0x0);
        lVar23 = MethodInfo_Void_Add;
        if (mapObjects_00 == (System_Collections_Generic_List_MapObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = &(mapObjects_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar11 = (mapObjects_00->fields)._items;
        if (pMVar11 == (Map_MapObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar45 = (mapObjects_00->fields)._size;
        if (uVar45 < (uint)pMVar11->max_length) {
          (mapObjects_00->fields)._size = uVar45 + 1;
          pMVar11->m_Items[(int)uVar45] = local_1a8;
          il2cpp_runtime_glue(pMVar11->m_Items + (int)uVar45);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)mapObjects_00,
                     (Il2CppObject *)local_1a8,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    if ((char)local_148 != '\0') {
      pSVar6 = (__this->fields)._collideMode;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(System_String_o **)&(__this_00->fields).ScaleZ = (pSVar6->fields)._value;
      il2cpp_runtime_glue(&(__this_00->fields).ScaleZ);
    }
    if ((char)local_14c != '\0') {
      pSVar6 = (__this->fields)._collideWith;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_00[1].klass = (Map_MapScriptBaseObject_c *)(pSVar6->fields)._value;
      il2cpp_runtime_glue(__this_00 + 1);
    }
    if ((char)local_150 != '\0') {
      pSVar6 = (__this->fields)._physicsMaterial;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_00[1].monitor = (pSVar6->fields)._value;
      il2cpp_runtime_glue(&__this_00[1].monitor);
    }
    if ((char)local_154 == '\0') {
LAB_0411ddf0:
      uVar44 = (ulong)uVar54;
      if ((char)local_158 != '\0') goto LAB_0411ddb0;
LAB_0411de01:
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      pSVar6 = (__this->fields)._shader;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar30 = __this_00[1].fields.Type;
      if (pSVar30 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar29 = System_String__op_Inequality
                         ((pSVar6->fields)._value,(System_String_o *)pSVar30->fields,
                          (MethodInfo *)0x0);
      if ((char)bVar29 == '\0') goto LAB_0411ddf0;
      pSVar6 = (__this->fields)._shader;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar30 = (pSVar6->fields)._value;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar29 = System_String__op_Equality
                         (pSVar30,(System_String_o *)**(undefined8 **)(TypeInfo_MapObjectShader + 0xb8),
                          (MethodInfo *)0x0);
      pMVar21 = &__this_00[1].fields;
      if ((char)bVar29 == '\0') {
        pSVar6 = (__this->fields)._shader;
        if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar30 = (pSVar6->fields)._value;
        if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar29 = System_String__op_Equality
                           (pSVar30,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8),
                            (MethodInfo *)0x0);
        if ((char)bVar29 != '\0') goto LAB_0411dd4c;
        pSVar6 = (__this->fields)._shader;
        if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar30 = (pSVar6->fields)._value;
        if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar29 = System_String__op_Equality
                           (pSVar30,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10),
                            (MethodInfo *)0x0);
        if ((char)bVar29 == '\0') {
          pSVar6 = (__this->fields)._shader;
          if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar30 = (pSVar6->fields)._value;
          if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar29 = System_String__op_Equality
                             (pSVar30,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x18),
                              (MethodInfo *)0x0);
          if ((char)bVar29 == '\0') {
            pSVar6 = (__this->fields)._shader;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar30 = (pSVar6->fields)._value;
            if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar29 = System_String__op_Equality
                               (pSVar30,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x20)
                                ,(MethodInfo *)0x0);
            if ((char)bVar29 == '\0') {
              pSVar6 = (__this->fields)._shader;
              if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pSVar30 = (pSVar6->fields)._value;
              if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar29 = System_String__op_Equality
                                 (pSVar30,*(System_String_o **)
                                           (*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x28),(MethodInfo *)0x0
                                 );
              if ((char)bVar29 == '\0') {
                __this_21 = (Map_MapScriptLegacyMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptLegacyMaterial);
                Map_MapScriptLegacyMaterial___ctor(__this_21,(MethodInfo *)0x0);
                pMVar21->Type = (System_String_o *)__this_21;
                il2cpp_runtime_glue(pMVar21,__this_21);
              }
              else {
                __this_20 = (Map_MapScriptReflectiveMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptReflectiveMaterial);
                Map_MapScriptReflectiveMaterial___ctor(__this_20,(MethodInfo *)0x0);
                pMVar21->Type = (System_String_o *)__this_20;
                il2cpp_runtime_glue(pMVar21,__this_20);
              }
              goto LAB_0411dd76;
            }
          }
          __this_15 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptBasicMaterial);
          Map_MapScriptBasicMaterial___ctor(__this_15,(MethodInfo *)0x0);
          pMVar21->Type = (System_String_o *)__this_15;
          il2cpp_runtime_glue(pMVar21,__this_15);
        }
        else {
          __this_14 = (Map_MapScriptDefaultTiledMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptDefaultTiledMaterial);
          Map_MapScriptDefaultTiledMaterial___ctor(__this_14,(MethodInfo *)0x0);
          pMVar21->Type = (System_String_o *)__this_14;
          il2cpp_runtime_glue(pMVar21,__this_14);
        }
      }
      else {
LAB_0411dd4c:
        __this_13 = (Map_MapScriptBaseMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptBaseMaterial);
        Map_MapScriptBaseMaterial___ctor(__this_13,(MethodInfo *)0x0);
        pMVar21->Type = (System_String_o *)__this_13;
        il2cpp_runtime_glue(pMVar21,__this_13);
      }
LAB_0411dd76:
      pSVar6 = (__this->fields)._shader;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar30 = pMVar21->Type;
      if (pSVar30 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar30->fields = (System_String_Fields)(pSVar6->fields)._value;
      uVar44 = CONCAT71((int7)((ulong)material >> 8),1);
      il2cpp_runtime_glue(&pSVar30->fields);
      if ((char)local_158 == '\0') goto LAB_0411de01;
LAB_0411ddb0:
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar12 = (__this->fields)._color;
      if (pSVar12 == (Settings_ColorSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar30 = __this_00[1].fields.Type;
      if (pSVar30 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar30[1].klass = (System_String_c *)(pSVar12->fields)._value;
      il2cpp_runtime_glue(pSVar30 + 1);
    }
    handle.fields.value = TypeRef_MapScriptBasicMaterial.fields.value;
    uVar54 = (uint)uVar44;
    pSVar30 = __this_00[1].fields.Type;
    if (pSVar30 == (System_String_o *)0x0) {
LAB_0411de6c:
      if (*(int *)(DAT_05711100 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar33 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      pSVar30 = __this_00[1].fields.Type;
      if (pSVar30 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar34 = System_Object__GetType((Il2CppObject *)pSVar30,(MethodInfo *)0x0);
      if (pSVar33 == (System_Type_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      cVar28 = (*(pSVar33->klass->vtable)._22_IsAssignableFrom.methodPtr)
                         (pSVar33,pSVar34,(pSVar33->klass->vtable)._22_IsAssignableFrom.method);
      if (cVar28 != '\0') {
        pSVar30 = __this_00[1].fields.Type;
        if (pSVar30 != (System_String_o *)0x0) {
          bVar4 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
          if (((pSVar30->klass->_2).naturalAligment < bVar4) ||
             ((pSVar30->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_MapScriptBasicMaterial)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pSVar30);
          }
        }
        if ((char)local_15c != '\0') {
          if (pSVar30 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar6 = (__this->fields)._texture;
          if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          ppvVar2 = &pSVar30[1].monitor;
          bVar29 = System_String__op_Inequality(*ppvVar2,(pSVar6->fields)._value,(MethodInfo *)0x0);
          if ((char)bVar29 != '\0') {
            pSVar6 = (__this->fields)._texture;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            *ppvVar2 = (pSVar6->fields)._value;
            uVar54 = (uint)CONCAT71((int7)(uVar44 >> 8),1);
            il2cpp_runtime_glue(ppvVar2);
          }
        }
        if (cVar27 != '\0' || cVar26 != '\0') {
          if ((char)local_19c == '\0') {
            if (pSVar30 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            fVar47 = (float)pSVar30[1].fields._stringLength;
            if ((char)local_1a0 == '\0') goto LAB_0411dfa9;
LAB_0411e06e:
            pSVar41 = (__this->fields)._tilingY;
            if (pSVar41 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if (pSVar30 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
          else {
            pSVar41 = (__this->fields)._tilingX;
            if (pSVar41 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            fVar47 = (pSVar41->fields)._value;
            if ((char)local_1a0 != '\0') goto LAB_0411e06e;
LAB_0411dfa9:
            if (pSVar30 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar41 = (Settings_FloatSetting_o *)(pSVar30 + 1);
          }
          fVar48 = (pSVar41->fields)._value;
          pSVar30[1].fields._stringLength = (int32_t)fVar47;
          *(float *)&pSVar30[1].fields._firstChar = fVar48;
        }
        if (local_1ac != 0) {
          if ((char)local_194 == '\0') {
            if (pSVar30 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            fVar47 = *(float *)&pSVar30[2].klass;
            if ((byte)local_198 == '\0') goto LAB_0411e0be;
LAB_0411e0e3:
            pSVar41 = (__this->fields)._offsetY;
            if (pSVar41 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if (pSVar30 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pfVar35 = &(pSVar41->fields)._value;
          }
          else {
            pSVar41 = (__this->fields)._offsetX;
            if (pSVar41 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            fVar47 = (pSVar41->fields)._value;
            if ((byte)local_198 != '\0') goto LAB_0411e0e3;
LAB_0411e0be:
            if (pSVar30 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pfVar35 = (float *)((long)&pSVar30[2].klass + 4);
          }
          fVar48 = *pfVar35;
          *(float *)&pSVar30[2].klass = fVar47;
          *(float *)((long)&pSVar30[2].klass + 4) = fVar48;
        }
        pIVar22 = TypeInfo_MapScriptReflectiveMaterial;
        if (((char)local_160 != '\0') && (pSVar30 != (System_String_o *)0x0)) {
          bVar4 = (TypeInfo_MapScriptReflectiveMaterial->_2).naturalAligment;
          if ((bVar4 <= (pSVar30->klass->_2).naturalAligment) &&
             (ppIVar14 = (pSVar30->klass->_2).typeHierarchy,
             ppIVar14[(ulong)bVar4 - 1] == TypeInfo_MapScriptReflectiveMaterial)) {
            pSVar12 = (__this->fields)._reflectColor;
            if (pSVar12 == (Settings_ColorSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pUVar15 = (pSVar12->fields)._value;
            pSVar30[2].monitor = pUVar15;
            if (ppIVar14[(ulong)bVar4 - 1] != pIVar22) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pSVar30);
            }
            il2cpp_runtime_glue(&pSVar30[2].monitor,pUVar15);
          }
        }
      }
    }
    else {
      pSVar13 = pSVar30->klass;
      bVar4 = (pSVar13->_2).naturalAligment;
      bVar5 = (TypeInfo_MapScriptLegacyMaterial->_2).naturalAligment;
      if ((bVar4 < bVar5) || ((pSVar13->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_MapScriptLegacyMaterial)) {
        bVar5 = (TypeInfo_MapScriptDefaultTiledMaterial->_2).naturalAligment;
        if ((bVar4 < bVar5) || ((pSVar13->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_MapScriptDefaultTiledMaterial))
        goto LAB_0411de6c;
        if (cVar27 != '\0' || cVar26 != '\0') {
          if ((char)local_19c == '\0') {
            fVar47 = *(float *)&pSVar30[1].monitor;
          }
          else {
            pSVar41 = (__this->fields)._tilingX;
            if (pSVar41 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            fVar47 = (pSVar41->fields)._value;
          }
          if ((char)local_1a0 == '\0') goto LAB_0411e354;
          pSVar41 = (__this->fields)._tilingY;
          if (pSVar41 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          goto LAB_0411e34e;
        }
      }
      else if (cVar27 != '\0' || cVar26 != '\0') {
        if ((char)local_19c == '\0') {
          fVar47 = *(float *)&pSVar30[1].monitor;
        }
        else {
          pSVar41 = (__this->fields)._tilingX;
          if (pSVar41 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          fVar47 = (pSVar41->fields)._value;
        }
        if ((char)local_1a0 == '\0') {
LAB_0411e354:
          pfVar35 = (float *)((long)&pSVar30[1].monitor + 4);
        }
        else {
          pSVar41 = (__this->fields)._tilingY;
          if (pSVar41 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_0411e34e:
          pfVar35 = &(pSVar41->fields)._value;
        }
        fVar48 = *pfVar35;
        *(float *)&pSVar30[1].monitor = fVar47;
        *(float *)((long)&pSVar30[1].monitor + 4) = fVar48;
      }
    }
    pSVar9 = (__this->fields)._mapObjects;
    if (pSVar9 == (System_Collections_Generic_List_MapObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    local_38 = __this_00;
    if ((pSVar9->fields)._size == 1) {
      pSVar30 = __this_00[1].fields.Asset;
      if (pSVar30 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar38 = (__this->fields)._componentNames;
      if (pSVar38 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar54 = uVar54 & 0xff;
      if (*(int *)&pSVar30[1].klass != (pSVar38->fields)._size) {
        uVar54 = 1;
      }
      pSVar36 = (System_Collections_Generic_Dictionary_object__object__o *)
                il2cpp_runtime_glue(TypeInfo_Dictionary_string__List_string);
      System_Collections_Generic_Dictionary<object__object>___ctor(pSVar36,MethodInfo_Dictionary_2_System_String_List_1_System_String);
      local_78 = &__this_00[1].fields.Asset;
      if ((System_Collections_Generic_List_object__o *)*local_78 ==
          (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_1c8,
                 (System_Collections_Generic_List_object__o *)*local_78,MethodInfo_List_1_T__Enumerator_Map_MapScriptComponent__Get);
      local_a8 = local_1b8;
      local_b8 = local_1c8;
      uStack_b0 = uStack_1c0;
      local_128 = pSVar36;
      if (pSVar36 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        __this_05.fields._list._4_4_ = uVar54;
        __this_05.fields._list._0_4_ = in_stack_fffffffffffffe18;
        __this_05.fields._index = uVar55;
        __this_05.fields._version = (int32_t)fVar56;
        __this_05.fields._current = (Il2CppObject *)pUVar57;
        bVar29 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (__this_05,(MethodInfo_3185E20 *)&local_b8);
        __this = pUVar57;
        if ((char)bVar29 != '\0') {
          if (local_a8 != (Map_MapObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_0411ee30:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        while (__this_04.fields._list._4_4_ = uVar54,
              __this_04.fields._list._0_4_ = in_stack_fffffffffffffe18,
              __this_04.fields._index = uVar55, __this_04.fields._version = (int32_t)fVar56,
              __this_04.fields._current = (Il2CppObject *)pUVar57,
              bVar29 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (__this_04,(MethodInfo_3185E20 *)&local_b8), __this = pUVar57,
              (char)bVar29 != '\0') {
          if (local_a8 == (Map_MapObject_o *)0x0) goto LAB_0411ee30;
          System_Collections_Generic_Dictionary<object__object>__Add
                    (pSVar36,*(Il2CppObject **)&local_a8->fields,
                     (Il2CppObject *)(local_a8->fields).GameObject,MethodInfo_Void_Add);
        }
      }
      __this_06.fields._list._4_4_ = uVar54;
      __this_06.fields._list._0_4_ = in_stack_fffffffffffffe18;
      __this_06.fields._index = uVar55;
      __this_06.fields._version = (int32_t)fVar56;
      __this_06.fields._current = (Il2CppObject *)__this;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_06,(MethodInfo_3185E10 *)&local_b8);
      pSVar37 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_MapScriptComponent);
      System_Collections_Generic_List<object>___ctor(pSVar37,MethodInfo_List_1_Map_MapScriptComponent);
      pSVar38 = (__this->fields)._componentNames;
      if (pSVar38 == (System_Collections_Generic_List_string__o *)0x0) {
LAB_0411f2eb:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar42 = 0;
      pUVar57 = __this;
      local_118 = pSVar37;
      if (0 < (pSVar38->fields)._size) {
LAB_0411e588:
        pSVar38 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)pSVar38,MethodInfo_List_1_System_String);
        __this_01 = (__this->fields)._components;
        if (__this_01 == (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0)
        {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this_16 = (UI_MapEditorInspectPanel_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_01,iVar42,
                               MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
        __this_17 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string)
        ;
        System_Collections_Generic_HashSet<object>___ctor(__this_17,MethodInfo_HashSet_1_System_String);
        if (__this_16 == (UI_MapEditorInspectPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this_18 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                              ((System_Collections_Generic_Dictionary_object__object__o *)__this_16,
                               MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
        if (__this_18 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
        {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *
                   )&local_1c8,__this_18,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
        local_48 = local_1b8;
        local_58 = local_1c8;
        uStack_50 = uStack_1c0;
LAB_0411e66b:
        do {
          __this_07.fields._dictionary._4_4_ = uVar54;
          __this_07.fields._dictionary._0_4_ = in_stack_fffffffffffffe18;
          __this_07.fields._index = uVar55;
          __this_07.fields._version = (int32_t)fVar56;
          __this_07.fields._currentKey = (Il2CppObject *)pUVar57;
          bVar29 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                             (__this_07,(MethodInfo_31D0850 *)&local_58);
          pMVar24 = local_48;
          if ((char)bVar29 == '\0') goto LAB_0411e830;
          if (__this_17 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_HashSet<object>__Add
                    (__this_17,(Il2CppObject *)local_48,MethodInfo_Boolean_Add);
          bVar29 = System_String__op_Equality
                             ((System_String_o *)pMVar24,"Description",(MethodInfo *)0x0);
          if ((char)bVar29 == '\0') {
            if (pMVar24 == (Map_MapObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar29 = System_String__EndsWith
                               ((System_String_o *)pMVar24,"Tooltip",(MethodInfo *)0x0);
            if (((char)bVar29 != '\0') &&
               (pIVar31 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)
                                     __this_16,(Il2CppObject *)pMVar24,MethodInfo_BaseSetting_get_Item),
               pIVar31 != (Il2CppObject *)0x0)) {
              bVar4 = (TypeInfo_StringSetting->_2).naturalAligment;
              if ((bVar4 <= (pIVar31->klass->_2).naturalAligment) &&
                 ((pIVar31->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_StringSetting))
              goto LAB_0411e66b;
            }
            bVar29 = System_String__EndsWith
                               ((System_String_o *)pMVar24,"Dropbox",(MethodInfo *)0x0);
            if (((char)bVar29 != '\0') &&
               (pIVar31 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)
                                     __this_16,(Il2CppObject *)pMVar24,MethodInfo_BaseSetting_get_Item),
               pIVar31 != (Il2CppObject *)0x0)) {
              bVar4 = (TypeInfo_StringSetting->_2).naturalAligment;
              if ((bVar4 <= (pIVar31->klass->_2).naturalAligment) &&
                 ((pIVar31->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_StringSetting))
              goto LAB_0411e66b;
            }
            __this_22 = __this_16;
            pIVar31 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)
                                 __this_16,(Il2CppObject *)pMVar24,MethodInfo_BaseSetting_get_Item);
            pSVar30 = UI_MapEditorInspectPanel__SerializeSetting
                                (__this_22,(Settings_BaseSetting_o *)pIVar31,method_00);
            pSVar30 = System_String__Concat
                                ((System_String_o *)pMVar24,":",pSVar30,(MethodInfo *)0x0);
            lVar23 = MethodInfo_Void_Add;
            if (pSVar38 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(pSVar38->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar39 = (pSVar38->fields)._items;
            if (pSVar39 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar45 = (pSVar38->fields)._size;
            if (uVar45 < (uint)pSVar39->max_length) {
              (pSVar38->fields)._size = uVar45 + 1;
              pSVar39->m_Items[(int)uVar45] = pSVar30;
              il2cpp_runtime_glue(pSVar39->m_Items + (int)uVar45,pSVar30);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar38,
                         (Il2CppObject *)pSVar30,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70)
                        );
            }
          }
        } while( true );
      }
LAB_0411ed28:
      *local_78 = (System_String_o *)pSVar37;
      il2cpp_runtime_glue(local_78,pSVar37);
    }
    pUVar10 = (local_1a8->fields).GameObject;
    pSVar30 = (local_38->fields).Asset;
    material = (MethodInfo **)local_38[1].fields.Type;
    bVar4 = *(undefined1 *)((long)&(local_38->fields).Active + 2);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Map_MapLoader__SetMaterial
              (pUVar10,pSVar30,(Map_MapScriptBaseMaterial_o *)material,(uint)bVar4,1,
               (MethodInfo *)0x0);
  }
  __this_12.fields._list._4_4_ = uVar54;
  __this_12.fields._list._0_4_ = in_stack_fffffffffffffe18;
  __this_12.fields._index = uVar55;
  __this_12.fields._version = (int32_t)fVar56;
  __this_12.fields._current = (Il2CppObject *)pUVar57;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_12,(MethodInfo_3185E10 *)&local_98);
  pSVar37 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_BaseCommand);
  pMVar40 = MethodInfo_List_1_MapEditor_BaseCommand;
  System_Collections_Generic_List<object>___ctor(pSVar37,(MethodInfo_35A69E0 *)MethodInfo_List_1_MapEditor_BaseCommand);
  pSVar9 = local_60;
  if (local_60 == (System_Collections_Generic_List_MapObject__o *)0x0) goto LAB_0411f2c5;
  mapObjects = local_68;
  if (0 < (local_60->fields)._size) {
    pMVar40 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_TransformPositionCommand);
    MapEditor_TransformPositionCommand___ctor
              ((MapEditor_TransformPositionCommand_o *)pMVar40,pSVar9,(MethodInfo *)0x0);
    lVar23 = MethodInfo_Void_Add;
    if (pSVar37 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0411f2c5;
    piVar1 = &(pSVar37->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar17 = (pSVar37->fields)._items;
    if (pSVar17 == (System_Object_array *)0x0) goto LAB_0411f2c5;
    uVar45 = (pSVar37->fields)._size;
    if (uVar45 < (uint)pSVar17->max_length) {
      (pSVar37->fields)._size = uVar45 + 1;
      pSVar17->m_Items[(int)uVar45] = (Il2CppObject *)pMVar40;
      il2cpp_runtime_glue(pSVar17->m_Items + (int)uVar45);
      mapObjects = local_68;
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar37,(Il2CppObject *)pMVar40,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
      mapObjects = local_68;
    }
  }
  local_68 = mapObjects;
  if (mapObjects == (System_Collections_Generic_List_MapObject__o *)0x0) goto LAB_0411f2c5;
  if (0 < (mapObjects->fields)._size) {
    pMVar40 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_TransformRotationCommand);
    MapEditor_TransformRotationCommand___ctor
              ((MapEditor_TransformRotationCommand_o *)pMVar40,mapObjects,(MethodInfo *)0x0);
    lVar23 = MethodInfo_Void_Add;
    if (pSVar37 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0411f2c5;
    piVar1 = &(pSVar37->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar17 = (pSVar37->fields)._items;
    if (pSVar17 == (System_Object_array *)0x0) goto LAB_0411f2c5;
    uVar45 = (pSVar37->fields)._size;
    if (uVar45 < (uint)pSVar17->max_length) {
      (pSVar37->fields)._size = uVar45 + 1;
      pSVar17->m_Items[(int)uVar45] = (Il2CppObject *)pMVar40;
      il2cpp_runtime_glue(pSVar17->m_Items + (int)uVar45);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar37,(Il2CppObject *)pMVar40,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (mapObjects_00 == (System_Collections_Generic_List_MapObject__o *)0x0) goto LAB_0411f2c5;
  if ((mapObjects_00->fields)._size < 1) {
    if (pSVar37 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0411f2c5;
    iVar42 = (pSVar37->fields)._size;
joined_r0x0411f0c6:
    if (iVar42 != 1) goto LAB_0411f176;
LAB_0411f0cc:
    pGVar18 = (__this->fields)._gameManager;
    pMVar40 = (MethodInfo *)
              System_Collections_Generic_List<object>__get_Item(pSVar37,0,MethodInfo_BaseCommand_get_Item);
joined_r0x0411f0ea:
    if (pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) goto LAB_0411f2c5;
    GameManagers_MapEditorGameManager__NewCommand
              (pGVar18,(MapEditor_BaseCommand_o *)pMVar40,0,(MethodInfo *)0x0);
  }
  else {
    pMVar40 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_TransformScaleCommand);
    MapEditor_TransformScaleCommand___ctor
              ((MapEditor_TransformScaleCommand_o *)pMVar40,mapObjects_00,(MethodInfo *)0x0);
    lVar23 = MethodInfo_Void_Add;
    if (pSVar37 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0411f2c5;
    piVar1 = &(pSVar37->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar17 = (pSVar37->fields)._items;
    if (pSVar17 == (System_Object_array *)0x0) goto LAB_0411f2c5;
    uVar45 = (pSVar37->fields)._size;
    if ((uint)pSVar17->max_length <= uVar45) {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar37,(Il2CppObject *)pMVar40,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
      iVar42 = (pSVar37->fields)._size;
      goto joined_r0x0411f0c6;
    }
    (pSVar37->fields)._size = uVar45 + 1;
    pSVar17->m_Items[(int)uVar45] = (Il2CppObject *)pMVar40;
    il2cpp_runtime_glue(pSVar17->m_Items + (int)uVar45);
    iVar42 = (pSVar37->fields)._size;
    if (iVar42 == 1) goto LAB_0411f0cc;
LAB_0411f176:
    if (1 < iVar42) {
      pGVar18 = (__this->fields)._gameManager;
      pMVar40 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_CompositeCommand);
      MapEditor_CompositeCommand___ctor
                ((MapEditor_CompositeCommand_o *)pMVar40,
                 (System_Collections_Generic_List_BaseCommand__o *)pSVar37,(MethodInfo *)0x0);
      goto joined_r0x0411f0ea;
    }
  }
  UI_MapEditorInspectPanel__CaptureSyncedValues(__this,pMVar40);
  pGVar18 = (__this->fields)._gameManager;
  if (pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) {
LAB_0411f2c5:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pMVar40 = (MethodInfo *)0x0;
  GameManagers_MapEditorGameManager__SyncGizmos(pGVar18,(MethodInfo *)0x0);
  if ((uVar54 & 1) != 0) {
    pUVar19 = (__this->fields)._menu;
    if (pUVar19 == (UI_MapEditorMenu_o *)0x0) goto LAB_0411f2c5;
    pMVar40 = (MethodInfo *)(__this->fields)._mapObjects;
    UI_MapEditorMenu__ShowInspector
              (pUVar19,(System_Collections_Generic_List_MapObject__o *)pMVar40,method_01);
  }
  if ((local_16c & 1) != 0) {
    pUVar19 = (__this->fields)._menu;
    if ((pUVar19 == (UI_MapEditorMenu_o *)0x0) ||
       (__this_02 = (pUVar19->fields).HierarchyPanel,
       __this_02 == (UI_MapEditorHierarchyPanel_o *)0x0)) goto LAB_0411f2c5;
    UI_MapEditorHierarchyPanel__Sync(__this_02,pMVar40);
  }
  return;
LAB_0411e830:
  __this_08.fields._dictionary._4_4_ = uVar54;
  __this_08.fields._dictionary._0_4_ = in_stack_fffffffffffffe18;
  __this_08.fields._index = uVar55;
  __this_08.fields._version = (int32_t)fVar56;
  __this_08.fields._currentKey = (Il2CppObject *)pUVar57;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
            (__this_08,(MethodInfo_31D0840 *)&local_58);
  pSVar36 = local_128;
  pSVar16 = (pUVar57->fields)._componentNames;
  if (pSVar16 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar31 = System_Collections_Generic_List<object>__get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar16,iVar42,MethodInfo_String_get_Item);
  if (pSVar36 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar29 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                     (pSVar36,pIVar31,MethodInfo_Boolean_ContainsKey);
  __this = pUVar57;
  if ((char)bVar29 != '\0') {
    pSVar16 = (pUVar57->fields)._componentNames;
    if (pSVar16 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar31 = System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar16,iVar42,MethodInfo_String_get_Item);
    pSVar37 = (System_Collections_Generic_List_object__o *)
              System_Collections_Generic_Dictionary<object__object>__get_Item
                        (pSVar36,pIVar31,MethodInfo_List_1_System_String__get_Item);
    if (pSVar37 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_1c8,pSVar37,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    local_c8 = local_1b8;
    local_d8 = local_1c8;
    uStack_d0 = uStack_1c0;
    if (__this_17 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      __this_09.fields._list._4_4_ = uVar54;
      __this_09.fields._list._0_4_ = in_stack_fffffffffffffe18;
      __this_09.fields._index = uVar55;
      __this_09.fields._version = (int32_t)fVar56;
      __this_09.fields._current = (Il2CppObject *)pUVar57;
      bVar29 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                         (__this_09,(MethodInfo_3185E20 *)&local_d8);
      __this = pUVar57;
      if ((char)bVar29 != '\0') {
        if (local_c8 != (Map_MapObject_o *)0x0) {
          pSVar39 = System_String__Split((System_String_o *)local_c8,0x3a,0,(MethodInfo *)0x0);
          if (pSVar39 != (System_String_array *)0x0) {
            if ((int)pSVar39->max_length != 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_0411ebc4:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_0411ebba:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_0411ebb0:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while (__this_10.fields._list._4_4_ = uVar54,
            __this_10.fields._list._0_4_ = in_stack_fffffffffffffe18,
            __this_10.fields._index = uVar55, __this_10.fields._version = (int32_t)fVar56,
            __this_10.fields._current = (Il2CppObject *)pUVar57,
            bVar29 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (__this_10,(MethodInfo_3185E20 *)&local_d8), pMVar24 = local_c8,
            __this = pUVar57, (char)bVar29 != '\0') {
        if (local_c8 == (Map_MapObject_o *)0x0) goto LAB_0411ebb0;
        pSVar39 = System_String__Split((System_String_o *)local_c8,0x3a,0,(MethodInfo *)0x0);
        if (pSVar39 == (System_String_array *)0x0) goto LAB_0411ebba;
        if ((int)pSVar39->max_length == 0) goto LAB_0411ebc4;
        bVar29 = System_Collections_Generic_HashSet<object>__Contains
                           (__this_17,(Il2CppObject *)pSVar39->m_Items[0],MethodInfo_Boolean_Contains);
        lVar23 = MethodInfo_Void_Add;
        if ((char)bVar29 == '\0') {
          if (pSVar38 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          piVar1 = &(pSVar38->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar39 = (pSVar38->fields)._items;
          if (pSVar39 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar45 = (pSVar38->fields)._size;
          if (uVar45 < (uint)pSVar39->max_length) {
            (pSVar38->fields)._size = uVar45 + 1;
            pSVar39->m_Items[(int)uVar45] = (System_String_o *)pMVar24;
            il2cpp_runtime_glue(pSVar39->m_Items + (int)uVar45,pMVar24);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar38,(Il2CppObject *)pMVar24,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    __this_11.fields._list._4_4_ = uVar54;
    __this_11.fields._list._0_4_ = in_stack_fffffffffffffe18;
    __this_11.fields._index = uVar55;
    __this_11.fields._version = (int32_t)fVar56;
    __this_11.fields._current = (Il2CppObject *)__this;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_11,(MethodInfo_3185E10 *)&local_d8);
  }
  __this_19 = (Map_MapScriptComponent_o *)il2cpp_runtime_glue(TypeInfo_MapScriptComponent);
  Map_MapScriptComponent___ctor(__this_19,(MethodInfo *)0x0);
  mapObjects_00 = local_168;
  pSVar16 = (__this->fields)._componentNames;
  if (pSVar16 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar57 = __this;
  pSVar30 = (System_String_o *)
            System_Collections_Generic_List<object>__get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar16,iVar42,MethodInfo_String_get_Item);
  if (__this_19 == (Map_MapScriptComponent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (__this_19->fields).ComponentName = pSVar30;
  il2cpp_runtime_glue(&__this_19->fields,pSVar30);
  (__this_19->fields).Parameters = pSVar38;
  il2cpp_runtime_glue(&(__this_19->fields).Parameters,pSVar38);
  pSVar37 = local_118;
  lVar23 = MethodInfo_Void_Add;
  if (local_118 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  piVar1 = &(local_118->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar17 = (local_118->fields)._items;
  if (pSVar17 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar45 = (local_118->fields)._size;
  if (uVar45 < (uint)pSVar17->max_length) {
    (local_118->fields)._size = uVar45 + 1;
    pSVar17->m_Items[(int)uVar45] = (Il2CppObject *)__this_19;
    il2cpp_runtime_glue(pSVar17->m_Items + (int)uVar45,__this_19);
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              (local_118,(Il2CppObject *)__this_19,
               *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
  }
  iVar42 = iVar42 + 1;
  pSVar38 = (__this->fields)._componentNames;
  if (pSVar38 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0411f2eb;
  if ((pSVar38->fields)._size <= iVar42) goto LAB_0411ed28;
  goto LAB_0411e588;
}


// UI.MapEditorInspectPanel$$SerializeSetting
// il2cpp: System_String_o* UI_MapEditorInspectPanel__SerializeSetting (UI_MapEditorInspectPanel_o* __this, Settings_BaseSetting_o* setting, const MethodInfo* method);
// 0x411fdb0

System_String_o *
UI_MapEditorInspectPanel__SerializeSetting
          (UI_MapEditorInspectPanel_o *__this,Settings_BaseSetting_o *setting,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Settings_BaseSetting_c *pSVar3;
  void *pvVar4;
  int iVar5;
  undefined8 *puVar6;
  System_String_array *value;
  System_String_o *pSVar7;
  System_String_o **ppSVar8;
  float in_XMM0_Da;
  float __this_00;
  float fVar9;
  undefined4 local_28;
  undefined1 local_24 [8];
  undefined1 auStack_1c [12];
  
  if (DAT_057048ea == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_ColorSetting);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Vector3Setting);
    il2cpp_init_method_metadata(&"false");
    il2cpp_init_method_metadata(&"/");
    in_XMM0_Da = (float)il2cpp_init_method_metadata(&"true");
    DAT_057048ea = '\x01';
  }
  local_24._0_4_ = 0;
  local_28 = 0;
  auStack_1c._4_4_ = 0;
  stack0xffffffffffffffe0 = 0;
  if (setting != (Settings_BaseSetting_o *)0x0) {
    pSVar3 = setting->klass;
    bVar1 = (pSVar3->_2).naturalAligment;
    bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_FloatSetting)) {
      local_24._0_4_ = *(undefined4 *)((long)&setting[1].klass + 4);
      pSVar7 = System_Single__ToString(in_XMM0_Da,(MethodInfo *)local_24);
      return pSVar7;
    }
    bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_IntSetting)) {
      local_28 = *(undefined4 *)((long)&setting[1].klass + 4);
      pSVar7 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
      return pSVar7;
    }
    bVar2 = (TypeInfo_BoolSetting->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BoolSetting)) {
      if (*(char *)((long)&setting[1].klass + 1) == '\0') {
        puVar6 = &"false";
      }
      else {
        puVar6 = &"true";
      }
      goto LAB_0411ffc5;
    }
    bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_StringSetting)) {
      if (setting[1].monitor != (System_String_o *)0x0) {
        pSVar7 = System_String__Replace(setting[1].monitor,0x2c,0x20,(MethodInfo *)0x0);
        if (pSVar7 != (System_String_o *)0x0) {
          pSVar7 = System_String__Replace(pSVar7,0x3a,0x20,(MethodInfo *)0x0);
          if (pSVar7 != (System_String_o *)0x0) {
            pSVar7 = System_String__Replace(pSVar7,0x7c,0x20,(MethodInfo *)0x0);
            return pSVar7;
          }
        }
      }
LAB_04120202:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar2 = (TypeInfo_ColorSetting->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_ColorSetting)) {
      pvVar4 = setting[1].monitor;
      value = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string);
      if (pvVar4 != (void *)0x0) {
        iVar5 = (int)pvVar4;
        pSVar7 = System_Int32__ToString(iVar5 + 0x10,(MethodInfo *)0x0);
        if (value != (System_String_array *)0x0) {
          if ((int)value->max_length != 0) {
            value->m_Items[0] = pSVar7;
            il2cpp_runtime_glue(value->m_Items);
            pSVar7 = System_Int32__ToString(iVar5 + 0x14,(MethodInfo *)0x0);
            if (1 < (uint)value->max_length) {
              value->m_Items[1] = pSVar7;
              il2cpp_runtime_glue(value->m_Items + 1);
              pSVar7 = System_Int32__ToString(iVar5 + 0x18,(MethodInfo *)0x0);
              if (2 < (uint)value->max_length) {
                value->m_Items[2] = pSVar7;
                il2cpp_runtime_glue(value->m_Items + 2);
                pSVar7 = System_Int32__ToString(iVar5 + 0x1c,(MethodInfo *)0x0);
                if (3 < (uint)value->max_length) {
                  ppSVar8 = value->m_Items + 3;
                  value->m_Items[3] = pSVar7;
                  goto LAB_041201d2;
                }
              }
            }
          }
          goto LAB_04120207;
        }
      }
      goto LAB_04120202;
    }
    bVar2 = (TypeInfo_Vector3Setting->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Vector3Setting)) {
      unique0x00023e00 = *(undefined8 *)((long)&setting[1].monitor + 4);
      auStack_1c._4_4_ = *(undefined4 *)((long)&setting[2].klass + 4);
      value = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,3);
      pSVar7 = System_Single__ToString(__this_00,(MethodInfo *)(local_24 + 4));
      if (value != (System_String_array *)0x0) {
        if ((int)value->max_length != 0) {
          value->m_Items[0] = pSVar7;
          fVar9 = (float)il2cpp_runtime_glue(value->m_Items,pSVar7);
          pSVar7 = System_Single__ToString(fVar9,(MethodInfo *)auStack_1c);
          if (1 < (uint)value->max_length) {
            value->m_Items[1] = pSVar7;
            fVar9 = (float)il2cpp_runtime_glue(value->m_Items + 1,pSVar7);
            pSVar7 = System_Single__ToString(fVar9,(MethodInfo *)(auStack_1c + 4));
            if (2 < (uint)value->max_length) {
              ppSVar8 = value->m_Items + 2;
              value->m_Items[2] = pSVar7;
LAB_041201d2:
              il2cpp_runtime_glue(ppSVar8,pSVar7);
              pSVar7 = System_String__Join("/",value,(MethodInfo *)0x0);
              return pSVar7;
            }
          }
        }
LAB_04120207:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      goto LAB_04120202;
    }
  }
  puVar6 = *(undefined8 **)(DAT_057110b0 + 0xb8);
LAB_0411ffc5:
  return (System_String_o *)*puVar6;
}


// UI.MapEditorInspectPanel$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___ctor (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120450

void UI_MapEditorInspectPanel___ctor(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapObject__o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Collections_Generic_List_GameObject__o *__this_03;
  Settings_IntSetting_o *__this_04;
  Settings_StringSetting_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_ColorSetting_o *pSVar4;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *__this_05;
  System_Collections_Generic_List_string__o *__this_06;
  
  if (DAT_057048eb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_ColorSetting);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Dictionary_2_System_String_Settings_BaseS);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_Dictionary_string__BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_List_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&"Misc/None");
    DAT_057048eb = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_glue(TypeInfo_List_MapObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Map_MapObject);
  (__this->fields)._mapObjects = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._mapObjects,__this_00);
  __this_01 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this_01,MethodInfo_HashSet_1_System_String);
  (__this->fields)._mixedFields = (System_Collections_Generic_HashSet_string__o *)__this_01;
  il2cpp_runtime_glue(&(__this->fields)._mixedFields,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_String);
  (__this->fields)._syncedSerialized =
       (System_Collections_Generic_Dictionary_string__string__o *)__this_02;
  il2cpp_runtime_glue(&(__this->fields)._syncedSerialized,__this_02);
  __this_03 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._mixedNumericElements = __this_03;
  il2cpp_runtime_glue(&(__this->fields)._mixedNumericElements);
  __this_04 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(__this_04,(MethodInfo *)0x0);
  (__this->fields)._parent = __this_04;
  il2cpp_runtime_glue(&(__this->fields)._parent);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._name = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._name);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,(MethodInfo *)0x0);
  (__this->fields)._active = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._active);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,(MethodInfo *)0x0);
  (__this->fields)._static = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._static);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,(MethodInfo *)0x0);
  (__this->fields)._networked = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._networked);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,(MethodInfo *)0x0);
  (__this->fields)._visible = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._visible);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._positionX = pSVar3;
  il2cpp_runtime_glue(&(__this->fields)._positionX);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._positionY = pSVar3;
  il2cpp_runtime_glue(&(__this->fields)._positionY);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._positionZ = pSVar3;
  il2cpp_runtime_glue(&(__this->fields)._positionZ);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._rotationX = pSVar3;
  il2cpp_runtime_glue(&(__this->fields)._rotationX);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._rotationY = pSVar3;
  il2cpp_runtime_glue(&(__this->fields)._rotationY);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._rotationZ = pSVar3;
  il2cpp_runtime_glue(&(__this->fields)._rotationZ);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._scaleX = pSVar3;
  il2cpp_runtime_glue(&(__this->fields)._scaleX);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._scaleY = pSVar3;
  il2cpp_runtime_glue(&(__this->fields)._scaleY);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._scaleZ = pSVar3;
  il2cpp_runtime_glue(&(__this->fields)._scaleZ);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._collideMode = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._collideMode);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._collideWith = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._collideWith);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._physicsMaterial = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._physicsMaterial);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._shader = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._shader);
  pSVar4 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor(pSVar4,(MethodInfo *)0x0);
  (__this->fields)._color = pSVar4;
  il2cpp_runtime_glue(&(__this->fields)._color);
  pSVar4 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor(pSVar4,(MethodInfo *)0x0);
  (__this->fields)._reflectColor = pSVar4;
  il2cpp_runtime_glue(&(__this->fields)._reflectColor,pSVar4);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar1,"Misc/None",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._texture = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._texture);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,1.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._tilingX = pSVar3;
  il2cpp_runtime_glue(&(__this->fields)._tilingX);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,1.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._tilingY = pSVar3;
  il2cpp_runtime_glue(&(__this->fields)._tilingY);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._offsetX = pSVar3;
  il2cpp_runtime_glue(&(__this->fields)._offsetX);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._offsetY = pSVar3;
  il2cpp_runtime_glue(&(__this->fields)._offsetY,pSVar3);
  __this_05 = (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)
              il2cpp_runtime_glue(TypeInfo_List_Dictionary_string__BaseSetting);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_Dictionary_2_System_String_Settings_BaseS);
  (__this->fields)._components = __this_05;
  il2cpp_runtime_glue(&(__this->fields)._components,__this_05);
  __this_06 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_06,MethodInfo_List_1_System_String);
  (__this->fields)._componentNames = __this_06;
  il2cpp_runtime_glue(&(__this->fields)._componentNames);
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_25
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_25 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120b90

void UI_MapEditorInspectPanel__<Show>b__57_25(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *value;
  
  pMVar1 = (__this->fields)._mapObject;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    value = (System_String_o *)(*(pMVar2->klass->vtable)._8_Serialize.methodPtr)();
    UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel$$<Show>b__57_26
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_26 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120bd0

void UI_MapEditorInspectPanel__<Show>b__57_26(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *value;
  
  pMVar1 = (__this->fields)._mapObject;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    value = System_Int32__ToString((int)pMVar2 + 0x20,(MethodInfo *)0x0);
    UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel$$<Show>b__57_27
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_27 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120c10

void UI_MapEditorInspectPanel__<Show>b__57_27(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *value;
  
  pMVar1 = (__this->fields)._mapObject;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    value = (System_String_o *)(*(pMVar2->klass->vtable)._8_Serialize.methodPtr)();
    UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInspectPanel$$<Show>b__57_0
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_0 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120c50

void UI_MapEditorInspectPanel__<Show>b__57_0(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_1
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_1 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120c60

void UI_MapEditorInspectPanel__<Show>b__57_1(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_2
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_2 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120c70

void UI_MapEditorInspectPanel__<Show>b__57_2(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_3
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_3 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120c80

void UI_MapEditorInspectPanel__<Show>b__57_3(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_4
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_4 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120c90

void UI_MapEditorInspectPanel__<Show>b__57_4(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_5
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_5 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120ca0

void UI_MapEditorInspectPanel__<Show>b__57_5(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_6
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_6 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120cb0

void UI_MapEditorInspectPanel__<Show>b__57_6(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_7
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_7 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120cc0

void UI_MapEditorInspectPanel__<Show>b__57_7(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_8
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_8 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120cd0

void UI_MapEditorInspectPanel__<Show>b__57_8(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_9
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_9 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120ce0

void UI_MapEditorInspectPanel__<Show>b__57_9(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_10
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_10 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120cf0

void UI_MapEditorInspectPanel__<Show>b__57_10(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_11
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_11 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120d00

void UI_MapEditorInspectPanel__<Show>b__57_11(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_12
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_12 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120d10

void UI_MapEditorInspectPanel__<Show>b__57_12(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_13
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_13 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120d20

void UI_MapEditorInspectPanel__<Show>b__57_13(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_14
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_14 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120d30

void UI_MapEditorInspectPanel__<Show>b__57_14(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_15
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_15 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120d40

void UI_MapEditorInspectPanel__<Show>b__57_15(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_16
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_16 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120d50

void UI_MapEditorInspectPanel__<Show>b__57_16(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_17
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_17 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120d60

void UI_MapEditorInspectPanel__<Show>b__57_17(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_18
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_18 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120d70

void UI_MapEditorInspectPanel__<Show>b__57_18(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_19
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_19 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120d80

void UI_MapEditorInspectPanel__<Show>b__57_19(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_20
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_20 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120d90

void UI_MapEditorInspectPanel__<Show>b__57_20(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_21
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_21 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120da0

void UI_MapEditorInspectPanel__<Show>b__57_21(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_22
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_22 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120db0

void UI_MapEditorInspectPanel__<Show>b__57_22(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_23
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_23 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120dc0

void UI_MapEditorInspectPanel__<Show>b__57_23(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_28
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_28 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120dd0

void UI_MapEditorInspectPanel__<Show>b__57_28(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_29
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_29 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120de0

void UI_MapEditorInspectPanel__<Show>b__57_29(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057048ec == '\0') {
    il2cpp_init_method_metadata(&"Texture");
    DAT_057048ec = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorInspectPanel__OnButtonClick(__this,"Texture",in_RDX);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_30
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_30 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120e20

void UI_MapEditorInspectPanel__<Show>b__57_30(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_31
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_31 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120e30

void UI_MapEditorInspectPanel__<Show>b__57_31(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_32
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_32 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120e40

void UI_MapEditorInspectPanel__<Show>b__57_32(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_33
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_33 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120e50

void UI_MapEditorInspectPanel__<Show>b__57_33(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_35
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_35 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120e60

void UI_MapEditorInspectPanel__<Show>b__57_35(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_36
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_36 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120e70

void UI_MapEditorInspectPanel__<Show>b__57_36(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_37
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_37 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120e80

void UI_MapEditorInspectPanel__<Show>b__57_37(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_38
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_38 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120e90

void UI_MapEditorInspectPanel__<Show>b__57_38(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_39
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_39 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120ea0

void UI_MapEditorInspectPanel__<Show>b__57_39(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__57_24
// il2cpp: void UI_MapEditorInspectPanel___Show_b__57_24 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120eb0

void UI_MapEditorInspectPanel__<Show>b__57_24(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057048ed == '\0') {
    il2cpp_init_method_metadata(&"AddComponent");
    DAT_057048ed = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorInspectPanel__OnButtonClick(__this,"AddComponent",in_RDX);
  return;
}


// UI.MapEditorInspectPanel$$<OnButtonClick>b__59_0
// il2cpp: void UI_MapEditorInspectPanel___OnButtonClick_b__59_0 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x4120ef0

void UI_MapEditorInspectPanel__<OnButtonClick>b__59_0
               (UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnAddComponent(__this,method);
  return;
}


