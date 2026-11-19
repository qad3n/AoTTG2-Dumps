// Type: Gisketch.Aottg2UI.Game.AottgRoomListRefresher
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgRoomListRefresher.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgRoomListRefresher.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListRefresher___c___cctor (const MethodInfo* method);
// 0x58d1dd0

void Gisketch_Aottg2UI_Game_AottgRoomListRefresher___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754547c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher_c);
    Il2CppMethodInitialized_0754547c = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgRoomListRefresher___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomListRefresher.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListRefresher___c___ctor (Gisketch_Aottg2UI_Game_AottgRoomListRefresher___c_o* __this, const MethodInfo* method);
// 0x58d1e40

void Gisketch_Aottg2UI_Game_AottgRoomListRefresher___c___ctor
               (Gisketch_Aottg2UI_Game_AottgRoomListRefresher___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomListRefresher.<>c$$<RegisterFactory>b__5_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgRoomListRefresher___c___RegisterFactory_b__5_0 (Gisketch_Aottg2UI_Game_AottgRoomListRefresher___c_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x58d1e50

bool Gisketch_Aottg2UI_Game_AottgRoomListRefresher___c___RegisterFactory_b__5_0
               (Gisketch_Aottg2UI_Game_AottgRoomListRefresher___c_o *__this,UnityEngine_GameObject_o *go,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754547d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgRoomListRefresher);
    Il2CppMethodInitialized_0754547d = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_GameObject__AddComponent_object_
            (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_AottgRoomListRefresher);
  return true;
}


// Gisketch.Aottg2UI.Game.AottgRoomListRefresher$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListRefresher__RegisterFactory (const MethodInfo* method);
// 0x58d1620

void Gisketch_Aottg2UI_Game_AottgRoomListRefresher__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Il2CppObject *object;
  System_String_o *type;
  Gisketch_Aottg2UI_Game_AottgRoomListRefresher___c_StaticFields *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_07545479 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher_c_RegisterFactory_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher_c);
    il2cpp_codegen_initialize_runtime_metadata(&"AottgRoomListRefresher");
    Il2CppMethodInitialized_07545479 = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher->static_fields->_registered == false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
    }
    __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher_c);
    }
    type = "AottgRoomListRefresher";
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher_c->static_fields;
    __this_00 = pGVar1->__9__5_0;
    if (__this_00 == (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher_c);
        pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher_c->static_fields;
      }
      object = (Il2CppObject *)pGVar1->__9;
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
      Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
                (__this_00,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher_c_RegisterFactory_b__5_0,
                 (MethodInfo *)0x0);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher_c->static_fields;
      pGVar1->__9__5_0 = __this_00;
      Il2CppCodeGenWriteBarrier(&pGVar1->__9__5_0);
    }
    if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register(__this,type,__this_00,(MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher->static_fields->_registered = true;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomListRefresher$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListRefresher__OnEnable (Gisketch_Aottg2UI_Game_AottgRoomListRefresher_o* __this, const MethodInfo* method);
// 0x58d1ca0

void Gisketch_Aottg2UI_Game_AottgRoomListRefresher__OnEnable
               (Gisketch_Aottg2UI_Game_AottgRoomListRefresher_o *__this,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_0754547a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    Il2CppMethodInitialized_0754547a = '\x01';
  }
  fVar1 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
  (__this->fields)._nextRefresh = fVar1;
  if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
  }
  (__this->fields)._roomListReceived =
       TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomListReceived;
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomListRefresher$$Update
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListRefresher__Update (Gisketch_Aottg2UI_Game_AottgRoomListRefresher_o* __this, const MethodInfo* method);
// 0x58d1d00

void Gisketch_Aottg2UI_Game_AottgRoomListRefresher__Update
               (Gisketch_Aottg2UI_Game_AottgRoomListRefresher_o *__this,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgRoomList_c *method_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_0754547b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    Il2CppMethodInitialized_0754547b = '\x01';
  }
  if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
  }
  bVar1 = TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomListReceived;
  fVar2 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
  if ((fVar2 < (__this->fields)._nextRefresh) && (bVar1 == (__this->fields)._roomListReceived)) {
    return;
  }
  (__this->fields)._roomListReceived = bVar1;
  fVar2 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
  (__this->fields)._nextRefresh = fVar2 + 5.0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    Gisketch_Aottg2UI_Game_AottgRoomList__Refresh((MethodInfo *)method_00);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgRoomList__Refresh((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomListRefresher$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListRefresher___ctor (Gisketch_Aottg2UI_Game_AottgRoomListRefresher_o* __this, const MethodInfo* method);
// 0x58d1dc0

void Gisketch_Aottg2UI_Game_AottgRoomListRefresher___ctor
               (Gisketch_Aottg2UI_Game_AottgRoomListRefresher_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


