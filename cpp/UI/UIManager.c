// Type: UI.UIManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/UIManager.cs
// Prior real C# source (older reference): Assets/Scripts/UI/UIManager.cs
// --------------------------------

// UI.UIManager$$Init
// il2cpp: void UI_UIManager__Init (const MethodInfo* method);
// 0x182301980

void UI_UIManager__Init(MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *value;
  UI_UIManager_o *value_00;
  UI_LoadingMenu_o *pUVar3;
  UnityEngine_Object_o *target;
  Events_OnLoadScene_o *value_01;
  
  if (Il2CppMethodInitialized_18434765d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateMenu_LoadingMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_SingletonFactory_CreateSingleton_UIManager)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_UIManager_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/BackgroundMenu");
    Il2CppMethodInitialized_18434765d = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  value_00 = Utility_SingletonFactory__CreateSingleton_object_
                       ((Il2CppObject *)TypeInfo_UI_UIManager->static_fields->_instance,
                        (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_UIManager);
  TypeInfo_UI_UIManager->static_fields->_instance = value_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_UIManager->static_fields->_instance,value_00);
  UI_UIManager__LoadLanguages((MethodInfo *)0x0);
  UI_UIManager__LoadUIThemes((MethodInfo *)0x0);
  UI_UIManager__LoadProfileIcons((MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).UITheme, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    value = (pSVar2->fields)._value;
    TypeInfo_UI_UIManager->static_fields->_currentUITheme = value;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_UIManager->static_fields->_currentUITheme,value);
    pUVar3 = UI_ElementFactory__CreateMenu_object_
                       ("Prefabs/Panels/BackgroundMenu",
                        (MethodInfo_6ABB40 *)MethodInfo_UI_ElementFactory_CreateMenu_LoadingMenu);
    TypeInfo_UI_UIManager->static_fields->LoadingMenu = pUVar3;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_UIManager->static_fields->LoadingMenu,pUVar3);
    pUVar3 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
    if (pUVar3 != (UI_LoadingMenu_o *)0x0) {
      (*(pUVar3->klass->vtable)._4_Setup.methodPtr)(pUVar3,(pUVar3->klass->vtable)._4_Setup.method);
      pUVar3 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
      if (pUVar3 != (UI_LoadingMenu_o *)0x0) {
        target = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
        value_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnLoadScene);
        Events_OnLoadScene___ctor
                  ((UnityEngine_AudioClip_PCMSetPositionCallback_o *)value_01,(Il2CppObject *)0x0,
                   (intptr_t)MethodInfo_UI_UIManager_OnLoadScene,(MethodInfo *)0x0);
        Events_EventManager__add_OnLoadScene(value_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.UIManager$$OnLoadScene
// il2cpp: void UI_UIManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x182302a40

void UI_UIManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  UI_LoadingMenu_o *pUVar1;
  
  if (Il2CppMethodInitialized_18434765e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_18434765e = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  UI_UIManager__SetMenu(sceneName,(MethodInfo *)0x0);
  if (sceneName != 0) {
    if (sceneName == 2) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar1 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
      if (pUVar1 != (UI_LoadingMenu_o *)0x0) {
        UI_LoadingMenu__Show(pUVar1,true,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar1 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
      if (pUVar1 != (UI_LoadingMenu_o *)0x0) {
        UI_LoadingMenu__Hide(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// UI.UIManager$$PlaySound
// il2cpp: void UI_UIManager__PlaySound (int32_t sound, const MethodInfo* method);
// 0x182302b10

void UI_UIManager__PlaySound(int32_t sound,MethodInfo *method)

{
  int kind;
  
  if (Il2CppMethodInitialized_18434765f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_18434765f = '\x01';
  }
  if (sound == 1) {
    kind = 1;
  }
  else {
    kind = (uint)(sound == 2) * 2;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(kind,(MethodInfo *)0x0);
  return;
}


// UI.UIManager$$SetLastCategory
// il2cpp: void UI_UIManager__SetLastCategory (System_Type_o* t, System_String_o* category, const MethodInfo* method);
// 0x182302b80

void UI_UIManager__SetLastCategory(System_Type_o *t,System_String_o *category,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Type__string__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347660 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184347660 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this = TypeInfo_UI_UIManager->static_fields->_lastCategories;
  if (__this != (System_Collections_Generic_Dictionary_Type__string__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)t,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Type_string_ContainsKey);
    if (bVar2) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_UI_UIManager->static_fields->_lastCategories;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)t,(Il2CppObject *)category,
                   (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_Type_string_set_Item
                  );
        return;
      }
    }
    else {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_UI_UIManager->static_fields->_lastCategories;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,(Il2CppObject *)t,(Il2CppObject *)category,
                   (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_Type_string_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.UIManager$$GetLastcategory
// il2cpp: System_String_o* UI_UIManager__GetLastcategory (System_Type_o* t, const MethodInfo* method);
// 0x1822ff7b0

System_String_o * UI_UIManager__GetLastcategory(System_Type_o *t,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Type__string__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347661 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184347661 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this = TypeInfo_UI_UIManager->static_fields->_lastCategories;
  if (__this != (System_Collections_Generic_Dictionary_Type__string__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)t,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Type_string_ContainsKey);
    if (!bVar1) {
      return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_UI_UIManager->static_fields->_lastCategories;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_00,(Il2CppObject *)t,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_Type_string_get_Item);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.UIManager$$LoadProfileIcons
// il2cpp: void UI_UIManager__LoadProfileIcons (const MethodInfo* method);
// 0x182302070
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18230222b: nop dword ptr [rax + rax]
// asm:   0x1823023eb: nop dword ptr [rax + rax]
// asm:   0x182302543: nop dword ptr [rax]
// asm:   0x182302547: nop word ptr [rax + rax]

void UI_UIManager__LoadProfileIcons(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  System_String_array *pSVar4;
  SimpleJSONFixed_JSONNode_o *d;
  System_Collections_Generic_HashSet_object__o *__this;
  MethodInfo *pMVar5;
  bool bVar6;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_Xml_Schema_XmlSchema_o *pSVar9;
  undefined8 *puVar10;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar11;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_b8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_68;
  undefined1 local_58 [80];
  
  if (Il2CppMethodInitialized_184347662 == '\0') {
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
    Il2CppMethodInitialized_184347662 = '\x01';
  }
  local_b8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_b8.type = 0;
  local_b8._4_4_ = 0;
  local_b8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b8.m_Object.fields._version = 0;
  local_b8.m_Object.fields._index = 0;
  local_b8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_b8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_b8.m_Object.fields._getEnumeratorRetType = 0;
  local_b8.m_Object.fields._36_4_ = 0;
  local_b8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b8.m_Array.fields._index = 0;
  local_b8.m_Array.fields._version = 0;
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
     (pSVar9 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)(pSVar8,(MethodInfo *)"Icons"),
     pSVar9 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
    puVar10 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar9->klass)->vtable[32].methodPtr)(local_58);
    local_b8._0_8_ = *puVar10;
    local_b8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar10[1]
    ;
    local_b8.m_Object.fields._8_8_ = puVar10[2];
    local_b8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar10[3];
    local_b8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar10[4];
    local_b8.m_Object.fields._32_8_ = puVar10[5];
    local_b8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar10[6];
    local_b8.m_Array.fields._8_8_ = puVar10[7];
    local_b8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar10[8];
    bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_b8,(MethodInfo *)0x0);
    if (bVar6) {
      do {
        pSVar11 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            (&local_68,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_b8,(MethodInfo *)0x0);
        pSVar8 = (pSVar11->fields).value;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar3 = TypeInfo_UI_UIManager->static_fields->AvailableProfileIcons;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450(pSVar8,(MethodInfo *)0x0);
        pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_1823025f8;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar3->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) goto label_1823025f8;
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          if ((uint)pSVar4->max_length <= uVar2) goto label_1823025fe;
          pSVar4->m_Items[(int)uVar2] = pSVar7;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pSVar7);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pSVar7,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_b8,(MethodInfo *)0x0);
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
       (pSVar9 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)(pSVar8,(MethodInfo *)"AllEmojis"),
       pSVar9 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
      puVar10 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar9->klass)->vtable[32].methodPtr)(local_58);
      local_b8._0_8_ = *puVar10;
      local_b8.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar10[1];
      local_b8.m_Object.fields._8_8_ = puVar10[2];
      local_b8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar10[3];
      local_b8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar10[4];
      local_b8.m_Object.fields._32_8_ = puVar10[5];
      local_b8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar10[6];
      local_b8.m_Array.fields._8_8_ = puVar10[7];
      local_b8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar10[8];
      bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_b8,(MethodInfo *)0x0);
      if (bVar6) {
        do {
          pSVar11 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (&local_68,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_b8,(MethodInfo *)0x0)
          ;
          d = (pSVar11->fields).value;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar3 = TypeInfo_UI_UIManager->static_fields->AvailableEmojis;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450(d,(MethodInfo *)0x0);
          pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_1823025f8;
          piVar1 = &(pSVar3->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar3->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) goto label_1823025f8;
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            if ((uint)pSVar4->max_length <= uVar2) {
label_1823025fe:
              ThrowIndexOutOfRangeException();
            }
            pSVar4->m_Items[(int)uVar2] = pSVar7;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pSVar7);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pSVar7,
                       (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          }
          bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_b8,(MethodInfo *)0x0);
        } while (bVar6);
      }
      pSVar9 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)(pSVar8,(MethodInfo *)"AnimatedEmojis");
      if (pSVar9 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        puVar10 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar9->klass)->vtable[32].methodPtr)(local_58);
        local_b8._0_8_ = *puVar10;
        local_b8.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar10[1];
        local_b8.m_Object.fields._8_8_ = puVar10[2];
        local_b8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar10[3];
        local_b8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar10[4];
        local_b8.m_Object.fields._32_8_ = puVar10[5];
        local_b8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar10[6];
        local_b8.m_Array.fields._8_8_ = puVar10[7];
        local_b8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar10[8];
        bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_b8,(MethodInfo *)0x0);
        if (bVar6) {
          do {
            pSVar11 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                (&local_68,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_b8,
                                 (MethodInfo *)0x0);
            pSVar8 = (pSVar11->fields).value;
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            __this = (System_Collections_Generic_HashSet_object__o *)
                     TypeInfo_UI_UIManager->static_fields->AnimatedEmojis;
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450(pSVar8,(MethodInfo *)0x0);
            if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1823025f8;
            System_Collections_Generic_HashSet_object___Add
                      (__this,(Il2CppObject *)pSVar7,
                       (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
            bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_b8,(MethodInfo *)0x0);
          } while (bVar6);
        }
        return;
      }
    }
  }
label_1823025f8:
  ThrowNullReferenceException();
}


// UI.UIManager$$SetMenu
// il2cpp: void UI_UIManager__SetMenu (int32_t sceneName, const MethodInfo* method);
// 0x182302cb0
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182302ebc: mov rcx, qword ptr [rip + 0x1deddfd]  ; MethodInfo_UI_ElementFactory_CreateDefaultMenu_CreditsMenu
// asm:   0x182302f11: mov rcx, qword ptr [rip + 0x1dede80]  ; MethodInfo_UI_ElementFactory_CreateDefaultMenu_GalleryMenu
// asm:   0x182302f18: jmp 0x182302ec3
// asm:   0x182302f1a: mov rcx, qword ptr [rip + 0x1dee1e7]  ; MethodInfo_UI_ElementFactory_CreateDefaultMenu_SnapshotViewerMenu
// asm:   0x182302f21: jmp 0x182302ec3
// asm:   0x182302f23: mov rcx, qword ptr [rip + 0x1dee106]  ; MethodInfo_UI_ElementFactory_CreateDefaultMenu_MapEditorMenu
// asm:   0x182302f2a: jmp 0x182302ec3
// asm:   0x182302f63: mov rcx, qword ptr [rip + 0x1dedb9e]  ; MethodInfo_UI_ElementFactory_CreateDefaultMenu_CharacterEditorHumanMenu
// asm:   0x182302f6a: jmp 0x182302ec3
// asm:   0x182302f6f: mov rcx, qword ptr [rip + 0x1dedf02]  ; MethodInfo_UI_ElementFactory_CreateDefaultMenu_InGameMenu
// asm:   0x182302f76: jmp 0x182302ec3

void UI_UIManager__SetMenu(int32_t sceneName,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *value;
  System_Collections_Generic_Dictionary_Type__string__o *__this;
  bool bVar3;
  UnityEngine_Object_o *obj;
  UI_BaseMenu_o *pUVar4;
  UI_MainMenu_o *value_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_184347663 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Type_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultMenu_CharacterEditorHumanMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultMenu_CharacterEditorTitanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultMenu_CreditsMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultMenu_GalleryMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultMenu_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultMenu_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultMenu_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultMenu_SnapshotViewerMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184347663 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).UITheme, pSVar2 == (Settings_StringSetting_o *)0x0)) goto label_1823030fc;
  value = (pSVar2->fields)._value;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  TypeInfo_UI_UIManager->static_fields->_currentUITheme = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_UIManager->static_fields->_currentUITheme,value);
  pUVar4 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar4 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar4 == (UI_BaseMenu_o *)0x0) goto label_1823030fc;
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
  }
  if (sceneName == 1) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this = TypeInfo_UI_UIManager->static_fields->_lastCategories;
    if (__this == (System_Collections_Generic_Dictionary_Type__string__o *)0x0) goto label_1823030fc;
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_Type_string_Clear);
    value_00 = UI_ElementFactory__CreateDefaultMenu_object_
                         ((MethodInfo_6AB8E0 *)MethodInfo_UI_ElementFactory_CreateDefaultMenu_MainMenu);
    TypeInfo_UI_UIManager->static_fields->CurrentMenu = (UI_BaseMenu_o *)value_00;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_UIManager->static_fields->CurrentMenu,value_00);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__Reset((MethodInfo *)0x0);
  }
  else {
    method_00 = MethodInfo_UI_ElementFactory_CreateDefaultMenu_InGameMenu;
    if (sceneName != 2) {
      if (sceneName == 4) {
        if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
        }
        method_00 = MethodInfo_UI_ElementFactory_CreateDefaultMenu_CharacterEditorHumanMenu;
        if (TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode == false) {
          method_00 = MethodInfo_UI_ElementFactory_CreateDefaultMenu_CharacterEditorTitanMenu;
        }
      }
      else {
        method_00 = MethodInfo_UI_ElementFactory_CreateDefaultMenu_MapEditorMenu;
        if ((((sceneName != 3) &&
             (method_00 = MethodInfo_UI_ElementFactory_CreateDefaultMenu_SnapshotViewerMenu, sceneName != 5))
            && (method_00 = MethodInfo_UI_ElementFactory_CreateDefaultMenu_GalleryMenu, sceneName != 6)) &&
           (method_00 = MethodInfo_UI_ElementFactory_CreateDefaultMenu_CreditsMenu, sceneName != 7))
        goto label_18230300e;
      }
    }
    pUVar4 = (UI_BaseMenu_o *)UI_ElementFactory__CreateDefaultMenu_object_((MethodInfo_6AB8E0 *)method_00);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    TypeInfo_UI_UIManager->static_fields->CurrentMenu = pUVar4;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_UIManager->static_fields->CurrentMenu,pUVar4);
  }
label_18230300e:
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar4 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
label_1823030be:
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__PrepareForScene(sceneName,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    TypeInfo_UI_UIManager->static_fields->NeedResizeText = true;
    return;
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar4 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar4 != (UI_BaseMenu_o *)0x0) {
    (*(pUVar4->klass->vtable)._4_Setup.methodPtr)(pUVar4,(pUVar4->klass->vtable)._4_Setup.method);
    pUVar4 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar4 != (UI_BaseMenu_o *)0x0) {
      UI_BaseMenu__ApplyScale(pUVar4,sceneName,(MethodInfo *)0x0);
      goto label_1823030be;
    }
  }
label_1823030fc:
  ThrowNullReferenceException();
}


// UI.UIManager$$GetProfileIcon
// il2cpp: System_String_o* UI_UIManager__GetProfileIcon (System_String_o* icon, const MethodInfo* method);
// 0x1823005b0

System_String_o * UI_UIManager__GetProfileIcon(System_String_o *icon,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347664 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    Il2CppMethodInitialized_184347664 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = TypeInfo_UI_UIManager->static_fields->AvailableProfileIcons;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    bVar2 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)icon,
                       (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
    if (!bVar2) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar1 = TypeInfo_UI_UIManager->static_fields->AvailableProfileIcons;
      if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) goto label_182300692;
      icon = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,0,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
    }
    pSVar3 = System_String__Concat_1969e50(icon,"Icon",(MethodInfo *)0x0);
    return pSVar3;
  }
label_182300692:
  ThrowNullReferenceException();
}


// UI.UIManager$$GetLocaleFormatted
// il2cpp: System_String_o* UI_UIManager__GetLocaleFormatted (System_String_o* category, System_String_o* subCategory, System_String_o* item, System_Object_array* args, const MethodInfo* method);
// 0x1823000b0

System_String_o *
UI_UIManager__GetLocaleFormatted
          (System_String_o *category,System_String_o *subCategory,System_String_o *item,
          System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347665 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347665 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     (category,subCategory,item,"","",(MethodInfo *)0x0)
  ;
  pSVar1 = System_String__Format_196ceb0(pSVar1,args,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.UIManager$$GetLocale
// il2cpp: System_String_o* UI_UIManager__GetLocale (System_String_o* category, System_String_o* subCategory, System_String_o* item, System_String_o* forcedLanguage, System_String_o* defaultValue, const MethodInfo* method);
// 0x182300140
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182300301: mov rdi, r15
// asm:   0x1823004f0: xor edx, edx
// asm:   0x1823004f2: mov rcx, rbx
// asm:   0x1823004f5: call 0x181da6840  ; MiscExtensions__ReverseString()
// asm:   0x1823004fa: jmp 0x18230047a
// asm:   0x182300593: mov rax, rbx
// asm:   0x182300596: jmp 0x18230047a

System_String_o *
UI_UIManager__GetLocale
          (System_String_o *category,System_String_o *subCategory,System_String_o *item,
          System_String_o *forcedLanguage,System_String_o *defaultValue,MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_Collections_Generic_Dictionary_string__JSONObject__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UI_UIManager_o *pUVar3;
  MethodInfo *pMVar4;
  _func_60 *p_Var5;
  bool bVar6;
  SimpleJSONFixed_JSONObject_o *a;
  MethodInfo *arg0;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_Xml_Schema_XmlSchema_o *pSVar8;
  System_String_o *pSVar9;
  
  if (Il2CppMethodInitialized_184347666 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"{0} locale error.");
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184347666 = '\x01';
  }
  bVar6 = System_String__op_Inequality
                    (forcedLanguage,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                     (MethodInfo *)0x0);
  if (!bVar6) {
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    if ((pSVar1 == (Settings_GeneralSettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).Language, pSVar2 == (Settings_StringSetting_o *)0x0)) goto label_18230059b;
    forcedLanguage = (pSVar2->fields)._value;
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this = TypeInfo_UI_UIManager->static_fields->_languages;
  if (__this != (System_Collections_Generic_Dictionary_string__JSONObject__o *)0x0) {
    a = (SimpleJSONFixed_JSONObject_o *)0x0;
    bVar6 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                       (Il2CppObject *)forcedLanguage,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
    if (bVar6) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  TypeInfo_UI_UIManager->static_fields->_languages;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18230059b;
      a = System_Collections_Generic_Dictionary_object__object___get_Item
                    (__this_00,(Il2CppObject *)forcedLanguage,
                     (MethodInfo_147A5B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Item);
    }
    bVar6 = System_String__op_Inequality
                      (item,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    arg0 = (MethodInfo *)subCategory;
    if (bVar6) {
      arg0 = (MethodInfo *)
             System_String__Concat_1969b70(subCategory,".",item,(MethodInfo *)0x0);
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
label_1823004ff:
      bVar6 = System_String__op_Equality(forcedLanguage,"English",(MethodInfo *)0x0);
      if (bVar6) {
        bVar6 = System_String__op_Inequality
                          (defaultValue,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                           (MethodInfo *)0x0);
        if (!bVar6) {
          defaultValue = System_String__Format("{0} locale error.",(Il2CppObject *)arg0,(MethodInfo *)0x0);
        }
      }
      else {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        defaultValue = UI_UIManager__GetLocale
                                 (category,subCategory,item,"English",defaultValue,
                                  (MethodInfo *)0x0);
      }
      return defaultValue;
    }
    if (a != (SimpleJSONFixed_JSONObject_o *)0x0) {
      pSVar7 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,category,(a->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar6) goto label_1823004ff;
      pSVar7 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,category,(a->klass->vtable)._7_get_Item.method);
      if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar8 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)(pSVar7,arg0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                          ((SimpleJSONFixed_JSONNode_o *)pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar6) goto label_1823004ff;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar3 = TypeInfo_UI_UIManager->static_fields->_instance;
        if (pUVar3 != (UI_UIManager_o *)0x0) {
          bVar6 = System_String__op_Equality
                            (forcedLanguage,(pUVar3->fields)._arabicLanguageName,(MethodInfo *)0x0);
          pMVar4 = (a->klass->vtable)._7_get_Item.method;
          p_Var5 = (a->klass->vtable)._7_get_Item.methodPtr;
          if (bVar6) {
            pSVar7 = (*p_Var5)(a,category,pMVar4);
            if ((pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
               (pSVar8 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)(pSVar7,arg0),
               pSVar8 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
              pSVar9 = (System_String_o *)
                       (*(pSVar8->klass->vtable)._9_SetUnhandledAttributes.methodPtr)(pSVar8);
              if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
              }
              pSVar9 = MiscExtensions__ReverseString(pSVar9,(MethodInfo *)0x0);
              return pSVar9;
            }
          }
          else {
            pSVar7 = (*p_Var5)(a,category,pMVar4);
            if ((pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
               (pSVar8 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)(pSVar7,arg0),
               pSVar8 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
              pSVar9 = (System_String_o *)
                       (*(pSVar8->klass->vtable)._9_SetUnhandledAttributes.methodPtr)
                                 (pSVar8,(pSVar8->klass->vtable)._9_SetUnhandledAttributes.method);
              return pSVar9;
            }
          }
        }
      }
    }
  }
label_18230059b:
  ThrowNullReferenceException();
}


// UI.UIManager$$HasLocale
// il2cpp: bool UI_UIManager__HasLocale (System_String_o* category, System_String_o* subCategory, System_String_o* item, System_String_o* forcedLanguage, const MethodInfo* method);
// 0x182301730

bool UI_UIManager__HasLocale
               (System_String_o *category,System_String_o *subCategory,System_String_o *item,
               System_String_o *forcedLanguage,MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_Collections_Generic_Dictionary_string__JSONObject__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar3;
  SimpleJSONFixed_JSONObject_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_Xml_Schema_XmlSchema_o *a;
  
  if (Il2CppMethodInitialized_184347667 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184347667 = '\x01';
  }
  bVar3 = System_String__op_Inequality
                    (forcedLanguage,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                     (MethodInfo *)0x0);
  if (!bVar3) {
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    if ((pSVar1 == (Settings_GeneralSettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).Language, pSVar2 == (Settings_StringSetting_o *)0x0)) goto label_18230196d;
    forcedLanguage = (pSVar2->fields)._value;
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this = TypeInfo_UI_UIManager->static_fields->_languages;
  if (__this != (System_Collections_Generic_Dictionary_string__JSONObject__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                       (Il2CppObject *)forcedLanguage,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
    if (!bVar3) {
      return false;
    }
    bVar3 = System_String__op_Inequality
                      (item,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    if (bVar3) {
      subCategory = System_String__Concat_1969b70(subCategory,".",item,(MethodInfo *)0x0);
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_UI_UIManager->static_fields->_languages;
    if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pSVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (__this_00,(Il2CppObject *)forcedLanguage,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Item),
       pSVar4 != (SimpleJSONFixed_JSONObject_o *)0x0)) {
      pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar4,category,(pSVar4->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        return false;
      }
      pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar4,category,(pSVar4->klass->vtable)._7_get_Item.method);
      if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        a = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)subCategory);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        return bVar3;
      }
    }
  }
label_18230196d:
  ThrowNullReferenceException();
}


// UI.UIManager$$GetLocaleArray
// il2cpp: System_String_array* UI_UIManager__GetLocaleArray (System_String_o* category, System_String_o* subCategory, System_String_o* item, System_String_o* forcedLanguage, const MethodInfo* method);
// 0x1822ff890
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822ffadb: mov rsi, rdi
// asm:   0x1822ffca5: nop word ptr [rax + rax]

System_String_array *
UI_UIManager__GetLocaleArray
          (System_String_o *category,System_String_o *subCategory,System_String_o *item,
          System_String_o *forcedLanguage,MethodInfo *method)

{
  byte bVar1;
  Settings_GeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_Collections_Generic_Dictionary_string__JSONObject__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Xml_Schema_XmlSchema_c *pSVar4;
  UI_UIManager_o *pUVar5;
  SimpleJSONFixed_JSONNode_c *pSVar6;
  bool bVar7;
  SimpleJSONFixed_JSONObject_o *a;
  MethodInfo *pMVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_Xml_Schema_XmlSchema_o *pSVar10;
  System_Collections_Generic_List_string__o *__this_01;
  undefined8 *puVar11;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar12;
  System_String_o *pSVar13;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar14;
  System_String_array *pSVar15;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_e8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_98;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  undefined1 local_78 [96];
  
  if (Il2CppMethodInitialized_184347668 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"{0} locale error.");
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184347668 = '\x01';
  }
  local_e8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_e8.type = 0;
  local_e8._4_4_ = 0;
  local_e8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_e8.m_Object.fields._version = 0;
  local_e8.m_Object.fields._index = 0;
  local_e8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_e8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_e8.m_Object.fields._getEnumeratorRetType = 0;
  local_e8.m_Object.fields._36_4_ = 0;
  local_e8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_e8.m_Array.fields._index = 0;
  local_e8.m_Array.fields._version = 0;
  bVar7 = System_String__op_Inequality
                    (forcedLanguage,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                     (MethodInfo *)0x0);
  if (!bVar7) {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    if ((pSVar2 == (Settings_GeneralSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Language, pSVar3 == (Settings_StringSetting_o *)0x0)) goto label_1822ffecc;
    forcedLanguage = (pSVar3->fields)._value;
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this = TypeInfo_UI_UIManager->static_fields->_languages;
  if (__this == (System_Collections_Generic_Dictionary_string__JSONObject__o *)0x0) goto label_1822ffecc;
  a = (SimpleJSONFixed_JSONObject_o *)0x0;
  bVar7 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                     (Il2CppObject *)forcedLanguage,
                     (MethodInfo_1455450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
  if (bVar7) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_UI_UIManager->static_fields->_languages;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1822ffecc;
    a = System_Collections_Generic_Dictionary_object__object___get_Item
                  (__this_00,(Il2CppObject *)forcedLanguage,
                   (MethodInfo_147A5B0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Item);
  }
  bVar7 = System_String__op_Inequality
                    (item,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  pMVar8 = (MethodInfo *)subCategory;
  if (bVar7) {
    pMVar8 = (MethodInfo *)
             System_String__Concat_1969b70(subCategory,".",item,(MethodInfo *)0x0);
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar7) {
    if (a == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_1822ffecc;
    pSVar9 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,category,(a->klass->vtable)._7_get_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar7) {
      pSVar9 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,category,(a->klass->vtable)._7_get_Item.method);
      if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_1822ffecc;
      pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)(pSVar9,pMVar8);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar7 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar7) {
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
                   (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
        pSVar9 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,category,(a->klass->vtable)._7_get_Item.method)
        ;
        if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
           (pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)(pSVar9,pMVar8),
           pSVar10 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
          pSVar4 = pSVar10->klass;
          bVar1 = (TypeInfo_SimpleJSONFixed_JSONArray->_2).typeHierarchyDepth;
          if (((pSVar4->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar10,TypeInfo_SimpleJSONFixed_JSONArray);
          }
          puVar11 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar4)->vtable[32].methodPtr)(local_78);
          local_e8._0_8_ = *puVar11;
          local_e8.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar11[1];
          local_e8.m_Object.fields._8_8_ = puVar11[2];
          local_e8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar11[3];
          local_e8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar11[4];
          local_e8.m_Object.fields._32_8_ = puVar11[5];
          local_e8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar11[6];
          local_e8.m_Array.fields._8_8_ = puVar11[7];
          local_e8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar11[8];
          bVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_e8,(MethodInfo *)0x0);
          if (bVar7) {
            do {
              pSVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                  (&local_88,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_e8,
                                   (MethodInfo *)0x0);
              pSVar13 = (pSVar12->fields).key;
              pSVar9 = (pSVar12->fields).value;
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              local_98.fields.key = pSVar13;
              local_98.fields.value = pSVar9;
              pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_98,(MethodInfo *)0x0);
              if (pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                bVar1 = (TypeInfo_SimpleJSONFixed_JSONString->_2).typeHierarchyDepth;
                if (((pSVar9->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((pSVar9->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pSVar9);
                }
              }
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pUVar5 = TypeInfo_UI_UIManager->static_fields->_instance;
              if ((pUVar5 == (UI_UIManager_o *)0x0) ||
                 (bVar7 = System_String__op_Equality
                                    (forcedLanguage,(pUVar5->fields)._arabicLanguageName,(MethodInfo *)0x0),
                 pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_1822ffecc;
              pSVar6 = pSVar9->klass;
              pMVar8 = (pSVar6->vtable)._9_get_Value.method;
              if (bVar7) {
                pSVar13 = (*(pSVar6->vtable)._9_get_Value.methodPtr)(pSVar9,pMVar8);
                if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
                }
                MiscExtensions__ReverseString(pSVar13,(MethodInfo *)0x0);
              }
              else {
                (*(pSVar6->vtable)._9_get_Value.methodPtr)(pSVar9,pMVar8);
              }
              if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_1822ffecc;
              il2cpp_runtime_helper_180012890(__this_01);
              bVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_e8,(MethodInfo *)0x0);
            } while (bVar7);
          }
          if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
            pUVar14 = System_Collections_Generic_List_object___ToArray
                                ((System_Collections_Generic_List_T__o *)__this_01,
                                 (MethodInfo_929FE0 *)
                                 MethodInfo_System_Collections_Generic_List_string_ToArray);
            return (System_String_array *)pUVar14;
          }
        }
        goto label_1822ffecc;
      }
    }
  }
  bVar7 = System_String__op_Equality(forcedLanguage,"English",(MethodInfo *)0x0);
  if (bVar7) {
    pSVar15 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
    pSVar13 = System_String__Format("{0} locale error.",(Il2CppObject *)pMVar8,(MethodInfo *)0x0);
    if (pSVar15 == (System_String_array *)0x0) {
label_1822ffecc:
      ThrowNullReferenceException();
    }
    if ((int)pSVar15->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar15->m_Items[0] = pSVar13;
    Il2CppCodeGenWriteBarrier(pSVar15->m_Items,pSVar13);
  }
  else {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar15 = UI_UIManager__GetLocaleArray(category,subCategory,item,"English",(MethodInfo *)0x0);
  }
  return pSVar15;
}


// UI.UIManager$$GetLocaleCommon
// il2cpp: System_String_o* UI_UIManager__GetLocaleCommon (System_String_o* item, const MethodInfo* method);
// 0x182300030

System_String_o * UI_UIManager__GetLocaleCommon(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347669 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347669 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("Common",item,"","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.UIManager$$GetLocaleCommonArray
// il2cpp: System_String_array* UI_UIManager__GetLocaleCommonArray (System_String_o* item, const MethodInfo* method);
// 0x1822fffb0

System_String_array * UI_UIManager__GetLocaleCommonArray(System_String_o *item,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_18434766a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434766a = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleArray
                     ("Common",item,"","",(MethodInfo *)0x0
                     );
  return pSVar1;
}


// UI.UIManager$$GetLocaleCategoryStrings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__string___o* UI_UIManager__GetLocaleCategoryStrings (System_String_o* pattern, const MethodInfo* method);
// 0x1822ffef0

System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *
UI_UIManager__GetLocaleCategoryStrings(System_String_o *pattern,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *pSVar2;
  System_String_o *category;
  
  if (Il2CppMethodInitialized_18434766b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"internal://");
    Il2CppMethodInitialized_18434766b = '\x01';
  }
  if (pattern != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(pattern,"internal://",(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar2 = UI_UIManager__GetExternalLocaleCategoryStrings(pattern,(MethodInfo *)0x0);
      return pSVar2;
    }
    if ("internal://" != (System_String_o *)0x0) {
      category = System_String__Substring
                           (pattern,("internal://"->fields)._stringLength,(MethodInfo *)0x0);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar2 = UI_UIManager__GetInternalLocaleCategoryStrings(category,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.UIManager$$GetInternalLocaleCategoryStrings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__string___o* UI_UIManager__GetInternalLocaleCategoryStrings (System_String_o* category, const MethodInfo* method);
// 0x1822ff030
// eh: try 0x1822ff220..0x1822ff54d -> pad 0x183316f00 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822ff4d5: mov rdx, qword ptr [rip + 0x1dbd0e4]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONObject_Dispose
// asm:   0x1822ff4dc: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822ff4e1: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822ff4e6: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1822ff4eb: test rcx, rcx
// asm:   0x1822ff4ee: jne 0x1822ff54d
// asm:   0x1822ff4f0: mov rdi, qword ptr [rsp + 0x198]
// asm:   0x1822ff54d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183316f00: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183316f05: push rbp
// asm:   0x183316f06: sub rsp, 0x20
// asm:   0x183316f0a: mov rbp, rdx
// asm:   0x183316f0d: mov rax, qword ptr [rbp + 0x100]
// asm:   0x183316f14: mov rcx, qword ptr [rax]
// asm:   0x183316f17: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183316f1b: movabs rax, 0
// asm:   0x183316f25: add rsp, 0x20
// asm:   0x183316f29: pop rbp
// asm:   0x183316f2a: ret 

System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *
UI_UIManager__GetInternalLocaleCategoryStrings(System_String_o *category,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONObject__o *__this;
  UI_UIManager_o *pUVar1;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar2;
  System_String_o *a;
  Il2CppObject *pIVar3;
  bool bVar4;
  char cVar5;
  System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *__this_00;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  SimpleJSONFixed_JSONNode_o *__this_02;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar6;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar7;
  System_String_o *key;
  longlong *plVar8;
  System_String_o *s;
  undefined1 local_148 [8];
  uint64_t uStack_140;
  System_String_o *local_138;
  Il2CppObject *pIStack_130;
  Il2CppObject *local_128;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_118;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  undefined1 local_70 [24];
  Il2CppObject *pIStack_58;
  Il2CppObject *local_50;
  
  if (Il2CppMethodInitialized_18434766c == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_18434766c = '\x01';
  }
  local_148 = (undefined1  [8])0x0;
  uStack_140 = 0;
  local_138 = (System_String_o *)0x0;
  pIStack_130 = (Il2CppObject *)0x0;
  local_128 = (Il2CppObject *)0x0;
  local_118.type = 0;
  local_118._4_4_ = 0;
  local_118.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118.m_Object.fields._version = 0;
  local_118.m_Object.fields._index = 0;
  local_118.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_118.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_118.m_Object.fields._getEnumeratorRetType = 0;
  local_118.m_Object.fields._36_4_ = 0;
  local_118.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_118.m_Array.fields._index = 0;
  local_118.m_Array.fields._version = 0;
  local_118.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_c8.type = 0;
  local_c8._4_4_ = 0;
  local_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.m_Object.fields._version = 0;
  local_c8.m_Object.fields._index = 0;
  local_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._getEnumeratorRetType = 0;
  local_c8.m_Object.fields._36_4_ = 0;
  local_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.m_Array.fields._index = 0;
  local_c8.m_Array.fields._version = 0;
  local_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_ctor);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this = TypeInfo_UI_UIManager->static_fields->_languages;
  if (__this == (System_Collections_Generic_Dictionary_string__JSONObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_70,
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_13C1150 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_GetEnumerator);
  local_148 = (undefined1  [8])local_70._0_8_;
  uStack_140 = local_70._8_8_;
  local_138 = (System_String_o *)local_70._16_8_;
  pIStack_130 = pIStack_58;
  local_128 = local_50;
  do {
    do {
      bVar4 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_148,
                         (MethodInfo_1585360 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONObject_MoveNext
                        );
      pIVar3 = pIStack_130;
      a = local_138;
      if (!bVar4) {
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_148,
                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONObject_Dispose);
        return __this_00;
      }
      if (pIStack_130 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      cVar5 = (*pIStack_130->klass->vtable[0x1c].methodPtr)
                        (pIStack_130,category,pIStack_130->klass->vtable[0x1c].method);
    } while (cVar5 == '\0');
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
               (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    __this_02 = (SimpleJSONFixed_JSONNode_o *)(*pIVar3->klass->vtable[7].methodPtr)(pIVar3,category);
    if (__this_02 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = SimpleJSONFixed_JSONNode__get_Values
                       ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)local_70,__this_02,(MethodInfo *)0x0);
    local_c8.type = (pSVar6->fields).m_Enumerator.fields.type;
    local_c8._4_4_ = *(undefined4 *)&(pSVar6->fields).m_Enumerator.fields.field_0x4;
    local_c8.m_Object.fields._dictionary = (pSVar6->fields).m_Enumerator.fields.m_Object.fields._dictionary;
    pSVar2 = &(pSVar6->fields).m_Enumerator;
    local_c8.m_Object.fields._version = (pSVar2->fields).m_Object.fields._version;
    local_c8.m_Object.fields._index = (pSVar2->fields).m_Object.fields._index;
    local_c8.m_Object.fields._current.fields.key =
         (pSVar6->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
    local_c8.m_Object.fields._current.fields.value =
         (pSVar6->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
    pSVar2 = &(pSVar6->fields).m_Enumerator;
    local_c8.m_Object.fields._getEnumeratorRetType = (pSVar2->fields).m_Object.fields._getEnumeratorRetType;
    local_c8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar2->fields).m_Object.fields.field_0x24;
    local_c8.m_Array.fields._list = (pSVar6->fields).m_Enumerator.fields.m_Array.fields._list;
    pSVar2 = &(pSVar6->fields).m_Enumerator;
    local_c8.m_Array.fields._index = (pSVar2->fields).m_Array.fields._index;
    local_c8.m_Array.fields._version = (pSVar2->fields).m_Array.fields._version;
    local_c8.m_Array.fields._current = (pSVar6->fields).m_Enumerator.fields.m_Array.fields._current;
    pSVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                       ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)local_70,
                        (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,(MethodInfo *)0x0);
    local_118.type = (pSVar7->fields).m_Enumerator.fields.type;
    local_118._4_4_ = *(undefined4 *)&(pSVar7->fields).m_Enumerator.fields.field_0x4;
    local_118.m_Object.fields._dictionary = (pSVar7->fields).m_Enumerator.fields.m_Object.fields._dictionary;
    pSVar2 = &(pSVar7->fields).m_Enumerator;
    local_118.m_Object.fields._version = (pSVar2->fields).m_Object.fields._version;
    local_118.m_Object.fields._index = (pSVar2->fields).m_Object.fields._index;
    local_118.m_Object.fields._current.fields.key =
         (pSVar7->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
    local_118.m_Object.fields._current.fields.value =
         (pSVar7->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
    pSVar2 = &(pSVar7->fields).m_Enumerator;
    local_118.m_Object.fields._getEnumeratorRetType = (pSVar2->fields).m_Object.fields._getEnumeratorRetType;
    local_118.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar2->fields).m_Object.fields.field_0x24;
    local_118.m_Array.fields._list = (pSVar7->fields).m_Enumerator.fields.m_Array.fields._list;
    pSVar2 = &(pSVar7->fields).m_Enumerator;
    local_118.m_Array.fields._index = (pSVar2->fields).m_Array.fields._index;
    local_118.m_Array.fields._version = (pSVar2->fields).m_Array.fields._version;
    local_118.m_Array.fields._current = (pSVar7->fields).m_Enumerator.fields.m_Array.fields._current;
    while( true ) {
      bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
      if (!bVar4) break;
      key = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
      plVar8 = (longlong *)
               (*pIVar3->klass->vtable[7].methodPtr)(pIVar3,category,pIVar3->klass->vtable[7].method);
      if (plVar8 == (longlong *)0x0) {
        ThrowNullReferenceException();
      }
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x1a8))(plVar8,key,*(undefined8 *)(*plVar8 + 0x1b0));
      if (plVar8 == (longlong *)0x0) {
        ThrowNullReferenceException();
      }
      cVar5 = (**(code **)(*plVar8 + 0x208))(plVar8);
      if (cVar5 != '\0') {
        plVar8 = (longlong *)
                 (*pIVar3->klass->vtable[7].methodPtr)(pIVar3,category,pIVar3->klass->vtable[7].method);
        if (plVar8 == (longlong *)0x0) {
          ThrowNullReferenceException();
        }
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x1a8))(plVar8,key);
        if (plVar8 == (longlong *)0x0) {
          ThrowNullReferenceException();
        }
        s = (System_String_o *)(**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar1 = TypeInfo_UI_UIManager->static_fields->_instance;
        if (pUVar1 == (UI_UIManager_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar4 = System_String__op_Equality(a,(pUVar1->fields)._arabicLanguageName,(MethodInfo *)0x0);
        if (bVar4) {
          if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
          }
          s = MiscExtensions__ReverseString(s,(MethodInfo *)0x0);
        }
        if (__this_01 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,(Il2CppObject *)key,
                   (Il2CppObject *)s,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
      }
    }
    if (__this_00 == (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)a,
               (Il2CppObject *)__this_01,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item);
  } while( true );
}


// UI.UIManager$$GetExternalLocaleCategoryStrings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__string___o* UI_UIManager__GetExternalLocaleCategoryStrings (System_String_o* uniqueName, const MethodInfo* method);
// 0x1822fe960
// eh: try 0x1822feb52..0x1822fef7c -> pad 0x183340240 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 72 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822feb1f: mov qword ptr [rsp + 0x40], rsi
// asm:   0x1822feb24: mov qword ptr [rsp + 0x48], rax
// asm:   0x1822fee1e: jmp 0x1822feed1
// asm:   0x1822fee23: mov esi, dword ptr [rsp + 0x38]
// asm:   0x1822fee27: lea eax, [rsi - 1]
// asm:   0x1822fee2a: movsxd rcx, eax
// asm:   0x1822fee2d: mov rcx, qword ptr [rsp + rcx*8 + 0x30]
// asm:   0x1822fee32: test rcx, rcx
// asm:   0x1822fee35: je 0x1822fefd6
// asm:   0x1822fee3b: mov rax, qword ptr [rcx]
// asm:   0x1822fee3e: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1822fee45: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1822fee4b: mov rdi, rax
// asm:   0x1822fee4e: lea rcx, [rip + 0x1df8713]  ; ": "
// asm:   0x1822fee55: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1822fee5a: mov rbx, rax
// asm:   0x1822fee5d: lea rcx, [rip + 0x1de5e6c]  ; "Failed to load external locale file "
// asm:   0x1822fee64: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1822fee69: mov rcx, rax
// asm:   0x1822fee6c: xor r15d, r15d
// asm:   0x1822fee6f: mov qword ptr [rsp + 0x20], r15
// asm:   0x1822fee74: mov r9, rdi
// asm:   0x1822fee77: mov r8, rbx
// asm:   0x1822fee7a: mov rdx, qword ptr [rsp + 0x1a8]
// asm:   0x1822fee82: call 0x181969590  ; System_String__Concat()
// asm:   0x1822fee87: mov rbx, rax
// asm:   0x1822fee8a: lea rcx, [rip + 0x1dfc5a7]  ; TypeInfo_UnityEngine_Debug
// asm:   0x1822fee91: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1822fee96: cmp dword ptr [rax + 0xe4], r15d
// asm:   0x1822fee9d: jne 0x1822feea7
// asm:   0x1822fee9f: mov rcx, rax
// asm:   0x1822feea2: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x1822feea7: xor edx, edx
// asm:   0x1822feea9: mov rcx, rbx
// asm:   0x1822feeac: call 0x182ec3130  ; UnityEngine_Debug__LogError()
// asm:   0x1822feeb1: dec esi
// asm:   0x1822feeb3: mov dword ptr [rsp + 0x38], esi
// asm:   0x1822feeb7: mov rsi, qword ptr [rsp + 0x40]
// asm:   0x1822feebc: mov qword ptr [rsp + 0x1a0], rsi
// asm:   0x1822feec4: mov r12, qword ptr [rsp + 0x48]
// asm:   0x1822feec9: mov r15d, dword ptr [rsp + 0x190]
// asm:   0x183340240: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340245: push rbx
// asm:   0x183340246: push rbp
// asm:   0x183340247: push rdi
// asm:   0x183340248: sub rsp, 0x30
// asm:   0x18334024c: mov rbp, rdx
// asm:   0x18334024f: mov rdi, qword ptr [rbp + 0x100]
// asm:   0x183340256: mov rax, qword ptr [rdi]
// asm:   0x183340259: mov rbx, qword ptr [rax]
// asm:   0x18334025c: lea rcx, [rip + 0xd38cf5]  ; TypeInfo_System_Exception
// asm:   0x183340263: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183340268: mov rcx, rax
// asm:   0x18334026b: mov rdx, rbx
// asm:   0x18334026e: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183340273: test al, al
// asm:   0x183340275: mov rax, qword ptr [rdi]
// asm:   0x183340278: je 0x183340292
// asm:   0x18334027a: movsxd rcx, dword ptr [rbp + 0x38]
// asm:   0x18334027e: mov qword ptr [rbp + rcx*8 + 0x30], rax
// asm:   0x183340283: inc dword ptr [rbp + 0x38]
// asm:   0x183340286: movabs rax, 0
// asm:   0x183340290: jmp 0x1833402a7
// asm:   0x183340292: mov qword ptr [rbp + 0x50], rax
// asm:   0x183340296: lea rdx, [rip + 0xc9bceb]
// asm:   0x18334029d: lea rcx, [rbp + 0x50]
// asm:   0x1833402a1: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833402a7: add rsp, 0x30
// asm:   0x1833402ab: pop rdi
// asm:   0x1833402ac: pop rbp
// asm:   0x1833402ad: pop rbx
// asm:   0x1833402ae: ret 

System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *
UI_UIManager__GetExternalLocaleCategoryStrings(System_String_o *uniqueName,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  SimpleJSONFixed_JSONNode_c *pSVar3;
  System_Xml_Schema_XmlSchema_c *pSVar4;
  UI_UIManager_o *pUVar5;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar6;
  bool bVar7;
  System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *__this;
  System_String_o *pSVar8;
  System_String_array *pSVar9;
  SimpleJSONFixed_JSONNode_o *__this_00;
  System_Xml_Schema_XmlSchema_o *pSVar10;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar11;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar12;
  MethodInfo *pMVar13;
  System_Xml_Schema_XmlSchemaObject_o *pSVar14;
  System_String_o *pSVar15;
  Il2CppClass *pIVar16;
  System_Exception_o *pSVar17;
  uint uVar18;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_128;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_80;
  
  if (Il2CppMethodInitialized_18434766d == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"*.json");
    Il2CppMethodInitialized_18434766d = '\x01';
  }
  local_128.type = 0;
  local_128._4_4_ = 0;
  local_128.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_128.m_Object.fields._version = 0;
  local_128.m_Object.fields._index = 0;
  local_128.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_128.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_128.m_Object.fields._getEnumeratorRetType = 0;
  local_128.m_Object.fields._36_4_ = 0;
  local_128.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_128.m_Array.fields._index = 0;
  local_128.m_Array.fields._version = 0;
  local_128.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  uVar18 = 0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_ctor);
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar8 = System_String__Concat_1969b70
                     (TypeInfo_Utility_FolderPaths->static_fields->CustomLocale,"/",
                      uniqueName,(MethodInfo *)0x0);
  bVar7 = System_IO_Directory__Exists(pSVar8,(MethodInfo *)0x0);
  if (!bVar7) {
    pSVar15 = il2cpp_codegen_get_runtime_metadata(&"Failed to find localization files: ");
    pSVar8 = System_String__Concat_1969e50(pSVar15,pSVar8,(MethodInfo *)0x0);
    pIVar16 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    pSVar17 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar16);
    System_Exception___ctor_1b6abf0(pSVar17,pSVar8,(MethodInfo *)0x0);
    pMVar13 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_UIManager_GetExternalLocaleCategoryStrings);
    il2cpp_codegen_raise_exception((Il2CppObject *)pSVar17,pMVar13);
  }
  pSVar9 = System_IO_Directory__GetFiles(pSVar8,"*.json",(MethodInfo *)0x0);
  if (pSVar9 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (pSVar9->max_length == 0) {
    pSVar15 = il2cpp_codegen_get_runtime_metadata(&"Failed to find localization files: ");
    pSVar8 = System_String__Concat_1969e50(pSVar15,pSVar8,(MethodInfo *)0x0);
    pIVar16 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    pSVar17 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar16);
    System_Exception___ctor_1b6abf0(pSVar17,pSVar8,(MethodInfo *)0x0);
    pMVar13 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_UIManager_GetExternalLocaleCategoryStrings);
    il2cpp_codegen_raise_exception((Il2CppObject *)pSVar17,pMVar13);
  }
  while( true ) {
    uVar1 = (uint)pSVar9->max_length;
    if ((int)uVar1 <= (int)uVar18) {
      return __this;
    }
    if (uVar1 <= uVar18) {
      ThrowIndexOutOfRangeException();
    }
    pSVar8 = System_IO_File__ReadAllText(pSVar9->m_Items[(int)uVar18],(MethodInfo *)0x0);
    __this_00 = SimpleJSONFixed_JSON__Parse(pSVar8,(MethodInfo *)0x0);
    if (__this_00 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = __this_00->klass;
    bVar2 = (TypeInfo_SimpleJSONFixed_JSONObject->_2).typeHierarchyDepth;
    if (((pSVar3->_2).typeHierarchyDepth < bVar2) ||
       ((pSVar3->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject
       )) break;
    bVar7 = (*(pSVar3->vtable)._28_HasKey.methodPtr)(__this_00,(MethodInfo *)"Name");
    if (bVar7) {
      pSVar10 = (*(__this_00->klass->vtable)._7_get_Item.methodPtr)
                          (__this_00,(MethodInfo *)"Name");
      if (pSVar10 == (System_Xml_Schema_XmlSchema_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar4 = pSVar10->klass;
      pSVar8 = (System_String_o *)
               (*(pSVar4->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar10,(UnityEngine_GameObject_o *)
                                  (pSVar4->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar4);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                 (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
      pSVar11 = SimpleJSONFixed_JSONNode__get_Values(&local_80,__this_00,(MethodInfo *)0x0);
      local_d8.type = (pSVar11->fields).m_Enumerator.fields.type;
      local_d8._4_4_ = *(undefined4 *)&(pSVar11->fields).m_Enumerator.fields.field_0x4;
      local_d8.m_Object.fields._dictionary = (pSVar11->fields).m_Enumerator.fields.m_Object.fields._dictionary
      ;
      pSVar6 = &(pSVar11->fields).m_Enumerator;
      local_d8.m_Object.fields._version = (pSVar6->fields).m_Object.fields._version;
      local_d8.m_Object.fields._index = (pSVar6->fields).m_Object.fields._index;
      local_d8.m_Object.fields._current.fields.key =
           (pSVar11->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      local_d8.m_Object.fields._current.fields.value =
           (pSVar11->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
      pSVar6 = &(pSVar11->fields).m_Enumerator;
      local_d8.m_Object.fields._getEnumeratorRetType = (pSVar6->fields).m_Object.fields._getEnumeratorRetType;
      local_d8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar6->fields).m_Object.fields.field_0x24;
      local_d8.m_Array.fields._list = (pSVar11->fields).m_Enumerator.fields.m_Array.fields._list;
      pSVar6 = &(pSVar11->fields).m_Enumerator;
      local_d8.m_Array.fields._index = (pSVar6->fields).m_Array.fields._index;
      local_d8.m_Array.fields._version = (pSVar6->fields).m_Array.fields._version;
      local_d8.m_Array.fields._current = (pSVar11->fields).m_Enumerator.fields.m_Array.fields._current;
      pSVar12 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_80,
                           (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      local_128.type = (pSVar12->fields).m_Enumerator.fields.type;
      local_128._4_4_ = *(undefined4 *)&(pSVar12->fields).m_Enumerator.fields.field_0x4;
      local_128.m_Object.fields._dictionary =
           (pSVar12->fields).m_Enumerator.fields.m_Object.fields._dictionary;
      pSVar6 = &(pSVar12->fields).m_Enumerator;
      local_128.m_Object.fields._version = (pSVar6->fields).m_Object.fields._version;
      local_128.m_Object.fields._index = (pSVar6->fields).m_Object.fields._index;
      local_128.m_Object.fields._current.fields.key =
           (pSVar12->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      local_128.m_Object.fields._current.fields.value =
           (pSVar12->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
      pSVar6 = &(pSVar12->fields).m_Enumerator;
      local_128.m_Object.fields._getEnumeratorRetType = (pSVar6->fields).m_Object.fields._getEnumeratorRetType
      ;
      local_128.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar6->fields).m_Object.fields.field_0x24;
      local_128.m_Array.fields._list = (pSVar12->fields).m_Enumerator.fields.m_Array.fields._list;
      pSVar6 = &(pSVar12->fields).m_Enumerator;
      local_128.m_Array.fields._index = (pSVar6->fields).m_Array.fields._index;
      local_128.m_Array.fields._version = (pSVar6->fields).m_Array.fields._version;
      local_128.m_Array.fields._current = (pSVar12->fields).m_Enumerator.fields.m_Array.fields._current;
      while (bVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                               ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_128,(MethodInfo *)0x0),
            bVar7) {
        pMVar13 = (MethodInfo *)
                  SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_128,(MethodInfo *)0x0);
        bVar7 = System_String__op_Equality((System_String_o *)pMVar13,"Name",(MethodInfo *)0x0)
        ;
        if (!bVar7) {
          pSVar10 = (*(__this_00->klass->vtable)._7_get_Item.methodPtr)(__this_00,pMVar13);
          if (pSVar10 == (System_Xml_Schema_XmlSchema_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar14 = (*(pSVar10->klass->vtable)._13_Clone.methodPtr)
                              (pSVar10,(pSVar10->klass->vtable)._13_Clone.method);
          if ((char)pSVar14 != '\0') {
            pSVar10 = (*(__this_00->klass->vtable)._7_get_Item.methodPtr)(__this_00,pMVar13);
            if (pSVar10 == (System_Xml_Schema_XmlSchema_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar4 = pSVar10->klass;
            pSVar15 = (System_String_o *)
                      (*(pSVar4->vtable)._9_SetUnhandledAttributes.methodPtr)
                                (pSVar10,(UnityEngine_GameObject_o *)
                                         (pSVar4->vtable)._9_SetUnhandledAttributes.method,
                                 (MethodInfo *)pSVar4);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pUVar5 = TypeInfo_UI_UIManager->static_fields->_instance;
            if (pUVar5 == (UI_UIManager_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar7 = System_String__op_Equality(pSVar8,(pUVar5->fields)._arabicLanguageName,(MethodInfo *)0x0);
            if (bVar7) {
              if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
              }
              pSVar15 = MiscExtensions__ReverseString(pSVar15,(MethodInfo *)0x0);
            }
            if (__this_01 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                       (Il2CppObject *)pMVar13,(Il2CppObject *)pSVar15,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
          }
        }
      }
      if (__this == (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)__this,(Il2CppObject *)pSVar8,
                 (Il2CppObject *)__this_01,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item);
    }
    uVar18 = uVar18 + 1;
  }
  il2cpp_codegen_raise_invalid_cast_exception(__this_00);
}


// UI.UIManager$$GetLanguages
// il2cpp: System_String_array* UI_UIManager__GetLanguages (const MethodInfo* method);
// 0x1822ff560
// eh: try 0x1822ff6d0..0x1822ff7a2 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822ff6c9: nop dword ptr [rax]
// asm:   0x1822ff749: mov rdx, qword ptr [rip + 0x1dbd110]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_Dispose
// asm:   0x1822ff750: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822ff755: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822ff75a: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822ff75f: test rcx, rcx
// asm:   0x1822ff762: jne 0x1822ff7a2
// asm:   0x1822ff764: mov rdi, qword ptr [rsp + 0x78]
// asm:   0x1822ff7a2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

System_String_array * UI_UIManager__GetLanguages(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONObject__o *__this;
  System_String_o *item;
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar2;
  undefined1 local_40 [16];
  System_String_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  System_String_o *local_18;
  
  if (Il2CppMethodInitialized_18434766e == '\0') {
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
    Il2CppMethodInitialized_18434766e = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (System_String_o *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this = TypeInfo_UI_UIManager->static_fields->_languages;
  if (__this != (System_Collections_Generic_Dictionary_string__JSONObject__o *)0x0) {
    __this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                           (MethodInfo_13C6500 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Keys);
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_40,
                 __this_01,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_JSONObject_GetEnumerator
                );
      local_28 = (undefined1  [8])local_40._0_8_;
      pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
      local_18 = local_30;
      local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
      while( true ) {
        bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           local_28,(MethodInfo_156BDD0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_MoveNext
                          );
        item = local_18;
        if (!bVar1) break;
        bVar1 = System_String__op_Equality(local_18,"English",(MethodInfo *)0x0);
        if (bVar1) {
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_List_object___Insert
                    ((System_Collections_Generic_List_object__o *)__this_00,0,(Il2CppObject *)item,
                     (MethodInfo_945FE0 *)MethodInfo_System_Collections_Generic_List_string_Insert);
        }
        else {
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(__this_00,item);
        }
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_Dispose
                );
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        pUVar2 = System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_T__o *)__this_00,
                            (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return (System_String_array *)pUVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.UIManager$$LoadLanguages
// il2cpp: void UI_UIManager__LoadLanguages (const MethodInfo* method);
// 0x182301bc0

void UI_UIManager__LoadLanguages(MethodInfo *method)

{
  byte bVar1;
  System_String_o *path;
  System_Collections_Generic_Dictionary_string__JSONObject__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UI_UIManager_o *pUVar3;
  Settings_GeneralSettings_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  bool bVar6;
  System_String_array *pSVar7;
  System_String_o *pSVar8;
  Il2CppObject *value;
  SimpleJSONFixed_JSONNode_o *d;
  longlong *plVar9;
  uint uVar10;
  
  if (Il2CppMethodInitialized_18434766f == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"Arabic");
    il2cpp_codegen_initialize_runtime_metadata(&"*.json");
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_18434766f = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  bVar6 = System_IO_Directory__Exists
                    (TypeInfo_Utility_FolderPaths->static_fields->LanguagesPath,(MethodInfo *)0x0);
  if (!bVar6) {
    if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
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
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar7 = System_IO_Directory__GetFiles
                     (TypeInfo_Utility_FolderPaths->static_fields->LanguagesPath,"*.json",
                      (MethodInfo *)0x0);
  if (pSVar7 != (System_String_array *)0x0) {
    for (uVar10 = 0; (int)uVar10 < (int)pSVar7->max_length; uVar10 = uVar10 + 1) {
      if ((uint)pSVar7->max_length <= uVar10) {
        ThrowIndexOutOfRangeException();
      }
      path = pSVar7->m_Items[(int)uVar10];
      pSVar8 = System_IO_File__ReadAllText(path,(MethodInfo *)0x0);
      value = (Il2CppObject *)SimpleJSONFixed_JSON__Parse(pSVar8,(MethodInfo *)0x0);
      if (value != (Il2CppObject *)0x0) {
        bVar1 = (TypeInfo_SimpleJSONFixed_JSONObject->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
           ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      if (value == (Il2CppObject *)0x0) goto label_18230205d;
      pSVar2 = TypeInfo_UI_UIManager->static_fields->_languages;
      d = (SimpleJSONFixed_JSONNode_o *)
          (*value->klass->vtable[7].methodPtr)(value,"Name",value->klass->vtable[7].method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450(d,(MethodInfo *)0x0);
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__JSONObject__o *)0x0) goto label_18230205d;
      bVar6 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                         (Il2CppObject *)pSVar8,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
      if (!bVar6) {
        plVar9 = (longlong *)
                 (*value->klass->vtable[7].methodPtr)
                           (value,"Name",value->klass->vtable[7].method);
        if (plVar9 == (longlong *)0x0) goto label_18230205d;
        pSVar8 = (System_String_o *)(**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        __this = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_UI_UIManager->static_fields->_languages;
        if ((__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (System_Collections_Generic_Dictionary_object__object___Add
                      (__this,(Il2CppObject *)pSVar8,value,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_Add),
           path == (System_String_o *)0x0)) goto label_18230205d;
        bVar6 = System_String__Contains(path,"Arabic",(MethodInfo *)0x0);
        if (bVar6) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar3 = TypeInfo_UI_UIManager->static_fields->_instance;
          if (pUVar3 == (UI_UIManager_o *)0x0) goto label_18230205d;
          (pUVar3->fields)._arabicLanguageName = pSVar8;
          Il2CppCodeGenWriteBarrier(&(pUVar3->fields)._arabicLanguageName,pSVar8);
        }
      }
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    if (((pSVar4 != (Settings_GeneralSettings_o *)0x0) &&
        (pSVar5 = (pSVar4->fields).Language, pSVar5 != (Settings_StringSetting_o *)0x0)) &&
       (pSVar2 = TypeInfo_UI_UIManager->static_fields->_languages,
       pSVar2 != (System_Collections_Generic_Dictionary_string__JSONObject__o *)0x0)) {
      bVar6 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                         (Il2CppObject *)(pSVar5->fields)._value,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
      if (bVar6) {
        return;
      }
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
      if ((pSVar4 != (Settings_GeneralSettings_o *)0x0) &&
         (pSVar5 = (pSVar4->fields).Language, pSVar5 != (Settings_StringSetting_o *)0x0)) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)"English",
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
        if (pSVar4 != (Settings_GeneralSettings_o *)0x0) {
          (*(pSVar4->klass->vtable)._18_Save.methodPtr)(pSVar4,(pSVar4->klass->vtable)._18_Save.method);
          return;
        }
      }
    }
  }
label_18230205d:
  ThrowNullReferenceException();
}


// UI.UIManager$$GetThemeColor
// il2cpp: UnityEngine_Color_o UI_UIManager__GetThemeColor (System_String_o* panel, System_String_o* category, System_String_o* item, System_String_o* fallbackPanel, const MethodInfo* method);
// 0x182300870
// eh: try 0x182300b5a..0x182300f95 -> pad 0x1833402d0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 46 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182300ddd: lea rcx, [rip + 0x1d95f2c]  ; "{0} {1} {2} theme error."
// asm:   0x182300de4: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182300de9: mov rcx, rax
// asm:   0x182300dec: mov qword ptr [rsp + 0x20], 0
// asm:   0x182300df5: mov r9, qword ptr [rsp + 0x198]
// asm:   0x182300dfd: mov r8, qword ptr [rsp + 0x190]
// asm:   0x182300e05: mov rdx, qword ptr [rsp + 0x188]
// asm:   0x182300e0d: call 0x18196d050  ; System_String__Format()
// asm:   0x182300e12: mov rbx, rax
// asm:   0x182300e15: lea rcx, [rip + 0x1dfa61c]  ; TypeInfo_UnityEngine_Debug
// asm:   0x182300e1c: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182300e21: cmp dword ptr [rax + 0xe4], 0
// asm:   0x182300e28: jne 0x182300e32
// asm:   0x182300e2a: mov rcx, rax
// asm:   0x182300e2d: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x182300e32: xor edx, edx
// asm:   0x182300e34: mov rcx, rbx
// asm:   0x182300e37: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x182300e3c: movss xmm6, dword ptr [rip + 0x1057dc4]
// asm:   0x182300e44: movaps xmm8, xmm6
// asm:   0x182300e48: movaps xmm7, xmm6
// asm:   0x182300e4b: movaps xmm0, xmm6
// asm:   0x182300e4e: mov rdi, qword ptr [rsp + 0x180]
// asm:   0x1833402d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833402d5: push rbx
// asm:   0x1833402d6: push rbp
// asm:   0x1833402d7: sub rsp, 0x38
// asm:   0x1833402db: mov rbp, rdx
// asm:   0x1833402de: mov rbx, qword ptr [rbp + 0x90]
// asm:   0x1833402e5: mov rdx, qword ptr [rbx]
// asm:   0x1833402e8: mov rdx, qword ptr [rdx]
// asm:   0x1833402eb: mov rcx, qword ptr [rip + 0x1014ade]
// asm:   0x1833402f2: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833402f7: test al, al
// asm:   0x1833402f9: je 0x183340307
// asm:   0x1833402fb: movabs rax, 0
// asm:   0x183340305: jmp 0x18334031f
// asm:   0x183340307: mov rax, qword ptr [rbx]
// asm:   0x18334030a: mov qword ptr [rbp + 0x30], rax
// asm:   0x18334030e: lea rdx, [rip + 0xc9bc73]
// asm:   0x183340315: lea rcx, [rbp + 0x30]
// asm:   0x183340319: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18334031f: add rsp, 0x38
// asm:   0x183340323: pop rbp
// asm:   0x183340324: pop rbx
// asm:   0x183340325: ret 

UnityEngine_Color_o *
UI_UIManager__GetThemeColor
          (UnityEngine_Color_o *__return_storage_ptr__,System_String_o *panel,System_String_o *category,
          System_String_o *item,System_String_o *fallbackPanel,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_string__JSONObject__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_c *pSVar4;
  SimpleJSONFixed_JSONNode_c *pSVar5;
  System_Single_array *pSVar6;
  MethodInfo *pMVar7;
  bool bVar8;
  SimpleJSONFixed_JSONObject_o *a;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_Xml_Schema_XmlSchema_o *pSVar10;
  System_Collections_Generic_List_float__o *__this_01;
  System_String_o *pSVar11;
  undefined8 *puVar12;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar13;
  UnityEngine_Color_o *pUVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_138;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_d8;
  UnityEngine_Color_o local_c8;
  undefined1 local_b8 [136];
  
  if (Il2CppMethodInitialized_184347670 == '\0') {
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
    Il2CppMethodInitialized_184347670 = '\x01';
  }
  local_138.type = 0;
  local_138._4_4_ = 0;
  local_138.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_138.m_Object.fields._version = 0;
  local_138.m_Object.fields._index = 0;
  local_138.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_138.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_138.m_Object.fields._getEnumeratorRetType = 0;
  local_138.m_Object.fields._36_4_ = 0;
  local_138.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_138.m_Array.fields._index = 0;
  local_138.m_Array.fields._version = 0;
  local_138.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this = TypeInfo_UI_UIManager->static_fields->_uiThemes;
  if (__this != (System_Collections_Generic_Dictionary_string__JSONObject__o *)0x0) {
    a = (SimpleJSONFixed_JSONObject_o *)0x0;
    bVar8 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                       (Il2CppObject *)TypeInfo_UI_UIManager->static_fields->_currentUITheme,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
    if (bVar8) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  TypeInfo_UI_UIManager->static_fields->_uiThemes;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182300f4f;
      a = System_Collections_Generic_Dictionary_object__object___get_Item
                    (__this_00,(Il2CppObject *)TypeInfo_UI_UIManager->static_fields->_currentUITheme,
                     (MethodInfo_147A5B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Item);
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar8) {
      if (a == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_182300f4f;
      pSVar9 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,panel,(a->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar8 = SimpleJSONFixed_JSONNode__op_Equality(pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar8) {
        pSVar9 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,panel,(a->klass->vtable)._7_get_Item.method);
        if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182300f4f;
        pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)(pSVar9,(MethodInfo *)category);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar8 = SimpleJSONFixed_JSONNode__op_Equality
                          ((SimpleJSONFixed_JSONNode_o *)pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (!bVar8) {
          pSVar9 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,panel,(a->klass->vtable)._7_get_Item.method);
          if ((pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
             (pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)(pSVar9,(MethodInfo *)category),
             pSVar10 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_182300f4f;
          pSVar9 = (SimpleJSONFixed_JSONNode_o *)
                   (*(pSVar10->klass->vtable)._7_get_IdAttribute.methodPtr)(pSVar10);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          bVar8 = SimpleJSONFixed_JSONNode__op_Equality(pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (!bVar8) {
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_float);
            System_Collections_Generic_List_float____ctor
                      ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
                       (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_float_ctor);
            pSVar9 = (*(a->klass->vtable)._7_get_Item.methodPtr)
                               (a,panel,(a->klass->vtable)._7_get_Item.method);
            if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)(pSVar9,(MethodInfo *)category);
            if (pSVar10 == (System_Xml_Schema_XmlSchema_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar11 = (*(pSVar10->klass->vtable)._7_get_IdAttribute.methodPtr)(pSVar10,(MethodInfo *)item);
            if (pSVar11 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar4 = pSVar11->klass;
            bVar2 = (TypeInfo_SimpleJSONFixed_JSONArray->_2).typeHierarchyDepth;
            if ((bVar2 <= (pSVar4->_2).typeHierarchyDepth) &&
               ((pSVar4->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
                (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray)) {
              puVar12 = (undefined8 *)(*(code *)((Il2CppClass *)pSVar4)->vtable[32].methodPtr)(local_b8);
              local_138._0_8_ = *puVar12;
              local_138.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar12[1];
              local_138.m_Object.fields._8_8_ = puVar12[2];
              local_138.m_Object.fields._current.fields.key = (Il2CppObject *)puVar12[3];
              local_138.m_Object.fields._current.fields.value = (Il2CppObject *)puVar12[4];
              local_138.m_Object.fields._32_8_ = puVar12[5];
              local_138.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar12[6];
              local_138.m_Array.fields._8_8_ = puVar12[7];
              local_138.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar12[8];
              while( true ) {
                bVar8 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                  ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_138,(MethodInfo *)0x0);
                if (!bVar8) {
                  if (__this_01 != (System_Collections_Generic_List_float__o *)0x0) {
                    fVar15 = System_Collections_Generic_List_float___get_Item
                                       (__this_01,0,
                                        (MethodInfo_983A20 *)
                                        MethodInfo_System_Collections_Generic_List_float_get_Item);
                    fVar16 = System_Collections_Generic_List_float___get_Item
                                       (__this_01,1,
                                        (MethodInfo_983A20 *)
                                        MethodInfo_System_Collections_Generic_List_float_get_Item);
                    fVar17 = System_Collections_Generic_List_float___get_Item
                                       (__this_01,2,
                                        (MethodInfo_983A20 *)
                                        MethodInfo_System_Collections_Generic_List_float_get_Item);
                    fVar18 = System_Collections_Generic_List_float___get_Item
                                       (__this_01,3,
                                        (MethodInfo_983A20 *)
                                        MethodInfo_System_Collections_Generic_List_float_get_Item);
                    (__return_storage_ptr__->fields).r = fVar15;
                    (__return_storage_ptr__->fields).g = fVar16;
                    (__return_storage_ptr__->fields).b = fVar17;
                    (__return_storage_ptr__->fields).a = fVar18;
                    return __return_storage_ptr__;
                  }
                  ThrowNullReferenceException();
                }
                pSVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                    ((System_Collections_Generic_KeyValuePair_string__JSONNode__o *)&local_c8,
                                     (SimpleJSONFixed_JSONNode_Enumerator_o *)&local_138,(MethodInfo *)0x0);
                pSVar11 = (pSVar13->fields).key;
                pSVar9 = (pSVar13->fields).value;
                if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                }
                local_d8.fields.key = pSVar11;
                local_d8.fields.value = pSVar9;
                pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_d8,(MethodInfo *)0x0);
                if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar5 = pSVar9->klass;
                bVar2 = (TypeInfo_SimpleJSONFixed_JSONNumber->_2).typeHierarchyDepth;
                if (((pSVar5->_2).typeHierarchyDepth < bVar2) ||
                   ((pSVar5->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                    (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pSVar9,TypeInfo_SimpleJSONFixed_JSONNumber);
                }
                pSVar11 = (*(pSVar5->vtable)._9_get_Value.methodPtr)
                                    (pSVar9,(pSVar5->vtable)._9_get_Value.method);
                fVar15 = System_Single__Parse(pSVar11,(MethodInfo *)0x0);
                pMVar7 = MethodInfo_System_Collections_Generic_List_float_Add;
                if (__this_01 == (System_Collections_Generic_List_float__o *)0x0) {
                  ThrowNullReferenceException();
                }
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar6 = (__this_01->fields)._items;
                if (pSVar6 == (System_Single_array *)0x0) break;
                uVar3 = (__this_01->fields)._size;
                if (uVar3 < (uint)pSVar6->max_length) {
                  (__this_01->fields)._size = uVar3 + 1;
                  if ((uint)pSVar6->max_length <= uVar3) {
                    ThrowIndexOutOfRangeException();
                  }
                  pSVar6->m_Items[(int)uVar3] = fVar15 / 255.0;
                }
                else {
                  System_Collections_Generic_List_float___AddWithResize
                            (__this_01,fVar15 / 255.0,
                             (MethodInfo_973B40 *)pMVar7->klass->rgctx_data[0xe].method);
                }
              }
              ThrowNullReferenceException();
            }
            il2cpp_codegen_raise_invalid_cast_exception(pSVar11,TypeInfo_SimpleJSONFixed_JSONArray);
          }
        }
      }
    }
    bVar8 = System_String__op_Inequality(panel,fallbackPanel,(MethodInfo *)0x0);
    if (bVar8) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar14 = UI_UIManager__GetThemeColor
                          (&local_c8,fallbackPanel,category,item,fallbackPanel,(MethodInfo *)0x0);
      fVar15 = (pUVar14->fields).g;
      fVar16 = (pUVar14->fields).b;
      fVar17 = (pUVar14->fields).a;
      (__return_storage_ptr__->fields).r = (pUVar14->fields).r;
      (__return_storage_ptr__->fields).g = fVar15;
      (__return_storage_ptr__->fields).b = fVar16;
      (__return_storage_ptr__->fields).a = fVar17;
    }
    else {
      pSVar11 = System_String__Format_196d050
                          ("{0} {1} {2} theme error.",(Il2CppObject *)panel,(Il2CppObject *)category,
                           (Il2CppObject *)item,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
      (__return_storage_ptr__->fields).r = 1.0;
      (__return_storage_ptr__->fields).g = 1.0;
      (__return_storage_ptr__->fields).b = 1.0;
      (__return_storage_ptr__->fields).a = 1.0;
    }
    return __return_storage_ptr__;
  }
label_182300f4f:
  ThrowNullReferenceException();
}


// UI.UIManager$$GetThemeTexture
// il2cpp: UnityEngine_Texture2D_o* UI_UIManager__GetThemeTexture (System_String_o* panel, System_String_o* category, System_String_o* item, System_String_o* fallbackPanel, const MethodInfo* method);
// 0x182300fa0
// eh: try 0x18230123a..0x182301458 -> pad 0x1833318f0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 56 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18230132f: lea rcx, [rip + 0x1d959da]  ; "{0} {1} {2} theme error."
// asm:   0x182301336: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18230133b: mov rcx, rax
// asm:   0x18230133e: xor ebx, ebx
// asm:   0x182301340: mov qword ptr [rsp + 0x20], rbx
// asm:   0x182301345: mov r9, qword ptr [rsp + 0x90]
// asm:   0x18230134d: mov r8, qword ptr [rsp + 0x88]
// asm:   0x182301355: mov rdx, qword ptr [rsp + 0x80]
// asm:   0x18230135d: call 0x18196d050  ; System_String__Format()
// asm:   0x182301362: mov rdi, rax
// asm:   0x182301365: lea rcx, [rip + 0x1dfa0cc]  ; TypeInfo_UnityEngine_Debug
// asm:   0x18230136c: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182301371: cmp dword ptr [rax + 0xe4], ebx
// asm:   0x182301377: jne 0x182301381
// asm:   0x182301379: mov rcx, rax
// asm:   0x18230137c: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x182301381: xor edx, edx
// asm:   0x182301383: mov rcx, rdi
// asm:   0x182301386: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x182301412: mov qword ptr [rsp + 0xa0], rbx
// asm:   0x18230141a: mov r9, r13
// asm:   0x18230141d: mov r8, r15
// asm:   0x182301420: mov rdx, r14
// asm:   0x182301423: mov rcx, r13
// asm:   0x182301426: add rsp, 0x40
// asm:   0x18230142a: pop r15
// asm:   0x18230142c: pop r14
// asm:   0x18230142e: pop r13
// asm:   0x182301430: pop r12
// asm:   0x182301432: pop rdi
// asm:   0x182301433: pop rsi
// asm:   0x182301434: pop rbx
// asm:   0x182301435: jmp 0x182300fa0  ; UI_UIManager__GetThemeTexture()
// asm:   0x1833318f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833318f5: push rbx
// asm:   0x1833318f6: push rbp
// asm:   0x1833318f7: sub rsp, 0x38
// asm:   0x1833318fb: mov rbp, rdx
// asm:   0x1833318fe: mov rbx, qword ptr [rbp + 0x38]
// asm:   0x183331902: mov rdx, qword ptr [rbx]
// asm:   0x183331905: mov rdx, qword ptr [rdx]
// asm:   0x183331908: mov rcx, qword ptr [rip + 0x10234c1]
// asm:   0x18333190f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331914: test al, al
// asm:   0x183331916: je 0x183331924
// asm:   0x183331918: movabs rax, 0
// asm:   0x183331922: jmp 0x18333193c
// asm:   0x183331924: mov rax, qword ptr [rbx]
// asm:   0x183331927: mov qword ptr [rbp + 0x30], rax
// asm:   0x18333192b: lea rdx, [rip + 0xcaa656]
// asm:   0x183331932: lea rcx, [rbp + 0x30]
// asm:   0x183331936: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333193c: add rsp, 0x38
// asm:   0x183331940: pop rbp
// asm:   0x183331941: pop rbx
// asm:   0x183331942: ret 

UnityEngine_Texture2D_o *
UI_UIManager__GetThemeTexture
          (System_String_o *panel,System_String_o *category,System_String_o *item,
          System_String_o *fallbackPanel,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONObject__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONObject_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  System_String_o *pSVar6;
  undefined4 extraout_var;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONObject_o *pSVar8;
  
  while( true ) {
    if (Il2CppMethodInitialized_184347671 == '\0') {
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
      Il2CppMethodInitialized_184347671 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this = TypeInfo_UI_UIManager->static_fields->_uiThemes;
    if (__this == (System_Collections_Generic_Dictionary_string__JSONObject__o *)0x0) break;
    pSVar8 = (SimpleJSONFixed_JSONObject_o *)0x0;
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                       (Il2CppObject *)TypeInfo_UI_UIManager->static_fields->_currentUITheme,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
    pSVar3 = pSVar8;
    if (bVar1) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  TypeInfo_UI_UIManager->static_fields->_uiThemes;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_00,(Il2CppObject *)TypeInfo_UI_UIManager->static_fields->_currentUITheme,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Item);
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (pSVar3 == (SimpleJSONFixed_JSONObject_o *)0x0) break;
      pSVar4 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar3,panel,(pSVar3->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Equality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar4 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar3,panel,(pSVar3->klass->vtable)._7_get_Item.method);
        if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
        pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)(pSVar4,(MethodInfo *)category);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar1 = SimpleJSONFixed_JSONNode__op_Equality
                          ((SimpleJSONFixed_JSONNode_o *)pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar4 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar3,panel,(pSVar3->klass->vtable)._7_get_Item.method);
          if ((pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
             (pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)(pSVar4,(MethodInfo *)category),
             pSVar5 == (System_Xml_Schema_XmlSchema_o *)0x0)) break;
          pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                   (*(pSVar5->klass->vtable)._7_get_IdAttribute.methodPtr)(pSVar5);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          bVar1 = SimpleJSONFixed_JSONNode__op_Equality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (!bVar1) {
            if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
            }
            pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
            pSVar4 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar3,panel,(pSVar3->klass->vtable)._7_get_Item.method);
            if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)(pSVar4,(MethodInfo *)category);
            if (pSVar5 == (System_Xml_Schema_XmlSchema_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar6 = (*(pSVar5->klass->vtable)._7_get_IdAttribute.methodPtr)(pSVar5,(MethodInfo *)item);
            if (pSVar6 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            iVar2 = (*(pSVar6->klass->vtable)._9_GetTypeCode.methodPtr)
                              (pSVar6,(pSVar6->klass->vtable)._9_GetTypeCode.method);
            pSVar6 = System_String__Concat_1969e50
                               ("Sprites/Panels/MenuBackground",(System_String_o *)CONCAT44(extraout_var,iVar2),
                                (MethodInfo *)0x0);
            if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
            }
            pSVar3 = (SimpleJSONFixed_JSONObject_o *)
                     ApplicationManagers_ResourceManager__LoadAsset(pSVar7,pSVar6,true,(MethodInfo *)0x0);
            if (pSVar3 != (SimpleJSONFixed_JSONObject_o *)0x0) {
              if (pSVar3->klass == (SimpleJSONFixed_JSONObject_c *)TypeInfo_UnityEngine_Texture2D) {
                pSVar8 = pSVar3;
              }
              if (pSVar8 == (SimpleJSONFixed_JSONObject_o *)0x0) {
                il2cpp_codegen_raise_invalid_cast_exception(pSVar3);
              }
            }
            return (UnityEngine_Texture2D_o *)pSVar8;
          }
        }
      }
    }
    bVar1 = System_String__op_Inequality(panel,fallbackPanel,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar7 = System_String__Format_196d050
                         ("{0} {1} {2} theme error.",(Il2CppObject *)panel,(Il2CppObject *)category,
                          (Il2CppObject *)item,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      return (UnityEngine_Texture2D_o *)0x0;
    }
    panel = fallbackPanel;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
  }
  ThrowNullReferenceException();
}


// UI.UIManager$$GetThemeColorBlock
// il2cpp: UnityEngine_UI_ColorBlock_o UI_UIManager__GetThemeColorBlock (System_String_o* panel, System_String_o* category, System_String_o* item, System_String_o* fallbackPanel, const MethodInfo* method);
// 0x1823006a0

UnityEngine_UI_ColorBlock_o *
UI_UIManager__GetThemeColorBlock
          (UnityEngine_UI_ColorBlock_o *__return_storage_ptr__,System_String_o *panel,
          System_String_o *category,System_String_o *item,System_String_o *fallbackPanel,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_UI_ColorBlock_c *klass;
  System_String_o *pSVar13;
  UnityEngine_Color_o *pUVar14;
  UnityEngine_Color_o local_78 [4];
  
  if (Il2CppMethodInitialized_184347672 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"PressedColor");
    il2cpp_codegen_initialize_runtime_metadata(&"HighlightedColor");
    il2cpp_codegen_initialize_runtime_metadata(&"NormalColor");
    Il2CppMethodInitialized_184347672 = '\x01';
  }
  pSVar13 = "NormalColor";
  (__return_storage_ptr__->fields).m_NormalColor.fields.r = 0.0;
  (__return_storage_ptr__->fields).m_NormalColor.fields.g = 0.0;
  (__return_storage_ptr__->fields).m_NormalColor.fields.b = 0.0;
  (__return_storage_ptr__->fields).m_NormalColor.fields.a = 0.0;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.r = 0.0;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.g = 0.0;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.b = 0.0;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.a = 0.0;
  (__return_storage_ptr__->fields).m_PressedColor.fields.r = 0.0;
  (__return_storage_ptr__->fields).m_PressedColor.fields.g = 0.0;
  (__return_storage_ptr__->fields).m_PressedColor.fields.b = 0.0;
  (__return_storage_ptr__->fields).m_PressedColor.fields.a = 0.0;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.r = 0.0;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.g = 0.0;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.b = 0.0;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.a = 0.0;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.r = 0.0;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.g = 0.0;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.b = 0.0;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.a = 0.0;
  (__return_storage_ptr__->fields).m_ColorMultiplier = 0.0;
  (__return_storage_ptr__->fields).m_FadeDuration = 0.0;
  pSVar13 = System_String__Concat_1969e50(item,pSVar13,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar14 = UI_UIManager__GetThemeColor(local_78,panel,category,pSVar13,fallbackPanel,(MethodInfo *)0x0);
  uVar1 = (pUVar14->fields).r;
  uVar2 = (pUVar14->fields).g;
  uVar3 = (pUVar14->fields).b;
  uVar4 = (pUVar14->fields).a;
  pSVar13 = System_String__Concat_1969e50(item,"HighlightedColor",(MethodInfo *)0x0);
  pUVar14 = UI_UIManager__GetThemeColor(local_78,panel,category,pSVar13,fallbackPanel,(MethodInfo *)0x0);
  fVar9 = (pUVar14->fields).r;
  fVar10 = (pUVar14->fields).g;
  fVar11 = (pUVar14->fields).b;
  fVar12 = (pUVar14->fields).a;
  pSVar13 = System_String__Concat_1969e50(item,"PressedColor",(MethodInfo *)0x0);
  pUVar14 = UI_UIManager__GetThemeColor(local_78,panel,category,pSVar13,fallbackPanel,(MethodInfo *)0x0);
  klass = TypeInfo_UnityEngine_UI_ColorBlock;
  (__return_storage_ptr__->fields).m_NormalColor.fields.r = 0.0;
  (__return_storage_ptr__->fields).m_NormalColor.fields.g = 0.0;
  (__return_storage_ptr__->fields).m_NormalColor.fields.b = 0.0;
  (__return_storage_ptr__->fields).m_NormalColor.fields.a = 0.0;
  uVar5 = (pUVar14->fields).r;
  uVar6 = (pUVar14->fields).g;
  uVar7 = (pUVar14->fields).b;
  uVar8 = (pUVar14->fields).a;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.r = 0.0;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.g = 0.0;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.b = 0.0;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.a = 0.0;
  (__return_storage_ptr__->fields).m_PressedColor.fields.r = 0.0;
  (__return_storage_ptr__->fields).m_PressedColor.fields.g = 0.0;
  (__return_storage_ptr__->fields).m_PressedColor.fields.b = 0.0;
  (__return_storage_ptr__->fields).m_PressedColor.fields.a = 0.0;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.r = 0.0;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.g = 0.0;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.b = 0.0;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.a = 0.0;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.r = 0.0;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.g = 0.0;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.b = 0.0;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.a = 0.0;
  (__return_storage_ptr__->fields).m_ColorMultiplier = 0.0;
  (__return_storage_ptr__->fields).m_FadeDuration = 0.0;
  if ((klass->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
  }
  (__return_storage_ptr__->fields).m_NormalColor.fields.r = (float)uVar1;
  (__return_storage_ptr__->fields).m_NormalColor.fields.g = (float)uVar2;
  (__return_storage_ptr__->fields).m_NormalColor.fields.b = (float)uVar3;
  (__return_storage_ptr__->fields).m_NormalColor.fields.a = (float)uVar4;
  (__return_storage_ptr__->fields).m_ColorMultiplier = 1.0;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.r = fVar9;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.g = fVar10;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.b = fVar11;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.a = fVar12;
  (__return_storage_ptr__->fields).m_FadeDuration = 0.1;
  (__return_storage_ptr__->fields).m_PressedColor.fields.r = (float)uVar5;
  (__return_storage_ptr__->fields).m_PressedColor.fields.g = (float)uVar6;
  (__return_storage_ptr__->fields).m_PressedColor.fields.b = (float)uVar7;
  (__return_storage_ptr__->fields).m_PressedColor.fields.a = (float)uVar8;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.r = (float)uVar1;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.g = (float)uVar2;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.b = (float)uVar3;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.a = (float)uVar4;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.r = (float)uVar5;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.g = (float)uVar6;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.b = (float)uVar7;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.a = (float)uVar8;
  return __return_storage_ptr__;
}


// UI.UIManager$$GetUIThemes
// il2cpp: System_String_array* UI_UIManager__GetUIThemes (const MethodInfo* method);
// 0x182301460
// eh: try 0x1823015f0..0x182301729 -> pad 0x183317fd0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18230167e: mov rdx, qword ptr [rip + 0x1dbb1db]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_Dispose
// asm:   0x182301685: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18230168a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18230168f: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182301694: test rcx, rcx
// asm:   0x182301697: jne 0x182301729
// asm:   0x18230169d: mov rdi, qword ptr [rsp + 0xa8]
// asm:   0x1823016a5: mov r12, rdi
// asm:   0x1823016a8: movzx r14d, byte ptr [rsp + 0x98]
// asm:   0x1823016b1: movzx r15d, byte ptr [rsp + 0xa0]
// asm:   0x182301729: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

System_String_array * UI_UIManager__GetUIThemes(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONObject__o *__this;
  bool bVar1;
  bool bVar2;
  System_String_o *a;
  bool bVar3;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar4;
  undefined1 local_58 [16];
  System_String_o *local_48;
  undefined1 local_40 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_38;
  System_String_o *local_30;
  
  if (Il2CppMethodInitialized_184347673 == '\0') {
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
    Il2CppMethodInitialized_184347673 = '\x01';
  }
  local_40 = (undefined1  [8])0x0;
  pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_30 = (System_String_o *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this = TypeInfo_UI_UIManager->static_fields->_uiThemes;
  if (__this != (System_Collections_Generic_Dictionary_string__JSONObject__o *)0x0) {
    __this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                           (MethodInfo_13C6500 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_get_Keys);
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      bVar2 = false;
      bVar1 = false;
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_58,
                 __this_01,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_JSONObject_GetEnumerator
                );
      local_40 = (undefined1  [8])local_58._0_8_;
      pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
      local_30 = local_48;
      local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
      while( true ) {
        bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           local_40,(MethodInfo_156BDD0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_MoveNext
                          );
        a = local_30;
        if (!bVar3) break;
        bVar3 = System_String__op_Equality(local_30,"Light",(MethodInfo *)0x0);
        if (bVar3) {
          bVar2 = true;
        }
        else {
          bVar3 = System_String__op_Equality(a,"Dark",(MethodInfo *)0x0);
          if (bVar3) {
            bVar1 = true;
          }
          else {
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(__this_00,a);
          }
        }
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_JSONObject_Dispose
                );
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        if (bVar1) {
          System_Collections_Generic_List_object___Insert
                    ((System_Collections_Generic_List_object__o *)__this_00,0,
                     (Il2CppObject *)"Dark",
                     (MethodInfo_945FE0 *)MethodInfo_System_Collections_Generic_List_string_Insert);
        }
        if (bVar2) {
          System_Collections_Generic_List_object___Insert
                    ((System_Collections_Generic_List_object__o *)__this_00,0,
                     (Il2CppObject *)"Light",
                     (MethodInfo_945FE0 *)MethodInfo_System_Collections_Generic_List_string_Insert);
        }
        pUVar4 = System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_T__o *)__this_00,
                            (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return (System_String_array *)pUVar4;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.UIManager$$LoadUIThemes
// il2cpp: void UI_UIManager__LoadUIThemes (const MethodInfo* method);
// 0x182302610

void UI_UIManager__LoadUIThemes(MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__JSONObject__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Settings_UISettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  bool bVar5;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  Il2CppObject *value;
  SimpleJSONFixed_JSONNode_o *d;
  longlong *plVar8;
  Il2CppObject *key;
  uint uVar9;
  
  if (Il2CppMethodInitialized_184347674 == '\0') {
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
    Il2CppMethodInitialized_184347674 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  bVar5 = System_IO_Directory__Exists
                    (TypeInfo_Utility_FolderPaths->static_fields->UIThemesPath,(MethodInfo *)0x0);
  if (!bVar5) {
    if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
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
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar6 = System_IO_Directory__GetFiles
                     (TypeInfo_Utility_FolderPaths->static_fields->UIThemesPath,"*.json",
                      (MethodInfo *)0x0);
  if (pSVar6 != (System_String_array *)0x0) {
    for (uVar9 = 0; (int)uVar9 < (int)pSVar6->max_length; uVar9 = uVar9 + 1) {
      if ((uint)pSVar6->max_length <= uVar9) {
        ThrowIndexOutOfRangeException();
      }
      pSVar7 = System_IO_File__ReadAllText(pSVar6->m_Items[(int)uVar9],(MethodInfo *)0x0);
      value = (Il2CppObject *)SimpleJSONFixed_JSON__Parse(pSVar7,(MethodInfo *)0x0);
      if (value != (Il2CppObject *)0x0) {
        bVar1 = (TypeInfo_SimpleJSONFixed_JSONObject->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
           ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      if (value == (Il2CppObject *)0x0) goto label_182302a31;
      pSVar2 = TypeInfo_UI_UIManager->static_fields->_uiThemes;
      d = (SimpleJSONFixed_JSONNode_o *)
          (*value->klass->vtable[7].methodPtr)(value,"Name",value->klass->vtable[7].method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450(d,(MethodInfo *)0x0);
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__JSONObject__o *)0x0) goto label_182302a31;
      bVar5 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                         (Il2CppObject *)pSVar7,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
      if (!bVar5) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        __this = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_UI_UIManager->static_fields->_uiThemes;
        plVar8 = (longlong *)
                 (*value->klass->vtable[7].methodPtr)
                           (value,"Name",value->klass->vtable[7].method);
        if ((plVar8 == (longlong *)0x0) ||
           (key = (Il2CppObject *)(**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0)),
           __this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_182302a31;
        System_Collections_Generic_Dictionary_object__object___Add
                  (__this,key,value,
                   (MethodInfo_146B4B0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_Add);
      }
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if (((pSVar3 != (Settings_UISettings_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).UITheme, pSVar4 != (Settings_StringSetting_o *)0x0)) &&
       (pSVar2 = TypeInfo_UI_UIManager->static_fields->_uiThemes,
       pSVar2 != (System_Collections_Generic_Dictionary_string__JSONObject__o *)0x0)) {
      bVar5 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                         (Il2CppObject *)(pSVar4->fields)._value,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ContainsKey);
      if (bVar5) {
        return;
      }
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
      if ((pSVar3 != (Settings_UISettings_o *)0x0) &&
         (pSVar4 = (pSVar3->fields).UITheme, pSVar4 != (Settings_StringSetting_o *)0x0)) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)"Dark",
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
        if (pSVar3 != (Settings_UISettings_o *)0x0) {
          (*(pSVar3->klass->vtable)._18_Save.methodPtr)(pSVar3,(pSVar3->klass->vtable)._18_Save.method);
          return;
        }
      }
    }
  }
label_182302a31:
  ThrowNullReferenceException();
}


// UI.UIManager$$Update
// il2cpp: void UI_UIManager__Update (UI_UIManager_o* __this, const MethodInfo* method);
// 0x182303110
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182303577: mov rcx, qword ptr [rip + 0x1d85ee2]  ; TypeInfo_UI_UIManager

void UI_UIManager__Update(UI_UIManager_o *__this,MethodInfo *method)

{
  float fVar1;
  UI_BaseMenu_o *pUVar2;
  UnityEngine_UI_Text_o *__this_00;
  double x;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_Object_o *x_00;
  System_Object_array *pSVar5;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_TextGenerator_o *__this_02;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar6;
  MethodInfo *method_00;
  uint uVar7;
  MethodInfo *in_R8;
  float fVar8;
  double dVar9;
  Il2CppMethodPointer local_res18;
  
  if (Il2CppMethodInitialized_184347675 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Text)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184347675 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  fVar1 = TypeInfo_UI_UIManager->static_fields->_currentFrameTime;
  fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  TypeInfo_UI_UIManager->static_fields->_currentFrameTime = fVar8 + fVar1;
  TypeInfo_UI_UIManager->static_fields->_currentFrameCount =
       TypeInfo_UI_UIManager->static_fields->_currentFrameCount + 1.0;
  if (TypeInfo_UI_UIManager->static_fields->_maxFrameTime <=
      TypeInfo_UI_UIManager->static_fields->_currentFrameTime) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    fVar1 = TypeInfo_UI_UIManager->static_fields->_currentFrameCount;
    fVar8 = TypeInfo_UI_UIManager->static_fields->_currentFrameTime;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    method_00 = (MethodInfo *)&local_res18;
    x = (double)(fVar1 / fVar8);
    if (x < 0.0) {
      dVar9 = il2cpp_runtime_helper_1804f3b80(x,(double *)method_00,in_R8);
      if (dVar9 == -0.5) {
        if (((longlong)(double)local_res18 & 1U) != 0) {
          local_res18 = (Il2CppMethodPointer)((double)local_res18 - 1.0);
        }
      }
      else {
        local_res18 = (Il2CppMethodPointer)il2cpp_runtime_helper_1804f45c0(x - 0.5,method_00);
      }
    }
    else {
      dVar9 = il2cpp_runtime_helper_1804f3b80(x,(double *)method_00,in_R8);
      if (dVar9 == 0.5) {
        if (((longlong)(double)local_res18 & 1U) != 0) {
          local_res18 = (Il2CppMethodPointer)((double)local_res18 + 1.0);
        }
      }
      else {
        local_res18 = (Il2CppMethodPointer)il2cpp_runtime_helper_1804f4690(x + 0.5,method_00);
      }
    }
    TypeInfo_UI_UIManager->static_fields->_lastFPS = (int)(double)local_res18;
    TypeInfo_UI_UIManager->static_fields->_currentFrameTime = 0.0;
    TypeInfo_UI_UIManager->static_fields->_currentFrameCount = 0.0;
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    if (TypeInfo_UI_UIManager->static_fields->NeedResizeText != false) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar2 == (UI_BaseMenu_o *)0x0) {
label_1823035e5:
        ThrowNullReferenceException();
      }
      x_00 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        TypeInfo_UI_UIManager->static_fields->NeedResizeText = false;
        pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if ((pUVar2 == (UI_BaseMenu_o *)0x0) ||
           (pSVar5 = UnityEngine_Component__GetComponentsInChildren_object__665370
                               ((UnityEngine_Component_o *)pUVar2,
                                (MethodInfo_665370 *)
                                MethodInfo_UnityEngine_Component_GetComponentsInChildren_Text),
           pSVar5 == (System_Object_array *)0x0)) goto label_1823035e5;
        for (uVar7 = 0; (int)uVar7 < (int)pSVar5->max_length; uVar7 = uVar7 + 1) {
          if ((uint)pSVar5->max_length <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          __this_00 = (UnityEngine_UI_Text_o *)pSVar5->m_Items[(int)uVar7];
          if ((__this_00 == (UnityEngine_UI_Text_o *)0x0) ||
             (__this_01 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
             __this_01 == (UnityEngine_GameObject_o *)0x0)) goto label_1823035e5;
          bVar3 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
          if ((bVar3) && (iVar4 = UnityEngine_UI_Text__get_fontSize(__this_00,(MethodInfo *)0x0), 2 < iVar4))
          {
            __this_02 = UnityEngine_UI_Text__get_cachedTextGenerator(__this_00,(MethodInfo *)0x0);
            if (__this_02 == (UnityEngine_TextGenerator_o *)0x0) goto label_1823035e5;
            iVar4 = UnityEngine_TextGenerator__get_characterCountVisible(__this_02,(MethodInfo *)0x0);
            GVar6 = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
                    (*(__this_00->klass->vtable)._74_get_text.methodPtr)
                              (__this_00,(__this_00->klass->vtable)._74_get_text.method);
            if (GVar6 == (Gilzoide_FlexUi_Yoga_YGValue_Fields)0x0) goto label_1823035e5;
            if (iVar4 < *(int *)((longlong)GVar6 + 0x10)) {
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              if (TypeInfo_UI_UIManager->static_fields->NeedResizeTextSecondFrame != false) {
                iVar4 = UnityEngine_UI_Text__get_fontSize(__this_00,(MethodInfo *)0x0);
                if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                }
                iVar4 = System_Math__Max_1b2c0d0(iVar4 + -1,1,(MethodInfo *)0x0);
                UnityEngine_UI_Text__set_fontSize(__this_00,iVar4,(MethodInfo *)0x0);
              }
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              TypeInfo_UI_UIManager->static_fields->NeedResizeText = true;
            }
          }
        }
        goto label_18230359d;
      }
    }
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  TypeInfo_UI_UIManager->static_fields->NeedResizeText = false;
label_18230359d:
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  TypeInfo_UI_UIManager->static_fields->NeedResizeTextSecondFrame =
       TypeInfo_UI_UIManager->static_fields->NeedResizeText;
  return;
}


// UI.UIManager$$GetFPS
// il2cpp: int32_t UI_UIManager__GetFPS (const MethodInfo* method);
// 0x1822fefe0

int32_t UI_UIManager__GetFPS(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347676 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184347676 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  return TypeInfo_UI_UIManager->static_fields->_lastFPS;
}


// UI.UIManager$$.ctor
// il2cpp: void UI_UIManager___ctor (UI_UIManager_o* __this, const MethodInfo* method);
// 0x180528540

void
UI_UIManager___ctor(UI_UIManager_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.UIManager$$.cctor
// il2cpp: void UI_UIManager___cctor (const MethodInfo* method);
// 0x1823035f0

void UI_UIManager___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__JSONObject__o *pSVar1;
  System_Collections_Generic_Dictionary_Type__string__o *__this;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_HashSet_string__o *__this_00;
  
  if (Il2CppMethodInitialized_184347677 == '\0') {
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
    Il2CppMethodInitialized_184347677 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_JSONObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ctor);
  TypeInfo_UI_UIManager->static_fields->_languages = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_UIManager->static_fields->_languages,pSVar1);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_JSONObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_JSONObject_ctor);
  TypeInfo_UI_UIManager->static_fields->_uiThemes = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_UIManager->static_fields->_uiThemes,pSVar1);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Type_string);
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_Type_string_ctor);
  TypeInfo_UI_UIManager->static_fields->_lastCategories = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_UIManager->static_fields->_lastCategories,__this);
  TypeInfo_UI_UIManager->static_fields->CurrentCanvasScale = 1.0;
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar2,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  TypeInfo_UI_UIManager->static_fields->AvailableProfileIcons = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_UIManager->static_fields->AvailableProfileIcons,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar2,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  TypeInfo_UI_UIManager->static_fields->AvailableEmojis = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_UIManager->static_fields->AvailableEmojis,pSVar2);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_UI_UIManager->static_fields->AnimatedEmojis = __this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_UIManager->static_fields->AnimatedEmojis,__this_00);
  TypeInfo_UI_UIManager->static_fields->NeedResizeText = false;
  TypeInfo_UI_UIManager->static_fields->NeedResizeTextSecondFrame = false;
  TypeInfo_UI_UIManager->static_fields->_lastFPS = 0;
  TypeInfo_UI_UIManager->static_fields->_currentFrameTime = 0.0;
  TypeInfo_UI_UIManager->static_fields->_currentFrameCount = 0.0;
  TypeInfo_UI_UIManager->static_fields->_maxFrameTime = 0.5;
  return;
}


