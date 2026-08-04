// Type: Settings.InGameAddonSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/InGameAddonSettings.cs
// Prior real C# source: none
// --------------------------------

// Settings.InGameAddonSettings$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_InGameAddonSettings__SerializeToJsonObject (Settings_InGameAddonSettings_o* __this, const MethodInfo* method);
// 0x4089de0

SimpleJSONFixed_JSONNode_o *
Settings_InGameAddonSettings__SerializeToJsonObject(Settings_InGameAddonSettings_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_String_o *str0;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  long *plVar10;
  MethodInfo_3521EB0 **__this_06;
  undefined1 auVar11 [12];
  undefined8 in_stack_ffffffffffffff78;
  System_Enum_c *in_stack_ffffffffffffff80;
  Il2CppType *in_stack_ffffffffffffff88;
  int32_t iStack_70;
  undefined4 uStack_6c;
  System_Enum_c *pSStack_68;
  Il2CppType *pIStack_60;
  System_String_o *pSStack_58;
  System_Enum_c *pSStack_48;
  Il2CppType *pIStack_40;
  System_String_o *pSStack_38;
  
  if (g_data_057ac3eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddItem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&".");
    g_data_057ac3eb = '\x01';
  }
  pSStack_68 = (System_Enum_c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  pSStack_58 = (System_String_o *)0x0;
  pSStack_48 = (System_Enum_c *)0x0;
  pIStack_40 = (Il2CppType *)0x0;
  pSStack_38 = (System_String_o *)0x0;
  pSVar1 = (__this->fields).Names;
  if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
    __this_06 = &MethodInfo_Void_Clear;
    Settings_ListSetting_object___Clear((Settings_ListSetting_T__o *)pSVar1,MethodInfo_Void_Clear);
    pSVar1 = (__this->fields).Values;
    if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
      Settings_ListSetting_object___Clear((Settings_ListSetting_T__o *)pSVar1,MethodInfo_Void_Clear);
      pSVar1 = (__this->fields).Types;
      if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
        Settings_ListSetting_object___Clear((Settings_ListSetting_T__o *)pSVar1,MethodInfo_Void_Clear);
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
        if ((pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
           (pSVar4 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar5,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic),
           pSVar4 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
          System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     &stack0xffffffffffffff80,pSVar4,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
          pSStack_58 = (System_String_o *)CONCAT44(uStack_6c,iStack_70);
          pSStack_68 = in_stack_ffffffffffffff80;
          pIStack_60 = in_stack_ffffffffffffff88;
          while (__this_00.fields._8_8_ = in_stack_ffffffffffffff80,
                __this_00.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff78,
                __this_00.fields._currentKey = (Il2CppObject *)in_stack_ffffffffffffff88,
                bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                  (__this_00,(MethodInfo_3251B20 *)&pSStack_68), str0 = pSStack_58,
                (char)bVar3 != '\0') {
            pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
            if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0408a434:
              il2cpp_runtime_helper_022b2c90();
label_0408a439:
              il2cpp_runtime_helper_022b2c90();
label_0408a43e:
              il2cpp_runtime_helper_022b2c90();
              il2cpp_runtime_helper_022fefe0(__this_06);
              goto label_0408a44b;
            }
            pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar5,(Il2CppObject *)pSStack_58,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
            if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0408a439;
            pSVar4 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar5,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
            if (pSVar4 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
            goto label_0408a43e;
            System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       &stack0xffffffffffffff80,pSVar4,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
            pSStack_38 = (System_String_o *)CONCAT44(uStack_6c,iStack_70);
            pSStack_48 = in_stack_ffffffffffffff80;
            pIStack_40 = in_stack_ffffffffffffff88;
            while (__this_01.fields._8_8_ = in_stack_ffffffffffffff80,
                  __this_01.fields._dictionary =
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff78,
                  __this_01.fields._currentKey = (Il2CppObject *)in_stack_ffffffffffffff88,
                  bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                    (__this_01,(MethodInfo_3251B20 *)&stack0xffffffffffffffb8),
                  pSVar8 = pSStack_38, (char)bVar3 != '\0') {
              pSVar1 = (__this->fields).Names;
              __this_06 = (MethodInfo_3521EB0 **)
                          System_String__Concat_3af7150(str0,".",pSStack_38,(MethodInfo *)0x0);
              pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
              Settings_StringSetting___ctor_40f74f0
                        (pSVar6,(System_String_o *)__this_06,0x7fffffff,(MethodInfo *)0x0);
              if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_0408a434;
              }
              Settings_ListSetting_object___AddItem
                        ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar6,MethodInfo_Void_AddItem);
              pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
              if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_0408a434;
              }
              pSVar1 = (__this->fields).Values;
              pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                       System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar5,(Il2CppObject *)str0,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
              if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_0408a434;
              }
              pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar5,(Il2CppObject *)pSVar8,MethodInfo_BaseSetting_get_Item);
              if (pIVar7 == (Il2CppObject *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_0408a434;
              }
              __this_06 = (MethodInfo_3521EB0 **)
                          (*pIVar7->klass->vtable[7].methodPtr)(pIVar7,pIVar7->klass->vtable[7].method);
              pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
              Settings_StringSetting___ctor_40f74f0
                        (pSVar6,(System_String_o *)__this_06,0x7fffffff,(MethodInfo *)0x0);
              if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_0408a434;
              }
              Settings_ListSetting_object___AddItem
                        ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar6,MethodInfo_Void_AddItem);
              pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
              if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_0408a434;
              }
              pSVar1 = (__this->fields).Types;
              pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                       System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar5,(Il2CppObject *)str0,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
              if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_0408a434;
              }
              pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar5,(Il2CppObject *)pSVar8,MethodInfo_BaseSetting_get_Item);
              iStack_70 = Settings_SettingsUtil__GetSettingType
                                    ((Settings_BaseSetting_o *)pIVar7,(MethodInfo *)0x0);
              in_stack_ffffffffffffff88 = (Il2CppType *)0xffffffffffffffff;
              in_stack_ffffffffffffff80 = TypeInfo_SettingType;
              pSVar8 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff80,(MethodInfo *)0x0);
              __this_06 = (MethodInfo_3521EB0 **)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
              Settings_StringSetting___ctor_40f74f0
                        ((Settings_StringSetting_o *)__this_06,pSVar8,0x7fffffff,(MethodInfo *)0x0);
              if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_0408a434;
              }
              Settings_ListSetting_object___AddItem
                        ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)__this_06,MethodInfo_Void_AddItem)
              ;
            }
            __this_06 = (MethodInfo_3521EB0 **)0x0;
            __this_02.fields._8_8_ = in_stack_ffffffffffffff80;
            __this_02.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff78;
            __this_02.fields._currentKey = (Il2CppObject *)in_stack_ffffffffffffff88;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffffb8);
          }
          __this_03.fields._8_8_ = in_stack_ffffffffffffff80;
          __this_03.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff78;
          __this_03.fields._currentKey = (Il2CppObject *)in_stack_ffffffffffffff88;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    (__this_03,(MethodInfo_3251B10 *)&pSStack_68);
          goto label_0408a3f8;
        }
      }
    }
  }
label_0408a44b:
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar2 = *plVar10;
    __cxa_end_catch();
    __this_04.fields._8_8_ = in_stack_ffffffffffffff80;
    __this_04.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff78;
    __this_04.fields._currentKey = (Il2CppObject *)in_stack_ffffffffffffff88;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_04,(MethodInfo_3251B10 *)&pSStack_68);
    if (lVar2 == 0) {
label_0408a3f8:
      pSVar9 = Settings_BaseSettingsContainer__SerializeToJsonObject
                         ((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
      return pSVar9;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_05.fields._8_8_ = in_stack_ffffffffffffff80;
  __this_05.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff78;
  __this_05.fields._currentKey = (Il2CppObject *)in_stack_ffffffffffffff88;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_05,(MethodInfo_3251B10 *)&pSStack_68);
  _Unwind_Resume(auVar11._0_8_);
}


// Settings.InGameAddonSettings$$DeserializeFromJsonObject
// il2cpp: void Settings_InGameAddonSettings__DeserializeFromJsonObject (Settings_InGameAddonSettings_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x408a4e0

void Settings_InGameAddonSettings__DeserializeFromJsonObject
               (Settings_InGameAddonSettings_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  System_String_o *value;
  int32_t iVar3;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  System_String_o *key;
  System_String_o *__this_00;
  Settings_PresetSettingsContainer_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  Settings_PresetSettingsContainer_c *__this_03;
  Settings_ListSetting_T__o *__this_04;
  System_Collections_Specialized_OrderedDictionary_o *__this_05;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_06;
  Settings_ListSetting_StringSetting__o *pSVar7;
  int index;
  
  if (g_data_057ac3ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetCount);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SettingType_ToEnum_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    g_data_057ac3ec = '\x01';
  }
  Settings_BaseSettingsContainer__DeserializeFromJsonObject
            ((Settings_BaseSettingsContainer_o *)__this,json,(MethodInfo *)0x0);
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear(pSVar6,MethodInfo_Void_Clear);
    pSVar7 = (__this->fields).Names;
    if (pSVar7 != (Settings_ListSetting_StringSetting__o *)0x0) {
      index = 0;
      while( true ) {
        iVar3 = Settings_ListSetting_object___GetCount((Settings_ListSetting_T__o *)pSVar7,MethodInfo_Int32_GetCount);
        if (iVar3 <= index) {
          return;
        }
        pSVar7 = (__this->fields).Names;
        if ((((pSVar7 == (Settings_ListSetting_StringSetting__o *)0x0) ||
             (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar7->fields)._value,
             pSVar2 == (System_Collections_Generic_List_object__o *)0x0)) ||
            (pIVar5 = System_Collections_Generic_List_object___get_Item(pSVar2,index,MethodInfo_StringSetting_get_Item),
            pIVar5 == (Il2CppObject *)0x0)) ||
           (__this_00 = pIVar5[1].monitor, __this_00 == (System_String_o *)0x0)) break;
        iVar3 = System_String__IndexOf(__this_00,0x2e,(MethodInfo *)0x0);
        if (iVar3 < 0) {
          pSVar7 = (__this->fields).Types;
          key = __this_00;
        }
        else {
          key = System_String__Substring_3af8da0(__this_00,0,iVar3,(MethodInfo *)0x0);
          __this_00 = System_String__Substring(__this_00,iVar3 + 1,(MethodInfo *)0x0);
          pSVar7 = (__this->fields).Types;
        }
        if (((pSVar7 == (Settings_ListSetting_StringSetting__o *)0x0) ||
            (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar7->fields)._value,
            pSVar2 == (System_Collections_Generic_List_object__o *)0x0)) ||
           (pIVar5 = System_Collections_Generic_List_object___get_Item(pSVar2,index,MethodInfo_StringSetting_get_Item),
           pIVar5 == (Il2CppObject *)0x0)) break;
        value = pIVar5[1].monitor;
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar3 = MiscExtensions__ToEnum_Int32Enum_(value,1,MethodInfo_SettingType_ToEnum_SettingType);
        pSVar7 = (__this->fields).Values;
        if (((pSVar7 == (Settings_ListSetting_StringSetting__o *)0x0) ||
            (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar7->fields)._value,
            pSVar2 == (System_Collections_Generic_List_object__o *)0x0)) ||
           (pIVar5 = System_Collections_Generic_List_object___get_Item(pSVar2,index,MethodInfo_StringSetting_get_Item),
           pIVar5 == (Il2CppObject *)0x0)) break;
        __this_01 = (Settings_PresetSettingsContainer_o *)
                    Settings_SettingsUtil__DeserializeValueFromJson(iVar3,pIVar5[1].monitor,(MethodInfo *)0x0)
        ;
        if (__this_01 != (Settings_PresetSettingsContainer_o *)0x0) {
          bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
          if (((((Il2CppClass *)__this_01->klass)->_2).naturalAligment < bVar1) ||
             ((((Il2CppClass *)__this_01->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
            il2cpp_runtime_helper_022b2fd0();
            if (g_data_057ac3ed == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Se);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_BaseSetting);
              il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
              il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
              g_data_057ac3ed = '\x01';
            }
            __this_03 = (Settings_PresetSettingsContainer_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_BaseSetting);
            System_Collections_Generic_Dictionary_object__object____ctor
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Se);
            __this_01[1].klass = __this_03;
            il2cpp_runtime_helper_022b4080(__this_01 + 1,__this_03);
            __this_04 = (Settings_ListSetting_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
            Settings_ListSetting_object____ctor_3521170(__this_04,MethodInfo_ListSetting_1_StringSetting);
            __this_01[1].monitor = __this_04;
            il2cpp_runtime_helper_022b4080(&__this_01[1].monitor,__this_04);
            __this_05 = (System_Collections_Specialized_OrderedDictionary_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting)
            ;
            Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)__this_05,MethodInfo_ListSetting_1_StringSetting);
            __this_01[1].fields.Settings = __this_05;
            il2cpp_runtime_helper_022b4080(&__this_01[1].fields,__this_05);
            __this_06 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                        il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
            Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)__this_06,MethodInfo_ListSetting_1_StringSetting);
            __this_01[1].fields.TypedSettings = __this_06;
            il2cpp_runtime_helper_022b4080(&__this_01[1].fields.TypedSettings);
            Settings_BaseSettingsContainer___ctor(__this_01,(MethodInfo *)0x0);
            return;
          }
        }
        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
        if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar6,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar4 == '\0') {
          pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
          __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_BaseSetting);
          System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
          if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar6,(Il2CppObject *)key,(Il2CppObject *)__this_02,MethodInfo_Void_set_Item);
        }
        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
        if ((pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar6,(Il2CppObject *)key,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item),
           pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) break;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar6,(Il2CppObject *)__this_00,(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
        index = index + 1;
        pSVar7 = (__this->fields).Names;
        if (pSVar7 == (Settings_ListSetting_StringSetting__o *)0x0) break;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Settings.InGameAddonSettings$$.ctor
// il2cpp: void Settings_InGameAddonSettings___ctor (Settings_InGameAddonSettings_o* __this, const MethodInfo* method);
// 0x408a870

void Settings_InGameAddonSettings___ctor(Settings_InGameAddonSettings_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Settings_ListSetting_StringSetting__o *pSVar1;
  
  if (g_data_057ac3ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Se);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
    g_data_057ac3ed = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Se);
  (__this->fields).Current =
       (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)__this_00;
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


