// Type: UI.MapEditorHierarchyPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/MapEditorHierarchyPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorHierarchyPanel.cs
// --------------------------------

// UI.MapEditorHierarchyPanel.RowData$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel_RowData___ctor (UI_MapEditorHierarchyPanel_RowData_o __this, int32_t id, int32_t depth, const MethodInfo* method);
// 0x180acca30

void
UI_MapEditorHierarchyPanel_RowData___ctor(UI_MapEditorHierarchyPanel_RowData_o __this, int32_t id, int32_t depth, MethodInfo* method)

{
  (__this->fields).tileX = tileX;
  (__this->fields).tileZ = tileZ;
  return;
}


// UI.MapEditorHierarchyPanel.<>c$$.cctor
// il2cpp: void UI_MapEditorHierarchyPanel___c___cctor (const MethodInfo* method);
// 0x1822d11b0

void UI_MapEditorHierarchyPanel___c___cctor(MethodInfo *method)

{
  UI_MapEditorHierarchyPanel___c_o *__this;
  
  if (Il2CppMethodInitialized_184347541 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorHierarchyPanel_c);
    Il2CppMethodInitialized_184347541 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9,__this);
  return;
}


// UI.MapEditorHierarchyPanel.<>c$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel___c___ctor (UI_MapEditorHierarchyPanel___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorHierarchyPanel___c___ctor(UI_MapEditorHierarchyPanel___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c$$<BuildTreeGraph>b__84_0
// il2cpp: int32_t UI_MapEditorHierarchyPanel___c___BuildTreeGraph_b__84_0 (UI_MapEditorHierarchyPanel___c_o* __this, int32_t id, const MethodInfo* method);
// 0x1822cf740

int32_t UI_MapEditorHierarchyPanel___c___BuildTreeGraph_b__84_0
                  (UI_MapEditorHierarchyPanel___c_o *__this,int32_t id,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184347542 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347542 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
    iVar1 = System_Collections_Generic_List_int___IndexOf
                      (__this_00,id,
                       (MethodInfo_91F570 *)MethodInfo_System_Collections_Generic_List_int_IndexOf);
    if (iVar1 < 0) {
      iVar1 = 0x7fffffff;
    }
    return iVar1;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c$$<BuildTreeGraph>b__84_1
// il2cpp: int32_t UI_MapEditorHierarchyPanel___c___BuildTreeGraph_b__84_1 (UI_MapEditorHierarchyPanel___c_o* __this, int32_t id, const MethodInfo* method);
// 0x1822cf7d0

int32_t UI_MapEditorHierarchyPanel___c___BuildTreeGraph_b__84_1
                  (UI_MapEditorHierarchyPanel___c_o *__this,int32_t id,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184347543 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347543 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
    iVar1 = System_Collections_Generic_List_int___IndexOf
                      (__this_00,id,
                       (MethodInfo_91F570 *)MethodInfo_System_Collections_Generic_List_int_IndexOf);
    if (iVar1 < 0) {
      iVar1 = 0x7fffffff;
    }
    return iVar1;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c$$<FocusSelectionFromScene>b__120_1
// il2cpp: int32_t UI_MapEditorHierarchyPanel___c___FocusSelectionFromScene_b__120_1 (UI_MapEditorHierarchyPanel___c_o* __this, Map_MapObject_o* x, const MethodInfo* method);
// 0x181e7b690

int32_t
UI_MapEditorHierarchyPanel___c___FocusSelectionFromScene_b__120_1(UI_MapEditorHierarchyPanel___c_o* __this, Map_MapObject_o* x, MethodInfo* method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (o->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar1->fields).Id;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c$$<FocusSelectionFromScene>b__120_2
// il2cpp: int32_t UI_MapEditorHierarchyPanel___c___FocusSelectionFromScene_b__120_2 (UI_MapEditorHierarchyPanel___c_o* __this, int32_t x, const MethodInfo* method);
// 0x180c8a8c0

int32_t
UI_MapEditorHierarchyPanel___c___FocusSelectionFromScene_b__120_2(UI_MapEditorHierarchyPanel___c_o* __this, int32_t x, MethodInfo* method)

{
  return value;
}


// UI.MapEditorHierarchyPanel.<>c$$<OnItemBeginDrag>b__127_1
// il2cpp: int32_t UI_MapEditorHierarchyPanel___c___OnItemBeginDrag_b__127_1 (UI_MapEditorHierarchyPanel___c_o* __this, Map_MapObject_o* x, const MethodInfo* method);
// 0x181e7b690

int32_t
UI_MapEditorHierarchyPanel___c___OnItemBeginDrag_b__127_1(UI_MapEditorHierarchyPanel___c_o* __this, Map_MapObject_o* x, MethodInfo* method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (o->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar1->fields).Id;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass106_0$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass106_0___ctor (UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorHierarchyPanel___c__DisplayClass106_0___ctor(UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass106_0$$<OnItemRightClick>b__0
// il2cpp: bool UI_MapEditorHierarchyPanel___c__DisplayClass106_0___OnItemRightClick_b__0 (UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x1822d00c0

bool
UI_MapEditorHierarchyPanel___c__DisplayClass106_0___OnItemRightClick_b__0(UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o* __this, Map_MapObject_o* obj, MethodInfo* method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((x != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (x->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar1->fields).Id == (__this->fields).id;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass106_0$$<OnItemRightClick>b__1
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass106_0___OnItemRightClick_b__1 (UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o* __this, const MethodInfo* method);
// 0x1822d00f0

void UI_MapEditorHierarchyPanel___c__DisplayClass106_0___OnItemRightClick_b__1
               (UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 != (UI_MapEditorHierarchyPanel_o *)0x0) &&
     (__this_00 = (pUVar1->fields)._gameManager, __this_00 != (GameManagers_MapEditorGameManager_o *)0x0)) {
    GameManagers_MapEditorGameManager__Copy(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass106_0$$<OnItemRightClick>b__2
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass106_0___OnItemRightClick_b__2 (UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o* __this, const MethodInfo* method);
// 0x1822d0120

void UI_MapEditorHierarchyPanel___c__DisplayClass106_0___OnItemRightClick_b__2
               (UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 != (UI_MapEditorHierarchyPanel_o *)0x0) &&
     (__this_00 = (pUVar1->fields)._gameManager, __this_00 != (GameManagers_MapEditorGameManager_o *)0x0)) {
    GameManagers_MapEditorGameManager__Cut(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass106_0$$<OnItemRightClick>b__3
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass106_0___OnItemRightClick_b__3 (UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o* __this, const MethodInfo* method);
// 0x1822d0150

void UI_MapEditorHierarchyPanel___c__DisplayClass106_0___OnItemRightClick_b__3
               (UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 != (UI_MapEditorHierarchyPanel_o *)0x0) &&
     (__this_00 = (pUVar1->fields)._gameManager, __this_00 != (GameManagers_MapEditorGameManager_o *)0x0)) {
    GameManagers_MapEditorGameManager__Paste(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass106_0$$<OnItemRightClick>b__4
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass106_0___OnItemRightClick_b__4 (UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o* __this, const MethodInfo* method);
// 0x1822d0180

void UI_MapEditorHierarchyPanel___c__DisplayClass106_0___OnItemRightClick_b__4
               (UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 != (UI_MapEditorHierarchyPanel_o *)0x0) &&
     (__this_00 = (pUVar1->fields)._gameManager, __this_00 != (GameManagers_MapEditorGameManager_o *)0x0)) {
    GameManagers_MapEditorGameManager__PasteAsChild
              (__this_00,(pUVar1->fields)._contextTargetId,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass106_0$$<OnItemRightClick>b__5
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass106_0___OnItemRightClick_b__5 (UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o* __this, const MethodInfo* method);
// 0x1822d01c0

void UI_MapEditorHierarchyPanel___c__DisplayClass106_0___OnItemRightClick_b__5
               (UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 != (UI_MapEditorHierarchyPanel_o *)0x0) &&
     (__this_00 = (pUVar1->fields)._gameManager, __this_00 != (GameManagers_MapEditorGameManager_o *)0x0)) {
    GameManagers_MapEditorGameManager__CreateEmptyParent
              (__this_00,(pUVar1->fields)._contextTargetId,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass106_0$$<OnItemRightClick>b__6
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass106_0___OnItemRightClick_b__6 (UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o* __this, const MethodInfo* method);
// 0x1822d0200

void UI_MapEditorHierarchyPanel___c__DisplayClass106_0___OnItemRightClick_b__6
               (UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 != (UI_MapEditorHierarchyPanel_o *)0x0) &&
     (__this_00 = (pUVar1->fields)._gameManager, __this_00 != (GameManagers_MapEditorGameManager_o *)0x0)) {
    GameManagers_MapEditorGameManager__ResetOrigin(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass106_0$$<OnItemRightClick>b__7
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass106_0___OnItemRightClick_b__7 (UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o* __this, const MethodInfo* method);
// 0x1822d0230

void UI_MapEditorHierarchyPanel___c__DisplayClass106_0___OnItemRightClick_b__7
               (UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 != (UI_MapEditorHierarchyPanel_o *)0x0) &&
     (__this_00 = (pUVar1->fields)._gameManager, __this_00 != (GameManagers_MapEditorGameManager_o *)0x0)) {
    GameManagers_MapEditorGameManager__Delete(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass120_0$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass120_0___ctor (UI_MapEditorHierarchyPanel___c__DisplayClass120_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorHierarchyPanel___c__DisplayClass120_0___ctor(UI_MapEditorHierarchyPanel___c__DisplayClass120_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass120_0$$<FocusSelectionFromScene>b__0
// il2cpp: bool UI_MapEditorHierarchyPanel___c__DisplayClass120_0___FocusSelectionFromScene_b__0 (UI_MapEditorHierarchyPanel___c__DisplayClass120_0_o* __this, Map_MapObject_o* x, const MethodInfo* method);
// 0x1822d00c0

bool
UI_MapEditorHierarchyPanel___c__DisplayClass120_0___FocusSelectionFromScene_b__0(UI_MapEditorHierarchyPanel___c__DisplayClass120_0_o* __this, Map_MapObject_o* x, MethodInfo* method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((x != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (x->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar1->fields).Id == (__this->fields).targetId;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass127_0$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass127_0___ctor (UI_MapEditorHierarchyPanel___c__DisplayClass127_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorHierarchyPanel___c__DisplayClass127_0___ctor(UI_MapEditorHierarchyPanel___c__DisplayClass127_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass127_0$$<OnItemBeginDrag>b__0
// il2cpp: bool UI_MapEditorHierarchyPanel___c__DisplayClass127_0___OnItemBeginDrag_b__0 (UI_MapEditorHierarchyPanel___c__DisplayClass127_0_o* __this, Map_MapObject_o* x, const MethodInfo* method);
// 0x1822d00c0

bool UI_MapEditorHierarchyPanel___c__DisplayClass127_0___OnItemBeginDrag_b__0
               (UI_MapEditorHierarchyPanel___c__DisplayClass127_0_o *__this,Map_MapObject_o *x,
               MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((x != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (x->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar1->fields).Id == (__this->fields).id;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass90_0$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___ctor (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorHierarchyPanel___c__DisplayClass90_0___ctor(UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass90_0$$<BindPooledItem>b__0
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__0 (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o* __this, const MethodInfo* method);
// 0x1822d0df0

void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__0
               (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    UI_MapEditorHierarchyPanel__OnButtonClick(__this_00,(__this->fields).row.fields.Id,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass90_0$$<BindPooledItem>b__1
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__1 (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o* __this, const MethodInfo* method);
// 0x1822d0e20

void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__1
               (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,
               (MethodInfo *)(ulonglong)(uint)(__this->fields).row.fields.Id);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass90_0$$<BindPooledItem>b__2
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__2 (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822d0e50

void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__2
               (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    UI_MapEditorHierarchyPanel__OnItemRightClick
              (__this_00,(__this->fields).row.fields.Id,eventData,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass90_0$$<BindPooledItem>b__3
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__3 (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822d0e80

void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__3
               (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    UI_MapEditorHierarchyPanel__OnItemPointerDown
              (__this_00,(__this->fields).row.fields.Id,eventData,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass90_0$$<BindPooledItem>b__4
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__4 (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822d0eb0

void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__4
               (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    UI_MapEditorHierarchyPanel__OnItemBeginDrag
              (__this_00,(__this->fields).row.fields.Id,eventData,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass90_0$$<BindPooledItem>b__5
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__5 (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822d0ee0

void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__5
               (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    UI_MapEditorHierarchyPanel__OnItemDrag
              (__this_00,(__this->fields).row.fields.Id,eventData,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass90_0$$<BindPooledItem>b__6
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__6 (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822d0f10

void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__6
               (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    UI_MapEditorHierarchyPanel__OnItemEndDrag
              (__this_00,(__this->fields).row.fields.Id,eventData,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass90_0$$<BindPooledItem>b__7
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__7 (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o* __this, const MethodInfo* method);
// 0x1822d0f40

void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__7
               (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    UI_MapEditorHierarchyPanel__ToggleExpanded
              (__this_00,(__this->fields).row.fields.Id,true,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass90_0$$<BindPooledItem>b__8
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__8 (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o* __this, const MethodInfo* method);
// 0x1822d0f70

void UI_MapEditorHierarchyPanel___c__DisplayClass90_0___BindPooledItem_b__8
               (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    UI_MapEditorHierarchyPanel__ToggleExpanded
              (__this_00,(__this->fields).row.fields.Id,false,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$get_Width
// il2cpp: float UI_MapEditorHierarchyPanel__get_Width (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1821d9240

float UI_MapEditorHierarchyPanel__get_Width(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 325.0;
}


// UI.MapEditorHierarchyPanel$$get_Height
// il2cpp: float UI_MapEditorHierarchyPanel__get_Height (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b8870

float UI_MapEditorHierarchyPanel__get_Height(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 1005.0;
}


// UI.MapEditorHierarchyPanel$$get_TopBarHeight
// il2cpp: float UI_MapEditorHierarchyPanel__get_TopBarHeight (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b8880

float UI_MapEditorHierarchyPanel__get_TopBarHeight(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 56.0;
}


// UI.MapEditorHierarchyPanel$$GetWidth
// il2cpp: float UI_MapEditorHierarchyPanel__GetWidth (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b3500

float UI_MapEditorHierarchyPanel__GetWidth(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347508 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_184347508 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar1 != (Settings_MapEditorSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).HierarchyPanelWidth, pSVar2 != (Settings_FloatSetting_o *)0x0)) {
    return (pSVar2->fields)._value;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$GetHeight
// il2cpp: float UI_MapEditorHierarchyPanel__GetHeight (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b21b0

float UI_MapEditorHierarchyPanel__GetHeight(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  bool bVar4;
  UnityEngine_Canvas_o *x;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Rect_o *pUVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o UVar8;
  UI_BaseMenu_o *x_00;
  float fVar9;
  float fVar10;
  float fStackX_1c;
  float fStackX_24;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_184347509 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184347509 = '\x01';
  }
  x = UnityEngine_Component__GetComponentInParent_object__664f20
                ((UnityEngine_Component_o *)__this,
                 (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((x == (UnityEngine_Canvas_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)x,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform),
       pUVar5 == (UnityEngine_RectTransform_o *)0x0)) goto label_1822b2438;
    pUVar6 = UnityEngine_RectTransform__get_rect(local_38,pUVar5,(MethodInfo *)0x0);
    fVar9 = (pUVar6->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (0.0 < fVar9) {
      if (Il2CppMethodInitialized_18434750a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        Il2CppMethodInitialized_18434750a = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      x_00 = (UI_BaseMenu_o *)0x0;
      if (pUVar2 != (UI_BaseMenu_o *)0x0) {
        bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
        if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
           (bVar4 = true,
           (pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MapEditorMenu
           )) {
          bVar4 = false;
        }
        if (bVar4) {
          x_00 = pUVar2;
        }
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
label_1822b23ff:
        return fVar9 - 55.0;
      }
      if (x_00 != (UI_BaseMenu_o *)0x0) {
        pSVar3 = (*(uint64_t *)((char *)x_00 + 0xb8));
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar4) goto label_1822b23ff;
        pSVar3 = (*(uint64_t *)((char *)x_00 + 0xb8));
        if ((pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) &&
           (pUVar5 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pSVar3,
                                (MethodInfo_6651A0 *)
                                MethodInfo_UnityEngine_Component_GetComponent_RectTransform),
           pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
          UVar8 = UnityEngine_RectTransform__get_anchoredPosition(pUVar5,(MethodInfo *)0x0);
          fStackX_1c = UVar7.fields.y;
          fStackX_24 = UVar8.fields.y;
          fVar10 = 0.0;
          if (0.0 <= fStackX_1c - fStackX_24) {
            fVar10 = fStackX_1c - fStackX_24;
          }
          return fVar9 - fVar10;
        }
      }
label_1822b2438:
      ThrowNullReferenceException();
    }
  }
  fVar9 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                    (__this,(__this->klass->vtable)._6_get_Height.method);
  return fVar9;
}


// UI.MapEditorHierarchyPanel$$GetTopOffset
// il2cpp: float UI_MapEditorHierarchyPanel__GetTopOffset (const MethodInfo* method);
// 0x1822b2e70

float UI_MapEditorHierarchyPanel__GetTopOffset(MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *__this;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o UVar6;
  UI_BaseMenu_o *x;
  float fVar7;
  float fStackX_14;
  float fStackX_1c;
  
  if (Il2CppMethodInitialized_18434750a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_18434750a = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  x = (UI_BaseMenu_o *)0x0;
  if (pUVar2 != (UI_BaseMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       (bVar4 = true,
       (pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      bVar4 = false;
    }
    if (bVar4) {
      x = pUVar2;
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return 55.0;
  }
  if (x != (UI_BaseMenu_o *)0x0) {
    pSVar3 = (*(uint64_t *)((char *)x + 0xb8));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      return 55.0;
    }
    pSVar3 = (*(uint64_t *)((char *)x + 0xb8));
    if ((pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) &&
       (__this = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pSVar3,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform),
       __this != (UnityEngine_RectTransform_o *)0x0)) {
      UVar5 = UnityEngine_RectTransform__get_sizeDelta(__this,(MethodInfo *)0x0);
      UVar6 = UnityEngine_RectTransform__get_anchoredPosition(__this,(MethodInfo *)0x0);
      fStackX_14 = UVar5.fields.y;
      fStackX_1c = UVar6.fields.y;
      fVar7 = 0.0;
      if (0.0 <= fStackX_14 - fStackX_1c) {
        fVar7 = fStackX_14 - fStackX_1c;
      }
      return fVar7;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$get_BottomBarHeight
// il2cpp: float UI_MapEditorHierarchyPanel__get_BottomBarHeight (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_MapEditorHierarchyPanel__get_BottomBarHeight(UI_MapEditorHierarchyPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.MapEditorHierarchyPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorHierarchyPanel__get_VerticalSpacing (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x181d9f790

float
UI_MapEditorHierarchyPanel__get_VerticalSpacing(UI_MapEditorHierarchyPanel_o* __this, MethodInfo* method)

{
  return 2.0;
}


// UI.MapEditorHierarchyPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorHierarchyPanel__get_HorizontalPadding (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_MapEditorHierarchyPanel__get_HorizontalPadding(UI_MapEditorHierarchyPanel_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.MapEditorHierarchyPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorHierarchyPanel__get_VerticalPadding (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x181b56090

int32_t
UI_MapEditorHierarchyPanel__get_VerticalPadding(UI_MapEditorHierarchyPanel_o* __this, MethodInfo* method)

{
  return 10;
}


// UI.MapEditorHierarchyPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorHierarchyPanel__get_ScrollBar (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MapEditorHierarchyPanel__get_ScrollBar(UI_MapEditorHierarchyPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MapEditorHierarchyPanel$$GetPanelVerticalOffset
// il2cpp: float UI_MapEditorHierarchyPanel__GetPanelVerticalOffset (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b2b60

float UI_MapEditorHierarchyPanel__GetPanelVerticalOffset
                (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (*(__this->klass->vtable)._37_get_BottomBarHeight.methodPtr)
                    (__this,(__this->klass->vtable)._37_get_BottomBarHeight.method);
  fVar2 = (*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)
                    (__this,(__this->klass->vtable)._36_get_TopBarHeight.method);
  return (fVar1 - fVar2) * 0.5;
}


// UI.MapEditorHierarchyPanel$$Setup
// il2cpp: void UI_MapEditorHierarchyPanel__Setup (UI_MapEditorHierarchyPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822b6570

void UI_MapEditorHierarchyPanel__Setup
               (UI_MapEditorHierarchyPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  Settings_StringSetting_o *setting;
  UI_ElementStyle_o *pUVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  bool bVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_00;
  UnityEngine_RectOffset_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_Events_UnityAction_o *pUVar9;
  UI_InputSettingElement_o *value;
  UnityEngine_UI_Text_o *value_00;
  UI_MapEditorMenu_o *pUVar10;
  float size;
  
  if (Il2CppMethodInitialized_18434750b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorHierarchyPanel_Setup_b__75_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorHierarchyPanel_Setup_b__75_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorHierarchyPanel_Setup_b__75_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorHierarchyPanel_Setup_b__75_3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"0/0");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/ArrowRightIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/ArrowLeftIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/TreeView");
    Il2CppMethodInitialized_18434750b = '\x01';
  }
  UI_MapEditorScaledPanel__Setup((UI_MapEditorScaledPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar10 = (UI_MapEditorMenu_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pUVar10 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
    pUVar10 = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar10);
    }
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)pUVar10;
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar10);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager,pUVar10);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar10 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar10 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
    pUVar10 = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar10);
    }
    (__this->fields)._menu = pUVar10;
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar10);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu,pUVar10);
  pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar6,0x12,0.0,20.0,pSVar5,(MethodInfo *)0x0);
  (__this->fields)._style = pUVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._style,pUVar6);
  pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar6,0x12,0.0,20.0,pSVar5,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).TopBar;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar7 = (__this->fields).TopBar;
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_1822b6db0;
    pUVar7 = UnityEngine_Transform__Find(pUVar7,"Label",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar7 = (__this->fields).TopBar;
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_1822b6db0;
      pUVar7 = UnityEngine_Transform__Find(pUVar7,"Label",(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_1822b6db0;
      pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_1822b6db0;
      UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
    }
  }
  pUVar7 = (__this->fields).TopBar;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_1822b6db0;
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar7,
                         (MethodInfo_6651A0 *)
                         MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (__this_00 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_1822b6db0;
    UnityEngine_UI_LayoutGroup__set_childAlignment
              ((UnityEngine_UI_LayoutGroup_o *)__this_00,3,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,true,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,true,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,false,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,false,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,8.0,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
    UnityEngine_RectOffset___ctor_2ed1030(__this_01,8,8,4,4,(MethodInfo *)0x0);
    UnityEngine_UI_LayoutGroup__set_padding
              ((UnityEngine_UI_LayoutGroup_o *)__this_00,__this_01,(MethodInfo *)0x0);
  }
  pUVar7 = (__this->fields).TopBar;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar7 = (__this->fields).TopBar;
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_1822b6db0;
    __this_02 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar7,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    size = (*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)
                     (__this,(__this->klass->vtable)._36_get_TopBarHeight.method);
    if (__this_02 == (UnityEngine_RectTransform_o *)0x0) goto label_1822b6db0;
    UnityEngine_RectTransform__SetInsetAndSizeFromParentEdge(__this_02,2,0.0,size,(MethodInfo *)0x0);
  }
  pUVar7 = (__this->fields).TopBar;
  setting = (__this->fields)._searchSetting;
  pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar9,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_Setup_b__75_0,(MethodInfo *)0x0);
  pUVar8 = UI_ElementFactory__CreateInputSetting
                     (pUVar7,pUVar6,(Settings_BaseSetting_o *)setting,"",
                      "",120.0,28.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar9,
                      (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                      (MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    value = UnityEngine_GameObject__GetComponent_object_
                      (pUVar8,(MethodInfo_6F5650 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    (__this->fields)._searchInput = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._searchInput,value);
    pUVar7 = (__this->fields).TopBar;
    pUVar2 = (__this->fields)._style;
    pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar9,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_Setup_b__75_1,(MethodInfo *)0x0);
    pUVar8 = UI_ElementFactory__CreateIconButton
                       (pUVar7,pUVar2,"Icons/Navigation/TreeView",28.0,28.0,pUVar9,(MethodInfo *)0x0);
    (__this->fields)._modeButton = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._modeButton,pUVar8);
    pUVar7 = (__this->fields).TopBar;
    pUVar2 = (__this->fields)._style;
    pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar9,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_Setup_b__75_2,(MethodInfo *)0x0);
    pUVar8 = UI_ElementFactory__CreateIconButton
                       (pUVar7,pUVar2,"Icons/Navigation/ArrowLeftIcon",18.0,18.0,pUVar9,(MethodInfo *)0x0);
    (__this->fields)._pageLeftButton = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pageLeftButton,pUVar8);
    pUVar7 = (__this->fields).TopBar;
    pUVar2 = (__this->fields)._style;
    pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar9,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_Setup_b__75_3,(MethodInfo *)0x0);
    pUVar8 = UI_ElementFactory__CreateIconButton
                       (pUVar7,pUVar2,"Icons/Navigation/ArrowRightIcon",18.0,18.0,pUVar9,(MethodInfo *)0x0);
    (__this->fields)._pageRightButton = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pageRightButton,pUVar8);
    pUVar8 = UI_ElementFactory__CreateDefaultLabel
                       ((__this->fields).TopBar,pUVar6,"0/0",0,4,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
      value_00 = UnityEngine_GameObject__GetComponent_object_
                           (pUVar8,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
      (__this->fields)._pageLabel = value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._pageLabel,value_00);
      pGVar3 = (__this->fields)._gameManager;
      (__this->fields)._currentPage = 1;
      if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
        bVar4 = (pGVar3->fields).HierarchyTreeViewEnabled;
        (__this->fields)._treeViewEnabled = bVar4;
        if (bVar4 != false) {
          UI_MapEditorHierarchyPanel__BuildTreeGraph(__this,(MethodInfo *)0x0);
        }
        UI_MapEditorHierarchyPanel__EnsureVirtualizationElements(__this,(MethodInfo *)0x0);
        UI_MapEditorHierarchyPanel__EnsureDragVisuals(__this,(MethodInfo *)0x0);
        UI_MapEditorHierarchyPanel__AddResizeHandle(__this,(MethodInfo *)0x0);
        UI_MapEditorHierarchyPanel__Sync(__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_1822b6db0:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$AddResizeHandle
// il2cpp: void UI_MapEditorHierarchyPanel__AddResizeHandle (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822ad620

void UI_MapEditorHierarchyPanel__AddResizeHandle(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_UI_Image_o *pUVar1;
  UI_PanelResizeHandle_o *pUVar2;
  DG_Tweening_Core_DOSetter_float__o *__this_03;
  UnityEngine_Color_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_18434750c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_PanelResizeHandle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorHierarchyPanel_AddResizeHandle_b__76_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"ResizeHandle");
    Il2CppMethodInitialized_18434750c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(__this_00,"ResizeHandle",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
      __this_02 = UnityEngine_GameObject__AddComponent_object_
                            (__this_00,
                             (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform
                            );
      if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchorMin
                  (__this_02,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_anchorMax
                  (__this_02,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_offsetMin(__this_02,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_offsetMax
                  (__this_02,(UnityEngine_Vector2_o)0x41000000,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_GameObject__AddComponent_object_
                           (__this_00,
                            (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
        if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
          local_38[0].r = 1.0;
          local_38[0].g = 1.0;
          local_38[0].b = 1.0;
          local_38[0].a = 0.04;
          (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                    (pUVar1,(UnityEngine_Color_o *)local_38,(pUVar1->klass->vtable)._23_set_color.method);
          pUVar2 = UnityEngine_GameObject__AddComponent_object_
                             (__this_00,
                              (MethodInfo_6F4D60 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_PanelResizeHandle);
          if (pUVar2 != (UI_PanelResizeHandle_o *)0x0) {
            (pUVar2->fields).IsRightEdge = true;
            (pUVar2->fields).MinWidth = 150.0;
            (pUVar2->fields).MaxWidth = 600.0;
            __this_03 = (DG_Tweening_Core_DOSetter_float__o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_float);
            System_Action_float____ctor
                      (__this_03,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_AddResizeHandle_b__76_0,
                       (MethodInfo_E5A750 *)0x0);
            (pUVar2->fields).OnResize = (System_Action_float__o *)__this_03;
            Il2CppCodeGenWriteBarrier(&(pUVar2->fields).OnResize,__this_03);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$Show
// il2cpp: void UI_MapEditorHierarchyPanel__Show (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b72b0

void UI_MapEditorHierarchyPanel__Show(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UI_BasePanel__Show((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel$$Sync
// il2cpp: void UI_MapEditorHierarchyPanel__Sync (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b7840
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b7aff: nop 
// asm:   0x1822b7b96: jmp 0x1822b7b00

void UI_MapEditorHierarchyPanel__Sync(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__GameObject__o *__this_00;
  System_Collections_Generic_Dictionary_int__int__o *pSVar1;
  System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *pSVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_Object_o *pUVar4;
  System_Collections_Generic_List_GameObject__o *pSVar5;
  bool bVar6;
  uint uVar7;
  System_String_o *pSVar8;
  System_String_o *str2;
  UnityEngine_GameObject_o *pUVar9;
  UI_MapEditorHierarchyPanel_RowData_o row;
  int iVar10;
  uint uVar11;
  int size;
  int index;
  int iVar12;
  int32_t local_res8 [2];
  uint local_res18 [4];
  
  if (Il2CppMethodInitialized_18434750d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&" items");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_18434750d = '\x01';
  }
  __this_00 = (__this->fields)._idToItem;
  index = 0;
  local_res8[0] = 0;
  local_res18[0] = 0;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__GameObject__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_Clear);
    pSVar1 = (__this->fields)._idToIndex;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                 (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear);
      pSVar1 = (__this->fields)._indexToId;
      if (pSVar1 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                   (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear);
        (__this->fields)._dropIndicatorId = -1;
        (__this->fields)._dropToRoot = false;
        UI_MapEditorHierarchyPanel__SetRootDropOverlay(__this,false,(MethodInfo *)0x0);
        UI_MapEditorHierarchyPanel__BuildRows(__this,(MethodInfo *)0x0);
        pSVar2 = (__this->fields)._rows;
        if (pSVar2 != (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0) {
          local_res8[0] = (pSVar2->fields)._size;
          if ((__this->fields)._treeViewEnabled == false) {
            UI_MapEditorHierarchyPanel__SetVirtualizationActive(__this,false,(MethodInfo *)0x0);
            local_res18[0] = (local_res8[0] + 0x1d) / 0x1e;
            if ((int)local_res18[0] < 1) {
              local_res18[0] = 1;
            }
            uVar7 = (__this->fields)._currentPage;
            if ((int)uVar7 < 1) {
              uVar7 = 1;
            }
            uVar11 = local_res18[0];
            if (uVar7 <= local_res18[0]) {
              uVar11 = uVar7;
            }
            pUVar3 = (__this->fields)._pageLabel;
            (__this->fields)._currentPage = uVar11;
            pSVar8 = System_Int32__ToString(&(__this->fields)._currentPage,(MethodInfo *)0x0);
            str2 = System_Int32__ToString((int32_t *)local_res18,(MethodInfo *)0x0);
            pSVar8 = System_String__Concat_1969b70(pSVar8,"/",str2,(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                        (pUVar3,pSVar8,(pUVar3->klass->vtable)._75_set_text.method);
              pUVar4 = (UnityEngine_Object_o *)(__this->fields)._pageLeftButton;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar6) {
                pUVar9 = (__this->fields)._pageLeftButton;
                if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_1822b7cae;
                UnityEngine_GameObject__SetActive(pUVar9,true,(MethodInfo *)0x0);
              }
              pUVar4 = (UnityEngine_Object_o *)(__this->fields)._pageRightButton;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar6) {
                pUVar9 = (__this->fields)._pageRightButton;
                if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_1822b7cae;
                UnityEngine_GameObject__SetActive(pUVar9,true,(MethodInfo *)0x0);
              }
              iVar12 = (__this->fields)._currentPage * 0x1e;
              iVar10 = local_res8[0] - (iVar12 + -0x1e);
              size = 0;
              if (-1 < iVar10) {
                size = iVar10;
              }
              if (0x1e < size) {
                size = 0x1e;
              }
              UI_MapEditorHierarchyPanel__EnsurePoolSize(__this,size,(MethodInfo *)0x0);
              pSVar5 = (__this->fields)._itemPool;
              while (pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                if ((pSVar5->fields)._size <= index) goto label_1822b7c7e;
                pSVar5 = (__this->fields)._itemPool;
                if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
                pUVar9 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar5,index,
                                    (MethodInfo_92B830 *)
                                    MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
                if (index < size) {
                  pSVar2 = (__this->fields)._rows;
                  if (pSVar2 == (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0)
                  break;
                  row.fields = (UI_MapEditorHierarchyPanel_RowData_Fields)
                               System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                         ((System_Collections_Generic_List_object__o *)pSVar2,
                                          iVar12 + -0x1e + index,
                                          (MethodInfo_92B830 *)
                                          MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_get_Item
                                         );
                  UI_MapEditorHierarchyPanel__BindPooledItem
                            (__this,pUVar9,row,iVar12 + -0x1e + index,(MethodInfo *)0x0);
                }
                else {
                  if (pUVar9 == (UnityEngine_GameObject_o *)0x0) break;
                  UnityEngine_GameObject__SetActive(pUVar9,false,(MethodInfo *)0x0);
                }
                index = index + 1;
                pSVar5 = (__this->fields)._itemPool;
              }
            }
          }
          else {
            UI_MapEditorHierarchyPanel__SetVirtualizationActive(__this,true,(MethodInfo *)0x0);
            pUVar3 = (__this->fields)._pageLabel;
            pSVar8 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
            pSVar8 = System_String__Concat_1969e50(pSVar8," items",(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                        (pUVar3,pSVar8,(pUVar3->klass->vtable)._75_set_text.method);
              pUVar4 = (UnityEngine_Object_o *)(__this->fields)._pageLeftButton;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar6) {
                pUVar9 = (__this->fields)._pageLeftButton;
                if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_1822b7cae;
                UnityEngine_GameObject__SetActive(pUVar9,false,(MethodInfo *)0x0);
              }
              pUVar4 = (UnityEngine_Object_o *)(__this->fields)._pageRightButton;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar6) {
                pUVar9 = (__this->fields)._pageRightButton;
                if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_1822b7cae;
                UnityEngine_GameObject__SetActive(pUVar9,false,(MethodInfo *)0x0);
              }
              UI_MapEditorHierarchyPanel__RenderVirtualizedRows(__this,true,(MethodInfo *)0x0);
label_1822b7c7e:
              UI_MapEditorHierarchyPanel__SyncSelectedItems(__this,(MethodInfo *)0x0);
              UI_MapEditorHierarchyPanel__UpdateModeButtonText(__this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_1822b7cae:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$OnModeButtonClick
// il2cpp: void UI_MapEditorHierarchyPanel__OnModeButtonClick (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b5200

void
UI_MapEditorHierarchyPanel__OnModeButtonClick(UI_MapEditorHierarchyPanel_o* __this, MethodInfo* method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_18434750e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434750e = '\x01';
  }
  (__this->fields)._draggingItem = false;
  (__this->fields)._dropTargetId = -1;
  (__this->fields)._dropIndicatorId = -1;
  (__this->fields)._dropToRoot = false;
  (__this->fields)._currentDropMode = 0;
  UI_MapEditorHierarchyPanel__HideDragGhost(__this,(MethodInfo *)0x0);
  UI_MapEditorHierarchyPanel__HideInsertLine(__this,(MethodInfo *)0x0);
  bVar3 = (__this->fields)._treeViewEnabled == false;
  pGVar1 = (__this->fields)._gameManager;
  (__this->fields)._currentPage = 1;
  (__this->fields)._treeViewEnabled = bVar3;
  if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
    (pGVar1->fields).HierarchyTreeViewEnabled = bVar3;
    if ((__this->fields)._treeViewEnabled != false) {
      UI_MapEditorHierarchyPanel__BuildTreeGraph(__this,(MethodInfo *)0x0);
      if ((__this->fields)._treeViewEnabled != false) {
        pUVar2 = (__this->fields)._scrollRect;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pUVar2 = (__this->fields)._scrollRect;
          if (pUVar2 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_1822b5310;
          UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(pUVar2,1.0,(MethodInfo *)0x0);
        }
      }
    }
    UI_MapEditorHierarchyPanel__Sync(__this,(MethodInfo *)0x0);
    return;
  }
label_1822b5310:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$UpdateModeButtonText
// il2cpp: void UI_MapEditorHierarchyPanel__UpdateModeButtonText (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b7ff0

void UI_MapEditorHierarchyPanel__UpdateModeButtonText(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UnityEngine_UI_ColorBlock_o *pUVar5;
  bool bVar6;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_UI_RawImage_o *pUVar7;
  float fVar8;
  UnityEngine_Color_o local_128 [2];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  UnityEngine_UI_ColorBlock_o local_b8 [2];
  
  if (Il2CppMethodInitialized_18434750f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434750f = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._modeButton;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  pUVar2 = (__this->fields)._modeButton;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    fVar8 = 1.0;
    if ((__this->fields)._treeViewEnabled == false) {
      fVar8 = 0.75;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      if (__this_00 == (UnityEngine_UI_Button_o *)0x0) goto label_1822b82c3;
      pUVar5 = &(__this_00->fields).m_Colors;
      local_108._0_4_ = (pUVar5->fields).m_HighlightedColor.fields.r;
      local_108._4_4_ = (pUVar5->fields).m_HighlightedColor.fields.g;
      pUVar5 = &(__this_00->fields).m_Colors;
      uStack_100._0_4_ = (pUVar5->fields).m_HighlightedColor.fields.b;
      uStack_100._4_4_ = (pUVar5->fields).m_HighlightedColor.fields.a;
      pUVar5 = &(__this_00->fields).m_Colors;
      local_f8._0_4_ = (pUVar5->fields).m_PressedColor.fields.r;
      local_f8._4_4_ = (pUVar5->fields).m_PressedColor.fields.g;
      pUVar5 = &(__this_00->fields).m_Colors;
      uStack_f0._0_4_ = (pUVar5->fields).m_PressedColor.fields.b;
      uStack_f0._4_4_ = (pUVar5->fields).m_PressedColor.fields.a;
      local_128[0].fields.a = 1.0;
      pUVar5 = &(__this_00->fields).m_Colors;
      uVar3._0_4_ = (pUVar5->fields).m_DisabledColor.fields.r;
      uVar3._4_4_ = (pUVar5->fields).m_DisabledColor.fields.g;
      pUVar5 = &(__this_00->fields).m_Colors;
      uVar4._0_4_ = (pUVar5->fields).m_DisabledColor.fields.b;
      uVar4._4_4_ = (pUVar5->fields).m_DisabledColor.fields.a;
      pUVar5 = &(__this_00->fields).m_Colors;
      local_e8._0_4_ = (pUVar5->fields).m_SelectedColor.fields.r;
      local_e8._4_4_ = (pUVar5->fields).m_SelectedColor.fields.g;
      pUVar5 = &(__this_00->fields).m_Colors;
      uStack_e0._0_4_ = (pUVar5->fields).m_SelectedColor.fields.b;
      uStack_e0._4_4_ = (pUVar5->fields).m_SelectedColor.fields.a;
      uVar1._0_4_ = (__this_00->fields).m_Colors.fields.m_ColorMultiplier;
      uVar1._4_4_ = (__this_00->fields).m_Colors.fields.m_FadeDuration;
      local_128[0].fields.r = fVar8;
      local_128[0].fields.g = fVar8;
      local_128[0].fields.b = fVar8;
      if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
      }
      local_b8[0].fields.m_NormalColor.fields.g = local_128[0].fields.g;
      local_b8[0].fields.m_NormalColor.fields.r = local_128[0].fields.r;
      local_b8[0].fields.m_NormalColor.fields.a = local_128[0].fields.a;
      local_b8[0].fields.m_NormalColor.fields.b = local_128[0].fields.b;
      uStack_100 = CONCAT44(0x3f800000,(undefined4)uStack_100);
      uStack_f0 = CONCAT44(0x3f800000,(undefined4)uStack_f0);
      local_b8[0].fields.m_HighlightedColor.fields.a = 1.0;
      uStack_e0 = CONCAT44(0x3f800000,(undefined4)uStack_e0);
      local_b8[0].fields.m_PressedColor.fields.a = 1.0;
      local_b8[0].fields.m_SelectedColor.fields.a = 1.0;
      local_b8[0].fields.m_HighlightedColor.fields.r = fVar8;
      local_b8[0].fields.m_HighlightedColor.fields.g = fVar8;
      local_b8[0].fields.m_HighlightedColor.fields.b = fVar8;
      local_b8[0].fields.m_PressedColor.fields.r = fVar8;
      local_b8[0].fields.m_PressedColor.fields.g = fVar8;
      local_b8[0].fields.m_PressedColor.fields.b = fVar8;
      local_b8[0].fields.m_SelectedColor.fields.r = fVar8;
      local_b8[0].fields.m_SelectedColor.fields.g = fVar8;
      local_b8[0].fields.m_SelectedColor.fields.b = fVar8;
      local_b8[0].fields.m_DisabledColor.fields._0_8_ = uVar3;
      local_b8[0].fields.m_DisabledColor.fields._8_8_ = uVar4;
      local_b8[0].fields._80_8_ = uVar1;
      UnityEngine_UI_Selectable__set_colors
                ((UnityEngine_UI_Selectable_o *)__this_00,local_b8,(MethodInfo *)0x0);
    }
    pUVar2 = (__this->fields)._modeButton;
    if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar7 = UnityEngine_GameObject__GetComponent_object_
                           (pUVar2,(MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RawImage),
       pUVar7 != (UnityEngine_UI_RawImage_o *)0x0)) {
      local_128[0].fields.a = 1.0;
      local_128[0].fields.r = fVar8;
      local_128[0].fields.g = fVar8;
      local_128[0].fields.b = fVar8;
      (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
                (pUVar7,local_128,(pUVar7->klass->vtable)._23_set_color.method);
      return;
    }
  }
label_1822b82c3:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$BuildRows
// il2cpp: void UI_MapEditorHierarchyPanel__BuildRows (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822aecd0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822aee0d: nop dword ptr [rax]
// asm:   0x1822aeea1: jmp 0x1822aee10

void UI_MapEditorHierarchyPanel__BuildRows(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *pSVar2;
  System_Collections_Generic_Dictionary_int__int__o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o **ppSVar5;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  int index;
  
  if (Il2CppMethodInitialized_184347510 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184347510 = '\x01';
  }
  pSVar2 = (__this->fields)._rows;
  if (pSVar2 != (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0) {
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar2->fields)._size = 0;
    pSVar3 = (__this->fields)._idToIndex;
    if (pSVar3 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                 (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear);
      pSVar3 = (__this->fields)._indexToId;
      if (pSVar3 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                   (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear);
        pSVar4 = (__this->fields)._searchSetting;
        if (pSVar4 != (Settings_StringSetting_o *)0x0) {
          ppSVar5 = &(pSVar4->fields)._value;
          if (*ppSVar5 == (System_String_o *)0x0) {
            ppSVar5 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
          }
          if ((*ppSVar5 != (System_String_o *)0x0) &&
             (pSVar6 = System_String__Trim(*ppSVar5,(MethodInfo *)0x0), pSVar6 != (System_String_o *)0x0)) {
            pSVar6 = System_String__ToLower(pSVar6,(MethodInfo *)0x0);
            if ((__this->fields)._treeViewEnabled == false) {
              UI_MapEditorHierarchyPanel__BuildFlatRows(__this,pSVar6,(MethodInfo *)0x0);
            }
            else {
              UI_MapEditorHierarchyPanel__BuildTreeRows(__this,pSVar6,(MethodInfo *)0x0);
            }
            index = 0;
            pSVar2 = (__this->fields)._rows;
            while (pSVar2 != (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0) {
              if ((pSVar2->fields)._size <= index) {
                return;
              }
              pSVar2 = (__this->fields)._rows;
              if (pSVar2 == (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0) break;
              pSVar3 = (__this->fields)._idToIndex;
              pIVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar2,index,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_get_Item
                                 );
              if (pSVar3 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) break;
              System_Collections_Generic_Dictionary_int__int___set_Item
                        (pSVar3,(int32_t)pIVar7,index,
                         (MethodInfo_14159F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
              pSVar2 = (__this->fields)._rows;
              if (pSVar2 == (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0) break;
              pSVar3 = (__this->fields)._indexToId;
              pIVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar2,index,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_get_Item
                                 );
              if (pSVar3 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) break;
              System_Collections_Generic_Dictionary_int__int___set_Item
                        (pSVar3,index,(int32_t)pIVar7,
                         (MethodInfo_14159F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
              index = index + 1;
              pSVar2 = (__this->fields)._rows;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$BuildFlatRows
// il2cpp: void UI_MapEditorHierarchyPanel__BuildFlatRows (UI_MapEditorHierarchyPanel_o* __this, System_String_o* search, const MethodInfo* method);
// 0x1822aea70
// eh: try 0x1822aeb70..0x1822aecba -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822aeb6f: nop 
// asm:   0x1822aec80: mov rdx, qword ptr [rip + 0x1dd9661]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x1822aec87: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822aec8c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822aec91: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822aec96: test rcx, rcx
// asm:   0x1822aec99: jne 0x1822aecba
// asm:   0x1822aecba: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_MapEditorHierarchyPanel__BuildFlatRows
               (UI_MapEditorHierarchyPanel_o *__this,System_String_o *search,MethodInfo *method)

{
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *pSVar2;
  int32_t key;
  bool bVar3;
  Map_MapObject_o *obj;
  UnityEngine_TerrainUtils_TerrainTileCoord_Fields local_res20;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if (Il2CppMethodInitialized_184347511 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347511 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
              TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  if (__this_00 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
    System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_70,__this_00,
               (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_58.fields._list = (System_Collections_Generic_List_T__o *)local_70._0_8_;
    local_58.fields._index = local_70._8_4_;
    local_58.fields._version = local_70._12_4_;
    local_58.fields._current = local_60;
    local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_70._8_8_ = &local_58;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                        (&local_58,
                         (MethodInfo_1530180 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator_int___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                   MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
        return;
      }
      key = (int32_t)local_58.fields._current;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) break;
      bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar1,key,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (bVar3) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        obj = (Map_MapObject_o *)
              System_Collections_Generic_Dictionary_int__ulong___get_Item
                        (pSVar1,key,
                         (MethodInfo_14156F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        bVar3 = UI_MapEditorHierarchyPanel__MatchesSearch(__this,obj,search,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar2 = (__this->fields)._rows;
          local_res20.tileX = 0;
          local_res20.tileZ = 0;
          UnityEngine_TerrainUtils_TerrainTileCoord___ctor
                    ((UnityEngine_TerrainUtils_TerrainTileCoord_o *)&local_res20,key,0,(MethodInfo *)0x0);
          if (pSVar2 == (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180030d60(pSVar2,local_res20,
                        MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_Add);
        }
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$BuildTreeRows
// il2cpp: void UI_MapEditorHierarchyPanel__BuildTreeRows (UI_MapEditorHierarchyPanel_o* __this, System_String_o* search, const MethodInfo* method);
// 0x1822afa30
// eh: try 0x1822afc00..0x1822afe4f -> pad 0x183317e10 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822afd0d: mov rdx, qword ptr [rip + 0x1e00134]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x1822afd14: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1822afd19: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822afd1e: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1822afd23: test rcx, rcx
// asm:   0x1822afd26: jne 0x1822afe4f
// asm:   0x1822afd2c: xor r15d, r15d
// asm:   0x1822afd2f: mov r13, qword ptr [rsp + 0xc0]
// asm:   0x1822afd37: mov rsi, qword ptr [rsp + 0xc8]
// asm:   0x1822afdf7: mov rdx, qword ptr [rip + 0x1dd84ea]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x1822afdfe: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1822afe03: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822afe08: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1822afe0d: test rcx, rcx
// asm:   0x1822afe10: jne 0x1822afe55
// asm:   0x1822afe4f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822afe55: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315b20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315b25: push rbp
// asm:   0x183315b26: sub rsp, 0x30
// asm:   0x183315b2a: mov rbp, rdx
// asm:   0x183315b2d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183315b31: mov rcx, qword ptr [rax]
// asm:   0x183315b34: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183315b38: movabs rax, 0
// asm:   0x183315b42: add rsp, 0x30
// asm:   0x183315b46: pop rbp
// asm:   0x183315b47: ret 
// asm:   0x183317e10: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317e15: push rbp
// asm:   0x183317e16: sub rsp, 0x30
// asm:   0x183317e1a: mov rbp, rdx
// asm:   0x183317e1d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183317e21: mov rcx, qword ptr [rax]
// asm:   0x183317e24: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317e28: movabs rax, 0
// asm:   0x183317e32: add rsp, 0x30
// asm:   0x183317e36: pop rbp
// asm:   0x183317e37: ret 

void UI_MapEditorHierarchyPanel__BuildTreeRows
               (UI_MapEditorHierarchyPanel_o *__this,System_String_o *search,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__MapObject__o *__this_00;
  Il2CppClass *pIVar1;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_01;
  Il2CppObject *pIVar2;
  bool bVar3;
  bool bVar4;
  System_Collections_Generic_HashSet_int__o *pSVar5;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  System_String_o *pSVar6;
  undefined1 local_78 [16];
  Il2CppObject *local_68;
  undefined1 local_60 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_58;
  Il2CppObject *local_50;
  undefined1 local_48 [8];
  uint64_t uStack_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_184347512 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
    Il2CppMethodInitialized_184347512 = '\x01';
  }
  local_60 = (undefined1  [8])0x0;
  pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_50 = (Il2CppObject *)0x0;
  local_48 = (undefined1  [8])0x0;
  uStack_40 = 0;
  local_38 = (Il2CppObject *)0x0;
  UI_MapEditorHierarchyPanel__BuildTreeGraph(__this,(MethodInfo *)0x0);
  bVar3 = System_String__op_Inequality
                    (search,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar3) {
    pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor
              (pSVar5,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_00 = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (__this_00 == (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) goto label_1822afe5b;
    __this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values);
    if (__this_02 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
    goto label_1822afe5b;
    System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_78,
               __this_02,
               (MethodInfo_F1E4D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
    local_60 = (undefined1  [8])local_78._0_8_;
    pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78._8_8_;
    local_50 = local_68;
    local_78._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_78._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60;
label_1822afc00:
    bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_60,(MethodInfo_155CFB0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                      );
    pIVar2 = local_50;
    if (bVar3) {
      bVar3 = System_String__op_Equality
                        (search,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
      if (bVar3) goto label_1822afcc6;
      if (pIVar2 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar1 = pIVar2[2].klass;
      if (pIVar1 == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pIVar1->_1).this_arg.data == (void *)0x0) {
        pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      else {
        pSVar6 = System_String__ToLower((pIVar1->_1).this_arg.data,(MethodInfo *)0x0);
      }
      if (pSVar6 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar3 = System_String__Contains(pSVar6,search,(MethodInfo *)0x0);
      if (!bVar3) goto code_r0x0001822afc98;
      goto label_1822afccf;
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
              );
    pSVar5 = UI_MapEditorHierarchyPanel__BuildSearchContext(__this,pSVar5,(MethodInfo *)0x0);
    bVar3 = true;
  }
  else {
    pSVar5 = (System_Collections_Generic_HashSet_int__o *)0x0;
    bVar3 = false;
  }
  __this_01 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._treeRoots;
  if (__this_01 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
    System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_78,__this_01,
               (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_48 = (undefined1  [8])local_78._0_8_;
    uStack_40 = local_78._8_8_;
    local_38 = local_68;
    local_78._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_78._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while( true ) {
      bVar4 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                         (MethodInfo_1530180 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
      if (!bVar4) break;
      UI_MapEditorHierarchyPanel__AddTreeRowsRecursive
                (__this,(int32_t)local_38,0,pSVar5,bVar3,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_int___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    return;
  }
label_1822afe5b:
  ThrowNullReferenceException();
code_r0x0001822afc98:
  if (pIVar2[2].klass == (Il2CppClass *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar6 = System_Int32__ToString((int32_t *)&((pIVar2[2].klass)->_1).byval_arg,(MethodInfo *)0x0);
  bVar3 = System_String__op_Equality(pSVar6,search,(MethodInfo *)0x0);
  if (bVar3) {
label_1822afcc6:
    if (pIVar2 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
label_1822afccf:
    if (pIVar2[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    if (pSVar5 == (System_Collections_Generic_HashSet_int__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_HashSet_int___Add
              (pSVar5,*(int32_t *)&((pIVar2[2].klass)->_1).byval_arg.data,
               (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
  }
  goto label_1822afc00;
}


// UI.MapEditorHierarchyPanel$$BuildTreeGraph
// il2cpp: void UI_MapEditorHierarchyPanel__BuildTreeGraph (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822af1f0
// eh: try 0x1822af482..0x1822afa1d -> pad 0x183318130 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 58 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822af518: mov rdx, qword ptr [rip + 0x1e00689]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
// asm:   0x1822af51f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822af524: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822af529: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1822af52e: test rcx, rcx
// asm:   0x1822af531: jne 0x1822af9ec
// asm:   0x1822af537: xor r12d, r12d
// asm:   0x1822af53a: mov rdi, qword ptr [rsp + 0xd0]
// asm:   0x1822af6e3: mov rdx, qword ptr [rip + 0x1e0075e]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x1822af6ea: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822af6ef: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822af6f4: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1822af6f9: test rcx, rcx
// asm:   0x1822af6fc: jne 0x1822afa11
// asm:   0x1822af702: xor r12d, r12d
// asm:   0x1822af705: mov rdi, qword ptr [rsp + 0xd0]
// asm:   0x1822af9a8: mov rdx, qword ptr [rip + 0x1dd8939]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x1822af9af: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822af9b4: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822af9b9: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1822af9be: test rcx, rcx
// asm:   0x1822af9c1: jne 0x1822afa1d
// asm:   0x1822af9ec: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822afa11: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822afa1d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318130: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318135: push rbp
// asm:   0x183318136: sub rsp, 0x20
// asm:   0x18331813a: mov rbp, rdx
// asm:   0x18331813d: mov rax, qword ptr [rbp + 0x80]
// asm:   0x183318144: mov rcx, qword ptr [rax]
// asm:   0x183318147: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18331814b: movabs rax, 0
// asm:   0x183318155: add rsp, 0x20
// asm:   0x183318159: pop rbp
// asm:   0x18331815a: ret 
// asm:   0x183320de0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320de5: push rbp
// asm:   0x183320de6: sub rsp, 0x20
// asm:   0x183320dea: mov rbp, rdx
// asm:   0x183320ded: mov rax, qword ptr [rbp + 0x88]
// asm:   0x183320df4: mov rcx, qword ptr [rax]
// asm:   0x183320df7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183320dfb: movabs rax, 0
// asm:   0x183320e05: add rsp, 0x20
// asm:   0x183320e09: pop rbp
// asm:   0x183320e0a: ret 
// asm:   0x183324460: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324465: push rbp
// asm:   0x183324466: sub rsp, 0x20
// asm:   0x18332446a: mov rbp, rdx
// asm:   0x18332446d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183324474: mov rcx, qword ptr [rax]
// asm:   0x183324477: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18332447b: movabs rax, 0
// asm:   0x183324485: add rsp, 0x20
// asm:   0x183324489: pop rbp
// asm:   0x18332448a: ret 

void UI_MapEditorHierarchyPanel__BuildTreeGraph(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_int__List_int___o *pSVar3;
  System_Collections_Generic_Dictionary_int__MapObject__o *pSVar4;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar5;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Map_MapScriptBaseObject_o *pMVar6;
  Il2CppObject *pIVar7;
  Map_MapObject_o *obj;
  bool bVar8;
  int32_t iVar9;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar10;
  System_Collections_Generic_List_int__o *pSVar11;
  uint64_t uVar12;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar13;
  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *pMVar14;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar15;
  System_Collections_Generic_List_TSource__o *pSVar16;
  System_Collections_Generic_IEnumerable_TKey__o *source;
  undefined1 local_a8 [16];
  Map_MapObject_o *local_98;
  undefined1 local_90 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_88;
  Map_MapObject_o *local_80;
  undefined1 local_78 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_70;
  Map_MapObject_o *local_68;
  undefined1 local_60 [8];
  uint64_t uStack_58;
  Map_MapObject_o *local_50;
  
  if (Il2CppMethodInitialized_184347513 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_List_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_List_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c_BuildTreeGraph_b__84_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c_BuildTreeGraph_b__84_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorHierarchyPanel_c);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
    Il2CppMethodInitialized_184347513 = '\x01';
  }
  local_90 = (undefined1  [8])0x0;
  pUStack_88 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_80 = (Map_MapObject_o *)0x0;
  local_78 = (undefined1  [8])0x0;
  pUStack_70 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_68 = (Map_MapObject_o *)0x0;
  local_60 = (undefined1  [8])0x0;
  uStack_58 = 0;
  local_50 = (Map_MapObject_o *)0x0;
  pSVar3 = (__this->fields)._treeChildren;
  if (pSVar3 != (System_Collections_Generic_Dictionary_int__List_int___o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_List_int_Clear);
    pSVar11 = (__this->fields)._treeRoots;
    if (pSVar11 != (System_Collections_Generic_List_int__o *)0x0) {
      piVar1 = &(pSVar11->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar11->fields)._size = 0;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar4 = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar4 != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) {
        pSVar10 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                             (MethodInfo_13C6500 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys);
        if (pSVar10 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
          System_Collections_Generic_Dictionary_ValueCollection_StylePropertyAnimationSystem_ElementPropertyPair__Int32Enum___GetEnumerator
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     local_a8,pSVar10,
                     (MethodInfo_F1E550 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_MapObject_GetEnumerator
                    );
          local_90 = (undefined1  [8])local_a8._0_8_;
          pUStack_88 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8._8_8_;
          local_80 = local_98;
          local_a8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_a8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_90;
          while( true ) {
            bVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_uint__object___MoveNext
                              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                *)local_90,
                               (MethodInfo_15638A0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_MoveNext
                              );
            if (!bVar8) break;
            pSVar5 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._treeChildren;
            if (pSVar5 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              ThrowNullReferenceException();
            }
            iVar9 = (int32_t)local_80;
            bVar8 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                              (pSVar5,(int32_t)local_80,
                               (MethodInfo_1407110 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_List_int_ContainsKey);
            if (!bVar8) {
              __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                          (__this->fields)._treeChildren;
              pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int)
              ;
              System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
                        ((System_Collections_Generic_LowLevelList_T__o *)pSVar11,
                         (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
              if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_Dictionary_int__object___set_Item
                        (__this_00,iVar9,(Il2CppObject *)pSVar11,
                         (MethodInfo_1423510 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_List_int_set_Item);
            }
          }
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_90,
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
                    );
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar4 = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar4 != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) {
            pSVar10 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                                 (MethodInfo_13C65A0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values);
            if (pSVar10 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
              System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                        ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                         local_a8,pSVar10,
                         (MethodInfo_F1E4D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator
                        );
              local_78 = (undefined1  [8])local_a8._0_8_;
              pUStack_70 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8._8_8_;
              local_68 = local_98;
              local_a8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              local_a8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78;
label_1822af5c2:
              do {
                bVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                    *)local_78,
                                   (MethodInfo_155CFB0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                                  );
                obj = local_68;
                if (!bVar8) goto label_1822af6d2;
                if (local_68 == (Map_MapObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pMVar6 = (local_68->fields).ScriptObject;
                if (pMVar6 == (Map_MapScriptBaseObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                iVar2 = (pMVar6->fields).Id;
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                iVar9 = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
                if ((-1 < iVar9) && (iVar9 != iVar2)) {
                  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                  }
                  pSVar5 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                           TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                  if (pSVar5 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar8 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                                    (pSVar5,iVar9,
                                     (MethodInfo_1407110 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey
                                    );
                  if (bVar8) {
                    pSVar5 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                             (__this->fields)._treeChildren;
                    if (pSVar5 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    uVar12 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                                       (pSVar5,iVar9,
                                        (MethodInfo_14156F0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Item
                                       );
                    if (uVar12 == 0) {
                      ThrowNullReferenceException();
                    }
                    il2cpp_runtime_helper_180026690(uVar12,iVar2,MethodInfo_System_Collections_Generic_List_int_Add);
                    goto label_1822af5c2;
                  }
                }
                pSVar11 = (__this->fields)._treeRoots;
                if (pSVar11 == (System_Collections_Generic_List_int__o *)0x0) {
                  ThrowNullReferenceException();
                }
                il2cpp_runtime_helper_180026690(pSVar11,iVar2,MethodInfo_System_Collections_Generic_List_int_Add);
              } while( true );
            }
          }
        }
      }
    }
  }
label_1822afa23:
  ThrowNullReferenceException();
label_1822af6d2:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78,
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
            );
  pSVar13 = System_Linq_Enumerable__Distinct_int_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields)._treeRoots,
                       (MethodInfo_6BB130 *)MethodInfo_System_Linq_Enumerable_Distinct_int);
  if ((TypeInfo_UI_MapEditorHierarchyPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
  }
  pMVar14 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)
            TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9__84_0;
  if (pMVar14 == (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)0x0
     ) {
    if ((TypeInfo_UI_MapEditorHierarchyPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
    }
    pIVar7 = (Il2CppObject *)TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9;
    pMVar14 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int);
    System_Func_int__int____ctor
              (pMVar14,pIVar7,(intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c_BuildTreeGraph_b__84_0,
               (MethodInfo *)0x0);
    TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9__84_0 = (System_Func_int__int__o *)pMVar14;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9__84_0,pMVar14);
  }
  pSVar15 = System_Linq_Enumerable__OrderBy_object__int_
                      (pSVar13,(System_Func_TSource__TKey__o *)pMVar14,
                       (MethodInfo_6C12E0 *)MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
  pSVar16 = System_Linq_Enumerable__ToList_int_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar15,
                       (MethodInfo_6C9670 *)MethodInfo_System_Linq_Enumerable_ToList_int);
  (__this->fields)._treeRoots = (System_Collections_Generic_List_int__o *)pSVar16;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._treeRoots,pSVar16);
  pSVar3 = (__this->fields)._treeChildren;
  if (pSVar3 != (System_Collections_Generic_Dictionary_int__List_int___o *)0x0) {
    source = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                        (MethodInfo_13C6500 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Keys);
    pSVar16 = System_Linq_Enumerable__ToList_int_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (MethodInfo_6C9670 *)MethodInfo_System_Linq_Enumerable_ToList_int);
    if (pSVar16 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
                 (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)pSVar16,
                 (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
      local_60 = (undefined1  [8])local_a8._0_8_;
      uStack_58 = local_a8._8_8_;
      local_50 = local_98;
      local_a8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_a8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60;
      while( true ) {
        bVar8 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                           (MethodInfo_1530180 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
        if (!bVar8) {
          System_Collections_Generic_List_Enumerator_int___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
                     MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
          return;
        }
        pSVar5 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._treeChildren;
        if (pSVar5 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) break;
        iVar9 = (int32_t)local_50;
        pSVar13 = (System_Collections_Generic_IEnumerable_TSource__o *)
                  System_Collections_Generic_Dictionary_int__ulong___get_Item
                            (pSVar5,(int32_t)local_50,
                             (MethodInfo_14156F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Item);
        pSVar13 = System_Linq_Enumerable__Distinct_int_
                            (pSVar13,(MethodInfo_6BB130 *)MethodInfo_System_Linq_Enumerable_Distinct_int);
        if ((TypeInfo_UI_MapEditorHierarchyPanel_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
        }
        pMVar14 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)
                  TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9__84_1;
        if (pMVar14 ==
            (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)0x0) {
          if ((TypeInfo_UI_MapEditorHierarchyPanel_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
          }
          pIVar7 = (Il2CppObject *)TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9;
          pMVar14 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int);
          System_Func_int__int____ctor
                    (pMVar14,pIVar7,(intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c_BuildTreeGraph_b__84_1,
                     (MethodInfo *)0x0);
          TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9__84_1 = (System_Func_int__int__o *)pMVar14
          ;
          Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9__84_1,pMVar14);
        }
        pSVar15 = System_Linq_Enumerable__OrderBy_object__int_
                            (pSVar13,(System_Func_TSource__TKey__o *)pMVar14,
                             (MethodInfo_6C12E0 *)MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
        pSVar16 = System_Linq_Enumerable__ToList_int_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar15,
                             (MethodInfo_6C9670 *)MethodInfo_System_Linq_Enumerable_ToList_int);
        System_Collections_Generic_Dictionary_int__object___set_Item
                  ((System_Collections_Generic_Dictionary_int__object__o *)pSVar5,iVar9,
                   (Il2CppObject *)pSVar16,
                   (MethodInfo_1423510 *)
                   MethodInfo_System_Collections_Generic_Dictionary_int_List_int_set_Item);
      }
      ThrowNullReferenceException();
    }
  }
  goto label_1822afa23;
}


// UI.MapEditorHierarchyPanel$$BuildSearchContext
// il2cpp: System_Collections_Generic_HashSet_int__o* UI_MapEditorHierarchyPanel__BuildSearchContext (UI_MapEditorHierarchyPanel_o* __this, System_Collections_Generic_HashSet_int__o* matches, const MethodInfo* method);
// 0x1822aeec0
// eh: try 0x1822aefe0..0x1822af1e6 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822aefdc: nop dword ptr [rax]
// asm:   0x1822af189: mov rdx, qword ptr [rip + 0x1dd8eb8]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x1822af190: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822af195: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822af19a: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822af19f: test rcx, rcx
// asm:   0x1822af1a2: jne 0x1822af1e6
// asm:   0x1822af1a4: mov rsi, qword ptr [rsp + 0x88]
// asm:   0x1822af1e6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_Collections_Generic_HashSet_int__o *
UI_MapEditorHierarchyPanel__BuildSearchContext
          (UI_MapEditorHierarchyPanel_o *__this,System_Collections_Generic_HashSet_int__o *matches,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  int32_t key;
  bool bVar2;
  int32_t key_00;
  System_Collections_Generic_HashSet_int__o *__this_00;
  Map_MapObject_o *pMVar3;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  System_Collections_Generic_HashSet_Enumerator_T__o local_38;
  
  if (Il2CppMethodInitialized_184347514 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347514 = '\x01';
  }
  local_38.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_00,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (matches == (System_Collections_Generic_HashSet_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_uint___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,
             (System_Collections_Generic_HashSet_uint__o *)matches,
             (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
  local_38.fields._set = (System_Collections_Generic_HashSet_T__o *)local_50._0_8_;
  local_38.fields._index = local_50._8_4_;
  local_38.fields._version = local_50._12_4_;
  local_38.fields._current = local_40;
  local_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_50._8_8_ = &local_38;
  do {
    do {
      bVar2 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                        (&local_38,
                         (MethodInfo_1537E90 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
      if (!bVar2) {
        System_Collections_Generic_HashSet_Enumerator_int___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_38,
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
        return __this_00;
      }
      key = (int32_t)local_38.fields._current;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar1,key,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    } while (!bVar2);
    if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_HashSet_int___Add
              (__this_00,key,(MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
      ThrowNullReferenceException();
    }
    pMVar3 = (Map_MapObject_o *)
             System_Collections_Generic_Dictionary_int__ulong___get_Item
                       (pSVar1,key,
                        (MethodInfo_14156F0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    key_00 = Map_MapLoader__GetLogicalParentId(pMVar3,(MethodInfo *)0x0);
    while (-1 < key_00) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar1,key_00,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (!bVar2) break;
      bVar2 = System_Collections_Generic_HashSet_int___Add
                        (__this_00,key_00,
                         (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
      if (!bVar2) break;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
        ThrowNullReferenceException();
      }
      pMVar3 = (Map_MapObject_o *)
               System_Collections_Generic_Dictionary_int__ulong___get_Item
                         (pSVar1,key_00,
                          (MethodInfo_14156F0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
      key_00 = Map_MapLoader__GetLogicalParentId(pMVar3,(MethodInfo *)0x0);
    }
    UI_MapEditorHierarchyPanel__AddDescendants(__this,key,__this_00,(MethodInfo *)0x0);
  } while( true );
}


// UI.MapEditorHierarchyPanel$$AddDescendants
// il2cpp: void UI_MapEditorHierarchyPanel__AddDescendants (UI_MapEditorHierarchyPanel_o* __this, int32_t id, System_Collections_Generic_HashSet_int__o* result, const MethodInfo* method);
// 0x1822ad480
// eh: try 0x1822ad590..0x1822ad611 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822ad58f: nop 
// asm:   0x1822ad5e6: mov rdx, qword ptr [rip + 0x1ddacfb]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x1822ad5ed: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822ad5f2: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822ad5f7: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822ad5fc: test rcx, rcx
// asm:   0x1822ad5ff: jne 0x1822ad611
// asm:   0x1822ad611: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_MapEditorHierarchyPanel__AddDescendants
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,
               System_Collections_Generic_HashSet_int__o *result,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  int32_t id_00;
  bool bVar2;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_184347515 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_List_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    Il2CppMethodInitialized_184347515 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._treeChildren;
  if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (pSVar1,id,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_List_int_ContainsKey);
    if (!bVar2) {
      return;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._treeChildren;
    if ((pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) &&
       (__this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                    System_Collections_Generic_Dictionary_int__ulong___get_Item
                              (pSVar1,id,
                               (MethodInfo_14156F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Item),
       __this_00 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)) {
      System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,__this_00,
                 (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
      local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._current = local_50;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                          (&local_48,
                           (MethodInfo_1530180 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator_int___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                     MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
          return;
        }
        if (result == (System_Collections_Generic_HashSet_int__o *)0x0) break;
        id_00 = (int32_t)local_48.fields._current;
        bVar2 = System_Collections_Generic_HashSet_int___Add
                          (result,(int32_t)local_48.fields._current,
                           (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
        if (bVar2) {
          UI_MapEditorHierarchyPanel__AddDescendants(__this,id_00,result,(MethodInfo *)0x0);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$AddTreeRowsRecursive
// il2cpp: void UI_MapEditorHierarchyPanel__AddTreeRowsRecursive (UI_MapEditorHierarchyPanel_o* __this, int32_t id, int32_t depth, System_Collections_Generic_HashSet_int__o* context, bool forceExpand, const MethodInfo* method);
// 0x1822ad840
// eh: try 0x1822adae0..0x1822adb14 -> pad 0x18333d4c0 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822adb25: mov rdx, qword ptr [rip + 0x1dda7bc]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x1822adb2c: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822adb31: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822adb36: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822adb3b: test rcx, rcx
// asm:   0x1822adb3e: jne 0x1822adb56
// asm:   0x1822adb56: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333d4c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d4c5: push rbp
// asm:   0x18333d4c6: sub rsp, 0x30
// asm:   0x18333d4ca: mov rbp, rdx
// asm:   0x18333d4cd: mov rax, qword ptr [rbp + 0x48]
// asm:   0x18333d4d1: mov rcx, qword ptr [rax]
// asm:   0x18333d4d4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333d4d8: movabs rax, 0
// asm:   0x18333d4e2: add rsp, 0x30
// asm:   0x18333d4e6: pop rbp
// asm:   0x18333d4e7: ret 

void UI_MapEditorHierarchyPanel__AddTreeRowsRecursive
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,int32_t depth,
               System_Collections_Generic_HashSet_int__o *context,bool forceExpand,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar3;
  System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *__this_00;
  UI_MapEditorHierarchyPanel_RowData_array *pUVar4;
  System_Collections_Generic_HashSet_int__o *__this_01;
  MethodInfo *pMVar5;
  bool bVar6;
  uint64_t uVar7;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_02;
  undefined1 local_78 [16];
  Il2CppObject *local_68;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if (Il2CppMethodInitialized_184347516 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_List_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347516 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)
           TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (pSVar3 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_1822adb62;
  bVar6 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                    (pSVar3,id,
                     (MethodInfo_1407110 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
  if (!bVar6) {
    return;
  }
  if ((context != (System_Collections_Generic_HashSet_int__o *)0x0) &&
     (bVar6 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        ((System_Collections_Generic_HashSet_T__o *)context,id,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains),
     !bVar6)) {
    return;
  }
  __this_00 = (__this->fields)._rows;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  UnityEngine_TerrainUtils_TerrainTileCoord___ctor
            ((UnityEngine_TerrainUtils_TerrainTileCoord_o *)local_78,id,depth,(MethodInfo *)0x0);
  pMVar5 = MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_Add;
  if (__this_00 != (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (__this_00->fields)._items;
    if (pUVar4 != (UI_MapEditorHierarchyPanel_RowData_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pUVar4->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pUVar4->m_Items[(int)uVar2].fields.Id = local_78._0_4_;
        pUVar4->m_Items[(int)uVar2].fields.Depth = local_78._4_4_;
      }
      else {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___AddWithResize
                  ((System_Collections_Generic_List_T__o *)__this_00,
                   (UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_o)local_78._0_8_,
                   (MethodInfo_985420 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._treeChildren;
      if (pSVar3 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
        bVar6 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                          (pSVar3,id,
                           (MethodInfo_1407110 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_List_int_ContainsKey);
        if (!bVar6) {
          return;
        }
        pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._treeChildren;
        if ((pSVar3 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) &&
           (uVar7 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                              (pSVar3,id,
                               (MethodInfo_14156F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Item),
           uVar7 != 0)) {
          if (*(int *)(uVar7 + 0x18) == 0) {
            return;
          }
          if (!forceExpand) {
            __this_01 = (__this->fields)._expanded;
            if (__this_01 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1822adb62;
            bVar6 = System_Collections_Generic_HashSet_Int32Enum___Contains
                              ((System_Collections_Generic_HashSet_T__o *)__this_01,id,
                               (MethodInfo_1759C90 *)
                               MethodInfo_System_Collections_Generic_HashSet_int_Contains);
            if (!bVar6) {
              return;
            }
          }
          pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._treeChildren;
          if ((pSVar3 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) &&
             (__this_02 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                          System_Collections_Generic_Dictionary_int__ulong___get_Item
                                    (pSVar3,id,
                                     (MethodInfo_14156F0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Item),
             __this_02 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)) {
            System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_78,__this_02,
                       (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
            local_58.fields._list = (System_Collections_Generic_List_T__o *)local_78._0_8_;
            local_58.fields._index = local_78._8_4_;
            local_58.fields._version = local_78._12_4_;
            local_58.fields._current = local_68;
            local_78._0_4_ = 0;
            local_78._4_4_ = 0;
            local_78._8_8_ = &local_58;
            while (bVar6 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                                     (&local_58,
                                      (MethodInfo_1530180 *)
                                      MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext),
                  bVar6) {
              UI_MapEditorHierarchyPanel__AddTreeRowsRecursive
                        (__this,(int32_t)local_58.fields._current,depth + 1,context,forceExpand,
                         (MethodInfo *)0x0);
            }
            System_Collections_Generic_List_Enumerator_int___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                       MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
            return;
          }
        }
label_1822adb62:
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$MatchesSearch
// il2cpp: bool UI_MapEditorHierarchyPanel__MatchesSearch (UI_MapEditorHierarchyPanel_o* __this, Map_MapObject_o* obj, System_String_o* search, const MethodInfo* method);
// 0x1822b3b10

bool UI_MapEditorHierarchyPanel__MatchesSearch
               (UI_MapEditorHierarchyPanel_o *__this,Map_MapObject_o *obj,System_String_o *search,
               MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  bVar2 = System_String__op_Equality
                    (search,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar2) {
    return true;
  }
  if ((obj != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (obj->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    if ((pMVar1->fields).Name == (System_String_o *)0x0) {
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      pSVar3 = System_String__ToLower((pMVar1->fields).Name,(MethodInfo *)0x0);
    }
    if (pSVar3 != (System_String_o *)0x0) {
      bVar2 = System_String__Contains(pSVar3,search,(MethodInfo *)0x0);
      if (bVar2) {
        return true;
      }
      pMVar1 = (obj->fields).ScriptObject;
      if (pMVar1 != (Map_MapScriptBaseObject_o *)0x0) {
        pSVar3 = System_Int32__ToString(&(pMVar1->fields).Id,(MethodInfo *)0x0);
        bVar2 = System_String__op_Equality(pSVar3,search,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$EnsurePoolSize
// il2cpp: void UI_MapEditorHierarchyPanel__EnsurePoolSize (UI_MapEditorHierarchyPanel_o* __this, int32_t size, const MethodInfo* method);
// 0x1822b0eb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b0fd4: jmp 0x1822b0f31

void UI_MapEditorHierarchyPanel__EnsurePoolSize
               (UI_MapEditorHierarchyPanel_o *__this,int32_t size,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *pSVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_RectMask2D_o *x;
  
  if (Il2CppMethodInitialized_184347517 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Misc/MapEditorHierarchyButton");
    Il2CppMethodInitialized_184347517 = '\x01';
  }
  pSVar1 = (__this->fields)._itemPool;
  while (pSVar1 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    if (size <= (pSVar1->fields)._size) {
      if ((__this->fields)._treeViewEnabled != false) {
        UI_MapEditorHierarchyPanel__OrderVirtualizedChildren(__this,(MethodInfo *)0x0);
      }
      return;
    }
    __this_00 = UI_ElementFactory__InstantiateAndBind
                          ((__this->fields).SinglePanel,"Prefabs/Misc/MapEditorHierarchyButton",(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) break;
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    x = UnityEngine_GameObject__GetComponent_object_
                  (__this_00,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      UnityEngine_GameObject__AddComponent_object_
                (__this_00,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    }
    if ((__this->fields)._itemPool == (System_Collections_Generic_List_GameObject__o *)0x0) break;
    il2cpp_runtime_helper_180012890();
    pSVar1 = (__this->fields)._itemPool;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$BindPooledItem
// il2cpp: void UI_MapEditorHierarchyPanel__BindPooledItem (UI_MapEditorHierarchyPanel_o* __this, UnityEngine_GameObject_o* go, UI_MapEditorHierarchyPanel_RowData_o row, int32_t rowIndex, const MethodInfo* method);
// 0x1822ade80

void UI_MapEditorHierarchyPanel__BindPooledItem
               (UI_MapEditorHierarchyPanel_o *__this,UnityEngine_GameObject_o *go,
               UI_MapEditorHierarchyPanel_RowData_o row,int32_t rowIndex,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_HashSet_int__o *pSVar2;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  bool bVar5;
  bool value;
  UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o *object;
  uint64_t uVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Object_o *x;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_Color_o *pUVar9;
  UnityEngine_UI_LayoutElement_o *pUVar10;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_02;
  UnityEngine_RectOffset_o *__this_03;
  UI_MapEditorHirarchyButton_o *__this_04;
  UnityEngine_Events_UnityAction_o *pUVar11;
  UnityEngine_Events_UnityAction_o *__this_05;
  DG_Tweening_Core_DOSetter_T__o *__this_06;
  DG_Tweening_Core_DOSetter_T__o *__this_07;
  DG_Tweening_Core_DOSetter_T__o *__this_08;
  DG_Tweening_Core_DOSetter_T__o *__this_09;
  UnityEngine_GameObject_o *__this_10;
  UnityEngine_GameObject_o *__this_11;
  UnityEngine_UI_Button_o *x_00;
  UnityEngine_UI_Button_o *x_01;
  int32_t iVar12;
  float fVar13;
  float fVar14;
  DG_Tweening_Core_DOSetter_T__o *local_58 [6];
  
  if (Il2CppMethodInitialized_184347518 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_List_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MapEditorHirarchyButton);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_MapEditorHirarchyButton);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectOffset);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__4);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__5);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__6);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__7);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_PointerEventData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/ArrowDown");
    il2cpp_codegen_initialize_runtime_metadata(&"ArrowDownButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/ArrowRight");
    il2cpp_codegen_initialize_runtime_metadata(&"Highlight");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"ArrowRightButton");
    Il2CppMethodInitialized_184347518 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0);
  UI_MapEditorHierarchyPanel___c__DisplayClass90_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (UI_MapEditorHierarchyPanel___c__DisplayClass90_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).row.fields = row.fields;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
      bVar5 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar1,(object->fields).row.fields.Id,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (!bVar5) {
        if (go == (UnityEngine_GameObject_o *)0x0) goto label_1822aea67;
        bVar5 = false;
label_1822aea29:
        UnityEngine_GameObject__SetActive(go,bVar5,(MethodInfo *)0x0);
        return;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
        uVar6 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                          (pSVar1,(object->fields).row.fields.Id,
                           (MethodInfo_14156F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
        if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          System_Collections_Generic_Dictionary_int__object___set_Item
                    (__this_00,(object->fields).row.fields.Id,(Il2CppObject *)go,
                     (MethodInfo_1423510 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_set_Item);
          if (go != (UnityEngine_GameObject_o *)0x0) {
            pUVar7 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              pUVar7 = UnityEngine_Transform__Find(pUVar7,"Highlight",(MethodInfo *)0x0);
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                pUVar8 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                pSVar2 = (__this->fields)._selected;
                if (pSVar2 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                  bVar5 = System_Collections_Generic_HashSet_Int32Enum___Contains
                                    ((System_Collections_Generic_HashSet_T__o *)pSVar2,
                                     (object->fields).row.fields.Id,
                                     (MethodInfo_1759C90 *)
                                     MethodInfo_System_Collections_Generic_HashSet_int_Contains);
                  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar8,bVar5,(MethodInfo *)0x0);
                    x = (UnityEngine_Object_o *)
                        UI_MapEditorHierarchyPanel__GetOrCreateRowDropOverlay(__this,go,(MethodInfo *)0x0);
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
                    ;
                    if (bVar5) {
                      if (x == (UnityEngine_Object_o *)0x0) goto label_1822aea67;
                      UnityEngine_GameObject__SetActive
                                ((UnityEngine_GameObject_o *)x,
                                 (object->fields).row.fields.Id == (__this->fields)._dropIndicatorId,
                                 (MethodInfo *)0x0);
                    }
                    pUVar7 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                      pUVar7 = UnityEngine_Transform__Find(pUVar7,"Text",(MethodInfo *)0x0);
                      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                        __this_01 = UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)pUVar7,
                                               (MethodInfo_6651A0 *)
                                               MethodInfo_UnityEngine_Component_GetComponent_Text);
                        if (((uVar6 != 0) && (*(longlong *)(uVar6 + 0x20) != 0)) &&
                           (__this_01 != (UnityEngine_UI_Text_o *)0x0)) {
                          (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                                    (__this_01,*(System_String_o **)(*(longlong *)(uVar6 + 0x20) + 0x30),
                                     (__this_01->klass->vtable)._75_set_text.method);
                          UnityEngine_UI_Text__set_horizontalOverflow(__this_01,1,(MethodInfo *)0x0);
                          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                          }
                          pUVar9 = UI_UIManager__GetThemeColor
                                             ((UnityEngine_Color_o *)local_58,"DefaultPanel",
                                              "DefaultLabel","TextColor",
                                              "DefaultPanel",(MethodInfo *)0x0);
                          local_58[0] = *(DG_Tweening_Core_DOSetter_T__o **)&pUVar9->fields;
                          local_58[1]._0_4_ = (pUVar9->fields).b;
                          local_58[1]._4_4_ = (pUVar9->fields).a;
                          (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                                    (__this_01,(UnityEngine_Color_o *)local_58,
                                     (__this_01->klass->vtable)._23_set_color.method);
                          pUVar10 = UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)__this_01,
                                               (MethodInfo_6651A0 *)
                                               MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                          if (pUVar10 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                            (*(pUVar10->klass->vtable)._32_set_minWidth.methodPtr)
                                      (pUVar10,0.0,(pUVar10->klass->vtable)._32_set_minWidth.method);
                            (*(pUVar10->klass->vtable)._36_set_preferredWidth.methodPtr)
                                      (pUVar10,0.0,(pUVar10->klass->vtable)._36_set_preferredWidth.method);
                            (*(pUVar10->klass->vtable)._40_set_flexibleWidth.methodPtr)
                                      (pUVar10,1.0,(pUVar10->klass->vtable)._40_set_flexibleWidth.method);
                            if ((__this->fields)._treeViewEnabled == false) {
                              iVar12 = 10;
                            }
                            else {
                              iVar12 = (object->fields).row.fields.Depth * 0x12 + 6;
                            }
                            __this_02 = UnityEngine_GameObject__GetComponent_object_
                                                  (go,(MethodInfo_6F5650 *)
                                                      MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup
                                                  );
                            __this_03 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
                            UnityEngine_RectOffset___ctor_2ed1030(__this_03,iVar12,0,0,0,(MethodInfo *)0x0);
                            if (__this_02 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                              UnityEngine_UI_LayoutGroup__set_padding
                                        ((UnityEngine_UI_LayoutGroup_o *)__this_02,__this_03,(MethodInfo *)0x0
                                        );
                              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,2.0,
                                         (MethodInfo *)0x0);
                              pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                                  (go,(MethodInfo_6F5650 *)
                                                      MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                                                  );
                              if (pUVar10 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                (*(pUVar10->klass->vtable)._32_set_minWidth.methodPtr)
                                          (pUVar10,0.0,(pUVar10->klass->vtable)._32_set_minWidth.method);
                                fVar13 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                                                   (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
                                iVar12 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                                                   (__this);
                                fVar13 = fVar13 - ((float)iVar12 + (float)iVar12);
                                fVar14 = 0.0;
                                if (0.0 <= fVar13) {
                                  fVar14 = fVar13;
                                }
                                (*(pUVar10->klass->vtable)._36_set_preferredWidth.methodPtr)
                                          (pUVar10,fVar14,
                                           (pUVar10->klass->vtable)._36_set_preferredWidth.method);
                                (*(pUVar10->klass->vtable)._38_set_preferredHeight.methodPtr)
                                          (pUVar10,22.0,
                                           (pUVar10->klass->vtable)._38_set_preferredHeight.method);
                                (*(pUVar10->klass->vtable)._34_set_minHeight.methodPtr)
                                          (pUVar10,22.0,(pUVar10->klass->vtable)._34_set_minHeight.method);
                                (__this->fields)._virtualRowHeight = 22.0;
                                __this_04 = UnityEngine_GameObject__GetComponent_object_
                                                      (go,(MethodInfo_6F5650 *)
                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_MapEditorHirarchyButton
                                                      );
                                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init
                                            ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                }
                                bVar5 = UnityEngine_Object__op_Equality
                                                  ((UnityEngine_Object_o *)__this_04,
                                                   (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                if (bVar5) {
                                  __this_04 = UnityEngine_GameObject__AddComponent_object_
                                                        (go,(MethodInfo_6F4D60 *)
                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_MapEditorHirarchyButton
                                                       );
                                }
                                pUVar11 = il2cpp_codegen_object_new
                                                    ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                                UnityEngine_Events_UnityAction___ctor
                                          ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar11,
                                           (Il2CppObject *)object,
                                           (intptr_t)
                                           MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__0
                                           ,(MethodInfo *)0x0);
                                __this_05 = il2cpp_codegen_object_new
                                                      ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction)
                                ;
                                UnityEngine_Font_FontTextureRebuildCallback___ctor
                                          ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_05,
                                           (Il2CppObject *)object,
                                           (intptr_t)
                                           MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__1
                                           ,(MethodInfo *)0x0);
                                __this_06 = (DG_Tweening_Core_DOSetter_T__o *)
                                            il2cpp_codegen_object_new
                                                      ((Il2CppClass *)
                                                       TypeInfo_UnityEngine_Events_UnityAction_PointerEventData
                                                      );
                                UnityEngine_Events_UnityAction_object____ctor
                                          (__this_06,(Il2CppObject *)object,
                                           (intptr_t)
                                           MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__2
                                           ,(MethodInfo_EB6EC0 *)0x0);
                                __this_07 = (DG_Tweening_Core_DOSetter_T__o *)
                                            il2cpp_codegen_object_new
                                                      ((Il2CppClass *)
                                                       TypeInfo_UnityEngine_Events_UnityAction_PointerEventData
                                                      );
                                UnityEngine_Events_UnityAction_object____ctor
                                          (__this_07,(Il2CppObject *)object,
                                           (intptr_t)
                                           MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__3
                                           ,(MethodInfo_EB6EC0 *)0x0);
                                __this_08 = (DG_Tweening_Core_DOSetter_T__o *)
                                            il2cpp_codegen_object_new
                                                      ((Il2CppClass *)
                                                       TypeInfo_UnityEngine_Events_UnityAction_PointerEventData
                                                      );
                                UnityEngine_Events_UnityAction_object____ctor
                                          (__this_08,(Il2CppObject *)object,
                                           (intptr_t)
                                           MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__4
                                           ,(MethodInfo_EB6EC0 *)0x0);
                                __this_09 = (DG_Tweening_Core_DOSetter_T__o *)
                                            il2cpp_codegen_object_new
                                                      ((Il2CppClass *)
                                                       TypeInfo_UnityEngine_Events_UnityAction_PointerEventData
                                                      );
                                UnityEngine_Events_UnityAction_object____ctor
                                          (__this_09,(Il2CppObject *)object,
                                           (intptr_t)
                                           MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__5
                                           ,(MethodInfo_EB6EC0 *)0x0);
                                local_58[0] = (DG_Tweening_Core_DOSetter_T__o *)
                                              il2cpp_codegen_object_new
                                                        ((Il2CppClass *)
                                                                                                                  
                                                       TypeInfo_UnityEngine_Events_UnityAction_PointerEventData
                                                       );
                                DG_Tweening_Core_DOSetter_object____ctor
                                          (local_58[0],(Il2CppObject *)object,
                                           (intptr_t)
                                           MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__6
                                           ,(MethodInfo_EB6EC0 *)0x0);
                                if ((__this_04 != (UI_MapEditorHirarchyButton_o *)0x0) &&
                                   (pUVar3 = (__this_04->fields).m_OnClick,
                                   pUVar3 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
                                  UnityEngine_Events_UnityEventBase__RemoveAllListeners
                                            ((UnityEngine_Events_UnityEventBase_o *)pUVar3,(MethodInfo *)0x0);
                                  pUVar4 = (UnityEngine_Events_UnityEvent_o *)(__this_04->fields).m_OnClick;
                                  if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                    UnityEngine_Events_UnityEvent__AddListener
                                              (pUVar4,pUVar11,(MethodInfo *)0x0);
                                    (__this_04->fields)._onButtonRelease = __this_05;
                                    Il2CppCodeGenWriteBarrier(&(__this_04->fields)._onButtonRelease,__this_05)
                                    ;
                                    (__this_04->fields)._onRightClick =
                                         (UnityEngine_Events_UnityAction_PointerEventData__o *)__this_06;
                                    Il2CppCodeGenWriteBarrier(&(__this_04->fields)._onRightClick,__this_06);
                                    (__this_04->fields)._onPointerDown =
                                         (UnityEngine_Events_UnityAction_PointerEventData__o *)__this_07;
                                    Il2CppCodeGenWriteBarrier(&(__this_04->fields)._onPointerDown,__this_07);
                                    (__this_04->fields)._onBeginDrag =
                                         (UnityEngine_Events_UnityAction_PointerEventData__o *)__this_08;
                                    Il2CppCodeGenWriteBarrier(&(__this_04->fields)._onBeginDrag,__this_08);
                                    (__this_04->fields)._onDrag =
                                         (UnityEngine_Events_UnityAction_PointerEventData__o *)__this_09;
                                    Il2CppCodeGenWriteBarrier(&(__this_04->fields)._onDrag,__this_09);
                                    (__this_04->fields)._onEndDrag =
                                         (UnityEngine_Events_UnityAction_PointerEventData__o *)local_58[0];
                                    Il2CppCodeGenWriteBarrier(&(__this_04->fields)._onEndDrag,local_58[0]);
                                    UnityEngine_UI_Selectable__set_transition
                                              ((UnityEngine_UI_Selectable_o *)__this_04,0,(MethodInfo *)0x0);
                                    pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                                             (__this->fields)._treeChildren;
                                    if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)
                                    {
                                      bVar5 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                                                        (pSVar1,(object->fields).row.fields.Id,
                                                         (MethodInfo_1407110 *)
                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_Dictionary_int_List_int_ContainsKey
                                                       );
                                      if (bVar5) {
                                        pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                                                 (__this->fields)._treeChildren;
                                        if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)
                                                      0x0) goto label_1822aea67;
                                        uVar6 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                                                          (pSVar1,(object->fields).row.fields.Id,
                                                           (MethodInfo_14156F0 *)
                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Item
                                                       );
                                        if (uVar6 == 0) goto label_1822aea67;
                                        bVar5 = 0 < *(int *)(uVar6 + 0x18);
                                      }
                                      else {
                                        bVar5 = false;
                                      }
                                      pSVar2 = (__this->fields)._expanded;
                                      if (pSVar2 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                                        value = System_Collections_Generic_HashSet_Int32Enum___Contains
                                                          ((System_Collections_Generic_HashSet_T__o *)pSVar2,
                                                           (object->fields).row.fields.Id,
                                                           (MethodInfo_1759C90 *)
                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_int_Contains
                                                       );
                                        pUVar7 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
                                        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                          pUVar7 = UnityEngine_Transform__Find
                                                             (pUVar7,"ArrowRightButton",(MethodInfo *)0x0);
                                          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                            pUVar8 = UnityEngine_Component__get_gameObject
                                                               ((UnityEngine_Component_o *)pUVar7,
                                                                (MethodInfo *)0x0);
                                            pUVar7 = UnityEngine_GameObject__get_transform
                                                               (go,(MethodInfo *)0x0);
                                            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                              pUVar7 = UnityEngine_Transform__Find
                                                                 (pUVar7,"ArrowDownButton",
                                                                  (MethodInfo *)0x0);
                                              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                __this_10 = UnityEngine_Component__get_gameObject
                                                                      ((UnityEngine_Component_o *)pUVar7,
                                                                       (MethodInfo *)0x0);
                                                if (__this_10 != (UnityEngine_GameObject_o *)0x0) {
                                                  pUVar7 = UnityEngine_GameObject__get_transform
                                                                     (__this_10,(MethodInfo *)0x0);
                                                  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                    iVar12 = UnityEngine_Transform__GetSiblingIndex
                                                                       (pUVar7,(MethodInfo *)0x0);
                                                    __this_11 = 
                                                       UI_MapEditorHierarchyPanel__GetOrCreateTreeArrowSpacer
                                                                 (__this,go,iVar12,(MethodInfo *)0x0);
                                                    UI_MapEditorHierarchyPanel__SetTreeArrowIcon
                                                              (__this,pUVar8,"Icons/Navigation/ArrowRight",
                                                               (MethodInfo *)0x0);
                                                    UI_MapEditorHierarchyPanel__SetTreeArrowIcon
                                                              (__this,__this_10,"Icons/Navigation/ArrowDown",
                                                               (MethodInfo *)0x0);
                                                    if (((__this->fields)._treeViewEnabled & bVar5) == 0) {
                                                      if (pUVar8 == (UnityEngine_GameObject_o *)0x0)
                                                      goto label_1822aea67;
                                                      UnityEngine_GameObject__SetActive
                                                                (pUVar8,false,(MethodInfo *)0x0);
                                                      UnityEngine_GameObject__SetActive
                                                                (__this_10,false,(MethodInfo *)0x0);
                                                      if (__this_11 == (UnityEngine_GameObject_o *)0x0)
                                                      goto label_1822aea67;
                                                      UnityEngine_GameObject__SetActive
                                                                (__this_11,(__this->fields)._treeViewEnabled,
                                                                 (MethodInfo *)0x0);
                                                    }
                                                    else {
                                                      if (__this_11 == (UnityEngine_GameObject_o *)0x0)
                                                      goto label_1822aea67;
                                                      UnityEngine_GameObject__SetActive
                                                                (__this_11,false,(MethodInfo *)0x0);
                                                      if (pUVar8 == (UnityEngine_GameObject_o *)0x0)
                                                      goto label_1822aea67;
                                                      UnityEngine_GameObject__SetActive
                                                                (pUVar8,!value,(MethodInfo *)0x0);
                                                      UnityEngine_GameObject__SetActive
                                                                (__this_10,value,(MethodInfo *)0x0);
                                                      x_00 = UnityEngine_GameObject__GetComponent_object_
                                                                       (pUVar8,(MethodInfo_6F5650 *)
                                                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                                                      x_01 = UnityEngine_GameObject__GetComponent_object_
                                                                       (__this_10,
                                                                        (MethodInfo_6F5650 *)
                                                                                                                                                
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                                                      if ((TypeInfo_UnityEngine_Object->_2).
                                                          cctor_finished_or_no_cctor == 0) {
                                                        il2cpp_codegen_runtime_class_init
                                                                  ((Il2CppClass *)TypeInfo_UnityEngine_Object)
                                                        ;
                                                      }
                                                      bVar5 = UnityEngine_Object__op_Inequality
                                                                        ((UnityEngine_Object_o *)x_00,
                                                                         (UnityEngine_Object_o *)0x0,
                                                                         (MethodInfo *)0x0);
                                                      if (bVar5) {
                                                        if ((x_00 == (UnityEngine_UI_Button_o *)0x0) ||
                                                           (pUVar3 = (x_00->fields).m_OnClick,
                                                           pUVar3 == (
                                                       UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0))
                                                       goto label_1822aea67;
                                                       UnityEngine_Events_UnityEventBase__RemoveAllListeners
                                                                 ((UnityEngine_Events_UnityEventBase_o *)
                                                                  pUVar3,(MethodInfo *)0x0);
                                                       pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                                                                (x_00->fields).m_OnClick;
                                                       pUVar11 = il2cpp_codegen_object_new
                                                                           ((Il2CppClass *)
                                                                                                                                                        
                                                       TypeInfo_UnityEngine_Events_UnityAction);
                                                       UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                                 ((
                                                       UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar11
                                                       ,(Il2CppObject *)object,
                                                       (intptr_t)
                                                       MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__7
                                                       ,(MethodInfo *)0x0);
                                                       if (pUVar4 == (UnityEngine_Events_UnityEvent_o *)0x0)
                                                       goto label_1822aea67;
                                                       UnityEngine_Events_UnityEvent__AddListener
                                                                 (pUVar4,pUVar11,(MethodInfo *)0x0);
                                                      }
                                                      if ((TypeInfo_UnityEngine_Object->_2).
                                                          cctor_finished_or_no_cctor == 0) {
                                                        il2cpp_codegen_runtime_class_init
                                                                  ((Il2CppClass *)TypeInfo_UnityEngine_Object)
                                                        ;
                                                      }
                                                      bVar5 = UnityEngine_Object__op_Inequality
                                                                        ((UnityEngine_Object_o *)x_01,
                                                                         (UnityEngine_Object_o *)0x0,
                                                                         (MethodInfo *)0x0);
                                                      if (bVar5) {
                                                        if ((x_01 == (UnityEngine_UI_Button_o *)0x0) ||
                                                           (pUVar3 = (x_01->fields).m_OnClick,
                                                           pUVar3 == (
                                                       UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0))
                                                       goto label_1822aea67;
                                                       UnityEngine_Events_UnityEventBase__RemoveAllListeners
                                                                 ((UnityEngine_Events_UnityEventBase_o *)
                                                                  pUVar3,(MethodInfo *)0x0);
                                                       pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                                                                (x_01->fields).m_OnClick;
                                                       pUVar11 = il2cpp_codegen_object_new
                                                                           ((Il2CppClass *)
                                                                                                                                                        
                                                       TypeInfo_UnityEngine_Events_UnityAction);
                                                       UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                                 ((
                                                       UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar11
                                                       ,(Il2CppObject *)object,
                                                       (intptr_t)
                                                       MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass90_0_BindPooledItem_b__8
                                                       ,(MethodInfo *)0x0);
                                                       if (pUVar4 == (UnityEngine_Events_UnityEvent_o *)0x0)
                                                       goto label_1822aea67;
                                                       UnityEngine_Events_UnityEvent__AddListener
                                                                 (pUVar4,pUVar11,(MethodInfo *)0x0);
                                                      }
                                                    }
                                                    bVar5 = true;
                                                    goto label_1822aea29;
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
label_1822aea67:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$SetTreeArrowIcon
// il2cpp: void UI_MapEditorHierarchyPanel__SetTreeArrowIcon (UI_MapEditorHierarchyPanel_o* __this, UnityEngine_GameObject_o* arrowObject, System_String_o* icon, const MethodInfo* method);
// 0x1822b5ea0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b616f: jmp 0x1822b6176
// asm:   0x1822b6171: xor esi, esi

void UI_MapEditorHierarchyPanel__SetTreeArrowIcon
               (UI_MapEditorHierarchyPanel_o *__this,UnityEngine_GameObject_o *arrowObject,
               System_String_o *icon,MethodInfo *method)

{
  UnityEngine_UI_ColorBlock_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  UnityEngine_Quaternion_StaticFields *pUVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  UnityEngine_UI_RawImage_o *pUVar7;
  System_String_o *path;
  bool bVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_UI_LayoutElement_o *x;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_Texture_o *pUVar10;
  UnityEngine_Texture_o *value;
  undefined8 uVar11;
  UnityEngine_Color_Fields local_88;
  UnityEngine_UI_ColorBlock_o local_78;
  
  if (Il2CppMethodInitialized_184347519 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_184347519 = '\x01';
  }
  if (arrowObject == (UnityEngine_GameObject_o *)0x0) goto label_1822b63f2;
  pUVar9 = UnityEngine_GameObject__get_transform(arrowObject,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_1822b63f2;
  pUVar5 = TypeInfo_UnityEngine_Quaternion->static_fields;
  local_88.r = (pUVar5->identityQuaternion).fields.x;
  local_88.g = (pUVar5->identityQuaternion).fields.y;
  local_88.b = (pUVar5->identityQuaternion).fields.z;
  local_88.a = (pUVar5->identityQuaternion).fields.w;
  UnityEngine_Transform__set_localRotation(pUVar9,(UnityEngine_Quaternion_o *)&local_88,(MethodInfo *)0x0);
  pUVar9 = UnityEngine_GameObject__get_transform(arrowObject,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18433dbeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbeb = '\x01';
  }
  pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2 = (pUVar6->oneVector).fields.x;
  uVar3 = (pUVar6->oneVector).fields.y;
  uVar11._0_4_ = (float)uVar2 * 2.25;
  uVar11._4_4_ = (float)uVar3 * 2.25;
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_1822b63f2;
  local_88.b = (pUVar6->oneVector).fields.z * 2.25;
  local_88._0_8_ = uVar11;
  UnityEngine_Transform__set_localScale(pUVar9,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
  x = UnityEngine_GameObject__GetComponent_object_
                (arrowObject,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                );
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if (x == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1822b63f2;
    (*(x->klass->vtable)._32_set_minWidth.methodPtr)(x,16.0,(x->klass->vtable)._32_set_minWidth.method);
    (*(x->klass->vtable)._34_set_minHeight.methodPtr)(x,18.0,(x->klass->vtable)._34_set_minHeight.method);
    (*(x->klass->vtable)._36_set_preferredWidth.methodPtr)
              (x,16.0,(x->klass->vtable)._36_set_preferredWidth.method);
    (*(x->klass->vtable)._38_set_preferredHeight.methodPtr)
              (x,18.0,(x->klass->vtable)._38_set_preferredHeight.method);
  }
  __this_00 = UnityEngine_GameObject__GetComponent_object_
                        (arrowObject,
                         (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if (__this_00 == (UnityEngine_UI_Button_o *)0x0) goto label_1822b63f2;
    pUVar7 = (UnityEngine_UI_RawImage_o *)(__this_00->fields).m_TargetGraphic;
    if (pUVar7 == (UnityEngine_UI_RawImage_o *)0x0) goto label_1822b6173;
    bVar4 = (TypeInfo_UnityEngine_UI_RawImage->_2).typeHierarchyDepth;
    if (((pUVar7->klass->_2).typeHierarchyDepth < bVar4) ||
       (bVar8 = true,
       (pUVar7->klass->_2).typeHierarchy[(ulonglong)bVar4 - 1] !=
       (Il2CppClass *)TypeInfo_UnityEngine_UI_RawImage)) {
      bVar8 = false;
    }
    __this_01 = (UnityEngine_UI_RawImage_o *)0x0;
    if (bVar8) {
      __this_01 = pUVar7;
    }
  }
  else {
label_1822b6173:
    __this_01 = (UnityEngine_UI_RawImage_o *)0x0;
  }
  value = (UnityEngine_Texture_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (arrowObject,
                           (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      __this_01 = UnityEngine_GameObject__AddComponent_object_
                            (arrowObject,
                             (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_RawImage);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      if (__this_00 == (UnityEngine_UI_Button_o *)0x0) goto label_1822b63f2;
      UnityEngine_UI_Selectable__set_targetGraphic
                ((UnityEngine_UI_Selectable_o *)__this_00,(UnityEngine_UI_Graphic_o *)__this_01,
                 (MethodInfo *)0x0);
    }
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar10 = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(path,icon,true,(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_UI_RawImage_o *)0x0) {
label_1822b63f2:
    ThrowNullReferenceException();
  }
  if (pUVar10 != (UnityEngine_Texture_o *)0x0) {
    if (pUVar10->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
      value = pUVar10;
    }
    if (value == (UnityEngine_Texture_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar10);
    }
  }
  UnityEngine_UI_RawImage__set_texture(__this_01,value,(MethodInfo *)0x0);
  local_88.r = 1.0;
  local_88.g = 1.0;
  local_88.b = 1.0;
  local_88.a = 1.0;
  (*(__this_01->klass->vtable)._23_set_color.methodPtr)
            (__this_01,(UnityEngine_Color_o *)&local_88,(__this_01->klass->vtable)._23_set_color.method);
  (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
            (__this_01,true,(__this_01->klass->vtable)._25_set_raycastTarget.method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if (__this_00 == (UnityEngine_UI_Button_o *)0x0) goto label_1822b63f2;
    UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this_00,1,(MethodInfo *)0x0);
    pUVar1 = &(__this_00->fields).m_Colors;
    local_78.fields.m_NormalColor.fields.r = (pUVar1->fields).m_NormalColor.fields.r;
    local_78.fields.m_NormalColor.fields.g = (pUVar1->fields).m_NormalColor.fields.g;
    pUVar1 = &(__this_00->fields).m_Colors;
    local_78.fields.m_NormalColor.fields.b = (pUVar1->fields).m_NormalColor.fields.b;
    local_78.fields.m_NormalColor.fields.a = (pUVar1->fields).m_NormalColor.fields.a;
    pUVar1 = &(__this_00->fields).m_Colors;
    local_78.fields.m_HighlightedColor.fields.r = (pUVar1->fields).m_HighlightedColor.fields.r;
    local_78.fields.m_HighlightedColor.fields.g = (pUVar1->fields).m_HighlightedColor.fields.g;
    pUVar1 = &(__this_00->fields).m_Colors;
    local_78.fields.m_HighlightedColor.fields.b = (pUVar1->fields).m_HighlightedColor.fields.b;
    local_78.fields.m_HighlightedColor.fields.a = (pUVar1->fields).m_HighlightedColor.fields.a;
    local_78.fields.m_ColorMultiplier = (__this_00->fields).m_Colors.fields.m_ColorMultiplier;
    local_78.fields.m_FadeDuration = (__this_00->fields).m_Colors.fields.m_FadeDuration;
    pUVar1 = &(__this_00->fields).m_Colors;
    local_78.fields.m_PressedColor.fields.r = (pUVar1->fields).m_PressedColor.fields.r;
    local_78.fields.m_PressedColor.fields.g = (pUVar1->fields).m_PressedColor.fields.g;
    pUVar1 = &(__this_00->fields).m_Colors;
    local_78.fields.m_PressedColor.fields.b = (pUVar1->fields).m_PressedColor.fields.b;
    local_78.fields.m_PressedColor.fields.a = (pUVar1->fields).m_PressedColor.fields.a;
    pUVar1 = &(__this_00->fields).m_Colors;
    local_78.fields.m_SelectedColor.fields.r = (pUVar1->fields).m_SelectedColor.fields.r;
    local_78.fields.m_SelectedColor.fields.g = (pUVar1->fields).m_SelectedColor.fields.g;
    pUVar1 = &(__this_00->fields).m_Colors;
    local_78.fields.m_SelectedColor.fields.b = (pUVar1->fields).m_SelectedColor.fields.b;
    local_78.fields.m_SelectedColor.fields.a = (pUVar1->fields).m_SelectedColor.fields.a;
    pUVar1 = &(__this_00->fields).m_Colors;
    local_78.fields.m_DisabledColor.fields.r = (pUVar1->fields).m_DisabledColor.fields.r;
    local_78.fields.m_DisabledColor.fields.g = (pUVar1->fields).m_DisabledColor.fields.g;
    pUVar1 = &(__this_00->fields).m_Colors;
    local_78.fields.m_DisabledColor.fields.b = (pUVar1->fields).m_DisabledColor.fields.b;
    local_78.fields.m_DisabledColor.fields.a = (pUVar1->fields).m_DisabledColor.fields.a;
    if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
    }
    local_78.fields.m_NormalColor.fields._0_8_ = 0x3f2666663f266666;
    local_78.fields.m_NormalColor.fields.b = 0.65;
    local_78.fields.m_NormalColor.fields.a = 1.0;
    local_78.fields.m_HighlightedColor.fields.r = 0.8;
    local_78.fields.m_HighlightedColor.fields.g = 0.8;
    local_78.fields.m_HighlightedColor.fields.b = 0.8;
    local_78.fields.m_HighlightedColor.fields.a = 1.0;
    local_78.fields.m_PressedColor.fields._0_8_ = 0x3f2666663f266666;
    local_78.fields.m_PressedColor.fields.b = 0.65;
    local_78.fields.m_PressedColor.fields.a = 1.0;
    local_78.fields.m_SelectedColor.fields._0_8_ = 0x3f2666663f266666;
    local_78.fields.m_SelectedColor.fields.b = 0.65;
    local_78.fields.m_SelectedColor.fields.a = 1.0;
    local_78.fields.m_DisabledColor.fields.r = 0.45;
    local_78.fields.m_DisabledColor.fields.g = 0.45;
    local_78.fields.m_DisabledColor.fields.b = 0.45;
    local_78.fields.m_DisabledColor.fields.a = 1.0;
    UnityEngine_UI_Selectable__set_colors
              ((UnityEngine_UI_Selectable_o *)__this_00,&local_78,(MethodInfo *)0x0);
  }
  return;
}


// UI.MapEditorHierarchyPanel$$GetOrCreateTreeArrowSpacer
// il2cpp: UnityEngine_GameObject_o* UI_MapEditorHierarchyPanel__GetOrCreateTreeArrowSpacer (UI_MapEditorHierarchyPanel_o* __this, UnityEngine_GameObject_o* row, int32_t siblingIndex, const MethodInfo* method);
// 0x1822b2860
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b2b20: xor edx, edx
// asm:   0x1822b2b22: mov rcx, rbx
// asm:   0x1822b2b25: call 0x182f14830  ; UnityEngine_Component__get_gameObject()
// asm:   0x1822b2b2a: jmp 0x1822b2b06

UnityEngine_GameObject_o *
UI_MapEditorHierarchyPanel__GetOrCreateTreeArrowSpacer
          (UI_MapEditorHierarchyPanel_o *__this,UnityEngine_GameObject_o *row,int32_t siblingIndex,
          MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Type_array *components;
  System_Type_o *pSVar3;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  
  if (Il2CppMethodInitialized_18434751a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"TreeArrowSpacer");
    Il2CppMethodInitialized_18434751a = '\x01';
  }
  if ((row != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__get_transform(row,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"TreeArrowSpacer",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        return pUVar5;
      }
    }
    else {
      components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
      handle = TypeRef_UnityEngine_RectTransform;
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      if (components != (System_Type_array *)0x0) {
        if ((pSVar3 != (System_Type_o *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
        if ((int)components->max_length != 0) {
          components->m_Items[0] = pSVar3;
          Il2CppCodeGenWriteBarrier(components->m_Items,pSVar3);
          pSVar3 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,
                              (MethodInfo *)0x0);
          if ((pSVar3 != (System_Type_o *)0x0) &&
             (pIVar4 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class),
             pIVar4 == (Il2CppObject *)0x0)) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
          if (1 < (uint)components->max_length) {
            components->m_Items[1] = pSVar3;
            Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar3);
            pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
            UnityEngine_GameObject___ctor_2f1abe0(pUVar5,"TreeArrowSpacer",components,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
              pUVar2 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
              parent = UnityEngine_GameObject__get_transform(row,(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent_2f5a7e0(pUVar2,parent,false,(MethodInfo *)0x0);
                pUVar2 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetSiblingIndex(pUVar2,siblingIndex,(MethodInfo *)0x0);
                  pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar5,(MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                  if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    (*(pUVar6->klass->vtable)._32_set_minWidth.methodPtr)
                              (pUVar6,16.0,(pUVar6->klass->vtable)._32_set_minWidth.method);
                    (*(pUVar6->klass->vtable)._34_set_minHeight.methodPtr)
                              (pUVar6,18.0,(pUVar6->klass->vtable)._34_set_minHeight.method);
                    (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
                              (pUVar6,16.0,(pUVar6->klass->vtable)._36_set_preferredWidth.method);
                    (*(pUVar6->klass->vtable)._38_set_preferredHeight.methodPtr)
                              (pUVar6,18.0,(pUVar6->klass->vtable)._38_set_preferredHeight.method);
                    return pUVar5;
                  }
                }
              }
            }
            goto label_1822b2b2c;
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_1822b2b2c:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$GetViewportRect
// il2cpp: UnityEngine_RectTransform_o* UI_MapEditorHierarchyPanel__GetViewportRect (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b3000

UnityEngine_RectTransform_o *
UI_MapEditorHierarchyPanel__GetViewportRect(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  
  if (Il2CppMethodInitialized_18434751b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434751b = '\x01';
  }
  pUVar2 = (__this->fields).SinglePanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return (UnityEngine_RectTransform_o *)0x0;
  }
  pUVar2 = (__this->fields).SinglePanel;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return (UnityEngine_RectTransform_o *)0x0;
    }
    pUVar2 = (__this->fields).SinglePanel;
    if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        return (UnityEngine_RectTransform_o *)0x0;
      }
      pUVar2 = (__this->fields).SinglePanel;
      if (((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
          (pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0),
          pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
         (pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        pUVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar2,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        return pUVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$EnsureVirtualizationElements
// il2cpp: void UI_MapEditorHierarchyPanel__EnsureVirtualizationElements (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b1010

void UI_MapEditorHierarchyPanel__EnsureVirtualizationElements
               (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_ScrollRectEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_01;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_ScrollRect_o *pUVar3;
  DG_Tweening_Core_DOSetter_Vector2__o *pDVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  
  if (Il2CppMethodInitialized_18434751c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorHierarchyPanel_OnScrollValueChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_Vector2_AddListener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_Vector2_RemoveListener);
    il2cpp_codegen_initialize_runtime_metadata(&"TreeVirtualTopSpacer");
    il2cpp_codegen_initialize_runtime_metadata(&"TreeVirtualBottomSpacer");
    Il2CppMethodInitialized_18434751c = '\x01';
  }
  pUVar3 = (__this->fields)._scrollRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).SinglePanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = (__this->fields).SinglePanel;
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1822b1371;
      pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        pUVar2 = (__this->fields).SinglePanel;
        if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1822b1371;
        pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1822b1371;
        pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          pUVar2 = (__this->fields).SinglePanel;
          if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1822b1371;
          pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0);
          if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1822b1371;
          pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0);
          if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1822b1371;
          pUVar3 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar2,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
          (__this->fields)._scrollRect = pUVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._scrollRect,pUVar3);
        }
      }
    }
    pUVar3 = (__this->fields)._scrollRect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar3 = (__this->fields)._scrollRect;
      if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        __this_00 = (pUVar3->fields).m_OnValueChanged;
        pDVar4 = (DG_Tweening_Core_DOSetter_Vector2__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_Vector2);
        UnityEngine_Events_UnityAction_Vector2____ctor
                  (pDVar4,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_OnScrollValueChanged,
                   (MethodInfo_E5A7E0 *)0x0);
        if (__this_00 != (UnityEngine_UI_ScrollRect_ScrollRectEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___RemoveListener
                    ((UnityEngine_Events_UnityEvent_T0__T1__T2__o *)__this_00,
                     (UnityEngine_Events_UnityAction_T0__T1__T2__o *)pDVar4,
                     (MethodInfo_EBD4A0 *)MethodInfo_UnityEngine_Events_UnityEvent_Vector2_RemoveListener);
          pUVar3 = (__this->fields)._scrollRect;
          if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
            __this_01 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pUVar3->fields).m_OnValueChanged;
            pDVar4 = (DG_Tweening_Core_DOSetter_Vector2__o *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_Vector2)
            ;
            UnityEngine_Events_UnityAction_Vector2____ctor
                      (pDVar4,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_OnScrollValueChanged,
                       (MethodInfo_E5A7E0 *)0x0);
            if (__this_01 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
              UnityEngine_Events_UnityEvent_Vector2___AddListener
                        (__this_01,(UnityEngine_Events_UnityAction_T0__o *)pDVar4,
                         (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_Vector2_AddListener);
              goto label_1822b12ae;
            }
          }
        }
      }
label_1822b1371:
      ThrowNullReferenceException();
    }
  }
label_1822b12ae:
  pUVar5 = (__this->fields)._topSpacer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar5 = UI_MapEditorHierarchyPanel__CreateSpacer(__this,"TreeVirtualTopSpacer",(MethodInfo *)0x0);
    (__this->fields)._topSpacer = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._topSpacer,pUVar5);
  }
  pUVar5 = (__this->fields)._bottomSpacer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar5 = UI_MapEditorHierarchyPanel__CreateSpacer(__this,"TreeVirtualBottomSpacer",(MethodInfo *)0x0);
    (__this->fields)._bottomSpacer = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._bottomSpacer,pUVar5);
  }
  UI_MapEditorHierarchyPanel__OrderVirtualizedChildren(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel$$CreateSpacer
// il2cpp: UnityEngine_UI_LayoutElement_o* UI_MapEditorHierarchyPanel__CreateSpacer (UI_MapEditorHierarchyPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822afe70

UnityEngine_UI_LayoutElement_o *
UI_MapEditorHierarchyPanel__CreateSpacer
          (UI_MapEditorHierarchyPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  
  if (Il2CppMethodInitialized_18434751d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_18434751d = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_1822b003f:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar1);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar1);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(__this_00,name,components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_2f5a7e0
                    (__this_01,(__this->fields).SinglePanel,false,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_6F5650 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar3->klass->vtable)._34_set_minHeight.methodPtr)
                      (pUVar3,0.0,(pUVar3->klass->vtable)._34_set_minHeight.method);
            (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar3,0.0,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
            (*(pUVar3->klass->vtable)._42_set_flexibleHeight.methodPtr)
                      (pUVar3,0.0,(pUVar3->klass->vtable)._42_set_flexibleHeight.method);
            return pUVar3;
          }
        }
      }
      goto label_1822b003f;
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.MapEditorHierarchyPanel$$SetVirtualizationActive
// il2cpp: void UI_MapEditorHierarchyPanel__SetVirtualizationActive (UI_MapEditorHierarchyPanel_o* __this, bool active, const MethodInfo* method);
// 0x1822b6410

void UI_MapEditorHierarchyPanel__SetVirtualizationActive
               (UI_MapEditorHierarchyPanel_o *__this,bool active,MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (Il2CppMethodInitialized_18434751e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434751e = '\x01';
  }
  UI_MapEditorHierarchyPanel__EnsureVirtualizationElements(__this,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._topSpacer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._topSpacer;
    if (pUVar1 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1822b655c;
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_1822b655c;
    UnityEngine_GameObject__SetActive(pUVar3,active,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._topSpacer;
    if (pUVar1 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1822b655c;
    (*(pUVar1->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar1,0.0,(pUVar1->klass->vtable)._38_set_preferredHeight.method);
  }
  pUVar1 = (__this->fields)._bottomSpacer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._bottomSpacer;
    if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar3,active,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._bottomSpacer;
        if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar1->klass->vtable)._38_set_preferredHeight.methodPtr)
                    (pUVar1,0.0,(pUVar1->klass->vtable)._38_set_preferredHeight.method);
          goto label_1822b653d;
        }
      }
    }
label_1822b655c:
    ThrowNullReferenceException();
  }
label_1822b653d:
  if (active) {
    UI_MapEditorHierarchyPanel__OrderVirtualizedChildren(__this,(MethodInfo *)0x0);
  }
  return;
}


// UI.MapEditorHierarchyPanel$$OrderVirtualizedChildren
// il2cpp: void UI_MapEditorHierarchyPanel__OrderVirtualizedChildren (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b5360
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b5449: nop dword ptr [rax]
// asm:   0x1822b54a2: jmp 0x1822b5450

void UI_MapEditorHierarchyPanel__OrderVirtualizedChildren
               (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  bool bVar2;
  int index;
  UnityEngine_Transform_o *pUVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  UnityEngine_GameObject_o *__this_00;
  int32_t index_00;
  
  if (Il2CppMethodInitialized_18434751f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434751f = '\x01';
  }
  pUVar1 = (__this->fields)._topSpacer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar1 = (__this->fields)._bottomSpacer;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar1 = (__this->fields)._topSpacer;
      if ((pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        index = UnityEngine_Transform__GetSiblingIndex(pUVar3,(MethodInfo *)0x0);
        index_00 = 0;
        pSVar4 = (__this->fields)._itemPool;
        if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          while (index = index + 1, index_00 < (pSVar4->fields)._size) {
            pSVar4 = (__this->fields)._itemPool;
            if (((pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) ||
                (__this_00 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                       ((System_Collections_Generic_List_object__o *)pSVar4,index_00,
                                        (MethodInfo_92B830 *)
                                        MethodInfo_System_Collections_Generic_List_GameObject_get_Item),
                __this_00 == (UnityEngine_GameObject_o *)0x0)) ||
               (pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
               pUVar3 == (UnityEngine_Transform_o *)0x0)) goto label_1822b54d9;
            UnityEngine_Transform__SetSiblingIndex(pUVar3,index,(MethodInfo *)0x0);
            pSVar4 = (__this->fields)._itemPool;
            index_00 = index_00 + 1;
            if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_1822b54d9;
          }
          pUVar1 = (__this->fields)._bottomSpacer;
          if ((pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetSiblingIndex(pUVar3,index,(MethodInfo *)0x0);
            return;
          }
        }
      }
label_1822b54d9:
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.MapEditorHierarchyPanel$$OnScrollValueChanged
// il2cpp: void UI_MapEditorHierarchyPanel__OnScrollValueChanged (UI_MapEditorHierarchyPanel_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x1822b5340

void UI_MapEditorHierarchyPanel__OnScrollValueChanged
               (UI_MapEditorHierarchyPanel_o *__this,UnityEngine_Vector2_o value,MethodInfo *method)

{
  if ((__this->fields)._treeViewEnabled != false) {
    UI_MapEditorHierarchyPanel__RenderVirtualizedRows(__this,false,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MapEditorHierarchyPanel$$GetVirtualStride
// il2cpp: float UI_MapEditorHierarchyPanel__GetVirtualStride (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b3430

float UI_MapEditorHierarchyPanel__GetVirtualStride(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  bool bVar1;
  UnityEngine_UI_VerticalLayoutGroup_o *x;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184347520 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347520 = '\x01';
  }
  fVar2 = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                    (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
  __this_00 = (__this->fields).SinglePanel;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    x = UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)__this_00,
                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto label_1822b34ed;
      fVar2 = (x->fields).m_Spacing;
    }
    fVar2 = fVar2 + (__this->fields)._virtualRowHeight;
    fVar3 = 1.0;
    if (1.0 <= fVar2) {
      fVar3 = fVar2;
    }
    return fVar3;
  }
label_1822b34ed:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$GetVirtualPoolSize
// il2cpp: int32_t UI_MapEditorHierarchyPanel__GetVirtualPoolSize (UI_MapEditorHierarchyPanel_o* __this, int32_t totalRows, const MethodInfo* method);
// 0x1822b3140

int32_t UI_MapEditorHierarchyPanel__GetVirtualPoolSize
                  (UI_MapEditorHierarchyPanel_o *__this,int32_t totalRows,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  bool bVar1;
  int32_t iVar2;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Rect_o *pUVar3;
  UnityEngine_UI_VerticalLayoutGroup_o *x;
  float viewportHeight;
  float spacing;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_184347521 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184347521 = '\x01';
  }
  viewportHeight =
       (*(__this->klass->vtable)._31_GetPanelHeight.methodPtr)
                 (__this,(__this->klass->vtable)._31_GetPanelHeight.method);
  __this_01 = UI_MapEditorHierarchyPanel__GetViewportRect(__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto label_1822b32ba;
    pUVar3 = UnityEngine_RectTransform__get_rect(local_38,__this_01,(MethodInfo *)0x0);
    viewportHeight = (pUVar3->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
  }
  spacing = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                      (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
  __this_00 = (__this->fields).SinglePanel;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    x = UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)__this_00,
                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto label_1822b32ba;
      spacing = (x->fields).m_Spacing;
    }
    iVar2 = UI_MapEditorHierarchyVirtualization__ComputePoolSize
                      (viewportHeight,(__this->fields)._virtualRowHeight,spacing,0xe,0x28,totalRows,
                       (MethodInfo *)0x0);
    return iVar2;
  }
label_1822b32ba:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$GetListHeaderOffset
// il2cpp: float UI_MapEditorHierarchyPanel__GetListHeaderOffset (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_MapEditorHierarchyPanel__GetListHeaderOffset(UI_MapEditorHierarchyPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.MapEditorHierarchyPanel$$GetVirtualStartIndex
// il2cpp: int32_t UI_MapEditorHierarchyPanel__GetVirtualStartIndex (UI_MapEditorHierarchyPanel_o* __this, int32_t maxStart, int32_t totalRows, int32_t poolSize, float stride, const MethodInfo* method);
// 0x1822b32c0

int32_t UI_MapEditorHierarchyPanel__GetVirtualStartIndex
                  (UI_MapEditorHierarchyPanel_o *__this,int32_t maxStart,int32_t totalRows,int32_t poolSize,
                  float stride,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_Vector2_o UVar5;
  float verticalNormalizedPosition;
  float fStackX_c;
  
  if (Il2CppMethodInitialized_184347522 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347522 = '\x01';
  }
  pUVar1 = (__this->fields)._scrollRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (__this->fields)._scrollRect;
    if (pUVar1 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_1822b3427;
    pUVar2 = (pUVar1->fields).m_Content;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (__this->fields)._scrollRect;
      if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).m_Content, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar5 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
        fStackX_c = UVar5.fields.y;
        iVar4 = UI_MapEditorHierarchyVirtualization__ComputeStartIndex
                          (fStackX_c,stride,0xe,totalRows,poolSize,(MethodInfo *)0x0);
        if (iVar4 < 0) {
          return 0;
        }
        if (maxStart < iVar4) {
          return maxStart;
        }
        return iVar4;
      }
      goto label_1822b3427;
    }
  }
  pUVar1 = (__this->fields)._scrollRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (__this->fields)._scrollRect;
    if (pUVar1 == (UnityEngine_UI_ScrollRect_o *)0x0) {
label_1822b3427:
      ThrowNullReferenceException();
    }
    verticalNormalizedPosition =
         UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(pUVar1,(MethodInfo *)0x0);
    iVar4 = UI_MapEditorHierarchyVirtualization__ComputeStartIndexFromNormalized
                      (verticalNormalizedPosition,maxStart,(MethodInfo *)0x0);
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}


// UI.MapEditorHierarchyPanel$$RenderVirtualizedRows
// il2cpp: void UI_MapEditorHierarchyPanel__RenderVirtualizedRows (UI_MapEditorHierarchyPanel_o* __this, bool forceRebind, const MethodInfo* method);
// 0x1822b57c0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b5ae3: jmp 0x1822b5b38
// asm:   0x1822b5b12: mov esi, r15d
// asm:   0x1822b5b15: jmp 0x1822b5b3a
// asm:   0x1822b5c2c: nop dword ptr [rax]
// asm:   0x1822b5cc0: jmp 0x1822b5def
// asm:   0x1822b5db8: jmp 0x1822b5d77

void UI_MapEditorHierarchyPanel__RenderVirtualizedRows
               (UI_MapEditorHierarchyPanel_o *__this,bool forceRebind,MethodInfo *method)

{
  int totalRows;
  System_Collections_Generic_Dictionary_int__GameObject__o *__this_00;
  System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *pSVar1;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  bool bVar5;
  int size;
  int32_t iVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Rect_o *pUVar8;
  UnityEngine_UI_VerticalLayoutGroup_o *x;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_GameObject_o *pUVar10;
  UI_MapEditorHierarchyPanel_RowData_o row;
  int maxStart;
  int index;
  int start;
  float fVar11;
  float fVar12;
  float fStackX_c;
  UnityEngine_Rect_o local_48 [3];
  
  if (Il2CppMethodInitialized_184347523 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347523 = '\x01';
  }
  UI_MapEditorHierarchyPanel__EnsureVirtualizationElements(__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._idToItem;
  if (__this_00 == (System_Collections_Generic_Dictionary_int__GameObject__o *)0x0) goto label_1822b5def;
  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_Clear);
  pSVar1 = (__this->fields)._rows;
  if (pSVar1 == (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0) goto label_1822b5def;
  totalRows = (pSVar1->fields)._size;
  if (Il2CppMethodInitialized_184347521 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184347521 = '\x01';
  }
  fVar11 = (*(__this->klass->vtable)._31_GetPanelHeight.methodPtr)
                     (__this,(__this->klass->vtable)._31_GetPanelHeight.method);
  pUVar7 = UI_MapEditorHierarchyPanel__GetViewportRect(__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_1822b5def;
    pUVar8 = UnityEngine_RectTransform__get_rect(local_48,pUVar7,(MethodInfo *)0x0);
    fVar11 = (pUVar8->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
  }
  fVar12 = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                     (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
  __this_01 = (__this->fields).SinglePanel;
  if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_1822b5def;
  x = UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)__this_01,
                 (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (x == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto label_1822b5def;
    fVar12 = (x->fields).m_Spacing;
  }
  index = 0;
  start = 0;
  size = UI_MapEditorHierarchyVirtualization__ComputePoolSize
                   (fVar11,(__this->fields)._virtualRowHeight,fVar12,0xe,0x28,totalRows,(MethodInfo *)0x0);
  if (totalRows < size) {
    size = totalRows;
  }
  UI_MapEditorHierarchyPanel__EnsurePoolSize(__this,size,(MethodInfo *)0x0);
  if (totalRows == 0) {
    pUVar3 = (__this->fields)._topSpacer;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar3 = (__this->fields)._topSpacer;
      if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1822b5def;
      (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar3,0.0,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
    }
    pUVar3 = (__this->fields)._bottomSpacer;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar3 = (__this->fields)._bottomSpacer;
      if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1822b5def;
      (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar3,0.0,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
    }
    pSVar4 = (__this->fields)._itemPool;
    while (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      if ((pSVar4->fields)._size <= index) {
        return;
      }
      pSVar4 = (__this->fields)._itemPool;
      if ((pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) ||
         (pUVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar4,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_GameObject_get_Item),
         pUVar10 == (UnityEngine_GameObject_o *)0x0)) break;
      UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
      index = index + 1;
      pSVar4 = (__this->fields)._itemPool;
    }
    goto label_1822b5def;
  }
  fVar11 = UI_MapEditorHierarchyPanel__GetVirtualStride(__this,(MethodInfo *)0x0);
  maxStart = index;
  if (-1 < totalRows - size) {
    maxStart = totalRows - size;
  }
  if (Il2CppMethodInitialized_184347522 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347522 = '\x01';
  }
  pUVar2 = (__this->fields)._scrollRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar2 = (__this->fields)._scrollRect;
    if (pUVar2 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_1822b5def;
    pUVar7 = (pUVar2->fields).m_Content;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) goto label_1822b5ae5;
    pUVar2 = (__this->fields)._scrollRect;
    if ((pUVar2 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
       (pUVar7 = (pUVar2->fields).m_Content, pUVar7 == (UnityEngine_RectTransform_o *)0x0))
    goto label_1822b5def;
    UVar9 = UnityEngine_RectTransform__get_anchoredPosition(pUVar7,(MethodInfo *)0x0);
    fStackX_c = UVar9.fields.y;
    iVar6 = UI_MapEditorHierarchyVirtualization__ComputeStartIndex
                      (fStackX_c,fVar11,0xe,totalRows,size,(MethodInfo *)0x0);
    if ((-1 < iVar6) && (start = maxStart, iVar6 <= maxStart)) goto label_1822b5b38;
  }
  else {
label_1822b5ae5:
    pUVar2 = (__this->fields)._scrollRect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar2 = (__this->fields)._scrollRect;
      if (pUVar2 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_1822b5def;
      fVar12 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(pUVar2,(MethodInfo *)0x0);
      iVar6 = UI_MapEditorHierarchyVirtualization__ComputeStartIndexFromNormalized
                        (fVar12,maxStart,(MethodInfo *)0x0);
label_1822b5b38:
      start = iVar6;
    }
  }
  if (totalRows - start <= size) {
    size = totalRows - start;
  }
  if (size < 1) {
    size = 1;
  }
  pUVar3 = (__this->fields)._topSpacer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar3 = (__this->fields)._topSpacer;
    fVar12 = UI_MapEditorHierarchyVirtualization__ComputeTopSpacerHeight(start,fVar11,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1822b5def;
    (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar3,fVar12,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
  }
  pUVar3 = (__this->fields)._bottomSpacer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar3 = (__this->fields)._bottomSpacer;
    fVar11 = UI_MapEditorHierarchyVirtualization__ComputeBottomSpacerHeight
                       (totalRows,start,size,fVar11,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1822b5def;
    (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar3,fVar11,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
  }
  pSVar4 = (__this->fields)._itemPool;
  while (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    if ((pSVar4->fields)._size <= index) {
      return;
    }
    pSVar4 = (__this->fields)._itemPool;
    if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
    pUVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar4,index,
                         (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
    if (index < size) {
      pSVar1 = (__this->fields)._rows;
      if (pSVar1 == (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0) break;
      row.fields = (UI_MapEditorHierarchyPanel_RowData_Fields)
                   System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,index + start,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_get_Item
                             );
      UI_MapEditorHierarchyPanel__BindPooledItem(__this,pUVar10,row,index + start,(MethodInfo *)0x0);
    }
    else {
      if (pUVar10 == (UnityEngine_GameObject_o *)0x0) break;
      UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
    }
    index = index + 1;
    pSVar4 = (__this->fields)._itemPool;
  }
label_1822b5def:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$EnsureDragVisuals
// il2cpp: void UI_MapEditorHierarchyPanel__EnsureDragVisuals (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b0150

void UI_MapEditorHierarchyPanel__EnsureDragVisuals(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Object_o *pUVar2;
  UI_MapEditorMenu_o *__this_00;
  Il2CppType *pIVar3;
  bool bVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_UI_LayoutElement_o *pUVar8;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_UI_Image_o *x;
  UnityEngine_Canvas_o *__this_02;
  UnityEngine_UI_GraphicRaycaster_o *__this_03;
  UnityEngine_UI_Text_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  System_Type_array *pSVar11;
  System_Type_o *pSVar12;
  Il2CppObject *pIVar13;
  UnityEngine_UI_Image_o *pUVar14;
  UnityEngine_Color_Fields local_48 [4];
  
  if (Il2CppMethodInitialized_184347524 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"HierarchyDragGhost");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"HierarchyRootDropOverlay");
    il2cpp_codegen_initialize_runtime_metadata(&"Drop to root");
    il2cpp_codegen_initialize_runtime_metadata(&"HierarchyInsertLine");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/DefaultButton");
    Il2CppMethodInitialized_184347524 = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._dragGhost;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    __this_00 = (__this->fields)._menu;
    if (__this_00 == (UI_MapEditorMenu_o *)0x0) goto label_1822b0e4d;
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    pUVar6 = UI_ElementFactory__InstantiateAndBind(pUVar5,"Prefabs/Elements/DefaultButton",(MethodInfo *)0x0);
    (__this->fields)._dragGhost = pUVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._dragGhost,pUVar6);
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._dragGhost;
    if (pUVar2 == (UnityEngine_Object_o *)0x0) goto label_1822b0e4d;
    UnityEngine_Object__set_name(pUVar2,"HierarchyDragGhost",(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._dragGhost;
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_1822b0e4d;
    pUVar7 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar6,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    (__this->fields)._dragGhostRect = pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._dragGhostRect,pUVar7);
    pUVar7 = (__this->fields)._dragGhostRect;
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_1822b0e4d;
    UnityEngine_RectTransform__set_anchorMax(pUVar7,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchorMin(pUVar7,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._dragGhostRect;
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_1822b0e4d;
    UnityEngine_RectTransform__set_pivot(pUVar7,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._dragGhost;
    if ((pUVar6 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar8 = UnityEngine_GameObject__GetComponent_object_
                           (pUVar6,(MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement),
       pUVar8 == (UnityEngine_UI_LayoutElement_o *)0x0)) goto label_1822b0e4d;
    (*(pUVar8->klass->vtable)._28_set_ignoreLayout.methodPtr)
              (pUVar8,true,(pUVar8->klass->vtable)._28_set_ignoreLayout.method);
    pUVar7 = (__this->fields)._dragGhostRect;
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_1822b0e4d;
    UnityEngine_RectTransform__set_sizeDelta
              (pUVar7,(UnityEngine_Vector2_o)0x41f00000435c0000,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._dragGhost;
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_1822b0e4d;
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar6,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if (__this_01 == (UnityEngine_UI_Button_o *)0x0) goto label_1822b0e4d;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)__this_01,false,(MethodInfo *)0x0);
      UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this_01,0,(MethodInfo *)0x0);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if (__this_01 == (UnityEngine_UI_Button_o *)0x0) goto label_1822b0e4d;
      pUVar14 = (UnityEngine_UI_Image_o *)(__this_01->fields).m_TargetGraphic;
      if (pUVar14 == (UnityEngine_UI_Image_o *)0x0) {
        x = (UnityEngine_UI_Image_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_UnityEngine_UI_Image->_2).typeHierarchyDepth;
        if (((pUVar14->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pUVar14->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_UI_Image)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        x = (UnityEngine_UI_Image_o *)0x0;
        if (bVar4) {
          x = pUVar14;
        }
      }
      if (x == (UnityEngine_UI_Image_o *)0x0) goto label_1822b051a;
    }
    else {
label_1822b051a:
      pUVar6 = (__this->fields)._dragGhost;
      if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_1822b0e4d;
      x = UnityEngine_GameObject__GetComponentInChildren_object_
                    (pUVar6,(MethodInfo_6F5040 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Image);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if (x == (UnityEngine_UI_Image_o *)0x0) goto label_1822b0e4d;
      (*(x->klass->vtable)._25_set_raycastTarget.methodPtr)
                (x,false,(x->klass->vtable)._25_set_raycastTarget.method);
      local_48[0].r = 0.18;
      local_48[0].g = 0.18;
      local_48[0].b = 0.18;
      local_48[0].a = 0.75;
      (*(x->klass->vtable)._23_set_color.methodPtr)
                (x,(UnityEngine_Color_o *)local_48,(x->klass->vtable)._23_set_color.method);
    }
    pUVar6 = (__this->fields)._dragGhost;
    if ((pUVar6 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_02 = UnityEngine_GameObject__AddComponent_object_
                              (pUVar6,(MethodInfo_6F4D60 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_Canvas),
       __this_02 == (UnityEngine_Canvas_o *)0x0)) goto label_1822b0e4d;
    UnityEngine_Canvas__set_overrideSorting(__this_02,true,(MethodInfo *)0x0);
    UnityEngine_Canvas__set_sortingOrder(__this_02,0x7fff,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._dragGhost;
    if ((pUVar6 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_03 = UnityEngine_GameObject__AddComponent_object_
                              (pUVar6,(MethodInfo_6F4D60 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster),
       __this_03 == (UnityEngine_UI_GraphicRaycaster_o *)0x0)) goto label_1822b0e4d;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_03,false,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._dragGhost;
    if (((pUVar6 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0),
        pUVar5 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Text",(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_1822b0e4d;
    pUVar9 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar5,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    (__this->fields)._dragGhostText = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._dragGhostText,pUVar9);
    pUVar9 = (__this->fields)._dragGhostText;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar9 = (__this->fields)._dragGhostText;
      if (pUVar9 == (UnityEngine_UI_Text_o *)0x0) goto label_1822b0e4d;
      (*(pUVar9->klass->vtable)._25_set_raycastTarget.methodPtr)
                (pUVar9,false,(pUVar9->klass->vtable)._25_set_raycastTarget.method);
      pUVar9 = (__this->fields)._dragGhostText;
      if (pUVar9 == (UnityEngine_UI_Text_o *)0x0) goto label_1822b0e4d;
      local_48[0].r = 1.0;
      local_48[0].g = 1.0;
      local_48[0].b = 1.0;
      local_48[0].a = 1.0;
      (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                (pUVar9,(UnityEngine_Color_o *)local_48,(pUVar9->klass->vtable)._23_set_color.method);
    }
    pUVar6 = (__this->fields)._dragGhost;
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_1822b0e4d;
    UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._rootDropOverlay;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar7 = UI_MapEditorHierarchyPanel__GetViewportRect(__this,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
      pUVar5 = (__this->fields).SinglePanel;
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_1822b0e4d;
      pUVar10 = (UnityEngine_RectTransform_o *)UnityEngine_Transform__GetParent(pUVar5,(MethodInfo *)0x0);
      if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
        if (pUVar10->klass == TypeInfo_UnityEngine_RectTransform) {
          pUVar7 = pUVar10;
        }
        if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar10);
        }
      }
    }
    pSVar11 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
    pIVar3 = TypeRef_UnityEngine_RectTransform;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar12 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar3,(MethodInfo *)0x0);
    if (pSVar11 == (System_Type_array *)0x0) goto label_1822b0e4d;
    if ((pSVar12 != (System_Type_o *)0x0) &&
       (pIVar13 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar12,(((pSVar11->obj).klass)->_1).element_class),
       pIVar13 == (Il2CppObject *)0x0)) {
      pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
    }
    if ((int)pSVar11->max_length == 0) goto label_1822b0e9c;
    pSVar11->m_Items[0] = pSVar12;
    Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar12);
    pSVar12 = System_Type__GetTypeFromHandle
                        ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if ((pSVar12 != (System_Type_o *)0x0) &&
       (pIVar13 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar12,(((pSVar11->obj).klass)->_1).element_class),
       pIVar13 == (Il2CppObject *)0x0)) {
      pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
    }
    if ((uint)pSVar11->max_length < 2) goto label_1822b0e9c;
    pSVar11->m_Items[1] = pSVar12;
    Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 1,pSVar12);
    pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(pUVar6,"HierarchyRootDropOverlay",pSVar11,(MethodInfo *)0x0);
    (__this->fields)._rootDropOverlay = pUVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._rootDropOverlay,pUVar6);
    pUVar6 = (__this->fields)._rootDropOverlay;
    if ((pUVar6 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_1822b0e4d;
    UnityEngine_Transform__SetParent_2f5a7e0(pUVar5,(UnityEngine_Transform_o *)pUVar7,false,(MethodInfo *)0x0)
    ;
    pUVar6 = (__this->fields)._rootDropOverlay;
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_1822b0e4d;
    pUVar7 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar6,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_1822b0e4d;
    UnityEngine_RectTransform__set_anchorMin
              (pUVar7,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341f36 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341f36 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (pUVar7,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (pUVar7,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (pUVar7,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    pUVar6 = (__this->fields)._rootDropOverlay;
    if ((pUVar6 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar14 = UnityEngine_GameObject__GetComponent_object_
                            (pUVar6,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image)
       , pUVar14 == (UnityEngine_UI_Image_o *)0x0)) goto label_1822b0e4d;
    local_48[0].r = 0.95;
    local_48[0].g = 0.64;
    local_48[0].b = 0.15;
    local_48[0].a = 0.14;
    (*(pUVar14->klass->vtable)._23_set_color.methodPtr)
              (pUVar14,(UnityEngine_Color_o *)local_48,(pUVar14->klass->vtable)._23_set_color.method);
    (*(pUVar14->klass->vtable)._25_set_raycastTarget.methodPtr)
              (pUVar14,false,(pUVar14->klass->vtable)._25_set_raycastTarget.method);
    pUVar6 = (__this->fields)._rootDropOverlay;
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_1822b0e4d;
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
    pUVar6 = UI_ElementFactory__CreateDefaultLabel
                       (pUVar5,(__this->fields)._style,"Drop to root",0,1,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_1822b0e4d;
    pUVar9 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar6,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    (__this->fields)._rootDropOverlayText = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._rootDropOverlayText,pUVar9);
    pUVar7 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar6,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_1822b0e4d;
    UnityEngine_RectTransform__set_anchorMin
              (pUVar7,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchorMax
              (pUVar7,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot(pUVar7,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar7,(UnityEngine_Vector2_o)0xc0c0000000000000,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._rootDropOverlay;
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_1822b0e4d;
    UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._insertLineIndicator;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  pUVar7 = UI_MapEditorHierarchyPanel__GetViewportRect(__this,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
    pUVar5 = (__this->fields).SinglePanel;
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_1822b0e4d;
    pUVar10 = (UnityEngine_RectTransform_o *)UnityEngine_Transform__GetParent(pUVar5,(MethodInfo *)0x0);
    if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
      if (pUVar10->klass == TypeInfo_UnityEngine_RectTransform) {
        pUVar7 = pUVar10;
      }
      if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar10);
      }
    }
  }
  pSVar11 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  pIVar3 = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar12 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar3,(MethodInfo *)0x0);
  if (pSVar11 == (System_Type_array *)0x0) {
label_1822b0e4d:
    ThrowNullReferenceException();
  }
  if ((pSVar12 != (System_Type_o *)0x0) &&
     (pIVar13 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar12,(((pSVar11->obj).klass)->_1).element_class),
     pIVar13 == (Il2CppObject *)0x0)) {
    pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
  }
  if ((int)pSVar11->max_length != 0) {
    pSVar11->m_Items[0] = pSVar12;
    Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar12);
    pSVar12 = System_Type__GetTypeFromHandle
                        ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if ((pSVar12 != (System_Type_o *)0x0) &&
       (pIVar13 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar12,(((pSVar11->obj).klass)->_1).element_class),
       pIVar13 == (Il2CppObject *)0x0)) {
      pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
    }
    if (1 < (uint)pSVar11->max_length) {
      pSVar11->m_Items[1] = pSVar12;
      Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 1,pSVar12);
      pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(pUVar6,"HierarchyInsertLine",pSVar11,(MethodInfo *)0x0);
      (__this->fields)._insertLineIndicator = pUVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._insertLineIndicator,pUVar6);
      pUVar6 = (__this->fields)._insertLineIndicator;
      if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent_2f5a7e0
                  (pUVar5,(UnityEngine_Transform_o *)pUVar7,false,(MethodInfo *)0x0);
        pUVar6 = (__this->fields)._insertLineIndicator;
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          pUVar7 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar6,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          (__this->fields)._insertLineRect = pUVar7;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._insertLineRect,pUVar7);
          pUVar7 = (__this->fields)._insertLineRect;
          if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin
                      (pUVar7,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
            pUVar7 = (__this->fields)._insertLineRect;
            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar7,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0);
              pUVar7 = (__this->fields)._insertLineRect;
              if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_pivot
                          (pUVar7,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                pUVar7 = (__this->fields)._insertLineRect;
                if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_sizeDelta
                            (pUVar7,(UnityEngine_Vector2_o)0x4000000000000000,(MethodInfo *)0x0);
                  pUVar6 = (__this->fields)._insertLineIndicator;
                  if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar14 = UnityEngine_GameObject__GetComponent_object_
                                          (pUVar6,(MethodInfo_6F5650 *)
                                                  MethodInfo_UnityEngine_GameObject_GetComponent_Image),
                     pUVar14 != (UnityEngine_UI_Image_o *)0x0)) {
                    local_48[0].r = 0.95;
                    local_48[0].g = 0.64;
                    local_48[0].b = 0.15;
                    local_48[0].a = 0.9;
                    (*(pUVar14->klass->vtable)._23_set_color.methodPtr)
                              (pUVar14,(UnityEngine_Color_o *)local_48,
                               (pUVar14->klass->vtable)._23_set_color.method);
                    (*(pUVar14->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (pUVar14,false,(pUVar14->klass->vtable)._25_set_raycastTarget.method);
                    pUVar6 = (__this->fields)._insertLineIndicator;
                    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_1822b0e4d;
    }
  }
label_1822b0e9c:
  ThrowIndexOutOfRangeException();
}


// UI.MapEditorHierarchyPanel$$EnsureContextMenu
// il2cpp: void UI_MapEditorHierarchyPanel__EnsureContextMenu (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b0070

void UI_MapEditorHierarchyPanel__EnsureContextMenu(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *__this_00;
  UnityEngine_Transform_o *value;
  System_String_o *value_00;
  UI_MapEditorContextMenu_o *__this_01;
  
  if (Il2CppMethodInitialized_184347525 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorContextMenu);
    Il2CppMethodInitialized_184347525 = '\x01';
  }
  if ((__this->fields)._contextMenu == (UI_MapEditorContextMenu_o *)0x0) {
    __this_00 = (__this->fields)._menu;
    if (__this_00 == (UI_MapEditorMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    value = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    value_00 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorContextMenu);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
    (__this_01->fields)._parent = value;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields)._parent,value);
    (__this_01->fields)._themePanel = value_00;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields)._themePanel,value_00);
    (__this->fields)._contextMenu = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._contextMenu,__this_01);
  }
  return;
}


// UI.MapEditorHierarchyPanel$$OnItemRightClick
// il2cpp: void UI_MapEditorHierarchyPanel__OnItemRightClick (UI_MapEditorHierarchyPanel_o* __this, int32_t id, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822b4a70

void UI_MapEditorHierarchyPanel__OnItemRightClick
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  System_Collections_Generic_HashSet_MapObject__o *source;
  bool bVar4;
  UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o *object;
  System_Func_MapObject__bool__o *__this_00;
  Map_MapObject_o *obj;
  UnityEngine_Transform_o *value;
  System_String_o *value_00;
  UI_MapEditorContextMenu_o *pUVar5;
  System_Collections_Generic_List_MapEditorContextMenu_Item__o *__this_01;
  System_Action_o *pSVar6;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (Il2CppMethodInitialized_184347526 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MapEditorContextMenu_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0_OnItemRightClick_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0_OnItemRightClick_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0_OnItemRightClick_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0_OnItemRightClick_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0_OnItemRightClick_b__4);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0_OnItemRightClick_b__5);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0_OnItemRightClick_b__6);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0_OnItemRightClick_b__7);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Paste as child");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Create Empty Parent");
    il2cpp_codegen_initialize_runtime_metadata(&"Paste");
    il2cpp_codegen_initialize_runtime_metadata(&"Cut");
    il2cpp_codegen_initialize_runtime_metadata(&"Reset origin");
    Il2CppMethodInitialized_184347526 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0);
  UI_MapEditorHierarchyPanel___c__DisplayClass106_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object == (UI_MapEditorHierarchyPanel___c__DisplayClass106_0_o *)0x0) {
label_1822b51f2:
    ThrowNullReferenceException();
  }
  (object->fields).id = id;
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto label_1822b51f2;
  bVar4 = UI_MapEditorMenu__IsPopupActive(pUVar1,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
           TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_1822b51f2;
  bVar4 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                    (pSVar2,(object->fields).id,
                     (MethodInfo_1407110 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
  if (!bVar4) {
    return;
  }
  pGVar3 = (__this->fields)._gameManager;
  if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822b51f2;
  source = (pGVar3->fields).SelectedObjects;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
  System_Func_object__bool____ctor
            ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object,
             (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0_OnItemRightClick_b__0,
             (MethodInfo_B61EB0 *)0x0);
  bVar4 = System_Linq_Enumerable__Any_object__6b6920
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     (System_Func_TSource__bool__o *)__this_00,
                     (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_MapObject);
  if (!bVar4) {
    pGVar3 = (__this->fields)._gameManager;
    if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822b51f2;
    GameManagers_MapEditorGameManager__DeselectAll(pGVar3,(MethodInfo *)0x0);
    pGVar3 = (__this->fields)._gameManager;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if ((pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
       (obj = (Map_MapObject_o *)
              System_Collections_Generic_Dictionary_int__ulong___get_Item
                        (pSVar2,(object->fields).id,
                         (MethodInfo_14156F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
       pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0)) goto label_1822b51f2;
    GameManagers_MapEditorGameManager__SelectObject(pGVar3,obj,(MethodInfo *)0x0);
    pGVar3 = (__this->fields)._gameManager;
    if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822b51f2;
    GameManagers_MapEditorGameManager__OnSelectionChange(pGVar3,false,(MethodInfo *)0x0);
  }
  if (Il2CppMethodInitialized_184347525 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorContextMenu);
    Il2CppMethodInitialized_184347525 = '\x01';
  }
  if ((__this->fields)._contextMenu == (UI_MapEditorContextMenu_o *)0x0) {
    pUVar1 = (__this->fields)._menu;
    if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto label_1822b51f8;
    value = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    value_00 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorContextMenu);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pUVar5,(MethodInfo *)0x0);
    (pUVar5->fields)._parent = value;
    Il2CppCodeGenWriteBarrier(&(pUVar5->fields)._parent,value);
    (pUVar5->fields)._themePanel = value_00;
    Il2CppCodeGenWriteBarrier(&(pUVar5->fields)._themePanel,value_00);
    (__this->fields)._contextMenu = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._contextMenu,pUVar5);
  }
  pUVar5 = (__this->fields)._contextMenu;
  (__this->fields)._contextTargetId = (object->fields).id;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapEditorContextMenu_Item);
  System_Collections_Generic_List_MapEditorContextMenu_Item____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_ctor);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar6,(Il2CppObject *)object,
             (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0_OnItemRightClick_b__1,
             (MethodInfo *)0x0);
  local_c8 = "Copy";
  uStack_c0 = (void *)0x0;
  uStack_b8 = 0;
  Il2CppCodeGenWriteBarrier((void **)&local_c8,"Copy");
  uStack_c0 = pSVar6;
  Il2CppCodeGenWriteBarrier((void **)&uStack_c0,pSVar6);
  uStack_b8 = CONCAT62(uStack_b8._2_6_,1);
  if (__this_01 != (System_Collections_Generic_List_MapEditorContextMenu_Item__o *)0x0) {
    local_e8 = (undefined4)local_c8;
    uStack_e4 = local_c8._4_4_;
    uStack_e0 = (undefined4)uStack_c0;
    uStack_dc = uStack_c0._4_4_;
    local_d8 = uStack_b8;
    il2cpp_runtime_helper_18000e230(__this_01,&local_e8,MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add
                 );
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar6,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0_OnItemRightClick_b__2,
               (MethodInfo *)0x0);
    local_b0 = "Cut";
    uStack_a8 = (void *)0x0;
    uStack_a0 = 0;
    Il2CppCodeGenWriteBarrier((void **)&local_b0,"Cut");
    uStack_a8 = pSVar6;
    Il2CppCodeGenWriteBarrier((void **)&uStack_a8,pSVar6);
    uStack_a0 = CONCAT62(uStack_a0._2_6_,1);
    local_e8 = (undefined4)local_b0;
    uStack_e4 = local_b0._4_4_;
    uStack_e0 = (undefined4)uStack_a8;
    uStack_dc = uStack_a8._4_4_;
    local_d8 = uStack_a0;
    il2cpp_runtime_helper_18000e230(__this_01,&local_e8,MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add
                 );
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar6,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0_OnItemRightClick_b__3,
               (MethodInfo *)0x0);
    local_98 = "Paste";
    uStack_90 = (void *)0x0;
    uStack_88 = 0;
    Il2CppCodeGenWriteBarrier((void **)&local_98,"Paste");
    uStack_90 = pSVar6;
    Il2CppCodeGenWriteBarrier((void **)&uStack_90,pSVar6);
    uStack_88 = CONCAT62(uStack_88._2_6_,1);
    local_e8 = (undefined4)local_98;
    uStack_e4 = local_98._4_4_;
    uStack_e0 = (undefined4)uStack_90;
    uStack_dc = uStack_90._4_4_;
    local_d8 = uStack_88;
    il2cpp_runtime_helper_18000e230(__this_01,&local_e8,MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add
                 );
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar6,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0_OnItemRightClick_b__4,
               (MethodInfo *)0x0);
    local_80 = "Paste as child";
    uStack_78 = (void *)0x0;
    uStack_70 = 0;
    Il2CppCodeGenWriteBarrier((void **)&local_80,"Paste as child");
    uStack_78 = pSVar6;
    Il2CppCodeGenWriteBarrier((void **)&uStack_78,pSVar6);
    uStack_70 = CONCAT62(uStack_70._2_6_,1);
    local_e8 = (undefined4)local_80;
    uStack_e4 = local_80._4_4_;
    uStack_e0 = (undefined4)uStack_78;
    uStack_dc = uStack_78._4_4_;
    local_d8 = uStack_70;
    il2cpp_runtime_helper_18000e230(__this_01,&local_e8,MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add
                 );
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar6,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0_OnItemRightClick_b__5,
               (MethodInfo *)0x0);
    local_68 = "Create Empty Parent";
    uStack_60 = (void *)0x0;
    uStack_58 = 0;
    Il2CppCodeGenWriteBarrier((void **)&local_68,"Create Empty Parent");
    uStack_60 = pSVar6;
    Il2CppCodeGenWriteBarrier((void **)&uStack_60,pSVar6);
    uStack_58 = CONCAT62(uStack_58._2_6_,1);
    local_e8 = (undefined4)local_68;
    uStack_e4 = local_68._4_4_;
    uStack_e0 = (undefined4)uStack_60;
    uStack_dc = uStack_60._4_4_;
    local_d8 = uStack_58;
    il2cpp_runtime_helper_18000e230(__this_01,&local_e8,MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add
                 );
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar6,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0_OnItemRightClick_b__6,
               (MethodInfo *)0x0);
    local_50 = "Reset origin";
    uStack_48 = (void *)0x0;
    uStack_40 = 0;
    Il2CppCodeGenWriteBarrier((void **)&local_50,"Reset origin");
    uStack_48 = pSVar6;
    Il2CppCodeGenWriteBarrier((void **)&uStack_48,pSVar6);
    uStack_40 = CONCAT62(uStack_40._2_6_,1);
    local_e8 = (undefined4)local_50;
    uStack_e4 = local_50._4_4_;
    uStack_e0 = (undefined4)uStack_48;
    uStack_dc = uStack_48._4_4_;
    local_d8 = uStack_40;
    il2cpp_runtime_helper_18000e230(__this_01,&local_e8,MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add
                 );
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar6,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass106_0_OnItemRightClick_b__7,
               (MethodInfo *)0x0);
    local_38 = "Delete";
    uStack_30 = (void *)0x0;
    uStack_28 = 0;
    Il2CppCodeGenWriteBarrier((void **)&local_38,"Delete");
    uStack_30 = pSVar6;
    Il2CppCodeGenWriteBarrier((void **)&uStack_30,pSVar6);
    uStack_28 = CONCAT62(uStack_28._2_6_,0x101);
    local_e8 = (undefined4)local_38;
    uStack_e4 = local_38._4_4_;
    uStack_e0 = (undefined4)uStack_30;
    uStack_dc = uStack_30._4_4_;
    local_d8 = uStack_28;
    il2cpp_runtime_helper_18000e230(__this_01,&local_e8,MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add
                 );
    if (pUVar5 != (UI_MapEditorContextMenu_o *)0x0) {
      UI_MapEditorContextMenu__Show
                (pUVar5,eventData,(System_Collections_Generic_IList_MapEditorContextMenu_Item__o *)__this_01,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_1822b51f8:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$HideContextMenu
// il2cpp: void UI_MapEditorHierarchyPanel__HideContextMenu (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b3560

void UI_MapEditorHierarchyPanel__HideContextMenu(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  if ((__this->fields)._contextMenu != (UI_MapEditorContextMenu_o *)0x0) {
    UI_MapEditorContextMenu__Hide((__this->fields)._contextMenu,(MethodInfo *)0x0);
    (__this->fields)._contextTargetId = -1;
    return;
  }
  (__this->fields)._contextTargetId = -1;
  return;
}


// UI.MapEditorHierarchyPanel$$GetOrCreateRowDropOverlay
// il2cpp: UnityEngine_GameObject_o* UI_MapEditorHierarchyPanel__GetOrCreateRowDropOverlay (UI_MapEditorHierarchyPanel_o* __this, UnityEngine_GameObject_o* row, const MethodInfo* method);
// 0x1822b2440

UnityEngine_GameObject_o *
UI_MapEditorHierarchyPanel__GetOrCreateRowDropOverlay
          (UI_MapEditorHierarchyPanel_o *__this,UnityEngine_GameObject_o *row,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Type_array *components;
  System_Type_o *pSVar3;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_UI_LayoutElement_o *pUVar7;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184347527 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"DropOverlay");
    Il2CppMethodInitialized_184347527 = '\x01';
  }
  if (row != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(row,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__Find(pUVar2,"DropOverlay",(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
          return pUVar5;
        }
      }
      else {
        components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
        handle = TypeRef_UnityEngine_RectTransform;
        if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354ea0);
        }
        pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
        if (components != (System_Type_array *)0x0) {
          if (pSVar3 != (System_Type_o *)0x0) {
            pIVar4 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class);
            if (pIVar4 == (Il2CppObject *)0x0) {
              pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
            }
          }
          if ((int)components->max_length != 0) {
            components->m_Items[0] = pSVar3;
            Il2CppCodeGenWriteBarrier(components->m_Items,pSVar3);
            pSVar3 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
            if (pSVar3 != (System_Type_o *)0x0) {
              pIVar4 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class);
              if (pIVar4 == (Il2CppObject *)0x0) {
                pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
              }
            }
            if (1 < (uint)components->max_length) {
              components->m_Items[1] = pSVar3;
              Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar3);
              pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
              UnityEngine_GameObject___ctor_2f1abe0(pUVar5,"DropOverlay",components,(MethodInfo *)0x0)
              ;
              if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                pUVar2 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
                parent = UnityEngine_GameObject__get_transform(row,(MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetParent_2f5a7e0(pUVar2,parent,false,(MethodInfo *)0x0);
                  pUVar2 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__SetAsLastSibling(pUVar2,(MethodInfo *)0x0);
                    __this_00 = UnityEngine_GameObject__GetComponent_object_
                                          (pUVar5,(MethodInfo_6F5650 *)
                                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                          );
                    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                      Il2CppMethodInitialized_18433e3c9 = '\x01';
                    }
                    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchorMin
                                (__this_00,
                                 (UnityEngine_Vector2_o)
                                 (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                                 (MethodInfo *)0x0);
                      if (Il2CppMethodInitialized_184341f36 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                        Il2CppMethodInitialized_184341f36 = '\x01';
                      }
                      UnityEngine_RectTransform__set_anchorMax
                                (__this_00,
                                 (UnityEngine_Vector2_o)
                                 (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                                 (MethodInfo *)0x0);
                      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                        Il2CppMethodInitialized_18433e3c9 = '\x01';
                      }
                      UnityEngine_RectTransform__set_offsetMin
                                (__this_00,
                                 (UnityEngine_Vector2_o)
                                 (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                                 (MethodInfo *)0x0);
                      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                        Il2CppMethodInitialized_18433e3c9 = '\x01';
                      }
                      UnityEngine_RectTransform__set_offsetMax
                                (__this_00,
                                 (UnityEngine_Vector2_o)
                                 (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                                 (MethodInfo *)0x0);
                      pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                         (pUVar5,(MethodInfo_6F5650 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                      if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                        local_18.r = 0.95;
                        local_18.g = 0.64;
                        local_18.b = 0.15;
                        local_18.a = 0.24;
                        (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                                  (pUVar6,(UnityEngine_Color_o *)&local_18,
                                   (pUVar6->klass->vtable)._23_set_color.method);
                        (*(pUVar6->klass->vtable)._25_set_raycastTarget.methodPtr)
                                  (pUVar6,false,(pUVar6->klass->vtable)._25_set_raycastTarget.method);
                        pUVar7 = UnityEngine_GameObject__AddComponent_object_
                                           (pUVar5,(MethodInfo_6F4D60 *)
                                                   MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement
                                           );
                        if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                          (*(pUVar7->klass->vtable)._28_set_ignoreLayout.methodPtr)
                                    (pUVar7,true,(pUVar7->klass->vtable)._28_set_ignoreLayout.method);
                          UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
                          return pUVar5;
                        }
                      }
                    }
                  }
                }
              }
              goto label_1822b2833;
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
label_1822b2833:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$RefreshDropIndicators
// il2cpp: void UI_MapEditorHierarchyPanel__RefreshDropIndicators (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b54e0
// eh: try 0x1822b5622..0x1822b57ae -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b56b3: mov rdx, qword ptr [rip + 0x1df97ce]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_Dispose
// asm:   0x1822b56ba: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822b56bf: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822b56c4: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822b56c9: test rcx, rcx
// asm:   0x1822b56cc: jne 0x1822b57ae
// asm:   0x1822b56d2: xor esi, esi
// asm:   0x1822b56d4: mov rdi, qword ptr [rsp + 0xc0]
// asm:   0x1822b56dc: movzx r12d, byte ptr [rsp + 0xd0]
// asm:   0x1822b57ae: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_MapEditorHierarchyPanel__RefreshDropIndicators
               (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  System_Collections_Generic_Dictionary_int__GameObject__o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  int iVar1;
  bool bVar2;
  bool bVar3;
  UnityEngine_Object_o *pUVar4;
  bool active;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_80;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_184347528 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_GameObject_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_GameObject_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347528 = '\x01';
  }
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  if ((((__this->fields)._currentDropMode == 2) || ((__this->fields)._currentDropMode == 3)) &&
     (0 < (__this->fields)._dropTargetId)) {
    __this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._idToItem;
    if (__this_00 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_1822b57a2;
    bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (__this_00,(__this->fields)._dropTargetId,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ContainsKey);
  }
  else {
    bVar3 = false;
  }
  __this_01 = (__this->fields)._idToItem;
  if (__this_01 != (System_Collections_Generic_Dictionary_int__GameObject__o *)0x0) {
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_58,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_GetEnumerator);
    local_80.fields._dictionary = local_58.fields._dictionary;
    local_80.fields._version = local_58.fields._version;
    local_80.fields._index = local_58.fields._index;
    local_80.fields._current.fields.key = local_58.fields._current.fields.key;
    local_80.fields._current.fields.value = local_58.fields._current.fields.value;
    local_80.fields._getEnumeratorRetType = local_58.fields._getEnumeratorRetType;
    local_80.fields._36_4_ = local_58.fields._36_4_;
    active = false;
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator_uint__object___MoveNext
                        (&local_80,
                         (MethodInfo_15642D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_MoveNext);
      if (!bVar2) break;
      iVar1 = (int)local_80.fields._current.fields.key;
      pUVar4 = (UnityEngine_Object_o *)
               UI_MapEditorHierarchyPanel__GetOrCreateRowDropOverlay
                         (__this,(UnityEngine_GameObject_o *)local_80.fields._current.fields.value,
                          (MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if ((__this->fields)._currentDropMode == 1) {
          bVar2 = iVar1 == (__this->fields)._dropIndicatorId;
        }
        else {
          bVar2 = false;
        }
        if (pUVar4 == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar4,bVar2,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_80,
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_Dispose);
    if ((__this->fields)._dropToRoot != false) {
      active = (__this->fields)._currentDropMode == 0;
    }
    UI_MapEditorHierarchyPanel__SetRootDropOverlay(__this,active,(MethodInfo *)0x0);
    if (bVar3 == false) {
      if (Il2CppMethodInitialized_18434752b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_18434752b = '\x01';
      }
      pUVar4 = (UnityEngine_Object_o *)(__this->fields)._insertLineIndicator;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        __this_02 = (__this->fields)._insertLineIndicator;
        if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_1822b57a2;
        UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
      }
    }
    else {
      UI_MapEditorHierarchyPanel__ShowInsertLine
                (__this,(__this->fields)._dropTargetId,(__this->fields)._currentDropMode == 2,
                 (MethodInfo *)0x0);
    }
    return;
  }
label_1822b57a2:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$SetRootDropOverlay
// il2cpp: void UI_MapEditorHierarchyPanel__SetRootDropOverlay (UI_MapEditorHierarchyPanel_o* __this, bool active, const MethodInfo* method);
// 0x1822b5e00

void UI_MapEditorHierarchyPanel__SetRootDropOverlay
               (UI_MapEditorHierarchyPanel_o *__this,bool active,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347529 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347529 = '\x01';
  }
  UI_MapEditorHierarchyPanel__EnsureDragVisuals(__this,(MethodInfo *)0x0);
  x = (UnityEngine_Object_o *)(__this->fields)._rootDropOverlay;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._rootDropOverlay;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,active,(MethodInfo *)0x0);
  }
  return;
}


// UI.MapEditorHierarchyPanel$$ShowInsertLine
// il2cpp: void UI_MapEditorHierarchyPanel__ShowInsertLine (UI_MapEditorHierarchyPanel_o* __this, int32_t targetId, bool atTop, const MethodInfo* method);
// 0x1822b6fe0

void UI_MapEditorHierarchyPanel__ShowInsertLine
               (UI_MapEditorHierarchyPanel_o *__this,int32_t targetId,bool atTop,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Vector3_array *fourCornersArray;
  UnityEngine_RectTransform_o *pUVar6;
  float fVar7;
  UnityEngine_Vector2_Fields local_res8 [4];
  
  if (Il2CppMethodInitialized_18434752a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_18434752a = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._insertLineIndicator;
  local_res8[0].x = 0.0;
  local_res8[0].y = 0.0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    UI_MapEditorHierarchyPanel__EnsureDragVisuals(__this,(MethodInfo *)0x0);
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._insertLineIndicator;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
label_1822b7275:
    UI_MapEditorHierarchyPanel__HideInsertLine(__this,(MethodInfo *)0x0);
    return;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._idToItem;
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (pSVar2,targetId,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ContainsKey);
    if (!bVar3) goto label_1822b7275;
    pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._idToItem;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) &&
       (pUVar4 = (UnityEngine_GameObject_o *)
                 System_Collections_Generic_Dictionary_int__ulong___get_Item
                           (pSVar2,targetId,
                            (MethodInfo_14156F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_get_Item),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      pUVar5 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar4,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) goto label_1822b7275;
      pUVar4 = (__this->fields)._insertLineIndicator;
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
        fourCornersArray = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
        if ((pUVar5 != (UnityEngine_RectTransform_o *)0x0) &&
           (UnityEngine_RectTransform__GetWorldCorners(pUVar5,fourCornersArray,(MethodInfo *)0x0),
           fourCornersArray != (UnityEngine_Vector3_array *)0x0)) {
          if (atTop) {
            if ((uint)fourCornersArray->max_length < 2) {
label_1822b7292:
              ThrowIndexOutOfRangeException();
            }
            fVar7 = fourCornersArray->m_Items[1].fields.y;
          }
          else {
            if ((int)fourCornersArray->max_length == 0) goto label_1822b7292;
            fVar7 = fourCornersArray->m_Items[0].fields.y;
          }
          pUVar5 = UI_MapEditorHierarchyPanel__GetViewportRect(__this,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
            __this_00 = (__this->fields).SinglePanel;
            if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_1822b72a1;
            pUVar6 = (UnityEngine_RectTransform_o *)
                     UnityEngine_Transform__GetParent(__this_00,(MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
              if (pUVar6->klass == TypeInfo_UnityEngine_RectTransform) {
                pUVar5 = pUVar6;
              }
              if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
                il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
              }
            }
          }
          if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
          }
          UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    (pUVar5,(UnityEngine_Vector2_o)((ulonglong)(uint)fVar7 << 0x20),
                     (UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)local_res8,(MethodInfo *)0x0);
          pUVar5 = (__this->fields)._insertLineRect;
          if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchoredPosition
                      (pUVar5,(UnityEngine_Vector2_o)(local_res8[0] & 0xffffffff00000000),(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_1822b72a1:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$HideInsertLine
// il2cpp: void UI_MapEditorHierarchyPanel__HideInsertLine (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b3640

void UI_MapEditorHierarchyPanel__HideInsertLine(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434752b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434752b = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._insertLineIndicator;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._insertLineIndicator;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  }
  return;
}


// UI.MapEditorHierarchyPanel$$ShowDragGhost
// il2cpp: void UI_MapEditorHierarchyPanel__ShowDragGhost (UI_MapEditorHierarchyPanel_o* __this, int32_t id, UnityEngine_Vector2_o mousePosition, const MethodInfo* method);
// 0x1822b6de0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b6f56: mov rdx, qword ptr [rip + 0x1dee23b]  ; "Object"

void UI_MapEditorHierarchyPanel__ShowDragGhost
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,UnityEngine_Vector2_o mousePosition,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_UI_Text_o *pUVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  UnityEngine_GameObject_o *pUVar3;
  bool bVar4;
  uint64_t uVar5;
  UnityEngine_Transform_o *__this_00;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_18434752c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Object");
    Il2CppMethodInitialized_18434752c = '\x01';
  }
  UI_MapEditorHierarchyPanel__EnsureDragVisuals(__this,(MethodInfo *)0x0);
  x = (UnityEngine_Object_o *)(__this->fields)._dragGhost;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  pUVar1 = (__this->fields)._dragGhostText;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_1822b6fd6;
    bVar4 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (pSVar2,id,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    pSVar6 = "Object";
    if (bVar4) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (((pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
          (uVar5 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar2,id,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
          uVar5 == 0)) || (*(longlong *)(uVar5 + 0x20) == 0)) goto label_1822b6fd6;
      pSVar6 = *(System_String_o **)(*(longlong *)(uVar5 + 0x20) + 0x30);
    }
    pUVar1 = (__this->fields)._dragGhostText;
    if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) goto label_1822b6fd6;
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,pSVar6,(pUVar1->klass->vtable)._75_set_text.method);
  }
  pUVar3 = (__this->fields)._dragGhost;
  if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._dragGhost;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      UI_MapEditorHierarchyPanel__MoveDragGhost(__this,mousePosition,(MethodInfo *)0x0);
      return;
    }
  }
label_1822b6fd6:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$MoveDragGhost
// il2cpp: void UI_MapEditorHierarchyPanel__MoveDragGhost (UI_MapEditorHierarchyPanel_o* __this, UnityEngine_Vector2_o mousePosition, const MethodInfo* method);
// 0x1822b3bd0

void UI_MapEditorHierarchyPanel__MoveDragGhost
               (UI_MapEditorHierarchyPanel_o *__this,UnityEngine_Vector2_o mousePosition,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UI_MapEditorMenu_o *__this_00;
  bool bVar2;
  UnityEngine_Canvas_o *__this_01;
  float fVar3;
  UnityEngine_Vector2_o value;
  float fStack_24;
  
  if (Il2CppMethodInitialized_18434752d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434752d = '\x01';
  }
  pUVar1 = (__this->fields)._dragGhostRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  __this_00 = (__this->fields)._menu;
  if ((__this_00 != (UI_MapEditorMenu_o *)0x0) &&
     (__this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_00,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas),
     __this_01 != (UnityEngine_Canvas_o *)0x0)) {
    fVar3 = UnityEngine_Canvas__get_scaleFactor(__this_01,(MethodInfo *)0x0);
    if (fVar3 <= 0.0) {
      fVar3 = 1.0;
    }
    pUVar1 = (__this->fields)._dragGhostRect;
    fStack_24 = mousePosition.fields.y;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      value.fields.x = mousePosition.fields.x / fVar3 + 12.0;
      value.fields.y = fStack_24 / fVar3 + -6.0;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$HideDragGhost
// il2cpp: void UI_MapEditorHierarchyPanel__HideDragGhost (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b35b0

void UI_MapEditorHierarchyPanel__HideDragGhost(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434752e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434752e = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._dragGhost;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._dragGhost;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  }
  UI_MapEditorHierarchyPanel__SetRootDropOverlay(__this,false,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel$$Update
// il2cpp: void UI_MapEditorHierarchyPanel__Update (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b82d0

void UI_MapEditorHierarchyPanel__Update(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorContextMenu_o *pUVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_UI_ScrollRect_o *x_00;
  UnityEngine_Vector2_Fields screenPoint;
  bool bVar2;
  UnityEngine_Vector2_Fields *pUVar3;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_18434752f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_18434752f = '\x01';
  }
  if ((__this->fields)._contextMenu != (UI_MapEditorContextMenu_o *)0x0) {
    pUVar1 = (__this->fields)._contextMenu;
    if (Il2CppMethodInitialized_1843474e6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843474e6 = '\x01';
    }
    x = (UnityEngine_Object_o *)(pUVar1->fields)._root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      __this_00 = (pUVar1->fields)._root;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
label_1822b84dc:
        ThrowNullReferenceException();
      }
      bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      if (bVar2) {
        bVar2 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0);
        if (bVar2) {
          pUVar1 = (__this->fields)._contextMenu;
          if (pUVar1 == (UI_MapEditorContextMenu_o *)0x0) goto label_1822b84dc;
          rect = (pUVar1->fields)._menuRect;
          pUVar3 = (UnityEngine_Vector2_Fields *)
                   UnityEngine_Input__get_mousePosition(local_38,(MethodInfo *)0x0);
          screenPoint = *pUVar3;
          if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
          }
          bVar2 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint_32c16a0
                            (rect,(UnityEngine_Vector2_o)screenPoint,(UnityEngine_Camera_o *)0x0,
                             (MethodInfo *)0x0);
          if (!bVar2) {
            if ((__this->fields)._contextMenu != (UI_MapEditorContextMenu_o *)0x0) {
              UI_MapEditorContextMenu__Hide((__this->fields)._contextMenu,(MethodInfo *)0x0);
            }
            (__this->fields)._contextTargetId = -1;
          }
        }
      }
    }
  }
  if ((__this->fields)._draggingItem != false) {
    pUVar3 = (UnityEngine_Vector2_Fields *)UnityEngine_Input__get_mousePosition(local_38,(MethodInfo *)0x0);
    UI_MapEditorHierarchyPanel__MoveDragGhost(__this,(UnityEngine_Vector2_o)*pUVar3,(MethodInfo *)0x0);
    if ((__this->fields)._treeViewEnabled != false) {
      x_00 = (__this->fields)._scrollRect;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        bVar2 = UI_MapEditorHierarchyPanel__AutoScrollDuringDrag(__this,(MethodInfo *)0x0);
        if (bVar2) {
          pUVar3 = (UnityEngine_Vector2_Fields *)
                   UnityEngine_Input__get_mousePosition(local_38,(MethodInfo *)0x0);
          UI_MapEditorHierarchyPanel__UpdateDropTargetFromPointer
                    (__this,(UnityEngine_Vector2_o)*pUVar3,(UnityEngine_Camera_o *)0x0,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


// UI.MapEditorHierarchyPanel$$AutoScrollDuringDrag
// il2cpp: bool UI_MapEditorHierarchyPanel__AutoScrollDuringDrag (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822adb70

bool UI_MapEditorHierarchyPanel__AutoScrollDuringDrag(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_Vector2_Fields screenPoint;
  bool bVar2;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Vector2_Fields *pUVar4;
  UnityEngine_Rect_o *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector2_Fields local_res18 [2];
  UnityEngine_Rect_o local_78 [7];
  
  if (Il2CppMethodInitialized_184347530 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184347530 = '\x01';
  }
  local_res18[0].x = 0.0;
  local_res18[0].y = 0.0;
  rect = UI_MapEditorHierarchyPanel__GetViewportRect(__this,(MethodInfo *)0x0);
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    __this_00 = (__this->fields).SinglePanel;
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_1822ade6b;
    pUVar3 = (UnityEngine_RectTransform_o *)UnityEngine_Transform__GetParent(__this_00,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      if (pUVar3->klass == TypeInfo_UnityEngine_RectTransform) {
        rect = pUVar3;
      }
      if (rect == (UnityEngine_RectTransform_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
      }
    }
  }
  pUVar4 = (UnityEngine_Vector2_Fields *)
           UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)local_78,(MethodInfo *)0x0);
  screenPoint = *pUVar4;
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  bVar2 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    (rect,(UnityEngine_Vector2_o)screenPoint,(UnityEngine_Camera_o *)0x0,
                     (UnityEngine_Vector2_o *)local_res18,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    pUVar5 = UnityEngine_RectTransform__get_rect(local_78,rect,(MethodInfo *)0x0);
    fVar7 = (pUVar5->fields).m_YMin;
    fVar9 = (pUVar5->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar9 = (fVar7 + fVar9) - local_res18[0].y;
    if ((fVar9 < 0.0) || (70.0 <= fVar9)) {
      fVar7 = local_res18[0].y - fVar7;
      fVar6 = 0.0;
      if ((0.0 <= fVar7) && (fVar7 < 70.0)) {
        fVar6 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
        fVar6 = fVar6 * (1.0 - fVar7 / 70.0) * -0.9;
      }
    }
    else {
      fVar6 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
      fVar6 = fVar6 * (1.0 - fVar9 / 70.0) * 0.9;
    }
    if (ABS(fVar6) <= 0.0001) {
      return false;
    }
    pUVar1 = (__this->fields)._scrollRect;
    if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      fVar7 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(pUVar1,(MethodInfo *)0x0);
      fVar6 = fVar7 + fVar6;
      if (fVar6 < 0.0) {
        fVar6 = 0.0;
      }
      else if (1.0 < fVar6) {
        fVar6 = 1.0;
      }
      if (Il2CppMethodInitialized_18433dee4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
        Il2CppMethodInitialized_18433dee4 = '\x01';
      }
      fVar9 = ABS(fVar7);
      if (ABS(fVar7) <= ABS(fVar6)) {
        fVar9 = ABS(fVar6);
      }
      fVar8 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
      fVar10 = fVar9 * 1e-06;
      if (fVar9 * 1e-06 <= fVar8) {
        fVar10 = fVar8;
      }
      if (ABS(fVar6 - fVar7) < fVar10) {
        return false;
      }
      pUVar1 = (__this->fields)._scrollRect;
      if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(pUVar1,fVar6,(MethodInfo *)0x0);
        UI_MapEditorHierarchyPanel__RenderVirtualizedRows(__this,false,(MethodInfo *)0x0);
        return true;
      }
    }
  }
label_1822ade6b:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$ToggleExpanded
// il2cpp: void UI_MapEditorHierarchyPanel__ToggleExpanded (UI_MapEditorHierarchyPanel_o* __this, int32_t id, bool expand, const MethodInfo* method);
// 0x1822b7cc0

void UI_MapEditorHierarchyPanel__ToggleExpanded
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,bool expand,MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *__this_00;
  
  if (Il2CppMethodInitialized_184347531 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    Il2CppMethodInitialized_184347531 = '\x01';
  }
  __this_00 = (__this->fields)._expanded;
  if (__this_00 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    if (expand) {
      System_Collections_Generic_HashSet_int___Add
                (__this_00,id,(MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
    }
    else {
      System_Collections_Generic_HashSet_Int32Enum___Remove
                ((System_Collections_Generic_HashSet_T__o *)__this_00,id,
                 (MethodInfo_17666A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    }
    UI_MapEditorHierarchyPanel__Sync(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$OnPageClick
// il2cpp: void UI_MapEditorHierarchyPanel__OnPageClick (UI_MapEditorHierarchyPanel_o* __this, bool left, const MethodInfo* method);
// 0x1822b5320
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b5320: nop 

void UI_MapEditorHierarchyPanel__OnPageClick
               (UI_MapEditorHierarchyPanel_o *__this,bool left,MethodInfo *method)

{
  int32_t *piVar1;
  
  piVar1 = &(__this->fields)._currentPage;
  *piVar1 = *piVar1 + (uint)!left * 2 + -1;
  UI_MapEditorHierarchyPanel__Sync(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel$$FocusSelectionFromScene
// il2cpp: void UI_MapEditorHierarchyPanel__FocusSelectionFromScene (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b1c60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b1fae: mov rdi, qword ptr [rsp + 0x30]

void UI_MapEditorHierarchyPanel__FocusSelectionFromScene
               (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_MapObject__o *pSVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  int32_t iVar6;
  UI_MapEditorHierarchyPanel___c__DisplayClass120_0_o *object;
  System_Func_MapObject__bool__o *__this_00;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_01;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *__this_02;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  
  if (Il2CppMethodInitialized_184347532 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_FirstOrDefault_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c_FocusSelectionFromScene_b__120_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c_FocusSelectionFromScene_b__120_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass120_0_FocusSelectionFromScene_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorHierarchyPanel_c__DisplayClass120_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorHierarchyPanel_c);
    Il2CppMethodInitialized_184347532 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c__DisplayClass120_0);
  UI_MapEditorHierarchyPanel___c__DisplayClass120_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  pGVar2 = (__this->fields)._gameManager;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  pGVar2 = (__this->fields)._gameManager;
  if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar3 = (pGVar2->fields).SelectedObjects,
     pSVar3 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
    if ((pSVar3->fields)._count == 0) {
      return;
    }
    if (object == (UI_MapEditorHierarchyPanel___c__DisplayClass120_0_o *)0x0) goto label_1822b1fc3;
    iVar1 = (pGVar2->fields).LastSelectedObjectId;
    (object->fields).targetId = iVar1;
    if (0 < iVar1) {
      pGVar2 = (__this->fields)._gameManager;
      if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822b1fc3;
      pSVar3 = (pGVar2->fields).SelectedObjects;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass120_0_FocusSelectionFromScene_b__0,
                 (MethodInfo_B61EB0 *)0x0);
      bVar5 = System_Linq_Enumerable__Any_object__6b6920
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_MapObject);
      if (bVar5) goto label_1822b1f9a;
    }
    pGVar2 = (__this->fields)._gameManager;
    if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
      pSVar3 = (pGVar2->fields).SelectedObjects;
      if ((TypeInfo_UI_MapEditorHierarchyPanel_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
      }
      __this_01 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                  TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9__120_1;
      if (__this_01 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
        if ((TypeInfo_UI_MapEditorHierarchyPanel_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
        }
        pIVar4 = (Il2CppObject *)TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9;
        __this_01 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
        System_Func_object__int____ctor
                  (__this_01,pIVar4,
                   (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c_FocusSelectionFromScene_b__120_1,
                   (MethodInfo_AF4D50 *)0x0);
        TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9__120_1 =
             (System_Func_MapObject__int__o *)__this_01;
        Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9__120_1,__this_01)
        ;
      }
      source = System_Linq_Enumerable__Select_Vector3__object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                          (System_Func_TSource__TResult__o *)__this_01,
                          (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
      if ((TypeInfo_UI_MapEditorHierarchyPanel_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
      }
      __this_02 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)
                  TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9__120_2;
      if (__this_02 ==
          (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)0x0) {
        if ((TypeInfo_UI_MapEditorHierarchyPanel_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
        }
        pIVar4 = (Il2CppObject *)TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9;
        __this_02 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int);
        System_Func_int__int____ctor
                  (__this_02,pIVar4,
                   (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c_FocusSelectionFromScene_b__120_2,
                   (MethodInfo *)0x0);
        TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9__120_2 =
             (System_Func_int__int__o *)__this_02;
        Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9__120_2,__this_02)
        ;
      }
      source_00 = System_Linq_Enumerable__OrderBy_object__int_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__TKey__o *)__this_02,
                             (MethodInfo_6C12E0 *)MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
      iVar6 = System_Linq_Enumerable__FirstOrDefault_int_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                         (MethodInfo_6BCB80 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_int);
      (object->fields).targetId = iVar6;
label_1822b1f9a:
      if (0 < (object->fields).targetId) {
        UI_MapEditorHierarchyPanel__FocusObject(__this,(object->fields).targetId,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_1822b1fc3:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$FocusObject
// il2cpp: void UI_MapEditorHierarchyPanel__FocusObject (UI_MapEditorHierarchyPanel_o* __this, int32_t id, const MethodInfo* method);
// 0x1822b18c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b1b95: jmp 0x1822b1ac0

void UI_MapEditorHierarchyPanel__FocusObject
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  System_Collections_Generic_Dictionary_int__float__o *pSVar2;
  System_Collections_Generic_Dictionary_int__LayerMask__o *pSVar3;
  System_Collections_Generic_HashSet_int__o *__this_00;
  System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *pSVar4;
  bool bVar5;
  bool bVar6;
  UnityEngine_LayerMask_o UVar7;
  int32_t item;
  System_Collections_Generic_HashSet_int__o *__this_01;
  Map_MapObject_o *obj;
  int iVar8;
  
  if (Il2CppMethodInitialized_184347533 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347533 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
           TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_1822b1c52;
  bVar5 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                    (pSVar1,id,
                     (MethodInfo_1407110 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
  if (!bVar5) {
    return;
  }
  if ((__this->fields)._treeViewEnabled == false) {
    pSVar2 = (System_Collections_Generic_Dictionary_int__float__o *)(__this->fields)._idToIndex;
    if (pSVar2 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_1822b1c52;
    bVar5 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                      (pSVar2,id,
                       (MethodInfo_14070E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
    if (!bVar5) {
      UI_MapEditorHierarchyPanel__Sync(__this,(MethodInfo *)0x0);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__float__o *)(__this->fields)._idToIndex;
    if (pSVar2 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_1822b1c52;
    bVar5 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                      (pSVar2,id,
                       (MethodInfo_14070E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
    if (!bVar5) {
      return;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_int__LayerMask__o *)(__this->fields)._idToIndex;
    if (pSVar3 == (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) goto label_1822b1c52;
    UVar7 = System_Collections_Generic_Dictionary_int__LayerMask___get_Item
                      (pSVar3,id,
                       (MethodInfo_14157A0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item
                      );
    iVar8 = (int)UVar7.fields.m_Mask / 0x1e + 1;
    if ((__this->fields)._currentPage != iVar8) {
      (__this->fields)._currentPage = iVar8;
      UI_MapEditorHierarchyPanel__Sync(__this,(MethodInfo *)0x0);
    }
    goto label_1822b1c2d;
  }
  if (Il2CppMethodInitialized_184347535 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347535 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_01,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (id < 0) {
label_1822b1b9f:
    pSVar2 = (System_Collections_Generic_Dictionary_int__float__o *)(__this->fields)._idToIndex;
    if (pSVar2 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_1822b1c52;
    bVar5 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                      (pSVar2,id,
                       (MethodInfo_14070E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
    if (!bVar5) goto label_1822b1bc1;
  }
  else {
    if (__this_01 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1822b1c52;
    bVar5 = false;
    item = id;
    while (bVar6 = System_Collections_Generic_HashSet_int___Add
                             (__this_01,item,
                              (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add),
          bVar6) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_1822b1c52;
      bVar6 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar1,item,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (!bVar6) break;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_1822b1c52;
      obj = (Map_MapObject_o *)
            System_Collections_Generic_Dictionary_int__ulong___get_Item
                      (pSVar1,item,
                       (MethodInfo_14156F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
      item = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
      if (item < 0) break;
      __this_00 = (__this->fields)._expanded;
      if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1822b1c52;
      bVar6 = System_Collections_Generic_HashSet_int___Add
                        (__this_00,item,
                         (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
      if (bVar6) {
        bVar5 = true;
      }
    }
    if (!bVar5) goto label_1822b1b9f;
label_1822b1bc1:
    UI_MapEditorHierarchyPanel__Sync(__this,(MethodInfo *)0x0);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__float__o *)(__this->fields)._idToIndex;
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
    bVar5 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                      (pSVar2,id,
                       (MethodInfo_14070E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
    if (!bVar5) {
      return;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_int__LayerMask__o *)(__this->fields)._idToIndex;
    if (pSVar3 != (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) {
      UVar7 = System_Collections_Generic_Dictionary_int__LayerMask___get_Item
                        (pSVar3,id,
                         (MethodInfo_14157A0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
      pSVar4 = (__this->fields)._rows;
      if (pSVar4 != (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0) {
        UI_MapEditorHierarchyPanel__FocusVirtualRow
                  (__this,(int32_t)UVar7.fields.m_Mask,(pSVar4->fields)._size,(MethodInfo *)0x0);
        UI_MapEditorHierarchyPanel__RenderVirtualizedRows(__this,true,(MethodInfo *)0x0);
label_1822b1c2d:
        UI_MapEditorHierarchyPanel__SyncSelectedItems(__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_1822b1c52:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$FocusVirtualRow
// il2cpp: void UI_MapEditorHierarchyPanel__FocusVirtualRow (UI_MapEditorHierarchyPanel_o* __this, int32_t rowIndex, int32_t totalRows, const MethodInfo* method);
// 0x1822b1fd0

void UI_MapEditorHierarchyPanel__FocusVirtualRow
               (UI_MapEditorHierarchyPanel_o *__this,int32_t rowIndex,int32_t totalRows,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Rect_o *pUVar4;
  UnityEngine_Vector2_o UVar5;
  float stride;
  float fVar6;
  UnityEngine_Rect_o local_58 [3];
  
  if (Il2CppMethodInitialized_184347534 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184347534 = '\x01';
  }
  pUVar1 = (__this->fields)._scrollRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pUVar1 = (__this->fields)._scrollRect;
  if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    pUVar3 = (pUVar1->fields).m_Content;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    pUVar3 = UI_MapEditorHierarchyPanel__GetViewportRect(__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_1822b21a8;
      pUVar4 = UnityEngine_RectTransform__get_rect(local_58,pUVar3,(MethodInfo *)0x0);
      fVar6 = (pUVar4->fields).m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
    }
    else {
      fVar6 = (*(__this->klass->vtable)._31_GetPanelHeight.methodPtr)
                        (__this,(__this->klass->vtable)._31_GetPanelHeight.method);
    }
    pUVar1 = (__this->fields)._scrollRect;
    if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar3 = (pUVar1->fields).m_Content, pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar5 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
      stride = UI_MapEditorHierarchyPanel__GetVirtualStride(__this,(MethodInfo *)0x0);
      fVar6 = UI_MapEditorHierarchyVirtualization__ComputeFocusScrollY
                        (UVar5.fields.y,rowIndex,stride,fVar6,totalRows,0.25,0.75,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._scrollRect;
      if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
         (pUVar3 = (pUVar1->fields).m_Content, pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar5.fields.y = fVar6;
        UnityEngine_RectTransform__set_anchoredPosition(pUVar3,UVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_1822b21a8:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$ExpandAncestors
// il2cpp: bool UI_MapEditorHierarchyPanel__ExpandAncestors (UI_MapEditorHierarchyPanel_o* __this, int32_t id, const MethodInfo* method);
// 0x1822b1380
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b141d: mov r14d, 1
// asm:   0x1822b14f0: jmp 0x1822b1423

bool UI_MapEditorHierarchyPanel__ExpandAncestors
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  System_Collections_Generic_HashSet_int__o *__this_00;
  bool bVar2;
  System_Collections_Generic_HashSet_int__o *__this_01;
  Map_MapObject_o *obj;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184347535 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347535 = '\x01';
  }
  bVar3 = false;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_01,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (-1 < id) {
    bVar3 = false;
    if (__this_01 == (System_Collections_Generic_HashSet_int__o *)0x0) {
label_1822b1507:
      ThrowNullReferenceException();
    }
    while (bVar2 = System_Collections_Generic_HashSet_int___Add
                             (__this_01,id,
                              (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add),
          bVar2) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_1822b1507;
      bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar1,id,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (!bVar2) {
        return bVar3;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_1822b1507;
      obj = (Map_MapObject_o *)
            System_Collections_Generic_Dictionary_int__ulong___get_Item
                      (pSVar1,id,
                       (MethodInfo_14156F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
      id = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
      if (id < 0) {
        return bVar3;
      }
      __this_00 = (__this->fields)._expanded;
      if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1822b1507;
      bVar2 = System_Collections_Generic_HashSet_int___Add
                        (__this_00,id,
                         (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
      if (bVar2) {
        bVar3 = true;
      }
    }
  }
  return bVar3;
}


// UI.MapEditorHierarchyPanel$$OnButtonRelease
// il2cpp: void UI_MapEditorHierarchyPanel__OnButtonRelease (UI_MapEditorHierarchyPanel_o* __this, int32_t id, const MethodInfo* method);
// 0x180547020

void
UI_MapEditorHierarchyPanel__OnButtonRelease(UI_MapEditorHierarchyPanel_o* __this, int32_t id, MethodInfo* method)

{
  return;
}


// UI.MapEditorHierarchyPanel$$OnDestroy
// il2cpp: void UI_MapEditorHierarchyPanel__OnDestroy (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b42f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b438a: mov rbx, qword ptr [rsp + 0x30]

void UI_MapEditorHierarchyPanel__OnDestroy(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorContextMenu_o *pUVar1;
  UnityEngine_Object_o *pUVar2;
  bool bVar3;
  
  if ((__this->fields)._contextMenu != (UI_MapEditorContextMenu_o *)0x0) {
    pUVar1 = (__this->fields)._contextMenu;
    if (Il2CppMethodInitialized_1843474e9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843474e9 = '\x01';
    }
    pUVar2 = (UnityEngine_Object_o *)(pUVar1->fields)._root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar2 = (UnityEngine_Object_o *)(pUVar1->fields)._root;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.MapEditorHierarchyPanel$$OnItemPointerDown
// il2cpp: void UI_MapEditorHierarchyPanel__OnItemPointerDown (UI_MapEditorHierarchyPanel_o* __this, int32_t id, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822b4a20

void UI_MapEditorHierarchyPanel__OnItemPointerDown
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  
  (__this->fields)._dragSourceId = id;
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    fVar1 = (eventData->fields)._position_k__BackingField.fields.y;
    (__this->fields)._dragStartMouse.fields.x = (eventData->fields)._position_k__BackingField.fields.x;
    (__this->fields)._dragStartMouse.fields.y = fVar1;
    (__this->fields)._suppressClick = false;
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$OnItemBeginDrag
// il2cpp: void UI_MapEditorHierarchyPanel__OnItemBeginDrag (UI_MapEditorHierarchyPanel_o* __this, int32_t id, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822b43a0

void UI_MapEditorHierarchyPanel__OnItemBeginDrag
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_MapEditorMenu_o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_01;
  Il2CppObject *object;
  bool bVar3;
  UI_MapEditorHierarchyPanel___c__DisplayClass127_0_o *object_00;
  System_Func_MapObject__bool__o *__this_02;
  Map_MapObject_o *obj;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_03;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  
  if (Il2CppMethodInitialized_184347536 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c_OnItemBeginDrag_b__127_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass127_0_OnItemBeginDrag_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorHierarchyPanel_c__DisplayClass127_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorHierarchyPanel_c);
    Il2CppMethodInitialized_184347536 = '\x01';
  }
  object_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c__DisplayClass127_0);
  UI_MapEditorHierarchyPanel___c__DisplayClass127_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object_00,(MethodInfo *)0x0);
  if (object_00 != (UI_MapEditorHierarchyPanel___c__DisplayClass127_0_o *)0x0) {
    (object_00->fields).id = id;
    __this_00 = (__this->fields)._menu;
    if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
      bVar3 = UI_MapEditorMenu__IsPopupActive(__this_00,(MethodInfo *)0x0);
      if (bVar3) {
        return;
      }
      pGVar1 = (__this->fields)._gameManager;
      (__this->fields)._draggingItem = true;
      (__this->fields)._dropTargetId = -1;
      (__this->fields)._dropToRoot = false;
      (__this->fields)._dropIndicatorId = -1;
      (__this->fields)._currentDropMode = 0;
      (__this->fields)._dragSourceId = (object_00->fields).id;
      if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
        pSVar2 = (pGVar1->fields).SelectedObjects;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
        System_Func_object__bool____ctor
                  ((System_Predicate_object__o *)__this_02,(Il2CppObject *)object_00,
                   (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass127_0_OnItemBeginDrag_b__0,
                   (MethodInfo_B61EB0 *)0x0);
        bVar3 = System_Linq_Enumerable__Any_object__6b6920
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                           (System_Func_TSource__bool__o *)__this_02,
                           (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_MapObject);
        if (!bVar3) {
          pGVar1 = (__this->fields)._gameManager;
          if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822b4714;
          GameManagers_MapEditorGameManager__DeselectAll(pGVar1,(MethodInfo *)0x0);
          pGVar1 = (__this->fields)._gameManager;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          __this_01 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                      TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if ((__this_01 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
             (obj = (Map_MapObject_o *)
                    System_Collections_Generic_Dictionary_int__ulong___get_Item
                              (__this_01,(object_00->fields).id,
                               (MethodInfo_14156F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
             pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0)) goto label_1822b4714;
          GameManagers_MapEditorGameManager__SelectObject(pGVar1,obj,(MethodInfo *)0x0);
          pGVar1 = (__this->fields)._gameManager;
          if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822b4714;
          GameManagers_MapEditorGameManager__OnSelectionChange(pGVar1,false,(MethodInfo *)0x0);
        }
        pGVar1 = (__this->fields)._gameManager;
        if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
          pSVar2 = (pGVar1->fields).SelectedObjects;
          if ((TypeInfo_UI_MapEditorHierarchyPanel_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
          }
          __this_03 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                      TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9__127_1;
          if (__this_03 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
            if ((TypeInfo_UI_MapEditorHierarchyPanel_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
            }
            object = (Il2CppObject *)TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9;
            __this_03 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
            System_Func_object__int____ctor
                      (__this_03,object,
                       (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c_OnItemBeginDrag_b__127_1,
                       (MethodInfo_AF4D50 *)0x0);
            TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9__127_1 =
                 (System_Func_MapObject__int__o *)__this_03;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9__127_1,__this_03);
          }
          collection = System_Linq_Enumerable__Select_Vector3__object_
                                 ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                                  (System_Func_TSource__TResult__o *)__this_03,
                                  (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int)
          ;
          pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
          System_Collections_Generic_HashSet_int____ctor_176c3b0
                    (pSVar4,(System_Collections_Generic_IEnumerable_T__o *)collection,
                     (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
          pSVar4 = UI_MapEditorHierarchyPanel__GetTopLevelIds(__this,pSVar4,(MethodInfo *)0x0);
          (__this->fields)._dragTopLevel = pSVar4;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._dragTopLevel,pSVar4);
          if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
            UI_MapEditorHierarchyPanel__ShowDragGhost
                      (__this,(object_00->fields).id,
                       (UnityEngine_Vector2_o)(eventData->fields)._position_k__BackingField.fields,
                       (MethodInfo *)0x0);
            UI_MapEditorHierarchyPanel__RefreshDropIndicators(__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_1822b4714:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$OnItemDrag
// il2cpp: void UI_MapEditorHierarchyPanel__OnItemDrag (UI_MapEditorHierarchyPanel_o* __this, int32_t id, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822b4720

void UI_MapEditorHierarchyPanel__OnItemDrag
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Camera_o *eventCamera;
  float fVar3;
  undefined8 local_res8;
  
  if ((__this->fields)._draggingItem != false) {
    if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar1 = (__this->fields)._dragStartMouse.fields;
    UVar2 = (eventData->fields)._position_k__BackingField.fields;
    local_res8 = CONCAT44(UVar2.y - UVar1.y,UVar2.x - UVar1.x);
    fVar3 = (float)il2cpp_runtime_helper_180562bc0(&local_res8,0);
    if (6.0 <= fVar3) {
      UI_MapEditorHierarchyPanel__MoveDragGhost
                (__this,(UnityEngine_Vector2_o)(eventData->fields)._position_k__BackingField.fields,
                 (MethodInfo *)0x0);
      UVar1 = (eventData->fields)._position_k__BackingField.fields;
      eventCamera = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera
                              (eventData,(MethodInfo *)0x0);
      UI_MapEditorHierarchyPanel__UpdateDropTargetFromPointer
                (__this,(UnityEngine_Vector2_o)UVar1,eventCamera,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.MapEditorHierarchyPanel$$UpdateDropTargetFromPointer
// il2cpp: void UI_MapEditorHierarchyPanel__UpdateDropTargetFromPointer (UI_MapEditorHierarchyPanel_o* __this, UnityEngine_Vector2_o screenPosition, UnityEngine_Camera_o* eventCamera, const MethodInfo* method);
// 0x1822b7e40

void UI_MapEditorHierarchyPanel__UpdateDropTargetFromPointer
               (UI_MapEditorHierarchyPanel_o *__this,UnityEngine_Vector2_o screenPosition,
               UnityEngine_Camera_o *eventCamera,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  System_Collections_Generic_HashSet_int__o *__this_01;
  bool bVar1;
  int32_t targetId;
  UnityEngine_RectTransform_o *rect;
  int32_t iVar2;
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_184347537 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_184347537 = '\x01';
  }
  local_res18[0] = 0;
  targetId = UI_MapEditorHierarchyPanel__FindHoveredItem
                       (__this,screenPosition,eventCamera,local_res18,(MethodInfo *)0x0);
  iVar2 = local_res18[0];
  if (targetId < 0) {
    (__this->fields)._currentDropMode = 0;
    (__this->fields)._dropTargetId = -1;
    (__this->fields)._dropIndicatorId = -1;
    if ((__this->fields)._treeViewEnabled == false) {
      (__this->fields)._dropToRoot = false;
    }
    else {
      __this_00 = (__this->fields).SinglePanel;
      if (__this_00 == (UnityEngine_Transform_o *)0x0) {
label_1822b7fe0:
        ThrowNullReferenceException();
      }
      rect = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_00,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
      if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
      }
      bVar1 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint_32c16a0
                        (rect,screenPosition,eventCamera,(MethodInfo *)0x0);
      (__this->fields)._dropToRoot = bVar1;
    }
    goto label_1822b7fc9;
  }
  if (local_res18[0] == 1) {
    if ((__this->fields)._treeViewEnabled != false) {
      bVar1 = UI_MapEditorHierarchyPanel__IsValidDropTarget(__this,targetId,(MethodInfo *)0x0);
      if (bVar1) {
        (__this->fields)._currentDropMode = 1;
        (__this->fields)._dropToRoot = false;
        iVar2 = targetId;
        goto label_1822b7fbd;
      }
    }
    (__this->fields)._dropToRoot = false;
label_1822b7fb0:
    targetId = -1;
    (__this->fields)._currentDropMode = 0;
    iVar2 = targetId;
  }
  else {
    __this_01 = (__this->fields)._dragTopLevel;
    if (__this_01 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1822b7fe0;
    bVar1 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)__this_01,targetId,
                       (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    (__this->fields)._dropToRoot = false;
    if (bVar1) goto label_1822b7fb0;
    (__this->fields)._currentDropMode = iVar2;
    iVar2 = -1;
  }
label_1822b7fbd:
  (__this->fields)._dropTargetId = targetId;
  (__this->fields)._dropIndicatorId = iVar2;
label_1822b7fc9:
  UI_MapEditorHierarchyPanel__RefreshDropIndicators(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel$$OnItemEndDrag
// il2cpp: void UI_MapEditorHierarchyPanel__OnItemEndDrag (UI_MapEditorHierarchyPanel_o* __this, int32_t id, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822b4800

void UI_MapEditorHierarchyPanel__OnItemEndDrag
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  System_Collections_Generic_HashSet_int__o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar3;
  System_Collections_Generic_List_TSource__o *pSVar4;
  int32_t item;
  float fVar5;
  undefined8 local_res8;
  
  if (Il2CppMethodInitialized_184347538 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347538 = '\x01';
  }
  if ((__this->fields)._draggingItem != false) {
    (__this->fields)._draggingItem = false;
    UI_MapEditorHierarchyPanel__HideDragGhost(__this,(MethodInfo *)0x0);
    if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
label_1822b4a19:
      ThrowNullReferenceException();
    }
    UVar1 = (__this->fields)._dragStartMouse.fields;
    UVar2 = (eventData->fields)._position_k__BackingField.fields;
    local_res8 = CONCAT44(UVar2.y - UVar1.y,UVar2.x - UVar1.x);
    fVar5 = (float)il2cpp_runtime_helper_180562bc0(&local_res8);
    if ((6.0 <= fVar5) &&
       (((__this->fields)._suppressClick = true, (__this->fields)._dropTargetId != -1 ||
        ((__this->fields)._dropToRoot != false)))) {
      if (((__this->fields)._currentDropMode == 2) || ((__this->fields)._currentDropMode == 3)) {
        pGVar3 = (__this->fields)._gameManager;
        pSVar4 = System_Linq_Enumerable__ToList_int_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)
                            (__this->fields)._dragTopLevel,
                            (MethodInfo_6C9670 *)MethodInfo_System_Linq_Enumerable_ToList_int);
        if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822b4a19;
        GameManagers_MapEditorGameManager__ReorderObjects
                  (pGVar3,(System_Collections_Generic_List_int__o *)pSVar4,(__this->fields)._dropTargetId,
                   (__this->fields)._currentDropMode == 3,(__this->fields)._treeViewEnabled,(MethodInfo *)0x0)
        ;
      }
      else if ((__this->fields)._treeViewEnabled != false) {
        if ((__this->fields)._dropToRoot == false) {
          item = (__this->fields)._dropTargetId;
        }
        else {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          item = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
        }
        if (((__this->fields)._dropToRoot == false) && (-1 < item)) {
          __this_00 = (__this->fields)._expanded;
          if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1822b4a19;
          System_Collections_Generic_HashSet_int___Add
                    (__this_00,item,
                     (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
        }
        pGVar3 = (__this->fields)._gameManager;
        pSVar4 = System_Linq_Enumerable__ToList_int_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)
                            (__this->fields)._dragTopLevel,
                            (MethodInfo_6C9670 *)MethodInfo_System_Linq_Enumerable_ToList_int);
        if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822b4a19;
        GameManagers_MapEditorGameManager__ReparentObjects
                  (pGVar3,(System_Collections_Generic_List_int__o *)pSVar4,item,(MethodInfo *)0x0);
      }
      (__this->fields)._dropTargetId = -1;
    }
    (__this->fields)._dropIndicatorId = -1;
    (__this->fields)._dropToRoot = false;
    (__this->fields)._currentDropMode = 0;
    UI_MapEditorHierarchyPanel__RefreshDropIndicators(__this,(MethodInfo *)0x0);
  }
  return;
}


// UI.MapEditorHierarchyPanel$$FindHoveredItem
// il2cpp: int32_t UI_MapEditorHierarchyPanel__FindHoveredItem (UI_MapEditorHierarchyPanel_o* __this, UnityEngine_Vector2_o screenPosition, UnityEngine_Camera_o* eventCamera, int32_t* mode, const MethodInfo* method);
// 0x1822b1510
// eh: try 0x1822b1664..0x1822b18ad -> pad 0x1833392e0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b1801: jmp 0x1822b1808
// asm:   0x1822b1860: mov rdx, qword ptr [rip + 0x1dfd621]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_Dispose
// asm:   0x1822b1867: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822b186c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822b1871: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822b1876: test rcx, rcx
// asm:   0x1822b1879: jne 0x1822b18ad
// asm:   0x1822b18ad: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833392e0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833392e5: push rbp
// asm:   0x1833392e6: sub rsp, 0x20
// asm:   0x1833392ea: mov rbp, rdx
// asm:   0x1833392ed: mov rax, qword ptr [rbp + 0x60]
// asm:   0x1833392f1: mov rcx, qword ptr [rax]
// asm:   0x1833392f4: mov qword ptr [rbp + 0x28], rcx
// asm:   0x1833392f8: movabs rax, 0
// asm:   0x183339302: add rsp, 0x20
// asm:   0x183339306: pop rbp
// asm:   0x183339307: ret 

int32_t UI_MapEditorHierarchyPanel__FindHoveredItem
                  (UI_MapEditorHierarchyPanel_o *__this,UnityEngine_Vector2_o screenPosition,
                  UnityEngine_Camera_o *eventCamera,int32_t *mode,MethodInfo *method)

{
  float fVar1;
  System_Collections_Generic_Dictionary_int__GameObject__o *__this_00;
  int32_t iVar2;
  Il2CppObject *x;
  bool bVar3;
  int iVar4;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector3_array *fourCornersArray;
  float fVar5;
  float fVar6;
  float local_d8;
  float fStack_d4;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_c0;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90 [2];
  
  if (Il2CppMethodInitialized_184347539 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_GameObject_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_GameObject_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_184347539 = '\x01';
  }
  local_c0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c0.fields._version = 0;
  local_c0.fields._index = 0;
  local_c0.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c0.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c0.fields._getEnumeratorRetType = 0;
  local_c0.fields._36_4_ = 0;
  *mode = 1;
  fVar5 = UI_MapEditorHierarchyPanel__GetVirtualStride(__this,(MethodInfo *)0x0);
  fVar5 = (fVar5 - (__this->fields)._virtualRowHeight) * 0.5;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  __this_00 = (__this->fields)._idToItem;
  if (__this_00 == (System_Collections_Generic_Dictionary_int__GameObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
            (local_90,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_13C1150 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_GetEnumerator);
  local_c0.fields._dictionary = local_90[0].fields._dictionary;
  local_c0.fields._version = local_90[0].fields._version;
  local_c0.fields._index = local_90[0].fields._index;
  local_c0.fields._current.fields.key = local_90[0].fields._current.fields.key;
  local_c0.fields._current.fields.value = local_90[0].fields._current.fields.value;
  local_c0.fields._getEnumeratorRetType = local_90[0].fields._getEnumeratorRetType;
  local_c0.fields._36_4_ = local_90[0].fields._36_4_;
  fStack_d4 = screenPosition.fields.y;
  local_d8 = screenPosition.fields.x;
  while( true ) {
    do {
      do {
        do {
          bVar3 = System_Collections_Generic_Dictionary_Enumerator_uint__object___MoveNext
                            (&local_c0,
                             (MethodInfo_15642D0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_MoveNext
                            );
          x = local_c0.fields._current.fields.value;
          if (!bVar3) {
            System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_c0,
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_Dispose);
            return -1;
          }
          iVar2 = (int32_t)local_c0.fields._current.fields.key;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        } while (bVar3);
        if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar3 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
      } while (!bVar3);
      __this_01 = UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)x,
                             (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                            );
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while (bVar3);
    fourCornersArray = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
    if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_RectTransform__GetWorldCorners(__this_01,fourCornersArray,(MethodInfo *)0x0);
    if (fourCornersArray == (UnityEngine_Vector3_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)fourCornersArray->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if ((uint)fourCornersArray->max_length < 3) {
      ThrowIndexOutOfRangeException();
    }
    if ((int)fourCornersArray->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if ((uint)fourCornersArray->max_length < 2) break;
    if ((((fourCornersArray->m_Items[0].fields.x <= local_d8) &&
         (local_d8 < fourCornersArray->m_Items[2].fields.x ||
          local_d8 == fourCornersArray->m_Items[2].fields.x)) &&
        (fVar1 = fourCornersArray->m_Items[0].fields.y, fVar1 - fVar5 <= fStack_d4)) &&
       (fVar6 = fourCornersArray->m_Items[1].fields.y, fStack_d4 <= fVar6 + fVar5)) {
      fVar6 = fVar6 - fVar1;
      if (fVar6 <= 0.0) {
        fVar6 = 0.5;
      }
      else {
        fVar6 = (fStack_d4 - fVar1) / fVar6;
      }
      if ((__this->fields)._treeViewEnabled == false) {
        iVar4 = (fVar6 < 0.5) + 2;
      }
      else if (0.85 < fVar6) {
        iVar4 = 2;
      }
      else {
        iVar4 = 3;
        if (0.15 <= fVar6) {
          iVar4 = 1;
        }
      }
      *mode = iVar4;
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_c0,
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_Dispose);
      return iVar2;
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.MapEditorHierarchyPanel$$IsValidDropTarget
// il2cpp: bool UI_MapEditorHierarchyPanel__IsValidDropTarget (UI_MapEditorHierarchyPanel_o* __this, int32_t targetId, const MethodInfo* method);
// 0x1822b3840
// eh: try 0x1822b3930..0x1822b3a8a -> pad 0x183315930 catch Il2CppExceptionWrapper
// eh: try 0x1822b3ac7..0x1822b3ae5 -> pad 0x180182eb0 cleanup
// eh: try 0x1822b3ae5..0x1822b3af6 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b3aac: mov rdx, qword ptr [rip + 0x1dd4595]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x1822b3ab3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822b3ab8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822b3abd: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822b3ac2: test rcx, rcx
// asm:   0x1822b3ac5: jne 0x1822b3af6
// asm:   0x1822b3ac7: jmp 0x1822b3ad7
// asm:   0x1822b3af6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool UI_MapEditorHierarchyPanel__IsValidDropTarget
               (UI_MapEditorHierarchyPanel_o *__this,int32_t targetId,MethodInfo *method)

{
  System_Collections_Generic_HashSet_uint__o *__this_00;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  int iVar2;
  bool bVar3;
  int32_t item;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  Map_MapObject_o *obj;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_18434753a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    Il2CppMethodInitialized_18434753a = '\x01';
  }
  local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (targetId < 0) {
    return true;
  }
  pSVar4 = (__this->fields)._dragTopLevel;
  if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    bVar3 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)pSVar4,targetId,
                       (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar3) {
      return false;
    }
    __this_00 = (System_Collections_Generic_HashSet_uint__o *)(__this->fields)._dragTopLevel;
    if (__this_00 != (System_Collections_Generic_HashSet_uint__o *)0x0) {
      System_Collections_Generic_HashSet_uint___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this_00,
                 (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
      local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._current = local_50;
      local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_60._8_8_ = &local_48;
      do {
        bVar3 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                          (&local_48,
                           (MethodInfo_1537E90 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
        if (!bVar3) {
          System_Collections_Generic_HashSet_Enumerator_int___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                     MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
          return true;
        }
        iVar2 = (int)local_48.fields._current;
        if (Il2CppMethodInitialized_18434753b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
          Il2CppMethodInitialized_18434753b = '\x01';
        }
        pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
        System_Collections_Generic_HashSet_int____ctor
                  (pSVar4,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
        item = targetId;
        while (-1 < item) {
          if (pSVar4 == (System_Collections_Generic_HashSet_int__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = System_Collections_Generic_HashSet_int___Add
                            (pSVar4,item,
                             (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
          if (!bVar3) break;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                            (pSVar1,item,
                             (MethodInfo_1407110 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if (!bVar3) break;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          obj = (Map_MapObject_o *)
                System_Collections_Generic_Dictionary_int__ulong___get_Item
                          (pSVar1,item,
                           (MethodInfo_14156F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          item = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
          if (item == iVar2) {
            System_Collections_Generic_HashSet_Enumerator_int___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
            return false;
          }
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$IsDescendant
// il2cpp: bool UI_MapEditorHierarchyPanel__IsDescendant (UI_MapEditorHierarchyPanel_o* __this, int32_t id, int32_t ancestorId, const MethodInfo* method);
// 0x1822b36c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b375b: nop dword ptr [rax + rax]

bool UI_MapEditorHierarchyPanel__IsDescendant
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,int32_t ancestorId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  bool bVar2;
  System_Collections_Generic_HashSet_int__o *__this_00;
  Map_MapObject_o *obj;
  
  if (Il2CppMethodInitialized_18434753b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_18434753b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_00,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (-1 < id) {
    if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) {
label_1822b3835:
      ThrowNullReferenceException();
    }
    do {
      bVar2 = System_Collections_Generic_HashSet_int___Add
                        (__this_00,id,
                         (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
      if (!bVar2) {
        return false;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_1822b3835;
      bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar1,id,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (!bVar2) {
        return false;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_1822b3835;
      obj = (Map_MapObject_o *)
            System_Collections_Generic_Dictionary_int__ulong___get_Item
                      (pSVar1,id,
                       (MethodInfo_14156F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
      id = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
      if (id == ancestorId) {
        return true;
      }
    } while (-1 < id);
  }
  return false;
}


// UI.MapEditorHierarchyPanel$$GetTopLevelIds
// il2cpp: System_Collections_Generic_HashSet_int__o* UI_MapEditorHierarchyPanel__GetTopLevelIds (UI_MapEditorHierarchyPanel_o* __this, System_Collections_Generic_HashSet_int__o* ids, const MethodInfo* method);
// 0x1822b2bb0
// eh: try 0x1822b2cd4..0x1822b2e68 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b2de6: jmp 0x1822b2d13
// asm:   0x1822b2e18: mov rdx, qword ptr [rip + 0x1dd5229]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x1822b2e1f: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822b2e24: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822b2e29: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822b2e2e: test rcx, rcx
// asm:   0x1822b2e31: jne 0x1822b2e68
// asm:   0x1822b2e33: mov r14, qword ptr [rsp + 0xa8]
// asm:   0x1822b2e68: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_Collections_Generic_HashSet_int__o *
UI_MapEditorHierarchyPanel__GetTopLevelIds
          (UI_MapEditorHierarchyPanel_o *__this,System_Collections_Generic_HashSet_int__o *ids,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  int32_t item;
  bool bVar2;
  int32_t item_00;
  System_Collections_Generic_HashSet_int__o *__this_00;
  System_Collections_Generic_HashSet_int__o *__this_01;
  Map_MapObject_o *obj;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  System_Collections_Generic_HashSet_Enumerator_T__o local_58;
  
  if (Il2CppMethodInitialized_18434753c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_18434753c = '\x01';
  }
  local_58.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_00,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (ids == (System_Collections_Generic_HashSet_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_uint___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_70,
             (System_Collections_Generic_HashSet_uint__o *)ids,
             (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
  local_58.fields._set = (System_Collections_Generic_HashSet_T__o *)local_70._0_8_;
  local_58.fields._index = local_70._8_4_;
  local_58.fields._version = local_70._12_4_;
  local_58.fields._current = local_60;
  local_70._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_70._8_8_ = &local_58;
  do {
    bVar2 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                      (&local_58,
                       (MethodInfo_1537E90 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    if (!bVar2) {
      System_Collections_Generic_HashSet_Enumerator_int___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
      return __this_00;
    }
    item = (int32_t)local_58.fields._current;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor
              (__this_01,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    item_00 = item;
    do {
      if (item_00 < 0) {
label_1822b2deb:
        if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_int___Add
                  (__this_00,item,(MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add)
        ;
        break;
      }
      if (__this_01 == (System_Collections_Generic_HashSet_int__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = System_Collections_Generic_HashSet_int___Add
                        (__this_01,item_00,
                         (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
      if (!bVar2) goto label_1822b2deb;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar1,item_00,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (!bVar2) goto label_1822b2deb;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
        ThrowNullReferenceException();
      }
      obj = (Map_MapObject_o *)
            System_Collections_Generic_Dictionary_int__ulong___get_Item
                      (pSVar1,item_00,
                       (MethodInfo_14156F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
      item_00 = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
      bVar2 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        ((System_Collections_Generic_HashSet_T__o *)ids,item_00,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    } while (!bVar2);
  } while( true );
}


// UI.MapEditorHierarchyPanel$$OnButtonClick
// il2cpp: void UI_MapEditorHierarchyPanel__OnButtonClick (UI_MapEditorHierarchyPanel_o* __this, int32_t id, const MethodInfo* method);
// 0x1822b3cd0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b3f34: cmp edi, r15d
// asm:   0x1822b3f3d: nop dword ptr [rax]
// asm:   0x1822b400a: jmp 0x1822b4284
// asm:   0x1822b4225: mov rcx, rdi
// asm:   0x1822b4228: test rdi, rdi
// asm:   0x1822b422b: jmp 0x1822b406f

void UI_MapEditorHierarchyPanel__OnButtonClick
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UI_MapEditorMenu_o *__this_00;
  Settings_InputSettings_o *pSVar5;
  Settings_MapEditorInputSettings_o *pSVar6;
  Settings_KeybindSetting_o *__this_01;
  System_Collections_Generic_Dictionary_int__float__o *pSVar7;
  System_Collections_Generic_Dictionary_int__LayerMask__o *pSVar8;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar9;
  System_Collections_Generic_HashSet_int__o *pSVar10;
  System_Collections_Generic_HashSet_MapObject__o *pSVar11;
  Cameras_BaseCamera_o *pCVar12;
  Utility_BaseComponentCache_o *pUVar13;
  UnityEngine_Transform_o *__this_02;
  bool bVar14;
  bool bVar15;
  UnityEngine_LayerMask_o UVar16;
  UnityEngine_LayerMask_o key;
  UnityEngine_LayerMask_o UVar17;
  Map_MapObject_o *pMVar18;
  uint64_t uVar19;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_Vector3_o *pUVar20;
  GameManagers_MapEditorGameManager_o *pGVar21;
  float fVar22;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_o local_48 [4];
  
  if (Il2CppMethodInitialized_18434753d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_18434753d = '\x01';
  }
  if ((__this->fields)._suppressClick != false) {
    (__this->fields)._suppressClick = false;
    return;
  }
  __this_00 = (__this->fields)._menu;
  if (__this_00 == (UI_MapEditorMenu_o *)0x0) goto label_1822b42e4;
  bVar14 = UI_MapEditorMenu__IsPopupActive(__this_00,(MethodInfo *)0x0);
  if (bVar14) {
    return;
  }
  bVar14 = UnityEngine_Input__GetKey(0x130,(MethodInfo *)0x0);
  if (bVar14) {
    bVar14 = true;
  }
  else {
    bVar14 = UnityEngine_Input__GetKey(0x12f,(MethodInfo *)0x0);
  }
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar5 == (Settings_InputSettings_o *)0x0) ||
      (pSVar6 = (pSVar5->fields).MapEditor, pSVar6 == (Settings_MapEditorInputSettings_o *)0x0)) ||
     (__this_01 = (pSVar6->fields).Multiselect, __this_01 == (Settings_KeybindSetting_o *)0x0))
  goto label_1822b42e4;
  bVar15 = Settings_KeybindSetting__GetKey(__this_01,false,(MethodInfo *)0x0);
  if ((bVar14 == false) || ((__this->fields)._lastClickedItem == -1)) {
label_1822b400f:
    pSVar10 = (__this->fields)._selected;
    if (pSVar10 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1822b42e4;
    bVar14 = System_Collections_Generic_HashSet_Int32Enum___Contains
                       ((System_Collections_Generic_HashSet_T__o *)pSVar10,id,
                        (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar14) {
      pGVar21 = (__this->fields)._gameManager;
      if (bVar15) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar9 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if ((pSVar9 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
           (pMVar18 = (Map_MapObject_o *)
                      System_Collections_Generic_Dictionary_int__ulong___get_Item
                                (pSVar9,id,
                                 (MethodInfo_14156F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
           pGVar21 == (GameManagers_MapEditorGameManager_o *)0x0)) goto label_1822b42e4;
        GameManagers_MapEditorGameManager__DeselectObject(pGVar21,pMVar18,(MethodInfo *)0x0);
        goto label_1822b4284;
      }
      if ((pGVar21 == (GameManagers_MapEditorGameManager_o *)0x0) ||
         (pSVar11 = (pGVar21->fields).SelectedObjects,
         pSVar11 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto label_1822b42e4;
      if ((pSVar11->fields)._count < 2) {
        pCVar12 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
        if ((pCVar12 != (Cameras_BaseCamera_o *)0x0) &&
           (pUVar13 = (pCVar12->fields).Cache, pUVar13 != (Utility_BaseComponentCache_o *)0x0)) {
          __this_02 = (pUVar13->fields).Transform;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar9 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if ((((pSVar9 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) &&
               (uVar19 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                                   (pSVar9,id,
                                    (MethodInfo_14156F0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
               uVar19 != 0)) &&
              (*(UnityEngine_GameObject_o **)(uVar19 + 0x18) != (UnityEngine_GameObject_o *)0x0)) &&
             ((__this_03 = UnityEngine_GameObject__get_transform
                                     (*(UnityEngine_GameObject_o **)(uVar19 + 0x18),(MethodInfo *)0x0),
              __this_03 != (UnityEngine_Transform_o *)0x0 &&
              (pUVar20 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Vector3_o *)&local_58,__this_03,(MethodInfo *)0x0),
              __this_02 != (UnityEngine_Transform_o *)0x0)))) {
            uVar1 = (pUVar20->fields).x;
            uVar3 = (pUVar20->fields).y;
            fVar22 = (pUVar20->fields).z;
            pUVar20 = UnityEngine_Transform__get_forward(local_48,__this_02,(MethodInfo *)0x0);
            uVar2 = (pUVar20->fields).x;
            uVar4 = (pUVar20->fields).y;
            local_58.z = fVar22 - (pUVar20->fields).z * 50.0;
            local_58.y = (float)uVar3 - (float)uVar4 * 50.0;
            local_58.x = (float)uVar1 - (float)uVar2 * 50.0;
            UnityEngine_Transform__set_position
                      (__this_02,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
            goto label_1822b429a;
          }
        }
        goto label_1822b42e4;
      }
label_1822b406f:
      if (pGVar21 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822b42e4;
      GameManagers_MapEditorGameManager__DeselectAll(pGVar21,(MethodInfo *)0x0);
    }
    else {
      pSVar10 = (__this->fields)._selected;
      if (pSVar10 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1822b42e4;
      bVar14 = bVar15;
      if ((pSVar10->fields)._count == 0) {
        bVar14 = true;
      }
      if (bVar14 == false) {
        if (((pSVar10->fields)._count < 1) || (bVar15)) goto label_1822b429a;
        pGVar21 = (__this->fields)._gameManager;
        goto label_1822b406f;
      }
    }
    pGVar21 = (__this->fields)._gameManager;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar9 = (System_Collections_Generic_Dictionary_int__ulong__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if ((pSVar9 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
       (pMVar18 = (Map_MapObject_o *)
                  System_Collections_Generic_Dictionary_int__ulong___get_Item
                            (pSVar9,id,
                             (MethodInfo_14156F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
       pGVar21 == (GameManagers_MapEditorGameManager_o *)0x0)) goto label_1822b42e4;
    GameManagers_MapEditorGameManager__SelectObject(pGVar21,pMVar18,(MethodInfo *)0x0);
  }
  else {
    pSVar7 = (System_Collections_Generic_Dictionary_int__float__o *)(__this->fields)._idToIndex;
    if (pSVar7 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_1822b42e4;
    bVar14 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                       (pSVar7,(__this->fields)._lastClickedItem,
                        (MethodInfo_14070E0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
    if (!bVar14) goto label_1822b400f;
    pSVar7 = (System_Collections_Generic_Dictionary_int__float__o *)(__this->fields)._idToIndex;
    if (pSVar7 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_1822b42e4;
    bVar14 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                       (pSVar7,id,
                        (MethodInfo_14070E0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
    if (!bVar14) goto label_1822b400f;
    if (!bVar15) {
      pGVar21 = (__this->fields)._gameManager;
      if (pGVar21 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822b42e4;
      GameManagers_MapEditorGameManager__DeselectAll(pGVar21,(MethodInfo *)0x0);
    }
    pSVar8 = (System_Collections_Generic_Dictionary_int__LayerMask__o *)(__this->fields)._idToIndex;
    if (pSVar8 == (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) goto label_1822b42e4;
    UVar16 = System_Collections_Generic_Dictionary_int__LayerMask___get_Item
                       (pSVar8,(__this->fields)._lastClickedItem,
                        (MethodInfo_14157A0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
    pSVar8 = (System_Collections_Generic_Dictionary_int__LayerMask__o *)(__this->fields)._idToIndex;
    if (pSVar8 == (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) goto label_1822b42e4;
    key = System_Collections_Generic_Dictionary_int__LayerMask___get_Item
                    (pSVar8,id,
                     (MethodInfo_14157A0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
    if ((int)UVar16.fields.m_Mask < (int)key.fields.m_Mask) {
      key = UVar16;
    }
    pSVar8 = (System_Collections_Generic_Dictionary_int__LayerMask__o *)(__this->fields)._idToIndex;
    if (pSVar8 == (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) goto label_1822b42e4;
    UVar16 = System_Collections_Generic_Dictionary_int__LayerMask___get_Item
                       (pSVar8,(__this->fields)._lastClickedItem,
                        (MethodInfo_14157A0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
    pSVar8 = (System_Collections_Generic_Dictionary_int__LayerMask__o *)(__this->fields)._idToIndex;
    if (pSVar8 == (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) goto label_1822b42e4;
    UVar17 = System_Collections_Generic_Dictionary_int__LayerMask___get_Item
                       (pSVar8,id,
                        (MethodInfo_14157A0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
    if ((int)UVar17.fields.m_Mask < (int)UVar16.fields.m_Mask) {
      UVar17 = UVar16;
    }
    for (; (int)key.fields.m_Mask <= (int)UVar17.fields.m_Mask;
        key.fields.m_Mask = (UnityEngine_LayerMask_Fields)((int)key.fields.m_Mask + 1)) {
      pSVar8 = (System_Collections_Generic_Dictionary_int__LayerMask__o *)(__this->fields)._indexToId;
      if (pSVar8 == (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) goto label_1822b42e4;
      UVar16 = System_Collections_Generic_Dictionary_int__LayerMask___get_Item
                         (pSVar8,(int32_t)key.fields.m_Mask,
                          (MethodInfo_14157A0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar9 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar9 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_1822b42e4;
      bVar14 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                         (pSVar9,(int32_t)UVar16.fields.m_Mask,
                          (MethodInfo_1407110 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (bVar14) {
        pGVar21 = (__this->fields)._gameManager;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar9 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if ((pSVar9 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
           (pMVar18 = (Map_MapObject_o *)
                      System_Collections_Generic_Dictionary_int__ulong___get_Item
                                (pSVar9,(int32_t)UVar16.fields.m_Mask,
                                 (MethodInfo_14156F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
           pGVar21 == (GameManagers_MapEditorGameManager_o *)0x0)) goto label_1822b42e4;
        GameManagers_MapEditorGameManager__SelectObject(pGVar21,pMVar18,(MethodInfo *)0x0);
      }
    }
  }
label_1822b4284:
  pGVar21 = (__this->fields)._gameManager;
  if (pGVar21 != (GameManagers_MapEditorGameManager_o *)0x0) {
    GameManagers_MapEditorGameManager__OnSelectionChange(pGVar21,false,(MethodInfo *)0x0);
label_1822b429a:
    (__this->fields)._lastClickedItem = id;
    fVar22 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._lastclickedTime = fVar22;
    return;
  }
label_1822b42e4:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$SyncSelectedItems
// il2cpp: void UI_MapEditorHierarchyPanel__SyncSelectedItems (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b72c0
// eh: try 0x1822b7440..0x1822b7831 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b743d: nop dword ptr [rax]
// asm:   0x1822b75b5: mov rdx, qword ptr [rip + 0x1dd0d2c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x1822b75bc: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822b75c1: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822b75c6: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822b75cb: test rcx, rcx
// asm:   0x1822b75ce: jne 0x1822b77e9
// asm:   0x1822b75d4: xor r14d, r14d
// asm:   0x1822b75d7: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x1822b7782: mov rdx, qword ptr [rip + 0x1dd3a9f]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x1822b7789: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822b778e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822b7793: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822b7798: test rcx, rcx
// asm:   0x1822b779b: jne 0x1822b7831
// asm:   0x1822b77e9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822b7831: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void UI_MapEditorHierarchyPanel__SyncSelectedItems(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Collections_Generic_HashSet_int__o *pSVar2;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar3;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_02;
  int32_t key;
  Il2CppObject *pIVar4;
  bool bVar5;
  System_Collections_Generic_List_TSource__o *__this_03;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  Il2CppObject *local_res18 [2];
  undefined1 local_68 [16];
  Il2CppObject *local_58;
  undefined1 local_50 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_48;
  Il2CppObject *local_40;
  undefined1 local_38 [8];
  uint64_t uStack_30;
  Il2CppObject *local_28;
  
  if (Il2CppMethodInitialized_18434753e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&"Highlight");
    Il2CppMethodInitialized_18434753e = '\x01';
  }
  local_50 = (undefined1  [8])0x0;
  pUStack_48 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_40 = (Il2CppObject *)0x0;
  local_res18[0] = (Il2CppObject *)0x0;
  local_38 = (undefined1  [8])0x0;
  uStack_30 = 0;
  local_28 = (Il2CppObject *)0x0;
  __this_03 = System_Linq_Enumerable__ToList_int_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields)._selected,
                         (MethodInfo_6C9670 *)MethodInfo_System_Linq_Enumerable_ToList_int);
  if (__this_03 != (System_Collections_Generic_List_TSource__o *)0x0) {
    System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_68,
               (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_03,
               (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_50 = (undefined1  [8])local_68._0_8_;
    pUStack_48 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68._8_8_;
    local_40 = local_58;
    local_68._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_68._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
                         (MethodInfo_1530180 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
      if (!bVar5) break;
      key = (int32_t)local_40;
      local_res18[0] = (Il2CppObject *)0x0;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_int__object___TryGetValue
                (__this_00,key,local_res18,
                 (MethodInfo_141F4E0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_TryGetValue);
      pGVar1 = (__this->fields)._gameManager;
      if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_01 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects;
      if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar5 = System_Collections_Generic_HashSet_object___Contains
                        (__this_01,local_res18[0],
                         (MethodInfo_1759E40 *)
                         MethodInfo_System_Collections_Generic_HashSet_MapObject_Contains);
      if (!bVar5) {
        pSVar2 = (__this->fields)._selected;
        if (pSVar2 == (System_Collections_Generic_HashSet_int__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_Int32Enum___Remove
                  ((System_Collections_Generic_HashSet_T__o *)pSVar2,key,
                   (MethodInfo_17666A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
        pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._idToItem;
        if (pSVar3 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar5 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                          (pSVar3,key,
                           (MethodInfo_1407110 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ContainsKey);
        if (bVar5) {
          pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._idToItem;
          if (pSVar3 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar6 = (UnityEngine_GameObject_o *)
                   System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar3,key,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_get_Item);
          if (pUVar6 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar7 = UnityEngine_Transform__Find(pUVar7,"Highlight",(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_int___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50,
               MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (__this_02 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar1->fields).SelectedObjects,
       __this_02 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) {
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,__this_02,
                 (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
      local_38 = (undefined1  [8])local_68._0_8_;
      uStack_30 = local_68._8_8_;
      local_28 = local_58;
      local_68._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_68._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38;
      while( true ) {
        do {
          bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_38,
                             (MethodInfo_15381F0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
          pIVar4 = local_28;
          if (!bVar5) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
            return;
          }
          if (local_28 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (local_28[2].klass == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar2 = (__this->fields)._selected;
          if (pSVar2 == (System_Collections_Generic_HashSet_int__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar5 = System_Collections_Generic_HashSet_Int32Enum___Contains
                            ((System_Collections_Generic_HashSet_T__o *)pSVar2,
                             *(int32_t *)&((local_28[2].klass)->_1).byval_arg.data,
                             (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains)
          ;
        } while (bVar5);
        if (pIVar4[2].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar2 = (__this->fields)._selected;
        if (pSVar2 == (System_Collections_Generic_HashSet_int__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_int___Add
                  (pSVar2,*(int32_t *)&((pIVar4[2].klass)->_1).byval_arg.data,
                   (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
        if (pIVar4[2].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._idToItem;
        if (pSVar3 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) break;
        bVar5 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                          (pSVar3,*(int32_t *)&((pIVar4[2].klass)->_1).byval_arg.data,
                           (MethodInfo_1407110 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ContainsKey);
        if (bVar5) {
          if (pIVar4[2].klass == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._idToItem;
          if (pSVar3 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar6 = (UnityEngine_GameObject_o *)
                   System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar3,*(int32_t *)&((pIVar4[2].klass)->_1).byval_arg.data,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_get_Item);
          if (pUVar6 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar7 = UnityEngine_Transform__Find(pUVar7,"Highlight",(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel___ctor (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b84f0

void UI_MapEditorHierarchyPanel___ctor(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *__this_01;
  System_Collections_Generic_Dictionary_int__GameObject__o *__this_02;
  System_Collections_Generic_Dictionary_int__int__o *pSVar1;
  System_Collections_Generic_HashSet_int__o *pSVar2;
  System_Collections_Generic_Dictionary_int__List_int___o *__this_03;
  System_Collections_Generic_List_int__o *__this_04;
  Settings_StringSetting_o *__this_05;
  
  if (Il2CppMethodInitialized_18434753f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_GameObject)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_18434753f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._itemPool = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._itemPool,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData);
  System_Collections_Generic_List_MapEditorHierarchyPanel_RowData____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_ctor);
  (__this->fields)._rows = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rows,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_GameObject);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ctor);
  (__this->fields)._idToItem = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._idToItem,__this_02);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int);
  System_Collections_Generic_Dictionary_int__int____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
  (__this->fields)._idToIndex = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._idToIndex,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int);
  System_Collections_Generic_Dictionary_int__int____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
  (__this->fields)._indexToId = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._indexToId,pSVar1);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar2,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  (__this->fields)._selected = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selected,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar2,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  (__this->fields)._expanded = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._expanded,pSVar2);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_List_int);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_List_int_ctor);
  (__this->fields)._treeChildren = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._treeChildren,__this_03);
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_04,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  (__this->fields)._treeRoots = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._treeRoots,__this_04);
  (__this->fields)._lastClickedItem = -1;
  (__this->fields)._dragSourceId = -1;
  (__this->fields)._dropTargetId = -1;
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar2,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  (__this->fields)._dragTopLevel = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dragTopLevel,pSVar2);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(__this_05,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._searchSetting = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._searchSetting,__this_05);
  (__this->fields)._virtualRowHeight = 22.0;
  (__this->fields)._dropIndicatorId = -1;
  (__this->fields)._contextTargetId = -1;
  UI_MapEditorScaledPanel___ctor((UI_SnapshotViewerMainPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel$$<Setup>b__75_0
// il2cpp: void UI_MapEditorHierarchyPanel___Setup_b__75_0 (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b7e10

void UI_MapEditorHierarchyPanel___Setup_b__75_0(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel__Sync(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel$$<Setup>b__75_1
// il2cpp: void UI_MapEditorHierarchyPanel___Setup_b__75_1 (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b5200

void UI_MapEditorHierarchyPanel___Setup_b__75_1(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_18434750e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434750e = '\x01';
  }
  (__this->fields)._draggingItem = false;
  (__this->fields)._dropTargetId = -1;
  (__this->fields)._dropIndicatorId = -1;
  (__this->fields)._dropToRoot = false;
  (__this->fields)._currentDropMode = 0;
  UI_MapEditorHierarchyPanel__HideDragGhost(__this,(MethodInfo *)0x0);
  UI_MapEditorHierarchyPanel__HideInsertLine(__this,(MethodInfo *)0x0);
  bVar3 = (__this->fields)._treeViewEnabled == false;
  pGVar1 = (__this->fields)._gameManager;
  (__this->fields)._currentPage = 1;
  (__this->fields)._treeViewEnabled = bVar3;
  if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
    (pGVar1->fields).HierarchyTreeViewEnabled = bVar3;
    if ((__this->fields)._treeViewEnabled != false) {
      UI_MapEditorHierarchyPanel__BuildTreeGraph(__this,(MethodInfo *)0x0);
      if ((__this->fields)._treeViewEnabled != false) {
        pUVar2 = (__this->fields)._scrollRect;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pUVar2 = (__this->fields)._scrollRect;
          if (pUVar2 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_1822b5310;
          UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(pUVar2,1.0,(MethodInfo *)0x0);
        }
      }
    }
    UI_MapEditorHierarchyPanel__Sync(__this,(MethodInfo *)0x0);
    return;
  }
label_1822b5310:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$<Setup>b__75_2
// il2cpp: void UI_MapEditorHierarchyPanel___Setup_b__75_2 (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b7e20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b7e20: nop 

void UI_MapEditorHierarchyPanel___Setup_b__75_2(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  
  piVar1 = &(__this->fields)._currentPage;
  *piVar1 = *piVar1 + -1;
  UI_MapEditorHierarchyPanel__Sync(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel$$<Setup>b__75_3
// il2cpp: void UI_MapEditorHierarchyPanel___Setup_b__75_3 (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x1822b7e30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822b7e30: nop 

void UI_MapEditorHierarchyPanel___Setup_b__75_3(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  
  piVar1 = &(__this->fields)._currentPage;
  *piVar1 = *piVar1 + 1;
  UI_MapEditorHierarchyPanel__Sync(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel$$<AddResizeHandle>b__76_0
// il2cpp: void UI_MapEditorHierarchyPanel___AddResizeHandle_b__76_0 (UI_MapEditorHierarchyPanel_o* __this, float w, const MethodInfo* method);
// 0x1822b7d50

void UI_MapEditorHierarchyPanel___AddResizeHandle_b__76_0
               (UI_MapEditorHierarchyPanel_o *__this,float w,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_FloatSetting_o *__this_00;
  UI_MapEditorMenu_o *__this_01;
  
  if (Il2CppMethodInitialized_184347540 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_184347540 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar1 != (Settings_MapEditorSettings_o *)0x0) &&
     (__this_00 = (pSVar1->fields).HierarchyPanelWidth, __this_00 != (Settings_FloatSetting_o *)0x0)) {
    Settings_TypedSetting_float___set_Value
              ((Settings_TypedSetting_float__o *)__this_00,w,
               (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
    if (pSVar1 != (Settings_MapEditorSettings_o *)0x0) {
      (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
      __this_01 = (__this->fields)._menu;
      if (__this_01 != (UI_MapEditorMenu_o *)0x0) {
        UI_MapEditorMenu__ShowHierarchyPanel(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


