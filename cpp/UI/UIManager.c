// Type: UI.UIManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/UIManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/UIManager.cs  [CHANGED since prior version]
// --------------------------------

// UI.UIManager$$Init
// il2cpp: void UI_UIManager__Init (const MethodInfo* method);
// 0x413ddb0

void UI_UIManager__Init(MethodInfo *method)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  UnityEngine_Component_o *__this;
  Il2CppObject *pIVar4;
  UnityEngine_Object_o *target;
  Events_OnLoadScene_o *value;
  MethodInfo *method_00;
  
  if (DAT_05704977 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LoadingMenu_CreateMenu_LoadingMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_OnLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_UIManager_CreateSingleton_UIManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Prefabs/Panels/BackgroundMenu");
    DAT_05704977 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = Utility_SingletonFactory__CreateSingleton<object>
                     (*(Il2CppObject **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20),MethodInfo_UIManager_CreateSingleton_UIManager);
  lVar1 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(Il2CppObject **)(lVar1 + 0x20) = pIVar4;
  method_00 = (MethodInfo *)(lVar1 + 0x20);
  il2cpp_runtime_glue(method_00,pIVar4);
  UI_UIManager__LoadLanguages(method_00);
  UI_UIManager__LoadUIThemes(method_00);
  UI_UIManager__LoadProfileIcons(method_00);
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    lVar2 = *(long *)(TypeInfo_UIManager + 0xb8);
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
    il2cpp_runtime_glue(lVar2 + 0x18);
    pIVar4 = UI_ElementFactory__CreateMenu<object>("Prefabs/Panels/BackgroundMenu",MethodInfo_LoadingMenu_CreateMenu_LoadingMenu);
    lVar1 = *(long *)(TypeInfo_UIManager + 0xb8);
    *(Il2CppObject **)(lVar1 + 0x30) = pIVar4;
    il2cpp_runtime_glue(lVar1 + 0x30,pIVar4);
    plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x30);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x178))();
      __this = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x30);
      if (__this != (UnityEngine_Component_o *)0x0) {
        target = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
        value = (Events_OnLoadScene_o *)il2cpp_runtime_glue(TypeInfo_OnLoadScene);
        Events_OnLoadScene___ctor();
        Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.UIManager$$OnLoadScene
// il2cpp: void UI_UIManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x413ee50

void UI_UIManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  UI_LoadingMenu_o *__this;
  MethodInfo *method_00;
  
  if (DAT_05704978 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05704978 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_UIManager[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_UIManager[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    UI_UIManager__SetMenu(sceneName,method);
    method_00 = TypeInfo_UIManager;
  }
  else {
    UI_UIManager__SetMenu(sceneName,method);
    method_00 = TypeInfo_UIManager;
  }
  if (sceneName != 0) {
    TypeInfo_UIManager = method_00;
    if (*(int *)((long)&method_00[2].parameters + 4) == 0) {
      il2cpp_init_class();
      UI_UIManager__LoadSounds(method_00);
      iVar1 = *(int *)((long)&TypeInfo_UIManager[2].parameters + 4);
    }
    else {
      UI_UIManager__LoadSounds(method_00);
      iVar1 = *(int *)((long)&TypeInfo_UIManager[2].parameters + 4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      __this = *(UI_LoadingMenu_o **)(TypeInfo_UIManager[2].virtualMethodPointer + 0x30);
    }
    else {
      __this = *(UI_LoadingMenu_o **)(TypeInfo_UIManager[2].virtualMethodPointer + 0x30);
    }
    if (__this == (UI_LoadingMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (sceneName == 2) {
      UI_LoadingMenu__Show(__this,1,(MethodInfo *)0x0);
      return;
    }
    UI_LoadingMenu__Hide(__this,(MethodInfo *)0x0);
    return;
  }
  TypeInfo_UIManager = method_00;
  return;
}


// UI.UIManager$$PlaySound
// il2cpp: void UI_UIManager__PlaySound (int32_t sound, const MethodInfo* method);
// 0x413f550

void UI_UIManager__PlaySound(int32_t sound,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_o *key;
  UnityEngine_AudioSource_o *__this_00;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (DAT_05704979 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UISound);
    DAT_05704979 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_UIManager + 0xb8) + 0x60);
  local_28.klass = TypeInfo_UISound;
  local_28.monitor = (void *)0xffffffffffffffff;
  local_18 = sound;
  key = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_00 = (UnityEngine_AudioSource_o *)
                System_Collections_Generic_Dictionary<object__object>__get_Item
                          (__this,(Il2CppObject *)key,MethodInfo_AudioSource_get_Item);
    if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Play(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.UIManager$$SetLastCategory
// il2cpp: void UI_UIManager__SetLastCategory (System_Type_o* t, System_String_o* category, const MethodInfo* method);
// 0x413f610

void UI_UIManager__SetLastCategory(System_Type_o *t,System_String_o *category,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  
  if (DAT_0570497a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570497a = '\x01';
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar2,(Il2CppObject *)t,MethodInfo_Boolean_ContainsKey);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      if ((char)bVar3 == '\0') {
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar2,(Il2CppObject *)t,(Il2CppObject *)category,MethodInfo_Void_Add);
        return;
      }
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (pSVar2,(Il2CppObject *)t,(Il2CppObject *)category,MethodInfo_Void_set_Item);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.UIManager$$GetLastcategory
// il2cpp: System_String_o* UI_UIManager__GetLastcategory (System_Type_o* t, const MethodInfo* method);
// 0x413f740

System_String_o * UI_UIManager__GetLastcategory(System_Type_o *t,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  
  if (DAT_0570497b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570497b = '\x01';
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar2,(Il2CppObject *)t,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar4 = (System_String_o *)
               System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar2,(Il2CppObject *)t,MethodInfo_String_get_Item);
      return pSVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.UIManager$$LoadProfileIcons
// il2cpp: void UI_UIManager__LoadProfileIcons (const MethodInfo* method);
// 0x413e8a0

void UI_UIManager__LoadProfileIcons(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_HashSet_object__o *__this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_08;
  long lVar5;
  char cVar6;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  long *plVar10;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar11;
  Il2CppMethodPointer pIVar12;
  Il2CppMethodPointer pIVar13;
  InvokerMethod pIVar14;
  char *pcVar15;
  Il2CppClass *pIVar16;
  Il2CppType *pIVar17;
  Il2CppType **ppIVar18;
  _union_13 _Var19;
  _union_14 _Var20;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_0570497c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"ProfileIconInfo");
    il2cpp_init_method_metadata(&"Icons");
    il2cpp_init_method_metadata(&"AnimatedEmojis");
    il2cpp_init_method_metadata(&"AllEmojis");
    il2cpp_init_method_metadata(&"EmoteInfo");
    DAT_0570497c = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar8 = ApplicationManagers_ResourceManager__LoadText(pSVar8,"ProfileIconInfo",(MethodInfo *)0x0);
  pSVar9 = SimpleJSONFixed_JSON__Parse(pSVar8,(MethodInfo *)0x0);
  if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (plVar10 = (long *)(*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar9,"Icons",(pSVar9->klass->vtable)._7_get_Item.method),
     plVar10 != (long *)0x0)) {
    (**(code **)(*plVar10 + 0x338))(&local_78,plVar10,*(undefined8 *)(*plVar10 + 0x340));
    __this_00.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
    __this_00.fields._0_8_ = local_78;
    __this_00.fields.m_Object.fields._8_8_ = local_68;
    __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
    __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
    __this_00.fields.m_Object.fields._32_8_ = pIStack_50;
    __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
    __this_00.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
    __this_00.fields.m_Array.fields._current = local_38.genericMethod;
    pIVar12 = local_78;
    pIVar13 = pIStack_70;
    pIVar14 = local_68;
    pcVar15 = pcStack_60;
    pIVar16 = local_58;
    pIVar17 = pIStack_50;
    ppIVar18 = local_48;
    _Var19 = _Stack_40;
    _Var20 = local_38;
    bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                      (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
    cVar6 = (char)bVar7;
    while (cVar6 != '\0') {
      __this_02.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar13;
      __this_02.fields._0_8_ = pIVar12;
      __this_02.fields.m_Object.fields._8_8_ = pIVar14;
      __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar15;
      __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
      __this_02.fields.m_Object.fields._32_8_ = pIVar17;
      __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar18;
      __this_02.fields.m_Array.fields._8_8_ = _Var19.rgctx_data;
      __this_02.fields.m_Array.fields._current = _Var20.genericMethod;
      SVar11 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                         (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = *(System_Collections_Generic_List_object__o **)
                (*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(SVar11.fields.value,(MethodInfo *)0x0);
      lVar5 = MethodInfo_Void_Add;
      if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0413ee3e;
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (pSVar3->fields)._items;
      if (pSVar4 == (System_Object_array *)0x0) goto LAB_0413ee3e;
      uVar2 = (pSVar3->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (pSVar3->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar8;
        il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar3,(Il2CppObject *)pSVar8,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      __this_01.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar13;
      __this_01.fields._0_8_ = pIVar12;
      __this_01.fields.m_Object.fields._8_8_ = pIVar14;
      __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar15;
      __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
      __this_01.fields.m_Object.fields._32_8_ = pIVar17;
      __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar18;
      __this_01.fields.m_Array.fields._8_8_ = _Var19.rgctx_data;
      __this_01.fields.m_Array.fields._current = _Var20.genericMethod;
      bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
      cVar6 = (char)bVar7;
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar8 = ApplicationManagers_ResourceManager__LoadText(pSVar8,"EmoteInfo",(MethodInfo *)0x0);
    pSVar9 = SimpleJSONFixed_JSON__Parse(pSVar8,(MethodInfo *)0x0);
    if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (plVar10 = (long *)(*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar9,"AllEmojis",(pSVar9->klass->vtable)._7_get_Item.method)
       , plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x338))(&local_78,plVar10,*(undefined8 *)(*plVar10 + 0x340));
      __this_03.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
      __this_03.fields._0_8_ = local_78;
      __this_03.fields.m_Object.fields._8_8_ = local_68;
      __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
      __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
      __this_03.fields.m_Object.fields._32_8_ = pIStack_50;
      __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
      __this_03.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
      __this_03.fields.m_Array.fields._current = local_38.genericMethod;
      pIVar12 = local_78;
      pIVar13 = pIStack_70;
      pIVar14 = local_68;
      pcVar15 = pcStack_60;
      pIVar16 = local_58;
      pIVar17 = pIStack_50;
      ppIVar18 = local_48;
      _Var19 = _Stack_40;
      _Var20 = local_38;
      bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this_03,(MethodInfo *)&stack0xffffffffffffff38);
      cVar6 = (char)bVar7;
      while (cVar6 != '\0') {
        __this_05.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar13;
        __this_05.fields._0_8_ = pIVar12;
        __this_05.fields.m_Object.fields._8_8_ = pIVar14;
        __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar15;
        __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
        __this_05.fields.m_Object.fields._32_8_ = pIVar17;
        __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar18;
        __this_05.fields.m_Array.fields._8_8_ = _Var19.rgctx_data;
        __this_05.fields.m_Array.fields._current = _Var20.genericMethod;
        SVar11 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_05,(MethodInfo *)&stack0xffffffffffffff38);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar3 = *(System_Collections_Generic_List_object__o **)
                  (*(long *)(TypeInfo_UIManager + 0xb8) + 0x48);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(SVar11.fields.value,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0413ee3e;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar3->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto LAB_0413ee3e;
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar8;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar3,(Il2CppObject *)pSVar8,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        __this_04.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar13;
        __this_04.fields._0_8_ = pIVar12;
        __this_04.fields.m_Object.fields._8_8_ = pIVar14;
        __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar15;
        __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
        __this_04.fields.m_Object.fields._32_8_ = pIVar17;
        __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar18;
        __this_04.fields.m_Array.fields._8_8_ = _Var19.rgctx_data;
        __this_04.fields.m_Array.fields._current = _Var20.genericMethod;
        bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_04,(MethodInfo *)&stack0xffffffffffffff38);
        cVar6 = (char)bVar7;
      }
      plVar10 = (long *)(*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar9,"AnimatedEmojis",(pSVar9->klass->vtable)._7_get_Item.method);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x338))(&local_78,plVar10,*(undefined8 *)(*plVar10 + 0x340));
        __this_06.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
        __this_06.fields._0_8_ = local_78;
        __this_06.fields.m_Object.fields._8_8_ = local_68;
        __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
        __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
        __this_06.fields.m_Object.fields._32_8_ = pIStack_50;
        __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
        __this_06.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
        __this_06.fields.m_Array.fields._current = local_38.genericMethod;
        bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_06,(MethodInfo *)&stack0xffffffffffffff38);
        cVar6 = (char)bVar7;
        pIVar12 = local_78;
        pIVar13 = pIStack_70;
        pIVar14 = local_68;
        pcVar15 = pcStack_60;
        pIVar16 = local_58;
        pIVar17 = pIStack_50;
        ppIVar18 = local_48;
        _Var19 = _Stack_40;
        _Var20 = local_38;
        while( true ) {
          if (cVar6 == '\0') {
            return;
          }
          __this_07.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar13;
          __this_07.fields._0_8_ = pIVar12;
          __this_07.fields.m_Object.fields._8_8_ = pIVar14;
          __this_07.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar15;
          __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
          __this_07.fields.m_Object.fields._32_8_ = pIVar17;
          __this_07.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar18;
          __this_07.fields.m_Array.fields._8_8_ = _Var19.rgctx_data;
          __this_07.fields.m_Array.fields._current = _Var20.genericMethod;
          SVar11 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_07,(MethodInfo *)&stack0xffffffffffffff38);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this = *(System_Collections_Generic_HashSet_object__o **)
                    (*(long *)(TypeInfo_UIManager + 0xb8) + 0x50);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(SVar11.fields.value,(MethodInfo *)0x0);
          if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) break;
          System_Collections_Generic_HashSet<object>__Add
                    (__this,(Il2CppObject *)pSVar8,MethodInfo_Boolean_Add);
          __this_08.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar13;
          __this_08.fields._0_8_ = pIVar12;
          __this_08.fields.m_Object.fields._8_8_ = pIVar14;
          __this_08.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar15;
          __this_08.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
          __this_08.fields.m_Object.fields._32_8_ = pIVar17;
          __this_08.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar18;
          __this_08.fields.m_Array.fields._8_8_ = _Var19.rgctx_data;
          __this_08.fields.m_Array.fields._current = _Var20.genericMethod;
          bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_08,(MethodInfo *)&stack0xffffffffffffff38);
          cVar6 = (char)bVar7;
        }
      }
    }
  }
LAB_0413ee3e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.UIManager$$LoadSounds
// il2cpp: void UI_UIManager__LoadSounds (const MethodInfo* method);
// 0x413f350

void UI_UIManager__LoadSounds(MethodInfo *method)

{
  long lVar1;
  UnityEngine_Object_o *__this;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  System_Object_array *pSVar4;
  System_String_o *pSVar5;
  uint uVar6;
  
  if (DAT_0570497d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSour);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__AudioSource);
    il2cpp_init_method_metadata(&MethodInfo_AudioSource___GetComponentsInChildren_AudioSourc);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Prefabs/MainMenu/MainMenuSounds");
    DAT_0570497d = '\x01';
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__AudioSource);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar3,MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSour);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x60) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x60,pSVar3);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset<object>
                        (pSVar5,"Prefabs/MainMenu/MainMenuSounds",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pSVar4 = UnityEngine_GameObject__GetComponentsInChildren<object>(__this_00,MethodInfo_AudioSource___GetComponentsInChildren_AudioSourc);
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar2 = (uint)pSVar4->max_length;
      if (0 < (int)uVar2) {
        uVar6 = 0;
        do {
          if (uVar2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          __this = (UnityEngine_Object_o *)pSVar4->m_Items[(int)uVar6];
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (__this == (UnityEngine_Object_o *)0x0) goto LAB_0413f540;
          pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_UIManager + 0xb8) + 0x60);
          pSVar5 = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_0413f540;
          System_Collections_Generic_Dictionary<object__object>__Add
                    (pSVar3,(Il2CppObject *)pSVar5,(Il2CppObject *)__this,MethodInfo_Void_Add);
          uVar6 = uVar6 + 1;
          uVar2 = (uint)pSVar4->max_length;
        } while ((int)uVar6 < (int)uVar2);
      }
      return;
    }
  }
LAB_0413f540:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.UIManager$$SetMenu
// il2cpp: void UI_UIManager__SetMenu (int32_t sceneName, const MethodInfo* method);
// 0x413ef70

void UI_UIManager__SetMenu(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  UnityEngine_Component_o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long *plVar4;
  UI_BaseMenu_o *__this_01;
  bool_conflict bVar5;
  UnityEngine_Object_o *pUVar6;
  undefined8 *puVar7;
  Il2CppObject *pIVar8;
  
  if (DAT_0570497e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorHumanMenu_CreateDefaultMenu_Chara);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorTitanMenu_CreateDefaultMenu_Chara);
    il2cpp_init_method_metadata(&MethodInfo_CreditsMenu_CreateDefaultMenu_CreditsMenu);
    il2cpp_init_method_metadata(&MethodInfo_GalleryMenu_CreateDefaultMenu_GalleryMenu);
    il2cpp_init_method_metadata(&MethodInfo_InGameMenu_CreateDefaultMenu_InGameMenu);
    il2cpp_init_method_metadata(&MethodInfo_MainMenu_CreateDefaultMenu_MainMenu);
    il2cpp_init_method_metadata(&MethodInfo_MapEditorMenu_CreateDefaultMenu_MapEditorMenu);
    il2cpp_init_method_metadata(&MethodInfo_SnapshotViewerMenu_CreateDefaultMenu_SnapshotVie);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570497e = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) goto LAB_0413f33d;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  il2cpp_runtime_glue(lVar2 + 0x18);
  pUVar6 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this == (UnityEngine_Component_o *)0x0) goto LAB_0413f33d;
    pUVar6 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0)
    ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar6,(MethodInfo *)0x0);
  }
  switch(sceneName) {
  case 1:
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto LAB_0413f33d;
    System_Collections_Generic_Dictionary<object__object>__Clear(__this_00,MethodInfo_Void_Clear);
    pIVar8 = UI_ElementFactory__CreateDefaultMenu<object>(MethodInfo_MainMenu_CreateDefaultMenu_MainMenu);
    lVar2 = *(long *)(TypeInfo_UIManager + 0xb8);
    *(Il2CppObject **)(lVar2 + 0x28) = pIVar8;
    il2cpp_runtime_glue(lVar2 + 0x28);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__Reset((MethodInfo *)0x0);
  default:
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
    goto joined_r0x0413f32a;
  case 2:
    puVar7 = &MethodInfo_InGameMenu_CreateDefaultMenu_InGameMenu;
    break;
  case 3:
    puVar7 = &MethodInfo_MapEditorMenu_CreateDefaultMenu_MapEditorMenu;
    break;
  case 4:
    if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) == '\0') {
      puVar7 = &MethodInfo_CharacterEditorTitanMenu_CreateDefaultMenu_Chara;
    }
    else {
      puVar7 = &MethodInfo_CharacterEditorHumanMenu_CreateDefaultMenu_Chara;
    }
    break;
  case 5:
    puVar7 = &MethodInfo_SnapshotViewerMenu_CreateDefaultMenu_SnapshotVie;
    break;
  case 6:
    puVar7 = &MethodInfo_GalleryMenu_CreateDefaultMenu_GalleryMenu;
    break;
  case 7:
    puVar7 = &MethodInfo_CreditsMenu_CreateDefaultMenu_CreditsMenu;
  }
  pIVar8 = UI_ElementFactory__CreateDefaultMenu<object>((MethodInfo_24B7D50 *)*puVar7);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(Il2CppObject **)(lVar2 + 0x28) = pIVar8;
  il2cpp_runtime_glue(lVar2 + 0x28);
  iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
joined_r0x0413f32a:
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pUVar6 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    plVar4 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
      __this_01 = *(UI_BaseMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (__this_01 != (UI_BaseMenu_o *)0x0) {
        UI_BaseMenu__ApplyScale(__this_01,sceneName,(MethodInfo *)0x0);
        goto LAB_0413f25b;
      }
    }
LAB_0413f33d:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0413f25b:
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(undefined1 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x58) = 1;
  return;
}


// UI.UIManager$$GetProfileIcon
// il2cpp: System_String_o* UI_UIManager__GetProfileIcon (System_String_o* icon, const MethodInfo* method);
// 0x413f850

System_String_o * UI_UIManager__GetProfileIcon(System_String_o *icon,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (DAT_0570497f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Icon");
    DAT_0570497f = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto LAB_0413f8d2;
LAB_0413f873:
    pSVar1 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto LAB_0413f873;
LAB_0413f8d2:
    il2cpp_init_class();
    pSVar1 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
  }
  if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
    bVar2 = System_Collections_Generic_List<object>__Contains
                      (pSVar1,(Il2CppObject *)icon,MethodInfo_Boolean_Contains);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_List_object__o **)
                (*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
      if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0413f953;
      icon = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item(pSVar1,0,MethodInfo_String_get_Item);
    }
    pSVar3 = System_String__Concat(icon,"Icon",(MethodInfo *)0x0);
    return pSVar3;
  }
LAB_0413f953:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.UIManager$$GetLocaleFormatted
// il2cpp: System_String_o* UI_UIManager__GetLocaleFormatted (System_String_o* category, System_String_o* subCategory, System_String_o* item, System_Object_array* args, const MethodInfo* method);
// 0x413f960

System_String_o *
UI_UIManager__GetLocaleFormatted
          (System_String_o *category,System_String_o *subCategory,System_String_o *item,
          System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R9;
  
  if (DAT_05704980 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"");
    DAT_05704980 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale(category,subCategory,item,"","",in_R9);
  pSVar1 = System_String__Format(pSVar1,args,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.UIManager$$GetLocale
// il2cpp: System_String_o* UI_UIManager__GetLocale (System_String_o* category, System_String_o* subCategory, System_String_o* item, System_String_o* forcedLanguage, System_String_o* defaultValue, const MethodInfo* method);
// 0x412c7b0

System_String_o *
UI_UIManager__GetLocale
          (System_String_o *category,System_String_o *subCategory,System_String_o *item,
          System_String_o *forcedLanguage,System_String_o *defaultValue,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  Il2CppObject *a;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  long *plVar5;
  
  do {
    if (DAT_05704981 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
      il2cpp_init_method_metadata(&MethodInfo_JSONObject_get_Item);
      il2cpp_init_method_metadata(&TypeInfo_JSONNode);
      il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
      il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
      il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
      il2cpp_init_method_metadata(&TypeInfo_UIManager);
      il2cpp_init_method_metadata(&"{0} locale error.");
      il2cpp_init_method_metadata(&"English");
      il2cpp_init_method_metadata(&".");
      DAT_05704981 = '\x01';
    }
    bVar2 = System_String__op_Inequality
                      (forcedLanguage,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                       (MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) goto LAB_0412cbf1;
      forcedLanguage = *(System_String_o **)(lVar1 + 0x18);
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)
        **(undefined8 **)(TypeInfo_UIManager + 0xb8) ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0412cbf1;
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_UIManager + 0xb8),(Il2CppObject *)forcedLanguage,
                       MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      a = (Il2CppObject *)0x0;
    }
    else {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)
          **(undefined8 **)(TypeInfo_UIManager + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0412cbf1;
      a = System_Collections_Generic_Dictionary<object__object>__get_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_UIManager + 0xb8),(Il2CppObject *)forcedLanguage,
                     MethodInfo_JSONObject_get_Item);
    }
    bVar2 = System_String__op_Inequality
                      (item,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                       (MethodInfo *)0x0);
    pSVar3 = subCategory;
    if ((char)bVar2 != '\0') {
      pSVar3 = System_String__Concat(subCategory,".",item,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (a == (Il2CppObject *)0x0) goto LAB_0412cbf1;
      pSVar4 = (SimpleJSONFixed_JSONNode_o *)
               (*a->klass->vtable[7].methodPtr)(a,category,a->klass->vtable[7].method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = SimpleJSONFixed_JSONNode__op_Equality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        plVar5 = (long *)(*a->klass->vtable[7].methodPtr)(a,category,a->klass->vtable[7].method);
        if (plVar5 == (long *)0x0) {
LAB_0412cbf1:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                 (**(code **)(*plVar5 + 0x1a8))(plVar5,pSVar3,*(undefined8 *)(*plVar5 + 0x1b0));
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = SimpleJSONFixed_JSONNode__op_Equality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
          if (lVar1 != 0) {
            bVar2 = System_String__op_Equality
                              (forcedLanguage,*(System_String_o **)(lVar1 + 0x20),(MethodInfo *)0x0)
            ;
            plVar5 = (long *)(*a->klass->vtable[7].methodPtr)(a,category,a->klass->vtable[7].method)
            ;
            if ((plVar5 != (long *)0x0) &&
               (plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                           (plVar5,pSVar3,*(undefined8 *)(*plVar5 + 0x1b0)),
               plVar5 != (long *)0x0)) {
              pSVar3 = (System_String_o *)(**(code **)(*plVar5 + 0x1c8))(plVar5);
              if ((char)bVar2 == '\0') {
                return pSVar3;
              }
              if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar3 = MiscExtensions__ReverseString(pSVar3,(MethodInfo *)0x0);
              return pSVar3;
            }
          }
          goto LAB_0412cbf1;
        }
      }
    }
    bVar2 = System_String__op_Equality(forcedLanguage,"English",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      bVar2 = System_String__op_Inequality
                        (defaultValue,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                         (MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return defaultValue;
      }
      pSVar3 = System_String__Format("{0} locale error.",(Il2CppObject *)pSVar3,(MethodInfo *)0x0);
      return pSVar3;
    }
    forcedLanguage = "English";
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
      forcedLanguage = "English";
    }
  } while( true );
}


// UI.UIManager$$GetLocaleArray
// il2cpp: System_String_array* UI_UIManager__GetLocaleArray (System_String_o* category, System_String_o* subCategory, System_String_o* item, System_String_o* forcedLanguage, const MethodInfo* method);
// 0x4130000

System_String_array *
UI_UIManager__GetLocaleArray
          (System_String_o *category,System_String_o *subCategory,System_String_o *item,
          System_String_o *forcedLanguage,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  System_Object_array *pSVar5;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  bool_conflict bVar6;
  Il2CppObject *a;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long *plVar9;
  System_String_array *pSVar10;
  System_Collections_Generic_List_object__o *__this_02;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  MethodInfo_35A7350 *method_00;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  undefined8 in_stack_ffffffffffffff28;
  Il2CppMethodPointer pIVar12;
  Il2CppMethodPointer pIVar13;
  InvokerMethod pIVar14;
  char *pcVar15;
  Il2CppClass *pIVar16;
  Il2CppType *pIVar17;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  SimpleJSONFixed_JSONNode_o *local_48;
  
  if (DAT_05704982 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_JSONObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONString);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"{0} locale error.");
    il2cpp_init_method_metadata(&"English");
    il2cpp_init_method_metadata(&".");
    DAT_05704982 = '\x01';
  }
  bVar6 = System_String__op_Inequality
                    (forcedLanguage,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) goto LAB_041306f9;
    forcedLanguage = *(System_String_o **)(lVar4 + 0x18);
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)
      **(undefined8 **)(TypeInfo_UIManager + 0xb8) ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_041306f9;
  bVar6 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_UIManager + 0xb8),(Il2CppObject *)forcedLanguage,
                     MethodInfo_Boolean_ContainsKey);
  if ((char)bVar6 == '\0') {
    a = (Il2CppObject *)0x0;
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)
        **(undefined8 **)(TypeInfo_UIManager + 0xb8) ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_041306f9;
    a = System_Collections_Generic_Dictionary<object__object>__get_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)
                   **(undefined8 **)(TypeInfo_UIManager + 0xb8),(Il2CppObject *)forcedLanguage,
                   MethodInfo_JSONObject_get_Item);
  }
  bVar6 = System_String__op_Inequality
                    (item,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  pSVar7 = subCategory;
  if ((char)bVar6 != '\0') {
    pSVar7 = System_String__Concat(subCategory,".",item,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (a == (Il2CppObject *)0x0) goto LAB_041306f9;
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (*a->klass->vtable[7].methodPtr)(a,category,a->klass->vtable[7].method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      plVar9 = (long *)(*a->klass->vtable[7].methodPtr)(a,category,a->klass->vtable[7].method);
      if (plVar9 == (long *)0x0) goto LAB_041306f9;
      pSVar8 = (SimpleJSONFixed_JSONNode_o *)
               (**(code **)(*plVar9 + 0x1a8))(plVar9,pSVar7,*(undefined8 *)(*plVar9 + 0x1b0));
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
        System_Collections_Generic_List<object>___ctor(__this_02,MethodInfo_List_1_System_String);
        plVar9 = (long *)(*a->klass->vtable[7].methodPtr)(a,category,a->klass->vtable[7].method);
        if ((plVar9 != (long *)0x0) &&
           (plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                       (plVar9,pSVar7,*(undefined8 *)(*plVar9 + 0x1b0)),
           plVar9 != (long *)0x0)) {
          if ((*(byte *)(TypeInfo_JSONArray + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
             (*(long *)(*(long *)(*plVar9 + 200) + -8 + (ulong)*(byte *)(TypeInfo_JSONArray + 0x130) * 8)
              == TypeInfo_JSONArray)) {
            lVar4 = *plVar9;
            if ((*(byte *)(TypeInfo_JSONArray + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
               (*(long *)(*(long *)(lVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_JSONArray + 0x130) * 8)
                == TypeInfo_JSONArray)) {
              (**(code **)(lVar4 + 0x338))(&local_78,plVar9,*(undefined8 *)(lVar4 + 0x340));
              __this.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
              __this.fields._0_8_ = in_stack_ffffffffffffff28;
              __this.fields.m_Object.fields._8_8_ = local_78;
              __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
              __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
              __this.fields.m_Object.fields._32_8_ = pcStack_60;
              __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
              __this.fields.m_Array.fields._8_8_ = pIStack_50;
              __this.fields.m_Array.fields._current = local_48;
              bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                (__this,(MethodInfo *)&stack0xffffffffffffff38);
              if ((char)bVar6 == '\0') {
                if (__this_02 == (System_Collections_Generic_List_object__o *)0x0)
                goto LAB_041306f9;
              }
              else {
                pIVar12 = local_78;
                pIVar13 = pIStack_70;
                pIVar14 = local_68;
                pcVar15 = pcStack_60;
                pIVar16 = local_58;
                pIVar17 = pIStack_50;
                pSVar8 = local_48;
                do {
                  __this_01.fields.m_Object.fields._dictionary =
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
                  __this_01.fields._0_8_ = in_stack_ffffffffffffff28;
                  __this_01.fields.m_Object.fields._8_8_ = pIVar12;
                  __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar13;
                  __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar14;
                  __this_01.fields.m_Object.fields._32_8_ = pcVar15;
                  __this_01.fields.m_Array.fields._list =
                       (System_Collections_Generic_List_T__o *)pIVar16;
                  __this_01.fields.m_Array.fields._8_8_ = pIVar17;
                  __this_01.fields.m_Array.fields._current = pSVar8;
                  aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                        (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
                  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit(aKeyValue,(MethodInfo *)0x0);
                  if (pSVar11 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                    bVar2 = (TypeInfo_JSONString->_2).naturalAligment;
                    if (((pSVar11->klass->_2).naturalAligment < bVar2) ||
                       ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_JSONString)) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_unwind_resume(pSVar11);
                    }
                  }
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
                  if ((lVar4 == 0) ||
                     (bVar6 = System_String__op_Equality
                                        (forcedLanguage,*(System_String_o **)(lVar4 + 0x20),
                                         (MethodInfo *)0x0),
                     pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto LAB_041306f9;
                  pSVar7 = (System_String_o *)
                           (*(pSVar11->klass->vtable)._9_get_Value.methodPtr)(pSVar11);
                  lVar4 = MethodInfo_Void_Add;
                  if ((char)bVar6 == '\0') {
                    if (__this_02 == (System_Collections_Generic_List_object__o *)0x0)
                    goto LAB_041306f9;
                    piVar1 = &(__this_02->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar5 = (__this_02->fields)._items;
                    if (pSVar5 == (System_Object_array *)0x0) goto LAB_041306f9;
                    uVar3 = (__this_02->fields)._size;
                    if ((uint)pSVar5->max_length <= uVar3) {
                      method_00 = *(MethodInfo_35A7350 **)
                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70);
                      goto LAB_04130505;
                    }
                    (__this_02->fields)._size = uVar3 + 1;
                    pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pSVar7;
                    il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar3,pSVar7);
                  }
                  else {
                    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    pSVar7 = MiscExtensions__ReverseString(pSVar7,(MethodInfo *)0x0);
                    lVar4 = MethodInfo_Void_Add;
                    if (__this_02 == (System_Collections_Generic_List_object__o *)0x0)
                    goto LAB_041306f9;
                    piVar1 = &(__this_02->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar5 = (__this_02->fields)._items;
                    if (pSVar5 == (System_Object_array *)0x0) goto LAB_041306f9;
                    uVar3 = (__this_02->fields)._size;
                    if (uVar3 < (uint)pSVar5->max_length) {
                      (__this_02->fields)._size = uVar3 + 1;
                      pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pSVar7;
                      il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar3,pSVar7);
                    }
                    else {
                      method_00 = *(MethodInfo_35A7350 **)
                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70);
LAB_04130505:
                      System_Collections_Generic_List<object>__AddWithResize
                                (__this_02,(Il2CppObject *)pSVar7,method_00);
                    }
                  }
                  __this_00.fields.m_Object.fields._dictionary =
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
                  __this_00.fields._0_8_ = in_stack_ffffffffffffff28;
                  __this_00.fields.m_Object.fields._8_8_ = pIVar12;
                  __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar13;
                  __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar14;
                  __this_00.fields.m_Object.fields._32_8_ = pcVar15;
                  __this_00.fields.m_Array.fields._list =
                       (System_Collections_Generic_List_T__o *)pIVar16;
                  __this_00.fields.m_Array.fields._8_8_ = pIVar17;
                  __this_00.fields.m_Array.fields._current = pSVar8;
                  bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                    (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
                } while ((char)bVar6 != '\0');
              }
              pSVar10 = (System_String_array *)
                        System_Collections_Generic_List<object>__ToArray(__this_02,MethodInfo_String___ToArray);
              return pSVar10;
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(plVar9);
        }
        goto LAB_041306f9;
      }
    }
  }
  bVar6 = System_String__op_Equality(forcedLanguage,"English",(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar10 = UI_UIManager__GetLocaleArray(category,subCategory,item,"English",method);
  }
  else {
    pSVar10 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,1);
    pSVar7 = System_String__Format("{0} locale error.",(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
    if (pSVar10 == (System_String_array *)0x0) {
LAB_041306f9:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((int)pSVar10->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar10->m_Items[0] = pSVar7;
    il2cpp_runtime_glue(pSVar10->m_Items,pSVar7);
  }
  return pSVar10;
}


// UI.UIManager$$GetLocaleCommon
// il2cpp: System_String_o* UI_UIManager__GetLocaleCommon (System_String_o* item, const MethodInfo* method);
// 0x4129bf0

System_String_o * UI_UIManager__GetLocaleCommon(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R9;
  
  if (DAT_05704983 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Common");
    il2cpp_init_method_metadata(&"");
    DAT_05704983 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale("Common",item,"","","",in_R9);
  return pSVar1;
}


// UI.UIManager$$GetLocaleCommonArray
// il2cpp: System_String_array* UI_UIManager__GetLocaleCommonArray (System_String_o* item, const MethodInfo* method);
// 0x413f9f0

System_String_array * UI_UIManager__GetLocaleCommonArray(System_String_o *item,MethodInfo *method)

{
  System_String_array *pSVar1;
  MethodInfo *in_R8;
  
  if (DAT_05704984 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Common");
    il2cpp_init_method_metadata(&"");
    DAT_05704984 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleArray("Common",item,"","",in_R8);
  return pSVar1;
}


// UI.UIManager$$GetLocaleCategoryStrings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__string___o* UI_UIManager__GetLocaleCategoryStrings (System_String_o* pattern, const MethodInfo* method);
// 0x413fa60

System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *
UI_UIManager__GetLocaleCategoryStrings(System_String_o *pattern,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_04;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_05;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_06;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_07;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_08;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_09;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_10;
  char cVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_String_o *pSVar10;
  long *plVar11;
  System_String_o *pSVar12;
  long *plVar13;
  System_String_array *pSVar14;
  System_Collections_Generic_Dictionary_object__object__o *__this_11;
  System_String_o *s;
  undefined8 uVar15;
  System_Exception_o *__this_12;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar16;
  undefined1 auVar17 [16];
  System_String_o *in_stack_fffffffffffffec0;
  Il2CppMethodPointer in_stack_fffffffffffffec8;
  Il2CppClass *pIVar18;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffef0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar19;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffef8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar20;
  Il2CppRGCTXData *in_stack_ffffffffffffff00;
  Il2CppRGCTXData *pIVar21;
  _union_229680 in_stack_ffffffffffffff08;
  _union_229680 _Var22;
  Il2CppClass *local_f0;
  Il2CppType *pIStack_e8;
  System_Collections_Generic_List_T__o *local_e0;
  _union_13 _Stack_d8;
  _union_14 local_d0;
  undefined1 local_c8 [80];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  Il2CppRGCTXData *local_68;
  _union_229680 _Stack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_05704985 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"internal://");
    DAT_05704985 = '\x01';
  }
  if (pattern != (System_String_o *)0x0) {
    bVar5 = System_String__StartsWith(pattern,"internal://",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05704987 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
        il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
        il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
        il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
        il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
        il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Dictionary_string__string);
        il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
        il2cpp_init_method_metadata(&TypeInfo_JSONObject);
        il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
        il2cpp_init_method_metadata(&TypeInfo_UIManager);
        il2cpp_init_method_metadata(&"Name");
        il2cpp_init_method_metadata(&"/");
        il2cpp_init_method_metadata(&"*.json");
        DAT_05704987 = '\x01';
      }
      local_48 = (System_Collections_Generic_List_T__o *)0x0;
      _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
      local_58 = (Il2CppClass *)0x0;
      pIStack_50 = (Il2CppType *)0x0;
      local_68 = (Il2CppRGCTXData *)0x0;
      _Stack_60.genericMethod = (Il2CppObject *)0x0;
      local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_38.genericMethod = (void *)0x0;
      local_c8._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_c8._56_8_ = (Il2CppRGCTXData *)0x0;
      local_c8._32_8_ = (Il2CppClass *)0x0;
      local_c8._40_8_ = (Il2CppType *)0x0;
      local_c8._16_8_ = (Il2CppRGCTXData *)0x0;
      local_c8._24_8_ = (Il2CppObject *)0x0;
      local_c8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_c8._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_c8._64_8_ = (void *)0x0;
      pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
               il2cpp_runtime_glue(TypeInfo_Dictionary_string__Dictionary_string__string);
      System_Collections_Generic_Dictionary<object__object>___ctor(pSVar7,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
      if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar6 = System_String__Concat
                         (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x88),"/",
                          pattern,(MethodInfo *)0x0);
      bVar5 = System_IO_Directory__Exists(pSVar6,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pSVar14 = System_IO_Directory__GetFiles(pSVar6,"*.json",(MethodInfo *)0x0);
        if (pSVar14 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (pSVar14->max_length != 0) {
          if ((int)pSVar14->max_length < 1) {
            return (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)
                   pSVar7;
          }
          pSVar16 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
          pSVar8 = pSVar7;
          if ((pSVar14->max_length & 0xffffffff) != 0) {
            do {
              pSVar6 = pSVar14->m_Items[(long)pSVar16];
              pSVar10 = System_IO_File__ReadAllText(pSVar6,(MethodInfo *)0x0);
              pSVar9 = SimpleJSONFixed_JSON__Parse(pSVar10,(MethodInfo *)0x0);
              if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              bVar1 = (TypeInfo_JSONObject->_2).naturalAligment;
              if (((pSVar9->klass->_2).naturalAligment < bVar1) ||
                 ((pSVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_JSONObject)) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume(pSVar9);
              }
              cVar4 = (*(pSVar9->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar9,"Name",(pSVar9->klass->vtable)._28_HasKey.method);
              if (cVar4 != '\0') {
                plVar13 = (long *)(*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                            (pSVar9,"Name",
                                             (pSVar9->klass->vtable)._7_get_Item.method);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar10 = (System_String_o *)
                          (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0))
                ;
                __this_11 = (System_Collections_Generic_Dictionary_object__object__o *)
                            il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
                System_Collections_Generic_Dictionary<object__object>___ctor(__this_11,MethodInfo_Dictionary_2_System_String_System_String)
                ;
                SimpleJSONFixed_JSONNode__get_Keys
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,
                           pSVar9,(MethodInfo *)0x0);
                local_c8._64_8_ = local_d0;
                local_c8._48_8_ = local_e0;
                local_c8._56_8_ = _Stack_d8;
                local_c8._32_8_ = local_f0;
                local_c8._40_8_ = pIStack_e8;
                __this_06.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
                __this_06.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8;
                __this_06.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar14;
                __this_06.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                     (Il2CppObject *)pSVar6;
                __this_06.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                     (Il2CppObject *)pSVar16;
                __this_06.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
                     in_stack_fffffffffffffef0;
                __this_06.fields.m_Enumerator.fields.m_Array.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8;
                __this_06.fields.m_Enumerator.fields.m_Array.fields._8_8_ =
                     in_stack_ffffffffffffff00;
                __this_06.fields.m_Enumerator.fields.m_Array.fields._current =
                     in_stack_ffffffffffffff08.genericMethod;
                local_c8._0_8_ = in_stack_fffffffffffffef0;
                local_c8._8_8_ = in_stack_fffffffffffffef8;
                local_c8._16_8_ = in_stack_ffffffffffffff00;
                local_c8._24_8_ = in_stack_ffffffffffffff08;
                SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,
                           __this_06,(MethodInfo *)local_c8);
                local_38 = local_d0;
                local_48 = local_e0;
                _Stack_40 = _Stack_d8;
                local_58 = local_f0;
                pIStack_50 = pIStack_e8;
                local_78 = in_stack_fffffffffffffef0;
                pSStack_70 = in_stack_fffffffffffffef8;
                local_68 = in_stack_ffffffffffffff00;
                _Stack_60 = in_stack_ffffffffffffff08;
                if (__this_11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  while (__this_07.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                              (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                        __this_07.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8,
                        __this_07.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar14,
                        __this_07.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                             (Il2CppObject *)pSVar6,
                        __this_07.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                             (Il2CppObject *)pSVar16,
                        __this_07.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
                             in_stack_fffffffffffffef0,
                        __this_07.fields.m_Enumerator.fields.m_Array.fields._list =
                             (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8,
                        __this_07.fields.m_Enumerator.fields.m_Array.fields._8_8_ =
                             in_stack_ffffffffffffff00,
                        __this_07.fields.m_Enumerator.fields.m_Array.fields._current =
                             in_stack_ffffffffffffff08.genericMethod,
                        bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                          (__this_07,(MethodInfo *)&local_78), (char)bVar5 != '\0')
                  {
                    __this_08.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
                    __this_08.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8;
                    __this_08.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar14;
                    __this_08.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                         (Il2CppObject *)pSVar6;
                    __this_08.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                         (Il2CppObject *)pSVar16;
                    __this_08.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
                         in_stack_fffffffffffffef0;
                    __this_08.fields.m_Enumerator.fields.m_Array.fields._list =
                         (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8;
                    __this_08.fields.m_Enumerator.fields.m_Array.fields._8_8_ =
                         in_stack_ffffffffffffff00;
                    __this_08.fields.m_Enumerator.fields.m_Array.fields._current =
                         in_stack_ffffffffffffff08.genericMethod;
                    pSVar12 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                                        (__this_08,(MethodInfo *)&local_78);
                    bVar5 = System_String__op_Equality(pSVar12,"Name",(MethodInfo *)0x0);
                    if ((char)bVar5 == '\0') {
                      plVar13 = (long *)(*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                                  (pSVar9,pSVar12,
                                                   (pSVar9->klass->vtable)._7_get_Item.method);
                      if (plVar13 == (long *)0x0) {
LAB_04140b47:
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      cVar4 = (**(code **)(*plVar13 + 0x208))
                                        (plVar13,*(undefined8 *)(*plVar13 + 0x210));
                      if (cVar4 != '\0') {
                        plVar13 = (long *)(*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                                    (pSVar9,pSVar12,
                                                     (pSVar9->klass->vtable)._7_get_Item.method);
                        if (plVar13 != (long *)0x0) {
                          pSVar6 = (System_String_o *)
                                   (**(code **)(*plVar13 + 0x1c8))
                                             (plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
                          if (lVar3 != 0) {
                            bVar5 = System_String__op_Equality
                                              (pSVar10,*(System_String_o **)(lVar3 + 0x20),
                                               (MethodInfo *)0x0);
                            if ((char)bVar5 != '\0') {
                              if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                                il2cpp_init_class();
                              }
                              MiscExtensions__ReverseString(pSVar6,(MethodInfo *)0x0);
                            }
                    /* WARNING: Subroutine does not return */
                            il2cpp_raise_exception();
                          }
LAB_04140b5b:
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
LAB_04140b51:
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                    }
                  }
                }
                else {
                  while (__this_09.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                              (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                        __this_09.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8,
                        __this_09.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar14,
                        __this_09.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                             (Il2CppObject *)pSVar6,
                        __this_09.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                             (Il2CppObject *)pSVar16,
                        __this_09.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
                             in_stack_fffffffffffffef0,
                        __this_09.fields.m_Enumerator.fields.m_Array.fields._list =
                             (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8,
                        __this_09.fields.m_Enumerator.fields.m_Array.fields._8_8_ =
                             in_stack_ffffffffffffff00,
                        __this_09.fields.m_Enumerator.fields.m_Array.fields._current =
                             in_stack_ffffffffffffff08.genericMethod,
                        bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                          (__this_09,(MethodInfo *)&local_78), (char)bVar5 != '\0')
                  {
                    __this_10.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
                    __this_10.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8;
                    __this_10.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar14;
                    __this_10.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                         (Il2CppObject *)pSVar6;
                    __this_10.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                         (Il2CppObject *)pSVar16;
                    __this_10.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
                         in_stack_fffffffffffffef0;
                    __this_10.fields.m_Enumerator.fields.m_Array.fields._list =
                         (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8;
                    __this_10.fields.m_Enumerator.fields.m_Array.fields._8_8_ =
                         in_stack_ffffffffffffff00;
                    __this_10.fields.m_Enumerator.fields.m_Array.fields._current =
                         in_stack_ffffffffffffff08.genericMethod;
                    pSVar12 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                                        (__this_10,(MethodInfo *)&local_78);
                    bVar5 = System_String__op_Equality(pSVar12,"Name",(MethodInfo *)0x0);
                    if ((char)bVar5 == '\0') {
                      plVar13 = (long *)(*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                                  (pSVar9,pSVar12,
                                                   (pSVar9->klass->vtable)._7_get_Item.method);
                      if (plVar13 == (long *)0x0) goto LAB_04140b47;
                      cVar4 = (**(code **)(*plVar13 + 0x208))
                                        (plVar13,*(undefined8 *)(*plVar13 + 0x210));
                      if (cVar4 != '\0') {
                        plVar13 = (long *)(*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                                    (pSVar9,pSVar12,
                                                     (pSVar9->klass->vtable)._7_get_Item.method);
                        if (plVar13 == (long *)0x0) goto LAB_04140b51;
                        s = (System_String_o *)
                            (**(code **)(*plVar13 + 0x1c8))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
                        pSVar7 = pSVar8;
                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                          il2cpp_init_class();
                          pSVar7 = pSVar8;
                        }
                        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
                        if (lVar3 == 0) goto LAB_04140b5b;
                        bVar5 = System_String__op_Equality
                                          (pSVar10,*(System_String_o **)(lVar3 + 0x20),
                                           (MethodInfo *)0x0);
                        if ((char)bVar5 != '\0') {
                          if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          s = MiscExtensions__ReverseString(s,(MethodInfo *)0x0);
                        }
                        pSVar8 = pSVar7;
                        System_Collections_Generic_Dictionary<object__object>__set_Item
                                  (__this_11,(Il2CppObject *)pSVar12,(Il2CppObject *)s,MethodInfo_Void_set_Item)
                        ;
                      }
                    }
                  }
                }
                if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                System_Collections_Generic_Dictionary<object__object>__set_Item
                          (pSVar7,(Il2CppObject *)pSVar10,(Il2CppObject *)__this_11,MethodInfo_Void_set_Item);
              }
              pSVar16 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)
                        ((long)&(pSVar16->_1).image + 1);
              uVar2 = (uint)pSVar14->max_length;
              if ((long)(int)uVar2 <= (long)pSVar16) {
                return (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o
                        *)pSVar7;
              }
            } while (pSVar16 < (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)
                               (ulong)uVar2);
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      pSVar10 = (System_String_o *)il2cpp_init_method_metadata(&"Failed to find localization files: ");
      pSVar6 = System_String__Concat(pSVar10,pSVar6,(MethodInfo *)0x0);
      uVar15 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this_12 = (System_Exception_o *)il2cpp_runtime_glue(uVar15);
      System_Exception___ctor(__this_12,pSVar6,(MethodInfo *)0x0);
      uVar15 = il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_12,uVar15);
    }
    if ("internal://" != (System_String_o *)0x0) {
      pSVar6 = System_String__Substring
                         (pattern,("internal://"->fields)._stringLength,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05704986 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
        il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
        il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
        il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
        il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
        il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
        il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Dictionary_string__string);
        il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
        il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
        il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
        il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
        il2cpp_init_method_metadata(&MethodInfo_JSONObject_get_Value);
        il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
        il2cpp_init_method_metadata(&TypeInfo_UIManager);
        DAT_05704986 = '\x01';
      }
      local_48 = (System_Collections_Generic_List_T__o *)0x0;
      _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
      local_58 = (Il2CppClass *)0x0;
      pIStack_50 = (Il2CppType *)0x0;
      local_68 = (Il2CppRGCTXData *)0x0;
      _Stack_60.genericMethod = (Il2CppObject *)0x0;
      local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_38.genericMethod = (void *)0x0;
      local_c8._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_c8._56_8_ = (Il2CppRGCTXData *)0x0;
      local_c8._32_8_ = (Il2CppClass *)0x0;
      local_c8._40_8_ = (Il2CppType *)0x0;
      local_c8._16_8_ = (Il2CppRGCTXData *)0x0;
      local_c8._24_8_ = (Il2CppObject *)0x0;
      local_c8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_c8._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_c8._64_8_ = (void *)0x0;
      pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
               il2cpp_runtime_glue(TypeInfo_Dictionary_string__Dictionary_string__string);
      System_Collections_Generic_Dictionary<object__object>___ctor(pSVar7,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)
          **(undefined8 **)(TypeInfo_UIManager + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Dictionary<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                 &stack0xfffffffffffffef0,
                 (System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_UIManager + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
      pIVar18 = local_f0;
      pSVar19 = in_stack_fffffffffffffef0;
      pSVar20 = in_stack_fffffffffffffef8;
      pIVar21 = in_stack_ffffffffffffff00;
      _Var22 = in_stack_ffffffffffffff08;
      do {
        do {
          __this.fields._8_8_ = in_stack_fffffffffffffec0;
          __this.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7;
          __this.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffef0;
          __this.fields._current.fields.value = (Il2CppObject *)in_stack_fffffffffffffef8;
          __this.fields._32_8_ = in_stack_ffffffffffffff00;
          bVar5 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                            (__this,(MethodInfo_31CFE90 *)&stack0xfffffffffffffec8);
          if ((char)bVar5 == '\0') {
            __this_00.fields._8_8_ = in_stack_fffffffffffffec0;
            __this_00.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7;
            __this_00.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffef0;
            __this_00.fields._current.fields.value = (Il2CppObject *)in_stack_fffffffffffffef8;
            __this_00.fields._32_8_ = in_stack_ffffffffffffff00;
            System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
                      (__this_00,(MethodInfo_31CFFB0 *)&stack0xfffffffffffffec8);
            return (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)
                   pSVar7;
          }
          auVar17 = il2cpp_glue_032bf890((MethodInfo_31CFE90 *)&stack0xfffffffffffffec8,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
          plVar13 = auVar17._8_8_;
          in_stack_fffffffffffffec0 = auVar17._0_8_;
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          cVar4 = (**(code **)(*plVar13 + 0x2f8))(plVar13,pSVar6,*(undefined8 *)(*plVar13 + 0x300));
        } while (cVar4 == '\0');
        pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
                 il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
        System_Collections_Generic_Dictionary<object__object>___ctor(pSVar8,MethodInfo_Dictionary_2_System_String_System_String);
        pSVar9 = (SimpleJSONFixed_JSONNode_o *)
                 (**(code **)(*plVar13 + 0x1a8))(plVar13,pSVar6,*(undefined8 *)(*plVar13 + 0x1b0));
        if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        SimpleJSONFixed_JSONNode__get_Keys
                  ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,pSVar9,
                   (MethodInfo *)0x0);
        local_c8._64_8_ = local_d0;
        local_c8._48_8_ = local_e0;
        local_c8._56_8_ = _Stack_d8;
        local_c8._32_8_ = local_f0;
        local_c8._40_8_ = pIStack_e8;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec0;
        __this_01.fields.m_Enumerator.fields._0_8_ = pSVar7;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef0;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_fffffffffffffef8;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             (Il2CppObject *)in_stack_ffffffffffffff00;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
             in_stack_ffffffffffffff08.genericMethod;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)pIVar18;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pSVar19;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)pSVar20;
        local_c8._0_8_ = pSVar19;
        local_c8._8_8_ = pSVar20;
        local_c8._16_8_ = pIVar21;
        local_c8._24_8_ = _Var22;
        SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                  ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,__this_01,
                   (MethodInfo *)local_c8);
        local_38 = local_d0;
        local_48 = local_e0;
        _Stack_40 = _Stack_d8;
        local_58 = local_f0;
        pIStack_50 = pIStack_e8;
        local_78 = pSVar19;
        pSStack_70 = pSVar20;
        local_68 = pIVar21;
        _Stack_60 = _Var22;
        if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          while (__this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                      in_stack_fffffffffffffec0, __this_02.fields.m_Enumerator.fields._0_8_ = pSVar7
                , __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ =
                       in_stack_fffffffffffffef0,
                __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                     (Il2CppObject *)in_stack_fffffffffffffef8,
                __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                     (Il2CppObject *)in_stack_ffffffffffffff00,
                __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
                     in_stack_ffffffffffffff08.genericMethod,
                __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
                     (System_Collections_Generic_List_T__o *)pIVar18,
                __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pSVar19,
                __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
                     (SimpleJSONFixed_JSONNode_o *)pSVar20,
                bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                  (__this_02,(MethodInfo *)&local_78), (char)bVar5 != '\0') {
            __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec0;
            __this_03.fields.m_Enumerator.fields._0_8_ = pSVar7;
            __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef0;
            __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                 (Il2CppObject *)in_stack_fffffffffffffef8;
            __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                 (Il2CppObject *)in_stack_ffffffffffffff00;
            __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
                 in_stack_ffffffffffffff08.genericMethod;
            __this_03.fields.m_Enumerator.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)pIVar18;
            __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pSVar19;
            __this_03.fields.m_Enumerator.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)pSVar20;
            pSVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                                (__this_03,(MethodInfo *)&local_78);
            plVar11 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                        (plVar13,pSVar6,*(undefined8 *)(*plVar13 + 0x1b0));
            if (plVar11 == (long *)0x0) {
LAB_04140097:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            plVar11 = (long *)(**(code **)(*plVar11 + 0x1a8))
                                        (plVar11,pSVar10,*(undefined8 *)(*plVar11 + 0x1b0));
            if (plVar11 == (long *)0x0) {
LAB_04140092:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            cVar4 = (**(code **)(*plVar11 + 0x208))(plVar11,*(undefined8 *)(*plVar11 + 0x210));
            if (cVar4 != '\0') {
              plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                          (plVar13,pSVar6,*(undefined8 *)(*plVar13 + 0x1b0));
              if (plVar13 != (long *)0x0) {
                plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                            (plVar13,pSVar10,*(undefined8 *)(*plVar13 + 0x1b0));
                if (plVar13 != (long *)0x0) {
                  pSVar6 = (System_String_o *)
                           (**(code **)(*plVar13 + 0x1c8))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
                  if (lVar3 != 0) {
                    bVar5 = System_String__op_Equality
                                      (in_stack_fffffffffffffec0,*(System_String_o **)(lVar3 + 0x20)
                                       ,(MethodInfo *)0x0);
                    if ((char)bVar5 != '\0') {
                      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      MiscExtensions__ReverseString(pSVar6,(MethodInfo *)0x0);
                    }
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
LAB_04140124:
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
LAB_041400d7:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
LAB_041400b7:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
        }
        else {
          while (__this_04.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                      in_stack_fffffffffffffec0, __this_04.fields.m_Enumerator.fields._0_8_ = pSVar7
                , __this_04.fields.m_Enumerator.fields.m_Object.fields._8_8_ =
                       in_stack_fffffffffffffef0,
                __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                     (Il2CppObject *)in_stack_fffffffffffffef8,
                __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                     (Il2CppObject *)in_stack_ffffffffffffff00,
                __this_04.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
                     in_stack_ffffffffffffff08.genericMethod,
                __this_04.fields.m_Enumerator.fields.m_Array.fields._list =
                     (System_Collections_Generic_List_T__o *)pIVar18,
                __this_04.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pSVar19,
                __this_04.fields.m_Enumerator.fields.m_Array.fields._current =
                     (SimpleJSONFixed_JSONNode_o *)pSVar20,
                bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                  (__this_04,(MethodInfo *)&local_78), (char)bVar5 != '\0') {
            __this_05.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec0;
            __this_05.fields.m_Enumerator.fields._0_8_ = pSVar7;
            __this_05.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef0;
            __this_05.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                 (Il2CppObject *)in_stack_fffffffffffffef8;
            __this_05.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                 (Il2CppObject *)in_stack_ffffffffffffff00;
            __this_05.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
                 in_stack_ffffffffffffff08.genericMethod;
            __this_05.fields.m_Enumerator.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)pIVar18;
            __this_05.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pSVar19;
            __this_05.fields.m_Enumerator.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)pSVar20;
            pSVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                                (__this_05,(MethodInfo *)&local_78);
            plVar11 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                        (plVar13,pSVar6,*(undefined8 *)(*plVar13 + 0x1b0));
            if (plVar11 == (long *)0x0) goto LAB_04140097;
            plVar11 = (long *)(**(code **)(*plVar11 + 0x1a8))
                                        (plVar11,pSVar10,*(undefined8 *)(*plVar11 + 0x1b0));
            if (plVar11 == (long *)0x0) goto LAB_04140092;
            cVar4 = (**(code **)(*plVar11 + 0x208))(plVar11,*(undefined8 *)(*plVar11 + 0x210));
            if (cVar4 != '\0') {
              plVar11 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                          (plVar13,pSVar6,*(undefined8 *)(*plVar13 + 0x1b0));
              if (plVar11 == (long *)0x0) goto LAB_041400b7;
              plVar11 = (long *)(**(code **)(*plVar11 + 0x1a8))
                                          (plVar11,pSVar10,*(undefined8 *)(*plVar11 + 0x1b0));
              if (plVar11 == (long *)0x0) goto LAB_041400d7;
              pSVar12 = (System_String_o *)
                        (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
              if (lVar3 == 0) goto LAB_04140124;
              bVar5 = System_String__op_Equality
                                (in_stack_fffffffffffffec0,*(System_String_o **)(lVar3 + 0x20),
                                 (MethodInfo *)0x0);
              if ((char)bVar5 != '\0') {
                if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar12 = MiscExtensions__ReverseString(pSVar12,(MethodInfo *)0x0);
              }
              System_Collections_Generic_Dictionary<object__object>__set_Item
                        (pSVar8,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar12,MethodInfo_Void_set_Item);
            }
          }
        }
        if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar7,(Il2CppObject *)in_stack_fffffffffffffec0,(Il2CppObject *)pSVar8,
                   MethodInfo_Void_set_Item);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.UIManager$$GetInternalLocaleCategoryStrings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__string___o* UI_UIManager__GetInternalLocaleCategoryStrings (System_String_o* category, const MethodInfo* method);
// 0x413fb20

System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *
UI_UIManager__GetInternalLocaleCategoryStrings(System_String_o *category,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_04;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_05;
  char cVar2;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_06;
  System_Collections_Generic_Dictionary_object__object__o *__this_07;
  SimpleJSONFixed_JSONNode_o *__this_08;
  System_String_o *pSVar4;
  long *plVar5;
  System_String_o *s;
  long *plVar6;
  undefined1 auVar7 [16];
  System_String_o *in_stack_fffffffffffffec0;
  Il2CppRGCTXData *pIVar8;
  _union_229680 _Var9;
  Il2CppClass *pIVar10;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffef0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar11;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffef8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar12;
  Il2CppRGCTXData *pIStack_100;
  _union_229680 _Stack_f8;
  Il2CppClass *pIStack_f0;
  Il2CppType *pIStack_e8;
  System_Collections_Generic_List_T__o *pSStack_e0;
  _union_13 _Stack_d8;
  _union_14 _Stack_d0;
  undefined1 auStack_c8 [80];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  Il2CppRGCTXData *pIStack_68;
  _union_229680 _Stack_60;
  Il2CppClass *pIStack_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *pSStack_48;
  _union_13 _Stack_40;
  _union_14 _Stack_38;
  
  if (DAT_05704986 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Dictionary_string__string);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_JSONObject_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05704986 = '\x01';
  }
  pSStack_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIStack_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  pIStack_68 = (Il2CppRGCTXData *)0x0;
  _Stack_60.genericMethod = (Il2CppObject *)0x0;
  pSStack_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  _Stack_38.genericMethod = (void *)0x0;
  auStack_c8._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_c8._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_c8._32_8_ = (Il2CppClass *)0x0;
  auStack_c8._40_8_ = (Il2CppType *)0x0;
  auStack_c8._16_8_ = (Il2CppRGCTXData *)0x0;
  auStack_c8._24_8_ = (Il2CppObject *)0x0;
  auStack_c8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_c8._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_c8._64_8_ = (void *)0x0;
  __this_06 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_06,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)
      **(undefined8 **)(TypeInfo_UIManager + 0xb8) ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary<object__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
             &stack0xfffffffffffffef0,
             (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_UIManager + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
  pIVar8 = pIStack_100;
  _Var9 = _Stack_f8;
  pIVar10 = pIStack_f0;
  pSVar11 = in_stack_fffffffffffffef0;
  pSVar12 = in_stack_fffffffffffffef8;
  do {
    do {
      __this.fields._8_8_ = in_stack_fffffffffffffec0;
      __this.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06
      ;
      __this.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffef0;
      __this.fields._current.fields.value = (Il2CppObject *)in_stack_fffffffffffffef8;
      __this.fields._32_8_ = pIVar8;
      bVar3 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                        (__this,(MethodInfo_31CFE90 *)&stack0xfffffffffffffec8);
      if ((char)bVar3 == '\0') {
        __this_00.fields._8_8_ = in_stack_fffffffffffffec0;
        __this_00.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06;
        __this_00.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffef0;
        __this_00.fields._current.fields.value = (Il2CppObject *)in_stack_fffffffffffffef8;
        __this_00.fields._32_8_ = pIVar8;
        System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
                  (__this_00,(MethodInfo_31CFFB0 *)&stack0xfffffffffffffec8);
        return (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)
               __this_06;
      }
      auVar7 = il2cpp_glue_032bf890((MethodInfo_31CFE90 *)&stack0xfffffffffffffec8,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
      plVar6 = auVar7._8_8_;
      in_stack_fffffffffffffec0 = auVar7._0_8_;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      cVar2 = (**(code **)(*plVar6 + 0x2f8))(plVar6,category,*(undefined8 *)(*plVar6 + 0x300));
    } while (cVar2 == '\0');
    __this_07 = (System_Collections_Generic_Dictionary_object__object__o *)
                il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
    System_Collections_Generic_Dictionary<object__object>___ctor(__this_07,MethodInfo_Dictionary_2_System_String_System_String);
    __this_08 = (SimpleJSONFixed_JSONNode_o *)
                (**(code **)(*plVar6 + 0x1a8))(plVar6,category,*(undefined8 *)(*plVar6 + 0x1b0));
    if (__this_08 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    SimpleJSONFixed_JSONNode__get_Keys
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,__this_08,
               (MethodInfo *)0x0);
    auStack_c8._64_8_ = _Stack_d0;
    auStack_c8._48_8_ = pSStack_e0;
    auStack_c8._56_8_ = _Stack_d8;
    auStack_c8._32_8_ = pIStack_f0;
    auStack_c8._40_8_ = pIStack_e8;
    auStack_c8._16_8_ = pIStack_100;
    auStack_c8._24_8_ = _Stack_f8;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec0;
    __this_01.fields.m_Enumerator.fields._0_8_ = __this_06;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef0;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
         (Il2CppObject *)in_stack_fffffffffffffef8;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         (Il2CppObject *)pIVar8;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = _Var9.genericMethod;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)pIVar10;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pSVar11;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)pSVar12;
    auStack_c8._0_8_ = pSVar11;
    auStack_c8._8_8_ = pSVar12;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,__this_01,
               (MethodInfo *)auStack_c8);
    _Stack_38 = _Stack_d0;
    pSStack_48 = pSStack_e0;
    _Stack_40 = _Stack_d8;
    pIStack_58 = pIStack_f0;
    pIStack_50 = pIStack_e8;
    pIStack_68 = pIStack_100;
    _Stack_60 = _Stack_f8;
    pSStack_78 = pSVar11;
    pSStack_70 = pSVar12;
    if (__this_07 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      while (__this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec0
            , __this_02.fields.m_Enumerator.fields._0_8_ = __this_06,
            __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef0,
            __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                 (Il2CppObject *)in_stack_fffffffffffffef8,
            __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                 (Il2CppObject *)pIVar8,
            __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = _Var9.genericMethod,
            __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)pIVar10,
            __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pSVar11,
            __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)pSVar12,
            bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                              (__this_02,(MethodInfo *)&pSStack_78), (char)bVar3 != '\0') {
        __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec0;
        __this_03.fields.m_Enumerator.fields._0_8_ = __this_06;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef0;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_fffffffffffffef8;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             (Il2CppObject *)pIVar8;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = _Var9.genericMethod;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)pIVar10;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pSVar11;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)pSVar12;
        pSVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                           (__this_03,(MethodInfo *)&pSStack_78);
        plVar5 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                   (plVar6,category,*(undefined8 *)(*plVar6 + 0x1b0));
        if (plVar5 == (long *)0x0) {
LAB_04140097:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                   (plVar5,pSVar4,*(undefined8 *)(*plVar5 + 0x1b0));
        if (plVar5 == (long *)0x0) {
LAB_04140092:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        cVar2 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
        if (cVar2 != '\0') {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                     (plVar6,category,*(undefined8 *)(*plVar6 + 0x1b0));
          if (plVar6 != (long *)0x0) {
            plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                       (plVar6,pSVar4,*(undefined8 *)(*plVar6 + 0x1b0));
            if (plVar6 != (long *)0x0) {
              pSVar4 = (System_String_o *)
                       (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
              if (lVar1 != 0) {
                bVar3 = System_String__op_Equality
                                  (in_stack_fffffffffffffec0,*(System_String_o **)(lVar1 + 0x20),
                                   (MethodInfo *)0x0);
                if ((char)bVar3 != '\0') {
                  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  MiscExtensions__ReverseString(pSVar4,(MethodInfo *)0x0);
                }
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
LAB_04140124:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_041400d7:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_041400b7:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
    else {
      while (__this_04.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec0
            , __this_04.fields.m_Enumerator.fields._0_8_ = __this_06,
            __this_04.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef0,
            __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                 (Il2CppObject *)in_stack_fffffffffffffef8,
            __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                 (Il2CppObject *)pIVar8,
            __this_04.fields.m_Enumerator.fields.m_Object.fields._32_8_ = _Var9.genericMethod,
            __this_04.fields.m_Enumerator.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)pIVar10,
            __this_04.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pSVar11,
            __this_04.fields.m_Enumerator.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)pSVar12,
            bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                              (__this_04,(MethodInfo *)&pSStack_78), (char)bVar3 != '\0') {
        __this_05.fields.m_Enumerator.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec0;
        __this_05.fields.m_Enumerator.fields._0_8_ = __this_06;
        __this_05.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef0;
        __this_05.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_fffffffffffffef8;
        __this_05.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             (Il2CppObject *)pIVar8;
        __this_05.fields.m_Enumerator.fields.m_Object.fields._32_8_ = _Var9.genericMethod;
        __this_05.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)pIVar10;
        __this_05.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pSVar11;
        __this_05.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)pSVar12;
        pSVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                           (__this_05,(MethodInfo *)&pSStack_78);
        plVar5 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                   (plVar6,category,*(undefined8 *)(*plVar6 + 0x1b0));
        if (plVar5 == (long *)0x0) goto LAB_04140097;
        plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                   (plVar5,pSVar4,*(undefined8 *)(*plVar5 + 0x1b0));
        if (plVar5 == (long *)0x0) goto LAB_04140092;
        cVar2 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
        if (cVar2 != '\0') {
          plVar5 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                     (plVar6,category,*(undefined8 *)(*plVar6 + 0x1b0));
          if (plVar5 == (long *)0x0) goto LAB_041400b7;
          plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                     (plVar5,pSVar4,*(undefined8 *)(*plVar5 + 0x1b0));
          if (plVar5 == (long *)0x0) goto LAB_041400d7;
          s = (System_String_o *)
              (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
          if (lVar1 == 0) goto LAB_04140124;
          bVar3 = System_String__op_Equality
                            (in_stack_fffffffffffffec0,*(System_String_o **)(lVar1 + 0x20),
                             (MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
              il2cpp_init_class();
            }
            s = MiscExtensions__ReverseString(s,(MethodInfo *)0x0);
          }
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    (__this_07,(Il2CppObject *)pSVar4,(Il2CppObject *)s,MethodInfo_Void_set_Item);
        }
      }
    }
    if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this_06,(Il2CppObject *)in_stack_fffffffffffffec0,(Il2CppObject *)__this_07,
               MethodInfo_Void_set_Item);
  } while( true );
}


// UI.UIManager$$GetExternalLocaleCategoryStrings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__string___o* UI_UIManager__GetExternalLocaleCategoryStrings (System_String_o* uniqueName, const MethodInfo* method);
// 0x4140500

System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *
UI_UIManager__GetExternalLocaleCategoryStrings(System_String_o *uniqueName,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  char cVar4;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *__this_05;
  long *plVar9;
  System_Collections_Generic_Dictionary_object__object__o *__this_06;
  System_String_o *pSVar10;
  System_String_o *s;
  undefined8 uVar11;
  System_Exception_o *__this_07;
  ulong uVar12;
  undefined8 in_stack_fffffffffffffec8;
  System_Collections_Generic_Dictionary_object__object__o *pSVar13;
  Il2CppMethodPointer in_stack_fffffffffffffef0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffef8;
  InvokerMethod in_stack_ffffffffffffff00;
  Il2CppObject *in_stack_ffffffffffffff08;
  Il2CppClass *pIStack_f0;
  Il2CppType *pIStack_e8;
  System_Collections_Generic_List_T__o *pSStack_e0;
  _union_13 _Stack_d8;
  _union_14 _Stack_d0;
  undefined1 auStack_c8 [80];
  Il2CppMethodPointer pIStack_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod pIStack_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *pIStack_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *pSStack_48;
  _union_13 _Stack_40;
  _union_14 _Stack_38;
  
  if (DAT_05704987 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"*.json");
    DAT_05704987 = '\x01';
  }
  pSStack_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIStack_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  pIStack_68 = (InvokerMethod)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  pIStack_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  _Stack_38.genericMethod = (void *)0x0;
  auStack_c8._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_c8._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_c8._32_8_ = (Il2CppClass *)0x0;
  auStack_c8._40_8_ = (Il2CppType *)0x0;
  auStack_c8._16_8_ = (InvokerMethod)0x0;
  auStack_c8._24_8_ = (Il2CppObject *)0x0;
  auStack_c8._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_c8._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_c8._64_8_ = (void *)0x0;
  __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_04,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x88),"/",
                      uniqueName,(MethodInfo *)0x0);
  bVar5 = System_IO_Directory__Exists(pSVar6,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pSVar7 = System_IO_Directory__GetFiles(pSVar6,"*.json",(MethodInfo *)0x0);
    if (pSVar7 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pSVar7->max_length != 0) {
      if ((int)pSVar7->max_length < 1) {
        return (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)
               __this_04;
      }
      uVar12 = 0;
      pSVar13 = __this_04;
      if ((pSVar7->max_length & 0xffffffff) != 0) {
        do {
          pSVar6 = pSVar7->m_Items[uVar12];
          pSVar8 = System_IO_File__ReadAllText(pSVar6,(MethodInfo *)0x0);
          __this_05 = SimpleJSONFixed_JSON__Parse(pSVar8,(MethodInfo *)0x0);
          if (__this_05 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar1 = (TypeInfo_JSONObject->_2).naturalAligment;
          if (((__this_05->klass->_2).naturalAligment < bVar1) ||
             ((__this_05->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_JSONObject)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(__this_05);
          }
          cVar4 = (*(__this_05->klass->vtable)._28_HasKey.methodPtr)
                            (__this_05,"Name",(__this_05->klass->vtable)._28_HasKey.method);
          if (cVar4 != '\0') {
            plVar9 = (long *)(*(__this_05->klass->vtable)._7_get_Item.methodPtr)
                                       (__this_05,"Name",
                                        (__this_05->klass->vtable)._7_get_Item.method);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar8 = (System_String_o *)
                     (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
            __this_06 = (System_Collections_Generic_Dictionary_object__object__o *)
                        il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
            System_Collections_Generic_Dictionary<object__object>___ctor(__this_06,MethodInfo_Dictionary_2_System_String_System_String);
            SimpleJSONFixed_JSONNode__get_Keys
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,
                       __this_05,(MethodInfo *)0x0);
            auStack_c8._64_8_ = _Stack_d0;
            auStack_c8._48_8_ = pSStack_e0;
            auStack_c8._56_8_ = _Stack_d8;
            auStack_c8._32_8_ = pIStack_f0;
            auStack_c8._40_8_ = pIStack_e8;
            __this.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13;
            __this.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8;
            __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar7;
            __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                 (Il2CppObject *)pSVar6;
            __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                 (Il2CppObject *)uVar12;
            __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffef0;
            __this.fields.m_Enumerator.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8;
            __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff00;
            __this.fields.m_Enumerator.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff08;
            auStack_c8._0_8_ = in_stack_fffffffffffffef0;
            auStack_c8._8_8_ = in_stack_fffffffffffffef8;
            auStack_c8._16_8_ = in_stack_ffffffffffffff00;
            auStack_c8._24_8_ = in_stack_ffffffffffffff08;
            SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,__this,
                       (MethodInfo *)auStack_c8);
            _Stack_38 = _Stack_d0;
            pSStack_48 = pSStack_e0;
            _Stack_40 = _Stack_d8;
            pIStack_58 = pIStack_f0;
            pIStack_50 = pIStack_e8;
            pIStack_78 = in_stack_fffffffffffffef0;
            pSStack_70 = in_stack_fffffffffffffef8;
            pIStack_68 = in_stack_ffffffffffffff00;
            pIStack_60 = in_stack_ffffffffffffff08;
            if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              while (__this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                          (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13,
                    __this_00.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8,
                    __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar7,
                    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                         (Il2CppObject *)pSVar6,
                    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                         (Il2CppObject *)uVar12,
                    __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
                         in_stack_fffffffffffffef0,
                    __this_00.fields.m_Enumerator.fields.m_Array.fields._list =
                         (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8,
                    __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ =
                         in_stack_ffffffffffffff00,
                    __this_00.fields.m_Enumerator.fields.m_Array.fields._current =
                         (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff08,
                    bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                      (__this_00,(MethodInfo *)&pIStack_78), (char)bVar5 != '\0') {
                __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13;
                __this_01.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8;
                __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar7;
                __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                     (Il2CppObject *)pSVar6;
                __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                     (Il2CppObject *)uVar12;
                __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
                     in_stack_fffffffffffffef0;
                __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8;
                __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ =
                     in_stack_ffffffffffffff00;
                __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
                     (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff08;
                pSVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                                    (__this_01,(MethodInfo *)&pIStack_78);
                bVar5 = System_String__op_Equality(pSVar10,"Name",(MethodInfo *)0x0);
                if ((char)bVar5 == '\0') {
                  plVar9 = (long *)(*(__this_05->klass->vtable)._7_get_Item.methodPtr)
                                             (__this_05,pSVar10,
                                              (__this_05->klass->vtable)._7_get_Item.method);
                  if (plVar9 == (long *)0x0) {
LAB_04140b47:
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  cVar4 = (**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210));
                  if (cVar4 != '\0') {
                    plVar9 = (long *)(*(__this_05->klass->vtable)._7_get_Item.methodPtr)
                                               (__this_05,pSVar10,
                                                (__this_05->klass->vtable)._7_get_Item.method);
                    if (plVar9 != (long *)0x0) {
                      pSVar6 = (System_String_o *)
                               (**(code **)(*plVar9 + 0x1c8))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
                      if (lVar3 != 0) {
                        bVar5 = System_String__op_Equality
                                          (pSVar8,*(System_String_o **)(lVar3 + 0x20),
                                           (MethodInfo *)0x0);
                        if ((char)bVar5 != '\0') {
                          if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          MiscExtensions__ReverseString(pSVar6,(MethodInfo *)0x0);
                        }
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
LAB_04140b5b:
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
LAB_04140b51:
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                }
              }
            }
            else {
              while (__this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                          (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13,
                    __this_02.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8,
                    __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar7,
                    __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                         (Il2CppObject *)pSVar6,
                    __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                         (Il2CppObject *)uVar12,
                    __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
                         in_stack_fffffffffffffef0,
                    __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
                         (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8,
                    __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ =
                         in_stack_ffffffffffffff00,
                    __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
                         (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff08,
                    bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                      (__this_02,(MethodInfo *)&pIStack_78), (char)bVar5 != '\0') {
                __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13;
                __this_03.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8;
                __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar7;
                __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                     (Il2CppObject *)pSVar6;
                __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                     (Il2CppObject *)uVar12;
                __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ =
                     in_stack_fffffffffffffef0;
                __this_03.fields.m_Enumerator.fields.m_Array.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8;
                __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ =
                     in_stack_ffffffffffffff00;
                __this_03.fields.m_Enumerator.fields.m_Array.fields._current =
                     (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff08;
                pSVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                                    (__this_03,(MethodInfo *)&pIStack_78);
                bVar5 = System_String__op_Equality(pSVar10,"Name",(MethodInfo *)0x0);
                if ((char)bVar5 == '\0') {
                  plVar9 = (long *)(*(__this_05->klass->vtable)._7_get_Item.methodPtr)
                                             (__this_05,pSVar10,
                                              (__this_05->klass->vtable)._7_get_Item.method);
                  if (plVar9 == (long *)0x0) goto LAB_04140b47;
                  cVar4 = (**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210));
                  if (cVar4 != '\0') {
                    plVar9 = (long *)(*(__this_05->klass->vtable)._7_get_Item.methodPtr)
                                               (__this_05,pSVar10,
                                                (__this_05->klass->vtable)._7_get_Item.method);
                    if (plVar9 == (long *)0x0) goto LAB_04140b51;
                    s = (System_String_o *)
                        (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
                    __this_04 = pSVar13;
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_init_class();
                      __this_04 = pSVar13;
                    }
                    lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
                    if (lVar3 == 0) goto LAB_04140b5b;
                    bVar5 = System_String__op_Equality
                                      (pSVar8,*(System_String_o **)(lVar3 + 0x20),(MethodInfo *)0x0)
                    ;
                    if ((char)bVar5 != '\0') {
                      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      s = MiscExtensions__ReverseString(s,(MethodInfo *)0x0);
                    }
                    pSVar13 = __this_04;
                    System_Collections_Generic_Dictionary<object__object>__set_Item
                              (__this_06,(Il2CppObject *)pSVar10,(Il2CppObject *)s,MethodInfo_Void_set_Item);
                  }
                }
              }
            }
            if (__this_04 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      (__this_04,(Il2CppObject *)pSVar8,(Il2CppObject *)__this_06,MethodInfo_Void_set_Item);
          }
          uVar12 = uVar12 + 1;
          uVar2 = (uint)pSVar7->max_length;
          if ((long)(int)uVar2 <= (long)uVar12) {
            return (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)
                   __this_04;
          }
        } while (uVar12 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"Failed to find localization files: ");
  pSVar6 = System_String__Concat(pSVar8,pSVar6,(MethodInfo *)0x0);
  uVar11 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this_07 = (System_Exception_o *)il2cpp_runtime_glue(uVar11);
  System_Exception___ctor(__this_07,pSVar6,(MethodInfo *)0x0);
  uVar11 = il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_07,uVar11);
}


// UI.UIManager$$GetLanguages
// il2cpp: System_String_array* UI_UIManager__GetLanguages (const MethodInfo* method);
// 0x412e5e0

System_String_array * UI_UIManager__GetLanguages(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_02;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_03;
  System_String_array *pSVar6;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar7;
  Il2CppType *pIVar8;
  System_String_o *a;
  System_String_o *pSVar9;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (DAT_05704988 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Insert);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"English");
    DAT_05704988 = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_02,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (((System_Collections_Generic_Dictionary_object__object__o *)
       **(undefined8 **)(TypeInfo_UIManager + 0xb8) !=
       (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_03 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             **(undefined8 **)(TypeInfo_UIManager + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
     __this_03 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               local_48,__this_03,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    pSVar7 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
             local_48._0_8_;
    pIVar8 = (Il2CppType *)local_48._8_8_;
    a = local_38;
    if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_00.fields._index = local_48._8_4_;
      __this_00.fields._version = local_48._12_4_;
      __this_00.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
      __this_00.fields._currentKey = (Il2CppObject *)local_38;
      bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                        (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffff98);
      if ((char)bVar5 != '\0') {
        bVar5 = System_String__op_Equality(local_38,"English",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while (__this.fields._8_8_ = pIVar8,
            __this.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
            __this.fields._currentKey = (Il2CppObject *)a,
            bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                              (__this,(MethodInfo_31D0850 *)&stack0xffffffffffffff98),
            local_48._0_8_ = pSVar7, local_48._8_8_ = pIVar8, local_38 = a, (char)bVar5 != '\0') {
        pSVar9 = a;
        bVar5 = System_String__op_Equality(a,"English",(MethodInfo *)0x0);
        lVar4 = MethodInfo_Void_Add;
        if ((char)bVar5 == '\0') {
          piVar1 = &(__this_02->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_02->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (__this_02->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_02->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)a;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,a);
            a = pSVar9;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_02,(Il2CppObject *)a,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            a = pSVar9;
          }
        }
        else {
          System_Collections_Generic_List<object>__Insert
                    (__this_02,0,(Il2CppObject *)a,MethodInfo_Void_Insert);
          a = pSVar9;
        }
      }
    }
    __this_01.fields._8_8_ = local_48._8_8_;
    __this_01.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
    __this_01.fields._currentKey = (Il2CppObject *)local_38;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
              (__this_01,(MethodInfo_31D0840 *)&stack0xffffffffffffff98);
    if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar6 = (System_String_array *)
               System_Collections_Generic_List<object>__ToArray(__this_02,MethodInfo_String___ToArray);
      return pSVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.UIManager$$LoadLanguages
// il2cpp: void UI_UIManager__LoadLanguages (const MethodInfo* method);
// 0x413dfb0

void UI_UIManager__LoadLanguages(MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  long lVar4;
  Settings_TypedSetting_T__o *__this_00;
  bool_conflict bVar5;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  Il2CppObject *value;
  SimpleJSONFixed_JSONNode_o *d;
  long *plVar8;
  Il2CppObject *key;
  ulong uVar9;
  
  if (DAT_05704989 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"No language folder found, creating it.");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Arabic");
    il2cpp_init_method_metadata(&"*.json");
    il2cpp_init_method_metadata(&"English");
    DAT_05704989 = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x10),(MethodInfo *)0x0)
  ;
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
    pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x10);
  }
  else {
    pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x10);
  }
  if ((char)bVar5 == '\0') {
    System_IO_Directory__CreateDirectory(pSVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__Log("No language folder found, creating it.",(MethodInfo *)0x0);
    return;
  }
  pSVar6 = System_IO_Directory__GetFiles(pSVar3,"*.json",(MethodInfo *)0x0);
  if (pSVar6 != (System_String_array *)0x0) {
    if (0 < (int)pSVar6->max_length) {
      uVar9 = 0;
      if ((pSVar6->max_length & 0xffffffff) != 0) {
        do {
          pSVar3 = pSVar6->m_Items[uVar9];
          pSVar7 = System_IO_File__ReadAllText(pSVar3,(MethodInfo *)0x0);
          value = (Il2CppObject *)SimpleJSONFixed_JSON__Parse(pSVar7,(MethodInfo *)0x0);
          if (value != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_JSONObject->_2).naturalAligment;
            if (((value->klass->_2).naturalAligment < bVar1) ||
               ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_JSONObject)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(value);
            }
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (value == (Il2CppObject *)0x0) goto LAB_0413e441;
          __this = (System_Collections_Generic_Dictionary_object__object__o *)
                   **(undefined8 **)(TypeInfo_UIManager + 0xb8);
          d = (SimpleJSONFixed_JSONNode_o *)
              (*value->klass->vtable[7].methodPtr)
                        (value,"Name",value->klass->vtable[7].method);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(d,(MethodInfo *)0x0);
          if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_0413e441;
          bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                            (__this,(Il2CppObject *)pSVar7,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 == '\0') {
            plVar8 = (long *)(*value->klass->vtable[7].methodPtr)
                                       (value,"Name",value->klass->vtable[7].method);
            if (plVar8 == (long *)0x0) goto LAB_0413e441;
            key = (Il2CppObject *)
                  (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_UIManager + 0xb8) ==
                 (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
               (System_Collections_Generic_Dictionary<object__object>__Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)
                           **(undefined8 **)(TypeInfo_UIManager + 0xb8),key,value,MethodInfo_Void_Add),
               pSVar3 == (System_String_o *)0x0)) goto LAB_0413e441;
            bVar5 = System_String__Contains(pSVar3,"Arabic",(MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
              if (lVar4 == 0) goto LAB_0413e441;
              *(Il2CppObject **)(lVar4 + 0x20) = key;
              il2cpp_runtime_glue(lVar4 + 0x20);
            }
          }
          uVar9 = uVar9 + 1;
          uVar2 = (uint)pSVar6->max_length;
          if ((long)(int)uVar2 <= (long)uVar9) goto LAB_0413e2ff;
        } while (uVar9 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_0413e2ff:
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
       ((System_Collections_Generic_Dictionary_object__object__o *)
        **(undefined8 **)(TypeInfo_UIManager + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)
                         **(undefined8 **)(TypeInfo_UIManager + 0xb8),*(Il2CppObject **)(lVar4 + 0x18),
                         MethodInfo_Boolean_ContainsKey);
      if ((char)bVar5 != '\0') {
        return;
      }
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar4 != 0) &&
         (__this_00 = *(Settings_TypedSetting_T__o **)(lVar4 + 0x20),
         __this_00 != (Settings_TypedSetting_T__o *)0x0)) {
        Settings_TypedSetting<object>__set_Value(__this_00,"English",MethodInfo_Void_set_Value);
        plVar8 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
          return;
        }
      }
    }
  }
LAB_0413e441:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.UIManager$$GetThemeColor
// il2cpp: UnityEngine_Color_o UI_UIManager__GetThemeColor (System_String_o* panel, System_String_o* category, System_String_o* item, System_String_o* fallbackPanel, const MethodInfo* method);
// 0x4140eb0

UnityEngine_Color_o
UI_UIManager__GetThemeColor
          (System_String_o *panel,System_String_o *category,System_String_o *item,
          System_String_o *fallbackPanel,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  long lVar6;
  SimpleJSONFixed_JSONNode_c *pSVar7;
  System_Single_array *pSVar8;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  bool_conflict bVar9;
  Il2CppObject *a;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  long *plVar11;
  System_String_o *pSVar12;
  System_Collections_Generic_List_float__o *__this_03;
  System_String_o *s;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Color_o UVar17;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar18;
  undefined8 in_stack_fffffffffffffee8;
  System_String_o *pSVar19;
  Il2CppMethodPointer pIVar20;
  Il2CppMethodPointer pIVar21;
  InvokerMethod pIVar22;
  char *pcVar23;
  Il2CppClass *pIVar24;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  
  if (DAT_0570498a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_JSONObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Single);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_float);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"{0} {1} {2} theme error.");
    DAT_0570498a = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_UIManager + 0xb8) + 8);
  if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_04141501:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar9 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    (pSVar5,*(Il2CppObject **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x18),MethodInfo_Boolean_ContainsKey);
  if ((char)bVar9 == '\0') {
    a = (Il2CppObject *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 8);
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_04141501;
    a = System_Collections_Generic_Dictionary<object__object>__get_Item
                  (pSVar5,*(Il2CppObject **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x18),MethodInfo_JSONObject_get_Item);
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  bVar9 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    if (a == (Il2CppObject *)0x0) goto LAB_04141501;
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)
              (*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).methodPtr)
                        (a,panel,(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item
                                 ).method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar9 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      plVar11 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).
                          methodPtr)(a,panel,(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)
                                             ->_7_get_Item).method);
      if (plVar11 == (long *)0x0) goto LAB_04141501;
      pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                (**(code **)(*plVar11 + 0x1a8))(plVar11,category,*(undefined8 *)(*plVar11 + 0x1b0));
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar9 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        plVar11 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).
                            methodPtr)(a,panel,(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable
                                                )->_7_get_Item).method);
        if ((plVar11 == (long *)0x0) ||
           (plVar11 = (long *)(**(code **)(*plVar11 + 0x1a8))
                                        (plVar11,category,*(undefined8 *)(*plVar11 + 0x1b0)),
           plVar11 == (long *)0x0)) goto LAB_04141501;
        pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                  (**(code **)(*plVar11 + 0x1a8))(plVar11,item,*(undefined8 *)(*plVar11 + 0x1b0));
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar9 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0)
        ;
        if ((char)bVar9 == '\0') {
          pSVar12 = category;
          pSVar19 = item;
          __this_03 = (System_Collections_Generic_List_float__o *)il2cpp_runtime_glue(TypeInfo_List_float);
          System_Collections_Generic_List<float>___ctor(__this_03,MethodInfo_List_1_System_Single);
          plVar11 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).
                              methodPtr)(a,panel,(((SimpleJSONFixed_JSONNode_VTable *)
                                                  a->klass->vtable)->_7_get_Item).method);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          plVar11 = (long *)(**(code **)(*plVar11 + 0x1a8))
                                      (plVar11,category,*(undefined8 *)(*plVar11 + 0x1b0));
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          plVar11 = (long *)(**(code **)(*plVar11 + 0x1a8))
                                      (plVar11,item,*(undefined8 *)(*plVar11 + 0x1b0));
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(TypeInfo_JSONArray + 0x130)) ||
             (*(long *)(*(long *)(*plVar11 + 200) + -8 + (ulong)*(byte *)(TypeInfo_JSONArray + 0x130) * 8)
              != TypeInfo_JSONArray)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(plVar11);
          }
          lVar6 = *plVar11;
          if ((*(byte *)(lVar6 + 0x130) < *(byte *)(TypeInfo_JSONArray + 0x130)) ||
             (*(long *)(*(long *)(lVar6 + 200) + -8 + (ulong)*(byte *)(TypeInfo_JSONArray + 0x130) * 8) !=
              TypeInfo_JSONArray)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(plVar11);
          }
          (**(code **)(lVar6 + 0x338))(&local_78,plVar11,*(undefined8 *)(lVar6 + 0x340));
          if (__this_03 == (System_Collections_Generic_List_float__o *)0x0) {
            __this_01.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)panel;
            __this_01.fields._0_8_ = in_stack_fffffffffffffee8;
            __this_01.fields.m_Object.fields._8_8_ = pSVar12;
            __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar19;
            __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_78;
            __this_01.fields.m_Object.fields._32_8_ = pIStack_70;
            __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_68
            ;
            __this_01.fields.m_Array.fields._8_8_ = pcStack_60;
            __this_01.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)local_58;
            bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_01,(MethodInfo *)&stack0xffffffffffffff08);
            if ((char)bVar9 == '\0') {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            __this_02.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)panel;
            __this_02.fields._0_8_ = in_stack_fffffffffffffee8;
            __this_02.fields.m_Object.fields._8_8_ = pSVar12;
            __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar19;
            __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_78;
            __this_02.fields.m_Object.fields._32_8_ = pIStack_70;
            __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_68
            ;
            __this_02.fields.m_Array.fields._8_8_ = pcStack_60;
            __this_02.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)local_58;
            SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_02,(MethodInfo *)&stack0xffffffffffffff08);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(SVar18,(MethodInfo *)0x0);
            if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              pSVar7 = pSVar10->klass;
              bVar2 = (TypeInfo_JSONNumber->_2).naturalAligment;
              if ((bVar2 <= (pSVar7->_2).naturalAligment) &&
                 ((pSVar7->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_JSONNumber)) {
                pSVar12 = (System_String_o *)(*(pSVar7->vtable)._9_get_Value.methodPtr)(pSVar10);
                System_Single__Parse(pSVar12,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
LAB_041415c9:
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pSVar10);
            }
LAB_04141576:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pIVar20 = local_78;
          pIVar21 = pIStack_70;
          pIVar22 = local_68;
          pcVar23 = pcStack_60;
          pIVar24 = local_58;
          while (__this.fields.m_Object.fields._dictionary =
                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)panel,
                __this.fields._0_8_ = in_stack_fffffffffffffee8,
                __this.fields.m_Object.fields._8_8_ = pSVar12,
                __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar19,
                __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar20,
                __this.fields.m_Object.fields._32_8_ = pIVar21,
                __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar22
                , __this.fields.m_Array.fields._8_8_ = pcVar23,
                __this.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)pIVar24,
                bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                  (__this,(MethodInfo *)&stack0xffffffffffffff08),
                (char)bVar9 != '\0') {
            __this_00.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)panel;
            __this_00.fields._0_8_ = in_stack_fffffffffffffee8;
            __this_00.fields.m_Object.fields._8_8_ = pSVar12;
            __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar19;
            __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar20;
            __this_00.fields.m_Object.fields._32_8_ = pIVar21;
            __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar22;
            __this_00.fields.m_Array.fields._8_8_ = pcVar23;
            __this_00.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)pIVar24;
            SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_00,(MethodInfo *)&stack0xffffffffffffff08);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(SVar18,(MethodInfo *)0x0);
            if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04141576;
            pSVar7 = pSVar10->klass;
            bVar2 = (TypeInfo_JSONNumber->_2).naturalAligment;
            if (((pSVar7->_2).naturalAligment < bVar2) ||
               ((pSVar7->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_JSONNumber)) goto LAB_041415c9;
            s = (System_String_o *)(*(pSVar7->vtable)._9_get_Value.methodPtr)(pSVar10);
            fVar13 = System_Single__Parse(s,(MethodInfo *)0x0);
            lVar6 = MethodInfo_Void_Add;
            piVar1 = &(__this_03->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (__this_03->fields)._items;
            if (pSVar8 == (System_Single_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar4 = (__this_03->fields)._size;
            if (uVar4 < (uint)pSVar8->max_length) {
              (__this_03->fields)._size = uVar4 + 1;
              pSVar8->m_Items[(int)uVar4] = fVar13 / 255.0;
            }
            else {
              System_Collections_Generic_List<float>__AddWithResize
                        (__this_03,fVar13 / 255.0,
                         *(MethodInfo_35DFAF0 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          fVar14 = System_Collections_Generic_List<float>__get_Item(__this_03,0,MethodInfo_Single_get_Item);
          fVar15 = System_Collections_Generic_List<float>__get_Item(__this_03,1,MethodInfo_Single_get_Item);
          fVar13 = System_Collections_Generic_List<float>__get_Item(__this_03,2,MethodInfo_Single_get_Item);
          fVar16 = System_Collections_Generic_List<float>__get_Item(__this_03,3,MethodInfo_Single_get_Item);
          goto LAB_04141223;
        }
      }
    }
  }
  bVar9 = System_String__op_Inequality(panel,fallbackPanel,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    pSVar12 = System_String__Format
                        ("{0} {1} {2} theme error.",(Il2CppObject *)panel,(Il2CppObject *)category,
                         (Il2CppObject *)item,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar12,(MethodInfo *)0x0);
    fVar13 = 1.0;
    fVar16 = 1.0;
    fVar14 = fVar13;
    fVar15 = fVar16;
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar17 = UI_UIManager__GetThemeColor(fallbackPanel,category,item,fallbackPanel,method);
    fVar13 = UVar17.fields.b;
    fVar16 = UVar17.fields.a;
    fVar14 = UVar17.fields.r;
    fVar15 = UVar17.fields.g;
  }
LAB_04141223:
  UVar17.fields.g = fVar15;
  UVar17.fields.r = fVar14;
  UVar17.fields.a = fVar16;
  UVar17.fields.b = fVar13;
  return (UnityEngine_Color_o)UVar17.fields;
}


// UI.UIManager$$GetThemeTexture
// il2cpp: UnityEngine_Texture2D_o* UI_UIManager__GetThemeTexture (System_String_o* panel, System_String_o* category, System_String_o* item, System_String_o* fallbackPanel, const MethodInfo* method);
// 0x4141880

UnityEngine_Texture2D_o *
UI_UIManager__GetThemeTexture
          (System_String_o *panel,System_String_o *category,System_String_o *item,
          System_String_o *fallbackPanel,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool_conflict bVar4;
  Il2CppObject *a;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  UnityEngine_Texture2D_o *pUVar9;
  
LAB_041418b0:
  if (DAT_0570498b == '\0') goto LAB_041418f0;
LAB_041418b9:
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto LAB_04141977;
LAB_041418c9:
  lVar2 = *(long *)(TypeInfo_UIManager + 0xb8);
  pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 8);
  do {
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_04141d13:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar4 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar3,*(Il2CppObject **)(lVar2 + 0x18),MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 == '\0') {
      a = (Il2CppObject *)0x0;
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    else {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_UIManager + 0xb8) + 8);
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_04141d13;
      a = System_Collections_Generic_Dictionary<object__object>__get_Item
                    (pSVar3,*(Il2CppObject **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x18),MethodInfo_JSONObject_get_Item);
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (a == (Il2CppObject *)0x0) goto LAB_04141d13;
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)
               (*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).methodPtr)
                         (a,panel,(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->
                                  _7_get_Item).method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        plVar6 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).
                           methodPtr)(a,panel,(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)
                                              ->_7_get_Item).method);
        if (plVar6 == (long *)0x0) goto LAB_04141d13;
        pSVar5 = (SimpleJSONFixed_JSONNode_o *)
                 (**(code **)(*plVar6 + 0x1a8))(plVar6,category,*(undefined8 *)(*plVar6 + 0x1b0));
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          plVar6 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).
                             methodPtr)(a,panel,(((SimpleJSONFixed_JSONNode_VTable *)
                                                 a->klass->vtable)->_7_get_Item).method);
          if ((plVar6 == (long *)0x0) ||
             (plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                         (plVar6,category,*(undefined8 *)(*plVar6 + 0x1b0)),
             plVar6 == (long *)0x0)) goto LAB_04141d13;
          pSVar5 = (SimpleJSONFixed_JSONNode_o *)
                   (**(code **)(*plVar6 + 0x1a8))(plVar6,item,*(undefined8 *)(*plVar6 + 0x1b0));
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                            (pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
            plVar6 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).
                               methodPtr)(a,panel,(((SimpleJSONFixed_JSONNode_VTable *)
                                                   a->klass->vtable)->_7_get_Item).method);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                       (plVar6,category,*(undefined8 *)(*plVar6 + 0x1b0));
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                       (plVar6,item,*(undefined8 *)(*plVar6 + 0x1b0));
            if (plVar6 != (long *)0x0) {
              pSVar8 = (System_String_o *)
                       (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
              pSVar8 = System_String__Concat("Sprites/Panels/MenuBackground",pSVar8,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pUVar9 = (UnityEngine_Texture2D_o *)
                       ApplicationManagers_ResourceManager__LoadAsset
                                 (pSVar7,pSVar8,1,(MethodInfo *)0x0);
              if (pUVar9 == (UnityEngine_Texture2D_o *)0x0) {
                return (UnityEngine_Texture2D_o *)0x0;
              }
              if (pUVar9->klass == TypeInfo_Texture2D) {
                return pUVar9;
              }
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pUVar9);
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
    bVar4 = System_String__op_Inequality(panel,fallbackPanel,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pSVar7 = System_String__Format
                         ("{0} {1} {2} theme error.",(Il2CppObject *)panel,(Il2CppObject *)category,
                          (Il2CppObject *)item,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      return (UnityEngine_Texture2D_o *)0x0;
    }
    panel = fallbackPanel;
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto LAB_041418b0;
    il2cpp_init_class();
    if (DAT_0570498b != '\0') goto LAB_041418b9;
LAB_041418f0:
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_JSONObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"{0} {1} {2} theme error.");
    il2cpp_init_method_metadata(&"Sprites/Panels/MenuBackground");
    DAT_0570498b = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto LAB_041418c9;
LAB_04141977:
    il2cpp_init_class();
    lVar2 = *(long *)(TypeInfo_UIManager + 0xb8);
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 8);
  } while( true );
}


// UI.UIManager$$GetThemeColorBlock
// il2cpp: UnityEngine_UI_ColorBlock_o UI_UIManager__GetThemeColorBlock (System_String_o* panel, System_String_o* category, System_String_o* item, System_String_o* fallbackPanel, const MethodInfo* method);
// 0x4141e50

UnityEngine_UI_ColorBlock_o *
UI_UIManager__GetThemeColorBlock
          (UnityEngine_UI_ColorBlock_o *__return_storage_ptr__,System_String_o *panel,
          System_String_o *category,System_String_o *item,System_String_o *fallbackPanel,
          MethodInfo *method)

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
  if (DAT_0570498c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ColorBlock);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"PressedColor");
    il2cpp_init_method_metadata(&"HighlightedColor");
    il2cpp_init_method_metadata(&"NormalColor");
    DAT_0570498c = '\x01';
  }
  pSVar1 = System_String__Concat(item,"NormalColor",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UVar2 = UI_UIManager__GetThemeColor(panel,category,pSVar1,fallbackPanel,method_00);
  pSVar1 = System_String__Concat(item,"HighlightedColor",(MethodInfo *)0x0);
  UVar3 = UI_UIManager__GetThemeColor(panel,category,pSVar1,fallbackPanel,method_00);
  pSVar1 = System_String__Concat(item,"PressedColor",(MethodInfo *)0x0);
  UVar4 = UI_UIManager__GetThemeColor(panel,category,pSVar1,fallbackPanel,method_00);
  if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
    il2cpp_init_class();
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
// 0x413be10

System_String_array * UI_UIManager__GetUIThemes(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Object_array *pSVar3;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  bool bVar4;
  long lVar5;
  bool bVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_object__o *__this_03;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  System_String_array *pSVar8;
  undefined1 in_stack_ffffffffffffff88 [15];
  char cVar9;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar10;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (DAT_0570498d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Insert);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Dark");
    il2cpp_init_method_metadata(&"Light");
    DAT_0570498d = '\x01';
  }
  __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_03,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_UIManager + 0xb8) + 8);
  if ((__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_04 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                            (__this,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
     __this_04 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
              (&local_48,__this_04,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    cVar9 = '\0';
    bVar4 = false;
    pSVar10 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
              local_48.fields._dictionary;
    do {
      while (bVar6 = bVar4, __this_03 != (System_Collections_Generic_List_object__o *)0x0) {
        while( true ) {
          while( true ) {
            __this_01.fields._version._3_1_ = cVar9;
            __this_01.fields._0_15_ = in_stack_ffffffffffffff88;
            __this_01.fields._currentKey = (Il2CppObject *)pSVar10;
            bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                              (__this_01,(MethodInfo_31D0850 *)&stack0xffffffffffffff98);
            if ((char)bVar7 == '\0') goto LAB_0413c0c6;
            bVar7 = System_String__op_Equality
                              ((System_String_o *)local_48.fields._currentKey,"Light",
                               (MethodInfo *)0x0);
            if ((char)bVar7 == '\0') break;
            bVar4 = true;
          }
          bVar7 = System_String__op_Equality
                            ((System_String_o *)local_48.fields._currentKey,"Dark",
                             (MethodInfo *)0x0);
          lVar5 = MethodInfo_Void_Add;
          if ((char)bVar7 != '\0') break;
          piVar1 = &(__this_03->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_03->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (__this_03->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_03->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = local_48.fields._currentKey;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,local_48.fields._currentKey);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_03,local_48.fields._currentKey,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
        cVar9 = '\x01';
      }
      do {
        bVar4 = bVar6;
        __this_00.fields._version._3_1_ = cVar9;
        __this_00.fields._0_15_ = in_stack_ffffffffffffff88;
        __this_00.fields._currentKey = (Il2CppObject *)pSVar10;
        bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                          (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') goto LAB_0413c0c6;
        bVar7 = System_String__op_Equality
                          ((System_String_o *)local_48.fields._currentKey,"Light",
                           (MethodInfo *)0x0);
        bVar6 = true;
      } while ((char)bVar7 != '\0');
      bVar7 = System_String__op_Equality
                        ((System_String_o *)local_48.fields._currentKey,"Dark",
                         (MethodInfo *)0x0);
      cVar9 = '\x01';
      if ((char)bVar7 == '\0') {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    } while( true );
  }
LAB_0413c159:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_0413c0c6:
  __this_02.fields._version._3_1_ = cVar9;
  __this_02.fields._0_15_ = in_stack_ffffffffffffff88;
  __this_02.fields._currentKey = (Il2CppObject *)pSVar10;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
            (__this_02,(MethodInfo_31D0840 *)&stack0xffffffffffffff98);
  if (cVar9 != '\0') {
    if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0413c159;
    System_Collections_Generic_List<object>__Insert
              (__this_03,0,(Il2CppObject *)"Dark",MethodInfo_Void_Insert);
  }
  if (bVar4) {
    if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__Insert
                (__this_03,0,(Il2CppObject *)"Light",MethodInfo_Void_Insert);
LAB_0413c133:
      pSVar8 = (System_String_array *)
               System_Collections_Generic_List<object>__ToArray(__this_03,MethodInfo_String___ToArray);
      return pSVar8;
    }
  }
  else if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) goto LAB_0413c133;
  goto LAB_0413c159;
}


// UI.UIManager$$LoadUIThemes
// il2cpp: void UI_UIManager__LoadUIThemes (const MethodInfo* method);
// 0x413e460

void UI_UIManager__LoadUIThemes(MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  long lVar4;
  Settings_TypedSetting_T__o *__this;
  bool_conflict bVar5;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  Il2CppObject *value;
  SimpleJSONFixed_JSONNode_o *d;
  long *plVar8;
  Il2CppObject *key;
  ulong uVar9;
  
  if (DAT_0570498e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"No UI theme folder found, creating it.");
    il2cpp_init_method_metadata(&"Dark");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"*.json");
    DAT_0570498e = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x28),(MethodInfo *)0x0)
  ;
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
    pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x28);
  }
  else {
    pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x28);
  }
  if ((char)bVar5 == '\0') {
    System_IO_Directory__CreateDirectory(pSVar7,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__Log("No UI theme folder found, creating it.",(MethodInfo *)0x0);
    return;
  }
  pSVar6 = System_IO_Directory__GetFiles(pSVar7,"*.json",(MethodInfo *)0x0);
  if (pSVar6 != (System_String_array *)0x0) {
    if (0 < (int)pSVar6->max_length) {
      uVar9 = 0;
      if ((pSVar6->max_length & 0xffffffff) != 0) {
        do {
          pSVar7 = System_IO_File__ReadAllText(pSVar6->m_Items[uVar9],(MethodInfo *)0x0);
          value = (Il2CppObject *)SimpleJSONFixed_JSON__Parse(pSVar7,(MethodInfo *)0x0);
          if (value != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_JSONObject->_2).naturalAligment;
            if (((value->klass->_2).naturalAligment < bVar1) ||
               ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_JSONObject)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(value);
            }
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (value == (Il2CppObject *)0x0) goto LAB_0413e884;
          pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_UIManager + 0xb8) + 8);
          d = (SimpleJSONFixed_JSONNode_o *)
              (*value->klass->vtable[7].methodPtr)
                        (value,"Name",value->klass->vtable[7].method);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(d,(MethodInfo *)0x0);
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_0413e884;
          bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                            (pSVar3,(Il2CppObject *)pSVar7,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 == '\0') {
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      (*(long *)(TypeInfo_UIManager + 0xb8) + 8);
            plVar8 = (long *)(*value->klass->vtable[7].methodPtr)
                                       (value,"Name",value->klass->vtable[7].method);
            if ((plVar8 == (long *)0x0) ||
               (key = (Il2CppObject *)
                      (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0)),
               pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
            goto LAB_0413e884;
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar3,key,value,MethodInfo_Void_Add);
          }
          uVar9 = uVar9 + 1;
          uVar2 = (uint)pSVar6->max_length;
          if ((long)(int)uVar2 <= (long)uVar9) goto LAB_0413e741;
        } while (uVar9 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_0413e741:
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
       (pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_UIManager + 0xb8) + 8),
       pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar3,*(Il2CppObject **)(lVar4 + 0x18),MethodInfo_Boolean_ContainsKey);
      if ((char)bVar5 != '\0') {
        return;
      }
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar4 != 0) &&
         (__this = *(Settings_TypedSetting_T__o **)(lVar4 + 0x20),
         __this != (Settings_TypedSetting_T__o *)0x0)) {
        Settings_TypedSetting<object>__set_Value(__this,"Dark",MethodInfo_Void_set_Value);
        plVar8 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
          return;
        }
      }
    }
  }
LAB_0413e884:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.UIManager$$Update
// il2cpp: void UI_UIManager__Update (UI_UIManager_o* __this, const MethodInfo* method);
// 0x4141fd0

void UI_UIManager__Update(UI_UIManager_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  UnityEngine_Component_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  bool_conflict bVar4;
  int32_t iVar5;
  UnityEngine_Object_o *pUVar6;
  System_Object_array *pSVar7;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_TextGenerator_o *__this_03;
  long lVar8;
  uint uVar9;
  MethodInfo *method_00;
  long lVar10;
  float fVar11;
  double x;
  double dVar12;
  float fVar13;
  Il2CppMethodPointer pIStack_38;
  
  if (DAT_0570498f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text___GetComponentsInChildren_Text);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570498f = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar13 = *(float *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x6c);
  fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  lVar10 = TypeInfo_UIManager;
  fVar11 = fVar11 + fVar13;
  lVar8 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(float *)(lVar8 + 0x6c) = fVar11;
  fVar13 = *(float *)(lVar8 + 0x70) + 1.0;
  *(float *)(lVar8 + 0x70) = fVar13;
  if (*(float *)(lVar8 + 0x74) <= fVar11) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      il2cpp_init_class();
      fVar11 = *(float *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x6c);
      fVar13 = *(float *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x70);
      iVar2 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_init_class();
    }
    x = (double)(fVar13 / fVar11);
    method_00 = (MethodInfo *)&stack0xffffffffffffffc8;
    dVar12 = modf(x,(double *)method_00,method);
    if (0.0 <= fVar13 / fVar11) {
      if ((dVar12 != 0.5) || (NAN(dVar12))) {
        pIStack_38 = (Il2CppMethodPointer)floor(x + 0.5,method_00);
      }
      else if (((long)(double)pIStack_38 & 1U) != 0) {
        pIStack_38 = (Il2CppMethodPointer)((double)pIStack_38 + 1.0);
      }
    }
    else if ((dVar12 != -0.5) || (NAN(dVar12))) {
      pIStack_38 = (Il2CppMethodPointer)ceil(x + -0.5,method_00);
    }
    else if (((long)(double)pIStack_38 & 1U) != 0) {
      pIStack_38 = (Il2CppMethodPointer)((double)pIStack_38 + -1.0);
    }
    lVar10 = TypeInfo_UIManager;
    lVar8 = *(long *)(TypeInfo_UIManager + 0xb8);
    *(int *)(lVar8 + 0x68) = (int)(double)pIStack_38;
    *(undefined8 *)(lVar8 + 0x6c) = 0;
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    il2cpp_init_class();
    lVar10 = TypeInfo_UIManager;
  }
  pUVar6 = *(UnityEngine_Object_o **)(*(long *)(lVar10 + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar8 = *(long *)(TypeInfo_UIManager + 0xb8);
      cVar1 = *(char *)(lVar8 + 0x58);
    }
    else {
      lVar8 = *(long *)(TypeInfo_UIManager + 0xb8);
      cVar1 = *(char *)(lVar8 + 0x58);
    }
    if (cVar1 != '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
        lVar8 = *(long *)(TypeInfo_UIManager + 0xb8);
      }
      if (*(UnityEngine_Component_o **)(lVar8 + 0x28) == (UnityEngine_Component_o *)0x0) {
LAB_0414248d:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar6 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject
                         (*(UnityEngine_Component_o **)(lVar8 + 0x28),(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        (pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar8 = *(long *)(TypeInfo_UIManager + 0xb8);
        *(undefined1 *)(lVar8 + 0x58) = 0;
        __this_00 = *(UnityEngine_Component_o **)(lVar8 + 0x28);
        if ((__this_00 == (UnityEngine_Component_o *)0x0) ||
           (pSVar7 = UnityEngine_Component__GetComponentsInChildren<object>(__this_00,MethodInfo_Text___GetComponentsInChildren_Text),
           pSVar7 == (System_Object_array *)0x0)) goto LAB_0414248d;
        iVar2 = (int)pSVar7->max_length;
        if (0 < iVar2) {
          uVar9 = 0;
          if (iVar2 != 0) {
            do {
              __this_01 = (UnityEngine_UI_Text_o *)pSVar7->m_Items[(int)uVar9];
              if ((__this_01 == (UnityEngine_UI_Text_o *)0x0) ||
                 (__this_02 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
                 __this_02 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0414248d;
              bVar4 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
              if (((char)bVar4 != '\0') &&
                 (iVar5 = UnityEngine_UI_Text__get_fontSize(__this_01,(MethodInfo *)0x0), 2 < iVar5)
                 ) {
                __this_03 = UnityEngine_UI_Text__get_cachedTextGenerator
                                      (__this_01,(MethodInfo *)0x0);
                if (__this_03 == (UnityEngine_TextGenerator_o *)0x0) goto LAB_0414248d;
                iVar5 = UnityEngine_TextGenerator__get_characterCountVisible
                                  (__this_03,(MethodInfo *)0x0);
                lVar8 = (*(__this_01->klass->vtable)._74_get_text.methodPtr)(__this_01);
                if (lVar8 == 0) goto LAB_0414248d;
                if (iVar5 < *(int *)(lVar8 + 0x10)) {
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  if (*(char *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x59) != '\0') {
                    iVar5 = UnityEngine_UI_Text__get_fontSize(__this_01,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    iVar5 = System_Math__Max(iVar5 + -1,1,(MethodInfo *)0x0);
                    UnityEngine_UI_Text__set_fontSize(__this_01,iVar5,(MethodInfo *)0x0);
                  }
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  *(undefined1 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x58) = 1;
                }
              }
              uVar9 = uVar9 + 1;
              uVar3 = (uint)pSVar7->max_length;
              if ((int)uVar3 <= (int)uVar9) goto LAB_0414247f;
            } while (uVar9 < uVar3);
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_0414247f:
        iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
        lVar8 = TypeInfo_UIManager;
        goto joined_r0x04142459;
      }
    }
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar8 = TypeInfo_UIManager;
  *(undefined1 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x58) = 0;
  iVar2 = *(int *)(lVar8 + 0xe4);
joined_r0x04142459:
  if (iVar2 == 0) {
    il2cpp_init_class();
    lVar8 = TypeInfo_UIManager;
  }
  *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 0x59) = *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 0x58);
  return;
}


// UI.UIManager$$GetFPS
// il2cpp: int32_t UI_UIManager__GetFPS (const MethodInfo* method);
// 0x41424a0

int32_t UI_UIManager__GetFPS(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704990 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05704990 = '\x01';
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(int32_t *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(int32_t *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x68);
}


// UI.UIManager$$.ctor
// il2cpp: void UI_UIManager___ctor (UI_UIManager_o* __this, const MethodInfo* method);
// 0x4142510

void UI_UIManager___ctor(UI_UIManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.UIManager$$.cctor
// il2cpp: void UI_UIManager___cctor (const MethodInfo* method);
// 0x4142520

void UI_UIManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05704991 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSour);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONO);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Type_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__JSONObject);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_Type__string);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__AudioSource);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05704991 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__JSONObject);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONO);
  **(undefined8 **)(TypeInfo_UIManager + 0xb8) = pSVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_UIManager + 0xb8),pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__JSONObject);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONO);
  lVar1 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_Type__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_Type_System_String);
  lVar1 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x10,pSVar2);
  *(undefined4 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x38) = 0x3f800000;
  pSVar3 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(pSVar3,MethodInfo_List_1_System_String);
  lVar1 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar1 + 0x40) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x40,pSVar3);
  pSVar3 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(pSVar3,MethodInfo_List_1_System_String);
  lVar1 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar1 + 0x48) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x48,pSVar3);
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0x50) = __this;
  il2cpp_runtime_glue(lVar1 + 0x50,__this);
  *(undefined2 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x58) = 0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__AudioSource);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSour);
  lVar1 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x60) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x60,pSVar2);
  lVar1 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(undefined4 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x6c) = 0;
  *(undefined4 *)(lVar1 + 0x74) = 0x3f000000;
  return;
}


