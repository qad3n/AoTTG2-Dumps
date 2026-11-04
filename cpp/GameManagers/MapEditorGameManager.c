// Type: GameManagers.MapEditorGameManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameManagers/MapEditorGameManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/MapEditorGameManager.cs
// --------------------------------

// GameManagers.MapEditorGameManager.<>c$$.cctor
// il2cpp: void GameManagers_MapEditorGameManager___c___cctor (const MethodInfo* method);
// 0x181e7bc80

void GameManagers_MapEditorGameManager___c___cctor(MethodInfo *method)

{
  GameManagers_MapEditorGameManager___c_o *__this;
  
  if (Il2CppMethodInitialized_184344f02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager_c);
    Il2CppMethodInitialized_184344f02 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9,__this);
  return;
}


// GameManagers.MapEditorGameManager.<>c$$.ctor
// il2cpp: void GameManagers_MapEditorGameManager___c___ctor (GameManagers_MapEditorGameManager___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameManagers_MapEditorGameManager___c___ctor(GameManagers_MapEditorGameManager___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager.<>c$$<Copy>b__29_0
// il2cpp: int32_t GameManagers_MapEditorGameManager___c___Copy_b__29_0 (GameManagers_MapEditorGameManager___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x181e7b690

int32_t
GameManagers_MapEditorGameManager___c___Copy_b__29_0(GameManagers_MapEditorGameManager___c_o* __this, Map_MapObject_o* o, MethodInfo* method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (o->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar1->fields).Id;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager.<>c$$<Copy>b__29_1
// il2cpp: bool GameManagers_MapEditorGameManager___c___Copy_b__29_1 (GameManagers_MapEditorGameManager___c_o* __this, int32_t id, const MethodInfo* method);
// 0x181e7b6b0

bool GameManagers_MapEditorGameManager___c___Copy_b__29_1
               (GameManagers_MapEditorGameManager___c_o *__this,int32_t id,MethodInfo *method)

{
  return 0 < id;
}


// GameManagers.MapEditorGameManager.<>c$$<Paste>b__32_1
// il2cpp: int32_t GameManagers_MapEditorGameManager___c___Paste_b__32_1 (GameManagers_MapEditorGameManager___c_o* __this, Map_MapScriptBaseObject_o* o, const MethodInfo* method);
// 0x181e7b8a0

int32_t
GameManagers_MapEditorGameManager___c___Paste_b__32_1(GameManagers_MapEditorGameManager___c_o* __this, Map_MapScriptBaseObject_o* o, MethodInfo* method)

{
  if (f != (CustomLogic_CustomLogicSourceFile_o *)0x0) {
    return (f->fields)._Type_k__BackingField;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager.<>c$$<Paste>b__32_0
// il2cpp: int32_t GameManagers_MapEditorGameManager___c___Paste_b__32_0 (GameManagers_MapEditorGameManager___c_o* __this, Map_MapScriptBaseObject_o* o, const MethodInfo* method);
// 0x181e7b8a0

int32_t
GameManagers_MapEditorGameManager___c___Paste_b__32_0(GameManagers_MapEditorGameManager___c_o* __this, Map_MapScriptBaseObject_o* o, MethodInfo* method)

{
  if (f != (CustomLogic_CustomLogicSourceFile_o *)0x0) {
    return (f->fields)._Type_k__BackingField;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager.<>c$$<CreateEmptyParent>b__33_0
// il2cpp: int32_t GameManagers_MapEditorGameManager___c___CreateEmptyParent_b__33_0 (GameManagers_MapEditorGameManager___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x181e7b690

int32_t
GameManagers_MapEditorGameManager___c___CreateEmptyParent_b__33_0(GameManagers_MapEditorGameManager___c_o* __this, Map_MapObject_o* o, MethodInfo* method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (o->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar1->fields).Id;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager.<>c$$<CreateEmptyParent>b__33_2
// il2cpp: int32_t GameManagers_MapEditorGameManager___c___CreateEmptyParent_b__33_2 (GameManagers_MapEditorGameManager___c_o* __this, int32_t id, const MethodInfo* method);
// 0x181e7b6c0

int32_t GameManagers_MapEditorGameManager___c___CreateEmptyParent_b__33_2
                  (GameManagers_MapEditorGameManager___c_o *__this,int32_t id,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184344f03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184344f03 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
    iVar1 = System_Collections_Generic_List_int___IndexOf
                      (__this_00,id,
                       (MethodInfo_91F570 *)MethodInfo_System_Collections_Generic_List_int_IndexOf);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager.<>c$$<ResetOrigin>b__34_0
// il2cpp: int32_t GameManagers_MapEditorGameManager___c___ResetOrigin_b__34_0 (GameManagers_MapEditorGameManager___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x181e7b690

int32_t
GameManagers_MapEditorGameManager___c___ResetOrigin_b__34_0(GameManagers_MapEditorGameManager___c_o* __this, Map_MapObject_o* o, MethodInfo* method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (o->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar1->fields).Id;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager.<>c$$<GetSelectedObjectsForTransformCommand>b__42_0
// il2cpp: int32_t GameManagers_MapEditorGameManager___c___GetSelectedObjectsForTransformCommand_b__42_0 (GameManagers_MapEditorGameManager___c_o* __this, Map_MapObject_o* x, const MethodInfo* method);
// 0x181e7b690

int32_t
GameManagers_MapEditorGameManager___c___GetSelectedObjectsForTransformCommand_b__42_0(GameManagers_MapEditorGameManager___c_o* __this, Map_MapObject_o* x, MethodInfo* method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (o->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar1->fields).Id;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager.<>c$$<GetSelectedObjectsForTransformCommand>b__42_1
// il2cpp: Map_MapObject_o* GameManagers_MapEditorGameManager___c___GetSelectedObjectsForTransformCommand_b__42_1 (GameManagers_MapEditorGameManager___c_o* __this, int32_t id, const MethodInfo* method);
// 0x181e7b760

Map_MapObject_o *
GameManagers_MapEditorGameManager___c___GetSelectedObjectsForTransformCommand_b__42_1
          (GameManagers_MapEditorGameManager___c_o *__this,int32_t id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  Map_MapObject_o *pMVar1;
  
  if (Il2CppMethodInitialized_184344f04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184344f04 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)
              TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
    pMVar1 = (Map_MapObject_o *)
             System_Collections_Generic_Dictionary_int__ulong___get_Item
                       (__this_00,id,
                        (MethodInfo_14156F0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    return pMVar1;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager.<>c$$<ReparentObjects>b__43_0
// il2cpp: bool GameManagers_MapEditorGameManager___c___ReparentObjects_b__43_0 (GameManagers_MapEditorGameManager___c_o* __this, int32_t id, const MethodInfo* method);
// 0x181e7b8c0

bool GameManagers_MapEditorGameManager___c___ReparentObjects_b__43_0
               (GameManagers_MapEditorGameManager___c_o *__this,int32_t id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344f05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184344f05 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)
              TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (__this_00,id,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager.<>c$$<ReparentObjects>b__43_1
// il2cpp: Map_MapObject_o* GameManagers_MapEditorGameManager___c___ReparentObjects_b__43_1 (GameManagers_MapEditorGameManager___c_o* __this, int32_t id, const MethodInfo* method);
// 0x181e7b940

Map_MapObject_o *
GameManagers_MapEditorGameManager___c___ReparentObjects_b__43_1
          (GameManagers_MapEditorGameManager___c_o *__this,int32_t id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  Map_MapObject_o *pMVar1;
  
  if (Il2CppMethodInitialized_184344f06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184344f06 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)
              TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
    pMVar1 = (Map_MapObject_o *)
             System_Collections_Generic_Dictionary_int__ulong___get_Item
                       (__this_00,id,
                        (MethodInfo_14156F0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    return pMVar1;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager.<>c__DisplayClass33_0$$.ctor
// il2cpp: void GameManagers_MapEditorGameManager___c__DisplayClass33_0___ctor (GameManagers_MapEditorGameManager___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameManagers_MapEditorGameManager___c__DisplayClass33_0___ctor(GameManagers_MapEditorGameManager___c__DisplayClass33_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager.<>c__DisplayClass33_0$$<CreateEmptyParent>b__1
// il2cpp: bool GameManagers_MapEditorGameManager___c__DisplayClass33_0___CreateEmptyParent_b__1 (GameManagers_MapEditorGameManager___c__DisplayClass33_0_o* __this, int32_t id, const MethodInfo* method);
// 0x181e7b9c0

bool GameManagers_MapEditorGameManager___c__DisplayClass33_0___CreateEmptyParent_b__1
               (GameManagers_MapEditorGameManager___c__DisplayClass33_0_o *__this,int32_t id,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  GameManagers_MapEditorGameManager_o *__this_01;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344f07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184344f07 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)
              TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (__this_00,id,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    if (!bVar1) {
      return false;
    }
    __this_01 = (__this->fields).__4__this;
    if (__this_01 != (GameManagers_MapEditorGameManager_o *)0x0) {
      bVar1 = GameManagers_MapEditorGameManager__HasAncestorInSet
                        (__this_01,id,(__this->fields).selectedIds,(MethodInfo *)0x0);
      return !bVar1;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager.<>c__DisplayClass34_0$$.ctor
// il2cpp: void GameManagers_MapEditorGameManager___c__DisplayClass34_0___ctor (GameManagers_MapEditorGameManager___c__DisplayClass34_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameManagers_MapEditorGameManager___c__DisplayClass34_0___ctor(GameManagers_MapEditorGameManager___c__DisplayClass34_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager.<>c__DisplayClass34_0$$<ResetOrigin>b__1
// il2cpp: bool GameManagers_MapEditorGameManager___c__DisplayClass34_0___ResetOrigin_b__1 (GameManagers_MapEditorGameManager___c__DisplayClass34_0_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x181e7ba70

bool GameManagers_MapEditorGameManager___c__DisplayClass34_0___ResetOrigin_b__1
               (GameManagers_MapEditorGameManager___c__DisplayClass34_0_o *__this,Map_MapObject_o *obj,
               MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  bool bVar2;
  
  if (((obj != (Map_MapObject_o *)0x0) &&
      (pMVar1 = (obj->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) &&
     (__this_00 = (__this->fields).__4__this, __this_00 != (GameManagers_MapEditorGameManager_o *)0x0)) {
    bVar2 = GameManagers_MapEditorGameManager__HasAncestorInSet
                      (__this_00,(pMVar1->fields).Id,(__this->fields).selectedIds,(MethodInfo *)0x0);
    return !bVar2;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager.<>c__DisplayClass44_0$$.ctor
// il2cpp: void GameManagers_MapEditorGameManager___c__DisplayClass44_0___ctor (GameManagers_MapEditorGameManager___c__DisplayClass44_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameManagers_MapEditorGameManager___c__DisplayClass44_0___ctor(GameManagers_MapEditorGameManager___c__DisplayClass44_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager.<>c__DisplayClass44_0$$<ReorderObjects>b__0
// il2cpp: bool GameManagers_MapEditorGameManager___c__DisplayClass44_0___ReorderObjects_b__0 (GameManagers_MapEditorGameManager___c__DisplayClass44_0_o* __this, int32_t id, const MethodInfo* method);
// 0x181e7bab0

bool GameManagers_MapEditorGameManager___c__DisplayClass44_0___ReorderObjects_b__0
               (GameManagers_MapEditorGameManager___c__DisplayClass44_0_o *__this,int32_t id,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344f08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184344f08 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)
              TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (__this_00,id,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    if (!bVar1) {
      return false;
    }
    return id != (__this->fields).anchorId;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__53$$.ctor
// il2cpp: void GameManagers_MapEditorGameManager__WaitAndAutosave_d__53___ctor (GameManagers_MapEditorGameManager__WaitAndAutosave_d__53_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
GameManagers_MapEditorGameManager__WaitAndAutosave_d__53___ctor(GameManagers_MapEditorGameManager__WaitAndAutosave_d__53_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__53$$System.IDisposable.Dispose
// il2cpp: void GameManagers_MapEditorGameManager__WaitAndAutosave_d__53__System_IDisposable_Dispose (GameManagers_MapEditorGameManager__WaitAndAutosave_d__53_o* __this, const MethodInfo* method);
// 0x180547020

void
GameManagers_MapEditorGameManager__WaitAndAutosave_d__53__System_IDisposable_Dispose(GameManagers_MapEditorGameManager__WaitAndAutosave_d__53_o* __this, MethodInfo* method)

{
  return;
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__53$$MoveNext
// il2cpp: bool GameManagers_MapEditorGameManager__WaitAndAutosave_d__53__MoveNext (GameManagers_MapEditorGameManager__WaitAndAutosave_d__53_o* __this, const MethodInfo* method);
// 0x181e7bd60

bool GameManagers_MapEditorGameManager__WaitAndAutosave_d__53__MoveNext
               (GameManagers_MapEditorGameManager__WaitAndAutosave_d__53_o *__this,MethodInfo *method)

{
  int iVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  UI_MapEditorMenu_o *pUVar3;
  UI_MapEditorTopPanel_o *__this_00;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_01;
  
  if (Il2CppMethodInitialized_184344f09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184344f09 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    pGVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (((pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) ||
        (pUVar3 = (pGVar2->fields)._menu, pUVar3 == (UI_MapEditorMenu_o *)0x0)) ||
       (__this_00 = (pUVar3->fields)._topPanel, __this_00 == (UI_MapEditorTopPanel_o *)0x0)) {
      ThrowNullReferenceException();
    }
    UI_MapEditorTopPanel__Autosave(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_01,900.0,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
  (__this->fields).__1__state = 1;
  return true;
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__53$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_MapEditorGameManager__WaitAndAutosave_d__53__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_MapEditorGameManager__WaitAndAutosave_d__53_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_MapEditorGameManager__WaitAndAutosave_d__53__System_Collections_Generic_IEnumerator_System_Object__get_Current(GameManagers_MapEditorGameManager__WaitAndAutosave_d__53_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__53$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_MapEditorGameManager__WaitAndAutosave_d__53__System_Collections_IEnumerator_Reset (GameManagers_MapEditorGameManager__WaitAndAutosave_d__53_o* __this, const MethodInfo* method);
// 0x181e7be20

void GameManagers_MapEditorGameManager__WaitAndAutosave_d__53__System_Collections_IEnumerator_Reset
               (GameManagers_MapEditorGameManager__WaitAndAutosave_d__53_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_MapEditorGameManager_WaitAndAutosave_d__53_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__53$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_MapEditorGameManager__WaitAndAutosave_d__53__System_Collections_IEnumerator_get_Current (GameManagers_MapEditorGameManager__WaitAndAutosave_d__53_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_MapEditorGameManager__WaitAndAutosave_d__53__System_Collections_IEnumerator_get_Current(GameManagers_MapEditorGameManager__WaitAndAutosave_d__53_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.MapEditorGameManager$$OnJoinedRoom
// il2cpp: void GameManagers_MapEditorGameManager__OnJoinedRoom (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6b980

void GameManagers_MapEditorGameManager__OnJoinedRoom
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344edc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184344edc = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__OnJoinRoom((MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager$$ShowAddObject
// il2cpp: void GameManagers_MapEditorGameManager__ShowAddObject (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6ea50

void GameManagers_MapEditorGameManager__ShowAddObject
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_MapEditorAddObjectPopup_o *pUVar2;
  UI_MapEditorAddVariantPopup_o *pUVar3;
  
  pUVar1 = (__this->fields)._menu;
  if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).AddObjectPopup, pUVar2 != (UI_MapEditorAddObjectPopup_o *)0x0)) {
    if ((pUVar2->fields).IsActive == false) {
      pUVar1 = (__this->fields)._menu;
      pUVar3 = (pUVar1->fields).AddVariantPopup;
      if (pUVar3 == (UI_MapEditorAddVariantPopup_o *)0x0) goto label_181e6eaa8;
      if (((pUVar3->fields).IsActive == false) && ((pUVar1->fields).IsMouseUI != false)) {
        return;
      }
    }
    UI_MapEditorMenu__ToggleAddObjectPopup((__this->fields)._menu,(MethodInfo *)0x0);
    return;
  }
label_181e6eaa8:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$AddObject
// il2cpp: void GameManagers_MapEditorGameManager__AddObject (GameManagers_MapEditorGameManager_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181e68f20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6912c: jmp 0x181e691de
// asm:   0x181e69500: mov r9, qword ptr [rip + 0x2293341]  ; TypeInfo_Settings_SettingsManager

void GameManagers_MapEditorGameManager__AddObject
               (GameManagers_MapEditorGameManager_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar5;
  undefined4 uVar8;
  byte bVar9;
  uint uVar10;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar11;
  Map_MapScriptBaseMaterial_o *pMVar12;
  Cameras_BaseCamera_o *pCVar13;
  Utility_BaseComponentCache_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  Settings_MapEditorSettings_o *pSVar16;
  Settings_FloatSetting_o *pSVar17;
  Settings_BoolSetting_o *pSVar18;
  GameManagers_BaseGameManager_o *pGVar19;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar20;
  Map_MapScriptBaseObject_array *pMVar21;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  UI_MapEditorMenu_o *__this_03;
  MethodInfo *pMVar22;
  bool bVar23;
  UnityEngine_LayerMask_o UVar24;
  Map_MapScriptObjects_o *__this_04;
  Map_MapScriptSceneObject_o *__this_05;
  System_String_array *pSVar25;
  UnityEngine_Vector3_o *pUVar26;
  System_Int32_array *layers;
  MapEditor_AddObjectCommand_o *__this_06;
  Il2CppObject *item;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  UnityEngine_Ray_o local_e8;
  UnityEngine_RaycastHit_o local_c8 [3];
  
  if (Il2CppMethodInitialized_184344edd == '\0') {
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
    Il2CppMethodInitialized_184344edd = '\x01';
  }
  local_c8[0].fields.m_Normal.fields.y = 0.0;
  local_c8[0].fields.m_Normal.fields.z = 0.0;
  local_c8[0].fields.m_FaceID = 0;
  local_c8[0].fields.m_Point.fields.x = 0.0;
  local_c8[0].fields.m_Point.fields.y = 0.0;
  local_c8[0].fields.m_Point.fields.z = 0.0;
  local_c8[0].fields.m_Normal.fields.x = 0.0;
  local_c8[0].fields.m_Distance = 0.0;
  local_c8[0].fields.m_UV.fields.x = 0.0;
  local_c8[0].fields.m_UV.fields.y = 0.0;
  local_c8[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_04,(MethodInfo *)0x0);
  if (name == (System_String_o *)0x0) goto label_181e697a6;
  bVar23 = System_String__StartsWith(name,"Custom/",(MethodInfo *)0x0);
  if (bVar23) {
    __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
    Map_MapScriptSceneObject___ctor(__this_05,(MethodInfo *)0x0);
    if (__this_05 == (Map_MapScriptSceneObject_o *)0x0) goto label_181e697a6;
    (__this_05->fields).Asset = name;
    Il2CppCodeGenWriteBarrier(&(__this_05->fields).Asset,name);
    pSVar25 = System_String__Split(name,0x2f,0,(MethodInfo *)0x0);
    if (pSVar25 == (System_String_array *)0x0) goto label_181e697a6;
    if ((uint)pSVar25->max_length < 3) goto label_181e697be;
    pSVar11 = pSVar25->m_Items[2];
    (__this_05->fields).Name = pSVar11;
    Il2CppCodeGenWriteBarrier(&(__this_05->fields).Name,pSVar11);
    pMVar12 = (__this_05->fields).Material;
    if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
    }
    if (pMVar12 == (Map_MapScriptBaseMaterial_o *)0x0) goto label_181e697a6;
    pSVar11 = TypeInfo_Map_MapObjectShader->static_fields->DefaultNoTint;
    (pMVar12->fields).Shader = pSVar11;
    Il2CppCodeGenWriteBarrier(&(pMVar12->fields).Shader,pSVar11);
  }
  else {
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181e697a6;
    __this_05 = (Map_MapScriptSceneObject_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_00,(Il2CppObject *)name,
                           (MethodInfo_147A5B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                          );
    if (__this_05 != (Map_MapScriptSceneObject_o *)0x0) {
      bVar9 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
      if (((((Map_MapScriptBaseObject_c *)__this_05->klass)->_2).typeHierarchyDepth < bVar9) ||
         ((((Map_MapScriptBaseObject_c *)__this_05->klass)->_2).typeHierarchy[(ulonglong)bVar9 - 1] !=
          (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_05);
      }
    }
  }
  pCVar13 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (((pCVar13 != (Cameras_BaseCamera_o *)0x0) &&
      (pUVar14 = (pCVar13->fields).Cache, pUVar14 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pUVar15 = (pUVar14->fields).Transform, pUVar15 != (UnityEngine_Transform_o *)0x0)) {
    pUVar26 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_e8,pUVar15,(MethodInfo *)0x0);
    pCVar13 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (((pCVar13 == (Cameras_BaseCamera_o *)0x0) ||
        (pUVar14 = (pCVar13->fields).Cache, pUVar14 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pUVar15 = (pUVar14->fields).Transform, pUVar15 == (UnityEngine_Transform_o *)0x0)) goto label_181e697a6;
    uVar2 = (pUVar26->fields).x;
    uVar6 = (pUVar26->fields).y;
    fVar28 = (pUVar26->fields).z;
    pUVar26 = UnityEngine_Transform__get_forward((UnityEngine_Vector3_o *)&local_e8,pUVar15,(MethodInfo *)0x0)
    ;
    pSVar16 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
    if ((pSVar16 == (Settings_MapEditorSettings_o *)0x0) ||
       (pSVar17 = (pSVar16->fields).PlacementDistance, pSVar17 == (Settings_FloatSetting_o *)0x0))
    goto label_181e697a6;
    uVar3 = (pUVar26->fields).x;
    uVar7 = (pUVar26->fields).y;
    fVar27 = (pSVar17->fields)._value;
    fVar29 = (float)uVar3 * fVar27 + (float)uVar2;
    fVar30 = (float)uVar7 * fVar27 + (float)uVar6;
    pSVar18 = (TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings->fields).
              PlaceOnFirstSurface;
    if (pSVar18 == (Settings_BoolSetting_o *)0x0) goto label_181e697a6;
    fVar28 = fVar27 * (pUVar26->fields).z + fVar28;
    if ((pSVar18->fields)._value != false) {
      pCVar13 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (((pCVar13 == (Cameras_BaseCamera_o *)0x0) ||
          (pUVar14 = (pCVar13->fields).Cache, pUVar14 == (Utility_BaseComponentCache_o *)0x0)) ||
         (pUVar15 = (pUVar14->fields).Transform, pUVar15 == (UnityEngine_Transform_o *)0x0))
      goto label_181e697a6;
      pUVar26 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_e8,pUVar15,(MethodInfo *)0x0);
      pCVar13 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (((pCVar13 == (Cameras_BaseCamera_o *)0x0) ||
          (pUVar14 = (pCVar13->fields).Cache, pUVar14 == (Utility_BaseComponentCache_o *)0x0)) ||
         (pUVar15 = (pUVar14->fields).Transform, pUVar15 == (UnityEngine_Transform_o *)0x0))
      goto label_181e697a6;
      uVar5._0_4_ = (pUVar26->fields).x;
      uVar5._4_4_ = (pUVar26->fields).y;
      fVar27 = (pUVar26->fields).z;
      pUVar26 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_e8,pUVar15,(MethodInfo *)0x0);
      uVar4 = (pUVar26->fields).x;
      uVar8 = (pUVar26->fields).y;
      fVar32 = fVar28 - (pUVar26->fields).z;
      local_e8.fields.m_Origin.fields._0_8_ = uVar5;
      local_e8.fields.m_Origin.fields.z = fVar27;
      local_e8.fields.m_Direction.fields.x = fVar29 - (float)uVar4;
      local_e8.fields.m_Direction.fields.y = fVar30 - (float)uVar8;
      local_e8.fields.m_Direction.fields.z = fVar32;
      fVar27 = (float)il2cpp_runtime_helper_180546a40(&local_e8.fields.m_Direction,0);
      if (1e-05 < fVar27) {
        local_e8.fields.m_Direction.fields.x = (fVar29 - (float)uVar4) / fVar27;
        fVar31 = (fVar30 - (float)uVar8) / fVar27;
        fVar32 = fVar32 / fVar27;
      }
      else {
        fVar31 = 0.0;
        local_e8.fields.m_Direction.fields.x = 0.0;
        fVar32 = 0.0;
      }
      pSVar16 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
      if ((pSVar16 == (Settings_MapEditorSettings_o *)0x0) ||
         (pSVar17 = (pSVar16->fields).PlacementDistance, pSVar17 == (Settings_FloatSetting_o *)0x0))
      goto label_181e697a6;
      fVar27 = (pSVar17->fields)._value;
      layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      }
      if (layers == (System_Int32_array *)0x0) goto label_181e697a6;
      if ((int)layers->max_length == 0) goto label_181e697be;
      layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject;
      UVar24 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      UVar24 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar24.fields.m_Mask,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
      }
      local_e8.fields.m_Direction.fields.y = fVar31;
      local_e8.fields.m_Direction.fields.z = fVar32;
      bVar23 = UnityEngine_Physics__Raycast_2fe5050
                         (&local_e8,local_c8,fVar27,(int32_t)UVar24.fields.m_Mask,(MethodInfo *)0x0);
      if (bVar23) {
        pUVar26 = UnityEngine_RaycastHit__get_point
                            ((UnityEngine_Vector3_o *)&local_e8,local_c8,(MethodInfo *)0x0);
        fVar29 = (pUVar26->fields).x;
        fVar30 = (pUVar26->fields).y;
        fVar28 = (pUVar26->fields).z;
      }
    }
    pGVar19 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar19 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar9 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
      if (((pGVar19->klass->_2).typeHierarchyDepth < bVar9) ||
         ((pGVar19->klass->_2).typeHierarchy[(ulonglong)bVar9 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar19);
      }
      if (*(char *)((longlong)&(*(uint64_t *)((char *)pGVar19 + 0x48)) + 4) != '\0') {
        pSVar16 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
        if ((pSVar16 == (Settings_MapEditorSettings_o *)0x0) ||
           (pSVar17 = (pSVar16->fields).SnapMove, pSVar17 == (Settings_FloatSetting_o *)0x0))
        goto label_181e697a6;
        fVar27 = (pSVar17->fields)._value;
        fVar29 = (float)il2cpp_runtime_helper_180012930(fVar29 / fVar27);
        fVar29 = fVar29 * fVar27;
        fVar30 = (float)il2cpp_runtime_helper_180012930(fVar30 / fVar27);
        fVar30 = fVar30 * fVar27;
        fVar28 = (float)il2cpp_runtime_helper_180012930(fVar28 / fVar27);
        fVar28 = fVar28 * fVar27;
      }
      if (__this_05 != (Map_MapScriptSceneObject_o *)0x0) {
        local_e8.fields.m_Origin.fields.y = fVar30;
        local_e8.fields.m_Origin.fields.x = fVar29;
        local_e8.fields.m_Origin.fields.z = fVar28;
        Map_MapScriptBaseObject__SetPosition
                  ((Map_MapScriptBaseObject_o *)__this_05,(UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0
                  );
        pMVar22 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
        if ((__this_04 != (Map_MapScriptObjects_o *)0x0) &&
           (pSVar20 = (__this_04->fields).Objects,
           pSVar20 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
          piVar1 = &(pSVar20->fields)._version;
          *piVar1 = *piVar1 + 1;
          pMVar21 = (pSVar20->fields)._items;
          if (pMVar21 != (Map_MapScriptBaseObject_array *)0x0) {
            uVar10 = (pSVar20->fields)._size;
            if (uVar10 < (uint)pMVar21->max_length) {
              (pSVar20->fields)._size = uVar10 + 1;
              if ((uint)pMVar21->max_length <= uVar10) {
label_181e697be:
                ThrowIndexOutOfRangeException();
              }
              pMVar21->m_Items[(int)uVar10] = (Map_MapScriptBaseObject_o *)__this_05;
              Il2CppCodeGenWriteBarrier(pMVar21->m_Items + (int)uVar10,__this_05);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar20,(Il2CppObject *)__this_05,
                         (MethodInfo_93DD50 *)pMVar22->klass->rgctx_data[0xe].method);
            }
            pSVar20 = (__this_04->fields).Objects;
            __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand);
            MapEditor_AddObjectCommand___ctor(__this_06,pSVar20,-1,(MethodInfo *)0x0);
            GameManagers_MapEditorGameManager__NewCommand
                      (__this,(MapEditor_BaseCommand_o *)__this_06,true,(MethodInfo *)0x0);
            GameManagers_MapEditorGameManager__DeselectAll(__this,(MethodInfo *)0x0);
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            __this_01 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                        TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (__this_01 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              item = (Il2CppObject *)
                     System_Collections_Generic_Dictionary_int__ulong___get_Item
                               (__this_01,(__this->fields)._currentObjectId,
                                (MethodInfo_14156F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
              if (Il2CppMethodInitialized_184344ee9 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_HashSet_MapObject_Add);
                Il2CppMethodInitialized_184344ee9 = '\x01';
              }
              if ((item != (Il2CppObject *)0x0) && (item[2].klass != (Il2CppClass *)0x0)) {
                __this_02 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
                if (__this_02 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_181e697a6;
                System_Collections_Generic_HashSet_object___Add
                          (__this_02,item,
                           (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_Add);
                if (item[2].klass == (Il2CppClass *)0x0) goto label_181e697a6;
                (__this->fields).LastSelectedObjectId = *(int32_t *)&((item[2].klass)->_1).byval_arg.data;
              }
              __this_03 = (__this->fields)._menu;
              if (__this_03 != (UI_MapEditorMenu_o *)0x0) {
                UI_MapEditorMenu__SyncHierarchyPanel(__this_03,(MethodInfo *)0x0);
                GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_181e697a6:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$Undo
// il2cpp: void GameManagers_MapEditorGameManager__Undo (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6f8a0

void GameManagers_MapEditorGameManager__Undo(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  MapEditor_BaseCommand_c *pMVar2;
  System_Collections_Generic_List_BaseCommand__o *pSVar3;
  UI_MapEditorMenu_o *__this_01;
  MapEditor_BaseCommand_o *pMVar4;
  
  if (Il2CppMethodInitialized_184344ede == '\0') {
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
    Il2CppMethodInitialized_184344ede = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._undoCommands;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    if ((__this_00->fields)._size == 0) {
      return;
    }
    pMVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       (__this_00,(__this_00->fields)._size + -1,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_BaseCommand_get_Item);
    if (pMVar4 != (MapEditor_BaseCommand_o *)0x0) {
      pMVar2 = pMVar4->klass;
      (*(pMVar2->vtable)._5_Unexecute.methodPtr)
                (pMVar4,(System_Type_o *)(pMVar2->vtable)._5_Unexecute.method,(MethodInfo *)pMVar2);
      pSVar3 = (__this->fields)._redoCommands;
      if (pSVar3 != (System_Collections_Generic_List_BaseCommand__o *)0x0) {
        il2cpp_runtime_helper_180012890(pSVar3,pMVar4,MethodInfo_System_Collections_Generic_List_BaseCommand_Add);
        pSVar3 = (__this->fields)._undoCommands;
        if (pSVar3 != (System_Collections_Generic_List_BaseCommand__o *)0x0) {
          System_Collections_Generic_List_object___RemoveAt
                    ((System_Collections_Generic_List_object__o *)(__this->fields)._undoCommands,
                     (pSVar3->fields)._size + -1,
                     (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_BaseCommand_RemoveAt);
          pMVar2 = pMVar4->klass;
          bVar1 = (TypeInfo_MapEditor_AddObjectCommand->_2).typeHierarchyDepth;
          if ((((((bVar1 <= (pMVar2->_2).typeHierarchyDepth) &&
                 ((pMVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand)) ||
                ((bVar1 = (TypeInfo_MapEditor_DeleteObjectCommand->_2).typeHierarchyDepth,
                 bVar1 <= (pMVar2->_2).typeHierarchyDepth &&
                 ((pMVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand)))) ||
               ((bVar1 = (TypeInfo_MapEditor_ReparentObjectsCommand->_2).typeHierarchyDepth,
                bVar1 <= (pMVar2->_2).typeHierarchyDepth &&
                ((pMVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                 (Il2CppClass *)TypeInfo_MapEditor_ReparentObjectsCommand)))) ||
              ((bVar1 = (TypeInfo_MapEditor_ReorderObjectsCommand->_2).typeHierarchyDepth,
               bVar1 <= (pMVar2->_2).typeHierarchyDepth &&
               ((pMVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_MapEditor_ReorderObjectsCommand)))) ||
             ((bVar1 = (TypeInfo_MapEditor_CreateEmptyParentCommand->_2).typeHierarchyDepth,
              bVar1 <= (pMVar2->_2).typeHierarchyDepth &&
              ((pMVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
               (Il2CppClass *)TypeInfo_MapEditor_CreateEmptyParentCommand)))) {
            __this_01 = (__this->fields)._menu;
            if (__this_01 == (UI_MapEditorMenu_o *)0x0) goto label_181e6faaa;
            UI_MapEditorMenu__SyncHierarchyPanel(__this_01,(MethodInfo *)0x0);
          }
          GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_181e6faaa:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$Redo
// il2cpp: void GameManagers_MapEditorGameManager__Redo (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6c650

void GameManagers_MapEditorGameManager__Redo(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  MapEditor_BaseCommand_c *pMVar2;
  System_Collections_Generic_List_BaseCommand__o *pSVar3;
  UI_MapEditorMenu_o *__this_01;
  MapEditor_BaseCommand_o *pMVar4;
  
  if (Il2CppMethodInitialized_184344edf == '\0') {
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
    Il2CppMethodInitialized_184344edf = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._redoCommands;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    if ((__this_00->fields)._size == 0) {
      return;
    }
    pMVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       (__this_00,(__this_00->fields)._size + -1,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_BaseCommand_get_Item);
    if (pMVar4 != (MapEditor_BaseCommand_o *)0x0) {
      pMVar2 = pMVar4->klass;
      (*(pMVar2->vtable)._4_Execute.methodPtr)
                (pMVar4,(System_Type_o *)(pMVar2->vtable)._4_Execute.method,(MethodInfo *)pMVar2);
      pSVar3 = (__this->fields)._undoCommands;
      if (pSVar3 != (System_Collections_Generic_List_BaseCommand__o *)0x0) {
        il2cpp_runtime_helper_180012890(pSVar3,pMVar4,MethodInfo_System_Collections_Generic_List_BaseCommand_Add);
        pSVar3 = (__this->fields)._redoCommands;
        if (pSVar3 != (System_Collections_Generic_List_BaseCommand__o *)0x0) {
          System_Collections_Generic_List_object___RemoveAt
                    ((System_Collections_Generic_List_object__o *)(__this->fields)._redoCommands,
                     (pSVar3->fields)._size + -1,
                     (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_BaseCommand_RemoveAt);
          pMVar2 = pMVar4->klass;
          bVar1 = (TypeInfo_MapEditor_AddObjectCommand->_2).typeHierarchyDepth;
          if ((((((bVar1 <= (pMVar2->_2).typeHierarchyDepth) &&
                 ((pMVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand)) ||
                ((bVar1 = (TypeInfo_MapEditor_DeleteObjectCommand->_2).typeHierarchyDepth,
                 bVar1 <= (pMVar2->_2).typeHierarchyDepth &&
                 ((pMVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand)))) ||
               ((bVar1 = (TypeInfo_MapEditor_ReparentObjectsCommand->_2).typeHierarchyDepth,
                bVar1 <= (pMVar2->_2).typeHierarchyDepth &&
                ((pMVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                 (Il2CppClass *)TypeInfo_MapEditor_ReparentObjectsCommand)))) ||
              ((bVar1 = (TypeInfo_MapEditor_ReorderObjectsCommand->_2).typeHierarchyDepth,
               bVar1 <= (pMVar2->_2).typeHierarchyDepth &&
               ((pMVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_MapEditor_ReorderObjectsCommand)))) ||
             ((bVar1 = (TypeInfo_MapEditor_CreateEmptyParentCommand->_2).typeHierarchyDepth,
              bVar1 <= (pMVar2->_2).typeHierarchyDepth &&
              ((pMVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
               (Il2CppClass *)TypeInfo_MapEditor_CreateEmptyParentCommand)))) {
            __this_01 = (__this->fields)._menu;
            if (__this_01 == (UI_MapEditorMenu_o *)0x0) goto label_181e6c85a;
            UI_MapEditorMenu__SyncHierarchyPanel(__this_01,(MethodInfo *)0x0);
          }
          GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_181e6c85a:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$Copy
// il2cpp: void GameManagers_MapEditorGameManager__Copy (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e69840
// eh: try 0x181e69cb0..0x181e69fa1 -> pad 0x183318100 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 43 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e69c0d: nop dword ptr [rax]
// asm:   0x181e69cac: nop dword ptr [rax]
// asm:   0x181e69d22: mov rdx, qword ptr [rip + 0x2245bdf]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_Dispose
// asm:   0x181e69d29: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e69d2e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e69d33: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e69d38: test rcx, rcx
// asm:   0x181e69d3b: jne 0x181e69f7c
// asm:   0x181e69d41: mov rsi, qword ptr [rsp + 0xf0]
// asm:   0x181e69d49: mov r14, qword ptr [rsp + 0xf8]
// asm:   0x181e69d51: jmp 0x181e69c10
// asm:   0x181e69ef7: mov rdx, qword ptr [rip + 0x221e3ea]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x181e69efe: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e69f03: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e69f08: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e69f0d: test rcx, rcx
// asm:   0x181e69f10: jne 0x181e69fa1
// asm:   0x181e69f16: mov r15, qword ptr [rsp + 0xf0]
// asm:   0x181e69f1e: mov r13, r15
// asm:   0x181e69f7c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e69fa1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318100: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318105: push rbp
// asm:   0x183318106: sub rsp, 0x20
// asm:   0x18331810a: mov rbp, rdx
// asm:   0x18331810d: mov rax, qword ptr [rbp + 0x78]
// asm:   0x183318111: mov rcx, qword ptr [rax]
// asm:   0x183318114: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183318118: movabs rax, 0
// asm:   0x183318122: add rsp, 0x20
// asm:   0x183318126: pop rbp
// asm:   0x183318127: ret 
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

void GameManagers_MapEditorGameManager__Copy(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_MapObject__o *source;
  Il2CppObject *pIVar1;
  System_Collections_Generic_Dictionary_int__MapObject__o *__this_00;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_01;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar3;
  int32_t key;
  uint32_t item;
  bool bVar4;
  uint32_t uVar5;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_HashSet_int__o *__this_03;
  System_Collections_Generic_HashSet_int__o *__this_04;
  System_Console_WindowsConsole_WindowsCancelHandler_o *__this_05;
  System_Collections_Generic_IEnumerable_TSource__o *collection_00;
  System_Collections_Generic_Queue_uint__o *__this_06;
  Map_MapScriptObjects_o *__this_07;
  uint64_t uVar6;
  System_String_o *value;
  undefined1 local_b8 [16];
  Il2CppObject *local_a8;
  undefined1 local_a0 [8];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *pSStack_98;
  Il2CppObject *local_90;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_88;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_50;
  
  if (Il2CppMethodInitialized_184344ee0 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_ctor_40da1b8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Queue_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_MapEditorGameManager_c_Copy_b__29_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_MapEditorGameManager_c_Copy_b__29_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager_c);
    Il2CppMethodInitialized_184344ee0 = '\x01';
  }
  local_88.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_88.fields._version = 0;
  local_88.fields._index = 0;
  local_88.fields._current.fields.key = (Il2CppObject *)0x0;
  local_88.fields._current.fields.value = (Il2CppObject *)0x0;
  local_88.fields._getEnumeratorRetType = 0;
  local_88.fields._36_4_ = 0;
  local_a0 = (undefined1  [8])0x0;
  pSStack_98 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)0x0;
  local_90 = (Il2CppObject *)0x0;
  source = (__this->fields).SelectedObjects;
  if (source != (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
    if ((source->fields)._count == 0) {
      return;
    }
    if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
    }
    __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__29_0;
    if (__this_02 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
      if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9;
      __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
      System_Func_object__int____ctor
                (__this_02,pIVar1,(intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_Copy_b__29_0,
                 (MethodInfo_AF4D50 *)0x0);
      TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__29_0 =
           (System_Func_MapObject__int__o *)__this_02;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__29_0,__this_02);
    }
    collection = System_Linq_Enumerable__Select_Vector3__object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            (System_Func_TSource__TResult__o *)__this_02,
                            (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor_176c3b0
              (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
    __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor_176c3b0
              (__this_04,(System_Collections_Generic_IEnumerable_T__o *)__this_03,
               (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
    if ((__this->fields).HierarchyTreeViewEnabled != false) {
      if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
      }
      __this_05 = (System_Console_WindowsConsole_WindowsCancelHandler_o *)
                  TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__29_1;
      if (__this_05 == (System_Console_WindowsConsole_WindowsCancelHandler_o *)0x0) {
        if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9;
        __this_05 = (System_Console_WindowsConsole_WindowsCancelHandler_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
        System_Func_int__bool____ctor
                  (__this_05,pIVar1,(intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_Copy_b__29_1,
                   (MethodInfo *)0x0);
        TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__29_1 =
             (System_Func_int__bool__o *)__this_05;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__29_1,__this_05);
      }
      collection_00 =
           System_Linq_Enumerable__Where_float_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)__this_03,
                      (System_Func_TSource__bool__o *)__this_05,
                      (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_int);
      __this_06 = (System_Collections_Generic_Queue_uint__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Queue_int);
      System_Collections_Generic_Queue_int____ctor
                (__this_06,(System_Collections_Generic_IEnumerable_T__o *)collection_00,
                 (MethodInfo_B95DC0 *)MethodInfo_System_Collections_Generic_Queue_int_ctor_40da1b8);
      if (__this_06 == (System_Collections_Generic_Queue_uint__o *)0x0) goto label_181e69f6a;
      while (0 < (__this_06->fields)._size) {
        uVar5 = System_Collections_Generic_Queue_int___Dequeue
                          (__this_06,
                           (MethodInfo_B936A0 *)MethodInfo_System_Collections_Generic_Queue_int_Dequeue);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        __this_00 = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (__this_00 == (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) goto label_181e69f6a;
        System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
                  (&local_50,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                   (MethodInfo_13C1150 *)
                   MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_GetEnumerator);
        local_88.fields._dictionary = local_50.fields._dictionary;
        local_88.fields._version = local_50.fields._version;
        local_88.fields._index = local_50.fields._index;
        local_88.fields._current.fields.key = local_50.fields._current.fields.key;
        local_88.fields._current.fields.value = local_50.fields._current.fields.value;
        local_88.fields._getEnumeratorRetType = local_50.fields._getEnumeratorRetType;
        local_88.fields._36_4_ = local_50.fields._36_4_;
        local_b8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_b8._8_8_ = &local_88;
        while (bVar4 = System_Collections_Generic_Dictionary_Enumerator_uint__object___MoveNext
                                 (&local_88,
                                  (MethodInfo_15642D0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_MoveNext
                                 ), bVar4) {
          if (local_88.fields._current.fields.value == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (*(uint32_t *)&local_88.fields._current.fields.value[1].klass == uVar5) {
            if (__this_04 == (System_Collections_Generic_HashSet_int__o *)0x0) {
              ThrowNullReferenceException();
            }
            item = (uint32_t)local_88.fields._current.fields.key;
            bVar4 = System_Collections_Generic_HashSet_int___Add
                              (__this_04,(uint32_t)local_88.fields._current.fields.key,
                               (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
            if (bVar4) {
              System_Collections_Generic_Queue_int___Enqueue
                        (__this_06,item,
                         (MethodInfo_B93BF0 *)MethodInfo_System_Collections_Generic_Queue_int_Enqueue);
            }
          }
        }
        System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_88,
                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_Dispose);
      }
    }
    __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
    Map_MapScriptObjects___ctor(__this_07,(MethodInfo *)0x0);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_01 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
    if (__this_01 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
      System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,__this_01,
                 (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
      local_a0 = (undefined1  [8])local_b8._0_8_;
      pSStack_98 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_b8._8_8_;
      local_90 = local_a8;
      local_b8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_b8._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_a0;
      while (bVar4 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                               ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,
                                (MethodInfo_1530180 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext), bVar4) {
        if (__this_04 == (System_Collections_Generic_HashSet_int__o *)0x0) {
          ThrowNullReferenceException();
        }
        key = (int32_t)local_90;
        bVar4 = System_Collections_Generic_HashSet_int___Contains
                          ((System_Collections_Generic_HashSet_T__o *)__this_04,(int32_t)local_90,
                           (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
        if (bVar4) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar4 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                            (pSVar2,key,
                             (MethodInfo_1407110 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if (bVar4) {
            if (__this_07 == (Map_MapScriptObjects_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar3 = (__this_07->fields).Objects;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              ThrowNullReferenceException();
            }
            uVar6 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                              (pSVar2,key,
                               (MethodInfo_14156F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            if (uVar6 == 0) {
              ThrowNullReferenceException();
            }
            if (pSVar3 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(pSVar3,*(undefined8 *)(uVar6 + 0x20),
                          MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a0,
                 MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
      if (__this_07 != (Map_MapScriptObjects_o *)0x0) {
        value = (*(__this_07->klass->vtable)._8_Serialize.methodPtr)
                          (__this_07,(__this_07->klass->vtable)._8_Serialize.method);
        (__this->fields)._clipboard = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._clipboard,value);
        return;
      }
    }
  }
label_181e69f6a:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$Paste
// il2cpp: void GameManagers_MapEditorGameManager__Paste (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6bdf0

void GameManagers_MapEditorGameManager__Paste(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager__Paste_1e6be00(__this,-1,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager$$PasteAsChild
// il2cpp: void GameManagers_MapEditorGameManager__PasteAsChild (GameManagers_MapEditorGameManager_o* __this, int32_t parentId, const MethodInfo* method);
// 0x181e6bd50

void GameManagers_MapEditorGameManager__PasteAsChild
               (GameManagers_MapEditorGameManager_o *__this,int32_t parentId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344ee1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184344ee1 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)
              TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (__this_00,parentId,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    if (bVar1) {
      GameManagers_MapEditorGameManager__Paste_1e6be00(__this,parentId,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$Paste
// il2cpp: void GameManagers_MapEditorGameManager__Paste (GameManagers_MapEditorGameManager_o* __this, int32_t parentId, const MethodInfo* method);
// 0x181e6be00
// eh: try 0x181e6c0e0..0x181e6c54a -> pad 0x183331d60 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 60 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6c139: mov rdx, qword ptr [rip + 0x221f628]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x181e6c140: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e6c145: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6c14a: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e6c14f: test rcx, rcx
// asm:   0x181e6c152: jne 0x181e6c519
// asm:   0x181e6c158: mov r14, qword ptr [rsp + 0xc0]
// asm:   0x181e6c160: mov r12, qword ptr [rsp + 0x50]
// asm:   0x181e6c26b: mov rdx, qword ptr [rip + 0x221efb6]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x181e6c272: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e6c277: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6c27c: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e6c281: test rcx, rcx
// asm:   0x181e6c284: jne 0x181e6c534
// asm:   0x181e6c28a: mov r14, qword ptr [rsp + 0xc0]
// asm:   0x181e6c292: mov esi, dword ptr [rsp + 0xd8]
// asm:   0x181e6c299: mov r12, qword ptr [rsp + 0x50]
// asm:   0x181e6c4ab: mov rdx, qword ptr [rip + 0x221f2b6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x181e6c4b2: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e6c4b7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6c4bc: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e6c4c1: test rcx, rcx
// asm:   0x181e6c4c4: jne 0x181e6c54a
// asm:   0x181e6c4ca: mov r14, qword ptr [rsp + 0xc0]
// asm:   0x181e6c519: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e6c534: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e6c54a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318100: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318105: push rbp
// asm:   0x183318106: sub rsp, 0x20
// asm:   0x18331810a: mov rbp, rdx
// asm:   0x18331810d: mov rax, qword ptr [rbp + 0x78]
// asm:   0x183318111: mov rcx, qword ptr [rax]
// asm:   0x183318114: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183318118: movabs rax, 0
// asm:   0x183318122: add rsp, 0x20
// asm:   0x183318126: pop rbp
// asm:   0x183318127: ret 
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
// asm:   0x183331d60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331d65: push rbp
// asm:   0x183331d66: sub rsp, 0x20
// asm:   0x183331d6a: mov rbp, rdx
// asm:   0x183331d6d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x183331d71: mov rcx, qword ptr [rax]
// asm:   0x183331d74: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183331d78: movabs rax, 0
// asm:   0x183331d82: add rsp, 0x20
// asm:   0x183331d86: pop rbp
// asm:   0x183331d87: ret 

void GameManagers_MapEditorGameManager__Paste_1e6be00
               (GameManagers_MapEditorGameManager_o *__this,int32_t parentId,MethodInfo *method)

{
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  System_Collections_Generic_List_int__o *__this_01;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_02;
  UI_MapEditorMenu_o *__this_03;
  bool bVar3;
  int32_t iVar4;
  Map_MapScriptObjects_o *__this_04;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *pNVar5;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar6;
  System_Collections_Generic_HashSet_int__o *pSVar7;
  MapEditor_AddObjectCommand_o *__this_05;
  Map_MapObject_o *obj;
  int32_t insertAfterId;
  int iVar8;
  undefined1 local_98 [16];
  Il2CppObject *local_88;
  undefined1 local_80 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_78;
  Il2CppObject *local_70;
  Map_MapScriptObjects_o *local_68;
  undefined1 local_60 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_58;
  Il2CppObject *local_50;
  
  if (Il2CppMethodInitialized_184344ee2 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptObjects);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_MapEditorGameManager_c_Paste_b__32_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_MapEditorGameManager_c_Paste_b__32_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager_c);
    Il2CppMethodInitialized_184344ee2 = '\x01';
  }
  local_80 = (undefined1  [8])0x0;
  pUStack_78 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_70 = (Il2CppObject *)0x0;
  local_60 = (undefined1  [8])0x0;
  pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_50 = (Il2CppObject *)0x0;
  bVar3 = System_String__op_Equality
                    ((__this->fields)._clipboard,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                     (MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
  local_68 = __this_04;
  Map_MapScriptObjects___ctor(__this_04,(MethodInfo *)0x0);
  if (__this_04 != (Map_MapScriptObjects_o *)0x0) {
    (*(__this_04->klass->vtable)._9_Deserialize.methodPtr)
              (__this_04,(__this->fields)._clipboard,(__this_04->klass->vtable)._9_Deserialize.method);
    if (0 < parentId) {
      pSVar1 = (__this_04->fields).Objects;
      if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
      }
      pNVar5 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
               TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__32_1;
      if (pNVar5 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
        if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
        }
        pIVar2 = (Il2CppObject *)TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9;
        pNVar5 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapScriptBaseObject_int);
        System_Func_object__int____ctor
                  (pNVar5,pIVar2,(intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_Paste_b__32_1,
                   (MethodInfo_AF4D50 *)0x0);
        TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__32_1 =
             (System_Func_MapScriptBaseObject__int__o *)pNVar5;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__32_1,pNVar5);
      }
      pSVar6 = System_Linq_Enumerable__Select_Vector3__object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                          (System_Func_TSource__TResult__o *)pNVar5,
                          (MethodInfo_6C2170 *)
                          MethodInfo_System_Linq_Enumerable_Select_MapScriptBaseObject_int);
      pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor_176c3b0
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pSVar6,
                 (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
      pSVar1 = (__this_04->fields).Objects;
      if (pSVar1 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) goto label_181e6c507;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_98,
                 (System_Collections_Generic_List_T__o *)pSVar1,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
      local_80 = (undefined1  [8])local_98._0_8_;
      pUStack_78 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98._8_8_;
      local_70 = local_88;
      local_98._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_98._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80;
      while (bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_80,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext
                               ), pIVar2 = local_70, bVar3) {
        if (local_70 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if (pSVar7 == (System_Collections_Generic_HashSet_int__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar3 = System_Collections_Generic_HashSet_Int32Enum___Contains
                          ((System_Collections_Generic_HashSet_T__o *)pSVar7,
                           *(int32_t *)((longlong)&local_70[2].klass + 4),
                           (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
        if (!bVar3) {
          *(int32_t *)((longlong)&pIVar2[2].klass + 4) = parentId;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80,
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    }
    __this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(__this->fields).SelectedObjects;
    if (__this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
      insertAfterId = -1;
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_98,__this_00,
                 (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
      local_60 = (undefined1  [8])local_98._0_8_;
      pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98._8_8_;
      local_50 = local_88;
      local_98._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      iVar8 = -1;
      local_98._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60;
      while (bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,
                                (MethodInfo_15381F0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext),
            pIVar2 = local_50, bVar3) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        if (pIVar2 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if (pIVar2[2].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        __this_01 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
        if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar4 = System_Collections_Generic_List_int___IndexOf
                          (__this_01,*(int32_t *)&((pIVar2[2].klass)->_1).byval_arg.data,
                           (MethodInfo_91F570 *)MethodInfo_System_Collections_Generic_List_int_IndexOf);
        if (iVar8 < iVar4) {
          if (pIVar2[2].klass == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          insertAfterId = *(int32_t *)&((pIVar2[2].klass)->_1).byval_arg.data;
          iVar8 = iVar4;
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
      pSVar1 = (__this_04->fields).Objects;
      __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand);
      MapEditor_AddObjectCommand___ctor(__this_05,pSVar1,insertAfterId,(MethodInfo *)0x0);
      GameManagers_MapEditorGameManager__NewCommand
                (__this,(MapEditor_BaseCommand_o *)__this_05,true,(MethodInfo *)0x0);
      GameManagers_MapEditorGameManager__DeselectAll(__this,(MethodInfo *)0x0);
      pSVar1 = (__this_04->fields).Objects;
      if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
      }
      pNVar5 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
               TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__32_0;
      if (pNVar5 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
        if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
        }
        pIVar2 = (Il2CppObject *)TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9;
        pNVar5 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapScriptBaseObject_int);
        System_Func_object__int____ctor
                  (pNVar5,pIVar2,(intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_Paste_b__32_0,
                   (MethodInfo_AF4D50 *)0x0);
        TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__32_0 =
             (System_Func_MapScriptBaseObject__int__o *)pNVar5;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__32_0,pNVar5);
      }
      pSVar6 = System_Linq_Enumerable__Select_Vector3__object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                          (System_Func_TSource__TResult__o *)pNVar5,
                          (MethodInfo_6C2170 *)
                          MethodInfo_System_Linq_Enumerable_Select_MapScriptBaseObject_int);
      pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor_176c3b0
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pSVar6,
                 (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
      pSVar1 = (__this_04->fields).Objects;
      if (pSVar1 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_98,
                   (System_Collections_Generic_List_T__o *)pSVar1,
                   (MethodInfo_91F180 *)
                   MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
        local_80 = (undefined1  [8])local_98._0_8_;
        pUStack_78 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98._8_8_;
        local_70 = local_88;
        local_98._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        local_98._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80;
        while (bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)local_80,
                                  (MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext
                                 ), pIVar2 = local_70, bVar3) {
          if (local_70 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (pSVar7 == (System_Collections_Generic_HashSet_int__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = System_Collections_Generic_HashSet_int___Contains
                            ((System_Collections_Generic_HashSet_T__o *)pSVar7,
                             *(int32_t *)((longlong)&local_70[2].klass + 4),
                             (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains)
          ;
          if (!bVar3) {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            __this_02 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                        TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (__this_02 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              ThrowNullReferenceException();
            }
            obj = (Map_MapObject_o *)
                  System_Collections_Generic_Dictionary_int__ulong___get_Item
                            (__this_02,*(int32_t *)&pIVar2[2].klass,
                             (MethodInfo_14156F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            GameManagers_MapEditorGameManager__SelectObject(__this,obj,(MethodInfo *)0x0);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80,
                   MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
        __this_03 = (__this->fields)._menu;
        if (__this_03 != (UI_MapEditorMenu_o *)0x0) {
          UI_MapEditorMenu__SyncHierarchyPanel(__this_03,(MethodInfo *)0x0);
          GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_181e6c507:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$CreateEmptyParent
// il2cpp: void GameManagers_MapEditorGameManager__CreateEmptyParent (GameManagers_MapEditorGameManager_o* __this, int32_t contextId, const MethodInfo* method);
// 0x181e69fb0

void GameManagers_MapEditorGameManager__CreateEmptyParent
               (GameManagers_MapEditorGameManager_o *__this,int32_t contextId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  System_Collections_Generic_HashSet_MapObject__o *source;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  UI_MapEditorMenu_o *__this_02;
  bool bVar3;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o SVar4;
  GameManagers_MapEditorGameManager___c__DisplayClass33_0_o *object;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_03;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_HashSet_int__o *pSVar5;
  System_Console_WindowsConsole_WindowsCancelHandler_o *__this_04;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar6;
  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *__this_05;
  System_Linq_IOrderedEnumerable_TSource__o *source_01;
  uint64_t uVar7;
  Map_MapScriptObjects_o *pMVar8;
  Map_MapScriptBaseObject_o *pMVar9;
  System_String_o *pSVar10;
  UnityEngine_Transform_o *__this_06;
  UnityEngine_Vector3_o *pUVar11;
  MapEditor_CreateEmptyParentCommand_o *__this_07;
  Il2CppObject *pIVar12;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28;
  
  if (Il2CppMethodInitialized_184344ee3 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
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
    Il2CppMethodInitialized_184344ee3 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c__DisplayClass33_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (GameManagers_MapEditorGameManager___c__DisplayClass33_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar1,contextId,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (!bVar3) {
        return;
      }
      source = (__this->fields).SelectedObjects;
      if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
      }
      __this_03 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                  TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__33_0;
      if (__this_03 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
        if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
        }
        pIVar12 = (Il2CppObject *)TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9;
        __this_03 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
        System_Func_object__int____ctor
                  (__this_03,pIVar12,
                   (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_CreateEmptyParent_b__33_0,
                   (MethodInfo_AF4D50 *)0x0);
        TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__33_0 =
             (System_Func_MapObject__int__o *)__this_03;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__33_0,__this_03);
      }
      collection = System_Linq_Enumerable__Select_Vector3__object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                              (System_Func_TSource__TResult__o *)__this_03,
                              (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
      pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor_176c3b0
                (pSVar5,(System_Collections_Generic_IEnumerable_T__o *)collection,
                 (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
      (object->fields).selectedIds = pSVar5;
      Il2CppCodeGenWriteBarrier(&(object->fields).selectedIds,pSVar5);
      pSVar5 = (object->fields).selectedIds;
      if (pSVar5 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        bVar3 = System_Collections_Generic_HashSet_Int32Enum___Contains
                          ((System_Collections_Generic_HashSet_T__o *)pSVar5,contextId,
                           (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
        if (!bVar3) {
          pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
          System_Collections_Generic_HashSet_int____ctor
                    (pSVar5,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
          if (pSVar5 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_181e6a6f0;
          System_Collections_Generic_HashSet_int___Add
                    (pSVar5,contextId,
                     (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
          (object->fields).selectedIds = pSVar5;
          Il2CppCodeGenWriteBarrier(&(object->fields).selectedIds,pSVar5);
        }
        pSVar5 = (object->fields).selectedIds;
        __this_04 = (System_Console_WindowsConsole_WindowsCancelHandler_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
        System_Func_int__bool____ctor
                  (__this_04,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_GameManagers_MapEditorGameManager_c__DisplayClass33_0_CreateEmptyParent_b__1,
                   (MethodInfo *)0x0);
        source_00 = System_Linq_Enumerable__Where_float_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                               (System_Func_TSource__bool__o *)__this_04,
                               (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_int);
        pSVar6 = System_Linq_Enumerable__ToList_int_
                           (source_00,(MethodInfo_6C9670 *)MethodInfo_System_Linq_Enumerable_ToList_int);
        if (pSVar6 != (System_Collections_Generic_List_TSource__o *)0x0) {
          if ((pSVar6->fields)._size == 0) {
            return;
          }
          if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
          }
          __this_05 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o
                       *)TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__33_2;
          if (__this_05 ==
              (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)0x0) {
            if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
            }
            pIVar12 = (Il2CppObject *)TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9;
            __this_05 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o
                         *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int);
            System_Func_int__int____ctor
                      (__this_05,pIVar12,
                       (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_CreateEmptyParent_b__33_2,
                       (MethodInfo *)0x0);
            TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__33_2 =
                 (System_Func_int__int__o *)__this_05;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__33_2,__this_05);
          }
          source_01 = System_Linq_Enumerable__OrderBy_object__int_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,
                                 (System_Func_TSource__TKey__o *)__this_05,
                                 (MethodInfo_6C12E0 *)MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
          pSVar6 = System_Linq_Enumerable__ToList_int_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,
                              (MethodInfo_6C9670 *)MethodInfo_System_Linq_Enumerable_ToList_int);
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          if (pSVar6 != (System_Collections_Generic_List_TSource__o *)0x0) {
            pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            SVar4 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                              ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)pSVar6,0,
                               (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
            if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              uVar7 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                                (pSVar1,(int32_t)SVar4.fields,
                                 (MethodInfo_14156F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
              pMVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
              Map_MapScriptObjects___ctor(pMVar8,(MethodInfo *)0x0);
              if (pMVar8 != (Map_MapScriptObjects_o *)0x0) {
                pSVar2 = (pMVar8->fields).Objects;
                if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                }
                __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                            TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
                   (pMVar9 = System_Collections_Generic_Dictionary_object__object___get_Item
                                       (__this_00,(Il2CppObject *)"Empty Object",
                                        (MethodInfo_147A5B0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                       ),
                   pSVar2 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
                  il2cpp_runtime_helper_180012890(pSVar2,pMVar9,
                                MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
                  pSVar10 = (*(pMVar8->klass->vtable)._8_Serialize.methodPtr)
                                      (pMVar8,(pMVar8->klass->vtable)._8_Serialize.method);
                  pMVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
                  Map_MapScriptObjects___ctor(pMVar8,(MethodInfo *)0x0);
                  if (pMVar8 != (Map_MapScriptObjects_o *)0x0) {
                    (*(pMVar8->klass->vtable)._9_Deserialize.methodPtr)
                              (pMVar8,pSVar10,(pMVar8->klass->vtable)._9_Deserialize.method);
                    pSVar2 = (pMVar8->fields).Objects;
                    if (((pSVar2 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) &&
                        (pMVar9 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                            ((System_Collections_Generic_List_object__o *)pSVar2,0,
                                             (MethodInfo_92B830 *)
                                             MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Item
                                            ), uVar7 != 0)) && (pMVar9 != (Map_MapScriptBaseObject_o *)0x0)) {
                      (pMVar9->fields).Parent = *(int32_t *)(uVar7 + 0x10);
                      if ((*(UnityEngine_GameObject_o **)(uVar7 + 0x18) != (UnityEngine_GameObject_o *)0x0) &&
                         (__this_06 = UnityEngine_GameObject__get_transform
                                                (*(UnityEngine_GameObject_o **)(uVar7 + 0x18),
                                                 (MethodInfo *)0x0),
                         __this_06 != (UnityEngine_Transform_o *)0x0)) {
                        pUVar11 = UnityEngine_Transform__get_position(&local_28,__this_06,(MethodInfo *)0x0);
                        local_38.x = (pUVar11->fields).x;
                        local_38.y = (pUVar11->fields).y;
                        local_38.z = (pUVar11->fields).z;
                        Map_MapScriptBaseObject__SetPosition
                                  (pMVar9,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
                        SVar4 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                                          ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                                           pSVar6,0,(MethodInfo_92B8E0 *)
                                                    MethodInfo_System_Collections_Generic_List_int_get_Item);
                        __this_07 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_MapEditor_CreateEmptyParentCommand);
                        MapEditor_CreateEmptyParentCommand___ctor
                                  (__this_07,pMVar9,(System_Collections_Generic_List_int__o *)pSVar6,
                                   (int32_t)SVar4.fields,(MethodInfo *)0x0);
                        GameManagers_MapEditorGameManager__NewCommand
                                  (__this,(MapEditor_BaseCommand_o *)__this_07,true,(MethodInfo *)0x0);
                        GameManagers_MapEditorGameManager__DeselectAll(__this,(MethodInfo *)0x0);
                        if ((__this_07 != (MapEditor_CreateEmptyParentCommand_o *)0x0) &&
                           (pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject,
                           pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
                          pIVar12 = (Il2CppObject *)
                                    System_Collections_Generic_Dictionary_int__ulong___get_Item
                                              (pSVar1,(__this_07->fields)._parentId,
                                               (MethodInfo_14156F0 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item
                                              );
                          if (Il2CppMethodInitialized_184344ee9 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata
                                      (&MethodInfo_System_Collections_Generic_HashSet_MapObject_Add);
                            Il2CppMethodInitialized_184344ee9 = '\x01';
                          }
                          if ((pIVar12 != (Il2CppObject *)0x0) && (pIVar12[2].klass != (Il2CppClass *)0x0)) {
                            __this_01 = (System_Collections_Generic_HashSet_object__o *)
                                        (__this->fields).SelectedObjects;
                            if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0)
                            goto label_181e6a6f0;
                            System_Collections_Generic_HashSet_object___Add
                                      (__this_01,pIVar12,
                                       (MethodInfo_1757CE0 *)
                                       MethodInfo_System_Collections_Generic_HashSet_MapObject_Add);
                            if (pIVar12[2].klass == (Il2CppClass *)0x0) goto label_181e6a6f0;
                            (__this->fields).LastSelectedObjectId =
                                 *(int32_t *)&((pIVar12[2].klass)->_1).byval_arg.data;
                          }
                          __this_02 = (__this->fields)._menu;
                          if (__this_02 != (UI_MapEditorMenu_o *)0x0) {
                            UI_MapEditorMenu__SyncHierarchyPanel(__this_02,(MethodInfo *)0x0);
                            GameManagers_MapEditorGameManager__OnSelectionChange
                                      (__this,true,(MethodInfo *)0x0);
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
label_181e6a6f0:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$ResetOrigin
// il2cpp: void GameManagers_MapEditorGameManager__ResetOrigin (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6d130
// eh: try 0x181e6d430..0x181e6d65e -> pad 0x183315ba0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6d5ab: mov rdx, qword ptr [rip + 0x221df16]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x181e6d5b2: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e6d5b7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6d5bc: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e6d5c1: test rcx, rcx
// asm:   0x181e6d5c4: jne 0x181e6d65e
// asm:   0x181e6d5ca: mov r14, qword ptr [rsp + 0xa0]
// asm:   0x181e6d5d2: mov r15, qword ptr [rsp + 0xb0]
// asm:   0x181e6d65e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315ba0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315ba5: push rbp
// asm:   0x183315ba6: sub rsp, 0x20
// asm:   0x183315baa: mov rbp, rdx
// asm:   0x183315bad: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315bb1: mov rcx, qword ptr [rax]
// asm:   0x183315bb4: mov qword ptr [rbp + 0x50], rcx
// asm:   0x183315bb8: movabs rax, 0
// asm:   0x183315bc2: add rsp, 0x20
// asm:   0x183315bc6: pop rbp
// asm:   0x183315bc7: ret 

void GameManagers_MapEditorGameManager__ResetOrigin
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  System_Collections_Generic_HashSet_MapObject__o *pSVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  bool bVar9;
  GameManagers_MapEditorGameManager___c__DisplayClass34_0_o *object;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_HashSet_int__o *__this_01;
  System_Func_MapObject__bool__o *__this_02;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  UnityEngine_Transform_o *__this_03;
  uint64_t uVar10;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_Vector3_o *pUVar11;
  MapEditor_TransformPositionCommand_o *__this_05;
  float fVar12;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_o local_58;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  System_Collections_Generic_List_Enumerator_object__o local_30;
  
  if (Il2CppMethodInitialized_184344ee4 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
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
    Il2CppMethodInitialized_184344ee4 = '\x01';
  }
  local_30.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_30.fields._index = 0;
  local_30.fields._version = 0;
  local_30.fields._current = (Il2CppObject *)0x0;
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c__DisplayClass34_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (GameManagers_MapEditorGameManager___c__DisplayClass34_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    pSVar5 = (__this->fields).SelectedObjects;
    if (pSVar5 != (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
      if ((pSVar5->fields)._count != 0) {
        if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
        }
        __this_00 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                    TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__34_0;
        if (__this_00 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
          if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
          }
          pIVar6 = (Il2CppObject *)TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9;
          __this_00 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
          System_Func_object__int____ctor
                    (__this_00,pIVar6,
                     (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_ResetOrigin_b__34_0,
                     (MethodInfo_AF4D50 *)0x0);
          TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__34_0 =
               (System_Func_MapObject__int__o *)__this_00;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__34_0,__this_00);
        }
        collection = System_Linq_Enumerable__Select_Vector3__object_
                               ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                                (System_Func_TSource__TResult__o *)__this_00,
                                (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
        System_Collections_Generic_HashSet_int____ctor_176c3b0
                  (__this_01,(System_Collections_Generic_IEnumerable_T__o *)collection,
                   (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
        (object->fields).selectedIds = __this_01;
        Il2CppCodeGenWriteBarrier(&(object->fields).selectedIds,__this_01);
        pSVar5 = (__this->fields).SelectedObjects;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
        System_Func_object__bool____ctor
                  ((System_Predicate_object__o *)__this_02,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c__DisplayClass34_0_ResetOrigin_b__1
                   ,(MethodInfo_B61EB0 *)0x0);
        source = System_Linq_Enumerable__Where_float_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                            (System_Func_TSource__bool__o *)__this_02,
                            (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_MapObject);
        mapObjects = (System_Collections_Generic_List_MapObject__o *)
                     System_Linq_Enumerable__ToList_object_
                               (source,(MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_MapObject
                               );
        if (mapObjects == (System_Collections_Generic_List_MapObject__o *)0x0) goto label_181e6d62e;
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                   (System_Collections_Generic_List_T__o *)mapObjects,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
        local_30.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
        local_30.fields._index = local_48._8_4_;
        local_30.fields._version = local_48._12_4_;
        local_30.fields._current = local_38;
        local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_48._8_8_ = &local_30;
        while( true ) {
          bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_30,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
          pIVar6 = local_30.fields._current;
          if (!bVar9) break;
          if (local_30.fields._current == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (local_30.fields._current[1].monitor == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          __this_03 = UnityEngine_GameObject__get_transform
                                (local_30.fields._current[1].monitor,(MethodInfo *)0x0);
          if (*(int *)&pIVar6[1].klass < 0) {
label_181e6d541:
            if (Il2CppMethodInitialized_18433dbea == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433dbea = '\x01';
            }
            pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
            uVar2 = (pUVar8->zeroVector).fields.x;
            uVar4 = (pUVar8->zeroVector).fields.y;
            fVar12 = (pUVar8->zeroVector).fields.z;
            fVar1 = (float)uVar2;
            fVar3 = (float)uVar4;
          }
          else {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar7 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar7 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar9 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                              (pSVar7,*(int32_t *)&pIVar6[1].klass,
                               (MethodInfo_1407110 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
            if (!bVar9) goto label_181e6d541;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar7 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar7 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              ThrowNullReferenceException();
            }
            uVar10 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                               (pSVar7,*(int32_t *)&pIVar6[1].klass,
                                (MethodInfo_14156F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            if (uVar10 == 0) {
              ThrowNullReferenceException();
            }
            if (*(UnityEngine_GameObject_o **)(uVar10 + 0x18) == (UnityEngine_GameObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_04 = UnityEngine_GameObject__get_transform
                                  (*(UnityEngine_GameObject_o **)(uVar10 + 0x18),(MethodInfo *)0x0);
            if (__this_04 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar11 = UnityEngine_Transform__get_position(&local_58,__this_04,(MethodInfo *)0x0);
            fVar1 = (pUVar11->fields).x;
            fVar3 = (pUVar11->fields).y;
            fVar12 = (pUVar11->fields).z;
          }
          if (__this_03 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          local_68.y = fVar3;
          local_68.x = fVar1;
          local_68.z = fVar12;
          UnityEngine_Transform__set_position(__this_03,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_30,
                   MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
        __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_TransformPositionCommand);
        MapEditor_TransformPositionCommand___ctor(__this_05,mapObjects,(MethodInfo *)0x0);
        GameManagers_MapEditorGameManager__NewCommand
                  (__this,(MapEditor_BaseCommand_o *)__this_05,true,(MethodInfo *)0x0);
        GameManagers_MapEditorGameManager__OnSelectionChange(__this,false,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_181e6d62e:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$Cut
// il2cpp: void GameManagers_MapEditorGameManager__Cut (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6a700

void GameManagers_MapEditorGameManager__Cut(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager__Copy(__this,(MethodInfo *)0x0);
  GameManagers_MapEditorGameManager__Delete(__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager$$Delete
// il2cpp: void GameManagers_MapEditorGameManager__Delete (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6a720

void GameManagers_MapEditorGameManager__Delete(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  bool includeDescendants;
  System_Collections_Generic_HashSet_MapObject__o *collection;
  UI_MapEditorMenu_o *__this_00;
  System_Collections_Generic_List_MapObject__o *objs;
  MapEditor_DeleteObjectCommand_o *__this_01;
  
  if (Il2CppMethodInitialized_184344ee5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_DeleteObjectCommand);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_ctor_40bb3a8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    Il2CppMethodInitialized_184344ee5 = '\x01';
  }
  collection = (__this->fields).SelectedObjects;
  if (collection != (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
    if ((collection->fields)._count == 0) {
      return;
    }
    objs = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
    System_Collections_Generic_List_object____ctor_94fb10
              ((System_Collections_Generic_List_object__o *)objs,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor_40bb3a8);
    includeDescendants = (__this->fields).HierarchyTreeViewEnabled;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand);
    MapEditor_DeleteObjectCommand___ctor(__this_01,objs,includeDescendants,(MethodInfo *)0x0);
    GameManagers_MapEditorGameManager__NewCommand
              (__this,(MapEditor_BaseCommand_o *)__this_01,true,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._menu;
    if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
      UI_MapEditorMenu__SyncHierarchyPanel(__this_00,(MethodInfo *)0x0);
      GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$Select
// il2cpp: void GameManagers_MapEditorGameManager__Select (GameManagers_MapEditorGameManager_o* __this, bool multi, const MethodInfo* method);
// 0x181e6d710
// eh: try 0x181e6d990..0x181e6df55 -> pad 0x183339d90 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6da2b: nop dword ptr [rax + rax]
// asm:   0x181e6dcab: mov rdx, qword ptr [rip + 0x223dff6]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_GameObject_MapObject_Dispose
// asm:   0x181e6dcb2: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e6dcb7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6dcbc: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e6dcc1: test rcx, rcx
// asm:   0x181e6dcc4: jne 0x181e6df55
// asm:   0x181e6dcca: mov r14, qword ptr [rsp + 0x1e0]
// asm:   0x181e6dcd2: jmp 0x181e6dec9
// asm:   0x181e6ddfe: jmp 0x181e6dec9
// asm:   0x181e6df55: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183339d90: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183339d95: push rbp
// asm:   0x183339d96: sub rsp, 0x30
// asm:   0x183339d9a: mov rbp, rdx
// asm:   0x183339d9d: mov rax, qword ptr [rbp + 0xe0]
// asm:   0x183339da4: mov rcx, qword ptr [rax]
// asm:   0x183339da7: mov qword ptr [rbp + 0x50], rcx
// asm:   0x183339dab: movabs rax, 0
// asm:   0x183339db5: add rsp, 0x30
// asm:   0x183339db9: pop rbp
// asm:   0x183339dba: ret 

void GameManagers_MapEditorGameManager__Select
               (GameManagers_MapEditorGameManager_o *__this,bool multi,MethodInfo *method)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Cameras_BaseCamera_o *pCVar6;
  System_Collections_Generic_Dictionary_GameObject__MapObject__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UnityEngine_Object_o *x;
  UnityEngine_Camera_o *pUVar7;
  Utility_BaseComponentCache_o *pUVar8;
  UnityEngine_Transform_o *__this_02;
  System_Collections_Generic_HashSet_object__o *pSVar9;
  UI_MapEditorMenu_o *pUVar10;
  System_Collections_Generic_HashSet_MapObject__o *pSVar11;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar12;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUVar13;
  undefined8 uVar14;
  bool bVar15;
  UnityEngine_LayerMask_o UVar16;
  UnityEngine_Vector3_o *pUVar17;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  Map_MapObject_o *pMVar18;
  System_Object_array *pSVar19;
  UnityEngine_GameObject_o *pUVar20;
  UnityEngine_Bounds_o *pUVar21;
  UnityEngine_Ray_o *pUVar22;
  System_Int32_array *layers;
  UnityEngine_Collider_o *collider;
  uint uVar23;
  float fVar24;
  float fVar25;
  UnityEngine_Vector3_o local_1a8;
  UnityEngine_Vector3_Fields local_198;
  undefined1 local_188 [16];
  UnityEngine_GameObject_o *local_178;
  UnityEngine_Vector3_o local_168;
  UnityEngine_Vector3_o local_158;
  undefined1 local_148 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_140;
  UnityEngine_GameObject_o *local_138;
  UnityEngine_Vector3_o local_128;
  undefined8 local_118;
  float local_110;
  UnityEngine_Vector3_o local_108 [2];
  UnityEngine_Bounds_o local_f0;
  UnityEngine_RaycastHit_o local_d8;
  UnityEngine_Vector3_o local_a8;
  UnityEngine_Vector3_o local_98 [9];
  
  if (Il2CppMethodInitialized_184344ee6 == '\0') {
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
    Il2CppMethodInitialized_184344ee6 = '\x01';
  }
  local_d8.fields.m_Point.fields.x = 0.0;
  local_d8.fields.m_Point.fields.y = 0.0;
  local_d8.fields.m_Point.fields.z = 0.0;
  local_d8.fields.m_Normal.fields.x = 0.0;
  local_d8.fields.m_Normal.fields.y = 0.0;
  local_d8.fields.m_Normal.fields.z = 0.0;
  local_d8.fields.m_FaceID = 0;
  local_d8.fields.m_Distance = 0.0;
  local_d8.fields.m_UV.fields.x = 0.0;
  local_d8.fields.m_UV.fields.y = 0.0;
  local_d8.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_148 = (undefined1  [8])0x0;
  pUStack_140 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_138 = (UnityEngine_GameObject_o *)0x0;
  if (((__this->fields).Brush != (MapEditor_MapEditorBrush_o *)0x0) &&
     ((((__this->fields).Brush)->fields).Active != false)) {
    return;
  }
  pCVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  pUVar17 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)&local_198,(MethodInfo *)0x0);
  local_1a8.fields.x = (pUVar17->fields).x - (__this->fields)._dragStart.fields.x;
  local_1a8.fields.y = (pUVar17->fields).y - (__this->fields)._dragStart.fields.y;
  local_1a8.fields.z = (pUVar17->fields).z - (__this->fields)._dragStart.fields.z;
  fVar24 = (float)il2cpp_runtime_helper_180546a40(&local_1a8);
  if (1.0 <= fVar24) {
    if (!multi) {
      GameManagers_MapEditorGameManager__DeselectAll(__this,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_00 = TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
    if ((__this_00 == (System_Collections_Generic_Dictionary_GameObject__MapObject__o *)0x0) ||
       (__this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                               (MethodInfo_13C6500 *)
                               MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Keys)
       , __this_03 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
    goto label_181e6df11;
    System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_188,
               __this_03,
               (MethodInfo_F1E4D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_GameObject_MapObject_GetEnumerator
              );
    local_148 = (undefined1  [8])local_188._0_8_;
    pUStack_140 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_188._8_8_;
    local_138 = local_178;
    local_188._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_188._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_148;
label_181e6d990:
    bVar15 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                       ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                        local_148,
                        (MethodInfo_156BDD0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_GameObject_MapObject_MoveNext
                       );
    pUVar20 = local_138;
    if (bVar15) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
      if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      pMVar18 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_01,(Il2CppObject *)pUVar20,
                           (MethodInfo_147A5B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Item);
      if (pUVar20 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar19 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                          (pUVar20,(MethodInfo_6F5810 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
      uVar23 = 0;
      if (pSVar19 == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      for (; uVar1 = (uint)pSVar19->max_length, (int)uVar23 < (int)uVar1; uVar23 = uVar23 + 1) {
        if (uVar1 <= uVar23) {
          ThrowIndexOutOfRangeException();
        }
        x = (UnityEngine_Object_o *)pSVar19->m_Items[(int)uVar23];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar15 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar15) {
          if (x == (UnityEngine_Object_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          if (pUVar20 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar15 = UnityEngine_GameObject__get_activeSelf(pUVar20,(MethodInfo *)0x0);
          if (bVar15) {
            pUVar21 = UnityEngine_Renderer__get_bounds
                                (&local_f0,(UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
            uVar14._0_4_ = (pUVar21->fields).m_Center.fields.x;
            uVar14._4_4_ = (pUVar21->fields).m_Center.fields.y;
            fVar24 = (pUVar21->fields).m_Center.fields.z;
            local_f0.fields.m_Extents.fields.y = (pUVar21->fields).m_Extents.fields.y;
            local_f0.fields.m_Extents.fields.z = (pUVar21->fields).m_Extents.fields.z;
            if (pCVar6 == (Cameras_BaseCamera_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar7 = (pCVar6->fields).Camera;
            if (pUVar7 == (UnityEngine_Camera_o *)0x0) {
              ThrowNullReferenceException();
            }
            local_128.fields.x = (pUVar21->fields).m_Center.fields.x;
            local_128.fields.y = (pUVar21->fields).m_Center.fields.y;
            local_128.fields.z = fVar24;
            pUVar17 = UnityEngine_Camera__WorldToScreenPoint_2ebe670
                                (&local_a8,pUVar7,&local_128,(MethodInfo *)0x0);
            pUVar8 = (pCVar6->fields).Cache;
            if (pUVar8 == (Utility_BaseComponentCache_o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_02 = (pUVar8->fields).Transform;
            if (__this_02 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar2 = (pUVar17->fields).x;
            fVar3 = (pUVar17->fields).y;
            pUVar17 = UnityEngine_Transform__get_position(local_98,__this_02,(MethodInfo *)0x0);
            local_118._0_4_ = (pUVar17->fields).x;
            local_118._4_4_ = (pUVar17->fields).y;
            local_110 = (pUVar17->fields).z;
            local_198._0_8_ = uVar14;
            local_198.z = fVar24;
            fVar24 = (float)il2cpp_runtime_helper_180562c80(&local_198);
            pUVar7 = (pCVar6->fields).Camera;
            if (pUVar7 == (UnityEngine_Camera_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar25 = UnityEngine_Camera__get_farClipPlane(pUVar7,(MethodInfo *)0x0);
            if (fVar24 < fVar25) {
              fVar24 = (__this->fields)._dragStart.fields.x;
              fVar25 = (__this->fields)._dragStart.fields.y;
              pUVar17 = UnityEngine_Input__get_mousePosition(local_108,(MethodInfo *)0x0);
              fVar4 = (pUVar17->fields).x;
              fVar5 = (pUVar17->fields).y;
              if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
              }
              local_1a8.fields.z = 0.0;
              local_168.fields.z = 0.0;
              local_158.fields.z = 0.0;
              local_1a8.fields.x = fVar4;
              local_1a8.fields.y = fVar5;
              local_168.fields.x = fVar24;
              local_168.fields.y = fVar25;
              local_158.fields.x = fVar2;
              local_158.fields.y = fVar3;
              bVar15 = Utility_Util__IsVectorBetween(&local_158,&local_168,&local_1a8,(MethodInfo *)0x0);
              if ((bVar15) &&
                 (bVar15 = UnityEngine_Renderer__get_isVisible((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0),
                 bVar15)) {
                pSVar9 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
                if (pSVar9 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar15 = System_Collections_Generic_HashSet_object___Contains
                                   (pSVar9,(Il2CppObject *)pMVar18,
                                    (MethodInfo_1759E40 *)
                                    MethodInfo_System_Collections_Generic_HashSet_MapObject_Contains);
                if (!bVar15) {
                  GameManagers_MapEditorGameManager__SelectObject(__this,pMVar18,(MethodInfo *)0x0);
                }
                break;
              }
            }
          }
        }
      }
      goto label_181e6d990;
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_148,
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_GameObject_MapObject_Dispose
              );
    goto label_181e6dec9;
  }
  pUVar10 = (__this->fields)._menu;
  if (pUVar10 == (UI_MapEditorMenu_o *)0x0) goto label_181e6df11;
  if ((pUVar10->fields).IsMouseUI != false) goto label_181e6dec9;
  if (pCVar6 == (Cameras_BaseCamera_o *)0x0) {
label_181e6df11:
    ThrowNullReferenceException();
  }
  pUVar7 = (pCVar6->fields).Camera;
  pUVar17 = UnityEngine_Input__get_mousePosition(local_108,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_Camera_o *)0x0) goto label_181e6df11;
  local_198.x = (pUVar17->fields).x;
  local_198.y = (pUVar17->fields).y;
  local_198.z = (pUVar17->fields).z;
  pUVar22 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                      ((UnityEngine_Ray_o *)&local_f0,pUVar7,(UnityEngine_Vector3_o *)&local_198,
                       (MethodInfo *)0x0);
  pSVar12 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&(pUVar22->fields).m_Origin.fields;
  pUVar13 = *(UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o **)
             &(pUVar22->fields).m_Origin.fields.z;
  pUVar20 = *(UnityEngine_GameObject_o **)&(pUVar22->fields).m_Direction.fields.y;
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers == (System_Int32_array *)0x0) goto label_181e6df11;
  if ((int)layers->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject;
  UVar16 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
  UVar16 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar16.fields.m_Mask,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  local_188._0_8_ = pSVar12;
  local_188._8_8_ = pUVar13;
  local_178 = pUVar20;
  bVar15 = UnityEngine_Physics__Raycast_2fe5050
                     ((UnityEngine_Ray_o *)local_188,&local_d8,100000.0,(int32_t)UVar16.fields.m_Mask,
                      (MethodInfo *)0x0);
  if (bVar15) {
    collider = UnityEngine_RaycastHit__get_collider(&local_d8,(MethodInfo *)0x0);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pMVar18 = Map_MapLoader__FindObjectFromCollider(collider,(MethodInfo *)0x0);
    pSVar9 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
    if (pSVar9 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_181e6df11;
    if (multi) {
      bVar15 = System_Collections_Generic_HashSet_object___Contains
                         (pSVar9,(Il2CppObject *)pMVar18,
                          (MethodInfo_1759E40 *)
                          MethodInfo_System_Collections_Generic_HashSet_MapObject_Contains);
      if (bVar15) {
        GameManagers_MapEditorGameManager__DeselectObject(__this,pMVar18,(MethodInfo *)0x0);
        goto label_181e6dec9;
      }
    }
    else {
      if (((pSVar9->fields)._count == 1) &&
         (bVar15 = System_Collections_Generic_HashSet_object___Contains
                             (pSVar9,(Il2CppObject *)pMVar18,
                              (MethodInfo_1759E40 *)
                              MethodInfo_System_Collections_Generic_HashSet_MapObject_Contains), bVar15))
      goto label_181e6de62;
      pSVar11 = (__this->fields).SelectedObjects;
      if (pSVar11 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_181e6df11;
      if ((pSVar11->fields)._count < 1) {
        GameManagers_MapEditorGameManager__SelectObject(__this,pMVar18,(MethodInfo *)0x0);
        goto label_181e6dec9;
      }
      GameManagers_MapEditorGameManager__DeselectAll(__this,(MethodInfo *)0x0);
    }
    GameManagers_MapEditorGameManager__SelectObject(__this,pMVar18,(MethodInfo *)0x0);
  }
  else {
    if (multi) goto label_181e6dec9;
label_181e6de62:
    GameManagers_MapEditorGameManager__DeselectAll(__this,(MethodInfo *)0x0);
  }
label_181e6dec9:
  GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager$$DeselectAll
// il2cpp: void GameManagers_MapEditorGameManager__DeselectAll (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6a830
// eh: try 0x181e6a920..0x181e6a947 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6a919: nop dword ptr [rax]
// asm:   0x181e6a958: mov rdx, qword ptr [rip + 0x2220b69]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x181e6a95f: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e6a964: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6a969: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e6a96e: test rcx, rcx
// asm:   0x181e6a971: jne 0x181e6a998
// asm:   0x181e6a973: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x181e6a998: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void GameManagers_MapEditorGameManager__DeselectAll
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_MapObject__o *collection;
  bool bVar1;
  System_Collections_Generic_List_MapObject__o *__this_00;
  undefined1 local_40 [16];
  Map_MapObject_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344ee7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_ctor_40bb3a8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    Il2CppMethodInitialized_184344ee7 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  collection = (__this->fields).SelectedObjects;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
  System_Collections_Generic_List_object____ctor_94fb10
            ((System_Collections_Generic_List_object__o *)__this_00,
             (System_Collections_Generic_IEnumerable_T__o *)collection,
             (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor_40bb3a8);
  if (__this_00 != (System_Collections_Generic_List_MapObject__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
      if (!bVar1) break;
      GameManagers_MapEditorGameManager__DeselectObject
                (__this,(Map_MapObject_o *)local_28.fields._current,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    (__this->fields).LastSelectedObjectId = -1;
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$DeselectObject
// il2cpp: void GameManagers_MapEditorGameManager__DeselectObject (GameManagers_MapEditorGameManager_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x181e6a9a0

void GameManagers_MapEditorGameManager__DeselectObject
               (GameManagers_MapEditorGameManager_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_MapObject__o *source;
  Map_MapScriptBaseObject_o *pMVar1;
  Map_MapObject_o *pMVar2;
  
  if (Il2CppMethodInitialized_184344ee8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Last_MapObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    Il2CppMethodInitialized_184344ee8 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Remove
              (__this_00,(Il2CppObject *)obj,
               (MethodInfo_1766930 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_Remove);
    if (((obj == (Map_MapObject_o *)0x0) || ((obj->fields).ScriptObject == (Map_MapScriptBaseObject_o *)0x0))
       || ((__this->fields).LastSelectedObjectId != (((obj->fields).ScriptObject)->fields).Id)) {
      return;
    }
    source = (__this->fields).SelectedObjects;
    if (source != (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
      if ((source->fields)._count < 1) {
        (__this->fields).LastSelectedObjectId = -1;
        return;
      }
      pMVar2 = System_Linq_Enumerable__Last_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (MethodInfo_6BFFF0 *)MethodInfo_System_Linq_Enumerable_Last_MapObject);
      if ((pMVar2 != (Map_MapObject_o *)0x0) &&
         (pMVar1 = (pMVar2->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
        (__this->fields).LastSelectedObjectId = (pMVar1->fields).Id;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$SelectObject
// il2cpp: void GameManagers_MapEditorGameManager__SelectObject (GameManagers_MapEditorGameManager_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x181e6d6a0

void GameManagers_MapEditorGameManager__SelectObject
               (GameManagers_MapEditorGameManager_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Map_MapScriptBaseObject_o *pMVar1;
  
  if (Il2CppMethodInitialized_184344ee9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_MapObject_Add);
    Il2CppMethodInitialized_184344ee9 = '\x01';
  }
  if ((obj != (Map_MapObject_o *)0x0) && ((obj->fields).ScriptObject != (Map_MapScriptBaseObject_o *)0x0)) {
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Add
                (__this_00,(Il2CppObject *)obj,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_Add);
      pMVar1 = (obj->fields).ScriptObject;
      if (pMVar1 != (Map_MapScriptBaseObject_o *)0x0) {
        (__this->fields).LastSelectedObjectId = (pMVar1->fields).Id;
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// GameManagers.MapEditorGameManager$$SetHierarchyTreeView
// il2cpp: void GameManagers_MapEditorGameManager__SetHierarchyTreeView (GameManagers_MapEditorGameManager_o* __this, bool enabled, const MethodInfo* method);
// 0x181e6e1f0

void GameManagers_MapEditorGameManager__SetHierarchyTreeView
               (GameManagers_MapEditorGameManager_o *__this,bool enabled,MethodInfo *method)

{
  (__this->fields).HierarchyTreeViewEnabled = enabled;
  return;
}


// GameManagers.MapEditorGameManager$$GetSelectedObjectsForTransformCommand
// il2cpp: System_Collections_Generic_List_MapObject__o* GameManagers_MapEditorGameManager__GetSelectedObjectsForTransformCommand (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6ac00
// eh: try 0x181e6ae40..0x181e6b034 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6ae3f: nop 
// asm:   0x181e6ae9a: mov rdx, qword ptr [rip + 0x2220387]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x181e6aea1: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e6aea6: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6aeab: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e6aeb0: test rcx, rcx
// asm:   0x181e6aeb3: jne 0x181e6b034
// asm:   0x181e6aeb9: mov rdi, qword ptr [rsp + 0x90]
// asm:   0x181e6b034: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

System_Collections_Generic_List_MapObject__o *
GameManagers_MapEditorGameManager__GetSelectedObjectsForTransformCommand
          (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_MapObject__o *collection;
  Il2CppObject *pIVar1;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  Il2CppClass *pIVar2;
  System_Collections_Generic_Dictionary_int__MapObject__o *object;
  bool bVar3;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_01;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar4;
  System_Collections_Generic_HashSet_int__o *__this_02;
  System_Console_WindowsConsole_WindowsCancelHandler_o *__this_03;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *__this_04;
  System_Collections_Generic_List_MapObject__o *pSVar5;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_184344eea == '\0') {
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
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_ctor_40bb3a8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_c_GetSelectedObjectsForTransformCommand_b__42_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_c_GetSelectedObjectsForTransformCommand_b__42_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager_c);
    Il2CppMethodInitialized_184344eea = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Il2CppObject *)0x0;
  collection = (__this->fields).SelectedObjects;
  if ((__this->fields).HierarchyTreeViewEnabled == false) {
    pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
    System_Collections_Generic_List_object____ctor_94fb10
              ((System_Collections_Generic_List_object__o *)pSVar5,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor_40bb3a8);
    return pSVar5;
  }
  if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
  }
  __this_01 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
              TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__42_0;
  if (__this_01 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
    if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9;
    __this_01 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
    System_Func_object__int____ctor
              (__this_01,pIVar1,
               (intptr_t)
               MethodInfo_GameManagers_MapEditorGameManager_c_GetSelectedObjectsForTransformCommand_b__42_0,
               (MethodInfo_AF4D50 *)0x0);
    TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__42_0 =
         (System_Func_MapObject__int__o *)__this_01;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__42_0,__this_01);
  }
  pSVar4 = System_Linq_Enumerable__Select_Vector3__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)collection,
                      (System_Func_TSource__TResult__o *)__this_01,
                      (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor_176c3b0
            (__this_02,(System_Collections_Generic_IEnumerable_T__o *)pSVar4,
             (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
  __this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(__this->fields).SelectedObjects;
  if (__this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while( true ) {
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
      if (!bVar3) break;
      if (local_38 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = local_38[2].klass;
      if (pIVar2 == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      if (0 < *(int *)&(pIVar2->_1).byval_arg.data) {
        GameManagers_MapEditorGameManager__AddDescendants
                  (__this,*(int32_t *)&(pIVar2->_1).byval_arg.data,__this_02,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    object = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    __this_03 = (System_Console_WindowsConsole_WindowsCancelHandler_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
    if (object != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) {
      System_Func_int__bool____ctor
                (__this_03,(Il2CppObject *)object,
                 (intptr_t)((Il2CppClass *)object->klass)->vtable[0x24].method,(MethodInfo *)0x0);
      source = System_Linq_Enumerable__Where_float_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)__this_02,
                          (System_Func_TSource__bool__o *)__this_03,
                          (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_int);
      if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
      }
      __this_04 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)
                  TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__42_1;
      if (__this_04 ==
          (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)0x0) {
        if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9;
        __this_04 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_MapObject);
        System_Func_int__object____ctor
                  (__this_04,pIVar1,
                   (intptr_t)
                   MethodInfo_GameManagers_MapEditorGameManager_c_GetSelectedObjectsForTransformCommand_b__42_1
                   ,(MethodInfo *)0x0);
        TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__42_1 =
             (System_Func_int__MapObject__o *)__this_04;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__42_1,__this_04);
      }
      pSVar4 = System_Linq_Enumerable__Select_Vector3__object_
                         (source,(System_Func_TSource__TResult__o *)__this_04,
                          (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_int_MapObject);
      pSVar5 = (System_Collections_Generic_List_MapObject__o *)
               System_Linq_Enumerable__ToList_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,
                          (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_MapObject);
      return pSVar5;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$ReparentObjects
// il2cpp: void GameManagers_MapEditorGameManager__ReparentObjects (GameManagers_MapEditorGameManager_o* __this, System_Collections_Generic_List_int__o* ids, int32_t newParentId, const MethodInfo* method);
// 0x181e6cb00
// eh: try 0x181e6cdd1..0x181e6d11c -> pad 0x1833207c0 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 43 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6ce2e: mov rdx, qword ptr [rip + 0x221b213]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x181e6ce35: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181e6ce3a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6ce3f: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e6ce44: test rcx, rcx
// asm:   0x181e6ce47: jne 0x181e6d10b
// asm:   0x181e6ce4d: mov esi, dword ptr [rsp + 0xd0]
// asm:   0x181e6ce54: mov r15, qword ptr [rsp + 0xc0]
// asm:   0x181e6ce5c: mov rdi, qword ptr [rsp + 0xc8]
// asm:   0x181e6cf8e: mov rdx, qword ptr [rip + 0x221b353]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x181e6cf95: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e6cf9a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6cf9f: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e6cfa4: test rcx, rcx
// asm:   0x181e6cfa7: jne 0x181e6d11c
// asm:   0x181e6cfad: mov esi, dword ptr [rsp + 0xd0]
// asm:   0x181e6cfb4: mov r15, qword ptr [rsp + 0xc0]
// asm:   0x181e6cfbc: mov r14, qword ptr [rsp + 0xc8]
// asm:   0x181e6cfc4: mov r12, r14
// asm:   0x181e6d10b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e6d11c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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
// asm:   0x1833207c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833207c5: push rbp
// asm:   0x1833207c6: sub rsp, 0x20
// asm:   0x1833207ca: mov rbp, rdx
// asm:   0x1833207cd: mov rax, qword ptr [rbp + 0x78]
// asm:   0x1833207d1: mov rcx, qword ptr [rax]
// asm:   0x1833207d4: mov qword ptr [rbp + 0x38], rcx
// asm:   0x1833207d8: movabs rax, 0
// asm:   0x1833207e2: add rsp, 0x20
// asm:   0x1833207e6: pop rbp
// asm:   0x1833207e7: ret 

void GameManagers_MapEditorGameManager__ReparentObjects
               (GameManagers_MapEditorGameManager_o *__this,System_Collections_Generic_List_int__o *ids,
               int32_t newParentId,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  UI_MapEditorMenu_o *__this_01;
  int key;
  bool bVar2;
  int32_t iVar3;
  System_Console_WindowsConsole_WindowsCancelHandler_o *__this_02;
  System_Collections_Generic_IEnumerable_TSource__o *collection;
  System_Collections_Generic_HashSet_int__o *__this_03;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_04;
  System_Collections_Generic_List_int__o *__this_05;
  Map_MapObject_o *obj;
  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *__this_06;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  MapEditor_ReparentObjectsCommand_o *__this_07;
  undefined1 local_98 [16];
  Il2CppObject *local_88;
  undefined8 local_80;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_78;
  undefined1 local_70 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_68;
  Il2CppObject *local_60;
  undefined1 local_58 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_50;
  Il2CppObject *local_48;
  
  if (Il2CppMethodInitialized_184344eeb == '\0') {
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
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_ReparentObjectsCommand);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_c_ReparentObjects_b__43_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_c_ReparentObjects_b__43_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager_c);
    Il2CppMethodInitialized_184344eeb = '\x01';
  }
  local_70 = (undefined1  [8])0x0;
  pUStack_68 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_60 = (Il2CppObject *)0x0;
  local_58 = (undefined1  [8])0x0;
  pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_48 = (Il2CppObject *)0x0;
  if (ids == (System_Collections_Generic_List_int__o *)0x0) {
    return;
  }
  if ((ids->fields)._size == 0) {
    return;
  }
  if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
  }
  __this_02 = (System_Console_WindowsConsole_WindowsCancelHandler_o *)
              TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__43_0;
  if (__this_02 == (System_Console_WindowsConsole_WindowsCancelHandler_o *)0x0) {
    if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9;
    __this_02 = (System_Console_WindowsConsole_WindowsCancelHandler_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
    System_Func_int__bool____ctor
              (__this_02,pIVar1,
               (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_ReparentObjects_b__43_0,
               (MethodInfo *)0x0);
    TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__43_0 =
         (System_Func_int__bool__o *)__this_02;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__43_0,__this_02);
  }
  collection = System_Linq_Enumerable__Where_float_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)ids,
                          (System_Func_TSource__bool__o *)__this_02,
                          (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_int);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor_176c3b0
            (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection,
             (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
  __this_04 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_04,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  if (__this_03 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    System_Collections_Generic_HashSet_uint___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_98,
               (System_Collections_Generic_HashSet_uint__o *)__this_03,
               (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    local_70 = (undefined1  [8])local_98._0_8_;
    pUStack_68 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98._8_8_;
    local_60 = local_88;
    local_80 = 0;
    local_78 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70;
    while (bVar2 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                             ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_70,
                              (MethodInfo_1537E90 *)
                              MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext),
          pIVar1 = local_60, bVar2) {
      bVar2 = GameManagers_MapEditorGameManager__HasAncestorInSet
                        (__this,(int32_t)local_60,__this_03,(MethodInfo *)0x0);
      if (!bVar2) {
        if (__this_04 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180026690(__this_04,(ulonglong)pIVar1 & 0xffffffff,
                      MethodInfo_System_Collections_Generic_List_int_Add);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
    System_Collections_Generic_List_int____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_05,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
    if (__this_04 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
      System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_98,__this_04,
                 (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
      local_58 = (undefined1  [8])local_98._0_8_;
      pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98._8_8_;
      local_48 = local_88;
      local_98._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_98._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
      while (bVar2 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                               ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                                (MethodInfo_1530180 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext),
            pIVar1 = local_48, bVar2) {
        key = (int)local_48;
        if (((int)local_48 != newParentId) &&
           ((newParentId < 0 ||
            (bVar2 = GameManagers_MapEditorGameManager__IsDescendant
                               (__this,newParentId,(int)local_48,(MethodInfo *)0x0), !bVar2)))) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          __this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                      TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (__this_00 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          obj = (Map_MapObject_o *)
                System_Collections_Generic_Dictionary_int__ulong___get_Item
                          (__this_00,key,
                           (MethodInfo_14156F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          iVar3 = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
          if (iVar3 != newParentId) {
            if (__this_05 == (System_Collections_Generic_List_int__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180026690(__this_05,(ulonglong)pIVar1 & 0xffffffff,
                          MethodInfo_System_Collections_Generic_List_int_Add);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
                 MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
      if (__this_05 != (System_Collections_Generic_List_int__o *)0x0) {
        if ((__this_05->fields)._size != 0) {
          if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
          }
          __this_06 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o
                       *)TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__43_1;
          if (__this_06 ==
              (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)0x0) {
            if ((TypeInfo_GameManagers_MapEditorGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c);
            }
            pIVar1 = (Il2CppObject *)TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9;
            __this_06 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o
                         *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_MapObject);
            System_Func_int__object____ctor
                      (__this_06,pIVar1,
                       (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_ReparentObjects_b__43_1,
                       (MethodInfo *)0x0);
            TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__43_1 =
                 (System_Func_int__MapObject__o *)__this_06;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_GameManagers_MapEditorGameManager_c->static_fields->__9__43_1,__this_06);
          }
          source = System_Linq_Enumerable__Select_Vector3__object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)__this_05,
                              (System_Func_TSource__TResult__o *)__this_06,
                              (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_int_MapObject);
          mapObjects = (System_Collections_Generic_List_MapObject__o *)
                       System_Linq_Enumerable__ToList_object_
                                 ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                  (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_MapObject);
          __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_ReparentObjectsCommand);
          MapEditor_ReparentObjectsCommand___ctor(__this_07,mapObjects,newParentId,(MethodInfo *)0x0);
          GameManagers_MapEditorGameManager__NewCommand
                    (__this,(MapEditor_BaseCommand_o *)__this_07,true,(MethodInfo *)0x0);
          __this_01 = (__this->fields)._menu;
          if (__this_01 == (UI_MapEditorMenu_o *)0x0) goto label_181e6d0ff;
          UI_MapEditorMenu__SyncHierarchyPanel(__this_01,(MethodInfo *)0x0);
          GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
label_181e6d0ff:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$ReorderObjects
// il2cpp: void GameManagers_MapEditorGameManager__ReorderObjects (GameManagers_MapEditorGameManager_o* __this, System_Collections_Generic_List_int__o* ids, int32_t anchorId, bool insertAfter, bool inTreeView, const MethodInfo* method);
// 0x181e6c860

void GameManagers_MapEditorGameManager__ReorderObjects
               (GameManagers_MapEditorGameManager_o *__this,System_Collections_Generic_List_int__o *ids,
               int32_t anchorId,bool insertAfter,bool inTreeView,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  UI_MapEditorMenu_o *__this_00;
  bool bVar2;
  int32_t iVar3;
  GameManagers_MapEditorGameManager___c__DisplayClass44_0_o *object;
  System_Console_WindowsConsole_WindowsCancelHandler_o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *objectIds;
  Map_MapObject_o *obj;
  MapEditor_ReorderObjectsCommand_o *__this_02;
  System_Nullable_int__Fields newParentId;
  System_Nullable_int__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344eec == '\0') {
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
              (&MethodInfo_GameManagers_MapEditorGameManager_c__DisplayClass44_0_ReorderObjects_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_MapEditorGameManager_c__DisplayClass44_0);
    Il2CppMethodInitialized_184344eec = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_c__DisplayClass44_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (GameManagers_MapEditorGameManager___c__DisplayClass44_0_o *)0x0) {
    (object->fields).anchorId = anchorId;
    if (((ids != (System_Collections_Generic_List_int__o *)0x0) && ((ids->fields)._size != 0)) &&
       (-1 < anchorId)) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_181e6caf2;
      bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar1,(object->fields).anchorId,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (bVar2) {
        __this_01 = (System_Console_WindowsConsole_WindowsCancelHandler_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
        System_Func_int__bool____ctor
                  (__this_01,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_GameManagers_MapEditorGameManager_c__DisplayClass44_0_ReorderObjects_b__0,
                   (MethodInfo *)0x0);
        source = System_Linq_Enumerable__Where_float_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)ids,
                            (System_Func_TSource__bool__o *)__this_01,
                            (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_int);
        objectIds = System_Linq_Enumerable__ToList_int_
                              (source,(MethodInfo_6C9670 *)MethodInfo_System_Linq_Enumerable_ToList_int);
        if (objectIds == (System_Collections_Generic_List_TSource__o *)0x0) goto label_181e6caf2;
        if ((objectIds->fields)._size != 0) {
          if (inTreeView) {
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
                            (pSVar1,(object->fields).anchorId,
                             (MethodInfo_14156F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            iVar3 = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
            local_28[0].hasValue = false;
            local_28[0]._1_3_ = 0;
            local_28[0].value = 0;
            System_Nullable_int____ctor
                      ((System_Data_SqlTypes_SqlInt32_o *)local_28,iVar3,MethodInfo_System_Nullable_int_ctor);
            newParentId = local_28[0];
          }
          else {
            newParentId.hasValue = false;
            newParentId._1_3_ = 0;
            newParentId.value = 0;
          }
          iVar3 = (object->fields).anchorId;
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_ReorderObjectsCommand);
          MapEditor_ReorderObjectsCommand___ctor
                    (__this_02,(System_Collections_Generic_List_int__o *)objectIds,iVar3,insertAfter,
                     (System_Nullable_int__o)newParentId,(MethodInfo *)0x0);
          GameManagers_MapEditorGameManager__NewCommand
                    (__this,(MapEditor_BaseCommand_o *)__this_02,true,(MethodInfo *)0x0);
          __this_00 = (__this->fields)._menu;
          if (__this_00 == (UI_MapEditorMenu_o *)0x0) goto label_181e6caf2;
          UI_MapEditorMenu__SyncHierarchyPanel(__this_00,(MethodInfo *)0x0);
          GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
label_181e6caf2:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$AddDescendants
// il2cpp: void GameManagers_MapEditorGameManager__AddDescendants (GameManagers_MapEditorGameManager_o* __this, int32_t id, System_Collections_Generic_HashSet_int__o* ids, const MethodInfo* method);
// 0x181e68d30
// eh: try 0x181e68e91..0x181e68f12 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e68ee7: mov rdx, qword ptr [rip + 0x221f15a]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x181e68eee: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e68ef3: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e68ef8: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e68efd: test rcx, rcx
// asm:   0x181e68f00: jne 0x181e68f12
// asm:   0x181e68f12: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void GameManagers_MapEditorGameManager__AddDescendants
               (GameManagers_MapEditorGameManager_o *__this,int32_t id,
               System_Collections_Generic_HashSet_int__o *ids,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  int32_t id_00;
  bool bVar2;
  System_Collections_Generic_HashSet_uint__o *__this_00;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_184344eed == '\0') {
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
    Il2CppMethodInitialized_184344eed = '\x01';
  }
  local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
           TypeInfo_Map_MapLoader->static_fields->IdToChildren;
  if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (pSVar1,id,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    if (!bVar2) {
      return;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToChildren;
    if ((pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_uint__o *)
                    System_Collections_Generic_Dictionary_int__ulong___get_Item
                              (pSVar1,id,
                               (MethodInfo_14156F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item),
       __this_00 != (System_Collections_Generic_HashSet_uint__o *)0x0)) {
      System_Collections_Generic_HashSet_uint___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this_00,
                 (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
      local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._current = local_50;
      local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar2 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                          (&local_48,
                           (MethodInfo_1537E90 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
        if (!bVar2) {
          System_Collections_Generic_HashSet_Enumerator_int___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                     MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
          return;
        }
        if (ids == (System_Collections_Generic_HashSet_int__o *)0x0) break;
        id_00 = (int32_t)local_48.fields._current;
        bVar2 = System_Collections_Generic_HashSet_int___Add
                          (ids,(int32_t)local_48.fields._current,
                           (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
        if (bVar2) {
          GameManagers_MapEditorGameManager__AddDescendants(__this,id_00,ids,(MethodInfo *)0x0);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$IsDescendant
// il2cpp: bool GameManagers_MapEditorGameManager__IsDescendant (GameManagers_MapEditorGameManager_o* __this, int32_t id, int32_t ancestorId, const MethodInfo* method);
// 0x181e6b1f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6b28b: nop dword ptr [rax + rax]

bool GameManagers_MapEditorGameManager__IsDescendant
               (GameManagers_MapEditorGameManager_o *__this,int32_t id,int32_t ancestorId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  bool bVar2;
  System_Collections_Generic_HashSet_int__o *__this_00;
  Map_MapObject_o *obj;
  
  if (Il2CppMethodInitialized_184344eee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184344eee = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_00,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (-1 < id) {
    if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) {
label_181e6b365:
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
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_181e6b365;
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
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_181e6b365;
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


// GameManagers.MapEditorGameManager$$HasAncestorInSet
// il2cpp: bool GameManagers_MapEditorGameManager__HasAncestorInSet (GameManagers_MapEditorGameManager_o* __this, int32_t id, System_Collections_Generic_HashSet_int__o* ids, const MethodInfo* method);
// 0x181e6b040
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6b0de: nop 
// asm:   0x181e6b0e9: nop dword ptr [rax]

bool GameManagers_MapEditorGameManager__HasAncestorInSet
               (GameManagers_MapEditorGameManager_o *__this,int32_t id,
               System_Collections_Generic_HashSet_int__o *ids,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  bool bVar2;
  System_Collections_Generic_HashSet_int__o *__this_00;
  Map_MapObject_o *obj;
  
  if (Il2CppMethodInitialized_184344eef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184344eef = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_00,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (-1 < id) {
    if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) {
label_181e6b1db:
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
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_181e6b1db;
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
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_181e6b1db;
      obj = (Map_MapObject_o *)
            System_Collections_Generic_Dictionary_int__ulong___get_Item
                      (pSVar1,id,
                       (MethodInfo_14156F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
      id = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
      if (ids == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_181e6b1db;
      bVar2 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        ((System_Collections_Generic_HashSet_T__o *)ids,id,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar2) {
        return true;
      }
    } while (-1 < id);
  }
  return false;
}


// GameManagers.MapEditorGameManager$$SetupTemporaryPhysicalParenting
// il2cpp: void GameManagers_MapEditorGameManager__SetupTemporaryPhysicalParenting (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6e740
// eh: try 0x181e6e840..0x181e6ea3b -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6e9e1: mov rdx, qword ptr [rip + 0x2219900]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x181e6e9e8: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e6e9ed: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6e9f2: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e6e9f7: test rcx, rcx
// asm:   0x181e6e9fa: jne 0x181e6ea3b
// asm:   0x181e6ea3b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void GameManagers_MapEditorGameManager__SetupTemporaryPhysicalParenting
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  UnityEngine_GameObject_o *__this_01;
  bool bVar2;
  int32_t iVar3;
  Map_MapObject_o *obj;
  UnityEngine_Transform_o *__this_02;
  uint64_t uVar4;
  UnityEngine_Transform_o *parent;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_T__o local_28;
  
  if (Il2CppMethodInitialized_184344ef0 == '\0') {
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
    Il2CppMethodInitialized_184344ef0 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).HierarchyTreeViewEnabled != false) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
    if (__this_00 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this_00,
               (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                        (&local_28,
                         (MethodInfo_1530180 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
      if (!bVar2) break;
      iVar3 = (int32_t)local_28.fields._current;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar1,iVar3,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (bVar2) {
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
                        (pSVar1,iVar3,
                         (MethodInfo_14156F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        iVar3 = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
        if (-1 < iVar3) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                            (pSVar1,iVar3,
                             (MethodInfo_1407110 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if (bVar2) {
            if (obj == (Map_MapObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_01 = (obj->fields).GameObject;
            if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_02 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              ThrowNullReferenceException();
            }
            uVar4 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                              (pSVar1,iVar3,
                               (MethodInfo_14156F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            if (uVar4 == 0) {
              ThrowNullReferenceException();
            }
            if (*(UnityEngine_GameObject_o **)(uVar4 + 0x18) == (UnityEngine_GameObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            parent = UnityEngine_GameObject__get_transform
                               (*(UnityEngine_GameObject_o **)(uVar4 + 0x18),(MethodInfo *)0x0);
            if (__this_02 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_Transform__SetParent_2f5a7e0(__this_02,parent,true,(MethodInfo *)0x0);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_int___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
  }
  return;
}


// GameManagers.MapEditorGameManager$$TeardownTemporaryPhysicalParenting
// il2cpp: void GameManagers_MapEditorGameManager__TeardownTemporaryPhysicalParenting (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6eb40
// eh: try 0x181e6ec80..0x181e6edbe -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6ec79: nop dword ptr [rax]
// asm:   0x181e6ed78: mov rdx, qword ptr [rip + 0x2219569]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x181e6ed7f: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e6ed84: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6ed89: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e6ed8e: test rcx, rcx
// asm:   0x181e6ed91: jne 0x181e6edbe
// asm:   0x181e6edbe: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void GameManagers_MapEditorGameManager__TeardownTemporaryPhysicalParenting
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__MapObject__o *__this_00;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  UnityEngine_GameObject_o *__this_01;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_IEnumerable_TKey__o *source;
  System_Collections_Generic_List_TSource__o *__this_02;
  Map_MapObject_o *obj;
  UnityEngine_Transform_o *__this_03;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_T__o local_28;
  
  if (Il2CppMethodInitialized_184344ef1 == '\0') {
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
    Il2CppMethodInitialized_184344ef1 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).HierarchyTreeViewEnabled == false) {
    return;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) {
    source = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                        (MethodInfo_13C6500 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys);
    __this_02 = System_Linq_Enumerable__ToList_int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (MethodInfo_6C9670 *)MethodInfo_System_Linq_Enumerable_ToList_int);
    if (__this_02 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                 (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_02,
                 (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
      local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      local_28.fields._index = local_40._8_4_;
      local_28.fields._version = local_40._12_4_;
      local_28.fields._current = local_30;
      local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_40._8_8_ = &local_28;
      while( true ) {
        do {
          do {
            bVar2 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                              (&local_28,
                               (MethodInfo_1530180 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
            if (!bVar2) {
              System_Collections_Generic_List_Enumerator_int___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                         MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
              return;
            }
            iVar3 = (int32_t)local_28.fields._current;
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
                            (pSVar1,iVar3,
                             (MethodInfo_14156F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            iVar3 = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
          } while (iVar3 < 0);
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                            (pSVar1,iVar3,
                             (MethodInfo_1407110 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        } while (!bVar2);
        if (obj == (Map_MapObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_01 = (obj->fields).GameObject;
        if (__this_01 == (UnityEngine_GameObject_o *)0x0) break;
        __this_03 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
        if (__this_03 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Transform__SetParent_2f5a7e0
                  (__this_03,(UnityEngine_Transform_o *)0x0,true,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$NewCommand
// il2cpp: void GameManagers_MapEditorGameManager__NewCommand (GameManagers_MapEditorGameManager_o* __this, MapEditor_BaseCommand_o* command, bool syncInspector, const MethodInfo* method);
// 0x181e6b370

void GameManagers_MapEditorGameManager__NewCommand
               (GameManagers_MapEditorGameManager_o *__this,MapEditor_BaseCommand_o *command,
               bool syncInspector,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  int32_t length;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar4;
  System_Collections_Generic_List_BaseCommand__o *pSVar5;
  MapEditor_BaseCommand_c *pMVar6;
  UI_MapEditorMenu_o *__this_01;
  undefined7 in_register_00000081;
  MethodInfo *pMVar7;
  
  pMVar7 = (MethodInfo *)CONCAT71(in_register_00000081,syncInspector);
  if (Il2CppMethodInitialized_184344ef2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCommand_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCommand_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_TransformPositionCommand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_TransformPositionRotationCommand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_TransformScaleCommand);
    Il2CppMethodInitialized_184344ef2 = '\x01';
  }
  if (command != (MapEditor_BaseCommand_o *)0x0) {
    (*(command->klass->vtable)._4_Execute.methodPtr)
              (command,(System_Type_o *)(command->klass->vtable)._4_Execute.method,pMVar7);
    pMVar7 = MethodInfo_System_Collections_Generic_List_BaseCommand_Add;
    __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._undoCommands;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_00->fields)._items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          if ((uint)pSVar4->max_length <= uVar3) {
            ThrowIndexOutOfRangeException();
          }
          pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)command;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar3,command);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_00,(Il2CppObject *)command,
                     (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
        }
        pSVar5 = (__this->fields)._redoCommands;
        if (pSVar5 != (System_Collections_Generic_List_BaseCommand__o *)0x0) {
          length = (pSVar5->fields)._size;
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          (pSVar5->fields)._size = 0;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
          }
          pMVar6 = command->klass;
          bVar2 = (TypeInfo_MapEditor_TransformPositionCommand->_2).typeHierarchyDepth;
          if ((((pMVar6->_2).typeHierarchyDepth < bVar2) ||
              ((pMVar6->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
               (Il2CppClass *)TypeInfo_MapEditor_TransformPositionCommand)) &&
             ((bVar2 = (TypeInfo_MapEditor_TransformPositionRotationCommand->_2).typeHierarchyDepth,
              (pMVar6->_2).typeHierarchyDepth < bVar2 ||
              ((pMVar6->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
               (Il2CppClass *)TypeInfo_MapEditor_TransformPositionRotationCommand)))) {
            bVar2 = (TypeInfo_MapEditor_TransformScaleCommand->_2).typeHierarchyDepth;
            if ((pMVar6->_2).typeHierarchyDepth < bVar2) {
              return;
            }
            if ((pMVar6->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_MapEditor_TransformScaleCommand) {
              return;
            }
          }
          if (syncInspector) {
            __this_01 = (__this->fields)._menu;
            if (__this_01 == (UI_MapEditorMenu_o *)0x0) goto label_181e6b52c;
            UI_MapEditorMenu__SyncInspector(__this_01,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
label_181e6b52c:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$OnFinishLoading
// il2cpp: void GameManagers_MapEditorGameManager__OnFinishLoading (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6b540

void GameManagers_MapEditorGameManager__OnFinishLoading
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  byte bVar1;
  Map_MapScript_o *pMVar2;
  UI_MapEditorMenu_o *pUVar3;
  UI_MapEditorTopPanel_o *__this_00;
  System_Collections_Generic_List_string__o *pSVar4;
  UI_ExportPopup_o *__this_01;
  Map_MapVersionConversionResult_o *result;
  UI_MapEditorVersionConversionPopup_o *__this_02;
  int32_t iVar5;
  MapEditor_PositionGizmo_o *pMVar6;
  MapEditor_OutlineGizmo_o *value;
  MapEditor_RotationGizmo_o *value_00;
  MapEditor_ScaleGizmo_o *value_01;
  CustomLogic_CustomLogicEvaluator_o *value_02;
  System_String_o *pSVar7;
  UnityEngine_Events_UnityAction_o *__this_03;
  GameManagers_MapEditorGameManager__WaitAndAutosave_d__53_o *routine;
  
  if (Il2CppMethodInitialized_184344ef3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorGameManager_OnFinishLoading_b__51_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_184344ef3 = '\x01';
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  pMVar2 = TypeInfo_Map_MapManager->static_fields->MapScript;
  (__this->fields).MapScript = pMVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MapScript,pMVar2);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar3 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar3 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)pUVar3->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)pUVar3->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
    }
    (__this->fields)._menu = pUVar3;
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)pUVar3->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)pUVar3->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu,pUVar3);
  pMVar6 = MapEditor_PositionGizmo__Create((MethodInfo *)0x0);
  (__this->fields)._positionGizmo = pMVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._positionGizmo,pMVar6);
  value = MapEditor_OutlineGizmo__Create((MethodInfo *)0x0);
  (__this->fields)._outlineGizmo = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._outlineGizmo,value);
  value_00 = MapEditor_RotationGizmo__Create((MethodInfo *)0x0);
  (__this->fields)._rotationGizmo = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotationGizmo,value_00);
  value_01 = MapEditor_ScaleGizmo__Create((MethodInfo *)0x0);
  (__this->fields)._scaleGizmo = value_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scaleGizmo,value_01);
  iVar5 = GameManagers_MapEditorGameManager__GetHighestObjectId(__this,(MethodInfo *)0x0);
  pUVar3 = (__this->fields)._menu;
  (__this->fields)._currentObjectId = iVar5;
  if (pUVar3 != (UI_MapEditorMenu_o *)0x0) {
    UI_MapEditorMenu__ShowHierarchyPanel(pUVar3,(MethodInfo *)0x0);
    pMVar2 = (__this->fields).MapScript;
    if (pMVar2 != (Map_MapScript_o *)0x0) {
      pSVar7 = (pMVar2->fields).Logic;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      value_02 = CustomLogic_CustomLogicManager__GetEditorEvaluator(pSVar7,true,(MethodInfo *)0x0);
      (__this->fields).LogicEvaluator = value_02;
      Il2CppCodeGenWriteBarrier(&(__this->fields).LogicEvaluator,value_02);
      pMVar6 = (__this->fields)._positionGizmo;
      (__this->fields).CurrentGizmo = (MapEditor_BaseGizmo_o *)pMVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields).CurrentGizmo,pMVar6);
      pUVar3 = (__this->fields)._menu;
      if ((pUVar3 != (UI_MapEditorMenu_o *)0x0) &&
         (__this_00 = (pUVar3->fields)._topPanel, __this_00 != (UI_MapEditorTopPanel_o *)0x0)) {
        UI_MapEditorTopPanel__ApplyViewSettings(__this_00,(MethodInfo *)0x0);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar4 = TypeInfo_Map_MapLoader->static_fields->Errors;
        if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
          if (0 < (pSVar4->fields)._size) {
            pUVar3 = (__this->fields)._menu;
            if (pUVar3 == (UI_MapEditorMenu_o *)0x0) goto label_181e6b962;
            __this_01 = (UI_ExportPopup_o *)(pUVar3->fields).ErrorPopup;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar7 = System_String__Join_196ecd0
                               ("\n",
                                (System_Collections_Generic_IEnumerable_string__o *)
                                TypeInfo_Map_MapLoader->static_fields->Errors,(MethodInfo *)0x0);
            if (__this_01 == (UI_ExportPopup_o *)0x0) goto label_181e6b962;
            UI_ExportPopup__Show(__this_01,pSVar7,(MethodInfo *)0x0);
          }
          pMVar2 = (__this->fields).MapScript;
          if (pMVar2 != (Map_MapScript_o *)0x0) {
            if ((pMVar2->fields)._LastUpgradeResult_k__BackingField != (Map_MapVersionConversionResult_o *)0x0
               ) {
              iVar5 = Map_MapVersionConversionResult__get_VersionCount
                                ((pMVar2->fields)._LastUpgradeResult_k__BackingField,(MethodInfo *)0x0);
              if (0 < iVar5) {
                pUVar3 = (__this->fields)._menu;
                if ((pUVar3 != (UI_MapEditorMenu_o *)0x0) &&
                   (pMVar2 = (__this->fields).MapScript, pMVar2 != (Map_MapScript_o *)0x0)) {
                  result = (pMVar2->fields)._LastUpgradeResult_k__BackingField;
                  __this_02 = (pUVar3->fields).VersionConversionPopup;
                  __this_03 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                  UnityEngine_Events_UnityAction___ctor
                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_03,(Il2CppObject *)__this
                             ,(intptr_t)MethodInfo_GameManagers_MapEditorGameManager_OnFinishLoading_b__51_0,
                             (MethodInfo *)0x0);
                  if (__this_02 != (UI_MapEditorVersionConversionPopup_o *)0x0) {
                    UI_MapEditorVersionConversionPopup__Show(__this_02,result,__this_03,(MethodInfo *)0x0);
                    goto label_181e6b8eb;
                  }
                }
                goto label_181e6b962;
              }
            }
label_181e6b8eb:
            if (Il2CppMethodInitialized_184344ef5 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_GameManagers_MapEditorGameManager_WaitAndAutosave_d__53);
              Il2CppMethodInitialized_184344ef5 = '\x01';
            }
            routine = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_GameManagers_MapEditorGameManager_WaitAndAutosave_d__53);
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0
                      );
            (routine->fields).__1__state = 0;
            (routine->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
            UnityEngine_MonoBehaviour__StartCoroutine_Auto
                      ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_181e6b962:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$Awake
// il2cpp: void GameManagers_MapEditorGameManager__Awake (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e697d0

void GameManagers_MapEditorGameManager__Awake(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_MapEditorInputSettings_o *value;
  
  if (Il2CppMethodInitialized_184344ef4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184344ef4 = '\x01';
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar1 != (Settings_InputSettings_o *)0x0) {
    value = (pSVar1->fields).MapEditor;
    (__this->fields)._input = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._input,value);
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$WaitAndAutosave
// il2cpp: System_Collections_IEnumerator_o* GameManagers_MapEditorGameManager__WaitAndAutosave (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e70f50

System_Collections_IEnumerator_o *
GameManagers_MapEditorGameManager__WaitAndAutosave
          (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager__WaitAndAutosave_d__53_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ef5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_MapEditorGameManager_WaitAndAutosave_d__53);
    Il2CppMethodInitialized_184344ef5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager_WaitAndAutosave_d__53);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.MapEditorGameManager$$Update
// il2cpp: void GameManagers_MapEditorGameManager__Update (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e70f00

void GameManagers_MapEditorGameManager__Update(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  MapEditor_MapEditorRuler_o *__this_00;
  
  GameManagers_MapEditorGameManager__UpdateInput(__this,(MethodInfo *)0x0);
  GameManagers_MapEditorGameManager__UpdateBrush(__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Ruler;
  if (__this_00 != (MapEditor_MapEditorRuler_o *)0x0) {
    MapEditor_MapEditorRuler__Update(__this_00,(MethodInfo *)0x0);
    GameManagers_MapEditorGameManager__UpdateDrag(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$UpdateBrush
// il2cpp: void GameManagers_MapEditorGameManager__UpdateBrush (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6fab0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e70521: xor edx, edx
// asm:   0x181e70523: call 0x1820bc060  ; MapEditor_MapEditorBrush__ClearCenter()
// asm:   0x181e70528: jmp 0x181e704c1

void GameManagers_MapEditorGameManager__UpdateBrush
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UI_MapEditorMenu_o *pUVar4;
  Cameras_BaseCamera_o *x;
  UnityEngine_Camera_o *__this_00;
  MapEditor_MapEditorBrush_o *pMVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  Settings_MapEditorInputSettings_o *pSVar8;
  Settings_KeybindSetting_o *pSVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  UnityEngine_LayerMask_o UVar15;
  UnityEngine_EventSystems_EventSystem_o *x_00;
  UnityEngine_UI_InputField_o *x_01;
  UnityEngine_Vector3_o *pUVar16;
  UnityEngine_Ray_o *pUVar17;
  System_Int32_array *layers;
  System_Collections_Generic_List_MapScriptBaseObject__o *objs;
  MapEditor_AddObjectCommand_o *__this_01;
  int iVar18;
  int32_t iVar19;
  UnityEngine_Object_o *x_02;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  UnityEngine_Vector3_Fields local_e8;
  UnityEngine_Ray_o local_d8;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_RaycastHit_o local_88 [2];
  
  if (Il2CppMethodInitialized_184344ef6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse ScrollWheel");
    Il2CppMethodInitialized_184344ef6 = '\x01';
  }
  local_88[0].fields.m_Normal.fields.y = 0.0;
  local_88[0].fields.m_Normal.fields.z = 0.0;
  local_88[0].fields.m_FaceID = 0;
  local_b8.x = 0.0;
  local_b8.y = 0.0;
  local_88[0].fields.m_Distance = 0.0;
  local_88[0].fields.m_UV.fields.x = 0.0;
  local_88[0].fields.m_UV.fields.y = 0.0;
  local_88[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_b8.z = 0.0;
  local_88[0].fields.m_Point.fields.x = 0.0;
  local_88[0].fields.m_Point.fields.y = 0.0;
  local_88[0].fields.m_Point.fields.z = 0.0;
  local_88[0].fields.m_Normal.fields.x = 0.0;
  if ((__this->fields).Brush == (MapEditor_MapEditorBrush_o *)0x0) {
    return;
  }
  if ((((__this->fields).Brush)->fields).Active == false) {
    return;
  }
  pUVar4 = (__this->fields)._menu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar12) {
    return;
  }
  pUVar4 = (__this->fields)._menu;
  if (pUVar4 == (UI_MapEditorMenu_o *)0x0) goto label_181e7052a;
  bVar12 = UI_MapEditorMenu__IsPopupActive(pUVar4,(MethodInfo *)0x0);
  if (!bVar12) {
    pUVar4 = (__this->fields)._menu;
    if (pUVar4 == (UI_MapEditorMenu_o *)0x0) goto label_181e7052a;
    if ((pUVar4->fields).IsMouseUI == false) {
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      x_00 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar12 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar12) {
        if (x_00 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_181e7052a;
        x_02 = (UnityEngine_Object_o *)(x_00->fields).m_CurrentSelected;
      }
      else {
        x_02 = (UnityEngine_Object_o *)0x0;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar12 = UnityEngine_Object__op_Inequality(x_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar12) {
        if (x_02 == (UnityEngine_Object_o *)0x0) goto label_181e7052a;
        x_01 = UnityEngine_GameObject__GetComponent_object_
                         ((UnityEngine_GameObject_o *)x_02,
                          (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar12 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar12) goto label_181e70515;
      }
      x = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar12 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar12) {
        return;
      }
      if (x != (Cameras_BaseCamera_o *)0x0) {
        __this_00 = (x->fields).Camera;
        pUVar16 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Camera_o *)0x0) {
          local_e8.x = (pUVar16->fields).x;
          local_e8.y = (pUVar16->fields).y;
          local_e8.z = (pUVar16->fields).z;
          pUVar17 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                              (&local_d8,__this_00,(UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0);
          uVar10._0_4_ = (pUVar17->fields).m_Origin.fields.x;
          uVar10._4_4_ = (pUVar17->fields).m_Origin.fields.y;
          uVar11 = *(undefined8 *)&(pUVar17->fields).m_Origin.fields.z;
          uVar1._0_4_ = (pUVar17->fields).m_Direction.fields.y;
          uVar1._4_4_ = (pUVar17->fields).m_Direction.fields.z;
          layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
          if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
          }
          if (layers != (System_Int32_array *)0x0) {
            if ((int)layers->max_length == 0) {
              ThrowIndexOutOfRangeException();
            }
            layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject;
            UVar15 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
            UVar15 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar15.fields.m_Mask,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
            }
            local_d8.fields.m_Origin.fields._0_8_ = uVar10;
            local_d8.fields._8_8_ = uVar11;
            local_d8.fields.m_Direction.fields._4_8_ = uVar1;
            bVar12 = UnityEngine_Physics__Raycast_2fe5050
                               (&local_d8,local_88,100000.0,(int32_t)UVar15.fields.m_Mask,(MethodInfo *)0x0);
            pMVar5 = (__this->fields).Brush;
            if (bVar12) {
              pUVar16 = UnityEngine_RaycastHit__get_point
                                  ((UnityEngine_Vector3_o *)&local_d8,local_88,(MethodInfo *)0x0);
              uVar11._0_4_ = (pUVar16->fields).x;
              uVar11._4_4_ = (pUVar16->fields).y;
              fVar20 = (pUVar16->fields).z;
              pUVar16 = UnityEngine_RaycastHit__get_normal
                                  ((UnityEngine_Vector3_o *)&local_d8,local_88,(MethodInfo *)0x0);
              pUVar6 = (x->fields).Cache;
              if ((pUVar6 == (Utility_BaseComponentCache_o *)0x0) ||
                 (pUVar7 = (pUVar6->fields).Transform, pUVar7 == (UnityEngine_Transform_o *)0x0))
              goto label_181e7052a;
              uVar2._0_4_ = (pUVar16->fields).x;
              uVar2._4_4_ = (pUVar16->fields).y;
              fVar23 = (pUVar16->fields).z;
              pUVar16 = UnityEngine_Transform__get_right
                                  ((UnityEngine_Vector3_o *)&local_d8,pUVar7,(MethodInfo *)0x0);
              pUVar6 = (x->fields).Cache;
              if ((pUVar6 == (Utility_BaseComponentCache_o *)0x0) ||
                 (pUVar7 = (pUVar6->fields).Transform, pUVar7 == (UnityEngine_Transform_o *)0x0))
              goto label_181e7052a;
              uVar3._0_4_ = (pUVar16->fields).x;
              uVar3._4_4_ = (pUVar16->fields).y;
              fVar22 = (pUVar16->fields).z;
              pUVar16 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)&local_d8,pUVar7,(MethodInfo *)0x0);
              if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
              local_e8.x = (pUVar16->fields).x;
              local_e8.y = (pUVar16->fields).y;
              local_e8.z = (pUVar16->fields).z;
              local_d8.fields.m_Origin.fields.z = fVar20;
              local_d8.fields.m_Origin.fields._0_8_ = uVar11;
              local_a8._0_8_ = uVar3;
              local_a8.z = fVar22;
              local_98._0_8_ = uVar2;
              local_98.z = fVar23;
              MapEditor_MapEditorBrush__SetCenter_20c0e00
                        (pMVar5,(UnityEngine_Vector3_o *)&local_d8,(UnityEngine_Vector3_o *)&local_98,
                         (UnityEngine_Vector3_o *)&local_a8,(UnityEngine_Vector3_o *)&local_e8,
                         (MethodInfo *)0x0);
            }
            else {
              if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
              if (((pMVar5->fields).FlatPlane == false) || ((pMVar5->fields)._hasCenter == false)) {
                MapEditor_MapEditorBrush__ClearCenter(pMVar5,(MethodInfo *)0x0);
              }
              else {
                if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
                local_d8.fields.m_Origin.fields._0_8_ = uVar10;
                local_d8.fields._8_8_ = uVar11;
                local_d8.fields.m_Direction.fields._4_8_ = uVar1;
                bVar12 = MapEditor_MapEditorBrush__TryProjectRayToPlane
                                   (pMVar5,&local_d8,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
                pMVar5 = (__this->fields).Brush;
                if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
                if (bVar12) {
                  local_e8.x = local_b8.x;
                  local_e8.y = local_b8.y;
                  local_e8.z = local_b8.z;
                  MapEditor_MapEditorBrush__SetCenter
                            (pMVar5,(UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0);
                }
                else {
                  MapEditor_MapEditorBrush__ClearCenter(pMVar5,(MethodInfo *)0x0);
                }
              }
            }
            fVar20 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
            pSVar8 = (__this->fields)._input;
            if ((pSVar8 != (Settings_MapEditorInputSettings_o *)0x0) &&
               (pSVar9 = (pSVar8->fields).BrushCount, pSVar9 != (Settings_KeybindSetting_o *)0x0)) {
              bVar12 = Settings_KeybindSetting__GetKey(pSVar9,false,(MethodInfo *)0x0);
              pSVar8 = (__this->fields)._input;
              if ((pSVar8 != (Settings_MapEditorInputSettings_o *)0x0) &&
                 (pSVar9 = (pSVar8->fields).BrushCurve, pSVar9 != (Settings_KeybindSetting_o *)0x0)) {
                bVar13 = Settings_KeybindSetting__GetKey(pSVar9,false,(MethodInfo *)0x0);
                pMVar5 = (__this->fields).Brush;
                if (pMVar5 != (MapEditor_MapEditorBrush_o *)0x0) {
                  if ((pMVar5->fields).Mode == 1) {
                    pSVar8 = (__this->fields)._input;
                    if ((pSVar8 == (Settings_MapEditorInputSettings_o *)0x0) ||
                       (pSVar9 = (pSVar8->fields).BrushCurveAxisX, pSVar9 == (Settings_KeybindSetting_o *)0x0)
                       ) goto label_181e7052a;
                    bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar9,false,(MethodInfo *)0x0);
                    if (bVar14) {
                      pMVar5 = (__this->fields).Brush;
                      if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
                      (pMVar5->fields).CurveAxis = 1;
                    }
                    else {
                      pSVar8 = (__this->fields)._input;
                      if ((pSVar8 == (Settings_MapEditorInputSettings_o *)0x0) ||
                         (pSVar9 = (pSVar8->fields).BrushCurveAxisY,
                         pSVar9 == (Settings_KeybindSetting_o *)0x0)) goto label_181e7052a;
                      bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar9,false,(MethodInfo *)0x0);
                      if (bVar14) {
                        pMVar5 = (__this->fields).Brush;
                        if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
                        (pMVar5->fields).CurveAxis = 2;
                      }
                      else {
                        pSVar8 = (__this->fields)._input;
                        if ((pSVar8 == (Settings_MapEditorInputSettings_o *)0x0) ||
                           (pSVar9 = (pSVar8->fields).BrushCurveAxisZ,
                           pSVar9 == (Settings_KeybindSetting_o *)0x0)) goto label_181e7052a;
                        bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar9,false,(MethodInfo *)0x0);
                        if (bVar14) {
                          pMVar5 = (__this->fields).Brush;
                          if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
                          (pMVar5->fields).CurveAxis = 3;
                        }
                        else {
                          pSVar8 = (__this->fields)._input;
                          if ((pSVar8 == (Settings_MapEditorInputSettings_o *)0x0) ||
                             (pSVar9 = (pSVar8->fields).BrushCurveAxisNone,
                             pSVar9 == (Settings_KeybindSetting_o *)0x0)) goto label_181e7052a;
                          bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar9,false,(MethodInfo *)0x0);
                          if (bVar14) {
                            pMVar5 = (__this->fields).Brush;
                            if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
                            (pMVar5->fields).CurveAxis = 0;
                          }
                        }
                      }
                    }
                    if (0.0001 < ABS(fVar20)) {
                      pMVar5 = (__this->fields).Brush;
                      if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
                      iVar19 = 1;
                      if ((pMVar5->fields).CurveAxis != 0) {
                        iVar19 = (pMVar5->fields).CurveAxis;
                      }
                      fVar23 = 0.0;
                      if (fVar20 <= 0.0) {
                        fVar20 = -1.0;
                        iVar18 = -1;
                      }
                      else {
                        fVar20 = 1.0;
                        iVar18 = 1;
                      }
                      if (bVar13) {
                        if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
                        (pMVar5->fields).CurveAmount = fVar20 * 0.5 + (pMVar5->fields).CurveAmount;
                      }
                      else if (bVar12) {
                        if (iVar19 == 1) {
                          if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
                          iVar19 = iVar18 + (pMVar5->fields).GridX;
                          if (iVar19 < 1) {
                            iVar19 = 1;
                          }
                          (pMVar5->fields).GridX = iVar19;
                        }
                        else if (iVar19 == 2) {
                          if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
                          iVar19 = iVar18 + (pMVar5->fields).GridY;
                          if (iVar19 < 1) {
                            iVar19 = 1;
                          }
                          (pMVar5->fields).GridY = iVar19;
                        }
                        else if (iVar19 == 3) {
                          if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
                          iVar19 = iVar18 + (pMVar5->fields).GridZ;
                          if (iVar19 < 1) {
                            iVar19 = 1;
                          }
                          (pMVar5->fields).GridZ = iVar19;
                        }
                      }
                      else {
                        pUVar16 = MapEditor_MapEditorBrush__GetAverageGhostSize
                                            ((UnityEngine_Vector3_o *)&local_d8,pMVar5,(MethodInfo *)0x0);
                        if (iVar19 == 1) {
                          pMVar5 = (__this->fields).Brush;
                          fVar22 = (pUVar16->fields).x * 0.1;
                          if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
                          fVar21 = 0.5;
                          if (0.5 <= fVar22) {
                            fVar21 = fVar22;
                          }
                          fVar20 = fVar20 * fVar21 + (pMVar5->fields).SpacingX;
                          if (0.0 <= fVar20) {
                            fVar23 = fVar20;
                          }
                          (pMVar5->fields).SpacingX = fVar23;
                        }
                        else if (iVar19 == 2) {
                          pMVar5 = (__this->fields).Brush;
                          fVar22 = (pUVar16->fields).y * 0.1;
                          if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
                          fVar21 = 0.5;
                          if (0.5 <= fVar22) {
                            fVar21 = fVar22;
                          }
                          fVar20 = fVar20 * fVar21 + (pMVar5->fields).SpacingY;
                          if (0.0 <= fVar20) {
                            fVar23 = fVar20;
                          }
                          (pMVar5->fields).SpacingY = fVar23;
                        }
                        else {
                          fVar22 = (pUVar16->fields).z * 0.1;
                          if (iVar19 == 3) {
                            pMVar5 = (__this->fields).Brush;
                            if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
                            fVar21 = 0.5;
                            if (0.5 <= fVar22) {
                              fVar21 = fVar22;
                            }
                            fVar20 = fVar20 * fVar21 + (pMVar5->fields).SpacingZ;
                            if (0.0 <= fVar20) {
                              fVar23 = fVar20;
                            }
                            (pMVar5->fields).SpacingZ = fVar23;
                          }
                        }
                      }
                      pMVar5 = (__this->fields).Brush;
                      if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
                      MapEditor_MapEditorBrush__RegenerateGhosts(pMVar5,(MethodInfo *)0x0);
                      pUVar4 = (__this->fields)._menu;
                      if (pUVar4 == (UI_MapEditorMenu_o *)0x0) goto label_181e7052a;
                      UI_MapEditorMenu__SyncBrushPanelValues(pUVar4,(MethodInfo *)0x0);
                    }
                  }
                  else if (0.0001 < ABS(fVar20)) {
                    MapEditor_MapEditorBrush__SetRadius
                              (pMVar5,(fVar20 + fVar20 + 1.0) * (pMVar5->fields).Radius,(MethodInfo *)0x0);
                  }
                  pSVar8 = (__this->fields)._input;
                  if ((pSVar8 != (Settings_MapEditorInputSettings_o *)0x0) &&
                     (pSVar9 = (pSVar8->fields).BrushReroll, pSVar9 != (Settings_KeybindSetting_o *)0x0)) {
                    bVar12 = Settings_KeybindSetting__GetKeyDown(pSVar9,false,(MethodInfo *)0x0);
                    if (bVar12) {
                      pMVar5 = (__this->fields).Brush;
                      if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
                      MapEditor_MapEditorBrush__Reseed(pMVar5,(MethodInfo *)0x0);
                      pMVar5 = (__this->fields).Brush;
                      if (pMVar5 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e7052a;
                      MapEditor_MapEditorBrush__RegenerateGhosts(pMVar5,(MethodInfo *)0x0);
                    }
                    pSVar8 = (__this->fields)._input;
                    if ((pSVar8 != (Settings_MapEditorInputSettings_o *)0x0) &&
                       (pSVar9 = (pSVar8->fields).Select, pSVar9 != (Settings_KeybindSetting_o *)0x0)) {
                      bVar12 = Settings_KeybindSetting__GetKeyDown(pSVar9,false,(MethodInfo *)0x0);
                      if (!bVar12) {
                        return;
                      }
                      if (Il2CppMethodInitialized_184344ef7 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_AddObjectCommand);
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Count);
                        Il2CppMethodInitialized_184344ef7 = '\x01';
                      }
                      pMVar5 = (__this->fields).Brush;
                      if (pMVar5 != (MapEditor_MapEditorBrush_o *)0x0) {
                        if ((pMVar5->fields).Active == false) {
                          return;
                        }
                        objs = MapEditor_MapEditorBrush__BuildPlacements(pMVar5,(MethodInfo *)0x0);
                        if (objs != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
                          if ((objs->fields)._size == 0) {
                            return;
                          }
                          __this_01 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand);
                          MapEditor_AddObjectCommand___ctor(__this_01,objs,-1,(MethodInfo *)0x0);
                          GameManagers_MapEditorGameManager__NewCommand
                                    (__this,(MapEditor_BaseCommand_o *)__this_01,true,(MethodInfo *)0x0);
                          pUVar4 = (__this->fields)._menu;
                          if (pUVar4 != (UI_MapEditorMenu_o *)0x0) {
                            UI_MapEditorMenu__SyncHierarchyPanel(pUVar4,(MethodInfo *)0x0);
                            pMVar5 = (__this->fields).Brush;
                            if (pMVar5 != (MapEditor_MapEditorBrush_o *)0x0) {
                              if ((pMVar5->fields).RandomizeEachPlacement != false) {
                                MapEditor_MapEditorBrush__Reseed(pMVar5,(MethodInfo *)0x0);
                              }
                              pMVar5 = (__this->fields).Brush;
                              if (pMVar5 != (MapEditor_MapEditorBrush_o *)0x0) {
                                MapEditor_MapEditorBrush__RegenerateGhosts(pMVar5,(MethodInfo *)0x0);
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
      goto label_181e7052a;
    }
  }
label_181e70515:
  pMVar5 = (__this->fields).Brush;
  if (pMVar5 != (MapEditor_MapEditorBrush_o *)0x0) {
    MapEditor_MapEditorBrush__ClearCenter(pMVar5,(MethodInfo *)0x0);
    return;
  }
label_181e7052a:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$PlaceBrush
// il2cpp: void GameManagers_MapEditorGameManager__PlaceBrush (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6c550

void GameManagers_MapEditorGameManager__PlaceBrush
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  MapEditor_MapEditorBrush_o *pMVar1;
  UI_MapEditorMenu_o *__this_00;
  System_Collections_Generic_List_MapScriptBaseObject__o *objs;
  MapEditor_AddObjectCommand_o *__this_01;
  
  if (Il2CppMethodInitialized_184344ef7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_AddObjectCommand);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Count);
    Il2CppMethodInitialized_184344ef7 = '\x01';
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
      MapEditor_AddObjectCommand___ctor(__this_01,objs,-1,(MethodInfo *)0x0);
      GameManagers_MapEditorGameManager__NewCommand
                (__this,(MapEditor_BaseCommand_o *)__this_01,true,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._menu;
      if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
        UI_MapEditorMenu__SyncHierarchyPanel(__this_00,(MethodInfo *)0x0);
        pMVar1 = (__this->fields).Brush;
        if (pMVar1 != (MapEditor_MapEditorBrush_o *)0x0) {
          if ((pMVar1->fields).RandomizeEachPlacement != false) {
            MapEditor_MapEditorBrush__Reseed(pMVar1,(MethodInfo *)0x0);
          }
          pMVar1 = (__this->fields).Brush;
          if (pMVar1 != (MapEditor_MapEditorBrush_o *)0x0) {
            MapEditor_MapEditorBrush__RegenerateGhosts(pMVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$ToggleBrush
// il2cpp: void GameManagers_MapEditorGameManager__ToggleBrush (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6edd0

void GameManagers_MapEditorGameManager__ToggleBrush
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  MapEditor_MapEditorBrush_o *pMVar2;
  UI_MapEditorMenu_o *pUVar3;
  
  pMVar2 = (__this->fields).Brush;
  if (pMVar2 != (MapEditor_MapEditorBrush_o *)0x0) {
    bVar1 = (pMVar2->fields).Active;
    MapEditor_MapEditorBrush__SetActive((__this->fields).Brush,bVar1 == false,(MethodInfo *)0x0);
    if (bVar1 == false) {
      GameManagers_MapEditorGameManager__DeselectAll(__this,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._menu;
      if (pUVar3 == (UI_MapEditorMenu_o *)0x0) goto label_181e6ee48;
      UI_MapEditorMenu__ShowBrushPanel(pUVar3,(MethodInfo *)0x0);
    }
    else {
      pUVar3 = (__this->fields)._menu;
      if (pUVar3 == (UI_MapEditorMenu_o *)0x0) goto label_181e6ee48;
      UI_MapEditorMenu__HideBrushPanel(pUVar3,(MethodInfo *)0x0);
    }
    GameManagers_MapEditorGameManager__OnSelectionChange(__this,true,(MethodInfo *)0x0);
    return;
  }
label_181e6ee48:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$UpdateDrag
// il2cpp: void GameManagers_MapEditorGameManager__UpdateDrag (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e70540
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7081e: mov edx, edi
// asm:   0x181e70820: jmp 0x181e70835

void GameManagers_MapEditorGameManager__UpdateDrag
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  MapEditor_BaseGizmo_o *pMVar1;
  UnityEngine_Object_o *x;
  Settings_MapEditorInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  System_Collections_Generic_HashSet_MapObject__o *pSVar4;
  UnityEngine_Vector2_o start;
  bool bVar5;
  bool bVar6;
  UnityEngine_EventSystems_EventSystem_o *pUVar7;
  UnityEngine_UI_InputField_o *x_00;
  UnityEngine_Vector2_Fields *pUVar8;
  UI_MapEditorMenu_o *pUVar9;
  UnityEngine_Vector2_Fields start_00;
  UnityEngine_Vector2_Fields end;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_184344ef8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344ef8 = '\x01';
  }
  pUVar9 = (__this->fields)._menu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  pMVar1 = (__this->fields).CurrentGizmo;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pMVar1 = (__this->fields).CurrentGizmo;
    if (pMVar1 == (MapEditor_BaseGizmo_o *)0x0) goto label_181e708bd;
    bVar5 = (*(pMVar1->klass->vtable)._4_IsActive.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable)._4_IsActive.method);
    if (bVar5) {
      (__this->fields)._isDrag = false;
    }
  }
  pUVar9 = (__this->fields)._menu;
  if (pUVar9 != (UI_MapEditorMenu_o *)0x0) {
    bVar5 = UI_MapEditorMenu__IsPopupActive(pUVar9,(MethodInfo *)0x0);
    if (bVar5) {
      (__this->fields)._isDrag = false;
    }
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar7 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      x = (UnityEngine_Object_o *)(pUVar7->fields).m_CurrentSelected;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if (x == (UnityEngine_Object_o *)0x0) goto label_181e708bd;
        x_00 = UnityEngine_GameObject__GetComponent_object_
                         ((UnityEngine_GameObject_o *)x,
                          (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          (__this->fields)._isDrag = false;
        }
      }
      pUVar9 = (__this->fields)._menu;
      if ((__this->fields)._isDrag == false) {
        if (Il2CppMethodInitialized_18433e3c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_18433e3c9 = '\x01';
        }
        start_00 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
        if (Il2CppMethodInitialized_18433e3c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_18433e3c9 = '\x01';
        }
        if (pUVar9 != (UI_MapEditorMenu_o *)0x0) {
          end = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
label_181e70756:
          UI_MapEditorMenu__SetDrag
                    (pUVar9,false,(UnityEngine_Vector2_o)start_00,(UnityEngine_Vector2_o)end,(MethodInfo *)0x0
                    );
          return;
        }
      }
      else {
        start.fields.x = (__this->fields)._dragStart.fields.x;
        start.fields.y = (__this->fields)._dragStart.fields.y;
        pUVar8 = (UnityEngine_Vector2_Fields *)
                 UnityEngine_Input__get_mousePosition(local_38,(MethodInfo *)0x0);
        if (pUVar9 != (UI_MapEditorMenu_o *)0x0) {
          UI_MapEditorMenu__SetDrag(pUVar9,true,start,(UnityEngine_Vector2_o)*pUVar8,(MethodInfo *)0x0);
          pSVar2 = (__this->fields)._input;
          if ((pSVar2 != (Settings_MapEditorInputSettings_o *)0x0) &&
             (pSVar3 = (pSVar2->fields).Select, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
            bVar5 = Settings_KeybindSetting__GetKeyUp(pSVar3,false,(MethodInfo *)0x0);
            if (!bVar5) {
              return;
            }
            pSVar2 = (__this->fields)._input;
            if ((pSVar2 != (Settings_MapEditorInputSettings_o *)0x0) &&
               (pSVar3 = (pSVar2->fields).Multiselect, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
              bVar6 = Settings_KeybindSetting__GetKey(pSVar3,false,(MethodInfo *)0x0);
              bVar5 = false;
              if (bVar6) {
                pSVar4 = (__this->fields).SelectedObjects;
                if (pSVar4 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_181e708bd;
                bVar5 = 0 < (pSVar4->fields)._count;
              }
              GameManagers_MapEditorGameManager__Select(__this,bVar5,(MethodInfo *)0x0);
              (__this->fields)._isDrag = false;
              pUVar9 = (__this->fields)._menu;
              if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_18433e3c9 = '\x01';
              }
              start_00 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
              if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_18433e3c9 = '\x01';
              }
              if (pUVar9 != (UI_MapEditorMenu_o *)0x0) {
                end = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
                goto label_181e70756;
              }
            }
          }
        }
      }
    }
  }
label_181e708bd:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$UpdateInput
// il2cpp: void GameManagers_MapEditorGameManager__UpdateInput (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e708d0

void GameManagers_MapEditorGameManager__UpdateInput
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  float fVar1;
  UI_MapEditorMenu_o *pUVar2;
  Settings_MapEditorInputSettings_o *pSVar3;
  Settings_KeybindSetting_o *pSVar4;
  UnityEngine_Object_o *x;
  MapEditor_MapEditorRuler_o *pMVar5;
  UI_MapEditorTopPanel_o *pUVar6;
  UI_MapEditorAddObjectPopup_o *pUVar7;
  UI_MapEditorAddVariantPopup_o *pUVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  UnityEngine_EventSystems_EventSystem_o *pUVar12;
  UnityEngine_UI_InputField_o *x_00;
  UnityEngine_Vector3_o *pUVar13;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184344ef9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344ef9 = '\x01';
  }
  pUVar2 = (__this->fields)._menu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar10) {
    return;
  }
  pSVar3 = (__this->fields)._input;
  if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
     (pSVar4 = (pSVar3->fields).SaveMap, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
    bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
    if (bVar10) {
      pUVar2 = (__this->fields)._menu;
      if ((pUVar2 != (UI_MapEditorMenu_o *)0x0) &&
         (pUVar6 = (pUVar2->fields)._topPanel, pUVar6 != (UI_MapEditorTopPanel_o *)0x0)) {
        UI_MapEditorTopPanel__Save(pUVar6,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      pUVar12 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if (pUVar12 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
        x = (UnityEngine_Object_o *)(pUVar12->fields).m_CurrentSelected;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar10 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar10) {
          if (x == (UnityEngine_Object_o *)0x0) goto label_181e70eee;
          x_00 = UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)x,
                            (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar10 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        }
        else {
          bVar10 = false;
        }
        pUVar2 = (__this->fields)._menu;
        if (pUVar2 != (UI_MapEditorMenu_o *)0x0) {
          bVar11 = UI_MapEditorMenu__IsPopupActive(pUVar2,(MethodInfo *)0x0);
          if (bVar11) {
            pUVar2 = (__this->fields)._menu;
            if ((pUVar2 != (UI_MapEditorMenu_o *)0x0) &&
               (pUVar7 = (pUVar2->fields).AddObjectPopup, pUVar7 != (UI_MapEditorAddObjectPopup_o *)0x0)) {
              if ((pUVar7->fields).IsActive == false) {
                pUVar8 = (pUVar2->fields).AddVariantPopup;
                if (pUVar8 == (UI_MapEditorAddVariantPopup_o *)0x0) goto label_181e70eee;
                if ((pUVar8->fields).IsActive == false) {
                  return;
                }
              }
              bVar11 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
              if (!bVar11) {
                if (bVar10 != false) {
                  return;
                }
                pSVar3 = (__this->fields)._input;
                if ((pSVar3 == (Settings_MapEditorInputSettings_o *)0x0) ||
                   (pSVar4 = (pSVar3->fields).AddObject, pSVar4 == (Settings_KeybindSetting_o *)0x0))
                goto label_181e70eee;
                bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
                if (!bVar10) {
                  return;
                }
              }
              pUVar2 = (__this->fields)._menu;
              if (pUVar2 != (UI_MapEditorMenu_o *)0x0) {
                UI_MapEditorMenu__ToggleAddObjectPopup(pUVar2,(MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            if (bVar10 != false) {
              return;
            }
            pSVar3 = (__this->fields)._input;
            if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
               (pSVar4 = (pSVar3->fields).Undo, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
              bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
              if (bVar10) {
                GameManagers_MapEditorGameManager__Undo(__this,(MethodInfo *)0x0);
                goto label_181e70e21;
              }
              pSVar3 = (__this->fields)._input;
              if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
                 (pSVar4 = (pSVar3->fields).Redo, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
                bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
                if (bVar10) {
                  GameManagers_MapEditorGameManager__Redo(__this,(MethodInfo *)0x0);
                  (__this->fields).IgnoreNextSelect = false;
                  return;
                }
                pSVar3 = (__this->fields)._input;
                if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
                   (pSVar4 = (pSVar3->fields).CopyObjects, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
                  bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
                  if (bVar10) {
                    GameManagers_MapEditorGameManager__Copy(__this,(MethodInfo *)0x0);
                    (__this->fields).IgnoreNextSelect = false;
                    return;
                  }
                  pSVar3 = (__this->fields)._input;
                  if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
                     (pSVar4 = (pSVar3->fields).Paste, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
                    bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
                    if (bVar10) {
                      GameManagers_MapEditorGameManager__Paste_1e6be00(__this,-1,(MethodInfo *)0x0);
                      (__this->fields).IgnoreNextSelect = false;
                      return;
                    }
                    pSVar3 = (__this->fields)._input;
                    if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
                       (pSVar4 = (pSVar3->fields).Cut, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
                      bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
                      if (bVar10) {
                        GameManagers_MapEditorGameManager__Copy(__this,(MethodInfo *)0x0);
label_181e70da1:
                        GameManagers_MapEditorGameManager__Delete(__this,(MethodInfo *)0x0);
                        (__this->fields).IgnoreNextSelect = false;
                        return;
                      }
                      pSVar3 = (__this->fields)._input;
                      if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
                         (pSVar4 = (pSVar3->fields).AddObject, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
                        bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
                        if (bVar10) {
                          pUVar2 = (__this->fields)._menu;
                          if ((pUVar2 != (UI_MapEditorMenu_o *)0x0) &&
                             (pUVar7 = (pUVar2->fields).AddObjectPopup,
                             pUVar7 != (UI_MapEditorAddObjectPopup_o *)0x0)) {
                            if ((pUVar7->fields).IsActive == false) {
                              pUVar8 = (pUVar2->fields).AddVariantPopup;
                              if (pUVar8 == (UI_MapEditorAddVariantPopup_o *)0x0) goto label_181e70eee;
                              if (((pUVar8->fields).IsActive == false) &&
                                 ((pUVar2->fields).IsMouseUI != false)) goto label_181e70e21;
                            }
                            UI_MapEditorMenu__ToggleAddObjectPopup(pUVar2,(MethodInfo *)0x0);
                            (__this->fields).IgnoreNextSelect = false;
                            return;
                          }
                        }
                        else {
                          pSVar3 = (__this->fields)._input;
                          if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
                             (pSVar4 = (pSVar3->fields).Delete, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
                            bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
                            if (bVar10) goto label_181e70da1;
                            pSVar3 = (__this->fields)._input;
                            if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
                               (pSVar4 = (pSVar3->fields).Deselect, pSVar4 != (Settings_KeybindSetting_o *)0x0
                               )) {
                              bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
                              if (bVar10) {
                                GameManagers_MapEditorGameManager__DeselectAll(__this,(MethodInfo *)0x0);
                                GameManagers_MapEditorGameManager__OnSelectionChange
                                          (__this,true,(MethodInfo *)0x0);
                                (__this->fields).IgnoreNextSelect = false;
                                return;
                              }
                              pSVar3 = (__this->fields)._input;
                              if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
                                 (pSVar4 = (pSVar3->fields).ChangeGizmo,
                                 pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
                                bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
                                if (bVar10) {
                                  pUVar2 = (__this->fields)._menu;
                                  if ((pUVar2 != (UI_MapEditorMenu_o *)0x0) &&
                                     (pUVar6 = (pUVar2->fields)._topPanel,
                                     pUVar6 != (UI_MapEditorTopPanel_o *)0x0)) {
                                    UI_MapEditorTopPanel__NextGizmo(pUVar6,(MethodInfo *)0x0);
                                    (__this->fields).IgnoreNextSelect = false;
                                    return;
                                  }
                                }
                                else {
                                  pSVar3 = (__this->fields)._input;
                                  if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
                                     (pSVar4 = (pSVar3->fields).ToggleSnap,
                                     pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
                                    bVar10 = Settings_KeybindSetting__GetKeyDown
                                                       (pSVar4,false,(MethodInfo *)0x0);
                                    if (bVar10) {
                                      pUVar2 = (__this->fields)._menu;
                                      if ((pUVar2 != (UI_MapEditorMenu_o *)0x0) &&
                                         (pUVar6 = (pUVar2->fields)._topPanel,
                                         pUVar6 != (UI_MapEditorTopPanel_o *)0x0)) {
                                        UI_MapEditorTopPanel___Setup_b__41_5(pUVar6,(MethodInfo *)0x0);
                                        (__this->fields).IgnoreNextSelect = false;
                                        return;
                                      }
                                    }
                                    else {
                                      pSVar3 = (__this->fields)._input;
                                      if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
                                         (pSVar4 = (pSVar3->fields).Select,
                                         pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
                                        bVar10 = Settings_KeybindSetting__GetKeyDown
                                                           (pSVar4,false,(MethodInfo *)0x0);
                                        if (bVar10) {
                                          pUVar2 = (__this->fields)._menu;
                                          if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_181e70eee;
                                          if ((pUVar2->fields).IsMouseUI == false) {
                                            pMVar5 = (__this->fields).Ruler;
                                            if (pMVar5 == (MapEditor_MapEditorRuler_o *)0x0)
                                            goto label_181e70eee;
                                            if ((pMVar5->fields)._Active_k__BackingField == false) {
                                              (__this->fields)._isDrag = true;
                                              pUVar13 = UnityEngine_Input__get_mousePosition
                                                                  (&local_18,(MethodInfo *)0x0);
                                              fVar9 = (pUVar13->fields).y;
                                              fVar1 = (pUVar13->fields).z;
                                              (__this->fields)._dragStart.fields.x = (pUVar13->fields).x;
                                              (__this->fields)._dragStart.fields.y = fVar9;
                                              (__this->fields)._dragStart.fields.z = fVar1;
                                              (__this->fields).IgnoreNextSelect = false;
                                              return;
                                            }
                                          }
                                        }
label_181e70e21:
                                        (__this->fields).IgnoreNextSelect = false;
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
label_181e70eee:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$Save
// il2cpp: void GameManagers_MapEditorGameManager__Save (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6d670

void GameManagers_MapEditorGameManager__Save(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_MapEditorTopPanel_o *__this_00;
  
  pUVar1 = (__this->fields)._menu;
  if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
     (__this_00 = (pUVar1->fields)._topPanel, __this_00 != (UI_MapEditorTopPanel_o *)0x0)) {
    UI_MapEditorTopPanel__Save(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$OnSelectionChange
// il2cpp: void GameManagers_MapEditorGameManager__OnSelectionChange (GameManagers_MapEditorGameManager_o* __this, bool focusHierarchy, const MethodInfo* method);
// 0x181e6b9c0
// eh: try 0x181e6bb00..0x181e6bd45 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6bb99: mov rdx, qword ptr [rip + 0x221f688]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x181e6bba0: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e6bba5: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6bbaa: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e6bbaf: test rcx, rcx
// asm:   0x181e6bbb2: jne 0x181e6bd45
// asm:   0x181e6bbb8: movzx r15d, byte ptr [rsp + 0x88]
// asm:   0x181e6bbc1: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x181e6bd45: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void GameManagers_MapEditorGameManager__OnSelectionChange
               (GameManagers_MapEditorGameManager_o *__this,bool focusHierarchy,MethodInfo *method)

{
  System_Collections_Generic_HashSet_MapObject__o *pSVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  MapEditor_MapEditorBrush_o *pMVar3;
  UI_MapEditorMenu_o *pUVar4;
  UI_MapEditorHierarchyPanel_o *pUVar5;
  MapEditor_OutlineGizmo_o *pMVar6;
  MapEditor_PositionGizmo_o *pMVar7;
  MapEditor_RotationGizmo_o *pMVar8;
  MapEditor_ScaleGizmo_o *pMVar9;
  Map_MapObject_o *obj;
  bool bVar10;
  System_Collections_Generic_HashSet_MapObject__o *__this_01;
  System_Collections_Generic_List_MapObject__o *objs;
  undefined1 local_50 [16];
  Map_MapObject_o *local_40;
  undefined1 local_38 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_30;
  Map_MapObject_o *local_28;
  
  if (Il2CppMethodInitialized_184344efa == '\0') {
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
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_ctor_40ddfe0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_MapObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_ctor_40bb3a8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184344efa = '\x01';
  }
  local_38 = (undefined1  [8])0x0;
  pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_28 = (Map_MapObject_o *)0x0;
  pSVar1 = (__this->fields).SelectedObjects;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_MapObject);
  System_Collections_Generic_HashSet_object____ctor_176d720
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (System_Collections_Generic_IEnumerable_T__o *)pSVar1,
             (MethodInfo_176D720 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_ctor_40ddfe0);
  if (__this_01 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_181e6bd2e;
  System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,
             (System_Collections_Generic_HashSet_Vector2Int__o *)__this_01,
             (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
  local_38 = (undefined1  [8])local_50._0_8_;
  pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50._8_8_;
  local_28 = local_40;
  local_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_50._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38;
  while( true ) {
    bVar10 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                       ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_38,
                        (MethodInfo_15381F0 *)
                        MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
    obj = local_28;
    if (!bVar10) break;
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
    __this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (__this_00 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar10 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                       (__this_00,(pMVar2->fields).Id,
                        (MethodInfo_1407110 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    if (!bVar10) {
      GameManagers_MapEditorGameManager__DeselectObject(__this,obj,(MethodInfo *)0x0);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
             MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
  pSVar1 = (__this->fields).SelectedObjects;
  if (pSVar1 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_181e6bd2e;
  if ((pSVar1->fields)._count < 1) {
label_181e6bc34:
    pUVar4 = (__this->fields)._menu;
    if (pUVar4 == (UI_MapEditorMenu_o *)0x0) goto label_181e6bd2e;
    UI_MapEditorMenu__HideInspector(pUVar4,(MethodInfo *)0x0);
  }
  else {
    pMVar3 = (__this->fields).Brush;
    if (pMVar3 == (MapEditor_MapEditorBrush_o *)0x0) goto label_181e6bd2e;
    if ((pMVar3->fields).Active != false) goto label_181e6bc34;
    pUVar4 = (__this->fields)._menu;
    pSVar1 = (__this->fields).SelectedObjects;
    objs = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
    System_Collections_Generic_List_object____ctor_94fb10
              ((System_Collections_Generic_List_object__o *)objs,
               (System_Collections_Generic_IEnumerable_T__o *)pSVar1,
               (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor_40bb3a8);
    if (pUVar4 == (UI_MapEditorMenu_o *)0x0) goto label_181e6bd2e;
    UI_MapEditorMenu__ShowInspector_22cd590(pUVar4,objs,(MethodInfo *)0x0);
  }
  pUVar4 = (__this->fields)._menu;
  if ((pUVar4 != (UI_MapEditorMenu_o *)0x0) &&
     (pUVar5 = (pUVar4->fields).HierarchyPanel, pUVar5 != (UI_MapEditorHierarchyPanel_o *)0x0)) {
    UI_MapEditorHierarchyPanel__SyncSelectedItems(pUVar5,(MethodInfo *)0x0);
    if (focusHierarchy) {
      pSVar1 = (__this->fields).SelectedObjects;
      if (pSVar1 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_181e6bd2e;
      if (0 < (pSVar1->fields)._count) {
        pUVar4 = (__this->fields)._menu;
        if ((pUVar4 == (UI_MapEditorMenu_o *)0x0) ||
           (pUVar5 = (pUVar4->fields).HierarchyPanel, pUVar5 == (UI_MapEditorHierarchyPanel_o *)0x0))
        goto label_181e6bd2e;
        UI_MapEditorHierarchyPanel__FocusSelectionFromScene(pUVar5,(MethodInfo *)0x0);
      }
    }
    pMVar6 = (__this->fields)._outlineGizmo;
    if (pMVar6 != (MapEditor_OutlineGizmo_o *)0x0) {
      (*(pMVar6->klass->vtable)._7_OnSelectionChange.methodPtr)
                (pMVar6,(pMVar6->klass->vtable)._7_OnSelectionChange.method);
      pMVar7 = (__this->fields)._positionGizmo;
      if (pMVar7 != (MapEditor_PositionGizmo_o *)0x0) {
        (*(pMVar7->klass->vtable)._7_OnSelectionChange.methodPtr)
                  (pMVar7,(pMVar7->klass->vtable)._7_OnSelectionChange.method);
        pMVar8 = (__this->fields)._rotationGizmo;
        if (pMVar8 != (MapEditor_RotationGizmo_o *)0x0) {
          (*(pMVar8->klass->vtable)._7_OnSelectionChange.methodPtr)
                    (pMVar8,(pMVar8->klass->vtable)._7_OnSelectionChange.method);
          pMVar9 = (__this->fields)._scaleGizmo;
          if (pMVar9 != (MapEditor_ScaleGizmo_o *)0x0) {
            (*(pMVar9->klass->vtable)._7_OnSelectionChange.methodPtr)
                      (pMVar9,(pMVar9->klass->vtable)._7_OnSelectionChange.method);
            return;
          }
        }
      }
    }
  }
label_181e6bd2e:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$SyncGizmos
// il2cpp: void GameManagers_MapEditorGameManager__SyncGizmos (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6eab0

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
// 0x181e6df80

void GameManagers_MapEditorGameManager__SetGizmo
               (GameManagers_MapEditorGameManager_o *__this,System_String_o *gizmo,MethodInfo *method)

{
  bool bVar1;
  MapEditor_PositionGizmo_o *value;
  
  if (Il2CppMethodInitialized_184344efb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    Il2CppMethodInitialized_184344efb = '\x01';
  }
  bVar1 = System_String__op_Equality(gizmo,"Position",(MethodInfo *)0x0);
  if (bVar1) {
    value = (__this->fields)._positionGizmo;
  }
  else {
    bVar1 = System_String__op_Equality(gizmo,"Rotation",(MethodInfo *)0x0);
    if (bVar1) {
      value = (MapEditor_PositionGizmo_o *)(__this->fields)._rotationGizmo;
    }
    else {
      value = (MapEditor_PositionGizmo_o *)(__this->fields)._scaleGizmo;
    }
  }
  (__this->fields).CurrentGizmo = (MapEditor_BaseGizmo_o *)value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CurrentGizmo,value);
  GameManagers_MapEditorGameManager__SyncGizmos(__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager$$SetGizmoMode
// il2cpp: void GameManagers_MapEditorGameManager__SetGizmoMode (GameManagers_MapEditorGameManager_o* __this, int32_t mode, const MethodInfo* method);
// 0x181e6df70

void GameManagers_MapEditorGameManager__SetGizmoMode
               (GameManagers_MapEditorGameManager_o *__this,int32_t mode,MethodInfo *method)

{
  (__this->fields).CurrentGizmoMode = mode;
  GameManagers_MapEditorGameManager__SyncGizmos(__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager$$SetGridAxes
// il2cpp: void GameManagers_MapEditorGameManager__SetGridAxes (GameManagers_MapEditorGameManager_o* __this, System_Collections_Generic_HashSet_int__o* axes, const MethodInfo* method);
// 0x181e6e030

void GameManagers_MapEditorGameManager__SetGridAxes
               (GameManagers_MapEditorGameManager_o *__this,System_Collections_Generic_HashSet_int__o *axes,
               MethodInfo *method)

{
  System_Boolean_array *pSVar1;
  UnityEngine_GameObject_array *pUVar2;
  bool bVar3;
  UnityEngine_GameObject_o *__this_00;
  GameManagers_MapEditorSceneGrid_o *pGVar4;
  uint item;
  ulonglong uVar5;
  
  if (Il2CppMethodInitialized_184344efc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MapEditorSceneGrid);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorSceneGrid");
    Il2CppMethodInitialized_184344efc = '\x01';
  }
  pGVar4 = (__this->fields)._sceneGrid;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (axes == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_181e6e1de;
    if ((axes->fields)._count == 0) {
      return;
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor(__this_00,"MapEditorSceneGrid",(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_181e6e1de;
    pGVar4 = UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_MapEditorSceneGrid
                       );
    (__this->fields)._sceneGrid = pGVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._sceneGrid,pGVar4);
  }
  pGVar4 = (__this->fields)._sceneGrid;
  if (pGVar4 != (GameManagers_MapEditorSceneGrid_o *)0x0) {
    if (Il2CppMethodInitialized_184344f0a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      Il2CppMethodInitialized_184344f0a = '\x01';
    }
    uVar5 = 0;
    while( true ) {
      pSVar1 = (pGVar4->fields)._enabledAxes;
      item = (uint)uVar5;
      if (axes == (System_Collections_Generic_HashSet_int__o *)0x0) {
        bVar3 = false;
      }
      else {
        bVar3 = System_Collections_Generic_HashSet_Int32Enum___Contains
                          ((System_Collections_Generic_HashSet_T__o *)axes,item,
                           (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      }
      if (pSVar1 == (System_Boolean_array *)0x0) break;
      if ((uint)pSVar1->max_length <= item) {
label_181e6e1e4:
        ThrowIndexOutOfRangeException();
      }
      pSVar1->m_Items[uVar5] = bVar3;
      pUVar2 = (pGVar4->fields)._planes;
      if (pUVar2 == (UnityEngine_GameObject_array *)0x0) break;
      if ((uint)pUVar2->max_length <= item) goto label_181e6e1e4;
      pSVar1 = (pGVar4->fields)._enabledAxes;
      if (pSVar1 == (System_Boolean_array *)0x0) break;
      if ((uint)pSVar1->max_length <= item) goto label_181e6e1e4;
      if (pUVar2->m_Items[uVar5] == (UnityEngine_GameObject_o *)0x0) break;
      UnityEngine_GameObject__SetActive
                (pUVar2->m_Items[uVar5],pSVar1->m_Items[uVar5] != false,(MethodInfo *)0x0);
      uVar5 = (ulonglong)(item + 1);
      if (2 < (int)(item + 1)) {
        GameManagers_MapEditorSceneGrid__RefreshIfNeeded(pGVar4,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_181e6e1de:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$GetNextObjectId
// il2cpp: int32_t GameManagers_MapEditorGameManager__GetNextObjectId (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6abf0

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
// 0x181e6aa70
// eh: try 0x181e6ab70..0x181e6ab97 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6ab8e: mov dword ptr [rsp + 0x80], edi
// asm:   0x181e6ab95: jmp 0x181e6ab70
// asm:   0x181e6aba8: mov rdx, qword ptr [rip + 0x2244ff9]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
// asm:   0x181e6abaf: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e6abb4: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6abb9: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e6abbe: test rcx, rcx
// asm:   0x181e6abc1: jne 0x181e6abdd
// asm:   0x181e6abc3: mov edi, dword ptr [rsp + 0x80]
// asm:   0x181e6abdd: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

int32_t GameManagers_MapEditorGameManager__GetHighestObjectId
                  (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__MapObject__o *__this_00;
  bool bVar1;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  int iVar2;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_28;
  
  if (Il2CppMethodInitialized_184344efd == '\0') {
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
    Il2CppMethodInitialized_184344efd = '\x01';
  }
  local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._currentKey = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if ((__this_00 != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) &&
     (__this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             (MethodInfo_13C6500 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys),
     __this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_StylePropertyAnimationSystem_ElementPropertyPair__Int32Enum___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_40,
               __this_01,
               (MethodInfo_F1E550 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_MapObject_GetEnumerator);
    local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._currentKey = local_30;
    local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    iVar2 = 0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_uint__object___MoveNext
                        (&local_28,
                         (MethodInfo_15638A0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_MoveNext
                        );
      if (!bVar1) break;
      if (iVar2 <= (int)local_28.fields._currentKey) {
        iVar2 = (int)local_28.fields._currentKey;
      }
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
              );
    return iVar2;
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorGameManager$$get_LightsOn
// il2cpp: bool GameManagers_MapEditorGameManager__get_LightsOn (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e71150

bool GameManagers_MapEditorGameManager__get_LightsOn
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  return (__this->fields)._lightsOn;
}


// GameManagers.MapEditorGameManager$$TryGetSetting<object>
// il2cpp: Il2CppObject* GameManagers_MapEditorGameManager__TryGetSetting_object_ (GameManagers_MapEditorGameManager_o* __this, System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, System_String_o* key, Il2CppObject* Default, const MethodInfo_72BF00* method);
// 0x18072bf00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18072bfff: jmp 0x18072bfe6

Il2CppObject *
GameManagers_MapEditorGameManager__TryGetSetting_object_
          (GameManagers_MapEditorGameManager_o *__this,
          System_Collections_Generic_Dictionary_string__BaseSetting__o *settings,System_String_o *key,
          Il2CppObject *Default,MethodInfo_72BF00 *method)

{
  bool bVar1;
  Settings_BaseSetting_o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  
  if (method->rgctx_data == (MethodInfo_72BF00_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    if (method->rgctx_data == (MethodInfo_72BF00_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  if (settings == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)settings,(Il2CppObject *)key,
                     (MethodInfo_1455450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ContainsKey);
  if (bVar1) {
    pSVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                        (Il2CppObject *)key,
                        (MethodInfo_147A5B0 *)
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
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
      pIVar3 = method->rgctx_data->_0_T;
      if (((pIVar3->_2).bitflags1 & 1) == 0) {
        pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
      }
      if (pSVar2 == (Settings_BaseSetting_o *)0x0) {
        pIVar4 = (Il2CppObject *)0x0;
      }
      else {
        pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,pIVar3);
        if (pIVar4 == (Il2CppObject *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar2,pIVar3);
        }
      }
      return pIVar4;
    }
  }
  return Default;
}


// GameManagers.MapEditorGameManager$$ToggleLights
// il2cpp: void GameManagers_MapEditorGameManager__ToggleLights (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6ee50
// eh: try 0x181e6f0d2..0x181e6f53e -> pad 0x18333cf30 (+2 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181e6f573..0x181e6f58b -> pad 0x180355dd0 cleanup
// eh: try 0x181e6f610..0x181e6f780 -> pad 0x1833193c0 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 66 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6f000: mov qword ptr [rsp + 0x140], rsi
// asm:   0x181e6f008: jmp 0x181e6f03d
// asm:   0x181e6f206: mov rsi, qword ptr [rsp + 0x140]
// asm:   0x181e6f49f: nop 
// asm:   0x181e6f4c0: mov rsi, qword ptr [rsp + 0x140]
// asm:   0x181e6f4c8: jmp 0x181e6f0d2
// asm:   0x181e6f4cd: mov rdx, qword ptr [rip + 0x221c534]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose
// asm:   0x181e6f4d4: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e6f4d9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6f4de: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e6f4e3: test rcx, rcx
// asm:   0x181e6f4e6: jne 0x181e6f735
// asm:   0x181e6f4ec: mov r13, qword ptr [rsp + 0x130]
// asm:   0x181e6f4f4: mov rsi, qword ptr [rsp + 0x148]
// asm:   0x181e6f4fc: mov qword ptr [rsp + 0x140], rsi
// asm:   0x181e6f504: jmp 0x181e6f0d2
// asm:   0x181e6f554: mov rdx, qword ptr [rip + 0x22408ed]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x181e6f55b: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x181e6f560: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6f565: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e6f56a: test rcx, rcx
// asm:   0x181e6f56d: jne 0x181e6f75c
// asm:   0x181e6f573: jmp 0x181e6f6ed
// asm:   0x181e6f6be: mov rdx, qword ptr [rip + 0x2240783]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x181e6f6c5: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e6f6ca: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6f6cf: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e6f6d4: test rcx, rcx
// asm:   0x181e6f6d7: jne 0x181e6f780
// asm:   0x181e6f6dd: mov r13, qword ptr [rsp + 0x130]
// asm:   0x181e6f735: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e6f75c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e6f780: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833193c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833193c5: push rbp
// asm:   0x1833193c6: sub rsp, 0x30
// asm:   0x1833193ca: mov rbp, rdx
// asm:   0x1833193cd: mov rax, qword ptr [rbp + 0xd0]
// asm:   0x1833193d4: mov rcx, qword ptr [rax]
// asm:   0x1833193d7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x1833193db: movabs rax, 0
// asm:   0x1833193e5: add rsp, 0x30
// asm:   0x1833193e9: pop rbp
// asm:   0x1833193ea: ret 
// asm:   0x18332a3f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18332a3f5: push rbp
// asm:   0x18332a3f6: sub rsp, 0x30
// asm:   0x18332a3fa: mov rbp, rdx
// asm:   0x18332a3fd: mov rax, qword ptr [rbp + 0xc0]
// asm:   0x18332a404: mov rcx, qword ptr [rax]
// asm:   0x18332a407: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18332a40b: movabs rax, 0
// asm:   0x18332a415: add rsp, 0x30
// asm:   0x18332a419: pop rbp
// asm:   0x18332a41a: ret 
// asm:   0x18333cf30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333cf35: push rbp
// asm:   0x18333cf36: sub rsp, 0x30
// asm:   0x18333cf3a: mov rbp, rdx
// asm:   0x18333cf3d: mov rax, qword ptr [rbp + 0xc8]
// asm:   0x18333cf44: mov rcx, qword ptr [rax]
// asm:   0x18333cf47: mov qword ptr [rbp + 0x58], rcx
// asm:   0x18333cf4b: movabs rax, 0
// asm:   0x18333cf55: add rsp, 0x30
// asm:   0x18333cf59: pop rbp
// asm:   0x18333cf5a: ret 

void GameManagers_MapEditorGameManager__ToggleLights
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  System_Collections_Generic_Dictionary_int__MapObject__o *pSVar3;
  void *pvVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_List_T__o *__this_00;
  Utility_Color255_o *pUVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  bool bVar9;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar10;
  UnityEngine_Light_o *pUVar11;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *settings;
  Settings_ColorSetting_o *pSVar12;
  Settings_FloatSetting_o *pSVar13;
  Settings_FloatSetting_o *pSVar14;
  UnityEngine_Color_o *pUVar15;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_e8;
  undefined8 local_d0;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *local_c8;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_98;
  System_Collections_Generic_List_Enumerator_object__o local_80 [2];
  UnityEngine_Color_o local_50;
  
  if (Il2CppMethodInitialized_184344efe == '\0') {
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
    Il2CppMethodInitialized_184344efe = '\x01';
  }
  local_e8.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_e8.fields._index = 0;
  local_e8.fields._version = 0;
  local_e8.fields._currentValue = (Il2CppObject *)0x0;
  local_80[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80[0].fields._index = 0;
  local_80[0].fields._version = 0;
  local_80[0].fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._lightsOn == false) {
    (__this->fields)._lightsOn = true;
    pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
      if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar2);
      }
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar3 = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if ((pSVar3 != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) &&
       (pSVar10 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                             (MethodInfo_13C65A0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values),
       pSVar10 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                (&local_98,pSVar10,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator)
      ;
      local_e8.fields._dictionary = local_98.fields._dictionary;
      local_e8.fields._index = local_98.fields._index;
      local_e8.fields._version = local_98.fields._version;
      local_e8.fields._currentValue = local_98.fields._currentValue;
      local_d0 = 0;
      local_c8 = &local_e8;
label_181e6f0d2:
      do {
        do {
          do {
            while( true ) {
              bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                                (&local_e8,
                                 (MethodInfo_155CFB0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                                );
              pIVar7 = local_e8.fields._currentValue;
              if (!bVar9) {
                System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_c8,
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
                          );
                return;
              }
              if (local_e8.fields._currentValue == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              if (local_e8.fields._currentValue[1].monitor == (UnityEngine_GameObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                  (local_e8.fields._currentValue[1].monitor,
                                   (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Light);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar9 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                );
              if (!bVar9) break;
              if (pIVar7[1].monitor == (UnityEngine_GameObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                  (pIVar7[1].monitor,
                                   (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Light);
              if (pUVar11 == (UnityEngine_Light_o *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar11,true,(MethodInfo *)0x0);
            }
          } while (pIVar7[2].klass == (Il2CppClass *)0x0);
          pvVar4 = ((pIVar7[2].klass)->_1).image;
          bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
        } while ((*(byte *)((longlong)pvVar4 + 0x130) < bVar1) ||
                (*(Map_MapScriptSceneObject_c **)
                  (*(longlong *)((longlong)pvVar4 + 200) + -8 + (ulonglong)bVar1 * 8) !=
                 TypeInfo_Map_MapScriptSceneObject));
        pIVar5 = pIVar7[2].klass;
        pvVar4 = (pIVar5->_1).image;
        bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
        if ((*(byte *)((longlong)pvVar4 + 0x130) < bVar1) ||
           (*(Map_MapScriptSceneObject_c **)
             (*(longlong *)((longlong)pvVar4 + 200) + -8 + (ulonglong)bVar1 * 8) !=
            TypeInfo_Map_MapScriptSceneObject)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar5);
        }
        __this_00 = (pIVar5->_1).fields;
        if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  (&local_b8,__this_00,
                   (MethodInfo_91F180 *)
                   MethodInfo_System_Collections_Generic_List_MapScriptComponent_GetEnumerator);
        local_80[0].fields._list = local_b8.fields._list;
        local_80[0].fields._index = local_b8.fields._index;
        local_80[0].fields._version = local_b8.fields._version;
        local_80[0].fields._current = local_b8.fields._current;
        do {
          while( true ) {
            bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (local_80,(MethodInfo_153A2A0 *)
                                        MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_MoveNext
                              );
            pIVar8 = local_80[0].fields._current;
            if (!bVar9) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80,
                         MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose);
              goto label_181e6f0d2;
            }
            if (pGVar2 == (GameManagers_BaseGameManager_o *)0x0) {
              ThrowNullReferenceException();
            }
            if (local_80[0].fields._current == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            if ((*(uint64_t *)((char *)pGVar2 + 0x30)) == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              ThrowNullReferenceException();
            }
            settings = CustomLogic_CustomLogicEvaluator__GetComponentSettings
                                 ((*(uint64_t *)((char *)pGVar2 + 0x30)),(System_String_o *)local_80[0].fields._current[1].klass,
                                  local_80[0].fields._current[1].monitor,(MethodInfo *)0x0);
            bVar9 = System_String__op_Equality
                              ((System_String_o *)pIVar8[1].klass,"Daylight",(MethodInfo *)0x0);
            if (bVar9) break;
            bVar9 = System_String__op_Equality
                              ((System_String_o *)pIVar8[1].klass,"PointLight",(MethodInfo *)0x0);
            if (bVar9) {
              pSVar12 = GameManagers_MapEditorGameManager__TryGetSetting_object_
                                  (__this,settings,"Color",(Il2CppObject *)0x0,
                                   (MethodInfo_72BF00 *)
                                   MethodInfo_GameManagers_MapEditorGameManager_TryGetSetting_ColorSetting);
              pSVar13 = GameManagers_MapEditorGameManager__TryGetSetting_object_
                                  (__this,settings,"Intensity",(Il2CppObject *)0x0,
                                   (MethodInfo_72BF00 *)
                                   MethodInfo_GameManagers_MapEditorGameManager_TryGetSetting_FloatSetting);
              pSVar14 = GameManagers_MapEditorGameManager__TryGetSetting_object_
                                  (__this,settings,"Range",(Il2CppObject *)0x0,
                                   (MethodInfo_72BF00 *)
                                   MethodInfo_GameManagers_MapEditorGameManager_TryGetSetting_FloatSetting);
              if (((pSVar12 != (Settings_ColorSetting_o *)0x0) && (pSVar13 != (Settings_FloatSetting_o *)0x0))
                 && (pSVar14 != (Settings_FloatSetting_o *)0x0)) {
                if (pIVar7[1].monitor == (UnityEngine_GameObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar11 = UnityEngine_GameObject__AddComponent_object_
                                    (pIVar7[1].monitor,
                                     (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Light
                                    );
                if (pUVar11 == (UnityEngine_Light_o *)0x0) {
                  ThrowNullReferenceException();
                }
                UnityEngine_Light__set_type(pUVar11,2,(MethodInfo *)0x0);
                pUVar6 = (pSVar12->fields)._value;
                if (pUVar6 == (Utility_Color255_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar15 = Utility_Color255__ToColor(&local_50,pUVar6,(MethodInfo *)0x0);
                local_b8.fields._list = *(System_Collections_Generic_List_T__o **)&pUVar15->fields;
                local_b8.fields._index = (int32_t)(pUVar15->fields).b;
                local_b8.fields._version = (int32_t)(pUVar15->fields).a;
                UnityEngine_Light__set_color(pUVar11,(UnityEngine_Color_o *)&local_b8,(MethodInfo *)0x0);
                UnityEngine_Light__set_intensity(pUVar11,(pSVar13->fields)._value,(MethodInfo *)0x0);
                UnityEngine_Light__set_range(pUVar11,(pSVar14->fields)._value,(MethodInfo *)0x0);
                goto label_181e6f4a0;
              }
            }
          }
          pSVar12 = GameManagers_MapEditorGameManager__TryGetSetting_object_
                              (__this,settings,"Color",(Il2CppObject *)0x0,
                               (MethodInfo_72BF00 *)
                               MethodInfo_GameManagers_MapEditorGameManager_TryGetSetting_ColorSetting);
          pSVar13 = GameManagers_MapEditorGameManager__TryGetSetting_object_
                              (__this,settings,"Intensity",(Il2CppObject *)0x0,
                               (MethodInfo_72BF00 *)
                               MethodInfo_GameManagers_MapEditorGameManager_TryGetSetting_FloatSetting);
        } while ((pSVar12 == (Settings_ColorSetting_o *)0x0) || (pSVar13 == (Settings_FloatSetting_o *)0x0));
        if (pIVar7[1].monitor == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar11 = UnityEngine_GameObject__AddComponent_object_
                            (pIVar7[1].monitor,
                             (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Light);
        if (pUVar11 == (UnityEngine_Light_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Light__set_type(pUVar11,1,(MethodInfo *)0x0);
        pUVar6 = (pSVar12->fields)._value;
        if (pUVar6 == (Utility_Color255_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar15 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_98,pUVar6,(MethodInfo *)0x0);
        local_b8.fields._list = *(System_Collections_Generic_List_T__o **)&pUVar15->fields;
        local_b8.fields._index = (int32_t)(pUVar15->fields).b;
        local_b8.fields._version = (int32_t)(pUVar15->fields).a;
        UnityEngine_Light__set_color(pUVar11,(UnityEngine_Color_o *)&local_b8,(MethodInfo *)0x0);
        UnityEngine_Light__set_intensity(pUVar11,(pSVar13->fields)._value,(MethodInfo *)0x0);
        UnityEngine_Light__set_shadows(pUVar11,1,(MethodInfo *)0x0);
label_181e6f4a0:
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80,
                   MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose);
      } while( true );
    }
  }
  else {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar3 = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if ((pSVar3 != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) &&
       (pSVar10 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                             (MethodInfo_13C65A0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values),
       pSVar10 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                (&local_98,pSVar10,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator)
      ;
      local_e8.fields._dictionary = local_98.fields._dictionary;
      local_e8.fields._index = local_98.fields._index;
      local_e8.fields._version = local_98.fields._version;
      local_e8.fields._currentValue = local_98.fields._currentValue;
      while( true ) {
        do {
          bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                            (&local_e8,
                             (MethodInfo_155CFB0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                            );
          pIVar7 = local_e8.fields._currentValue;
          if (!bVar9) {
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_e8,
                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
                      );
            (__this->fields)._lightsOn = false;
            return;
          }
          if (local_e8.fields._currentValue == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (local_e8.fields._currentValue[1].monitor == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar11 = UnityEngine_GameObject__GetComponent_object_
                              (local_e8.fields._currentValue[1].monitor,
                               (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Light);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar9 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        } while (!bVar9);
        if (pIVar7[1].monitor == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar11 = UnityEngine_GameObject__GetComponent_object_
                            (pIVar7[1].monitor,
                             (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Light);
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
// 0x181e6e200
// eh: try 0x181e6e3a2..0x181e6e4f6 -> pad 0x183320de0 (+1 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181e6e4f6..0x181e6e545 -> pad 0x180355dd0 cleanup
// eh: try 0x181e6e545..0x181e6e6f9 -> pad 0x183338340 (+4 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181e6e708..0x181e6e738 -> pad 0x180355dd0 cleanup
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6e3a9: nop dword ptr [rax]
// asm:   0x181e6e4bd: nop dword ptr [rax]
// asm:   0x181e6e62e: jmp 0x181e6e61d
// asm:   0x181e6e630: mov rdx, qword ptr [rip + 0x2219a11]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x181e6e637: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e6e63c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6e641: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e6e646: test rcx, rcx
// asm:   0x181e6e649: jne 0x181e6e6d6
// asm:   0x181e6e64f: lea r14, [rip - 0x1e6e656]
// asm:   0x181e6e656: mov r13, qword ptr [rsp + 0xe8]
// asm:   0x181e6e65e: movzx r12d, byte ptr [rsp + 0xf8]
// asm:   0x181e6e667: mov rsi, qword ptr [rsp + 0x78]
// asm:   0x181e6e66c: jmp 0x181e6e671
// asm:   0x181e6e69e: mov rdx, qword ptr [rip + 0x22417a3]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x181e6e6a5: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e6e6aa: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6e6af: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e6e6b4: test rcx, rcx
// asm:   0x181e6e6b7: jne 0x181e6e6f9
// asm:   0x181e6e6d6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e6e6f9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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
// asm:   0x183338340: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183338345: push rbp
// asm:   0x183338346: sub rsp, 0x20
// asm:   0x18333834a: mov rbp, rdx
// asm:   0x18333834d: mov rax, qword ptr [rbp + 0x80]
// asm:   0x183338354: mov rcx, qword ptr [rax]
// asm:   0x183338357: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333835b: movabs rax, 0
// asm:   0x183338365: add rsp, 0x20
// asm:   0x183338369: pop rbp
// asm:   0x18333836a: ret 

void GameManagers_MapEditorGameManager__SetLayerVisibility
               (GameManagers_MapEditorGameManager_o *__this,Settings_HashSetSetting_int__o *selectedLayers,
               MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_int__MapObject__o *__this_00;
  void *pvVar2;
  Il2CppClass *pIVar3;
  System_Collections_Generic_HashSet_uint__o *__this_01;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  undefined8 in_R9;
  undefined8 uVar9;
  undefined1 local_a8 [16];
  Il2CppObject *local_98;
  undefined1 local_90 [8];
  uint64_t uStack_88;
  Il2CppObject *local_80;
  System_Collections_Generic_HashSet_Enumerator_T__o local_78;
  Il2CppObject *local_60;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_184344eff == '\0') {
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
    Il2CppMethodInitialized_184344eff = '\x01';
  }
  local_90 = (undefined1  [8])0x0;
  uStack_88 = 0;
  local_80 = (Il2CppObject *)0x0;
  local_78.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if ((__this_00 == (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) ||
     (__this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             (MethodInfo_13C65A0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values),
     __this_02 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_a8,
             __this_02,
             (MethodInfo_F1E4D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
  local_90 = (undefined1  [8])local_a8._0_8_;
  uStack_88 = local_a8._8_8_;
  local_80 = local_98;
  uVar9 = 0;
  do {
    do {
      do {
        bVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )local_90,
                           (MethodInfo_155CFB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                          );
        pIVar5 = local_80;
        if (!bVar6) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_90,
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
                    );
          return;
        }
        local_60 = local_80;
        if (local_80 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
      } while (local_80[2].klass == (Il2CppClass *)0x0);
      pvVar2 = ((local_80[2].klass)->_1).image;
      bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    } while ((*(byte *)((longlong)pvVar2 + 0x130) < bVar1) ||
            (*(Map_MapScriptSceneObject_c **)
              (*(longlong *)((longlong)pvVar2 + 200) + -8 + (ulonglong)bVar1 * 8) !=
             TypeInfo_Map_MapScriptSceneObject));
    pIVar3 = local_80[2].klass;
    pvVar2 = (pIVar3->_1).image;
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if ((*(byte *)((longlong)pvVar2 + 0x130) < bVar1) ||
       (*(Map_MapScriptSceneObject_c **)(*(longlong *)((longlong)pvVar2 + 200) + -8 + (ulonglong)bVar1 * 8) !=
        TypeInfo_Map_MapScriptSceneObject)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar3,TypeInfo_Map_MapScriptSceneObject,pvVar2,in_R9,uVar9)
      ;
    }
    if (selectedLayers == (Settings_HashSetSetting_int__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar6 = Settings_HashSetSetting_int___Contains
                      (selectedLayers,0,(MethodInfo_17545E0 *)MethodInfo_Settings_HashSetSetting_int_Contains)
    ;
    if (bVar6) {
      bVar6 = true;
    }
    else {
      __this_01 = (System_Collections_Generic_HashSet_uint__o *)(selectedLayers->fields)._value;
      if (__this_01 == (System_Collections_Generic_HashSet_uint__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar6 = false;
      System_Collections_Generic_HashSet_uint___GetEnumerator
                (&local_48,__this_01,
                 (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
      local_78.fields._set = local_48.fields._set;
      local_78.fields._index = local_48.fields._index;
      local_78.fields._version = local_48.fields._version;
      local_78.fields._current = local_48.fields._current;
      local_a8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_a8._8_8_ = &local_78;
switchD_181e6e4f6_default:
      do {
        bVar7 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                          (&local_78,
                           (MethodInfo_1537E90 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
        if (!bVar7) goto label_181e6e61d;
        switch(local_78.fields._current._0_4_) {
        case 1:
          cVar8 = (char)(pIVar3->_1).byval_arg.bits;
          break;
        case 2:
          cVar8 = (char)(pIVar3->_1).byval_arg.bits == '\0';
          break;
        case 3:
          cVar8 = *(char *)((longlong)&(pIVar3->_1).byval_arg.bits + 2);
          break;
        case 4:
          cVar8 = *(char *)((longlong)&(pIVar3->_1).byval_arg.bits + 2) == '\0';
          break;
        case 5:
          cVar8 = *(char *)((longlong)&(pIVar3->_1).byval_arg.bits + 1);
          break;
        case 6:
          cVar8 = *(char *)((longlong)&(pIVar3->_1).byval_arg.bits + 1) == '\0';
          break;
        case 7:
          cVar8 = System_String__op_Equality
                            ((pIVar3->_1).generic_class,"Physical",(MethodInfo *)0x0);
          break;
        case 8:
          cVar8 = System_String__op_Equality
                            ((pIVar3->_1).generic_class,"Region",(MethodInfo *)0x0);
          break;
        case 9:
          cVar8 = System_String__op_Equality
                            ((pIVar3->_1).generic_class,"None",(MethodInfo *)0x0);
          break;
        case 10:
          cVar8 = *(char *)((longlong)&(pIVar3->_1).byval_arg.bits + 3);
          break;
        case 0xb:
          cVar8 = *(char *)((longlong)&(pIVar3->_1).byval_arg.bits + 3) == '\0';
          break;
        case 0xc:
          pSVar4 = (System_String_o *)(pIVar3->_1).namespaze;
          if ((TypeInfo_Map_MapAssets->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapAssets);
          }
          bVar7 = System_String__op_Equality
                            (pSVar4,TypeInfo_Map_MapAssets->static_fields->NavMeshObstacle,(MethodInfo *)0x0);
          if (bVar7) {
            cVar8 = '\x01';
          }
          else {
            pSVar4 = (System_String_o *)(pIVar3->_1).namespaze;
            if ((TypeInfo_Map_MapAssets->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapAssets);
            }
            cVar8 = System_String__op_Equality
                              (pSVar4,TypeInfo_Map_MapAssets->static_fields->NavMeshRegion,(MethodInfo *)0x0);
          }
          break;
        default:
          goto switchD_181e6e4f6_default;
        }
      } while (cVar8 == '\0');
      bVar6 = true;
label_181e6e61d:
      System_Collections_Generic_HashSet_Enumerator_int___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_78,
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    }
    if (pIVar5[1].monitor == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(pIVar5[1].monitor,bVar6,(MethodInfo *)0x0);
  } while( true );
}


// GameManagers.MapEditorGameManager$$.ctor
// il2cpp: void GameManagers_MapEditorGameManager___ctor (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e70fc0

void GameManagers_MapEditorGameManager___ctor(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_String_o *value;
  System_Collections_Generic_HashSet_MapObject__o *__this_00;
  System_Collections_Generic_List_BaseCommand__o *pSVar1;
  MapEditor_MapEditorBrush_o *__this_01;
  MapEditor_MapEditorRuler_o *__this_02;
  
  if (Il2CppMethodInitialized_184344f00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_MapObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCommand_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BaseCommand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_MapEditorBrush);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_MapEditorRuler);
    Il2CppMethodInitialized_184344f00 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_MapObject);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_ctor);
  (__this->fields).SelectedObjects = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SelectedObjects,__this_00);
  (__this->fields).HierarchyTreeViewEnabled = true;
  (__this->fields).LastSelectedObjectId = -1;
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseCommand);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BaseCommand_ctor);
  (__this->fields)._undoCommands = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._undoCommands,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseCommand);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BaseCommand_ctor);
  (__this->fields)._redoCommands = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._redoCommands,pSVar1);
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._clipboard = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._clipboard,value);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_MapEditorBrush);
  MapEditor_MapEditorBrush___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields).Brush = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Brush,__this_01);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_MapEditorRuler);
  MapEditor_MapEditorRuler___ctor(__this_02,(MethodInfo *)0x0);
  (__this->fields).Ruler = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Ruler,__this_02);
  GameManagers_BaseGameManager___ctor
            ((Photon_Voice_PUN_UtilityScripts_VoiceDebugScript_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorGameManager$$<OnFinishLoading>b__51_0
// il2cpp: void GameManagers_MapEditorGameManager___OnFinishLoading_b__51_0 (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e6f790

void GameManagers_MapEditorGameManager___OnFinishLoading_b__51_0
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Map_MapScript_o *pMVar3;
  Map_MapVersionConversionResult_o *pMVar4;
  System_String_o *version;
  System_String_o *map;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_184344f01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344f01 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((((pSVar1 != (Settings_MapEditorSettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).CurrentMap, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
      (pMVar3 = (__this->fields).MapScript, pMVar3 != (Map_MapScript_o *)0x0)) &&
     (pMVar4 = (pMVar3->fields)._LastUpgradeResult_k__BackingField,
     pMVar4 != (Map_MapVersionConversionResult_o *)0x0)) {
    version = (pMVar4->fields)._OriginalVersion_k__BackingField;
    map = (pMVar3->fields)._OriginalCSV_k__BackingField;
    name = (pSVar2->fields)._value;
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


