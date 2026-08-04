// Type: Settings.InGameModeSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InGameModeSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameModeSettings.cs
// --------------------------------

// Settings.InGameModeSettings$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_InGameModeSettings__SerializeToJsonObject (Settings_InGameModeSettings_o* __this, const MethodInfo* method);
// 0x408b6a0

SimpleJSONFixed_JSONNode_o *
Settings_InGameModeSettings__SerializeToJsonObject(Settings_InGameModeSettings_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar4;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  Settings_StringSetting_o *pSVar5;
  Il2CppObject *pIVar6;
  System_String_o *defaultValue;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long *plVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [8];
  Il2CppType *pIVar12;
  System_String_o *pSVar13;
  undefined1 auStack_48 [8];
  Il2CppType *pIStack_40;
  int32_t iStack_38;
  undefined4 uStack_34;
  
  if (g_data_057ac3f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddItem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ac3f2 = '\x01';
  }
  auVar11 = (undefined1  [8])0x0;
  pIVar12 = (Il2CppType *)0x0;
  pSVar13 = (System_String_o *)0x0;
  pSVar1 = (__this->fields).Names;
  if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
    Settings_ListSetting_object___Clear((Settings_ListSetting_T__o *)pSVar1,MethodInfo_Void_Clear);
    pSVar1 = (__this->fields).Values;
    if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
      Settings_ListSetting_object___Clear((Settings_ListSetting_T__o *)pSVar1,MethodInfo_Void_Clear);
      pSVar1 = (__this->fields).Types;
      if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
        Settings_ListSetting_object___Clear((Settings_ListSetting_T__o *)pSVar1,MethodInfo_Void_Clear);
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
        if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
           (__this_04 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar2,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set),
           __this_04 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
          System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     auStack_48,__this_04,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
          auVar11 = auStack_48;
          pIVar12 = pIStack_40;
          pSVar7 = (System_String_o *)CONCAT44(uStack_34,iStack_38);
          while (__this_00.fields._8_8_ = pIVar12,
                __this_00.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)auVar11,
                __this_00.fields._currentKey = (Il2CppObject *)pSVar7,
                bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                  (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff98),
                (char)bVar4 != '\0') {
            pSVar1 = (__this->fields).Names;
            pSVar13 = pSVar7;
            pSVar5 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
            Settings_StringSetting___ctor_40f74f0(pSVar5,pSVar7,0x7fffffff,(MethodInfo *)0x0);
            if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
label_0408b994:
              il2cpp_runtime_helper_022b2c90();
label_0408b999:
              il2cpp_runtime_helper_022b2c90();
label_0408b99e:
              il2cpp_runtime_helper_022b2c90();
label_0408b9a3:
              il2cpp_runtime_helper_022b2c90();
label_0408b9a8:
              il2cpp_runtime_helper_022b2c90();
              goto label_0408b9ad;
            }
            Settings_ListSetting_object___AddItem
                      ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar5,MethodInfo_Void_AddItem);
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0408b994;
            pSVar1 = (__this->fields).Values;
            pIVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,(Il2CppObject *)pSVar7,MethodInfo_BaseSetting_get_Item);
            if (pIVar6 == (Il2CppObject *)0x0) goto label_0408b999;
            defaultValue = (System_String_o *)
                           (*pIVar6->klass->vtable[7].methodPtr)(pIVar6,pIVar6->klass->vtable[7].method);
            pSVar5 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
            Settings_StringSetting___ctor_40f74f0(pSVar5,defaultValue,0x7fffffff,(MethodInfo *)0x0);
            if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) goto label_0408b99e;
            Settings_ListSetting_object___AddItem
                      ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar5,MethodInfo_Void_AddItem);
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0408b9a3;
            pSVar1 = (__this->fields).Types;
            pIVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,(Il2CppObject *)pSVar7,MethodInfo_BaseSetting_get_Item);
            iStack_38 = Settings_SettingsUtil__GetSettingType
                                  ((Settings_BaseSetting_o *)pIVar6,(MethodInfo *)0x0);
            auStack_48 = (undefined1  [8])TypeInfo_SettingType;
            pIStack_40 = (Il2CppType *)0xffffffffffffffff;
            pSVar7 = System_Enum__ToString((System_Enum_o *)auStack_48,(MethodInfo *)0x0);
            pSVar5 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
            Settings_StringSetting___ctor_40f74f0(pSVar5,pSVar7,0x7fffffff,(MethodInfo *)0x0);
            if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) goto label_0408b9a8;
            Settings_ListSetting_object___AddItem
                      ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar5,MethodInfo_Void_AddItem);
            pSVar7 = pSVar13;
          }
          __this_01.fields._8_8_ = pIVar12;
          __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auVar11;
          __this_01.fields._currentKey = (Il2CppObject *)pSVar7;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    (__this_01,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
          goto label_0408b976;
        }
      }
    }
  }
label_0408b9ad:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar3 = *plVar9;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar12;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auVar11;
    __this_02.fields._currentKey = (Il2CppObject *)pSVar13;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
    if (lVar3 == 0) {
label_0408b976:
      pSVar8 = Settings_BaseSettingsContainer__SerializeToJsonObject
                         ((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
      return pSVar8;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_03.fields._8_8_ = pIVar12;
  __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auVar11;
  __this_03.fields._currentKey = (Il2CppObject *)pSVar13;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar10._0_8_);
}


// Settings.InGameModeSettings$$DeserializeFromJsonObject
// il2cpp: void Settings_InGameModeSettings__DeserializeFromJsonObject (Settings_InGameModeSettings_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x408bb10

void Settings_InGameModeSettings__DeserializeFromJsonObject
               (Settings_InGameModeSettings_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_String_o *value;
  int32_t iVar4;
  Il2CppObject *pIVar5;
  Settings_PresetSettingsContainer_o *__this_00;
  Settings_PresetSettingsContainer_c *__this_01;
  Settings_ListSetting_T__o *__this_02;
  System_Collections_Specialized_OrderedDictionary_o *__this_03;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_04;
  int index;
  Settings_ListSetting_StringSetting__o *pSVar6;
  
  if (g_data_057ac3f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetCount);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SettingType_ToEnum_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    g_data_057ac3f3 = '\x01';
  }
  Settings_BaseSettingsContainer__DeserializeFromJsonObject
            ((Settings_BaseSettingsContainer_o *)__this,json,(MethodInfo *)0x0);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear(pSVar2,MethodInfo_Void_Clear);
    pSVar6 = (__this->fields).Names;
    if (pSVar6 != (Settings_ListSetting_StringSetting__o *)0x0) {
      index = 0;
      while( true ) {
        iVar4 = Settings_ListSetting_object___GetCount((Settings_ListSetting_T__o *)pSVar6,MethodInfo_Int32_GetCount);
        if (iVar4 <= index) {
          return;
        }
        pSVar6 = (__this->fields).Types;
        if (((pSVar6 == (Settings_ListSetting_StringSetting__o *)0x0) ||
            (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar6->fields)._value,
            pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) ||
           (pIVar5 = System_Collections_Generic_List_object___get_Item(pSVar3,index,MethodInfo_StringSetting_get_Item),
           pIVar5 == (Il2CppObject *)0x0)) break;
        value = pIVar5[1].monitor;
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar4 = MiscExtensions__ToEnum_Int32Enum_(value,1,MethodInfo_SettingType_ToEnum_SettingType);
        pSVar6 = (__this->fields).Values;
        if (((pSVar6 == (Settings_ListSetting_StringSetting__o *)0x0) ||
            (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar6->fields)._value,
            pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) ||
           (pIVar5 = System_Collections_Generic_List_object___get_Item(pSVar3,index,MethodInfo_StringSetting_get_Item),
           pIVar5 == (Il2CppObject *)0x0)) break;
        __this_00 = (Settings_PresetSettingsContainer_o *)
                    Settings_SettingsUtil__DeserializeValueFromJson(iVar4,pIVar5[1].monitor,(MethodInfo *)0x0)
        ;
        if (__this_00 != (Settings_PresetSettingsContainer_o *)0x0) {
          bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
          if (((((Il2CppClass *)__this_00->klass)->_2).naturalAligment < bVar1) ||
             ((((Il2CppClass *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
            il2cpp_runtime_helper_022b2fd0();
            if (g_data_057ac3f4 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_BaseSetting);
              il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
              il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
              g_data_057ac3f4 = '\x01';
            }
            __this_01 = (Settings_PresetSettingsContainer_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_BaseSetting);
            System_Collections_Generic_Dictionary_object__object____ctor
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
            __this_00[1].klass = __this_01;
            il2cpp_runtime_helper_022b4080(__this_00 + 1,__this_01);
            __this_02 = (Settings_ListSetting_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
            Settings_ListSetting_object____ctor_3521170(__this_02,MethodInfo_ListSetting_1_StringSetting);
            __this_00[1].monitor = __this_02;
            il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,__this_02);
            __this_03 = (System_Collections_Specialized_OrderedDictionary_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting)
            ;
            Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)__this_03,MethodInfo_ListSetting_1_StringSetting);
            __this_00[1].fields.Settings = __this_03;
            il2cpp_runtime_helper_022b4080(&__this_00[1].fields,__this_03);
            __this_04 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                        il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
            Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)__this_04,MethodInfo_ListSetting_1_StringSetting);
            __this_00[1].fields.TypedSettings = __this_04;
            il2cpp_runtime_helper_022b4080(&__this_00[1].fields.TypedSettings);
            Settings_BaseSettingsContainer___ctor(__this_00,(MethodInfo *)0x0);
            return;
          }
        }
        pSVar6 = (__this->fields).Names;
        if ((pSVar6 == (Settings_ListSetting_StringSetting__o *)0x0) ||
           (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar6->fields)._value,
           pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) break;
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
        pIVar5 = System_Collections_Generic_List_object___get_Item(pSVar3,index,MethodInfo_StringSetting_get_Item);
        if ((pIVar5 == (Il2CppObject *)0x0) ||
           (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) break;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar2,pIVar5[1].monitor,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
        index = index + 1;
        pSVar6 = (__this->fields).Names;
        if (pSVar6 == (Settings_ListSetting_StringSetting__o *)0x0) break;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Settings.InGameModeSettings$$.ctor
// il2cpp: void Settings_InGameModeSettings___ctor (Settings_InGameModeSettings_o* __this, const MethodInfo* method);
// 0x408bd50

void Settings_InGameModeSettings___ctor(Settings_InGameModeSettings_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Settings_ListSetting_StringSetting__o *pSVar1;
  
  if (g_data_057ac3f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
    g_data_057ac3f4 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
  (__this->fields).Current = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Current,__this_00);
  pSVar1 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)pSVar1,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).Names = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Names,pSVar1);
  pSVar1 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)pSVar1,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).Values = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Values,pSVar1);
  pSVar1 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)pSVar1,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).Types = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Types);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


