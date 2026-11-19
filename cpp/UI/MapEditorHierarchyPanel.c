// Type: UI.MapEditorHierarchyPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MapEditorHierarchyPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorHierarchyPanel.cs
// --------------------------------

// UI.MapEditorHierarchyPanel.RowData$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel_RowData___ctor (UI_MapEditorHierarchyPanel_RowData_o __this, int32_t id, int32_t depth, const MethodInfo* method);
// 0x5d77070

void UI_MapEditorHierarchyPanel_RowData___ctor
               (UI_MapEditorHierarchyPanel_RowData_o *__this,int32_t id,int32_t depth,MethodInfo *method)

{
  (__this->fields).Id = id;
  (__this->fields).Depth = depth;
  return;
}


// UI.MapEditorHierarchyPanel.<>c$$.cctor
// il2cpp: void UI_MapEditorHierarchyPanel___c___cctor (const MethodInfo* method);
// 0x5d7d760

void UI_MapEditorHierarchyPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547ffb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorHierarchyPanel_c);
    Il2CppMethodInitialized_07547ffb = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9 = (UI_MapEditorHierarchyPanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields->__9);
  return;
}


// UI.MapEditorHierarchyPanel.<>c$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel___c___ctor (UI_MapEditorHierarchyPanel___c_o* __this, const MethodInfo* method);
// 0x5d7d7d0

void UI_MapEditorHierarchyPanel___c___ctor(UI_MapEditorHierarchyPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c$$<BuildTreeGraph>b__85_0
// il2cpp: int32_t UI_MapEditorHierarchyPanel___c___BuildTreeGraph_b__85_0 (UI_MapEditorHierarchyPanel___c_o* __this, int32_t id, const MethodInfo* method);
// 0x5d7d7e0

int32_t UI_MapEditorHierarchyPanel___c___BuildTreeGraph_b__85_0
                  (UI_MapEditorHierarchyPanel___c_o *__this,int32_t id,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_int__o *__this_00;
  uint uVar2;
  
  if (Il2CppMethodInitialized_07547ffc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07547ffc = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    __this_00 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  }
  else {
    __this_00 = *(System_Collections_Generic_List_int__o **)
                 ((long)((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields + 0x10);
  }
  if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar2 = System_Collections_Generic_List_int___IndexOf
                    (__this_00,id,(MethodInfo_3917A80 *)MethodInfo_System_Collections_Generic_List_int_IndexOf
                    );
  if (0x7ffffffe < uVar2) {
    uVar2 = 0x7fffffff;
  }
  return uVar2;
}


// UI.MapEditorHierarchyPanel.<>c$$<BuildTreeGraph>b__85_1
// il2cpp: int32_t UI_MapEditorHierarchyPanel___c___BuildTreeGraph_b__85_1 (UI_MapEditorHierarchyPanel___c_o* __this, int32_t id, const MethodInfo* method);
// 0x5d7d890

int32_t UI_MapEditorHierarchyPanel___c___BuildTreeGraph_b__85_1
                  (UI_MapEditorHierarchyPanel___c_o *__this,int32_t id,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_int__o *__this_00;
  uint uVar2;
  
  if (Il2CppMethodInitialized_07547ffd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07547ffd = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    __this_00 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  }
  else {
    __this_00 = *(System_Collections_Generic_List_int__o **)
                 ((long)((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields + 0x10);
  }
  if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar2 = System_Collections_Generic_List_int___IndexOf
                    (__this_00,id,(MethodInfo_3917A80 *)MethodInfo_System_Collections_Generic_List_int_IndexOf
                    );
  if (0x7ffffffe < uVar2) {
    uVar2 = 0x7fffffff;
  }
  return uVar2;
}


// UI.MapEditorHierarchyPanel.<>c$$<FocusSelectionFromScene>b__121_1
// il2cpp: int32_t UI_MapEditorHierarchyPanel___c___FocusSelectionFromScene_b__121_1 (UI_MapEditorHierarchyPanel___c_o* __this, Map_MapObject_o* x, const MethodInfo* method);
// 0x5d7d940

int32_t UI_MapEditorHierarchyPanel___c___FocusSelectionFromScene_b__121_1
                  (UI_MapEditorHierarchyPanel___c_o *__this,Map_MapObject_o *x,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((x == (Map_MapObject_o *)0x0) ||
     (pMVar1 = (x->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Id;
}


// UI.MapEditorHierarchyPanel.<>c$$<FocusSelectionFromScene>b__121_2
// il2cpp: int32_t UI_MapEditorHierarchyPanel___c___FocusSelectionFromScene_b__121_2 (UI_MapEditorHierarchyPanel___c_o* __this, int32_t x, const MethodInfo* method);
// 0x5d7d960

int32_t UI_MapEditorHierarchyPanel___c___FocusSelectionFromScene_b__121_2
                  (UI_MapEditorHierarchyPanel___c_o *__this,int32_t x,MethodInfo *method)

{
  return x;
}


// UI.MapEditorHierarchyPanel.<>c$$<OnItemBeginDrag>b__128_1
// il2cpp: int32_t UI_MapEditorHierarchyPanel___c___OnItemBeginDrag_b__128_1 (UI_MapEditorHierarchyPanel___c_o* __this, Map_MapObject_o* x, const MethodInfo* method);
// 0x5d7d970

int32_t UI_MapEditorHierarchyPanel___c___OnItemBeginDrag_b__128_1
                  (UI_MapEditorHierarchyPanel___c_o *__this,Map_MapObject_o *x,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((x == (Map_MapObject_o *)0x0) ||
     (pMVar1 = (x->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Id;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass107_0___ctor (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o* __this, const MethodInfo* method);
// 0x5d79ef0

void UI_MapEditorHierarchyPanel___c__DisplayClass107_0___ctor
               (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$<OnItemRightClick>b__0
// il2cpp: bool UI_MapEditorHierarchyPanel___c__DisplayClass107_0___OnItemRightClick_b__0 (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x5d7d990

bool UI_MapEditorHierarchyPanel___c__DisplayClass107_0___OnItemRightClick_b__0
               (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o *__this,Map_MapObject_o *obj,
               MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((obj == (Map_MapObject_o *)0x0) ||
     (pMVar1 = (obj->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Id == (__this->fields).id;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$<OnItemRightClick>b__1
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass107_0___OnItemRightClick_b__1 (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o* __this, const MethodInfo* method);
// 0x5d7d9b0

void UI_MapEditorHierarchyPanel___c__DisplayClass107_0___OnItemRightClick_b__1
               (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) ||
     (__this_00 = (pUVar1->fields)._gameManager, __this_00 == (GameManagers_MapEditorGameManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  GameManagers_MapEditorGameManager__Copy(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$<OnItemRightClick>b__2
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass107_0___OnItemRightClick_b__2 (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o* __this, const MethodInfo* method);
// 0x5d7d9e0

void UI_MapEditorHierarchyPanel___c__DisplayClass107_0___OnItemRightClick_b__2
               (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) ||
     (__this_00 = (pUVar1->fields)._gameManager, __this_00 == (GameManagers_MapEditorGameManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  GameManagers_MapEditorGameManager__Cut(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$<OnItemRightClick>b__3
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass107_0___OnItemRightClick_b__3 (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o* __this, const MethodInfo* method);
// 0x5d7da10

void UI_MapEditorHierarchyPanel___c__DisplayClass107_0___OnItemRightClick_b__3
               (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) ||
     (__this_00 = (pUVar1->fields)._gameManager, __this_00 == (GameManagers_MapEditorGameManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  GameManagers_MapEditorGameManager__Paste(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$<OnItemRightClick>b__4
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass107_0___OnItemRightClick_b__4 (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o* __this, const MethodInfo* method);
// 0x5d7da40

void UI_MapEditorHierarchyPanel___c__DisplayClass107_0___OnItemRightClick_b__4
               (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) ||
     (__this_00 = (pUVar1->fields)._gameManager, __this_00 == (GameManagers_MapEditorGameManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  GameManagers_MapEditorGameManager__PasteAsChild
            (__this_00,(pUVar1->fields)._contextTargetId,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$<OnItemRightClick>b__5
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass107_0___OnItemRightClick_b__5 (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o* __this, const MethodInfo* method);
// 0x5d7da70

void UI_MapEditorHierarchyPanel___c__DisplayClass107_0___OnItemRightClick_b__5
               (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) ||
     (__this_00 = (pUVar1->fields)._gameManager, __this_00 == (GameManagers_MapEditorGameManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  GameManagers_MapEditorGameManager__CreateEmptyParent
            (__this_00,(pUVar1->fields)._contextTargetId,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$<OnItemRightClick>b__6
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass107_0___OnItemRightClick_b__6 (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o* __this, const MethodInfo* method);
// 0x5d7daa0

void UI_MapEditorHierarchyPanel___c__DisplayClass107_0___OnItemRightClick_b__6
               (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) ||
     (__this_00 = (pUVar1->fields)._gameManager, __this_00 == (GameManagers_MapEditorGameManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  GameManagers_MapEditorGameManager__ResetOrigin(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$<OnItemRightClick>b__7
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass107_0___OnItemRightClick_b__7 (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o* __this, const MethodInfo* method);
// 0x5d7dad0

void UI_MapEditorHierarchyPanel___c__DisplayClass107_0___OnItemRightClick_b__7
               (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) ||
     (__this_00 = (pUVar1->fields)._gameManager, __this_00 == (GameManagers_MapEditorGameManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  GameManagers_MapEditorGameManager__Delete(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass121_0$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass121_0___ctor (UI_MapEditorHierarchyPanel___c__DisplayClass121_0_o* __this, const MethodInfo* method);
// 0x5d7b3d0

void UI_MapEditorHierarchyPanel___c__DisplayClass121_0___ctor
               (UI_MapEditorHierarchyPanel___c__DisplayClass121_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass121_0$$<FocusSelectionFromScene>b__0
// il2cpp: bool UI_MapEditorHierarchyPanel___c__DisplayClass121_0___FocusSelectionFromScene_b__0 (UI_MapEditorHierarchyPanel___c__DisplayClass121_0_o* __this, Map_MapObject_o* x, const MethodInfo* method);
// 0x5d7db00

bool UI_MapEditorHierarchyPanel___c__DisplayClass121_0___FocusSelectionFromScene_b__0
               (UI_MapEditorHierarchyPanel___c__DisplayClass121_0_o *__this,Map_MapObject_o *x,
               MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((x == (Map_MapObject_o *)0x0) ||
     (pMVar1 = (x->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Id == (__this->fields).targetId;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass128_0$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass128_0___ctor (UI_MapEditorHierarchyPanel___c__DisplayClass128_0_o* __this, const MethodInfo* method);
// 0x5d7bf10

void UI_MapEditorHierarchyPanel___c__DisplayClass128_0___ctor
               (UI_MapEditorHierarchyPanel___c__DisplayClass128_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass128_0$$<OnItemBeginDrag>b__0
// il2cpp: bool UI_MapEditorHierarchyPanel___c__DisplayClass128_0___OnItemBeginDrag_b__0 (UI_MapEditorHierarchyPanel___c__DisplayClass128_0_o* __this, Map_MapObject_o* x, const MethodInfo* method);
// 0x5d7db20

bool UI_MapEditorHierarchyPanel___c__DisplayClass128_0___OnItemBeginDrag_b__0
               (UI_MapEditorHierarchyPanel___c__DisplayClass128_0_o *__this,Map_MapObject_o *x,
               MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((x == (Map_MapObject_o *)0x0) ||
     (pMVar1 = (x->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Id == (__this->fields).id;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___ctor (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x5d77af0

void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___ctor
               (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__0
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__0 (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x5d7db40

void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__0
               (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MapEditorHierarchyPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorHierarchyPanel__OnButtonClick(__this_00,(__this->fields).row.fields.Id,in_RDX);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__1
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__1 (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x5d7db60

void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__1
               (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o *__this,MethodInfo *method)

{
  if ((__this->fields).__4__this == (UI_MapEditorHierarchyPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__2
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__2 (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d7db70

void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__2
               (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *__this_00;
  MethodInfo *in_RCX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MapEditorHierarchyPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorHierarchyPanel__OnItemRightClick(__this_00,(__this->fields).row.fields.Id,eventData,in_RCX);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__3
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__3 (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d7db90

void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__3
               (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *pUVar1;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 == (UI_MapEditorHierarchyPanel_o *)0x0) ||
     ((pUVar1->fields)._dragSourceId = (__this->fields).row.fields.Id,
     eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (pUVar1->fields)._dragStartMouse.fields = (eventData->fields)._position_k__BackingField.fields;
  (pUVar1->fields)._suppressClick = false;
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__4
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__4 (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d7dbd0

void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__4
               (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *__this_00;
  MethodInfo *in_RCX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MapEditorHierarchyPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorHierarchyPanel__OnItemBeginDrag(__this_00,(__this->fields).row.fields.Id,eventData,in_RCX);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__5
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__5 (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d7dbf0

void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__5
               (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UI_MapEditorHierarchyPanel_o *__this_00;
  UnityEngine_Camera_o *eventCamera;
  MethodInfo *method_00;
  UnityEngine_EventSystems_PointerEventData_o *method_01;
  float fVar3;
  float fVar4;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MapEditorHierarchyPanel_o *)0x0) {
label_05d7dcfe:
    ThrowNullReferenceException();
  }
  if ((__this_00->fields)._draggingItem != false) {
    if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) goto label_05d7dcfe;
    UVar1 = (eventData->fields)._position_k__BackingField.fields;
    UVar2 = (__this_00->fields)._dragStartMouse.fields;
    method_01 = eventData;
    if (Il2CppMethodInitialized_0753e7b5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7b5 = '\x01';
    }
    fVar3 = UVar1.x - UVar2.x;
    fVar4 = UVar1.y - UVar2.y;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar3 = fVar4 * fVar4 + fVar3 * fVar3;
    if (fVar3 < 0.0) {
      fVar3 = sqrtf(fVar3);
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    if (6.0 <= fVar3) {
      UI_MapEditorHierarchyPanel__MoveDragGhost
                (__this_00,(UnityEngine_Vector2_o)(eventData->fields)._position_k__BackingField.fields,
                 (MethodInfo *)method_01);
      UVar1 = (eventData->fields)._position_k__BackingField.fields;
      eventCamera = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera
                              (eventData,(MethodInfo *)0x0);
      UI_MapEditorHierarchyPanel__UpdateDropTargetFromPointer
                (__this_00,(UnityEngine_Vector2_o)UVar1,eventCamera,method_00);
      return;
    }
  }
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__6
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__6 (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d7dd10

void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__6
               (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel_o *__this_00;
  MethodInfo *in_RCX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MapEditorHierarchyPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorHierarchyPanel__OnItemEndDrag(__this_00,(int32_t)eventData,eventData,in_RCX);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__7
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__7 (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x5d7dd30

void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__7
               (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o *__this,MethodInfo *method)

{
  uint item;
  UI_MapEditorHierarchyPanel_o *__this_00;
  System_Collections_Generic_HashSet_int__o *__this_01;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    item = (__this->fields).row.fields.Id;
    if (Il2CppMethodInitialized_07547feb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
      Il2CppMethodInitialized_07547feb = '\x01';
    }
    __this_01 = (__this_00->fields)._expanded;
    if (__this_01 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      method_00 = (MethodInfo *)(ulong)item;
      System_Collections_Generic_HashSet_int___Add
                (__this_01,item,(MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
      UI_MapEditorHierarchyPanel__Sync(__this_00,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__8
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__8 (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x5d7dda0

void UI_MapEditorHierarchyPanel___c__DisplayClass91_0___BindPooledItem_b__8
               (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o *__this,MethodInfo *method)

{
  uint item;
  UI_MapEditorHierarchyPanel_o *__this_00;
  System_Collections_Generic_HashSet_int__o *__this_01;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorHierarchyPanel_o *)0x0) {
    item = (__this->fields).row.fields.Id;
    if (Il2CppMethodInitialized_07547feb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
      Il2CppMethodInitialized_07547feb = '\x01';
    }
    __this_01 = (__this_00->fields)._expanded;
    if (__this_01 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      method_00 = (MethodInfo *)(ulong)item;
      System_Collections_Generic_HashSet_int___Remove
                (__this_01,item,(MethodInfo_4FA80C0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove
                );
      UI_MapEditorHierarchyPanel__Sync(__this_00,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$get_Width
// il2cpp: float UI_MapEditorHierarchyPanel__get_Width (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d71b30

float UI_MapEditorHierarchyPanel__get_Width(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 325.0;
}


// UI.MapEditorHierarchyPanel$$get_Height
// il2cpp: float UI_MapEditorHierarchyPanel__get_Height (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d71b40

float UI_MapEditorHierarchyPanel__get_Height(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 1005.0;
}


// UI.MapEditorHierarchyPanel$$get_TopBarHeight
// il2cpp: float UI_MapEditorHierarchyPanel__get_TopBarHeight (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d71b50

float UI_MapEditorHierarchyPanel__get_TopBarHeight(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 56.0;
}


// UI.MapEditorHierarchyPanel$$GetWidth
// il2cpp: float UI_MapEditorHierarchyPanel__GetWidth (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d71b60

float UI_MapEditorHierarchyPanel__GetWidth(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547fc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_07547fc1 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar1 == (Settings_MapEditorSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).HierarchyPanelWidth, pSVar2 == (Settings_FloatSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._value;
}


// UI.MapEditorHierarchyPanel$$GetHeight
// il2cpp: float UI_MapEditorHierarchyPanel__GetHeight (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d71bc0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d71c84: shufps xmm1, xmm1, 0x55
// asm:   0x5d71c88: xorps xmm0, xmm0
// asm:   0x5d71c8b: ucomiss xmm1, xmm0
// asm:   0x5d71c8e: jbe 0x5d71cc5

float UI_MapEditorHierarchyPanel__GetHeight(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Canvas_o *x;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Rect_c *method_00;
  float fVar2;
  UnityEngine_Rect_o UVar3;
  
  if (Il2CppMethodInitialized_07547fc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07547fc2 = '\x01';
  }
  x = UnityEngine_Component__GetComponentInParent_object__34b0d00
                ((UnityEngine_Component_o *)__this,
                 (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((x == (UnityEngine_Canvas_o *)0x0) ||
       (__this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)x,
                               (MethodInfo_34B0830 *)
                               MethodInfo_UnityEngine_Component_GetComponent_RectTransform),
       __this_00 == (UnityEngine_RectTransform_o *)0x0)) {
      ThrowNullReferenceException();
    }
    UVar3 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    method_00 = TypeInfo_UnityEngine_Rect;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (0.0 < UVar3.fields.m_Height) {
      fVar2 = UI_MapEditorHierarchyPanel__GetTopOffset((MethodInfo *)method_00);
      return UVar3.fields.m_Height - fVar2;
    }
  }
  fVar2 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                    (__this,(__this->klass->vtable)._6_get_Height.method);
  return fVar2;
}


// UI.MapEditorHierarchyPanel$$GetTopOffset
// il2cpp: float UI_MapEditorHierarchyPanel__GetTopOffset (const MethodInfo* method);
// 0x5d71cf0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d71d25: jmp 0x5d71dac
// asm:   0x5d71e9b: jmp 0x5d71dc1

float UI_MapEditorHierarchyPanel__GetTopOffset(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o UVar5;
  bool bVar6;
  UI_BaseMenu_o *pUVar7;
  UnityEngine_RectTransform_o *__this;
  UI_BaseMenu_o *x;
  float fVar8;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07547fc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547fc3 = '\x01';
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) goto label_05d71d74;
label_05d71d15:
    pUVar7 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar7 == (UI_BaseMenu_o *)0x0) goto label_05d71dac;
label_05d71d8c:
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if ((pUVar7->klass->_2).typeHierarchyDepth < bVar1) goto label_05d71dac;
    x = (UI_BaseMenu_o *)0x0;
    if ((pUVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_MapEditorMenu) {
      x = pUVar7;
    }
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor != 0) goto label_05d71d15;
label_05d71d74:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar7 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar7 != (UI_BaseMenu_o *)0x0) goto label_05d71d8c;
label_05d71dac:
    x = (UI_BaseMenu_o *)0x0;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar8 = 55.0;
  if (bVar6) {
    if (x == (UI_BaseMenu_o *)0x0) {
label_05d71ea0:
      ThrowNullReferenceException();
    }
    pSVar3 = (*(uint64_t *)((char *)x + 0xb8));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    fVar8 = 55.0;
    if (bVar6) {
      pSVar3 = (*(uint64_t *)((char *)x + 0xb8));
      if ((pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) ||
         (__this = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pSVar3,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_RectTransform),
         __this == (UnityEngine_RectTransform_o *)0x0)) goto label_05d71ea0;
      UVar4 = UnityEngine_RectTransform__get_sizeDelta(__this,(MethodInfo *)0x0);
      UVar5 = UnityEngine_RectTransform__get_anchoredPosition(__this,(MethodInfo *)0x0);
      fStack_24 = UVar4.fields.y;
      fStack_24 = fStack_24 - UVar5.fields.y;
      fVar8 = 0.0;
      if (0.0 <= fStack_24) {
        fVar8 = fStack_24;
      }
    }
  }
  return fVar8;
}


// UI.MapEditorHierarchyPanel$$get_BottomBarHeight
// il2cpp: float UI_MapEditorHierarchyPanel__get_BottomBarHeight (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d71eb0

float UI_MapEditorHierarchyPanel__get_BottomBarHeight(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorHierarchyPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorHierarchyPanel__get_VerticalSpacing (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d71ec0

float UI_MapEditorHierarchyPanel__get_VerticalSpacing(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 2.0;
}


// UI.MapEditorHierarchyPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorHierarchyPanel__get_HorizontalPadding (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d71ed0

int32_t UI_MapEditorHierarchyPanel__get_HorizontalPadding
                  (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorHierarchyPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorHierarchyPanel__get_VerticalPadding (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d71ee0

int32_t UI_MapEditorHierarchyPanel__get_VerticalPadding
                  (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.MapEditorHierarchyPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorHierarchyPanel__get_ScrollBar (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d71ef0

bool UI_MapEditorHierarchyPanel__get_ScrollBar(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MapEditorHierarchyPanel$$GetPanelVerticalOffset
// il2cpp: float UI_MapEditorHierarchyPanel__GetPanelVerticalOffset (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d71f00

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
// 0x5d71f50
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d72101: lea rdi, [r13 + 0x128]
// asm:   0x5d72108: jmp 0x5d7211c
// asm:   0x5d7219e: lea rdi, [r13 + 0x118]
// asm:   0x5d721a5: jmp 0x5d721d1

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
  UI_InputSettingElement_o *pUVar10;
  UnityEngine_UI_Text_o *method_00;
  GameManagers_MapEditorGameManager_c *pGVar11;
  UI_MapEditorMenu_o *pUVar12;
  float size;
  
  if (Il2CppMethodInitialized_07547fc4 == '\0') {
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
    Il2CppMethodInitialized_07547fc4 = '\x01';
  }
  UI_MapEditorScaledPanel__Setup((UI_MapEditorScaledPanel_o *)__this,parent,(MethodInfo *)0x0);
  pGVar11 = TypeInfo_GameManagers_MapEditorGameManager;
  pUVar12 = (UI_MapEditorMenu_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pUVar12 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((GameManagers_BaseGameManager_c *)pUVar12->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_BaseGameManager_c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) goto label_05d7272d;
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)pUVar12;
    if (((((GameManagers_BaseGameManager_c *)pUVar12->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_BaseGameManager_c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)pGVar11)) goto label_05d7272d;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar12 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar12 != (UI_MapEditorMenu_o *)0x0) goto label_05d72144;
label_05d721bf:
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    pUVar12 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar12 == (UI_MapEditorMenu_o *)0x0) goto label_05d721bf;
label_05d72144:
    pGVar11 = (GameManagers_MapEditorGameManager_c *)TypeInfo_UI_MapEditorMenu;
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((GameManagers_BaseGameManager_c *)pUVar12->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_BaseGameManager_c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
label_05d7272d:
      il2cpp_codegen_raise_invalid_cast_exception(pUVar12,pGVar11);
    }
    (__this->fields)._menu = pUVar12;
    if (((((GameManagers_BaseGameManager_c *)pUVar12->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_BaseGameManager_c *)pUVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)pGVar11)) goto label_05d7272d;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu);
  pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar6,0x12,0.0,20.0,pSVar5,(MethodInfo *)0x0);
  (__this->fields)._style = pUVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._style);
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
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05d72728;
    pUVar7 = UnityEngine_Transform__Find(pUVar7,"Label",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar7 = (__this->fields).TopBar;
      if (((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
          (pUVar7 = UnityEngine_Transform__Find(pUVar7,"Label",(MethodInfo *)0x0),
          pUVar7 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
         pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto label_05d72728;
      UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
    }
  }
  pUVar7 = (__this->fields).TopBar;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05d72728;
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar7,
                         (MethodInfo_34B0830 *)
                         MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (__this_00 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_05d72728;
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
    UnityEngine_RectOffset___ctor_68cd0a0(__this_01,8,8,4,4,(MethodInfo *)0x0);
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
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05d72728;
    __this_02 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar7,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    size = (*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)
                     (__this,(__this->klass->vtable)._36_get_TopBarHeight.method);
    if (__this_02 == (UnityEngine_RectTransform_o *)0x0) goto label_05d72728;
    UnityEngine_RectTransform__SetInsetAndSizeFromParentEdge(__this_02,2,0.0,size,(MethodInfo *)0x0);
  }
  pUVar7 = (__this->fields).TopBar;
  setting = (__this->fields)._searchSetting;
  pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar9,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_Setup_b__75_0,
             (MethodInfo *)0x0);
  pUVar8 = UI_ElementFactory__CreateInputSetting
                     (pUVar7,pUVar6,(Settings_BaseSetting_o *)setting,"",
                      "",120.0,28.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar9,
                      (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                      (MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    pUVar10 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar8,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    (__this->fields)._searchInput = pUVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._searchInput);
    pUVar7 = (__this->fields).TopBar;
    pUVar2 = (__this->fields)._style;
    pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar9,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_Setup_b__75_1,
               (MethodInfo *)0x0);
    pUVar8 = UI_ElementFactory__CreateIconButton
                       (pUVar7,pUVar2,"Icons/Navigation/TreeView",28.0,28.0,pUVar9,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    (__this->fields)._modeButton = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._modeButton);
    pUVar7 = (__this->fields).TopBar;
    pUVar2 = (__this->fields)._style;
    pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar9,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_Setup_b__75_2,
               (MethodInfo *)0x0);
    pUVar8 = UI_ElementFactory__CreateIconButton
                       (pUVar7,pUVar2,"Icons/Navigation/ArrowLeftIcon",18.0,18.0,pUVar9,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    (__this->fields)._pageLeftButton = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pageLeftButton);
    pUVar7 = (__this->fields).TopBar;
    pUVar2 = (__this->fields)._style;
    pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar9,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_Setup_b__75_3,
               (MethodInfo *)0x0);
    pUVar8 = UI_ElementFactory__CreateIconButton
                       (pUVar7,pUVar2,"Icons/Navigation/ArrowRightIcon",18.0,18.0,pUVar9,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    (__this->fields)._pageRightButton = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pageRightButton);
    pUVar8 = UI_ElementFactory__CreateDefaultLabel
                       ((__this->fields).TopBar,pUVar6,"0/0",0,4,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
      method_00 = UnityEngine_GameObject__GetComponent_object_
                            (pUVar8,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text)
      ;
      (__this->fields)._pageLabel = method_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._pageLabel);
      (__this->fields)._currentPage = 1;
      pGVar3 = (__this->fields)._gameManager;
      if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
        bVar4 = (pGVar3->fields).HierarchyTreeViewEnabled;
        (__this->fields)._treeViewEnabled = bVar4;
        if (bVar4 != false) {
          UI_MapEditorHierarchyPanel__BuildTreeGraph(__this,(MethodInfo *)method_00);
        }
        UI_MapEditorHierarchyPanel__EnsureVirtualizationElements(__this,(MethodInfo *)method_00);
        UI_MapEditorHierarchyPanel__EnsureDragVisuals(__this,(MethodInfo *)method_00);
        UI_MapEditorHierarchyPanel__AddResizeHandle(__this,(MethodInfo *)method_00);
        UI_MapEditorHierarchyPanel__Sync(__this,(MethodInfo *)method_00);
        return;
      }
    }
  }
label_05d72728:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$AddResizeHandle
// il2cpp: void UI_MapEditorHierarchyPanel__AddResizeHandle (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d74150

void UI_MapEditorHierarchyPanel__AddResizeHandle(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_UI_Image_o *pUVar1;
  UI_PanelResizeHandle_o *pUVar2;
  System_Action_float__o *__this_03;
  UnityEngine_Color_o UVar3;
  
  if (Il2CppMethodInitialized_07547fc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_PanelResizeHandle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorHierarchyPanel_AddResizeHandle_b__76_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"ResizeHandle");
    Il2CppMethodInitialized_07547fc5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(__this_00,"ResizeHandle",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
      __this_02 = UnityEngine_GameObject__AddComponent_object_
                            (__this_00,
                             (MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
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
                            (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
        if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
          UVar3.fields.b = 1.0;
          UVar3.fields.a = 0.04;
          UVar3.fields.r = 1.0;
          UVar3.fields.g = 1.0;
          (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                    (pUVar1,UVar3,(pUVar1->klass->vtable)._23_set_color.method);
          pUVar2 = UnityEngine_GameObject__AddComponent_object_
                             (__this_00,
                              (MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_PanelResizeHandle);
          if (pUVar2 != (UI_PanelResizeHandle_o *)0x0) {
            (pUVar2->fields).IsRightEdge = true;
            (pUVar2->fields).MinWidth = 150.0;
            (pUVar2->fields).MaxWidth = 600.0;
            __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_float);
            System_Action_float____ctor
                      (__this_03,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_AddResizeHandle_b__76_0,
                       (MethodInfo_4A82E50 *)0x0);
            (pUVar2->fields).OnResize = __this_03;
            Il2CppCodeGenWriteBarrier(&(pUVar2->fields).OnResize);
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
// 0x5d747d0

void UI_MapEditorHierarchyPanel__Show(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UI_BasePanel__Show((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel$$Sync
// il2cpp: void UI_MapEditorHierarchyPanel__Sync (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d74330

void UI_MapEditorHierarchyPanel__Sync(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_int__int__o *pSVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *pSVar5;
  UnityEngine_UI_Text_o *pUVar6;
  bool bVar7;
  int iVar8;
  System_String_o *pSVar9;
  System_String_o *str2;
  MethodInfo *pMVar10;
  UI_MapEditorHierarchyPanel_RowData_o row;
  int iVar11;
  UnityEngine_UI_Text_c *pUVar12;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  uint uVar13;
  uint uVar14;
  MethodInfo *method_01;
  System_Collections_Generic_List_GameObject__o *__this_01;
  MethodInfo *in_R8;
  int32_t local_38;
  int32_t local_34;
  
  if (Il2CppMethodInitialized_07547fc6 == '\0') {
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
    Il2CppMethodInitialized_07547fc6 = '\x01';
  }
  local_38 = 0;
  local_34 = 0;
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary_int__object___Clear
              (__this_00,
               (MethodInfo_4A0F8F0 *)MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_Clear);
    pSVar2 = (__this->fields)._idToIndex;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
      System_Collections_Generic_Dictionary_int__int___Clear
                (pSVar2,(MethodInfo_4A040E0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear);
      pSVar2 = (__this->fields)._indexToId;
      if (pSVar2 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
        pMVar10 = MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear;
        System_Collections_Generic_Dictionary_int__int___Clear
                  (pSVar2,(MethodInfo_4A040E0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear
                  );
        (__this->fields)._dropIndicatorId = -1;
        (__this->fields)._dropToRoot = false;
        if (Il2CppMethodInitialized_07547fe3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_07547fe3 = '\x01';
        }
        UI_MapEditorHierarchyPanel__EnsureDragVisuals(__this,pMVar10);
        pUVar3 = (UnityEngine_Object_o *)(__this->fields)._rootDropOverlay;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        pMVar10 = (MethodInfo *)0x0;
        bVar7 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          pUVar4 = (__this->fields)._rootDropOverlay;
          if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05d747c3;
          pMVar10 = (MethodInfo *)0x0;
          UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
        }
        UI_MapEditorHierarchyPanel__BuildRows(__this,pMVar10);
        pSVar5 = (__this->fields)._rows;
        if (pSVar5 != (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0) {
          iVar1 = (pSVar5->fields)._size;
          local_34 = iVar1;
          if ((__this->fields)._treeViewEnabled == false) {
            UI_MapEditorHierarchyPanel__SetVirtualizationActive(__this,false,method_00);
            iVar8 = (int)((ulong)((long)(iVar1 + 0x1d) * -0x77777777) >> 0x20) + iVar1 + 0x1d;
            local_38 = (iVar8 >> 4) - (iVar8 >> 0x1f);
            if (local_38 < 2) {
              local_38 = 1;
            }
            iVar8 = (__this->fields)._currentPage;
            iVar11 = 1;
            if (1 < iVar8) {
              iVar11 = iVar8;
            }
            if (local_38 <= iVar11) {
              iVar11 = local_38;
            }
            (__this->fields)._currentPage = iVar11;
            pUVar6 = (__this->fields)._pageLabel;
            pSVar9 = System_Int32__ToString(&(__this->fields)._currentPage,(MethodInfo *)0x0);
            str2 = System_Int32__ToString(&local_38,(MethodInfo *)0x0);
            pSVar9 = System_String__Concat_5301f10(pSVar9,"/",str2,(MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
              pUVar12 = pUVar6->klass;
              (*(pUVar12->vtable)._75_set_text.methodPtr)(pUVar6,pSVar9,(pUVar12->vtable)._75_set_text.method)
              ;
              pUVar3 = (UnityEngine_Object_o *)(__this->fields)._pageLeftButton;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar7 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar7) {
                pUVar4 = (__this->fields)._pageLeftButton;
                if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05d747c3;
                UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
              }
              pUVar3 = (UnityEngine_Object_o *)(__this->fields)._pageRightButton;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar7 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              pMVar10 = extraout_RDX_01;
              if (bVar7) {
                pUVar4 = (__this->fields)._pageRightButton;
                if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05d747c3;
                UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
                pMVar10 = extraout_RDX_02;
              }
              iVar8 = (__this->fields)._currentPage * 0x1e + -0x1e;
              uVar14 = iVar1 - iVar8;
              uVar13 = 0;
              if (0 < (int)uVar14) {
                uVar13 = uVar14;
              }
              uVar14 = 0x1e;
              if ((int)uVar13 < 0x1e) {
                uVar14 = uVar13;
              }
              method_01 = (MethodInfo *)(ulong)uVar14;
              UI_MapEditorHierarchyPanel__EnsurePoolSize(__this,uVar14,pMVar10);
              __this_01 = (__this->fields)._itemPool;
              if (__this_01 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                uVar13 = 0;
                do {
                  if ((__this_01->fields)._size <= (int)uVar13) goto label_05d745aa;
                  pMVar10 = (MethodInfo *)
                            System_Collections_Generic_List_object___get_Item
                                      ((System_Collections_Generic_List_object__o *)__this_01,uVar13,
                                       (MethodInfo_395CF20 *)
                                       MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
                  if (uVar13 < uVar14) {
                    pSVar5 = (__this->fields)._rows;
                    if (pSVar5 == (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0)
                    break;
                    row = System_Collections_Generic_List_MapEditorHierarchyPanel_RowData___get_Item
                                    (pSVar5,iVar8 + uVar13,
                                     (MethodInfo_3AAA990 *)
                                     MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_get_Item
                                    );
                    UI_MapEditorHierarchyPanel__BindPooledItem
                              (__this,(UnityEngine_GameObject_o *)pMVar10,row,(int32_t)pUVar12,in_R8);
                    method_01 = pMVar10;
                  }
                  else {
                    if (pMVar10 == (MethodInfo *)0x0) break;
                    method_01 = (MethodInfo *)0x0;
                    UnityEngine_GameObject__SetActive
                              ((UnityEngine_GameObject_o *)pMVar10,false,(MethodInfo *)0x0);
                  }
                  uVar13 = uVar13 + 1;
                  __this_01 = (__this->fields)._itemPool;
                } while (__this_01 != (System_Collections_Generic_List_GameObject__o *)0x0);
              }
            }
          }
          else {
            UI_MapEditorHierarchyPanel__SetVirtualizationActive(__this,true,method_00);
            pUVar6 = (__this->fields)._pageLabel;
            pSVar9 = System_Int32__ToString(&local_34,(MethodInfo *)0x0);
            pSVar9 = System_String__Concat_52f0320(pSVar9," items",(MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar6->klass->vtable)._75_set_text.methodPtr)
                        (pUVar6,pSVar9,(pUVar6->klass->vtable)._75_set_text.method);
              pUVar3 = (UnityEngine_Object_o *)(__this->fields)._pageLeftButton;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar7 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar7) {
                pUVar4 = (__this->fields)._pageLeftButton;
                if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05d747c3;
                UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
              }
              pUVar3 = (UnityEngine_Object_o *)(__this->fields)._pageRightButton;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar7 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              pMVar10 = extraout_RDX;
              if (bVar7) {
                pUVar4 = (__this->fields)._pageRightButton;
                if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05d747c3;
                UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
                pMVar10 = extraout_RDX_00;
              }
              method_01 = (MethodInfo *)0x0;
              UI_MapEditorHierarchyPanel__RenderVirtualizedRows(__this,false,pMVar10);
label_05d745aa:
              UI_MapEditorHierarchyPanel__SyncSelectedItems(__this,method_01);
              UI_MapEditorHierarchyPanel__UpdateModeButtonText(__this,method_01);
              return;
            }
          }
        }
      }
    }
  }
label_05d747c3:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$OnModeButtonClick
// il2cpp: void UI_MapEditorHierarchyPanel__OnModeButtonClick (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d76570

void UI_MapEditorHierarchyPanel__OnModeButtonClick(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar1;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  bool bVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547fc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fc7 = '\x01';
  }
  (__this->fields)._draggingItem = false;
  (__this->fields)._dropTargetId = -1;
  (__this->fields)._dropIndicatorId = -1;
  (__this->fields)._dropToRoot = false;
  (__this->fields)._currentDropMode = 0;
  UI_MapEditorHierarchyPanel__HideDragGhost(__this,method);
  if (Il2CppMethodInitialized_07547fe5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fe5 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._insertLineIndicator;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    __this_00 = (__this->fields)._insertLineIndicator;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05d766b9;
    method_00 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  }
  bVar3 = (bool)((__this->fields)._treeViewEnabled ^ 1);
  (__this->fields)._treeViewEnabled = bVar3;
  (__this->fields)._currentPage = 1;
  pGVar1 = (__this->fields)._gameManager;
  if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) {
label_05d766b9:
    ThrowNullReferenceException();
  }
  (pGVar1->fields).HierarchyTreeViewEnabled = bVar3;
  if (bVar3 != false) {
    UI_MapEditorHierarchyPanel__BuildTreeGraph(__this,method_00);
    if ((__this->fields)._treeViewEnabled != false) {
      pUVar2 = (__this->fields)._scrollRect;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      method_00 = (MethodInfo *)0x0;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pUVar2 = (__this->fields)._scrollRect;
        if (pUVar2 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_05d766b9;
        method_00 = (MethodInfo *)0x0;
        UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(pUVar2,1.0,(MethodInfo *)0x0);
      }
    }
  }
  UI_MapEditorHierarchyPanel__Sync(__this,method_00);
  return;
}


// UI.MapEditorHierarchyPanel$$UpdateModeButtonText
// il2cpp: void UI_MapEditorHierarchyPanel__UpdateModeButtonText (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d76330

void UI_MapEditorHierarchyPanel__UpdateModeButtonText(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_UI_ColorBlock_o *pUVar8;
  bool bVar9;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_UI_RawImage_o *pUVar10;
  MethodInfo *method_00;
  float fVar11;
  UnityEngine_Color_o UVar12;
  UnityEngine_Color_o UVar13;
  
  if (Il2CppMethodInitialized_07547fc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fc8 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._modeButton;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    return;
  }
  pUVar2 = (__this->fields)._modeButton;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar2,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button)
    ;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar9) {
      if (__this_00 == (UnityEngine_UI_Button_o *)0x0) goto label_05d76563;
      uVar1 = (__this_00->fields).m_Colors.fields.m_ColorMultiplier;
      uVar3 = (__this_00->fields).m_Colors.fields.m_FadeDuration;
      value.fields.m_FadeDuration = (float)uVar3;
      value.fields.m_ColorMultiplier = (float)uVar1;
      pUVar8 = &(__this_00->fields).m_Colors;
      uVar4 = (pUVar8->fields).m_DisabledColor.fields.r;
      uVar5 = (pUVar8->fields).m_DisabledColor.fields.g;
      value.fields.m_DisabledColor.fields.g = (float)uVar5;
      value.fields.m_DisabledColor.fields.r = (float)uVar4;
      pUVar8 = &(__this_00->fields).m_Colors;
      uVar6 = (pUVar8->fields).m_DisabledColor.fields.b;
      uVar7 = (pUVar8->fields).m_DisabledColor.fields.a;
      value.fields.m_DisabledColor.fields.a = (float)uVar7;
      value.fields.m_DisabledColor.fields.b = (float)uVar6;
      if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
      }
      method_00 = (MethodInfo *)0x0;
      value.fields.m_NormalColor.fields.b = 1.0;
      value.fields.m_NormalColor.fields.a = 1.0;
      value.fields.m_NormalColor.fields.r = 1.0;
      value.fields.m_NormalColor.fields.g = 1.0;
      value.fields.m_HighlightedColor.fields.r = 1.0;
      value.fields.m_HighlightedColor.fields.g = 1.0;
      value.fields.m_HighlightedColor.fields.b = 1.0;
      value.fields.m_HighlightedColor.fields.a = 1.0;
      value.fields.m_PressedColor.fields.r = 1.0;
      value.fields.m_PressedColor.fields.g = 1.0;
      value.fields.m_PressedColor.fields.b = 1.0;
      value.fields.m_PressedColor.fields.a = 1.0;
      value.fields.m_SelectedColor.fields.r = 1.0;
      value.fields.m_SelectedColor.fields.g = 1.0;
      value.fields.m_SelectedColor.fields.b = 1.0;
      value.fields.m_SelectedColor.fields.a = 1.0;
      UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)__this_00,value,(MethodInfo *)0x0);
    }
    UVar12 = UI_MapEditorHierarchyPanel__IconColor(__this,method_00);
    UVar13.fields.b = UVar12.fields.b;
    fVar11 = UVar12.fields.a;
    if ((__this->fields)._treeViewEnabled == false) {
      fVar11 = fVar11 * 0.6;
    }
    pUVar2 = (__this->fields)._modeButton;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pUVar10 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar2,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
      if (pUVar10 != (UnityEngine_UI_RawImage_o *)0x0) {
        UVar13.fields.a = fVar11;
        UVar13.fields.r = UVar12.fields.r;
        UVar13.fields.g = UVar12.fields.g;
        (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                  (pUVar10,UVar13,(pUVar10->klass->vtable)._23_set_color.method);
        return;
      }
    }
  }
label_05d76563:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$IconColor
// il2cpp: UnityEngine_Color_o UI_MapEditorHierarchyPanel__IconColor (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d76820

UnityEngine_Color_o
UI_MapEditorHierarchyPanel__IconColor(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  System_String_o *panel;
  UnityEngine_Color_Fields UVar1;
  
  if (Il2CppMethodInitialized_07547fc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"IconButton");
    Il2CppMethodInitialized_07547fc9 = '\x01';
  }
  panel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                    (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  UVar1 = (UnityEngine_Color_Fields)
          UI_UIManager__GetThemeColor
                    (panel,"IconButton","TextColor","DefaultPanel",(MethodInfo *)0x0
                    );
  return (UnityEngine_Color_o)UVar1;
}


// UI.MapEditorHierarchyPanel$$BuildRows
// il2cpp: void UI_MapEditorHierarchyPanel__BuildRows (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d74870
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d74999: jmp 0x5d74a3b
// asm:   0x5d749c9: nop dword ptr [rax]

void UI_MapEditorHierarchyPanel__BuildRows(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_int__int__o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *pSVar4;
  UI_MapEditorHierarchyPanel_RowData_o UVar5;
  MethodInfo *method_00;
  int32_t index;
  System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *pSVar6;
  
  if (Il2CppMethodInitialized_07547fca == '\0') {
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
    Il2CppMethodInitialized_07547fca = '\x01';
  }
  pSVar6 = (__this->fields)._rows;
  if (pSVar6 != (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0) {
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar6->fields)._size = 0;
    pSVar2 = (__this->fields)._idToIndex;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
      System_Collections_Generic_Dictionary_int__int___Clear
                (pSVar2,(MethodInfo_4A040E0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear);
      pSVar2 = (__this->fields)._indexToId;
      if (pSVar2 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
        System_Collections_Generic_Dictionary_int__int___Clear
                  (pSVar2,(MethodInfo_4A040E0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear
                  );
        pSVar3 = (__this->fields)._searchSetting;
        if ((pSVar3 != (Settings_StringSetting_o *)0x0) &&
           (((pSVar4 = (pSVar3->fields)._value, pSVar4 != (System_String_o *)0x0 ||
             (pSVar4 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), pSVar4 != (System_String_o *)0x0))
            && (pSVar4 = System_String__Trim(pSVar4,(MethodInfo *)0x0), pSVar4 != (System_String_o *)0x0)))) {
          pSVar4 = System_String__ToLower(pSVar4,(MethodInfo *)0x0);
          if ((__this->fields)._treeViewEnabled == false) {
            UI_MapEditorHierarchyPanel__BuildFlatRows(__this,pSVar4,method_00);
            pSVar6 = (__this->fields)._rows;
          }
          else {
            UI_MapEditorHierarchyPanel__BuildTreeRows(__this,pSVar4,method_00);
            pSVar6 = (__this->fields)._rows;
          }
          if (pSVar6 != (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0) {
            index = 0;
            do {
              if ((pSVar6->fields)._size <= index) {
                return;
              }
              pSVar2 = (__this->fields)._idToIndex;
              UVar5 = System_Collections_Generic_List_MapEditorHierarchyPanel_RowData___get_Item
                                (pSVar6,index,
                                 (MethodInfo_3AAA990 *)
                                 MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_get_Item
                                );
              if (pSVar2 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) break;
              System_Collections_Generic_Dictionary_int__int___set_Item
                        (pSVar2,UVar5.fields.Id,index,
                         (MethodInfo_4A03F00 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
              pSVar6 = (__this->fields)._rows;
              if (pSVar6 == (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0) break;
              pSVar2 = (__this->fields)._indexToId;
              UVar5 = System_Collections_Generic_List_MapEditorHierarchyPanel_RowData___get_Item
                                (pSVar6,index,
                                 (MethodInfo_3AAA990 *)
                                 MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_get_Item
                                );
              if (pSVar2 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) break;
              System_Collections_Generic_Dictionary_int__int___set_Item
                        (pSVar2,index,UVar5.fields.Id,
                         (MethodInfo_4A03F00 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
              index = index + 1;
              pSVar6 = (__this->fields)._rows;
            } while (pSVar6 != (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0);
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$BuildFlatRows
// il2cpp: void UI_MapEditorHierarchyPanel__BuildFlatRows (UI_MapEditorHierarchyPanel_o* __this, System_String_o* search, const MethodInfo* method);
// 0x5d768c0
// eh: try 0x5d76974..0x5d76b37 -> pad 0x5d76b49 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d76b61..0x5d76b66 -> pad 0x5d76b8b cleanup
// eh: try 0x5d76b8e..0x5d76b98 -> pad 0x5d76ba0 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d76b37: jmp 0x5d76b49
// asm:   0x5d76b39: jmp 0x5d76b49
// asm:   0x5d76b3b: jmp 0x5d76b49
// asm:   0x5d76b3d: jmp 0x5d76b49
// asm:   0x5d76b3f: jmp 0x5d76b49
// asm:   0x5d76b41: jmp 0x5d76b49
// asm:   0x5d76b43: jmp 0x5d76b49
// asm:   0x5d76b45: jmp 0x5d76b49
// asm:   0x5d76b47: jmp 0x5d76b49
// asm:   0x5d76b49: mov rbx, rax
// asm:   0x5d76b4c: cmp edx, 1
// asm:   0x5d76b4f: jne 0x5d76b8e
// asm:   0x5d76b51: mov rdi, rbx
// asm:   0x5d76b54: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d76b59: mov rbx, qword ptr [rax]
// asm:   0x5d76b5c: mov qword ptr [rsp + 8], rbx
// asm:   0x5d76b61: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d76b66: lea rax, [rip + 0x151768b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5d76b6d: mov rsi, qword ptr [rax]
// asm:   0x5d76b70: lea rdi, [rsp + 0x20]
// asm:   0x5d76b75: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5d76b7a: test rbx, rbx
// asm:   0x5d76b7d: je 0x5d76a78
// asm:   0x5d76b83: mov rdi, rbx
// asm:   0x5d76b86: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d76b8b: mov rbx, rax
// asm:   0x5d76b8e: lea rdi, [rsp + 8]
// asm:   0x5d76b93: call 0x2fdd210  ; il2cpp_runtime_helper_02fdd210()
// asm:   0x5d76b98: mov rdi, rbx
// asm:   0x5d76b9b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d76ba0: mov rdi, rax
// asm:   0x5d76ba3: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorHierarchyPanel__BuildFlatRows
               (UI_MapEditorHierarchyPanel_o *__this,System_String_o *search,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *__this_02;
  UI_MapEditorHierarchyPanel_RowData_array *pUVar4;
  undefined4 key;
  bool bVar5;
  Map_MapObject_o *obj;
  MethodInfo *in_RCX;
  MethodInfo *pMVar6;
  UI_MapEditorHierarchyPanel_RowData_Fields item;
  UI_MapEditorHierarchyPanel_o *__this_03;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  undefined1 local_58 [32];
  UI_MapEditorHierarchyPanel_o *local_38;
  
  local_38 = __this;
  if (Il2CppMethodInitialized_07547fcb == '\0') {
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
    Il2CppMethodInitialized_07547fcb = '\x01';
    uVar2 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    __this_00 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  }
  else {
    __this_00 = *(System_Collections_Generic_List_int__o **)
                 ((long)((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields + 0x10);
  }
  if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_int___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_70,__this_00,
             (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
  local_58._16_8_ = local_60;
  local_58._0_8_ = local_70._0_8_;
  local_58._8_8_ = local_70._8_8_;
  local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_70._8_8_ = (System_Collections_Generic_List_Enumerator_int__o *)local_58;
  while( true ) {
    do {
      do {
        bVar5 = System_Collections_Generic_List_Enumerator_int___MoveNext
                          ((System_Collections_Generic_List_Enumerator_int__o *)local_58,
                           (MethodInfo_4C3B4A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
        if (!bVar5) {
          System_Collections_Generic_List_Enumerator_int___Dispose
                    ((System_Collections_Generic_List_Enumerator_int__o *)local_58,
                     (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
          return;
        }
        key = local_58._16_4_;
        item = (UI_MapEditorHierarchyPanel_RowData_Fields)(local_58._16_8_ & 0xffffffff);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
                    TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (__this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                          (__this_01,key,
                           (MethodInfo_4A0F950 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      } while (!bVar5);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_03 = (UI_MapEditorHierarchyPanel_o *)TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (__this_03 == (UI_MapEditorHierarchyPanel_o *)0x0) {
        ThrowNullReferenceException();
      }
      obj = System_Collections_Generic_Dictionary_int__object___get_Item
                      ((System_Collections_Generic_Dictionary_int__object__o *)__this_03,key,
                       (MethodInfo_4A0F690 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
      bVar5 = UI_MapEditorHierarchyPanel__MatchesSearch(__this_03,obj,search,in_RCX);
      pMVar6 = MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_Add;
    } while (!bVar5);
    __this_02 = (local_38->fields)._rows;
    if (__this_02 == (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0) break;
    piVar1 = &(__this_02->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (__this_02->fields)._items;
    if (pUVar4 == (UI_MapEditorHierarchyPanel_RowData_array *)0x0) break;
    uVar3 = (__this_02->fields)._size;
    if (uVar3 < (uint)pUVar4->max_length) {
      in_RCX = (MethodInfo *)(ulong)(uVar3 + 1);
      (__this_02->fields)._size = uVar3 + 1;
      pUVar4->m_Items[(int)uVar3].fields = item;
    }
    else {
      System_Collections_Generic_List_MapEditorHierarchyPanel_RowData___AddWithResize
                (__this_02,(UI_MapEditorHierarchyPanel_RowData_o)item,
                 (MethodInfo_3AAAC90 *)pMVar6->klass->rgctx_data[0xe].method);
      in_RCX = pMVar6;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$BuildTreeRows
// il2cpp: void UI_MapEditorHierarchyPanel__BuildTreeRows (UI_MapEditorHierarchyPanel_o* __this, System_String_o* search, const MethodInfo* method);
// 0x5d76bb0
// eh: try 0x5d76da3..0x5d76efe -> pad 0x5d76f0c (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d76f24..0x5d76f29 -> pad 0x5d76f48 cleanup
// eh: try 0x5d76f4b..0x5d76f55 -> pad 0x5d76fb0 catch (...) [compiler noexcept guard]
// eh: try 0x5d76f71..0x5d76f76 -> pad 0x5d76f9b cleanup
// eh: try 0x5d76f9e..0x5d76fa8 -> pad 0x5d76fb0 catch (...) [compiler noexcept guard]
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d76e99: nop dword ptr [rax]
// asm:   0x5d76efe: jmp 0x5d76f0c
// asm:   0x5d76f00: jmp 0x5d76f0c
// asm:   0x5d76f02: jmp 0x5d76f0c
// asm:   0x5d76f04: jmp 0x5d76f0c
// asm:   0x5d76f06: jmp 0x5d76f0c
// asm:   0x5d76f08: jmp 0x5d76f0c
// asm:   0x5d76f0a: jmp 0x5d76f0c
// asm:   0x5d76f0c: mov rbp, rax
// asm:   0x5d76f0f: cmp edx, 1
// asm:   0x5d76f12: jne 0x5d76f4b
// asm:   0x5d76f14: mov rdi, rbp
// asm:   0x5d76f17: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d76f1c: mov rbx, qword ptr [rax]
// asm:   0x5d76f1f: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5d76f24: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d76f29: lea rax, [rip + 0x1518a08]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x5d76f30: mov rsi, qword ptr [rax]
// asm:   0x5d76f33: lea rdi, [rsp + 0x10]
// asm:   0x5d76f38: call 0x4da2970  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose()
// asm:   0x5d76f3d: test rbx, rbx
// asm:   0x5d76f40: je 0x5d76e45
// asm:   0x5d76f46: jmp 0x5d76f93
// asm:   0x5d76f48: mov rbp, rax
// asm:   0x5d76f4b: lea rdi, [rsp + 0x28]
// asm:   0x5d76f50: call 0x2fdd240  ; il2cpp_runtime_helper_02fdd240()
// asm:   0x5d76f55: jmp 0x5d76fa8
// asm:   0x5d76f57: jmp 0x5d76f59
// asm:   0x5d76f59: mov rbp, rax
// asm:   0x5d76f5c: cmp edx, 1
// asm:   0x5d76f5f: jne 0x5d76f9e
// asm:   0x5d76f61: mov rdi, rbp
// asm:   0x5d76f64: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d76f69: mov rbx, qword ptr [rax]
// asm:   0x5d76f6c: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5d76f71: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d76f76: lea rax, [rip + 0x151727b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5d76f7d: mov rsi, qword ptr [rax]
// asm:   0x5d76f80: lea rdi, [rsp + 0x40]
// asm:   0x5d76f85: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5d76f8a: test rbx, rbx
// asm:   0x5d76f8d: je 0x5d76ed9
// asm:   0x5d76f93: mov rdi, rbx
// asm:   0x5d76f96: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d76f9b: mov rbp, rax
// asm:   0x5d76f9e: lea rdi, [rsp + 0x28]
// asm:   0x5d76fa3: call 0x2fdd270  ; il2cpp_runtime_helper_02fdd270()
// asm:   0x5d76fa8: mov rdi, rbp
// asm:   0x5d76fab: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d76fb0: mov rdi, rax
// asm:   0x5d76fb3: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorHierarchyPanel__BuildTreeRows
               (UI_MapEditorHierarchyPanel_o *__this,System_String_o *search,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_List_int__o *__this_01;
  UnityEngine_Transform_Fields UVar2;
  bool forceExpand;
  bool bVar3;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  MethodInfo **method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UI_MapEditorHierarchyPanel_o *pUVar5;
  MethodInfo *in_R9;
  UnityEngine_Transform_o local_78;
  undefined1 local_60 [16];
  Map_MapObject_o *local_50;
  UnityEngine_Transform_o local_48;
  
  method_02 = (MethodInfo *)search;
  if (Il2CppMethodInitialized_07547fcc == '\0') {
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
    Il2CppMethodInitialized_07547fcc = '\x01';
  }
  local_78.klass = (UnityEngine_Transform_c *)0x0;
  local_78.monitor = (UnityEngine_Transform_o *)0x0;
  local_78.fields.m_CachedPtr = 0;
  local_48.klass = (UnityEngine_Transform_c *)0x0;
  local_48.monitor = (System_Collections_Generic_List_BasePopup__o *)0x0;
  local_48.fields.m_CachedPtr = 0;
  UI_MapEditorHierarchyPanel__BuildTreeGraph(__this,method_02);
  pSVar4 = (System_Collections_Generic_HashSet_int__o *)0x0;
  forceExpand = System_String__op_Inequality
                          (search,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0)
  ;
  if (forceExpand) {
    pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor
              (pSVar4,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05d76ef4;
    __this_02 = System_Collections_Generic_Dictionary_int__object___get_Values
                          (__this_00,
                           (MethodInfo_4A0F4E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values);
    if (__this_02 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
    goto label_05d76ef4;
    method_00 = &MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
               __this_02,
               (MethodInfo_43E8AC0 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
    local_78.fields.m_CachedPtr = (intptr_t)local_50;
    local_78.klass = (UnityEngine_Transform_c *)local_60._0_8_;
    local_78.monitor = (void *)local_60._8_8_;
    local_60._0_8_ = (UI_MapEditorHierarchyPanel_c *)0x0;
    local_60._8_8_ = &local_78;
    if (pSVar4 == (System_Collections_Generic_HashSet_int__o *)0x0) {
      do {
        pUVar5 = (UI_MapEditorHierarchyPanel_o *)&local_78;
        bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )&local_78,
                           (MethodInfo_4CA2980 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                          );
        UVar2.m_CachedPtr = local_78.fields.m_CachedPtr;
        if (!bVar3) goto label_05d76e31;
        bVar3 = UI_MapEditorHierarchyPanel__MatchesSearch
                          (pUVar5,(Map_MapObject_o *)local_78.fields.m_CachedPtr,search,
                           (MethodInfo *)method_00);
      } while (!bVar3);
      if ((Map_MapObject_o *)UVar2.m_CachedPtr != (Map_MapObject_o *)0x0) {
        if (*(Map_MapScriptBaseObject_o **)(UVar2.m_CachedPtr + 0x20) != (Map_MapScriptBaseObject_o *)0x0) {
          ThrowNullReferenceException();
        }
label_05d76eef:
        ThrowNullReferenceException();
      }
label_05d76e2c:
      ThrowNullReferenceException();
    }
    while( true ) {
      pUVar5 = (UI_MapEditorHierarchyPanel_o *)&local_78;
      bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                        ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                         &local_78,
                         (MethodInfo_4CA2980 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                        );
      UVar2.m_CachedPtr = local_78.fields.m_CachedPtr;
      if (!bVar3) break;
      bVar3 = UI_MapEditorHierarchyPanel__MatchesSearch
                        (pUVar5,(Map_MapObject_o *)local_78.fields.m_CachedPtr,search,(MethodInfo *)method_00)
      ;
      if (bVar3) {
        if ((Map_MapObject_o *)UVar2.m_CachedPtr == (Map_MapObject_o *)0x0) goto label_05d76e2c;
        pMVar1 = *(Map_MapScriptBaseObject_o **)(UVar2.m_CachedPtr + 0x20);
        if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) goto label_05d76eef;
        System_Collections_Generic_HashSet_int___Add
                  (pSVar4,(pMVar1->fields).Id,
                   (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
      }
    }
label_05d76e31:
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&local_78,
               (MethodInfo_4CA2970 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
              );
    pSVar4 = UI_MapEditorHierarchyPanel__BuildSearchContext(__this,pSVar4,method_01);
  }
  __this_01 = (__this->fields)._treeRoots;
  if (__this_01 != (System_Collections_Generic_List_int__o *)0x0) {
    System_Collections_Generic_List_int___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,__this_01,
               (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_60._8_8_ = &local_48;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_int___MoveNext
                        ((System_Collections_Generic_List_Enumerator_int__o *)&local_48,
                         (MethodInfo_4C3B4A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
      if (!bVar3) break;
      UI_MapEditorHierarchyPanel__AddTreeRowsRecursive
                (__this,(int32_t)local_48.fields.m_CachedPtr,0,pSVar4,forceExpand,in_R9);
    }
    System_Collections_Generic_List_Enumerator_int___Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)&local_48,
               (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    return;
  }
label_05d76ef4:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$BuildTreeGraph
// il2cpp: void UI_MapEditorHierarchyPanel__BuildTreeGraph (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d72740
// eh: try 0x5d72a03..0x5d72fe7 -> pad 0x5d73030 (+27 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d73054..0x5d73059 -> pad 0x5d7307b cleanup
// eh: try 0x5d7307e..0x5d73088 -> pad 0x5d7313b catch (...) [compiler noexcept guard]
// eh: try 0x5d730aa..0x5d730af -> pad 0x5d730d5 cleanup
// eh: try 0x5d730d8..0x5d730e2 -> pad 0x5d7313b catch (...) [compiler noexcept guard]
// eh: try 0x5d730fc..0x5d73101 -> pad 0x5d73126 cleanup
// eh: try 0x5d73129..0x5d73133 -> pad 0x5d7313b catch (...) [compiler noexcept guard]
// asm: 93 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d729f9: nop dword ptr [rax]
// asm:   0x5d72d20: jmp 0x5d72d3a
// asm:   0x5d72ecc: jmp 0x5d72ee8
// asm:   0x5d72fe7: jmp 0x5d7302b
// asm:   0x5d72fe9: jmp 0x5d730e4
// asm:   0x5d72fee: jmp 0x5d7302b
// asm:   0x5d72ff0: jmp 0x5d73037
// asm:   0x5d72ff2: jmp 0x5d7302b
// asm:   0x5d72ff4: jmp 0x5d730e4
// asm:   0x5d72ff9: jmp 0x5d7302b
// asm:   0x5d72ffb: jmp 0x5d7302b
// asm:   0x5d72ffd: jmp 0x5d73037
// asm:   0x5d72fff: jmp 0x5d73037
// asm:   0x5d73001: jmp 0x5d7302b
// asm:   0x5d73003: jmp 0x5d7308d
// asm:   0x5d73008: jmp 0x5d730e4
// asm:   0x5d7300d: jmp 0x5d730e4
// asm:   0x5d73012: jmp 0x5d730e4
// asm:   0x5d73017: jmp 0x5d730e4
// asm:   0x5d7301c: jmp 0x5d73037
// asm:   0x5d7301e: jmp 0x5d73037
// asm:   0x5d73020: jmp 0x5d7302b
// asm:   0x5d73022: jmp 0x5d7308d
// asm:   0x5d73024: jmp 0x5d7308d
// asm:   0x5d73026: jmp 0x5d730e4
// asm:   0x5d7302b: mov r15, rax
// asm:   0x5d7302e: jmp 0x5d7303f
// asm:   0x5d73030: jmp 0x5d7308d
// asm:   0x5d73032: jmp 0x5d730e4
// asm:   0x5d73037: mov r15, rax
// asm:   0x5d7303a: mov r12, qword ptr [rsp + 8]
// asm:   0x5d7303f: cmp edx, 1
// asm:   0x5d73042: jne 0x5d7307e
// asm:   0x5d73044: mov rdi, r15
// asm:   0x5d73047: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d7304c: mov rbx, qword ptr [rax]
// asm:   0x5d7304f: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5d73054: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d73059: lea rax, [rip + 0x151c8d8]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x5d73060: mov rsi, qword ptr [rax]
// asm:   0x5d73063: lea rdi, [rsp + 0x50]
// asm:   0x5d73068: call 0x4da2970  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose()
// asm:   0x5d7306d: test rbx, rbx
// asm:   0x5d73070: je 0x5d72ce3
// asm:   0x5d73076: jmp 0x5d7311e
// asm:   0x5d7307b: mov r15, rax
// asm:   0x5d7307e: lea rdi, [rsp + 0x10]
// asm:   0x5d73083: call 0x2fdd2d0  ; il2cpp_runtime_helper_02fdd2d0()
// asm:   0x5d73088: jmp 0x5d73133
// asm:   0x5d7308d: mov r15, rax
// asm:   0x5d73090: cmp edx, 1
// asm:   0x5d73093: mov r12, qword ptr [rsp + 8]
// asm:   0x5d73098: jne 0x5d730d8
// asm:   0x5d7309a: mov rdi, r15
// asm:   0x5d7309d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d730a2: mov rbx, qword ptr [rax]
// asm:   0x5d730a5: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5d730aa: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d730af: lea rax, [rip + 0x151c86a]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
// asm:   0x5d730b6: mov rsi, qword ptr [rax]
// asm:   0x5d730b9: lea rdi, [rsp + 0x70]
// asm:   0x5d730be: call 0x4da27d0  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose()
// asm:   0x5d730c3: test rbx, rbx
// asm:   0x5d730c6: lea rbp, [rip + 0x15078c3]  ; TypeInfo_Map_MapLoader
// asm:   0x5d730cd: je 0x5d72ab3
// asm:   0x5d730d3: jmp 0x5d7311e
// asm:   0x5d730d5: mov r15, rax
// asm:   0x5d730d8: lea rdi, [rsp + 0x10]
// asm:   0x5d730dd: call 0x2fdd2a0  ; il2cpp_runtime_helper_02fdd2a0()
// asm:   0x5d730e2: jmp 0x5d73133
// asm:   0x5d730e4: mov r15, rax
// asm:   0x5d730e7: cmp edx, 1
// asm:   0x5d730ea: jne 0x5d73129
// asm:   0x5d730ec: mov rdi, r15
// asm:   0x5d730ef: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d730f4: mov rbx, qword ptr [rax]
// asm:   0x5d730f7: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5d730fc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d73101: lea rax, [rip + 0x151b0f0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5d73108: mov rsi, qword ptr [rax]
// asm:   0x5d7310b: lea rdi, [rsp + 0x30]
// asm:   0x5d73110: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5d73115: test rbx, rbx
// asm:   0x5d73118: je 0x5d72fa3
// asm:   0x5d7311e: mov rdi, rbx
// asm:   0x5d73121: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d73126: mov r15, rax
// asm:   0x5d73129: lea rdi, [rsp + 0x10]
// asm:   0x5d7312e: call 0x2fdd300  ; il2cpp_runtime_helper_02fdd300()
// asm:   0x5d73133: mov rdi, r15
// asm:   0x5d73136: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d7313b: mov rdi, rax
// asm:   0x5d7313e: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorHierarchyPanel__BuildTreeGraph(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int item;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  MethodInfo *pMVar4;
  Map_MapObject_o *obj;
  bool bVar5;
  int32_t iVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar7;
  System_Collections_Generic_List_int__o *pSVar8;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar9;
  System_Func_int__int__o *pSVar10;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar11;
  System_Collections_Generic_List_TSource__o *pSVar12;
  Il2CppObject *pIVar13;
  UI_MapEditorHierarchyPanel___c_StaticFields *pUVar14;
  System_Int32_array *pSVar15;
  uint uVar16;
  undefined1 local_a8 [16];
  Map_MapObject_o *local_98;
  System_Collections_Generic_List_int__o **local_90;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  Map_MapObject_o *local_78;
  undefined1 local_68 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_60;
  Map_MapObject_o *local_58;
  undefined1 local_48 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_40;
  Map_MapObject_o *local_38;
  
  if (Il2CppMethodInitialized_07547fcd == '\0') {
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
              (&MethodInfo_UI_MapEditorHierarchyPanel_c_BuildTreeGraph_b__85_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c_BuildTreeGraph_b__85_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorHierarchyPanel_c);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
    Il2CppMethodInitialized_07547fcd = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  local_38 = (Map_MapObject_o *)0x0;
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  local_58 = (Map_MapObject_o *)0x0;
  local_88 = (undefined1  [8])0x0;
  uStack_80._0_4_ = 0;
  uStack_80._4_4_ = 0;
  local_78 = (Map_MapObject_o *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._treeChildren;
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary_int__object___Clear
              (pSVar2,(MethodInfo_4A0F8F0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_int_List_int_Clear);
    pSVar8 = (__this->fields)._treeRoots;
    if (pSVar8 != (System_Collections_Generic_List_int__o *)0x0) {
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar8->fields)._size = 0;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if ((pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
         (pSVar7 = System_Collections_Generic_Dictionary_int__object___get_Keys
                             (pSVar2,(MethodInfo_4A0F330 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys),
         pSVar7 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
        local_90 = &(__this->fields)._treeRoots;
        System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_a8,
                   pSVar7,(MethodInfo_510AAB0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_MapObject_GetEnumerator
                  );
        local_38 = local_98;
        local_48 = (undefined1  [8])local_a8._0_8_;
        pSStack_40 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     local_a8._8_8_;
        local_a8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_a8._8_8_ =
             (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48;
        while (bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext
                                 ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                   *)local_48,
                                  (MethodInfo_4CA27E0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_MoveNext
                                 ), bVar5) {
          pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._treeChildren;
          if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          iVar6 = (int32_t)local_38;
          bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                            (pSVar2,(int32_t)local_38,
                             (MethodInfo_4A0F950 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_List_int_ContainsKey);
          if (!bVar5) {
            pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._treeChildren;
            pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
            System_Collections_Generic_List_int____ctor
                      (pSVar8,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
            if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_Dictionary_int__object___set_Item
                      (pSVar2,iVar6,(Il2CppObject *)pSVar8,
                       (MethodInfo_4A0F720 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_List_int_set_Item);
          }
        }
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48,
                   (MethodInfo_4CA27D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
                  );
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if ((pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
           (__this_00 = System_Collections_Generic_Dictionary_int__object___get_Values
                                  (pSVar2,(MethodInfo_4A0F4E0 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values
                                  ),
           __this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
          System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     local_a8,__this_00,
                     (MethodInfo_43E8AC0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator
                    );
          local_58 = local_98;
          local_68 = (undefined1  [8])local_a8._0_8_;
          pSStack_60 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       local_a8._8_8_;
          local_a8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_a8._8_8_ =
               (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_68;
          while (bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                                   ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                     *)local_68,
                                    (MethodInfo_4CA2980 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                                   ), obj = local_58, bVar5) {
            if (local_58 == (Map_MapObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            pMVar3 = (local_58->fields).ScriptObject;
            if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            item = (pMVar3->fields).Id;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            iVar6 = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
            if ((iVar6 < 0) || (iVar6 == item)) {
label_05d72c80:
              pMVar4 = MethodInfo_System_Collections_Generic_List_int_Add;
              pSVar8 = *local_90;
              if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) {
label_05d72fb5:
                ThrowNullReferenceException();
              }
              piVar1 = &(pSVar8->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar15 = (pSVar8->fields)._items;
              if (pSVar15 == (System_Int32_array *)0x0) goto label_05d72fb5;
              uVar16 = (pSVar8->fields)._size;
              if (uVar16 < (uint)pSVar15->max_length) goto label_05d72b50;
              System_Collections_Generic_List_int___AddWithResize
                        (pSVar8,item,(MethodInfo_3916AC0 *)pMVar4->klass->rgctx_data[0xe].method);
            }
            else {
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                       TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
              if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                (pSVar2,iVar6,
                                 (MethodInfo_4A0F950 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
              if (!bVar5) goto label_05d72c80;
              pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._treeChildren;
              if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar8 = (System_Collections_Generic_List_int__o *)
                       System_Collections_Generic_Dictionary_int__object___get_Item
                                 (pSVar2,iVar6,
                                  (MethodInfo_4A0F690 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Item);
              pMVar4 = MethodInfo_System_Collections_Generic_List_int_Add;
              if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) {
label_05d72fd8:
                ThrowNullReferenceException();
              }
              piVar1 = &(pSVar8->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar15 = (pSVar8->fields)._items;
              if (pSVar15 == (System_Int32_array *)0x0) goto label_05d72fd8;
              uVar16 = (pSVar8->fields)._size;
              if (uVar16 < (uint)pSVar15->max_length) {
label_05d72b50:
                (pSVar8->fields)._size = uVar16 + 1;
                pSVar15->m_Items[(int)uVar16] = item;
              }
              else {
                System_Collections_Generic_List_int___AddWithResize
                          (pSVar8,item,(MethodInfo_3916AC0 *)pMVar4->klass->rgctx_data[0xe].method);
              }
            }
          }
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     local_68,(MethodInfo_4CA2970 *)
                              MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
                    );
          pSVar9 = System_Linq_Enumerable__Distinct_int_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)*local_90,
                              (MethodInfo_34E8AC0 *)MethodInfo_System_Linq_Enumerable_Distinct_int);
          if ((TypeInfo_UI_MapEditorHierarchyPanel_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
            pUVar14 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
            pSVar10 = pUVar14->__9__85_0;
          }
          else {
            pUVar14 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
            pSVar10 = pUVar14->__9__85_0;
          }
          if (pSVar10 == (System_Func_int__int__o *)0x0) {
            if ((((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c)->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
              pUVar14 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
            }
            pIVar13 = (Il2CppObject *)pUVar14->__9;
            pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int);
            System_Func_int__int____ctor
                      (pSVar10,pIVar13,
                       (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c_BuildTreeGraph_b__85_0,
                       (MethodInfo_4F12F40 *)0x0);
            pUVar14 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
            pUVar14->__9__85_0 = pSVar10;
            Il2CppCodeGenWriteBarrier(&pUVar14->__9__85_0);
          }
          pSVar11 = System_Linq_Enumerable__OrderBy_int__int_
                              (pSVar9,(System_Func_TSource__TKey__o *)pSVar10,
                               (MethodInfo_34F1B50 *)MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
          pSVar12 = System_Linq_Enumerable__ToList_int_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar11,
                               (MethodInfo_3500DB0 *)MethodInfo_System_Linq_Enumerable_ToList_int);
          (__this->fields)._treeRoots = (System_Collections_Generic_List_int__o *)pSVar12;
          Il2CppCodeGenWriteBarrier(local_90);
          pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._treeChildren;
          if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            pSVar7 = System_Collections_Generic_Dictionary_int__object___get_Keys
                               (pSVar2,(MethodInfo_4A0F330 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Keys)
            ;
            pSVar12 = System_Linq_Enumerable__ToList_int_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,
                                 (MethodInfo_3500DB0 *)MethodInfo_System_Linq_Enumerable_ToList_int);
            if (pSVar12 != (System_Collections_Generic_List_TSource__o *)0x0) {
              System_Collections_Generic_List_int___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
                         (System_Collections_Generic_List_int__o *)pSVar12,
                         (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
              local_78 = local_98;
              local_88 = (undefined1  [8])local_a8._0_8_;
              uStack_80 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                          local_a8._8_8_;
              local_a8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              local_a8._8_8_ = local_88;
              while( true ) {
                bVar5 = System_Collections_Generic_List_Enumerator_int___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_int__o *)local_88,
                                   (MethodInfo_4C3B4A0 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
                if (!bVar5) {
                  System_Collections_Generic_List_Enumerator_int___Dispose
                            ((System_Collections_Generic_List_Enumerator_int__o *)local_88,
                             (MethodInfo_4C3B490 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
                  return;
                }
                pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                         (__this->fields)._treeChildren;
                if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
                iVar6 = (int32_t)local_78;
                pIVar13 = System_Collections_Generic_Dictionary_int__object___get_Item
                                    (pSVar2,(int32_t)local_78,
                                     (MethodInfo_4A0F690 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Item);
                pSVar9 = System_Linq_Enumerable__Distinct_int_
                                   ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar13,
                                    (MethodInfo_34E8AC0 *)MethodInfo_System_Linq_Enumerable_Distinct_int);
                if ((TypeInfo_UI_MapEditorHierarchyPanel_c->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
                  pUVar14 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
                  pSVar10 = pUVar14->__9__85_1;
                }
                else {
                  pUVar14 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
                  pSVar10 = pUVar14->__9__85_1;
                }
                if (pSVar10 == (System_Func_int__int__o *)0x0) {
                  if ((((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c)->_2).cctor_finished_or_no_cctor
                      == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
                    pUVar14 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
                  }
                  pIVar13 = (Il2CppObject *)pUVar14->__9;
                  pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int);
                  System_Func_int__int____ctor
                            (pSVar10,pIVar13,
                             (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c_BuildTreeGraph_b__85_1,
                             (MethodInfo_4F12F40 *)0x0);
                  pUVar14 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
                  pUVar14->__9__85_1 = pSVar10;
                  Il2CppCodeGenWriteBarrier(&pUVar14->__9__85_1);
                }
                pSVar11 = System_Linq_Enumerable__OrderBy_int__int_
                                    (pSVar9,(System_Func_TSource__TKey__o *)pSVar10,
                                     (MethodInfo_34F1B50 *)MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
                pSVar12 = System_Linq_Enumerable__ToList_int_
                                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar11,
                                     (MethodInfo_3500DB0 *)MethodInfo_System_Linq_Enumerable_ToList_int);
                System_Collections_Generic_Dictionary_int__object___set_Item
                          (pSVar2,iVar6,(Il2CppObject *)pSVar12,
                           (MethodInfo_4A0F720 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_List_int_set_Item);
              }
              ThrowNullReferenceException();
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$BuildSearchContext
// il2cpp: System_Collections_Generic_HashSet_int__o* UI_MapEditorHierarchyPanel__BuildSearchContext (UI_MapEditorHierarchyPanel_o* __this, System_Collections_Generic_HashSet_int__o* matches, const MethodInfo* method);
// 0x5d77080
// eh: try 0x5d771c0..0x5d773c2 -> pad 0x5d773cb (+20 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d77405..0x5d7740a -> pad 0x5d7742d cleanup
// eh: try 0x5d77430..0x5d7743a -> pad 0x5d77442 catch (...) [compiler noexcept guard]
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7719f: lea r14, [rip + 0x15037ea]  ; TypeInfo_Map_MapLoader
// asm:   0x5d771a6: lea r13, [rip + 0x1512e33]  ; MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey
// asm:   0x5d771ad: lea r15, [rip + 0x151a14c]  ; MethodInfo_System_Collections_Generic_HashSet_int_Add
// asm:   0x5d771b4: jmp 0x5d771cf
// asm:   0x5d77320: lea r14, [rip + 0x1516ec1]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext
// asm:   0x5d77327: mov r15, rsp
// asm:   0x5d7732a: lea rbx, [rip + 0x150365f]  ; TypeInfo_Map_MapLoader
// asm:   0x5d77331: lea r13, [rip + 0x1512ca8]  ; MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey
// asm:   0x5d77338: nop dword ptr [rax + rax]
// asm:   0x5d773c7: jmp 0x5d773ed
// asm:   0x5d773c9: jmp 0x5d773ed
// asm:   0x5d773cb: jmp 0x5d773ed
// asm:   0x5d773cd: jmp 0x5d773ed
// asm:   0x5d773cf: jmp 0x5d773ed
// asm:   0x5d773d1: jmp 0x5d773ed
// asm:   0x5d773d3: jmp 0x5d773ed
// asm:   0x5d773d5: jmp 0x5d773ed
// asm:   0x5d773d7: jmp 0x5d773ed
// asm:   0x5d773d9: jmp 0x5d773ed
// asm:   0x5d773db: jmp 0x5d773ed
// asm:   0x5d773dd: jmp 0x5d773ed
// asm:   0x5d773df: jmp 0x5d773ed
// asm:   0x5d773e1: jmp 0x5d773ed
// asm:   0x5d773e3: jmp 0x5d773ed
// asm:   0x5d773e5: jmp 0x5d773ed
// asm:   0x5d773e7: jmp 0x5d773ed
// asm:   0x5d773e9: jmp 0x5d773ed
// asm:   0x5d773eb: jmp 0x5d773ed
// asm:   0x5d773ed: mov rbp, rax
// asm:   0x5d773f0: cmp edx, 1
// asm:   0x5d773f3: jne 0x5d77430
// asm:   0x5d773f5: mov rdi, rbp
// asm:   0x5d773f8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d773fd: mov rbx, qword ptr [rax]
// asm:   0x5d77400: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d77405: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d7740a: lea rax, [rip + 0x1516dcf]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x5d77411: mov rsi, qword ptr [rax]
// asm:   0x5d77414: mov rdi, rsp
// asm:   0x5d77417: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x5d7741c: test rbx, rbx
// asm:   0x5d7741f: je 0x5d7739c
// asm:   0x5d77425: mov rdi, rbx
// asm:   0x5d77428: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d7742d: mov rbp, rax
// asm:   0x5d77430: lea rdi, [rsp + 0x18]
// asm:   0x5d77435: call 0x2fdd330  ; il2cpp_runtime_helper_02fdd330()
// asm:   0x5d7743a: mov rdi, rbp
// asm:   0x5d7743d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d77442: mov rdi, rax
// asm:   0x5d77445: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_HashSet_int__o *
UI_MapEditorHierarchyPanel__BuildSearchContext
          (UI_MapEditorHierarchyPanel_o *__this,System_Collections_Generic_HashSet_int__o *matches,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  int32_t iVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o *pSVar3;
  bool bVar4;
  int32_t key;
  System_Collections_Generic_HashSet_int__o *__this_00;
  Map_MapObject_o *pMVar5;
  MethodInfo *in_RCX;
  System_Collections_Generic_HashSet_Enumerator_T__o local_68;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  UI_MapEditorHierarchyPanel_o *local_38;
  
  local_38 = __this;
  if (Il2CppMethodInitialized_07547fce == '\0') {
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
    Il2CppMethodInitialized_07547fce = '\x01';
  }
  local_68.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_00,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (matches == (System_Collections_Generic_HashSet_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_int___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,matches,
             (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
  local_68.fields._current = local_40;
  local_68.fields._set = (System_Collections_Generic_HashSet_T__o *)local_50._0_8_;
  local_68.fields._index = local_50._8_4_;
  local_68.fields._version = local_50._12_4_;
  local_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_50._8_8_ = &local_68;
  pSVar3 = &local_68;
  if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) {
    while (local_50._8_8_ = pSVar3,
          bVar4 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                            (&local_68,
                             (MethodInfo_4C3AEE0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext), bVar4) {
      iVar2 = (int32_t)local_68.fields._current;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05d773b8;
      bVar4 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar1,iVar2,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      pSVar3 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_50._8_8_;
      if (bVar4) {
        ThrowNullReferenceException();
      }
    }
  }
  else {
    while (bVar4 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                             (&local_68,
                              (MethodInfo_4C3AEE0 *)
                              MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext), bVar4) {
      iVar2 = (int32_t)local_68.fields._current;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
label_05d773b8:
        ThrowNullReferenceException();
      }
      bVar4 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar1,iVar2,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (bVar4) {
        System_Collections_Generic_HashSet_int___Add
                  (__this_00,iVar2,(MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add
                  );
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar5 = System_Collections_Generic_Dictionary_int__object___get_Item
                           (pSVar1,iVar2,
                            (MethodInfo_4A0F690 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        key = Map_MapLoader__GetLogicalParentId(pMVar5,(MethodInfo *)0x0);
        while (-1 < key) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar4 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                            (pSVar1,key,
                             (MethodInfo_4A0F950 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if ((!bVar4) ||
             (bVar4 = System_Collections_Generic_HashSet_int___Add
                                (__this_00,key,
                                 (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add),
             !bVar4)) break;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          pMVar5 = System_Collections_Generic_Dictionary_int__object___get_Item
                             (pSVar1,key,
                              (MethodInfo_4A0F690 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          key = Map_MapLoader__GetLogicalParentId(pMVar5,(MethodInfo *)0x0);
        }
        UI_MapEditorHierarchyPanel__AddDescendants(local_38,iVar2,__this_00,in_RCX);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose
            (&local_68,
             (MethodInfo_4C3AED0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
  return __this_00;
}


// UI.MapEditorHierarchyPanel$$AddDescendants
// il2cpp: void UI_MapEditorHierarchyPanel__AddDescendants (UI_MapEditorHierarchyPanel_o* __this, int32_t id, System_Collections_Generic_HashSet_int__o* result, const MethodInfo* method);
// 0x5d77780
// eh: try 0x5d778a4..0x5d77916 -> pad 0x5d7791e (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d77936..0x5d7793b -> pad 0x5d7795a cleanup
// eh: try 0x5d7795d..0x5d77967 -> pad 0x5d7796f catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d77888: lea r12, [rip + 0x1516971]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext
// asm:   0x5d7788f: mov r15, rsp
// asm:   0x5d77892: lea r13, [rip + 0x1519a67]  ; MethodInfo_System_Collections_Generic_HashSet_int_Add
// asm:   0x5d77899: nop dword ptr [rax]
// asm:   0x5d77916: jmp 0x5d7791e
// asm:   0x5d77918: jmp 0x5d7791e
// asm:   0x5d7791a: jmp 0x5d7791e
// asm:   0x5d7791c: jmp 0x5d7791e
// asm:   0x5d7791e: mov rbx, rax
// asm:   0x5d77921: cmp edx, 1
// asm:   0x5d77924: jne 0x5d7795d
// asm:   0x5d77926: mov rdi, rbx
// asm:   0x5d77929: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d7792e: mov rbx, qword ptr [rax]
// asm:   0x5d77931: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d77936: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d7793b: lea rax, [rip + 0x15168b6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5d77942: mov rsi, qword ptr [rax]
// asm:   0x5d77945: mov rdi, rsp
// asm:   0x5d77948: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5d7794d: test rbx, rbx
// asm:   0x5d77950: je 0x5d778fd
// asm:   0x5d77952: mov rdi, rbx
// asm:   0x5d77955: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d7795a: mov rbx, rax
// asm:   0x5d7795d: lea rdi, [rsp + 0x18]
// asm:   0x5d77962: call 0x2fdd360  ; il2cpp_runtime_helper_02fdd360()
// asm:   0x5d77967: mov rdi, rbx
// asm:   0x5d7796a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d7796f: mov rdi, rax
// asm:   0x5d77972: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorHierarchyPanel__AddDescendants
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,
               System_Collections_Generic_HashSet_int__o *result,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  int32_t id_00;
  System_Collections_Generic_List_Enumerator_T__o *pSVar2;
  bool bVar3;
  System_Collections_Generic_List_int__o *__this_00;
  MethodInfo **method_00;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07547fcf == '\0') {
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
    Il2CppMethodInitialized_07547fcf = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._treeChildren;
  if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar1,id,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_List_int_ContainsKey);
    if (!bVar3) {
      return;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._treeChildren;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      __this_00 = (System_Collections_Generic_List_int__o *)
                  System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,id,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Item);
      local_38 = (undefined1 *)&local_58;
      if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
        method_00 = &MethodInfo_System_Collections_Generic_List_int_GetEnumerator;
        System_Collections_Generic_List_int___GetEnumerator
                  (&local_58,__this_00,
                   (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
        local_40 = 0;
        pSVar2 = &local_58;
        if (result == (System_Collections_Generic_HashSet_int__o *)0x0) {
          bVar3 = System_Collections_Generic_List_Enumerator_int___MoveNext
                            ((System_Collections_Generic_List_Enumerator_int__o *)&local_58,
                             (MethodInfo_4C3B4A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
          if (bVar3) {
            ThrowNullReferenceException();
          }
        }
        else {
          while (local_38 = (undefined1 *)pSVar2,
                bVar3 = System_Collections_Generic_List_Enumerator_int___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_int__o *)&local_58,
                                   (MethodInfo_4C3B4A0 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext), bVar3)
          {
            id_00 = (int32_t)local_58.fields._current;
            bVar3 = System_Collections_Generic_HashSet_int___Add
                              (result,(int32_t)local_58.fields._current,
                               (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
            pSVar2 = (System_Collections_Generic_List_Enumerator_T__o *)local_38;
            if (bVar3) {
              UI_MapEditorHierarchyPanel__AddDescendants(__this,id_00,result,(MethodInfo *)method_00);
              pSVar2 = (System_Collections_Generic_List_Enumerator_T__o *)local_38;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose
                  ((System_Collections_Generic_List_Enumerator_int__o *)&local_58,
                   (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$AddTreeRowsRecursive
// il2cpp: void UI_MapEditorHierarchyPanel__AddTreeRowsRecursive (UI_MapEditorHierarchyPanel_o* __this, int32_t id, int32_t depth, System_Collections_Generic_HashSet_int__o* context, bool forceExpand, const MethodInfo* method);
// 0x5d77450
// eh: try 0x5d776d4..0x5d776f5 -> pad 0x5d77721 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d77739..0x5d7773e -> pad 0x5d7775f cleanup
// eh: try 0x5d77762..0x5d7776c -> pad 0x5d77774 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7771f: jmp 0x5d77721
// asm:   0x5d77721: mov rbx, rax
// asm:   0x5d77724: cmp edx, 1
// asm:   0x5d77727: jne 0x5d77762
// asm:   0x5d77729: mov rdi, rbx
// asm:   0x5d7772c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d77731: mov rbx, qword ptr [rax]
// asm:   0x5d77734: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5d77739: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d7773e: lea rax, [rip + 0x1516ab3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5d77745: mov rsi, qword ptr [rax]
// asm:   0x5d77748: lea rdi, [rsp + 0x10]
// asm:   0x5d7774d: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5d77752: test rbx, rbx
// asm:   0x5d77755: je 0x5d7770b
// asm:   0x5d77757: mov rdi, rbx
// asm:   0x5d7775a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d7775f: mov rbx, rax
// asm:   0x5d77762: lea rdi, [rsp + 0x28]
// asm:   0x5d77767: call 0x2fdd390  ; il2cpp_runtime_helper_02fdd390()
// asm:   0x5d7776c: mov rdi, rbx
// asm:   0x5d7776f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d77774: mov rdi, rax
// asm:   0x5d77777: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorHierarchyPanel__AddTreeRowsRecursive
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,int32_t depth,
               System_Collections_Generic_HashSet_int__o *context,bool forceExpand,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *__this_00;
  UI_MapEditorHierarchyPanel_RowData_array *pUVar4;
  System_Collections_Generic_HashSet_int__o *__this_01;
  MethodInfo *pMVar5;
  bool bVar6;
  Il2CppObject *pIVar7;
  System_Collections_Generic_List_int__o *__this_02;
  UI_MapEditorHierarchyPanel_RowData_Fields item;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_40;
  System_Collections_Generic_List_Enumerator_T__o *local_38;
  
  if (Il2CppMethodInitialized_07547fd0 == '\0') {
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
    Il2CppMethodInitialized_07547fd0 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
           TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar3,id,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    if (!bVar6) {
      return;
    }
    if ((context != (System_Collections_Generic_HashSet_int__o *)0x0) &&
       (bVar6 = System_Collections_Generic_HashSet_int___Contains
                          (context,id,
                           (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains),
       !bVar6)) {
      return;
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_Add;
    __this_00 = (__this->fields)._rows;
    if (__this_00 != (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (__this_00->fields)._items;
      if (pUVar4 != (UI_MapEditorHierarchyPanel_RowData_array *)0x0) {
        item.Depth = depth;
        item.Id = id;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pUVar4->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pUVar4->m_Items[(int)uVar2].fields = item;
        }
        else {
          System_Collections_Generic_List_MapEditorHierarchyPanel_RowData___AddWithResize
                    (__this_00,(UI_MapEditorHierarchyPanel_RowData_o)item,
                     (MethodInfo_3AAAC90 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._treeChildren;
        if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                            (pSVar3,id,
                             (MethodInfo_4A0F950 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_List_int_ContainsKey);
          if (!bVar6) {
            return;
          }
          pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._treeChildren;
          if ((pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
             (pIVar7 = System_Collections_Generic_Dictionary_int__object___get_Item
                                 (pSVar3,id,
                                  (MethodInfo_4A0F690 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Item),
             pIVar7 != (Il2CppObject *)0x0)) {
            if (*(int *)&pIVar7[1].monitor == 0) {
              return;
            }
            if (!forceExpand) {
              __this_01 = (__this->fields)._expanded;
              if (__this_01 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05d7771a;
              bVar6 = System_Collections_Generic_HashSet_int___Contains
                                (__this_01,id,
                                 (MethodInfo_4FA7E00 *)
                                 MethodInfo_System_Collections_Generic_HashSet_int_Contains);
              if (!bVar6) {
                return;
              }
            }
            pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._treeChildren;
            if ((pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
               (__this_02 = (System_Collections_Generic_List_int__o *)
                            System_Collections_Generic_Dictionary_int__object___get_Item
                                      (pSVar3,id,
                                       (MethodInfo_4A0F690 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Item)
               , __this_02 != (System_Collections_Generic_List_int__o *)0x0)) {
              System_Collections_Generic_List_int___GetEnumerator
                        (&local_58,__this_02,
                         (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
              local_40 = 0;
              local_38 = &local_58;
              while (bVar6 = System_Collections_Generic_List_Enumerator_int___MoveNext
                                       ((System_Collections_Generic_List_Enumerator_int__o *)&local_58,
                                        (MethodInfo_4C3B4A0 *)
                                        MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext),
                    bVar6) {
                UI_MapEditorHierarchyPanel__AddTreeRowsRecursive
                          (__this,(int32_t)local_58.fields._current,depth + 1,context,forceExpand,method);
              }
              System_Collections_Generic_List_Enumerator_int___Dispose
                        ((System_Collections_Generic_List_Enumerator_int__o *)&local_58,
                         (MethodInfo_4C3B490 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
              return;
            }
          }
        }
      }
    }
  }
label_05d7771a:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$MatchesSearch
// il2cpp: bool UI_MapEditorHierarchyPanel__MatchesSearch (UI_MapEditorHierarchyPanel_o* __this, Map_MapObject_o* obj, System_String_o* search, const MethodInfo* method);
// 0x5d76fc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d77017: jmp 0x5d7706b

bool UI_MapEditorHierarchyPanel__MatchesSearch
               (UI_MapEditorHierarchyPanel_o *__this,Map_MapObject_o *obj,System_String_o *search,
               MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  bVar2 = System_String__op_Equality
                    (search,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar2) {
    return true;
  }
  if ((obj != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (obj->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    pSVar3 = (pMVar1->fields).Name;
    if (pSVar3 == (System_String_o *)0x0) {
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    else {
      pSVar3 = System_String__ToLower(pSVar3,(MethodInfo *)0x0);
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
// 0x5d74f60
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d74fd9: lea r12, [rip + 0x1506410]  ; TypeInfo_UnityEngine_Object
// asm:   0x5d74fe0: lea r13, [rip + 0x151f781]  ; MethodInfo_System_Collections_Generic_List_GameObject_Add
// asm:   0x5d74fe7: jmp 0x5d750e6
// asm:   0x5d75017: jmp 0x5d7511f

void UI_MapEditorHierarchyPanel__EnsurePoolSize
               (UI_MapEditorHierarchyPanel_o *__this,int32_t size,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  MethodInfo *method_00;
  UnityEngine_UI_RectMask2D_o *x;
  System_Collections_Generic_List_GameObject__o *pSVar6;
  undefined4 in_register_00000034;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,size);
  if (Il2CppMethodInitialized_07547fd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Misc/MapEditorHierarchyButton");
    Il2CppMethodInitialized_07547fd1 = '\x01';
  }
  pSVar6 = (__this->fields)._itemPool;
  while (pSVar6 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    while( true ) {
      if (size <= (pSVar6->fields)._size) {
        if ((__this->fields)._treeViewEnabled == false) {
          return;
        }
        UI_MapEditorHierarchyPanel__OrderVirtualizedChildren(__this,method_00);
        return;
      }
      method_00 = (MethodInfo *)
                  UI_ElementFactory__InstantiateAndBind
                            ((__this->fields).SinglePanel,"Prefabs/Misc/MapEditorHierarchyButton",(MethodInfo *)0x0);
      if (method_00 == (MethodInfo *)0x0) goto label_05d7511f;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)method_00,false,(MethodInfo *)0x0);
      x = UnityEngine_GameObject__GetComponent_object_
                    ((UnityEngine_GameObject_o *)method_00,
                     (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        UnityEngine_GameObject__AddComponent_object_
                  ((UnityEngine_GameObject_o *)method_00,
                   (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
      }
      pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
      pSVar6 = (__this->fields)._itemPool;
      if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05d7511f;
      piVar1 = &(pSVar6->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (pSVar6->fields)._items;
      if (pUVar3 == (UnityEngine_GameObject_array *)0x0) goto label_05d7511f;
      uVar2 = (pSVar6->fields)._size;
      if ((uint)pUVar3->max_length <= uVar2) break;
      (pSVar6->fields)._size = uVar2 + 1;
      pUVar3->m_Items[(int)uVar2] = (UnityEngine_GameObject_o *)method_00;
      Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
      pSVar6 = (__this->fields)._itemPool;
      if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05d7511f;
    }
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)method_00,
               (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
    pSVar6 = (__this->fields)._itemPool;
  }
label_05d7511f:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$BindPooledItem
// il2cpp: void UI_MapEditorHierarchyPanel__BindPooledItem (UI_MapEditorHierarchyPanel_o* __this, UnityEngine_GameObject_o* go, UI_MapEditorHierarchyPanel_RowData_o row, int32_t rowIndex, const MethodInfo* method);
// 0x5d75130
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d75662: jmp 0x5d75cac

void UI_MapEditorHierarchyPanel__BindPooledItem
               (UI_MapEditorHierarchyPanel_o *__this,UnityEngine_GameObject_o *go,
               UI_MapEditorHierarchyPanel_RowData_o row,int32_t rowIndex,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  System_Collections_Generic_HashSet_int__o *pSVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar4;
  UnityEngine_Events_UnityEvent_o *pUVar5;
  bool value;
  bool bVar6;
  bool bVar7;
  UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o *__this_00;
  Map_MapObject_o *pMVar8;
  UnityEngine_Transform_o *pUVar9;
  UI_MapEditorHierarchyPanel_o *pUVar10;
  UnityEngine_Object_o *x;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar11;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_02;
  UnityEngine_RectOffset_o *__this_03;
  UI_MapEditorHirarchyButton_o *__this_04;
  UnityEngine_Events_UnityAction_o *pUVar12;
  UnityEngine_Events_UnityAction_o *__this_05;
  UnityEngine_Events_UnityAction_T0__o *__this_06;
  UnityEngine_Events_UnityAction_T0__o *__this_07;
  UnityEngine_Events_UnityAction_T0__o *__this_08;
  UnityEngine_Events_UnityAction_T0__o *__this_09;
  UnityEngine_Events_UnityAction_T0__o *__this_10;
  Il2CppObject *pIVar13;
  UnityEngine_GameObject_o *arrowObject;
  UnityEngine_GameObject_o *__this_11;
  UnityEngine_GameObject_o *__this_12;
  UnityEngine_UI_Button_o *x_00;
  UnityEngine_UI_Button_o *x_01;
  System_String_o **method_00;
  MethodInfo *method_01;
  int32_t iVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Color_o UVar17;
  MethodInfo *in_stack_ffffffffffffff88;
  
  if (Il2CppMethodInitialized_07547fd2 == '\0') {
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
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__4);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__5);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__6);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__7);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0);
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
    Il2CppMethodInitialized_07547fd2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MapEditorHierarchyPanel___c__DisplayClass91_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    (__this_00->fields).row.fields = row.fields;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      value = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar1,(__this_00->fields).row.fields.Id,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (!value) {
        if (go == (UnityEngine_GameObject_o *)0x0) goto label_05d75cac;
        goto label_05d75c90;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        pMVar8 = System_Collections_Generic_Dictionary_int__object___get_Item
                           (pSVar1,(__this_00->fields).row.fields.Id,
                            (MethodInfo_4A0F690 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
        if ((((pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
             (System_Collections_Generic_Dictionary_int__object___set_Item
                        (pSVar1,(__this_00->fields).row.fields.Id,(Il2CppObject *)go,
                         (MethodInfo_4A0F720 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_set_Item),
             go != (UnityEngine_GameObject_o *)0x0)) &&
            (pUVar9 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0),
            pUVar9 != (UnityEngine_Transform_o *)0x0)) &&
           (pUVar9 = UnityEngine_Transform__Find(pUVar9,"Highlight",(MethodInfo *)0x0),
           pUVar9 != (UnityEngine_Transform_o *)0x0)) {
          pUVar10 = (UI_MapEditorHierarchyPanel_o *)
                    UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0)
          ;
          pSVar2 = (__this->fields)._selected;
          if ((pSVar2 != (System_Collections_Generic_HashSet_int__o *)0x0) &&
             (bVar6 = System_Collections_Generic_HashSet_int___Contains
                                (pSVar2,(__this_00->fields).row.fields.Id,
                                 (MethodInfo_4FA7E00 *)
                                 MethodInfo_System_Collections_Generic_HashSet_int_Contains),
             pUVar10 != (UI_MapEditorHierarchyPanel_o *)0x0)) {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar10,bVar6,(MethodInfo *)0x0);
            x = (UnityEngine_Object_o *)
                UI_MapEditorHierarchyPanel__GetOrCreateRowDropOverlay(pUVar10,go,method_01);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar6) {
              if (x == (UnityEngine_Object_o *)0x0) goto label_05d75cac;
              UnityEngine_GameObject__SetActive
                        ((UnityEngine_GameObject_o *)x,
                         (__this_00->fields).row.fields.Id == (__this->fields)._dropIndicatorId,
                         (MethodInfo *)0x0);
            }
            pUVar9 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
            if (((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                (pUVar9 = UnityEngine_Transform__Find(pUVar9,"Text",(MethodInfo *)0x0),
                pUVar9 != (UnityEngine_Transform_o *)0x0)) &&
               ((__this_01 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar9,
                                        (MethodInfo_34B0830 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_Text),
                pMVar8 != (Map_MapObject_o *)0x0 &&
                ((pMVar3 = (pMVar8->fields).ScriptObject, pMVar3 != (Map_MapScriptBaseObject_o *)0x0 &&
                 (__this_01 != (UnityEngine_UI_Text_o *)0x0)))))) {
              (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                        (__this_01,(pMVar3->fields).Name,(__this_01->klass->vtable)._75_set_text.method);
              UnityEngine_UI_Text__set_horizontalOverflow(__this_01,1,(MethodInfo *)0x0);
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              UVar17 = UI_UIManager__GetThemeColor
                                 ("DefaultPanel","DefaultLabel","TextColor",
                                  "DefaultPanel",(MethodInfo *)0x0);
              (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                        (__this_01,UVar17,(__this_01->klass->vtable)._23_set_color.method);
              pUVar11 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)__this_01,
                                   (MethodInfo_34B0830 *)
                                   MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
              if (pUVar11 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                (*(pUVar11->klass->vtable)._32_set_minWidth.methodPtr)
                          (pUVar11,0.0,(pUVar11->klass->vtable)._32_set_minWidth.method);
                (*(pUVar11->klass->vtable)._36_set_preferredWidth.methodPtr)
                          (pUVar11,0.0,(pUVar11->klass->vtable)._36_set_preferredWidth.method);
                (*(pUVar11->klass->vtable)._40_set_flexibleWidth.methodPtr)
                          (pUVar11,1.0,(pUVar11->klass->vtable)._40_set_flexibleWidth.method);
                if ((__this->fields)._treeViewEnabled == false) {
                  iVar14 = 10;
                }
                else {
                  iVar14 = (__this_00->fields).row.fields.Depth * 0x12 + 6;
                }
                __this_02 = UnityEngine_GameObject__GetComponent_object_
                                      (go,(MethodInfo_353B730 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup
                                      );
                __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
                UnityEngine_RectOffset___ctor_68cd0a0(__this_03,iVar14,0,0,0,(MethodInfo *)0x0);
                if (__this_02 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                  UnityEngine_UI_LayoutGroup__set_padding
                            ((UnityEngine_UI_LayoutGroup_o *)__this_02,__this_03,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,2.0,
                             (MethodInfo *)0x0);
                  pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                      (go,(MethodInfo_353B730 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                  if (pUVar11 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    (*(pUVar11->klass->vtable)._32_set_minWidth.methodPtr)
                              (pUVar11,0.0,(pUVar11->klass->vtable)._32_set_minWidth.method);
                    fVar15 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                                       (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
                    iVar14 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                                       (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
                    fVar15 = fVar15 - ((float)iVar14 + (float)iVar14);
                    fVar16 = 0.0;
                    if (0.0 <= fVar15) {
                      fVar16 = fVar15;
                    }
                    (*(pUVar11->klass->vtable)._36_set_preferredWidth.methodPtr)
                              (pUVar11,fVar16,(pUVar11->klass->vtable)._36_set_preferredWidth.method);
                    (*(pUVar11->klass->vtable)._38_set_preferredHeight.methodPtr)
                              (pUVar11,22.0,(pUVar11->klass->vtable)._38_set_preferredHeight.method);
                    (*(pUVar11->klass->vtable)._34_set_minHeight.methodPtr)
                              (pUVar11,22.0,(pUVar11->klass->vtable)._34_set_minHeight.method);
                    (__this->fields)._virtualRowHeight = 22.0;
                    __this_04 = UnityEngine_GameObject__GetComponent_object_
                                          (go,(MethodInfo_353B730 *)
                                              MethodInfo_UnityEngine_GameObject_GetComponent_MapEditorHirarchyButton
                                          );
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar6 = UnityEngine_Object__op_Equality
                                      ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar6) {
                      __this_04 = UnityEngine_GameObject__AddComponent_object_
                                            (go,(MethodInfo_353B6A0 *)
                                                MethodInfo_UnityEngine_GameObject_AddComponent_MapEditorHirarchyButton
                                            );
                    }
                    pUVar12 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                    UnityEngine_Events_UnityAction___ctor
                              (pUVar12,(Il2CppObject *)__this_00,
                               (intptr_t)
                               MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__0,
                               (MethodInfo *)0x0);
                    __this_05 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                    UnityEngine_Events_UnityAction___ctor
                              (__this_05,(Il2CppObject *)__this_00,
                               (intptr_t)
                               MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__1,
                               (MethodInfo *)0x0);
                    __this_06 = (UnityEngine_Events_UnityAction_T0__o *)
                                il2cpp_codegen_object_new
                                          ((Il2CppClass *)
                                           TypeInfo_UnityEngine_Events_UnityAction_PointerEventData);
                    UnityEngine_Events_UnityAction_object____ctor
                              (__this_06,(Il2CppObject *)__this_00,
                               (intptr_t)
                               MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__2,
                               (MethodInfo_4311A10 *)0x0);
                    __this_07 = (UnityEngine_Events_UnityAction_T0__o *)
                                il2cpp_codegen_object_new
                                          ((Il2CppClass *)
                                           TypeInfo_UnityEngine_Events_UnityAction_PointerEventData);
                    UnityEngine_Events_UnityAction_object____ctor
                              (__this_07,(Il2CppObject *)__this_00,
                               (intptr_t)
                               MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__3,
                               (MethodInfo_4311A10 *)0x0);
                    __this_08 = (UnityEngine_Events_UnityAction_T0__o *)
                                il2cpp_codegen_object_new
                                          ((Il2CppClass *)
                                           TypeInfo_UnityEngine_Events_UnityAction_PointerEventData);
                    UnityEngine_Events_UnityAction_object____ctor
                              (__this_08,(Il2CppObject *)__this_00,
                               (intptr_t)
                               MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__4,
                               (MethodInfo_4311A10 *)0x0);
                    __this_09 = (UnityEngine_Events_UnityAction_T0__o *)
                                il2cpp_codegen_object_new
                                          ((Il2CppClass *)
                                           TypeInfo_UnityEngine_Events_UnityAction_PointerEventData);
                    UnityEngine_Events_UnityAction_object____ctor
                              (__this_09,(Il2CppObject *)__this_00,
                               (intptr_t)
                               MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__5,
                               (MethodInfo_4311A10 *)0x0);
                    __this_10 = (UnityEngine_Events_UnityAction_T0__o *)
                                il2cpp_codegen_object_new
                                          ((Il2CppClass *)
                                           TypeInfo_UnityEngine_Events_UnityAction_PointerEventData);
                    UnityEngine_Events_UnityAction_object____ctor
                              (__this_10,(Il2CppObject *)__this_00,
                               (intptr_t)
                               MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__6,
                               (MethodInfo_4311A10 *)0x0);
                    if (__this_04 != (UI_MapEditorHirarchyButton_o *)0x0) {
                      UI_MapEditorHirarchyButton__Setup
                                (__this_04,pUVar12,__this_05,
                                 (UnityEngine_Events_UnityAction_PointerEventData__o *)__this_06,
                                 (UnityEngine_Events_UnityAction_PointerEventData__o *)__this_07,
                                 (UnityEngine_Events_UnityAction_PointerEventData__o *)__this_08,
                                 (UnityEngine_Events_UnityAction_PointerEventData__o *)__this_09,
                                 (UnityEngine_Events_UnityAction_PointerEventData__o *)__this_10,
                                 in_stack_ffffffffffffff88);
                      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                               (__this->fields)._treeChildren;
                      if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                        bVar7 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                          (pSVar1,(__this_00->fields).row.fields.Id,
                                           (MethodInfo_4A0F950 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_int_List_int_ContainsKey
                                          );
                        bVar6 = false;
                        if (bVar7) {
                          pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                                   (__this->fields)._treeChildren;
                          if ((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
                             (pIVar13 = System_Collections_Generic_Dictionary_int__object___get_Item
                                                  (pSVar1,(__this_00->fields).row.fields.Id,
                                                   (MethodInfo_4A0F690 *)
                                                   MethodInfo_System_Collections_Generic_Dictionary_int_List_int_get_Item
                                                  ), pIVar13 == (Il2CppObject *)0x0)) goto label_05d75cac;
                          bVar6 = 0 < *(int *)&pIVar13[1].monitor;
                        }
                        pSVar2 = (__this->fields)._expanded;
                        if (pSVar2 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                          bVar7 = System_Collections_Generic_HashSet_int___Contains
                                            (pSVar2,(__this_00->fields).row.fields.Id,
                                             (MethodInfo_4FA7E00 *)
                                             MethodInfo_System_Collections_Generic_HashSet_int_Contains);
                          pUVar9 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
                          if ((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                             (pUVar9 = UnityEngine_Transform__Find
                                                 (pUVar9,"ArrowRightButton",(MethodInfo *)0x0),
                             pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                            arrowObject = UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                            pUVar9 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
                            if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                              method_00 = &"ArrowDownButton";
                              pUVar9 = UnityEngine_Transform__Find
                                                 (pUVar9,"ArrowDownButton",(MethodInfo *)0x0);
                              if (((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                                  (__this_11 = UnityEngine_Component__get_gameObject
                                                         ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0)
                                  , __this_11 != (UnityEngine_GameObject_o *)0x0)) &&
                                 (pUVar10 = (UI_MapEditorHierarchyPanel_o *)
                                            UnityEngine_GameObject__get_transform(__this_11,(MethodInfo *)0x0)
                                 , pUVar10 != (UI_MapEditorHierarchyPanel_o *)0x0)) {
                                iVar14 = UnityEngine_Transform__GetSiblingIndex
                                                   ((UnityEngine_Transform_o *)pUVar10,(MethodInfo *)0x0);
                                __this_12 = UI_MapEditorHierarchyPanel__GetOrCreateTreeArrowSpacer
                                                      (pUVar10,go,iVar14,(MethodInfo *)method_00);
                                UI_MapEditorHierarchyPanel__SetTreeArrowIcon
                                          (__this,arrowObject,"Icons/Navigation/ArrowRight",(MethodInfo *)method_00);
                                UI_MapEditorHierarchyPanel__SetTreeArrowIcon
                                          (__this,__this_11,"Icons/Navigation/ArrowDown",(MethodInfo *)method_00);
                                if ((bVar6 & (__this->fields)._treeViewEnabled) == 0) {
                                  if (arrowObject != (UnityEngine_GameObject_o *)0x0) {
                                    UnityEngine_GameObject__SetActive(arrowObject,false,(MethodInfo *)0x0);
                                    UnityEngine_GameObject__SetActive(__this_11,false,(MethodInfo *)0x0);
                                    if (__this_12 != (UnityEngine_GameObject_o *)0x0) {
                                      UnityEngine_GameObject__SetActive
                                                (__this_12,(__this->fields)._treeViewEnabled,(MethodInfo *)0x0
                                                );
                                      goto label_05d75c90;
                                    }
                                  }
                                }
                                else if ((__this_12 != (UnityEngine_GameObject_o *)0x0) &&
                                        (UnityEngine_GameObject__SetActive(__this_12,false,(MethodInfo *)0x0),
                                        arrowObject != (UnityEngine_GameObject_o *)0x0)) {
                                  UnityEngine_GameObject__SetActive(arrowObject,!bVar7,(MethodInfo *)0x0);
                                  UnityEngine_GameObject__SetActive(__this_11,bVar7,(MethodInfo *)0x0);
                                  x_00 = UnityEngine_GameObject__GetComponent_object_
                                                   (arrowObject,
                                                    (MethodInfo_353B730 *)
                                                    MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                                  x_01 = UnityEngine_GameObject__GetComponent_object_
                                                   (__this_11,
                                                    (MethodInfo_353B730 *)
                                                    MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                    il2cpp_codegen_runtime_class_init
                                              ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                  }
                                  bVar6 = UnityEngine_Object__op_Inequality
                                                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,
                                                     (MethodInfo *)0x0);
                                  if (bVar6) {
                                    if ((x_00 == (UnityEngine_UI_Button_o *)0x0) ||
                                       (pUVar4 = (x_00->fields).m_OnClick,
                                       pUVar4 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0))
                                    goto label_05d75cac;
                                    UnityEngine_Events_UnityEventBase__RemoveAllListeners
                                              ((UnityEngine_Events_UnityEventBase_o *)pUVar4,(MethodInfo *)0x0
                                              );
                                    pUVar5 = (UnityEngine_Events_UnityEvent_o *)(x_00->fields).m_OnClick;
                                    pUVar12 = il2cpp_codegen_object_new
                                                        ((Il2CppClass *)
                                                         TypeInfo_UnityEngine_Events_UnityAction);
                                    UnityEngine_Events_UnityAction___ctor
                                              (pUVar12,(Il2CppObject *)__this_00,
                                               (intptr_t)
                                               MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__7
                                               ,(MethodInfo *)0x0);
                                    if (pUVar5 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_05d75cac;
                                    UnityEngine_Events_UnityEvent__AddListener
                                              (pUVar5,pUVar12,(MethodInfo *)0x0);
                                  }
                                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                    il2cpp_codegen_runtime_class_init
                                              ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                  }
                                  bVar6 = UnityEngine_Object__op_Inequality
                                                    ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,
                                                     (MethodInfo *)0x0);
                                  if (!bVar6) {
label_05d75c90:
                                    UnityEngine_GameObject__SetActive(go,value,(MethodInfo *)0x0);
                                    return;
                                  }
                                  if ((x_01 != (UnityEngine_UI_Button_o *)0x0) &&
                                     (pUVar4 = (x_01->fields).m_OnClick,
                                     pUVar4 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
                                    UnityEngine_Events_UnityEventBase__RemoveAllListeners
                                              ((UnityEngine_Events_UnityEventBase_o *)pUVar4,(MethodInfo *)0x0
                                              );
                                    pUVar5 = (UnityEngine_Events_UnityEvent_o *)(x_01->fields).m_OnClick;
                                    pUVar12 = il2cpp_codegen_object_new
                                                        ((Il2CppClass *)
                                                         TypeInfo_UnityEngine_Events_UnityAction);
                                    UnityEngine_Events_UnityAction___ctor
                                              (pUVar12,(Il2CppObject *)__this_00,
                                               (intptr_t)
                                               MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__8
                                               ,(MethodInfo *)0x0);
                                    if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                      UnityEngine_Events_UnityEvent__AddListener
                                                (pUVar5,pUVar12,(MethodInfo *)0x0);
                                      goto label_05d75c90;
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
label_05d75cac:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$SetTreeArrowIcon
// il2cpp: void UI_MapEditorHierarchyPanel__SetTreeArrowIcon (UI_MapEditorHierarchyPanel_o* __this, UnityEngine_GameObject_o* arrowObject, System_String_o* icon, const MethodInfo* method);
// 0x5d78200
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7849b: jmp 0x5d784ab
// asm:   0x5d7849d: xor ebp, ebp
// asm:   0x5d78722: jmp 0x5d784ab

void UI_MapEditorHierarchyPanel__SetTreeArrowIcon
               (UI_MapEditorHierarchyPanel_o *__this,UnityEngine_GameObject_o *arrowObject,
               System_String_o *icon,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint32_t uVar4;
  undefined4 uVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  UnityEngine_UI_RawImage_o *pUVar7;
  System_String_o *path;
  undefined4 uVar8;
  UnityEngine_UI_ColorBlock_o value;
  bool bVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_UI_LayoutElement_o *x;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_UI_RawImage_o *__this_01;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar11;
  UnityEngine_Vector3_o value_00;
  
  if (Il2CppMethodInitialized_07547fd3 == '\0') {
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
    Il2CppMethodInitialized_07547fd3 = '\x01';
  }
  if (arrowObject == (UnityEngine_GameObject_o *)0x0) goto label_05d78727;
  pUVar10 = UnityEngine_GameObject__get_transform(arrowObject,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
  }
  if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05d78727;
  UnityEngine_Transform__set_localRotation
            (pUVar10,(UnityEngine_Quaternion_o)
                     *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
             (MethodInfo *)0x0);
  pUVar10 = UnityEngine_GameObject__get_transform(arrowObject,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e4b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b7 = '\x01';
  }
  if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05d78727;
  pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
  value_00.fields.z = (pUVar6->oneVector).fields.z * 2.25;
  uVar1 = (pUVar6->oneVector).fields.x;
  uVar2 = (pUVar6->oneVector).fields.y;
  value_00.fields.x = (float)uVar1 * 2.25;
  value_00.fields.y = (float)uVar2 * 2.25;
  UnityEngine_Transform__set_localScale(pUVar10,value_00,(MethodInfo *)0x0);
  x = UnityEngine_GameObject__GetComponent_object_
                (arrowObject,
                 (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    if (x == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05d78727;
    (*(x->klass->vtable)._32_set_minWidth.methodPtr)(x,16.0,(x->klass->vtable)._32_set_minWidth.method);
    (*(x->klass->vtable)._34_set_minHeight.methodPtr)(x,18.0,(x->klass->vtable)._34_set_minHeight.method);
    (*(x->klass->vtable)._36_set_preferredWidth.methodPtr)
              (x,16.0,(x->klass->vtable)._36_set_preferredWidth.method);
    (*(x->klass->vtable)._38_set_preferredHeight.methodPtr)
              (x,18.0,(x->klass->vtable)._38_set_preferredHeight.method);
  }
  __this_00 = UnityEngine_GameObject__GetComponent_object_
                        (arrowObject,
                         (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    if (__this_00 == (UnityEngine_UI_Button_o *)0x0) goto label_05d78727;
    pUVar7 = (UnityEngine_UI_RawImage_o *)(__this_00->fields).m_TargetGraphic;
    if (pUVar7 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05d7849f;
    bVar3 = (TypeInfo_UnityEngine_UI_RawImage->_2).typeHierarchyDepth;
    if ((pUVar7->klass->_2).typeHierarchyDepth < bVar3) {
      __this_01 = (UnityEngine_UI_RawImage_o *)0x0;
      uVar4 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    }
    else {
      __this_01 = (UnityEngine_UI_RawImage_o *)0x0;
      if ((pUVar7->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
          (Il2CppClass *)TypeInfo_UnityEngine_UI_RawImage) {
        __this_01 = pUVar7;
      }
      uVar4 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    }
  }
  else {
label_05d7849f:
    __this_01 = (UnityEngine_UI_RawImage_o *)0x0;
    uVar4 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (arrowObject,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar9) {
      __this_01 = UnityEngine_GameObject__AddComponent_object_
                            (arrowObject,
                             (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_RawImage);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar9) {
      if (__this_00 == (UnityEngine_UI_Button_o *)0x0) goto label_05d78727;
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
  method_00 = (MethodInfo *)
              ApplicationManagers_ResourceManager__LoadAsset(path,icon,true,false,(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_UI_RawImage_o *)0x0) {
label_05d78727:
    ThrowNullReferenceException();
  }
  if ((method_00 != (MethodInfo *)0x0) &&
     ((UnityEngine_Texture_c *)method_00->methodPointer !=
      (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
    il2cpp_codegen_raise_invalid_cast_exception(method_00);
  }
  UnityEngine_UI_RawImage__set_texture(__this_01,(UnityEngine_Texture_o *)method_00,(MethodInfo *)0x0);
  UVar11 = UI_MapEditorHierarchyPanel__IconColor(__this,method_00);
  (*(__this_01->klass->vtable)._23_set_color.methodPtr)
            (__this_01,UVar11,(__this_01->klass->vtable)._23_set_color.method);
  (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
            (__this_01,true,(__this_01->klass->vtable)._25_set_raycastTarget.method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    if (__this_00 == (UnityEngine_UI_Button_o *)0x0) goto label_05d78727;
    UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this_00,1,(MethodInfo *)0x0);
    uVar5 = (__this_00->fields).m_Colors.fields.m_ColorMultiplier;
    uVar8 = (__this_00->fields).m_Colors.fields.m_FadeDuration;
    value.fields.m_FadeDuration = (float)uVar8;
    value.fields.m_ColorMultiplier = (float)uVar5;
    if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
    }
    value.fields.m_NormalColor.fields.b = 0.65;
    value.fields.m_NormalColor.fields.a = 1.0;
    value.fields.m_NormalColor.fields._0_8_ = 0x3f2666663f266666;
    value.fields.m_HighlightedColor.fields.r = 0.8;
    value.fields.m_HighlightedColor.fields.g = 0.8;
    value.fields.m_HighlightedColor.fields.b = 0.8;
    value.fields.m_HighlightedColor.fields.a = 1.0;
    value.fields.m_PressedColor.fields._0_8_ = 0x3f2666663f266666;
    value.fields.m_PressedColor.fields.b = 0.65;
    value.fields.m_PressedColor.fields.a = 1.0;
    value.fields.m_SelectedColor.fields._0_8_ = 0x3f2666663f266666;
    value.fields.m_SelectedColor.fields.b = 0.65;
    value.fields.m_SelectedColor.fields.a = 1.0;
    value.fields.m_DisabledColor.fields.r = 0.45;
    value.fields.m_DisabledColor.fields.g = 0.45;
    value.fields.m_DisabledColor.fields.b = 0.45;
    value.fields.m_DisabledColor.fields.a = 1.0;
    UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)__this_00,value,(MethodInfo *)0x0);
  }
  return;
}


// UI.MapEditorHierarchyPanel$$GetOrCreateTreeArrowSpacer
// il2cpp: UnityEngine_GameObject_o* UI_MapEditorHierarchyPanel__GetOrCreateTreeArrowSpacer (UI_MapEditorHierarchyPanel_o* __this, UnityEngine_GameObject_o* row, int32_t siblingIndex, const MethodInfo* method);
// 0x5d77f10

UnityEngine_GameObject_o *
UI_MapEditorHierarchyPanel__GetOrCreateTreeArrowSpacer
          (UI_MapEditorHierarchyPanel_o *__this,UnityEngine_GameObject_o *row,int32_t siblingIndex,
          MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_Type_array *components;
  System_Type_o *pSVar4;
  Il2CppObject *pIVar5;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  
  if (Il2CppMethodInitialized_07547fd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"TreeArrowSpacer");
    Il2CppMethodInitialized_07547fd4 = '\x01';
  }
  if (row == (UnityEngine_GameObject_o *)0x0) {
label_05d781e1:
    ThrowNullReferenceException();
  }
  pUVar2 = UnityEngine_GameObject__get_transform(row,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05d781e1;
  pUVar2 = UnityEngine_Transform__Find(pUVar2,"TreeArrowSpacer",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      return pUVar3;
    }
    goto label_05d781e1;
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar4 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_05d781e1;
  if (pSVar4 != (System_Type_o *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05d781eb;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar4;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar4 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) {
label_05d781eb:
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar4;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(pUVar3,"TreeArrowSpacer",components,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
        parent = UnityEngine_GameObject__get_transform(row,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(pUVar2,parent,false,(MethodInfo *)0x0);
          pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetSiblingIndex(pUVar2,siblingIndex,(MethodInfo *)0x0);
            pUVar6 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar3,(MethodInfo_353B730 *)
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
              return pUVar3;
            }
          }
        }
      }
      goto label_05d781e1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.MapEditorHierarchyPanel$$GetViewportRect
// il2cpp: UnityEngine_RectTransform_o* UI_MapEditorHierarchyPanel__GetViewportRect (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d78740

UnityEngine_RectTransform_o *
UI_MapEditorHierarchyPanel__GetViewportRect(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  
  if (Il2CppMethodInitialized_07547fd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fd5 = '\x01';
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
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
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
       (pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
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
          (pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0),
          pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
         (pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        pUVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar2,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform)
        ;
        return pUVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$EnsureVirtualizationElements
// il2cpp: void UI_MapEditorHierarchyPanel__EnsureVirtualizationElements (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d73150

void UI_MapEditorHierarchyPanel__EnsureVirtualizationElements
               (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o **targetAddress;
  UnityEngine_Events_UnityEvent_Vector2__o *pUVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_ScrollRect_o *pUVar4;
  UnityEngine_Events_UnityAction_T0__o *pUVar5;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if (Il2CppMethodInitialized_07547fd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorHierarchyPanel_OnScrollValueChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_Vector2_AddListener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_Vector2_RemoveListener);
    il2cpp_codegen_initialize_runtime_metadata(&"TreeVirtualTopSpacer");
    il2cpp_codegen_initialize_runtime_metadata(&"TreeVirtualBottomSpacer");
    Il2CppMethodInitialized_07547fd6 = '\x01';
  }
  pUVar4 = (__this->fields)._scrollRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = (__this->fields).SinglePanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    targetAddress = &(__this->fields)._scrollRect;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar3 = (__this->fields).SinglePanel;
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05d7349a;
      pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar3 = (__this->fields).SinglePanel;
        if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05d7349a;
        pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
        if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05d7349a;
        pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          pUVar3 = (__this->fields).SinglePanel;
          if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05d7349a;
          pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05d7349a;
          pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05d7349a;
          pUVar4 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar3,
                              (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
          *targetAddress = pUVar4;
          Il2CppCodeGenWriteBarrier(targetAddress);
        }
      }
    }
    pUVar4 = *targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (*targetAddress != (UnityEngine_UI_ScrollRect_o *)0x0) {
        pUVar1 = (UnityEngine_Events_UnityEvent_Vector2__o *)((*targetAddress)->fields).m_OnValueChanged;
        pUVar5 = (UnityEngine_Events_UnityAction_T0__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_Vector2);
        UnityEngine_Events_UnityAction_Vector2____ctor
                  ((UnityEngine_Events_UnityAction_Vector2__o *)pUVar5,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_OnScrollValueChanged,
                   (MethodInfo_4311CC0 *)0x0);
        if (pUVar1 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
          UnityEngine_Events_UnityEvent_Vector2___RemoveListener
                    (pUVar1,pUVar5,
                     (MethodInfo_4319B00 *)MethodInfo_UnityEngine_Events_UnityEvent_Vector2_RemoveListener);
          if (*targetAddress != (UnityEngine_UI_ScrollRect_o *)0x0) {
            pUVar1 = (UnityEngine_Events_UnityEvent_Vector2__o *)((*targetAddress)->fields).m_OnValueChanged;
            pUVar5 = (UnityEngine_Events_UnityAction_T0__o *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_Vector2)
            ;
            UnityEngine_Events_UnityAction_Vector2____ctor
                      ((UnityEngine_Events_UnityAction_Vector2__o *)pUVar5,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_OnScrollValueChanged,
                       (MethodInfo_4311CC0 *)0x0);
            if (pUVar1 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
              UnityEngine_Events_UnityEvent_Vector2___AddListener
                        (pUVar1,pUVar5,
                         (MethodInfo_4319A50 *)MethodInfo_UnityEngine_Events_UnityEvent_Vector2_AddListener);
              goto label_05d733dc;
            }
          }
        }
      }
label_05d7349a:
      ThrowNullReferenceException();
    }
  }
label_05d733dc:
  pUVar6 = (__this->fields)._topSpacer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar6 = UI_MapEditorHierarchyPanel__CreateSpacer(__this,"TreeVirtualTopSpacer",method_01);
    (__this->fields)._topSpacer = pUVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._topSpacer);
  }
  pUVar6 = (__this->fields)._bottomSpacer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    method_00 = (MethodInfo *)UI_MapEditorHierarchyPanel__CreateSpacer(__this,"TreeVirtualBottomSpacer",method_02)
    ;
    (__this->fields)._bottomSpacer = (UnityEngine_UI_LayoutElement_o *)method_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._bottomSpacer);
  }
  UI_MapEditorHierarchyPanel__OrderVirtualizedChildren(__this,method_00);
  return;
}


// UI.MapEditorHierarchyPanel$$CreateSpacer
// il2cpp: UnityEngine_UI_LayoutElement_o* UI_MapEditorHierarchyPanel__CreateSpacer (UI_MapEditorHierarchyPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d78870

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
  
  if (Il2CppMethodInitialized_07547fd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_07547fd7 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_05d78a5d:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) goto label_05d78a67;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
label_05d78a67:
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this_00,name,components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510
                    (__this_01,(__this->fields).SinglePanel,false,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_353B730 *)
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
      goto label_05d78a5d;
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.MapEditorHierarchyPanel$$SetVirtualizationActive
// il2cpp: void UI_MapEditorHierarchyPanel__SetVirtualizationActive (UI_MapEditorHierarchyPanel_o* __this, bool active, const MethodInfo* method);
// 0x5d74a50

void UI_MapEditorHierarchyPanel__SetVirtualizationActive
               (UI_MapEditorHierarchyPanel_o *__this,bool active,MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  undefined7 in_register_00000031;
  MethodInfo *pMVar4;
  
  pMVar4 = (MethodInfo *)CONCAT71(in_register_00000031,active);
  if (Il2CppMethodInitialized_07547fd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fd8 = '\x01';
  }
  UI_MapEditorHierarchyPanel__EnsureVirtualizationElements(__this,pMVar4);
  pUVar1 = (__this->fields)._topSpacer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._topSpacer;
    if (pUVar1 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05d74b90;
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_05d74b90;
    UnityEngine_GameObject__SetActive(pUVar3,active,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._topSpacer;
    if (pUVar1 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05d74b90;
    (*(pUVar1->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar1,0.0,(pUVar1->klass->vtable)._38_set_preferredHeight.method);
  }
  pUVar1 = (__this->fields)._bottomSpacer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar4 = (MethodInfo *)0x0;
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
          pMVar4 = (pUVar1->klass->vtable)._38_set_preferredHeight.method;
          (*(pUVar1->klass->vtable)._38_set_preferredHeight.methodPtr)(pUVar1,0.0,pMVar4);
          goto label_05d74b6e;
        }
      }
    }
label_05d74b90:
    ThrowNullReferenceException();
  }
label_05d74b6e:
  if (active) {
    UI_MapEditorHierarchyPanel__OrderVirtualizedChildren(__this,pMVar4);
    return;
  }
  return;
}


// UI.MapEditorHierarchyPanel$$OrderVirtualizedChildren
// il2cpp: void UI_MapEditorHierarchyPanel__OrderVirtualizedChildren (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d77980
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d77ab0: jmp 0x5d77ae3

void UI_MapEditorHierarchyPanel__OrderVirtualizedChildren
               (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  int32_t index;
  System_Collections_Generic_List_GameObject__o *__this_01;
  
  if (Il2CppMethodInitialized_07547fd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fd9 = '\x01';
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
         (pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_Transform_o *)0x0)) {
        index = 0;
        iVar3 = UnityEngine_Transform__GetSiblingIndex(pUVar4,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._itemPool;
        if (__this_01 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          while (index < (__this_01->fields)._size) {
            __this_00 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_01,index,
                                   (MethodInfo_395CF20 *)
                                   MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
            if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
               (pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
               pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_05d77ae3;
            UnityEngine_Transform__SetSiblingIndex(pUVar4,iVar3 + 1 + index,(MethodInfo *)0x0);
            index = index + 1;
            __this_01 = (__this->fields)._itemPool;
            if (__this_01 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05d77ae3;
          }
          pUVar1 = (__this->fields)._bottomSpacer;
          if ((pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetSiblingIndex(pUVar4,iVar3 + index + 1,(MethodInfo *)0x0);
            return;
          }
        }
      }
label_05d77ae3:
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.MapEditorHierarchyPanel$$OnScrollValueChanged
// il2cpp: void UI_MapEditorHierarchyPanel__OnScrollValueChanged (UI_MapEditorHierarchyPanel_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x5d78a80

void UI_MapEditorHierarchyPanel__OnScrollValueChanged
               (UI_MapEditorHierarchyPanel_o *__this,UnityEngine_Vector2_o value,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  if ((__this->fields)._treeViewEnabled == false) {
    return;
  }
  UI_MapEditorHierarchyPanel__RenderVirtualizedRows(__this,false,in_RDX);
  return;
}


// UI.MapEditorHierarchyPanel$$GetVirtualStride
// il2cpp: float UI_MapEditorHierarchyPanel__GetVirtualStride (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d78aa0

float UI_MapEditorHierarchyPanel__GetVirtualStride(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  bool bVar1;
  UnityEngine_UI_VerticalLayoutGroup_o *x;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07547fda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fda = '\x01';
  }
  fVar2 = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                    (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
  __this_00 = (__this->fields).SinglePanel;
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
label_05d78b58:
    ThrowNullReferenceException();
  }
  x = UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)__this_00,
                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto label_05d78b58;
    fVar2 = (x->fields).m_Spacing;
  }
  fVar2 = fVar2 + (__this->fields)._virtualRowHeight;
  fVar3 = 1.0;
  if (1.0 <= fVar2) {
    fVar3 = fVar2;
  }
  return fVar3;
}


// UI.MapEditorHierarchyPanel$$GetVirtualPoolSize
// il2cpp: int32_t UI_MapEditorHierarchyPanel__GetVirtualPoolSize (UI_MapEditorHierarchyPanel_o* __this, int32_t totalRows, const MethodInfo* method);
// 0x5d78b60

int32_t UI_MapEditorHierarchyPanel__GetVirtualPoolSize
                  (UI_MapEditorHierarchyPanel_o *__this,int32_t totalRows,MethodInfo *method)

{
  float fVar1;
  uint32_t uVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  int iVar4;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_UI_VerticalLayoutGroup_o *x;
  int iVar5;
  MethodInfo *method_00;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  float local_3c;
  
  if (Il2CppMethodInitialized_07547fdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07547fdb = '\x01';
  }
  method_00 = (__this->klass->vtable)._31_GetPanelHeight.method;
  fVar6 = (*(__this->klass->vtable)._31_GetPanelHeight.methodPtr)(__this,method_00);
  __this_01 = UI_MapEditorHierarchyPanel__GetViewportRect(__this,method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto label_05d78d65;
    UVar8 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar6 = UVar8.fields.m_Height;
  }
  local_3c = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                       (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
  __this_00 = (__this->fields).SinglePanel;
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
label_05d78d65:
    ThrowNullReferenceException();
  }
  x = UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)__this_00,
                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (x == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto label_05d78d65;
    local_3c = (x->fields).m_Spacing;
  }
  fVar1 = (__this->fields)._virtualRowHeight;
  if (Il2CppMethodInitialized_0753e7f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7f9 = '\x01';
    uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar7 = 1.0;
  if (1.0 <= fVar6) {
    fVar7 = fVar6;
  }
  local_3c = local_3c + fVar1;
  fVar6 = 1.0;
  if (1.0 <= local_3c) {
    fVar6 = local_3c;
  }
  fVar6 = ceilf(fVar7 / fVar6);
  iVar5 = 0x28;
  if (0x28 < (int)fVar6 + 0xe) {
    iVar5 = (int)fVar6 + 0xe;
  }
  iVar4 = 1;
  if (1 < totalRows) {
    iVar4 = totalRows;
  }
  if (iVar5 < iVar4) {
    iVar4 = iVar5;
  }
  return iVar4;
}


// UI.MapEditorHierarchyPanel$$GetListHeaderOffset
// il2cpp: float UI_MapEditorHierarchyPanel__GetListHeaderOffset (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d78e80

float UI_MapEditorHierarchyPanel__GetListHeaderOffset(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorHierarchyPanel$$GetVirtualStartIndex
// il2cpp: int32_t UI_MapEditorHierarchyPanel__GetVirtualStartIndex (UI_MapEditorHierarchyPanel_o* __this, int32_t maxStart, int32_t totalRows, int32_t poolSize, float stride, const MethodInfo* method);
// 0x5d78e90
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d78f65: mov ebx, ebp
// asm:   0x5d78f67: jle 0x5d79060
// asm:   0x5d79004: jmp 0x5d7905c
// asm:   0x5d7905c: mov eax, ebp
// asm:   0x5d7905e: jmp 0x5d79067

int32_t UI_MapEditorHierarchyPanel__GetVirtualStartIndex
                  (UI_MapEditorHierarchyPanel_o *__this,int32_t maxStart,int32_t totalRows,int32_t poolSize,
                  float stride,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  uint uVar4;
  int32_t iVar5;
  MethodInfo *method_00;
  uint uVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector2_o UVar9;
  
  if (Il2CppMethodInitialized_07547fdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fdc = '\x01';
  }
  pUVar1 = (__this->fields)._scrollRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (__this->fields)._scrollRect;
    if (pUVar1 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_05d79076;
    pUVar2 = (pUVar1->fields).m_Content;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (__this->fields)._scrollRect;
      if ((pUVar1 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
         (pUVar2 = (pUVar1->fields).m_Content, pUVar2 == (UnityEngine_RectTransform_o *)0x0))
      goto label_05d79076;
      UVar9 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
      uVar6 = totalRows - poolSize;
      if (0 < (int)uVar6) {
        fVar8 = 0.0;
        if (0.0 <= UVar9.fields.y) {
          fVar8 = UVar9.fields.y;
        }
        fVar7 = 1.0;
        if (1.0 <= stride) {
          fVar7 = stride;
        }
        if (Il2CppMethodInitialized_0753e7f6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e7f6 = '\x01';
        }
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar8 = floorf(fVar8 / fVar7);
        uVar4 = (int)fVar8 - 7;
        if (-1 < (int)uVar4) {
          if ((int)uVar4 < (int)uVar6) {
            uVar6 = uVar4;
          }
          if ((int)uVar6 < maxStart) {
            maxStart = uVar6;
          }
          uVar4 = 0;
          if (-1 < (int)uVar6) {
            uVar4 = maxStart;
          }
          goto label_05d79067;
        }
      }
      uVar4 = maxStart >> 0x1f & maxStart;
      goto label_05d79067;
    }
  }
  pUVar1 = (__this->fields)._scrollRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar4 = 0;
  if (!bVar3) {
label_05d79067:
    return uVar4;
  }
  pUVar1 = (__this->fields)._scrollRect;
  if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    fVar8 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(pUVar1,(MethodInfo *)0x0);
    iVar5 = UI_MapEditorHierarchyVirtualization__ComputeStartIndexFromNormalized(fVar8,maxStart,method_00);
    return iVar5;
  }
label_05d79076:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$RenderVirtualizedRows
// il2cpp: void UI_MapEditorHierarchyPanel__RenderVirtualizedRows (UI_MapEditorHierarchyPanel_o* __this, bool forceRebind, const MethodInfo* method);
// 0x5d74ba0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d74df4: jmp 0x5d74f53
// asm:   0x5d74f1d: nop dword ptr [rax]

void UI_MapEditorHierarchyPanel__RenderVirtualizedRows
               (UI_MapEditorHierarchyPanel_o *__this,bool forceRebind,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *pSVar1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int32_t iVar6;
  UnityEngine_GameObject_o *pUVar7;
  UI_MapEditorHierarchyPanel_RowData_o row;
  ulong uVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  uint uVar9;
  int iVar10;
  undefined7 in_register_00000031;
  MethodInfo *pMVar11;
  System_Collections_Generic_List_GameObject__o *pSVar12;
  MethodInfo *in_R8;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  pMVar11 = (MethodInfo *)CONCAT71(in_register_00000031,forceRebind);
  if (Il2CppMethodInitialized_07547fdd == '\0') {
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
    Il2CppMethodInitialized_07547fdd = '\x01';
  }
  UI_MapEditorHierarchyPanel__EnsureVirtualizationElements(__this,pMVar11);
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary_int__object___Clear
              (__this_00,
               (MethodInfo_4A0F8F0 *)MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_Clear);
    pSVar1 = (__this->fields)._rows;
    if (pSVar1 != (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0) {
      uVar9 = (pSVar1->fields)._size;
      uVar5 = UI_MapEditorHierarchyPanel__GetVirtualPoolSize(__this,uVar9,method_00);
      if ((int)uVar9 < (int)uVar5) {
        uVar5 = uVar9;
      }
      pMVar11 = (MethodInfo *)(ulong)uVar5;
      UI_MapEditorHierarchyPanel__EnsurePoolSize(__this,uVar5,method_01);
      if (uVar9 == 0) {
        pUVar2 = (__this->fields)._topSpacer;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          pUVar2 = (__this->fields)._topSpacer;
          if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05d74f53;
          (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                    (pUVar2,0.0,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
        }
        pUVar2 = (__this->fields)._bottomSpacer;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          pUVar2 = (__this->fields)._bottomSpacer;
          if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05d74f53;
          (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                    (pUVar2,0.0,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
        }
        pSVar12 = (__this->fields)._itemPool;
        if (pSVar12 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          iVar10 = 0;
          do {
            if ((pSVar12->fields)._size <= iVar10) {
              return;
            }
            pUVar7 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar12,iVar10,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
            if (pUVar7 == (UnityEngine_GameObject_o *)0x0) break;
            UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
            iVar10 = iVar10 + 1;
            pSVar12 = (__this->fields)._itemPool;
          } while (pSVar12 != (System_Collections_Generic_List_GameObject__o *)0x0);
        }
      }
      else {
        fVar14 = UI_MapEditorHierarchyPanel__GetVirtualStride(__this,pMVar11);
        iVar6 = 0;
        if (0 < (int)(uVar9 - uVar5)) {
          iVar6 = uVar9 - uVar5;
        }
        iVar6 = UI_MapEditorHierarchyPanel__GetVirtualStartIndex(__this,iVar6,uVar9,uVar5,fVar14,in_R8);
        uVar3 = uVar9 - iVar6;
        if ((int)uVar5 < (int)(uVar9 - iVar6)) {
          uVar3 = uVar5;
        }
        uVar8 = (ulong)uVar3;
        uVar5 = 1;
        if (1 < (int)uVar3) {
          uVar5 = uVar3;
        }
        pUVar2 = (__this->fields)._topSpacer;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          pUVar2 = (__this->fields)._topSpacer;
          if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05d74f53;
          fVar16 = 1.0;
          if (1.0 <= fVar14) {
            fVar16 = fVar14;
          }
          fVar15 = 0.0;
          if (0.0 <= (float)iVar6 * fVar16) {
            fVar15 = (float)iVar6 * fVar16;
          }
          (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                    (pUVar2,fVar15,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
        }
        pUVar2 = (__this->fields)._bottomSpacer;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          pUVar2 = (__this->fields)._bottomSpacer;
          if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05d74f53;
          fVar16 = 1.0;
          if (1.0 <= fVar14) {
            fVar16 = fVar14;
          }
          iVar13 = uVar9 - (iVar6 + uVar5);
          iVar10 = 0;
          if (0 < iVar13) {
            iVar10 = iVar13;
          }
          fVar14 = 0.0;
          if (0.0 <= (float)iVar10 * fVar16) {
            fVar14 = (float)iVar10 * fVar16;
          }
          (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                    (pUVar2,fVar14,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
        }
        pSVar12 = (__this->fields)._itemPool;
        if (pSVar12 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          uVar9 = 0;
          do {
            while( true ) {
              if ((pSVar12->fields)._size <= (int)uVar9) {
                return;
              }
              pUVar7 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar12,uVar9,
                                  (MethodInfo_395CF20 *)
                                  MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
              if (uVar5 <= uVar9) break;
              pSVar1 = (__this->fields)._rows;
              if (pSVar1 == (System_Collections_Generic_List_MapEditorHierarchyPanel_RowData__o *)0x0)
              goto label_05d74f53;
              row = System_Collections_Generic_List_MapEditorHierarchyPanel_RowData___get_Item
                              (pSVar1,iVar6 + uVar9,
                               (MethodInfo_3AAA990 *)
                               MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_get_Item
                              );
              UI_MapEditorHierarchyPanel__BindPooledItem(__this,pUVar7,row,(int32_t)uVar8,in_R8);
              uVar9 = uVar9 + 1;
              pSVar12 = (__this->fields)._itemPool;
              if (pSVar12 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05d74f53;
            }
            if (pUVar7 == (UnityEngine_GameObject_o *)0x0) break;
            UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
            uVar9 = uVar9 + 1;
            pSVar12 = (__this->fields)._itemPool;
          } while (pSVar12 != (System_Collections_Generic_List_GameObject__o *)0x0);
        }
      }
    }
  }
label_05d74f53:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$EnsureDragVisuals
// il2cpp: void UI_MapEditorHierarchyPanel__EnsureDragVisuals (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d734a0

void UI_MapEditorHierarchyPanel__EnsureDragVisuals(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_UI_Text_o **targetAddress;
  byte bVar3;
  UnityEngine_Object_o *pUVar4;
  UI_MapEditorMenu_o *__this_00;
  UI_ElementStyle_o *style;
  Il2CppType *pIVar5;
  bool bVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_RectTransform_o *pUVar9;
  UnityEngine_UI_LayoutElement_o *pUVar10;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_UI_Image_o *pUVar11;
  UnityEngine_Canvas_o *__this_02;
  UnityEngine_UI_GraphicRaycaster_o *__this_03;
  UnityEngine_UI_Text_o *pUVar12;
  UnityEngine_RectTransform_o *pUVar13;
  System_Type_array *pSVar14;
  System_Type_o *pSVar15;
  Il2CppObject *pIVar16;
  System_String_o *title;
  MethodInfo *pMVar17;
  UnityEngine_Color_o UVar18;
  UnityEngine_Color_o UVar19;
  UnityEngine_Color_o UVar20;
  UnityEngine_Color_o UVar21;
  
  if (Il2CppMethodInitialized_07547fde == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Hierarchy");
    il2cpp_codegen_initialize_runtime_metadata(&"HierarchyDragGhost");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"HierarchyRootDropOverlay");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"HierarchyInsertLine");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/DefaultButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"DropToRoot");
    Il2CppMethodInitialized_07547fde = '\x01';
  }
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._dragGhost;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    __this_00 = (__this->fields)._menu;
    if (__this_00 == (UI_MapEditorMenu_o *)0x0) goto label_05d74122;
    ppUVar1 = &(__this->fields)._dragGhost;
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    pUVar8 = UI_ElementFactory__InstantiateAndBind(pUVar7,"Prefabs/Elements/DefaultButton",(MethodInfo *)0x0);
    *ppUVar1 = pUVar8;
    Il2CppCodeGenWriteBarrier(ppUVar1);
    if ((UnityEngine_Object_o *)*ppUVar1 == (UnityEngine_Object_o *)0x0) goto label_05d74122;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)*ppUVar1,"HierarchyDragGhost",(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05d74122;
    pUVar9 = UnityEngine_GameObject__GetComponent_object_
                       (*ppUVar1,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    ppUVar2 = &(__this->fields)._dragGhostRect;
    (__this->fields)._dragGhostRect = pUVar9;
    Il2CppCodeGenWriteBarrier(ppUVar2);
    pUVar9 = (__this->fields)._dragGhostRect;
    if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) goto label_05d74122;
    UnityEngine_RectTransform__set_anchorMax(pUVar9,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchorMin(pUVar9,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
    if (*ppUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_05d74122;
    UnityEngine_RectTransform__set_pivot(*ppUVar2,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0)
    ;
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05d74122;
    pUVar10 = UnityEngine_GameObject__GetComponent_object_
                        (*ppUVar1,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    if (pUVar10 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05d74122;
    (*(pUVar10->klass->vtable)._28_set_ignoreLayout.methodPtr)
              (pUVar10,true,(pUVar10->klass->vtable)._28_set_ignoreLayout.method);
    if (*ppUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_05d74122;
    UnityEngine_RectTransform__set_sizeDelta
              (*ppUVar2,(UnityEngine_Vector2_o)0x41f00000435c0000,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05d74122;
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (*ppUVar1,(MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      if (__this_01 == (UnityEngine_UI_Button_o *)0x0) goto label_05d74122;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)__this_01,false,(MethodInfo *)0x0);
      UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this_01,0,(MethodInfo *)0x0);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) goto label_05d7381d;
    if (__this_01 == (UnityEngine_UI_Button_o *)0x0) goto label_05d74122;
    pUVar11 = (UnityEngine_UI_Image_o *)(__this_01->fields).m_TargetGraphic;
    if (pUVar11 == (UnityEngine_UI_Image_o *)0x0) {
label_05d7381d:
      if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05d74122;
      pUVar11 = UnityEngine_GameObject__GetComponentInChildren_object_
                          (*ppUVar1,(MethodInfo_353B8D0 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Image);
    }
    else {
      bVar3 = (TypeInfo_UnityEngine_UI_Image->_2).typeHierarchyDepth;
      if (((pUVar11->klass->_2).typeHierarchyDepth < bVar3) ||
         ((pUVar11->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_UI_Image
         )) goto label_05d7381d;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      if (pUVar11 == (UnityEngine_UI_Image_o *)0x0) goto label_05d74122;
      (*(pUVar11->klass->vtable)._25_set_raycastTarget.methodPtr)
                (pUVar11,false,(pUVar11->klass->vtable)._25_set_raycastTarget.method);
      UVar18.fields.b = 0.18;
      UVar18.fields.a = 0.75;
      UVar18.fields.r = 0.18;
      UVar18.fields.g = 0.18;
      (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                (pUVar11,UVar18,(pUVar11->klass->vtable)._23_set_color.method);
    }
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05d74122;
    __this_02 = UnityEngine_GameObject__AddComponent_object_
                          (*ppUVar1,(MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    if (__this_02 == (UnityEngine_Canvas_o *)0x0) goto label_05d74122;
    UnityEngine_Canvas__set_overrideSorting(__this_02,true,(MethodInfo *)0x0);
    UnityEngine_Canvas__set_sortingOrder(__this_02,0x7fff,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05d74122;
    __this_03 = UnityEngine_GameObject__AddComponent_object_
                          (*ppUVar1,(MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    if (__this_03 == (UnityEngine_UI_GraphicRaycaster_o *)0x0) goto label_05d74122;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_03,false,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05d74122;
    pUVar7 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05d74122;
    pUVar7 = UnityEngine_Transform__Find(pUVar7,"Text",(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05d74122;
    pUVar12 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar7,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    targetAddress = &(__this->fields)._dragGhostText;
    (__this->fields)._dragGhostText = pUVar12;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar12 = (__this->fields)._dragGhostText;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      pUVar12 = *targetAddress;
      if (pUVar12 == (UnityEngine_UI_Text_o *)0x0) goto label_05d74122;
      (*(pUVar12->klass->vtable)._25_set_raycastTarget.methodPtr)
                (pUVar12,false,(pUVar12->klass->vtable)._25_set_raycastTarget.method);
      pUVar12 = *targetAddress;
      if (pUVar12 == (UnityEngine_UI_Text_o *)0x0) goto label_05d74122;
      UVar19.fields.b = 1.0;
      UVar19.fields.a = 1.0;
      UVar19.fields.r = 1.0;
      UVar19.fields.g = 1.0;
      (*(pUVar12->klass->vtable)._23_set_color.methodPtr)
                (pUVar12,UVar19,(pUVar12->klass->vtable)._23_set_color.method);
    }
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05d74122;
    UnityEngine_GameObject__SetActive(*ppUVar1,false,(MethodInfo *)0x0);
  }
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._rootDropOverlay;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar17 = (MethodInfo *)0x0;
  bVar6 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pUVar9 = UI_MapEditorHierarchyPanel__GetViewportRect(__this,pMVar17);
    if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) {
      pUVar7 = (__this->fields).SinglePanel;
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05d74122;
      pUVar13 = (UnityEngine_RectTransform_o *)UnityEngine_Transform__get_parent(pUVar7,(MethodInfo *)0x0);
      pUVar9 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
        if (pUVar13->klass != TypeInfo_UnityEngine_RectTransform) goto label_05d7413b;
        pUVar9 = pUVar13;
      }
    }
    pSVar14 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
    pIVar5 = TypeRef_UnityEngine_RectTransform;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar15 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar5,(MethodInfo *)0x0);
    if (pSVar14 == (System_Type_array *)0x0) goto label_05d74122;
    if (pSVar15 != (System_Type_o *)0x0) {
      pIVar16 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar15,(((pSVar14->obj).klass)->_1).element_class);
      if (pIVar16 == (Il2CppObject *)0x0) goto label_05d7412c;
    }
    if ((int)pSVar14->max_length == 0) goto label_05d74127;
    pSVar14->m_Items[0] = pSVar15;
    Il2CppCodeGenWriteBarrier(pSVar14->m_Items);
    pSVar15 = System_Type__GetTypeFromHandle
                        ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if (pSVar15 != (System_Type_o *)0x0) {
      pIVar16 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar15,(((pSVar14->obj).klass)->_1).element_class);
      if (pIVar16 == (Il2CppObject *)0x0) goto label_05d7412c;
    }
    if ((pSVar14->max_length & 0xfffffffe) == 0) goto label_05d74127;
    ppUVar1 = &(__this->fields)._rootDropOverlay;
    pSVar14->m_Items[1] = pSVar15;
    Il2CppCodeGenWriteBarrier(pSVar14->m_Items + 1);
    pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(pUVar8,"HierarchyRootDropOverlay",pSVar14,(MethodInfo *)0x0);
    *ppUVar1 = pUVar8;
    Il2CppCodeGenWriteBarrier(ppUVar1);
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05d74122;
    pUVar7 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05d74122;
    UnityEngine_Transform__SetParent_692d510(pUVar7,(UnityEngine_Transform_o *)pUVar9,false,(MethodInfo *)0x0)
    ;
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05d74122;
    pUVar9 = UnityEngine_GameObject__GetComponent_object_
                       (*ppUVar1,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) goto label_05d74122;
    UnityEngine_RectTransform__set_anchorMin
              (pUVar9,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07542885 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_07542885 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (pUVar9,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (pUVar9,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (pUVar9,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05d74122;
    pUVar11 = UnityEngine_GameObject__GetComponent_object_
                        (*ppUVar1,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    if (pUVar11 == (UnityEngine_UI_Image_o *)0x0) goto label_05d74122;
    UVar20.fields.b = 0.15;
    UVar20.fields.a = 0.14;
    UVar20.fields.r = 0.95;
    UVar20.fields.g = 0.64;
    (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
              (pUVar11,UVar20,(pUVar11->klass->vtable)._23_set_color.method);
    (*(pUVar11->klass->vtable)._25_set_raycastTarget.methodPtr)
              (pUVar11,false,(pUVar11->klass->vtable)._25_set_raycastTarget.method);
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05d74122;
    pUVar7 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
    style = (__this->fields)._style;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    title = UI_UIManager__GetLocale
                      ("MapEditor","Hierarchy","DropToRoot",""
                       ,"",(MethodInfo *)0x0);
    pUVar8 = UI_ElementFactory__CreateDefaultLabel(pUVar7,style,title,0,1,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_05d74122;
    pUVar12 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar8,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    (__this->fields)._rootDropOverlayText = pUVar12;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._rootDropOverlayText);
    pUVar9 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar8,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) goto label_05d74122;
    UnityEngine_RectTransform__set_anchorMin
              (pUVar9,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchorMax
              (pUVar9,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot(pUVar9,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar9,(UnityEngine_Vector2_o)0xc0c0000000000000,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05d74122;
    UnityEngine_GameObject__SetActive(*ppUVar1,false,(MethodInfo *)0x0);
  }
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._insertLineIndicator;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar17 = (MethodInfo *)0x0;
  bVar6 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    return;
  }
  pUVar9 = UI_MapEditorHierarchyPanel__GetViewportRect(__this,pMVar17);
  if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) {
    pUVar7 = (__this->fields).SinglePanel;
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05d74122;
    pUVar13 = (UnityEngine_RectTransform_o *)UnityEngine_Transform__get_parent(pUVar7,(MethodInfo *)0x0);
    pUVar9 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
      if (pUVar13->klass != TypeInfo_UnityEngine_RectTransform) {
label_05d7413b:
        il2cpp_codegen_raise_invalid_cast_exception(pUVar13);
      }
      pUVar9 = pUVar13;
    }
  }
  pSVar14 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  pIVar5 = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar15 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar5,(MethodInfo *)0x0);
  if (pSVar14 == (System_Type_array *)0x0) {
label_05d74122:
    ThrowNullReferenceException();
  }
  if (pSVar15 != (System_Type_o *)0x0) {
    pIVar16 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar15,(((pSVar14->obj).klass)->_1).element_class);
    if (pIVar16 == (Il2CppObject *)0x0) goto label_05d7412c;
  }
  if ((int)pSVar14->max_length != 0) {
    pSVar14->m_Items[0] = pSVar15;
    Il2CppCodeGenWriteBarrier(pSVar14->m_Items);
    pSVar15 = System_Type__GetTypeFromHandle
                        ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if (pSVar15 != (System_Type_o *)0x0) {
      pIVar16 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar15,(((pSVar14->obj).klass)->_1).element_class);
      if (pIVar16 == (Il2CppObject *)0x0) {
label_05d7412c:
        pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
      }
    }
    if ((pSVar14->max_length & 0xfffffffe) != 0) {
      ppUVar1 = &(__this->fields)._insertLineIndicator;
      pSVar14->m_Items[1] = pSVar15;
      Il2CppCodeGenWriteBarrier(pSVar14->m_Items + 1);
      pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(pUVar8,"HierarchyInsertLine",pSVar14,(MethodInfo *)0x0);
      *ppUVar1 = pUVar8;
      Il2CppCodeGenWriteBarrier(ppUVar1);
      if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar7 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510
                    (pUVar7,(UnityEngine_Transform_o *)pUVar9,false,(MethodInfo *)0x0);
          if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
            pUVar9 = UnityEngine_GameObject__GetComponent_object_
                               (*ppUVar1,(MethodInfo_353B730 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            ppUVar2 = &(__this->fields)._insertLineRect;
            (__this->fields)._insertLineRect = pUVar9;
            Il2CppCodeGenWriteBarrier(ppUVar2);
            pUVar9 = (__this->fields)._insertLineRect;
            if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar9,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMax
                          (*ppUVar2,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0);
                if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_pivot
                            (*ppUVar2,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                  if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_sizeDelta
                              (*ppUVar2,(UnityEngine_Vector2_o)0x4000000000000000,(MethodInfo *)0x0);
                    if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                          (*ppUVar1,(MethodInfo_353B730 *)
                                                    MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                      if (pUVar11 != (UnityEngine_UI_Image_o *)0x0) {
                        UVar21.fields.b = 0.15;
                        UVar21.fields.a = 0.9;
                        UVar21.fields.r = 0.95;
                        UVar21.fields.g = 0.64;
                        (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                                  (pUVar11,UVar21,(pUVar11->klass->vtable)._23_set_color.method);
                        (*(pUVar11->klass->vtable)._25_set_raycastTarget.methodPtr)
                                  (pUVar11,false,(pUVar11->klass->vtable)._25_set_raycastTarget.method);
                        if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                          UnityEngine_GameObject__SetActive(*ppUVar1,false,(MethodInfo *)0x0);
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
      goto label_05d74122;
    }
  }
label_05d74127:
  ThrowIndexOutOfRangeException();
}


// UI.MapEditorHierarchyPanel$$EnsureContextMenu
// il2cpp: void UI_MapEditorHierarchyPanel__EnsureContextMenu (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d792c0

void UI_MapEditorHierarchyPanel__EnsureContextMenu(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  System_String_o *pSVar2;
  UI_MapEditorContextMenu_o *__this_01;
  
  if (Il2CppMethodInitialized_07547fdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorContextMenu);
    Il2CppMethodInitialized_07547fdf = '\x01';
  }
  if ((__this->fields)._contextMenu != (UI_MapEditorContextMenu_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields)._menu;
  if (__this_00 == (UI_MapEditorMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorContextMenu);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields)._parent = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._parent);
  (__this_01->fields)._themePanel = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._themePanel);
  (__this->fields)._contextMenu = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._contextMenu);
  return;
}


// UI.MapEditorHierarchyPanel$$OnItemRightClick
// il2cpp: void UI_MapEditorHierarchyPanel__OnItemRightClick (UI_MapEditorHierarchyPanel_o* __this, int32_t id, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d79390

void UI_MapEditorHierarchyPanel__OnItemRightClick
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UI_MapEditorMenu_o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  GameManagers_MapEditorGameManager_o *pGVar4;
  System_Collections_Generic_HashSet_MapObject__o *source;
  UI_MapEditorContextMenu_o *pUVar5;
  UI_MapEditorContextMenu_Item_array *pUVar6;
  UI_MapEditorContextMenu_Item_o item;
  UI_MapEditorContextMenu_Item_o item_00;
  UI_MapEditorContextMenu_Item_o item_01;
  UI_MapEditorContextMenu_Item_o item_02;
  UI_MapEditorContextMenu_Item_o item_03;
  UI_MapEditorContextMenu_Item_o item_04;
  UI_MapEditorContextMenu_Item_o item_05;
  UI_MapEditorContextMenu_Item_o *pUVar7;
  bool bVar8;
  UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o *__this_01;
  System_Func_MapObject__bool__o *__this_02;
  Map_MapObject_o *obj;
  System_Collections_Generic_List_MapEditorContextMenu_Item__o *__this_03;
  System_String_o *pSVar9;
  System_Action_o *pSVar10;
  MethodInfo *pMVar11;
  long lVar12;
  System_String_o *pSStack_e8;
  System_Action_o *pSStack_e0;
  undefined8 uStack_d8;
  System_String_o *pSStack_d0;
  System_Action_o *pSStack_c8;
  undefined8 uStack_c0;
  System_String_o *pSStack_b8;
  System_Action_o *pSStack_b0;
  undefined8 uStack_a8;
  System_String_o *pSStack_a0;
  System_Action_o *pSStack_98;
  undefined8 uStack_90;
  System_String_o *pSStack_88;
  System_Action_o *pSStack_80;
  undefined8 uStack_78;
  System_String_o *pSStack_70;
  System_Action_o *pSStack_68;
  undefined8 uStack_60;
  System_String_o *pSStack_58;
  System_Action_o *pSStack_50;
  undefined8 uStack_48;
  UI_MapEditorContextMenu_o *pUStack_40;
  UnityEngine_EventSystems_PointerEventData_o *pUStack_38;
  
  if (Il2CppMethodInitialized_07547fe0 == '\0') {
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
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__4);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__5);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__6);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__7);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Hierarchy");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetOrigin");
    il2cpp_codegen_initialize_runtime_metadata(&"PasteAsChild");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Paste");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorSettings");
    il2cpp_codegen_initialize_runtime_metadata(&"Cut");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateEmptyParent");
    Il2CppMethodInitialized_07547fe0 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_MapEditorHierarchyPanel___c__DisplayClass107_0_o *)0x0) {
    (__this_01->fields).id = id;
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    __this_00 = (__this->fields)._menu;
    if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
      bVar8 = UI_MapEditorMenu__IsPopupActive(__this_00,(MethodInfo *)0x0);
      if (bVar8) {
        return;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        bVar8 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                          (pSVar3,(__this_01->fields).id,
                           (MethodInfo_4A0F950 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        if (!bVar8) {
          return;
        }
        pGVar4 = (__this->fields)._gameManager;
        if (pGVar4 != (GameManagers_MapEditorGameManager_o *)0x0) {
          source = (pGVar4->fields).SelectedObjects;
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
          System_Func_object__bool____ctor
                    ((System_Func_object__bool__o *)__this_02,(Il2CppObject *)__this_01,
                     (intptr_t)
                     MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__0,
                     (MethodInfo_4F19300 *)0x0);
          bVar8 = System_Linq_Enumerable__Any_object__34dfce0
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__bool__o *)__this_02,
                             (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_MapObject);
          if (!bVar8) {
            pGVar4 = (__this->fields)._gameManager;
            if (pGVar4 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05d79ee1;
            GameManagers_MapEditorGameManager__DeselectAll(pGVar4,(MethodInfo *)0x0);
            pGVar4 = (__this->fields)._gameManager;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if ((pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
               (obj = System_Collections_Generic_Dictionary_int__object___get_Item
                                (pSVar3,(__this_01->fields).id,
                                 (MethodInfo_4A0F690 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
               pGVar4 == (GameManagers_MapEditorGameManager_o *)0x0)) goto label_05d79ee1;
            GameManagers_MapEditorGameManager__SelectObject(pGVar4,obj,(MethodInfo *)0x0);
            pGVar4 = (__this->fields)._gameManager;
            if (pGVar4 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05d79ee1;
            __this_02 = (System_Func_MapObject__bool__o *)0x0;
            GameManagers_MapEditorGameManager__OnSelectionChange(pGVar4,false,(MethodInfo *)0x0);
          }
          pUStack_38 = eventData;
          UI_MapEditorHierarchyPanel__EnsureContextMenu(__this,(MethodInfo *)__this_02);
          (__this->fields)._contextTargetId = (__this_01->fields).id;
          pUVar5 = (__this->fields)._contextMenu;
          __this_03 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_List_MapEditorContextMenu_Item);
          System_Collections_Generic_List_MapEditorContextMenu_Item____ctor
                    (__this_03,
                     (MethodInfo_3AA6D40 *)
                     MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_ctor);
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar9 = UI_UIManager__GetLocaleCommon("Copy",(MethodInfo *)0x0);
          pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (pSVar10,(Il2CppObject *)__this_01,
                     (intptr_t)
                     MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__1,
                     (MethodInfo *)0x0);
          pSStack_50 = (System_Action_o *)0x0;
          uStack_48 = 0;
          pSStack_58 = pSVar9;
          Il2CppCodeGenWriteBarrier(&pSStack_58);
          pSStack_50 = pSVar10;
          Il2CppCodeGenWriteBarrier(&pSStack_50);
          pMVar11 = MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add;
          uStack_48 = CONCAT62(uStack_48._2_6_,1);
          if (__this_03 != (System_Collections_Generic_List_MapEditorContextMenu_Item__o *)0x0) {
            piVar1 = &(__this_03->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar6 = (__this_03->fields)._items;
            if (pUVar6 != (UI_MapEditorContextMenu_Item_array *)0x0) {
              uVar2 = (__this_03->fields)._size;
              pUStack_40 = pUVar5;
              if (uVar2 < (uint)pUVar6->max_length) {
                (__this_03->fields)._size = uVar2 + 1;
                pUVar7 = pUVar6->m_Items + (int)uVar2;
                uStack_48._0_1_ = (undefined1)1;
                uStack_48._1_1_ = (undefined1)(1 >> 8);
                (pUVar7->fields).Enabled = (bool)(undefined1)uStack_48;
                (pUVar7->fields).SeparatorBefore = (bool)uStack_48._1_1_;
                *(undefined6 *)&(pUVar7->fields).field_0x12 = uStack_48._2_6_;
                pUVar6->m_Items[(int)uVar2].fields.Label = pSStack_58;
                pUVar6->m_Items[(int)uVar2].fields.Action = pSStack_50;
                Il2CppCodeGenWriteBarrier((void **)(pUVar6->m_Items + (int)uVar2));
              }
              else {
                item.fields.Action = pSStack_50;
                item.fields.Label = pSStack_58;
                uStack_48._0_1_ = (undefined1)1;
                uStack_48._1_1_ = (undefined1)(1 >> 8);
                item.fields.Enabled = (bool)(undefined1)uStack_48;
                item.fields.SeparatorBefore = (bool)uStack_48._1_1_;
                item.fields._18_6_ = uStack_48._2_6_;
                System_Collections_Generic_List_MapEditorContextMenu_Item___AddWithResize
                          (__this_03,item,(MethodInfo_3AA76F0 *)pMVar11->klass->rgctx_data[0xe].method);
              }
              pSVar9 = UI_UIManager__GetLocale
                                 ("MapEditorSettings","Keybinds","Cut",
                                  "","",(MethodInfo *)0x0);
              pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
              System_Action___ctor
                        (pSVar10,(Il2CppObject *)__this_01,
                         (intptr_t)
                         MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__2,
                         (MethodInfo *)0x0);
              pSStack_68 = (System_Action_o *)0x0;
              uStack_60 = 0;
              pSStack_70 = pSVar9;
              Il2CppCodeGenWriteBarrier(&pSStack_70);
              pSStack_68 = pSVar10;
              Il2CppCodeGenWriteBarrier(&pSStack_68);
              pMVar11 = MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add;
              uStack_60 = CONCAT62(uStack_60._2_6_,1);
              piVar1 = &(__this_03->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar6 = (__this_03->fields)._items;
              if (pUVar6 != (UI_MapEditorContextMenu_Item_array *)0x0) {
                uVar2 = (__this_03->fields)._size;
                if (uVar2 < (uint)pUVar6->max_length) {
                  (__this_03->fields)._size = uVar2 + 1;
                  pUVar7 = pUVar6->m_Items + (int)uVar2;
                  uStack_60._0_1_ = (undefined1)1;
                  uStack_60._1_1_ = (undefined1)(1 >> 8);
                  (pUVar7->fields).Enabled = (bool)(undefined1)uStack_60;
                  (pUVar7->fields).SeparatorBefore = (bool)uStack_60._1_1_;
                  *(undefined6 *)&(pUVar7->fields).field_0x12 = uStack_60._2_6_;
                  pUVar6->m_Items[(int)uVar2].fields.Label = pSStack_70;
                  pUVar6->m_Items[(int)uVar2].fields.Action = pSStack_68;
                  Il2CppCodeGenWriteBarrier((void **)(pUVar6->m_Items + (int)uVar2));
                }
                else {
                  item_00.fields.Action = pSStack_68;
                  item_00.fields.Label = pSStack_70;
                  uStack_60._0_1_ = (undefined1)1;
                  uStack_60._1_1_ = (undefined1)(1 >> 8);
                  item_00.fields.Enabled = (bool)(undefined1)uStack_60;
                  item_00.fields.SeparatorBefore = (bool)uStack_60._1_1_;
                  item_00.fields._18_6_ = uStack_60._2_6_;
                  System_Collections_Generic_List_MapEditorContextMenu_Item___AddWithResize
                            (__this_03,item_00,(MethodInfo_3AA76F0 *)pMVar11->klass->rgctx_data[0xe].method);
                }
                pSVar9 = UI_UIManager__GetLocale
                                   ("MapEditorSettings","Keybinds","Paste",
                                    "","",(MethodInfo *)0x0);
                pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                System_Action___ctor
                          (pSVar10,(Il2CppObject *)__this_01,
                           (intptr_t)
                           MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__3,
                           (MethodInfo *)0x0);
                pSStack_80 = (System_Action_o *)0x0;
                uStack_78 = 0;
                pSStack_88 = pSVar9;
                Il2CppCodeGenWriteBarrier(&pSStack_88);
                pSStack_80 = pSVar10;
                Il2CppCodeGenWriteBarrier(&pSStack_80);
                pMVar11 = MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add;
                uStack_78 = CONCAT62(uStack_78._2_6_,1);
                piVar1 = &(__this_03->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar6 = (__this_03->fields)._items;
                if (pUVar6 != (UI_MapEditorContextMenu_Item_array *)0x0) {
                  uVar2 = (__this_03->fields)._size;
                  if (uVar2 < (uint)pUVar6->max_length) {
                    (__this_03->fields)._size = uVar2 + 1;
                    pUVar7 = pUVar6->m_Items + (int)uVar2;
                    uStack_78._0_1_ = (undefined1)1;
                    uStack_78._1_1_ = (undefined1)(1 >> 8);
                    (pUVar7->fields).Enabled = (bool)(undefined1)uStack_78;
                    (pUVar7->fields).SeparatorBefore = (bool)uStack_78._1_1_;
                    *(undefined6 *)&(pUVar7->fields).field_0x12 = uStack_78._2_6_;
                    pUVar6->m_Items[(int)uVar2].fields.Label = pSStack_88;
                    pUVar6->m_Items[(int)uVar2].fields.Action = pSStack_80;
                    Il2CppCodeGenWriteBarrier((void **)(pUVar6->m_Items + (int)uVar2));
                  }
                  else {
                    item_01.fields.Action = pSStack_80;
                    item_01.fields.Label = pSStack_88;
                    uStack_78._0_1_ = (undefined1)1;
                    uStack_78._1_1_ = (undefined1)(1 >> 8);
                    item_01.fields.Enabled = (bool)(undefined1)uStack_78;
                    item_01.fields.SeparatorBefore = (bool)uStack_78._1_1_;
                    item_01.fields._18_6_ = uStack_78._2_6_;
                    System_Collections_Generic_List_MapEditorContextMenu_Item___AddWithResize
                              (__this_03,item_01,(MethodInfo_3AA76F0 *)pMVar11->klass->rgctx_data[0xe].method)
                    ;
                  }
                  pSVar9 = UI_UIManager__GetLocale
                                     ("MapEditor","Hierarchy","PasteAsChild",
                                      "","",(MethodInfo *)0x0);
                  pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                  System_Action___ctor
                            (pSVar10,(Il2CppObject *)__this_01,
                             (intptr_t)
                             MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__4,
                             (MethodInfo *)0x0);
                  pSStack_98 = (System_Action_o *)0x0;
                  uStack_90 = 0;
                  pSStack_a0 = pSVar9;
                  Il2CppCodeGenWriteBarrier(&pSStack_a0);
                  pSStack_98 = pSVar10;
                  Il2CppCodeGenWriteBarrier(&pSStack_98);
                  pMVar11 = MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add;
                  uStack_90 = CONCAT62(uStack_90._2_6_,1);
                  piVar1 = &(__this_03->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar6 = (__this_03->fields)._items;
                  if (pUVar6 != (UI_MapEditorContextMenu_Item_array *)0x0) {
                    uVar2 = (__this_03->fields)._size;
                    if (uVar2 < (uint)pUVar6->max_length) {
                      (__this_03->fields)._size = uVar2 + 1;
                      pUVar7 = pUVar6->m_Items + (int)uVar2;
                      uStack_90._0_1_ = (undefined1)1;
                      uStack_90._1_1_ = (undefined1)(1 >> 8);
                      (pUVar7->fields).Enabled = (bool)(undefined1)uStack_90;
                      (pUVar7->fields).SeparatorBefore = (bool)uStack_90._1_1_;
                      *(undefined6 *)&(pUVar7->fields).field_0x12 = uStack_90._2_6_;
                      pUVar6->m_Items[(int)uVar2].fields.Label = pSStack_a0;
                      pUVar6->m_Items[(int)uVar2].fields.Action = pSStack_98;
                      Il2CppCodeGenWriteBarrier((void **)(pUVar6->m_Items + (int)uVar2));
                    }
                    else {
                      item_02.fields.Action = pSStack_98;
                      item_02.fields.Label = pSStack_a0;
                      uStack_90._0_1_ = (undefined1)1;
                      uStack_90._1_1_ = (undefined1)(1 >> 8);
                      item_02.fields.Enabled = (bool)(undefined1)uStack_90;
                      item_02.fields.SeparatorBefore = (bool)uStack_90._1_1_;
                      item_02.fields._18_6_ = uStack_90._2_6_;
                      System_Collections_Generic_List_MapEditorContextMenu_Item___AddWithResize
                                (__this_03,item_02,
                                 (MethodInfo_3AA76F0 *)pMVar11->klass->rgctx_data[0xe].method);
                    }
                    pSVar9 = UI_UIManager__GetLocale
                                       ("MapEditor","Hierarchy","CreateEmptyParent",
                                        "","",(MethodInfo *)0x0);
                    pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                    System_Action___ctor
                              (pSVar10,(Il2CppObject *)__this_01,
                               (intptr_t)
                               MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__5
                               ,(MethodInfo *)0x0);
                    pSStack_b0 = (System_Action_o *)0x0;
                    uStack_a8 = 0;
                    pSStack_b8 = pSVar9;
                    Il2CppCodeGenWriteBarrier(&pSStack_b8);
                    pSStack_b0 = pSVar10;
                    Il2CppCodeGenWriteBarrier(&pSStack_b0);
                    pMVar11 = MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add;
                    uStack_a8 = CONCAT62(uStack_a8._2_6_,1);
                    piVar1 = &(__this_03->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar6 = (__this_03->fields)._items;
                    if (pUVar6 != (UI_MapEditorContextMenu_Item_array *)0x0) {
                      uVar2 = (__this_03->fields)._size;
                      if (uVar2 < (uint)pUVar6->max_length) {
                        (__this_03->fields)._size = uVar2 + 1;
                        pUVar7 = pUVar6->m_Items + (int)uVar2;
                        uStack_a8._0_1_ = (undefined1)1;
                        uStack_a8._1_1_ = (undefined1)(1 >> 8);
                        (pUVar7->fields).Enabled = (bool)(undefined1)uStack_a8;
                        (pUVar7->fields).SeparatorBefore = (bool)uStack_a8._1_1_;
                        *(undefined6 *)&(pUVar7->fields).field_0x12 = uStack_a8._2_6_;
                        pUVar6->m_Items[(int)uVar2].fields.Label = pSStack_b8;
                        pUVar6->m_Items[(int)uVar2].fields.Action = pSStack_b0;
                        Il2CppCodeGenWriteBarrier((void **)(pUVar6->m_Items + (int)uVar2));
                      }
                      else {
                        item_03.fields.Action = pSStack_b0;
                        item_03.fields.Label = pSStack_b8;
                        uStack_a8._0_1_ = (undefined1)1;
                        uStack_a8._1_1_ = (undefined1)(1 >> 8);
                        item_03.fields.Enabled = (bool)(undefined1)uStack_a8;
                        item_03.fields.SeparatorBefore = (bool)uStack_a8._1_1_;
                        item_03.fields._18_6_ = uStack_a8._2_6_;
                        System_Collections_Generic_List_MapEditorContextMenu_Item___AddWithResize
                                  (__this_03,item_03,
                                   (MethodInfo_3AA76F0 *)pMVar11->klass->rgctx_data[0xe].method);
                      }
                      pSVar9 = UI_UIManager__GetLocale
                                         ("MapEditor","Hierarchy","ResetOrigin",
                                          "","",(MethodInfo *)0x0);
                      pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                      System_Action___ctor
                                (pSVar10,(Il2CppObject *)__this_01,
                                 (intptr_t)
                                 MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__6
                                 ,(MethodInfo *)0x0);
                      pSStack_c8 = (System_Action_o *)0x0;
                      uStack_c0 = 0;
                      pSStack_d0 = pSVar9;
                      Il2CppCodeGenWriteBarrier(&pSStack_d0);
                      pSStack_c8 = pSVar10;
                      Il2CppCodeGenWriteBarrier(&pSStack_c8);
                      pUVar5 = pUStack_40;
                      pMVar11 = MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add;
                      uStack_c0 = CONCAT62(uStack_c0._2_6_,1);
                      piVar1 = &(__this_03->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pUVar6 = (__this_03->fields)._items;
                      if (pUVar6 != (UI_MapEditorContextMenu_Item_array *)0x0) {
                        uVar2 = (__this_03->fields)._size;
                        if (uVar2 < (uint)pUVar6->max_length) {
                          (__this_03->fields)._size = uVar2 + 1;
                          pUVar7 = pUVar6->m_Items + (int)uVar2;
                          uStack_c0._0_1_ = (undefined1)1;
                          uStack_c0._1_1_ = (undefined1)(1 >> 8);
                          (pUVar7->fields).Enabled = (bool)(undefined1)uStack_c0;
                          (pUVar7->fields).SeparatorBefore = (bool)uStack_c0._1_1_;
                          *(undefined6 *)&(pUVar7->fields).field_0x12 = uStack_c0._2_6_;
                          pUVar6->m_Items[(int)uVar2].fields.Label = pSStack_d0;
                          pUVar6->m_Items[(int)uVar2].fields.Action = pSStack_c8;
                          Il2CppCodeGenWriteBarrier((void **)(pUVar6->m_Items + (int)uVar2));
                        }
                        else {
                          item_04.fields.Action = pSStack_c8;
                          item_04.fields.Label = pSStack_d0;
                          uStack_c0._0_1_ = (undefined1)1;
                          uStack_c0._1_1_ = (undefined1)(1 >> 8);
                          item_04.fields.Enabled = (bool)(undefined1)uStack_c0;
                          item_04.fields.SeparatorBefore = (bool)uStack_c0._1_1_;
                          item_04.fields._18_6_ = uStack_c0._2_6_;
                          System_Collections_Generic_List_MapEditorContextMenu_Item___AddWithResize
                                    (__this_03,item_04,
                                     (MethodInfo_3AA76F0 *)pMVar11->klass->rgctx_data[0xe].method);
                        }
                        pSVar9 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
                        pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                        System_Action___ctor
                                  (pSVar10,(Il2CppObject *)__this_01,
                                   (intptr_t)
                                   MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__7
                                   ,(MethodInfo *)0x0);
                        pSStack_e0 = (System_Action_o *)0x0;
                        uStack_d8 = 0;
                        pSStack_e8 = pSVar9;
                        Il2CppCodeGenWriteBarrier(&pSStack_e8);
                        pSStack_e0 = pSVar10;
                        Il2CppCodeGenWriteBarrier(&pSStack_e0);
                        pMVar11 = MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add;
                        uStack_d8 = CONCAT62(uStack_d8._2_6_,0x101);
                        piVar1 = &(__this_03->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pUVar6 = (__this_03->fields)._items;
                        if (pUVar6 != (UI_MapEditorContextMenu_Item_array *)0x0) {
                          uVar2 = (__this_03->fields)._size;
                          lVar12 = (long)(int)uVar2;
                          if (uVar2 < (uint)pUVar6->max_length) {
                            (__this_03->fields)._size = uVar2 + 1;
                            pMVar11 = (MethodInfo *)(lVar12 * 3);
                            pUVar7 = pUVar6->m_Items + lVar12;
                            uStack_d8._0_1_ = (undefined1)0x101;
                            uStack_d8._1_1_ = (undefined1)(0x101 >> 8);
                            (pUVar7->fields).Enabled = (bool)(undefined1)uStack_d8;
                            (pUVar7->fields).SeparatorBefore = (bool)uStack_d8._1_1_;
                            *(undefined6 *)&(pUVar7->fields).field_0x12 = uStack_d8._2_6_;
                            pUVar6->m_Items[lVar12].fields.Label = pSStack_e8;
                            pUVar6->m_Items[lVar12].fields.Action = pSStack_e0;
                            Il2CppCodeGenWriteBarrier((void **)(pUVar6->m_Items + lVar12));
                          }
                          else {
                            item_05.fields.Action = pSStack_e0;
                            item_05.fields.Label = pSStack_e8;
                            uStack_d8._0_1_ = (undefined1)0x101;
                            uStack_d8._1_1_ = (undefined1)(0x101 >> 8);
                            item_05.fields.Enabled = (bool)(undefined1)uStack_d8;
                            item_05.fields.SeparatorBefore = (bool)uStack_d8._1_1_;
                            item_05.fields._18_6_ = uStack_d8._2_6_;
                            System_Collections_Generic_List_MapEditorContextMenu_Item___AddWithResize
                                      (__this_03,item_05,
                                       (MethodInfo_3AA76F0 *)pMVar11->klass->rgctx_data[0xe].method);
                          }
                          if (pUVar5 != (UI_MapEditorContextMenu_o *)0x0) {
                            UI_MapEditorContextMenu__Show
                                      (pUVar5,pUStack_38,
                                       (System_Collections_Generic_IList_MapEditorContextMenu_Item__o *)
                                       __this_03,pMVar11);
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
label_05d79ee1:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$HideContextMenu
// il2cpp: void UI_MapEditorHierarchyPanel__HideContextMenu (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d79f00

void UI_MapEditorHierarchyPanel__HideContextMenu(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorContextMenu_o *pUVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  
  pUVar1 = (__this->fields)._contextMenu;
  if (pUVar1 != (UI_MapEditorContextMenu_o *)0x0) {
    if (Il2CppMethodInitialized_07547fa1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547fa1 = '\x01';
    }
    x = (UnityEngine_Object_o *)(pUVar1->fields)._root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      __this_00 = (pUVar1->fields)._root;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    }
  }
  (__this->fields)._contextTargetId = -1;
  return;
}


// UI.MapEditorHierarchyPanel$$GetOrCreateRowDropOverlay
// il2cpp: UnityEngine_GameObject_o* UI_MapEditorHierarchyPanel__GetOrCreateRowDropOverlay (UI_MapEditorHierarchyPanel_o* __this, UnityEngine_GameObject_o* row, const MethodInfo* method);
// 0x5d77b00

UnityEngine_GameObject_o *
UI_MapEditorHierarchyPanel__GetOrCreateRowDropOverlay
          (UI_MapEditorHierarchyPanel_o *__this,UnityEngine_GameObject_o *row,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_Type_array *components;
  System_Type_o *pSVar4;
  Il2CppObject *pIVar5;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_UI_LayoutElement_o *pUVar7;
  UnityEngine_Color_o UVar8;
  
  if (Il2CppMethodInitialized_07547fe1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"DropOverlay");
    Il2CppMethodInitialized_07547fe1 = '\x01';
  }
  if (row == (UnityEngine_GameObject_o *)0x0) {
label_05d77eee:
    ThrowNullReferenceException();
  }
  pUVar2 = UnityEngine_GameObject__get_transform(row,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05d77eee;
  pUVar2 = UnityEngine_Transform__Find(pUVar2,"DropOverlay",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      return pUVar3;
    }
    goto label_05d77eee;
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar4 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_05d77eee;
  if (pSVar4 != (System_Type_o *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05d77ef8;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar4;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar4 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) {
label_05d77ef8:
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar4;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(pUVar3,"DropOverlay",components,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
        parent = UnityEngine_GameObject__get_transform(row,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(pUVar2,parent,false,(MethodInfo *)0x0);
          pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetAsLastSibling(pUVar2,(MethodInfo *)0x0);
            __this_00 = UnityEngine_GameObject__GetComponent_object_
                                  (pUVar3,(MethodInfo_353B730 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (__this_00,
                         (UnityEngine_Vector2_o)
                         (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_07542885 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_07542885 = '\x01';
              }
              UnityEngine_RectTransform__set_anchorMax
                        (__this_00,
                         (UnityEngine_Vector2_o)
                         (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_0753ecc8 = '\x01';
              }
              UnityEngine_RectTransform__set_offsetMin
                        (__this_00,
                         (UnityEngine_Vector2_o)
                         (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_0753ecc8 = '\x01';
              }
              UnityEngine_RectTransform__set_offsetMax
                        (__this_00,
                         (UnityEngine_Vector2_o)
                         (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
              pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                 (pUVar3,(MethodInfo_353B730 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_Image);
              if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                UVar8.fields.b = 0.15;
                UVar8.fields.a = 0.24;
                UVar8.fields.r = 0.95;
                UVar8.fields.g = 0.64;
                (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                          (pUVar6,UVar8,(pUVar6->klass->vtable)._23_set_color.method);
                (*(pUVar6->klass->vtable)._25_set_raycastTarget.methodPtr)
                          (pUVar6,false,(pUVar6->klass->vtable)._25_set_raycastTarget.method);
                pUVar7 = UnityEngine_GameObject__AddComponent_object_
                                   (pUVar3,(MethodInfo_353B6A0 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
                if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                  (*(pUVar7->klass->vtable)._28_set_ignoreLayout.methodPtr)
                            (pUVar7,true,(pUVar7->klass->vtable)._28_set_ignoreLayout.method);
                  UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
                  return pUVar3;
                }
              }
            }
          }
        }
      }
      goto label_05d77eee;
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.MapEditorHierarchyPanel$$RefreshDropIndicators
// il2cpp: void UI_MapEditorHierarchyPanel__RefreshDropIndicators (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d79f90
// eh: try 0x5d7a0d4..0x5d7a27f -> pad 0x5d7a28e (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d7a2a6..0x5d7a2ab -> pad 0x5d7a2d0 cleanup
// eh: try 0x5d7a2d3..0x5d7a2dd -> pad 0x5d7a2e5 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7a0cc: nop dword ptr [rax]
// asm:   0x5d7a20c: jmp 0x5d7a18c
// asm:   0x5d7a284: jmp 0x5d7a28e
// asm:   0x5d7a286: jmp 0x5d7a28e
// asm:   0x5d7a288: jmp 0x5d7a28e
// asm:   0x5d7a28a: jmp 0x5d7a28e
// asm:   0x5d7a28c: jmp 0x5d7a28e
// asm:   0x5d7a28e: mov rbx, rax
// asm:   0x5d7a291: cmp edx, 1
// asm:   0x5d7a294: jne 0x5d7a2d3
// asm:   0x5d7a296: mov rdi, rbx
// asm:   0x5d7a299: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d7a29e: mov rbx, qword ptr [rax]
// asm:   0x5d7a2a1: mov qword ptr [rsp + 0x40], rbx
// asm:   0x5d7a2a6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d7a2ab: lea rax, [rip + 0x15155f6]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_Dispose
// asm:   0x5d7a2b2: mov rsi, qword ptr [rax]
// asm:   0x5d7a2b5: lea rdi, [rsp + 0x10]
// asm:   0x5d7a2ba: call 0x4da11d0  ; System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose()
// asm:   0x5d7a2bf: test rbx, rbx
// asm:   0x5d7a2c2: je 0x5d7a156
// asm:   0x5d7a2c8: mov rdi, rbx
// asm:   0x5d7a2cb: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d7a2d0: mov rbx, rax
// asm:   0x5d7a2d3: lea rdi, [rsp + 0x40]
// asm:   0x5d7a2d8: call 0x2fdd3c0  ; il2cpp_runtime_helper_02fdd3c0()
// asm:   0x5d7a2dd: mov rdi, rbx
// asm:   0x5d7a2e0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d7a2e5: mov rdi, rax
// asm:   0x5d7a2e8: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorHierarchyPanel__RefreshDropIndicators
               (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  int32_t key;
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  UnityEngine_GameObject_o *pUVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  UnityEngine_Object_o *pUVar6;
  int iVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UI_MapEditorHierarchyPanel_o *__this_00;
  undefined1 auStack_88 [8];
  UI_MapEditorHierarchyPanel_o *pUStack_80;
  UnityEngine_GameObject_o *pUStack_78;
  System_Threading_CancellationTokenSource_o *pSStack_70;
  System_Collections_Generic_Dictionary_string__Type__o *pSStack_68;
  undefined1 auStack_58 [16];
  UnityEngine_GameObject_o *pUStack_48;
  System_Threading_CancellationTokenSource_o *pSStack_40;
  System_Collections_Generic_Dictionary_string__Type__o *pSStack_38;
  
  if (Il2CppMethodInitialized_07547fe2 == '\0') {
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
    Il2CppMethodInitialized_07547fe2 = '\x01';
  }
  pUStack_78 = (UnityEngine_GameObject_o *)0x0;
  pSStack_70 = (System_Threading_CancellationTokenSource_o *)0x0;
  auStack_88 = (undefined1  [8])0x0;
  pUStack_80 = (UI_MapEditorHierarchyPanel_o *)0x0;
  pSStack_68 = (System_Collections_Generic_Dictionary_string__Type__o *)0x0;
  method_00 = (MethodInfo *)0x0;
  if ((((__this->fields)._currentDropMode & 0xfffffffeU) == 2) &&
     (key = (__this->fields)._dropTargetId, 0 < key)) {
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
    if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05d7a27f;
    bVar4 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar1,key,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ContainsKey);
    method_00 = (MethodInfo *)(ulong)bVar4;
  }
  iVar7 = (int)method_00;
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
  if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
label_05d7a27f:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,pSVar1,
             (MethodInfo_4A0FBD0 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_GetEnumerator);
  pSStack_68 = pSStack_38;
  pUStack_78 = pUStack_48;
  pSStack_70 = pSStack_40;
  auStack_88 = (undefined1  [8])auStack_58._0_8_;
  pUStack_80 = (UI_MapEditorHierarchyPanel_o *)auStack_58._8_8_;
  auStack_58._0_8_ = (UI_MapEditorHierarchyPanel_c *)0x0;
  auStack_58._8_8_ = (UI_MapEditorHierarchyPanel_o *)auStack_88;
  while (__this_00 = (UI_MapEditorHierarchyPanel_o *)auStack_88,
        bVar4 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext
                          ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_88,
                           (MethodInfo_4CA10B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_MoveNext
                          ), bVar4) {
    iVar3 = (int)pUStack_78;
    pUVar6 = (UnityEngine_Object_o *)
             UI_MapEditorHierarchyPanel__GetOrCreateRowDropOverlay
                       (__this_00,(UnityEngine_GameObject_o *)pSStack_70,method_01);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      bVar4 = false;
      if ((__this->fields)._currentDropMode == 1) {
        bVar4 = iVar3 == (__this->fields)._dropIndicatorId;
      }
      if (pUVar6 == (UnityEngine_Object_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar6,bVar4,(MethodInfo *)0x0);
    }
  }
  method_02 = MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_Dispose;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_88,
             (MethodInfo_4CA11D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_Dispose);
  if ((__this->fields)._dropToRoot == false) {
    bVar4 = false;
  }
  else {
    bVar4 = (__this->fields)._currentDropMode == 0;
  }
  if (Il2CppMethodInitialized_07547fe3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fe3 = '\x01';
  }
  UI_MapEditorHierarchyPanel__EnsureDragVisuals(__this,method_02);
  pUVar6 = (UnityEngine_Object_o *)(__this->fields)._rootDropOverlay;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar2 = (__this->fields)._rootDropOverlay;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_05d7a27f;
    UnityEngine_GameObject__SetActive(pUVar2,bVar4,(MethodInfo *)0x0);
  }
  if (iVar7 == 0) {
    if (Il2CppMethodInitialized_07547fe5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547fe5 = '\x01';
    }
    pUVar6 = (UnityEngine_Object_o *)(__this->fields)._insertLineIndicator;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar2 = (__this->fields)._insertLineIndicator;
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_05d7a27f;
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    }
  }
  else {
    UI_MapEditorHierarchyPanel__ShowInsertLine
              (__this,(__this->fields)._dropTargetId,(__this->fields)._currentDropMode == 2,method_00);
  }
  return;
}


// UI.MapEditorHierarchyPanel$$SetRootDropOverlay
// il2cpp: void UI_MapEditorHierarchyPanel__SetRootDropOverlay (UI_MapEditorHierarchyPanel_o* __this, bool active, const MethodInfo* method);
// 0x5d747e0

void UI_MapEditorHierarchyPanel__SetRootDropOverlay
               (UI_MapEditorHierarchyPanel_o *__this,bool active,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,active);
  if (Il2CppMethodInitialized_07547fe3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fe3 = '\x01';
  }
  UI_MapEditorHierarchyPanel__EnsureDragVisuals(__this,method_00);
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
    return;
  }
  return;
}


// UI.MapEditorHierarchyPanel$$ShowInsertLine
// il2cpp: void UI_MapEditorHierarchyPanel__ShowInsertLine (UI_MapEditorHierarchyPanel_o* __this, int32_t targetId, bool atTop, const MethodInfo* method);
// 0x5d7a2f0

void UI_MapEditorHierarchyPanel__ShowInsertLine
               (UI_MapEditorHierarchyPanel_o *__this,int32_t targetId,bool atTop,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Vector3_array *fourCornersArray;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Vector3_o *pUVar7;
  MethodInfo *method_00;
  UnityEngine_Vector3_array *method_01;
  UnityEngine_Vector2_o screenPoint;
  undefined1 auVar8 [16];
  UnityEngine_Vector2_Fields local_40;
  undefined1 local_38 [16];
  
  if (Il2CppMethodInitialized_07547fe4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_07547fe4 = '\x01';
  }
  local_40.x = 0.0;
  local_40.y = 0.0;
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._insertLineIndicator;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    UI_MapEditorHierarchyPanel__EnsureDragVisuals(__this,method_00);
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._insertLineIndicator;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
    if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05d7a606;
    bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar2,targetId,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ContainsKey);
    if (bVar3) {
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
      if ((pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
         (pUVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                             (pSVar2,targetId,
                              (MethodInfo_4A0F690 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_get_Item),
         pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto label_05d7a606;
      pUVar5 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar4,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        pUVar4 = (__this->fields)._insertLineIndicator;
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
          fourCornersArray = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
          if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
            method_01 = fourCornersArray;
            UnityEngine_RectTransform__GetWorldCorners(pUVar5,fourCornersArray,(MethodInfo *)0x0);
            if (atTop) {
              if (fourCornersArray == (UnityEngine_Vector3_array *)0x0) goto label_05d7a606;
              if ((fourCornersArray->max_length & 0xfffffffe) == 0) {
label_05d7a60b:
                ThrowIndexOutOfRangeException();
              }
              pUVar7 = fourCornersArray->m_Items + 1;
            }
            else {
              if (fourCornersArray == (UnityEngine_Vector3_array *)0x0) goto label_05d7a606;
              if ((int)fourCornersArray->max_length == 0) goto label_05d7a60b;
              pUVar7 = fourCornersArray->m_Items;
            }
            local_38 = ZEXT416((uint)(pUVar7->fields).y);
            pUVar5 = UI_MapEditorHierarchyPanel__GetViewportRect(__this,(MethodInfo *)method_01);
            if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
              __this_00 = (__this->fields).SinglePanel;
              if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_05d7a606;
              pUVar6 = (UnityEngine_RectTransform_o *)
                       UnityEngine_Transform__get_parent(__this_00,(MethodInfo *)0x0);
              pUVar5 = (UnityEngine_RectTransform_o *)0x0;
              if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                if (pUVar6->klass != TypeInfo_UnityEngine_RectTransform) {
                  il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
                }
                pUVar5 = pUVar6;
              }
            }
            auVar8 = ZEXT416(local_38._0_4_) << 0x20;
            screenPoint.fields = auVar8._0_8_;
            if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
              local_38 = auVar8;
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
              screenPoint.fields = (UnityEngine_Vector2_Fields)local_38._0_8_;
            }
            UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                      (pUVar5,screenPoint,(UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&local_40,
                       (MethodInfo *)0x0);
            pUVar5 = (__this->fields)._insertLineRect;
            if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchoredPosition
                        (pUVar5,(UnityEngine_Vector2_o)((ulong)local_40 & 0xffffffff00000000),
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
        goto label_05d7a606;
      }
    }
  }
  if (Il2CppMethodInitialized_07547fe5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fe5 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._insertLineIndicator;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pUVar4 = (__this->fields)._insertLineIndicator;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
    return;
  }
label_05d7a606:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$HideInsertLine
// il2cpp: void UI_MapEditorHierarchyPanel__HideInsertLine (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d767a0

void UI_MapEditorHierarchyPanel__HideInsertLine(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547fe5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fe5 = '\x01';
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
    return;
  }
  return;
}


// UI.MapEditorHierarchyPanel$$ShowDragGhost
// il2cpp: void UI_MapEditorHierarchyPanel__ShowDragGhost (UI_MapEditorHierarchyPanel_o* __this, int32_t id, UnityEngine_Vector2_o mousePosition, const MethodInfo* method);
// 0x5d7a620

void UI_MapEditorHierarchyPanel__ShowDragGhost
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,UnityEngine_Vector2_o mousePosition,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_UI_Text_o *pUVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  UnityEngine_GameObject_o *pUVar4;
  bool bVar5;
  Map_MapObject_o *pMVar6;
  System_String_o *pSVar7;
  UnityEngine_Transform_o *__this_00;
  undefined4 in_register_00000034;
  MethodInfo *pMVar8;
  
  pMVar8 = (MethodInfo *)CONCAT44(in_register_00000034,id);
  if (Il2CppMethodInitialized_07547fe6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Hierarchy");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Object");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547fe6 = '\x01';
  }
  UI_MapEditorHierarchyPanel__EnsureDragVisuals(__this,pMVar8);
  x = (UnityEngine_Object_o *)(__this->fields)._dragGhost;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  pUVar1 = (__this->fields)._dragGhostText;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05d7a875;
    bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar2,id,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    if (bVar5) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05d7a875;
      pMVar6 = System_Collections_Generic_Dictionary_int__object___get_Item
                         (pSVar2,id,
                          (MethodInfo_4A0F690 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
      if ((pMVar6 == (Map_MapObject_o *)0x0) ||
         (pMVar3 = (pMVar6->fields).ScriptObject, pMVar3 == (Map_MapScriptBaseObject_o *)0x0))
      goto label_05d7a875;
      pSVar7 = (pMVar3->fields).Name;
    }
    else {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar7 = UI_UIManager__GetLocale
                         ("MapEditor","Hierarchy","Object",
                          "","",(MethodInfo *)0x0);
    }
    pUVar1 = (__this->fields)._dragGhostText;
    if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) goto label_05d7a875;
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,pSVar7,(pUVar1->klass->vtable)._75_set_text.method);
  }
  pUVar4 = (__this->fields)._dragGhost;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._dragGhost;
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pMVar8 = (MethodInfo *)0x1;
        UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
        UI_MapEditorHierarchyPanel__MoveDragGhost(__this,mousePosition,pMVar8);
        return;
      }
    }
  }
label_05d7a875:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$MoveDragGhost
// il2cpp: void UI_MapEditorHierarchyPanel__MoveDragGhost (UI_MapEditorHierarchyPanel_o* __this, UnityEngine_Vector2_o mousePosition, const MethodInfo* method);
// 0x5d7a880

void UI_MapEditorHierarchyPanel__MoveDragGhost
               (UI_MapEditorHierarchyPanel_o *__this,UnityEngine_Vector2_o mousePosition,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UI_MapEditorMenu_o *__this_00;
  bool bVar2;
  UnityEngine_Canvas_o *__this_01;
  float fVar3;
  UnityEngine_Vector2_o value;
  undefined8 in_XMM0_Qb;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (Il2CppMethodInitialized_07547fe7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fe7 = '\x01';
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
  if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
    __this_01 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this_00,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    if (__this_01 != (UnityEngine_Canvas_o *)0x0) {
      fVar3 = UnityEngine_Canvas__get_scaleFactor(__this_01,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._dragGhostRect;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        auVar5._0_4_ = ~-(uint)(0.0 < fVar3) & 0x3f800000 | -(uint)(0.0 < fVar3) & (uint)fVar3;
        auVar5._4_4_ = auVar5._0_4_;
        auVar5._8_4_ = auVar5._0_4_;
        auVar5._12_4_ = auVar5._0_4_;
        auVar4._8_8_ = in_XMM0_Qb;
        auVar4._0_8_ = mousePosition.fields;
        auVar4 = divps(auVar4,auVar5);
        value.fields.x = auVar4._0_4_ + 12.0;
        value.fields.y = auVar4._4_4_ + -6.0;
        UnityEngine_RectTransform__set_anchoredPosition(pUVar1,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$HideDragGhost
// il2cpp: void UI_MapEditorHierarchyPanel__HideDragGhost (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d766c0

void UI_MapEditorHierarchyPanel__HideDragGhost(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool bVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547fe8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fe8 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._dragGhost;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._dragGhost;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_05d76794;
    method_00 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  if (Il2CppMethodInitialized_07547fe3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fe3 = '\x01';
  }
  UI_MapEditorHierarchyPanel__EnsureDragVisuals(__this,method_00);
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._rootDropOverlay;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pUVar2 = (__this->fields)._rootDropOverlay;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    return;
  }
label_05d76794:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$Update
// il2cpp: void UI_MapEditorHierarchyPanel__Update (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d7a970

void UI_MapEditorHierarchyPanel__Update(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorContextMenu_o *pUVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_UI_ScrollRect_o *x;
  bool bVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Vector3_o UVar5;
  
  if (Il2CppMethodInitialized_07547fe9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_07547fe9 = '\x01';
  }
  pUVar1 = (__this->fields)._contextMenu;
  if (pUVar1 != (UI_MapEditorContextMenu_o *)0x0) {
    if (Il2CppMethodInitialized_07547f9f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547f9f = '\x01';
    }
    pUVar2 = (UnityEngine_Object_o *)(pUVar1->fields)._root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method = (MethodInfo *)0x0;
    bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar3 = (pUVar1->fields)._root;
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
label_05d7ab73:
        ThrowNullReferenceException();
      }
      method = (MethodInfo *)0x0;
      bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (bVar4) {
        method = (MethodInfo *)0x0;
        bVar4 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0);
        if (bVar4) {
          pUVar1 = (__this->fields)._contextMenu;
          if (pUVar1 == (UI_MapEditorContextMenu_o *)0x0) goto label_05d7ab73;
          rect = (pUVar1->fields)._menuRect;
          UVar5 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
          }
          method = (MethodInfo *)0x0;
          bVar4 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint_6ccb790
                            (rect,(UnityEngine_Vector2_o)UVar5.fields._0_8_,(UnityEngine_Camera_o *)0x0,
                             (MethodInfo *)0x0);
          if (!bVar4) {
            pUVar1 = (__this->fields)._contextMenu;
            if (pUVar1 != (UI_MapEditorContextMenu_o *)0x0) {
              if (Il2CppMethodInitialized_07547fa1 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                Il2CppMethodInitialized_07547fa1 = '\x01';
              }
              pUVar2 = (UnityEngine_Object_o *)(pUVar1->fields)._root;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              method = (MethodInfo *)0x0;
              bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar4) {
                pUVar3 = (pUVar1->fields)._root;
                if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_05d7ab73;
                method = (MethodInfo *)0x0;
                UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
              }
            }
            (__this->fields)._contextTargetId = -1;
          }
        }
      }
    }
  }
  if ((__this->fields)._draggingItem != false) {
    UVar5 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    UI_MapEditorHierarchyPanel__MoveDragGhost(__this,(UnityEngine_Vector2_o)UVar5.fields._0_8_,method);
    if ((__this->fields)._treeViewEnabled != false) {
      x = (__this->fields)._scrollRect;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      method_01 = (MethodInfo *)0x0;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        bVar4 = UI_MapEditorHierarchyPanel__AutoScrollDuringDrag(__this,method_01);
        if (bVar4) {
          UVar5 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          UI_MapEditorHierarchyPanel__UpdateDropTargetFromPointer
                    (__this,(UnityEngine_Vector2_o)UVar5.fields._0_8_,(UnityEngine_Camera_o *)0x0,method_00);
          return;
        }
      }
    }
  }
  return;
}


// UI.MapEditorHierarchyPanel$$AutoScrollDuringDrag
// il2cpp: bool UI_MapEditorHierarchyPanel__AutoScrollDuringDrag (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d7ab80

bool UI_MapEditorHierarchyPanel__AutoScrollDuringDrag(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_ScrollRect_o *pUVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_RectTransform_o *pUVar3;
  MethodInfo *method_00;
  float fVar4;
  float fVar5;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Rect_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector2_Fields local_30;
  undefined1 local_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (Il2CppMethodInitialized_07547fea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07547fea = '\x01';
  }
  local_30.x = 0.0;
  local_30.y = 0.0;
  rect = UI_MapEditorHierarchyPanel__GetViewportRect(__this,method);
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    __this_00 = (__this->fields).SinglePanel;
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_05d7ae0a;
    pUVar3 = (UnityEngine_RectTransform_o *)UnityEngine_Transform__get_parent(__this_00,(MethodInfo *)0x0);
    rect = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      if (pUVar3->klass != TypeInfo_UnityEngine_RectTransform) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
      }
      rect = pUVar3;
    }
  }
  UVar10 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  bVar2 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    (rect,(UnityEngine_Vector2_o)UVar10.fields._0_8_,(UnityEngine_Camera_o *)0x0,
                     (UnityEngine_Vector2_o *)&local_30,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) goto label_05d7ae0a;
  UVar9 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
  fVar5 = UVar9.fields.m_YMin;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    uStack_20 = extraout_XMM0_Dc;
    local_28 = (undefined1  [8])UVar9.fields._0_8_;
    uStack_1c = extraout_XMM0_Dd;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    fVar5 = (float)local_28._4_4_;
  }
  fVar6 = (UVar9.fields.m_Height + fVar5) - local_30.y;
  fVar4 = 0.0;
  if ((fVar6 < 0.0) || (70.0 <= fVar6)) {
    fVar6 = local_30.y - fVar5;
    if ((0.0 <= fVar6) && (fVar6 < 70.0)) {
      fVar5 = -0.9;
      goto label_05d7ace2;
    }
  }
  else {
    fVar5 = 0.9;
label_05d7ace2:
    fVar4 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    fVar4 = fVar4 * (fVar6 / -70.0 + 1.0) * fVar5;
  }
  if (ABS(fVar4) <= 0.0001) {
    return false;
  }
  pUVar1 = (__this->fields)._scrollRect;
  if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    fVar6 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(pUVar1,(MethodInfo *)0x0);
    fVar4 = fVar4 + fVar6;
    fVar5 = 1.0;
    if (fVar4 <= 1.0) {
      fVar5 = fVar4;
    }
    fVar5 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
    if (g_data_0753e7b4 == '\0') {
      local_28._4_4_ = extraout_XMM0_Db;
      local_28._0_4_ = fVar6;
      uStack_20 = extraout_XMM0_Dc_00;
      uStack_1c = extraout_XMM0_Dd_00;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
      g_data_0753e7b4 = '\x01';
      fVar6 = (float)local_28._0_4_;
    }
    fVar4 = ABS(fVar6);
    if (ABS(fVar6) <= ABS(fVar5)) {
      fVar4 = ABS(fVar5);
    }
    fVar7 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
    fVar8 = fVar4 * 1e-06;
    if (fVar4 * 1e-06 <= fVar7) {
      fVar8 = fVar7;
    }
    if (ABS(fVar5 - fVar6) < fVar8) {
      return false;
    }
    pUVar1 = (__this->fields)._scrollRect;
    if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(pUVar1,fVar5,(MethodInfo *)0x0);
      UI_MapEditorHierarchyPanel__RenderVirtualizedRows(__this,false,method_00);
      return true;
    }
  }
label_05d7ae0a:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$ToggleExpanded
// il2cpp: void UI_MapEditorHierarchyPanel__ToggleExpanded (UI_MapEditorHierarchyPanel_o* __this, int32_t id, bool expand, const MethodInfo* method);
// 0x5d7afb0

void UI_MapEditorHierarchyPanel__ToggleExpanded
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,bool expand,MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547feb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    Il2CppMethodInitialized_07547feb = '\x01';
  }
  __this_00 = (__this->fields)._expanded;
  if (expand) {
    if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) {
label_05d7b02c:
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)(ulong)(uint)id;
    System_Collections_Generic_HashSet_int___Add
              (__this_00,id,(MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
  }
  else {
    if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05d7b02c;
    method_00 = (MethodInfo *)(ulong)(uint)id;
    System_Collections_Generic_HashSet_int___Remove
              (__this_00,id,(MethodInfo_4FA80C0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
  }
  UI_MapEditorHierarchyPanel__Sync(__this,method_00);
  return;
}


// UI.MapEditorHierarchyPanel$$OnPageClick
// il2cpp: void UI_MapEditorHierarchyPanel__OnPageClick (UI_MapEditorHierarchyPanel_o* __this, bool left, const MethodInfo* method);
// 0x5d7b040

void UI_MapEditorHierarchyPanel__OnPageClick
               (UI_MapEditorHierarchyPanel_o *__this,bool left,MethodInfo *method)

{
  undefined7 in_register_00000031;
  
  (__this->fields)._currentPage = (__this->fields)._currentPage + (uint)!left * 2 + -1;
  UI_MapEditorHierarchyPanel__Sync(__this,(MethodInfo *)CONCAT71(in_register_00000031,!left));
  return;
}


// UI.MapEditorHierarchyPanel$$FocusSelectionFromScene
// il2cpp: void UI_MapEditorHierarchyPanel__FocusSelectionFromScene (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d7b060
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7b247: jmp 0x5d7b262
// asm:   0x5d7b2f7: jmp 0x5d7b312

void UI_MapEditorHierarchyPanel__FocusSelectionFromScene
               (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_MapObject__o *pSVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  int iVar4;
  UI_MapEditorHierarchyPanel___c__DisplayClass121_0_o *__this_00;
  System_Func_MapObject__bool__o *__this_01;
  GameManagers_MapEditorGameManager_o *pGVar5;
  System_Func_MapObject__int__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  UI_MapEditorHierarchyPanel___c_StaticFields *pUVar6;
  System_Func_int__int__o *__this_03;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547fec == '\0') {
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
              (&MethodInfo_UI_MapEditorHierarchyPanel_c_FocusSelectionFromScene_b__121_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c_FocusSelectionFromScene_b__121_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass121_0_FocusSelectionFromScene_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorHierarchyPanel_c__DisplayClass121_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorHierarchyPanel_c);
    Il2CppMethodInitialized_07547fec = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c__DisplayClass121_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  pGVar5 = (__this->fields)._gameManager;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pGVar5 = (__this->fields)._gameManager;
    if ((pGVar5 == (GameManagers_MapEditorGameManager_o *)0x0) ||
       (pSVar1 = (pGVar5->fields).SelectedObjects,
       pSVar1 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
label_05d7b3be:
      ThrowNullReferenceException();
    }
    if ((pSVar1->fields)._count == 0) {
      return;
    }
    if (__this_00 == (UI_MapEditorHierarchyPanel___c__DisplayClass121_0_o *)0x0) goto label_05d7b3be;
    iVar4 = (pGVar5->fields).LastSelectedObjectId;
    (__this_00->fields).targetId = iVar4;
    if (0 < iVar4) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this_00,
                 (intptr_t)
                 MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass121_0_FocusSelectionFromScene_b__0,
                 (MethodInfo_4F19300 *)0x0);
      bVar3 = System_Linq_Enumerable__Any_object__34dfce0
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                         (System_Func_TSource__bool__o *)__this_01,
                         (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_MapObject);
      if (bVar3) {
        iVar4 = (__this_00->fields).targetId;
        method_00 = extraout_RDX;
        if (iVar4 < 1) {
          return;
        }
        goto label_05d7b3a6;
      }
      pGVar5 = (__this->fields)._gameManager;
      if (pGVar5 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05d7b3be;
    }
    pSVar1 = (pGVar5->fields).SelectedObjects;
    if ((TypeInfo_UI_MapEditorHierarchyPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
      pUVar6 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
      __this_02 = pUVar6->__9__121_1;
    }
    else {
      pUVar6 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
      __this_02 = pUVar6->__9__121_1;
    }
    if (__this_02 == (System_Func_MapObject__int__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
        pUVar6 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
      }
      pIVar2 = (Il2CppObject *)pUVar6->__9;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
      System_Func_object__int____ctor
                ((System_Func_object__int__o *)__this_02,pIVar2,
                 (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c_FocusSelectionFromScene_b__121_1,
                 (MethodInfo_4F198F0 *)0x0);
      pUVar6 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
      pUVar6->__9__121_1 = __this_02;
      Il2CppCodeGenWriteBarrier(&pUVar6->__9__121_1);
    }
    source = System_Linq_Enumerable__Select_object__int_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                        (System_Func_TSource__TResult__o *)__this_02,
                        (MethodInfo_34F5DF0 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    if ((TypeInfo_UI_MapEditorHierarchyPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
      pUVar6 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
      __this_03 = pUVar6->__9__121_2;
    }
    else {
      pUVar6 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
      __this_03 = pUVar6->__9__121_2;
    }
    if (__this_03 == (System_Func_int__int__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
        pUVar6 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
      }
      pIVar2 = (Il2CppObject *)pUVar6->__9;
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int);
      System_Func_int__int____ctor
                (__this_03,pIVar2,
                 (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c_FocusSelectionFromScene_b__121_2,
                 (MethodInfo_4F12F40 *)0x0);
      pUVar6 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
      pUVar6->__9__121_2 = __this_03;
      Il2CppCodeGenWriteBarrier(&pUVar6->__9__121_2);
    }
    source_00 = System_Linq_Enumerable__OrderBy_int__int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TKey__o *)__this_03,
                           (MethodInfo_34F1B50 *)MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
    iVar4 = System_Linq_Enumerable__FirstOrDefault_int_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                       (MethodInfo_34EC8B0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_int);
    (__this_00->fields).targetId = iVar4;
    method_00 = extraout_RDX_00;
    if (0 < iVar4) {
label_05d7b3a6:
      UI_MapEditorHierarchyPanel__FocusObject(__this,iVar4,method_00);
      return;
    }
  }
  return;
}


// UI.MapEditorHierarchyPanel$$FocusObject
// il2cpp: void UI_MapEditorHierarchyPanel__FocusObject (UI_MapEditorHierarchyPanel_o* __this, int32_t id, const MethodInfo* method);
// 0x5d7b3e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7b417: jmp 0x5d7b619

void UI_MapEditorHierarchyPanel__FocusObject
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_int__int__o *pSVar1;
  bool bVar2;
  int32_t iVar3;
  int iVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar5;
  MethodInfo *pMVar6;
  
  pMVar5 = (MethodInfo *)(ulong)(uint)id;
  if (Il2CppMethodInitialized_07547fed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07547fed = '\x01';
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor != 0) goto label_05d7b408;
label_05d7b472:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  }
  else {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) goto label_05d7b472;
label_05d7b408:
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05d7b619;
  bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (__this_00,id,
                     (MethodInfo_4A0F950 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
  if (!bVar2) {
    return;
  }
  if ((__this->fields)._treeViewEnabled == false) {
    pSVar1 = (__this->fields)._idToIndex;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
      pMVar6 = pMVar5;
      bVar2 = System_Collections_Generic_Dictionary_int__int___ContainsKey
                        (pSVar1,id,
                         (MethodInfo_4A04140 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
      if (!bVar2) {
        UI_MapEditorHierarchyPanel__Sync(__this,pMVar6);
      }
      pSVar1 = (__this->fields)._idToIndex;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_05d7b619;
      bVar2 = System_Collections_Generic_Dictionary_int__int___ContainsKey
                        (pSVar1,id,
                         (MethodInfo_4A04140 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
      if (!bVar2) {
        return;
      }
      pSVar1 = (__this->fields)._idToIndex;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_05d7b619;
      iVar3 = System_Collections_Generic_Dictionary_int__int___get_Item
                        (pSVar1,id,
                         (MethodInfo_4A03E70 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
      iVar4 = iVar3 / 0x1e + 1;
      if ((__this->fields)._currentPage != iVar4) {
        (__this->fields)._currentPage = iVar4;
        UI_MapEditorHierarchyPanel__Sync(__this,pMVar5);
      }
      goto label_05d7b5fc;
    }
    goto label_05d7b619;
  }
  pMVar6 = pMVar5;
  bVar2 = UI_MapEditorHierarchyPanel__ExpandAncestors(__this,id,method_00);
  if (bVar2) {
label_05d7b4e7:
    UI_MapEditorHierarchyPanel__Sync(__this,pMVar6);
  }
  else {
    pSVar1 = (__this->fields)._idToIndex;
    if (pSVar1 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_05d7b619;
    bVar2 = System_Collections_Generic_Dictionary_int__int___ContainsKey
                      (pSVar1,id,
                       (MethodInfo_4A04140 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
    pMVar6 = pMVar5;
    if (!bVar2) goto label_05d7b4e7;
  }
  pSVar1 = (__this->fields)._idToIndex;
  if (pSVar1 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_int__int___ContainsKey
                      (pSVar1,id,
                       (MethodInfo_4A04140 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
    if (!bVar2) {
      return;
    }
    pSVar1 = (__this->fields)._idToIndex;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
      iVar3 = System_Collections_Generic_Dictionary_int__int___get_Item
                        (pSVar1,id,
                         (MethodInfo_4A03E70 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
      pMVar5 = (MethodInfo *)(__this->fields)._rows;
      if (pMVar5 != (MethodInfo *)0x0) {
        UI_MapEditorHierarchyPanel__FocusVirtualRow(__this,iVar3,*(int32_t *)&pMVar5->name,pMVar5);
        pMVar5 = (MethodInfo *)0x0;
        UI_MapEditorHierarchyPanel__RenderVirtualizedRows(__this,false,method_01);
label_05d7b5fc:
        UI_MapEditorHierarchyPanel__SyncSelectedItems(__this,pMVar5);
        return;
      }
    }
  }
label_05d7b619:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$FocusVirtualRow
// il2cpp: void UI_MapEditorHierarchyPanel__FocusVirtualRow (UI_MapEditorHierarchyPanel_o* __this, int32_t rowIndex, int32_t totalRows, const MethodInfo* method);
// 0x5d7b7d0

void UI_MapEditorHierarchyPanel__FocusVirtualRow
               (UI_MapEditorHierarchyPanel_o *__this,int32_t rowIndex,int32_t totalRows,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  bool bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  int iVar5;
  MethodInfo *pMVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Rect_o UVar12;
  float local_48;
  
  if (Il2CppMethodInitialized_07547fee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07547fee = '\x01';
  }
  pUVar1 = (__this->fields)._scrollRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pUVar1 = (__this->fields)._scrollRect;
  if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    pUVar4 = (pUVar1->fields).m_Content;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar6 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    pUVar4 = UI_MapEditorHierarchyPanel__GetViewportRect(__this,pMVar6);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_05d7ba06;
      UVar12 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      fVar9 = UVar12.fields.m_Height;
    }
    else {
      fVar9 = (*(__this->klass->vtable)._31_GetPanelHeight.methodPtr)
                        (__this,(__this->klass->vtable)._31_GetPanelHeight.method);
    }
    pUVar1 = (__this->fields)._scrollRect;
    if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar4 = (pUVar1->fields).m_Content, pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
      pMVar6 = (MethodInfo *)0x0;
      UVar2 = UnityEngine_RectTransform__get_anchoredPosition(pUVar4,(MethodInfo *)0x0);
      fVar7 = UI_MapEditorHierarchyPanel__GetVirtualStride(__this,pMVar6);
      fVar10 = 1.0;
      if (1.0 <= fVar7) {
        fVar10 = fVar7;
      }
      if (rowIndex < 1) {
        rowIndex = 0;
      }
      fVar7 = 1.0;
      if (1.0 <= fVar9) {
        fVar7 = fVar9;
      }
      fVar8 = ((float)rowIndex + 0.5) * fVar10;
      fVar9 = 0.0;
      if (0.0 <= UVar2.fields.y) {
        fVar9 = UVar2.fields.y;
      }
      fVar11 = fVar8 - fVar9;
      if ((fVar11 < fVar7 * 0.25) || (fVar7 * 0.75 < fVar11)) {
        iVar5 = 0;
        if (0 < totalRows) {
          iVar5 = totalRows;
        }
        fVar10 = fVar10 * (float)iVar5 - fVar7;
        fVar9 = 0.0;
        if (0.0 <= fVar10) {
          fVar9 = fVar10;
        }
        fVar8 = fVar8 - fVar7 * 0.25;
        if (fVar8 <= fVar9) {
          fVar9 = fVar8;
        }
        fVar9 = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar9);
      }
      pUVar1 = (__this->fields)._scrollRect;
      if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
         (pUVar4 = (pUVar1->fields).m_Content, pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
        local_48 = UVar2.fields.x;
        UVar2.fields.y = fVar9;
        UVar2.fields.x = local_48;
        UnityEngine_RectTransform__set_anchoredPosition(pUVar4,UVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05d7ba06:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$ExpandAncestors
// il2cpp: bool UI_MapEditorHierarchyPanel__ExpandAncestors (UI_MapEditorHierarchyPanel_o* __this, int32_t id, const MethodInfo* method);
// 0x5d7b620
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7b6dc: lea r13, [rip + 0x14ff2ad]  ; TypeInfo_Map_MapLoader
// asm:   0x5d7b6e3: nop word ptr cs:[rax + rax]
// asm:   0x5d7b7b2: jmp 0x5d7b7b6

bool UI_MapEditorHierarchyPanel__ExpandAncestors
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  System_Collections_Generic_HashSet_int__o *__this_00;
  bool bVar2;
  bool bVar3;
  System_Collections_Generic_HashSet_int__o *__this_01;
  Map_MapObject_o *obj;
  bool bVar4;
  
  if (Il2CppMethodInitialized_07547fef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07547fef = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_01,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (id < 0) {
    bVar3 = false;
  }
  else {
    if (__this_01 == (System_Collections_Generic_HashSet_int__o *)0x0) {
label_05d7b7ca:
      ThrowNullReferenceException();
    }
    bVar2 = System_Collections_Generic_HashSet_int___Add
                      (__this_01,id,
                       (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
    bVar4 = false;
    bVar3 = false;
    if (bVar2) {
      do {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05d7b7ca;
        bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                          (pSVar1,id,
                           (MethodInfo_4A0F950 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        if (!bVar3) {
          return bVar4;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05d7b7ca;
        obj = System_Collections_Generic_Dictionary_int__object___get_Item
                        (pSVar1,id,
                         (MethodInfo_4A0F690 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        id = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
        if (id < 0) {
          return bVar4;
        }
        __this_00 = (__this->fields)._expanded;
        if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05d7b7ca;
        bVar2 = System_Collections_Generic_HashSet_int___Add
                          (__this_00,id,
                           (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
        bVar3 = bVar4;
        if (bVar2) {
          bVar3 = true;
        }
        bVar2 = System_Collections_Generic_HashSet_int___Add
                          (__this_01,id,
                           (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
        bVar4 = bVar3;
      } while (bVar2);
    }
  }
  return bVar3;
}


// UI.MapEditorHierarchyPanel$$OnButtonRelease
// il2cpp: void UI_MapEditorHierarchyPanel__OnButtonRelease (UI_MapEditorHierarchyPanel_o* __this, int32_t id, const MethodInfo* method);
// 0x5d7bac0

void UI_MapEditorHierarchyPanel__OnButtonRelease
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,MethodInfo *method)

{
  return;
}


// UI.MapEditorHierarchyPanel$$OnDestroy
// il2cpp: void UI_MapEditorHierarchyPanel__OnDestroy (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d7bad0

void UI_MapEditorHierarchyPanel__OnDestroy(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorContextMenu_o *pUVar1;
  UnityEngine_Object_o *pUVar2;
  bool bVar3;
  
  pUVar1 = (__this->fields)._contextMenu;
  if (pUVar1 != (UI_MapEditorContextMenu_o *)0x0) {
    if (Il2CppMethodInitialized_07547fa2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547fa2 = '\x01';
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
      UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.MapEditorHierarchyPanel$$OnItemPointerDown
// il2cpp: void UI_MapEditorHierarchyPanel__OnItemPointerDown (UI_MapEditorHierarchyPanel_o* __this, int32_t id, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d7bb60

void UI_MapEditorHierarchyPanel__OnItemPointerDown
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._dragSourceId = id;
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._dragStartMouse.fields = (eventData->fields)._position_k__BackingField.fields;
  (__this->fields)._suppressClick = false;
  return;
}


// UI.MapEditorHierarchyPanel$$OnItemBeginDrag
// il2cpp: void UI_MapEditorHierarchyPanel__OnItemBeginDrag (UI_MapEditorHierarchyPanel_o* __this, int32_t id, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d7bb90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7bdf9: jmp 0x5d7be13

void UI_MapEditorHierarchyPanel__OnItemBeginDrag
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  uint id_00;
  UI_MapEditorMenu_o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  Il2CppObject *object;
  bool bVar3;
  UI_MapEditorHierarchyPanel___c__DisplayClass128_0_o *__this_02;
  System_Func_MapObject__bool__o *__this_03;
  Map_MapObject_o *obj;
  UI_MapEditorHierarchyPanel___c_StaticFields *pUVar4;
  System_Func_MapObject__int__o *__this_04;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  UI_MapEditorHierarchyPanel_o *__this_05;
  System_Collections_Generic_HashSet_int__o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UI_MapEditorHierarchyPanel_o *__this_06;
  
  if (Il2CppMethodInitialized_07547ff0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c_OnItemBeginDrag_b__128_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass128_0_OnItemBeginDrag_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorHierarchyPanel_c__DisplayClass128_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorHierarchyPanel_c);
    Il2CppMethodInitialized_07547ff0 = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c__DisplayClass128_0);
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  if (__this_02 != (UI_MapEditorHierarchyPanel___c__DisplayClass128_0_o *)0x0) {
    (__this_02->fields).id = id;
    __this_00 = (__this->fields)._menu;
    if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
      bVar3 = UI_MapEditorMenu__IsPopupActive(__this_00,(MethodInfo *)0x0);
      if (bVar3) {
        return;
      }
      (__this->fields)._draggingItem = true;
      (__this->fields)._dropTargetId = -1;
      (__this->fields)._dropToRoot = false;
      (__this->fields)._dropIndicatorId = -1;
      (__this->fields)._currentDropMode = 0;
      (__this->fields)._dragSourceId = (__this_02->fields).id;
      pGVar1 = (__this->fields)._gameManager;
      if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
        pSVar2 = (pGVar1->fields).SelectedObjects;
        __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
        System_Func_object__bool____ctor
                  ((System_Func_object__bool__o *)__this_03,(Il2CppObject *)__this_02,
                   (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass128_0_OnItemBeginDrag_b__0,
                   (MethodInfo_4F19300 *)0x0);
        bVar3 = System_Linq_Enumerable__Any_object__34dfce0
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                           (System_Func_TSource__bool__o *)__this_03,
                           (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_MapObject);
        if (!bVar3) {
          pGVar1 = (__this->fields)._gameManager;
          if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05d7bf06;
          GameManagers_MapEditorGameManager__DeselectAll(pGVar1,(MethodInfo *)0x0);
          pGVar1 = (__this->fields)._gameManager;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
                      TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if ((__this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
             (obj = System_Collections_Generic_Dictionary_int__object___get_Item
                              (__this_01,(__this_02->fields).id,
                               (MethodInfo_4A0F690 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
             pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0)) goto label_05d7bf06;
          GameManagers_MapEditorGameManager__SelectObject(pGVar1,obj,(MethodInfo *)0x0);
          pGVar1 = (__this->fields)._gameManager;
          if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05d7bf06;
          GameManagers_MapEditorGameManager__OnSelectionChange(pGVar1,false,(MethodInfo *)0x0);
        }
        pGVar1 = (__this->fields)._gameManager;
        if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
          pSVar2 = (pGVar1->fields).SelectedObjects;
          if ((TypeInfo_UI_MapEditorHierarchyPanel_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
            pUVar4 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
            __this_04 = pUVar4->__9__128_1;
          }
          else {
            pUVar4 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
            __this_04 = pUVar4->__9__128_1;
          }
          if (__this_04 == (System_Func_MapObject__int__o *)0x0) {
            if ((((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c)->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorHierarchyPanel_c);
              pUVar4 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
            }
            object = (Il2CppObject *)pUVar4->__9;
            __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
            System_Func_object__int____ctor
                      ((System_Func_object__int__o *)__this_04,object,
                       (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c_OnItemBeginDrag_b__128_1,
                       (MethodInfo_4F198F0 *)0x0);
            pUVar4 = TypeInfo_UI_MapEditorHierarchyPanel_c->static_fields;
            pUVar4->__9__128_1 = __this_04;
            Il2CppCodeGenWriteBarrier(&pUVar4->__9__128_1);
          }
          collection = System_Linq_Enumerable__Select_object__int_
                                 ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                                  (System_Func_TSource__TResult__o *)__this_04,
                                  (MethodInfo_34F5DF0 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int
                                 );
          __this_05 = (UI_MapEditorHierarchyPanel_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
          __this_06 = __this_05;
          System_Collections_Generic_HashSet_int____ctor_4fa7660
                    ((System_Collections_Generic_HashSet_int__o *)__this_05,
                     (System_Collections_Generic_IEnumerable_T__o *)collection,
                     (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
          pSVar5 = UI_MapEditorHierarchyPanel__GetTopLevelIds
                             (__this_06,(System_Collections_Generic_HashSet_int__o *)__this_05,method_00);
          (__this->fields)._dragTopLevel = pSVar5;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._dragTopLevel);
          if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
            id_00 = (__this_02->fields).id;
            method_02 = (MethodInfo *)(ulong)id_00;
            UI_MapEditorHierarchyPanel__ShowDragGhost
                      (__this,id_00,
                       (UnityEngine_Vector2_o)(eventData->fields)._position_k__BackingField.fields,method_01);
            UI_MapEditorHierarchyPanel__RefreshDropIndicators(__this,method_02);
            return;
          }
        }
      }
    }
  }
label_05d7bf06:
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$OnItemDrag
// il2cpp: void UI_MapEditorHierarchyPanel__OnItemDrag (UI_MapEditorHierarchyPanel_o* __this, int32_t id, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d7c240

void UI_MapEditorHierarchyPanel__OnItemDrag
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Camera_o *eventCamera;
  MethodInfo *method_00;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  float fVar3;
  float fVar4;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,id);
  if ((__this->fields)._draggingItem != false) {
    if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar1 = (eventData->fields)._position_k__BackingField.fields;
    UVar2 = (__this->fields)._dragStartMouse.fields;
    if (Il2CppMethodInitialized_0753e7b5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7b5 = '\x01';
    }
    fVar3 = UVar1.x - UVar2.x;
    fVar4 = UVar1.y - UVar2.y;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar3 = fVar4 * fVar4 + fVar3 * fVar3;
    if (fVar3 < 0.0) {
      fVar3 = sqrtf(fVar3);
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    if (6.0 <= fVar3) {
      UI_MapEditorHierarchyPanel__MoveDragGhost
                (__this,(UnityEngine_Vector2_o)(eventData->fields)._position_k__BackingField.fields,method_01)
      ;
      UVar1 = (eventData->fields)._position_k__BackingField.fields;
      eventCamera = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera
                              (eventData,(MethodInfo *)0x0);
      UI_MapEditorHierarchyPanel__UpdateDropTargetFromPointer
                (__this,(UnityEngine_Vector2_o)UVar1,eventCamera,method_00);
      return;
    }
  }
  return;
}


// UI.MapEditorHierarchyPanel$$UpdateDropTargetFromPointer
// il2cpp: void UI_MapEditorHierarchyPanel__UpdateDropTargetFromPointer (UI_MapEditorHierarchyPanel_o* __this, UnityEngine_Vector2_o screenPosition, UnityEngine_Camera_o* eventCamera, const MethodInfo* method);
// 0x5d7ae20

void UI_MapEditorHierarchyPanel__UpdateDropTargetFromPointer
               (UI_MapEditorHierarchyPanel_o *__this,UnityEngine_Vector2_o screenPosition,
               UnityEngine_Camera_o *eventCamera,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  System_Collections_Generic_HashSet_int__o *__this_01;
  UnityEngine_Vector2_o screenPosition_00;
  bool bVar1;
  uint item;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *eventCamera_00;
  int32_t iVar2;
  float fVar3;
  float fVar4;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  int32_t iStack_2c;
  undefined1 auStack_28 [16];
  
  auStack_28._8_4_ = in_XMM0_Dc;
  auStack_28._0_8_ = screenPosition.fields;
  auStack_28._12_4_ = in_XMM0_Dd;
  eventCamera_00 = (MethodInfo *)eventCamera;
  fVar3 = screenPosition.fields.x;
  fVar4 = screenPosition.fields.y;
  if (Il2CppMethodInitialized_07547ff1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_07547ff1 = '\x01';
    fVar3 = (float)auStack_28._0_4_;
    fVar4 = (float)auStack_28._4_4_;
  }
  iStack_2c = 0;
  screenPosition_00.fields.y = fVar4;
  screenPosition_00.fields.x = fVar3;
  item = UI_MapEditorHierarchyPanel__FindHoveredItem
                   (__this,screenPosition_00,(UnityEngine_Camera_o *)eventCamera_00,&iStack_2c,in_RCX);
  iVar2 = iStack_2c;
  if ((int)item < 0) {
    (__this->fields)._dropTargetId = -1;
    (__this->fields)._dropIndicatorId = -1;
    (__this->fields)._currentDropMode = 0;
    if ((__this->fields)._treeViewEnabled != false) {
      __this_00 = (__this->fields).SinglePanel;
      if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_05d7af9c;
      rect = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_00,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
      if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
      }
      bVar1 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint_6ccb790
                        (rect,(UnityEngine_Vector2_o)auStack_28._0_8_,eventCamera,(MethodInfo *)0x0);
      goto label_05d7af86;
    }
  }
  else {
    if (iStack_2c == 1) {
      if ((__this->fields)._treeViewEnabled == false) {
label_05d7af5d:
        (__this->fields)._dropTargetId = -1;
        iVar2 = 0;
        goto label_05d7af72;
      }
      eventCamera_00 = (MethodInfo *)(ulong)item;
      bVar1 = UI_MapEditorHierarchyPanel__IsValidDropTarget(__this,item,method_00);
      if (!bVar1) goto label_05d7af5d;
      (__this->fields)._dropTargetId = item;
      iVar2 = 1;
    }
    else {
      __this_01 = (__this->fields)._dragTopLevel;
      if (__this_01 == (System_Collections_Generic_HashSet_int__o *)0x0) {
label_05d7af9c:
        ThrowNullReferenceException();
      }
      eventCamera_00 = (MethodInfo *)(ulong)item;
      bVar1 = System_Collections_Generic_HashSet_int___Contains
                        (__this_01,item,
                         (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar1) goto label_05d7af5d;
      (__this->fields)._dropTargetId = item;
label_05d7af72:
      item = 0xffffffff;
    }
    (__this->fields)._dropIndicatorId = item;
    (__this->fields)._currentDropMode = iVar2;
  }
  eventCamera = (UnityEngine_Camera_o *)eventCamera_00;
  bVar1 = false;
label_05d7af86:
  (__this->fields)._dropToRoot = bVar1;
  UI_MapEditorHierarchyPanel__RefreshDropIndicators(__this,(MethodInfo *)eventCamera);
  return;
}


// UI.MapEditorHierarchyPanel$$OnItemEndDrag
// il2cpp: void UI_MapEditorHierarchyPanel__OnItemEndDrag (UI_MapEditorHierarchyPanel_o* __this, int32_t id, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d7c8f0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7c9db: jmp 0x5d7cb2c
// asm:   0x5d7cac8: jmp 0x5d7caf1
// asm:   0x5d7caca: xor eax, eax
// asm:   0x5d7cacc: test al, al
// asm:   0x5d7cace: jne 0x5d7caf1

void UI_MapEditorHierarchyPanel__OnItemEndDrag
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  System_Collections_Generic_HashSet_int__o *__this_00;
  char cVar4;
  MethodInfo *method_00;
  int32_t item;
  undefined4 in_register_00000034;
  float fVar5;
  float fVar6;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,id);
  if (Il2CppMethodInitialized_07547ff2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07547ff2 = '\x01';
  }
  if ((__this->fields)._draggingItem == false) {
    return;
  }
  (__this->fields)._draggingItem = false;
  UI_MapEditorHierarchyPanel__HideDragGhost(__this,method_00);
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) goto label_05d7cb57;
  UVar1 = (eventData->fields)._position_k__BackingField.fields;
  UVar2 = (__this->fields)._dragStartMouse.fields;
  if (Il2CppMethodInitialized_0753e7b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7b5 = '\x01';
  }
  fVar5 = UVar1.x - UVar2.x;
  fVar6 = UVar1.y - UVar2.y;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar5 = fVar6 * fVar6 + fVar5 * fVar5;
  if (fVar5 < 0.0) {
    fVar5 = sqrtf(fVar5);
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  if (fVar5 < 6.0) goto label_05d7cb2c;
  (__this->fields)._suppressClick = true;
  item = (__this->fields)._dropTargetId;
  if ((item == -1) && ((__this->fields)._dropToRoot == false)) goto label_05d7cb2c;
  if (((__this->fields)._currentDropMode & 0xfffffffeU) == 2) {
    pGVar3 = (__this->fields)._gameManager;
    method_00 = (MethodInfo *)
                System_Linq_Enumerable__ToList_int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields)._dragTopLevel
                           ,(MethodInfo_3500DB0 *)MethodInfo_System_Linq_Enumerable_ToList_int);
    if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05d7cb57;
    GameManagers_MapEditorGameManager__ReorderObjects
              (pGVar3,(System_Collections_Generic_List_int__o *)method_00,(__this->fields)._dropTargetId,
               (__this->fields)._currentDropMode == 3,(__this->fields)._treeViewEnabled,(MethodInfo *)0x0);
  }
  else if ((__this->fields)._treeViewEnabled != false) {
    if ((__this->fields)._dropToRoot == false) {
label_05d7cad0:
      if (-1 < item) {
        __this_00 = (__this->fields)._expanded;
        if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05d7cb57;
        System_Collections_Generic_HashSet_int___Add
                  (__this_00,item,(MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add)
        ;
      }
    }
    else {
      cVar4 = '\x01';
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        cVar4 = (__this->fields)._dropToRoot;
      }
      item = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
      if (cVar4 == '\0') goto label_05d7cad0;
    }
    pGVar3 = (__this->fields)._gameManager;
    method_00 = (MethodInfo *)
                System_Linq_Enumerable__ToList_int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields)._dragTopLevel
                           ,(MethodInfo_3500DB0 *)MethodInfo_System_Linq_Enumerable_ToList_int);
    if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) {
label_05d7cb57:
      ThrowNullReferenceException();
    }
    GameManagers_MapEditorGameManager__ReparentObjects
              (pGVar3,(System_Collections_Generic_List_int__o *)method_00,item,(MethodInfo *)0x0);
  }
  (__this->fields)._dropTargetId = -1;
label_05d7cb2c:
  (__this->fields)._dropIndicatorId = -1;
  (__this->fields)._dropToRoot = false;
  (__this->fields)._currentDropMode = 0;
  UI_MapEditorHierarchyPanel__RefreshDropIndicators(__this,method_00);
  return;
}


// UI.MapEditorHierarchyPanel$$FindHoveredItem
// il2cpp: int32_t UI_MapEditorHierarchyPanel__FindHoveredItem (UI_MapEditorHierarchyPanel_o* __this, UnityEngine_Vector2_o screenPosition, UnityEngine_Camera_o* eventCamera, int32_t* mode, const MethodInfo* method);
// 0x5d7c350
// eh: try 0x5d7c4b3..0x5d7c6cd -> pad 0x5d7c6ec (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d7c704..0x5d7c709 -> pad 0x5d7c735 cleanup
// eh: try 0x5d7c738..0x5d7c742 -> pad 0x5d7c74a catch (...) [compiler noexcept guard]
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7c640: jmp 0x5d7c6ab
// asm:   0x5d7c6d2: jmp 0x5d7c6ec
// asm:   0x5d7c6d4: jmp 0x5d7c6ec
// asm:   0x5d7c6d6: jmp 0x5d7c6ec
// asm:   0x5d7c6d8: jmp 0x5d7c6ec
// asm:   0x5d7c6da: jmp 0x5d7c6ec
// asm:   0x5d7c6dc: jmp 0x5d7c6ec
// asm:   0x5d7c6de: jmp 0x5d7c6ec
// asm:   0x5d7c6e0: jmp 0x5d7c6ec
// asm:   0x5d7c6e2: jmp 0x5d7c6ec
// asm:   0x5d7c6e4: jmp 0x5d7c6ec
// asm:   0x5d7c6e6: jmp 0x5d7c6ec
// asm:   0x5d7c6e8: jmp 0x5d7c6ec
// asm:   0x5d7c6ea: jmp 0x5d7c6ec
// asm:   0x5d7c6ec: mov rbx, rax
// asm:   0x5d7c6ef: cmp edx, 1
// asm:   0x5d7c6f2: jne 0x5d7c738
// asm:   0x5d7c6f4: mov rdi, rbx
// asm:   0x5d7c6f7: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d7c6fc: mov r14, qword ptr [rax]
// asm:   0x5d7c6ff: mov qword ptr [rsp + 0x70], r14
// asm:   0x5d7c704: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d7c709: lea rax, [rip + 0x1513198]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_Dispose
// asm:   0x5d7c710: mov rsi, qword ptr [rax]
// asm:   0x5d7c713: lea rdi, [rsp + 0x20]
// asm:   0x5d7c718: call 0x4da11d0  ; System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose()
// asm:   0x5d7c71d: xor ebp, ebp
// asm:   0x5d7c71f: mov ebx, 0
// asm:   0x5d7c724: test r14, r14
// asm:   0x5d7c727: je 0x5d7c65d
// asm:   0x5d7c72d: mov rdi, r14
// asm:   0x5d7c730: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d7c735: mov rbx, rax
// asm:   0x5d7c738: lea rdi, [rsp + 0x70]
// asm:   0x5d7c73d: call 0x2fdd3f0  ; il2cpp_runtime_helper_02fdd3f0()
// asm:   0x5d7c742: mov rdi, rbx
// asm:   0x5d7c745: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d7c74a: mov rdi, rax
// asm:   0x5d7c74d: call 0x2ab61e0  ; __clang_call_terminate()

int32_t UI_MapEditorHierarchyPanel__FindHoveredItem
                  (UI_MapEditorHierarchyPanel_o *__this,UnityEngine_Vector2_o screenPosition,
                  UnityEngine_Camera_o *eventCamera,int32_t *mode,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Il2CppObject *x;
  bool bVar1;
  int32_t iVar2;
  uint uVar3;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector3_array *fourCornersArray;
  int iVar4;
  int32_t iVar5;
  float fVar6;
  float fVar7;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_a8;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  Il2CppObject *local_48;
  UnityEngine_Object_o *pUStack_40;
  int32_t local_38;
  undefined4 uStack_34;
  
  local_68._8_4_ = in_XMM0_Dc;
  local_68._0_8_ = screenPosition.fields;
  local_68._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_07547ff3 == '\0') {
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
    Il2CppMethodInitialized_07547ff3 = '\x01';
  }
  local_a8.fields._current.fields.key = (Il2CppObject *)0x0;
  local_a8.fields._current.fields.value = (Il2CppObject *)0x0;
  local_a8.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a8.fields._version = 0;
  local_a8.fields._index = 0;
  local_a8.fields._getEnumeratorRetType = 0;
  local_a8.fields._36_4_ = 0;
  *mode = 1;
  fVar6 = UI_MapEditorHierarchyPanel__GetVirtualStride(__this,(MethodInfo *)eventCamera);
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
  if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar7 = (fVar6 - (__this->fields)._virtualRowHeight) * 0.5;
  fVar6 = 0.0;
  if (0.0 <= fVar7) {
    fVar6 = fVar7;
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,__this_00,
             (MethodInfo_4A0FBD0 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_GetEnumerator);
  local_a8.fields._getEnumeratorRetType = local_38;
  local_a8.fields._36_4_ = uStack_34;
  local_a8.fields._current.fields.key = local_48;
  local_a8.fields._current.fields.value = (Il2CppObject *)pUStack_40;
  local_a8.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_58._0_8_;
  local_a8.fields._version = local_58._8_4_;
  local_a8.fields._index = local_58._12_4_;
  local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78 = (float)local_68._4_4_;
  fStack_74 = (float)local_68._4_4_;
  fStack_70 = (float)local_68._4_4_;
  fStack_6c = (float)local_68._4_4_;
  local_58._8_8_ = &local_a8;
  do {
    do {
      do {
        do {
          bVar1 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext
                            (&local_a8,
                             (MethodInfo_4CA10B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_MoveNext
                            );
          x = local_a8.fields._current.fields.value;
          if (!bVar1) {
            iVar5 = 0;
            iVar4 = 0xd;
            goto label_05d7c649;
          }
          iVar5 = (int32_t)local_a8.fields._current.fields.key;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        } while (bVar1);
        if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
      } while (!bVar1);
      __this_01 = UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)x,
                             (MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while (bVar1);
    fourCornersArray = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
    if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_RectTransform__GetWorldCorners(__this_01,fourCornersArray,(MethodInfo *)0x0);
    if (fourCornersArray == (UnityEngine_Vector3_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar3 = (uint)fourCornersArray->max_length;
    if (uVar3 == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (uVar3 < 3) {
      ThrowIndexOutOfRangeException();
    }
  } while (((((float)local_68._0_4_ < fourCornersArray->m_Items[0].fields.x) ||
            (fourCornersArray->m_Items[2].fields.x <= (float)local_68._0_4_ &&
             (float)local_68._0_4_ != fourCornersArray->m_Items[2].fields.x)) ||
           (fVar7 = fourCornersArray->m_Items[0].fields.y, local_78 < fVar7 - fVar6)) ||
          (fVar8 = fourCornersArray->m_Items[1].fields.y, fVar6 + fVar8 < local_78));
  fVar8 = fVar8 - fVar7;
  if (fVar8 <= 0.0) {
    if ((__this->fields)._treeViewEnabled == false) {
      fVar8 = 0.5;
      goto label_05d7c69c;
    }
  }
  else {
    fVar8 = (local_78 - fVar7) / fVar8;
    if ((__this->fields)._treeViewEnabled == false) {
label_05d7c69c:
      uVar3 = fVar8 < 0.5 | 2;
      goto label_05d7c6ab;
    }
    uVar3 = 2;
    if ((0.85 < fVar8) || (uVar3 = 3, fVar8 < 0.15)) goto label_05d7c6ab;
  }
  uVar3 = 1;
label_05d7c6ab:
  *mode = uVar3;
  iVar4 = 0xc;
label_05d7c649:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
            (&local_a8,
             (MethodInfo_4CA11D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_GameObject_Dispose);
  iVar2 = -1;
  if (iVar4 == 0xc) {
    iVar2 = iVar5;
  }
  return iVar2;
}


// UI.MapEditorHierarchyPanel$$IsValidDropTarget
// il2cpp: bool UI_MapEditorHierarchyPanel__IsValidDropTarget (UI_MapEditorHierarchyPanel_o* __this, int32_t targetId, const MethodInfo* method);
// 0x5d7c760
// eh: try 0x5d7c843..0x5d7c85a -> pad 0x5d7c894 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d7c8ac..0x5d7c8b1 -> pad 0x5d7c8d2 cleanup
// eh: try 0x5d7c8d5..0x5d7c8df -> pad 0x5d7c8e7 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7c83c: nop dword ptr [rax]
// asm:   0x5d7c892: jmp 0x5d7c894
// asm:   0x5d7c894: mov rbx, rax
// asm:   0x5d7c897: cmp edx, 1
// asm:   0x5d7c89a: jne 0x5d7c8d5
// asm:   0x5d7c89c: mov rdi, rbx
// asm:   0x5d7c89f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d7c8a4: mov rbx, qword ptr [rax]
// asm:   0x5d7c8a7: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d7c8ac: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d7c8b1: lea rax, [rip + 0x1511928]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x5d7c8b8: mov rsi, qword ptr [rax]
// asm:   0x5d7c8bb: mov rdi, rsp
// asm:   0x5d7c8be: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x5d7c8c3: xor ebp, ebp
// asm:   0x5d7c8c5: test rbx, rbx
// asm:   0x5d7c8c8: je 0x5d7c87c
// asm:   0x5d7c8ca: mov rdi, rbx
// asm:   0x5d7c8cd: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d7c8d2: mov rbx, rax
// asm:   0x5d7c8d5: lea rdi, [rsp + 0x18]
// asm:   0x5d7c8da: call 0x2fdd420  ; il2cpp_runtime_helper_02fdd420()
// asm:   0x5d7c8df: mov rdi, rbx
// asm:   0x5d7c8e2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d7c8e7: mov rdi, rax
// asm:   0x5d7c8ea: call 0x2ab61e0  ; __clang_call_terminate()

bool UI_MapEditorHierarchyPanel__IsValidDropTarget
               (UI_MapEditorHierarchyPanel_o *__this,int32_t targetId,MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  bool bVar2;
  MethodInfo *in_RCX;
  int iVar3;
  UI_MapEditorHierarchyPanel_o *__this_00;
  UnityEngine_Transform_o local_48;
  System_Threading_CancellationTokenSource_o *local_30;
  UnityEngine_Transform_o *local_28;
  
  if (Il2CppMethodInitialized_07547ff4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    Il2CppMethodInitialized_07547ff4 = '\x01';
  }
  local_48.klass = (UnityEngine_Transform_c *)0x0;
  local_48.monitor = (void *)0x0;
  local_48.fields.m_CachedPtr = 0;
  if (targetId < 0) {
    bVar2 = true;
  }
  else {
    pSVar1 = (__this->fields)._dragTopLevel;
    if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) {
label_05d7c88d:
      ThrowNullReferenceException();
    }
    bVar2 = System_Collections_Generic_HashSet_int___Contains
                      (pSVar1,targetId,
                       (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar2) {
      bVar2 = false;
    }
    else {
      pSVar1 = (__this->fields)._dragTopLevel;
      if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05d7c88d;
      System_Collections_Generic_HashSet_int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_48,pSVar1,
                 (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
      local_30 = (System_Threading_CancellationTokenSource_o *)0x0;
      local_28 = &local_48;
      do {
        __this_00 = (UI_MapEditorHierarchyPanel_o *)&local_48;
        bVar2 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_48,
                           (MethodInfo_4C3AEE0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
        if (!bVar2) {
          iVar3 = 7;
          goto label_05d7c86a;
        }
        bVar2 = UI_MapEditorHierarchyPanel__IsDescendant
                          (__this_00,targetId,(int32_t)local_48.fields.m_CachedPtr,in_RCX);
      } while (!bVar2);
      iVar3 = 6;
label_05d7c86a:
      System_Collections_Generic_HashSet_Enumerator_int___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_48,
                 (MethodInfo_4C3AED0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
      bVar2 = iVar3 != 6;
    }
  }
  return bVar2;
}


// UI.MapEditorHierarchyPanel$$IsDescendant
// il2cpp: bool UI_MapEditorHierarchyPanel__IsDescendant (UI_MapEditorHierarchyPanel_o* __this, int32_t id, int32_t ancestorId, const MethodInfo* method);
// 0x5d7cb60
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7cbf5: lea r15, [rip + 0x1514704]  ; MethodInfo_System_Collections_Generic_HashSet_int_Add
// asm:   0x5d7cbfc: lea r12, [rip + 0x14fdd8d]  ; TypeInfo_Map_MapLoader
// asm:   0x5d7cc03: lea r13, [rip + 0x150d3d6]  ; MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey
// asm:   0x5d7cc0a: nop word ptr [rax + rax]

bool UI_MapEditorHierarchyPanel__IsDescendant
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,int32_t ancestorId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  bool bVar2;
  System_Collections_Generic_HashSet_int__o *__this_00;
  Map_MapObject_o *obj;
  
  if (Il2CppMethodInitialized_07547ff5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07547ff5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_00,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) {
    if (-1 < id) {
label_05d7ccc5:
      ThrowNullReferenceException();
    }
label_05d7ccb4:
    bVar2 = false;
  }
  else {
    do {
      if ((id < 0) ||
         (bVar2 = System_Collections_Generic_HashSet_int___Add
                            (__this_00,id,
                             (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add),
         !bVar2)) goto label_05d7ccb4;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05d7ccc5;
      bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar1,id,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (!bVar2) goto label_05d7ccb4;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05d7ccc5;
      obj = System_Collections_Generic_Dictionary_int__object___get_Item
                      (pSVar1,id,
                       (MethodInfo_4A0F690 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
      id = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
    } while (id != ancestorId);
    bVar2 = true;
  }
  return bVar2;
}


// UI.MapEditorHierarchyPanel$$GetTopLevelIds
// il2cpp: System_Collections_Generic_HashSet_int__o* UI_MapEditorHierarchyPanel__GetTopLevelIds (UI_MapEditorHierarchyPanel_o* __this, System_Collections_Generic_HashSet_int__o* ids, const MethodInfo* method);
// 0x5d7bf20
// eh: try 0x5d7c06a..0x5d7c1c9 -> pad 0x5d7c1d4 (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d7c1fe..0x5d7c203 -> pad 0x5d7c222 cleanup
// eh: try 0x5d7c225..0x5d7c22f -> pad 0x5d7c237 catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7c0af: nop 
// asm:   0x5d7c169: jmp 0x5d7c060
// asm:   0x5d7c1ce: jmp 0x5d7c1e6
// asm:   0x5d7c1d0: jmp 0x5d7c1e6
// asm:   0x5d7c1d2: jmp 0x5d7c1e6
// asm:   0x5d7c1d4: jmp 0x5d7c1e6
// asm:   0x5d7c1d6: jmp 0x5d7c1e6
// asm:   0x5d7c1d8: jmp 0x5d7c1e6
// asm:   0x5d7c1da: jmp 0x5d7c1e6
// asm:   0x5d7c1dc: jmp 0x5d7c1e6
// asm:   0x5d7c1de: jmp 0x5d7c1e6
// asm:   0x5d7c1e0: jmp 0x5d7c1e6
// asm:   0x5d7c1e2: jmp 0x5d7c1e6
// asm:   0x5d7c1e4: jmp 0x5d7c1e6
// asm:   0x5d7c1e6: mov rbx, rax
// asm:   0x5d7c1e9: cmp edx, 1
// asm:   0x5d7c1ec: jne 0x5d7c225
// asm:   0x5d7c1ee: mov rdi, rbx
// asm:   0x5d7c1f1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d7c1f6: mov rbx, qword ptr [rax]
// asm:   0x5d7c1f9: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d7c1fe: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d7c203: lea rax, [rip + 0x1511fd6]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x5d7c20a: mov rsi, qword ptr [rax]
// asm:   0x5d7c20d: mov rdi, rsp
// asm:   0x5d7c210: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x5d7c215: test rbx, rbx
// asm:   0x5d7c218: je 0x5d7c1a1
// asm:   0x5d7c21a: mov rdi, rbx
// asm:   0x5d7c21d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d7c222: mov rbx, rax
// asm:   0x5d7c225: lea rdi, [rsp + 0x20]
// asm:   0x5d7c22a: call 0x2fdd450  ; il2cpp_runtime_helper_02fdd450()
// asm:   0x5d7c22f: mov rdi, rbx
// asm:   0x5d7c232: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d7c237: mov rdi, rax
// asm:   0x5d7c23a: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_HashSet_int__o *
UI_MapEditorHierarchyPanel__GetTopLevelIds
          (UI_MapEditorHierarchyPanel_o *__this,System_Collections_Generic_HashSet_int__o *ids,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  int32_t item;
  bool bVar2;
  int32_t item_00;
  System_Collections_Generic_HashSet_int__o *__this_00;
  Map_MapObject_o *obj;
  System_Collections_Generic_HashSet_Enumerator_T__o local_68;
  System_Collections_Generic_HashSet_int__o *local_50;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07547ff6 == '\0') {
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
    Il2CppMethodInitialized_07547ff6 = '\x01';
  }
  local_68.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  local_50 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (local_50,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (ids == (System_Collections_Generic_HashSet_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_int___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,ids,
             (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
  local_68.fields._current = local_38;
  local_68.fields._set = (System_Collections_Generic_HashSet_T__o *)local_48._0_8_;
  local_68.fields._index = local_48._8_4_;
  local_68.fields._version = local_48._12_4_;
  local_48._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_48._8_8_ = &local_68;
  do {
    while( true ) {
      bVar2 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                        (&local_68,
                         (MethodInfo_4C3AEE0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
      if (!bVar2) {
        System_Collections_Generic_HashSet_Enumerator_int___Dispose
                  (&local_68,
                   (MethodInfo_4C3AED0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose)
        ;
        return local_50;
      }
      item = (int32_t)local_68.fields._current;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor
                (__this_00,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
      item_00 = item;
      if (__this_00 != (System_Collections_Generic_HashSet_int__o *)0x0) break;
      if (-1 < item) {
        ThrowNullReferenceException();
      }
label_05d7c175:
      if (local_50 == (System_Collections_Generic_HashSet_int__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_int___Add
                (local_50,item,(MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
    }
    do {
      if ((item_00 < 0) ||
         (bVar2 = System_Collections_Generic_HashSet_int___Add
                            (__this_00,item_00,
                             (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add),
         !bVar2)) goto label_05d7c175;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar1,item_00,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (!bVar2) goto label_05d7c175;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      obj = System_Collections_Generic_Dictionary_int__object___get_Item
                      (pSVar1,item_00,
                       (MethodInfo_4A0F690 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
      item_00 = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
      bVar2 = System_Collections_Generic_HashSet_int___Contains
                        (ids,item_00,
                         (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    } while (!bVar2);
  } while( true );
}


// UI.MapEditorHierarchyPanel$$OnButtonClick
// il2cpp: void UI_MapEditorHierarchyPanel__OnButtonClick (UI_MapEditorHierarchyPanel_o* __this, int32_t id, const MethodInfo* method);
// 0x5d7ccd0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7d034: jmp 0x5d7d2be
// asm:   0x5d7d13f: mov rdi, r15
// asm:   0x5d7d1eb: lea r14, [rip + 0x14fd79e]  ; TypeInfo_Map_MapLoader
// asm:   0x5d7d1f2: mov dword ptr [rsp + 0xc], r15d
// asm:   0x5d7d1f7: jmp 0x5d7d220

void UI_MapEditorHierarchyPanel__OnButtonClick
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,MethodInfo *method)

{
  int iVar1;
  UI_MapEditorMenu_o *__this_00;
  Settings_InputSettings_o *pSVar2;
  Settings_MapEditorInputSettings_o *pSVar3;
  Settings_KeybindSetting_o *__this_01;
  System_Collections_Generic_Dictionary_int__int__o *pSVar4;
  System_Collections_Generic_HashSet_int__o *pSVar5;
  System_Collections_Generic_HashSet_MapObject__o *pSVar6;
  Cameras_BaseCamera_o *pCVar7;
  Utility_BaseComponentCache_o *pUVar8;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  System_Collections_Generic_Dictionary_int__object__o *pSVar9;
  bool bVar10;
  bool bVar11;
  int32_t iVar12;
  int32_t key;
  int32_t iVar13;
  UnityEngine_Transform_o *__this_04;
  Map_MapObject_o *pMVar14;
  GameManagers_MapEditorGameManager_o *pGVar15;
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o value;
  float fStack_48;
  float fStack_44;
  
  if (Il2CppMethodInitialized_07547ff7 == '\0') {
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
    Il2CppMethodInitialized_07547ff7 = '\x01';
  }
  if ((__this->fields)._suppressClick != false) {
    (__this->fields)._suppressClick = false;
    return;
  }
  __this_00 = (__this->fields)._menu;
  if (__this_00 == (UI_MapEditorMenu_o *)0x0) goto label_05d7d2be;
  bVar10 = UI_MapEditorMenu__IsPopupActive(__this_00,(MethodInfo *)0x0);
  if (bVar10) {
    return;
  }
  bVar10 = UnityEngine_Input__GetKey(0x130,(MethodInfo *)0x0);
  bVar11 = true;
  if (!bVar10) {
    bVar11 = UnityEngine_Input__GetKey(0x12f,(MethodInfo *)0x0);
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar2 == (Settings_InputSettings_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).MapEditor, pSVar3 == (Settings_MapEditorInputSettings_o *)0x0)) ||
     (__this_01 = (pSVar3->fields).Multiselect, __this_01 == (Settings_KeybindSetting_o *)0x0))
  goto label_05d7d2be;
  bVar10 = Settings_KeybindSetting__GetKey(__this_01,false,(MethodInfo *)0x0);
  if ((bVar11 != false) && (iVar1 = (__this->fields)._lastClickedItem, iVar1 != -1)) {
    pSVar4 = (__this->fields)._idToIndex;
    if (pSVar4 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_05d7d2be;
    bVar11 = System_Collections_Generic_Dictionary_int__int___ContainsKey
                       (pSVar4,iVar1,
                        (MethodInfo_4A04140 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
    if (bVar11) {
      pSVar4 = (__this->fields)._idToIndex;
      if (pSVar4 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_05d7d2be;
      bVar11 = System_Collections_Generic_Dictionary_int__int___ContainsKey
                         (pSVar4,id,
                          (MethodInfo_4A04140 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
      if (bVar11) {
        if (!bVar10) {
          pGVar15 = (__this->fields)._gameManager;
          if (pGVar15 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05d7d2be;
          GameManagers_MapEditorGameManager__DeselectAll(pGVar15,(MethodInfo *)0x0);
        }
        pSVar4 = (__this->fields)._idToIndex;
        if (pSVar4 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_05d7d2be;
        iVar12 = System_Collections_Generic_Dictionary_int__int___get_Item
                           (pSVar4,(__this->fields)._lastClickedItem,
                            (MethodInfo_4A03E70 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
        pSVar4 = (__this->fields)._idToIndex;
        if (pSVar4 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_05d7d2be;
        key = System_Collections_Generic_Dictionary_int__int___get_Item
                        (pSVar4,id,
                         (MethodInfo_4A03E70 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
        if (iVar12 < key) {
          key = iVar12;
        }
        pSVar4 = (__this->fields)._idToIndex;
        if (pSVar4 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_05d7d2be;
        iVar12 = System_Collections_Generic_Dictionary_int__int___get_Item
                           (pSVar4,(__this->fields)._lastClickedItem,
                            (MethodInfo_4A03E70 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
        pSVar4 = (__this->fields)._idToIndex;
        if (pSVar4 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_05d7d2be;
        iVar13 = System_Collections_Generic_Dictionary_int__int___get_Item
                           (pSVar4,id,
                            (MethodInfo_4A03E70 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
        if (iVar13 < iVar12) {
          iVar13 = iVar12;
        }
        if (key <= iVar13) {
          do {
            pSVar4 = (__this->fields)._indexToId;
            if (pSVar4 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_05d7d2be;
            iVar12 = System_Collections_Generic_Dictionary_int__int___get_Item
                               (pSVar4,key,
                                (MethodInfo_4A03E70 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar9 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar9 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05d7d2be;
            bVar10 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                               (pSVar9,iVar12,
                                (MethodInfo_4A0F950 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
            if (bVar10) {
              pGVar15 = (__this->fields)._gameManager;
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              pSVar9 = (System_Collections_Generic_Dictionary_int__object__o *)
                       TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
              if ((pSVar9 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
                 (pMVar14 = System_Collections_Generic_Dictionary_int__object___get_Item
                                      (pSVar9,iVar12,
                                       (MethodInfo_4A0F690 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item
                                      ), pGVar15 == (GameManagers_MapEditorGameManager_o *)0x0))
              goto label_05d7d2be;
              GameManagers_MapEditorGameManager__SelectObject(pGVar15,pMVar14,(MethodInfo *)0x0);
            }
            key = key + 1;
          } while (key <= iVar13);
        }
        pGVar15 = (__this->fields)._gameManager;
        if (pGVar15 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05d7d2be;
        GameManagers_MapEditorGameManager__OnSelectionChange(pGVar15,false,(MethodInfo *)0x0);
        (__this->fields)._lastClickedItem = id;
        goto label_05d7d1cb;
      }
    }
  }
  pSVar5 = (__this->fields)._selected;
  if (pSVar5 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05d7d2be;
  bVar11 = System_Collections_Generic_HashSet_int___Contains
                     (pSVar5,id,
                      (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
  if (bVar11) {
    pGVar15 = (__this->fields)._gameManager;
    if (bVar10) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar9 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if ((pSVar9 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
         (pMVar14 = System_Collections_Generic_Dictionary_int__object___get_Item
                              (pSVar9,id,
                               (MethodInfo_4A0F690 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
         pGVar15 == (GameManagers_MapEditorGameManager_o *)0x0)) goto label_05d7d2be;
      GameManagers_MapEditorGameManager__DeselectObject(pGVar15,pMVar14,(MethodInfo *)0x0);
      goto label_05d7d1a9;
    }
    if ((pGVar15 == (GameManagers_MapEditorGameManager_o *)0x0) ||
       (pSVar6 = (pGVar15->fields).SelectedObjects,
       pSVar6 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto label_05d7d2be;
    if (1 < (pSVar6->fields)._count) goto label_05d7d142;
    pCVar7 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if ((pCVar7 == (Cameras_BaseCamera_o *)0x0) ||
       (pUVar8 = (pCVar7->fields).Cache, pUVar8 == (Utility_BaseComponentCache_o *)0x0)) goto label_05d7d2be;
    __this_02 = (pUVar8->fields).Transform;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar9 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if ((((pSVar9 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
         (pMVar14 = System_Collections_Generic_Dictionary_int__object___get_Item
                              (pSVar9,id,
                               (MethodInfo_4A0F690 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
         pMVar14 == (Map_MapObject_o *)0x0)) ||
        (__this_03 = (pMVar14->fields).GameObject, __this_03 == (UnityEngine_GameObject_o *)0x0)) ||
       (__this_04 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0),
       __this_04 == (UnityEngine_Transform_o *)0x0)) goto label_05d7d2be;
    UVar17 = UnityEngine_Transform__get_position(__this_04,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_05d7d2be;
    UVar18 = UnityEngine_Transform__get_forward(__this_02,(MethodInfo *)0x0);
    fStack_48 = UVar17.fields.x;
    fStack_44 = UVar17.fields.y;
    value.fields.x = UVar18.fields.x * -50.0 + fStack_48;
    value.fields.y = UVar18.fields.y * -50.0 + fStack_44;
    value.fields.z = UVar18.fields.z * -50.0 + UVar17.fields.z;
    UnityEngine_Transform__set_position(__this_02,value,(MethodInfo *)0x0);
  }
  else {
    pSVar5 = (__this->fields)._selected;
    if (pSVar5 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05d7d2be;
    iVar1 = (pSVar5->fields)._count;
    if ((~bVar10 & iVar1 != 0) != 0) {
      if (iVar1 < 1) goto label_05d7d1c3;
      pGVar15 = (__this->fields)._gameManager;
      if (pGVar15 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05d7d2be;
label_05d7d142:
      GameManagers_MapEditorGameManager__DeselectAll(pGVar15,(MethodInfo *)0x0);
    }
    pGVar15 = (__this->fields)._gameManager;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar9 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if ((pSVar9 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
       (pMVar14 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar9,id,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
       pGVar15 == (GameManagers_MapEditorGameManager_o *)0x0)) goto label_05d7d2be;
    GameManagers_MapEditorGameManager__SelectObject(pGVar15,pMVar14,(MethodInfo *)0x0);
label_05d7d1a9:
    pGVar15 = (__this->fields)._gameManager;
    if (pGVar15 == (GameManagers_MapEditorGameManager_o *)0x0) {
label_05d7d2be:
      ThrowNullReferenceException();
    }
    GameManagers_MapEditorGameManager__OnSelectionChange(pGVar15,false,(MethodInfo *)0x0);
  }
label_05d7d1c3:
  (__this->fields)._lastClickedItem = id;
label_05d7d1cb:
  fVar16 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastclickedTime = fVar16;
  return;
}


// UI.MapEditorHierarchyPanel$$SyncSelectedItems
// il2cpp: void UI_MapEditorHierarchyPanel__SyncSelectedItems (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d75cc0
// eh: try 0x5d75e64..0x5d7620f -> pad 0x5d762c8 (+40 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d76291..0x5d76296 -> pad 0x5d762bb cleanup
// eh: try 0x5d762be..0x5d762c6 -> pad 0x5d7631c catch (...) [compiler noexcept guard]
// eh: try 0x5d762df..0x5d762e4 -> pad 0x5d76309 cleanup
// eh: try 0x5d7630c..0x5d76314 -> pad 0x5d7631c catch (...) [compiler noexcept guard]
// asm: 83 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7603c: nop dword ptr [rax]
// asm:   0x5d76214: jmp 0x5d762c8
// asm:   0x5d76219: jmp 0x5d762c8
// asm:   0x5d7621e: jmp 0x5d762c8
// asm:   0x5d76223: jmp 0x5d762c8
// asm:   0x5d76228: jmp 0x5d762c8
// asm:   0x5d7622d: jmp 0x5d762c8
// asm:   0x5d76232: jmp 0x5d762c8
// asm:   0x5d76237: jmp 0x5d762c8
// asm:   0x5d7623c: jmp 0x5d7627a
// asm:   0x5d7623e: jmp 0x5d7627a
// asm:   0x5d76240: jmp 0x5d7627a
// asm:   0x5d76242: jmp 0x5d7627a
// asm:   0x5d76244: jmp 0x5d7627a
// asm:   0x5d76246: jmp 0x5d7627a
// asm:   0x5d76248: jmp 0x5d7627a
// asm:   0x5d7624a: jmp 0x5d7627a
// asm:   0x5d7624c: jmp 0x5d7627a
// asm:   0x5d7624e: jmp 0x5d762c8
// asm:   0x5d76250: jmp 0x5d762c8
// asm:   0x5d76252: jmp 0x5d762c8
// asm:   0x5d76254: jmp 0x5d762c8
// asm:   0x5d76256: jmp 0x5d762c8
// asm:   0x5d76258: jmp 0x5d762c8
// asm:   0x5d7625a: jmp 0x5d7627a
// asm:   0x5d7625c: jmp 0x5d7627a
// asm:   0x5d7625e: jmp 0x5d7627a
// asm:   0x5d76260: jmp 0x5d7627a
// asm:   0x5d76262: jmp 0x5d7627a
// asm:   0x5d76264: jmp 0x5d7627a
// asm:   0x5d76266: jmp 0x5d7627a
// asm:   0x5d76268: jmp 0x5d762c8
// asm:   0x5d7626a: jmp 0x5d762c8
// asm:   0x5d7626c: jmp 0x5d762c8
// asm:   0x5d7626e: jmp 0x5d762c8
// asm:   0x5d76270: jmp 0x5d762c8
// asm:   0x5d76272: jmp 0x5d7627a
// asm:   0x5d76274: jmp 0x5d7627a
// asm:   0x5d76276: jmp 0x5d7627a
// asm:   0x5d76278: jmp 0x5d7627a
// asm:   0x5d7627a: mov r14, rax
// asm:   0x5d7627d: cmp edx, 1
// asm:   0x5d76280: jne 0x5d762be
// asm:   0x5d76282: mov rdi, r14
// asm:   0x5d76285: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d7628a: mov rbx, qword ptr [rax]
// asm:   0x5d7628d: mov qword ptr [rsp], rbx
// asm:   0x5d76291: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d76296: lea rax, [rip + 0x151810b]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x5d7629d: mov rsi, qword ptr [rax]
// asm:   0x5d762a0: lea rdi, [rsp + 0x20]
// asm:   0x5d762a5: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5d762aa: test rbx, rbx
// asm:   0x5d762ad: je 0x5d7618d
// asm:   0x5d762b3: mov rdi, rbx
// asm:   0x5d762b6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d762bb: mov r14, rax
// asm:   0x5d762be: mov rdi, rsp
// asm:   0x5d762c1: call 0x2fdd4b0  ; il2cpp_runtime_helper_02fdd4b0()
// asm:   0x5d762c6: jmp 0x5d76314
// asm:   0x5d762c8: mov r14, rax
// asm:   0x5d762cb: cmp edx, 1
// asm:   0x5d762ce: jne 0x5d7630c
// asm:   0x5d762d0: mov rdi, r14
// asm:   0x5d762d3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d762d8: mov rbp, qword ptr [rax]
// asm:   0x5d762db: mov qword ptr [rsp], rbp
// asm:   0x5d762df: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d762e4: lea rax, [rip + 0x1517f0d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5d762eb: mov rsi, qword ptr [rax]
// asm:   0x5d762ee: lea rdi, [rsp + 0x40]
// asm:   0x5d762f3: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5d762f8: test rbp, rbp
// asm:   0x5d762fb: je 0x5d75fd3
// asm:   0x5d76301: mov rdi, rbp
// asm:   0x5d76304: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d76309: mov r14, rax
// asm:   0x5d7630c: mov rdi, rsp
// asm:   0x5d7630f: call 0x2fdd480  ; il2cpp_runtime_helper_02fdd480()
// asm:   0x5d76314: mov rdi, r14
// asm:   0x5d76317: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d7631c: mov rdi, rax
// asm:   0x5d7631f: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorHierarchyPanel__SyncSelectedItems(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  Il2CppObject *pIVar5;
  int32_t key;
  bool bVar6;
  System_Collections_Generic_List_TSource__o *__this_00;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  undefined1 local_88 [16];
  Il2CppObject *local_78;
  Il2CppObject *local_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  Il2CppObject *local_58;
  undefined1 local_48 [8];
  System_Collections_Generic_List_Enumerator_int__o *pSStack_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07547ff8 == '\0') {
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
    Il2CppMethodInitialized_07547ff8 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_List_Enumerator_int__o *)0x0;
  local_38 = (Il2CppObject *)0x0;
  local_70 = (Il2CppObject *)0x0;
  local_68 = (undefined1  [8])0x0;
  uStack_60._0_4_ = 0;
  uStack_60._4_4_ = 0;
  local_58 = (Il2CppObject *)0x0;
  __this_00 = System_Linq_Enumerable__ToList_int_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields)._selected,
                         (MethodInfo_3500DB0 *)MethodInfo_System_Linq_Enumerable_ToList_int);
  if (__this_00 != (System_Collections_Generic_List_TSource__o *)0x0) {
    System_Collections_Generic_List_int___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_88,
               (System_Collections_Generic_List_int__o *)__this_00,
               (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_38 = local_78;
    local_48 = (undefined1  [8])local_88._0_8_;
    pSStack_40 = (System_Collections_Generic_List_Enumerator_int__o *)local_88._8_8_;
    local_88._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_88._8_8_ = (System_Collections_Generic_List_Enumerator_int__o *)local_48;
    while( true ) {
      bVar6 = System_Collections_Generic_List_Enumerator_int___MoveNext
                        ((System_Collections_Generic_List_Enumerator_int__o *)local_48,
                         (MethodInfo_4C3B4A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
      if (!bVar6) break;
      key = (int32_t)local_38;
      local_70 = (Il2CppObject *)0x0;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_int__object___TryGetValue
                (pSVar1,key,&local_70,
                 (MethodInfo_4A114B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_TryGetValue);
      pGVar2 = (__this->fields)._gameManager;
      if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar6 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar3,local_70,
                         (MethodInfo_4FB3720 *)
                         MethodInfo_System_Collections_Generic_HashSet_MapObject_Contains);
      if (!bVar6) {
        pSVar4 = (__this->fields)._selected;
        if (pSVar4 == (System_Collections_Generic_HashSet_int__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_int___Remove
                  (pSVar4,key,(MethodInfo_4FA80C0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
        pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
        if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                          (pSVar1,key,
                           (MethodInfo_4A0F950 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ContainsKey);
        if (bVar6) {
          pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
          if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar7 = System_Collections_Generic_Dictionary_int__object___get_Item
                             (pSVar1,key,
                              (MethodInfo_4A0F690 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_get_Item);
          if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar8 = UnityEngine_Transform__Find(pUVar8,"Highlight",(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_int___Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)local_48,
               (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    pGVar2 = (__this->fields)._gameManager;
    if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects,
       pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_88,pSVar3,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
      local_58 = local_78;
      local_68 = (undefined1  [8])local_88._0_8_;
      uStack_60 = (System_Collections_Generic_List_Enumerator_int__o *)local_88._8_8_;
      local_88._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_88._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_68;
      while( true ) {
        do {
          bVar6 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                             (MethodInfo_4C456D0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
          pIVar5 = local_58;
          if (!bVar6) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                       (MethodInfo_4C456C0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
            return;
          }
          if (local_58 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (local_58[2].klass == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar4 = (__this->fields)._selected;
          if (pSVar4 == (System_Collections_Generic_HashSet_int__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar6 = System_Collections_Generic_HashSet_int___Contains
                            (pSVar4,*(int32_t *)&((local_58[2].klass)->_1).byval_arg.data,
                             (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains)
          ;
        } while (bVar6);
        if (pIVar5[2].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = (__this->fields)._selected;
        if (pSVar4 == (System_Collections_Generic_HashSet_int__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_int___Add
                  (pSVar4,*(int32_t *)&((pIVar5[2].klass)->_1).byval_arg.data,
                   (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
        if (pIVar5[2].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
        if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
        bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                          (pSVar1,*(int32_t *)&((pIVar5[2].klass)->_1).byval_arg.data,
                           (MethodInfo_4A0F950 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ContainsKey);
        if (bVar6) {
          if (pIVar5[2].klass == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
          if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar7 = System_Collections_Generic_Dictionary_int__object___get_Item
                             (pSVar1,*(int32_t *)&((pIVar5[2].klass)->_1).byval_arg.data,
                              (MethodInfo_4A0F690 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_get_Item);
          if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar8 = UnityEngine_Transform__Find(pUVar8,"Highlight",(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorHierarchyPanel$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel___ctor (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d7d2d0

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
  
  if (Il2CppMethodInitialized_07547ff9 == '\0') {
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
    Il2CppMethodInitialized_07547ff9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._itemPool = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._itemPool);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData);
  System_Collections_Generic_List_MapEditorHierarchyPanel_RowData____ctor
            (__this_01,
             (MethodInfo_3AAA380 *)
             MethodInfo_System_Collections_Generic_List_MapEditorHierarchyPanel_RowData_ctor);
  (__this->fields)._rows = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rows);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_GameObject);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_int__object__o *)__this_02,
             (MethodInfo_4A0EB10 *)MethodInfo_System_Collections_Generic_Dictionary_int_GameObject_ctor);
  (__this->fields)._idToItem = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._idToItem);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int);
  System_Collections_Generic_Dictionary_int__int____ctor
            (pSVar1,(MethodInfo_4A032E0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
  (__this->fields)._idToIndex = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._idToIndex);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int);
  System_Collections_Generic_Dictionary_int__int____ctor
            (pSVar1,(MethodInfo_4A032E0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
  (__this->fields)._indexToId = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._indexToId);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar2,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  (__this->fields)._selected = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selected);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar2,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  (__this->fields)._expanded = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._expanded);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_List_int);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_int__object__o *)__this_03,
             (MethodInfo_4A0EB10 *)MethodInfo_System_Collections_Generic_Dictionary_int_List_int_ctor);
  (__this->fields)._treeChildren = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._treeChildren);
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (__this_04,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  (__this->fields)._treeRoots = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._treeRoots);
  (__this->fields)._lastClickedItem = -1;
  (__this->fields)._dragSourceId = -1;
  (__this->fields)._dropTargetId = -1;
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar2,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  (__this->fields)._dragTopLevel = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dragTopLevel);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(__this_05,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._searchSetting = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._searchSetting);
  (__this->fields)._virtualRowHeight = 22.0;
  (__this->fields)._dropIndicatorId = -1;
  (__this->fields)._contextTargetId = -1;
  UI_MapEditorScaledPanel___ctor((UI_MapEditorScaledPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel$$<Setup>b__75_0
// il2cpp: void UI_MapEditorHierarchyPanel___Setup_b__75_0 (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d7d660

void UI_MapEditorHierarchyPanel___Setup_b__75_0(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel__Sync(__this,method);
  return;
}


// UI.MapEditorHierarchyPanel$$<Setup>b__75_1
// il2cpp: void UI_MapEditorHierarchyPanel___Setup_b__75_1 (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d7d670

void UI_MapEditorHierarchyPanel___Setup_b__75_1(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel__OnModeButtonClick(__this,method);
  return;
}


// UI.MapEditorHierarchyPanel$$<Setup>b__75_2
// il2cpp: void UI_MapEditorHierarchyPanel___Setup_b__75_2 (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d7d680

void UI_MapEditorHierarchyPanel___Setup_b__75_2(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  
  piVar1 = &(__this->fields)._currentPage;
  *piVar1 = *piVar1 + -1;
  UI_MapEditorHierarchyPanel__Sync(__this,method);
  return;
}


// UI.MapEditorHierarchyPanel$$<Setup>b__75_3
// il2cpp: void UI_MapEditorHierarchyPanel___Setup_b__75_3 (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x5d7d690

void UI_MapEditorHierarchyPanel___Setup_b__75_3(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  
  piVar1 = &(__this->fields)._currentPage;
  *piVar1 = *piVar1 + 1;
  UI_MapEditorHierarchyPanel__Sync(__this,method);
  return;
}


// UI.MapEditorHierarchyPanel$$<AddResizeHandle>b__76_0
// il2cpp: void UI_MapEditorHierarchyPanel___AddResizeHandle_b__76_0 (UI_MapEditorHierarchyPanel_o* __this, float w, const MethodInfo* method);
// 0x5d7d6a0

void UI_MapEditorHierarchyPanel___AddResizeHandle_b__76_0
               (UI_MapEditorHierarchyPanel_o *__this,float w,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_FloatSetting_o *__this_00;
  UI_MapEditorMenu_o *__this_01;
  
  if (Il2CppMethodInitialized_07547ffa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_07547ffa = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar1 != (Settings_MapEditorSettings_o *)0x0) &&
     (__this_00 = (pSVar1->fields).HierarchyPanelWidth, __this_00 != (Settings_FloatSetting_o *)0x0)) {
    Settings_TypedSetting_float___set_Value
              ((Settings_TypedSetting_float__o *)__this_00,w,
               (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
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


