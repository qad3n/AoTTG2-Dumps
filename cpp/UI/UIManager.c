// Type: UI.UIManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/UIManager.cs
// Prior real C# source (older reference): Assets/Scripts/UI/UIManager.cs
// --------------------------------

// UI.UIManager$$Init
// il2cpp: void UI_UIManager__Init (const MethodInfo* method);
// 0x5dacda0

void UI_UIManager__Init(MethodInfo *method)

{
  UI_UIManager_StaticFields *pUVar1;
  Settings_UISettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  UI_UIManager_o *pUVar4;
  UI_LoadingMenu_o *pUVar5;
  UnityEngine_Object_o *target;
  Events_OnLoadScene_o *__this;
  Events_OnPreLoadScene_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075480f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateMenu_LoadingMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_SingletonFactory_CreateSingleton_UIManager)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_UIManager_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_UIManager_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/BackgroundMenu");
    Il2CppMethodInitialized_075480f1 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar4 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_UI_UIManager->static_fields->_instance,
                      (MethodInfo_3680650 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_UIManager);
  pUVar1 = TypeInfo_UI_UIManager->static_fields;
  pUVar1->_instance = pUVar4;
  method_00 = (MethodInfo *)&pUVar1->_instance;
  Il2CppCodeGenWriteBarrier((void **)method_00);
  UI_UIManager__LoadLanguages(method_00);
  UI_UIManager__LoadUIThemes(method_00);
  UI_UIManager__LoadProfileIcons(method_00);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar2 != (Settings_UISettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).UITheme, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    pUVar1 = TypeInfo_UI_UIManager->static_fields;
    pUVar1->_currentUITheme = (pSVar3->fields)._value;
    Il2CppCodeGenWriteBarrier(&pUVar1->_currentUITheme);
    pUVar5 = UI_ElementFactory__CreateMenu_object_
                       ("Prefabs/Panels/BackgroundMenu",
                        (MethodInfo_34D73E0 *)MethodInfo_UI_ElementFactory_CreateMenu_LoadingMenu);
    pUVar1 = TypeInfo_UI_UIManager->static_fields;
    pUVar1->LoadingMenu = pUVar5;
    Il2CppCodeGenWriteBarrier(&pUVar1->LoadingMenu);
    pUVar5 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
    if (pUVar5 != (UI_LoadingMenu_o *)0x0) {
      (*(pUVar5->klass->vtable)._4_Setup.methodPtr)(pUVar5,(pUVar5->klass->vtable)._4_Setup.method);
      pUVar5 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
      if (pUVar5 != (UI_LoadingMenu_o *)0x0) {
        target = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnLoadScene);
        Events_OnLoadScene___ctor
                  (__this,(Il2CppObject *)0x0,(intptr_t)MethodInfo_UI_UIManager_OnLoadScene,(MethodInfo *)0x0)
        ;
        Events_EventManager__add_OnLoadScene(__this,(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
        Events_OnPreLoadScene___ctor
                  (__this_00,(Il2CppObject *)0x0,(intptr_t)MethodInfo_UI_UIManager_OnPreLoadScene,
                   (MethodInfo *)0x0);
        Events_EventManager__add_OnPreLoadScene(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.UIManager$$OnPreLoadScene
// il2cpp: void UI_UIManager__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x5dadde0

void UI_UIManager__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost__CloseOverlays((MethodInfo *)0x0);
  return;
}


// UI.UIManager$$OnLoadScene
// il2cpp: void UI_UIManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x5daddf0

void UI_UIManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  uint32_t uVar1;
  UI_LoadingMenu_o *pUVar2;
  
  if (Il2CppMethodInitialized_075480f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_075480f2 = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    UI_UIManager__SetMenu(sceneName,method);
  }
  else {
    UI_UIManager__SetMenu(sceneName,method);
  }
  if (sceneName == 0) {
    return;
  }
  if (sceneName == 2) {
    if ((((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar2 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
    if (pUVar2 != (UI_LoadingMenu_o *)0x0) {
      UI_LoadingMenu__Show(pUVar2,true,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar2 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
    if (pUVar2 != (UI_LoadingMenu_o *)0x0) {
      UI_LoadingMenu__Hide(pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.UIManager$$PlaySound
// il2cpp: void UI_UIManager__PlaySound (int32_t sound, const MethodInfo* method);
// 0x5dae320

void UI_UIManager__PlaySound(int32_t sound,MethodInfo *method)

{
  int kind;
  
  if (Il2CppMethodInitialized_075480f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_075480f3 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  kind = (uint)(sound == 2) * 2;
  if (sound == 1) {
    kind = 1;
  }
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(kind,(MethodInfo *)0x0);
  return;
}


// UI.UIManager$$SetLastCategory
// il2cpp: void UI_UIManager__SetLastCategory (System_Type_o* t, System_String_o* category, const MethodInfo* method);
// 0x5dae370
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dae3a7: jmp 0x5dae49d

void UI_UIManager__SetLastCategory(System_Type_o *t,System_String_o *category,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075480f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_075480f4 = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_UI_UIManager->static_fields->_lastCategories;
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x20);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)t,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Type_string_ContainsKey);
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    if (bVar3) {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_UI_UIManager->static_fields->_lastCategories;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar2,(Il2CppObject *)t,(Il2CppObject *)category,
                   (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_Type_string_set_Item
                  );
        return;
      }
    }
    else {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_UI_UIManager->static_fields->_lastCategories;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar2,(Il2CppObject *)t,(Il2CppObject *)category,
                   (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_Type_string_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.UIManager$$GetLastcategory
// il2cpp: System_String_o* UI_UIManager__GetLastcategory (System_Type_o* t, const MethodInfo* method);
// 0x5dae4b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dae4e3: jmp 0x5dae5b1

System_String_o * UI_UIManager__GetLastcategory(System_Type_o *t,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_075480f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_075480f5 = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_UI_UIManager->static_fields->_lastCategories;
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x20);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)t,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Type_string_ContainsKey);
    if (!bVar3) {
      return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_UI_UIManager->static_fields->_lastCategories;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar2,(Il2CppObject *)t,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_Type_string_get_Item);
      return pSVar4;
    }
  }
  ThrowNullReferenceException();
}


// UI.UIManager$$LoadProfileIcons
// il2cpp: void UI_UIManager__LoadProfileIcons (const MethodInfo* method);
// 0x5dad860
// asm: 14 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dada01: mov r14, rsp
// asm:   0x5dada04: lea rbp, [rip + 0x14d055d]  ; TypeInfo_UI_UIManager
// asm:   0x5dada0b: lea r13, [rip + 0x14cc66e]  ; TypeInfo_SimpleJSONFixed_JSONNode
// asm:   0x5dada12: lea r12, [rip + 0x14e8f3f]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5dada19: jmp 0x5dada4c
// asm:   0x5dadbd1: mov r15, rsp
// asm:   0x5dadbd4: lea rbp, [rip + 0x14d038d]  ; TypeInfo_UI_UIManager
// asm:   0x5dadbdb: lea r13, [rip + 0x14cc49e]  ; TypeInfo_SimpleJSONFixed_JSONNode
// asm:   0x5dadbe2: lea r14, [rip + 0x14e8d6f]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5dadbe9: jmp 0x5dadc1c
// asm:   0x5dadd38: mov r14, rsp
// asm:   0x5dadd3b: lea rbp, [rip + 0x14d0226]  ; TypeInfo_UI_UIManager
// asm:   0x5dadd42: lea r12, [rip + 0x14cc337]  ; TypeInfo_SimpleJSONFixed_JSONNode
// asm:   0x5dadd49: lea r13, [rip + 0x14e39c8]  ; MethodInfo_System_Collections_Generic_HashSet_string_Add

void UI_UIManager__LoadProfileIcons(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  System_String_array *pSVar4;
  System_Collections_Generic_HashSet_object__o *__this;
  MethodInfo *pMVar5;
  bool bVar6;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar9;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_o *local_80;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_075480f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ProfileIconInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons");
    il2cpp_codegen_initialize_runtime_metadata(&"AnimatedEmojis");
    il2cpp_codegen_initialize_runtime_metadata(&"AllEmojis");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteInfo");
    Il2CppMethodInitialized_075480f6 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pSVar7 = ApplicationManagers_ResourceManager__LoadText(pSVar7,"ProfileIconInfo",(MethodInfo *)0x0);
  pSVar8 = SimpleJSONFixed_JSON__Parse(pSVar7,(MethodInfo *)0x0);
  if ((pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar8,"Icons",(pSVar8->klass->vtable)._7_get_Item.method),
     pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    (*(pSVar8->klass->vtable)._32_unknown.methodPtr)
              (&local_78,pSVar8,(pSVar8->klass->vtable)._32_unknown.method);
    local_c8.m_Array.fields._current = local_78.m_Array.fields._current;
    local_c8.m_Array.fields._list = local_78.m_Array.fields._list;
    local_c8.m_Array.fields._index = local_78.m_Array.fields._index;
    local_c8.m_Array.fields._version = local_78.m_Array.fields._version;
    local_c8.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
    local_c8.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
    local_c8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
    local_c8.m_Object.fields._version = local_78.m_Object.fields._version;
    local_c8.m_Object.fields._index = local_78.m_Object.fields._index;
    local_c8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
    local_c8.type = local_78.type;
    local_c8._4_4_ = local_78._4_4_;
    local_c8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
    bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
    if (bVar6) {
      do {
        SVar9 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                          ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar3 = TypeInfo_UI_UIManager->static_fields->AvailableProfileIcons;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(SVar9.fields.value,(MethodInfo *)0x0);
        pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_05daddce;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar3->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) goto label_05daddce;
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = pSVar7;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pSVar7,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
      } while (bVar6);
    }
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pSVar7 = ApplicationManagers_ResourceManager__LoadText(pSVar7,"EmoteInfo",(MethodInfo *)0x0);
    pSVar8 = SimpleJSONFixed_JSON__Parse(pSVar7,(MethodInfo *)0x0);
    if ((pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (local_80 = pSVar8,
       pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar8,"AllEmojis",(pSVar8->klass->vtable)._7_get_Item.method),
       pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      (*(pSVar8->klass->vtable)._32_unknown.methodPtr)
                (&local_78,pSVar8,(pSVar8->klass->vtable)._32_unknown.method);
      local_c8.m_Array.fields._current = local_78.m_Array.fields._current;
      local_c8.m_Array.fields._list = local_78.m_Array.fields._list;
      local_c8.m_Array.fields._index = local_78.m_Array.fields._index;
      local_c8.m_Array.fields._version = local_78.m_Array.fields._version;
      local_c8.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
      local_c8.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
      local_c8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
      local_c8.m_Object.fields._version = local_78.m_Object.fields._version;
      local_c8.m_Object.fields._index = local_78.m_Object.fields._index;
      local_c8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
      local_c8.type = local_78.type;
      local_c8._4_4_ = local_78._4_4_;
      local_c8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
      bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
      if (bVar6) {
        do {
          SVar9 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar3 = TypeInfo_UI_UIManager->static_fields->AvailableEmojis;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(SVar9.fields.value,(MethodInfo *)0x0);
          pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_05daddce;
          piVar1 = &(pSVar3->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar3->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) goto label_05daddce;
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = pSVar7;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pSVar7,
                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          }
          bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
        } while (bVar6);
      }
      pSVar8 = (*(local_80->klass->vtable)._7_get_Item.methodPtr)
                         (local_80,"AnimatedEmojis",(local_80->klass->vtable)._7_get_Item.method);
      if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        (*(pSVar8->klass->vtable)._32_unknown.methodPtr)
                  (&local_78,pSVar8,(pSVar8->klass->vtable)._32_unknown.method);
        local_c8.m_Array.fields._current = local_78.m_Array.fields._current;
        local_c8.m_Array.fields._list = local_78.m_Array.fields._list;
        local_c8.m_Array.fields._index = local_78.m_Array.fields._index;
        local_c8.m_Array.fields._version = local_78.m_Array.fields._version;
        local_c8.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
        local_c8.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
        local_c8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
        local_c8.m_Object.fields._version = local_78.m_Object.fields._version;
        local_c8.m_Object.fields._index = local_78.m_Object.fields._index;
        local_c8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
        local_c8.type = local_78.type;
        local_c8._4_4_ = local_78._4_4_;
        local_c8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
        bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
        if (bVar6) {
          do {
            SVar9 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            __this = (System_Collections_Generic_HashSet_object__o *)
                     TypeInfo_UI_UIManager->static_fields->AnimatedEmojis;
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(SVar9.fields.value,(MethodInfo *)0x0);
            if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05daddce;
            System_Collections_Generic_HashSet_object___Add
                      (__this,(Il2CppObject *)pSVar7,
                       (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
            bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
          } while (bVar6);
        }
        return;
      }
    }
  }
label_05daddce:
  ThrowNullReferenceException();
}


// UI.UIManager$$ApplyLanguageAndTheme
// il2cpp: void UI_UIManager__ApplyLanguageAndTheme (const MethodInfo* method);
// 0x5dae5c0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dae7a1: jmp 0x5dae7e6
// asm:   0x5dae7ef: test rax, rax
// asm:   0x5dae7f2: jne 0x5dae80e
// asm:   0x5dae7f4: jmp 0x5dae870

void UI_UIManager__ApplyLanguageAndTheme(MethodInfo *method)

{
  byte bVar1;
  Settings_GeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_UISettings_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_String_o *a;
  System_String_o *a_00;
  UI_UIManager_StaticFields *pUVar6;
  UI_LoadingMenu_o *pUVar7;
  bool bVar8;
  UI_BaseMenu_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  
  if (Il2CppMethodInitialized_075480f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_075480f7 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((((pSVar2 == (Settings_GeneralSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Language, pSVar3 == (Settings_StringSetting_o *)0x0)) ||
      (pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->UISettings,
      pSVar4 == (Settings_UISettings_o *)0x0)) ||
     (pSVar5 = (pSVar4->fields).UITheme, pSVar5 == (Settings_StringSetting_o *)0x0)) goto label_05dae979;
  a = (pSVar3->fields)._value;
  a_00 = (pSVar5->fields)._value;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  bVar8 = System_String__op_Equality
                    (a,TypeInfo_UI_UIManager->static_fields->_appliedLanguage,(MethodInfo *)0x0);
  if (bVar8) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    bVar8 = System_String__op_Equality
                      (a_00,TypeInfo_UI_UIManager->static_fields->_currentUITheme,(MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar6 = TypeInfo_UI_UIManager->static_fields;
  pUVar6->_appliedLanguage = a;
  Il2CppCodeGenWriteBarrier(&pUVar6->_appliedLanguage);
  pUVar6 = TypeInfo_UI_UIManager->static_fields;
  pUVar6->_currentUITheme = a_00;
  Il2CppCodeGenWriteBarrier(&pUVar6->_currentUITheme);
  if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
  }
  UI_LanguageFonts__Apply((MethodInfo *)0x0);
  pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar9 != (UI_BaseMenu_o *)0x0) goto label_05dae7bb;
label_05dae7e6:
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      }
      if (pUVar9 != (UI_BaseMenu_o *)0x0) {
        bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
        if ((bVar1 <= (pUVar9->klass->_2).typeHierarchyDepth) &&
           ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu))
        goto label_05dae838;
      }
    }
    else {
      pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar9 == (UI_BaseMenu_o *)0x0) goto label_05dae7e6;
label_05dae7bb:
      bVar1 = (TypeInfo_UI_MainMenu->_2).typeHierarchyDepth;
      if (((pUVar9->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MainMenu))
      goto label_05dae7e6;
label_05dae838:
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar9 == (UI_BaseMenu_o *)0x0) goto label_05dae979;
      (*(pUVar9->klass->vtable)._6_RebuildPopups.methodPtr)
                (pUVar9,(pUVar9->klass->vtable)._6_RebuildPopups.method);
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar9 == (UI_BaseMenu_o *)0x0) goto label_05dae979;
    pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
    }
    UI_LanguageFonts__Localize(pUVar10,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar7 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar8) {
label_05dae967:
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__RefreshLanguageAndTheme((MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar7 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
  if (pUVar7 != (UI_LoadingMenu_o *)0x0) {
    (*(pUVar7->klass->vtable)._6_RebuildPopups.methodPtr)
              (pUVar7,(pUVar7->klass->vtable)._6_RebuildPopups.method);
    pUVar7 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
    if (pUVar7 != (UI_LoadingMenu_o *)0x0) {
      pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
      if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
      }
      UI_LanguageFonts__Localize(pUVar10,(MethodInfo *)0x0);
      goto label_05dae967;
    }
  }
label_05dae979:
  ThrowNullReferenceException();
}


// UI.UIManager$$SetMenu
// il2cpp: void UI_UIManager__SetMenu (int32_t sceneName, const MethodInfo* method);
// 0x5dadee0

void UI_UIManager__SetMenu(int32_t sceneName,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Settings_UISettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o *pSVar5;
  UI_UIManager_StaticFields *pUVar6;
  Settings_GeneralSettings_o *pSVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar8;
  UnityEngine_Object_o *obj;
  UI_MainMenu_o *pUVar9;
  MethodInfo **ppMVar10;
  UI_BaseMenu_o *pUVar11;
  
  if (Il2CppMethodInitialized_075480f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultMenu_CharacterEditorHumanMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultMenu_CharacterEditorTitanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultMenu_GalleryMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultMenu_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultMenu_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultMenu_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultMenu_SnapshotViewerMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_075480f8 = '\x01';
  }
  if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
  }
  UI_LanguageFonts__Apply((MethodInfo *)0x0);
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar3 == (Settings_UISettings_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).UITheme, pSVar4 == (Settings_StringSetting_o *)0x0)) goto label_05dae31a;
  pSVar5 = (pSVar4->fields)._value;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar6 = TypeInfo_UI_UIManager->static_fields;
  pUVar6->_currentUITheme = pSVar5;
  Il2CppCodeGenWriteBarrier(&pUVar6->_currentUITheme);
  pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar7 == (Settings_GeneralSettings_o *)0x0) ||
     (pSVar4 = (pSVar7->fields).Language, pSVar4 == (Settings_StringSetting_o *)0x0)) goto label_05dae31a;
  pUVar6 = TypeInfo_UI_UIManager->static_fields;
  pUVar6->_appliedLanguage = (pSVar4->fields)._value;
  Il2CppCodeGenWriteBarrier(&pUVar6->_appliedLanguage);
  pUVar11 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar11 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar11 == (UI_BaseMenu_o *)0x0) goto label_05dae31a;
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  }
  switch(sceneName) {
  case 1:
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_UI_UIManager->static_fields->_lastCategories;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05dae31a;
    System_Collections_Generic_Dictionary_object__object___Clear
              (__this,(MethodInfo_4AAD690 *)MethodInfo_System_Collections_Generic_Dictionary_Type_string_Clear
              );
    pUVar9 = UI_ElementFactory__CreateDefaultMenu_object_
                       ((MethodInfo_34D7240 *)MethodInfo_UI_ElementFactory_CreateDefaultMenu_MainMenu);
    pUVar6 = TypeInfo_UI_UIManager->static_fields;
    pUVar6->CurrentMenu = (UI_BaseMenu_o *)pUVar9;
    Il2CppCodeGenWriteBarrier(&pUVar6->CurrentMenu);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__Reset((MethodInfo *)0x0);
  default:
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    goto joined_r0x05dae307;
  case 2:
    ppMVar10 = &MethodInfo_UI_ElementFactory_CreateDefaultMenu_InGameMenu;
    break;
  case 3:
    ppMVar10 = &MethodInfo_UI_ElementFactory_CreateDefaultMenu_MapEditorMenu;
    break;
  case 4:
    if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
      cVar1 = TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode;
    }
    else {
      cVar1 = TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode;
    }
    if (cVar1 == '\0') {
      ppMVar10 = &MethodInfo_UI_ElementFactory_CreateDefaultMenu_CharacterEditorTitanMenu;
    }
    else {
      ppMVar10 = &MethodInfo_UI_ElementFactory_CreateDefaultMenu_CharacterEditorHumanMenu;
    }
    break;
  case 5:
    ppMVar10 = &MethodInfo_UI_ElementFactory_CreateDefaultMenu_SnapshotViewerMenu;
    break;
  case 6:
    ppMVar10 = &MethodInfo_UI_ElementFactory_CreateDefaultMenu_GalleryMenu;
  }
  pUVar11 = (UI_BaseMenu_o *)UI_ElementFactory__CreateDefaultMenu_object_((MethodInfo_34D7240 *)*ppMVar10);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar6 = TypeInfo_UI_UIManager->static_fields;
  pUVar6->CurrentMenu = pUVar11;
  Il2CppCodeGenWriteBarrier(&pUVar6->CurrentMenu);
  uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
joined_r0x05dae307:
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar11 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar11 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar11 != (UI_BaseMenu_o *)0x0) {
      (*(pUVar11->klass->vtable)._4_Setup.methodPtr)(pUVar11,(pUVar11->klass->vtable)._4_Setup.method);
      pUVar11 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar11 != (UI_BaseMenu_o *)0x0) {
        UI_BaseMenu__ApplyScale(pUVar11,sceneName,(MethodInfo *)0x0);
        goto label_05dae22b;
      }
    }
label_05dae31a:
    ThrowNullReferenceException();
  }
label_05dae22b:
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost__PrepareForScene(sceneName,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  TypeInfo_UI_UIManager->static_fields->NeedResizeText = true;
  return;
}


// UI.UIManager$$GetProfileIcon
// il2cpp: System_String_o* UI_UIManager__GetProfileIcon (System_String_o* icon, const MethodInfo* method);
// 0x5dae980
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dae9b3: jmp 0x5daea83

System_String_o * UI_UIManager__GetProfileIcon(System_String_o *icon,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075480f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    Il2CppMethodInitialized_075480f9 = '\x01';
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) goto label_05daea02;
label_05dae9a3:
    pSVar1 = TypeInfo_UI_UIManager->static_fields->AvailableProfileIcons;
  }
  else {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dae9a3;
label_05daea02:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pSVar1 = TypeInfo_UI_UIManager->static_fields->AvailableProfileIcons;
  }
  if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) {
label_05daea83:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_List_object___Contains
                    ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)icon,
                     (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
  if (!bVar2) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar1 = TypeInfo_UI_UIManager->static_fields->AvailableProfileIcons;
    if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) goto label_05daea83;
    icon = System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar1,0,
                      (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
  }
  pSVar3 = System_String__Concat_52f0320(icon,"Icon",(MethodInfo *)0x0);
  return pSVar3;
}


// UI.UIManager$$GetLocaleFormatted
// il2cpp: System_String_o* UI_UIManager__GetLocaleFormatted (System_String_o* category, System_String_o* subCategory, System_String_o* item, System_Object_array* args, const MethodInfo* method);
// 0x5da7ce0

System_String_o *
UI_UIManager__GetLocaleFormatted
          (System_String_o *category,System_String_o *subCategory,System_String_o *item,
          System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075480fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480fa = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     (category,subCategory,item,"","",in_R9);
  pSVar1 = System_String__Format_5302cf0(pSVar1,args,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.UIManager$$GetLocale
// il2cpp: System_String_o* UI_UIManager__GetLocale (System_String_o* category, System_String_o* subCategory, System_String_o* item, System_String_o* forcedLanguage, System_String_o* defaultValue, const MethodInfo* method);
// 0x5d94190

System_String_o *
UI_UIManager__GetLocale
          (System_String_o *category,System_String_o *subCategory,System_String_o *item,
          System_String_o *forcedLanguage,System_String_o *defaultValue,MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  code *vtableDispatch;
  bool bVar4;
  SimpleJSONFixed_JSONObject_o *a;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  
  do {
    if (Il2CppMethodInitialized_075480fb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Item);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"{0} locale error.");
      il2cpp_codegen_initialize_runtime_metadata(&"English");
      il2cpp_codegen_initialize_runtime_metadata(&".");
      Il2CppMethodInitialized_075480fb = '\x01';
    }
    bVar4 = System_String__op_Inequality
                      (forcedLanguage,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                       (MethodInfo *)0x0);
    if (!bVar4) {
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
      if ((pSVar1 == (Settings_GeneralSettings_o *)0x0) ||
         (pSVar2 = (pSVar1->fields).Language, pSVar2 == (Settings_StringSetting_o *)0x0)) goto label_05d9454c;
      forcedLanguage = (pSVar2->fields)._value;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_UI_UIManager->static_fields->_languages;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d9454c;
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)forcedLanguage,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
    if (bVar4) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_UI_UIManager->static_fields->_languages;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d9454c;
      a = System_Collections_Generic_Dictionary_object__object___get_Item
                    (pSVar3,(Il2CppObject *)forcedLanguage,
                     (MethodInfo_4AAD450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Item);
    }
    else {
      a = (SimpleJSONFixed_JSONObject_o *)0x0;
    }
    bVar4 = System_String__op_Inequality
                      (item,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
    pSVar5 = subCategory;
    if (bVar4) {
      pSVar5 = System_String__Concat_5301f10(subCategory,".",item,(MethodInfo *)0x0);
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if (a == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_05d9454c;
      pSVar6 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,category,(a->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        pSVar6 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,category,(a->klass->vtable)._7_get_Item.method)
        ;
        if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05d9454c:
          ThrowNullReferenceException();
        }
        pSVar6 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar6,pSVar5,(pSVar6->klass->vtable)._7_get_Item.method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (!bVar4) {
          pSVar6 = (*(a->klass->vtable)._7_get_Item.methodPtr)
                             (a,category,(a->klass->vtable)._7_get_Item.method);
          if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            pSVar6 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar6,pSVar5,(pSVar6->klass->vtable)._7_get_Item.method);
            if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              vtableDispatch = *(code **)((long)pSVar6->klass + 0x1c8);
              pSVar5 = (System_String_o *)
                       (*vtableDispatch)
                                 (pSVar6,*(undefined8 *)((long)pSVar6->klass + 0x1d0),vtableDispatch);
              return pSVar5;
            }
          }
          goto label_05d9454c;
        }
      }
    }
    bVar4 = System_String__op_Equality(forcedLanguage,"English",(MethodInfo *)0x0);
    if (bVar4) {
      bVar4 = System_String__op_Inequality
                        (defaultValue,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                         (MethodInfo *)0x0);
      if (bVar4) {
        return defaultValue;
      }
      pSVar5 = System_String__Format("{0} locale error.",(Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      return pSVar5;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    forcedLanguage = "English";
  } while( true );
}


// UI.UIManager$$HasLocale
// il2cpp: bool UI_UIManager__HasLocale (System_String_o* category, System_String_o* subCategory, System_String_o* item, System_String_o* forcedLanguage, const MethodInfo* method);
// 0x5daea90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5daebe5: jmp 0x5daecfe

bool UI_UIManager__HasLocale
               (System_String_o *category,System_String_o *subCategory,System_String_o *item,
               System_String_o *forcedLanguage,MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool bVar4;
  SimpleJSONFixed_JSONObject_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  
  if (Il2CppMethodInitialized_075480fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_075480fc = '\x01';
  }
  bVar4 = System_String__op_Inequality
                    (forcedLanguage,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                     (MethodInfo *)0x0);
  if (!bVar4) {
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    if ((pSVar1 == (Settings_GeneralSettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).Language, pSVar2 == (Settings_StringSetting_o *)0x0)) goto label_05daecfe;
    forcedLanguage = (pSVar2->fields)._value;
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_UI_UIManager->static_fields->_languages;
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05daecfe;
  bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar3,(Il2CppObject *)forcedLanguage,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
  if (!bVar4) {
    return false;
  }
  bVar4 = System_String__op_Inequality
                    (item,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar4) {
    subCategory = System_String__Concat_5301f10(subCategory,".",item,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor != 0) goto label_05daebd6;
label_05daec11:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_UI_UIManager->static_fields->_languages;
  }
  else {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) goto label_05daec11;
label_05daebd6:
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_UI_UIManager->static_fields->_languages;
  }
  if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (pSVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar3,(Il2CppObject *)forcedLanguage,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Item),
     pSVar5 != (SimpleJSONFixed_JSONObject_o *)0x0)) {
    pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar5,category,(pSVar5->klass->vtable)._7_get_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      return false;
    }
    pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar5,category,(pSVar5->klass->vtable)._7_get_Item.method);
    if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar6 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar6,subCategory,(pSVar6->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      return bVar4;
    }
  }
label_05daecfe:
  ThrowNullReferenceException();
}


// UI.UIManager$$GetLocaleArray
// il2cpp: System_String_array* UI_UIManager__GetLocaleArray (System_String_o* category, System_String_o* subCategory, System_String_o* item, System_String_o* forcedLanguage, const MethodInfo* method);
// 0x5daed10

System_String_array *
UI_UIManager__GetLocaleArray
          (System_String_o *category,System_String_o *subCategory,System_String_o *item,
          System_String_o *forcedLanguage,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Settings_GeneralSettings_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  SimpleJSONFixed_JSONNode_c *pSVar7;
  MethodInfo *pMVar8;
  bool bVar9;
  SimpleJSONFixed_JSONObject_o *a;
  System_String_o *pSVar10;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  System_String_array *pSVar12;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar13;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  while( true ) {
    if (Il2CppMethodInitialized_075480fd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Item);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"{0} locale error.");
      il2cpp_codegen_initialize_runtime_metadata(&"English");
      il2cpp_codegen_initialize_runtime_metadata(&".");
      Il2CppMethodInitialized_075480fd = '\x01';
    }
    local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    local_78.m_Array.fields._index = 0;
    local_78.m_Array.fields._version = 0;
    local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
    local_78.m_Object.fields._getEnumeratorRetType = 0;
    local_78.m_Object.fields._36_4_ = 0;
    local_78.m_Object.fields._version = 0;
    local_78.m_Object.fields._index = 0;
    local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
    local_78.type = 0;
    local_78._4_4_ = 0;
    local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar9 = System_String__op_Inequality
                      (forcedLanguage,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                       (MethodInfo *)0x0);
    if (!bVar9) {
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
      if ((pSVar4 == (Settings_GeneralSettings_o *)0x0) ||
         (pSVar5 = (pSVar4->fields).Language, pSVar5 == (Settings_StringSetting_o *)0x0)) goto label_05daf306;
      forcedLanguage = (pSVar5->fields)._value;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_UI_UIManager->static_fields->_languages;
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05daf306;
    bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar6,(Il2CppObject *)forcedLanguage,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
    if (bVar9) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_UI_UIManager->static_fields->_languages;
      if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05daf306;
      a = System_Collections_Generic_Dictionary_object__object___get_Item
                    (pSVar6,(Il2CppObject *)forcedLanguage,
                     (MethodInfo_4AAD450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Item);
    }
    else {
      a = (SimpleJSONFixed_JSONObject_o *)0x0;
    }
    bVar9 = System_String__op_Inequality
                      (item,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
    pSVar10 = subCategory;
    if (bVar9) {
      pSVar10 = System_String__Concat_5301f10(subCategory,".",item,(MethodInfo *)0x0);
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar9 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar9) {
      if (a == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_05daf306;
      pSVar11 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,category,(a->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar9 = SimpleJSONFixed_JSONNode__op_Equality(pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar9) {
        pSVar11 = (*(a->klass->vtable)._7_get_Item.methodPtr)
                            (a,category,(a->klass->vtable)._7_get_Item.method);
        if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05daf306;
        pSVar11 = (*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar11,pSVar10,(pSVar11->klass->vtable)._7_get_Item.method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar9 = SimpleJSONFixed_JSONNode__op_Equality(pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (!bVar9) {
          __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_List_object__o *)__this,
                     (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
          pSVar11 = (*(a->klass->vtable)._7_get_Item.methodPtr)
                              (a,category,(a->klass->vtable)._7_get_Item.method);
          if ((pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
             (pSVar11 = (*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar11,pSVar10,(pSVar11->klass->vtable)._7_get_Item.method),
             pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05daf306;
          pSVar7 = pSVar11->klass;
          bVar2 = (TypeInfo_SimpleJSONFixed_JSONArray->_2).typeHierarchyDepth;
          if (((pSVar7->_2).typeHierarchyDepth < bVar2) ||
             ((pSVar7->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray)) goto label_05daf34a;
          (*(pSVar7->vtable)._32_unknown.methodPtr)(&local_78,pSVar11,(pSVar7->vtable)._32_unknown.method);
          bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
          if (!bVar9) {
            if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_05daf306;
            goto label_05daf29e;
          }
          if (__this != (System_Collections_Generic_List_string__o *)0x0) {
            goto label_05daf1dc;
          }
          SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar13,(MethodInfo *)0x0);
          if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05daf306;
          pSVar7 = pSVar11->klass;
          bVar2 = (TypeInfo_SimpleJSONFixed_JSONString->_2).typeHierarchyDepth;
          if ((bVar2 <= (pSVar7->_2).typeHierarchyDepth) &&
             ((pSVar7->_2).typeHierarchy[(ulong)bVar2 - 1] ==
              (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString)) {
            (*(pSVar7->vtable)._9_get_Value.methodPtr)(pSVar11,(pSVar7->vtable)._9_get_Value.method);
            ThrowNullReferenceException();
          }
          goto label_05daf34a;
        }
      }
    }
    bVar9 = System_String__op_Equality(forcedLanguage,"English",(MethodInfo *)0x0);
    if (bVar9) break;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    forcedLanguage = "English";
  }
  pSVar12 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
  pSVar10 = System_String__Format("{0} locale error.",(Il2CppObject *)pSVar10,(MethodInfo *)0x0);
  if (pSVar12 != (System_String_array *)0x0) {
    if ((int)pSVar12->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar12->m_Items[0] = pSVar10;
    Il2CppCodeGenWriteBarrier(pSVar12->m_Items);
    return pSVar12;
  }
label_05daf306:
  ThrowNullReferenceException();
label_05daf1dc:
  SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                     ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar13,(MethodInfo *)0x0);
  if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05daf306;
  pSVar7 = pSVar11->klass;
  bVar2 = (TypeInfo_SimpleJSONFixed_JSONString->_2).typeHierarchyDepth;
  if (((pSVar7->_2).typeHierarchyDepth < bVar2) ||
     ((pSVar7->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString)) {
label_05daf34a:
    il2cpp_codegen_raise_invalid_cast_exception(pSVar11);
  }
  pSVar10 = (*(pSVar7->vtable)._9_get_Value.methodPtr)(pSVar11,(pSVar7->vtable)._9_get_Value.method);
  pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar12 = (__this->fields)._items;
  if (pSVar12 == (System_String_array *)0x0) goto label_05daf306;
  uVar3 = (__this->fields)._size;
  if (uVar3 < (uint)pSVar12->max_length) {
    (__this->fields)._size = uVar3 + 1;
    pSVar12->m_Items[(int)uVar3] = pSVar10;
    Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar3);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar10,
               (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
  }
  bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                    ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
  if (!bVar9) {
label_05daf29e:
    pSVar12 = (System_String_array *)
              System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_object__o *)__this,
                         (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    return pSVar12;
  }
  goto label_05daf1dc;
}


// UI.UIManager$$GetLocaleOptions
// il2cpp: System_String_array* UI_UIManager__GetLocaleOptions (System_String_o* key, const MethodInfo* method);
// 0x5daf360

System_String_array * UI_UIManager__GetLocaleOptions(System_String_o *key,MethodInfo *method)

{
  int iVar1;
  System_String_o *category;
  System_String_o *item;
  System_Char_array *separator;
  System_String_array *pSVar2;
  MethodInfo *method_00;
  System_String_o *subCategory;
  
  if (Il2CppMethodInitialized_075480fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_075480fe = '\x01';
  }
  separator = (System_Char_array *)SZArrayNew(TypeInfo_char_array,1);
  if (separator != (System_Char_array *)0x0) {
    if ((int)separator->max_length == 0) {
label_05daf461:
      ThrowIndexOutOfRangeException();
    }
    separator->m_Items[0] = 0x2e;
    if (key != (System_String_o *)0x0) {
      pSVar2 = System_String__Split_5304fb0(key,separator,3,(MethodInfo *)0x0);
      if (pSVar2 != (System_String_array *)0x0) {
        iVar1 = (int)pSVar2->max_length;
        if (iVar1 != 0) {
          if (iVar1 < 2) {
            method_00 = *(MethodInfo **)(g_data_07556758 + 0xb8);
            subCategory = (System_String_o *)method_00->methodPointer;
          }
          else {
            subCategory = pSVar2->m_Items[1];
            if (iVar1 == 2) {
              method_00 = *(MethodInfo **)(g_data_07556758 + 0xb8);
            }
            else {
              method_00 = (MethodInfo *)(pSVar2->m_Items + 2);
            }
          }
          category = pSVar2->m_Items[0];
          item = (System_String_o *)method_00->methodPointer;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar2 = UI_UIManager__GetLocaleOptions_5caf470(category,subCategory,item,method_00);
          return pSVar2;
        }
        goto label_05daf461;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.UIManager$$GetLocaleOptions
// il2cpp: System_String_array* UI_UIManager__GetLocaleOptions (System_String_o* category, System_String_o* subCategory, System_String_o* item, const MethodInfo* method);
// 0x5daf470

System_String_array *
UI_UIManager__GetLocaleOptions_5caf470
          (System_String_o *category,System_String_o *subCategory,System_String_o *item,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array *pSVar2;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_075480ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_075480ff = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleArray(category,subCategory,item,"English",in_R8);
  pSVar2 = UI_UIManager__GetLocaleArray(category,subCategory,item,"",in_R8);
  if ((pSVar2 == (System_String_array *)0x0) || (pSVar1 == (System_String_array *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length == (int)pSVar1->max_length) {
    pSVar1 = pSVar2;
  }
  return pSVar1;
}


// UI.UIManager$$GetLocaleOptions
// il2cpp: System_String_array* UI_UIManager__GetLocaleOptions (System_String_o* category, System_String_o* subCategory, System_String_o* item, System_String_array* fallback, const MethodInfo* method);
// 0x5daf530
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5daf5ec: jmp 0x5daf5f0

System_String_array *
UI_UIManager__GetLocaleOptions_5caf530
          (System_String_o *category,System_String_o *subCategory,System_String_o *item,
          System_String_array *fallback,MethodInfo *method)

{
  bool bVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_07548100 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_07548100 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  bVar1 = UI_UIManager__HasLocale(category,subCategory,item,"English",method);
  if (bVar1) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar2 = UI_UIManager__GetLocaleArray(category,subCategory,item,"",method);
    if (fallback == (System_String_array *)0x0) {
      fallback = (System_String_array *)0x0;
    }
    else {
      if (pSVar2 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((int)pSVar2->max_length == (int)fallback->max_length) {
        fallback = pSVar2;
      }
    }
  }
  return fallback;
}


// UI.UIManager$$GetLocaleCommon
// il2cpp: System_String_o* UI_UIManager__GetLocaleCommon (System_String_o* item, const MethodInfo* method);
// 0x5d93470

System_String_o * UI_UIManager__GetLocaleCommon(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07548101 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548101 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("Common",item,"","",
                      "",in_R9);
  return pSVar1;
}


// UI.UIManager$$GetLocaleCommonArray
// il2cpp: System_String_array* UI_UIManager__GetLocaleCommonArray (System_String_o* item, const MethodInfo* method);
// 0x5daf610

System_String_array * UI_UIManager__GetLocaleCommonArray(System_String_o *item,MethodInfo *method)

{
  System_String_array *pSVar1;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07548102 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548102 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleArray
                     ("Common",item,"","",in_R8);
  return pSVar1;
}


// UI.UIManager$$GetLocaleCategoryStrings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__string___o* UI_UIManager__GetLocaleCategoryStrings (System_String_o* pattern, const MethodInfo* method);
// 0x5daf680

System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *
UI_UIManager__GetLocaleCategoryStrings(System_String_o *pattern,MethodInfo *method)

{
  uint startIndex;
  bool bVar1;
  System_String_o *category;
  System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *pSVar2;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_07548103 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"internal://");
    Il2CppMethodInitialized_07548103 = '\x01';
  }
  if (pattern != (System_String_o *)0x0) {
    pMVar3 = (MethodInfo *)"internal://";
    bVar1 = System_String__StartsWith(pattern,"internal://",(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar2 = UI_UIManager__GetExternalLocaleCategoryStrings(pattern,pMVar3);
      return pSVar2;
    }
    if ("internal://" != (System_String_o *)0x0) {
      startIndex = ("internal://"->fields)._stringLength;
      pMVar3 = (MethodInfo *)(ulong)startIndex;
      category = System_String__Substring(pattern,startIndex,(MethodInfo *)0x0);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar2 = UI_UIManager__GetInternalLocaleCategoryStrings(category,pMVar3);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.UIManager$$GetInternalLocaleCategoryStrings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__string___o* UI_UIManager__GetInternalLocaleCategoryStrings (System_String_o* category, const MethodInfo* method);
// 0x5daf740
// eh: try 0x5daf92a..0x5dafbcc -> pad 0x5dafbe3 (+23 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5dafc17..0x5dafc1c -> pad 0x5dafc41 cleanup
// eh: try 0x5dafc44..0x5dafc4e -> pad 0x5dafc56 catch (...) [compiler noexcept guard]
// asm: 46 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dafbd1: jmp 0x5dafbff
// asm:   0x5dafbd3: jmp 0x5dafbff
// asm:   0x5dafbd5: jmp 0x5dafbff
// asm:   0x5dafbd7: jmp 0x5dafbff
// asm:   0x5dafbd9: jmp 0x5dafbff
// asm:   0x5dafbdb: jmp 0x5dafbff
// asm:   0x5dafbdd: jmp 0x5dafbff
// asm:   0x5dafbdf: jmp 0x5dafbff
// asm:   0x5dafbe1: jmp 0x5dafbff
// asm:   0x5dafbe3: jmp 0x5dafbff
// asm:   0x5dafbe5: jmp 0x5dafbff
// asm:   0x5dafbe7: jmp 0x5dafbff
// asm:   0x5dafbe9: jmp 0x5dafbff
// asm:   0x5dafbeb: jmp 0x5dafbff
// asm:   0x5dafbed: jmp 0x5dafbff
// asm:   0x5dafbef: jmp 0x5dafbff
// asm:   0x5dafbf1: jmp 0x5dafbff
// asm:   0x5dafbf3: jmp 0x5dafbff
// asm:   0x5dafbf5: jmp 0x5dafbff
// asm:   0x5dafbf7: jmp 0x5dafbff
// asm:   0x5dafbf9: jmp 0x5dafbff
// asm:   0x5dafbfb: jmp 0x5dafbff
// asm:   0x5dafbfd: jmp 0x5dafbff
// asm:   0x5dafbff: mov rbx, rax
// asm:   0x5dafc02: cmp edx, 1
// asm:   0x5dafc05: jne 0x5dafc44
// asm:   0x5dafc07: mov rdi, rbx
// asm:   0x5dafc0a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dafc0f: mov rbx, qword ptr [rax]
// asm:   0x5dafc12: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5dafc17: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dafc1c: lea rax, [rip + 0x14e041d]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONObject_Dispose
// asm:   0x5dafc23: mov rsi, qword ptr [rax]
// asm:   0x5dafc26: lea rdi, [rsp + 0x10]
// asm:   0x5dafc2b: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5dafc30: test rbx, rbx
// asm:   0x5dafc33: je 0x5dafb8d
// asm:   0x5dafc39: mov rdi, rbx
// asm:   0x5dafc3c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dafc41: mov rbx, rax
// asm:   0x5dafc44: lea rdi, [rsp + 0x38]
// asm:   0x5dafc49: call 0x2fddde0  ; il2cpp_runtime_helper_02fddde0()
// asm:   0x5dafc4e: mov rdi, rbx
// asm:   0x5dafc51: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dafc56: mov rdi, rax
// asm:   0x5dafc59: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *
UI_UIManager__GetInternalLocaleCategoryStrings(System_String_o *category,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *key;
  Il2CppObject *pIVar1;
  bool bVar2;
  char cVar3;
  System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *__this_00;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  SimpleJSONFixed_JSONNode_o *__this_02;
  System_String_o *key_00;
  long *plVar4;
  Il2CppObject *value;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  Il2CppObject *pIStack_138;
  Il2CppObject *pIStack_130;
  Il2CppObject *pIStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  undefined1 auStack_110 [24];
  Il2CppObject *pIStack_f8;
  Il2CppObject *pIStack_f0;
  int32_t iStack_e8;
  undefined4 uStack_e4;
  System_Collections_Generic_List_T__o *pSStack_e0;
  int32_t iStack_d8;
  int32_t iStack_d4;
  SimpleJSONFixed_JSONNode_o *pSStack_d0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_c8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_c0;
  Il2CppObject *pIStack_b8;
  Il2CppObject *pIStack_b0;
  Il2CppObject *pIStack_a8;
  undefined8 uStack_a0;
  System_Collections_Generic_List_T__o *pSStack_98;
  undefined8 uStack_90;
  SimpleJSONFixed_JSONNode_o *pSStack_88;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  Il2CppObject *pIStack_68;
  Il2CppObject *pIStack_60;
  Il2CppObject *pIStack_58;
  undefined8 uStack_50;
  System_Collections_Generic_List_T__o *pSStack_48;
  undefined8 uStack_40;
  SimpleJSONFixed_JSONNode_o *pSStack_38;
  
  if (Il2CppMethodInitialized_07548104 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONObject_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONObject_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07548104 = '\x01';
  }
  pIStack_138 = (Il2CppObject *)0x0;
  pIStack_130 = (Il2CppObject *)0x0;
  auStack_148 = (undefined1  [8])0x0;
  uStack_140._0_4_ = 0;
  uStack_140._4_4_ = 0;
  pIStack_128 = (Il2CppObject *)0x0;
  pSStack_48 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_40._0_4_ = 0;
  uStack_40._4_4_ = 0;
  pIStack_58 = (Il2CppObject *)0x0;
  uStack_50._0_4_ = 0;
  uStack_50._4_4_ = 0;
  pIStack_68 = (Il2CppObject *)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  pSStack_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pSStack_38 = (SimpleJSONFixed_JSONNode_o *)0x0;
  pSStack_98 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_90._0_4_ = 0;
  uStack_90._4_4_ = 0;
  pIStack_a8 = (Il2CppObject *)0x0;
  uStack_a0._0_4_ = 0;
  uStack_a0._4_4_ = 0;
  pIStack_b8 = (Il2CppObject *)0x0;
  pIStack_b0 = (Il2CppObject *)0x0;
  pSStack_c8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pSStack_c0 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_ctor);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_UI_UIManager->static_fields->_languages;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_110,__this,
             (MethodInfo_4AAD970 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_GetEnumerator);
  pIStack_128 = pIStack_f0;
  pIStack_138 = (Il2CppObject *)auStack_110._16_8_;
  pIStack_130 = pIStack_f8;
  auStack_148 = (undefined1  [8])auStack_110._0_8_;
  uStack_140 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_110._8_8_;
  uStack_120 = 0;
  puStack_118 = auStack_148;
  do {
    do {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_148,
                         (MethodInfo_4CE66D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONObject_MoveNext
                        );
      pIVar1 = pIStack_130;
      key = pIStack_138;
      if (!bVar2) {
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_148,
                   (MethodInfo_4CE67F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONObject_Dispose);
        return __this_00;
      }
      if (pIStack_130 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      cVar3 = (*pIStack_130->klass->vtable[0x1c].methodPtr)
                        (pIStack_130,category,pIStack_130->klass->vtable[0x1c].method);
    } while (cVar3 == '\0');
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
               (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    __this_02 = (SimpleJSONFixed_JSONNode_o *)
                (*pIVar1->klass->vtable[7].methodPtr)(pIVar1,category,pIVar1->klass->vtable[7].method);
    if (__this_02 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    SimpleJSONFixed_JSONNode__get_Keys
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)auStack_110,__this_02,(MethodInfo *)0x0);
    pSStack_88 = pSStack_d0;
    pSStack_98 = pSStack_e0;
    uStack_90._0_4_ = iStack_d8;
    uStack_90._4_4_ = iStack_d4;
    pIStack_a8 = pIStack_f0;
    uStack_a0._0_4_ = iStack_e8;
    uStack_a0._4_4_ = uStack_e4;
    pIStack_b8 = (Il2CppObject *)auStack_110._16_8_;
    pIStack_b0 = pIStack_f8;
    pSStack_c8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_110._0_8_;
    pSStack_c0 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_110._8_8_;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)auStack_110,
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&pSStack_c8,(MethodInfo *)0x0);
    pSStack_38 = pSStack_d0;
    pSStack_48 = pSStack_e0;
    uStack_40._0_4_ = iStack_d8;
    uStack_40._4_4_ = iStack_d4;
    pIStack_58 = pIStack_f0;
    uStack_50._0_4_ = iStack_e8;
    uStack_50._4_4_ = uStack_e4;
    pIStack_68 = (Il2CppObject *)auStack_110._16_8_;
    pIStack_60 = pIStack_f8;
    pSStack_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_110._0_8_;
    pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_110._8_8_;
    while( true ) {
      bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&pSStack_78,(MethodInfo *)0x0);
      if (!bVar2) break;
      key_00 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                         ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&pSStack_78,(MethodInfo *)0x0);
      plVar4 = (long *)(*pIVar1->klass->vtable[7].methodPtr)(pIVar1,category,pIVar1->klass->vtable[7].method);
      if (plVar4 == (long *)0x0) {
        ThrowNullReferenceException();
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))(plVar4,key_00,*(undefined8 *)(*plVar4 + 0x1b0));
      if (plVar4 == (long *)0x0) {
        ThrowNullReferenceException();
      }
      cVar3 = (**(code **)(*plVar4 + 0x208))(plVar4);
      if (cVar3 != '\0') {
        plVar4 = (long *)(*pIVar1->klass->vtable[7].methodPtr)
                                   (pIVar1,category,pIVar1->klass->vtable[7].method);
        if (plVar4 == (long *)0x0) {
          ThrowNullReferenceException();
        }
        plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))(plVar4,key_00,*(undefined8 *)(*plVar4 + 0x1b0));
        if (plVar4 == (long *)0x0) {
          ThrowNullReferenceException();
        }
        value = (Il2CppObject *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
        if (__this_01 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,(Il2CppObject *)key_00
                   ,value,(MethodInfo_4AAD4C0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
      }
    }
    if (__this_00 == (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,key,
               (Il2CppObject *)__this_01,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item);
  } while( true );
}


// UI.UIManager$$GetExternalLocaleCategoryStrings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__string___o* UI_UIManager__GetExternalLocaleCategoryStrings (System_String_o* uniqueName, const MethodInfo* method);
// 0x5dafc60
// eh: try 0x5dafe7c..0x5db01b8 -> pad 0x5db01d1 (+30 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5db020a..0x5db034a -> pad 0x5db034c (+1 call sites) cleanup
// eh: try 0x5db034f..0x5db0354 -> pad 0x5db035c catch (...) [compiler noexcept guard]
// asm: 91 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dafe07: je 0x5db02cc
// asm:   0x5dafe39: mov rdi, rbp
// asm:   0x5dafe3c: xor esi, esi
// asm:   0x5dafe3e: call 0x69c4c70  ; UnityEngine_Debug__LogError()
// asm:   0x5dafe43: lea rbp, [rsp + 0x28]
// asm:   0x5dafe48: nop dword ptr [rax + rax]
// asm:   0x5daffec: nop dword ptr [rax]
// asm:   0x5db01bd: jmp 0x5db01f3
// asm:   0x5db01bf: jmp 0x5db01f3
// asm:   0x5db01c1: jmp 0x5db01f3
// asm:   0x5db01c3: jmp 0x5db01f3
// asm:   0x5db01c5: jmp 0x5db01f3
// asm:   0x5db01c7: jmp 0x5db01f3
// asm:   0x5db01c9: jmp 0x5db01f3
// asm:   0x5db01cb: jmp 0x5db01f3
// asm:   0x5db01cd: jmp 0x5db01f3
// asm:   0x5db01cf: jmp 0x5db01f3
// asm:   0x5db01d1: jmp 0x5db01f3
// asm:   0x5db01d3: jmp 0x5db01f3
// asm:   0x5db01d5: jmp 0x5db01f3
// asm:   0x5db01d7: jmp 0x5db01f3
// asm:   0x5db01d9: jmp 0x5db01f3
// asm:   0x5db01db: jmp 0x5db01f3
// asm:   0x5db01dd: jmp 0x5db01f3
// asm:   0x5db01df: jmp 0x5db01f3
// asm:   0x5db01e1: jmp 0x5db01f3
// asm:   0x5db01e3: jmp 0x5db01f3
// asm:   0x5db01e5: jmp 0x5db01f3
// asm:   0x5db01e7: jmp 0x5db01f3
// asm:   0x5db01e9: jmp 0x5db01f3
// asm:   0x5db01eb: jmp 0x5db01f3
// asm:   0x5db01ed: jmp 0x5db01f3
// asm:   0x5db01ef: jmp 0x5db01f3
// asm:   0x5db01f1: jmp 0x5db01f3
// asm:   0x5db01f3: mov r14, rax
// asm:   0x5db01f6: cmp edx, 1
// asm:   0x5db01f9: jne 0x5db0354
// asm:   0x5db01ff: mov rdi, r14
// asm:   0x5db0202: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5db0207: mov rbp, rax
// asm:   0x5db020a: lea rdi, [rip + 0x14c7eaf]  ; TypeInfo_System_Exception
// asm:   0x5db0211: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5db0216: mov rcx, qword ptr [rbp]
// asm:   0x5db021a: mov rsi, qword ptr [rcx]
// asm:   0x5db021d: mov rdi, rax
// asm:   0x5db0220: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5db0225: test al, al
// asm:   0x5db0227: je 0x5db0328
// asm:   0x5db022d: mov rbp, qword ptr [rbp]
// asm:   0x5db0231: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5db0236: test rbp, rbp
// asm:   0x5db0239: je 0x5db0323
// asm:   0x5db023f: mov rax, qword ptr [rbp]
// asm:   0x5db0243: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5db024a: mov rdi, rbp
// asm:   0x5db024d: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5db0253: mov r14, rax
// asm:   0x5db0256: lea rdi, [rip + 0x152b99b]  ; "Failed to load external locale file "
// asm:   0x5db025d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5db0262: mov rbp, rax
// asm:   0x5db0265: lea rdi, [rip + 0x1521d14]  ; ": "
// asm:   0x5db026c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5db0271: mov rdi, rbp
// asm:   0x5db0274: mov rsi, qword ptr [rsp + 0x20]
// asm:   0x5db0279: mov rdx, rax
// asm:   0x5db027c: mov rcx, r14
// asm:   0x5db027f: xor r8d, r8d
// asm:   0x5db0282: call 0x5402810  ; System_String__Concat()
// asm:   0x5db0287: mov rbp, rax
// asm:   0x5db028a: lea rdi, [rip + 0x14c73b7]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5db0291: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5db0296: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5db029d: jne 0x5dafe39
// asm:   0x5db02a3: mov rdi, rax
// asm:   0x5db02a6: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5db02ab: jmp 0x5dafe39
// asm:   0x5db0328: mov edi, 8
// asm:   0x5db032d: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5db0332: mov rcx, qword ptr [rbp]
// asm:   0x5db0336: mov qword ptr [rax], rcx
// asm:   0x5db0339: lea rsi, [rip + 0x107d1c0]
// asm:   0x5db0340: mov rdi, rax
// asm:   0x5db0343: xor edx, edx
// asm:   0x5db0345: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5db034a: jmp 0x5db034c
// asm:   0x5db034c: mov r14, rax
// asm:   0x5db034f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5db0354: mov rdi, r14
// asm:   0x5db0357: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5db035c: mov rdi, rax
// asm:   0x5db035f: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *
UI_UIManager__GetExternalLocaleCategoryStrings(System_String_o *uniqueName,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  SimpleJSONFixed_JSONNode_c *pSVar3;
  bool bVar4;
  System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *__this;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  ulong uVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  System_String_o *pSVar10;
  System_String_o *value;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *lastManagedFrame;
  ulong uVar11;
  SimpleJSONFixed_JSONNode_Enumerator_Fields SStack_110;
  SimpleJSONFixed_JSONNode_Enumerator_Fields SStack_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields SStack_78;
  
  if (Il2CppMethodInitialized_07548105 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"*.json");
    Il2CppMethodInitialized_07548105 = '\x01';
  }
  SStack_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_78.m_Array.fields._index = 0;
  SStack_78.m_Array.fields._version = 0;
  SStack_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  SStack_78.m_Object.fields._getEnumeratorRetType = 0;
  SStack_78.m_Object.fields._36_4_ = 0;
  SStack_78.m_Object.fields._version = 0;
  SStack_78.m_Object.fields._index = 0;
  SStack_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  SStack_78.type = 0;
  SStack_78._4_4_ = 0;
  SStack_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  SStack_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_c8.m_Array.fields._index = 0;
  SStack_c8.m_Array.fields._version = 0;
  SStack_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  SStack_c8.m_Object.fields._getEnumeratorRetType = 0;
  SStack_c8.m_Object.fields._36_4_ = 0;
  SStack_c8.m_Object.fields._version = 0;
  SStack_c8.m_Object.fields._index = 0;
  SStack_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  SStack_c8.type = 0;
  SStack_c8._4_4_ = 0;
  SStack_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_ctor);
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar5 = System_String__Concat_5301f10
                     (TypeInfo_Utility_FolderPaths->static_fields->CustomLocale,"/",
                      uniqueName,(MethodInfo *)0x0);
  bVar4 = System_IO_Directory__Exists(pSVar5,(MethodInfo *)0x0);
  if (bVar4) {
    pSVar6 = System_IO_Directory__GetFiles(pSVar5,"*.json",(MethodInfo *)0x0);
    if (pSVar6 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if (pSVar6->max_length != 0) {
      if (0 < (int)pSVar6->max_length) {
        uVar7 = pSVar6->max_length & 0xffffffff;
        uVar11 = 0;
        do {
          if (uVar7 <= uVar11) {
            ThrowIndexOutOfRangeException();
          }
          pSVar5 = System_IO_File__ReadAllText(pSVar6->m_Items[uVar11],(MethodInfo *)0x0);
          pSVar8 = SimpleJSONFixed_JSON__Parse(pSVar5,(MethodInfo *)0x0);
          if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar3 = pSVar8->klass;
          bVar1 = (TypeInfo_SimpleJSONFixed_JSONObject->_2).typeHierarchyDepth;
          if (((pSVar3->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
          }
          bVar4 = (*(pSVar3->vtable)._28_HasKey.methodPtr)
                            (pSVar8,"Name",(pSVar3->vtable)._28_HasKey.method);
          if (bVar4) {
            pSVar9 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
            if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar5 = (*(pSVar9->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar9,(pSVar9->klass->vtable)._9_get_Value.method);
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string
                                  );
            System_Collections_Generic_Dictionary_object__object____ctor
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (MethodInfo_4AAC8D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
            SimpleJSONFixed_JSONNode__get_Keys
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&SStack_110,pSVar8,(MethodInfo *)0x0);
            SStack_c8.m_Array.fields._current = SStack_110.m_Array.fields._current;
            SStack_c8.m_Array.fields._list = SStack_110.m_Array.fields._list;
            SStack_c8.m_Array.fields._index = SStack_110.m_Array.fields._index;
            SStack_c8.m_Array.fields._version = SStack_110.m_Array.fields._version;
            SStack_c8.m_Object.fields._current.fields.value = SStack_110.m_Object.fields._current.fields.value
            ;
            SStack_c8.m_Object.fields._getEnumeratorRetType = SStack_110.m_Object.fields._getEnumeratorRetType
            ;
            SStack_c8.m_Object.fields._36_4_ = SStack_110.m_Object.fields._36_4_;
            SStack_c8.m_Object.fields._version = SStack_110.m_Object.fields._version;
            SStack_c8.m_Object.fields._index = SStack_110.m_Object.fields._index;
            SStack_c8.m_Object.fields._current.fields.key = SStack_110.m_Object.fields._current.fields.key;
            SStack_c8.type = SStack_110.type;
            SStack_c8._4_4_ = SStack_110._4_4_;
            SStack_c8.m_Object.fields._dictionary = SStack_110.m_Object.fields._dictionary;
            SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&SStack_110,
                       (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&SStack_c8,(MethodInfo *)0x0);
            SStack_78.m_Array.fields._current = SStack_110.m_Array.fields._current;
            SStack_78.m_Array.fields._list = SStack_110.m_Array.fields._list;
            SStack_78.m_Array.fields._index = SStack_110.m_Array.fields._index;
            SStack_78.m_Array.fields._version = SStack_110.m_Array.fields._version;
            SStack_78.m_Object.fields._current.fields.value = SStack_110.m_Object.fields._current.fields.value
            ;
            SStack_78.m_Object.fields._getEnumeratorRetType = SStack_110.m_Object.fields._getEnumeratorRetType
            ;
            SStack_78.m_Object.fields._36_4_ = SStack_110.m_Object.fields._36_4_;
            SStack_78.m_Object.fields._version = SStack_110.m_Object.fields._version;
            SStack_78.m_Object.fields._index = SStack_110.m_Object.fields._index;
            SStack_78.m_Object.fields._current.fields.key = SStack_110.m_Object.fields._current.fields.key;
            SStack_78.type = SStack_110.type;
            SStack_78._4_4_ = SStack_110._4_4_;
            SStack_78.m_Object.fields._dictionary = SStack_110.m_Object.fields._dictionary;
            if (__this_00 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
              while (bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                       ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&SStack_78,
                                        (MethodInfo *)0x0), bVar4) {
                pSVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                                    ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&SStack_78,(MethodInfo *)0x0)
                ;
                bVar4 = System_String__op_Equality(pSVar10,"Name",(MethodInfo *)0x0);
                if (!bVar4) {
                  pSVar9 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar8,pSVar10,(pSVar8->klass->vtable)._7_get_Item.method);
                  if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05db016b;
                  bVar4 = (*(pSVar9->klass->vtable)._13_get_IsString.methodPtr)
                                    (pSVar9,(pSVar9->klass->vtable)._13_get_IsString.method);
                  if (bVar4) {
                    pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                       (pSVar8,pSVar10,(pSVar8->klass->vtable)._7_get_Item.method);
                    if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                      (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                                (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
                      ThrowNullReferenceException();
                    }
                    goto label_05db012f;
                  }
                }
              }
            }
            else {
              while (bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                       ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&SStack_78,
                                        (MethodInfo *)0x0), bVar4) {
                pSVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                                    ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&SStack_78,(MethodInfo *)0x0)
                ;
                bVar4 = System_String__op_Equality(pSVar10,"Name",(MethodInfo *)0x0);
                if (!bVar4) {
                  pSVar9 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar8,pSVar10,(pSVar8->klass->vtable)._7_get_Item.method);
                  if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05db016b:
                    ThrowNullReferenceException();
                  }
                  bVar4 = (*(pSVar9->klass->vtable)._13_get_IsString.methodPtr)
                                    (pSVar9,(pSVar9->klass->vtable)._13_get_IsString.method);
                  if (bVar4) {
                    pSVar9 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                       (pSVar8,pSVar10,(pSVar8->klass->vtable)._7_get_Item.method);
                    if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05db012f:
                      ThrowNullReferenceException();
                    }
                    value = (*(pSVar9->klass->vtable)._9_get_Value.methodPtr)
                                      (pSVar9,(pSVar9->klass->vtable)._9_get_Value.method);
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                               (Il2CppObject *)pSVar10,(Il2CppObject *)value,
                               (MethodInfo_4AAD4C0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
                  }
                }
              }
            }
            if (__this == (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)0x0)
            {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                       (Il2CppObject *)pSVar5,(Il2CppObject *)__this_00,
                       (MethodInfo_4AAD4C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item
                      );
          }
          uVar11 = uVar11 + 1;
          uVar2 = (uint)pSVar6->max_length;
          uVar7 = (ulong)uVar2;
        } while ((long)uVar11 < (long)(int)uVar2);
      }
      return __this;
    }
  }
  pSVar10 = il2cpp_codegen_get_runtime_metadata(&"Failed to find localization files: ");
  pSVar5 = System_String__Concat_52f0320(pSVar10,pSVar5,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this_01,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_UIManager_GetExternalLocaleCategoryStrings);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// UI.UIManager$$GetLanguages
// il2cpp: System_String_array* UI_UIManager__GetLanguages (const MethodInfo* method);
// 0x5db0370
// eh: try 0x5db050a..0x5db0616 -> pad 0x5db061c (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5db063c..0x5db0641 -> pad 0x5db0664 cleanup
// eh: try 0x5db0667..0x5db0671 -> pad 0x5db0679 catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db04e0: lea r12, [rip + 0x14dfb79]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_MoveNext
// asm:   0x5db04e7: mov r14, rsp
// asm:   0x5db04ea: lea r13, [rip + 0x152a67f]  ; "English"
// asm:   0x5db04f1: lea rbp, [rip + 0x14e6460]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5db04f8: jmp 0x5db0517
// asm:   0x5db0616: jmp 0x5db0624
// asm:   0x5db0618: jmp 0x5db0624
// asm:   0x5db061a: jmp 0x5db0624
// asm:   0x5db061c: jmp 0x5db0624
// asm:   0x5db061e: jmp 0x5db0624
// asm:   0x5db0620: jmp 0x5db0624
// asm:   0x5db0622: jmp 0x5db0624
// asm:   0x5db0624: mov r14, rax
// asm:   0x5db0627: cmp edx, 1
// asm:   0x5db062a: jne 0x5db0667
// asm:   0x5db062c: mov rdi, r14
// asm:   0x5db062f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5db0634: mov rbx, qword ptr [rax]
// asm:   0x5db0637: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5db063c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5db0641: lea rax, [rip + 0x14dfa10]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_Dispose
// asm:   0x5db0648: mov rsi, qword ptr [rax]
// asm:   0x5db064b: mov rdi, rsp
// asm:   0x5db064e: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5db0653: test rbx, rbx
// asm:   0x5db0656: je 0x5db05c7
// asm:   0x5db065c: mov rdi, rbx
// asm:   0x5db065f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5db0664: mov r14, rax
// asm:   0x5db0667: lea rdi, [rsp + 0x20]
// asm:   0x5db066c: call 0x2fdde10  ; il2cpp_runtime_helper_02fdde10()
// asm:   0x5db0671: mov rdi, r14
// asm:   0x5db0674: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5db0679: mov rdi, rax
// asm:   0x5db067c: call 0x2ab61e0  ; __clang_call_terminate()

System_String_array * UI_UIManager__GetLanguages(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *pMVar3;
  System_String_o *item;
  bool bVar4;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  System_String_array *pSVar5;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  System_String_o *local_58;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07548106 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_JSONObject_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Insert);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_07548106 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (System_String_o *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_UI_UIManager->static_fields->_languages;
  if ((__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_01 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            (__this,(MethodInfo_4AAD0F0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Keys
                            ),
     __this_01 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48,
               __this_01,
               (MethodInfo_511A520 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_JSONObject_GetEnumerator)
    ;
    local_58 = local_38;
    local_68 = (undefined1  [8])local_48._0_8_;
    puStack_60 = (undefined1 *)local_48._8_8_;
    local_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_48._8_8_ = local_68;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
      local_48._8_8_ = local_68;
      bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                         local_68,(MethodInfo_4CE7080 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_MoveNext
                        );
      if (bVar4) {
        bVar4 = System_String__op_Equality(local_58,"English",(MethodInfo *)0x0);
        if (bVar4) {
          ThrowNullReferenceException();
        }
label_05db0611:
        ThrowNullReferenceException();
      }
    }
    else {
      while (bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                               ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                 *)local_68,
                                (MethodInfo_4CE7080 *)
                                MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_MoveNext
                               ), item = local_58, bVar4) {
        bVar4 = System_String__op_Equality(local_58,"English",(MethodInfo *)0x0);
        pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (bVar4) {
          System_Collections_Generic_List_object___Insert
                    ((System_Collections_Generic_List_object__o *)__this_00,0,(Il2CppObject *)item,
                     (MethodInfo_395E3E0 *)MethodInfo_System_Collections_Generic_List_string_Insert);
        }
        else {
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_00->fields)._items;
          if (pSVar5 == (System_String_array *)0x0) goto label_05db0611;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                       (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
          }
        }
      }
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_68,
               (MethodInfo_4CE7070 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_Dispose
              );
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar5 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar5;
    }
  }
  ThrowNullReferenceException();
}


// UI.UIManager$$GetLanguageLetters
// il2cpp: System_String_o* UI_UIManager__GetLanguageLetters (const MethodInfo* method);
// 0x5db0690

System_String_o * UI_UIManager__GetLanguageLetters(MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UI_UIManager_StaticFields *pUVar3;
  Il2CppObject *node;
  bool bVar4;
  System_Collections_Generic_HashSet_char__o *__this_00;
  System_Collections_Generic_List_char__o *__this_01;
  System_Char_array *val;
  System_String_o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Il2CppObject *local_28;
  
  if (Il2CppMethodInitialized_07548107 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_char_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_char);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_char_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_char_ctor_7193b08);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_char);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07548107 = '\x01';
  }
  local_28 = (Il2CppObject *)0x0;
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar1 != (Settings_GeneralSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).Language, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    pSVar5 = (pSVar2->fields)._value;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    bVar4 = System_String__op_Equality
                      (TypeInfo_UI_UIManager->static_fields->_languageLettersName,pSVar5,(MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
label_05db08b5:
      return TypeInfo_UI_UIManager->static_fields->_languageLetters;
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_char);
    System_Collections_Generic_HashSet_char____ctor
              (__this_00,(MethodInfo_4FA17F0 *)MethodInfo_System_Collections_Generic_HashSet_char_ctor);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_UI_UIManager->static_fields->_languages;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this,(Il2CppObject *)pSVar5,&local_28,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_TryGetValue);
      node = local_28;
      if (bVar4) {
        method_00 = extraout_RDX;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          method_00 = extraout_RDX_00;
        }
        UI_UIManager__CollectLetters((SimpleJSONFixed_JSONNode_o *)node,__this_00,method_00);
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar3 = TypeInfo_UI_UIManager->static_fields;
      pUVar3->_languageLettersName = pSVar5;
      Il2CppCodeGenWriteBarrier(&pUVar3->_languageLettersName);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_char);
      System_Collections_Generic_List_char____ctor_51e8400
                (__this_01,(System_Collections_Generic_IEnumerable_T__o *)__this_00,
                 (MethodInfo_51E8400 *)MethodInfo_System_Collections_Generic_List_char_ctor_7193b08);
      if (__this_01 != (System_Collections_Generic_List_char__o *)0x0) {
        val = System_Collections_Generic_List_char___ToArray
                        (__this_01,
                         (MethodInfo_51EAEB0 *)MethodInfo_System_Collections_Generic_List_char_ToArray);
        pSVar5 = System_String__CreateString_52fe930((System_String_o *)0x0,val,(MethodInfo *)0x0);
        pUVar3 = TypeInfo_UI_UIManager->static_fields;
        pUVar3->_languageLetters = pSVar5;
        Il2CppCodeGenWriteBarrier(&pUVar3->_languageLetters);
        goto label_05db08b5;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.UIManager$$CollectLetters
// il2cpp: void UI_UIManager__CollectLetters (SimpleJSONFixed_JSONNode_o* node, System_Collections_Generic_HashSet_char__o* letters, const MethodInfo* method);
// 0x5db08e0
// eh: try 0x5db0ad0..0x5db0c48 -> pad 0x5db0c51 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5db0c71..0x5db0c76 -> pad 0x5db0d02 cleanup
// eh: try 0x5db0d05..0x5db0d0f -> pad 0x5db0d17 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db09a4: lea r12, [rip + 0x17a5d1d]
// asm:   0x5db09ab: lea r13, [rip + 0x14e06a6]  ; MethodInfo_System_Collections_Generic_HashSet_char_Add
// asm:   0x5db09b2: jmp 0x5db09cc
// asm:   0x5db0bea: lea r15, [rip + 0x17a5ad7]
// asm:   0x5db0bf1: nop word ptr cs:[rax + rax]
// asm:   0x5db0c39: jmp 0x5db0ceb
// asm:   0x5db0c4d: jmp 0x5db0c55
// asm:   0x5db0c4f: jmp 0x5db0c55
// asm:   0x5db0c51: jmp 0x5db0c55
// asm:   0x5db0c53: jmp 0x5db0c55
// asm:   0x5db0c55: mov rbx, rax
// asm:   0x5db0c58: cmp edx, 1
// asm:   0x5db0c5b: jne 0x5db0d05
// asm:   0x5db0c61: mov rdi, rbx
// asm:   0x5db0c64: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5db0c69: mov r14, qword ptr [rax]
// asm:   0x5db0c6c: mov qword ptr [rsp + 8], r14
// asm:   0x5db0c71: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5db0cfa: mov rdi, r14
// asm:   0x5db0cfd: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5db0d02: mov rbx, rax
// asm:   0x5db0d05: lea rdi, [rsp + 8]
// asm:   0x5db0d0a: call 0x2fdde40  ; il2cpp_runtime_helper_02fdde40()
// asm:   0x5db0d0f: mov rdi, rbx
// asm:   0x5db0d12: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5db0d17: mov rdi, rax
// asm:   0x5db0d1a: call 0x2ab61e0  ; __clang_call_terminate()

void UI_UIManager__CollectLetters
               (SimpleJSONFixed_JSONNode_o *node,System_Collections_Generic_HashSet_char__o *letters,
               MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_c *pSVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  uint16_t uVar5;
  System_String_o *__this;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  ulong uVar8;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  int32_t index;
  long lVar9;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07548108 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_char_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07548108 = '\x01';
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar4 = (*(node->klass->vtable)._13_get_IsString.methodPtr)
                      (node,(node->klass->vtable)._13_get_IsString.method);
    pSVar1 = node->klass;
    if (bVar4) {
      __this = (*(pSVar1->vtable)._9_get_Value.methodPtr)(node,(pSVar1->vtable)._9_get_Value.method);
      if (__this != (System_String_o *)0x0) {
        if ((__this->fields)._stringLength < 1) {
          return;
        }
        index = 0;
        if (letters != (System_Collections_Generic_HashSet_char__o *)0x0) {
          do {
            uVar5 = System_String__get_Chars(__this,index,(MethodInfo *)0x0);
            if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_07556750);
            }
            bVar4 = System_Char__IsLetter(uVar5,(MethodInfo *)0x0);
            if (bVar4) {
              System_Collections_Generic_HashSet_char___Add
                        (letters,uVar5,
                         (MethodInfo_4FA2DE0 *)MethodInfo_System_Collections_Generic_HashSet_char_Add);
            }
            index = index + 1;
          } while (index < (__this->fields)._stringLength);
          return;
        }
        while( true ) {
          uVar5 = System_String__get_Chars(__this,index,(MethodInfo *)0x0);
          if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556750);
          }
          bVar4 = System_Char__IsLetter(uVar5,(MethodInfo *)0x0);
          if (bVar4) break;
          index = index + 1;
          if ((__this->fields)._stringLength <= index) {
            return;
          }
        }
      }
    }
    else {
      pIVar6 = (Il2CppObject *)
               (*(pSVar1->vtable)._27_get_Children.methodPtr)(node,(pSVar1->vtable)._27_get_Children.method);
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar2 = pIVar6->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar3->interfaceType + lVar9)
                == TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
              pVVar7 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
              goto label_05db0a91;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_05db0a91:
        local_48 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
        local_38 = (undefined1 *)&local_48;
        local_40 = 0;
        do {
          pIVar6 = local_48;
          if (local_48 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar2 = local_48->klass;
          uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar8 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar9 = 0;
            do {
              if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar9) ==
                  TypeInfo_System_Collections_IEnumerator) {
                pVVar7 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
                goto label_05db0b43;
              }
              lVar9 = lVar9 + 0x10;
            } while (uVar8 * 0x10 != lVar9);
          }
          pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                             (local_48,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05db0b43:
          bVar4 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
          pIVar6 = local_48;
          if (!bVar4) {
            if (local_48 == (Il2CppObject *)0x0) {
              return;
            }
            pIVar2 = local_48->klass;
            uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
            if (uVar8 == 0) goto label_05db0cbf;
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar9 = 0;
            goto label_05db0cb0;
          }
          if (local_48 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar2 = local_48->klass;
          uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar8 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar9 = 0;
            do {
              if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)
                   ((long)&pIVar3->interfaceType + lVar9) ==
                  TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
                pVVar7 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
                goto label_05db0bc3;
              }
              lVar9 = lVar9 + 0x10;
            } while (uVar8 * 0x10 != lVar9);
          }
          pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                             (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode
                              ,0);
label_05db0bc3:
          pIVar6 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
          method_00 = extraout_RDX;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            method_00 = extraout_RDX_00;
          }
          UI_UIManager__CollectLetters((SimpleJSONFixed_JSONNode_o *)pIVar6,letters,method_00);
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
  while (lVar9 = lVar9 + 0x10, uVar8 * 0x10 != lVar9) {
label_05db0cb0:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar9) == TypeInfo_System_IDisposable) {
      pVVar7 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
      goto label_05db0cdd;
    }
  }
label_05db0cbf:
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05db0cdd:
  (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
  return;
}


// UI.UIManager$$PrepareDisplayText
// il2cpp: void UI_UIManager__PrepareDisplayText (SimpleJSONFixed_JSONObject_o* language, const MethodInfo* method);
// 0x5db0d20
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db0dfc: mov r15, rsp
// asm:   0x5db0dff: lea r12, [rip + 0x153205a]  ; "Name"
// asm:   0x5db0e06: lea r13, [rip + 0x14cd15b]  ; TypeInfo_UI_UIManager
// asm:   0x5db0e0d: jmp 0x5db0e26

void UI_UIManager__PrepareDisplayText(SimpleJSONFixed_JSONObject_o *language,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  SimpleJSONFixed_JSONNode_o *node;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_108;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_b8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_70;
  
  if (Il2CppMethodInitialized_07548109 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_07548109 = '\x01';
  }
  local_108.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_108.m_Array.fields._index = 0;
  local_108.m_Array.fields._version = 0;
  local_108.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_108.m_Object.fields._getEnumeratorRetType = 0;
  local_108.m_Object.fields._36_4_ = 0;
  local_108.m_Object.fields._version = 0;
  local_108.m_Object.fields._index = 0;
  local_108.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_108.type = 0;
  local_108._4_4_ = 0;
  local_108.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_108.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (language == (SimpleJSONFixed_JSONObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  SimpleJSONFixed_JSONNode__get_Keys
            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_70,(SimpleJSONFixed_JSONNode_o *)language,
             (MethodInfo *)0x0);
  local_b8.m_Array.fields._current = local_70.m_Array.fields._current;
  local_b8.m_Array.fields._list = local_70.m_Array.fields._list;
  local_b8.m_Array.fields._index = local_70.m_Array.fields._index;
  local_b8.m_Array.fields._version = local_70.m_Array.fields._version;
  local_b8.m_Object.fields._current.fields.value = local_70.m_Object.fields._current.fields.value;
  local_b8.m_Object.fields._getEnumeratorRetType = local_70.m_Object.fields._getEnumeratorRetType;
  local_b8.m_Object.fields._36_4_ = local_70.m_Object.fields._36_4_;
  local_b8.m_Object.fields._version = local_70.m_Object.fields._version;
  local_b8.m_Object.fields._index = local_70.m_Object.fields._index;
  local_b8.m_Object.fields._current.fields.key = local_70.m_Object.fields._current.fields.key;
  local_b8.type = local_70.type;
  local_b8._4_4_ = local_70._4_4_;
  local_b8.m_Object.fields._dictionary = local_70.m_Object.fields._dictionary;
  SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_108,
             (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_b8,(MethodInfo *)0x0);
  bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                    ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_108,(MethodInfo *)0x0);
  if (bVar1) {
    do {
      method_00 = (MethodInfo *)
                  SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_108,(MethodInfo *)0x0);
      bVar1 = System_String__op_Inequality
                        ((System_String_o *)method_00,"Name",(MethodInfo *)0x0);
      if (bVar1) {
        node = (*(language->klass->vtable)._7_get_Item.methodPtr)
                         (language,(System_String_o *)method_00,(language->klass->vtable)._7_get_Item.method);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        UI_UIManager__PrepareDisplayText_5cb0e90(node,method_00);
      }
      bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_108,(MethodInfo *)0x0);
    } while (bVar1);
  }
  return;
}


// UI.UIManager$$PrepareDisplayText
// il2cpp: void UI_UIManager__PrepareDisplayText (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5db0e90
// eh: try 0x5db1030..0x5db1154 -> pad 0x5db115f (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5db117b..0x5db1180 -> pad 0x5db1201 cleanup
// eh: try 0x5db1204..0x5db120e -> pad 0x5db1216 catch (...) [compiler noexcept guard]
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db0fbe: nop 
// asm:   0x5db1159: jmp 0x5db115f
// asm:   0x5db115b: jmp 0x5db115f
// asm:   0x5db115d: jmp 0x5db115f
// asm:   0x5db115f: mov rbx, rax
// asm:   0x5db1162: cmp edx, 1
// asm:   0x5db1165: jne 0x5db1204
// asm:   0x5db116b: mov rdi, rbx
// asm:   0x5db116e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5db1173: mov r14, qword ptr [rax]
// asm:   0x5db1176: mov qword ptr [rsp + 0x10], r14
// asm:   0x5db117b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5db11f9: mov rdi, r14
// asm:   0x5db11fc: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5db1201: mov rbx, rax
// asm:   0x5db1204: lea rdi, [rsp + 0x10]
// asm:   0x5db1209: call 0x2fdded0  ; il2cpp_runtime_helper_02fdded0()
// asm:   0x5db120e: mov rdi, rbx
// asm:   0x5db1211: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5db1216: mov rdi, rax
// asm:   0x5db1219: call 0x2ab61e0  ; __clang_call_terminate()

void UI_UIManager__PrepareDisplayText_5cb0e90(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_c *pSVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  System_String_o *pSVar5;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  ulong uVar8;
  MethodInfo *method_00;
  long lVar9;
  Il2CppObject *local_40;
  undefined8 local_38;
  Il2CppObject **local_30;
  
  if (Il2CppMethodInitialized_0754810a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_0754810a = '\x01';
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar4 = (*(node->klass->vtable)._13_get_IsString.methodPtr)
                      (node,(node->klass->vtable)._13_get_IsString.method);
    pSVar1 = node->klass;
    if (bVar4) {
      pSVar5 = (*(pSVar1->vtable)._9_get_Value.methodPtr)(node,(pSVar1->vtable)._9_get_Value.method);
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
      }
      pSVar5 = Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual(pSVar5,true,(MethodInfo *)0x0);
      (*(node->klass->vtable)._10_set_Value.methodPtr)(node,pSVar5,(node->klass->vtable)._10_set_Value.method)
      ;
      return;
    }
    pIVar6 = (Il2CppObject *)
             (*(pSVar1->vtable)._27_get_Children.methodPtr)(node,(pSVar1->vtable)._27_get_Children.method);
    if (pIVar6 != (Il2CppObject *)0x0) {
      pIVar2 = pIVar6->klass;
      uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar9 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar3->interfaceType + lVar9)
              == TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
            pVVar7 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
            goto label_05db0ff1;
          }
          lVar9 = lVar9 + 0x10;
        } while (uVar8 * 0x10 != lVar9);
      }
      pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_05db0ff1:
      local_40 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
      local_38 = 0;
      local_30 = &local_40;
      do {
        pIVar6 = local_40;
        if (local_40 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_40->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar9) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar7 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
              goto label_05db10a3;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_40,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05db10a3:
        bVar4 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
        pIVar6 = local_40;
        if (!bVar4) {
          if (local_40 == (Il2CppObject *)0x0) {
            return;
          }
          pIVar2 = local_40->klass;
          uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar8 == 0) goto label_05db11bf;
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          goto label_05db11b0;
        }
        if (local_40 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_40->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)((long)&pIVar3->interfaceType + lVar9)
                == TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
              pVVar7 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
              goto label_05db1123;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_40,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0
                           );
label_05db1123:
        method_00 = pVVar7->method;
        pIVar6 = (*pVVar7->methodPtr)(pIVar6,method_00);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        UI_UIManager__PrepareDisplayText_5cb0e90((SimpleJSONFixed_JSONNode_o *)pIVar6,method_00);
      } while( true );
    }
  }
  ThrowNullReferenceException();
  while (lVar9 = lVar9 + 0x10, uVar8 * 0x10 != lVar9) {
label_05db11b0:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar9) == TypeInfo_System_IDisposable) {
      pVVar7 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
      goto label_05db11dd;
    }
  }
label_05db11bf:
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(local_40,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05db11dd:
  (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
  return;
}


// UI.UIManager$$LoadLanguages
// il2cpp: void UI_UIManager__LoadLanguages (const MethodInfo* method);
// 0x5dacff0

void UI_UIManager__LoadLanguages(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  Settings_GeneralSettings_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  bool bVar7;
  System_String_array *pSVar8;
  ulong uVar9;
  System_String_o *pSVar10;
  SimpleJSONFixed_JSONObject_o *language;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  MethodInfo *method_00;
  ulong uVar12;
  
  if (Il2CppMethodInitialized_0754810b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"No language folder found, creating it.");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"*.json");
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_0754810b = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  bVar7 = System_IO_Directory__Exists
                    (TypeInfo_Utility_FolderPaths->static_fields->LanguagesPath,(MethodInfo *)0x0);
  uVar2 = (TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor;
  if (!bVar7) {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    }
    System_IO_Directory__CreateDirectory
              (TypeInfo_Utility_FolderPaths->static_fields->LanguagesPath,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__Log((Il2CppObject *)"No language folder found, creating it.",(MethodInfo *)0x0);
    return;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar8 = System_IO_Directory__GetFiles
                     (TypeInfo_Utility_FolderPaths->static_fields->LanguagesPath,"*.json",
                      (MethodInfo *)0x0);
  if (pSVar8 != (System_String_array *)0x0) {
    if (0 < (int)pSVar8->max_length) {
      uVar9 = pSVar8->max_length & 0xffffffff;
      uVar12 = 0;
      do {
        if (uVar9 <= uVar12) {
          ThrowIndexOutOfRangeException();
        }
        pSVar10 = System_IO_File__ReadAllText(pSVar8->m_Items[uVar12],(MethodInfo *)0x0);
        language = (SimpleJSONFixed_JSONObject_o *)SimpleJSONFixed_JSON__Parse(pSVar10,(MethodInfo *)0x0);
        if (language != (SimpleJSONFixed_JSONObject_o *)0x0) {
          bVar1 = (TypeInfo_SimpleJSONFixed_JSONObject->_2).typeHierarchyDepth;
          if (((language->klass->_2).typeHierarchyDepth < bVar1) ||
             ((language->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject)) {
            il2cpp_codegen_raise_invalid_cast_exception(language);
          }
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        if (language == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_05dad413;
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_UI_UIManager->static_fields->_languages;
        pSVar11 = (*(language->klass->vtable)._7_get_Item.methodPtr)
                            (language,"Name",(language->klass->vtable)._7_get_Item.method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(pSVar11,(MethodInfo *)0x0);
        if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05dad413;
        bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar4,(Il2CppObject *)pSVar10,
                           (MethodInfo_4AAD6F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
        if (!bVar7) {
          pSVar11 = (*(language->klass->vtable)._7_get_Item.methodPtr)
                              (language,"Name",(language->klass->vtable)._7_get_Item.method);
          if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05dad413;
          method_00 = (pSVar11->klass->vtable)._9_get_Value.method;
          pSVar10 = (*(pSVar11->klass->vtable)._9_get_Value.methodPtr)(pSVar11,method_00);
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          UI_UIManager__PrepareDisplayText(language,method_00);
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_UI_UIManager->static_fields->_languages;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05dad413;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar4,(Il2CppObject *)pSVar10,(Il2CppObject *)language,
                     (MethodInfo_4AAD4E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_Add);
        }
        uVar12 = uVar12 + 1;
        uVar3 = (uint)pSVar8->max_length;
        uVar9 = (ulong)uVar3;
      } while ((long)uVar12 < (long)(int)uVar3);
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    if (((pSVar5 != (Settings_GeneralSettings_o *)0x0) &&
        (pSVar6 = (pSVar5->fields).Language, pSVar6 != (Settings_StringSetting_o *)0x0)) &&
       (pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_UI_UIManager->static_fields->_languages,
       pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar4,(Il2CppObject *)(pSVar6->fields)._value,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
      if (bVar7) {
        return;
      }
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
      if ((pSVar5 != (Settings_GeneralSettings_o *)0x0) &&
         (pSVar6 = (pSVar5->fields).Language, pSVar6 != (Settings_StringSetting_o *)0x0)) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"English",
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
        if (pSVar5 != (Settings_GeneralSettings_o *)0x0) {
          (*(pSVar5->klass->vtable)._18_Save.methodPtr)(pSVar5,(pSVar5->klass->vtable)._18_Save.method);
          return;
        }
      }
    }
  }
label_05dad413:
  ThrowNullReferenceException();
}


// UI.UIManager$$GetThemeColor
// il2cpp: UnityEngine_Color_o UI_UIManager__GetThemeColor (System_String_o* panel, System_String_o* category, System_String_o* item, System_String_o* fallbackPanel, const MethodInfo* method);
// 0x5da4a00
// eh: try 0x5da4d8f..0x5da50e3 -> pad 0x5da5103 (+28 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5da513f..0x5da51b8 -> pad 0x5da51b8 (+1 call sites) cleanup
// eh: try 0x5da51bb..0x5da51c0 -> pad 0x5da51c8 catch (...) [compiler noexcept guard]
// asm: 70 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5da4b7a: jmp 0x5da4b92
// asm:   0x5da50e3: jmp 0x5da5117
// asm:   0x5da50e5: jmp 0x5da5117
// asm:   0x5da50e7: jmp 0x5da5117
// asm:   0x5da50e9: jmp 0x5da5117
// asm:   0x5da50eb: jmp 0x5da5117
// asm:   0x5da50ed: jmp 0x5da5117
// asm:   0x5da50ef: jmp 0x5da5117
// asm:   0x5da50f1: jmp 0x5da5117
// asm:   0x5da50f3: jmp 0x5da5117
// asm:   0x5da50f5: jmp 0x5da5117
// asm:   0x5da50f7: jmp 0x5da5117
// asm:   0x5da50f9: jmp 0x5da5117
// asm:   0x5da50fb: jmp 0x5da5117
// asm:   0x5da50fd: jmp 0x5da5117
// asm:   0x5da50ff: jmp 0x5da5117
// asm:   0x5da5101: jmp 0x5da5117
// asm:   0x5da5103: jmp 0x5da5117
// asm:   0x5da5105: jmp 0x5da5117
// asm:   0x5da5107: jmp 0x5da5117
// asm:   0x5da5109: jmp 0x5da5117
// asm:   0x5da510b: jmp 0x5da5117
// asm:   0x5da510d: jmp 0x5da5117
// asm:   0x5da510f: jmp 0x5da5117
// asm:   0x5da5111: jmp 0x5da5117
// asm:   0x5da5113: jmp 0x5da5117
// asm:   0x5da5115: jmp 0x5da5117
// asm:   0x5da5117: mov rbx, rax
// asm:   0x5da511a: cmp edx, 1
// asm:   0x5da511d: jne 0x5da51c0
// asm:   0x5da5123: mov rdi, rbx
// asm:   0x5da5126: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5da512b: mov rbx, rax
// asm:   0x5da512e: lea rax, [rip + 0x17b1593]
// asm:   0x5da5135: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5da5139: mov rax, qword ptr [rbx]
// asm:   0x5da513c: mov rsi, qword ptr [rax]
// asm:   0x5da513f: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5da5144: test al, al
// asm:   0x5da5146: je 0x5da5197
// asm:   0x5da5148: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5da514d: lea rdi, [rip + 0x1558c84]  ; "{0} {1} {2} theme error."
// asm:   0x5da5154: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5da5159: mov rdi, rax
// asm:   0x5da515c: mov rsi, qword ptr [rsp + 8]
// asm:   0x5da5161: mov rdx, qword ptr [rsp + 0x10]
// asm:   0x5da5166: mov rcx, qword ptr [rsp + 0x18]
// asm:   0x5da516b: xor r8d, r8d
// asm:   0x5da516e: call 0x5402ca0  ; System_String__Format()
// asm:   0x5da5173: mov rbx, rax
// asm:   0x5da5176: lea rdi, [rip + 0x14d24cb]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5da517d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5da5182: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5da5189: jne 0x5da4d5c
// asm:   0x5da518f: mov rdi, rax
// asm:   0x5da5192: jmp 0x5da4d57
// asm:   0x5da5197: mov edi, 8
// asm:   0x5da519c: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5da51a1: mov rcx, qword ptr [rbx]
// asm:   0x5da51a4: mov qword ptr [rax], rcx
// asm:   0x5da51a7: lea rsi, [rip + 0x1088352]
// asm:   0x5da51ae: mov rdi, rax
// asm:   0x5da51b1: xor edx, edx
// asm:   0x5da51b3: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5da51b8: mov rbx, rax
// asm:   0x5da51bb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5da51c0: mov rdi, rbx
// asm:   0x5da51c3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5da51c8: mov rdi, rax
// asm:   0x5da51cb: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Color_o
UI_UIManager__GetThemeColor
          (System_String_o *panel,System_String_o *category,System_String_o *item,
          System_String_o *fallbackPanel,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint32_t uVar3;
  uint uVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  SimpleJSONFixed_JSONNode_c *pSVar6;
  System_Single_array *pSVar7;
  MethodInfo *pMVar8;
  bool bVar9;
  SimpleJSONFixed_JSONObject_o *a;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_String_o *pSVar11;
  System_Collections_Generic_List_float__o *__this;
  float fVar12;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar13;
  UnityEngine_Color_o UVar14;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_f8;
  float local_a8;
  float local_98;
  float local_88;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_0754810c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"{0} {1} {2} theme error.");
    Il2CppMethodInitialized_0754810c = '\x01';
  }
  local_f8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_f8.m_Array.fields._index = 0;
  local_f8.m_Array.fields._version = 0;
  local_f8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._getEnumeratorRetType = 0;
  local_f8.m_Object.fields._36_4_ = 0;
  local_f8.m_Object.fields._version = 0;
  local_f8.m_Object.fields._index = 0;
  local_f8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_f8.type = 0;
  local_f8._4_4_ = 0;
  local_f8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_UI_UIManager->static_fields->_uiThemes;
  if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05da5020:
    ThrowNullReferenceException();
  }
  bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar5,(Il2CppObject *)TypeInfo_UI_UIManager->static_fields->_currentUITheme,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
  if (bVar9) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_UI_UIManager->static_fields->_uiThemes;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05da5020;
    a = System_Collections_Generic_Dictionary_object__object___get_Item
                  (pSVar5,(Il2CppObject *)TypeInfo_UI_UIManager->static_fields->_currentUITheme,
                   (MethodInfo_4AAD450 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Item);
    uVar3 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    a = (SimpleJSONFixed_JSONObject_o *)0x0;
    uVar3 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar9 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar9) {
    if (a == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_05da5020;
    pSVar10 = (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.methodPtr)
                        (a,panel,(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar9 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar9) {
      pSVar10 = (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.methodPtr)
                          (a,panel,(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.method);
      if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05da5020;
      pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar10,category,(pSVar10->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar9 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar9) {
        pSVar10 = (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.methodPtr)
                            (a,panel,(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.method);
        if ((pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar10,category,(pSVar10->klass->vtable)._7_get_Item.method),
           pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05da5020;
        pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar10,item,(pSVar10->klass->vtable)._7_get_Item.method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar9 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (!bVar9) {
          __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_float);
          System_Collections_Generic_List_float____ctor
                    (__this,(MethodInfo_39ABE80 *)MethodInfo_System_Collections_Generic_List_float_ctor);
          pSVar10 = (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.methodPtr)
                              (a,panel,(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.method);
          if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                              (pSVar10,category,(pSVar10->klass->vtable)._7_get_Item.method);
          if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                              (pSVar10,item,(pSVar10->klass->vtable)._7_get_Item.method);
          if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar6 = pSVar10->klass;
          bVar2 = (TypeInfo_SimpleJSONFixed_JSONArray->_2).typeHierarchyDepth;
          if (((pSVar6->_2).typeHierarchyDepth < bVar2) ||
             ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar10);
          }
          (*(pSVar6->vtable)._32_unknown.methodPtr)(&local_78,pSVar10,(pSVar6->vtable)._32_unknown.method);
          local_f8.m_Array.fields._current = local_78.m_Array.fields._current;
          local_f8.m_Array.fields._list = local_78.m_Array.fields._list;
          local_f8.m_Array.fields._index = local_78.m_Array.fields._index;
          local_f8.m_Array.fields._version = local_78.m_Array.fields._version;
          local_f8.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
          local_f8.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
          local_f8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
          local_f8.m_Object.fields._version = local_78.m_Object.fields._version;
          local_f8.m_Object.fields._index = local_78.m_Object.fields._index;
          local_f8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
          local_f8.type = local_78.type;
          local_f8._4_4_ = local_78._4_4_;
          local_f8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
          if (__this == (System_Collections_Generic_List_float__o *)0x0) {
            bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_f8,(MethodInfo *)0x0);
            if (!bVar9) {
              ThrowNullReferenceException();
            }
            SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_f8,(MethodInfo *)0x0);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar13,(MethodInfo *)0x0);
            if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              pSVar6 = pSVar10->klass;
              bVar2 = (TypeInfo_SimpleJSONFixed_JSONNumber->_2).typeHierarchyDepth;
              if ((bVar2 <= (pSVar6->_2).typeHierarchyDepth) &&
                 ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                  (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber)) {
                pSVar11 = (*(pSVar6->vtable)._9_get_Value.methodPtr)
                                    (pSVar10,(pSVar6->vtable)._9_get_Value.method);
                System_Single__Parse(pSVar11,(MethodInfo *)0x0);
label_05da50d6:
                ThrowNullReferenceException();
              }
label_05da50db:
              il2cpp_codegen_raise_invalid_cast_exception(pSVar10);
            }
label_05da5088:
            ThrowNullReferenceException();
          }
          while (bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                   ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_f8,(MethodInfo *)0x0),
                bVar9) {
            SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_f8,(MethodInfo *)0x0);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar13,(MethodInfo *)0x0);
            if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05da5088;
            pSVar6 = pSVar10->klass;
            bVar2 = (TypeInfo_SimpleJSONFixed_JSONNumber->_2).typeHierarchyDepth;
            if (((pSVar6->_2).typeHierarchyDepth < bVar2) ||
               ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber)) goto label_05da50db;
            pSVar11 = (*(pSVar6->vtable)._9_get_Value.methodPtr)(pSVar10,(pSVar6->vtable)._9_get_Value.method)
            ;
            fVar12 = System_Single__Parse(pSVar11,(MethodInfo *)0x0);
            pMVar8 = MethodInfo_System_Collections_Generic_List_float_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar7 = (__this->fields)._items;
            if (pSVar7 == (System_Single_array *)0x0) goto label_05da50d6;
            uVar4 = (__this->fields)._size;
            if (uVar4 < (uint)pSVar7->max_length) {
              (__this->fields)._size = uVar4 + 1;
              pSVar7->m_Items[(int)uVar4] = fVar12 / 255.0;
            }
            else {
              System_Collections_Generic_List_float___AddWithResize
                        (__this,fVar12 / 255.0,(MethodInfo_39AC7A0 *)pMVar8->klass->rgctx_data[0xe].method);
            }
          }
          local_88 = System_Collections_Generic_List_float___get_Item
                               (__this,0,(MethodInfo_39AC490 *)
                                         MethodInfo_System_Collections_Generic_List_float_get_Item);
          local_98 = System_Collections_Generic_List_float___get_Item
                               (__this,1,(MethodInfo_39AC490 *)
                                         MethodInfo_System_Collections_Generic_List_float_get_Item);
          local_a8 = System_Collections_Generic_List_float___get_Item
                               (__this,2,(MethodInfo_39AC490 *)
                                         MethodInfo_System_Collections_Generic_List_float_get_Item);
          fVar12 = System_Collections_Generic_List_float___get_Item
                             (__this,3,(MethodInfo_39AC490 *)
                                       MethodInfo_System_Collections_Generic_List_float_get_Item);
          goto label_05da4d70;
        }
      }
    }
  }
  bVar9 = System_String__op_Inequality(panel,fallbackPanel,(MethodInfo *)0x0);
  if (bVar9) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    UVar14 = UI_UIManager__GetThemeColor(fallbackPanel,category,item,fallbackPanel,method);
    local_a8 = UVar14.fields.b;
    fVar12 = UVar14.fields.a;
    local_88 = UVar14.fields.r;
    local_98 = UVar14.fields.g;
  }
  else {
    pSVar11 = System_String__Format_5302ca0
                        ("{0} {1} {2} theme error.",(Il2CppObject *)panel,(Il2CppObject *)category,
                         (Il2CppObject *)item,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
    local_a8 = 1.0;
    fVar12 = 1.0;
    local_88 = local_a8;
    local_98 = fVar12;
  }
label_05da4d70:
  UVar14.fields.g = local_98;
  UVar14.fields.r = local_88;
  UVar14.fields.a = fVar12;
  UVar14.fields.b = local_a8;
  return (UnityEngine_Color_o)UVar14.fields;
}


// UI.UIManager$$GetThemeTexture
// il2cpp: UnityEngine_Texture2D_o* UI_UIManager__GetThemeTexture (System_String_o* panel, System_String_o* category, System_String_o* item, System_String_o* fallbackPanel, const MethodInfo* method);
// 0x5db1220
// eh: try 0x5db15b5..0x5db16bf -> pad 0x5db16bf (+9 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5db16f7..0x5db176f -> pad 0x5db176f (+1 call sites) cleanup
// eh: try 0x5db1772..0x5db1777 -> pad 0x5db177f catch (...) [compiler noexcept guard]
// asm: 56 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db127d: jmp 0x5db16ab
// asm:   0x5db139b: jmp 0x5db13b6
// asm:   0x5db151e: nop 
// asm:   0x5db16a4: xor ebp, ebp
// asm:   0x5db16a6: jmp 0x5db1596
// asm:   0x5db16bf: jmp 0x5db16cf
// asm:   0x5db16c1: jmp 0x5db16cf
// asm:   0x5db16c3: jmp 0x5db16cf
// asm:   0x5db16c5: jmp 0x5db16cf
// asm:   0x5db16c7: jmp 0x5db16cf
// asm:   0x5db16c9: jmp 0x5db16cf
// asm:   0x5db16cb: jmp 0x5db16cf
// asm:   0x5db16cd: jmp 0x5db16cf
// asm:   0x5db16cf: mov rbx, rax
// asm:   0x5db16d2: cmp edx, 1
// asm:   0x5db16d5: jne 0x5db1777
// asm:   0x5db16db: mov rdi, rbx
// asm:   0x5db16de: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5db16e3: mov rbx, rax
// asm:   0x5db16e6: lea rax, [rip + 0x17a4fdb]
// asm:   0x5db16ed: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5db16f1: mov rax, qword ptr [rbx]
// asm:   0x5db16f4: mov rsi, qword ptr [rax]
// asm:   0x5db16f7: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5db16fc: test al, al
// asm:   0x5db16fe: je 0x5db174e
// asm:   0x5db1700: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5db1705: lea rdi, [rip + 0x154c6cc]  ; "{0} {1} {2} theme error."
// asm:   0x5db170c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5db1711: mov rdi, rax
// asm:   0x5db1714: mov rsi, qword ptr [rsp + 0x10]
// asm:   0x5db1719: mov rdx, qword ptr [rsp]
// asm:   0x5db171d: mov rcx, qword ptr [rsp + 8]
// asm:   0x5db1722: xor r8d, r8d
// asm:   0x5db1725: call 0x5402ca0  ; System_String__Format()
// asm:   0x5db172a: mov rbx, rax
// asm:   0x5db172d: lea rdi, [rip + 0x14c5f14]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5db1734: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5db1739: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5db1740: jne 0x5db158a
// asm:   0x5db1746: mov rdi, rax
// asm:   0x5db1749: jmp 0x5db1585
// asm:   0x5db174e: mov edi, 8
// asm:   0x5db1753: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5db1758: mov rcx, qword ptr [rbx]
// asm:   0x5db175b: mov qword ptr [rax], rcx
// asm:   0x5db175e: lea rsi, [rip + 0x107bd9b]
// asm:   0x5db1765: mov rdi, rax
// asm:   0x5db1768: xor edx, edx
// asm:   0x5db176a: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5db176f: mov rbx, rax
// asm:   0x5db1772: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5db1777: mov rdi, rbx
// asm:   0x5db177a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5db177f: mov rdi, rax
// asm:   0x5db1782: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Texture2D_o *
UI_UIManager__GetThemeTexture
          (System_String_o *panel,System_String_o *category,System_String_o *item,
          System_String_o *fallbackPanel,MethodInfo *method)

{
  uint32_t uVar1;
  UI_UIManager_StaticFields *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool bVar4;
  SimpleJSONFixed_JSONObject_o *a;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  long *plVar7;
  System_String_o *pSVar8;
  UnityEngine_Texture2D_o *pUVar9;
  
  do {
    if (Il2CppMethodInitialized_0754810d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Item);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"{0} {1} {2} theme error.");
      il2cpp_codegen_initialize_runtime_metadata(&"Sprites/Panels/MenuBackground");
      Il2CppMethodInitialized_0754810d = '\x01';
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor != 0) goto label_05db1269;
label_05db1317:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      pUVar2 = TypeInfo_UI_UIManager->static_fields;
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)pUVar2->_uiThemes;
    }
    else {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) goto label_05db1317;
label_05db1269:
      pUVar2 = TypeInfo_UI_UIManager->static_fields;
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)pUVar2->_uiThemes;
    }
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05db16ab:
      ThrowNullReferenceException();
    }
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)pUVar2->_currentUITheme,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
    if (bVar4) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_UI_UIManager->static_fields->_uiThemes;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05db16ab;
      a = System_Collections_Generic_Dictionary_object__object___get_Item
                    (pSVar3,(Il2CppObject *)TypeInfo_UI_UIManager->static_fields->_currentUITheme,
                     (MethodInfo_4AAD450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Item);
      uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
    }
    else {
      a = (SimpleJSONFixed_JSONObject_o *)0x0;
      uVar1 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if (a == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_05db16ab;
      pSVar5 = (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.methodPtr)
                         (a,panel,(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        pSVar5 = (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.methodPtr)
                           (a,panel,(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.method);
        if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05db16ab;
        pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar5,category,(pSVar5->klass->vtable)._7_get_Item.method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (!bVar4) {
          pSVar5 = (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.methodPtr)
                             (a,panel,(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.method);
          if ((pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
             (pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar5,category,(pSVar5->klass->vtable)._7_get_Item.method),
             pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05db16ab;
          pSVar5 = (SimpleJSONFixed_JSONNode_o *)
                   (**(code **)((long)pSVar5->klass + 0x1a8))
                             (pSVar5,item,*(undefined8 *)((long)pSVar5->klass + 0x1b0));
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (!bVar4) {
            if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
            }
            pSVar6 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
            pSVar5 = (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.methodPtr)
                               (a,panel,(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.method)
            ;
            if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,category,(pSVar5->klass->vtable)._7_get_Item.method);
            if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
              ThrowNullReferenceException();
            }
            plVar7 = (long *)(**(code **)((long)pSVar5->klass + 0x1a8))
                                       (pSVar5,item,*(undefined8 *)((long)pSVar5->klass + 0x1b0));
            if (plVar7 == (long *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar8 = (System_String_o *)
                     (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
            pSVar8 = System_String__Concat_52f0320("Sprites/Panels/MenuBackground",pSVar8,(MethodInfo *)0x0);
            if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
            }
            pUVar9 = (UnityEngine_Texture2D_o *)
                     ApplicationManagers_ResourceManager__LoadAsset
                               (pSVar6,pSVar8,true,false,(MethodInfo *)0x0);
            if (pUVar9 == (UnityEngine_Texture2D_o *)0x0) {
              return (UnityEngine_Texture2D_o *)0x0;
            }
            if (pUVar9->klass != TypeInfo_UnityEngine_Texture2D) {
              il2cpp_codegen_raise_invalid_cast_exception(pUVar9);
            }
            return pUVar9;
          }
        }
      }
    }
    bVar4 = System_String__op_Inequality(panel,fallbackPanel,(MethodInfo *)0x0);
    if (!bVar4) {
      pSVar6 = System_String__Format_5302ca0
                         ("{0} {1} {2} theme error.",(Il2CppObject *)panel,(Il2CppObject *)category,
                          (Il2CppObject *)item,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      return (UnityEngine_Texture2D_o *)0x0;
    }
    panel = fallbackPanel;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
  } while( true );
}


// UI.UIManager$$GetThemeColorBlock
// il2cpp: UnityEngine_UI_ColorBlock_o UI_UIManager__GetThemeColorBlock (System_String_o* panel, System_String_o* category, System_String_o* item, System_String_o* fallbackPanel, const MethodInfo* method);
// 0x5da52b0

UnityEngine_UI_ColorBlock_o *
UI_UIManager__GetThemeColorBlock
          (UnityEngine_UI_ColorBlock_o *__return_storage_ptr__,System_String_o *panel,
          System_String_o *category,System_String_o *item,System_String_o *fallbackPanel,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar2;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_o UVar4;
  float local_68;
  float fStack_64;
  float local_48;
  float fStack_44;
  
  method_00 = (MethodInfo *)fallbackPanel;
  if (Il2CppMethodInitialized_0754810e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"PressedColor");
    il2cpp_codegen_initialize_runtime_metadata(&"HighlightedColor");
    il2cpp_codegen_initialize_runtime_metadata(&"NormalColor");
    Il2CppMethodInitialized_0754810e = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(item,"NormalColor",(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  UVar2 = UI_UIManager__GetThemeColor(panel,category,pSVar1,fallbackPanel,method_00);
  pSVar1 = System_String__Concat_52f0320(item,"HighlightedColor",(MethodInfo *)0x0);
  UVar3 = UI_UIManager__GetThemeColor(panel,category,pSVar1,fallbackPanel,method_00);
  pSVar1 = System_String__Concat_52f0320(item,"PressedColor",(MethodInfo *)0x0);
  UVar4 = UI_UIManager__GetThemeColor(panel,category,pSVar1,fallbackPanel,method_00);
  if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
  }
  local_48 = UVar2.fields.r;
  fStack_44 = UVar2.fields.g;
  (__return_storage_ptr__->fields).m_NormalColor.fields.r = local_48;
  (__return_storage_ptr__->fields).m_NormalColor.fields.g = fStack_44;
  (__return_storage_ptr__->fields).m_NormalColor.fields.b = UVar2.fields.b;
  (__return_storage_ptr__->fields).m_NormalColor.fields.a = UVar2.fields.a;
  local_68 = UVar3.fields.r;
  fStack_64 = UVar3.fields.g;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.r = local_68;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.g = fStack_64;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.b = UVar3.fields.b;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.a = UVar3.fields.a;
  (__return_storage_ptr__->fields).m_PressedColor.fields.r = UVar4.fields.r;
  (__return_storage_ptr__->fields).m_PressedColor.fields.g = UVar4.fields.g;
  (__return_storage_ptr__->fields).m_PressedColor.fields.b = UVar4.fields.b;
  (__return_storage_ptr__->fields).m_PressedColor.fields.a = UVar4.fields.a;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.r = local_48;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.g = fStack_44;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.b = UVar2.fields.b;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.a = UVar2.fields.a;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.r = UVar4.fields.r;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.g = UVar4.fields.g;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.b = UVar4.fields.b;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.a = UVar4.fields.a;
  (__return_storage_ptr__->fields).m_ColorMultiplier = 1.0;
  (__return_storage_ptr__->fields).m_FadeDuration = 0.1;
  return __return_storage_ptr__;
}


// UI.UIManager$$GetUIThemes
// il2cpp: System_String_array* UI_UIManager__GetUIThemes (const MethodInfo* method);
// 0x5db1790
// eh: try 0x5db193f..0x5db1af8 -> pad 0x5db1afe (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5db1b1e..0x5db1b23 -> pad 0x5db1b48 cleanup
// eh: try 0x5db1b4b..0x5db1b55 -> pad 0x5db1b5d catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db1a02: mov qword ptr [rsp + 8], rcx
// asm:   0x5db1a07: mov ecx, r12d
// asm:   0x5db1a0a: nop word ptr [rax + rax]
// asm:   0x5db1a9e: jmp 0x5db1ac8
// asm:   0x5db1af8: jmp 0x5db1b06
// asm:   0x5db1afa: jmp 0x5db1b06
// asm:   0x5db1afc: jmp 0x5db1b06
// asm:   0x5db1afe: jmp 0x5db1b06
// asm:   0x5db1b00: jmp 0x5db1b06
// asm:   0x5db1b02: jmp 0x5db1b06
// asm:   0x5db1b04: jmp 0x5db1b06
// asm:   0x5db1b06: mov r14, rax
// asm:   0x5db1b09: cmp edx, 1
// asm:   0x5db1b0c: jne 0x5db1b4b
// asm:   0x5db1b0e: mov rdi, r14
// asm:   0x5db1b11: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5db1b16: mov rbx, qword ptr [rax]
// asm:   0x5db1b19: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5db1b1e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5db1b23: lea rax, [rip + 0x14de52e]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_Dispose
// asm:   0x5db1b2a: mov rsi, qword ptr [rax]
// asm:   0x5db1b2d: lea rdi, [rsp + 0x10]
// asm:   0x5db1b32: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5db1b37: test rbx, rbx
// asm:   0x5db1b3a: je 0x5db1a6f
// asm:   0x5db1b40: mov rdi, rbx
// asm:   0x5db1b43: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5db1b48: mov r14, rax
// asm:   0x5db1b4b: lea rdi, [rsp + 0x30]
// asm:   0x5db1b50: call 0x2fddf60  ; il2cpp_runtime_helper_02fddf60()
// asm:   0x5db1b55: mov rdi, r14
// asm:   0x5db1b58: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5db1b5d: mov rdi, rax
// asm:   0x5db1b60: call 0x2ab61e0  ; __clang_call_terminate()

System_String_array * UI_UIManager__GetUIThemes(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar3;
  bool bVar4;
  MethodInfo *pMVar5;
  System_String_o *pSVar6;
  bool bVar7;
  bool bVar8;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  System_String_array *pSVar9;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  System_String_o *local_58;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_0754810f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_JSONObject_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Insert);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Dark");
    il2cpp_codegen_initialize_runtime_metadata(&"Light");
    Il2CppMethodInitialized_0754810f = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (System_String_o *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_UI_UIManager->static_fields->_uiThemes;
  if ((__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_01 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            (__this,(MethodInfo_4AAD0F0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Keys
                            ),
     __this_01 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
  goto label_05db1aee;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48,
             __this_01,
             (MethodInfo_511A520 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_JSONObject_GetEnumerator);
  local_58 = local_38;
  local_68 = (undefined1  [8])local_48._0_8_;
  puStack_60 = (undefined1 *)local_48._8_8_;
  local_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48._8_8_ = local_68;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
    bVar4 = false;
    bVar7 = false;
    while (bVar3 = bVar7,
          bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *
                             )local_68,
                             (MethodInfo_4CE7080 *)
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_MoveNext
                            ), pSVar6 = local_58, bVar7) {
      bVar8 = System_String__op_Equality(local_58,"Light",(MethodInfo *)0x0);
      bVar7 = true;
      if (!bVar8) {
        bVar8 = System_String__op_Equality(pSVar6,"Dark",(MethodInfo *)0x0);
        bVar4 = true;
        bVar7 = bVar3;
        if (!bVar8) {
          ThrowNullReferenceException();
        }
      }
    }
  }
  else {
    bVar4 = false;
    bVar3 = false;
    while (bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                               *)local_68,
                              (MethodInfo_4CE7080 *)
                              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_MoveNext
                             ), pSVar6 = local_58, bVar7) {
      bVar7 = System_String__op_Equality(local_58,"Light",(MethodInfo *)0x0);
      if (bVar7) {
        bVar3 = true;
      }
      else {
        bVar7 = System_String__op_Equality(pSVar6,"Dark",(MethodInfo *)0x0);
        pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (bVar7) {
          bVar4 = true;
        }
        else {
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar9 = (__this_00->fields)._items;
          if (pSVar9 == (System_String_array *)0x0) {
            ThrowNullReferenceException();
          }
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar9->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar9->m_Items[(int)uVar2] = pSVar6;
            Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar6,
                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          }
        }
      }
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_68,
             (MethodInfo_4CE7070 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_Dispose
            );
  if (bVar4) {
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_05db1aee;
    System_Collections_Generic_List_object___Insert
              ((System_Collections_Generic_List_object__o *)__this_00,0,(Il2CppObject *)"Dark",
               (MethodInfo_395E3E0 *)MethodInfo_System_Collections_Generic_List_string_Insert);
    if (!bVar3) goto label_05db1ac8;
  }
  else {
    if (!bVar3) {
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) goto label_05db1ac8;
label_05db1aee:
      ThrowNullReferenceException();
    }
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_05db1aee;
  }
  System_Collections_Generic_List_object___Insert
            ((System_Collections_Generic_List_object__o *)__this_00,0,(Il2CppObject *)"Light",
             (MethodInfo_395E3E0 *)MethodInfo_System_Collections_Generic_List_string_Insert);
label_05db1ac8:
  pSVar9 = (System_String_array *)
           System_Collections_Generic_List_object___ToArray
                     ((System_Collections_Generic_List_object__o *)__this_00,
                      (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  return pSVar9;
}


// UI.UIManager$$LoadUIThemes
// il2cpp: void UI_UIManager__LoadUIThemes (const MethodInfo* method);
// 0x5dad430

void UI_UIManager__LoadUIThemes(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  Settings_UISettings_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  bool bVar7;
  System_String_array *pSVar8;
  ulong uVar9;
  System_String_o *pSVar10;
  Il2CppObject *value;
  SimpleJSONFixed_JSONNode_o *d;
  long *plVar11;
  Il2CppObject *key;
  ulong uVar12;
  
  if (Il2CppMethodInitialized_07548110 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"No UI theme folder found, creating it.");
    il2cpp_codegen_initialize_runtime_metadata(&"Dark");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"*.json");
    Il2CppMethodInitialized_07548110 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  bVar7 = System_IO_Directory__Exists
                    (TypeInfo_Utility_FolderPaths->static_fields->UIThemesPath,(MethodInfo *)0x0);
  uVar2 = (TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor;
  if (!bVar7) {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    }
    System_IO_Directory__CreateDirectory
              (TypeInfo_Utility_FolderPaths->static_fields->UIThemesPath,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__Log((Il2CppObject *)"No UI theme folder found, creating it.",(MethodInfo *)0x0);
    return;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar8 = System_IO_Directory__GetFiles
                     (TypeInfo_Utility_FolderPaths->static_fields->UIThemesPath,"*.json",
                      (MethodInfo *)0x0);
  if (pSVar8 != (System_String_array *)0x0) {
    if (0 < (int)pSVar8->max_length) {
      uVar9 = pSVar8->max_length & 0xffffffff;
      uVar12 = 0;
      do {
        if (uVar9 <= uVar12) {
          ThrowIndexOutOfRangeException();
        }
        pSVar10 = System_IO_File__ReadAllText(pSVar8->m_Items[uVar12],(MethodInfo *)0x0);
        value = (Il2CppObject *)SimpleJSONFixed_JSON__Parse(pSVar10,(MethodInfo *)0x0);
        if (value != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_SimpleJSONFixed_JSONObject->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
             ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject)) {
            il2cpp_codegen_raise_invalid_cast_exception(value);
          }
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        if (value == (Il2CppObject *)0x0) goto label_05dad84e;
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_UI_UIManager->static_fields->_uiThemes;
        d = (SimpleJSONFixed_JSONNode_o *)
            (*value->klass->vtable[7].methodPtr)(value,"Name",value->klass->vtable[7].method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(d,(MethodInfo *)0x0);
        if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05dad84e;
        bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar4,(Il2CppObject *)pSVar10,
                           (MethodInfo_4AAD6F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
        if (!bVar7) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_UI_UIManager->static_fields->_uiThemes;
          plVar11 = (long *)(*value->klass->vtable[7].methodPtr)
                                      (value,"Name",value->klass->vtable[7].method);
          if (plVar11 == (long *)0x0) goto label_05dad84e;
          key = (Il2CppObject *)(**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05dad84e;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar4,key,value,
                     (MethodInfo_4AAD4E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_Add);
        }
        uVar12 = uVar12 + 1;
        uVar3 = (uint)pSVar8->max_length;
        uVar9 = (ulong)uVar3;
      } while ((long)uVar12 < (long)(int)uVar3);
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if (((pSVar5 != (Settings_UISettings_o *)0x0) &&
        (pSVar6 = (pSVar5->fields).UITheme, pSVar6 != (Settings_StringSetting_o *)0x0)) &&
       (pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_UI_UIManager->static_fields->_uiThemes,
       pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar4,(Il2CppObject *)(pSVar6->fields)._value,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
      if (bVar7) {
        return;
      }
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
      if ((pSVar5 != (Settings_UISettings_o *)0x0) &&
         (pSVar6 = (pSVar5->fields).UITheme, pSVar6 != (Settings_StringSetting_o *)0x0)) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"Dark",
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
        if (pSVar5 != (Settings_UISettings_o *)0x0) {
          (*(pSVar5->klass->vtable)._18_Save.methodPtr)(pSVar5,(pSVar5->klass->vtable)._18_Save.method);
          return;
        }
      }
    }
  }
label_05dad84e:
  ThrowNullReferenceException();
}


// UI.UIManager$$Update
// il2cpp: void UI_UIManager__Update (UI_UIManager_o* __this, const MethodInfo* method);
// 0x5db1b70
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db1dd4: jmp 0x5db2043
// asm:   0x5db2024: jmp 0x5db1f56
// asm:   0x5db203e: jmp 0x5db1f56
// asm:   0x5db209c: jmp 0x5db206b

void UI_UIManager__Update(UI_UIManager_o *__this,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  UI_BaseMenu_o *pUVar3;
  UnityEngine_UI_Text_o *__this_00;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int32_t iVar7;
  UI_UIManager_StaticFields *pUVar8;
  UnityEngine_Object_o *x;
  System_Object_array *pSVar9;
  UnityEngine_TextGenerator_o *__this_01;
  System_String_o *pSVar10;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *pMVar11;
  Il2CppClass *pIVar12;
  uint uVar13;
  float fVar14;
  double x_00;
  double dVar15;
  float fVar16;
  Il2CppMethodPointer pIStack_38;
  
  if (Il2CppMethodInitialized_07548111 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Text)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07548111 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  fVar16 = TypeInfo_UI_UIManager->static_fields->_currentFrameTime;
  fVar14 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pIVar12 = (Il2CppClass *)TypeInfo_UI_UIManager;
  fVar14 = fVar14 + fVar16;
  pUVar8 = TypeInfo_UI_UIManager->static_fields;
  pUVar8->_currentFrameTime = fVar14;
  fVar16 = pUVar8->_currentFrameCount + 1.0;
  pUVar8->_currentFrameCount = fVar16;
  if (pUVar8->_maxFrameTime <= fVar14) {
    if ((((UI_UIManager_c *)pIVar12)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar12);
      fVar14 = TypeInfo_UI_UIManager->static_fields->_currentFrameTime;
      fVar16 = TypeInfo_UI_UIManager->static_fields->_currentFrameCount;
      uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    x_00 = (double)(fVar16 / fVar14);
    pMVar11 = (MethodInfo *)&pIStack_38;
    dVar15 = modf(x_00,(double *)pMVar11,method);
    if (0.0 <= fVar16 / fVar14) {
      if ((dVar15 != 0.5) || (NAN(dVar15))) {
        pIStack_38 = (Il2CppMethodPointer)floor(x_00 + 0.5,pMVar11);
      }
      else if (((long)(double)pIStack_38 & 1U) != 0) {
        pIStack_38 = (Il2CppMethodPointer)((double)pIStack_38 + 1.0);
      }
    }
    else if ((dVar15 != -0.5) || (NAN(dVar15))) {
      pIStack_38 = (Il2CppMethodPointer)ceil(x_00 + -0.5,pMVar11);
    }
    else if (((long)(double)pIStack_38 & 1U) != 0) {
      pIStack_38 = (Il2CppMethodPointer)((double)pIStack_38 + -1.0);
    }
    pIVar12 = (Il2CppClass *)TypeInfo_UI_UIManager;
    pUVar8 = TypeInfo_UI_UIManager->static_fields;
    pUVar8->_lastFPS = (int)(double)pIStack_38;
    pUVar8->_currentFrameTime = 0.0;
    pUVar8->_currentFrameCount = 0.0;
  }
  if ((pIVar12->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(pIVar12);
    pIVar12 = (Il2CppClass *)TypeInfo_UI_UIManager;
  }
  pUVar3 = pIVar12->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      pUVar8 = TypeInfo_UI_UIManager->static_fields;
      cVar1 = pUVar8->NeedResizeText;
    }
    else {
      pUVar8 = TypeInfo_UI_UIManager->static_fields;
      cVar1 = pUVar8->NeedResizeText;
    }
    if (cVar1 != '\0') {
      if ((((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        pUVar8 = TypeInfo_UI_UIManager->static_fields;
      }
      if (pUVar8->CurrentMenu == (UI_BaseMenu_o *)0x0) {
label_05db209e:
        ThrowNullReferenceException();
      }
      x = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject
                    ((UnityEngine_Component_o *)pUVar8->CurrentMenu,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar8 = TypeInfo_UI_UIManager->static_fields;
        pUVar8->NeedResizeText = false;
        pUVar3 = pUVar8->CurrentMenu;
        if ((pUVar3 == (UI_BaseMenu_o *)0x0) ||
           (pSVar9 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                               ((UnityEngine_Component_o *)pUVar3,
                                (MethodInfo_34B11B0 *)
                                MethodInfo_UnityEngine_Component_GetComponentsInChildren_Text),
           pSVar9 == (System_Object_array *)0x0)) goto label_05db209e;
        uVar6 = (uint)pSVar9->max_length;
        if (0 < (int)uVar6) {
          uVar13 = 0;
          do {
            if (uVar6 <= uVar13) {
              ThrowIndexOutOfRangeException();
            }
            __this_00 = (UnityEngine_UI_Text_o *)pSVar9->m_Items[(int)uVar13];
            if (__this_00 == (UnityEngine_UI_Text_o *)0x0) goto label_05db209e;
            bVar4 = false;
            iVar7 = UnityEngine_UI_Text__get_fontSize(__this_00,(MethodInfo *)0x0);
            if (2 < iVar7) {
              __this_01 = UnityEngine_UI_Text__get_cachedTextGenerator(__this_00,(MethodInfo *)0x0);
              if (__this_01 == (UnityEngine_TextGenerator_o *)0x0) goto label_05db209e;
              iVar7 = UnityEngine_TextGenerator__get_characterCountVisible(__this_01,(MethodInfo *)0x0);
              pSVar10 = (*(__this_00->klass->vtable)._74_get_text.methodPtr)
                                  (__this_00,(__this_00->klass->vtable)._74_get_text.method);
              if (pSVar10 == (System_String_o *)0x0) goto label_05db209e;
              bVar4 = iVar7 < (pSVar10->fields)._stringLength;
            }
            __this_02 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_05db209e;
            bVar5 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
            if (bVar5) {
              if (bVar4) goto label_05db1f56;
              pMVar11 = (MethodInfo *)0x0;
              iVar7 = UnityEngine_UI_Text__get_fontSize(__this_00,(MethodInfo *)0x0);
              if (10 < iVar7) {
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                bVar4 = UI_UIManager__IsContentSized(__this_00,pMVar11);
                if (!bVar4) {
                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                    bVar4 = UI_UIManager__BreaksWord(__this_00,pMVar11);
                    if (bVar4) goto label_05db1f56;
                  }
                  else {
                    bVar4 = UI_UIManager__BreaksWord(__this_00,pMVar11);
                    if (bVar4) {
label_05db1f56:
                      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                      }
                      if (TypeInfo_UI_UIManager->static_fields->NeedResizeTextSecondFrame != false) {
                        iVar7 = UnityEngine_UI_Text__get_fontSize(__this_00,(MethodInfo *)0x0);
                        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                        }
                        iVar7 = System_Math__Max_54bad40(iVar7 + -1,1,(MethodInfo *)0x0);
                        UnityEngine_UI_Text__set_fontSize(__this_00,iVar7,(MethodInfo *)0x0);
                      }
                      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                      }
                      TypeInfo_UI_UIManager->static_fields->NeedResizeText = true;
                    }
                  }
                }
              }
            }
            uVar13 = uVar13 + 1;
            uVar6 = (uint)pSVar9->max_length;
          } while ((int)uVar13 < (int)uVar6);
        }
        uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
        pIVar12 = (Il2CppClass *)TypeInfo_UI_UIManager;
        goto joined_r0x05db2069;
      }
    }
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pIVar12 = (Il2CppClass *)TypeInfo_UI_UIManager;
  TypeInfo_UI_UIManager->static_fields->NeedResizeText = false;
  uVar2 = (((UI_UIManager_c *)pIVar12)->_2).cctor_finished_or_no_cctor;
joined_r0x05db2069:
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar12);
    pIVar12 = (Il2CppClass *)TypeInfo_UI_UIManager;
  }
  *(undefined1 *)((long)pIVar12->static_fields + 0x71) = *(undefined1 *)((long)pIVar12->static_fields + 0x70);
  return;
}


// UI.UIManager$$BreaksWord
// il2cpp: bool UI_UIManager__BreaksWord (UnityEngine_UI_Text_o* text, const MethodInfo* method);
// 0x5db2220
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db237e: nop 
// asm:   0x5db258e: mov rbx, qword ptr [rsp + 0x10]
// asm:   0x5db2593: jmp 0x5db25af
// asm:   0x5db2789: nop dword ptr [rax]
// asm:   0x5db279f: jmp 0x5db2730

bool UI_UIManager__BreaksWord(UnityEngine_UI_Text_o *text,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  uint uVar4;
  bool bVar5;
  uint16_t uVar6;
  int32_t iVar7;
  int32_t iVar8;
  int index;
  int32_t iVar9;
  UnityEngine_TextGenerator_o *__this;
  Il2CppObject *obj;
  Il2CppObject *obj_00;
  System_String_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  VirtualInvokeData *pVVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Rect_o UVar19;
  float local_48;
  
  if (Il2CppMethodInitialized_07548112 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_UICharInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_UILineInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_UICharInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_UILineInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07548112 = '\x01';
  }
  if ((text != (UnityEngine_UI_Text_o *)0x0) &&
     (__this = UnityEngine_UI_Text__get_cachedTextGenerator(text,(MethodInfo *)0x0),
     __this != (UnityEngine_TextGenerator_o *)0x0)) {
    obj = (Il2CppObject *)UnityEngine_TextGenerator__get_lines(__this,(MethodInfo *)0x0);
    obj_00 = (Il2CppObject *)UnityEngine_TextGenerator__get_characters(__this,(MethodInfo *)0x0);
    __this_00 = (*(text->klass->vtable)._74_get_text.methodPtr)
                          (text,(text->klass->vtable)._74_get_text.method);
    __this_01 = UnityEngine_UI_Graphic__get_rectTransform((UnityEngine_UI_Graphic_o *)text,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
      UVar19 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      fVar16 = UnityEngine_UI_Text__get_pixelsPerUnit(text,(MethodInfo *)0x0);
      iVar7 = UnityEngine_UI_Text__get_fontSize(text,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        local_48 = UVar19.fields.m_Width;
        uVar12 = 1;
        do {
          pIVar2 = obj->klass;
          uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar11 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar14 = 0;
            do {
              if (*(System_Collections_Generic_ICollection_UILineInfo__c **)
                   ((long)&pIVar3->interfaceType + lVar14) ==
                  TypeInfo_System_Collections_Generic_ICollection_UILineInfo) {
                pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar14);
                goto label_05db23e3;
              }
              lVar14 = lVar14 + 0x10;
            } while (uVar11 * 0x10 != lVar14);
          }
          pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                              (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_UILineInfo,0
                              );
label_05db23e3:
          iVar8 = (*pVVar10->methodPtr)(obj,pVVar10->method);
          if (iVar8 <= (int)uVar12) {
label_05db27c7:
            return (int)uVar12 < iVar8;
          }
          pIVar2 = obj->klass;
          uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar11 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar14 = 0;
            do {
              if (*(System_Collections_Generic_IList_UILineInfo__c **)((long)&pIVar3->interfaceType + lVar14)
                  == TypeInfo_System_Collections_Generic_IList_UILineInfo) {
                pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar14);
                goto label_05db2463;
              }
              lVar14 = lVar14 + 0x10;
            } while (uVar11 * 0x10 != lVar14);
          }
          pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                              (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_IList_UILineInfo,0);
label_05db2463:
          index = (*pVVar10->methodPtr)(obj,(ulong)uVar12,pVVar10->method);
          if (0 < index) {
            if (__this_00 == (System_String_o *)0x0) break;
            if (index < (__this_00->fields)._stringLength) {
              uVar6 = System_String__get_Chars(__this_00,index - 1U,(MethodInfo *)0x0);
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                uVar1 = (g_data_07556750->_2).cctor_finished_or_no_cctor;
              }
              else {
                uVar1 = (g_data_07556750->_2).cctor_finished_or_no_cctor;
              }
              if (uVar1 == 0) {
                il2cpp_codegen_runtime_class_init(g_data_07556750);
              }
              bVar5 = System_Char__IsLetterOrDigit(uVar6,(MethodInfo *)0x0);
              if (((uVar6 < 0x2e80) && (bVar5)) && ((ushort)(uVar6 - 0xe80) < 0xff80)) {
                uVar6 = System_String__get_Chars(__this_00,index,(MethodInfo *)0x0);
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                  uVar1 = (g_data_07556750->_2).cctor_finished_or_no_cctor;
                }
                else {
                  uVar1 = (g_data_07556750->_2).cctor_finished_or_no_cctor;
                }
                if (uVar1 == 0) {
                  il2cpp_codegen_runtime_class_init(g_data_07556750);
                }
                bVar5 = System_Char__IsLetterOrDigit(uVar6,(MethodInfo *)0x0);
                if (((uVar6 < 0x2e80) && (bVar5)) && (uVar4 = index - 1U, (ushort)(uVar6 - 0xe80) < 0xff80)) {
                  do {
                    uVar13 = uVar4;
                    if ((int)uVar13 < 1) break;
                    uVar6 = System_String__get_Chars(__this_00,uVar13 - 1,(MethodInfo *)0x0);
                    if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init(g_data_07556750);
                    }
                    bVar5 = System_Char__IsWhiteSpace(uVar6,(MethodInfo *)0x0);
                    uVar4 = uVar13 - 1;
                  } while (!bVar5);
                  do {
                    iVar15 = index;
                    index = iVar15 + 1;
                    if ((__this_00->fields)._stringLength <= index) break;
                    uVar6 = System_String__get_Chars(__this_00,index,(MethodInfo *)0x0);
                    if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init(g_data_07556750);
                    }
                    bVar5 = System_Char__IsWhiteSpace(uVar6,(MethodInfo *)0x0);
                  } while (!bVar5);
                  if (obj_00 == (Il2CppObject *)0x0) break;
                  pIVar2 = obj_00->klass;
                  uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
                  if (uVar11 != 0) {
                    pIVar3 = (pIVar2->_1).interfaceOffsets;
                    lVar14 = 0;
                    do {
                      if (*(System_Collections_Generic_ICollection_UICharInfo__c **)
                           ((long)&pIVar3->interfaceType + lVar14) ==
                          TypeInfo_System_Collections_Generic_ICollection_UICharInfo) {
                        pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar14);
                        goto label_05db26fb;
                      }
                      lVar14 = lVar14 + 0x10;
                    } while (uVar11 * 0x10 != lVar14);
                  }
                  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                      (obj_00,(Il2CppClass *)
                                              TypeInfo_System_Collections_Generic_ICollection_UICharInfo,0);
label_05db26fb:
                  iVar9 = (*pVVar10->methodPtr)(obj_00,pVVar10->method);
                  if (iVar15 < iVar9) {
                    fVar17 = 0.0;
                    if ((int)uVar13 <= iVar15) {
                      fVar17 = 0.0;
                      do {
                        pIVar2 = obj_00->klass;
                        uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
                        fVar18 = fVar17;
                        if (uVar11 != 0) {
                          pIVar3 = (pIVar2->_1).interfaceOffsets;
                          lVar14 = 0;
                          do {
                            if (*(System_Collections_Generic_IList_UICharInfo__c **)
                                 ((long)&pIVar3->interfaceType + lVar14) ==
                                TypeInfo_System_Collections_Generic_IList_UICharInfo) {
                              pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar14);
                              goto label_05db273a;
                            }
                            lVar14 = lVar14 + 0x10;
                          } while (uVar11 * 0x10 != lVar14);
                        }
                        pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                            (obj_00,(Il2CppClass *)
                                                    TypeInfo_System_Collections_Generic_IList_UICharInfo,0);
label_05db273a:
                        (*pVVar10->methodPtr)(obj_00,(ulong)uVar13,pVVar10->method);
                        fVar17 = fVar17 + fVar18;
                        uVar13 = uVar13 + 1;
                      } while ((int)uVar13 <= iVar15);
                    }
                    if (fVar17 <= ((float)iVar7 * local_48 * fVar16) / 10.0) goto label_05db27c7;
                  }
                }
              }
            }
          }
          uVar12 = uVar12 + 1;
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.UIManager$$IsContentSized
// il2cpp: bool UI_UIManager__IsContentSized (UnityEngine_UI_Text_o* text, const MethodInfo* method);
// 0x5db20b0

bool UI_UIManager__IsContentSized(UnityEngine_UI_Text_o *text,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_HorizontalLayoutGroup_o *x;
  UnityEngine_UI_LayoutElement_o *x_00;
  float fVar4;
  
  if (Il2CppMethodInitialized_07548113 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548113 = '\x01';
  }
  if (text != (UnityEngine_UI_Text_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)text,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      x = (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0;
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)text,(MethodInfo *)0x0);
        if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05db221b;
        pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
        if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05db221b;
        x = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar3,
                       (MethodInfo_34B0830 *)
                       MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = false;
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        if (x == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_05db221b;
        if ((x->fields).m_ChildControlWidth == false) {
          bVar1 = false;
        }
        else {
          x_00 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)text,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement)
          ;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          bVar1 = true;
          if (!bVar2) {
            if (x_00 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05db221b;
            fVar4 = (*(x_00->klass->vtable)._35_get_preferredWidth.methodPtr)
                              (x_00,(x_00->klass->vtable)._35_get_preferredWidth.method);
            bVar1 = fVar4 < 0.0;
          }
        }
      }
      return bVar1;
    }
  }
label_05db221b:
  ThrowNullReferenceException();
}


// UI.UIManager$$IsWordCharacter
// il2cpp: bool UI_UIManager__IsWordCharacter (uint16_t character, const MethodInfo* method);
// 0x5db27f0

bool UI_UIManager__IsWordCharacter(uint16_t character,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  
  if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556750);
  }
  bVar2 = false;
  bVar1 = System_Char__IsLetterOrDigit(character,(MethodInfo *)0x0);
  if ((character < 0x2e80) && (bVar1)) {
    bVar2 = (ushort)(character - 0xe80) < 0xff80;
  }
  return bVar2;
}


// UI.UIManager$$GetFPS
// il2cpp: int32_t UI_UIManager__GetFPS (const MethodInfo* method);
// 0x5db2850

int32_t UI_UIManager__GetFPS(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548114 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07548114 = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    return TypeInfo_UI_UIManager->static_fields->_lastFPS;
  }
  return *(int32_t *)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x74);
}


// UI.UIManager$$.ctor
// il2cpp: void UI_UIManager___ctor (UI_UIManager_o* __this, const MethodInfo* method);
// 0x5db28c0

void UI_UIManager___ctor(UI_UIManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.UIManager$$.cctor
// il2cpp: void UI_UIManager___cctor (const MethodInfo* method);
// 0x5db28d0

void UI_UIManager___cctor(MethodInfo *method)

{
  UI_UIManager_StaticFields *pUVar1;
  System_Collections_Generic_Dictionary_string__JSONObject__o *pSVar2;
  System_Collections_Generic_Dictionary_Type__string__o *__this;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Collections_Generic_HashSet_string__o *__this_00;
  
  if (Il2CppMethodInitialized_07548115 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_Type_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07548115 = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_JSONObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar2,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ctor);
  TypeInfo_UI_UIManager->static_fields->_languages = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_UIManager->static_fields->_languages);
  pUVar1 = TypeInfo_UI_UIManager->static_fields;
  pUVar1->_languageLetters = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&pUVar1->_languageLetters);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_JSONObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar2,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ctor);
  pUVar1 = TypeInfo_UI_UIManager->static_fields;
  pUVar1->_uiThemes = pSVar2;
  Il2CppCodeGenWriteBarrier(&pUVar1->_uiThemes);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Type_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_Type_string_ctor);
  pUVar1 = TypeInfo_UI_UIManager->static_fields;
  pUVar1->_lastCategories = __this;
  Il2CppCodeGenWriteBarrier(&pUVar1->_lastCategories);
  TypeInfo_UI_UIManager->static_fields->CurrentCanvasScale = 1.0;
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pUVar1 = TypeInfo_UI_UIManager->static_fields;
  pUVar1->AvailableProfileIcons = pSVar3;
  Il2CppCodeGenWriteBarrier(&pUVar1->AvailableProfileIcons);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pUVar1 = TypeInfo_UI_UIManager->static_fields;
  pUVar1->AvailableEmojis = pSVar3;
  Il2CppCodeGenWriteBarrier(&pUVar1->AvailableEmojis);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  pUVar1 = TypeInfo_UI_UIManager->static_fields;
  pUVar1->AnimatedEmojis = __this_00;
  Il2CppCodeGenWriteBarrier(&pUVar1->AnimatedEmojis);
  pUVar1 = TypeInfo_UI_UIManager->static_fields;
  pUVar1->NeedResizeText = false;
  pUVar1->NeedResizeTextSecondFrame = false;
  pUVar1->_lastFPS = 0;
  pUVar1->_currentFrameTime = 0.0;
  pUVar1->_currentFrameCount = 0.0;
  pUVar1->_maxFrameTime = 0.5;
  return;
}


