// Type: Settings.InGameModeSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/InGameModeSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/InGame/InGameModeSettings.cs  [CHANGED since prior version]
// --------------------------------

// Settings.InGameModeSettings$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_InGameModeSettings__SerializeToJsonObject (Settings_InGameModeSettings_o* __this, const MethodInfo* method);
// 0x3d954f0

SimpleJSONFixed_JSONNode_o *
Settings_InGameModeSettings__SerializeToJsonObject
          (Settings_InGameModeSettings_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_02;
  Settings_StringSetting_o *pSVar4;
  Il2CppObject *pIVar5;
  System_String_o *defaultValue;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  undefined1 auVar8 [8];
  Il2CppType *pIVar9;
  System_String_o *pSVar10;
  undefined1 auStack_48 [8];
  Il2CppType *pIStack_40;
  int32_t iStack_38;
  undefined4 uStack_34;
  
  if (DAT_0570273d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddItem);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_SettingType);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_0570273d = '\x01';
  }
  pSVar1 = (__this->fields).Names;
  if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
    Settings_ListSetting<object>__Clear((Settings_ListSetting_T__o *)pSVar1,MethodInfo_Void_Clear);
    pSVar1 = (__this->fields).Values;
    if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
      Settings_ListSetting<object>__Clear((Settings_ListSetting_T__o *)pSVar1,MethodInfo_Void_Clear);
      pSVar1 = (__this->fields).Types;
      if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
        Settings_ListSetting<object>__Clear((Settings_ListSetting_T__o *)pSVar1,MethodInfo_Void_Clear);
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current
        ;
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          __this_02 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                                (pSVar2,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
          if (__this_02 !=
              (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
            System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                        *)auStack_48,__this_02,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
            auVar8 = auStack_48;
            pIVar9 = pIStack_40;
            pSVar6 = (System_String_o *)CONCAT44(uStack_34,iStack_38);
            while( true ) {
              __this_00.fields._8_8_ = pIVar9;
              __this_00.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)auVar8;
              __this_00.fields._currentKey = (Il2CppObject *)pSVar6;
              bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffff98);
              if ((char)bVar3 == '\0') {
                __this_01.fields._8_8_ = pIVar9;
                __this_01.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)auVar8;
                __this_01.fields._currentKey = (Il2CppObject *)pSVar6;
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                          (__this_01,(MethodInfo_31D0840 *)&stack0xffffffffffffff98);
                pSVar7 = Settings_BaseSettingsContainer__SerializeToJsonObject
                                   ((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
                return pSVar7;
              }
              pSVar1 = (__this->fields).Names;
              pSVar10 = pSVar6;
              pSVar4 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
              Settings_StringSetting___ctor(pSVar4,pSVar6,0x7fffffff,(MethodInfo *)0x0);
              if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              Settings_ListSetting<object>__AddItem
                        ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar4,
                         MethodInfo_Void_AddItem);
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields).Current;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pSVar1 = (__this->fields).Values;
              pIVar5 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                 (pSVar2,(Il2CppObject *)pSVar6,MethodInfo_BaseSetting_get_Item);
              if (pIVar5 == (Il2CppObject *)0x0) break;
              defaultValue = (System_String_o *)
                             (*pIVar5->klass->vtable[7].methodPtr)
                                       (pIVar5,pIVar5->klass->vtable[7].method);
              pSVar4 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
              Settings_StringSetting___ctor(pSVar4,defaultValue,0x7fffffff,(MethodInfo *)0x0);
              if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              Settings_ListSetting<object>__AddItem
                        ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar4,
                         MethodInfo_Void_AddItem);
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields).Current;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pSVar1 = (__this->fields).Types;
              pIVar5 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                 (pSVar2,(Il2CppObject *)pSVar6,MethodInfo_BaseSetting_get_Item);
              iStack_38 = Settings_SettingsUtil__GetSettingType
                                    ((Settings_BaseSetting_o *)pIVar5,(MethodInfo *)0x0);
              auStack_48 = (undefined1  [8])TypeInfo_SettingType;
              pIStack_40 = (Il2CppType *)0xffffffffffffffff;
              pSVar6 = System_Enum__ToString((System_Enum_o *)auStack_48,(MethodInfo *)0x0);
              pSVar4 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
              Settings_StringSetting___ctor(pSVar4,pSVar6,0x7fffffff,(MethodInfo *)0x0);
              if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              Settings_ListSetting<object>__AddItem
                        ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar4,
                         MethodInfo_Void_AddItem);
              pSVar6 = pSVar10;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.InGameModeSettings$$DeserializeFromJsonObject
// il2cpp: void Settings_InGameModeSettings__DeserializeFromJsonObject (Settings_InGameModeSettings_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x3d95960

void Settings_InGameModeSettings__DeserializeFromJsonObject
               (Settings_InGameModeSettings_o *__this,SimpleJSONFixed_JSONNode_o *json,
               MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_String_o *value;
  int32_t iVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  int index;
  Settings_ListSetting_StringSetting__o *pSVar7;
  
  if (DAT_0570273e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Int32_GetCount);
    il2cpp_init_method_metadata(&MethodInfo_StringSetting_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_SettingType_ToEnum_SettingType);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    DAT_0570273e = '\x01';
  }
  Settings_BaseSettingsContainer__DeserializeFromJsonObject
            ((Settings_BaseSettingsContainer_o *)__this,json,(MethodInfo *)0x0);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(pSVar2,MethodInfo_Void_Clear);
    pSVar7 = (__this->fields).Names;
    if (pSVar7 != (Settings_ListSetting_StringSetting__o *)0x0) {
      index = 0;
      while( true ) {
        iVar4 = Settings_ListSetting<object>__GetCount
                          ((Settings_ListSetting_T__o *)pSVar7,MethodInfo_Int32_GetCount);
        if (iVar4 <= index) {
          return;
        }
        pSVar7 = (__this->fields).Types;
        if ((pSVar7 == (Settings_ListSetting_StringSetting__o *)0x0) ||
           (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar7->fields)._value,
           pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) break;
        pIVar5 = System_Collections_Generic_List<object>__get_Item(pSVar3,index,MethodInfo_StringSetting_get_Item);
        if (pIVar5 == (Il2CppObject *)0x0) break;
        value = pIVar5[1].monitor;
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_init_class();
        }
        iVar4 = MiscExtensions__ToEnum<Int32Enum>(value,1,MethodInfo_SettingType_ToEnum_SettingType);
        pSVar7 = (__this->fields).Values;
        if ((pSVar7 == (Settings_ListSetting_StringSetting__o *)0x0) ||
           (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar7->fields)._value,
           pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) break;
        pIVar5 = System_Collections_Generic_List<object>__get_Item(pSVar3,index,MethodInfo_StringSetting_get_Item);
        if (pIVar5 == (Il2CppObject *)0x0) break;
        pIVar5 = Settings_SettingsUtil__DeserializeValueFromJson
                           (iVar4,pIVar5[1].monitor,(MethodInfo *)0x0);
        if (pIVar5 != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
          if (((pIVar5->klass->_2).naturalAligment < bVar1) ||
             ((pIVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pIVar5);
          }
        }
        pSVar7 = (__this->fields).Names;
        if ((pSVar7 == (Settings_ListSetting_StringSetting__o *)0x0) ||
           (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar7->fields)._value,
           pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) break;
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current
        ;
        pIVar6 = System_Collections_Generic_List<object>__get_Item(pSVar3,index,MethodInfo_StringSetting_get_Item);
        if ((pIVar6 == (Il2CppObject *)0x0) ||
           (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) break;
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar2,pIVar6[1].monitor,pIVar5,MethodInfo_Void_Add);
        index = index + 1;
        pSVar7 = (__this->fields).Names;
        if (pSVar7 == (Settings_ListSetting_StringSetting__o *)0x0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.InGameModeSettings$$.ctor
// il2cpp: void Settings_InGameModeSettings___ctor (Settings_InGameModeSettings_o* __this, const MethodInfo* method);
// 0x3d95ba0

void Settings_InGameModeSettings___ctor(Settings_InGameModeSettings_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Settings_ListSetting_StringSetting__o *pSVar1;
  
  if (DAT_0570273f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_ListSetting_StringSetting);
    DAT_0570273f = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__BaseSetting);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
  (__this->fields).Current =
       (System_Collections_Generic_Dictionary_string__BaseSetting__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields).Current,__this_00);
  pSVar1 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting<object>___ctor((Settings_ListSetting_T__o *)pSVar1,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).Names = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Names,pSVar1);
  pSVar1 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting<object>___ctor((Settings_ListSetting_T__o *)pSVar1,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).Values = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Values,pSVar1);
  pSVar1 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting<object>___ctor((Settings_ListSetting_T__o *)pSVar1,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).Types = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Types);
  Settings_BaseSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


