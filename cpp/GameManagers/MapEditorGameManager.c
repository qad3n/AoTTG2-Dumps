// Type: GameManagers.MapEditorGameManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameManagers/MapEditorGameManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/MapEditorGameManager.cs
// --------------------------------

// GameManagers.MapEditorGameManager.<>c$$.cctor
// il2cpp: void GameManagers_MapEditorGameManager___c___cctor (const MethodInfo* method);
// 0x5954e30

void GameManagers_MapEditorGameManager___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075458a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager_c);
    Il2CppMethodInitialized_075458a0 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9 =
       (GameManagers_MapEditorGameManager___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9);
  return;
}


// GameManagers.MapEditorGameManager.<>c$$.ctor
// il2cpp: void GameManagers_MapEditorGameManager___c___ctor (GameManagers_MapEditorGameManager___c_o* __this, const MethodInfo* method);
// 0x5954ea0

void GameManagers_MapEditorGameManager___c___ctor
               (GameManagers_MapEditorGameManager___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager.<>c$$<Copy>b__29_0
// il2cpp: int32_t GameManagers_MapEditorGameManager___c___Copy_b__29_0 (GameManagers_MapEditorGameManager___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x5954eb0

int32_t GameManagers_MapEditorGameManager___c___Copy_b__29_0
                  (GameManagers_MapEditorGameManager___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o == (Map_MapObject_o *)0x0) ||
     (pMVar1 = (o->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Id;
}


// GameManagers.MapEditorGameManager.<>c$$<Copy>b__29_1
// il2cpp: bool GameManagers_MapEditorGameManager___c___Copy_b__29_1 (GameManagers_MapEditorGameManager___c_o* __this, int32_t id, const MethodInfo* method);
// 0x5954ed0

bool GameManagers_MapEditorGameManager___c___Copy_b__29_1
               (GameManagers_MapEditorGameManager___c_o *__this,int32_t id,MethodInfo *method)

{
  return 0 < id;
}


// GameManagers.MapEditorGameManager.<>c$$<Paste>b__32_1
// il2cpp: int32_t GameManagers_MapEditorGameManager___c___Paste_b__32_1 (GameManagers_MapEditorGameManager___c_o* __this, Map_MapScriptBaseObject_o* o, const MethodInfo* method);
// 0x5954ee0

int32_t GameManagers_MapEditorGameManager___c___Paste_b__32_1
                  (GameManagers_MapEditorGameManager___c_o *__this,Map_MapScriptBaseObject_o *o,
                  MethodInfo *method)

{
  if (o == (Map_MapScriptBaseObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (o->fields).Id;
}


// GameManagers.MapEditorGameManager.<>c$$<Paste>b__32_0
// il2cpp: int32_t GameManagers_MapEditorGameManager___c___Paste_b__32_0 (GameManagers_MapEditorGameManager___c_o* __this, Map_MapScriptBaseObject_o* o, const MethodInfo* method);
// 0x5954ef0

int32_t GameManagers_MapEditorGameManager___c___Paste_b__32_0
                  (GameManagers_MapEditorGameManager___c_o *__this,Map_MapScriptBaseObject_o *o,
                  MethodInfo *method)

{
  if (o == (Map_MapScriptBaseObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (o->fields).Id;
}


// GameManagers.MapEditorGameManager.<>c$$<CreateEmptyParent>b__33_0
// il2cpp: int32_t GameManagers_MapEditorGameManager___c___CreateEmptyParent_b__33_0 (GameManagers_MapEditorGameManager___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x5954f00

int32_t GameManagers_MapEditorGameManager___c___CreateEmptyParent_b__33_0
                  (GameManagers_MapEditorGameManager___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o == (Map_MapObject_o *)0x0) ||
     (pMVar1 = (o->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Id;
}


// GameManagers.MapEditorGameManager.<>c$$<CreateEmptyParent>b__33_2
// il2cpp: int32_t GameManagers_MapEditorGameManager___c___CreateEmptyParent_b__33_2 (GameManagers_MapEditorGameManager___c_o* __this, int32_t id, const MethodInfo* method);
// 0x5954f20

int32_t GameManagers_MapEditorGameManager___c___CreateEmptyParent_b__33_2
                  (GameManagers_MapEditorGameManager___c_o *__this,int32_t id,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_int__o *__this_00;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_075458a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075458a1 = '\x01';
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
  iVar2 = System_Collections_Generic_List_int___IndexOf
                    (__this_00,id,(MethodInfo_3917A80 *)MethodInfo_System_Collections_Generic_List_int_IndexOf
                    );
  return iVar2;
}


// GameManagers.MapEditorGameManager.<>c$$<ResetOrigin>b__34_0
// il2cpp: int32_t GameManagers_MapEditorGameManager___c___ResetOrigin_b__34_0 (GameManagers_MapEditorGameManager___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x5954fc0

int32_t GameManagers_MapEditorGameManager___c___ResetOrigin_b__34_0
                  (GameManagers_MapEditorGameManager___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o == (Map_MapObject_o *)0x0) ||
     (pMVar1 = (o->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Id;
}


// GameManagers.MapEditorGameManager.<>c$$<GetSelectedObjectsForTransformCommand>b__46_0
// il2cpp: int32_t GameManagers_MapEditorGameManager___c___GetSelectedObjectsForTransformCommand_b__46_0 (GameManagers_MapEditorGameManager___c_o* __this, Map_MapObject_o* x, const MethodInfo* method);
// 0x5954fe0

int32_t GameManagers_MapEditorGameManager___c___GetSelectedObjectsForTransformCommand_b__46_0
                  (GameManagers_MapEditorGameManager___c_o *__this,Map_MapObject_o *x,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((x == (Map_MapObject_o *)0x0) ||
     (pMVar1 = (x->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Id;
}


// GameManagers.MapEditorGameManager.<>c$$<GetSelectedObjectsForTransformCommand>b__46_1
// il2cpp: Map_MapObject_o* GameManagers_MapEditorGameManager___c___GetSelectedObjectsForTransformCommand_b__46_1 (GameManagers_MapEditorGameManager___c_o* __this, int32_t id, const MethodInfo* method);
// 0x5955000

Map_MapObject_o *
GameManagers_MapEditorGameManager___c___GetSelectedObjectsForTransformCommand_b__46_1
          (GameManagers_MapEditorGameManager___c_o *__this,int32_t id,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Map_MapObject_o *pMVar2;
  
  if (Il2CppMethodInitialized_075458a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075458a2 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 ((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields;
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar2 = System_Collections_Generic_Dictionary_int__object___get_Item
                     (__this_00,id,
                      (MethodInfo_4A0F690 *)
                      MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
  return pMVar2;
}


// GameManagers.MapEditorGameManager.<>c$$<ReparentObjects>b__47_0
// il2cpp: bool GameManagers_MapEditorGameManager___c___ReparentObjects_b__47_0 (GameManagers_MapEditorGameManager___c_o* __this, int32_t id, const MethodInfo* method);
// 0x59550a0

bool GameManagers_MapEditorGameManager___c___ReparentObjects_b__47_0
               (GameManagers_MapEditorGameManager___c_o *__this,int32_t id,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075458a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075458a3 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 ((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields;
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (__this_00,id,
                     (MethodInfo_4A0F950 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
  return bVar2;
}


// GameManagers.MapEditorGameManager.<>c$$<ReparentObjects>b__47_1
// il2cpp: Map_MapObject_o* GameManagers_MapEditorGameManager___c___ReparentObjects_b__47_1 (GameManagers_MapEditorGameManager___c_o* __this, int32_t id, const MethodInfo* method);
// 0x5955140

Map_MapObject_o *
GameManagers_MapEditorGameManager___c___ReparentObjects_b__47_1
          (GameManagers_MapEditorGameManager___c_o *__this,int32_t id,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Map_MapObject_o *pMVar2;
  
  if (Il2CppMethodInitialized_075458a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075458a4 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 ((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields;
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar2 = System_Collections_Generic_Dictionary_int__object___get_Item
                     (__this_00,id,
                      (MethodInfo_4A0F690 *)
                      MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
  return pMVar2;
}


// GameManagers.MapEditorGameManager.<>c__DisplayClass33_0$$.ctor
// il2cpp: void GameManagers_MapEditorGameManager___c__DisplayClass33_0___ctor (GameManagers_MapEditorGameManager___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x594ebf0

void GameManagers_MapEditorGameManager___c__DisplayClass33_0___ctor
               (GameManagers_MapEditorGameManager___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager.<>c__DisplayClass33_0$$<CreateEmptyParent>b__1
// il2cpp: bool GameManagers_MapEditorGameManager___c__DisplayClass33_0___CreateEmptyParent_b__1 (GameManagers_MapEditorGameManager___c__DisplayClass33_0_o* __this, int32_t id, const MethodInfo* method);
// 0x59551e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5955214: jmp 0x5955294

bool GameManagers_MapEditorGameManager___c__DisplayClass33_0___CreateEmptyParent_b__1
               (GameManagers_MapEditorGameManager___c__DisplayClass33_0_o *__this,int32_t id,
               MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  MethodInfo *in_RCX;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  if (Il2CppMethodInitialized_075458a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075458a5 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    __this_00 = (GameManagers_MapEditorGameManager_o *)TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  }
  else {
    __this_00 = *(GameManagers_MapEditorGameManager_o **)
                 ((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields;
  }
  if (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_int__object__o *)__this_00,id,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    if (!bVar2) {
      return false;
    }
    if ((__this->fields).__4__this != (GameManagers_MapEditorGameManager_o *)0x0) {
      bVar2 = GameManagers_MapEditorGameManager__HasAncestorInSet
                        (__this_00,id,(__this->fields).selectedIds,in_RCX);
      return !bVar2;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager.<>c__DisplayClass34_0$$.ctor
// il2cpp: void GameManagers_MapEditorGameManager___c__DisplayClass34_0___ctor (GameManagers_MapEditorGameManager___c__DisplayClass34_0_o* __this, const MethodInfo* method);
// 0x594f170

void GameManagers_MapEditorGameManager___c__DisplayClass34_0___ctor
               (GameManagers_MapEditorGameManager___c__DisplayClass34_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager.<>c__DisplayClass34_0$$<ResetOrigin>b__1
// il2cpp: bool GameManagers_MapEditorGameManager___c__DisplayClass34_0___ResetOrigin_b__1 (GameManagers_MapEditorGameManager___c__DisplayClass34_0_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x59552a0

bool GameManagers_MapEditorGameManager___c__DisplayClass34_0___ResetOrigin_b__1
               (GameManagers_MapEditorGameManager___c__DisplayClass34_0_o *__this,Map_MapObject_o *obj,
               MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  bool bVar2;
  MethodInfo *in_RCX;
  
  if (((obj == (Map_MapObject_o *)0x0) ||
      (pMVar1 = (obj->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) ||
     ((__this->fields).__4__this == (GameManagers_MapEditorGameManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = GameManagers_MapEditorGameManager__HasAncestorInSet
                    ((GameManagers_MapEditorGameManager_o *)__this,(pMVar1->fields).Id,
                     (__this->fields).selectedIds,in_RCX);
  return !bVar2;
}


// GameManagers.MapEditorGameManager.<>c__DisplayClass48_0$$.ctor
// il2cpp: void GameManagers_MapEditorGameManager___c__DisplayClass48_0___ctor (GameManagers_MapEditorGameManager___c__DisplayClass48_0_o* __this, const MethodInfo* method);
// 0x5951410

void GameManagers_MapEditorGameManager___c__DisplayClass48_0___ctor
               (GameManagers_MapEditorGameManager___c__DisplayClass48_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager.<>c__DisplayClass48_0$$<ReorderObjects>b__0
// il2cpp: bool GameManagers_MapEditorGameManager___c__DisplayClass48_0___ReorderObjects_b__0 (GameManagers_MapEditorGameManager___c__DisplayClass48_0_o* __this, int32_t id, const MethodInfo* method);
// 0x59552d0

bool GameManagers_MapEditorGameManager___c__DisplayClass48_0___ReorderObjects_b__0
               (GameManagers_MapEditorGameManager___c__DisplayClass48_0_o *__this,int32_t id,
               MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075458a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075458a6 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 ((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields;
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (__this_00,id,
                     (MethodInfo_4A0F950 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
  if (bVar2) {
    return (__this->fields).anchorId != id;
  }
  return false;
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__57$$.ctor
// il2cpp: void GameManagers_MapEditorGameManager__WaitAndAutosave_d__57___ctor (GameManagers_MapEditorGameManager__WaitAndAutosave_d__57_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5952090

void GameManagers_MapEditorGameManager__WaitAndAutosave_d__57___ctor
               (GameManagers_MapEditorGameManager__WaitAndAutosave_d__57_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__57$$System.IDisposable.Dispose
// il2cpp: void GameManagers_MapEditorGameManager__WaitAndAutosave_d__57__System_IDisposable_Dispose (GameManagers_MapEditorGameManager__WaitAndAutosave_d__57_o* __this, const MethodInfo* method);
// 0x5955380

void GameManagers_MapEditorGameManager__WaitAndAutosave_d__57__System_IDisposable_Dispose
               (GameManagers_MapEditorGameManager__WaitAndAutosave_d__57_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__57$$MoveNext
// il2cpp: bool GameManagers_MapEditorGameManager__WaitAndAutosave_d__57__MoveNext (GameManagers_MapEditorGameManager__WaitAndAutosave_d__57_o* __this, const MethodInfo* method);
// 0x5955390

bool GameManagers_MapEditorGameManager__WaitAndAutosave_d__57__MoveNext
               (GameManagers_MapEditorGameManager__WaitAndAutosave_d__57_o *__this,MethodInfo *method)

{
  int iVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  UI_MapEditorMenu_o *pUVar3;
  UI_MapEditorTopPanel_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  
  if (Il2CppMethodInitialized_075458a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_075458a7 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pGVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (((pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) ||
        (pUVar3 = (pGVar2->fields)._menu, pUVar3 == (UI_MapEditorMenu_o *)0x0)) ||
       (__this_00 = (pUVar3->fields)._topPanel, __this_00 == (UI_MapEditorTopPanel_o *)0x0)) {
      ThrowNullReferenceException();
    }
    UI_MapEditorTopPanel__Autosave(__this_00,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_01,900.0,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
  (__this->fields).__1__state = 1;
  return true;
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__57$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_MapEditorGameManager__WaitAndAutosave_d__57__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_MapEditorGameManager__WaitAndAutosave_d__57_o* __this, const MethodInfo* method);
// 0x5955450

Il2CppObject *
GameManagers_MapEditorGameManager__WaitAndAutosave_d__57__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameManagers_MapEditorGameManager__WaitAndAutosave_d__57_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__57$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_MapEditorGameManager__WaitAndAutosave_d__57__System_Collections_IEnumerator_Reset (GameManagers_MapEditorGameManager__WaitAndAutosave_d__57_o* __this, const MethodInfo* method);
// 0x5955460

void GameManagers_MapEditorGameManager__WaitAndAutosave_d__57__System_Collections_IEnumerator_Reset
               (GameManagers_MapEditorGameManager__WaitAndAutosave_d__57_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_MapEditorGameManager_WaitAndAutosave_d__57_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__57$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_MapEditorGameManager__WaitAndAutosave_d__57__System_Collections_IEnumerator_get_Current (GameManagers_MapEditorGameManager__WaitAndAutosave_d__57_o* __this, const MethodInfo* method);
// 0x59554a0

Il2CppObject *
GameManagers_MapEditorGameManager__WaitAndAutosave_d__57__System_Collections_IEnumerator_get_Current
          (GameManagers_MapEditorGameManager__WaitAndAutosave_d__57_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.MapEditorGameManager$$OnJoinedRoom
// il2cpp: void GameManagers_MapEditorGameManager__OnJoinedRoom (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x594bac0

void GameManagers_MapEditorGameManager__OnJoinedRoom
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545879 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_07545879 = '\x01';
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_InGameManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_InGameManager;
  }
  TypeInfo_GameManagers_InGameManager = (GameManagers_InGameManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    GameManagers_InGameManager__OnJoinRoom((MethodInfo *)klass);
    return;
  }
  GameManagers_InGameManager__OnJoinRoom((MethodInfo *)klass);
  return;
}


// GameManagers.MapEditorGameManager$$ShowAddObject
// il2cpp: void GameManagers_MapEditorGameManager__ShowAddObject (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x594bb20

void GameManagers_MapEditorGameManager__ShowAddObject
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *__this_00;
  UI_MapEditorAddObjectPopup_o *pUVar1;
  UI_MapEditorAddVariantPopup_o *pUVar2;
  
  __this_00 = (__this->fields)._menu;
  if ((__this_00 == (UI_MapEditorMenu_o *)0x0) ||
     (pUVar1 = (__this_00->fields).AddObjectPopup, pUVar1 == (UI_MapEditorAddObjectPopup_o *)0x0)) {
label_0594bb67:
    ThrowNullReferenceException();
  }
  if ((pUVar1->fields).IsActive == false) {
    pUVar2 = (__this_00->fields).AddVariantPopup;
    if (pUVar2 == (UI_MapEditorAddVariantPopup_o *)0x0) goto label_0594bb67;
    if (((pUVar2->fields).IsActive == false) && ((__this_00->fields).IsMouseUI != false)) {
      return;
    }
  }
  UI_MapEditorMenu__ToggleAddObjectPopup(__this_00,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager$$AddObject
// il2cpp: void GameManagers_MapEditorGameManager__AddObject (GameManagers_MapEditorGameManager_o* __this, System_String_o* name, const MethodInfo* method);
// 0x594bb70
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x594c033: jmp 0x594c070
// asm:   0x594c2c0: movaps xmm0, xmmword ptr [rsp + 0x40]
// asm:   0x594c2c5: movaps xmmword ptr [rsp + 0x30], xmm1
// asm:   0x594c2ca: jmp 0x594c2f8
// asm:   0x594c2ee: movaps xmmword ptr [rsp + 0x30], xmm0
// asm:   0x594c2f3: movaps xmm0, xmmword ptr [rsp + 0x40]

void GameManagers_MapEditorGameManager__AddObject
               (GameManagers_MapEditorGameManager_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Map_MapScriptBaseMaterial_o *pMVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Cameras_BaseCamera_o *pCVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  Settings_MapEditorSettings_o *pSVar8;
  Settings_FloatSetting_o *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  GameManagers_BaseGameManager_o *pGVar11;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar12;
  Map_MapScriptBaseObject_array *pMVar13;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  Map_MapScriptBaseObject_o *pMVar14;
  UI_MapEditorMenu_o *__this_03;
  undefined1 auVar15 [16];
  double dVar16;
  UnityEngine_Ray_o ray;
  bool bVar17;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  Map_MapScriptObjects_o *__this_04;
  Map_MapScriptSceneObject_o *__this_05;
  System_String_array *pSVar18;
  System_Int32_array *layers;
  MethodInfo *pMVar19;
  Map_MapObject_o *item;
  MethodInfo *method_00;
  MethodInfo *method_01;
  GameManagers_MapEditorGameManager_c *method_02;
  float fVar20;
  float fVar21;
  float fVar22;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float fVar23;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  float fVar30;
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Vector3_o UVar32;
  float local_d0;
  float local_b8;
  float fStack_b4;
  double local_a0;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  float local_84;
  undefined8 local_80;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  UnityEngine_RaycastHit_o local_68;
  
  if (Il2CppMethodInitialized_0754587a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_AddObjectCommand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptObjects);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom/");
    Il2CppMethodInitialized_0754587a = '\x01';
  }
  local_68.fields.m_UV.fields.x = 0.0;
  local_68.fields.m_UV.fields.y = 0.0;
  local_68.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_68.fields.m_Normal.fields.y = 0.0;
  local_68.fields.m_Normal.fields.z = 0.0;
  local_68.fields.m_FaceID = 0;
  local_68.fields.m_Distance = 0.0;
  local_68.fields.m_Point.fields.x = 0.0;
  local_68.fields.m_Point.fields.y = 0.0;
  local_68.fields.m_Point.fields.z = 0.0;
  local_68.fields.m_Normal.fields.x = 0.0;
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_04,(MethodInfo *)0x0);
  if (name == (System_String_o *)0x0) goto label_0594c5ff;
  bVar17 = System_String__StartsWith(name,"Custom/",(MethodInfo *)0x0);
  if (bVar17) {
    __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
    Map_MapScriptSceneObject___ctor(__this_05,(MethodInfo *)0x0);
    if (__this_05 == (Map_MapScriptSceneObject_o *)0x0) goto label_0594c5ff;
    (__this_05->fields).Asset = name;
    Il2CppCodeGenWriteBarrier(&(__this_05->fields).Asset);
    pSVar18 = System_String__Split(name,0x2f,0,(MethodInfo *)0x0);
    if (pSVar18 == (System_String_array *)0x0) goto label_0594c5ff;
    if ((uint)pSVar18->max_length < 3) goto label_0594c609;
    (__this_05->fields).Name = pSVar18->m_Items[2];
    Il2CppCodeGenWriteBarrier(&(__this_05->fields).Name);
    pMVar4 = (__this_05->fields).Material;
    if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
    }
    if (pMVar4 == (Map_MapScriptBaseMaterial_o *)0x0) goto label_0594c5ff;
    (pMVar4->fields).Shader = TypeInfo_Map_MapObjectShader->static_fields->DefaultNoTint;
    Il2CppCodeGenWriteBarrier(&(pMVar4->fields).Shader);
  }
  else {
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0594c5ff;
    __this_05 = (Map_MapScriptSceneObject_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_00,(Il2CppObject *)name,
                           (MethodInfo_4AAD450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                          );
    if (__this_05 == (Map_MapScriptSceneObject_o *)0x0) {
      __this_05 = (Map_MapScriptSceneObject_o *)0x0;
    }
    else {
      bVar2 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
      if (((__this_05->klass->_2).typeHierarchyDepth < bVar2) ||
         ((__this_05->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_05);
      }
    }
  }
  pCVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar5 != (Cameras_BaseCamera_o *)0x0) {
    pUVar6 = (pCVar5->fields).Cache;
    if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
      pUVar7 = (pUVar6->fields).Transform;
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        UVar31 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
        pCVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
        if (pCVar5 != (Cameras_BaseCamera_o *)0x0) {
          pUVar6 = (pCVar5->fields).Cache;
          if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
            pUVar7 = (pUVar6->fields).Transform;
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              UVar32 = UnityEngine_Transform__get_forward(pUVar7,(MethodInfo *)0x0);
              pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
              if (pSVar8 != (Settings_MapEditorSettings_o *)0x0) {
                pSVar9 = (pSVar8->fields).PlacementDistance;
                if (pSVar9 != (Settings_FloatSetting_o *)0x0) {
                  pSVar10 = (pSVar8->fields).PlaceOnFirstSurface;
                  if (pSVar10 != (Settings_BoolSetting_o *)0x0) {
                    fVar30 = (pSVar9->fields)._value;
                    local_b8 = UVar31.fields.x;
                    fStack_b4 = UVar31.fields.y;
                    local_b8 = local_b8 + UVar32.fields.x * fVar30;
                    fStack_b4 = fStack_b4 + UVar32.fields.y * fVar30;
                    fVar20 = UVar31.fields.z + UVar32.fields.z * fVar30;
                    if ((pSVar10->fields)._value != false) {
                      pCVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
                      if (pCVar5 == (Cameras_BaseCamera_o *)0x0) goto label_0594c5ff;
                      pUVar6 = (pCVar5->fields).Cache;
                      if (pUVar6 == (Utility_BaseComponentCache_o *)0x0) goto label_0594c5ff;
                      pUVar7 = (pUVar6->fields).Transform;
                      if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_0594c5ff;
                      UVar31 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
                      pCVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
                      if (pCVar5 == (Cameras_BaseCamera_o *)0x0) goto label_0594c5ff;
                      pUVar6 = (pCVar5->fields).Cache;
                      if (pUVar6 == (Utility_BaseComponentCache_o *)0x0) goto label_0594c5ff;
                      pUVar7 = (pUVar6->fields).Transform;
                      local_84 = UVar31.fields.z;
                      if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_0594c5ff;
                      UVar32 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
                      fVar21 = UVar32.fields.x;
                      fVar22 = UVar32.fields.y;
                      fVar23 = extraout_XMM0_Dc_01;
                      fVar24 = extraout_XMM0_Dd_01;
                      if (g_data_0753e729 == '\0') {
                        fStack_90 = extraout_XMM0_Dc_01;
                        local_98 = (undefined1  [8])UVar32.fields._0_8_;
                        fStack_8c = extraout_XMM0_Dd_01;
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                        g_data_0753e729 = '\x01';
                        fVar21 = (float)local_98._0_4_;
                        fVar22 = (float)local_98._4_4_;
                        fVar23 = fStack_90;
                        fVar24 = fStack_8c;
                      }
                      auVar29._0_4_ = local_b8 - fVar21;
                      auVar29._4_4_ = fStack_b4 - fVar22;
                      auVar29._8_4_ = (extraout_XMM0_Dc + extraout_XMM0_Dc_00 * fVar30) - fVar23;
                      auVar29._12_4_ = (extraout_XMM0_Dd + extraout_XMM0_Dd_00 * fVar30) - fVar24;
                      fVar30 = fVar20 - UVar32.fields.z;
                      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                        _local_98 = auVar29;
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                        auVar29 = _local_98;
                      }
                      fVar21 = fVar30 * fVar30 + auVar29._4_4_ * auVar29._4_4_ + auVar29._0_4_ * auVar29._0_4_
                      ;
                      local_d0 = 0.0;
                      if (fVar21 < 0.0) {
                        _local_98 = auVar29;
                        fVar21 = sqrtf(fVar21);
                        auVar29 = _local_98;
                      }
                      else {
                        fVar21 = SQRT(fVar21);
                      }
                      uVar28 = 0;
                      uVar27 = 0;
                      uVar26 = 0;
                      uVar25 = 0;
                      if (1e-05 < fVar21) {
                        local_d0 = fVar30 / fVar21;
                        auVar15._4_4_ = fVar21;
                        auVar15._0_4_ = fVar21;
                        auVar15._8_4_ = fVar21;
                        auVar15._12_4_ = fVar21;
                        auVar29 = divps(auVar29,auVar15);
                        uVar25 = auVar29._0_4_;
                        uVar26 = auVar29._4_4_;
                        uVar27 = auVar29._8_4_;
                        uVar28 = auVar29._12_4_;
                      }
                      pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
                      if (pSVar8 == (Settings_MapEditorSettings_o *)0x0) goto label_0594c5ff;
                      local_98._4_4_ = uVar26;
                      local_98._0_4_ = uVar25;
                      fStack_90 = (float)uVar27;
                      fStack_8c = (float)uVar28;
                      pSVar9 = (pSVar8->fields).PlacementDistance;
                      if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_0594c5ff;
                      fVar30 = (pSVar9->fields)._value;
                      layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
                      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
                      }
                      if (layers == (System_Int32_array *)0x0) goto label_0594c5ff;
                      if ((int)layers->max_length == 0) {
label_0594c609:
                        ThrowIndexOutOfRangeException();
                      }
                      layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject;
                      mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
                      layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
                      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
                      }
                      fStack_78 = local_84;
                      uStack_74 = local_98._0_4_;
                      uStack_70 = local_98._4_4_;
                      fStack_6c = local_d0;
                      ray.fields.m_Direction.fields.z = local_d0;
                      ray.fields.m_Direction.fields.y = (float)uStack_70;
                      ray.fields.m_Direction.fields.x = (float)uStack_74;
                      ray.fields.m_Origin.fields.z = local_84;
                      ray.fields.m_Origin.fields.x = UVar31.fields.x;
                      ray.fields.m_Origin.fields.y = UVar31.fields.y;
                      local_80 = UVar31.fields._0_8_;
                      bVar17 = UnityEngine_Physics__Raycast_69da1f0
                                         (ray,&local_68,fVar30,layerMask,(MethodInfo *)0x0);
                      if (bVar17) {
                        UVar31 = UnityEngine_RaycastHit__get_point(&local_68,(MethodInfo *)0x0);
                        fVar20 = UVar31.fields.z;
                        local_b8 = UVar31.fields.x;
                        fStack_b4 = UVar31.fields.y;
                      }
                    }
                    pGVar11 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
                    if (pGVar11 != (GameManagers_BaseGameManager_o *)0x0) {
                      bVar2 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
                      if (((pGVar11->klass->_2).typeHierarchyDepth < bVar2) ||
                         ((pGVar11->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                          (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
                        il2cpp_codegen_raise_invalid_cast_exception();
                      }
                      if (*(char *)((long)&(*(uint64_t *)((char *)pGVar11 + 0x48)) + 4) != '\0') {
                        pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
                        if ((pSVar8 == (Settings_MapEditorSettings_o *)0x0) ||
                           (pSVar9 = (pSVar8->fields).SnapMove, pSVar9 == (Settings_FloatSetting_o *)0x0))
                        goto label_0594c5ff;
                        fVar30 = (pSVar9->fields)._value;
                        local_b8 = local_b8 / fVar30;
                        method_02 = TypeInfo_GameManagers_MapEditorGameManager;
                        dVar16 = modf((double)local_b8,&local_a0,
                                      (MethodInfo *)TypeInfo_GameManagers_MapEditorGameManager);
                        if (0.0 <= local_b8) {
                          if ((dVar16 != 0.5) || (NAN(dVar16))) {
                            local_b8 = floorf(local_b8 + 0.5);
                          }
                          else {
                            local_b8 = (float)local_a0;
                            if (((long)local_a0 & 1U) != 0) {
                              local_b8 = local_b8 + 1.0;
                            }
                          }
                        }
                        else if ((dVar16 != -0.5) || (NAN(dVar16))) {
                          local_b8 = ceilf(local_b8 + -0.5);
                        }
                        else {
                          local_b8 = (float)local_a0;
                          if (((long)local_a0 & 1U) != 0) {
                            local_b8 = local_b8 + -1.0;
                          }
                        }
                        fStack_b4 = fStack_b4 / fVar30;
                        dVar16 = modf((double)fStack_b4,&local_a0,(MethodInfo *)method_02);
                        if (0.0 <= fStack_b4) {
                          if ((dVar16 != 0.5) || (NAN(dVar16))) {
                            fStack_b4 = floorf(fStack_b4 + 0.5);
                          }
                          else {
                            fStack_b4 = (float)local_a0;
                            if (((long)local_a0 & 1U) != 0) {
                              fStack_b4 = fStack_b4 + 1.0;
                            }
                          }
                        }
                        else if ((dVar16 != -0.5) || (NAN(dVar16))) {
                          fStack_b4 = ceilf(fStack_b4 + -0.5);
                        }
                        else {
                          fStack_b4 = (float)local_a0;
                          if (((long)local_a0 & 1U) != 0) {
                            fStack_b4 = fStack_b4 + -1.0;
                          }
                        }
                        local_b8 = local_b8 * fVar30;
                        fStack_b4 = fStack_b4 * fVar30;
                        fVar20 = fVar20 / fVar30;
                        dVar16 = modf((double)fVar20,&local_a0,(MethodInfo *)method_02);
                        if (0.0 <= fVar20) {
                          if ((dVar16 != 0.5) || (NAN(dVar16))) {
                            fVar20 = floorf(fVar20 + 0.5);
                          }
                          else {
                            fVar20 = (float)local_a0;
                            if (((long)local_a0 & 1U) != 0) {
                              fVar20 = fVar20 + 1.0;
                            }
                          }
                        }
                        else if ((dVar16 != -0.5) || (NAN(dVar16))) {
                          fVar20 = ceilf(fVar20 + -0.5);
                        }
                        else {
                          fVar20 = (float)local_a0;
                          if (((long)local_a0 & 1U) != 0) {
                            fVar20 = fVar20 + -1.0;
                          }
                        }
                        fVar20 = fVar30 * fVar20;
                      }
                      if (__this_05 != (Map_MapScriptSceneObject_o *)0x0) {
                        UVar31.fields.y = fStack_b4;
                        UVar31.fields.x = local_b8;
                        UVar31.fields.z = fVar20;
                        Map_MapScriptBaseObject__SetPosition
                                  ((Map_MapScriptBaseObject_o *)__this_05,UVar31,(MethodInfo *)0x0);
                        pMVar19 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
                        if ((__this_04 != (Map_MapScriptObjects_o *)0x0) &&
                           (pSVar12 = (__this_04->fields).Objects,
                           pSVar12 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
                          piVar1 = &(pSVar12->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pMVar13 = (pSVar12->fields)._items;
                          if (pMVar13 != (Map_MapScriptBaseObject_array *)0x0) {
                            uVar3 = (pSVar12->fields)._size;
                            if (uVar3 < (uint)pMVar13->max_length) {
                              (pSVar12->fields)._size = uVar3 + 1;
                              pMVar13->m_Items[(int)uVar3] = (Map_MapScriptBaseObject_o *)__this_05;
                              Il2CppCodeGenWriteBarrier(pMVar13->m_Items + (int)uVar3);
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize
                                        ((System_Collections_Generic_List_object__o *)pSVar12,
                                         (Il2CppObject *)__this_05,
                                         (MethodInfo_395D230 *)pMVar19->klass->rgctx_data[0xe].method);
                            }
                            pSVar12 = (__this_04->fields).Objects;
                            pMVar19 = (MethodInfo *)
                                      il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand);
                            method_00 = (MethodInfo *)0x0;
                            MapEditor_AddObjectCommand___ctor
                                      ((MapEditor_AddObjectCommand_o *)pMVar19,pSVar12,-1,(MethodInfo *)0x0);
                            GameManagers_MapEditorGameManager__NewCommand
                                      (__this,(MapEditor_BaseCommand_o *)pMVar19,true,method_00);
                            GameManagers_MapEditorGameManager__DeselectAll(__this,pMVar19);
                            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                            }
                            __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
                                        TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                            if (__this_01 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                              item = System_Collections_Generic_Dictionary_int__object___get_Item
                                               (__this_01,(__this->fields)._currentObjectId,
                                                (MethodInfo_4A0F690 *)
                                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item
                                               );
                              if (Il2CppMethodInitialized_07545887 == '\0') {
                                il2cpp_codegen_initialize_runtime_metadata
                                          (&MethodInfo_System_Collections_Generic_HashSet_MapObject_Add);
                                Il2CppMethodInitialized_07545887 = '\x01';
                              }
                              if ((item != (Map_MapObject_o *)0x0) &&
                                 ((item->fields).ScriptObject != (Map_MapScriptBaseObject_o *)0x0)) {
                                __this_02 = (System_Collections_Generic_HashSet_object__o *)
                                            (__this->fields).SelectedObjects;
                                if (__this_02 == (System_Collections_Generic_HashSet_object__o *)0x0)
                                goto label_0594c5ff;
                                System_Collections_Generic_HashSet_object___Add
                                          (__this_02,(Il2CppObject *)item,
                                           (MethodInfo_4FB4450 *)
                                           MethodInfo_System_Collections_Generic_HashSet_MapObject_Add);
                                pMVar14 = (item->fields).ScriptObject;
                                if (pMVar14 == (Map_MapScriptBaseObject_o *)0x0) goto label_0594c5ff;
                                (__this->fields).LastSelectedObjectId = (pMVar14->fields).Id;
                              }
                              __this_03 = (__this->fields)._menu;
                              if (__this_03 != (UI_MapEditorMenu_o *)0x0) {
                                UI_MapEditorMenu__SyncHierarchyPanel(__this_03,(MethodInfo *)0x0);
                                GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,method_01);
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
label_0594c5ff:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$Undo
// il2cpp: void GameManagers_MapEditorGameManager__Undo (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x594cd00

void GameManagers_MapEditorGameManager__Undo(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  System_Object_array *pSVar7;
  Il2CppClass *pIVar8;
  UI_MapEditorMenu_o *__this_00;
  MethodInfo *pMVar9;
  Il2CppObject *item;
  MapEditor_CreateEmptyParentCommand_c *extraout_RDX;
  MapEditor_CreateEmptyParentCommand_c *method_00;
  
  if (Il2CppMethodInitialized_0754587b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_AddObjectCommand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_CreateEmptyParentCommand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_DeleteObjectCommand);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCommand_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCommand_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCommand_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCommand_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_ReorderObjectsCommand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_ReparentObjectsCommand);
    Il2CppMethodInitialized_0754587b = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_object__o *)(__this->fields)._undoCommands;
  if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar4 = (pSVar6->fields)._size;
    if (iVar4 == 0) {
      return;
    }
    item = (Il2CppObject *)
           System_Collections_Generic_List_object___get_Item
                     (pSVar6,iVar4 + -1,
                      (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_BaseCommand_get_Item);
    if (item == (Il2CppObject *)0x0) goto label_0594cf3a;
    (*item->klass->vtable[5].methodPtr)(item,item->klass->vtable[5].method);
    pMVar9 = MethodInfo_System_Collections_Generic_List_BaseCommand_Add;
    pSVar6 = (System_Collections_Generic_List_object__o *)(__this->fields)._redoCommands;
    if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) goto label_0594cf3a;
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar7 = (pSVar6->fields)._items;
    if (pSVar7 == (System_Object_array *)0x0) goto label_0594cf3a;
    uVar5 = (pSVar6->fields)._size;
    if (uVar5 < (uint)pSVar7->max_length) {
      (pSVar6->fields)._size = uVar5 + 1;
      pSVar7->m_Items[(int)uVar5] = item;
      Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar6,item,(MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
    }
    pSVar6 = (System_Collections_Generic_List_object__o *)(__this->fields)._undoCommands;
    if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) goto label_0594cf3a;
    System_Collections_Generic_List_object___RemoveAt
              (pSVar6,(pSVar6->fields)._size + -1,
               (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_BaseCommand_RemoveAt);
    pIVar8 = item->klass;
    bVar2 = (pIVar8->_2).typeHierarchyDepth;
    bVar3 = (TypeInfo_MapEditor_AddObjectCommand->_2).typeHierarchyDepth;
    if ((bVar2 < bVar3) ||
       ((pIVar8->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand)) {
      bVar3 = (TypeInfo_MapEditor_DeleteObjectCommand->_2).typeHierarchyDepth;
      if ((bVar2 < bVar3) ||
         ((pIVar8->_2).typeHierarchy[(ulong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand)) {
        bVar3 = (TypeInfo_MapEditor_ReparentObjectsCommand->_2).typeHierarchyDepth;
        if ((bVar2 < bVar3) ||
           ((pIVar8->_2).typeHierarchy[(ulong)bVar3 - 1] !=
            (Il2CppClass *)TypeInfo_MapEditor_ReparentObjectsCommand)) {
          bVar3 = (TypeInfo_MapEditor_ReorderObjectsCommand->_2).typeHierarchyDepth;
          if ((bVar2 < bVar3) ||
             ((pIVar8->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_MapEditor_ReorderObjectsCommand)) {
            bVar3 = (TypeInfo_MapEditor_CreateEmptyParentCommand->_2).typeHierarchyDepth;
            method_00 = TypeInfo_MapEditor_CreateEmptyParentCommand;
            if ((bVar2 < bVar3) ||
               ((pIVar8->_2).typeHierarchy[(ulong)bVar3 - 1] !=
                (Il2CppClass *)TypeInfo_MapEditor_CreateEmptyParentCommand)) goto label_0594cf26;
          }
        }
      }
    }
    __this_00 = (__this->fields)._menu;
    if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
      UI_MapEditorMenu__SyncHierarchyPanel(__this_00,(MethodInfo *)0x0);
      method_00 = extraout_RDX;
label_0594cf26:
      GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,(MethodInfo *)method_00);
      return;
    }
  }
label_0594cf3a:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$Redo
// il2cpp: void GameManagers_MapEditorGameManager__Redo (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x594cf40

void GameManagers_MapEditorGameManager__Redo(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  System_Object_array *pSVar7;
  Il2CppClass *pIVar8;
  UI_MapEditorMenu_o *__this_00;
  MethodInfo *pMVar9;
  Il2CppObject *item;
  MapEditor_CreateEmptyParentCommand_c *extraout_RDX;
  MapEditor_CreateEmptyParentCommand_c *method_00;
  
  if (Il2CppMethodInitialized_0754587c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_AddObjectCommand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_CreateEmptyParentCommand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_DeleteObjectCommand);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCommand_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCommand_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCommand_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCommand_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_ReorderObjectsCommand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_ReparentObjectsCommand);
    Il2CppMethodInitialized_0754587c = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_object__o *)(__this->fields)._redoCommands;
  if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar4 = (pSVar6->fields)._size;
    if (iVar4 == 0) {
      return;
    }
    item = (Il2CppObject *)
           System_Collections_Generic_List_object___get_Item
                     (pSVar6,iVar4 + -1,
                      (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_BaseCommand_get_Item);
    if (item == (Il2CppObject *)0x0) goto label_0594d17a;
    (*item->klass->vtable[4].methodPtr)(item,item->klass->vtable[4].method);
    pMVar9 = MethodInfo_System_Collections_Generic_List_BaseCommand_Add;
    pSVar6 = (System_Collections_Generic_List_object__o *)(__this->fields)._undoCommands;
    if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) goto label_0594d17a;
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar7 = (pSVar6->fields)._items;
    if (pSVar7 == (System_Object_array *)0x0) goto label_0594d17a;
    uVar5 = (pSVar6->fields)._size;
    if (uVar5 < (uint)pSVar7->max_length) {
      (pSVar6->fields)._size = uVar5 + 1;
      pSVar7->m_Items[(int)uVar5] = item;
      Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar6,item,(MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
    }
    pSVar6 = (System_Collections_Generic_List_object__o *)(__this->fields)._redoCommands;
    if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) goto label_0594d17a;
    System_Collections_Generic_List_object___RemoveAt
              (pSVar6,(pSVar6->fields)._size + -1,
               (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_BaseCommand_RemoveAt);
    pIVar8 = item->klass;
    bVar2 = (pIVar8->_2).typeHierarchyDepth;
    bVar3 = (TypeInfo_MapEditor_AddObjectCommand->_2).typeHierarchyDepth;
    if ((bVar2 < bVar3) ||
       ((pIVar8->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand)) {
      bVar3 = (TypeInfo_MapEditor_DeleteObjectCommand->_2).typeHierarchyDepth;
      if ((bVar2 < bVar3) ||
         ((pIVar8->_2).typeHierarchy[(ulong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand)) {
        bVar3 = (TypeInfo_MapEditor_ReparentObjectsCommand->_2).typeHierarchyDepth;
        if ((bVar2 < bVar3) ||
           ((pIVar8->_2).typeHierarchy[(ulong)bVar3 - 1] !=
            (Il2CppClass *)TypeInfo_MapEditor_ReparentObjectsCommand)) {
          bVar3 = (TypeInfo_MapEditor_ReorderObjectsCommand->_2).typeHierarchyDepth;
          if ((bVar2 < bVar3) ||
             ((pIVar8->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_MapEditor_ReorderObjectsCommand)) {
            bVar3 = (TypeInfo_MapEditor_CreateEmptyParentCommand->_2).typeHierarchyDepth;
            method_00 = TypeInfo_MapEditor_CreateEmptyParentCommand;
            if ((bVar2 < bVar3) ||
               ((pIVar8->_2).typeHierarchy[(ulong)bVar3 - 1] !=
                (Il2CppClass *)TypeInfo_MapEditor_CreateEmptyParentCommand)) goto label_0594d166;
          }
        }
      }
    }
    __this_00 = (__this->fields)._menu;
    if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
      UI_MapEditorMenu__SyncHierarchyPanel(__this_00,(MethodInfo *)0x0);
      method_00 = extraout_RDX;
label_0594d166:
      GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,(MethodInfo *)method_00);
      return;
    }
  }
label_0594d17a:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$Copy
// il2cpp: void GameManagers_MapEditorGameManager__Copy (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x594d180
// eh: try 0x594d603..0x594d6b4 -> pad 0x594d6c1 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x594d6df..0x594d6e4 -> pad 0x594da1e cleanup
// eh: try 0x594d7d0..0x594da1e -> pad 0x594da3d (+18 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x594da21..0x594da2b -> pad 0x594daa6 catch (...) [compiler noexcept guard]
// eh: try 0x594da6d..0x594da72 -> pad 0x594da97 cleanup
// eh: try 0x594da9a..0x594daa4 -> pad 0x594daa6 catch (...) [compiler noexcept guard]
// asm: 69 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x594d389: jmp 0x594d3a3
// asm:   0x594d48a: jmp 0x594d4a4
// asm:   0x594d5f8: nop dword ptr [rax + rax]
// asm:   0x594d6ad: jmp 0x594d703
// asm:   0x594d6b9: jmp 0x594d6c3
// asm:   0x594d6bb: jmp 0x594d6c3
// asm:   0x594d6bd: jmp 0x594d6c3
// asm:   0x594d6bf: jmp 0x594d6c3
// asm:   0x594d6c1: jmp 0x594d6c3
// asm:   0x594d6c3: mov rbp, rax
// asm:   0x594d6c6: cmp edx, 1
// asm:   0x594d6c9: jne 0x594da21
// asm:   0x594d6cf: mov rdi, rbp
// asm:   0x594d6d2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x594d6d7: mov rbp, qword ptr [rax]
// asm:   0x594d6da: mov qword ptr [rsp + 0x38], rbp
// asm:   0x594d6df: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x594d6e4: lea rax, [rip + 0x194221d]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_Dispose
// asm:   0x594d6eb: mov rsi, qword ptr [rax]
// asm:   0x594d6ee: mov rdi, rbx
// asm:   0x594d6f1: call 0x4da11d0  ; System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose()
// asm:   0x594d6f6: test rbp, rbp
// asm:   0x594d6f9: je 0x594d6a2
// asm:   0x594d6fb: mov rdi, rbp
// asm:   0x594d6fe: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x594da1e: mov rbp, rax
// asm:   0x594da21: lea rdi, [rsp + 0x38]
// asm:   0x594da26: call 0x2fd3550  ; il2cpp_runtime_helper_02fd3550()
// asm:   0x594da2b: mov rdi, rbp
// asm:   0x594da2e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x594da33: jmp 0x594da55
// asm:   0x594da35: jmp 0x594da55
// asm:   0x594da37: jmp 0x594da55
// asm:   0x594da39: jmp 0x594da55
// asm:   0x594da3b: jmp 0x594da55
// asm:   0x594da3d: jmp 0x594da55
// asm:   0x594da3f: jmp 0x594da55
// asm:   0x594da41: jmp 0x594da55
// asm:   0x594da43: jmp 0x594da55
// asm:   0x594da45: jmp 0x594da55
// asm:   0x594da47: jmp 0x594da55
// asm:   0x594da49: jmp 0x594da55
// asm:   0x594da4b: jmp 0x594da55
// asm:   0x594da4d: jmp 0x594da55
// asm:   0x594da4f: jmp 0x594da55
// asm:   0x594da51: jmp 0x594da55
// asm:   0x594da53: jmp 0x594da55
// asm:   0x594da55: mov rbp, rax
// asm:   0x594da58: cmp edx, 1
// asm:   0x594da5b: jne 0x594da9a
// asm:   0x594da5d: mov rdi, rbp
// asm:   0x594da60: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x594da65: mov rbx, qword ptr [rax]
// asm:   0x594da68: mov qword ptr [rsp + 0x38], rbx
// asm:   0x594da6d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x594da72: lea rax, [rip + 0x194077f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x594da79: mov rsi, qword ptr [rax]
// asm:   0x594da7c: lea rdi, [rsp + 0x10]
// asm:   0x594da81: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x594da86: test rbx, rbx
// asm:   0x594da89: je 0x594d920
// asm:   0x594da8f: mov rdi, rbx
// asm:   0x594da92: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x594da97: mov rbp, rax
// asm:   0x594da9a: lea rdi, [rsp + 0x38]
// asm:   0x594da9f: call 0x2fd3580  ; il2cpp_runtime_helper_02fd3580()
// asm:   0x594daa4: jmp 0x594da2b
// asm:   0x594daa6: mov rdi, rax
// asm:   0x594daa9: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_MapEditorGameManager__Copy(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_HashSet_MapObject__o *source;
  Il2CppObject *pIVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_01;
  Map_MapScriptBaseObject_o *item;
  Map_MapScriptBaseObject_array *pMVar5;
  MethodInfo *pMVar6;
  int32_t item_00;
  GameManagers_MapEditorGameManager_o *pGVar7;
  bool bVar8;
  int32_t iVar9;
  System_Func_MapObject__int__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_HashSet_int__o *__this_03;
  System_Collections_Generic_HashSet_int__o *__this_04;
  GameManagers_MapEditorGameManager___c_StaticFields *pGVar10;
  System_Func_int__bool__o *__this_05;
  System_Collections_Generic_IEnumerable_TSource__o *collection_00;
  System_Collections_Generic_Queue_int__o *__this_06;
  Map_MapScriptObjects_o *__this_07;
  Map_MapObject_o *pMVar11;
  System_String_o *pSVar12;
  undefined1 local_b8 [8];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *pSStack_b0;
  Il2CppObject *local_a8;
  Map_MapScriptObjects_o *local_98;
  undefined1 local_90 [16];
  Il2CppObject *local_80;
  Il2CppObject *pIStack_78;
  int32_t local_70;
  undefined4 uStack_6c;
  undefined1 local_68 [8];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *pSStack_60;
  Il2CppObject *local_58;
  Il2CppObject *pIStack_50;
  undefined8 local_48;
  GameManagers_MapEditorGameManager_o *local_38;
  
  if (Il2CppMethodInitialized_0754587d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_MapObject_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_MapObject_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptObjects);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_Dequeue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_Enqueue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_ctor_719bf20);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Queue_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_MapEditorGameManager_c_Copy_b__29_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_MapEditorGameManager_c_Copy_b__29_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager_c);
    Il2CppMethodInitialized_0754587d = '\x01';
  }
  local_58 = (Il2CppObject *)0x0;
  pIStack_50 = (Il2CppObject *)0x0;
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)0x0;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  local_b8 = (undefined1  [8])0x0;
  pSStack_b0 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)0x0;
  local_a8 = (Il2CppObject *)0x0;
  source = (__this->fields).SelectedObjects;
  if (source != (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
    if ((source->fields)._count == 0) {
      return;
    }
    if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
      pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
      __this_02 = pGVar10->__9__29_0;
    }
    else {
      pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
      __this_02 = pGVar10->__9__29_0;
    }
    if (__this_02 == (System_Func_MapObject__int__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c)->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
        pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
      }
      pIVar3 = (Il2CppObject *)pGVar10->__9;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
      System_Func_object__int____ctor
                ((System_Func_object__int__o *)__this_02,pIVar3,
                 (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_Copy_b__29_0,
                 (MethodInfo_4F198F0 *)0x0);
      pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
      pGVar10->__9__29_0 = __this_02;
      Il2CppCodeGenWriteBarrier(&pGVar10->__9__29_0);
    }
    collection = System_Linq_Enumerable__Select_object__int_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            (System_Func_TSource__TResult__o *)__this_02,
                            (MethodInfo_34F5DF0 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor_4fa7660
              (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor_4fa7660
              (__this_04,(System_Collections_Generic_IEnumerable_T__o *)__this_03,
               (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    local_38 = __this;
    if ((__this->fields).HierarchyTreeViewEnabled != false) {
      if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
        pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        __this_05 = pGVar10->__9__29_1;
      }
      else {
        pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        __this_05 = pGVar10->__9__29_1;
      }
      if (__this_05 == (System_Func_int__bool__o *)0x0) {
        if ((((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c)->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
          pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        }
        pIVar3 = (Il2CppObject *)pGVar10->__9;
        __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
        System_Func_int__bool____ctor
                  (__this_05,pIVar3,(intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_Copy_b__29_1,
                   (MethodInfo_4F12D00 *)0x0);
        pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        pGVar10->__9__29_1 = __this_05;
        Il2CppCodeGenWriteBarrier(&pGVar10->__9__29_1);
      }
      collection_00 =
           System_Linq_Enumerable__Where_int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)__this_03,
                      (System_Func_TSource__bool__o *)__this_05,
                      (MethodInfo_35022A0 *)MethodInfo_System_Linq_Enumerable_Where_int);
      __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Queue_int);
      System_Collections_Generic_Queue_int____ctor_3e72360
                (__this_06,(System_Collections_Generic_IEnumerable_T__o *)collection_00,
                 (MethodInfo_3E72360 *)MethodInfo_System_Collections_Generic_Queue_int_ctor_719bf20);
      if (__this_06 == (System_Collections_Generic_Queue_int__o *)0x0) goto label_0594da00;
      if (0 < (__this_06->fields)._size) {
        do {
          iVar9 = System_Collections_Generic_Queue_int___Dequeue
                            (__this_06,
                             (MethodInfo_3E72930 *)MethodInfo_System_Collections_Generic_Queue_int_Dequeue);
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0594da00;
          System_Collections_Generic_Dictionary_int__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_90,pSVar4,
                     (MethodInfo_4A0FBD0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_GetEnumerator);
          local_48._0_4_ = local_70;
          local_48._4_4_ = uStack_6c;
          local_58 = local_80;
          pIStack_50 = pIStack_78;
          local_68 = (undefined1  [8])local_90._0_8_;
          pSStack_60 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_90._8_8_;
          local_90._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_90._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_68;
          if (__this_04 == (System_Collections_Generic_HashSet_int__o *)0x0) {
            while (bVar8 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext
                                     ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                                      local_68,(MethodInfo_4CA10B0 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_MoveNext
                                     ), bVar8) {
              if (pIStack_50 == (Il2CppObject *)0x0) goto label_0594d6af;
              if (*(int *)&pIStack_50[1].klass == iVar9) {
                ThrowNullReferenceException();
              }
            }
          }
          else {
            while (bVar8 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext
                                     ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                                      local_68,(MethodInfo_4CA10B0 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_MoveNext
                                     ), bVar8) {
              if (pIStack_50 == (Il2CppObject *)0x0) {
label_0594d6af:
                ThrowNullReferenceException();
              }
              if (*(int *)&pIStack_50[1].klass == iVar9) {
                item_00 = (int32_t)local_58;
                bVar8 = System_Collections_Generic_HashSet_int___Add
                                  (__this_04,(int32_t)local_58,
                                   (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add
                                  );
                if (bVar8) {
                  System_Collections_Generic_Queue_int___Enqueue
                            (__this_06,item_00,
                             (MethodInfo_3E72790 *)MethodInfo_System_Collections_Generic_Queue_int_Enqueue);
                }
              }
            }
          }
          System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
                    ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_68,
                     (MethodInfo_4CA11D0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_Dispose);
        } while (0 < (__this_06->fields)._size);
      }
    }
    __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
    Map_MapScriptObjects___ctor(__this_07,(MethodInfo *)0x0);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_00 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
    if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
      System_Collections_Generic_List_int___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_90,__this_00,
                 (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
      local_a8 = local_80;
      local_b8 = (undefined1  [8])local_90._0_8_;
      pSStack_b0 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_90._8_8_;
      local_90._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_90._8_8_ = local_b8;
      local_98 = __this_07;
      if (__this_04 == (System_Collections_Generic_HashSet_int__o *)0x0) {
        bVar8 = System_Collections_Generic_List_Enumerator_int___MoveNext
                          ((System_Collections_Generic_List_Enumerator_int__o *)local_b8,
                           (MethodInfo_4C3B4A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
        if (bVar8) {
          ThrowNullReferenceException();
        }
      }
      else if (__this_07 == (Map_MapScriptObjects_o *)0x0) {
        while (bVar8 = System_Collections_Generic_List_Enumerator_int___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_int__o *)local_b8,
                                  (MethodInfo_4C3B4A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext), bVar8)
        {
          iVar9 = (int32_t)local_a8;
          bVar8 = System_Collections_Generic_HashSet_int___Contains
                            (__this_04,(int32_t)local_a8,
                             (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains)
          ;
          if (bVar8) {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0594da05;
            bVar8 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                              (pSVar4,iVar9,
                               (MethodInfo_4A0F950 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
            if (bVar8) {
              ThrowNullReferenceException();
            }
          }
        }
      }
      else {
label_0594d7e0:
        bVar8 = System_Collections_Generic_List_Enumerator_int___MoveNext
                          ((System_Collections_Generic_List_Enumerator_int__o *)local_b8,
                           (MethodInfo_4C3B4A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
        if (bVar8) {
          iVar9 = (int32_t)local_a8;
          bVar8 = System_Collections_Generic_HashSet_int___Contains
                            (__this_04,(int32_t)local_a8,
                             (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains)
          ;
          if (bVar8) {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
label_0594da05:
              ThrowNullReferenceException();
            }
            bVar8 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                              (pSVar4,iVar9,
                               (MethodInfo_4A0F950 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
            if (bVar8) {
              __this_01 = (local_98->fields).Objects;
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                       TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
              if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              pMVar11 = System_Collections_Generic_Dictionary_int__object___get_Item
                                  (pSVar4,iVar9,
                                   (MethodInfo_4A0F690 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
              pMVar6 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
              if (pMVar11 == (Map_MapObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              if (__this_01 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
                item = (pMVar11->fields).ScriptObject;
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pMVar5 = (__this_01->fields)._items;
                if (pMVar5 != (Map_MapScriptBaseObject_array *)0x0) {
                  uVar2 = (__this_01->fields)._size;
                  if (uVar2 < (uint)pMVar5->max_length) {
                    (__this_01->fields)._size = uVar2 + 1;
                    pMVar5->m_Items[(int)uVar2] = item;
                    Il2CppCodeGenWriteBarrier(pMVar5->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                               (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
                  }
                  goto label_0594d7e0;
                }
              }
              ThrowNullReferenceException();
            }
          }
          goto label_0594d7e0;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose
                ((System_Collections_Generic_List_Enumerator_int__o *)local_b8,
                 (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
      pGVar7 = local_38;
      if (local_98 != (Map_MapScriptObjects_o *)0x0) {
        pSVar12 = (*(local_98->klass->vtable)._8_Serialize.methodPtr)
                            (local_98,(local_98->klass->vtable)._8_Serialize.method);
        (pGVar7->fields)._clipboard = pSVar12;
        Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._clipboard);
        return;
      }
    }
  }
label_0594da00:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$Paste
// il2cpp: void GameManagers_MapEditorGameManager__Paste (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x594dab0

void GameManagers_MapEditorGameManager__Paste(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  GameManagers_MapEditorGameManager__Paste_584dac0(__this,-1,in_RDX);
  return;
}


// GameManagers.MapEditorGameManager$$PasteAsChild
// il2cpp: void GameManagers_MapEditorGameManager__PasteAsChild (GameManagers_MapEditorGameManager_o* __this, int32_t parentId, const MethodInfo* method);
// 0x594e380

void GameManagers_MapEditorGameManager__PasteAsChild
               (GameManagers_MapEditorGameManager_o *__this,int32_t parentId,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  bool bVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754587e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_0754587e = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 ((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields;
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (__this_00,parentId,
                     (MethodInfo_4A0F950 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
  if (bVar2) {
    GameManagers_MapEditorGameManager__Paste_584dac0(__this,parentId,method_00);
    return;
  }
  return;
}


// GameManagers.MapEditorGameManager$$Paste
// il2cpp: void GameManagers_MapEditorGameManager__Paste (GameManagers_MapEditorGameManager_o* __this, int32_t parentId, const MethodInfo* method);
// 0x594dac0
// eh: try 0x594ddc3..0x594e257 -> pad 0x594e273 (+20 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x594e28b..0x594e290 -> pad 0x594e2b2 cleanup
// eh: try 0x594e2b5..0x594e2bf -> pad 0x594e374 catch (...) [compiler noexcept guard]
// eh: try 0x594e2e2..0x594e2e7 -> pad 0x594e306 cleanup
// eh: try 0x594e309..0x594e313 -> pad 0x594e374 catch (...) [compiler noexcept guard]
// eh: try 0x594e335..0x594e33a -> pad 0x594e35f cleanup
// eh: try 0x594e362..0x594e36c -> pad 0x594e374 catch (...) [compiler noexcept guard]
// asm: 81 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x594dca6: jmp 0x594dcc1
// asm:   0x594dfa4: jmp 0x594dfbf
// asm:   0x594e257: jmp 0x594e273
// asm:   0x594e259: jmp 0x594e2ca
// asm:   0x594e25b: jmp 0x594e273
// asm:   0x594e25d: jmp 0x594e2ca
// asm:   0x594e25f: jmp 0x594e31d
// asm:   0x594e264: jmp 0x594e2ca
// asm:   0x594e266: jmp 0x594e2ca
// asm:   0x594e268: jmp 0x594e2ca
// asm:   0x594e26a: jmp 0x594e31d
// asm:   0x594e26f: jmp 0x594e273
// asm:   0x594e271: jmp 0x594e273
// asm:   0x594e273: mov rbx, rax
// asm:   0x594e276: cmp edx, 1
// asm:   0x594e279: jne 0x594e2b5
// asm:   0x594e27b: mov rdi, rbx
// asm:   0x594e27e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x594e283: mov rbx, qword ptr [rax]
// asm:   0x594e286: mov qword ptr [rsp + 8], rbx
// asm:   0x594e28b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x594e290: lea rax, [rip + 0x1940141]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x594e297: mov rsi, qword ptr [rax]
// asm:   0x594e29a: lea rdi, [rsp + 0x20]
// asm:   0x594e29f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x594e2a4: test rbx, rbx
// asm:   0x594e2a7: je 0x594de26
// asm:   0x594e2ad: jmp 0x594e357
// asm:   0x594e2b2: mov rbx, rax
// asm:   0x594e2b5: lea rdi, [rsp + 8]
// asm:   0x594e2ba: call 0x2fd35b0  ; il2cpp_runtime_helper_02fd35b0()
// asm:   0x594e2bf: jmp 0x594e36c
// asm:   0x594e2c4: jmp 0x594e2ca
// asm:   0x594e2c6: jmp 0x594e2ca
// asm:   0x594e2c8: jmp 0x594e2ca
// asm:   0x594e2ca: mov rbx, rax
// asm:   0x594e2cd: cmp edx, 1
// asm:   0x594e2d0: jne 0x594e309
// asm:   0x594e2d2: mov rdi, rbx
// asm:   0x594e2d5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x594e2da: mov rbx, qword ptr [rax]
// asm:   0x594e2dd: mov qword ptr [rsp + 8], rbx
// asm:   0x594e2e2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x594e2e7: lea rax, [rip + 0x19400ea]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x594e2ee: mov rsi, qword ptr [rax]
// asm:   0x594e2f1: lea rdi, [rsp + 0x20]
// asm:   0x594e2f6: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x594e2fb: test rbx, rbx
// asm:   0x594e2fe: je 0x594e1df
// asm:   0x594e304: jmp 0x594e357
// asm:   0x594e306: mov rbx, rax
// asm:   0x594e309: lea rdi, [rsp + 8]
// asm:   0x594e30e: call 0x2fd3610  ; il2cpp_runtime_helper_02fd3610()
// asm:   0x594e313: jmp 0x594e36c
// asm:   0x594e315: jmp 0x594e31d
// asm:   0x594e317: jmp 0x594e31d
// asm:   0x594e319: jmp 0x594e31d
// asm:   0x594e31b: jmp 0x594e31d
// asm:   0x594e31d: mov rbx, rax
// asm:   0x594e320: cmp edx, 1
// asm:   0x594e323: jne 0x594e362
// asm:   0x594e325: mov rdi, rbx
// asm:   0x594e328: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x594e32d: mov rbx, qword ptr [rax]
// asm:   0x594e330: mov qword ptr [rsp + 8], rbx
// asm:   0x594e335: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x594e33a: lea rax, [rip + 0x1940067]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x594e341: mov rsi, qword ptr [rax]
// asm:   0x594e344: lea rdi, [rsp + 0x50]
// asm:   0x594e349: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x594e34e: test rbx, rbx
// asm:   0x594e351: je 0x594df33
// asm:   0x594e357: mov rdi, rbx
// asm:   0x594e35a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x594e35f: mov rbx, rax
// asm:   0x594e362: lea rdi, [rsp + 8]
// asm:   0x594e367: call 0x2fd35e0  ; il2cpp_runtime_helper_02fd35e0()
// asm:   0x594e36c: mov rdi, rbx
// asm:   0x594e36f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x594e374: mov rdi, rax
// asm:   0x594e377: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_MapEditorGameManager__Paste_584dac0
               (GameManagers_MapEditorGameManager_o *__this,int32_t parentId,MethodInfo *method)

{
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  Map_MapScriptBaseObject_o *pMVar4;
  UI_MapEditorMenu_o *__this_02;
  GameManagers_MapEditorGameManager_o *pGVar5;
  bool bVar6;
  int32_t iVar7;
  Map_MapScriptObjects_o *pMVar8;
  System_Func_MapScriptBaseObject__int__o *pSVar9;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar10;
  System_Collections_Generic_HashSet_int__o *pSVar11;
  MethodInfo *method_00;
  GameManagers_MapEditorGameManager___c_StaticFields *pGVar12;
  Map_MapObject_o *item;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int iVar13;
  undefined1 local_a0 [16];
  Il2CppObject *local_90;
  undefined1 local_88 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_80;
  Il2CppObject *local_78;
  GameManagers_MapEditorGameManager_o *local_68;
  int32_t local_5c;
  undefined1 local_58 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_50;
  Il2CppObject *local_48;
  Map_MapScriptObjects_o *local_38;
  
  if (Il2CppMethodInitialized_0754587f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_AddObjectCommand);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_MapScriptBaseObject_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapScriptBaseObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptObjects);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_MapEditorGameManager_c_Paste_b__32_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_MapEditorGameManager_c_Paste_b__32_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager_c);
    Il2CppMethodInitialized_0754587f = '\x01';
  }
  local_88 = (undefined1  [8])0x0;
  pSStack_80 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_78 = (Il2CppObject *)0x0;
  local_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_48 = (Il2CppObject *)0x0;
  bVar6 = System_String__op_Equality
                    ((__this->fields)._clipboard,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                     (MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  pMVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
  Map_MapScriptObjects___ctor(pMVar8,(MethodInfo *)0x0);
  if (pMVar8 != (Map_MapScriptObjects_o *)0x0) {
    (*(pMVar8->klass->vtable)._9_Deserialize.methodPtr)
              (pMVar8,(__this->fields)._clipboard,(pMVar8->klass->vtable)._9_Deserialize.method);
    local_68 = __this;
    local_38 = pMVar8;
    if (0 < parentId) {
      pSVar1 = (pMVar8->fields).Objects;
      if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
        pGVar12 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        pSVar9 = pGVar12->__9__32_1;
      }
      else {
        pGVar12 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        pSVar9 = pGVar12->__9__32_1;
      }
      if (pSVar9 == (System_Func_MapScriptBaseObject__int__o *)0x0) {
        if ((((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c)->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
          pGVar12 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        }
        pIVar2 = (Il2CppObject *)pGVar12->__9;
        pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapScriptBaseObject_int);
        System_Func_object__int____ctor
                  ((System_Func_object__int__o *)pSVar9,pIVar2,
                   (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_Paste_b__32_1,
                   (MethodInfo_4F198F0 *)0x0);
        pGVar12 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        pGVar12->__9__32_1 = pSVar9;
        Il2CppCodeGenWriteBarrier(&pGVar12->__9__32_1);
      }
      pSVar10 = System_Linq_Enumerable__Select_object__int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                           (System_Func_TSource__TResult__o *)pSVar9,
                           (MethodInfo_34F5DF0 *)
                           MethodInfo_System_Linq_Enumerable_Select_MapScriptBaseObject_int);
      pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor_4fa7660
                (pSVar11,(System_Collections_Generic_IEnumerable_T__o *)pSVar10,
                 (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
      pSVar1 = (pMVar8->fields).Objects;
      if (pSVar1 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) goto label_0594e229;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,
                 (System_Collections_Generic_List_object__o *)pSVar1,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
      local_78 = local_90;
      local_88 = (undefined1  [8])local_a0._0_8_;
      pSStack_80 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_a0._8_8_;
      local_a0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_a0._8_8_ = local_88;
      if (pSVar11 == (System_Collections_Generic_HashSet_int__o *)0x0) {
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext)
        ;
        if (bVar6) {
          if (local_78 != (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
label_0594e248:
          ThrowNullReferenceException();
        }
      }
      else {
        while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext
                                 ), pIVar2 = local_78, bVar6) {
          if (local_78 == (Il2CppObject *)0x0) goto label_0594e248;
          bVar6 = System_Collections_Generic_HashSet_int___Contains
                            (pSVar11,*(int32_t *)((long)&local_78[2].klass + 4),
                             (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains)
          ;
          if (!bVar6) {
            *(int32_t *)((long)&pIVar2[2].klass + 4) = parentId;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    }
    pSVar3 = (System_Collections_Generic_HashSet_object__o *)(local_68->fields).SelectedObjects;
    if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a0,pSVar3,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
      local_48 = local_90;
      local_58 = (undefined1  [8])local_a0._0_8_;
      pSStack_50 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_a0._8_8_;
      local_a0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_5c = -1;
      iVar13 = -1;
      local_a0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_58;
      while (bVar6 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_58,
                                (MethodInfo_4C456D0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext),
            pIVar2 = local_48, bVar6) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        if (pIVar2 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if (pIVar2[2].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        __this_00 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
        if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar7 = System_Collections_Generic_List_int___IndexOf
                          (__this_00,*(int32_t *)&((pIVar2[2].klass)->_1).byval_arg.data,
                           (MethodInfo_3917A80 *)MethodInfo_System_Collections_Generic_List_int_IndexOf);
        if (iVar13 < iVar7) {
          if (pIVar2[2].klass == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          local_5c = *(int32_t *)&((pIVar2[2].klass)->_1).byval_arg.data;
          iVar13 = iVar7;
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_58,
                 (MethodInfo_4C456C0 *)
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
      pMVar8 = local_38;
      pSVar1 = (local_38->fields).Objects;
      method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand);
      method_01 = (MethodInfo *)0x0;
      MapEditor_AddObjectCommand___ctor
                ((MapEditor_AddObjectCommand_o *)method_00,pSVar1,local_5c,(MethodInfo *)0x0);
      pGVar5 = local_68;
      GameManagers_MapEditorGameManager__NewCommand
                (local_68,(MapEditor_BaseCommand_o *)method_00,true,method_01);
      GameManagers_MapEditorGameManager__DeselectAll(pGVar5,method_00);
      pSVar1 = (pMVar8->fields).Objects;
      if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
        pGVar12 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        pSVar9 = pGVar12->__9__32_0;
      }
      else {
        pGVar12 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        pSVar9 = pGVar12->__9__32_0;
      }
      if (pSVar9 == (System_Func_MapScriptBaseObject__int__o *)0x0) {
        if ((((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c)->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
          pGVar12 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        }
        pIVar2 = (Il2CppObject *)pGVar12->__9;
        pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapScriptBaseObject_int);
        System_Func_object__int____ctor
                  ((System_Func_object__int__o *)pSVar9,pIVar2,
                   (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_Paste_b__32_0,
                   (MethodInfo_4F198F0 *)0x0);
        pGVar12 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        pGVar12->__9__32_0 = pSVar9;
        Il2CppCodeGenWriteBarrier(&pGVar12->__9__32_0);
      }
      pSVar10 = System_Linq_Enumerable__Select_object__int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                           (System_Func_TSource__TResult__o *)pSVar9,
                           (MethodInfo_34F5DF0 *)
                           MethodInfo_System_Linq_Enumerable_Select_MapScriptBaseObject_int);
      pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor_4fa7660
                (pSVar11,(System_Collections_Generic_IEnumerable_T__o *)pSVar10,
                 (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
      pSVar1 = (pMVar8->fields).Objects;
      if (pSVar1 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,
                   (System_Collections_Generic_List_object__o *)pSVar1,
                   (MethodInfo_395E050 *)
                   MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
        local_78 = local_90;
        local_88 = (undefined1  [8])local_a0._0_8_;
        pSStack_80 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_a0._8_8_;
        local_a0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        local_a0._8_8_ = local_88;
        if (pSVar11 == (System_Collections_Generic_HashSet_int__o *)0x0) {
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext
                            );
          if (bVar6) {
            if (local_78 != (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
label_0594e23b:
            ThrowNullReferenceException();
          }
        }
        else {
label_0594e0d0:
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext
                            );
          pIVar2 = local_78;
          if (bVar6) {
            if (local_78 == (Il2CppObject *)0x0) goto label_0594e23b;
            bVar6 = System_Collections_Generic_HashSet_int___Contains
                              (pSVar11,*(int32_t *)((long)&local_78[2].klass + 4),
                               (MethodInfo_4FA7E00 *)
                               MethodInfo_System_Collections_Generic_HashSet_int_Contains);
            if (!bVar6) {
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
                          TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
              if (__this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              item = System_Collections_Generic_Dictionary_int__object___get_Item
                               (__this_01,*(int32_t *)&pIVar2[2].klass,
                                (MethodInfo_4A0F690 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
              if (Il2CppMethodInitialized_07545887 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_HashSet_MapObject_Add);
                Il2CppMethodInitialized_07545887 = '\x01';
              }
              if ((item != (Map_MapObject_o *)0x0) &&
                 ((item->fields).ScriptObject != (Map_MapScriptBaseObject_o *)0x0)) {
                pSVar3 = (System_Collections_Generic_HashSet_object__o *)(local_68->fields).SelectedObjects;
                if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                  System_Collections_Generic_HashSet_object___Add
                            (pSVar3,(Il2CppObject *)item,
                             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_Add
                            );
                  pMVar4 = (item->fields).ScriptObject;
                  if (pMVar4 != (Map_MapScriptBaseObject_o *)0x0) {
                    (local_68->fields).LastSelectedObjectId = (pMVar4->fields).Id;
                    goto label_0594e0d0;
                  }
                }
                ThrowNullReferenceException();
              }
            }
            goto label_0594e0d0;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
        pGVar5 = local_68;
        __this_02 = (local_68->fields)._menu;
        if (__this_02 != (UI_MapEditorMenu_o *)0x0) {
          UI_MapEditorMenu__SyncHierarchyPanel(__this_02,(MethodInfo *)0x0);
          GameManagers_MapEditorGameManager__OnSelectionChange(pGVar5,true,method_02);
          return;
        }
      }
    }
  }
label_0594e229:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$CreateEmptyParent
// il2cpp: void GameManagers_MapEditorGameManager__CreateEmptyParent (GameManagers_MapEditorGameManager_o* __this, int32_t contextId, const MethodInfo* method);
// 0x594e430
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x594e663: jmp 0x594e67e
// asm:   0x594e83f: jmp 0x594e869

void GameManagers_MapEditorGameManager__CreateEmptyParent
               (GameManagers_MapEditorGameManager_o *__this,int32_t contextId,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  System_Collections_Generic_HashSet_MapObject__o *source;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Map_MapScriptBaseObject_array *pMVar5;
  UnityEngine_GameObject_o *__this_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  UI_MapEditorMenu_o *__this_03;
  bool bVar6;
  int32_t key;
  uint uVar7;
  GameManagers_MapEditorGameManager___c__DisplayClass33_0_o *__this_04;
  System_Func_MapObject__int__o *__this_05;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_HashSet_int__o *pSVar8;
  System_Func_int__bool__o *__this_06;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar9;
  GameManagers_MapEditorGameManager___c_StaticFields *pGVar10;
  System_Func_int__int__o *__this_07;
  System_Linq_IOrderedEnumerable_TSource__o *source_01;
  Map_MapObject_o *pMVar11;
  Map_MapScriptObjects_o *pMVar12;
  Map_MapScriptBaseObject_o *pMVar13;
  System_String_o *pSVar14;
  UnityEngine_Transform_o *__this_08;
  MethodInfo *__this_09;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_HashSet_int__o **targetAddress;
  MethodInfo *pMVar15;
  UnityEngine_Vector3_o position;
  
  if (Il2CppMethodInitialized_07545880 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_CreateEmptyParentCommand);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptObjects);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_c_CreateEmptyParent_b__33_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_c_CreateEmptyParent_b__33_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_c__DisplayClass33_0_CreateEmptyParent_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_MapEditorGameManager_c__DisplayClass33_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Empty Object");
    Il2CppMethodInitialized_07545880 = '\x01';
  }
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c__DisplayClass33_0);
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  if (__this_04 != (GameManagers_MapEditorGameManager___c__DisplayClass33_0_o *)0x0) {
    (__this_04->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_04->fields).__4__this);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar2,contextId,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (!bVar6) {
        return;
      }
      source = (__this->fields).SelectedObjects;
      if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
        pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        __this_05 = pGVar10->__9__33_0;
      }
      else {
        pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        __this_05 = pGVar10->__9__33_0;
      }
      if (__this_05 == (System_Func_MapObject__int__o *)0x0) {
        if ((((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c)->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
          pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        }
        pIVar3 = (Il2CppObject *)pGVar10->__9;
        __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
        System_Func_object__int____ctor
                  ((System_Func_object__int__o *)__this_05,pIVar3,
                   (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_CreateEmptyParent_b__33_0,
                   (MethodInfo_4F198F0 *)0x0);
        pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        pGVar10->__9__33_0 = __this_05;
        Il2CppCodeGenWriteBarrier(&pGVar10->__9__33_0);
      }
      collection = System_Linq_Enumerable__Select_object__int_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                              (System_Func_TSource__TResult__o *)__this_05,
                              (MethodInfo_34F5DF0 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
      pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor_4fa7660
                (pSVar8,(System_Collections_Generic_IEnumerable_T__o *)collection,
                 (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
      targetAddress = &(__this_04->fields).selectedIds;
      (__this_04->fields).selectedIds = pSVar8;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pSVar8 = (__this_04->fields).selectedIds;
      if (pSVar8 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        bVar6 = System_Collections_Generic_HashSet_int___Contains
                          (pSVar8,contextId,
                           (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
        if (!bVar6) {
          pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
          System_Collections_Generic_HashSet_int____ctor
                    (pSVar8,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
          if (pSVar8 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0594ebea;
          System_Collections_Generic_HashSet_int___Add
                    (pSVar8,contextId,
                     (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
          *targetAddress = pSVar8;
          Il2CppCodeGenWriteBarrier(targetAddress);
        }
        pSVar8 = (__this_04->fields).selectedIds;
        __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
        System_Func_int__bool____ctor
                  (__this_06,(Il2CppObject *)__this_04,
                   (intptr_t)
                   MethodInfo_GameManagers_MapEditorGameManager_c__DisplayClass33_0_CreateEmptyParent_b__1,
                   (MethodInfo_4F12D00 *)0x0);
        source_00 = System_Linq_Enumerable__Where_int_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,
                               (System_Func_TSource__bool__o *)__this_06,
                               (MethodInfo_35022A0 *)MethodInfo_System_Linq_Enumerable_Where_int);
        pSVar9 = System_Linq_Enumerable__ToList_int_
                           (source_00,(MethodInfo_3500DB0 *)MethodInfo_System_Linq_Enumerable_ToList_int);
        if (pSVar9 != (System_Collections_Generic_List_TSource__o *)0x0) {
          if ((pSVar9->fields)._size == 0) {
            return;
          }
          if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
            pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
            __this_07 = pGVar10->__9__33_2;
          }
          else {
            pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
            __this_07 = pGVar10->__9__33_2;
          }
          if (__this_07 == (System_Func_int__int__o *)0x0) {
            if ((((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c)->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
              pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
            }
            pIVar3 = (Il2CppObject *)pGVar10->__9;
            __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int);
            System_Func_int__int____ctor
                      (__this_07,pIVar3,
                       (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_CreateEmptyParent_b__33_2,
                       (MethodInfo_4F12F40 *)0x0);
            pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
            pGVar10->__9__33_2 = __this_07;
            Il2CppCodeGenWriteBarrier(&pGVar10->__9__33_2);
          }
          source_01 = System_Linq_Enumerable__OrderBy_int__int_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar9,
                                 (System_Func_TSource__TKey__o *)__this_07,
                                 (MethodInfo_34F1B50 *)MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
          pSVar9 = System_Linq_Enumerable__ToList_int_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,
                              (MethodInfo_3500DB0 *)MethodInfo_System_Linq_Enumerable_ToList_int);
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          if (pSVar9 != (System_Collections_Generic_List_TSource__o *)0x0) {
            pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            key = System_Collections_Generic_List_int___get_Item
                            ((System_Collections_Generic_List_int__o *)pSVar9,0,
                             (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
            if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              pMVar11 = System_Collections_Generic_Dictionary_int__object___get_Item
                                  (pSVar2,key,
                                   (MethodInfo_4A0F690 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
              pMVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
              Map_MapScriptObjects___ctor(pMVar12,(MethodInfo *)0x0);
              if (pMVar12 != (Map_MapScriptObjects_o *)0x0) {
                pSVar4 = (pMVar12->fields).Objects;
                if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                }
                __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                            TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
                   (pMVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                                        (__this_00,(Il2CppObject *)"Empty Object",
                                         (MethodInfo_4AAD450 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                        ),
                   pMVar15 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add,
                   pSVar4 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
                  piVar1 = &(pSVar4->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pMVar5 = (pSVar4->fields)._items;
                  if (pMVar5 != (Map_MapScriptBaseObject_array *)0x0) {
                    uVar7 = (pSVar4->fields)._size;
                    if (uVar7 < (uint)pMVar5->max_length) {
                      (pSVar4->fields)._size = uVar7 + 1;
                      pMVar5->m_Items[(int)uVar7] = pMVar13;
                      Il2CppCodeGenWriteBarrier(pMVar5->m_Items + (int)uVar7);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pMVar13,
                                 (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
                    }
                    pSVar14 = (*(pMVar12->klass->vtable)._8_Serialize.methodPtr)
                                        (pMVar12,(pMVar12->klass->vtable)._8_Serialize.method);
                    pMVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
                    Map_MapScriptObjects___ctor(pMVar12,(MethodInfo *)0x0);
                    if (pMVar12 != (Map_MapScriptObjects_o *)0x0) {
                      (*(pMVar12->klass->vtable)._9_Deserialize.methodPtr)
                                (pMVar12,pSVar14,(pMVar12->klass->vtable)._9_Deserialize.method);
                      pSVar4 = (pMVar12->fields).Objects;
                      if (((pSVar4 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) &&
                          (pMVar13 = System_Collections_Generic_List_object___get_Item
                                               ((System_Collections_Generic_List_object__o *)pSVar4,0,
                                                (MethodInfo_395CF20 *)
                                                MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Item
                                               ), pMVar11 != (Map_MapObject_o *)0x0)) &&
                         (pMVar13 != (Map_MapScriptBaseObject_o *)0x0)) {
                        (pMVar13->fields).Parent = (pMVar11->fields).Parent;
                        __this_01 = (pMVar11->fields).GameObject;
                        if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
                           (__this_08 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0),
                           __this_08 != (UnityEngine_Transform_o *)0x0)) {
                          position = UnityEngine_Transform__get_position(__this_08,(MethodInfo *)0x0);
                          Map_MapScriptBaseObject__SetPosition(pMVar13,position,(MethodInfo *)0x0);
                          uVar7 = System_Collections_Generic_List_int___get_Item
                                            ((System_Collections_Generic_List_int__o *)pSVar9,0,
                                             (MethodInfo_39167D0 *)
                                             MethodInfo_System_Collections_Generic_List_int_get_Item);
                          __this_09 = (MethodInfo *)
                                      il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_MapEditor_CreateEmptyParentCommand);
                          method_00 = (MethodInfo *)(ulong)uVar7;
                          MapEditor_CreateEmptyParentCommand___ctor
                                    ((MapEditor_CreateEmptyParentCommand_o *)__this_09,pMVar13,
                                     (System_Collections_Generic_List_int__o *)pSVar9,uVar7,(MethodInfo *)0x0)
                          ;
                          pMVar15 = __this_09;
                          GameManagers_MapEditorGameManager__NewCommand
                                    (__this,(MapEditor_BaseCommand_o *)__this_09,true,method_00);
                          GameManagers_MapEditorGameManager__DeselectAll(__this,pMVar15);
                          if ((__this_09 != (MethodInfo *)0x0) &&
                             (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                                       TypeInfo_Map_MapLoader->static_fields->IdToMapObject,
                             pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
                            pMVar11 = System_Collections_Generic_Dictionary_int__object___get_Item
                                                (pSVar2,*(int32_t *)&__this_09->klass,
                                                 (MethodInfo_4A0F690 *)
                                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item
                                                );
                            if (Il2CppMethodInitialized_07545887 == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata
                                        (&MethodInfo_System_Collections_Generic_HashSet_MapObject_Add);
                              Il2CppMethodInitialized_07545887 = '\x01';
                            }
                            if ((pMVar11 != (Map_MapObject_o *)0x0) &&
                               ((pMVar11->fields).ScriptObject != (Map_MapScriptBaseObject_o *)0x0)) {
                              __this_02 = (System_Collections_Generic_HashSet_object__o *)
                                          (__this->fields).SelectedObjects;
                              if (__this_02 == (System_Collections_Generic_HashSet_object__o *)0x0)
                              goto label_0594ebea;
                              System_Collections_Generic_HashSet_object___Add
                                        (__this_02,(Il2CppObject *)pMVar11,
                                         (MethodInfo_4FB4450 *)
                                         MethodInfo_System_Collections_Generic_HashSet_MapObject_Add);
                              pMVar13 = (pMVar11->fields).ScriptObject;
                              if (pMVar13 == (Map_MapScriptBaseObject_o *)0x0) goto label_0594ebea;
                              (__this->fields).LastSelectedObjectId = (pMVar13->fields).Id;
                            }
                            __this_03 = (__this->fields)._menu;
                            if (__this_03 != (UI_MapEditorMenu_o *)0x0) {
                              UI_MapEditorMenu__SyncHierarchyPanel(__this_03,(MethodInfo *)0x0);
                              GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,method_01);
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
label_0594ebea:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$ResetOrigin
// il2cpp: void GameManagers_MapEditorGameManager__ResetOrigin (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x594ec00
// eh: try 0x594ef24..0x594f0db -> pad 0x594f0fc (+17 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x594f11b..0x594f120 -> pad 0x594f145 cleanup
// eh: try 0x594f148..0x594f152 -> pad 0x594f15a catch (...) [compiler noexcept guard]
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x594ed98: jmp 0x594edb2
// asm:   0x594ef1d: nop dword ptr [rax]
// asm:   0x594f0e0: jmp 0x594f0fe
// asm:   0x594f0e2: jmp 0x594f0fe
// asm:   0x594f0e4: jmp 0x594f0fe
// asm:   0x594f0e6: jmp 0x594f0fe
// asm:   0x594f0e8: jmp 0x594f0fe
// asm:   0x594f0ea: jmp 0x594f0fe
// asm:   0x594f0ec: jmp 0x594f0fe
// asm:   0x594f0ee: jmp 0x594f0fe
// asm:   0x594f0f0: jmp 0x594f0fe
// asm:   0x594f0f2: jmp 0x594f0fe
// asm:   0x594f0f4: jmp 0x594f0fe
// asm:   0x594f0f6: jmp 0x594f0fe
// asm:   0x594f0f8: jmp 0x594f0fe
// asm:   0x594f0fa: jmp 0x594f0fe
// asm:   0x594f0fc: jmp 0x594f0fe
// asm:   0x594f0fe: mov rbx, rax
// asm:   0x594f101: mov rbp, qword ptr [rsp + 8]
// asm:   0x594f106: cmp edx, 1
// asm:   0x594f109: jne 0x594f148
// asm:   0x594f10b: mov rdi, rbx
// asm:   0x594f10e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x594f113: mov rbx, qword ptr [rax]
// asm:   0x594f116: mov qword ptr [rsp + 0x28], rbx
// asm:   0x594f11b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x594f120: lea rax, [rip + 0x193f299]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x594f127: mov rsi, qword ptr [rax]
// asm:   0x594f12a: lea rdi, [rsp + 0x10]
// asm:   0x594f12f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x594f134: test rbx, rbx
// asm:   0x594f137: je 0x594f069
// asm:   0x594f13d: mov rdi, rbx
// asm:   0x594f140: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x594f145: mov rbx, rax
// asm:   0x594f148: lea rdi, [rsp + 0x28]
// asm:   0x594f14d: call 0x2fd3640  ; il2cpp_runtime_helper_02fd3640()
// asm:   0x594f152: mov rdi, rbx
// asm:   0x594f155: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x594f15a: mov rdi, rax
// asm:   0x594f15d: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_MapEditorGameManager__ResetOrigin
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  System_Collections_Generic_HashSet_MapObject__o *pSVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_Dictionary_int__object__o *pSVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar6;
  bool bVar7;
  GameManagers_MapEditorGameManager___c__DisplayClass34_0_o *__this_01;
  GameManagers_MapEditorGameManager___c_StaticFields *pGVar8;
  System_Func_MapObject__int__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_HashSet_int__o *__this_03;
  System_Func_MapObject__bool__o *__this_04;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  UnityEngine_Transform_o *__this_05;
  Map_MapObject_o *pMVar9;
  UnityEngine_Transform_o *__this_06;
  MapEditor_TransformPositionCommand_o *__this_07;
  MethodInfo **method_00;
  MethodInfo *method_01;
  UnityEngine_Vector3_o UVar10;
  System_Collections_Generic_List_Enumerator_object__o SStack_68;
  undefined1 auStack_50 [16];
  Il2CppObject *pIStack_40;
  System_Collections_Generic_List_MapObject__o *pSStack_38;
  
  if (Il2CppMethodInitialized_07545881 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_MapObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_TransformPositionCommand);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_c_ResetOrigin_b__34_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_c__DisplayClass34_0_ResetOrigin_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_MapEditorGameManager_c__DisplayClass34_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager_c);
    Il2CppMethodInitialized_07545881 = '\x01';
  }
  SStack_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_68.fields._index = 0;
  SStack_68.fields._version = 0;
  SStack_68.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c__DisplayClass34_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (GameManagers_MapEditorGameManager___c__DisplayClass34_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    pSVar3 = (__this->fields).SelectedObjects;
    if (pSVar3 != (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
      if ((pSVar3->fields)._count != 0) {
        if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
          pGVar8 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
          __this_02 = pGVar8->__9__34_0;
        }
        else {
          pGVar8 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
          __this_02 = pGVar8->__9__34_0;
        }
        if (__this_02 == (System_Func_MapObject__int__o *)0x0) {
          if ((((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c)->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
            pGVar8 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
          }
          pIVar4 = (Il2CppObject *)pGVar8->__9;
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
          System_Func_object__int____ctor
                    ((System_Func_object__int__o *)__this_02,pIVar4,
                     (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_ResetOrigin_b__34_0,
                     (MethodInfo_4F198F0 *)0x0);
          pGVar8 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
          pGVar8->__9__34_0 = __this_02;
          Il2CppCodeGenWriteBarrier(&pGVar8->__9__34_0);
        }
        collection = System_Linq_Enumerable__Select_object__int_
                               ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                                (System_Func_TSource__TResult__o *)__this_02,
                                (MethodInfo_34F5DF0 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
        __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
        System_Collections_Generic_HashSet_int____ctor_4fa7660
                  (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection,
                   (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
        (__this_01->fields).selectedIds = __this_03;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).selectedIds);
        pSVar3 = (__this->fields).SelectedObjects;
        __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
        System_Func_object__bool____ctor
                  ((System_Func_object__bool__o *)__this_04,(Il2CppObject *)__this_01,
                   (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c__DisplayClass34_0_ResetOrigin_b__1
                   ,(MethodInfo_4F19300 *)0x0);
        source = System_Linq_Enumerable__Where_object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                            (System_Func_TSource__bool__o *)__this_04,
                            (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_MapObject);
        pSStack_38 = (System_Collections_Generic_List_MapObject__o *)
                     System_Linq_Enumerable__ToList_object_
                               (source,(MethodInfo_35011B0 *)
                                       MethodInfo_System_Linq_Enumerable_ToList_MapObject);
        if (pSStack_38 == (System_Collections_Generic_List_MapObject__o *)0x0) goto label_0594f0db;
        method_00 = &MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_50,
                   (System_Collections_Generic_List_object__o *)pSStack_38,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
        SStack_68.fields._current = pIStack_40;
        SStack_68.fields._list = (System_Collections_Generic_List_T__o *)auStack_50._0_8_;
        SStack_68.fields._index = auStack_50._8_4_;
        SStack_68.fields._version = auStack_50._12_4_;
        auStack_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        auStack_50._8_8_ = &SStack_68;
        while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (&SStack_68,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext),
              pIVar4 = SStack_68.fields._current, bVar7) {
          if (SStack_68.fields._current == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (SStack_68.fields._current[1].monitor == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          __this_05 = UnityEngine_GameObject__get_transform
                                (SStack_68.fields._current[1].monitor,(MethodInfo *)0x0);
          if (*(int *)&pIVar4[1].klass < 0) {
label_0594f010:
            if (Il2CppMethodInitialized_0753e4b6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e4b6 = '\x01';
            }
            pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar1 = (pUVar6->zeroVector).fields.x;
            fVar2 = (pUVar6->zeroVector).fields.y;
            UVar10.fields.z = (pUVar6->zeroVector).fields.z;
          }
          else {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar5 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar7 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                              (pSVar5,*(int32_t *)&pIVar4[1].klass,
                               (MethodInfo_4A0F950 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
            if (!bVar7) goto label_0594f010;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar5 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pMVar9 = System_Collections_Generic_Dictionary_int__object___get_Item
                               (pSVar5,*(int32_t *)&pIVar4[1].klass,
                                (MethodInfo_4A0F690 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            if (pMVar9 == (Map_MapObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_00 = (pMVar9->fields).GameObject;
            if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_06 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
            if (__this_06 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            UVar10 = UnityEngine_Transform__get_position(__this_06,(MethodInfo *)0x0);
            UVar10.fields.z = UVar10.fields.z;
            fVar1 = UVar10.fields.x;
            fVar2 = UVar10.fields.y;
          }
          if (__this_05 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UVar10.fields.y = fVar2;
          UVar10.fields.x = fVar1;
          UVar10.fields.z = UVar10.fields.z;
          UnityEngine_Transform__set_position(__this_05,UVar10,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (&SStack_68,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
        __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_TransformPositionCommand);
        MapEditor_TransformPositionCommand___ctor(__this_07,pSStack_38,(MethodInfo *)0x0);
        GameManagers_MapEditorGameManager__NewCommand
                  (__this,(MapEditor_BaseCommand_o *)__this_07,true,(MethodInfo *)method_00);
        GameManagers_MapEditorGameManager__OnSelectionChange(__this,false,method_01);
      }
      return;
    }
  }
label_0594f0db:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$Cut
// il2cpp: void GameManagers_MapEditorGameManager__Cut (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x594f180

void GameManagers_MapEditorGameManager__Cut(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager__Copy(__this,method);
  GameManagers_MapEditorGameManager__Delete(__this,method);
  return;
}


// GameManagers.MapEditorGameManager$$Delete
// il2cpp: void GameManagers_MapEditorGameManager__Delete (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x594f1a0

void GameManagers_MapEditorGameManager__Delete(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  bool includeDescendants;
  System_Collections_Generic_HashSet_MapObject__o *collection;
  UI_MapEditorMenu_o *__this_00;
  System_Collections_Generic_List_MapObject__o *objs;
  MapEditor_DeleteObjectCommand_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07545882 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_DeleteObjectCommand);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_ctor_7195590);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    Il2CppMethodInitialized_07545882 = '\x01';
  }
  collection = (__this->fields).SelectedObjects;
  if (collection != (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
    if ((collection->fields)._count == 0) {
      return;
    }
    objs = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
    System_Collections_Generic_List_object____ctor_395ca70
              ((System_Collections_Generic_List_object__o *)objs,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor_7195590);
    includeDescendants = (__this->fields).HierarchyTreeViewEnabled;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand);
    method_00 = (MethodInfo *)0x0;
    MapEditor_DeleteObjectCommand___ctor(__this_01,objs,includeDescendants,(MethodInfo *)0x0);
    GameManagers_MapEditorGameManager__NewCommand(__this,(MapEditor_BaseCommand_o *)__this_01,true,method_00);
    __this_00 = (__this->fields)._menu;
    if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
      UI_MapEditorMenu__SyncHierarchyPanel(__this_00,(MethodInfo *)0x0);
      GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,method_01);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$get_MobilePointer
// il2cpp: UI_MobileMapEditorPointer_o* GameManagers_MapEditorGameManager__get_MobilePointer (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x594f2a0

UI_MobileMapEditorPointer_o *
GameManagers_MapEditorGameManager__get_MobilePointer
          (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UI_MobileMapEditorPointer_o *pUVar1;
  UI_MobileMapEditorPointer_o **targetAddress;
  
  if (Il2CppMethodInitialized_07545883 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileMapEditorPointer);
    Il2CppMethodInitialized_07545883 = '\x01';
    pUVar1 = (__this->fields)._mobilePointer;
  }
  else {
    pUVar1 = (__this->fields)._mobilePointer;
  }
  if (pUVar1 == (UI_MobileMapEditorPointer_o *)0x0) {
    targetAddress = &(__this->fields)._mobilePointer;
    pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
    UI_MobileMapEditorPointer___ctor(pUVar1,(MethodInfo *)0x0);
    *targetAddress = pUVar1;
    Il2CppCodeGenWriteBarrier(targetAddress);
    return *targetAddress;
  }
  return pUVar1;
}


// GameManagers.MapEditorGameManager$$Select
// il2cpp: void GameManagers_MapEditorGameManager__Select (GameManagers_MapEditorGameManager_o* __this, bool multi, const MethodInfo* method);
// 0x594f320

void GameManagers_MapEditorGameManager__Select
               (GameManagers_MapEditorGameManager_o *__this,bool multi,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  MethodInfo *in_RCX;
  UnityEngine_Vector3_o position;
  
  position = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_MapEditorMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  GameManagers_MapEditorGameManager__SelectAt(__this,multi,position,(pUVar1->fields).IsMouseUI,in_RCX);
  return;
}


// GameManagers.MapEditorGameManager$$SelectAt
// il2cpp: void GameManagers_MapEditorGameManager__SelectAt (GameManagers_MapEditorGameManager_o* __this, bool multi, UnityEngine_Vector3_o position, bool isUI, const MethodInfo* method);
// 0x594f360
// eh: try 0x594f7fa..0x594fdb0 -> pad 0x594fdc8 (+39 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x594fe19..0x594fe1e -> pad 0x594fe43 cleanup
// eh: try 0x594fe46..0x594fe53 -> pad 0x594fe5b catch (...) [compiler noexcept guard]
// asm: 67 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x594f5b5: jmp 0x594fd9c
// asm:   0x594f7da: lea r14, [rip + 0x192bc0f]  ; TypeInfo_UnityEngine_Object
// asm:   0x594f7e1: nop word ptr cs:[rax + rax]
// asm:   0x594f98d: jmp 0x594f9b5
// asm:   0x594fb3c: nop dword ptr [rax]
// asm:   0x594fdb0: jmp 0x594fdfe
// asm:   0x594fdb2: jmp 0x594fdfe
// asm:   0x594fdb4: jmp 0x594fdfe
// asm:   0x594fdb6: jmp 0x594fdfe
// asm:   0x594fdb8: jmp 0x594fdfe
// asm:   0x594fdba: jmp 0x594fdfe
// asm:   0x594fdbc: jmp 0x594fdfe
// asm:   0x594fdbe: jmp 0x594fdfe
// asm:   0x594fdc0: jmp 0x594fdfe
// asm:   0x594fdc2: jmp 0x594fdfe
// asm:   0x594fdc4: jmp 0x594fdfe
// asm:   0x594fdc6: jmp 0x594fdfe
// asm:   0x594fdc8: jmp 0x594fdfe
// asm:   0x594fdca: jmp 0x594fdfe
// asm:   0x594fdcc: jmp 0x594fdfe
// asm:   0x594fdce: jmp 0x594fdfe
// asm:   0x594fdd0: jmp 0x594fdfe
// asm:   0x594fdd2: jmp 0x594fdfe
// asm:   0x594fdd4: jmp 0x594fdfe
// asm:   0x594fdd6: jmp 0x594fdfe
// asm:   0x594fdd8: jmp 0x594fdfe
// asm:   0x594fdda: jmp 0x594fdfe
// asm:   0x594fddc: jmp 0x594fdfe
// asm:   0x594fdde: jmp 0x594fdfe
// asm:   0x594fde0: jmp 0x594fdfe
// asm:   0x594fde2: jmp 0x594fdfe
// asm:   0x594fde4: jmp 0x594fdfe
// asm:   0x594fde6: jmp 0x594fdfe
// asm:   0x594fde8: jmp 0x594fdfe
// asm:   0x594fdea: jmp 0x594fdfe
// asm:   0x594fdec: jmp 0x594fdfe
// asm:   0x594fdee: jmp 0x594fdfe
// asm:   0x594fdf0: jmp 0x594fdfe
// asm:   0x594fdf2: jmp 0x594fdfe
// asm:   0x594fdf4: jmp 0x594fdfe
// asm:   0x594fdf6: jmp 0x594fdfe
// asm:   0x594fdf8: jmp 0x594fdfe
// asm:   0x594fdfa: jmp 0x594fdfe
// asm:   0x594fdfc: jmp 0x594fdfe
// asm:   0x594fdfe: mov rbx, rax
// asm:   0x594fe01: cmp edx, 1
// asm:   0x594fe04: jne 0x594fe46
// asm:   0x594fe06: mov rdi, rbx
// asm:   0x594fe09: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x594fe0e: mov rbx, qword ptr [rax]
// asm:   0x594fe11: mov qword ptr [rsp + 0xa0], rbx
// asm:   0x594fe19: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x594fe1e: lea rax, [rip + 0x193f8bb]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_GameObject_MapObject_Dispose
// asm:   0x594fe25: mov rsi, qword ptr [rax]
// asm:   0x594fe28: lea rdi, [rsp + 0x30]
// asm:   0x594fe2d: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x594fe32: test rbx, rbx
// asm:   0x594fe35: je 0x594fc76
// asm:   0x594fe3b: mov rdi, rbx
// asm:   0x594fe3e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x594fe43: mov rbx, rax
// asm:   0x594fe46: lea rdi, [rsp + 0xa0]
// asm:   0x594fe4e: call 0x2fd3670  ; il2cpp_runtime_helper_02fd3670()
// asm:   0x594fe53: mov rdi, rbx
// asm:   0x594fe56: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x594fe5b: mov rdi, rax
// asm:   0x594fe5e: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_MapEditorGameManager__SelectAt
               (GameManagers_MapEditorGameManager_o *__this,bool multi,UnityEngine_Vector3_o position,
               bool isUI,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  uint32_t uVar5;
  MapEditor_MapEditorBrush_o *pMVar6;
  Cameras_BaseCamera_o *pCVar7;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Camera_o *pUVar10;
  Utility_BaseComponentCache_o *pUVar11;
  UnityEngine_Transform_o *__this_00;
  Map_MapScriptBaseObject_o *pMVar12;
  UnityEngine_Ray_o ray;
  UnityEngine_Vector3_o position_00;
  Il2CppObject *pIVar13;
  int32_t iVar14;
  undefined1 auVar15 [16];
  bool bVar16;
  UnityEngine_LayerMask_o mask;
  uint uVar17;
  System_Int32_array *layers;
  UnityEngine_Collider_o *collider;
  MethodInfo *obj;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  Map_MapObject_o *item;
  System_Object_array *pSVar18;
  ulong uVar19;
  UnityEngine_GameObject_o *pUVar20;
  undefined7 in_register_00000011;
  MethodInfo *pMVar21;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  ulong uVar22;
  undefined7 in_register_00000031;
  MethodInfo *pMVar23;
  System_Collections_Generic_HashSet_object__o *pSVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar28;
  float fVar29;
  float in_XMM1_Db;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  UnityEngine_Vector3_o UVar39;
  UnityEngine_Vector3_o v;
  UnityEngine_Vector3_o start;
  UnityEngine_Vector3_o end;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_f8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_e0;
  undefined1 local_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *local_80;
  undefined1 local_78 [16];
  UnityEngine_RaycastHit_o local_68;
  
  pMVar23 = (MethodInfo *)CONCAT71(in_register_00000031,multi);
  pMVar21 = (MethodInfo *)CONCAT71(in_register_00000011,isUI);
  UVar39.fields.z = position.fields.z;
  fStack_a0 = in_XMM0_Dc;
  local_a8 = position.fields._0_8_;
  fStack_9c = in_XMM0_Dd;
  fVar25 = position.fields.x;
  fVar26 = position.fields.y;
  if (Il2CppMethodInitialized_07545884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_GameObject_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_GameObject_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_GameObject_MapObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_GameObject_MapObject_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07545884 = '\x01';
    pMVar21 = extraout_RDX;
    fVar25 = (float)local_a8._0_4_;
    fVar26 = (float)local_a8._4_4_;
    in_XMM0_Dc = fStack_a0;
    in_XMM0_Dd = fStack_9c;
  }
  auVar15 = _local_c8;
  local_68.fields.m_UV.fields.x = 0.0;
  local_68.fields.m_UV.fields.y = 0.0;
  local_68.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_68.fields.m_Normal.fields.y = 0.0;
  local_68.fields.m_Normal.fields.z = 0.0;
  local_68.fields.m_FaceID = 0;
  local_68.fields.m_Distance = 0.0;
  local_68.fields.m_Point.fields.x = 0.0;
  local_68.fields.m_Point.fields.y = 0.0;
  local_68.fields.m_Point.fields.z = 0.0;
  local_68.fields.m_Normal.fields.x = 0.0;
  local_f8.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8.fields._index = 0;
  local_f8.fields._version = 0;
  local_f8.fields._currentKey = (Il2CppObject *)0x0;
  pMVar6 = (__this->fields).Brush;
  if ((pMVar6 != (MapEditor_MapEditorBrush_o *)0x0) && ((pMVar6->fields).Active != false)) {
    return;
  }
  pCVar7 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  fVar1 = (__this->fields)._dragStart.fields.x;
  fVar3 = (__this->fields)._dragStart.fields.y;
  local_c8._4_4_ = fVar3;
  local_c8._0_4_ = fVar1;
  fVar35 = (__this->fields)._dragStart.fields.z;
  fVar28 = UVar39.fields.z;
  fVar30 = fVar25;
  fVar32 = fVar26;
  fVar33 = 0.0;
  fVar34 = 0.0;
  fVar36 = fVar1;
  fVar37 = 0.0;
  fVar38 = fVar3;
  if (g_data_0753e729 == '\0') {
    local_b8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)CONCAT44(fVar25,UVar39.fields.z);
    uStack_b0 = CONCAT44(fVar26,in_XMM1_Db);
    _fStack_c0 = 0;
    fStack_90 = 0.0;
    local_98 = fVar35;
    fStack_94 = fVar1;
    fStack_8c = fVar3;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    g_data_0753e729 = '\x01';
    pMVar21 = extraout_RDX_00;
    fVar25 = (float)local_a8._0_4_;
    fVar26 = (float)local_a8._4_4_;
    in_XMM0_Dc = fStack_a0;
    in_XMM0_Dd = fStack_9c;
    fVar28 = (float)local_b8;
    fVar30 = local_b8._4_4_;
    in_XMM1_Db = (float)uStack_b0;
    fVar32 = uStack_b0._4_4_;
    fVar1 = (float)local_c8._0_4_;
    fVar3 = (float)local_c8._4_4_;
    fVar33 = fStack_c0;
    fVar34 = fStack_bc;
    fVar35 = local_98;
    fVar36 = fStack_94;
    fVar37 = fStack_90;
    fVar38 = fStack_8c;
    auVar15 = _local_c8;
  }
  _local_c8 = auVar15;
  fVar27 = fVar26 - fVar3;
  fVar29 = fVar28 - fVar35;
  fVar31 = fVar30 - fVar36;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    local_b8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               CONCAT44(fVar30 - fVar36,fVar28 - fVar35);
    uStack_b0 = CONCAT44(fVar32 - fVar38,in_XMM1_Db - fVar37);
    local_c8._4_4_ = fVar26 - fVar3;
    local_c8._0_4_ = fVar25 - fVar1;
    fStack_c0 = in_XMM0_Dc - fVar33;
    fStack_bc = in_XMM0_Dd - fVar34;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    pMVar21 = extraout_RDX_01;
    fVar27 = (float)local_c8._4_4_;
    fVar29 = (float)local_b8;
    fVar31 = local_b8._4_4_;
  }
  fVar25 = fVar27 * fVar27 + fVar31 * fVar31 + fVar29 * fVar29;
  if (fVar25 < 0.0) {
    fVar25 = sqrtf(fVar25);
    pMVar21 = extraout_RDX_02;
  }
  else {
    fVar25 = SQRT(fVar25);
  }
  if (fVar25 < 1.0) {
    if (isUI) goto label_0594fc76;
    if ((pCVar7 == (Cameras_BaseCamera_o *)0x0) ||
       (pUVar10 = (pCVar7->fields).Camera, pUVar10 == (UnityEngine_Camera_o *)0x0)) goto label_0594fd9c;
    UVar39.fields.x = (float)local_a8._0_4_;
    UVar39.fields.y = (float)local_a8._4_4_;
    UnityEngine_Camera__ScreenPointToRay_68c1290
              ((UnityEngine_Ray_o *)&local_e0,pUVar10,UVar39,(MethodInfo *)0x0);
    layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (layers == (System_Int32_array *)0x0) goto label_0594fd9c;
    if ((int)layers->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject;
    mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
    uVar17 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    ray.fields.m_Direction.fields.x = (float)local_e0.fields._version;
    ray.fields.m_Origin.fields.z = (float)local_e0.fields._index;
    pMVar23 = (MethodInfo *)(ulong)uVar17;
    ray.fields.m_Origin.fields._0_8_ = local_e0.fields._dictionary;
    ray.fields.m_Direction.fields._4_8_ = local_e0.fields._currentKey;
    bVar16 = UnityEngine_Physics__Raycast_69da1f0(ray,&local_68,100000.0,uVar17,(MethodInfo *)0x0);
    if (bVar16) {
      collider = UnityEngine_RaycastHit__get_collider(&local_68,(MethodInfo *)0x0);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pMVar23 = (MethodInfo *)0x0;
      obj = (MethodInfo *)Map_MapLoader__FindObjectFromCollider(collider,(MethodInfo *)0x0);
      pSVar24 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
      if (multi) {
        if (pSVar24 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0594fd9c;
        bVar16 = System_Collections_Generic_HashSet_object___Contains
                           (pSVar24,(Il2CppObject *)obj,
                            (MethodInfo_4FB3720 *)
                            MethodInfo_System_Collections_Generic_HashSet_MapObject_Contains);
        pMVar21 = method_00;
        if (bVar16) {
          GameManagers_MapEditorGameManager__DeselectObject(__this,(Map_MapObject_o *)obj,method_00);
          pMVar21 = extraout_RDX_05;
          goto label_0594fc76;
        }
      }
      else {
        if (pSVar24 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0594fd9c;
        pMVar21 = extraout_RDX_04;
        if ((pSVar24->fields)._count == 1) {
          pMVar23 = obj;
          bVar16 = System_Collections_Generic_HashSet_object___Contains
                             (pSVar24,(Il2CppObject *)obj,
                              (MethodInfo_4FB3720 *)
                              MethodInfo_System_Collections_Generic_HashSet_MapObject_Contains);
          if (bVar16) goto label_0594fc9c;
          pSVar24 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
          pMVar21 = extraout_RDX_08;
          if (pSVar24 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0594fd9c;
        }
        if ((pSVar24->fields)._count < 1) {
          GameManagers_MapEditorGameManager__SelectObject(__this,(Map_MapObject_o *)obj,pMVar21);
          pMVar21 = extraout_RDX_12;
          goto label_0594fc76;
        }
        GameManagers_MapEditorGameManager__DeselectAll(__this,pMVar23);
        pMVar21 = extraout_RDX_09;
      }
      if (Il2CppMethodInitialized_07545887 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_MapObject_Add);
        Il2CppMethodInitialized_07545887 = '\x01';
        pMVar21 = extraout_RDX_10;
      }
      if ((obj == (MethodInfo *)0x0) || (obj->klass == (Il2CppClass *)0x0)) goto label_0594fc76;
      pSVar24 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
      if (pSVar24 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (pSVar24,(Il2CppObject *)obj,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_Add);
        if (obj->klass != (Il2CppClass *)0x0) {
          (__this->fields).LastSelectedObjectId = *(int32_t *)&(obj->klass->_1).byval_arg.data;
          pMVar21 = extraout_RDX_11;
          goto label_0594fc76;
        }
      }
      goto label_0594fd9c;
    }
    pMVar21 = extraout_RDX_03;
    if (multi) goto label_0594fc76;
label_0594fc9c:
    GameManagers_MapEditorGameManager__DeselectAll(__this,pMVar23);
    pMVar21 = extraout_RDX_07;
    goto label_0594fc76;
  }
  if (multi) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor != 0) goto label_0594f5a1;
label_0594f759:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
  }
  else {
    GameManagers_MapEditorGameManager__DeselectAll(__this,pMVar23);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) goto label_0594f759;
label_0594f5a1:
    pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
  }
  if ((pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_01 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            (pSVar8,(MethodInfo_4AAD0F0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Keys
                            ),
     __this_01 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
label_0594fd9c:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            (&local_e0,__this_01,
             (MethodInfo_511A520 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_GameObject_MapObject_GetEnumerator
            );
  local_f8.fields._currentKey = local_e0.fields._currentKey;
  local_f8.fields._version = local_e0.fields._version;
  local_f8.fields._index = local_e0.fields._index;
  local_f8.fields._dictionary = local_e0.fields._dictionary;
  local_88 = 0;
  local_80 = &local_f8;
  if (pCVar7 == (Cameras_BaseCamera_o *)0x0) {
    while (bVar16 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (&local_f8,
                               (MethodInfo_4CE7080 *)
                               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_GameObject_MapObject_MoveNext
                              ), pIVar13 = local_f8.fields._currentKey, bVar16) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
      if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0594fd92;
      System_Collections_Generic_Dictionary_object__object___get_Item
                (pSVar8,pIVar13,
                 (MethodInfo_4AAD450 *)
                 MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Item);
      if ((UnityEngine_GameObject_o *)pIVar13 == (UnityEngine_GameObject_o *)0x0) goto label_0594fd97;
      pSVar18 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                          ((UnityEngine_GameObject_o *)pIVar13,
                           (MethodInfo_353C030 *)
                           MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
      if (pSVar18 == (System_Object_array *)0x0) goto label_0594fd8d;
      if (0 < (int)pSVar18->max_length) {
        uVar19 = pSVar18->max_length & 0xffffffff;
        uVar22 = 0;
        do {
          if (uVar19 <= uVar22) goto label_0594fd6a;
          pUVar9 = (UnityEngine_Object_o *)pSVar18->m_Items[uVar22];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar16 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar16) {
            if (pUVar9 == (UnityEngine_Object_o *)0x0) goto label_0594fd74;
            pUVar20 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
            if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_0594fd6f;
            bVar16 = UnityEngine_GameObject__get_activeSelf(pUVar20,(MethodInfo *)0x0);
            if (bVar16) {
              UnityEngine_Renderer__get_bounds
                        ((UnityEngine_Bounds_o *)&local_e0,(UnityEngine_Renderer_o *)pUVar9,(MethodInfo *)0x0)
              ;
              ThrowNullReferenceException();
            }
          }
          uVar22 = uVar22 + 1;
          uVar17 = (uint)pSVar18->max_length;
          uVar19 = (ulong)uVar17;
        } while ((long)uVar22 < (long)(int)uVar17);
      }
    }
  }
  else {
label_0594f7f0:
    bVar16 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                       (&local_f8,
                        (MethodInfo_4CE7080 *)
                        MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_GameObject_MapObject_MoveNext
                       );
    pIVar13 = local_f8.fields._currentKey;
    if (bVar16) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
      if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0594fd92:
        ThrowNullReferenceException();
      }
      item = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar8,pIVar13,
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Item);
      if ((UnityEngine_GameObject_o *)pIVar13 == (UnityEngine_GameObject_o *)0x0) {
label_0594fd97:
        ThrowNullReferenceException();
      }
      pSVar18 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                          ((UnityEngine_GameObject_o *)pIVar13,
                           (MethodInfo_353C030 *)
                           MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
      if (pSVar18 == (System_Object_array *)0x0) {
label_0594fd8d:
        ThrowNullReferenceException();
      }
      if (0 < (int)pSVar18->max_length) {
        uVar19 = pSVar18->max_length & 0xffffffff;
        uVar22 = 0;
        do {
          if (uVar19 <= uVar22) {
label_0594fd6a:
            ThrowIndexOutOfRangeException();
          }
          pUVar9 = (UnityEngine_Object_o *)pSVar18->m_Items[uVar22];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar16 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar16) {
            if (pUVar9 == (UnityEngine_Object_o *)0x0) {
label_0594fd74:
              ThrowNullReferenceException();
            }
            pUVar20 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
            if (pUVar20 == (UnityEngine_GameObject_o *)0x0) {
label_0594fd6f:
              ThrowNullReferenceException();
            }
            bVar16 = UnityEngine_GameObject__get_activeSelf(pUVar20,(MethodInfo *)0x0);
            if (bVar16) {
              UnityEngine_Renderer__get_bounds
                        ((UnityEngine_Bounds_o *)&local_e0,(UnityEngine_Renderer_o *)pUVar9,(MethodInfo *)0x0)
              ;
              iVar14 = local_e0.fields._index;
              pUVar10 = (pCVar7->fields).Camera;
              if (pUVar10 == (UnityEngine_Camera_o *)0x0) {
                ThrowNullReferenceException();
              }
              position_00.fields.z = (float)local_e0.fields._index;
              position_00.fields._0_8_ = local_e0.fields._dictionary;
              local_b8 = local_e0.fields._dictionary;
              uStack_b0 = 0;
              UVar39 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(pUVar10,position_00,(MethodInfo *)0x0);
              local_78._8_4_ = extraout_XMM0_Dc;
              local_78._0_8_ = UVar39.fields._0_8_;
              local_78._12_4_ = extraout_XMM0_Dd;
              pUVar11 = (pCVar7->fields).Cache;
              if (pUVar11 == (Utility_BaseComponentCache_o *)0x0) {
                ThrowNullReferenceException();
              }
              __this_00 = (pUVar11->fields).Transform;
              if (__this_00 == (UnityEngine_Transform_o *)0x0) {
                ThrowNullReferenceException();
              }
              UVar39 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
              local_98 = UVar39.fields.z;
              fStack_c0 = (float)extraout_XMM0_Dc_00;
              local_c8 = (undefined1  [8])UVar39.fields._0_8_;
              fStack_bc = (float)extraout_XMM0_Dd_00;
              if (Il2CppMethodInitialized_0753e7b7 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                Il2CppMethodInitialized_0753e7b7 = '\x01';
                uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
              }
              else {
                uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
              }
              if (uVar5 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              }
              fVar25 = ((float)iVar14 - local_98) * ((float)iVar14 - local_98) +
                       (local_b8._4_4_ - (float)local_c8._4_4_) * (local_b8._4_4_ - (float)local_c8._4_4_) +
                       ((float)local_b8 - (float)local_c8._0_4_) * ((float)local_b8 - (float)local_c8._0_4_);
              if (fVar25 < 0.0) {
                fVar25 = sqrtf(fVar25);
              }
              else {
                fVar25 = SQRT(fVar25);
              }
              pUVar10 = (pCVar7->fields).Camera;
              if (pUVar10 == (UnityEngine_Camera_o *)0x0) {
                ThrowNullReferenceException();
              }
              fVar26 = UnityEngine_Camera__get_farClipPlane(pUVar10,(MethodInfo *)0x0);
              if (fVar25 < fVar26) {
                uVar2 = (__this->fields)._dragStart.fields.x;
                uVar4 = (__this->fields)._dragStart.fields.y;
                start.fields.y = (float)uVar4;
                start.fields.x = (float)uVar2;
                if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                }
                v.fields.z = 0.0;
                v.fields.x = (float)local_78._0_4_;
                v.fields.y = (float)local_78._4_4_;
                start.fields.z = 0.0;
                end.fields.z = 0.0;
                end.fields.x = (float)local_a8._0_4_;
                end.fields.y = (float)local_a8._4_4_;
                bVar16 = Utility_Util__IsVectorBetween(v,start,end,(MethodInfo *)0x0);
                if ((bVar16) &&
                   (bVar16 = UnityEngine_Renderer__get_isVisible
                                       ((UnityEngine_Renderer_o *)pUVar9,(MethodInfo *)0x0), bVar16)) {
                  pSVar24 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
                  if (pSVar24 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar16 = System_Collections_Generic_HashSet_object___Contains
                                     (pSVar24,(Il2CppObject *)item,
                                      (MethodInfo_4FB3720 *)
                                      MethodInfo_System_Collections_Generic_HashSet_MapObject_Contains);
                  if (bVar16) break;
                  if (Il2CppMethodInitialized_07545887 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_Add);
                    Il2CppMethodInitialized_07545887 = '\x01';
                  }
                  if ((item == (Map_MapObject_o *)0x0) ||
                     ((item->fields).ScriptObject == (Map_MapScriptBaseObject_o *)0x0)) break;
                  pSVar24 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
                  if (pSVar24 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                    System_Collections_Generic_HashSet_object___Add
                              (pSVar24,(Il2CppObject *)item,
                               (MethodInfo_4FB4450 *)
                               MethodInfo_System_Collections_Generic_HashSet_MapObject_Add);
                    pMVar12 = (item->fields).ScriptObject;
                    if (pMVar12 != (Map_MapScriptBaseObject_o *)0x0) {
                      (__this->fields).LastSelectedObjectId = (pMVar12->fields).Id;
                      break;
                    }
                  }
                  ThrowNullReferenceException();
                }
              }
            }
          }
          uVar22 = uVar22 + 1;
          uVar17 = (uint)pSVar18->max_length;
          uVar19 = (ulong)uVar17;
        } while ((long)uVar22 < (long)(int)uVar17);
      }
      goto label_0594f7f0;
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (&local_f8,
             (MethodInfo_4CE7070 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_GameObject_MapObject_Dispose
            );
  pMVar21 = extraout_RDX_06;
label_0594fc76:
  GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,pMVar21);
  return;
}


// GameManagers.MapEditorGameManager$$DeselectAll
// il2cpp: void GameManagers_MapEditorGameManager__DeselectAll (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x594c7b0
// eh: try 0x594c893..0x594c8ac -> pad 0x594c8db (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x594c8f3..0x594c8f8 -> pad 0x594c917 cleanup
// eh: try 0x594c91a..0x594c924 -> pad 0x594c92c catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x594c8d9: jmp 0x594c8db
// asm:   0x594c8db: mov r14, rax
// asm:   0x594c8de: cmp edx, 1
// asm:   0x594c8e1: jne 0x594c91a
// asm:   0x594c8e3: mov rdi, r14
// asm:   0x594c8e6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x594c8eb: mov rbx, qword ptr [rax]
// asm:   0x594c8ee: mov qword ptr [rsp + 0x18], rbx
// asm:   0x594c8f3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x594c8f8: lea rax, [rip + 0x1941ac1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x594c8ff: mov rsi, qword ptr [rax]
// asm:   0x594c902: mov rdi, rsp
// asm:   0x594c905: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x594c90a: test rbx, rbx
// asm:   0x594c90d: je 0x594c8c0
// asm:   0x594c90f: mov rdi, rbx
// asm:   0x594c912: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x594c917: mov r14, rax
// asm:   0x594c91a: lea rdi, [rsp + 0x18]
// asm:   0x594c91f: call 0x2fd36a0  ; il2cpp_runtime_helper_02fd36a0()
// asm:   0x594c924: mov rdi, r14
// asm:   0x594c927: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x594c92c: mov rdi, rax
// asm:   0x594c92f: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_MapEditorGameManager__DeselectAll
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_MapObject__o *collection;
  bool bVar1;
  System_Collections_Generic_List_MapObject__o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_07545885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_ctor_7195590);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    Il2CppMethodInitialized_07545885 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  collection = (__this->fields).SelectedObjects;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
  System_Collections_Generic_List_object____ctor_395ca70
            ((System_Collections_Generic_List_object__o *)__this_00,
             (System_Collections_Generic_IEnumerable_T__o *)collection,
             (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor_7195590);
  if (__this_00 == (System_Collections_Generic_List_MapObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
  local_30 = 0;
  local_28 = (undefined1 *)&local_48;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    if (!bVar1) break;
    GameManagers_MapEditorGameManager__DeselectObject
              (__this,(Map_MapObject_o *)local_48.fields._current,method_00);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
  (__this->fields).LastSelectedObjectId = -1;
  return;
}


// GameManagers.MapEditorGameManager$$DeselectObject
// il2cpp: void GameManagers_MapEditorGameManager__DeselectObject (GameManagers_MapEditorGameManager_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x594fe70

void GameManagers_MapEditorGameManager__DeselectObject
               (GameManagers_MapEditorGameManager_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_HashSet_MapObject__o *source;
  int32_t iVar2;
  Map_MapObject_o *pMVar3;
  
  if (Il2CppMethodInitialized_07545886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Last_MapObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    Il2CppMethodInitialized_07545886 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_0594ff22:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Remove
            (__this_00,(Il2CppObject *)obj,
             (MethodInfo_4FB39F0 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_Remove);
  if (((obj != (Map_MapObject_o *)0x0) &&
      (pMVar1 = (obj->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) &&
     ((__this->fields).LastSelectedObjectId == (pMVar1->fields).Id)) {
    source = (__this->fields).SelectedObjects;
    if (source == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_0594ff22;
    if ((source->fields)._count < 1) {
      iVar2 = -1;
    }
    else {
      pMVar3 = System_Linq_Enumerable__Last_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (MethodInfo_34EEB80 *)MethodInfo_System_Linq_Enumerable_Last_MapObject);
      if ((pMVar3 == (Map_MapObject_o *)0x0) ||
         (pMVar1 = (pMVar3->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0))
      goto label_0594ff22;
      iVar2 = (pMVar1->fields).Id;
    }
    (__this->fields).LastSelectedObjectId = iVar2;
  }
  return;
}


// GameManagers.MapEditorGameManager$$SelectObject
// il2cpp: void GameManagers_MapEditorGameManager__SelectObject (GameManagers_MapEditorGameManager_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x594c940

void GameManagers_MapEditorGameManager__SelectObject
               (GameManagers_MapEditorGameManager_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Map_MapScriptBaseObject_o *pMVar1;
  
  if (Il2CppMethodInitialized_07545887 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_MapObject_Add);
    Il2CppMethodInitialized_07545887 = '\x01';
  }
  if ((obj == (Map_MapObject_o *)0x0) || ((obj->fields).ScriptObject == (Map_MapScriptBaseObject_o *)0x0)) {
    return;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              (__this_00,(Il2CppObject *)obj,
               (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_Add);
    pMVar1 = (obj->fields).ScriptObject;
    if (pMVar1 != (Map_MapScriptBaseObject_o *)0x0) {
      (__this->fields).LastSelectedObjectId = (pMVar1->fields).Id;
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$SetHierarchyTreeView
// il2cpp: void GameManagers_MapEditorGameManager__SetHierarchyTreeView (GameManagers_MapEditorGameManager_o* __this, bool enabled, const MethodInfo* method);
// 0x594ff30

void GameManagers_MapEditorGameManager__SetHierarchyTreeView
               (GameManagers_MapEditorGameManager_o *__this,bool enabled,MethodInfo *method)

{
  (__this->fields).HierarchyTreeViewEnabled = enabled;
  return;
}


// GameManagers.MapEditorGameManager$$GetSelectedObjectsForTransformCommand
// il2cpp: System_Collections_Generic_List_MapObject__o* GameManagers_MapEditorGameManager__GetSelectedObjectsForTransformCommand (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x594ff40
// eh: try 0x59501b4..0x595034f -> pad 0x595035a (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5950372..0x5950377 -> pad 0x595039c cleanup
// eh: try 0x595039f..0x59503a9 -> pad 0x59503b1 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x595007b: jmp 0x59500c2
// asm:   0x595028f: jmp 0x59502aa
// asm:   0x5950354: jmp 0x595035a
// asm:   0x5950356: jmp 0x595035a
// asm:   0x5950358: jmp 0x595035a
// asm:   0x595035a: mov r14, rax
// asm:   0x595035d: cmp edx, 1
// asm:   0x5950360: jne 0x595039f
// asm:   0x5950362: mov rdi, r14
// asm:   0x5950365: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x595036a: mov rbx, qword ptr [rax]
// asm:   0x595036d: mov qword ptr [rsp + 8], rbx
// asm:   0x5950372: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5950377: lea rax, [rip + 0x193e02a]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x595037e: mov rsi, qword ptr [rax]
// asm:   0x5950381: lea rdi, [rsp + 0x20]
// asm:   0x5950386: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x595038b: test rbx, rbx
// asm:   0x595038e: je 0x5950203
// asm:   0x5950394: mov rdi, rbx
// asm:   0x5950397: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x595039c: mov r14, rax
// asm:   0x595039f: lea rdi, [rsp + 8]
// asm:   0x59503a4: call 0x2fd36d0  ; il2cpp_runtime_helper_02fd36d0()
// asm:   0x59503a9: mov rdi, r14
// asm:   0x59503ac: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59503b1: mov rdi, rax
// asm:   0x59503b4: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_MapObject__o *
GameManagers_MapEditorGameManager__GetSelectedObjectsForTransformCommand
          (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  int32_t id;
  System_Collections_Generic_HashSet_MapObject__o *collection;
  Il2CppObject *pIVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_Dictionary_int__MapObject__o *object;
  bool bVar2;
  System_Func_MapObject__int__o *__this_01;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar3;
  System_Collections_Generic_HashSet_int__o *__this_02;
  System_Func_int__bool__o *__this_03;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  GameManagers_MapEditorGameManager___c_StaticFields *pGVar4;
  System_Func_int__MapObject__o *__this_04;
  System_Collections_Generic_List_MapObject__o *pSVar5;
  MethodInfo *in_RCX;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07545888 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_int_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_ctor_7195590);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_c_GetSelectedObjectsForTransformCommand_b__46_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_c_GetSelectedObjectsForTransformCommand_b__46_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager_c);
    Il2CppMethodInitialized_07545888 = '\x01';
  }
  collection = (__this->fields).SelectedObjects;
  if ((__this->fields).HierarchyTreeViewEnabled == false) {
    pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
    System_Collections_Generic_List_object____ctor_395ca70
              ((System_Collections_Generic_List_object__o *)pSVar5,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor_7195590);
    return pSVar5;
  }
  if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
    pGVar4 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
    __this_01 = pGVar4->__9__46_0;
  }
  else {
    pGVar4 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
    __this_01 = pGVar4->__9__46_0;
  }
  if (__this_01 == (System_Func_MapObject__int__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
      pGVar4 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar4->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
    in_RCX = (MethodInfo *)0x0;
    System_Func_object__int____ctor
              ((System_Func_object__int__o *)__this_01,pIVar1,
               (intptr_t)
               MethodInfo_GameManagers_MapEditorGameManager_c_GetSelectedObjectsForTransformCommand_b__46_0,
               (MethodInfo_4F198F0 *)0x0);
    pGVar4 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
    pGVar4->__9__46_0 = __this_01;
    Il2CppCodeGenWriteBarrier(&pGVar4->__9__46_0);
  }
  pSVar3 = System_Linq_Enumerable__Select_object__int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)collection,
                      (System_Func_TSource__TResult__o *)__this_01,
                      (MethodInfo_34F5DF0 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor_4fa7660
            (__this_02,(System_Collections_Generic_IEnumerable_T__o *)pSVar3,
             (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this_00,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    local_38 = local_50;
    local_48._0_8_ = local_60._0_8_;
    local_48._8_8_ = local_60._8_8_;
    local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_60._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_48;
    while (bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                             ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                              (MethodInfo_4C456D0 *)
                              MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext),
          bVar2) {
      if (local_38 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_38[2].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      id = *(int32_t *)&((local_38[2].klass)->_1).byval_arg.data;
      if (0 < id) {
        GameManagers_MapEditorGameManager__AddDescendants(__this,id,__this_02,in_RCX);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
               (MethodInfo_4C456C0 *)
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    object = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
    if (object != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) {
      System_Func_int__bool____ctor
                (__this_03,(Il2CppObject *)object,
                 (intptr_t)((Il2CppClass *)object->klass)->vtable[0x24].method,(MethodInfo_4F12D00 *)0x0);
      source = System_Linq_Enumerable__Where_int_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)__this_02,
                          (System_Func_TSource__bool__o *)__this_03,
                          (MethodInfo_35022A0 *)MethodInfo_System_Linq_Enumerable_Where_int);
      if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
        pGVar4 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        __this_04 = pGVar4->__9__46_1;
      }
      else {
        pGVar4 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        __this_04 = pGVar4->__9__46_1;
      }
      if (__this_04 == (System_Func_int__MapObject__o *)0x0) {
        if ((((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c)->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
          pGVar4 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        }
        pIVar1 = (Il2CppObject *)pGVar4->__9;
        __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_MapObject);
        System_Func_int__object____ctor
                  ((System_Func_int__object__o *)__this_04,pIVar1,
                   (intptr_t)
                   MethodInfo_GameManagers_MapEditorGameManager_c_GetSelectedObjectsForTransformCommand_b__46_1
                   ,(MethodInfo_4F13000 *)0x0);
        pGVar4 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
        pGVar4->__9__46_1 = __this_04;
        Il2CppCodeGenWriteBarrier(&pGVar4->__9__46_1);
      }
      pSVar3 = System_Linq_Enumerable__Select_int__object_
                         (source,(System_Func_TSource__TResult__o *)__this_04,
                          (MethodInfo_34F48F0 *)MethodInfo_System_Linq_Enumerable_Select_int_MapObject);
      pSVar5 = (System_Collections_Generic_List_MapObject__o *)
               System_Linq_Enumerable__ToList_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                          (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_MapObject);
      return pSVar5;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$ReparentObjects
// il2cpp: void GameManagers_MapEditorGameManager__ReparentObjects (GameManagers_MapEditorGameManager_o* __this, System_Collections_Generic_List_int__o* ids, int32_t newParentId, const MethodInfo* method);
// 0x5950610
// eh: try 0x595090f..0x5950cf9 -> pad 0x5950d69 (+18 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5950d36..0x5950d3b -> pad 0x5950d5a cleanup
// eh: try 0x5950d5d..0x5950d67 -> pad 0x5950dc2 catch (...) [compiler noexcept guard]
// eh: try 0x5950d83..0x5950d88 -> pad 0x5950dad cleanup
// eh: try 0x5950db0..0x5950dba -> pad 0x5950dc2 catch (...) [compiler noexcept guard]
// asm: 62 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59507bd: jmp 0x59507d8
// asm:   0x5950a2f: jmp 0x5950aa9
// asm:   0x5950b11: jmp 0x5950c07
// asm:   0x5950cfe: jmp 0x5950d1e
// asm:   0x5950d00: jmp 0x5950d1e
// asm:   0x5950d02: jmp 0x5950d1e
// asm:   0x5950d04: jmp 0x5950d1e
// asm:   0x5950d06: jmp 0x5950d1e
// asm:   0x5950d08: jmp 0x5950d1e
// asm:   0x5950d0a: jmp 0x5950d6b
// asm:   0x5950d0c: jmp 0x5950d1e
// asm:   0x5950d0e: jmp 0x5950d1e
// asm:   0x5950d10: jmp 0x5950d1e
// asm:   0x5950d12: jmp 0x5950d1e
// asm:   0x5950d14: jmp 0x5950d1e
// asm:   0x5950d16: jmp 0x5950d6b
// asm:   0x5950d18: jmp 0x5950d6b
// asm:   0x5950d1a: jmp 0x5950d1e
// asm:   0x5950d1c: jmp 0x5950d6b
// asm:   0x5950d1e: mov rbx, rax
// asm:   0x5950d21: cmp edx, 1
// asm:   0x5950d24: jne 0x5950d5d
// asm:   0x5950d26: mov rdi, rbx
// asm:   0x5950d29: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5950d2e: mov rbx, qword ptr [rax]
// asm:   0x5950d31: mov qword ptr [rsp + 8], rbx
// asm:   0x5950d36: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5950d3b: lea rax, [rip + 0x193d4b6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5950d42: mov rsi, qword ptr [rax]
// asm:   0x5950d45: lea rdi, [rsp + 0x20]
// asm:   0x5950d4a: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5950d4f: test rbx, rbx
// asm:   0x5950d52: je 0x5950acc
// asm:   0x5950d58: jmp 0x5950da5
// asm:   0x5950d5a: mov rbx, rax
// asm:   0x5950d5d: lea rdi, [rsp + 8]
// asm:   0x5950d62: call 0x2fd3730  ; il2cpp_runtime_helper_02fd3730()
// asm:   0x5950d67: jmp 0x5950dba
// asm:   0x5950d69: jmp 0x5950d6b
// asm:   0x5950d6b: mov rbx, rax
// asm:   0x5950d6e: cmp edx, 1
// asm:   0x5950d71: jne 0x5950db0
// asm:   0x5950d73: mov rdi, rbx
// asm:   0x5950d76: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5950d7b: mov rbx, qword ptr [rax]
// asm:   0x5950d7e: mov qword ptr [rsp + 8], rbx
// asm:   0x5950d83: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5950d88: lea rax, [rip + 0x193d451]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x5950d8f: mov rsi, qword ptr [rax]
// asm:   0x5950d92: lea rdi, [rsp + 0x40]
// asm:   0x5950d97: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x5950d9c: test rbx, rbx
// asm:   0x5950d9f: je 0x59509a8
// asm:   0x5950da5: mov rdi, rbx
// asm:   0x5950da8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5950dad: mov rbx, rax
// asm:   0x5950db0: lea rdi, [rsp + 8]
// asm:   0x5950db5: call 0x2fd3700  ; il2cpp_runtime_helper_02fd3700()
// asm:   0x5950dba: mov rdi, rbx
// asm:   0x5950dbd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5950dc2: mov rdi, rax
// asm:   0x5950dc5: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_MapEditorGameManager__ReparentObjects
               (GameManagers_MapEditorGameManager_o *__this,System_Collections_Generic_List_int__o *ids,
               int32_t newParentId,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppObject *pIVar3;
  System_Int32_array *pSVar4;
  System_Collections_Generic_Dictionary_int__object__o *pSVar5;
  UI_MapEditorMenu_o *__this_00;
  int iVar6;
  bool bVar7;
  int32_t iVar8;
  System_Func_int__bool__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *collection;
  System_Collections_Generic_HashSet_int__o *__this_02;
  System_Collections_Generic_List_int__o *__this_03;
  System_Collections_Generic_List_int__o *__this_04;
  Map_MapObject_o *pMVar9;
  GameManagers_MapEditorGameManager___c_StaticFields *pGVar10;
  System_Func_int__MapObject__o *__this_05;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  MapEditor_ReparentObjectsCommand_o *__this_06;
  MethodInfo *pMVar11;
  MethodInfo *method_00;
  GameManagers_MapEditorGameManager_o *pGVar12;
  undefined1 local_90 [16];
  CustomLogic_CustomLogicEvaluator_o *local_80;
  undefined1 local_78 [8];
  Map_MapScript_o *pMStack_70;
  CustomLogic_CustomLogicEvaluator_o *local_68;
  undefined1 local_58 [8];
  Map_MapScript_o *pMStack_50;
  CustomLogic_CustomLogicEvaluator_o *local_48;
  GameManagers_MapEditorGameManager_o *local_38;
  
  if (Il2CppMethodInitialized_07545889 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_int_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_ReparentObjectsCommand);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_c_ReparentObjects_b__47_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_c_ReparentObjects_b__47_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager_c);
    Il2CppMethodInitialized_07545889 = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pMStack_50 = (Map_MapScript_o *)0x0;
  local_48 = (CustomLogic_CustomLogicEvaluator_o *)0x0;
  local_78 = (undefined1  [8])0x0;
  pMStack_70 = (Map_MapScript_o *)0x0;
  local_68 = (CustomLogic_CustomLogicEvaluator_o *)0x0;
  if (ids == (System_Collections_Generic_List_int__o *)0x0) {
    return;
  }
  if ((ids->fields)._size == 0) {
    return;
  }
  if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
    pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
    __this_01 = pGVar10->__9__47_0;
  }
  else {
    pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
    __this_01 = pGVar10->__9__47_0;
  }
  if (__this_01 == (System_Func_int__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
      pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
    }
    pIVar3 = (Il2CppObject *)pGVar10->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
    method = (MethodInfo *)0x0;
    System_Func_int__bool____ctor
              (__this_01,pIVar3,
               (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_ReparentObjects_b__47_0,
               (MethodInfo_4F12D00 *)0x0);
    pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
    pGVar10->__9__47_0 = __this_01;
    Il2CppCodeGenWriteBarrier(&pGVar10->__9__47_0);
  }
  collection = System_Linq_Enumerable__Where_int_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)ids,
                          (System_Func_TSource__bool__o *)__this_01,
                          (MethodInfo_35022A0 *)MethodInfo_System_Linq_Enumerable_Where_int);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor_4fa7660
            (__this_02,(System_Collections_Generic_IEnumerable_T__o *)collection,
             (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (__this_03,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  if (__this_02 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    local_38 = __this;
    System_Collections_Generic_HashSet_int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_90,__this_02,
               (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    local_48 = local_80;
    local_58 = (undefined1  [8])local_90._0_8_;
    pMStack_50 = (Map_MapScript_o *)local_90._8_8_;
    local_90._0_8_ = (GameManagers_MapEditorGameManager_c *)0x0;
    local_90._8_8_ = local_58;
    if (__this_03 == (System_Collections_Generic_List_int__o *)0x0) {
      do {
        pGVar12 = (GameManagers_MapEditorGameManager_o *)local_58;
        bVar7 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_58,
                           (MethodInfo_4C3AEE0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
        if (!bVar7) goto label_05950994;
        bVar7 = GameManagers_MapEditorGameManager__HasAncestorInSet
                          (pGVar12,(int32_t)local_48,__this_02,method);
      } while (bVar7);
label_0595098f:
      ThrowNullReferenceException();
    }
    while (pGVar12 = (GameManagers_MapEditorGameManager_o *)local_58,
          bVar7 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_58,
                             (MethodInfo_4C3AEE0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext), bVar7) {
      iVar8 = (int32_t)local_48;
      bVar7 = GameManagers_MapEditorGameManager__HasAncestorInSet(pGVar12,(int32_t)local_48,__this_02,method);
      pMVar11 = MethodInfo_System_Collections_Generic_List_int_Add;
      if (!bVar7) {
        piVar1 = &(__this_03->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_03->fields)._items;
        if (pSVar4 == (System_Int32_array *)0x0) goto label_0595098f;
        uVar2 = (__this_03->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          method = (MethodInfo *)(ulong)(uVar2 + 1);
          (__this_03->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = iVar8;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize
                    (__this_03,iVar8,(MethodInfo_3916AC0 *)pMVar11->klass->rgctx_data[0xe].method);
          method = pMVar11;
        }
      }
    }
label_05950994:
    System_Collections_Generic_HashSet_Enumerator_int___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_58,
               (MethodInfo_4C3AED0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
    System_Collections_Generic_List_int____ctor
              (__this_04,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
    if (__this_03 != (System_Collections_Generic_List_int__o *)0x0) {
      System_Collections_Generic_List_int___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_90,__this_03,
                 (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
      local_68 = local_80;
      local_78 = (undefined1  [8])local_90._0_8_;
      pMStack_70 = (Map_MapScript_o *)local_90._8_8_;
      local_90._0_8_ = (GameManagers_MapEditorGameManager_c *)0x0;
      local_90._8_8_ = local_78;
      if (__this_04 == (System_Collections_Generic_List_int__o *)0x0) {
        while (pGVar12 = (GameManagers_MapEditorGameManager_o *)local_78,
              bVar7 = System_Collections_Generic_List_Enumerator_int___MoveNext
                                ((System_Collections_Generic_List_Enumerator_int__o *)local_78,
                                 (MethodInfo_4C3B4A0 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext), bVar7) {
          iVar6 = (int)local_68;
          if (((int)local_68 != newParentId) &&
             ((newParentId < 0 ||
              (bVar7 = GameManagers_MapEditorGameManager__IsDescendant
                                 (pGVar12,newParentId,(int)local_68,method), !bVar7)))) {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar5 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
label_05950cef:
              ThrowNullReferenceException();
            }
            pMVar9 = System_Collections_Generic_Dictionary_int__object___get_Item
                               (pSVar5,iVar6,
                                (MethodInfo_4A0F690 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            iVar8 = Map_MapLoader__GetLogicalParentId(pMVar9,(MethodInfo *)0x0);
            if (iVar8 != newParentId) {
label_05950cf4:
              ThrowNullReferenceException();
            }
          }
        }
      }
      else {
        while (pGVar12 = (GameManagers_MapEditorGameManager_o *)local_78,
              bVar7 = System_Collections_Generic_List_Enumerator_int___MoveNext
                                ((System_Collections_Generic_List_Enumerator_int__o *)local_78,
                                 (MethodInfo_4C3B4A0 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext), bVar7) {
          iVar6 = (int)local_68;
          if (((int)local_68 != newParentId) &&
             ((newParentId < 0 ||
              (bVar7 = GameManagers_MapEditorGameManager__IsDescendant
                                 (pGVar12,newParentId,(int)local_68,method), !bVar7)))) {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar5 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05950cef;
            pMVar9 = System_Collections_Generic_Dictionary_int__object___get_Item
                               (pSVar5,iVar6,
                                (MethodInfo_4A0F690 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            iVar8 = Map_MapLoader__GetLogicalParentId(pMVar9,(MethodInfo *)0x0);
            pMVar11 = MethodInfo_System_Collections_Generic_List_int_Add;
            if (iVar8 != newParentId) {
              piVar1 = &(__this_04->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar4 = (__this_04->fields)._items;
              if (pSVar4 == (System_Int32_array *)0x0) goto label_05950cf4;
              uVar2 = (__this_04->fields)._size;
              if (uVar2 < (uint)pSVar4->max_length) {
                method = (MethodInfo *)(ulong)(uVar2 + 1);
                (__this_04->fields)._size = uVar2 + 1;
                pSVar4->m_Items[(int)uVar2] = iVar6;
              }
              else {
                System_Collections_Generic_List_int___AddWithResize
                          (__this_04,iVar6,(MethodInfo_3916AC0 *)pMVar11->klass->rgctx_data[0xe].method);
                method = pMVar11;
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose
                ((System_Collections_Generic_List_Enumerator_int__o *)local_78,
                 (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
      pGVar12 = local_38;
      if (__this_04 != (System_Collections_Generic_List_int__o *)0x0) {
        if ((__this_04->fields)._size != 0) {
          if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
            pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
            __this_05 = pGVar10->__9__47_1;
          }
          else {
            pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
            __this_05 = pGVar10->__9__47_1;
          }
          if (__this_05 == (System_Func_int__MapObject__o *)0x0) {
            if ((((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c)->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
              pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
            }
            pIVar3 = (Il2CppObject *)pGVar10->__9;
            __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_MapObject);
            System_Func_int__object____ctor
                      ((System_Func_int__object__o *)__this_05,pIVar3,
                       (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_ReparentObjects_b__47_1,
                       (MethodInfo_4F13000 *)0x0);
            pGVar10 = TypeInfo_GameManagers_MapEditorGameManager_c->static_fields;
            pGVar10->__9__47_1 = __this_05;
            Il2CppCodeGenWriteBarrier(&pGVar10->__9__47_1);
          }
          source = System_Linq_Enumerable__Select_int__object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)__this_04,
                              (System_Func_TSource__TResult__o *)__this_05,
                              (MethodInfo_34F48F0 *)MethodInfo_System_Linq_Enumerable_Select_int_MapObject);
          mapObjects = (System_Collections_Generic_List_MapObject__o *)
                       System_Linq_Enumerable__ToList_object_
                                 ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                  (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_MapObject);
          __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_ReparentObjectsCommand);
          pMVar11 = (MethodInfo *)0x0;
          MapEditor_ReparentObjectsCommand___ctor(__this_06,mapObjects,newParentId,(MethodInfo *)0x0);
          GameManagers_MapEditorGameManager__NewCommand
                    (pGVar12,(MapEditor_BaseCommand_o *)__this_06,true,pMVar11);
          __this_00 = (pGVar12->fields)._menu;
          if (__this_00 == (UI_MapEditorMenu_o *)0x0) goto label_05950cf9;
          UI_MapEditorMenu__SyncHierarchyPanel(__this_00,(MethodInfo *)0x0);
          GameManagers_MapEditorGameManager__OnSelectionChange(pGVar12,true,method_00);
        }
        return;
      }
    }
  }
label_05950cf9:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$ReorderObjects
// il2cpp: void GameManagers_MapEditorGameManager__ReorderObjects (GameManagers_MapEditorGameManager_o* __this, System_Collections_Generic_List_int__o* ids, int32_t anchorId, bool insertAfter, bool inTreeView, const MethodInfo* method);
// 0x5951180

void GameManagers_MapEditorGameManager__ReorderObjects
               (GameManagers_MapEditorGameManager_o *__this,System_Collections_Generic_List_int__o *ids,
               int32_t anchorId,bool insertAfter,bool inTreeView,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  UI_MapEditorMenu_o *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Nullable_int__Fields in_RAX;
  GameManagers_MapEditorGameManager___c__DisplayClass48_0_o *__this_01;
  System_Func_int__bool__o *__this_02;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *objectIds;
  Map_MapObject_o *obj;
  MapEditor_ReorderObjectsCommand_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Nullable_int__Fields newParentId;
  System_Nullable_int__Fields local_38;
  
  local_38 = in_RAX;
  if (Il2CppMethodInitialized_0754588a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_ReorderObjectsCommand);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_c__DisplayClass48_0_ReorderObjects_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_MapEditorGameManager_c__DisplayClass48_0);
    Il2CppMethodInitialized_0754588a = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c__DisplayClass48_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 == (GameManagers_MapEditorGameManager___c__DisplayClass48_0_o *)0x0) {
label_05951405:
    ThrowNullReferenceException();
  }
  (__this_01->fields).anchorId = anchorId;
  if (((ids != (System_Collections_Generic_List_int__o *)0x0) && (-1 < anchorId)) &&
     ((ids->fields)._size != 0)) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05951405;
    bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar1,(__this_01->fields).anchorId,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    if (bVar2) {
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
      System_Func_int__bool____ctor
                (__this_02,(Il2CppObject *)__this_01,
                 (intptr_t)
                 MethodInfo_GameManagers_MapEditorGameManager_c__DisplayClass48_0_ReorderObjects_b__0,
                 (MethodInfo_4F12D00 *)0x0);
      source = System_Linq_Enumerable__Where_int_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)ids,
                          (System_Func_TSource__bool__o *)__this_02,
                          (MethodInfo_35022A0 *)MethodInfo_System_Linq_Enumerable_Where_int);
      objectIds = System_Linq_Enumerable__ToList_int_
                            (source,(MethodInfo_3500DB0 *)MethodInfo_System_Linq_Enumerable_ToList_int);
      if (objectIds == (System_Collections_Generic_List_TSource__o *)0x0) goto label_05951405;
      if ((objectIds->fields)._size != 0) {
        if (inTreeView) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05951405;
          obj = System_Collections_Generic_Dictionary_int__object___get_Item
                          (pSVar1,(__this_01->fields).anchorId,
                           (MethodInfo_4A0F690 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          iVar3 = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
          local_38.hasValue = false;
          local_38._1_3_ = 0;
          local_38.value = 0;
          System_Nullable_int____ctor
                    ((System_Nullable_int__o *)&local_38,iVar3,
                     (MethodInfo_3CD4BA0 *)MethodInfo_System_Nullable_int_ctor);
          newParentId = local_38;
        }
        else {
          newParentId.hasValue = false;
          newParentId._1_3_ = 0;
          newParentId.value = 0;
        }
        iVar3 = (__this_01->fields).anchorId;
        __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_ReorderObjectsCommand);
        method_00 = (MethodInfo *)(ulong)insertAfter;
        MapEditor_ReorderObjectsCommand___ctor
                  (__this_03,(System_Collections_Generic_List_int__o *)objectIds,iVar3,insertAfter,
                   (System_Nullable_int__o)newParentId,(MethodInfo *)0x0);
        GameManagers_MapEditorGameManager__NewCommand
                  (__this,(MapEditor_BaseCommand_o *)__this_03,true,method_00);
        __this_00 = (__this->fields)._menu;
        if (__this_00 == (UI_MapEditorMenu_o *)0x0) goto label_05951405;
        UI_MapEditorMenu__SyncHierarchyPanel(__this_00,(MethodInfo *)0x0);
        GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,method_01);
      }
    }
  }
  return;
}


// GameManagers.MapEditorGameManager$$AddDescendants
// il2cpp: void GameManagers_MapEditorGameManager__AddDescendants (GameManagers_MapEditorGameManager_o* __this, int32_t id, System_Collections_Generic_HashSet_int__o* ids, const MethodInfo* method);
// 0x59503c0
// eh: try 0x5950534..0x59505a6 -> pad 0x59505ae (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59505c6..0x59505cb -> pad 0x59505ea cleanup
// eh: try 0x59505ed..0x59505f7 -> pad 0x59505ff catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5950512: lea r12, [rip + 0x193dccf]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext
// asm:   0x5950519: mov r15, rsp
// asm:   0x595051c: lea r13, [rip + 0x1940ddd]  ; MethodInfo_System_Collections_Generic_HashSet_int_Add
// asm:   0x5950523: nop word ptr cs:[rax + rax]
// asm:   0x59505a6: jmp 0x59505ae
// asm:   0x59505a8: jmp 0x59505ae
// asm:   0x59505aa: jmp 0x59505ae
// asm:   0x59505ac: jmp 0x59505ae
// asm:   0x59505ae: mov rbx, rax
// asm:   0x59505b1: cmp edx, 1
// asm:   0x59505b4: jne 0x59505ed
// asm:   0x59505b6: mov rdi, rbx
// asm:   0x59505b9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59505be: mov rbx, qword ptr [rax]
// asm:   0x59505c1: mov qword ptr [rsp + 0x18], rbx
// asm:   0x59505c6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59505cb: lea rax, [rip + 0x193dc0e]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x59505d2: mov rsi, qword ptr [rax]
// asm:   0x59505d5: mov rdi, rsp
// asm:   0x59505d8: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x59505dd: test rbx, rbx
// asm:   0x59505e0: je 0x595058d
// asm:   0x59505e2: mov rdi, rbx
// asm:   0x59505e5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59505ea: mov rbx, rax
// asm:   0x59505ed: lea rdi, [rsp + 0x18]
// asm:   0x59505f2: call 0x2fd3760  ; il2cpp_runtime_helper_02fd3760()
// asm:   0x59505f7: mov rdi, rbx
// asm:   0x59505fa: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59505ff: mov rdi, rax
// asm:   0x5950602: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_MapEditorGameManager__AddDescendants
               (GameManagers_MapEditorGameManager_o *__this,int32_t id,
               System_Collections_Generic_HashSet_int__o *ids,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  int32_t id_00;
  System_Collections_Generic_HashSet_Enumerator_T__o *pSVar2;
  bool bVar3;
  System_Collections_Generic_HashSet_int__o *__this_00;
  MethodInfo **method_00;
  System_Collections_Generic_HashSet_Enumerator_T__o local_58;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_0754588b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_0754588b = '\x01';
  }
  local_58.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
           TypeInfo_Map_MapLoader->static_fields->IdToChildren;
  if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar1,id,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    if (!bVar3) {
      return;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToChildren;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      __this_00 = (System_Collections_Generic_HashSet_int__o *)
                  System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,id,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
      local_38 = (undefined1 *)&local_58;
      if (__this_00 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        method_00 = &MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator;
        System_Collections_Generic_HashSet_int___GetEnumerator
                  (&local_58,__this_00,
                   (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
        local_40 = 0;
        pSVar2 = &local_58;
        if (ids == (System_Collections_Generic_HashSet_int__o *)0x0) {
          bVar3 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                            (&local_58,
                             (MethodInfo_4C3AEE0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
          if (bVar3) {
            ThrowNullReferenceException();
          }
        }
        else {
          while (local_38 = (undefined1 *)pSVar2,
                bVar3 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                                  (&local_58,
                                   (MethodInfo_4C3AEE0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext),
                bVar3) {
            id_00 = (int32_t)local_58.fields._current;
            bVar3 = System_Collections_Generic_HashSet_int___Add
                              (ids,(int32_t)local_58.fields._current,
                               (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
            pSVar2 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_38;
            if (bVar3) {
              GameManagers_MapEditorGameManager__AddDescendants(__this,id_00,ids,(MethodInfo *)method_00);
              pSVar2 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_38;
            }
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose
                  (&local_58,
                   (MethodInfo_4C3AED0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose)
        ;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$IsDescendant
// il2cpp: bool GameManagers_MapEditorGameManager__IsDescendant (GameManagers_MapEditorGameManager_o* __this, int32_t id, int32_t ancestorId, const MethodInfo* method);
// 0x5951010
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59510a5: lea r15, [rip + 0x1940254]  ; MethodInfo_System_Collections_Generic_HashSet_int_Add
// asm:   0x59510ac: lea r12, [rip + 0x19298dd]  ; TypeInfo_Map_MapLoader
// asm:   0x59510b3: lea r13, [rip + 0x1938f26]  ; MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey
// asm:   0x59510ba: nop word ptr [rax + rax]

bool GameManagers_MapEditorGameManager__IsDescendant
               (GameManagers_MapEditorGameManager_o *__this,int32_t id,int32_t ancestorId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  bool bVar2;
  System_Collections_Generic_HashSet_int__o *__this_00;
  Map_MapObject_o *obj;
  
  if (Il2CppMethodInitialized_0754588c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_0754588c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_00,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) {
    if (-1 < id) {
label_05951175:
      ThrowNullReferenceException();
    }
label_05951164:
    bVar2 = false;
  }
  else {
    do {
      if ((id < 0) ||
         (bVar2 = System_Collections_Generic_HashSet_int___Add
                            (__this_00,id,
                             (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add),
         !bVar2)) goto label_05951164;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05951175;
      bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar1,id,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (!bVar2) goto label_05951164;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05951175;
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


// GameManagers.MapEditorGameManager$$HasAncestorInSet
// il2cpp: bool GameManagers_MapEditorGameManager__HasAncestorInSet (GameManagers_MapEditorGameManager_o* __this, int32_t id, System_Collections_Generic_HashSet_int__o* ids, const MethodInfo* method);
// 0x5950dd0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5950e7a: lea r12, [rip + 0x194047f]  ; MethodInfo_System_Collections_Generic_HashSet_int_Add
// asm:   0x5950e81: lea r13, [rip + 0x1929b08]  ; TypeInfo_Map_MapLoader
// asm:   0x5950e88: lea rbp, [rip + 0x1940481]  ; MethodInfo_System_Collections_Generic_HashSet_int_Contains
// asm:   0x5950e8f: nop 

bool GameManagers_MapEditorGameManager__HasAncestorInSet
               (GameManagers_MapEditorGameManager_o *__this,int32_t id,
               System_Collections_Generic_HashSet_int__o *ids,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  bool bVar2;
  System_Collections_Generic_HashSet_int__o *__this_00;
  Map_MapObject_o *pMVar3;
  
  if (Il2CppMethodInitialized_0754588d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_0754588d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_00,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) {
    if (-1 < id) {
label_05950fe7:
      ThrowNullReferenceException();
    }
  }
  else if (ids == (System_Collections_Generic_HashSet_int__o *)0x0) {
    if ((-1 < id) &&
       (bVar2 = System_Collections_Generic_HashSet_int___Add
                          (__this_00,id,
                           (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add), bVar2
       )) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                          (pSVar1,id,
                           (MethodInfo_4A0F950 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        if (!bVar2) {
          return false;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          pMVar3 = System_Collections_Generic_Dictionary_int__object___get_Item
                             (pSVar1,id,
                              (MethodInfo_4A0F690 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          Map_MapLoader__GetLogicalParentId(pMVar3,(MethodInfo *)0x0);
          ThrowNullReferenceException();
        }
      }
      goto label_05950fe7;
    }
  }
  else {
    while ((-1 < id &&
           (bVar2 = System_Collections_Generic_HashSet_int___Add
                              (__this_00,id,
                               (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add),
           bVar2))) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05950fe7;
      bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar1,id,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (!bVar2) {
        return false;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05950fe7;
      pMVar3 = System_Collections_Generic_Dictionary_int__object___get_Item
                         (pSVar1,id,
                          (MethodInfo_4A0F690 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
      id = Map_MapLoader__GetLogicalParentId(pMVar3,(MethodInfo *)0x0);
      bVar2 = System_Collections_Generic_HashSet_int___Contains
                        (ids,id,(MethodInfo_4FA7E00 *)
                                MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}


// GameManagers.MapEditorGameManager$$SetupTemporaryPhysicalParenting
// il2cpp: void GameManagers_MapEditorGameManager__SetupTemporaryPhysicalParenting (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x5951420
// eh: try 0x5951534..0x59516da -> pad 0x5951703 (+19 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x595171b..0x5951720 -> pad 0x5951743 cleanup
// eh: try 0x5951746..0x5951750 -> pad 0x5951758 catch (...) [compiler noexcept guard]
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59516df: jmp 0x5951703
// asm:   0x59516e1: jmp 0x5951703
// asm:   0x59516e3: jmp 0x5951703
// asm:   0x59516e5: jmp 0x5951703
// asm:   0x59516e7: jmp 0x5951703
// asm:   0x59516e9: jmp 0x5951703
// asm:   0x59516eb: jmp 0x5951703
// asm:   0x59516ed: jmp 0x5951703
// asm:   0x59516ef: jmp 0x5951703
// asm:   0x59516f1: jmp 0x5951703
// asm:   0x59516f3: jmp 0x5951703
// asm:   0x59516f5: jmp 0x5951703
// asm:   0x59516f7: jmp 0x5951703
// asm:   0x59516f9: jmp 0x5951703
// asm:   0x59516fb: jmp 0x5951703
// asm:   0x59516fd: jmp 0x5951703
// asm:   0x59516ff: jmp 0x5951703
// asm:   0x5951701: jmp 0x5951703
// asm:   0x5951703: mov rbx, rax
// asm:   0x5951706: cmp edx, 1
// asm:   0x5951709: jne 0x5951746
// asm:   0x595170b: mov rdi, rbx
// asm:   0x595170e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5951713: mov rbx, qword ptr [rax]
// asm:   0x5951716: mov qword ptr [rsp + 0x20], rbx
// asm:   0x595171b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5951720: lea rax, [rip + 0x193cad1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5951727: mov rsi, qword ptr [rax]
// asm:   0x595172a: mov rdi, rsp
// asm:   0x595172d: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5951732: test rbx, rbx
// asm:   0x5951735: je 0x595169e
// asm:   0x595173b: mov rdi, rbx
// asm:   0x595173e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5951743: mov rbx, rax
// asm:   0x5951746: lea rdi, [rsp + 0x20]
// asm:   0x595174b: call 0x2fd3790  ; il2cpp_runtime_helper_02fd3790()
// asm:   0x5951750: mov rdi, rbx
// asm:   0x5951753: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5951758: mov rdi, rax
// asm:   0x595175b: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_MapEditorGameManager__SetupTemporaryPhysicalParenting
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool bVar3;
  int32_t iVar4;
  Map_MapObject_o *pMVar5;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_0754588e == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_0754588e = '\x01';
  }
  local_68._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_68._8_4_ = 0;
  local_68._12_4_ = 0;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  if ((__this->fields).HierarchyTreeViewEnabled != false) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_00 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
    if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_int___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_00,
               (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_58 = local_38;
    local_68._0_8_ = local_48._0_8_;
    local_68._8_8_ = local_48._8_8_;
    local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_48._8_8_ = local_68;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_int___MoveNext
                        ((System_Collections_Generic_List_Enumerator_int__o *)local_68,
                         (MethodInfo_4C3B4A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
      if (!bVar3) break;
      iVar4 = (int32_t)local_58;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar1,iVar4,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (bVar3) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar5 = System_Collections_Generic_Dictionary_int__object___get_Item
                           (pSVar1,iVar4,
                            (MethodInfo_4A0F690 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        iVar4 = Map_MapLoader__GetLogicalParentId(pMVar5,(MethodInfo *)0x0);
        if (-1 < iVar4) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                            (pSVar1,iVar4,
                             (MethodInfo_4A0F950 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if (bVar3) {
            if (pMVar5 == (Map_MapObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar2 = (pMVar5->fields).GameObject;
            if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_01 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pMVar5 = System_Collections_Generic_Dictionary_int__object___get_Item
                               (pSVar1,iVar4,
                                (MethodInfo_4A0F690 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            if (pMVar5 == (Map_MapObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar2 = (pMVar5->fields).GameObject;
            if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            parent = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_Transform__SetParent_692d510(__this_01,parent,true,(MethodInfo *)0x0);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_int___Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)local_68,
               (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
  }
  return;
}


// GameManagers.MapEditorGameManager$$TeardownTemporaryPhysicalParenting
// il2cpp: void GameManagers_MapEditorGameManager__TeardownTemporaryPhysicalParenting (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x5951760
// eh: try 0x59518b4..0x59519b3 -> pad 0x59519ce (+11 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59519e6..0x59519eb -> pad 0x5951a0a cleanup
// eh: try 0x5951a0d..0x5951a17 -> pad 0x5951a1f catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59519b8: jmp 0x59519ce
// asm:   0x59519ba: jmp 0x59519ce
// asm:   0x59519bc: jmp 0x59519ce
// asm:   0x59519be: jmp 0x59519ce
// asm:   0x59519c0: jmp 0x59519ce
// asm:   0x59519c2: jmp 0x59519ce
// asm:   0x59519c4: jmp 0x59519ce
// asm:   0x59519c6: jmp 0x59519ce
// asm:   0x59519c8: jmp 0x59519ce
// asm:   0x59519ca: jmp 0x59519ce
// asm:   0x59519cc: jmp 0x59519ce
// asm:   0x59519ce: mov rbx, rax
// asm:   0x59519d1: cmp edx, 1
// asm:   0x59519d4: jne 0x5951a0d
// asm:   0x59519d6: mov rdi, rbx
// asm:   0x59519d9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59519de: mov rbx, qword ptr [rax]
// asm:   0x59519e1: mov qword ptr [rsp + 0x20], rbx
// asm:   0x59519e6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59519eb: lea rax, [rip + 0x193c806]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x59519f2: mov rsi, qword ptr [rax]
// asm:   0x59519f5: mov rdi, rsp
// asm:   0x59519f8: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x59519fd: test rbx, rbx
// asm:   0x5951a00: je 0x595198b
// asm:   0x5951a02: mov rdi, rbx
// asm:   0x5951a05: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5951a0a: mov rbx, rax
// asm:   0x5951a0d: lea rdi, [rsp + 0x20]
// asm:   0x5951a12: call 0x2fd37c0  ; il2cpp_runtime_helper_02fd37c0()
// asm:   0x5951a17: mov rdi, rbx
// asm:   0x5951a1a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5951a1f: mov rdi, rax
// asm:   0x5951a22: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_MapEditorGameManager__TeardownTemporaryPhysicalParenting
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Collections_Generic_List_TSource__o *__this_01;
  Map_MapObject_o *obj;
  UnityEngine_Transform_o *__this_02;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_0754588f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_0754588f = '\x01';
  }
  local_68._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_68._8_4_ = 0;
  local_68._12_4_ = 0;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  if ((__this->fields).HierarchyTreeViewEnabled == false) {
    return;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
           TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    source = System_Collections_Generic_Dictionary_int__object___get_Keys
                       (pSVar1,(MethodInfo_4A0F330 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys);
    __this_01 = System_Linq_Enumerable__ToList_int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (MethodInfo_3500DB0 *)MethodInfo_System_Linq_Enumerable_ToList_int);
    if (__this_01 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List_int___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_int__o *)__this_01,
                 (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
      local_58 = local_38;
      local_68._0_8_ = local_48._0_8_;
      local_68._8_8_ = local_48._8_8_;
      local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_48._8_8_ = local_68;
      while( true ) {
        do {
          do {
            bVar2 = System_Collections_Generic_List_Enumerator_int___MoveNext
                              ((System_Collections_Generic_List_Enumerator_int__o *)local_68,
                               (MethodInfo_4C3B4A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
            if (!bVar2) {
              System_Collections_Generic_List_Enumerator_int___Dispose
                        ((System_Collections_Generic_List_Enumerator_int__o *)local_68,
                         (MethodInfo_4C3B490 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
              return;
            }
            iVar3 = (int32_t)local_58;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            obj = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,iVar3,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            iVar3 = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
          } while (iVar3 < 0);
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                            (pSVar1,iVar3,
                             (MethodInfo_4A0F950 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        } while (!bVar2);
        if (obj == (Map_MapObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_00 = (obj->fields).GameObject;
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) break;
        __this_02 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (__this_02 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Transform__SetParent_692d510
                  (__this_02,(UnityEngine_Transform_o *)0x0,true,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$NewCommand
// il2cpp: void GameManagers_MapEditorGameManager__NewCommand (GameManagers_MapEditorGameManager_o* __this, MapEditor_BaseCommand_o* command, bool syncInspector, const MethodInfo* method);
// 0x594c610

void GameManagers_MapEditorGameManager__NewCommand
               (GameManagers_MapEditorGameManager_o *__this,MapEditor_BaseCommand_o *command,
               bool syncInspector,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int32_t length;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_BaseCommand__o *pSVar6;
  MapEditor_BaseCommand_c *pMVar7;
  UI_MapEditorMenu_o *__this_01;
  MethodInfo *pMVar8;
  
  if (Il2CppMethodInitialized_07545890 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCommand_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCommand_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_TransformPositionCommand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_TransformPositionRotationCommand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_TransformScaleCommand);
    Il2CppMethodInitialized_07545890 = '\x01';
  }
  if (command != (MapEditor_BaseCommand_o *)0x0) {
    (*(command->klass->vtable)._4_Execute.methodPtr)(command,(command->klass->vtable)._4_Execute.method);
    pMVar8 = MethodInfo_System_Collections_Generic_List_BaseCommand_Add;
    __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._undoCommands;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this_00->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar4 = (__this_00->fields)._size;
        if (uVar4 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)command;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_00,(Il2CppObject *)command,
                     (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
        }
        pSVar6 = (__this->fields)._redoCommands;
        if (pSVar6 != (System_Collections_Generic_List_BaseCommand__o *)0x0) {
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          length = (pSVar6->fields)._size;
          (pSVar6->fields)._size = 0;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,length,(MethodInfo *)0x0);
          }
          pMVar7 = command->klass;
          bVar2 = (pMVar7->_2).typeHierarchyDepth;
          bVar3 = (TypeInfo_MapEditor_TransformPositionCommand->_2).typeHierarchyDepth;
          if (((bVar2 < bVar3) ||
              ((pMVar7->_2).typeHierarchy[(ulong)bVar3 - 1] !=
               (Il2CppClass *)TypeInfo_MapEditor_TransformPositionCommand)) &&
             ((bVar3 = (TypeInfo_MapEditor_TransformPositionRotationCommand->_2).typeHierarchyDepth,
              bVar2 < bVar3 ||
              ((pMVar7->_2).typeHierarchy[(ulong)bVar3 - 1] !=
               (Il2CppClass *)TypeInfo_MapEditor_TransformPositionRotationCommand)))) {
            bVar3 = (TypeInfo_MapEditor_TransformScaleCommand->_2).typeHierarchyDepth;
            if (bVar2 < bVar3) {
              return;
            }
            if ((pMVar7->_2).typeHierarchy[(ulong)bVar3 - 1] !=
                (Il2CppClass *)TypeInfo_MapEditor_TransformScaleCommand) {
              return;
            }
          }
          if (!syncInspector) {
            return;
          }
          __this_01 = (__this->fields)._menu;
          if (__this_01 != (UI_MapEditorMenu_o *)0x0) {
            UI_MapEditorMenu__SyncInspector(__this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$OnFinishLoading
// il2cpp: void GameManagers_MapEditorGameManager__OnFinishLoading (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x5951a30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5951b68: lea r15, [r13 + 0x70]
// asm:   0x5951b6c: jmp 0x5951b92

void GameManagers_MapEditorGameManager__OnFinishLoading
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  Map_MapScript_o **targetAddress;
  byte bVar1;
  UI_MapEditorTopPanel_o *__this_00;
  UI_ExportPopup_o *__this_01;
  Map_MapVersionConversionResult_o *pMVar2;
  UI_MapEditorVersionConversionPopup_o *__this_02;
  UI_MapEditorMenu_c *pUVar3;
  int32_t iVar4;
  MapEditor_PositionGizmo_o *pMVar5;
  MapEditor_OutlineGizmo_o *pMVar6;
  MapEditor_RotationGizmo_o *pMVar7;
  MapEditor_ScaleGizmo_o *method_00;
  CustomLogic_CustomLogicEvaluator_o *pCVar8;
  System_String_o *pSVar9;
  UnityEngine_Events_UnityAction_o *__this_03;
  GameManagers_MapEditorGameManager__WaitAndAutosave_d__57_o *__this_04;
  UI_MapEditorMenu_o *pUVar10;
  System_Collections_Generic_List_string__o *values;
  GameManagers_MapEditorGameManager_o *__this_05;
  UI_MapEditorMenu_o **targetAddress_00;
  
  if (Il2CppMethodInitialized_07545891 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_OnFinishLoading_b__55_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_07545891 = '\x01';
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  targetAddress = &(__this->fields).MapScript;
  (__this->fields).MapScript = TypeInfo_Map_MapManager->static_fields->MapScript;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar10 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar10 != (UI_MapEditorMenu_o *)0x0) goto label_05951b11;
label_05951b86:
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    pUVar10 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar10 == (UI_MapEditorMenu_o *)0x0) goto label_05951b86;
label_05951b11:
    pUVar3 = TypeInfo_UI_MapEditorMenu;
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)pUVar10->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)pUVar10->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
label_05951e29:
      il2cpp_codegen_raise_invalid_cast_exception(pUVar10,pUVar3);
    }
    (__this->fields)._menu = pUVar10;
    if (((((UI_BaseMenu_c *)pUVar10->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)pUVar10->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pUVar3))
    goto label_05951e29;
  }
  targetAddress_00 = &(__this->fields)._menu;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  pMVar5 = MapEditor_PositionGizmo__Create((MethodInfo *)0x0);
  (__this->fields)._positionGizmo = pMVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._positionGizmo);
  pMVar6 = MapEditor_OutlineGizmo__Create((MethodInfo *)0x0);
  (__this->fields)._outlineGizmo = pMVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._outlineGizmo);
  pMVar7 = MapEditor_RotationGizmo__Create((MethodInfo *)0x0);
  (__this->fields)._rotationGizmo = pMVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotationGizmo);
  method_00 = MapEditor_ScaleGizmo__Create((MethodInfo *)0x0);
  __this_05 = (GameManagers_MapEditorGameManager_o *)&(__this->fields)._scaleGizmo;
  (__this->fields)._scaleGizmo = method_00;
  Il2CppCodeGenWriteBarrier((void **)__this_05);
  iVar4 = GameManagers_MapEditorGameManager__GetHighestObjectId(__this_05,(MethodInfo *)method_00);
  (__this->fields)._currentObjectId = iVar4;
  pUVar10 = (__this->fields)._menu;
  if (pUVar10 != (UI_MapEditorMenu_o *)0x0) {
    UI_MapEditorMenu__ShowHierarchyPanel(pUVar10,(MethodInfo *)0x0);
    if (*targetAddress != (Map_MapScript_o *)0x0) {
      pSVar9 = ((*targetAddress)->fields).Logic;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar8 = CustomLogic_CustomLogicManager__GetEditorEvaluator(pSVar9,true,(MethodInfo *)0x0);
      (__this->fields).LogicEvaluator = pCVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields).LogicEvaluator);
      (__this->fields).CurrentGizmo = (MapEditor_BaseGizmo_o *)(__this->fields)._positionGizmo;
      Il2CppCodeGenWriteBarrier(&(__this->fields).CurrentGizmo);
      pUVar10 = (__this->fields)._menu;
      if ((pUVar10 != (UI_MapEditorMenu_o *)0x0) &&
         (__this_00 = (pUVar10->fields)._topPanel, __this_00 != (UI_MapEditorTopPanel_o *)0x0)) {
        UI_MapEditorTopPanel__ApplyViewSettings(__this_00,(MethodInfo *)0x0);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        values = TypeInfo_Map_MapLoader->static_fields->Errors;
        if (values != (System_Collections_Generic_List_string__o *)0x0) {
          if (0 < (values->fields)._size) {
            if (*targetAddress_00 == (UI_MapEditorMenu_o *)0x0) goto label_05951e24;
            __this_01 = (UI_ExportPopup_o *)((*targetAddress_00)->fields).ErrorPopup;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              values = TypeInfo_Map_MapLoader->static_fields->Errors;
            }
            pSVar9 = System_String__Join_5303350
                               ("\n",
                                (System_Collections_Generic_IEnumerable_string__o *)values,(MethodInfo *)0x0);
            if (__this_01 == (UI_ExportPopup_o *)0x0) goto label_05951e24;
            UI_ExportPopup__Show(__this_01,pSVar9,(MethodInfo *)0x0);
          }
          if (*targetAddress != (Map_MapScript_o *)0x0) {
            pMVar2 = ((*targetAddress)->fields)._LastUpgradeResult_k__BackingField;
            if ((pMVar2 == (Map_MapVersionConversionResult_o *)0x0) ||
               (iVar4 = Map_MapVersionConversionResult__get_VersionCount(pMVar2,(MethodInfo *)0x0), iVar4 < 1)
               ) {
label_05951dbf:
              if (Il2CppMethodInitialized_07545893 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_GameManagers_MapEditorGameManager_WaitAndAutosave_d__57);
                Il2CppMethodInitialized_07545893 = '\x01';
              }
              __this_04 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_GameManagers_MapEditorGameManager_WaitAndAutosave_d__57);
              System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
              (__this_04->fields).__1__state = 0;
              (__this_04->fields).__4__this = __this;
              Il2CppCodeGenWriteBarrier(&(__this_04->fields).__4__this);
              UnityEngine_MonoBehaviour__StartCoroutine_691c390
                        ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_04,
                         (MethodInfo *)0x0);
              return;
            }
            if ((*targetAddress_00 != (UI_MapEditorMenu_o *)0x0) && (*targetAddress != (Map_MapScript_o *)0x0)
               ) {
              __this_02 = ((*targetAddress_00)->fields).VersionConversionPopup;
              pMVar2 = ((*targetAddress)->fields)._LastUpgradeResult_k__BackingField;
              __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        (__this_03,(Il2CppObject *)__this,
                         (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_OnFinishLoading_b__55_0,
                         (MethodInfo *)0x0);
              if (__this_02 != (UI_MapEditorVersionConversionPopup_o *)0x0) {
                UI_MapEditorVersionConversionPopup__Show(__this_02,pMVar2,__this_03,(MethodInfo *)0x0);
                goto label_05951dbf;
              }
            }
          }
        }
      }
    }
  }
label_05951e24:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$Awake
// il2cpp: void GameManagers_MapEditorGameManager__Awake (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x5952030

void GameManagers_MapEditorGameManager__Awake(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545892 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07545892 = '\x01';
  }
  GameManagers_BaseGameManager__Awake((GameManagers_BaseGameManager_o *)__this,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar1 == (Settings_InputSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._input = (pSVar1->fields).MapEditor;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._input);
  return;
}


// GameManagers.MapEditorGameManager$$WaitAndAutosave
// il2cpp: System_Collections_IEnumerator_o* GameManagers_MapEditorGameManager__WaitAndAutosave (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x5951fc0

System_Collections_IEnumerator_o *
GameManagers_MapEditorGameManager__WaitAndAutosave
          (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager__WaitAndAutosave_d__57_o *__this_00;
  
  if (Il2CppMethodInitialized_07545893 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_MapEditorGameManager_WaitAndAutosave_d__57);
    Il2CppMethodInitialized_07545893 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_WaitAndAutosave_d__57);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.MapEditorGameManager$$Update
// il2cpp: void GameManagers_MapEditorGameManager__Update (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x59520b0

void GameManagers_MapEditorGameManager__Update(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields start;
  UI_MapEditorMenu_o *__this_00;
  MapEditor_MapEditorRuler_o *__this_01;
  bool bVar1;
  MethodInfo *method_00;
  
  bVar1 = UI_MobileLayoutEditorOverlay__get_IsOpen((MethodInfo *)0x0);
  if (!bVar1) {
    GameManagers_MapEditorGameManager__UpdateInput(__this,method);
    GameManagers_MapEditorGameManager__UpdateBrush(__this,method);
    __this_01 = (__this->fields).Ruler;
    if (__this_01 == (MapEditor_MapEditorRuler_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)0x0;
    MapEditor_MapEditorRuler__Update(__this_01,(MethodInfo *)0x0);
    GameManagers_MapEditorGameManager__UpdateDrag(__this,method_00);
    return;
  }
  (__this->fields)._isDrag = false;
  __this_00 = (__this->fields)._menu;
  if (__this_00 == (UI_MapEditorMenu_o *)0x0) {
    return;
  }
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  start = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  UI_MapEditorMenu__SetDrag
            (__this_00,false,(UnityEngine_Vector2_o)start,(UnityEngine_Vector2_o)start,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager$$UpdateBrush
// il2cpp: void GameManagers_MapEditorGameManager__UpdateBrush (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x5952760
// asm: 14 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5952bf3: mov rdi, r14
// asm:   0x5952bf6: jmp 0x5952c01
// asm:   0x5952d6c: test rax, rax
// asm:   0x5952d6f: movaps xmm1, xmmword ptr [rsp + 0x20]
// asm:   0x5952d74: je 0x5953045
// asm:   0x5952df2: jmp 0x5953045
// asm:   0x5952e6d: jmp 0x5953045
// asm:   0x5952e97: jne 0x5952f00
// asm:   0x5952ed6: jmp 0x5953045
// asm:   0x5952edb: movaps xmm1, xmm0
// asm:   0x5952ede: shufps xmm1, xmm0, 0x55
// asm:   0x5952ee2: cmp ebp, 1
// asm:   0x5952ee5: je 0x5952e83
// asm:   0x5952f47: jmp 0x5953045

void GameManagers_MapEditorGameManager__UpdateBrush
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  Cameras_BaseCamera_o *x;
  UnityEngine_Camera_o *__this_00;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  Settings_MapEditorInputSettings_o *pSVar4;
  Settings_KeybindSetting_o *pSVar5;
  UnityEngine_Ray_o ray;
  UnityEngine_Ray_o ray_00;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  UnityEngine_LayerMask_o mask;
  int32_t iVar9;
  UnityEngine_EventSystems_EventSystem_o *x_00;
  UnityEngine_UI_InputField_o *x_01;
  System_Int32_array *layers;
  int z;
  int y;
  int iVar10;
  int iVar11;
  MethodInfo *method_00;
  MapEditor_MapEditorBrush_o *pMVar12;
  UnityEngine_Object_o *x_02;
  int iVar13;
  float fVar14;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o cameraPosition;
  UnityEngine_Vector3_Fields local_e8;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  UnityEngine_Vector3_Fields local_b8 [2];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  UnityEngine_Ray_o local_70;
  UnityEngine_RaycastHit_o local_58;
  
  if (Il2CppMethodInitialized_07545894 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse ScrollWheel");
    Il2CppMethodInitialized_07545894 = '\x01';
  }
  local_d8._0_4_ = 0.0;
  local_d8._4_4_ = 0.0;
  local_d8._8_4_ = 0.0;
  local_d8._12_4_ = 0.0;
  local_c8._0_4_ = 0.0;
  local_c8._4_4_ = 0.0;
  local_58.fields.m_UV.fields.x = 0.0;
  local_58.fields.m_UV.fields.y = 0.0;
  local_58.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_58.fields.m_Normal.fields.y = 0.0;
  local_58.fields.m_Normal.fields.z = 0.0;
  local_58.fields.m_FaceID = 0;
  local_58.fields.m_Distance = 0.0;
  local_58.fields.m_Point.fields.x = 0.0;
  local_58.fields.m_Point.fields.y = 0.0;
  local_58.fields.m_Point.fields.z = 0.0;
  local_58.fields.m_Normal.fields.x = 0.0;
  local_e8.z = 0.0;
  local_e8.x = 0.0;
  local_e8.y = 0.0;
  pMVar12 = (__this->fields).Brush;
  if (pMVar12 == (MapEditor_MapEditorBrush_o *)0x0) {
    return;
  }
  if ((pMVar12->fields).Active == false) {
    return;
  }
  pUVar1 = (__this->fields)._menu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto label_05953045;
  bVar6 = UI_MapEditorMenu__IsPopupActive(pUVar1,(MethodInfo *)0x0);
  if (bVar6) {
label_05952899:
    pMVar12 = (__this->fields).Brush;
    if (pMVar12 != (MapEditor_MapEditorBrush_o *)0x0) {
      MapEditor_MapEditorBrush__ClearCenter(pMVar12,(MethodInfo *)0x0);
      return;
    }
    goto label_05953045;
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto label_05953045;
  if ((pUVar1->fields).IsMouseUI != false) goto label_05952899;
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  x_00 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  x_02 = (UnityEngine_Object_o *)0x0;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (x_00 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_05953045;
    x_02 = (UnityEngine_Object_o *)(x_00->fields).m_CurrentSelected;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(x_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (x_02 == (UnityEngine_Object_o *)0x0) goto label_05953045;
    x_01 = UnityEngine_GameObject__GetComponent_object_
                     ((UnityEngine_GameObject_o *)x_02,
                      (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) goto label_05952899;
  }
  x = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  if (x == (Cameras_BaseCamera_o *)0x0) goto label_05953045;
  __this_00 = (x->fields).Camera;
  UVar16 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Camera_o *)0x0) goto label_05953045;
  UnityEngine_Camera__ScreenPointToRay_68c1290(&local_70,__this_00,UVar16,(MethodInfo *)0x0);
  local_c8._0_4_ = local_70.fields.m_Direction.fields.y;
  local_c8._4_4_ = local_70.fields.m_Direction.fields.z;
  local_d8._0_4_ = local_70.fields.m_Origin.fields.x;
  local_d8._4_4_ = local_70.fields.m_Origin.fields.y;
  local_d8._8_4_ = local_70.fields.m_Origin.fields.z;
  local_d8._12_4_ = local_70.fields.m_Direction.fields.x;
  local_b8[1].y = local_70.fields.m_Direction.fields.y;
  local_b8[1].z = local_70.fields.m_Direction.fields.z;
  local_b8[0].x = local_70.fields.m_Origin.fields.x;
  local_b8[0].y = local_70.fields.m_Origin.fields.y;
  local_b8[0].z = local_70.fields.m_Origin.fields.z;
  local_b8[1].x = local_70.fields.m_Direction.fields.x;
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers == (System_Int32_array *)0x0) goto label_05953045;
  if ((int)layers->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject;
  mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
  iVar9 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  ray.fields.m_Origin.fields.z = local_b8[0].z;
  ray.fields.m_Direction.fields.x = local_b8[1].x;
  ray.fields.m_Origin.fields.x = local_b8[0].x;
  ray.fields.m_Origin.fields.y = local_b8[0].y;
  ray.fields.m_Direction.fields.y = local_b8[1].y;
  ray.fields.m_Direction.fields.z = local_b8[1].z;
  bVar6 = UnityEngine_Physics__Raycast_69da1f0(ray,&local_58,100000.0,iVar9,(MethodInfo *)0x0);
  pMVar12 = (__this->fields).Brush;
  if (bVar6) {
    UVar16 = UnityEngine_RaycastHit__get_point(&local_58,(MethodInfo *)0x0);
    UVar17 = UnityEngine_RaycastHit__get_normal(&local_58,(MethodInfo *)0x0);
    pUVar2 = (x->fields).Cache;
    if (pUVar2 == (Utility_BaseComponentCache_o *)0x0) goto label_05953045;
    local_88._8_4_ = extraout_XMM0_Dc;
    local_88._0_8_ = UVar17.fields._0_8_;
    local_88._12_4_ = extraout_XMM0_Dd;
    pUVar3 = (pUVar2->fields).Transform;
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05953045;
    UVar18 = UnityEngine_Transform__get_right(pUVar3,(MethodInfo *)0x0);
    pUVar2 = (x->fields).Cache;
    if (pUVar2 == (Utility_BaseComponentCache_o *)0x0) goto label_05953045;
    local_98._8_4_ = extraout_XMM0_Dc_00;
    local_98._0_8_ = UVar18.fields._0_8_;
    local_98._12_4_ = extraout_XMM0_Dd_00;
    pUVar3 = (pUVar2->fields).Transform;
    if ((pUVar3 == (UnityEngine_Transform_o *)0x0) ||
       (cameraPosition = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0),
       pMVar12 == (MapEditor_MapEditorBrush_o *)0x0)) goto label_05953045;
    UVar17.fields.z = UVar17.fields.z;
    UVar17.fields.x = (float)local_88._0_4_;
    UVar17.fields.y = (float)local_88._4_4_;
    UVar18.fields.z = UVar18.fields.z;
    UVar18.fields.x = (float)local_98._0_4_;
    UVar18.fields.y = (float)local_98._4_4_;
    MapEditor_MapEditorBrush__SetCenter_5b82510(pMVar12,UVar16,UVar17,UVar18,cameraPosition,(MethodInfo *)0x0)
    ;
  }
  else {
    if (pMVar12 == (MapEditor_MapEditorBrush_o *)0x0) goto label_05953045;
    if (((pMVar12->fields).FlatPlane != false) && ((pMVar12->fields)._hasCenter != false)) {
      ray_00.fields.m_Origin.fields.z = (float)local_d8._8_4_;
      ray_00.fields.m_Direction.fields.x = (float)local_d8._12_4_;
      ray_00.fields.m_Origin.fields.x = (float)local_d8._0_4_;
      ray_00.fields.m_Origin.fields.y = (float)local_d8._4_4_;
      ray_00.fields.m_Direction.fields.y = (float)local_c8;
      ray_00.fields.m_Direction.fields.z = local_c8._4_4_;
      bVar6 = MapEditor_MapEditorBrush__TryProjectRayToPlane
                        (pMVar12,ray_00,(UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0);
      pMVar12 = (__this->fields).Brush;
      if (bVar6) {
        if (pMVar12 == (MapEditor_MapEditorBrush_o *)0x0) goto label_05953045;
        UVar16.fields.z = local_e8.z;
        UVar16.fields.x = local_e8.x;
        UVar16.fields.y = local_e8.y;
        MapEditor_MapEditorBrush__SetCenter(pMVar12,UVar16,(MethodInfo *)0x0);
        goto label_05952c08;
      }
      if (pMVar12 == (MapEditor_MapEditorBrush_o *)0x0) goto label_05953045;
    }
    MapEditor_MapEditorBrush__ClearCenter(pMVar12,(MethodInfo *)0x0);
  }
label_05952c08:
  fVar14 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._input;
  if ((pSVar4 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar5 = (pSVar4->fields).BrushCount, pSVar5 == (Settings_KeybindSetting_o *)0x0)) goto label_05953045;
  bVar6 = Settings_KeybindSetting__GetKey(pSVar5,false,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._input;
  if ((pSVar4 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar5 = (pSVar4->fields).BrushCurve, pSVar5 == (Settings_KeybindSetting_o *)0x0)) goto label_05953045;
  bVar7 = Settings_KeybindSetting__GetKey(pSVar5,false,(MethodInfo *)0x0);
  pMVar12 = (__this->fields).Brush;
  if (pMVar12 == (MapEditor_MapEditorBrush_o *)0x0) goto label_05953045;
  if ((pMVar12->fields).Mode == 1) {
    pSVar4 = (__this->fields)._input;
    if ((pSVar4 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar5 = (pSVar4->fields).BrushCurveAxisX, pSVar5 == (Settings_KeybindSetting_o *)0x0))
    goto label_05953045;
    bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar5,false,(MethodInfo *)0x0);
    if (bVar8) {
      pMVar12 = (__this->fields).Brush;
      iVar9 = 1;
joined_r0x05952e67:
      if (pMVar12 == (MapEditor_MapEditorBrush_o *)0x0) goto label_05953045;
      (pMVar12->fields).CurveAxis = iVar9;
    }
    else {
      pSVar4 = (__this->fields)._input;
      if ((pSVar4 == (Settings_MapEditorInputSettings_o *)0x0) ||
         (pSVar5 = (pSVar4->fields).BrushCurveAxisY, pSVar5 == (Settings_KeybindSetting_o *)0x0))
      goto label_05953045;
      bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar5,false,(MethodInfo *)0x0);
      if (bVar8) {
        pMVar12 = (__this->fields).Brush;
        iVar9 = 2;
        goto joined_r0x05952e67;
      }
      pSVar4 = (__this->fields)._input;
      if ((pSVar4 == (Settings_MapEditorInputSettings_o *)0x0) ||
         (pSVar5 = (pSVar4->fields).BrushCurveAxisZ, pSVar5 == (Settings_KeybindSetting_o *)0x0))
      goto label_05953045;
      bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar5,false,(MethodInfo *)0x0);
      if (bVar8) {
        pMVar12 = (__this->fields).Brush;
        iVar9 = 3;
        goto joined_r0x05952e67;
      }
      pSVar4 = (__this->fields)._input;
      if ((pSVar4 == (Settings_MapEditorInputSettings_o *)0x0) ||
         (pSVar5 = (pSVar4->fields).BrushCurveAxisNone, pSVar5 == (Settings_KeybindSetting_o *)0x0))
      goto label_05953045;
      iVar9 = 0;
      bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar5,false,(MethodInfo *)0x0);
      if (bVar8) {
        pMVar12 = (__this->fields).Brush;
        goto joined_r0x05952e67;
      }
    }
    if (0.0001 < ABS(fVar14)) {
      pMVar12 = (__this->fields).Brush;
      if (pMVar12 == (MapEditor_MapEditorBrush_o *)0x0) goto label_05953045;
      iVar13 = (pMVar12->fields).CurveAxis;
      iVar10 = 1;
      if (iVar13 != 0) {
        iVar10 = iVar13;
      }
      iVar13 = (uint)(0.0 < fVar14) * 2 + -1;
      if (bVar7) {
        (pMVar12->fields).CurveAmount = (float)iVar13 * 0.5 + (pMVar12->fields).CurveAmount;
        pMVar12 = (__this->fields).Brush;
        goto joined_r0x05952ed0;
      }
      if (bVar6) {
        iVar11 = 0;
        if (iVar10 == 1) {
          iVar11 = iVar13;
        }
        y = (pMVar12->fields).GridY;
        z = (pMVar12->fields).GridZ;
        if (iVar10 == 2) {
label_05952f4f:
          y = y + iVar13;
        }
        else {
          if (iVar10 != 3) {
            iVar13 = 0;
            goto label_05952f4f;
          }
          z = z + iVar13;
        }
        MapEditor_MapEditorBrush__SetGrid(pMVar12,iVar11 + (pMVar12->fields).GridX,y,z,(MethodInfo *)0x0);
label_05952f5a:
        pMVar12 = (__this->fields).Brush;
      }
      else {
        UVar16 = MapEditor_MapEditorBrush__GetAverageGhostSize(pMVar12,(MethodInfo *)0x0);
        fVar14 = UVar16.fields.y;
        if ((iVar10 == 2) || (fVar14 = UVar16.fields.z, iVar10 != 1)) {
          fVar15 = 0.5;
          if (0.5 <= fVar14 * 0.1) {
            fVar15 = fVar14 * 0.1;
          }
          if (iVar10 != 1) {
            if (iVar10 != 3) {
              if (iVar10 == 2) {
                pMVar12 = (__this->fields).Brush;
                if (pMVar12 == (MapEditor_MapEditorBrush_o *)0x0) goto label_05953045;
                fVar15 = fVar15 * (float)iVar13 + (pMVar12->fields).SpacingY;
                fVar14 = 0.0;
                if (0.0 <= fVar15) {
                  fVar14 = fVar15;
                }
                (pMVar12->fields).SpacingY = fVar14;
                pMVar12 = (__this->fields).Brush;
                goto joined_r0x05952ed0;
              }
              goto label_05952f5a;
            }
            pMVar12 = (__this->fields).Brush;
            if (pMVar12 == (MapEditor_MapEditorBrush_o *)0x0) goto label_05953045;
            fVar15 = fVar15 * (float)iVar13 + (pMVar12->fields).SpacingZ;
            fVar14 = 0.0;
            if (0.0 <= fVar15) {
              fVar14 = fVar15;
            }
            (pMVar12->fields).SpacingZ = fVar14;
            pMVar12 = (__this->fields).Brush;
            goto joined_r0x05952ed0;
          }
        }
        else {
          fVar14 = UVar16.fields.x * 0.1;
          fVar15 = 0.5;
          if (0.5 <= fVar14) {
            fVar15 = fVar14;
          }
        }
        pMVar12 = (__this->fields).Brush;
        if (pMVar12 == (MapEditor_MapEditorBrush_o *)0x0) goto label_05953045;
        fVar15 = fVar15 * (float)iVar13 + (pMVar12->fields).SpacingX;
        fVar14 = 0.0;
        if (0.0 <= fVar15) {
          fVar14 = fVar15;
        }
        (pMVar12->fields).SpacingX = fVar14;
        pMVar12 = (__this->fields).Brush;
      }
joined_r0x05952ed0:
      if (pMVar12 == (MapEditor_MapEditorBrush_o *)0x0) goto label_05953045;
      MapEditor_MapEditorBrush__RegenerateGhosts(pMVar12,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._menu;
      if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto label_05953045;
      UI_MapEditorMenu__SyncBrushPanelValues(pUVar1,(MethodInfo *)0x0);
    }
  }
  else if (0.0001 < ABS(fVar14)) {
    MapEditor_MapEditorBrush__SetRadius
              (pMVar12,(fVar14 + fVar14 + 1.0) * (pMVar12->fields).Radius,(MethodInfo *)0x0);
  }
  pSVar4 = (__this->fields)._input;
  if ((pSVar4 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar5 = (pSVar4->fields).BrushReroll, pSVar5 == (Settings_KeybindSetting_o *)0x0)) goto label_05953045;
  bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar5,false,(MethodInfo *)0x0);
  if (bVar6) {
    pMVar12 = (__this->fields).Brush;
    if (pMVar12 == (MapEditor_MapEditorBrush_o *)0x0) goto label_05953045;
    MapEditor_MapEditorBrush__Reseed(pMVar12,(MethodInfo *)0x0);
    pMVar12 = (__this->fields).Brush;
    if (pMVar12 == (MapEditor_MapEditorBrush_o *)0x0) goto label_05953045;
    MapEditor_MapEditorBrush__RegenerateGhosts(pMVar12,(MethodInfo *)0x0);
  }
  pSVar4 = (__this->fields)._input;
  if ((pSVar4 != (Settings_MapEditorInputSettings_o *)0x0) &&
     (pSVar5 = (pSVar4->fields).Select, pSVar5 != (Settings_KeybindSetting_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar5,false,(MethodInfo *)0x0);
    if (bVar6) {
      GameManagers_MapEditorGameManager__PlaceBrush(__this,method_00);
    }
    return;
  }
label_05953045:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$PlaceBrush
// il2cpp: void GameManagers_MapEditorGameManager__PlaceBrush (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x5953580

void GameManagers_MapEditorGameManager__PlaceBrush
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *__this_00;
  System_Collections_Generic_List_MapScriptBaseObject__o *objs;
  MapEditor_AddObjectCommand_o *__this_01;
  MethodInfo *method_00;
  MapEditor_MapEditorBrush_o *pMVar1;
  
  if (Il2CppMethodInitialized_07545895 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_AddObjectCommand);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Count);
    Il2CppMethodInitialized_07545895 = '\x01';
  }
  pMVar1 = (__this->fields).Brush;
  if (pMVar1 != (MapEditor_MapEditorBrush_o *)0x0) {
    if ((pMVar1->fields).Active == false) {
      return;
    }
    objs = MapEditor_MapEditorBrush__BuildPlacements(pMVar1,(MethodInfo *)0x0);
    if (objs != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      if ((objs->fields)._size == 0) {
        return;
      }
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand);
      method_00 = (MethodInfo *)0x0;
      MapEditor_AddObjectCommand___ctor(__this_01,objs,-1,(MethodInfo *)0x0);
      GameManagers_MapEditorGameManager__NewCommand
                (__this,(MapEditor_BaseCommand_o *)__this_01,true,method_00);
      __this_00 = (__this->fields)._menu;
      if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
        UI_MapEditorMenu__SyncHierarchyPanel(__this_00,(MethodInfo *)0x0);
        pMVar1 = (__this->fields).Brush;
        if (pMVar1 != (MapEditor_MapEditorBrush_o *)0x0) {
          if ((pMVar1->fields).RandomizeEachPlacement != false) {
            MapEditor_MapEditorBrush__Reseed(pMVar1,(MethodInfo *)0x0);
            pMVar1 = (__this->fields).Brush;
            if (pMVar1 == (MapEditor_MapEditorBrush_o *)0x0) goto label_0595365e;
          }
          MapEditor_MapEditorBrush__RegenerateGhosts(pMVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0595365e:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$ToggleBrush
// il2cpp: void GameManagers_MapEditorGameManager__ToggleBrush (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x5953670

void GameManagers_MapEditorGameManager__ToggleBrush
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  MapEditor_MapEditorBrush_o *__this_00;
  UI_MapEditorMenu_o *pUVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar3;
  
  __this_00 = (__this->fields).Brush;
  if (__this_00 == (MapEditor_MapEditorBrush_o *)0x0) {
label_059536d8:
    ThrowNullReferenceException();
  }
  bVar1 = (__this_00->fields).Active;
  pMVar3 = (MethodInfo *)(ulong)(bVar1 == false);
  MapEditor_MapEditorBrush__SetActive(__this_00,bVar1 == false,(MethodInfo *)0x0);
  if (bVar1 == false) {
    GameManagers_MapEditorGameManager__DeselectAll(__this,pMVar3);
    pUVar2 = (__this->fields)._menu;
    if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_059536d8;
    UI_MapEditorMenu__ShowBrushPanel(pUVar2,(MethodInfo *)0x0);
    pMVar3 = extraout_RDX_00;
  }
  else {
    pUVar2 = (__this->fields)._menu;
    if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_059536d8;
    UI_MapEditorMenu__HideBrushPanel(pUVar2,(MethodInfo *)0x0);
    pMVar3 = extraout_RDX;
  }
  GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,pMVar3);
  return;
}


// GameManagers.MapEditorGameManager$$UpdateDrag
// il2cpp: void GameManagers_MapEditorGameManager__UpdateDrag (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x5953050
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5953188: jmp 0x595356d
// asm:   0x595340b: lea rax, [rip + 0x192b066]  ; TypeInfo_UnityEngine_Vector2
// asm:   0x5953412: mov rax, qword ptr [rax]
// asm:   0x5953415: mov rax, qword ptr [rax + 0xb8]
// asm:   0x595341c: movsd xmm0, qword ptr [rax]
// asm:   0x5953420: mov rdi, rbx
// asm:   0x5953423: xor esi, esi
// asm:   0x5953425: movaps xmm1, xmm0
// asm:   0x5953428: xor edx, edx
// asm:   0x595342a: call 0x5d96370  ; UI_MapEditorMenu__SetDrag()
// asm:   0x595342f: jmp 0x59530f7

void GameManagers_MapEditorGameManager__UpdateDrag
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UI_MobileMapEditorPointer_o **targetAddress;
  UnityEngine_Vector2_o start;
  UnityEngine_Vector2_Fields UVar1;
  UI_MapEditorMenu_o *pUVar2;
  MapEditor_BaseGizmo_o *pMVar3;
  UnityEngine_Object_o *x;
  Settings_MapEditorInputSettings_o *pSVar4;
  Settings_KeybindSetting_o *pSVar5;
  System_Collections_Generic_HashSet_MapObject__o *pSVar6;
  bool bVar7;
  bool bVar8;
  UnityEngine_EventSystems_EventSystem_o *pUVar9;
  UnityEngine_UI_InputField_o *x_00;
  UI_MobileMapEditorPointer_o *pUVar10;
  MethodInfo *in_RCX;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_Fields UStack_68;
  UnityEngine_Vector2_Fields UStack_58;
  undefined4 uStack_50;
  UnityEngine_Vector2_o UStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  
  if (Il2CppMethodInitialized_07545896 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileMapEditorPointer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545896 = '\x01';
  }
  uStack_50 = 0;
  UStack_58.x = 0.0;
  UStack_58.y = 0.0;
  UStack_68.z = 0.0;
  UStack_68.x = 0.0;
  UStack_68.y = 0.0;
  pUVar2 = (__this->fields)._menu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return;
  }
  pMVar3 = (__this->fields).CurrentGizmo;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pMVar3 = (__this->fields).CurrentGizmo;
    if (pMVar3 == (MapEditor_BaseGizmo_o *)0x0) goto label_0595356d;
    bVar7 = (*(pMVar3->klass->vtable)._4_IsActive.methodPtr)
                      (pMVar3,(pMVar3->klass->vtable)._4_IsActive.method);
    if (bVar7) {
      (__this->fields)._isDrag = false;
    }
  }
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_0595356d;
  bVar7 = UI_MapEditorMenu__IsPopupActive(pUVar2,(MethodInfo *)0x0);
  if (bVar7) {
    (__this->fields)._isDrag = false;
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0)
    goto label_059531a8;
label_0595317c:
    pUVar9 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor != 0)
    goto label_0595317c;
label_059531a8:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    pUVar9 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  }
  if (pUVar9 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_0595356d;
  x = (UnityEngine_Object_o *)(pUVar9->fields).m_CurrentSelected;
  if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if (x == (UnityEngine_Object_o *)0x0) goto label_0595356d;
    x_00 = UnityEngine_GameObject__GetComponent_object_
                     ((UnityEngine_GameObject_o *)x,
                      (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      (__this->fields)._isDrag = false;
    }
  }
  if ((__this->fields)._isDrag != false) {
    if ((TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
      bVar7 = UI_MobileMapEditorPointer__get_Enabled((MethodInfo *)0x0);
    }
    else {
      bVar7 = UI_MobileMapEditorPointer__get_Enabled((MethodInfo *)0x0);
    }
    if (bVar7) {
      if (Il2CppMethodInitialized_07545883 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileMapEditorPointer);
        Il2CppMethodInitialized_07545883 = '\x01';
      }
      targetAddress = &(__this->fields)._mobilePointer;
      pUVar10 = (__this->fields)._mobilePointer;
      if (pUVar10 == (UI_MobileMapEditorPointer_o *)0x0) {
        pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
        UI_MobileMapEditorPointer___ctor(pUVar10,(MethodInfo *)0x0);
        *targetAddress = pUVar10;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pUVar10 = *targetAddress;
        if (pUVar10 == (UI_MobileMapEditorPointer_o *)0x0) goto label_0595356d;
      }
      UI_MobileMapEditorPointer__TryGetPointerPosition
                (pUVar10,(UnityEngine_Vector3_o *)&UStack_58,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._menu;
      if (pUVar2 != (UI_MapEditorMenu_o *)0x0) {
        start.fields.x = (__this->fields)._dragStart.fields.x;
        start.fields.y = (__this->fields)._dragStart.fields.y;
        UI_MapEditorMenu__SetDrag(pUVar2,true,start,(UnityEngine_Vector2_o)UStack_58,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_07545883 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileMapEditorPointer);
          Il2CppMethodInitialized_07545883 = '\x01';
        }
        pUVar10 = *targetAddress;
        if (pUVar10 == (UI_MobileMapEditorPointer_o *)0x0) {
          pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
          UI_MobileMapEditorPointer___ctor(pUVar10,(MethodInfo *)0x0);
          *targetAddress = pUVar10;
          Il2CppCodeGenWriteBarrier(targetAddress);
          pUVar10 = *targetAddress;
          if (pUVar10 == (UI_MobileMapEditorPointer_o *)0x0) goto label_0595356d;
        }
        bVar7 = UI_MobileMapEditorPointer__TryGetSelectUp
                          (pUVar10,(UnityEngine_Vector3_o *)&UStack_68,(MethodInfo *)0x0);
        if (!bVar7) {
          return;
        }
        pSVar4 = (__this->fields)._input;
        if ((pSVar4 != (Settings_MapEditorInputSettings_o *)0x0) &&
           (pSVar5 = (pSVar4->fields).Multiselect, pSVar5 != (Settings_KeybindSetting_o *)0x0)) {
          bVar7 = false;
          bVar8 = Settings_KeybindSetting__GetKey(pSVar5,false,(MethodInfo *)0x0);
          if (bVar8) {
            pSVar6 = (__this->fields).SelectedObjects;
            if (pSVar6 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_0595356d;
            bVar7 = 0 < (pSVar6->fields)._count;
          }
          pUVar2 = (__this->fields)._menu;
          if (pUVar2 != (UI_MapEditorMenu_o *)0x0) {
            UStack_48.fields.x = UStack_68.z;
            auStack_38._0_4_ = UStack_68.x;
            auStack_38._4_4_ = UStack_68.y;
            uStack_30 = 0;
            UVar11.fields.z = UStack_68.z;
            UVar11.fields.x = UStack_68.x;
            UVar11.fields.y = UStack_68.y;
            bVar8 = UI_MapEditorMenu__IsTouchUI(pUVar2,UVar11,(MethodInfo *)0x0);
            position.fields.z = UStack_48.fields.x;
            position.fields.x = (float)auStack_38._0_4_;
            position.fields.y = (float)auStack_38._4_4_;
            GameManagers_MapEditorGameManager__SelectAt(__this,bVar7,position,bVar8,in_RCX);
            (__this->fields)._isDrag = false;
            pUVar2 = (__this->fields)._menu;
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            if (pUVar2 != (UI_MapEditorMenu_o *)0x0) {
              UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
              UI_MapEditorMenu__SetDrag
                        (pUVar2,false,(UnityEngine_Vector2_o)UVar1,(UnityEngine_Vector2_o)UVar1,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_0595356d;
    }
    pUVar2 = (__this->fields)._menu;
    UStack_48.fields.x = (__this->fields)._dragStart.fields.x;
    UStack_48.fields.y = (__this->fields)._dragStart.fields.y;
    uStack_40 = 0;
    UVar11 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_0595356d;
    UI_MapEditorMenu__SetDrag
              (pUVar2,true,UStack_48,(UnityEngine_Vector2_o)UVar11.fields._0_8_,(MethodInfo *)0x0);
    pSVar4 = (__this->fields)._input;
    if ((pSVar4 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar5 = (pSVar4->fields).Select, pSVar5 == (Settings_KeybindSetting_o *)0x0)) goto label_0595356d;
    bVar7 = Settings_KeybindSetting__GetKeyUp(pSVar5,false,(MethodInfo *)0x0);
    if (!bVar7) {
      return;
    }
    pSVar4 = (__this->fields)._input;
    if ((pSVar4 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar5 = (pSVar4->fields).Multiselect, pSVar5 == (Settings_KeybindSetting_o *)0x0)) goto label_0595356d;
    bVar7 = false;
    bVar8 = Settings_KeybindSetting__GetKey(pSVar5,false,(MethodInfo *)0x0);
    if (bVar8) {
      pSVar6 = (__this->fields).SelectedObjects;
      if (pSVar6 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_0595356d;
      bVar7 = 0 < (pSVar6->fields)._count;
    }
    UVar11 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    pUVar2 = (__this->fields)._menu;
    if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_0595356d;
    GameManagers_MapEditorGameManager__SelectAt(__this,bVar7,UVar11,(pUVar2->fields).IsMouseUI,in_RCX);
    (__this->fields)._isDrag = false;
  }
  pUVar2 = (__this->fields)._menu;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  if (pUVar2 != (UI_MapEditorMenu_o *)0x0) {
    UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
    UI_MapEditorMenu__SetDrag
              (pUVar2,false,(UnityEngine_Vector2_o)UVar1,(UnityEngine_Vector2_o)UVar1,(MethodInfo *)0x0);
    return;
  }
label_0595356d:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$UpdateInput
// il2cpp: void GameManagers_MapEditorGameManager__UpdateInput (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x5952150
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59523db: jmp 0x5952345
// asm:   0x5952745: mov byte ptr [r14 + 0xbc], 0
// asm:   0x595274d: jmp 0x59521e6

void GameManagers_MapEditorGameManager__UpdateInput
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  Settings_MapEditorInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  UI_MapEditorTopPanel_o *pUVar4;
  UnityEngine_Object_o *x;
  UI_MapEditorAddObjectPopup_o *pUVar5;
  UI_MapEditorAddVariantPopup_o *pUVar6;
  MapEditor_MapEditorRuler_o *pMVar7;
  UnityEngine_Vector3_o position;
  bool bVar8;
  bool bVar9;
  UnityEngine_EventSystems_EventSystem_o *pUVar10;
  UnityEngine_UI_InputField_o *x_00;
  UI_MobileMapEditorPointer_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar11;
  UnityEngine_Vector3_Fields UVar12;
  UnityEngine_Vector3_Fields local_30;
  
  if (Il2CppMethodInitialized_07545897 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileMapEditorPointer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545897 = '\x01';
  }
  local_30.z = 0.0;
  local_30.x = 0.0;
  local_30.y = 0.0;
  bVar8 = UI_MobileLayoutEditorOverlay__get_IsOpen((MethodInfo *)0x0);
  if (bVar8) {
    return;
  }
  pUVar1 = (__this->fields)._menu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    return;
  }
  pSVar2 = (__this->fields)._input;
  if ((pSVar2 != (Settings_MapEditorInputSettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).SaveMap, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
    if (bVar8) {
      pUVar1 = (__this->fields)._menu;
      if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
         (pUVar4 = (pUVar1->fields)._topPanel, pUVar4 != (UI_MapEditorTopPanel_o *)0x0)) {
        UI_MapEditorTopPanel__Save(pUVar4,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      pUVar10 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if (pUVar10 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
        x = (UnityEngine_Object_o *)(pUVar10->fields).m_CurrentSelected;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = false;
        bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar8) {
          if (x == (UnityEngine_Object_o *)0x0) goto label_05952721;
          x_00 = UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)x,
                            (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar9 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        }
        pUVar1 = (__this->fields)._menu;
        if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
          bVar8 = UI_MapEditorMenu__IsPopupActive(pUVar1,(MethodInfo *)0x0);
          if (bVar8) {
            pUVar1 = (__this->fields)._menu;
            if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
               (pUVar5 = (pUVar1->fields).AddObjectPopup, pUVar5 != (UI_MapEditorAddObjectPopup_o *)0x0)) {
              if ((pUVar5->fields).IsActive == false) {
                pUVar6 = (pUVar1->fields).AddVariantPopup;
                if (pUVar6 == (UI_MapEditorAddVariantPopup_o *)0x0) goto label_05952721;
                if ((pUVar6->fields).IsActive == false) {
                  return;
                }
              }
              bVar8 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
              if (!bVar8) {
                if (bVar9 != false) {
                  return;
                }
                pSVar2 = (__this->fields)._input;
                if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
                   (pSVar3 = (pSVar2->fields).AddObject, pSVar3 == (Settings_KeybindSetting_o *)0x0))
                goto label_05952721;
                bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
                if (!bVar8) {
                  return;
                }
              }
              pUVar1 = (__this->fields)._menu;
              if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
                UI_MapEditorMenu__ToggleAddObjectPopup(pUVar1,(MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            if (bVar9 != false) {
              return;
            }
            pSVar2 = (__this->fields)._input;
            if ((pSVar2 != (Settings_MapEditorInputSettings_o *)0x0) &&
               (pSVar3 = (pSVar2->fields).Undo, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
              pMVar11 = (MethodInfo *)0x0;
              bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
              if (bVar8) {
                GameManagers_MapEditorGameManager__Undo(__this,pMVar11);
              }
              else {
                pSVar2 = (__this->fields)._input;
                if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
                   (pSVar3 = (pSVar2->fields).Redo, pSVar3 == (Settings_KeybindSetting_o *)0x0))
                goto label_05952721;
                pMVar11 = (MethodInfo *)0x0;
                bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
                if (bVar8) {
                  GameManagers_MapEditorGameManager__Redo(__this,pMVar11);
                  goto label_05952745;
                }
                pSVar2 = (__this->fields)._input;
                if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
                   (pSVar3 = (pSVar2->fields).CopyObjects, pSVar3 == (Settings_KeybindSetting_o *)0x0))
                goto label_05952721;
                pMVar11 = (MethodInfo *)0x0;
                bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
                if (bVar8) {
                  GameManagers_MapEditorGameManager__Copy(__this,pMVar11);
                  goto label_05952745;
                }
                pSVar2 = (__this->fields)._input;
                if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
                   (pSVar3 = (pSVar2->fields).Paste, pSVar3 == (Settings_KeybindSetting_o *)0x0))
                goto label_05952721;
                bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
                if (bVar8) {
                  GameManagers_MapEditorGameManager__Paste_584dac0(__this,-1,method_00);
                  goto label_05952745;
                }
                pSVar2 = (__this->fields)._input;
                if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
                   (pSVar3 = (pSVar2->fields).Cut, pSVar3 == (Settings_KeybindSetting_o *)0x0))
                goto label_05952721;
                pMVar11 = (MethodInfo *)0x0;
                bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
                if (bVar8) {
                  GameManagers_MapEditorGameManager__Copy(__this,pMVar11);
                }
                else {
                  pSVar2 = (__this->fields)._input;
                  if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
                     (pSVar3 = (pSVar2->fields).AddObject, pSVar3 == (Settings_KeybindSetting_o *)0x0))
                  goto label_05952721;
                  pMVar11 = (MethodInfo *)0x0;
                  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
                  if (bVar8) {
                    GameManagers_MapEditorGameManager__ShowAddObject(__this,pMVar11);
                    goto label_05952745;
                  }
                  pSVar2 = (__this->fields)._input;
                  if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
                     (pSVar3 = (pSVar2->fields).Delete, pSVar3 == (Settings_KeybindSetting_o *)0x0))
                  goto label_05952721;
                  pMVar11 = (MethodInfo *)0x0;
                  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
                  if (!bVar8) {
                    pSVar2 = (__this->fields)._input;
                    if ((pSVar2 != (Settings_MapEditorInputSettings_o *)0x0) &&
                       (pSVar3 = (pSVar2->fields).Deselect, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
                      pMVar11 = (MethodInfo *)0x0;
                      bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
                      if (bVar8) {
                        GameManagers_MapEditorGameManager__DeselectAll(__this,pMVar11);
                        GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,method_01);
                        goto label_05952745;
                      }
                      pSVar2 = (__this->fields)._input;
                      if ((pSVar2 != (Settings_MapEditorInputSettings_o *)0x0) &&
                         (pSVar3 = (pSVar2->fields).ChangeGizmo, pSVar3 != (Settings_KeybindSetting_o *)0x0))
                      {
                        bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
                        if (bVar8) {
                          pUVar1 = (__this->fields)._menu;
                          if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
                             (pUVar4 = (pUVar1->fields)._topPanel, pUVar4 != (UI_MapEditorTopPanel_o *)0x0)) {
                            UI_MapEditorTopPanel__NextGizmo(pUVar4,(MethodInfo *)0x0);
                            goto label_05952745;
                          }
                        }
                        else {
                          pSVar2 = (__this->fields)._input;
                          if ((pSVar2 != (Settings_MapEditorInputSettings_o *)0x0) &&
                             (pSVar3 = (pSVar2->fields).ToggleSnap, pSVar3 != (Settings_KeybindSetting_o *)0x0
                             )) {
                            pMVar11 = (MethodInfo *)0x0;
                            bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
                            if (!bVar8) {
                              if ((TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
                              }
                              bVar8 = UI_MobileMapEditorPointer__get_Enabled((MethodInfo *)0x0);
                              if (bVar8) {
                                __this_00 = GameManagers_MapEditorGameManager__get_MobilePointer
                                                      (__this,pMVar11);
                                if (__this_00 == (UI_MobileMapEditorPointer_o *)0x0) goto label_05952721;
                                bVar8 = UI_MobileMapEditorPointer__TryGetSelectDown
                                                  (__this_00,(UnityEngine_Vector3_o *)&local_30,
                                                   (MethodInfo *)0x0);
                                if (bVar8) {
                                  pUVar1 = (__this->fields)._menu;
                                  if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto label_05952721;
                                  position.fields.z = local_30.z;
                                  position.fields.x = local_30.x;
                                  position.fields.y = local_30.y;
                                  bVar8 = UI_MapEditorMenu__IsTouchUI(pUVar1,position,(MethodInfo *)0x0);
                                  if (!bVar8) {
                                    pMVar7 = (__this->fields).Ruler;
                                    if (pMVar7 == (MapEditor_MapEditorRuler_o *)0x0) goto label_05952721;
                                    if ((pMVar7->fields)._Active_k__BackingField == false) {
                                      (__this->fields)._isDrag = true;
                                      (__this->fields)._dragStart.fields.x = local_30.x;
                                      (__this->fields)._dragStart.fields.y = local_30.y;
                                      (__this->fields)._dragStart.fields.z = local_30.z;
                                      goto label_05952745;
                                    }
                                  }
                                }
                              }
                              if ((TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
                              }
                              bVar8 = UI_MobileMapEditorPointer__get_Enabled((MethodInfo *)0x0);
                              if (!bVar8) {
                                pSVar2 = (__this->fields)._input;
                                if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
                                   (pSVar3 = (pSVar2->fields).Select,
                                   pSVar3 == (Settings_KeybindSetting_o *)0x0)) goto label_05952721;
                                bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
                                if (bVar8) {
                                  pUVar1 = (__this->fields)._menu;
                                  if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto label_05952721;
                                  if ((pUVar1->fields).IsMouseUI == false) {
                                    pMVar7 = (__this->fields).Ruler;
                                    if (pMVar7 == (MapEditor_MapEditorRuler_o *)0x0) goto label_05952721;
                                    if ((pMVar7->fields)._Active_k__BackingField == false) {
                                      (__this->fields)._isDrag = true;
                                      UVar12 = (UnityEngine_Vector3_Fields)
                                               UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
                                      (__this->fields)._dragStart.fields = UVar12;
                                    }
                                  }
                                }
                              }
                              goto label_05952745;
                            }
                            pUVar1 = (__this->fields)._menu;
                            if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
                               (pUVar4 = (pUVar1->fields)._topPanel, pUVar4 != (UI_MapEditorTopPanel_o *)0x0))
                            {
                              UI_MapEditorTopPanel__ToggleSnap(pUVar4,(MethodInfo *)0x0);
                              goto label_05952745;
                            }
                          }
                        }
                      }
                    }
                    goto label_05952721;
                  }
                }
                GameManagers_MapEditorGameManager__Delete(__this,pMVar11);
              }
label_05952745:
              (__this->fields).IgnoreNextSelect = false;
              return;
            }
          }
        }
      }
    }
  }
label_05952721:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$Save
// il2cpp: void GameManagers_MapEditorGameManager__Save (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x59536e0

void GameManagers_MapEditorGameManager__Save(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_MapEditorTopPanel_o *__this_00;
  
  pUVar1 = (__this->fields)._menu;
  if ((pUVar1 == (UI_MapEditorMenu_o *)0x0) ||
     (__this_00 = (pUVar1->fields)._topPanel, __this_00 == (UI_MapEditorTopPanel_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_MapEditorTopPanel__Save(__this_00,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager$$OnSelectionChange
// il2cpp: void GameManagers_MapEditorGameManager__OnSelectionChange (GameManagers_MapEditorGameManager_o* __this, bool focusHierarchy, const MethodInfo* method);
// 0x594c9b0
// eh: try 0x594cb04..0x594cc84 -> pad 0x594cc95 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x594ccad..0x594ccb2 -> pad 0x594ccd7 cleanup
// eh: try 0x594ccda..0x594cce4 -> pad 0x594ccec catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x594cbca: jmp 0x594cc84
// asm:   0x594cc89: jmp 0x594cc95
// asm:   0x594cc8b: jmp 0x594cc95
// asm:   0x594cc8d: jmp 0x594cc95
// asm:   0x594cc8f: jmp 0x594cc95
// asm:   0x594cc91: jmp 0x594cc95
// asm:   0x594cc93: jmp 0x594cc95
// asm:   0x594cc95: mov rbp, rax
// asm:   0x594cc98: cmp edx, 1
// asm:   0x594cc9b: jne 0x594ccda
// asm:   0x594cc9d: mov rdi, rbp
// asm:   0x594cca0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x594cca5: mov rbx, qword ptr [rax]
// asm:   0x594cca8: mov qword ptr [rsp + 0x30], rbx
// asm:   0x594ccad: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x594ccb2: lea rax, [rip + 0x19416ef]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x594ccb9: mov rsi, qword ptr [rax]
// asm:   0x594ccbc: lea rdi, [rsp + 0x10]
// asm:   0x594ccc1: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x594ccc6: test rbx, rbx
// asm:   0x594ccc9: je 0x594cb84
// asm:   0x594cccf: mov rdi, rbx
// asm:   0x594ccd2: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x594ccd7: mov rbp, rax
// asm:   0x594ccda: lea rdi, [rsp + 0x30]
// asm:   0x594ccdf: call 0x2fd37f0  ; il2cpp_runtime_helper_02fd37f0()
// asm:   0x594cce4: mov rdi, rbp
// asm:   0x594cce7: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x594ccec: mov rdi, rax
// asm:   0x594ccef: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_MapEditorGameManager__OnSelectionChange
               (GameManagers_MapEditorGameManager_o *__this,bool focusHierarchy,MethodInfo *method)

{
  System_Collections_Generic_HashSet_MapObject__o *pSVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  MapEditor_MapEditorBrush_o *pMVar3;
  UI_MapEditorMenu_o *pUVar4;
  UI_MapEditorHierarchyPanel_o *pUVar5;
  Map_MapObject_o *obj;
  bool bVar6;
  System_Collections_Generic_HashSet_MapObject__o *__this_01;
  System_Collections_Generic_List_MapObject__o *objs;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 local_68 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_60;
  Map_MapObject_o *local_58;
  undefined1 local_48 [16];
  Map_MapObject_o *local_38;
  
  if (Il2CppMethodInitialized_07545898 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_ctor_71913c0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_MapObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_ctor_7195590);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545898 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_58 = (Map_MapObject_o *)0x0;
  pSVar1 = (__this->fields).SelectedObjects;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_MapObject);
  System_Collections_Generic_HashSet_object____ctor_4fb2fe0
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (System_Collections_Generic_IEnumerable_T__o *)pSVar1,
             (MethodInfo_4FB2FE0 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_ctor_71913c0);
  if (__this_01 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_0594cc84;
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
             (System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
  local_58 = local_38;
  local_68 = (undefined1  [8])local_48._0_8_;
  pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_48._8_8_;
  local_48._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_48._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_68;
  while (bVar6 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                           ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                            (MethodInfo_4C456D0 *)
                            MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext),
        obj = local_58, bVar6) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    if (obj == (Map_MapObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pMVar2 = (obj->fields).ScriptObject;
    if (pMVar2 == (Map_MapScriptBaseObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (__this_00,(pMVar2->fields).Id,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    if (!bVar6) {
      GameManagers_MapEditorGameManager__DeselectObject(__this,obj,method_00);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
             (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose)
  ;
  pSVar1 = (__this->fields).SelectedObjects;
  if (pSVar1 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_0594cc84;
  if ((pSVar1->fields)._count < 1) {
label_0594cbad:
    pUVar4 = (__this->fields)._menu;
    if (pUVar4 == (UI_MapEditorMenu_o *)0x0) goto label_0594cc84;
    UI_MapEditorMenu__HideInspector(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._menu;
  }
  else {
    pMVar3 = (__this->fields).Brush;
    if (pMVar3 == (MapEditor_MapEditorBrush_o *)0x0) goto label_0594cc84;
    if ((pMVar3->fields).Active != false) goto label_0594cbad;
    pUVar4 = (__this->fields)._menu;
    objs = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
    System_Collections_Generic_List_object____ctor_395ca70
              ((System_Collections_Generic_List_object__o *)objs,
               (System_Collections_Generic_IEnumerable_T__o *)pSVar1,
               (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor_7195590);
    if (pUVar4 == (UI_MapEditorMenu_o *)0x0) goto label_0594cc84;
    UI_MapEditorMenu__ShowInspector_5c96630(pUVar4,objs,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._menu;
  }
  if ((pUVar4 == (UI_MapEditorMenu_o *)0x0) ||
     (pUVar5 = (pUVar4->fields).HierarchyPanel, pUVar5 == (UI_MapEditorHierarchyPanel_o *)0x0)) {
label_0594cc84:
    ThrowNullReferenceException();
  }
  method_01 = (MethodInfo *)0x0;
  UI_MapEditorHierarchyPanel__SyncSelectedItems(pUVar5,(MethodInfo *)0x0);
  if (focusHierarchy) {
    pSVar1 = (__this->fields).SelectedObjects;
    if (pSVar1 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_0594cc84;
    if (0 < (pSVar1->fields)._count) {
      pUVar4 = (__this->fields)._menu;
      if ((pUVar4 == (UI_MapEditorMenu_o *)0x0) ||
         (pUVar5 = (pUVar4->fields).HierarchyPanel, pUVar5 == (UI_MapEditorHierarchyPanel_o *)0x0))
      goto label_0594cc84;
      method_01 = (MethodInfo *)0x0;
      UI_MapEditorHierarchyPanel__FocusSelectionFromScene(pUVar5,(MethodInfo *)0x0);
    }
  }
  GameManagers_MapEditorGameManager__SyncGizmos(__this,method_01);
  return;
}


// GameManagers.MapEditorGameManager$$SyncGizmos
// il2cpp: void GameManagers_MapEditorGameManager__SyncGizmos (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x5953710

void GameManagers_MapEditorGameManager__SyncGizmos
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  MapEditor_OutlineGizmo_o *pMVar1;
  MapEditor_PositionGizmo_o *pMVar2;
  MapEditor_RotationGizmo_o *pMVar3;
  MapEditor_ScaleGizmo_o *pMVar4;
  
  pMVar1 = (__this->fields)._outlineGizmo;
  if (pMVar1 != (MapEditor_OutlineGizmo_o *)0x0) {
    (*(pMVar1->klass->vtable)._7_OnSelectionChange.methodPtr)
              (pMVar1,(pMVar1->klass->vtable)._7_OnSelectionChange.method);
    pMVar2 = (__this->fields)._positionGizmo;
    if (pMVar2 != (MapEditor_PositionGizmo_o *)0x0) {
      (*(pMVar2->klass->vtable)._7_OnSelectionChange.methodPtr)
                (pMVar2,(pMVar2->klass->vtable)._7_OnSelectionChange.method);
      pMVar3 = (__this->fields)._rotationGizmo;
      if (pMVar3 != (MapEditor_RotationGizmo_o *)0x0) {
        (*(pMVar3->klass->vtable)._7_OnSelectionChange.methodPtr)
                  (pMVar3,(pMVar3->klass->vtable)._7_OnSelectionChange.method);
        pMVar4 = (__this->fields)._scaleGizmo;
        if (pMVar4 != (MapEditor_ScaleGizmo_o *)0x0) {
          (*(pMVar4->klass->vtable)._7_OnSelectionChange.methodPtr)
                    (pMVar4,(pMVar4->klass->vtable)._7_OnSelectionChange.method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$SetGizmo
// il2cpp: void GameManagers_MapEditorGameManager__SetGizmo (GameManagers_MapEditorGameManager_o* __this, System_String_o* gizmo, const MethodInfo* method);
// 0x5953790

void GameManagers_MapEditorGameManager__SetGizmo
               (GameManagers_MapEditorGameManager_o *__this,System_String_o *gizmo,MethodInfo *method)

{
  bool bVar1;
  MapEditor_PositionGizmo_o *method_00;
  
  if (Il2CppMethodInitialized_07545899 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    Il2CppMethodInitialized_07545899 = '\x01';
  }
  bVar1 = System_String__op_Equality(gizmo,"Position",(MethodInfo *)0x0);
  if (bVar1) {
    method_00 = (__this->fields)._positionGizmo;
  }
  else {
    bVar1 = System_String__op_Equality(gizmo,"Rotation",(MethodInfo *)0x0);
    if (bVar1) {
      method_00 = (MapEditor_PositionGizmo_o *)(__this->fields)._rotationGizmo;
    }
    else {
      method_00 = (MapEditor_PositionGizmo_o *)(__this->fields)._scaleGizmo;
    }
  }
  (__this->fields).CurrentGizmo = (MapEditor_BaseGizmo_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CurrentGizmo);
  GameManagers_MapEditorGameManager__SyncGizmos(__this,(MethodInfo *)method_00);
  return;
}


// GameManagers.MapEditorGameManager$$SetGizmoMode
// il2cpp: void GameManagers_MapEditorGameManager__SetGizmoMode (GameManagers_MapEditorGameManager_o* __this, int32_t mode, const MethodInfo* method);
// 0x5953830

void GameManagers_MapEditorGameManager__SetGizmoMode
               (GameManagers_MapEditorGameManager_o *__this,int32_t mode,MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  (__this->fields).CurrentGizmoMode = mode;
  GameManagers_MapEditorGameManager__SyncGizmos(__this,(MethodInfo *)CONCAT44(in_register_00000034,mode));
  return;
}


// GameManagers.MapEditorGameManager$$SetGridAxes
// il2cpp: void GameManagers_MapEditorGameManager__SetGridAxes (GameManagers_MapEditorGameManager_o* __this, System_Collections_Generic_HashSet_int__o* axes, const MethodInfo* method);
// 0x5953840

void GameManagers_MapEditorGameManager__SetGridAxes
               (GameManagers_MapEditorGameManager_o *__this,System_Collections_Generic_HashSet_int__o *axes,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  GameManagers_MapEditorSceneGrid_o *pGVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  GameManagers_MapEditorSceneGrid_o **targetAddress;
  
  if (Il2CppMethodInitialized_0754589a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MapEditorSceneGrid);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorSceneGrid");
    Il2CppMethodInitialized_0754589a = '\x01';
  }
  pGVar2 = (__this->fields)._sceneGrid;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._sceneGrid;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if (bVar1) {
    if (axes == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05953951;
    if ((axes->fields)._count == 0) {
      return;
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor(__this_00,"MapEditorSceneGrid",(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05953951;
    pGVar2 = UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_353B6A0 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_MapEditorSceneGrid);
    *targetAddress = pGVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
    method_00 = extraout_RDX_00;
  }
  if (*targetAddress != (GameManagers_MapEditorSceneGrid_o *)0x0) {
    GameManagers_MapEditorSceneGrid__SetAxes(*targetAddress,axes,method_00);
    return;
  }
label_05953951:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$GetNextObjectId
// il2cpp: int32_t GameManagers_MapEditorGameManager__GetNextObjectId (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x5953be0

int32_t GameManagers_MapEditorGameManager__GetNextObjectId
                  (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields)._currentObjectId + 1;
  (__this->fields)._currentObjectId = iVar1;
  return iVar1;
}


// GameManagers.MapEditorGameManager$$GetHighestObjectId
// il2cpp: int32_t GameManagers_MapEditorGameManager__GetHighestObjectId (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x5951e40
// eh: try 0x5951f23..0x5951f2b -> pad 0x5951f5d catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5951f75..0x5951f7a -> pad 0x5951f99 cleanup
// eh: try 0x5951f9c..0x5951fa6 -> pad 0x5951fae catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5951f1e: nop 
// asm:   0x5951f38: jmp 0x5951f20
// asm:   0x5951f5d: mov r14, rax
// asm:   0x5951f60: cmp edx, 1
// asm:   0x5951f63: jne 0x5951f9c
// asm:   0x5951f65: mov rdi, r14
// asm:   0x5951f68: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5951f6d: mov r14, qword ptr [rax]
// asm:   0x5951f70: mov qword ptr [rsp + 0x20], r14
// asm:   0x5951f75: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5951f7a: lea rax, [rip + 0x193d99f]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
// asm:   0x5951f81: mov rsi, qword ptr [rax]
// asm:   0x5951f84: mov rdi, rsp
// asm:   0x5951f87: call 0x4da27d0  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose()
// asm:   0x5951f8c: test r14, r14
// asm:   0x5951f8f: je 0x5951f4c
// asm:   0x5951f91: mov rdi, r14
// asm:   0x5951f94: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5951f99: mov r14, rax
// asm:   0x5951f9c: lea rdi, [rsp + 0x20]
// asm:   0x5951fa1: call 0x2fd3820  ; il2cpp_runtime_helper_02fd3820()
// asm:   0x5951fa6: mov rdi, r14
// asm:   0x5951fa9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5951fae: mov rdi, rax
// asm:   0x5951fb1: call 0x2ab61e0  ; __clang_call_terminate()

int32_t GameManagers_MapEditorGameManager__GetHighestObjectId
                  (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  bool bVar1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  int iVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  undefined8 local_28;
  undefined1 *local_20;
  
  if (Il2CppMethodInitialized_0754589b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_0754589b = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentKey = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    __this_01 = System_Collections_Generic_Dictionary_int__object___get_Keys
                          (__this_00,
                           (MethodInfo_4A0F330 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys);
    local_20 = (undefined1 *)&local_48;
    if (__this_01 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator
                (&local_48,__this_01,
                 (MethodInfo_510AAB0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_MapObject_GetEnumerator);
      local_28 = 0;
      iVar2 = 0;
      while (bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext
                               (&local_48,
                                (MethodInfo_4CA27E0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_MoveNext
                               ), bVar1) {
        if (iVar2 <= (int)local_48.fields._currentKey) {
          iVar2 = (int)local_48.fields._currentKey;
        }
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
                (&local_48,
                 (MethodInfo_4CA27D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
                );
      return iVar2;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$get_LightsOn
// il2cpp: bool GameManagers_MapEditorGameManager__get_LightsOn (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x5953bf0

bool GameManagers_MapEditorGameManager__get_LightsOn
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  return (__this->fields)._lightsOn;
}


// GameManagers.MapEditorGameManager$$TryGetSetting<object>
// il2cpp: Il2CppObject* GameManagers_MapEditorGameManager__TryGetSetting_object_ (GameManagers_MapEditorGameManager_o* __this, System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, System_String_o* key, Il2CppObject* Default, const MethodInfo_3583FA0* method);
// 0x3683fa0

Il2CppObject *
GameManagers_MapEditorGameManager__TryGetSetting_object_
          (GameManagers_MapEditorGameManager_o *__this,
          System_Collections_Generic_Dictionary_string__BaseSetting__o *settings,System_String_o *key,
          Il2CppObject *Default,MethodInfo_3583FA0 *method)

{
  bool bVar1;
  Settings_BaseSetting_o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  
  if (method->rgctx_data == (MethodInfo_3583FA0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    if (method->rgctx_data == (MethodInfo_3583FA0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  if (settings == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)settings,(Il2CppObject *)key,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ContainsKey);
  if (bVar1) {
    pSVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                        (Il2CppObject *)key,
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    pIVar3 = method->rgctx_data->_0_T;
    if (((pIVar3->_2).bitflags1 & 1) == 0) {
      pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
    }
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,pIVar3);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pSVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                          (Il2CppObject *)key,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
      pIVar3 = method->rgctx_data->_0_T;
      if (((pIVar3->_2).bitflags1 & 1) == 0) {
        pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
      }
      if (pSVar2 == (Settings_BaseSetting_o *)0x0) {
        Default = (Il2CppObject *)0x0;
      }
      else {
        Default = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,pIVar3);
        if (Default == (Il2CppObject *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar2,pIVar3);
        }
      }
    }
  }
  return Default;
}


// GameManagers.MapEditorGameManager$$ToggleLights
// il2cpp: void GameManagers_MapEditorGameManager__ToggleLights (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x5953c00
// eh: try 0x5953e23..0x59544f3 -> pad 0x595457d (+50 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5954503..0x595450d -> pad 0x59545d4 catch (...) [compiler noexcept guard]
// eh: try 0x5954544..0x5954549 -> pad 0x5954566 cleanup
// eh: try 0x5954569..0x5954573 -> pad 0x59545d4 catch (...) [compiler noexcept guard]
// eh: try 0x5954597..0x595459c -> pad 0x59545bf cleanup
// eh: try 0x59545c2..0x59545cc -> pad 0x59545d4 catch (...) [compiler noexcept guard]
// asm: 118 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5953fa9: nop dword ptr [rax]
// asm:   0x59540f8: nop dword ptr [rax + rax]
// asm:   0x5954323: mov r14d, 6
// asm:   0x5954329: xor ebx, ebx
// asm:   0x595432b: mov r13, rsp
// asm:   0x5954355: test r14d, r14d
// asm:   0x5954358: je 0x5953fb0
// asm:   0x595435e: jmp 0x5954498
// asm:   0x5954363: mov rdi, qword ptr [r12 + 0x18]
// asm:   0x5954368: test rdi, rdi
// asm:   0x595436b: je 0x59543f7
// asm:   0x5954433: jmp 0x5954469
// asm:   0x5954435: jmp 0x5954469
// asm:   0x5954437: jmp 0x5954469
// asm:   0x5954439: jmp 0x5954469
// asm:   0x595443b: jmp 0x5954469
// asm:   0x595443d: jmp 0x5954469
// asm:   0x595443f: jmp 0x5954469
// asm:   0x5954441: jmp 0x5954469
// asm:   0x5954443: jmp 0x5954469
// asm:   0x5954445: jmp 0x5954469
// asm:   0x5954447: jmp 0x5954469
// asm:   0x5954449: jmp 0x5954469
// asm:   0x595444b: jmp 0x5954469
// asm:   0x595444d: jmp 0x5954469
// asm:   0x595444f: jmp 0x5954469
// asm:   0x5954451: jmp 0x5954469
// asm:   0x5954453: jmp 0x5954469
// asm:   0x5954455: jmp 0x5954469
// asm:   0x5954457: jmp 0x5954469
// asm:   0x5954459: jmp 0x5954469
// asm:   0x595445b: jmp 0x5954469
// asm:   0x595445d: jmp 0x5954469
// asm:   0x595445f: jmp 0x5954469
// asm:   0x5954461: jmp 0x5954469
// asm:   0x5954463: jmp 0x5954469
// asm:   0x5954465: jmp 0x5954469
// asm:   0x5954467: jmp 0x5954469
// asm:   0x5954469: mov rbx, rdx
// asm:   0x595446c: mov rbp, rax
// asm:   0x595446f: cmp ebx, 1
// asm:   0x5954472: jne 0x5954503
// asm:   0x5954478: mov rdi, rbp
// asm:   0x595447b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5954480: mov rbx, qword ptr [rax]
// asm:   0x5954483: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5954488: xor r14d, r14d
// asm:   0x595448b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5954490: mov r13, rsp
// asm:   0x5954493: jmp 0x595432e
// asm:   0x59544eb: mov rdi, rbx
// asm:   0x59544ee: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59544fd: mov rbx, rdx
// asm:   0x5954500: mov rbp, rax
// asm:   0x5954503: lea rdi, [rsp + 0x18]
// asm:   0x5954508: call 0x2fd3880  ; il2cpp_runtime_helper_02fd3880()
// asm:   0x595450d: jmp 0x595452f
// asm:   0x595450f: jmp 0x5954529
// asm:   0x5954511: jmp 0x5954529
// asm:   0x5954513: jmp 0x5954529
// asm:   0x5954515: jmp 0x5954529
// asm:   0x5954517: jmp 0x5954529
// asm:   0x5954519: jmp 0x5954529
// asm:   0x595451b: jmp 0x595457f
// asm:   0x595451d: jmp 0x595457f
// asm:   0x595451f: jmp 0x5954529
// asm:   0x5954521: jmp 0x5954529
// asm:   0x5954523: jmp 0x5954529
// asm:   0x5954525: jmp 0x5954529
// asm:   0x5954527: jmp 0x5954529
// asm:   0x5954529: mov rbx, rdx
// asm:   0x595452c: mov rbp, rax
// asm:   0x595452f: cmp ebx, 1
// asm:   0x5954532: jne 0x5954569
// asm:   0x5954534: mov rdi, rbp
// asm:   0x5954537: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x595453c: mov rbx, qword ptr [rax]
// asm:   0x595453f: mov qword ptr [rsp + 0x68], rbx
// asm:   0x5954544: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5954549: lea rax, [rip + 0x193b3e8]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x5954550: mov rsi, qword ptr [rax]
// asm:   0x5954553: mov rdi, rsp
// asm:   0x5954556: call 0x4da2970  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose()
// asm:   0x595455b: test rbx, rbx
// asm:   0x595455e: je 0x59544aa
// asm:   0x5954564: jmp 0x59545b7
// asm:   0x5954566: mov rbp, rax
// asm:   0x5954569: lea rdi, [rsp + 0x68]
// asm:   0x595456e: call 0x2fd38b0  ; il2cpp_runtime_helper_02fd38b0()
// asm:   0x5954573: jmp 0x59545cc
// asm:   0x5954575: jmp 0x595457f
// asm:   0x5954577: jmp 0x595457f
// asm:   0x5954579: jmp 0x595457f
// asm:   0x595457b: jmp 0x595457f
// asm:   0x595457d: jmp 0x595457f
// asm:   0x595457f: mov rbp, rax
// asm:   0x5954582: cmp edx, 1
// asm:   0x5954585: jne 0x59545c2
// asm:   0x5954587: mov rdi, rbp
// asm:   0x595458a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x595458f: mov rbx, qword ptr [rax]
// asm:   0x5954592: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5954597: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x595459c: lea rax, [rip + 0x193b395]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x59545a3: mov rsi, qword ptr [rax]
// asm:   0x59545a6: mov rdi, rsp
// asm:   0x59545a9: call 0x4da2970  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose()
// asm:   0x59545ae: test rbx, rbx
// asm:   0x59545b1: je 0x5953eba
// asm:   0x59545b7: mov rdi, rbx
// asm:   0x59545ba: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59545bf: mov rbp, rax
// asm:   0x59545c2: lea rdi, [rsp + 0x18]
// asm:   0x59545c7: call 0x2fd3850  ; il2cpp_runtime_helper_02fd3850()
// asm:   0x59545cc: mov rdi, rbp
// asm:   0x59545cf: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59545d4: mov rdi, rax
// asm:   0x59545d7: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_MapEditorGameManager__ToggleLights
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  Il2CppClass *pIVar3;
  void *pvVar4;
  System_Collections_Generic_List_object__o *__this_00;
  Utility_Color255_o *pUVar5;
  Il2CppObject *pIVar6;
  GameManagers_MapEditorGameManager_o *pGVar7;
  Il2CppObject *pIVar8;
  bool bVar9;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar10;
  UnityEngine_Light_o *pUVar11;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *settings;
  Settings_ColorSetting_o *pSVar12;
  Settings_FloatSetting_o *pSVar13;
  UnityEngine_Color_o UVar14;
  undefined1 local_a8 [8];
  undefined8 uStack_a0;
  Il2CppObject *local_98;
  undefined1 local_90 [16];
  Il2CppObject *local_80;
  GameManagers_BaseGameManager_o *local_78;
  GameManagers_MapEditorGameManager_o *local_70;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Il2CppObject *local_58;
  Settings_FloatSetting_o *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_0754589c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Light);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Light);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_TryGetSetting_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_TryGetSetting_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"Daylight");
    il2cpp_codegen_initialize_runtime_metadata(&"Intensity");
    il2cpp_codegen_initialize_runtime_metadata(&"PointLight");
    il2cpp_codegen_initialize_runtime_metadata(&"Range");
    Il2CppMethodInitialized_0754589c = '\x01';
  }
  local_a8 = (undefined1  [8])0x0;
  uStack_a0._0_4_ = 0;
  uStack_a0._4_4_ = 0;
  local_98 = (Il2CppObject *)0x0;
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Il2CppObject *)0x0;
  local_70 = __this;
  if ((__this->fields)._lightsOn == false) {
    (__this->fields)._lightsOn = true;
    local_78 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (local_78 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
      if (((local_78->klass->_2).typeHierarchyDepth < bVar1) ||
         ((local_78->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(local_78);
      }
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
       (pSVar10 = System_Collections_Generic_Dictionary_int__object___get_Values
                            (pSVar2,(MethodInfo_4A0F4E0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values)
       , pSVar10 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_90,
                 pSVar10,(MethodInfo_43E8AC0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator
                );
      local_38 = local_a8;
      local_98 = local_80;
      local_a8 = (undefined1  [8])local_90._0_8_;
      uStack_a0 = (undefined1 *)local_90._8_8_;
      local_40 = 0;
      do {
        do {
          do {
            while( true ) {
              bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                  *)local_a8,
                                 (MethodInfo_4CA2980 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                                );
              pIVar6 = local_98;
              if (!bVar9) {
                System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )local_a8,
                           (MethodInfo_4CA2970 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
                          );
                return;
              }
              if (local_98 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              if (local_98[1].monitor == (UnityEngine_GameObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                  (local_98[1].monitor,
                                   (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Light)
              ;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar9 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                );
              if (!bVar9) break;
              if (pIVar6[1].monitor == (UnityEngine_GameObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                  (pIVar6[1].monitor,
                                   (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Light)
              ;
              if (pUVar11 == (UnityEngine_Light_o *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar11,true,(MethodInfo *)0x0);
            }
            pIVar3 = pIVar6[2].klass;
          } while (pIVar3 == (Il2CppClass *)0x0);
          pvVar4 = (pIVar3->_1).image;
          bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
        } while ((*(byte *)((long)pvVar4 + 0x130) < bVar1) ||
                (*(Map_MapScriptSceneObject_c **)(*(long *)((long)pvVar4 + 200) + -8 + (ulong)bVar1 * 8) !=
                 TypeInfo_Map_MapScriptSceneObject));
        __this_00 = (pIVar3->_1).fields;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_90,__this_00,
                   (MethodInfo_395E050 *)
                   MethodInfo_System_Collections_Generic_List_MapScriptComponent_GetEnumerator);
        local_58 = local_80;
        local_68 = (undefined1  [8])local_90._0_8_;
        puStack_60 = (undefined1 *)local_90._8_8_;
        local_90._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_90._8_8_ = local_68;
        if (local_78 == (GameManagers_BaseGameManager_o *)0x0) {
          bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_MoveNext
                            );
          if (bVar9) {
            ThrowNullReferenceException();
          }
        }
        else {
          do {
            do {
              while( true ) {
                bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                                   (MethodInfo_4C45C50 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_MoveNext
                                  );
                pIVar8 = local_58;
                if (!bVar9) goto label_0595432e;
                if (local_58 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                if ((*(uint64_t *)((char *)local_78 + 0x30)) == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                  ThrowNullReferenceException();
                }
                settings = CustomLogic_CustomLogicEvaluator__GetComponentSettings
                                     ((*(uint64_t *)((char *)local_78 + 0x30)),(System_String_o *)local_58[1].klass,
                                      local_58[1].monitor,(MethodInfo *)0x0);
                bVar9 = System_String__op_Equality
                                  ((System_String_o *)pIVar8[1].klass,"Daylight",(MethodInfo *)0x0)
                ;
                pGVar7 = local_70;
                if (!bVar9) break;
                pSVar12 = GameManagers_MapEditorGameManager__TryGetSetting_object_
                                    (local_70,settings,"Color",(Il2CppObject *)0x0,
                                     (MethodInfo_3583FA0 *)
                                     MethodInfo_GameManagers_MapEditorGameManager_TryGetSetting_ColorSetting);
                pSVar13 = GameManagers_MapEditorGameManager__TryGetSetting_object_
                                    (pGVar7,settings,"Intensity",(Il2CppObject *)0x0,
                                     (MethodInfo_3583FA0 *)
                                     MethodInfo_GameManagers_MapEditorGameManager_TryGetSetting_FloatSetting);
                if ((pSVar12 != (Settings_ColorSetting_o *)0x0) && (pSVar13 != (Settings_FloatSetting_o *)0x0)
                   ) {
                  if (pIVar6[1].monitor == (UnityEngine_GameObject_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar11 = UnityEngine_GameObject__AddComponent_object_
                                      (pIVar6[1].monitor,
                                       (MethodInfo_353B6A0 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_Light);
                  if (pUVar11 == (UnityEngine_Light_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  UnityEngine_Light__set_type(pUVar11,1,(MethodInfo *)0x0);
                  pUVar5 = (pSVar12->fields)._value;
                  if (pUVar5 == (Utility_Color255_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  UVar14 = Utility_Color255__ToColor(pUVar5,(MethodInfo *)0x0);
                  UnityEngine_Light__set_color(pUVar11,UVar14,(MethodInfo *)0x0);
                  UnityEngine_Light__set_intensity(pUVar11,(pSVar13->fields)._value,(MethodInfo *)0x0);
                  UnityEngine_Light__set_shadows(pUVar11,1,(MethodInfo *)0x0);
                  goto label_0595432e;
                }
              }
              bVar9 = System_String__op_Equality
                                ((System_String_o *)pIVar8[1].klass,"PointLight",(MethodInfo *)0x0);
              pGVar7 = local_70;
            } while (!bVar9);
            pSVar12 = GameManagers_MapEditorGameManager__TryGetSetting_object_
                                (local_70,settings,"Color",(Il2CppObject *)0x0,
                                 (MethodInfo_3583FA0 *)
                                 MethodInfo_GameManagers_MapEditorGameManager_TryGetSetting_ColorSetting);
            local_48 = GameManagers_MapEditorGameManager__TryGetSetting_object_
                                 (pGVar7,settings,"Intensity",(Il2CppObject *)0x0,
                                  (MethodInfo_3583FA0 *)
                                  MethodInfo_GameManagers_MapEditorGameManager_TryGetSetting_FloatSetting);
            pSVar13 = GameManagers_MapEditorGameManager__TryGetSetting_object_
                                (pGVar7,settings,"Range",(Il2CppObject *)0x0,
                                 (MethodInfo_3583FA0 *)
                                 MethodInfo_GameManagers_MapEditorGameManager_TryGetSetting_FloatSetting);
          } while (((pSVar12 == (Settings_ColorSetting_o *)0x0) ||
                   (local_48 == (Settings_FloatSetting_o *)0x0)) ||
                  (pSVar13 == (Settings_FloatSetting_o *)0x0));
          if (pIVar6[1].monitor == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar11 = UnityEngine_GameObject__AddComponent_object_
                              (pIVar6[1].monitor,
                               (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Light);
          if (pUVar11 == (UnityEngine_Light_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Light__set_type(pUVar11,2,(MethodInfo *)0x0);
          pUVar5 = (pSVar12->fields)._value;
          if (pUVar5 == (Utility_Color255_o *)0x0) {
            ThrowNullReferenceException();
          }
          UVar14 = Utility_Color255__ToColor(pUVar5,(MethodInfo *)0x0);
          UnityEngine_Light__set_color(pUVar11,UVar14,(MethodInfo *)0x0);
          UnityEngine_Light__set_intensity(pUVar11,(local_48->fields)._value,(MethodInfo *)0x0);
          UnityEngine_Light__set_range(pUVar11,(pSVar13->fields)._value,(MethodInfo *)0x0);
        }
label_0595432e:
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose);
      } while( true );
    }
  }
  else {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
       (pSVar10 = System_Collections_Generic_Dictionary_int__object___get_Values
                            (pSVar2,(MethodInfo_4A0F4E0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values)
       , pSVar10 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_90,
                 pSVar10,(MethodInfo_43E8AC0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator
                );
      local_98 = local_80;
      local_a8 = (undefined1  [8])local_90._0_8_;
      uStack_a0 = (undefined1 *)local_90._8_8_;
      local_90._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_90._8_8_ = local_a8;
      while( true ) {
        do {
          bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)local_a8,
                             (MethodInfo_4CA2980 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                            );
          pIVar6 = local_98;
          if (!bVar9) {
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_a8,(MethodInfo_4CA2970 *)
                                MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
                      );
            (local_70->fields)._lightsOn = false;
            return;
          }
          if (local_98 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (local_98[1].monitor == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar11 = UnityEngine_GameObject__GetComponent_object_
                              (local_98[1].monitor,
                               (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Light);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar9 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        } while (!bVar9);
        if (pIVar6[1].monitor == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar11 = UnityEngine_GameObject__GetComponent_object_
                            (pIVar6[1].monitor,
                             (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Light);
        if (pUVar11 == (UnityEngine_Light_o *)0x0) break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar11,false,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$SetLayerVisibility
// il2cpp: void GameManagers_MapEditorGameManager__SetLayerVisibility (GameManagers_MapEditorGameManager_o* __this, Settings_HashSetSetting_int__o* selectedLayers, const MethodInfo* method);
// 0x59545e0
// eh: try 0x5954794..0x5954b18 -> pad 0x5954b3c (+19 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5954b1e..0x5954b28 -> pad 0x5954b96 catch (...) [compiler noexcept guard]
// eh: try 0x5954b59..0x5954b5e -> pad 0x5954b81 cleanup
// eh: try 0x5954b84..0x5954b8e -> pad 0x5954b96 catch (...) [compiler noexcept guard]
// asm: 64 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x595478c: nop dword ptr [rax]
// asm:   0x5954a3c: jmp 0x5954a4a
// asm:   0x5954a3e: jmp 0x5954a4a
// asm:   0x5954a40: jmp 0x5954a4a
// asm:   0x5954a42: jmp 0x5954a4a
// asm:   0x5954a44: jmp 0x5954a4a
// asm:   0x5954a46: jmp 0x5954a4a
// asm:   0x5954a48: jmp 0x5954a4a
// asm:   0x5954a4a: mov rbp, rdx
// asm:   0x5954a4d: mov rbx, rax
// asm:   0x5954a50: cmp ebp, 1
// asm:   0x5954a53: jne 0x5954b1e
// asm:   0x5954a59: mov rdi, rbx
// asm:   0x5954a5c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5954a61: mov rbp, qword ptr [rax]
// asm:   0x5954a64: mov qword ptr [rsp + 0x20], rbp
// asm:   0x5954a69: xor r13d, r13d
// asm:   0x5954a6c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5954a71: xor ebx, ebx
// asm:   0x5954a73: jmp 0x59549db
// asm:   0x5954a78: mov rbx, rsp
// asm:   0x5954a7b: lea r14, [rip + 0x1925f9e]  ; TypeInfo_Map_MapScriptSceneObject
// asm:   0x5954a82: nop word ptr cs:[rax + rax]
// asm:   0x5954b0b: mov rdi, rbp
// asm:   0x5954b0e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5954b18: mov rbp, rdx
// asm:   0x5954b1b: mov rbx, rax
// asm:   0x5954b1e: lea rdi, [rsp + 0x20]
// asm:   0x5954b23: call 0x2fd38e0  ; il2cpp_runtime_helper_02fd38e0()
// asm:   0x5954b28: jmp 0x5954b44
// asm:   0x5954b2a: jmp 0x5954b3e
// asm:   0x5954b2c: jmp 0x5954b3e
// asm:   0x5954b2e: jmp 0x5954b3e
// asm:   0x5954b30: jmp 0x5954b3e
// asm:   0x5954b32: jmp 0x5954b3e
// asm:   0x5954b34: jmp 0x5954b3e
// asm:   0x5954b36: jmp 0x5954b3e
// asm:   0x5954b38: jmp 0x5954b3e
// asm:   0x5954b3a: jmp 0x5954b3e
// asm:   0x5954b3c: jmp 0x5954b3e
// asm:   0x5954b3e: mov rbp, rdx
// asm:   0x5954b41: mov rbx, rax
// asm:   0x5954b44: cmp ebp, 1
// asm:   0x5954b47: jne 0x5954b84
// asm:   0x5954b49: mov rdi, rbx
// asm:   0x5954b4c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5954b51: mov rbx, qword ptr [rax]
// asm:   0x5954b54: mov qword ptr [rsp + 0x58], rbx
// asm:   0x5954b59: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5954b5e: lea rax, [rip + 0x193add3]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x5954b65: mov rsi, qword ptr [rax]
// asm:   0x5954b68: mov rdi, rsp
// asm:   0x5954b6b: call 0x4da2970  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose()
// asm:   0x5954b70: test rbx, rbx
// asm:   0x5954b73: je 0x5954aed
// asm:   0x5954b79: mov rdi, rbx
// asm:   0x5954b7c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5954b81: mov rbx, rax
// asm:   0x5954b84: lea rdi, [rsp + 0x58]
// asm:   0x5954b89: call 0x2fd3910  ; il2cpp_runtime_helper_02fd3910()
// asm:   0x5954b8e: mov rdi, rbx
// asm:   0x5954b91: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5954b96: mov rdi, rax
// asm:   0x5954b99: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_MapEditorGameManager__SetLayerVisibility
               (GameManagers_MapEditorGameManager_o *__this,Settings_HashSetSetting_int__o *selectedLayers,
               MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Il2CppClass *pIVar2;
  void *pvVar3;
  System_Collections_Generic_HashSet_int__o *__this_01;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  undefined1 *puVar6;
  bool bVar7;
  char cVar8;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  bool value;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  Il2CppObject *local_88;
  undefined1 local_78 [16];
  Il2CppObject *local_68;
  Settings_HashSetSetting_int__o *local_60;
  undefined1 local_58 [8];
  undefined1 *puStack_50;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_0754589d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_HashSetSetting_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapAssets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"Physical");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Region");
    Il2CppMethodInitialized_0754589d = '\x01';
  }
  local_98 = (undefined1  [8])0x0;
  uStack_90._0_4_ = 0;
  uStack_90._4_4_ = 0;
  local_88 = (Il2CppObject *)0x0;
  local_58 = (undefined1  [8])0x0;
  puStack_50 = (undefined1 *)0x0;
  local_48 = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if ((__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
     (__this_02 = System_Collections_Generic_Dictionary_int__object___get_Values
                            (__this_00,
                             (MethodInfo_4A0F4E0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values),
     __this_02 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_78,
             __this_02,
             (MethodInfo_43E8AC0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
  local_38 = local_98;
  local_88 = local_68;
  local_98 = (undefined1  [8])local_78._0_8_;
  uStack_90 = (undefined1 *)local_78._8_8_;
  local_40 = 0;
  puVar6 = local_98;
  if (selectedLayers == (Settings_HashSetSetting_int__o *)0x0) {
    while (local_38 = puVar6,
          bVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)local_98,
                             (MethodInfo_4CA2980 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                            ), bVar7) {
      if (local_88 == (Il2CppObject *)0x0) goto label_05954afc;
      puVar6 = local_38;
      if (local_88[2].klass != (Il2CppClass *)0x0) {
        pvVar3 = ((local_88[2].klass)->_1).image;
        bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
        if ((bVar1 <= *(byte *)((long)pvVar3 + 0x130)) &&
           (*(Map_MapScriptSceneObject_c **)(*(long *)((long)pvVar3 + 200) + -8 + (ulong)bVar1 * 8) ==
            TypeInfo_Map_MapScriptSceneObject)) {
          ThrowNullReferenceException();
        }
      }
    }
  }
  else {
    local_60 = selectedLayers;
    while (bVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                             ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                               *)local_98,
                              (MethodInfo_4CA2980 *)
                              MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                             ), pIVar5 = local_88, bVar7) {
      if (local_88 == (Il2CppObject *)0x0) {
label_05954afc:
        ThrowNullReferenceException();
      }
      pIVar2 = local_88[2].klass;
      if (pIVar2 != (Il2CppClass *)0x0) {
        pvVar3 = (pIVar2->_1).image;
        bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
        if ((bVar1 <= *(byte *)((long)pvVar3 + 0x130)) &&
           (*(Map_MapScriptSceneObject_c **)(*(long *)((long)pvVar3 + 200) + -8 + (ulong)bVar1 * 8) ==
            TypeInfo_Map_MapScriptSceneObject)) {
          bVar7 = Settings_HashSetSetting_int___Contains
                            (selectedLayers,0,
                             (MethodInfo_4F647F0 *)MethodInfo_Settings_HashSetSetting_int_Contains);
          value = true;
          if (!bVar7) {
            __this_01 = (System_Collections_Generic_HashSet_int__o *)(selectedLayers->fields)._value;
            if (__this_01 == (System_Collections_Generic_HashSet_int__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_HashSet_int___GetEnumerator
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,__this_01,
                       (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
            local_48 = local_68;
            local_58 = (undefined1  [8])local_78._0_8_;
            puStack_50 = (undefined1 *)local_78._8_8_;
            local_78._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            local_78._8_8_ = local_58;
switchD_059548a0_default:
            do {
              bVar7 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_58,
                                 (MethodInfo_4C3AEE0 *)
                                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
              if (!bVar7) {
                value = false;
                goto label_059549db;
              }
              switch(local_48._0_4_) {
              case 1:
                cVar8 = (char)(pIVar2->_1).byval_arg.bits;
                goto joined_r0x05954939;
              case 2:
                cVar8 = (char)(pIVar2->_1).byval_arg.bits;
                goto joined_r0x059549ae;
              case 3:
                cVar8 = *(char *)((long)&(pIVar2->_1).byval_arg.bits + 2);
                goto joined_r0x05954939;
              case 4:
                cVar8 = *(char *)((long)&(pIVar2->_1).byval_arg.bits + 2);
                goto joined_r0x059549ae;
              case 5:
                cVar8 = *(char *)((long)&(pIVar2->_1).byval_arg.bits + 1);
joined_r0x05954939:
                if (cVar8 != '\0') goto label_059549d7;
                goto switchD_059548a0_default;
              case 6:
                cVar8 = *(char *)((long)&(pIVar2->_1).byval_arg.bits + 1);
                goto joined_r0x059549ae;
              case 7:
                cVar8 = System_String__op_Equality
                                  ((pIVar2->_1).generic_class,"Physical",(MethodInfo *)0x0);
                break;
              case 8:
                cVar8 = System_String__op_Equality
                                  ((pIVar2->_1).generic_class,"Region",(MethodInfo *)0x0);
                break;
              case 9:
                cVar8 = System_String__op_Equality
                                  ((pIVar2->_1).generic_class,"None",(MethodInfo *)0x0);
                break;
              case 10:
                cVar8 = *(char *)((long)&(pIVar2->_1).byval_arg.bits + 3);
                break;
              case 0xb:
                cVar8 = *(char *)((long)&(pIVar2->_1).byval_arg.bits + 3);
joined_r0x059549ae:
                if (cVar8 == '\0') goto label_059549d7;
                goto switchD_059548a0_default;
              case 0xc:
                pSVar4 = (System_String_o *)(pIVar2->_1).namespaze;
                if ((TypeInfo_Map_MapAssets->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapAssets);
                }
                bVar7 = System_String__op_Equality
                                  (pSVar4,TypeInfo_Map_MapAssets->static_fields->NavMeshObstacle,
                                   (MethodInfo *)0x0);
                if (bVar7) goto label_059549d7;
                pSVar4 = (System_String_o *)(pIVar2->_1).namespaze;
                if ((TypeInfo_Map_MapAssets->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapAssets);
                }
                cVar8 = System_String__op_Equality
                                  (pSVar4,TypeInfo_Map_MapAssets->static_fields->NavMeshRegion,
                                   (MethodInfo *)0x0);
                break;
              default:
                goto switchD_059548a0_default;
              }
            } while (cVar8 == '\0');
label_059549d7:
            value = true;
label_059549db:
            System_Collections_Generic_HashSet_Enumerator_int___Dispose
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_58,
                       (MethodInfo_4C3AED0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
            selectedLayers = local_60;
          }
          if (pIVar5[1].monitor == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_GameObject__SetActive(pIVar5[1].monitor,value,(MethodInfo *)0x0);
        }
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_98,
             (MethodInfo_4CA2970 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
            );
  return;
}


// GameManagers.MapEditorGameManager$$.ctor
// il2cpp: void GameManagers_MapEditorGameManager___ctor (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x5954ba0

void GameManagers_MapEditorGameManager___ctor(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_MapObject__o *__this_00;
  System_Collections_Generic_List_object__o *pSVar1;
  MapEditor_MapEditorBrush_o *__this_01;
  MapEditor_MapEditorRuler_o *__this_02;
  
  if (Il2CppMethodInitialized_0754589e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_MapObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCommand_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BaseCommand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_MapEditorBrush);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_MapEditorRuler);
    Il2CppMethodInitialized_0754589e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_MapObject);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_ctor);
  (__this->fields).SelectedObjects = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SelectedObjects);
  (__this->fields).HierarchyTreeViewEnabled = true;
  (__this->fields).LastSelectedObjectId = -1;
  pSVar1 = (System_Collections_Generic_List_object__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseCommand);
  System_Collections_Generic_List_object____ctor
            (pSVar1,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_BaseCommand_ctor);
  (__this->fields)._undoCommands = (System_Collections_Generic_List_BaseCommand__o *)pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._undoCommands);
  pSVar1 = (System_Collections_Generic_List_object__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseCommand);
  System_Collections_Generic_List_object____ctor
            (pSVar1,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_BaseCommand_ctor);
  (__this->fields)._redoCommands = (System_Collections_Generic_List_BaseCommand__o *)pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._redoCommands);
  (__this->fields)._clipboard = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._clipboard);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_MapEditorBrush);
  MapEditor_MapEditorBrush___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields).Brush = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Brush);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_MapEditorRuler);
  MapEditor_MapEditorRuler___ctor(__this_02,(MethodInfo *)0x0);
  (__this->fields).Ruler = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Ruler);
  GameManagers_BaseGameManager___ctor((GameManagers_BaseGameManager_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager$$<OnFinishLoading>b__55_0
// il2cpp: void GameManagers_MapEditorGameManager___OnFinishLoading_b__55_0 (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x5954d40

void GameManagers_MapEditorGameManager___OnFinishLoading_b__55_0
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Map_MapScript_o *pMVar3;
  Map_MapVersionConversionResult_o *pMVar4;
  System_String_o *name;
  System_String_o *map;
  System_String_o *version;
  
  if (Il2CppMethodInitialized_0754589f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_0754589f = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((((pSVar1 != (Settings_MapEditorSettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).CurrentMap, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
      (pMVar3 = (__this->fields).MapScript, pMVar3 != (Map_MapScript_o *)0x0)) &&
     (pMVar4 = (pMVar3->fields)._LastUpgradeResult_k__BackingField,
     pMVar4 != (Map_MapVersionConversionResult_o *)0x0)) {
    name = (pSVar2->fields)._value;
    map = (pMVar3->fields)._OriginalCSV_k__BackingField;
    version = (pMVar4->fields)._OriginalVersion_k__BackingField;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    Map_BuiltinLevels__BackupCustomMap(name,map,version,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
    if ((pSVar1 != (Settings_MapEditorSettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).CurrentMap, pSVar2 != (Settings_StringSetting_o *)0x0)) {
      Map_BuiltinLevels__SaveCustomMap((pSVar2->fields)._value,(__this->fields).MapScript,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


