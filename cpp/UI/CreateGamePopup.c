// Type: UI.CreateGamePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CreateGamePopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CreateGamePopup/CreateGamePopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.CreateGamePopup.<>c$$.cctor
// il2cpp: void UI_CreateGamePopup___c___cctor (const MethodInfo* method);
// 0x406ee90

void UI_CreateGamePopup_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057044a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057044a0 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.CreateGamePopup.<>c$$.ctor
// il2cpp: void UI_CreateGamePopup___c___ctor (UI_CreateGamePopup___c_o* __this, const MethodInfo* method);
// 0x406ef00

void UI_CreateGamePopup_<>c___ctor(UI_CreateGamePopup___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup.<>c$$<SyncAddonSettings>b__26_0
// il2cpp: System_String_o* UI_CreateGamePopup___c___SyncAddonSettings_b__26_0 (UI_CreateGamePopup___c_o* __this, Settings_StringSetting_o* x, const MethodInfo* method);
// 0x406ef10

System_String_o *
UI_CreateGamePopup_<>c__<SyncAddonSettings>b__26_0
          (UI_CreateGamePopup___c_o *__this,Settings_StringSetting_o *x,MethodInfo *method)

{
  if (DAT_057044a1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057044a1 = '\x01';
  }
  if (x != (Settings_StringSetting_o *)0x0) {
    return (x->fields)._value;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGamePopup.<>c__DisplayClass28_0$$.ctor
// il2cpp: void UI_CreateGamePopup___c__DisplayClass28_0___ctor (UI_CreateGamePopup___c__DisplayClass28_0_o* __this, const MethodInfo* method);
// 0x406c8e0

void UI_CreateGamePopup_<>c__DisplayClass28_0___ctor
               (UI_CreateGamePopup___c__DisplayClass28_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup.<>c__DisplayClass28_0$$<SetupTopButtons>b__0
// il2cpp: void UI_CreateGamePopup___c__DisplayClass28_0___SetupTopButtons_b__0 (UI_CreateGamePopup___c__DisplayClass28_0_o* __this, const MethodInfo* method);
// 0x406ef40

void UI_CreateGamePopup_<>c__DisplayClass28_0__<SetupTopButtons>b__0
               (UI_CreateGamePopup___c__DisplayClass28_0_o *__this,MethodInfo *method)

{
  UI_CreateGamePopup_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_CreateGamePopup_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(__this->fields).buttonName,
               (pUVar1->klass->vtable)._28_SetCategoryPanel.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGamePopup.<>c__DisplayClass31_0$$.ctor
// il2cpp: void UI_CreateGamePopup___c__DisplayClass31_0___ctor (UI_CreateGamePopup___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x406cf40

void UI_CreateGamePopup_<>c__DisplayClass31_0___ctor
               (UI_CreateGamePopup___c__DisplayClass31_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup.<>c__DisplayClass31_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_CreateGamePopup___c__DisplayClass31_0___SetupBottomButtons_b__0 (UI_CreateGamePopup___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x406ef70

void UI_CreateGamePopup_<>c__DisplayClass31_0__<SetupBottomButtons>b__0
               (UI_CreateGamePopup___c__DisplayClass31_0_o *__this,MethodInfo *method)

{
  UI_CreateGamePopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CreateGamePopup_o *)0x0) {
    UI_CreateGamePopup__OnBottomBarButtonClick(__this_00,(__this->fields).buttonName,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGamePopup$$get_Title
// il2cpp: System_String_o* UI_CreateGamePopup__get_Title (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406bdc0

System_String_o * UI_CreateGamePopup__get_Title(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.CreateGamePopup$$get_Width
// il2cpp: float UI_CreateGamePopup__get_Width (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406bde0

float UI_CreateGamePopup__get_Width(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  return 1010.0;
}


// UI.CreateGamePopup$$get_Height
// il2cpp: float UI_CreateGamePopup__get_Height (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406bdf0

float UI_CreateGamePopup__get_Height(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  return 630.0;
}


// UI.CreateGamePopup$$get_CategoryPanel
// il2cpp: bool UI_CreateGamePopup__get_CategoryPanel (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406be00

bool_conflict UI_CreateGamePopup__get_CategoryPanel(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGamePopup$$get_CategoryButtons
// il2cpp: bool UI_CreateGamePopup__get_CategoryButtons (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406be10

bool_conflict
UI_CreateGamePopup__get_CategoryButtons(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGamePopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_CreateGamePopup__get_DefaultCategoryPanel (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406be20

System_String_o *
UI_CreateGamePopup__get_DefaultCategoryPanel(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  if (DAT_05704490 == '\0') {
    il2cpp_init_method_metadata(&"General");
    DAT_05704490 = '\x01';
  }
  return "General";
}


// UI.CreateGamePopup$$get_UseSound
// il2cpp: bool UI_CreateGamePopup__get_UseSound (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406be50

bool_conflict UI_CreateGamePopup__get_UseSound(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGamePopup$$Setup
// il2cpp: void UI_CreateGamePopup__Setup (UI_CreateGamePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x406be60

void UI_CreateGamePopup__Setup
               (UI_CreateGamePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Utility_FileWatcherExtension_o **ppUVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_00;
  Utility_FileWatcherExtension_o *pUVar3;
  System_IO_FileSystemEventHandler_o *pSVar4;
  System_IO_RenamedEventHandler_o *value;
  
  if (DAT_05704491 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&MethodInfo_Void_RefreshList);
    il2cpp_init_method_metadata(&TypeInfo_FileSystemEventHandler);
    il2cpp_init_method_metadata(&MethodInfo_FileWatcherExtension_AddComponent_FileWatcherExt);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RenamedEventHandler);
    DAT_05704491 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_CreateGamePopup__SetupBottomButtons(__this,(MethodInfo *)parent);
  pUVar3 = (__this->fields)._watcher;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._watcher;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_0406c0f7;
    pUVar3 = (Utility_FileWatcherExtension_o *)
             UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_FileWatcherExtension_AddComponent_FileWatcherExt);
    *ppUVar1 = pUVar3;
    il2cpp_runtime_glue(ppUVar1,pUVar3);
  }
  if (*ppUVar1 != (Utility_FileWatcherExtension_o *)0x0) {
    Utility_FileWatcherExtension__set_NotifyFilter(*ppUVar1,0x13,(MethodInfo *)0x0);
    if (*ppUVar1 != (Utility_FileWatcherExtension_o *)0x0) {
      Utility_FileWatcherExtension__set_IncludeSubdirectories(*ppUVar1,1,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._watcher;
      pSVar4 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_glue(TypeInfo_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor();
      if (pUVar3 != (Utility_FileWatcherExtension_o *)0x0) {
        Utility_FileWatcherExtension__add_Changed(pUVar3,pSVar4,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._watcher;
        pSVar4 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_glue(TypeInfo_FileSystemEventHandler);
        System_IO_FileSystemEventHandler___ctor();
        if (pUVar3 != (Utility_FileWatcherExtension_o *)0x0) {
          Utility_FileWatcherExtension__add_Created(pUVar3,pSVar4,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._watcher;
          pSVar4 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_glue(TypeInfo_FileSystemEventHandler);
          System_IO_FileSystemEventHandler___ctor();
          if (pUVar3 != (Utility_FileWatcherExtension_o *)0x0) {
            Utility_FileWatcherExtension__add_Deleted(pUVar3,pSVar4,(MethodInfo *)0x0);
            pUVar3 = (__this->fields)._watcher;
            value = (System_IO_RenamedEventHandler_o *)il2cpp_runtime_glue(TypeInfo_RenamedEventHandler);
            System_IO_RenamedEventHandler___ctor();
            if (pUVar3 != (Utility_FileWatcherExtension_o *)0x0) {
              Utility_FileWatcherExtension__add_Renamed(pUVar3,value,(MethodInfo *)0x0);
              pUVar3 = *ppUVar1;
              if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (pUVar3 != (Utility_FileWatcherExtension_o *)0x0) {
                Utility_FileWatcherExtension__AddWatcher
                          (pUVar3,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 8),
                           (MethodInfo *)0x0);
                if (*ppUVar1 != (Utility_FileWatcherExtension_o *)0x0) {
                  Utility_FileWatcherExtension__AddWatcher
                            (*ppUVar1,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),
                             (MethodInfo *)0x0);
                  if (*ppUVar1 != (Utility_FileWatcherExtension_o *)0x0) {
                    Utility_FileWatcherExtension__AddWatcher
                              (*ppUVar1,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x20)
                               ,(MethodInfo *)0x0);
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
LAB_0406c0f7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGamePopup$$RefreshList
// il2cpp: void UI_CreateGamePopup__RefreshList (UI_CreateGamePopup_o* __this, Il2CppObject* source, System_IO_FileSystemEventArgs_o* e, const MethodInfo* method);
// 0x406c450

void UI_CreateGamePopup__RefreshList
               (UI_CreateGamePopup_o *__this,Il2CppObject *source,System_IO_FileSystemEventArgs_o *e
               ,MethodInfo *method)

{
  (__this->fields)._cachedLogicSource = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._cachedLogicSource);
  (__this->fields)._cachedModeSettings =
       (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._cachedModeSettings);
  (__this->fields)._cachedAddonSelectionKey = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._cachedAddonSelectionKey);
  (__this->fields)._cachedAddonSettings =
       (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._cachedAddonSettings);
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup$$SyncModeSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* UI_CreateGamePopup__SyncModeSettings (UI_CreateGamePopup_o* __this, Map_MapScript_o* script, const MethodInfo* method);
// 0x406a510

System_Collections_Generic_Dictionary_string__BaseSetting__o *
UI_CreateGamePopup__SyncModeSettings
          (UI_CreateGamePopup_o *__this,Map_MapScript_o *script,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *collection;
  System_Collections_Generic_List_object__o *__this_05;
  Il2CppObject *value;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  Il2CppObject *key;
  Il2CppObject *pIVar6;
  
  if (DAT_05704492 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704492 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  key = (Il2CppObject *)0x0;
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x38), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) {
    pSVar3 = *(System_String_o **)(lVar1 + 0x18);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = Map_BuiltinLevels__LoadLogic(pSVar3,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality
                      (pSVar3,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28),
                       (MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (script == (Map_MapScript_o *)0x0) goto LAB_0406a874;
      pSVar3 = (script->fields).Logic;
    }
    bVar2 = System_String__op_Equality((__this->fields)._cachedLogicSource,pSVar3,(MethodInfo *)0x0)
    ;
    if (((char)bVar2 == '\0') ||
       (__this_04 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (__this->fields)._cachedModeSettings,
       __this_04 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)
                  CustomLogic_CustomLogicManager__GetModeSettings(pSVar3,(MethodInfo *)0x0);
      (__this->fields)._cachedLogicSource = pSVar3;
      il2cpp_runtime_glue(&(__this->fields)._cachedLogicSource,pSVar3);
      (__this->fields)._cachedModeSettings =
           (System_Collections_Generic_Dictionary_string__BaseSetting__o *)__this_04;
      il2cpp_runtime_glue(&(__this->fields)._cachedModeSettings,__this_04);
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
    if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) &&
       (__this_04 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x20);
      collection = System_Collections_Generic_Dictionary<object__object>__get_Keys
                             (__this_04,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
      __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
      System_Collections_Generic_List<object>___ctor
                (__this_05,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_String);
      if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa8,
                   __this_05,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
        pIVar6 = key;
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          __this_02.fields._8_8_ = pIVar5;
          __this_02.fields._list = pSVar4;
          __this_02.fields._current = key;
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
          if ((char)bVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
        else {
          while (key = pIVar6, __this_01.fields._8_8_ = pIVar5, __this_01.fields._list = pSVar4,
                __this_01.fields._current = key,
                bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
                (char)bVar2 != '\0') {
            pIVar6 = key;
            bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                              (__this_00,key,MethodInfo_Boolean_ContainsKey);
            if ((char)bVar2 != '\0') {
              value = System_Collections_Generic_Dictionary<object__object>__get_Item
                                (__this_00,key,MethodInfo_BaseSetting_get_Item);
              System_Collections_Generic_Dictionary<object__object>__set_Item
                        (__this_04,key,value,MethodInfo_Void_set_Item);
            }
          }
        }
        __this_03.fields._8_8_ = pIVar5;
        __this_03.fields._list = pSVar4;
        __this_03.fields._current = key;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
        lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
        if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
          *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x20) = __this_04;
          il2cpp_runtime_glue(lVar1 + 0x20,__this_04);
          return (System_Collections_Generic_Dictionary_string__BaseSetting__o *)__this_04;
        }
      }
    }
  }
LAB_0406a874:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGamePopup$$SyncAddonSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* UI_CreateGamePopup__SyncAddonSettings (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406aff0

/* WARNING: Removing unreachable block (ram,0x0406b869) */
/* WARNING: Removing unreachable block (ram,0x0406b4e6) */
/* WARNING: Removing unreachable block (ram,0x0406b4ee) */

System_Collections_Generic_Dictionary_string__BaseSetting__o *
UI_CreateGamePopup__SyncAddonSettings(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  _union_247328 name;
  _union_247328 _Var2;
  bool_conflict bVar3;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_08;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *b;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar7;
  Il2CppObject *pIVar8;
  System_Collections_Generic_List_object__o *__this_09;
  System_Type_o *left;
  System_Type_o *right;
  undefined8 in_stack_ffffffffffffff68;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar9;
  undefined1 local_70 [16];
  _union_247328 local_60;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_58;
  Il2CppRGCTXData *pIStack_50;
  _union_247328 local_48;
  System_String_o **local_40;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *local_38;
  
  if (DAT_05704493 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Select_StringSettin);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__ToList_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Func_StringSetting__string);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_Void_Sort);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String__SyncAddonSettings_b__26_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"|");
    il2cpp_init_method_metadata(&".");
    DAT_05704493 = '\x01';
  }
  local_58 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIStack_50 = (Il2CppRGCTXData *)0x0;
  local_48.genericMethod = (System_String_o *)0x0;
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x38), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
    source = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar1 + 0x18);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (selector == (System_Func_TSource__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_StringSetting__string);
      System_Func<object__object>___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar1 + 8) = selector;
      il2cpp_runtime_glue(lVar1 + 8,selector);
    }
    source_00 = System_Linq_Enumerable__Select<object__object>(source,selector,MethodInfo_IEnumerable_1_System_String__Select_StringSettin);
    __this_08 = System_Linq_Enumerable__ToList<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                           MethodInfo_List_1_System_String__ToList_String);
    if (__this_08 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List<object>__Sort
                ((System_Collections_Generic_List_object__o *)__this_08,MethodInfo_Void_Sort);
      b = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
          System_String__Join("|",
                              (System_Collections_Generic_IEnumerable_string__o *)__this_08,
                              (MethodInfo *)0x0);
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               il2cpp_runtime_glue(TypeInfo_Dictionary_string__BaseSetting);
      System_Collections_Generic_Dictionary<object__object>___ctor(pSVar4,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
      bVar3 = System_String__op_Equality
                        ((__this->fields)._cachedAddonSelectionKey,(System_String_o *)b,
                         (MethodInfo *)0x0);
      if (((char)bVar3 == '\0') ||
         (pSVar6 = (__this->fields)._cachedAddonSettings,
         pSVar6 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)) {
        local_40 = &(__this->fields)._cachedAddonSelectionKey;
        local_38 = b;
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
                   (System_Collections_Generic_List_object__o *)__this_08,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
        name = local_60;
        pSVar9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_70._0_8_;
        while (__this_00.fields._8_8_ = __this,
              __this_00.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68,
              __this_00.fields._current = (Il2CppObject *)pSVar9,
              bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff78),
              (char)bVar3 != '\0') {
          if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar5 = Map_BuiltinLevels__LoadAddon(name.genericMethod,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality
                            (pSVar5,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                             (MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar6 = CustomLogic_CustomLogicManager__GetAddonSettings(pSVar5,(MethodInfo *)0x0);
            if (pSVar6 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar7 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                               ((System_Collections_Generic_Dictionary_object__object__o *)pSVar6,
                                MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
            if (pSVar7 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0
               ) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                        *)local_70,pSVar7,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
            local_48 = local_60;
            local_58 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_70._0_8_;
            pIStack_50 = (Il2CppRGCTXData *)local_70._8_8_;
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              __this_02.fields._8_8_ = __this;
              __this_02.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   in_stack_ffffffffffffff68;
              __this_02.fields._currentKey = (Il2CppObject *)pSVar9;
              bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                (__this_02,(MethodInfo_31D0850 *)&local_58);
              _Var2 = local_48;
              if ((char)bVar3 != '\0') {
                System_String__Concat
                          (name.genericMethod,".",local_48.genericMethod,(MethodInfo *)0x0)
                ;
                System_Collections_Generic_Dictionary<object__object>__get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pSVar6,
                           _Var2.genericMethod,MethodInfo_BaseSetting_get_Item);
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
            }
            else {
              while (__this_01.fields._8_8_ = __this,
                    __this_01.fields._dictionary =
                         (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                         in_stack_ffffffffffffff68,
                    __this_01.fields._currentKey = (Il2CppObject *)pSVar9,
                    bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                      (__this_01,(MethodInfo_31D0850 *)&local_58), _Var2 = local_48,
                    (char)bVar3 != '\0') {
                pSVar5 = System_String__Concat
                                   (name.genericMethod,".",local_48.genericMethod,
                                    (MethodInfo *)0x0);
                pIVar8 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                   ((System_Collections_Generic_Dictionary_object__object__o *)
                                    pSVar6,_Var2.genericMethod,MethodInfo_BaseSetting_get_Item);
                System_Collections_Generic_Dictionary<object__object>__set_Item
                          (pSVar4,(Il2CppObject *)pSVar5,pIVar8,MethodInfo_Void_set_Item);
              }
            }
            __this_03.fields._8_8_ = __this;
            __this_03.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
            __this_03.fields._currentKey = (Il2CppObject *)pSVar9;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                      (__this_03,(MethodInfo_31D0840 *)&local_58);
          }
        }
        __this_04.fields._8_8_ = __this;
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
        __this_04.fields._current = (Il2CppObject *)pSVar9;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
        (__this->fields)._cachedAddonSelectionKey = (System_String_o *)local_38;
        il2cpp_runtime_glue(local_40);
        (__this->fields)._cachedAddonSettings =
             (System_Collections_Generic_Dictionary_string__BaseSetting__o *)pSVar4;
        il2cpp_runtime_glue(&(__this->fields)._cachedAddonSettings,pSVar4);
        pSVar6 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)pSVar4;
      }
      lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) &&
         (pSVar6 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)) {
        pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x20);
        pSVar7 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                           ((System_Collections_Generic_Dictionary_object__object__o *)pSVar6,
                            MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
        __this_09 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
        System_Collections_Generic_List<object>___ctor
                  (__this_09,(System_Collections_Generic_IEnumerable_T__o *)pSVar7,MethodInfo_List_1_System_String);
        if (__this_09 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_70,__this_09,
                     MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            __this_06.fields._8_8_ = pSVar6;
            __this_06.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
            __this_06.fields._current = (Il2CppObject *)local_70._0_8_;
            bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_06,(MethodInfo_3185E20 *)&stack0xffffffffffffff78);
            if ((char)bVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
          else {
            pSVar9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_70._0_8_;
            while (__this_05.fields._8_8_ = pSVar6,
                  __this_05.fields._list =
                       (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68,
                  __this_05.fields._current = (Il2CppObject *)pSVar9,
                  bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                    (__this_05,(MethodInfo_3185E20 *)&stack0xffffffffffffff78),
                  local_70._0_8_ = pSVar9, (char)bVar3 != '\0') {
              bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                (pSVar4,local_60.genericMethod,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar3 != '\0') {
                pIVar8 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                   (pSVar4,local_60.genericMethod,MethodInfo_BaseSetting_get_Item);
                if (pIVar8 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                left = System_Object__GetType(pIVar8,(MethodInfo *)0x0);
                pIVar8 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                   ((System_Collections_Generic_Dictionary_object__object__o *)
                                    pSVar6,local_60.genericMethod,MethodInfo_BaseSetting_get_Item);
                if (pIVar8 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                right = System_Object__GetType(pIVar8,(MethodInfo *)0x0);
                if (*(int *)(DAT_05711100 + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar3 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
                if ((char)bVar3 != '\0') {
                  pIVar8 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                     (pSVar4,local_60.genericMethod,MethodInfo_BaseSetting_get_Item);
                  System_Collections_Generic_Dictionary<object__object>__set_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar6,
                             local_60.genericMethod,pIVar8,MethodInfo_Void_set_Item);
                }
              }
            }
          }
          __this_07.fields._8_8_ = pSVar6;
          __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68
          ;
          __this_07.fields._current = (Il2CppObject *)local_70._0_8_;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_07,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
          lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
          if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
            *(System_Collections_Generic_Dictionary_string__BaseSetting__o **)(lVar1 + 0x20) =
                 pSVar6;
            il2cpp_runtime_glue(lVar1 + 0x20);
            return pSVar6;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGamePopup$$Show
// il2cpp: void UI_CreateGamePopup__Show (UI_CreateGamePopup_o* __this, bool isMultiplayer, const MethodInfo* method);
// 0x406c4d0

void UI_CreateGamePopup__Show
               (UI_CreateGamePopup_o *__this,bool_conflict isMultiplayer,MethodInfo *method)

{
  System_Collections_IEnumerator_o *routine;
  
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  if ((uint)(byte)(__this->fields).IsMultiplayer == isMultiplayer) {
    return;
  }
  *(char *)&(__this->fields).IsMultiplayer = (char)isMultiplayer;
  routine = UI_BasePanel__WaitAndRebuildCategoryPanel
                      ((UI_BasePanel_o *)__this,0.2,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup$$SetupTopButtons
// il2cpp: void UI_CreateGamePopup__SetupTopButtons (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406c520

void UI_CreateGamePopup__SetupTopButtons(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppClass *key;
  System_String_o *pSVar1;
  UI_ElementStyle_o *style;
  long lVar2;
  Il2CppObject *pIVar3;
  System_String_o *item;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  ulong uVar4;
  
  if (DAT_05704494 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupTopButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass28_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Weather");
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"Top");
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"Button");
    il2cpp_init_method_metadata(&"Titans");
    il2cpp_init_method_metadata(&"Misc");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Mode");
    DAT_05704494 = '\x01';
  }
  pSVar1 = (System_String_o *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
  style = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x1c;
  (style->fields).TitleWidth = 120.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar1;
  il2cpp_runtime_glue(&(style->fields).ThemePanel,pSVar1);
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,6);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = "General";
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = "Mode";
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = "Titans";
          il2cpp_runtime_glue(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = "Weather";
            il2cpp_runtime_glue(lVar2 + 0x38);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = "Misc";
              il2cpp_runtime_glue(lVar2 + 0x40);
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = "Custom";
                il2cpp_runtime_glue(lVar2 + 0x48);
                if (0 < *(int *)(lVar2 + 0x18)) {
                  uVar4 = 0;
                  do {
                    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass28_0);
                    System_Object___ctor(pIVar3,(MethodInfo *)0x0);
                    if (pIVar3 == (Il2CppObject *)0x0) goto LAB_0406c8d6;
                    pIVar3[1].monitor = __this;
                    il2cpp_runtime_glue(&pIVar3[1].monitor,__this);
                    if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_0406c8db;
                    pIVar3[1].klass = *(Il2CppClass **)(lVar2 + 0x20 + uVar4 * 8);
                    il2cpp_runtime_glue(pIVar3 + 1);
                    parent = (__this->fields).TopBar;
                    pSVar1 = (__this->fields).LocaleCategory;
                    item = System_String__Concat
                                     ((System_String_o *)pIVar3[1].klass,"Button",
                                      (MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    method_00 = "";
                    pSVar1 = UI_UIManager__GetLocale
                                       (pSVar1,"Top",item,(System_String_o *)"",
                                        (System_String_o *)"",(MethodInfo *)0x0);
                    onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    __this_01 = UI_ElementFactory__CreateCategoryButton
                                          (parent,style,pSVar1,onClick,method_00);
                    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_0406c8d6;
                    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                                (__this->fields)._topButtons;
                    key = pIVar3[1].klass;
                    pIVar3 = UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_Button_GetComponent_Button);
                    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto LAB_0406c8d6;
                    System_Collections_Generic_Dictionary<object__object>__Add
                              (__this_00,(Il2CppObject *)key,pIVar3,MethodInfo_Void_Add);
                    uVar4 = uVar4 + 1;
                  } while ((long)uVar4 < (long)*(int *)(lVar2 + 0x18));
                }
                UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
LAB_0406c8db:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0406c8d6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGamePopup$$RegisterCategoryPanels
// il2cpp: void UI_CreateGamePopup__RegisterCategoryPanels (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406cb40

void UI_CreateGamePopup__RegisterCategoryPanels(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_RuntimeTypeHandle_o handle;
  System_Type_o *pSVar2;
  
  if (DAT_05704495 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_CreateGameCustomPanel);
    il2cpp_init_method_metadata(&TypeRef_CreateGameGeneralPanel);
    il2cpp_init_method_metadata(&TypeRef_CreateGameMiscPanel);
    il2cpp_init_method_metadata(&TypeRef_CreateGameModePanel);
    il2cpp_init_method_metadata(&TypeRef_CreateGameTitansPanel);
    il2cpp_init_method_metadata(&TypeRef_CreateGameWeatherPanel);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&"Weather");
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"Titans");
    il2cpp_init_method_metadata(&"Misc");
    il2cpp_init_method_metadata(&"Mode");
    DAT_05704495 = '\x01';
  }
  handle.fields.value = TypeRef_CreateGameGeneralPanel.fields.value;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           (__this->fields)._categoryPanelTypes;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Add
              (pSVar1,"General",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_CreateGameModePanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar1,"Mode",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._categoryPanelTypes;
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_CreateGameTitansPanel,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar1,"Titans",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._categoryPanelTypes;
        pSVar2 = System_Type__GetTypeFromHandle(TypeRef_CreateGameWeatherPanel,(MethodInfo *)0x0);
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__Add
                    (pSVar1,"Weather",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._categoryPanelTypes;
          pSVar2 = System_Type__GetTypeFromHandle(TypeRef_CreateGameMiscPanel,(MethodInfo *)0x0);
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar1,"Misc",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._categoryPanelTypes;
            pSVar2 = System_Type__GetTypeFromHandle(TypeRef_CreateGameCustomPanel,(MethodInfo *)0x0);
            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary<object__object>__Add
                        (pSVar1,"Custom",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGamePopup$$SetupPopups
// il2cpp: void UI_CreateGamePopup__SetupPopups (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406cd70

void UI_CreateGamePopup__SetupPopups(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_array *pUVar4;
  long lVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Component_o *pUVar7;
  UI_CreateGameSelectModePopup_o *pUVar8;
  UI_CreateGameSelectAddonPopup_o *pUVar9;
  
  if (DAT_05704496 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CreateGameSelectAddonPopup_GetComponent_CreateGa);
    il2cpp_init_method_metadata(&MethodInfo_CreateGameSelectModePopup_GetComponent_CreateGam);
    il2cpp_init_method_metadata(&MethodInfo_CreateGameSelectAddonPopup_CreateDefaultPopup_Cr);
    il2cpp_init_method_metadata(&MethodInfo_CreateGameSelectModePopup_CreateDefaultPopup_Cre);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05704496 = '\x01';
  }
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar7 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateDefaultPopup<object>(pUVar6,0,MethodInfo_CreateGameSelectModePopup_CreateDefaultPopup_Cre);
  if (pUVar7 != (UnityEngine_Component_o *)0x0) {
    pUVar8 = (UI_CreateGameSelectModePopup_o *)
             UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_CreateGameSelectModePopup_GetComponent_CreateGam);
    (__this->fields).SelectModePopup = pUVar8;
    il2cpp_runtime_glue(&(__this->fields).SelectModePopup,pUVar8);
    lVar5 = MethodInfo_Void_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      pUVar8 = (__this->fields).SelectModePopup;
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (pSVar3->fields)._items;
      if (pUVar4 != (UI_BasePopup_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pUVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar8;
          il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        pUVar6 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar7 = (UnityEngine_Component_o *)
                 UI_ElementFactory__CreateDefaultPopup<object>(pUVar6,0,MethodInfo_CreateGameSelectAddonPopup_CreateDefaultPopup_Cr);
        if (pUVar7 != (UnityEngine_Component_o *)0x0) {
          pUVar9 = (UI_CreateGameSelectAddonPopup_o *)
                   UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_CreateGameSelectAddonPopup_GetComponent_CreateGa);
          (__this->fields).SelectAddonPopup = pUVar9;
          il2cpp_runtime_glue(&(__this->fields).SelectAddonPopup,pUVar9);
          lVar5 = MethodInfo_Void_Add;
          pSVar3 = (__this->fields)._popups;
          if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            pUVar9 = (__this->fields).SelectAddonPopup;
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar4 = (pSVar3->fields)._items;
            if (pUVar4 != (UI_BasePopup_array *)0x0) {
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pUVar4->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar9;
                il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                return;
              }
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar9,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
              ;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGamePopup$$SetupBottomButtons
// il2cpp: void UI_CreateGamePopup__SetupBottomButtons (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406c100

void UI_CreateGamePopup__SetupBottomButtons(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Transform_o *parent;
  Il2CppClass *item;
  int32_t iVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *style;
  undefined8 *puVar4;
  long lVar5;
  UnityEngine_Events_UnityAction_o *onClick;
  Il2CppObject *__this_00;
  MethodInfo *in_R8;
  ulong uVar6;
  
  if (DAT_05704497 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass31_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"SavePreset");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"LoadPreset");
    il2cpp_init_method_metadata(&"Start");
    il2cpp_init_method_metadata(&"Restart");
    il2cpp_init_method_metadata(&"Import");
    il2cpp_init_method_metadata(&"Export");
    DAT_05704497 = '\x01';
  }
  iVar2 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                    (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar3 = (System_String_o *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
  style = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = iVar2;
  (style->fields).TitleWidth = 120.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar3;
  il2cpp_runtime_glue(&(style->fields).ThemePanel,pSVar3);
  if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2) {
    puVar4 = &"Restart";
  }
  else {
    puVar4 = &"Start";
  }
  uVar1 = *puVar4;
  lVar5 = il2cpp_glue_02274930(TypeInfo_string,6);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x20) = "Import";
      il2cpp_runtime_glue(lVar5 + 0x20);
      if (1 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x28) = "Export";
        il2cpp_runtime_glue(lVar5 + 0x28);
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x30) = "LoadPreset";
          il2cpp_runtime_glue(lVar5 + 0x30);
          if (3 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x38) = "SavePreset";
            il2cpp_runtime_glue(lVar5 + 0x38);
            if (4 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x40) = uVar1;
              il2cpp_runtime_glue(lVar5 + 0x40,uVar1);
              if (5 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x48) = "Back";
                il2cpp_runtime_glue(lVar5 + 0x48);
                if (0 < *(int *)(lVar5 + 0x18)) {
                  uVar6 = 0;
                  do {
                    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass31_0);
                    System_Object___ctor(__this_00,(MethodInfo *)0x0);
                    if (__this_00 == (Il2CppObject *)0x0) goto LAB_0406c449;
                    __this_00[1].monitor = __this;
                    il2cpp_runtime_glue(&__this_00[1].monitor,__this);
                    if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_0406c444;
                    __this_00[1].klass = *(Il2CppClass **)(lVar5 + 0x20 + uVar6 * 8);
                    il2cpp_runtime_glue(__this_00 + 1);
                    item = __this_00[1].klass;
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    pSVar3 = UI_UIManager__GetLocaleCommon
                                       ((System_String_o *)item,(MethodInfo *)0x0);
                    parent = (__this->fields).BottomBar;
                    onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    UI_ElementFactory__CreateTextButton(parent,style,pSVar3,0.0,onClick,in_R8);
                    uVar6 = uVar6 + 1;
                  } while ((long)uVar6 < (long)*(int *)(lVar5 + 0x18));
                }
                return;
              }
            }
          }
        }
      }
    }
LAB_0406c444:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0406c449:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGamePopup$$Hide
// il2cpp: void UI_CreateGamePopup__Hide (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406d210

void UI_CreateGamePopup__Hide(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  if (DAT_05704498 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05704498 = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (((char)bVar1 != '\0') && (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 1)) {
      if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) ==
          (Settings_MultiplayerSettings_o *)0x0) goto LAB_0406d29b;
      Settings_MultiplayerSettings__Disconnect
                ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                 (MethodInfo *)0x0);
    }
    UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_0406d29b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGamePopup$$HideNoDisconnect
// il2cpp: void UI_CreateGamePopup__HideNoDisconnect (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406d2a0

void UI_CreateGamePopup__HideNoDisconnect(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup$$OnBottomBarButtonClick
// il2cpp: void UI_CreateGamePopup__OnBottomBarButtonClick (UI_CreateGamePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x406d2b0

void UI_CreateGamePopup__OnBottomBarButtonClick
               (UI_CreateGamePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  long lVar1;
  UI_ImportPopup_o *__this_00;
  long lVar2;
  Settings_SetSettingsContainer_T__o *pSVar3;
  UI_SelectListPopup_o *pUVar4;
  Settings_BoolSetting_o *__this_01;
  UI_ExportPopup_o *__this_02;
  long *plVar5;
  code *vtable_dispatch;
  uint32_t uVar6;
  bool_conflict bVar7;
  UnityEngine_Events_UnityAction_o *pUVar8;
  System_String_array *pSVar9;
  System_Collections_Generic_List_string__o *pSVar10;
  UI_CreateGamePopup_o *onDelete;
  System_Collections_Generic_List_string__o *pSVar11;
  Settings_InGameSet_o *__this_03;
  System_String_o *value;
  UnityEngine_Events_UnityAction_o *onDelete_00;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  UI_CreateGamePopup_o *__this_04;
  
  if (DAT_05704499 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__OnBottomBarButtonClick_b__34_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnBottomBarButtonClick_b__34_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnBottomBarButtonClick_b__34_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnBottomBarButtonClick_b__34_3);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnBottomBarButtonClick_b__34_4);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__ToList_String);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_InGameSet);
    il2cpp_init_method_metadata(&TypeInfo_MainMenu);
    il2cpp_init_method_metadata(&TypeInfo_MultiplayerRoomListPopup);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_String___GetSetNames);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"SavePreset");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"LoadPreset");
    il2cpp_init_method_metadata(&"Start");
    il2cpp_init_method_metadata(&"Restart");
    il2cpp_init_method_metadata(&"Import");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Export");
    DAT_05704499 = '\x01';
  }
  uVar6 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar6 < 0x573e0af5) {
    if (uVar6 == 0xae8097f) {
      bVar7 = System_String__op_Equality(name,"Start",(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        ApplicationManagers_MusicManager__PlayEffect((MethodInfo *)0x0);
        ApplicationManagers_MusicManager__PlayTransition((MethodInfo *)0x0);
        plVar5 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if (plVar5 == (long *)0x0) goto LAB_0406dbc0;
        (**(code **)(*plVar5 + 0x1c8))
                  (plVar5,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58),
                   *(undefined8 *)(*plVar5 + 0x1d0));
        if ((char)(__this->fields).IsMultiplayer == '\0') {
          if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) ==
              (Settings_MultiplayerSettings_o *)0x0) goto LAB_0406dbc0;
          Settings_MultiplayerSettings__ConnectOffline
                    ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                     (MethodInfo *)0x0);
        }
        if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) ==
            (Settings_MultiplayerSettings_o *)0x0) goto LAB_0406dbc0;
        Settings_MultiplayerSettings__StartRoom
                  ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                   (MethodInfo *)0x0);
      }
    }
    else if (uVar6 == 0x2f44ed8c) {
      bVar7 = System_String__op_Equality(name,"Restart",(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        GameManagers_InGameManager__RestartGame((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (plVar5 == (long *)0x0) goto LAB_0406dbc0;
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
            TypeInfo_InGameMenu)) goto LAB_0406dbc5;
        *(undefined1 *)(plVar5 + 0x2e) = 1;
      }
    }
    else if (uVar6 == 0x573e0af4) {
      bVar7 = System_String__op_Equality(name,"Import",(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar1 == 0) goto LAB_0406dbc0;
        __this_00 = *(UI_ImportPopup_o **)(lVar1 + 0x70);
        pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_00 == (UI_ImportPopup_o *)0x0) goto LAB_0406dbc0;
        UI_ImportPopup__Show(__this_00,pUVar8,1,"",(MethodInfo *)0x0);
      }
    }
  }
  else if (uVar6 < 0xc2954bc3) {
    if (uVar6 == 0xc2954bc2) {
      bVar7 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2) {
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar5 == (long *)0x0) goto LAB_0406dbc0;
          if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
             (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8)
              != TypeInfo_InGameMenu)) goto LAB_0406dbc5;
          *(undefined1 *)(plVar5 + 0x2e) = 1;
          UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        }
        else if ((char)(__this->fields).IsMultiplayer == '\0') {
          (*(__this->klass->vtable)._22_Hide.methodPtr)
                    (__this,(__this->klass->vtable)._22_Hide.method);
        }
        else {
          UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar5 == (long *)0x0) goto LAB_0406dbc0;
          if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_MainMenu + 0x130)) ||
             (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MainMenu + 0x130) * 8)
              != TypeInfo_MainMenu)) goto LAB_0406dbc5;
          plVar5 = (long *)plVar5[0x18];
          if (plVar5 == (long *)0x0) goto LAB_0406dbc0;
          if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130)) ||
             (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) * 8)
              != TypeInfo_MultiplayerRoomListPopup)) {
LAB_0406dbc5:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume();
          }
          lVar1 = *plVar5;
          if ((*(byte *)(lVar1 + 0x130) < *(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130)) ||
             (*(long *)(*(long *)(lVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MultiplayerRoomListPopup + 0x130) * 8) !=
              TypeInfo_MultiplayerRoomListPopup)) goto LAB_0406dbc5;
          (**(code **)(lVar1 + 0x288))(plVar5,*(undefined8 *)(lVar1 + 0x290));
        }
      }
    }
    else if (uVar6 == 0x5cb46baa) {
      bVar7 = System_String__op_Equality(name,"LoadPreset",(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (((lVar1 == 0) || (lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40), lVar2 == 0))
           || (pSVar3 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
              pSVar3 == (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_0406dbc0;
        pUVar4 = *(UI_SelectListPopup_o **)(lVar1 + 0x90);
        pSVar9 = Settings_SetSettingsContainer<object>__GetSetNames(pSVar3,MethodInfo_String___GetSetNames);
        pSVar10 = (System_Collections_Generic_List_string__o *)
                  System_Linq_Enumerable__ToList<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar9,
                             MethodInfo_List_1_System_String__ToList_String);
        pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        onDelete = (UI_CreateGamePopup_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        __this_04 = onDelete;
        UnityEngine_Events_UnityAction___ctor();
        pSVar11 = UI_CreateGamePopup__GetPresetDisallowedDelete(__this_04,(MethodInfo *)__this);
        if (pUVar4 == (UI_SelectListPopup_o *)0x0) goto LAB_0406dbc0;
        UI_SelectListPopup__ShowLoad
                  (pUVar4,pSVar10,"",pUVar8,(UnityEngine_Events_UnityAction_o *)onDelete,
                   pSVar11,(MethodInfo *)0x0);
      }
    }
  }
  else if (uVar6 == 0xd4005f17) {
    method_00 = "SavePreset";
    bVar7 = System_String__op_Equality(name,(System_String_o *)"SavePreset",(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pSVar10 = UI_CreateGamePopup__GetPresetDisallowedDelete
                          ((UI_CreateGamePopup_o *)name,method_00);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (((lVar1 == 0) || (lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40), lVar2 == 0))
         || (pSVar3 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
            pSVar3 == (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_0406dbc0;
      pUVar4 = *(UI_SelectListPopup_o **)(lVar1 + 0x90);
      pSVar9 = Settings_SetSettingsContainer<object>__GetSetNames(pSVar3,MethodInfo_String___GetSetNames);
      pSVar11 = (System_Collections_Generic_List_string__o *)
                System_Linq_Enumerable__ToList<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar9,MethodInfo_List_1_System_String__ToList_String)
      ;
      pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      onDelete_00 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar4 == (UI_SelectListPopup_o *)0x0) goto LAB_0406dbc0;
      UI_SelectListPopup__ShowSave
                (pUVar4,pSVar11,"","",pUVar8,pSVar10,onDelete_00,pSVar10,
                 (MethodInfo *)0x0);
    }
  }
  else if (uVar6 == 0xe86349d3) {
    bVar7 = System_String__op_Equality(name,"Export",(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      __this_03 = (Settings_InGameSet_o *)il2cpp_runtime_glue(TypeInfo_InGameSet);
      Settings_InGameSet___ctor(__this_03,(MethodInfo *)0x0);
      if (__this_03 == (Settings_InGameSet_o *)0x0) goto LAB_0406dbc0;
      (*(__this_03->klass->vtable)._9_Copy.methodPtr)
                (__this_03,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58),
                 (__this_03->klass->vtable)._9_Copy.method);
      __this_01 = (__this_03->fields).Preset;
      if (__this_01 == (Settings_BoolSetting_o *)0x0) goto LAB_0406dbc0;
      Settings_TypedSetting<bool>__set_Value
                ((Settings_TypedSetting_bool__o *)__this_01,0,MethodInfo_Void_set_Value);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (lVar1 == 0) goto LAB_0406dbc0;
      plVar5 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
      if (plVar5 == (long *)0x0) goto LAB_0406dbc0;
      __this_02 = *(UI_ExportPopup_o **)(lVar1 + 0x68);
      value = (System_String_o *)
              (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      if (__this_02 == (UI_ExportPopup_o *)0x0) goto LAB_0406dbc0;
      UI_ExportPopup__Show(__this_02,value,(MethodInfo *)0x0);
    }
  }
  plVar5 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    plVar5 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
    if (plVar5 != (long *)0x0) {
      vtable_dispatch = *(code **)(*plVar5 + 0x248);
      (*vtable_dispatch)
                (plVar5,*(undefined8 *)(*plVar5 + 0x250),extraout_RDX,vtable_dispatch);
      return;
    }
  }
LAB_0406dbc0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGamePopup$$OnDeletePreset
// il2cpp: void UI_CreateGamePopup__OnDeletePreset (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406def0

void UI_CreateGamePopup__OnDeletePreset(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  Settings_ListSetting_T__o *__this_00;
  System_String_o *b;
  long *plVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  Il2CppObject *item;
  Il2CppObject *pIVar9;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_0570449a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_InGameSet);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_BaseSetting__GetItems);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_InGameSet__get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570449a = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (((((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x90), lVar2 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0x138), lVar2 != 0)) &&
      ((lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40), lVar3 != 0 &&
       (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)))) &&
     (__this_00 = *(Settings_ListSetting_T__o **)(lVar3 + 0x28),
     __this_00 != (Settings_ListSetting_T__o *)0x0)) {
    b = *(System_String_o **)(lVar2 + 0x18);
    pSVar6 = (System_Collections_Generic_List_object__o *)
             Settings_ListSetting<object>__GetItems(__this_00,MethodInfo_List_1_Settings_BaseSetting__GetItems);
    if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar6,MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
      pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar8 = (Il2CppType *)local_48._8_8_;
      do {
        do {
          item = local_38;
          __this_01.fields._8_8_ = pIVar8;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
          __this_01.fields._current = item;
          bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
          pIVar9 = item;
          if ((char)bVar5 == '\0') goto LAB_0406e195;
          if (item == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar1 = (TypeInfo_InGameSet->_2).naturalAligment;
          if (((item->klass->_2).naturalAligment < bVar1) ||
             ((item->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameSet)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(item);
          }
          if (item[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar5 = System_String__op_Equality
                            ((System_String_o *)((item[2].klass)->_1).namespaze,b,(MethodInfo *)0x0)
          ;
          local_38 = pIVar9;
        } while ((char)bVar5 == '\0');
        if (item[2].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      } while (*(char *)((long)item[2].monitor + 0x11) != '\0');
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      lVar2 = *(long *)(lVar2 + 0x20);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      lVar2 = *(long *)(lVar2 + 0x28);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar6 = *(System_Collections_Generic_List_object__o **)(lVar2 + 0x18);
      if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_List<object>__Remove(pSVar6,item,MethodInfo_Boolean_Remove);
      plVar4 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
LAB_0406e195:
      __this_02.fields._8_8_ = pIVar8;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
      __this_02.fields._current = pIVar9;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGamePopup$$GetPresetDisallowedDelete
// il2cpp: System_Collections_Generic_List_string__o* UI_CreateGamePopup__GetPresetDisallowedDelete (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406dbd0

System_Collections_Generic_List_string__o *
UI_CreateGamePopup__GetPresetDisallowedDelete(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *item;
  System_String_array *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar5;
  System_Collections_Generic_List_string__o *__this_04;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  Il2CppObject *pIVar8;
  undefined1 local_38 [16];
  Il2CppObject *local_28;
  
  if (DAT_0570449b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_InGameSet_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_InGameSet__GetEnum);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_InGameSet__get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_0570449b = '\x01';
  }
  __this_04 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_System_String);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  if ((((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) ||
      (lVar3 = *(long *)(lVar3 + 0x28), lVar3 == 0)) ||
     (__this_00 = *(System_Collections_Generic_List_object__o **)(lVar3 + 0x18),
     __this_00 == (System_Collections_Generic_List_object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_38,__this_00,MethodInfo_List_1_T__Enumerator_Settings_InGameSet__GetEnum);
  pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
  pIVar7 = (Il2CppType *)local_38._8_8_;
  pIVar8 = local_28;
  if (__this_04 == (System_Collections_Generic_List_string__o *)0x0) {
    while (__this_01.fields._8_8_ = pIVar7,
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar6,
          __this_01.fields._current = pIVar8,
          bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
          (char)bVar5 != '\0') {
      if (pIVar8 == (Il2CppObject *)0x0) {
LAB_0406de11:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (pIVar8[2].monitor == (void *)0x0) {
LAB_0406de16:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(char *)((long)pIVar8[2].monitor + 0x11) != '\0') {
        if (pIVar8[2].klass != (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_0406de22:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  else {
    while (__this_02.fields._8_8_ = pIVar7,
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar6,
          __this_02.fields._current = pIVar8,
          bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
          lVar3 = MethodInfo_Void_Add, (char)bVar5 != '\0') {
      if (pIVar8 == (Il2CppObject *)0x0) goto LAB_0406de11;
      if (pIVar8[2].monitor == (void *)0x0) goto LAB_0406de16;
      if (*(char *)((long)pIVar8[2].monitor + 0x11) != '\0') {
        if (pIVar8[2].klass == (Il2CppClass *)0x0) goto LAB_0406de22;
        item = (System_String_o *)((pIVar8[2].klass)->_1).namespaze;
        piVar1 = &(__this_04->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_04->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (__this_04->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_04->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = item;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  }
  __this_03.fields._8_8_ = pIVar7;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
  __this_03.fields._current = pIVar8;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
  return __this_04;
}


// UI.CreateGamePopup$$OnLoadPreset
// il2cpp: void UI_CreateGamePopup__OnLoadPreset (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406e2e0

void UI_CreateGamePopup__OnLoadPreset(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  Settings_ListSetting_T__o *__this_00;
  System_String_o *b;
  long *plVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_03;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_0570449c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_InGameSet);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_BaseSetting__GetItems);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570449c = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (((((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x90), lVar2 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0x138), lVar2 != 0)) &&
      ((lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40), lVar3 != 0 &&
       (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)))) &&
     (__this_00 = *(Settings_ListSetting_T__o **)(lVar3 + 0x28),
     __this_00 != (Settings_ListSetting_T__o *)0x0)) {
    b = *(System_String_o **)(lVar2 + 0x18);
    __this_03 = (System_Collections_Generic_List_object__o *)
                Settings_ListSetting<object>__GetItems(__this_00,MethodInfo_List_1_Settings_BaseSetting__GetItems);
    if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_03,MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn)
      ;
      pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar7 = (Il2CppType *)local_48._8_8_;
      do {
        pIVar8 = local_38;
        __this_01.fields._8_8_ = pIVar7;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
        __this_01.fields._current = pIVar8;
        bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        pIVar9 = pIVar8;
        if ((char)bVar5 == '\0') goto LAB_0406e56c;
        if (pIVar8 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar1 = (TypeInfo_InGameSet->_2).naturalAligment;
        if (((pIVar8->klass->_2).naturalAligment < bVar1) ||
           ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameSet)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar8);
        }
        if (pIVar8[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar5 = System_String__op_Equality
                          ((System_String_o *)((pIVar8[2].klass)->_1).namespaze,b,(MethodInfo *)0x0)
        ;
        local_38 = pIVar9;
      } while ((char)bVar5 == '\0');
      plVar4 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (**(code **)(*plVar4 + 0x1c8))(plVar4,pIVar8,*(undefined8 *)(*plVar4 + 0x1d0));
      (__this->fields)._cachedLogicSource = (System_String_o *)0x0;
      il2cpp_runtime_glue(&(__this->fields)._cachedLogicSource);
      (__this->fields)._cachedModeSettings =
           (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0;
      il2cpp_runtime_glue(&(__this->fields)._cachedModeSettings);
      (__this->fields)._cachedAddonSelectionKey = (System_String_o *)0x0;
      il2cpp_runtime_glue(&(__this->fields)._cachedAddonSelectionKey);
      (__this->fields)._cachedAddonSettings =
           (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0;
      il2cpp_runtime_glue(&(__this->fields)._cachedAddonSettings);
      UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
LAB_0406e56c:
      __this_02.fields._8_8_ = pIVar7;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
      __this_02.fields._current = pIVar9;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGamePopup$$OnSavePreset
// il2cpp: void UI_CreateGamePopup__OnSavePreset (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406e650

void UI_CreateGamePopup__OnSavePreset(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  System_String_o *a;
  Settings_ListSetting_T__o *pSVar3;
  Settings_StringSetting_o *__this_00;
  long *plVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_04;
  Settings_InGameSet_o *__this_05;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_0570449d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_InGameSet);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddItem);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_BaseSetting__GetItems);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Attempting to overwrite preset.");
    DAT_0570449d = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x90), lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x138), lVar2 != 0)) {
    a = *(System_String_o **)(lVar2 + 0x18);
    bVar5 = System_String__op_Equality
                      (a,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0
                      );
    if ((char)bVar5 != '\0') {
      return;
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
       ((pSVar3 = *(Settings_ListSetting_T__o **)(lVar2 + 0x28),
        pSVar3 != (Settings_ListSetting_T__o *)0x0 &&
        (__this_04 = (System_Collections_Generic_List_object__o *)
                     Settings_ListSetting<object>__GetItems(pSVar3,MethodInfo_List_1_Settings_BaseSetting__GetItems),
        __this_04 != (System_Collections_Generic_List_object__o *)0x0)))) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_04,MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn)
      ;
      pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar7 = (Il2CppType *)local_48._8_8_;
      while (pIVar8 = local_38, __this_01.fields._8_8_ = pIVar7,
            __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar6,
            __this_01.fields._current = pIVar8,
            bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
            (char)bVar5 != '\0') {
        if (pIVar8 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar1 = (TypeInfo_InGameSet->_2).naturalAligment;
        if (((pIVar8->klass->_2).naturalAligment < bVar1) ||
           ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameSet)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar8);
        }
        if (pIVar8[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pIVar9 = pIVar8;
        bVar5 = System_String__op_Equality
                          ((System_String_o *)((pIVar8[2].klass)->_1).namespaze,a,(MethodInfo *)0x0)
        ;
        local_38 = pIVar9;
        if ((char)bVar5 != '\0') {
          if (pIVar8[2].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (*(char *)((long)pIVar8[2].monitor + 0x11) == '\0') {
            (*pIVar8->klass->vtable[9].methodPtr)
                      (pIVar8,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58),
                       pIVar8->klass->vtable[9].method);
            if (pIVar8[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            Settings_TypedSetting<object>__set_Value
                      ((Settings_TypedSetting_T__o *)pIVar8[2].klass,(Il2CppObject *)a,MethodInfo_Void_set_Value)
            ;
            plVar4 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
          }
          else {
            if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Debug__Log("Attempting to overwrite preset.",(MethodInfo *)0x0);
          }
          __this_03.fields._8_8_ = pIVar7;
          __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
          __this_03.fields._current = pIVar9;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
          return;
        }
      }
      __this_02.fields._8_8_ = pIVar7;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
      __this_02.fields._current = pIVar8;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      __this_05 = (Settings_InGameSet_o *)il2cpp_runtime_glue(TypeInfo_InGameSet);
      Settings_InGameSet___ctor(__this_05,(MethodInfo *)0x0);
      if (__this_05 != (Settings_InGameSet_o *)0x0) {
        (*(__this_05->klass->vtable)._9_Copy.methodPtr)
                  (__this_05,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58),
                   (__this_05->klass->vtable)._9_Copy.method);
        __this_00 = (__this_05->fields).Name;
        if (__this_00 != (Settings_StringSetting_o *)0x0) {
          Settings_TypedSetting<object>__set_Value
                    ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)a,MethodInfo_Void_set_Value);
          lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
          if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
             (pSVar3 = *(Settings_ListSetting_T__o **)(lVar2 + 0x28),
             pSVar3 != (Settings_ListSetting_T__o *)0x0)) {
            Settings_ListSetting<object>__AddItem
                      (pSVar3,(Settings_BaseSetting_o *)__this_05,MethodInfo_Void_AddItem);
            plVar4 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGamePopup$$OnImportPreset
// il2cpp: void UI_CreateGamePopup__OnImportPreset (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406eb50

void UI_CreateGamePopup__OnImportPreset(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  Settings_BoolSetting_o *__this_00;
  long *plVar5;
  Settings_InGameSet_o *__this_01;
  
  if (DAT_0570449e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570449e = '\x01';
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (((lVar2 == 0) || (plVar3 = *(long **)(lVar2 + 0x70), plVar3 == (long *)0x0)) ||
     (plVar3[0x19] == 0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar4 = *(undefined8 *)(plVar3[0x19] + 0x18);
  __this_01 = (Settings_InGameSet_o *)il2cpp_runtime_glue(TypeInfo_InGameSet);
  Settings_InGameSet___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Settings_InGameSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(__this_01->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
            (__this_01,uVar4,(__this_01->klass->vtable)._8_DeserializeFromJsonString.method);
  __this_00 = (__this_01->fields).Preset;
  if (__this_00 != (Settings_BoolSetting_o *)0x0) {
    Settings_TypedSetting<bool>__set_Value
              ((Settings_TypedSetting_bool__o *)__this_00,0,MethodInfo_Void_set_Value);
    plVar5 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x1c8))(plVar5,__this_01,*(undefined8 *)(*plVar5 + 0x1d0));
      (__this->fields)._cachedLogicSource = (System_String_o *)0x0;
      il2cpp_runtime_glue(&(__this->fields)._cachedLogicSource);
      (__this->fields)._cachedModeSettings =
           (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0;
      il2cpp_runtime_glue(&(__this->fields)._cachedModeSettings);
      UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
      (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGamePopup$$.ctor
// il2cpp: void UI_CreateGamePopup___ctor (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406edf0

void UI_CreateGamePopup___ctor(UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  if (DAT_0570449f == '\0') {
    il2cpp_init_method_metadata(&"CreateGamePopup");
    DAT_0570449f = '\x01';
  }
  (__this->fields).LocaleCategory = "CreateGamePopup";
  il2cpp_runtime_glue(&(__this->fields).LocaleCategory);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGamePopup$$<OnBottomBarButtonClick>b__34_0
// il2cpp: void UI_CreateGamePopup___OnBottomBarButtonClick_b__34_0 (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406ee40

void UI_CreateGamePopup__<OnBottomBarButtonClick>b__34_0
               (UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  UI_CreateGamePopup__OnLoadPreset(__this,method);
  return;
}


// UI.CreateGamePopup$$<OnBottomBarButtonClick>b__34_1
// il2cpp: void UI_CreateGamePopup___OnBottomBarButtonClick_b__34_1 (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406ee50

void UI_CreateGamePopup__<OnBottomBarButtonClick>b__34_1
               (UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  UI_CreateGamePopup__OnDeletePreset(__this,method);
  return;
}


// UI.CreateGamePopup$$<OnBottomBarButtonClick>b__34_2
// il2cpp: void UI_CreateGamePopup___OnBottomBarButtonClick_b__34_2 (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406ee60

void UI_CreateGamePopup__<OnBottomBarButtonClick>b__34_2
               (UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  UI_CreateGamePopup__OnSavePreset(__this,method);
  return;
}


// UI.CreateGamePopup$$<OnBottomBarButtonClick>b__34_3
// il2cpp: void UI_CreateGamePopup___OnBottomBarButtonClick_b__34_3 (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406ee70

void UI_CreateGamePopup__<OnBottomBarButtonClick>b__34_3
               (UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  UI_CreateGamePopup__OnDeletePreset(__this,method);
  return;
}


// UI.CreateGamePopup$$<OnBottomBarButtonClick>b__34_4
// il2cpp: void UI_CreateGamePopup___OnBottomBarButtonClick_b__34_4 (UI_CreateGamePopup_o* __this, const MethodInfo* method);
// 0x406ee80

void UI_CreateGamePopup__<OnBottomBarButtonClick>b__34_4
               (UI_CreateGamePopup_o *__this,MethodInfo *method)

{
  UI_CreateGamePopup__OnImportPreset(__this,method);
  return;
}


