// Type: GameManagers.ChatManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameManagers/ChatManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/ChatManager.cs
// --------------------------------

// GameManagers.ChatManager.CommandAttribute.<>c$$.cctor
// il2cpp: void GameManagers_ChatManager_CommandAttribute___c___cctor (const MethodInfo* method);
// 0x181e61e50

void GameManagers_ChatManager_CommandAttribute___c___cctor(MethodInfo *method)

{
  GameManagers_ChatManager_CommandAttribute___c_o *__this;
  
  if (Il2CppMethodInitialized_184344e68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_CommandAttribute_c);
    Il2CppMethodInitialized_184344e68 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_ChatManager_CommandAttribute_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_GameManagers_ChatManager_CommandAttribute_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager_CommandAttribute_c->static_fields->__9,__this);
  return;
}


// GameManagers.ChatManager.CommandAttribute.<>c$$.ctor
// il2cpp: void GameManagers_ChatManager_CommandAttribute___c___ctor (GameManagers_ChatManager_CommandAttribute___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameManagers_ChatManager_CommandAttribute___c___ctor(GameManagers_ChatManager_CommandAttribute___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager.CommandAttribute.<>c$$<.ctor>b__33_0
// il2cpp: System_String_o* GameManagers_ChatManager_CommandAttribute___c____ctor_b__33_0 (GameManagers_ChatManager_CommandAttribute___c_o* __this, System_Text_RegularExpressions_Match_o* m, const MethodInfo* method);
// 0x181e61c90

System_String_o *
GameManagers_ChatManager_CommandAttribute___c____ctor_b__33_0
          (GameManagers_ChatManager_CommandAttribute___c_o *__this,System_Text_RegularExpressions_Match_o *m,
          MethodInfo *method)

{
  System_Text_RegularExpressions_GroupCollection_o *__this_00;
  System_Text_RegularExpressions_Capture_o *__this_01;
  System_String_o *pSVar1;
  
  if (m != (System_Text_RegularExpressions_Match_o *)0x0) {
    __this_00 = (*(m->klass->vtable)._5_get_Groups.methodPtr)(m,(m->klass->vtable)._5_get_Groups.method);
    if (__this_00 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
      __this_01 = (System_Text_RegularExpressions_Capture_o *)
                  System_Text_RegularExpressions_GroupCollection__System_Collections_IList_get_Item
                            (__this_00,1,(MethodInfo *)0x0);
      if (__this_01 != (System_Text_RegularExpressions_Capture_o *)0x0) {
        pSVar1 = System_Text_RegularExpressions_Capture__ToString(__this_01,(MethodInfo *)0x0);
        return pSVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.CommandAttribute$$get_Name
// il2cpp: System_String_o* GameManagers_ChatManager_CommandAttribute__get_Name (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
GameManagers_ChatManager_CommandAttribute__get_Name(GameManagers_ChatManager_CommandAttribute_o* __this, MethodInfo* method)

{
  return (__this->fields)._Name_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_Name
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_Name (GameManagers_ChatManager_CommandAttribute_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180b8ac00

void
GameManagers_ChatManager_CommandAttribute__set_Name(GameManagers_ChatManager_CommandAttribute_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Name_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField,value);
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_Description
// il2cpp: System_String_o* GameManagers_ChatManager_CommandAttribute__get_Description (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x180573e90

System_String_o*
GameManagers_ChatManager_CommandAttribute__get_Description(GameManagers_ChatManager_CommandAttribute_o* __this, MethodInfo* method)

{
  return (__this->fields)._Description_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_Description
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_Description (GameManagers_ChatManager_CommandAttribute_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180c8de30

void
GameManagers_ChatManager_CommandAttribute__set_Description(GameManagers_ChatManager_CommandAttribute_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Description_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField,value);
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_Alias
// il2cpp: System_String_o* GameManagers_ChatManager_CommandAttribute__get_Alias (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x1805852b0

System_String_o*
GameManagers_ChatManager_CommandAttribute__get_Alias(GameManagers_ChatManager_CommandAttribute_o* __this, MethodInfo* method)

{
  return (__this->fields)._Alias_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_Alias
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_Alias (GameManagers_ChatManager_CommandAttribute_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180ace2f0

void
GameManagers_ChatManager_CommandAttribute__set_Alias(GameManagers_ChatManager_CommandAttribute_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Alias_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Alias_k__BackingField,value);
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_Command
// il2cpp: System_Reflection_MethodInfo_o* GameManagers_ChatManager_CommandAttribute__get_Command (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x180584c80

System_Reflection_MethodInfo_o*
GameManagers_ChatManager_CommandAttribute__get_Command(GameManagers_ChatManager_CommandAttribute_o* __this, MethodInfo* method)

{
  return (__this->fields)._Command_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_Command
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_Command (GameManagers_ChatManager_CommandAttribute_o* __this, System_Reflection_MethodInfo_o* value, const MethodInfo* method);
// 0x180584ca0

void
GameManagers_ChatManager_CommandAttribute__set_Command(GameManagers_ChatManager_CommandAttribute_o* __this, System_Reflection_MethodInfo_o* value, MethodInfo* method)

{
  (__this->fields)._Command_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Command_k__BackingField,value);
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_IsAlias
// il2cpp: bool GameManagers_ChatManager_CommandAttribute__get_IsAlias (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x180acdd00

bool
GameManagers_ChatManager_CommandAttribute__get_IsAlias(GameManagers_ChatManager_CommandAttribute_o* __this, MethodInfo* method)

{
  return (__this->fields)._IsAlias_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_IsAlias
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_IsAlias (GameManagers_ChatManager_CommandAttribute_o* __this, bool value, const MethodInfo* method);
// 0x180ace1a0

void
GameManagers_ChatManager_CommandAttribute__set_IsAlias(GameManagers_ChatManager_CommandAttribute_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._IsAlias_k__BackingField = value;
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_Parameters
// il2cpp: System_String_array* GameManagers_ChatManager_CommandAttribute__get_Parameters (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x180c8eec0

System_String_array*
GameManagers_ChatManager_CommandAttribute__get_Parameters(GameManagers_ChatManager_CommandAttribute_o* __this, MethodInfo* method)

{
  return (__this->fields)._Parameters_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_Parameters
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_Parameters (GameManagers_ChatManager_CommandAttribute_o* __this, System_String_array* value, const MethodInfo* method);
// 0x1818be8a0

void
GameManagers_ChatManager_CommandAttribute__set_Parameters(GameManagers_ChatManager_CommandAttribute_o* __this, System_String_array* value, MethodInfo* method)

{
  (__this->fields)._Parameters_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Parameters_k__BackingField,value);
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_AutofillType
// il2cpp: int32_t GameManagers_ChatManager_CommandAttribute__get_AutofillType (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x18058a8b0

int32_t
GameManagers_ChatManager_CommandAttribute__get_AutofillType(GameManagers_ChatManager_CommandAttribute_o* __this, MethodInfo* method)

{
  return (UnityEngine_InputForUI_EventModifiers_Fields)
         (UnityEngine_InputForUI_EventModifiers_Fields)
         (__this->fields)._AutofillType_k__BackingField.fields._state;
}


// GameManagers.ChatManager.CommandAttribute$$set_AutofillType
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_AutofillType (GameManagers_ChatManager_CommandAttribute_o* __this, int32_t value, const MethodInfo* method);
// 0x18058aa60

void
GameManagers_ChatManager_CommandAttribute__set_AutofillType(GameManagers_ChatManager_CommandAttribute_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields)._AutofillType_k__BackingField.fields._state = (uint32_t)value.fields._state;
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_ExcludeFromHelp
// il2cpp: bool GameManagers_ChatManager_CommandAttribute__get_ExcludeFromHelp (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x181cc5a60

bool
GameManagers_ChatManager_CommandAttribute__get_ExcludeFromHelp(GameManagers_ChatManager_CommandAttribute_o* __this, MethodInfo* method)

{
  return (__this->fields)._ExcludeFromHelp_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_ExcludeFromHelp
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_ExcludeFromHelp (GameManagers_ChatManager_CommandAttribute_o* __this, bool value, const MethodInfo* method);
// 0x181cc5c30

void
GameManagers_ChatManager_CommandAttribute__set_ExcludeFromHelp(GameManagers_ChatManager_CommandAttribute_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._ExcludeFromHelp_k__BackingField = value;
  return;
}


// GameManagers.ChatManager.CommandAttribute$$.ctor
// il2cpp: void GameManagers_ChatManager_CommandAttribute___ctor (GameManagers_ChatManager_CommandAttribute_o* __this, GameManagers_ChatManager_CommandAttribute_o* commandAttribute, const MethodInfo* method);
// 0x181e53840

void GameManagers_ChatManager_CommandAttribute___ctor
               (GameManagers_ChatManager_CommandAttribute_o *__this,
               GameManagers_ChatManager_CommandAttribute_o *commandAttribute,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Reflection_MethodInfo_o *value;
  
  System_Attribute___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  if (commandAttribute != (GameManagers_ChatManager_CommandAttribute_o *)0x0) {
    pSVar1 = (commandAttribute->fields)._Name_k__BackingField;
    (__this->fields)._Name_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField,pSVar1);
    pSVar1 = (commandAttribute->fields)._Description_k__BackingField;
    (__this->fields)._Description_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField,pSVar1);
    pSVar1 = (commandAttribute->fields)._Alias_k__BackingField;
    (__this->fields)._Alias_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Alias_k__BackingField,pSVar1);
    value = (commandAttribute->fields)._Command_k__BackingField;
    (__this->fields)._Command_k__BackingField = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Command_k__BackingField,value);
    (__this->fields)._AutofillType_k__BackingField = (commandAttribute->fields)._AutofillType_k__BackingField;
    (__this->fields)._ExcludeFromHelp_k__BackingField =
         (commandAttribute->fields)._ExcludeFromHelp_k__BackingField;
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.CommandAttribute$$.ctor
// il2cpp: void GameManagers_ChatManager_CommandAttribute___ctor (GameManagers_ChatManager_CommandAttribute_o* __this, System_String_o* name, System_String_o* description, int32_t autofillType, bool excludeFromHelp, const MethodInfo* method);
// 0x181e538c0

void GameManagers_ChatManager_CommandAttribute___ctor_1e538c0
               (GameManagers_ChatManager_CommandAttribute_o *__this,System_String_o *name,
               System_String_o *description,int32_t autofillType,bool excludeFromHelp,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this_00;
  Il2CppObject *object;
  System_Text_RegularExpressions_MatchCollection_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar1;
  System_Func_Match__string__o *__this_01;
  System_String_array *value;
  
  if (Il2CppMethodInitialized_184344e67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Cast_Match);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_Match_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Match_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_ChatManager_CommandAttribute_c_ctor_b__33_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_CommandAttribute_c);
    Il2CppMethodInitialized_184344e67 = '\x01';
  }
  System_Attribute___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField,name);
  (__this->fields)._Description_k__BackingField = description;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField,description);
  (__this->fields)._AutofillType_k__BackingField = autofillType;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this_00 = TypeInfo_GameManagers_ChatManager->static_fields->ParamRegex;
  if (__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    source = System_Text_RegularExpressions_Regex__Matches_285d470(__this_00,description,(MethodInfo *)0x0);
    pSVar1 = System_Linq_Enumerable__Cast_object_
                       ((System_Collections_IEnumerable_o *)source,
                        (MethodInfo_6B75F0 *)MethodInfo_System_Linq_Enumerable_Cast_Match);
    if ((TypeInfo_GameManagers_ChatManager_CommandAttribute_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_CommandAttribute_c);
    }
    __this_01 = TypeInfo_GameManagers_ChatManager_CommandAttribute_c->static_fields->__9__33_0;
    if (__this_01 == (System_Func_Match__string__o *)0x0) {
      if ((TypeInfo_GameManagers_ChatManager_CommandAttribute_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_CommandAttribute_c)
        ;
      }
      object = (Il2CppObject *)TypeInfo_GameManagers_ChatManager_CommandAttribute_c->static_fields->__9;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Match_string);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,object,
                 (intptr_t)MethodInfo_GameManagers_ChatManager_CommandAttribute_c_ctor_b__33_0,
                 (MethodInfo_16E67D0 *)0x0);
      TypeInfo_GameManagers_ChatManager_CommandAttribute_c->static_fields->__9__33_0 = __this_01;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_GameManagers_ChatManager_CommandAttribute_c->static_fields->__9__33_0,__this_01);
    }
    pSVar1 = System_Linq_Enumerable__Select_Vector3__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                        (System_Func_TSource__TResult__o *)__this_01,
                        (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_Match_string);
    value = (System_String_array *)
            System_Linq_Enumerable__ToArray_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                       (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
    (__this->fields)._Parameters_k__BackingField = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Parameters_k__BackingField,value);
    (__this->fields)._ExcludeFromHelp_k__BackingField = excludeFromHelp;
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.CLCommandAttribute$$get_Callback
// il2cpp: CustomLogic_UserMethod_o* GameManagers_ChatManager_CLCommandAttribute__get_Callback (GameManagers_ChatManager_CLCommandAttribute_o* __this, const MethodInfo* method);
// 0x180c7fb50

CustomLogic_UserMethod_o*
GameManagers_ChatManager_CLCommandAttribute__get_Callback(GameManagers_ChatManager_CLCommandAttribute_o* __this, MethodInfo* method)

{
  return (__this->fields)._Current_k__BackingField;
}


// GameManagers.ChatManager.CLCommandAttribute$$.ctor
// il2cpp: void GameManagers_ChatManager_CLCommandAttribute___ctor (GameManagers_ChatManager_CLCommandAttribute_o* __this, System_String_o* name, System_String_o* description, CustomLogic_UserMethod_o* callback, int32_t autofillType, const MethodInfo* method);
// 0x181e41f40

void GameManagers_ChatManager_CLCommandAttribute___ctor
               (GameManagers_ChatManager_CLCommandAttribute_o *__this,System_String_o *name,
               System_String_o *description,CustomLogic_UserMethod_o *callback,int32_t autofillType,
               MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this_00;
  Il2CppObject *object;
  System_Text_RegularExpressions_MatchCollection_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar1;
  System_Func_Match__string__o *__this_01;
  System_String_array *value;
  
  if (Il2CppMethodInitialized_184344e67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Cast_Match);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_Match_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Match_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_ChatManager_CommandAttribute_c_ctor_b__33_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_CommandAttribute_c);
    Il2CppMethodInitialized_184344e67 = '\x01';
  }
  UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField,name);
  (__this->fields)._Description_k__BackingField = description;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField,description);
  (__this->fields)._AutofillType_k__BackingField = autofillType;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this_00 = TypeInfo_GameManagers_ChatManager->static_fields->ParamRegex;
  if (__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    source = System_Text_RegularExpressions_Regex__Matches_285d470(__this_00,description,(MethodInfo *)0x0);
    pSVar1 = System_Linq_Enumerable__Cast_object_
                       ((System_Collections_IEnumerable_o *)source,
                        (MethodInfo_6B75F0 *)MethodInfo_System_Linq_Enumerable_Cast_Match);
    if ((TypeInfo_GameManagers_ChatManager_CommandAttribute_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_CommandAttribute_c);
    }
    __this_01 = TypeInfo_GameManagers_ChatManager_CommandAttribute_c->static_fields->__9__33_0;
    if (__this_01 == (System_Func_Match__string__o *)0x0) {
      if ((TypeInfo_GameManagers_ChatManager_CommandAttribute_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_CommandAttribute_c)
        ;
      }
      object = (Il2CppObject *)TypeInfo_GameManagers_ChatManager_CommandAttribute_c->static_fields->__9;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Match_string);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,object,
                 (intptr_t)MethodInfo_GameManagers_ChatManager_CommandAttribute_c_ctor_b__33_0,
                 (MethodInfo_16E67D0 *)0x0);
      TypeInfo_GameManagers_ChatManager_CommandAttribute_c->static_fields->__9__33_0 = __this_01;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_GameManagers_ChatManager_CommandAttribute_c->static_fields->__9__33_0,__this_01);
    }
    pSVar1 = System_Linq_Enumerable__Select_Vector3__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                        (System_Func_TSource__TResult__o *)__this_01,
                        (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_Match_string);
    value = (System_String_array *)
            System_Linq_Enumerable__ToArray_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                       (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
    (__this->fields)._Parameters_k__BackingField = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Parameters_k__BackingField,value);
    (__this->fields)._ExcludeFromHelp_k__BackingField = false;
    (__this->fields)._Callback_k__BackingField = callback;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Callback_k__BackingField,callback);
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.SuggestionState$$Clear
// il2cpp: void GameManagers_ChatManager_SuggestionState__Clear (const MethodInfo* method);
// 0x181e60320

void GameManagers_ChatManager_SuggestionState__Clear(MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_string__o *pSVar2;
  
  if (Il2CppMethodInitialized_184344e69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e69 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = "";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText,
             "");
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalText = "";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalText,
             "");
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalStartPos = -1;
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalEndPos = -1;
  pSVar2 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
  if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar2->fields)._size;
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex = -1;
    TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type = 0;
    if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick == false) {
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting = false;
    }
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText =
         "";
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText,
               "");
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.SuggestionState$$SetOriginalContext
// il2cpp: void GameManagers_ChatManager_SuggestionState__SetOriginalContext (System_String_o* original, int32_t startPos, int32_t endPos, const MethodInfo* method);
// 0x181e604f0

void GameManagers_ChatManager_SuggestionState__SetOriginalContext
               (System_String_o *original,int32_t startPos,int32_t endPos,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344e6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_184344e6a = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalText = original;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalText,original);
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalStartPos = startPos;
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalEndPos = endPos;
  return;
}


// GameManagers.ChatManager.SuggestionState$$get_HasSuggestions
// il2cpp: bool GameManagers_ChatManager_SuggestionState__get_HasSuggestions (const MethodInfo* method);
// 0x181e60750

bool GameManagers_ChatManager_SuggestionState__get_HasSuggestions(MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344e6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_184344e6b = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  pSVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    return 0 < (pSVar1->fields)._size;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.SuggestionState$$get_IsActive
// il2cpp: bool GameManagers_ChatManager_SuggestionState__get_IsActive (const MethodInfo* method);
// 0x181e607c0

bool GameManagers_ChatManager_SuggestionState__get_IsActive(MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344e6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_184344e6c = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type == 0) {
    return false;
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  if (Il2CppMethodInitialized_184344e6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_184344e6b = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  pSVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    return 0 < (pSVar1->fields)._size;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.SuggestionState$$.cctor
// il2cpp: void GameManagers_ChatManager_SuggestionState___cctor (const MethodInfo* method);
// 0x181e605a0

void GameManagers_ChatManager_SuggestionState___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  
  if (Il2CppMethodInitialized_184344e6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e6d = '\x01';
  }
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = "";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText,
             "");
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalText = "";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalText,
             "");
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalStartPos = -1;
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalEndPos = -1;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions,__this);
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex = -1;
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type = 0;
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting = false;
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText =
       "";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText,
             "");
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick = false;
  return;
}


// GameManagers.ChatManager.ChatDisplayLine$$Plain
// il2cpp: GameManagers_ChatManager_ChatDisplayLine_o GameManagers_ChatManager_ChatDisplayLine__Plain (System_String_o* text, const MethodInfo* method);
// 0x181e42140

GameManagers_ChatManager_ChatDisplayLine_o *
GameManagers_ChatManager_ChatDisplayLine__Plain
          (GameManagers_ChatManager_ChatDisplayLine_o *__return_storage_ptr__,System_String_o *text,
          MethodInfo *method)

{
  (__return_storage_ptr__->fields).PlainText = (System_String_o *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->fields).UsePlayerStyle = 0;
  (__return_storage_ptr__->fields).TimeText = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).IdText = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).SenderName = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).BodyText = (System_String_o *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->fields).SenderID = 0;
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__return_storage_ptr__->fields).PlainText = text;
  Il2CppCodeGenWriteBarrier((void **)__return_storage_ptr__,text);
  (__return_storage_ptr__->fields).UsePlayerStyle = false;
  (__return_storage_ptr__->fields).SenderID = -1;
  return __return_storage_ptr__;
}


// GameManagers.ChatManager.<>c$$.cctor
// il2cpp: void GameManagers_ChatManager___c___cctor (const MethodInfo* method);
// 0x181e61ec0

void GameManagers_ChatManager___c___cctor(MethodInfo *method)

{
  GameManagers_ChatManager___c_o *__this;
  
  if (Il2CppMethodInitialized_184344e6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_c);
    Il2CppMethodInitialized_184344e6e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_GameManagers_ChatManager_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager_c->static_fields->__9,__this);
  return;
}


// GameManagers.ChatManager.<>c$$.ctor
// il2cpp: void GameManagers_ChatManager___c___ctor (GameManagers_ChatManager___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameManagers_ChatManager___c___ctor(GameManagers_ChatManager___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager.<>c$$<Help>b__12_0
// il2cpp: bool GameManagers_ChatManager___c___Help_b__12_0 (GameManagers_ChatManager___c_o* __this, System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv, const MethodInfo* method);
// 0x181e619e0

bool GameManagers_ChatManager___c___Help_b__12_0
               (GameManagers_ChatManager___c_o *__this,
               System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o *kv,
               MethodInfo *method)

{
  GameManagers_ChatManager_CommandAttribute_o *pGVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184344e6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_string_ChatManager_CommandAttribute_get_Value
              );
    Il2CppMethodInitialized_184344e6f = '\x01';
  }
  pGVar1 = (kv->fields).value;
  if (pGVar1 != (GameManagers_ChatManager_CommandAttribute_o *)0x0) {
    if ((pGVar1->fields)._ExcludeFromHelp_k__BackingField != false) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      if (Il2CppMethodInitialized_184344e11 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
        il2cpp_codegen_initialize_runtime_metadata(&"regionban");
        il2cpp_codegen_initialize_runtime_metadata(&"regionunban");
        il2cpp_codegen_initialize_runtime_metadata(&"regionipban");
        Il2CppMethodInitialized_184344e11 = '\x01';
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      bVar2 = GameManagers_ChatManager__IsAdminOrModerator((MethodInfo *)0x0);
      if (!bVar2) {
        return false;
      }
      pSVar3 = (((kv->fields).value)->fields)._Name_k__BackingField;
      if (pSVar3 == (System_String_o *)0x0) goto label_181e61b0b;
      pSVar3 = System_String__ToLower(pSVar3,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar3,"regionban",(MethodInfo *)0x0);
      if (!bVar2) {
        bVar2 = System_String__op_Equality(pSVar3,"regionipban",(MethodInfo *)0x0);
        if (!bVar2) {
          bVar2 = System_String__op_Equality(pSVar3,"regionunban",(MethodInfo *)0x0);
          return bVar2;
        }
      }
    }
    return true;
  }
label_181e61b0b:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.<>c$$<Help>b__12_1
// il2cpp: System_String_o* GameManagers_ChatManager___c___Help_b__12_1 (GameManagers_ChatManager___c_o* __this, System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv, const MethodInfo* method);
// 0x181e61b20

System_String_o *
GameManagers_ChatManager___c___Help_b__12_1
          (GameManagers_ChatManager___c_o *__this,
          System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o *kv,
          MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344e70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_ChatManager_CommandAttribute_get_Key
              );
    Il2CppMethodInitialized_184344e70 = 1;
    return (kv->fields).key;
  }
  return (kv->fields).key;
}


// GameManagers.ChatManager.<>c$$<Help>b__12_2
// il2cpp: GameManagers_ChatManager_CommandAttribute_o* GameManagers_ChatManager___c___Help_b__12_2 (GameManagers_ChatManager___c_o* __this, System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv, const MethodInfo* method);
// 0x181e61b60

GameManagers_ChatManager_CommandAttribute_o *
GameManagers_ChatManager___c___Help_b__12_2
          (GameManagers_ChatManager___c_o *__this,
          System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o *kv,
          MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344e71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_string_ChatManager_CommandAttribute_get_Value
              );
    Il2CppMethodInitialized_184344e71 = 1;
    return (kv->fields).value;
  }
  return (kv->fields).value;
}


// GameManagers.ChatManager.<>c$$<SaveChatHistory>b__13_0
// il2cpp: System_String_o* GameManagers_ChatManager___c___SaveChatHistory_b__13_0 (GameManagers_ChatManager___c_o* __this, System_String_o* msg, int32_t i, const MethodInfo* method);
// 0x181e61ba0

System_String_o *
GameManagers_ChatManager___c___SaveChatHistory_b__13_0
          (GameManagers_ChatManager___c_o *__this,System_String_o *msg,int32_t i,MethodInfo *method)

{
  System_Collections_Generic_List_DateTime__o *__this_00;
  System_DateTime_o timestamp;
  System_String_o *input;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344e72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_DateTime_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&"<.*?>");
    Il2CppMethodInitialized_184344e72 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this_00 = TypeInfo_GameManagers_ChatManager->static_fields->Timestamps;
  if (__this_00 != (System_Collections_Generic_List_DateTime__o *)0x0) {
    timestamp.fields._dateData =
         (System_DateTime_Fields)
         System_Collections_Generic_List_object___System_Collections_IList_get_Item
                   ((System_Collections_Generic_List_object__o *)__this_00,i,
                    (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_DateTime_get_Item);
    input = GameManagers_ChatManager__GetFormattedMessage(msg,timestamp,false,(MethodInfo *)0x0);
    pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    if ((TypeInfo_System_Text_RegularExpressions_Regex->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
    }
    pSVar1 = System_Text_RegularExpressions_Regex__Replace
                       (input,"<.*?>",pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.<>c$$<HandleTypingInternal>b__132_0
// il2cpp: int32_t GameManagers_ChatManager___c___HandleTypingInternal_b__132_0 (GameManagers_ChatManager___c_o* __this, Photon_Realtime_Player_o* a, Photon_Realtime_Player_o* b, const MethodInfo* method);
// 0x181e616b0

int32_t
GameManagers_ChatManager___c___HandleTypingInternal_b__132_0(GameManagers_ChatManager___c_o* __this, Photon_Realtime_Player_o* a, Photon_Realtime_Player_o* b, MethodInfo* method)

{
  int32_t iVar1;
  int32_t local_res10 [6];
  
  if ((a != (Photon_Realtime_Player_o *)0x0) &&
     (local_res10[0] = (a->fields).actorNumber, b != (Photon_Realtime_Player_o *)0x0)) {
    iVar1 = System_Int32__CompareTo_1b28ec0(local_res10,(b->fields).actorNumber,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.<>c$$<HandleTypingInternal>b__132_1
// il2cpp: System_String_o* GameManagers_ChatManager___c___HandleTypingInternal_b__132_1 (GameManagers_ChatManager___c_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x181e616f0

System_String_o *
GameManagers_ChatManager___c___HandleTypingInternal_b__132_1
          (GameManagers_ChatManager___c_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  Il2CppObject *arg0;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  int32_t local_res10 [6];
  
  if (Il2CppMethodInitialized_184344e73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"[{0}]");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e73 = '\x01';
  }
  if (p != (Photon_Realtime_Player_o *)0x0) {
    local_res10[0] = (p->fields).actorNumber;
    arg0 = il2cpp_value_box(g_data_184354e08,local_res10);
    pSVar1 = System_String__Format("[{0}]",arg0,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar1 = GameManagers_ChatManager__GetColorString(pSVar1,1,false,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar2 = PhotonExtensions__GetStringProperty
                       (p,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                        (MethodInfo *)0x0);
    if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
    }
    pSVar2 = Anticheat_ChatFilter__FilterSizeTag(pSVar2,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969b70(pSVar1," ",pSVar2,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.<>c$$<HandleTypingInternal>b__132_2
// il2cpp: int32_t GameManagers_ChatManager___c___HandleTypingInternal_b__132_2 (GameManagers_ChatManager___c_o* __this, System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o a, System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o b, const MethodInfo* method);
// 0x181e61840

int32_t GameManagers_ChatManager___c___HandleTypingInternal_b__132_2
                  (GameManagers_ChatManager___c_o *__this,
                  System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o *a,
                  System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o *b,
                  MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184344e74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_ChatManager_CommandAttribute_get_Key
              );
    Il2CppMethodInitialized_184344e74 = '\x01';
  }
  iVar1 = System_String__Compare_1969070((a->fields).key,(b->fields).key,4,(MethodInfo *)0x0);
  return iVar1;
}


// GameManagers.ChatManager.<>c$$<HandleTypingInternal>b__132_3
// il2cpp: int32_t GameManagers_ChatManager___c___HandleTypingInternal_b__132_3 (GameManagers_ChatManager___c_o* __this, Photon_Realtime_Player_o* a, Photon_Realtime_Player_o* b, const MethodInfo* method);
// 0x181e616b0

int32_t GameManagers_ChatManager___c___HandleTypingInternal_b__132_3
                  (GameManagers_ChatManager___c_o *__this,Photon_Realtime_Player_o *a,
                  Photon_Realtime_Player_o *b,MethodInfo *method)

{
  int32_t iVar1;
  int32_t local_res10 [6];
  
  if ((a != (Photon_Realtime_Player_o *)0x0) &&
     (local_res10[0] = (a->fields).actorNumber, b != (Photon_Realtime_Player_o *)0x0)) {
    iVar1 = System_Int32__CompareTo_1b28ec0(local_res10,(b->fields).actorNumber,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.<>c$$<HandleTypingInternal>b__132_4
// il2cpp: System_String_o* GameManagers_ChatManager___c___HandleTypingInternal_b__132_4 (GameManagers_ChatManager___c_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x181e61890

System_String_o *
GameManagers_ChatManager___c___HandleTypingInternal_b__132_4
          (GameManagers_ChatManager___c_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  Il2CppObject *arg0;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  int32_t local_res10 [6];
  
  if (Il2CppMethodInitialized_184344e75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"[{0}]");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e75 = '\x01';
  }
  if (p != (Photon_Realtime_Player_o *)0x0) {
    local_res10[0] = (p->fields).actorNumber;
    arg0 = il2cpp_value_box(g_data_184354e08,local_res10);
    pSVar1 = System_String__Format("[{0}]",arg0,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar1 = GameManagers_ChatManager__GetColorString(pSVar1,1,false,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar2 = PhotonExtensions__GetStringProperty
                       (p,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                        (MethodInfo *)0x0);
    if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
    }
    pSVar2 = Anticheat_ChatFilter__FilterSizeTag(pSVar2,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969b70(pSVar1," ",pSVar2,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.<>c__DisplayClass114_0$$.ctor
// il2cpp: void GameManagers_ChatManager___c__DisplayClass114_0___ctor (GameManagers_ChatManager___c__DisplayClass114_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameManagers_ChatManager___c__DisplayClass114_0___ctor(GameManagers_ChatManager___c__DisplayClass114_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager.<>c__DisplayClass114_0$$<ProcessMentions>b__0
// il2cpp: bool GameManagers_ChatManager___c__DisplayClass114_0___ProcessMentions_b__0 (GameManagers_ChatManager___c__DisplayClass114_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x181e61ce0

bool GameManagers_ChatManager___c__DisplayClass114_0___ProcessMentions_b__0
               (GameManagers_ChatManager___c__DisplayClass114_0_o *__this,Photon_Realtime_Player_o *p,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  System_String_o *pSVar2;
  System_String_o *a_00;
  int32_t local_res10 [2];
  
  if (Il2CppMethodInitialized_184344e76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e76 = '\x01';
  }
  if (p != (Photon_Realtime_Player_o *)0x0) {
    local_res10[0] = (p->fields).actorNumber;
    a = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar2 = PhotonExtensions__GetStringProperty
                       (p,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                        (MethodInfo *)0x0);
    if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
    }
    pSVar2 = Anticheat_ChatFilter__FilterSizeTag(pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar2 = MiscExtensions__StripRichText(pSVar2,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      a_00 = System_String__ToLower(pSVar2,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).mention;
      if (pSVar2 != (System_String_o *)0x0) {
        pSVar2 = System_String__ToLower(pSVar2,(MethodInfo *)0x0);
        (__this->fields).mention = pSVar2;
        Il2CppCodeGenWriteBarrier(&(__this->fields).mention,pSVar2);
        bVar1 = System_String__op_Equality(a,(__this->fields).mention,(MethodInfo *)0x0);
        if (bVar1) {
          return true;
        }
        bVar1 = System_String__op_Equality(a_00,(__this->fields).mention,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__136$$.ctor
// il2cpp: void GameManagers_ChatManager__ReactivateInputAfterClick_d__136___ctor (GameManagers_ChatManager__ReactivateInputAfterClick_d__136_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
GameManagers_ChatManager__ReactivateInputAfterClick_d__136___ctor(GameManagers_ChatManager__ReactivateInputAfterClick_d__136_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__136$$System.IDisposable.Dispose
// il2cpp: void GameManagers_ChatManager__ReactivateInputAfterClick_d__136__System_IDisposable_Dispose (GameManagers_ChatManager__ReactivateInputAfterClick_d__136_o* __this, const MethodInfo* method);
// 0x180547020

void
GameManagers_ChatManager__ReactivateInputAfterClick_d__136__System_IDisposable_Dispose(GameManagers_ChatManager__ReactivateInputAfterClick_d__136_o* __this, MethodInfo* method)

{
  return;
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__136$$MoveNext
// il2cpp: bool GameManagers_ChatManager__ReactivateInputAfterClick_d__136__MoveNext (GameManagers_ChatManager__ReactivateInputAfterClick_d__136_o* __this, const MethodInfo* method);
// 0x181e613f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e614ff: mov rdx, qword ptr [rip + 0x226f46a]  ; TypeInfo_GameManagers_ChatManager_SuggestionState

bool GameManagers_ChatManager__ReactivateInputAfterClick_d__136__MoveNext
               (GameManagers_ChatManager__ReactivateInputAfterClick_d__136_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_ChatPanel_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184344e77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_184344e77 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      pUVar2 = (__this->fields).chatPanel;
      (__this->fields).__1__state = -1;
      if (pUVar2 == (UI_ChatPanel_o *)0x0) goto label_181e61666;
      bVar3 = UI_ChatPanel__IsInputActive(pUVar2,(MethodInfo *)0x0);
      if (!bVar3) {
        pUVar2 = (__this->fields).chatPanel;
        if (pUVar2 == (UI_ChatPanel_o *)0x0) goto label_181e61666;
        UI_ChatPanel__Activate(pUVar2,(MethodInfo *)0x0);
        if ((__this->fields)._wasTabCompleting_5__2 != false) {
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          iVar1 = (__this->fields)._preservedIndex_5__3;
          if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex != iVar1) {
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex = iVar1;
            TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting = true;
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__RefreshSuggestionDisplay((MethodInfo *)0x0);
          }
        }
      }
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick = false;
    }
    return false;
  }
  (__this->fields).__1__state = -1;
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  (__this->fields)._wasTabCompleting_5__2 =
       TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting;
  pUVar2 = (__this->fields).chatPanel;
  (__this->fields)._preservedIndex_5__3 =
       TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex;
  if (pUVar2 != (UI_ChatPanel_o *)0x0) {
    UI_ChatPanel__Activate(pUVar2,(MethodInfo *)0x0);
    if ((__this->fields)._wasTabCompleting_5__2 != false) {
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      iVar1 = (__this->fields)._preservedIndex_5__3;
      if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex != iVar1) {
        if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        }
        TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex = iVar1;
        TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting = true;
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__RefreshSuggestionDisplay((MethodInfo *)0x0);
      }
    }
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 2;
    return true;
  }
label_181e61666:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__136$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_ChatManager__ReactivateInputAfterClick_d__136__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_ChatManager__ReactivateInputAfterClick_d__136_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_ChatManager__ReactivateInputAfterClick_d__136__System_Collections_Generic_IEnumerator_System_Object__get_Current(GameManagers_ChatManager__ReactivateInputAfterClick_d__136_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__136$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_ChatManager__ReactivateInputAfterClick_d__136__System_Collections_IEnumerator_Reset (GameManagers_ChatManager__ReactivateInputAfterClick_d__136_o* __this, const MethodInfo* method);
// 0x181e61670

void GameManagers_ChatManager__ReactivateInputAfterClick_d__136__System_Collections_IEnumerator_Reset
               (GameManagers_ChatManager__ReactivateInputAfterClick_d__136_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_ChatManager_ReactivateInputAfterClick_d__136_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__136$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_ChatManager__ReactivateInputAfterClick_d__136__System_Collections_IEnumerator_get_Current (GameManagers_ChatManager__ReactivateInputAfterClick_d__136_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_ChatManager__ReactivateInputAfterClick_d__136__System_Collections_IEnumerator_get_Current(GameManagers_ChatManager__ReactivateInputAfterClick_d__136_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.ChatManager.<WaitAndLeave>d__0$$.ctor
// il2cpp: void GameManagers_ChatManager__WaitAndLeave_d__0___ctor (GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
GameManagers_ChatManager__WaitAndLeave_d__0___ctor(GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.ChatManager.<WaitAndLeave>d__0$$System.IDisposable.Dispose
// il2cpp: void GameManagers_ChatManager__WaitAndLeave_d__0__System_IDisposable_Dispose (GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, const MethodInfo* method);
// 0x180547020

void
GameManagers_ChatManager__WaitAndLeave_d__0__System_IDisposable_Dispose(GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, MethodInfo* method)

{
  return;
}


// GameManagers.ChatManager.<WaitAndLeave>d__0$$MoveNext
// il2cpp: bool GameManagers_ChatManager__WaitAndLeave_d__0__MoveNext (GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, const MethodInfo* method);
// 0x181e61f30

bool GameManagers_ChatManager__WaitAndLeave_d__0__MoveNext
               (GameManagers_ChatManager__WaitAndLeave_d__0_o *__this,MethodInfo *method)

{
  int iVar1;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_00;
  
  if (Il2CppMethodInitialized_184344e78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184344e78 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,2.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
  }
  return false;
}


// GameManagers.ChatManager.<WaitAndLeave>d__0$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_ChatManager__WaitAndLeave_d__0__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_ChatManager__WaitAndLeave_d__0__System_Collections_Generic_IEnumerator_System_Object__get_Current(GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.ChatManager.<WaitAndLeave>d__0$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_ChatManager__WaitAndLeave_d__0__System_Collections_IEnumerator_Reset (GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, const MethodInfo* method);
// 0x181e61ff0

void GameManagers_ChatManager__WaitAndLeave_d__0__System_Collections_IEnumerator_Reset
               (GameManagers_ChatManager__WaitAndLeave_d__0_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_GameManagers_ChatManager_WaitAndLeave_d__0_System_Collections_IEnumerator_Reset)
  ;
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.ChatManager.<WaitAndLeave>d__0$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_ChatManager__WaitAndLeave_d__0__System_Collections_IEnumerator_get_Current (GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_ChatManager__WaitAndLeave_d__0__System_Collections_IEnumerator_get_Current(GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.ChatManager$$WaitAndLeave
// il2cpp: System_Collections_IEnumerator_o* GameManagers_ChatManager__WaitAndLeave (GameManagers_ChatManager_o* __this, const MethodInfo* method);
// 0x181e52d00

System_Collections_IEnumerator_o *
GameManagers_ChatManager__WaitAndLeave(GameManagers_ChatManager_o *__this,MethodInfo *method)

{
  GameManagers_ChatManager__WaitAndLeave_d__0_o *__this_00;
  
  if (Il2CppMethodInitialized_184344df5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_WaitAndLeave_d__0);
    Il2CppMethodInitialized_184344df5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_ChatManager_WaitAndLeave_d__0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.ChatManager$$HandleHoodToggle
// il2cpp: void GameManagers_ChatManager__HandleHoodToggle (System_String_array* args, const MethodInfo* method);
// 0x181e467f0

void GameManagers_ChatManager__HandleHoodToggle(System_String_array *args,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  GameManagers_BaseGameManager_c *__this;
  Characters_Human_c *pCVar3;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344df6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&"Usage: /hood");
    Il2CppMethodInitialized_184344df6 = '\x01';
  }
  if (args != (System_String_array *)0x0) {
    if ((int)args->max_length != 1) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      local_28[0].hasValue = false;
      local_28[0]._1_7_ = 0;
      local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
      GameManagers_ChatManager__AddLine
                ("Usage: /hood",0,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false
                 ,(MethodInfo *)0x0);
      return;
    }
    pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((bVar1 <= (pGVar2->klass->_2).typeHierarchyDepth) &&
          ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
           (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) &&
         (__this = (*(uint64_t *)((char *)pGVar2 + 0x78)), __this != (GameManagers_BaseGameManager_c *)0x0)) {
        pCVar3 = (__this->_1).image;
        bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
           ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
          Characters_Human__ToggleHood((Characters_Human_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$Clear
// il2cpp: void GameManagers_ChatManager__Clear (System_String_array* args, const MethodInfo* method);
// 0x181e44880

void GameManagers_ChatManager__Clear(System_String_array *args,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344df7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_184344df7 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__Clear_1e444a0((MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$ReviveAll
// il2cpp: void GameManagers_ChatManager__ReviveAll (System_String_array* args, const MethodInfo* method);
// 0x181e4ffb0

void GameManagers_ChatManager__ReviveAll(System_String_array *args,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  bool bVar1;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_184344df8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"All players have been revived by master client.");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerRPC");
    Il2CppMethodInitialized_184344df8 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar1 = GameManagers_ChatManager__CheckMC((MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  local_res18[0] = 0;
  pIVar2 = il2cpp_value_box(g_data_184354de8,local_res18);
  if (parameters != (System_Object_array *)0x0) {
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = pIVar2;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar2);
    if (__this != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this,"SpawnPlayerRPC",0,parameters,(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__SendChatAll("All players have been revived by master client.",3,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$Revive
// il2cpp: void GameManagers_ChatManager__Revive (System_String_array* args, const MethodInfo* method);
// 0x181e50130

void GameManagers_ChatManager__Revive(System_String_array *args,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  bool bVar1;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  undefined1 local_res18 [8];
  System_Nullable_DateTime__Fields local_18;
  
  if (Il2CppMethodInitialized_184344df9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&" has been revived.");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"You have been revived by master client.");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerRPC");
    Il2CppMethodInitialized_184344df9 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar1 = GameManagers_ChatManager__CheckMC((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    targetPlayer = GameManagers_ChatManager__GetPlayer_1e45c60(args,(MethodInfo *)0x0);
    if (targetPlayer != (Photon_Realtime_Player_o *)0x0) {
      __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_res18[0] = 0;
      pIVar2 = il2cpp_value_box(g_data_184354de8,local_res18);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = pIVar2;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar2);
        if (__this != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_1d4d8d0
                    (__this,"SpawnPlayerRPC",targetPlayer,parameters,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__SendChat("You have been revived by master client.",targetPlayer,3,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
          }
          pSVar4 = PhotonExtensions__GetStringProperty
                             (targetPlayer,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                              "",(MethodInfo *)0x0);
          local_18.hasValue = false;
          local_18._1_7_ = 0;
          local_18.value.fields._dateData = (System_DateTime_Fields)0;
          pSVar4 = System_String__Concat_1969e50(pSVar4," has been revived.",(MethodInfo *)0x0);
          GameManagers_ChatManager__AddLine
                    (pSVar4,3,false,(System_Nullable_DateTime__o *)&local_18,-1,false,false,-1,false,
                     (MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// GameManagers.ChatManager$$Mute
// il2cpp: void GameManagers_ChatManager__Mute (System_String_array* args, const MethodInfo* method);
// 0x181e4c3e0

void GameManagers_ChatManager__Mute(System_String_array *args,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  
  if (Il2CppMethodInitialized_184344dfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Emote");
    il2cpp_codegen_initialize_runtime_metadata(&"Voice");
    Il2CppMethodInitialized_184344dfa = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  player = GameManagers_ChatManager__GetPlayer_1e45c60(args,(MethodInfo *)0x0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__MutePlayer(player,"Emote",(MethodInfo *)0x0);
    GameManagers_ChatManager__MutePlayer(player,"Text",(MethodInfo *)0x0);
    GameManagers_ChatManager__MutePlayer(player,"Voice",(MethodInfo *)0x0);
    return;
  }
  return;
}


// GameManagers.ChatManager$$Unmute
// il2cpp: void GameManagers_ChatManager__Unmute (System_String_array* args, const MethodInfo* method);
// 0x181e524c0

void GameManagers_ChatManager__Unmute(System_String_array *args,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  
  if (Il2CppMethodInitialized_184344dfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Emote");
    il2cpp_codegen_initialize_runtime_metadata(&"Voice");
    Il2CppMethodInitialized_184344dfb = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  player = GameManagers_ChatManager__GetPlayer_1e45c60(args,(MethodInfo *)0x0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__UnmutePlayer(player,"Emote",(MethodInfo *)0x0);
    GameManagers_ChatManager__UnmutePlayer(player,"Text",(MethodInfo *)0x0);
    GameManagers_ChatManager__UnmutePlayer(player,"Voice",(MethodInfo *)0x0);
    return;
  }
  return;
}


// GameManagers.ChatManager$$NextSong
// il2cpp: void GameManagers_ChatManager__NextSong (System_String_array* args, const MethodInfo* method);
// 0x181e4c4b0

void GameManagers_ChatManager__NextSong(System_String_array *args,MethodInfo *method)

{
  ApplicationManagers_MusicManager__ChatNextSong((MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$Pause
// il2cpp: void GameManagers_ChatManager__Pause (System_String_array* args, const MethodInfo* method);
// 0x181e4d120
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4d27a: mov rbx, qword ptr [rsp + 0x30]

void GameManagers_ChatManager__Pause(System_String_array *args,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  Photon_Pun_PhotonView_o *__this;
  bool bVar3;
  System_Object_array *parameters;
  
  if (Il2CppMethodInitialized_184344dfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184344dfc = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar3 = GameManagers_ChatManager__CheckMC((MethodInfo *)0x0);
  if (bVar3) {
    pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar2 == (GameManagers_BaseGameManager_o *)0x0) {
label_181e4d284:
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar2);
    }
    if (Il2CppMethodInitialized_184344e80 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
      il2cpp_codegen_initialize_runtime_metadata(&"PauseGameRPC");
      Il2CppMethodInitialized_184344e80 = '\x01';
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((bVar3) && (*(char *)((longlong)&(*(uint64_t *)((char *)pGVar2 + 0x80)) + 2) == '\0')) {
      __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
      if (__this == (Photon_Pun_PhotonView_o *)0x0) goto label_181e4d284;
      Photon_Pun_PhotonView__RPC(__this,"PauseGameRPC",0,parameters,(MethodInfo *)0x0);
    }
  }
  return;
}


// GameManagers.ChatManager$$Unpause
// il2cpp: void GameManagers_ChatManager__Unpause (System_String_array* args, const MethodInfo* method);
// 0x181e52590
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e526ea: mov rbx, qword ptr [rsp + 0x30]

void GameManagers_ChatManager__Unpause(System_String_array *args,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  Photon_Pun_PhotonView_o *__this;
  bool bVar3;
  System_Object_array *parameters;
  
  if (Il2CppMethodInitialized_184344dfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184344dfd = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar3 = GameManagers_ChatManager__CheckMC((MethodInfo *)0x0);
  if (bVar3) {
    pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar2 == (GameManagers_BaseGameManager_o *)0x0) {
label_181e526f4:
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar2);
    }
    if (Il2CppMethodInitialized_184344e82 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
      il2cpp_codegen_initialize_runtime_metadata(&"StartUnpauseGameRPC");
      Il2CppMethodInitialized_184344e82 = '\x01';
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((bVar3) && (*(char *)((longlong)&(*(uint64_t *)((char *)pGVar2 + 0x80)) + 2) != '\0')) {
      __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
      if (__this == (Photon_Pun_PhotonView_o *)0x0) goto label_181e526f4;
      Photon_Pun_PhotonView__RPC(__this,"StartUnpauseGameRPC",0,parameters,(MethodInfo *)0x0);
    }
  }
  return;
}


// GameManagers.ChatManager$$Resetkd
// il2cpp: void GameManagers_ChatManager__Resetkd (System_String_array* args, const MethodInfo* method);
// 0x181e4fca0

void GameManagers_ChatManager__Resetkd(System_String_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  Photon_Realtime_Player_o *player;
  System_Collections_Generic_Dictionary_string__object__o *__this;
  Il2CppObject *pIVar2;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24 [3];
  
  if (Il2CppMethodInitialized_184344dfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344dfe = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  if (Il2CppMethodInitialized_184344eac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184344eac = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields->Kills;
  local_res18[0] = 0;
  pIVar2 = il2cpp_value_box(g_data_184354e08,local_res18);
  if (__this != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,(Il2CppObject *)pSVar1,pIVar2
               ,(MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    pSVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths;
    local_res20[0] = 0;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res20);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,(Il2CppObject *)pSVar1,pIVar2
               ,(MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    pSVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage;
    local_28 = 0;
    pIVar2 = il2cpp_value_box(g_data_184354e08,&local_28);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,(Il2CppObject *)pSVar1,pIVar2
               ,(MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    pSVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage;
    local_24[0] = 0;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_24);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,(Il2CppObject *)pSVar1,pIVar2
               ,(MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    PhotonExtensions__SetCustomProperties(player,__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$Resetkdall
// il2cpp: void GameManagers_ChatManager__Resetkdall (System_String_array* args, const MethodInfo* method);
// 0x181e4fea0

void GameManagers_ChatManager__Resetkdall(System_String_array *args,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_Object_array *parameters;
  
  if (Il2CppMethodInitialized_184344dff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ResetKDRPC");
    Il2CppMethodInitialized_184344dff = '\x01';
  }
  __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)
               System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                         ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_object);
  if (__this != (Photon_Pun_PhotonView_o *)0x0) {
    Photon_Pun_PhotonView__RPC(__this,"ResetKDRPC",0,parameters,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$Help
// il2cpp: void GameManagers_ChatManager__Help (System_String_array* args, const MethodInfo* method);
// 0x181e4a590
// eh: try 0x181e4aa60..0x181e4acd2 -> pad 0x18333cbc0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4aa5c: nop dword ptr [rax]
// asm:   0x181e4ab27: mov rdx, qword ptr [rip + 0x225637a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatManager_CommandAttribute_Dispose
// asm:   0x181e4ab2e: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x181e4ab33: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e4ab38: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x181e4ab3d: test rcx, rcx
// asm:   0x181e4ab40: jne 0x181e4acd2
// asm:   0x181e4ab46: mov rdi, qword ptr [rsp + 0xe0]
// asm:   0x181e4ab4e: movsd xmm6, qword ptr [rsp + 0xe8]
// asm:   0x181e4acd2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333cbc0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333cbc5: push rbp
// asm:   0x18333cbc6: sub rsp, 0x50
// asm:   0x18333cbca: mov rbp, rdx
// asm:   0x18333cbcd: mov rax, qword ptr [rbp + 0x50]
// asm:   0x18333cbd1: mov rcx, qword ptr [rax]
// asm:   0x18333cbd4: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333cbd8: movabs rax, 0
// asm:   0x18333cbe2: add rsp, 0x50
// asm:   0x18333cbe6: pop rbp
// asm:   0x18333cbe7: ret 

void GameManagers_ChatManager__Help(System_String_array *args,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__ChatManager_CommandAttribute__o *source;
  bool bVar2;
  int32_t iVar3;
  System_Predicate_T__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Func_KeyValuePair_string__ChatManager_CommandAttribute___string__o *__this_00;
  System_Func_KeyValuePair_string__ChatManager_CommandAttribute___ChatManager_CommandAttribute__o *__this_01;
  System_Collections_Generic_Dictionary_TKey__TElement__o *__this_02;
  System_Collections_Generic_List_TValue__o *__this_03;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *arg1;
  MethodInfo *method_00;
  double dVar7;
  int32_t local_res8 [2];
  System_String_o *local_res18;
  double local_res20;
  undefined1 local_68 [8];
  System_DateTime_o SStack_60;
  Il2CppObject *local_58;
  System_Collections_Generic_List_Enumerator_object__o local_48 [2];
  
  if (Il2CppMethodInitialized_184344e00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_CLCommandAttribute);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_get_Count
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Linq_Enumerable_ToDictionary_KeyValuePair_string_ChatManager_CommandAttribute_string_Chat
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Where_KeyValuePair_string_ChatManager_CommandAttribute);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatManager_CommandAttribute_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatManager_CommandAttribute_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatManager_CommandAttribute_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_KeyValuePair_string_ChatManager_CommandAttribute_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_KeyValuePair_string_ChatManager_CommandAttribute_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_System_Func_KeyValuePair_string_ChatManager_CommandAttribute_ChatManager_CommandAttribute
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_CommandAttribute_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_c_Help_b__12_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_c_Help_b__12_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_c_Help_b__12_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_c);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_Util_PaginateDictionary_string_ChatManager_CommandAttribute);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"----Command list----\n");
    il2cpp_codegen_initialize_runtime_metadata(&"Page {0} / {1}");
    il2cpp_codegen_initialize_runtime_metadata(&"Page {0} does not exist.");
    Il2CppMethodInitialized_184344e00 = '\x01';
  }
  local_48[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48[0].fields._index = 0;
  local_48[0].fields._version = 0;
  local_48[0].fields._current = (Il2CppObject *)0x0;
  local_res8[0] = 1;
  if (args != (System_String_array *)0x0) {
    if (1 < (int)args->max_length) {
      if ((uint)args->max_length < 2) {
        ThrowIndexOutOfRangeException();
      }
      System_Int32__TryParse(args->m_Items[1],local_res8,(MethodInfo *)0x0);
      if (local_res8[0] == 0) {
        local_res8[0] = 1;
      }
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    source = TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
    if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
    }
    __this = (System_Predicate_T__o *)TypeInfo_GameManagers_ChatManager_c->static_fields->__9__12_0;
    if (__this == (System_Predicate_T__o *)0x0) {
      if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
      }
      pIVar6 = (Il2CppObject *)TypeInfo_GameManagers_ChatManager_c->static_fields->__9;
      __this = (System_Predicate_T__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_System_Func_KeyValuePair_string_ChatManager_CommandAttribute_bool);
      System_Func_KeyValuePair_object__object___bool____ctor
                (__this,pIVar6,(intptr_t)MethodInfo_GameManagers_ChatManager_c_Help_b__12_0,
                 (MethodInfo_B61280 *)0x0);
      TypeInfo_GameManagers_ChatManager_c->static_fields->__9__12_0 =
           (System_Func_KeyValuePair_string__ChatManager_CommandAttribute___bool__o *)__this;
      Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager_c->static_fields->__9__12_0,__this);
    }
    source_00 = System_Linq_Enumerable__Where_RoleSpriteDefinition_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)__this,
                           (MethodInfo_6CA8B0 *)
                           MethodInfo_System_Linq_Enumerable_Where_KeyValuePair_string_ChatManager_CommandAttribute
                          );
    if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
    }
    __this_00 = TypeInfo_GameManagers_ChatManager_c->static_fields->__9__12_1;
    if (__this_00 == (System_Func_KeyValuePair_string__ChatManager_CommandAttribute___string__o *)0x0) {
      if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
      }
      pIVar6 = (Il2CppObject *)TypeInfo_GameManagers_ChatManager_c->static_fields->__9;
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_KeyValuePair_string_ChatManager_CommandAttribute_string);
      System_Func_KeyValuePair_object__object___object____ctor
                ((System_Converter_AccelStructAdapter_InstanceIDs__int__o *)__this_00,pIVar6,
                 (intptr_t)MethodInfo_GameManagers_ChatManager_c_Help_b__12_1,(MethodInfo_13859D0 *)0x0);
      TypeInfo_GameManagers_ChatManager_c->static_fields->__9__12_1 = __this_00;
      Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager_c->static_fields->__9__12_1,__this_00);
    }
    if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
    }
    __this_01 = TypeInfo_GameManagers_ChatManager_c->static_fields->__9__12_2;
    if (__this_01 ==
        (System_Func_KeyValuePair_string__ChatManager_CommandAttribute___ChatManager_CommandAttribute__o *)0x0
       ) {
      if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
      }
      pIVar6 = (Il2CppObject *)TypeInfo_GameManagers_ChatManager_c->static_fields->__9;
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_KeyValuePair_string_ChatManager_CommandAttribute_ChatManager_CommandAttribute
                            );
      System_Func_KeyValuePair_object__object___object____ctor
                ((System_Converter_AccelStructAdapter_InstanceIDs__int__o *)__this_01,pIVar6,
                 (intptr_t)MethodInfo_GameManagers_ChatManager_c_Help_b__12_2,(MethodInfo_13859D0 *)0x0);
      TypeInfo_GameManagers_ChatManager_c->static_fields->__9__12_2 = __this_01;
      Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager_c->static_fields->__9__12_2,__this_01);
    }
    __this_02 = System_Linq_Enumerable__ToDictionary_ValueTuple_object__object___object__object_
                          (source_00,(System_Func_TSource__TKey__o *)__this_00,
                           (System_Func_TSource__TElement__o *)__this_01,
                           (MethodInfo_6C8670 *)
                           MethodInfo_System_Linq_Enumerable_ToDictionary_KeyValuePair_string_ChatManager_CommandAttribute_string_Chat
                          );
    if (__this_02 != (System_Collections_Generic_Dictionary_TKey__TElement__o *)0x0) {
      method_00 = 
      MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_get_Count;
      iVar3 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                         (MethodInfo_13CDEB0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_get_Count
                        );
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar7 = il2cpp_runtime_helper_1804f45c0((double)iVar3 / 7.0,method_00);
      iVar3 = local_res8[0];
      local_res20 = dVar7;
      if ((local_res8[0] < 1) || ((int)dVar7 < local_res8[0])) {
        local_res18 = (System_String_o *)CONCAT44(local_res18._4_4_,local_res8[0]);
        pIVar6 = il2cpp_value_box(g_data_184354e08,&local_res18);
        pSVar5 = System_String__Format("Page {0} does not exist.",pIVar6,(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        iVar3 = 4;
      }
      else {
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        __this_03 = Utility_Util__PaginateDictionary_object__object_
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,iVar3,7,
                               (MethodInfo_86B260 *)
                               MethodInfo_Utility_Util_PaginateDictionary_string_ChatManager_CommandAttribute)
        ;
        pSVar5 = "----Command list----\n";
        if (__this_03 == (System_Collections_Generic_List_TValue__o *)0x0) goto label_181e4acc0;
        local_res18 = "----Command list----\n";
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_68,
                   (System_Collections_Generic_List_T__o *)__this_03,
                   (MethodInfo_91F180 *)
                   MethodInfo_System_Collections_Generic_List_ChatManager_CommandAttribute_GetEnumerator);
        local_48[0].fields._list = (System_Collections_Generic_List_T__o *)local_68;
        local_48[0].fields._8_8_ = SStack_60.fields._dateData;
        local_48[0].fields._current = local_58;
        local_68 = (undefined1  [8])0x0;
        SStack_60.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)local_48;
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (local_48,(MethodInfo_153A2A0 *)
                                      MethodInfo_System_Collections_Generic_List_Enumerator_ChatManager_CommandAttribute_MoveNext
                            );
          if (!bVar2) break;
          if (local_48[0].fields._current == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (*(char *)&local_48[0].fields._current[3].klass == '\0') {
            bVar1 = (TypeInfo_GameManagers_ChatManager_CLCommandAttribute->_2).typeHierarchyDepth;
            if ((((local_48[0].fields._current)->klass->_2).typeHierarchyDepth < bVar1) ||
               (((local_48[0].fields._current)->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_GameManagers_ChatManager_CLCommandAttribute)) {
              pSVar4 = local_48[0].fields._current[1].monitor;
            }
            else {
              pSVar4 = local_48[0].fields._current[1].monitor;
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,8,false,(MethodInfo *)0x0);
            }
            pSVar5 = System_String__Concat_1969b70(pSVar5,pSVar4,"\n",(MethodInfo *)0x0);
            local_res18 = pSVar5;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                   MethodInfo_System_Collections_Generic_List_Enumerator_ChatManager_CommandAttribute_Dispose)
        ;
        local_res18 = (System_String_o *)CONCAT44(local_res18._4_4_,local_res8[0]);
        pIVar6 = il2cpp_value_box(g_data_184354e08,&local_res18);
        local_res20 = (double)CONCAT44(local_res20._4_4_,(int)dVar7);
        arg1 = il2cpp_value_box(g_data_184354e08,&local_res20);
        pSVar4 = System_String__Format_196d440("Page {0} / {1}",pIVar6,arg1,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat_1969e50(pSVar5,pSVar4,(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        iVar3 = 3;
      }
      SStack_60.fields._dateData = (System_DateTime_Fields)0;
      local_68 = (undefined1  [8])0x0;
      GameManagers_ChatManager__AddLine
                (pSVar5,iVar3,false,(System_Nullable_DateTime__o *)local_68,-1,false,false,-1,false,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_181e4acc0:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$SaveChatHistory
// il2cpp: void GameManagers_ChatManager__SaveChatHistory (System_String_array* args, const MethodInfo* method);
// 0x181e503b0
// eh: try 0x181e5049a..0x181e507b7 -> pad 0x18333cca0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 63 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e507bc: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x181e507c1: test rcx, rcx
// asm:   0x181e507c4: je 0x181e50873
// asm:   0x181e507ca: mov rax, qword ptr [rcx]
// asm:   0x181e507cd: mov rdx, qword ptr [rax + 0x190]
// asm:   0x181e507d4: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x181e507da: mov rbx, rax
// asm:   0x181e507dd: lea rcx, [rip + 0x22958b4]  ; "Failed to save chat history: "
// asm:   0x181e507e4: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181e507e9: mov rcx, rax
// asm:   0x181e507ec: xor r8d, r8d
// asm:   0x181e507ef: mov rdx, rbx
// asm:   0x181e507f2: call 0x181969e50  ; System_String__Concat()
// asm:   0x181e507f7: mov rbx, rax
// asm:   0x181e507fa: xorps xmm6, xmm6
// asm:   0x181e507fd: lea rcx, [rip + 0x228dfcc]  ; TypeInfo_GameManagers_ChatManager
// asm:   0x181e50804: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181e50809: cmp dword ptr [rax + 0xe4], 0
// asm:   0x181e50810: jne 0x181e5081a
// asm:   0x181e50812: mov rcx, rax
// asm:   0x181e50815: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181e5081a: movdqa xmmword ptr [rsp + 0x60], xmm6
// asm:   0x181e50820: mov qword ptr [rsp + 0x48], 0
// asm:   0x181e50829: mov byte ptr [rsp + 0x40], 0
// asm:   0x181e5082e: mov dword ptr [rsp + 0x38], 0xffffffff
// asm:   0x181e50836: mov byte ptr [rsp + 0x30], 0
// asm:   0x181e5083b: mov byte ptr [rsp + 0x28], 0
// asm:   0x181e50840: mov dword ptr [rsp + 0x20], 0xffffffff
// asm:   0x181e50848: lea r9, [rsp + 0x60]
// asm:   0x181e5084d: xor r8d, r8d
// asm:   0x181e50850: mov edx, 4
// asm:   0x181e50855: mov rcx, rbx
// asm:   0x181e50858: call 0x181e42df0  ; GameManagers_ChatManager__AddLine()
// asm:   0x181e50873: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x18333cca0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333cca5: push rbx
// asm:   0x18333cca6: push rbp
// asm:   0x18333cca7: push rdi
// asm:   0x18333cca8: sub rsp, 0x50
// asm:   0x18333ccac: mov rbp, rdx
// asm:   0x18333ccaf: mov rdi, qword ptr [rbp + 0x58]
// asm:   0x18333ccb3: mov rax, qword ptr [rdi]
// asm:   0x18333ccb6: mov rbx, qword ptr [rax]
// asm:   0x18333ccb9: lea rcx, [rip + 0xd3c298]  ; TypeInfo_System_Exception
// asm:   0x18333ccc0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333ccc5: mov rcx, rax
// asm:   0x18333ccc8: mov rdx, rbx
// asm:   0x18333cccb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333ccd0: test al, al
// asm:   0x18333ccd2: mov rax, qword ptr [rdi]
// asm:   0x18333ccd5: je 0x18333cce7
// asm:   0x18333ccd7: mov qword ptr [rbp + 0x60], rax
// asm:   0x18333ccdb: movabs rax, 0
// asm:   0x18333cce5: jmp 0x18333ccfc
// asm:   0x18333cce7: mov qword ptr [rbp + 0x50], rax
// asm:   0x18333cceb: lea rdx, [rip + 0xc9f296]
// asm:   0x18333ccf2: lea rcx, [rbp + 0x50]
// asm:   0x18333ccf6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333ccfc: add rsp, 0x50
// asm:   0x18333cd00: pop rdi
// asm:   0x18333cd01: pop rbp
// asm:   0x18333cd02: pop rbx
// asm:   0x18333cd03: ret 

void GameManagers_ChatManager__SaveChatHistory(System_String_array *args,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *source;
  bool bVar1;
  System_String_o *pSVar2;
  System_DateTime_o SVar3;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  System_Func_T1__T2__TResult__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *values;
  System_String_o *pSVar6;
  System_DateTime_Fields local_res18 [2];
  System_Nullable_DateTime__Fields local_58 [2];
  
  if (Il2CppMethodInitialized_184344e01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_string_string_407ab70);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_int_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_c_SaveChatHistory_b__13_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat history saved to Aottg2/Chat/");
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat");
    il2cpp_codegen_initialize_runtime_metadata(&"[TIME:{0:yyyy-MM-dd HH:mm:ss UTC}]\n\n{1}");
    il2cpp_codegen_initialize_runtime_metadata(&"chat_history_{0:yyyy-MM-dd_HH-mm-ss}");
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid filename error.");
    Il2CppMethodInitialized_184344e01 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar2 = TypeInfo_Utility_FolderPaths->static_fields->Documents;
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  pSVar2 = System_IO_Path__Combine(pSVar2,"Chat",(MethodInfo *)0x0);
  bVar1 = System_IO_Directory__Exists(pSVar2,(MethodInfo *)0x0);
  if (!bVar1) {
    System_IO_Directory__CreateDirectory(pSVar2,(MethodInfo *)0x0);
  }
  if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
  }
  SVar3 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  local_res18[0] = SVar3.fields._dateData;
  pIVar4 = il2cpp_value_box((Il2CppClass *)TypeInfo_System_DateTime,local_res18);
  pSVar5 = System_String__Format("chat_history_{0:yyyy-MM-dd_HH-mm-ss}",pIVar4,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  bVar1 = Utility_Util__IsValidFileName(pSVar5,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar5 = System_String__Concat_1969e50(pSVar5,".txt",(MethodInfo *)0x0);
    if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
    }
    pSVar2 = System_IO_Path__Combine(pSVar2,pSVar5,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    source = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
    if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
    }
    __this = (System_Func_T1__T2__TResult__o *)TypeInfo_GameManagers_ChatManager_c->static_fields->__9__13_0;
    if (__this == (System_Func_T1__T2__TResult__o *)0x0) {
      if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
      }
      pIVar4 = (Il2CppObject *)TypeInfo_GameManagers_ChatManager_c->static_fields->__9;
      __this = (System_Func_T1__T2__TResult__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_int_string);
      System_Func_object__int__object____ctor
                (__this,pIVar4,(intptr_t)MethodInfo_GameManagers_ChatManager_c_SaveChatHistory_b__13_0,
                 (MethodInfo_172BE70 *)0x0);
      TypeInfo_GameManagers_ChatManager_c->static_fields->__9__13_0 =
           (System_Func_string__int__string__o *)__this;
      Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager_c->static_fields->__9__13_0,__this);
    }
    values = System_Linq_Enumerable__SelectMany_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__IEnumerable_TResult___o *)__this,
                        (MethodInfo_6C1BA0 *)MethodInfo_System_Linq_Enumerable_Select_string_string_407ab70);
    pSVar6 = System_String__Join_196ecd0
                       ("\n",(System_Collections_Generic_IEnumerable_string__o *)values,
                        (MethodInfo *)0x0);
    local_res18[0] = SVar3.fields._dateData;
    pIVar4 = il2cpp_value_box((Il2CppClass *)TypeInfo_System_DateTime,local_res18);
    pSVar6 = System_String__Format_196d440
                       ("[TIME:{0:yyyy-MM-dd HH:mm:ss UTC}]\n\n{1}",pIVar4,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
    System_IO_File__WriteAllText(pSVar2,pSVar6,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969e50("Chat history saved to Aottg2/Chat/",pSVar5,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    local_58[0].hasValue = false;
    local_58[0]._1_7_ = 0;
    local_58[0].value.fields._dateData = (System_DateTime_Fields)0;
    GameManagers_ChatManager__AddLine
              (pSVar2,3,false,(System_Nullable_DateTime__o *)local_58,-1,false,false,-1,false,
               (MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    local_58[0].hasValue = false;
    local_58[0]._1_7_ = 0;
    local_58[0].value.fields._dateData = (System_DateTime_Fields)0;
    GameManagers_ChatManager__AddLine
              ("Invalid filename error.",4,false,(System_Nullable_DateTime__o *)local_58,-1,false,false,-1,false,
               (MethodInfo *)0x0);
  }
  return;
}


// GameManagers.ChatManager$$PM
// il2cpp: void GameManagers_ChatManager__PM (System_String_array* args, const MethodInfo* method);
// 0x181e4cbc0
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4cd6e: mov rcx, qword ptr [rip + 0x22a4edb]  ; "Cannot send private messages to yourself."
// asm:   0x181e4cd75: lea r9, [rsp + 0x50]
// asm:   0x181e4cd7a: mov qword ptr [rsp + 0x48], 0
// asm:   0x181e4cd83: xor r8d, r8d
// asm:   0x181e4cd86: mov byte ptr [rsp + 0x40], 0
// asm:   0x181e4cd8b: mov edx, 4
// asm:   0x181e4cd90: mov dword ptr [rsp + 0x38], 0xffffffff
// asm:   0x181e4cd98: mov byte ptr [rsp + 0x30], 0
// asm:   0x181e4cd9d: mov byte ptr [rsp + 0x28], 0
// asm:   0x181e4cda2: mov dword ptr [rsp + 0x20], 0xffffffff
// asm:   0x181e4cdaa: movdqa xmmword ptr [rsp + 0x50], xmm6
// asm:   0x181e4cde1: mov rcx, qword ptr [rip + 0x225bed8]  ; "Usage: /pm [ID] [message]"
// asm:   0x181e4cde8: lea r9, [rsp + 0x50]
// asm:   0x181e4cded: mov qword ptr [rsp + 0x48], 0
// asm:   0x181e4cdf6: xor r8d, r8d
// asm:   0x181e4cdf9: mov byte ptr [rsp + 0x40], 0
// asm:   0x181e4cdfe: mov edx, 4
// asm:   0x181e4ce03: mov dword ptr [rsp + 0x38], 0xffffffff
// asm:   0x181e4ce0b: mov byte ptr [rsp + 0x30], 0
// asm:   0x181e4ce10: mov byte ptr [rsp + 0x28], 0
// asm:   0x181e4ce15: mov dword ptr [rsp + 0x20], 0xffffffff
// asm:   0x181e4ce1d: movdqa xmmword ptr [rsp + 0x50], xmm6
// asm:   0x181e4ce23: jmp 0x181e4cdb0

void GameManagers_ChatManager__PM(System_String_array *args,MethodInfo *method)

{
  bool bVar1;
  Photon_Realtime_Player_o *target;
  Photon_Realtime_Player_o *pPVar2;
  UI_ChatPanel_o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *values;
  System_String_o *pSVar3;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Skip_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Usage: /pm [ID] [message]");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"Cannot send private messages to yourself.");
    Il2CppMethodInitialized_184344e02 = '\x01';
  }
  if (args == (System_String_array *)0x0) {
label_181e4ce25:
    ThrowNullReferenceException();
  }
  if ((int)args->max_length < 2) {
    pSVar3 = "Usage: /pm [ID] [message]";
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      pSVar3 = "Usage: /pm [ID] [message]";
    }
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    target = GameManagers_ChatManager__GetPlayer_1e45c60(args,(MethodInfo *)0x0);
    if (target == (Photon_Realtime_Player_o *)0x0) {
      return;
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (target != pPVar2) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      __this = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      if (__this != (UI_ChatPanel_o *)0x0) {
        UI_ChatPanel__EnterPMMode(__this,target,(MethodInfo *)0x0);
        if ((int)args->max_length < 3) {
          return;
        }
        values = System_Linq_Enumerable__Skip_object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)args,2,
                            (MethodInfo_6C73A0 *)MethodInfo_System_Linq_Enumerable_Skip_string);
        pSVar3 = System_String__Join_196ecd0
                           (" ",(System_Collections_Generic_IEnumerable_string__o *)values,
                            (MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__SendPrivateMessage(target,pSVar3,(MethodInfo *)0x0);
        return;
      }
      goto label_181e4ce25;
    }
    pSVar3 = "Cannot send private messages to yourself.";
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      pSVar3 = "Cannot send private messages to yourself.";
    }
  }
  local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
  local_28[0].hasValue = false;
  local_28[0]._1_7_ = 0;
  GameManagers_ChatManager__AddLine
            (pSVar3,4,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false,(MethodInfo *)0x0)
  ;
  return;
}


// GameManagers.ChatManager$$Restart
// il2cpp: void GameManagers_ChatManager__Restart (System_String_array* args, const MethodInfo* method);
// 0x181e4ff30

void GameManagers_ChatManager__Restart(System_String_array *args,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344e03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184344e03 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar1 = GameManagers_ChatManager__CheckMC((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    GameManagers_InGameManager__RestartGame((MethodInfo *)0x0);
    return;
  }
  return;
}


// GameManagers.ChatManager$$CloseLobby
// il2cpp: void GameManagers_ChatManager__CloseLobby (System_String_array* args, const MethodInfo* method);
// 0x181e448c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4495e: nop 

void GameManagers_ChatManager__CloseLobby(System_String_array *args,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  GameManagers_ChatManager_o *__this;
  bool bVar1;
  Photon_Realtime_Player_array *pPVar2;
  GameManagers_ChatManager__WaitAndLeave_d__0_o *routine;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184344e04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184344e04 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar1 = GameManagers_ChatManager__CheckMC((MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (pPVar2 != (Photon_Realtime_Player_array *)0x0) {
    for (uVar3 = 0; (int)uVar3 < (int)pPVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pPVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      player = pPVar2->m_Items[(int)uVar3];
      if (player == (Photon_Realtime_Player_o *)0x0) goto label_181e44a43;
      if ((player->fields).IsLocal == false) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__KickPlayer(player,false,false,".",(MethodInfo *)0x0);
      }
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    if (TypeInfo_GameManagers_ChatManager->static_fields->_instance != (GameManagers_ChatManager_o *)0x0) {
      __this = TypeInfo_GameManagers_ChatManager->static_fields->_instance;
      if (Il2CppMethodInitialized_184344df5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_WaitAndLeave_d__0);
        Il2CppMethodInitialized_184344df5 = '\x01';
      }
      routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_ChatManager_WaitAndLeave_d__0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_181e44a43:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$Kick
// il2cpp: void GameManagers_ChatManager__Kick (System_String_array* args, const MethodInfo* method);
// 0x181e4b9a0

void GameManagers_ChatManager__Kick(System_String_array *args,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  bool bVar1;
  Photon_Realtime_Player_o *player;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184344e05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"VoteKickRPC");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184344e05 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  player = GameManagers_ChatManager__GetPlayer_1e45c60(args,(MethodInfo *)0x0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__KickPlayer(player,true,false,".",(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar1 = GameManagers_ChatManager__CanVoteKick(player,(MethodInfo *)0x0);
    if (bVar1) {
      __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_res8[0] = (player->fields).actorNumber;
      pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = pIVar2;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar2);
        if (__this != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this,"VoteKickRPC",2,parameters,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// GameManagers.ChatManager$$Ban
// il2cpp: void GameManagers_ChatManager__Ban (System_String_array* args, const MethodInfo* method);
// 0x181e43380
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e434a2: mov rbx, qword ptr [rsp + 0x40]

void GameManagers_ChatManager__Ban(System_String_array *args,MethodInfo *method)

{
  int32_t actorNumber;
  bool bVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *reason;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  
  if (Il2CppMethodInitialized_184344e06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184344e06 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar1 = GameManagers_ChatManager__CanUseRoomModerationCommand((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pPVar2 = GameManagers_ChatManager__GetPlayer_1e45c60(args,(MethodInfo *)0x0);
    if (pPVar2 != (Photon_Realtime_Player_o *)0x0) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,2,(MethodInfo *)0x0);
      actorNumber = (pPVar2->fields).actorNumber;
      __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus,(MethodInfo *)0x0);
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__RoomBan
                (actorNumber,false,(System_Action_string__o *)__this,reason,(MethodInfo *)0x0);
    }
  }
  return;
}


// GameManagers.ChatManager$$InfoBan
// il2cpp: void GameManagers_ChatManager__InfoBan (System_String_array* args, const MethodInfo* method);
// 0x181e4ae10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4b017: mov rsi, qword ptr [rsp + 0x88]
// asm:   0x181e4b01f: mov rdi, qword ptr [rsp + 0x90]

void GameManagers_ChatManager__InfoBan(System_String_array *args,MethodInfo *method)

{
  int32_t actorNumber;
  bool bVar1;
  Photon_Realtime_Player_o *player;
  System_String_o *reason;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Legacy infoban requires Master Client; using room session ban instead.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184344e07 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar1 = GameManagers_ChatManager__CanUseRoomModerationCommand((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    player = GameManagers_ChatManager__GetPlayer_1e45c60(args,(MethodInfo *)0x0);
    if (player != (Photon_Realtime_Player_o *)0x0) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,2,(MethodInfo *)0x0);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__KickPlayer(player,true,true,".",(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        local_28[0].hasValue = false;
        local_28[0]._1_7_ = 0;
        local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
        GameManagers_ChatManager__AddLine
                  ("Legacy infoban requires Master Client; using room session ban instead.",3,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,
                   false,(MethodInfo *)0x0);
        actorNumber = (player->fields).actorNumber;
        __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
        System_Action_object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus,(MethodInfo *)0x0);
        if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        }
        Anticheat_ModeratorManager__RoomBan
                  (actorNumber,false,(System_Action_string__o *)__this,reason,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// GameManagers.ChatManager$$IPBan
// il2cpp: void GameManagers_ChatManager__IPBan (System_String_array* args, const MethodInfo* method);
// 0x181e4ace0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4ae02: mov rbx, qword ptr [rsp + 0x40]

void GameManagers_ChatManager__IPBan(System_String_array *args,MethodInfo *method)

{
  int32_t actorNumber;
  bool bVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *reason;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  
  if (Il2CppMethodInitialized_184344e08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184344e08 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar1 = GameManagers_ChatManager__CanUseRoomModerationCommand((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pPVar2 = GameManagers_ChatManager__GetPlayer_1e45c60(args,(MethodInfo *)0x0);
    if (pPVar2 != (Photon_Realtime_Player_o *)0x0) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,2,(MethodInfo *)0x0);
      actorNumber = (pPVar2->fields).actorNumber;
      __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus,(MethodInfo *)0x0);
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__RoomBan
                (actorNumber,true,(System_Action_string__o *)__this,reason,(MethodInfo *)0x0);
    }
  }
  return;
}


// GameManagers.ChatManager$$RegionBan
// il2cpp: void GameManagers_ChatManager__RegionBan (System_String_array* args, const MethodInfo* method);
// 0x181e4e7e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4e902: mov rbx, qword ptr [rsp + 0x40]

void GameManagers_ChatManager__RegionBan(System_String_array *args,MethodInfo *method)

{
  int32_t actorNumber;
  bool bVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *reason;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  
  if (Il2CppMethodInitialized_184344e09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184344e09 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar1 = GameManagers_ChatManager__CanUseRegionModerationCommand((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pPVar2 = GameManagers_ChatManager__GetPlayer_1e45c60(args,(MethodInfo *)0x0);
    if (pPVar2 != (Photon_Realtime_Player_o *)0x0) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,2,(MethodInfo *)0x0);
      actorNumber = (pPVar2->fields).actorNumber;
      __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus,(MethodInfo *)0x0);
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__RegionBan
                (actorNumber,false,(System_Action_string__o *)__this,reason,(MethodInfo *)0x0);
    }
  }
  return;
}


// GameManagers.ChatManager$$RegionIPBan
// il2cpp: void GameManagers_ChatManager__RegionIPBan (System_String_array* args, const MethodInfo* method);
// 0x181e4e910
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4ea32: mov rbx, qword ptr [rsp + 0x40]

void GameManagers_ChatManager__RegionIPBan(System_String_array *args,MethodInfo *method)

{
  int32_t actorNumber;
  bool bVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *reason;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  
  if (Il2CppMethodInitialized_184344e0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184344e0a = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar1 = GameManagers_ChatManager__CanUseRegionModerationCommand((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pPVar2 = GameManagers_ChatManager__GetPlayer_1e45c60(args,(MethodInfo *)0x0);
    if (pPVar2 != (Photon_Realtime_Player_o *)0x0) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,2,(MethodInfo *)0x0);
      actorNumber = (pPVar2->fields).actorNumber;
      __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus,(MethodInfo *)0x0);
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__RegionBan
                (actorNumber,true,(System_Action_string__o *)__this,reason,(MethodInfo *)0x0);
    }
  }
  return;
}


// GameManagers.ChatManager$$Unban
// il2cpp: void GameManagers_ChatManager__Unban (System_String_array* args, const MethodInfo* method);
// 0x181e51e90
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e5209c: mov rdi, qword ptr [rsp + 0x90]
// asm:   0x181e520a4: mov rsi, qword ptr [rsp + 0x88]
// asm:   0x181e520ac: mov rbp, qword ptr [rsp + 0x80]
// asm:   0x181e520b4: movaps xmm6, xmmword ptr [rsp + 0x60]

void GameManagers_ChatManager__Unban(System_String_array *args,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  System_String_o *a;
  System_String_o *reason;
  Anticheat_RoomBanEntry_o *banEntry;
  longlong lVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_RoomBanEntry);
    il2cpp_codegen_initialize_runtime_metadata(&"Usage: /unban [session|ip] [target] [optional reason]");
    il2cpp_codegen_initialize_runtime_metadata(&"sid");
    il2cpp_codegen_initialize_runtime_metadata(&"session");
    il2cpp_codegen_initialize_runtime_metadata(&"ip");
    Il2CppMethodInitialized_184344e0b = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar1 = GameManagers_ChatManager__CanUseRoomModerationCommand((MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (args == (System_String_array *)0x0) goto label_181e52123;
  if ((int)args->max_length < 3) {
label_181e520bf:
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    local_28[0].hasValue = false;
    local_28[0]._1_7_ = 0;
    local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
    GameManagers_ChatManager__AddLine
              ("Usage: /unban [session|ip] [target] [optional reason]",4,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false,
               (MethodInfo *)0x0);
  }
  else {
    if ((uint)args->max_length < 2) {
label_181e52129:
      ThrowIndexOutOfRangeException();
    }
    if (args->m_Items[1] == (System_String_o *)0x0) {
label_181e52123:
      ThrowNullReferenceException();
    }
    a = System_String__ToLower(args->m_Items[1],(MethodInfo *)0x0);
    if ((uint)args->max_length < 3) goto label_181e52129;
    value = args->m_Items[2];
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    reason = GameManagers_ChatManager__GetOptionalReason(args,3,(MethodInfo *)0x0);
    banEntry = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_RoomBanEntry);
    Anticheat_RoomBanEntry___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)banEntry,(MethodInfo *)0x0);
    if (banEntry == (Anticheat_RoomBanEntry_o *)0x0) goto label_181e52123;
    (banEntry->fields).CanUnban = true;
    bVar1 = System_String__op_Equality(a,"session",(MethodInfo *)0x0);
    if ((bVar1) || (bVar1 = System_String__op_Equality(a,"sid",(MethodInfo *)0x0), bVar1)) {
      (banEntry->fields).SessionId = value;
      lVar2 = 0x10;
      bVar1 = false;
    }
    else {
      bVar1 = System_String__op_Equality(a,"ip",(MethodInfo *)0x0);
      if (!bVar1) goto label_181e520bf;
      (banEntry->fields).IPAddress = value;
      lVar2 = 0x18;
      bVar1 = true;
    }
    (banEntry->fields).IsIPBan = bVar1;
    Il2CppCodeGenWriteBarrier((void **)((longlong)&banEntry->klass + lVar2),value);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              (__this,(Il2CppObject *)0x0,(intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus,
               (MethodInfo *)0x0);
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    Anticheat_ModeratorManager__RoomUnban(banEntry,(System_Action_string__o *)__this,reason,(MethodInfo *)0x0)
    ;
  }
  return;
}


// GameManagers.ChatManager$$RegionUnban
// il2cpp: void GameManagers_ChatManager__RegionUnban (System_String_array* args, const MethodInfo* method);
// 0x181e4ea40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4eb99: mov rsi, qword ptr [rsp + 0x80]
// asm:   0x181e4eba1: mov rdi, qword ptr [rsp + 0x88]

void GameManagers_ChatManager__RegionUnban(System_String_array *args,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  System_String_o *reason;
  Anticheat_RegionBanEntry_o *banEntry;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_RegionBanEntry);
    il2cpp_codegen_initialize_runtime_metadata(&"Usage: /regionunban [targetId] [optional reason]");
    Il2CppMethodInitialized_184344e0c = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar1 = GameManagers_ChatManager__CanUseRegionModerationCommand((MethodInfo *)0x0);
  if (bVar1) {
    if (args == (System_String_array *)0x0) {
label_181e4ec1d:
      ThrowNullReferenceException();
    }
    if ((int)args->max_length < 2) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      local_28[0].hasValue = false;
      local_28[0]._1_7_ = 0;
      local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
      GameManagers_ChatManager__AddLine
                ("Usage: /regionunban [targetId] [optional reason]",4,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false
                 ,(MethodInfo *)0x0);
    }
    else {
      if ((uint)args->max_length < 2) {
        ThrowIndexOutOfRangeException();
      }
      value = args->m_Items[1];
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,2,(MethodInfo *)0x0);
      banEntry = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_RegionBanEntry);
      Anticheat_RegionBanEntry___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)banEntry,(MethodInfo *)0x0);
      if (banEntry == (Anticheat_RegionBanEntry_o *)0x0) goto label_181e4ec1d;
      (banEntry->fields).TargetId = value;
      Il2CppCodeGenWriteBarrier(&(banEntry->fields).TargetId,value);
      __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus,(MethodInfo *)0x0);
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__RegionUnban
                (banEntry,(System_Action_string__o *)__this,reason,(MethodInfo *)0x0);
    }
  }
  return;
}


// GameManagers.ChatManager$$PrintModerationStatus
// il2cpp: void GameManagers_ChatManager__PrintModerationStatus (System_String_o* text, const MethodInfo* method);
// 0x181e4d3b0

void GameManagers_ChatManager__PrintModerationStatus(System_String_o *text,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  uint uVar3;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"timed out");
    il2cpp_codegen_initialize_runtime_metadata(&"rate limited");
    il2cpp_codegen_initialize_runtime_metadata(&"error");
    Il2CppMethodInitialized_184344e0d = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (!bVar1) {
    if (text != (System_String_o *)0x0) {
      iVar2 = System_String__IndexOf_196de90(text,"timed out",5,(MethodInfo *)0x0);
      if ((iVar2 < 0) &&
         (iVar2 = System_String__IndexOf_196de90(text,"rate limited",5,(MethodInfo *)0x0), iVar2 < 0))
      {
        uVar3 = System_String__IndexOf_196de90(text,"error",5,(MethodInfo *)0x0);
        uVar3 = ~uVar3 >> 0x1f;
      }
      else {
        uVar3 = 1;
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      local_28[0].hasValue = false;
      local_28[0]._1_7_ = 0;
      local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
      GameManagers_ChatManager__AddLine
                (text,uVar3 + 3,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false,
                 (MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  return;
}


// GameManagers.ChatManager$$IsAdminOrModerator
// il2cpp: bool GameManagers_ChatManager__IsAdminOrModerator (const MethodInfo* method);
// 0x181e4b3c0

bool GameManagers_ChatManager__IsAdminOrModerator(MethodInfo *method)

{
  bool bVar1;
  System_String_array *source;
  
  if (Il2CppMethodInitialized_184344e0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_string);
    il2cpp_codegen_initialize_runtime_metadata(&"admin");
    il2cpp_codegen_initialize_runtime_metadata(&"moderator");
    Il2CppMethodInitialized_184344e0e = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  source = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
  if (source != (System_String_array *)0x0) {
    bVar1 = System_Linq_Enumerable__Contains_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                       (Il2CppObject *)"admin",
                       (MethodInfo_6BA240 *)MethodInfo_System_Linq_Enumerable_Contains_string);
    if (bVar1) {
      return true;
    }
    bVar1 = System_Linq_Enumerable__Contains_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                       (Il2CppObject *)"moderator",
                       (MethodInfo_6BA240 *)MethodInfo_System_Linq_Enumerable_Contains_string);
    return bVar1;
  }
  return false;
}


// GameManagers.ChatManager$$CanUseRoomModerationCommand
// il2cpp: bool GameManagers_ChatManager__CanUseRoomModerationCommand (const MethodInfo* method);
// 0x181e43820

bool GameManagers_ChatManager__CanUseRoomModerationCommand(MethodInfo *method)

{
  bool bVar1;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Must be Master Client, Admin, or Moderator to use that command.");
    Il2CppMethodInitialized_184344e0f = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar1 = GameManagers_ChatManager__IsAdminOrModerator((MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      local_28[0].hasValue = false;
      local_28[0]._1_7_ = 0;
      local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
      GameManagers_ChatManager__AddLine
                ("Must be Master Client, Admin, or Moderator to use that command.",4,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false
                 ,(MethodInfo *)0x0);
      return false;
    }
  }
  return true;
}


// GameManagers.ChatManager$$CanUseRegionModerationCommand
// il2cpp: bool GameManagers_ChatManager__CanUseRegionModerationCommand (const MethodInfo* method);
// 0x181e43750

bool GameManagers_ChatManager__CanUseRegionModerationCommand(MethodInfo *method)

{
  bool bVar1;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Must be Admin or Moderator to use that command.");
    Il2CppMethodInitialized_184344e10 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar1 = GameManagers_ChatManager__IsAdminOrModerator((MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    local_28[0].hasValue = false;
    local_28[0]._1_7_ = 0;
    local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
    GameManagers_ChatManager__AddLine
              ("Must be Admin or Moderator to use that command.",4,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false,
               (MethodInfo *)0x0);
    return false;
  }
  return true;
}


// GameManagers.ChatManager$$ShouldIncludeHiddenCommandInHelp
// il2cpp: bool GameManagers_ChatManager__ShouldIncludeHiddenCommandInHelp (GameManagers_ChatManager_CommandAttribute_o* command, const MethodInfo* method);
// 0x181e51530

bool GameManagers_ChatManager__ShouldIncludeHiddenCommandInHelp
               (GameManagers_ChatManager_CommandAttribute_o *command,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344e11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"regionban");
    il2cpp_codegen_initialize_runtime_metadata(&"regionunban");
    il2cpp_codegen_initialize_runtime_metadata(&"regionipban");
    Il2CppMethodInitialized_184344e11 = '\x01';
  }
  if (command != (GameManagers_ChatManager_CommandAttribute_o *)0x0) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar1 = GameManagers_ChatManager__IsAdminOrModerator((MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (command->fields)._Name_k__BackingField;
      if (pSVar2 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar2 = System_String__ToLower(pSVar2,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar2,"regionban",(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__op_Equality(pSVar2,"regionipban",(MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = System_String__op_Equality(pSVar2,"regionunban",(MethodInfo *)0x0);
          return bVar1;
        }
      }
      return true;
    }
  }
  return false;
}


// GameManagers.ChatManager$$GetOptionalReason
// il2cpp: System_String_o* GameManagers_ChatManager__GetOptionalReason (System_String_array* args, int32_t startIndex, const MethodInfo* method);
// 0x181e45a50

System_String_o *
GameManagers_ChatManager__GetOptionalReason(System_String_array *args,int32_t startIndex,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_TSource__o *values;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344e12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Skip_string);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    Il2CppMethodInitialized_184344e12 = '\x01';
  }
  if ((args != (System_String_array *)0x0) && (startIndex < (int)args->max_length)) {
    values = System_Linq_Enumerable__Skip_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)args,startIndex,
                        (MethodInfo_6C73A0 *)MethodInfo_System_Linq_Enumerable_Skip_string);
    pSVar1 = System_String__Join_196ecd0
                       (" ",(System_Collections_Generic_IEnumerable_string__o *)values,
                        (MethodInfo *)0x0);
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__Trim(pSVar1,(MethodInfo *)0x0);
      return pSVar1;
    }
    ThrowNullReferenceException();
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// GameManagers.ChatManager$$CanVoteKick
// il2cpp: bool GameManagers_ChatManager__CanVoteKick (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181e43920

bool GameManagers_ChatManager__CanVoteKick(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  bool bVar4;
  Photon_Realtime_Player_o *pPVar5;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Server does not allow vote kicking.");
    il2cpp_codegen_initialize_runtime_metadata(&"Cannot vote to kick yourself.");
    il2cpp_codegen_initialize_runtime_metadata(&"Cannot vote to kick the Master Client.");
    Il2CppMethodInitialized_184344e13 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).AllowVoteKicking, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar3->fields)._value == false) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      local_28[0].hasValue = false;
      local_28[0]._1_7_ = 0;
      local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
      GameManagers_ChatManager__AddLine
                ("Server does not allow vote kicking.",4,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false
                 ,(MethodInfo *)0x0);
      return false;
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (player == pPVar5) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      local_28[0].hasValue = false;
      local_28[0]._1_7_ = 0;
      local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
      GameManagers_ChatManager__AddLine
                ("Cannot vote to kick yourself.",4,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false
                 ,(MethodInfo *)0x0);
      return false;
    }
    if (player != (Photon_Realtime_Player_o *)0x0) {
      bVar4 = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
      if (!bVar4) {
        return true;
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      local_28[0].hasValue = false;
      local_28[0]._1_7_ = 0;
      local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
      GameManagers_ChatManager__AddLine
                ("Cannot vote to kick the Master Client.",4,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false
                 ,(MethodInfo *)0x0);
      return false;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$MaxPlayers
// il2cpp: void GameManagers_ChatManager__MaxPlayers (System_String_array* args, const MethodInfo* method);
// 0x181e4bf20

void GameManagers_ChatManager__MaxPlayers(System_String_array *args,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Photon_Realtime_Room_o *__this;
  System_String_o *pSVar3;
  int32_t local_res18 [4];
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Max players must be >= 0.");
    il2cpp_codegen_initialize_runtime_metadata(&"Max players set to ");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184344e14 = '\x01';
  }
  local_res18[0] = 0;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar2 = GameManagers_ChatManager__CheckMC((MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  if (args == (System_String_array *)0x0) {
label_181e4c11e:
    ThrowNullReferenceException();
  }
  uVar1 = (uint)args->max_length;
  if (1 < (int)uVar1) {
    if (uVar1 < 2) {
      ThrowIndexOutOfRangeException();
    }
    bVar2 = System_Int32__TryParse(args->m_Items[1],local_res18,(MethodInfo *)0x0);
    if ((bVar2) && (-1 < local_res18[0])) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      __this = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if (__this != (Photon_Realtime_Room_o *)0x0) {
        Photon_Realtime_Room__set_MaxPlayers(__this,local_res18[0],(MethodInfo *)0x0);
        pSVar3 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
        pSVar3 = System_String__Concat_1969b70
                           ("Max players set to ",pSVar3,".",(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        local_28[0].hasValue = false;
        local_28[0]._1_7_ = 0;
        local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
        GameManagers_ChatManager__AddLine
                  (pSVar3,3,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false,
                   (MethodInfo *)0x0);
        return;
      }
      goto label_181e4c11e;
    }
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  local_28[0].hasValue = false;
  local_28[0]._1_7_ = 0;
  local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
  GameManagers_ChatManager__AddLine
            ("Max players must be >= 0.",4,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false,
             (MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$KickPlayer
// il2cpp: void GameManagers_ChatManager__KickPlayer (Photon_Realtime_Player_o* player, bool print, bool ban, System_String_o* reason, const MethodInfo* method);
// 0x181e4b7e0

void GameManagers_ChatManager__KickPlayer
               (Photon_Realtime_Player_o *player,bool print,bool ban,System_String_o *reason,
               MethodInfo *method)

{
  bool bVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *str0;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184344e15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&" has been kicked");
    il2cpp_codegen_initialize_runtime_metadata(&" has been banned");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e15 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (player != pPVar2) {
      if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
      }
      Anticheat_AnticheatManager__KickPlayer(player,ban,"",(MethodInfo *)0x0);
      if (print) {
        if (ban) {
          if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
          }
          str0 = PhotonExtensions__GetStringProperty
                           (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                            "",(MethodInfo *)0x0);
          pSVar3 = " has been banned";
        }
        else {
          if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
          }
          str0 = PhotonExtensions__GetStringProperty
                           (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                            "",(MethodInfo *)0x0);
          pSVar3 = " has been kicked";
        }
        pSVar3 = System_String__Concat_1969b70(str0,pSVar3,reason,(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__SendChatAll(pSVar3,3,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// GameManagers.ChatManager$$VoteKickPlayer
// il2cpp: void GameManagers_ChatManager__VoteKickPlayer (Photon_Realtime_Player_o* voter, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x181e52a10

void GameManagers_ChatManager__VoteKickPlayer
               (Photon_Realtime_Player_o *voter,Photon_Realtime_Player_o *target,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Photon_Pun_PhotonView_o *__this;
  bool bVar4;
  Anticheat_BallotBox_Result_o *pAVar5;
  System_String_o *pSVar6;
  System_Object_array *parameters;
  Il2CppObject *pIVar7;
  Anticheat_BallotBox_Result_Fields local_48;
  Anticheat_BallotBox_Result_o local_28;
  
  if (Il2CppMethodInitialized_184344e16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"AnnounceRPC");
    il2cpp_codegen_initialize_runtime_metadata(&" has been vote kicked.");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e16 = '\x01';
  }
  local_48.type = 0;
  local_48.progress.fields.Item1 = 0;
  local_48.progress.fields.Item2 = 0;
  local_48._12_4_ = 0;
  local_48.target = (Photon_Realtime_Player_o *)0x0;
  local_48.cooldown.fields._ticks = (System_TimeSpan_Fields)0;
  if ((target != (Photon_Realtime_Player_o *)0x0) &&
     (bVar4 = Photon_Realtime_Player__get_IsMasterClient(target,(MethodInfo *)0x0), !bVar4)) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar4) {
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
          (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
         (pSVar3 = (pSVar2->fields).AllowVoteKicking, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
        if ((pSVar3->fields)._value == false) {
          return;
        }
        if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
        }
        pAVar5 = Anticheat_AnticheatManager__TryVoteKickPlayer(&local_28,voter,target,(MethodInfo *)0x0);
        local_48.type = (pAVar5->fields).type;
        local_48.progress.fields.Item1 = (pAVar5->fields).progress.fields.Item1;
        local_48._8_8_ = *(undefined8 *)&(pAVar5->fields).progress.fields.Item2;
        local_48.target = (pAVar5->fields).target;
        local_48.cooldown.fields._ticks = (System_TimeSpan_Fields)(pAVar5->fields).cooldown.fields._ticks;
        pSVar6 = Anticheat_BallotBox_Result__ToString
                           ((Anticheat_BallotBox_Result_o *)&local_48,(MethodInfo *)0x0);
        __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        if (parameters != (System_Object_array *)0x0) {
          if ((pSVar6 != (System_String_o *)0x0) &&
             (pIVar7 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar6,(((parameters->obj).klass)->_1).element_class),
             pIVar7 == (Il2CppObject *)0x0)) {
            pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = (Il2CppObject *)pSVar6;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,pSVar6);
          if (__this != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC_1d4d8d0
                      (__this,"AnnounceRPC",voter,parameters,(MethodInfo *)0x0);
            bVar4 = System_Numerics_BigInteger__get_IsZero
                              ((System_Numerics_BigInteger_o *)&local_48,(MethodInfo *)0x0);
            if (!bVar4) {
              return;
            }
            if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
            }
            pSVar6 = PhotonExtensions__GetStringProperty
                               (target,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                                "",(MethodInfo *)0x0);
            pSVar6 = System_String__Concat_1969e50(pSVar6," has been vote kicked.",(MethodInfo *)0x0);
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__SendChatAll(pSVar6,3,(MethodInfo *)0x0);
            return;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// GameManagers.ChatManager$$get_MaxLines
// il2cpp: int32_t GameManagers_ChatManager__get_MaxLines (const MethodInfo* method);
// 0x181e53740

int32_t GameManagers_ChatManager__get_MaxLines(MethodInfo *method)

{
  int iVar1;
  Settings_UISettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  int iVar5;
  Settings_SettingsManager_c *method_00;
  double dVar6;
  
  if (Il2CppMethodInitialized_184344e17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344e17 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (((pSVar2 == (Settings_UISettings_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).ChatHeight, pSVar3 == (Settings_IntSetting_o *)0x0)) ||
     (pSVar4 = (pSVar2->fields).ChatFontSize, pSVar4 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar5 = (pSVar4->fields)._value;
  iVar1 = (pSVar3->fields)._value;
  method_00 = TypeInfo_Settings_SettingsManager;
  if (Il2CppMethodInitialized_18433df29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433df29 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar6 = il2cpp_runtime_helper_1804f45c0((double)(((float)iVar1 * 5.0) / (((float)iVar5 / 18.0) * 30.0)),
                        (MethodInfo *)method_00);
  iVar5 = (int)dVar6;
  if (9 < iVar5) {
    if (0x46 < iVar5) {
      iVar5 = 0x46;
    }
    return iVar5;
  }
  return 10;
}


// GameManagers.ChatManager$$PreserveInputText
// il2cpp: void GameManagers_ChatManager__PreserveInputText (System_String_o* text, int32_t caretPosition, const MethodInfo* method);
// 0x181e4d2a0

void GameManagers_ChatManager__PreserveInputText
               (System_String_o *text,int32_t caretPosition,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344e18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_184344e18 = '\x01';
  }
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  TypeInfo_GameManagers_ChatManager->static_fields->_preservedInputText = text;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->_preservedInputText,text);
  TypeInfo_GameManagers_ChatManager->static_fields->_preservedInputCaretPosition = caretPosition;
  return;
}


// GameManagers.ChatManager$$GetPreservedInputWithCaret
// il2cpp: System_ValueTuple_string__int__int__o GameManagers_ChatManager__GetPreservedInputWithCaret (const MethodInfo* method);
// 0x181e45f20

System_ValueTuple_string__int__int__o *
GameManagers_ChatManager__GetPreservedInputWithCaret
          (System_ValueTuple_string__int__int__o *__return_storage_ptr__,MethodInfo *method)

{
  int32_t token;
  int32_t op;
  GameManagers_ChatManager_StaticFields *pGVar1;
  System_String_o *word;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184344e19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_string_int_int_ctor);
    Il2CppMethodInitialized_184344e19 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  word = pGVar1->_preservedInputText;
  token = pGVar1->_preservedInputCaretPosition;
  op = pGVar1->_preservedPMTargetActorNumber;
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  TypeInfo_GameManagers_ChatManager->static_fields->_preservedInputText = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->_preservedInputText,value);
  TypeInfo_GameManagers_ChatManager->static_fields->_preservedInputCaretPosition = 0;
  TypeInfo_GameManagers_ChatManager->static_fields->_preservedPMTargetActorNumber = -1;
  TypeInfo_GameManagers_ChatManager->static_fields->PreserveInputOnRestart = false;
  (__return_storage_ptr__->fields).Item1 = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Item2 = 0;
  (__return_storage_ptr__->fields).Item3 = 0;
  System_ValueTuple_object__int__int____ctor
            ((System_Data_ExpressionParser_ReservedWords_o *)__return_storage_ptr__,word,token,op,
             MethodInfo_System_ValueTuple_string_int_int_ctor);
  return __return_storage_ptr__;
}


// GameManagers.ChatManager$$PreservePMTargetActorNumber
// il2cpp: void GameManagers_ChatManager__PreservePMTargetActorNumber (int32_t actorNumber, const MethodInfo* method);
// 0x181e4d350

void GameManagers_ChatManager__PreservePMTargetActorNumber(int32_t actorNumber,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344e1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_184344e1a = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  TypeInfo_GameManagers_ChatManager->static_fields->_preservedPMTargetActorNumber = actorNumber;
  return;
}


// GameManagers.ChatManager$$SaveConversation
// il2cpp: void GameManagers_ChatManager__SaveConversation (System_String_o* key, System_String_o* text, int32_t caretPos, const MethodInfo* method);
// 0x181e50880

void GameManagers_ChatManager__SaveConversation
               (System_String_o *key,System_String_o *text,int32_t caretPos,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this;
  System_Collections_Generic_Dictionary_string__int__o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344e1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    Il2CppMethodInitialized_184344e1b = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_GameManagers_ChatManager->static_fields->_conversationTexts;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar1,(Il2CppObject *)key,
                 (MethodInfo_1470BF0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
      __this_00 = TypeInfo_GameManagers_ChatManager->static_fields->_conversationCarets;
      if (__this_00 != (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
        System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___Remove
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)key,
                   (MethodInfo_145AA00 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Remove);
        return;
      }
    }
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_GameManagers_ChatManager->static_fields->_conversationTexts;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)key,(Il2CppObject *)text,
                 (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      __this = (System_Collections_Generic_Dictionary_object__int__o *)
               TypeInfo_GameManagers_ChatManager->static_fields->_conversationCarets;
      if (__this != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        System_Collections_Generic_Dictionary_object__int___set_Item
                  (__this,(Il2CppObject *)key,caretPos,
                   (MethodInfo_147A820 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item)
        ;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$GetConversation
// il2cpp: System_ValueTuple_string__int__o GameManagers_ChatManager__GetConversation (System_String_o* key, const MethodInfo* method);
// 0x181e44f80

System_ValueTuple_string__int__o *
GameManagers_ChatManager__GetConversation
          (System_ValueTuple_string__int__o *__return_storage_ptr__,System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_string__int__o *__this_00;
  bool bVar1;
  System_String_o *impl;
  UnityEngine_UIElements_TextureId_o container;
  UnityEngine_UIElements_TextureId_o local_res8 [2];
  System_String_o *local_res10;
  
  if (Il2CppMethodInitialized_184344e1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e1c = '\x01';
  }
  local_res10 = (System_String_o *)0x0;
  local_res8[0].fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_GameManagers_ChatManager->static_fields->_conversationTexts;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)key,(Il2CppObject **)&local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    impl = "";
    if (bVar1) {
      impl = local_res10;
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    __this_00 = TypeInfo_GameManagers_ChatManager->static_fields->_conversationCarets;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)key,local_res8,
                         (MethodInfo_1461BD0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
      container.fields.m_Index =
           (UnityEngine_UIElements_TextureId_Fields)(UnityEngine_UIElements_TextureId_Fields)0;
      if (bVar1) {
        container.fields.m_Index = local_res8[0].fields.m_Index;
      }
      (__return_storage_ptr__->fields).Item1 = (System_String_o *)0x0;
      *(undefined8 *)&(__return_storage_ptr__->fields).Item2 = 0;
      Unity_Properties_IndexedCollectionPropertyBagEnumerable_Int32Enum____ctor
                ((Unity_Properties_IndexedCollectionPropertyBagEnumerable_TContainer__o *)
                 __return_storage_ptr__,
                 (Unity_Properties_IIndexedCollectionPropertyBagEnumerator_TContainer__o *)impl,
                 (int32_t)container.fields.m_Index,
                 (MethodInfo_CFB160 *)MethodInfo_System_ValueTuple_string_int_ctor);
      return __return_storage_ptr__;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$ClearConversation
// il2cpp: void GameManagers_ChatManager__ClearConversation (System_String_o* key, const MethodInfo* method);
// 0x181e43c40

void GameManagers_ChatManager__ClearConversation(System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_string__int__o *__this_00;
  
  if (Il2CppMethodInitialized_184344e1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    Il2CppMethodInitialized_184344e1d = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_GameManagers_ChatManager->static_fields->_conversationTexts;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Remove
              (__this,(Il2CppObject *)key,
               (MethodInfo_1470BF0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    __this_00 = TypeInfo_GameManagers_ChatManager->static_fields->_conversationCarets;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
      System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___Remove
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)key,
                 (MethodInfo_145AA00 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Remove);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$ResetNotifiedForPM
// il2cpp: void GameManagers_ChatManager__ResetNotifiedForPM (int32_t pmId, const MethodInfo* method);
// 0x181e4fbd0

void GameManagers_ChatManager__ResetNotifiedForPM(int32_t pmId,MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *__this;
  
  if (Il2CppMethodInitialized_184344e1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    Il2CppMethodInitialized_184344e1e = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this = TypeInfo_GameManagers_ChatManager->static_fields->NotifiedPMs;
  if (__this != (System_Collections_Generic_HashSet_int__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Remove
              ((System_Collections_Generic_HashSet_T__o *)__this,pmId,
               (MethodInfo_17666A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$RegisterCustomCommand
// il2cpp: bool GameManagers_ChatManager__RegisterCustomCommand (System_String_o* name, CustomLogic_UserMethod_o* callback, System_String_o* description, int32_t autofillType, const MethodInfo* method);
// 0x181e4ec30

bool GameManagers_ChatManager__RegisterCustomCommand
               (System_String_o *name,CustomLogic_UserMethod_o *callback,System_String_o *description,
               int32_t autofillType,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *__this;
  bool bVar3;
  System_String_o *pSVar4;
  System_String_o *name_00;
  GameManagers_ChatManager_CLCommandAttribute_o *__this_00;
  Il2CppObject *local_res8;
  
  if (Il2CppMethodInitialized_184344e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_CLCommandAttribute);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_set_Item)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    Il2CppMethodInitialized_184344e1f = '\x01';
  }
  local_res8 = (Il2CppObject *)0x0;
  bVar3 = System_String__IsNullOrWhiteSpace(name,(MethodInfo *)0x0);
  if (bVar3) {
    return false;
  }
  if (callback == (CustomLogic_UserMethod_o *)0x0) {
    return false;
  }
  if ((name != (System_String_o *)0x0) &&
     (pSVar4 = System_String__Trim(name,(MethodInfo *)0x0), pSVar4 != (System_String_o *)0x0)) {
    pSVar4 = System_String__ToLower(pSVar4,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar2,(Il2CppObject *)pSVar4,&local_res8,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
                        );
      if (bVar3) {
        if (local_res8 == (Il2CppObject *)0x0) {
          return false;
        }
        bVar1 = (TypeInfo_GameManagers_ChatManager_CLCommandAttribute->_2).typeHierarchyDepth;
        if ((local_res8->klass->_2).typeHierarchyDepth < bVar1) {
          return false;
        }
        if ((local_res8->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_ChatManager_CLCommandAttribute) {
          return false;
        }
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
      name_00 = System_String__Trim(name,(MethodInfo *)0x0);
      if (description == (System_String_o *)0x0) {
        description = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_CLCommandAttribute);
      GameManagers_ChatManager_CLCommandAttribute___ctor
                (__this_00,name_00,description,callback,autofillType,(MethodInfo *)0x0);
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar2,(Il2CppObject *)pSVar4,(Il2CppObject *)__this_00,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_set_Item
                  );
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        __this = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_GameManagers_ChatManager->static_fields->CustomCommandKeys;
        if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet_object___Add
                    (__this,(Il2CppObject *)pSVar4,
                     (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          return true;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$ClearCustomCommands
// il2cpp: void GameManagers_ChatManager__ClearCustomCommands (const MethodInfo* method);
// 0x181e43d00
// eh: try 0x181e43df0..0x181e43ecf -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e43ded: nop dword ptr [rax]
// asm:   0x181e43e5f: mov rdx, qword ptr [rip + 0x2253812]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose
// asm:   0x181e43e66: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e43e6b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e43e70: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e43e75: test rcx, rcx
// asm:   0x181e43e78: jne 0x181e43ecf
// asm:   0x181e43ecf: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void GameManagers_ChatManager__ClearCustomCommands(MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_01;
  Il2CppObject *key;
  bool bVar1;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_184344e20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
    Il2CppMethodInitialized_184344e20 = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (Il2CppObject *)0x0;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this = (System_Collections_Generic_HashSet_Vector2Int__o *)
           TypeInfo_GameManagers_ChatManager->static_fields->CustomCommandKeys;
  if (__this != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,__this,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_28,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
      key = local_18;
      if (!bVar1) break;
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___Remove
                (__this_00,key,
                 (MethodInfo_1470BF0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_Remove);
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    __this_01 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                TypeInfo_GameManagers_ChatManager->static_fields->CustomCommandKeys;
    if (__this_01 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
      System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                (__this_01,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$ParseCommandArgs
// il2cpp: System_String_array* GameManagers_ChatManager__ParseCommandArgs (System_String_o* text, const MethodInfo* method);
// 0x181e4ce30

System_String_array * GameManagers_ChatManager__ParseCommandArgs(System_String_o *text,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  bool bVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  bool bVar6;
  uint16_t value;
  System_Collections_Generic_List_string__o *__this;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *item;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar7;
  System_String_array *pSVar8;
  uint16_t uVar9;
  int index;
  
  if (Il2CppMethodInitialized_184344e21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_184344e21 = '\x01';
  }
  bVar5 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (bVar5) {
    pSVar8 = (System_String_array *)
             System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                       ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_string);
    return pSVar8;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (text != (System_String_o *)0x0) {
    bVar5 = false;
    bVar3 = false;
    index = 0;
    uVar9 = 0;
    while (index < (text->fields)._stringLength) {
      value = System_String__get_Chars(text,index,(MethodInfo *)0x0);
      if (bVar5) {
        if (value == uVar9) {
          bVar5 = false;
          goto label_181e4d02b;
        }
        if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_181e4d11a;
        System_Text_StringBuilder__Append_197e090(__this_00,value,(MethodInfo *)0x0);
        index = index + 1;
      }
      else if ((value == 0x22) || (value == 0x27)) {
        bVar5 = true;
        index = index + 1;
        bVar3 = true;
        uVar9 = value;
      }
      else {
        if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e48);
        }
        bVar6 = System_Char__IsWhiteSpace(value,(MethodInfo *)0x0);
        if (bVar6) {
          if (bVar3) {
            if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_181e4d11a;
            (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._3_ToString.method);
            if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e4d11a;
            il2cpp_runtime_helper_180012890(__this);
            System_Text_StringBuilder__Clear(__this_00,(MethodInfo *)0x0);
            bVar3 = false;
            index = index + 1;
          }
          else {
label_181e4d02b:
            index = index + 1;
          }
        }
        else {
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_181e4d11a;
          System_Text_StringBuilder__Append_197e090(__this_00,value,(MethodInfo *)0x0);
          index = index + 1;
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
        item = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this != (System_Collections_Generic_List_string__o *)0x0) {
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this->fields)._items;
          if (pSVar8 != (System_String_array *)0x0) {
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar8->max_length) {
              (__this->fields)._size = uVar2 + 1;
              if ((uint)pSVar8->max_length <= uVar2) {
                ThrowIndexOutOfRangeException();
              }
              pSVar8->m_Items[(int)uVar2] = item;
              Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar2,item);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                         (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
            }
            goto label_181e4d0ca;
          }
        }
      }
    }
    else if (__this != (System_Collections_Generic_List_string__o *)0x0) {
label_181e4d0ca:
      pUVar7 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)__this,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar7;
    }
  }
label_181e4d11a:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$GetAutofillTokenStart
// il2cpp: int32_t GameManagers_ChatManager__GetAutofillTokenStart (System_String_o* input, int32_t firstSpaceIndex, int32_t autofillType, const MethodInfo* method);
// 0x181e44c40

int32_t GameManagers_ChatManager__GetAutofillTokenStart
                  (System_String_o *input,int32_t firstSpaceIndex,int32_t autofillType,MethodInfo *method)

{
  int32_t iVar1;
  
  if (autofillType != 2) {
    return firstSpaceIndex;
  }
  if (input != (System_String_o *)0x0) {
    iVar1 = System_String__LastIndexOf(input,0x20,(MethodInfo *)0x0);
    if (iVar1 <= firstSpaceIndex) {
      iVar1 = firstSpaceIndex;
    }
    return iVar1;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$Init
// il2cpp: void GameManagers_ChatManager__Init (const MethodInfo* method);
// 0x181e4b030
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4b365: mov rdx, qword ptr [rip + 0x2285524]  ; TypeInfo_GameManagers_ChatManager_CommandAttribute

void GameManagers_ChatManager__Init(MethodInfo *method)

{
  byte bVar1;
  longlong *value;
  Il2CppObject *value_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Reflection_MethodInfo_o *value_01;
  Il2CppType *handle;
  GameManagers_ChatManager_o *value_02;
  System_Type_o *pSVar3;
  longlong lVar4;
  longlong lVar5;
  System_String_o *pSVar6;
  GameManagers_ChatManager_CommandAttribute_o *value_03;
  Il2CppClass *pIVar7;
  uint uVar8;
  uint uVar9;
  
  if (Il2CppMethodInitialized_184344e22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_GameManagers_ChatManager_CommandAttribute);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_CommandAttribute);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_ChatManager);
    Il2CppMethodInitialized_184344e22 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  value_02 = Utility_SingletonFactory__CreateSingleton_object_
                       ((Il2CppObject *)TypeInfo_GameManagers_ChatManager->static_fields->_instance,
                        (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_ChatManager);
  TypeInfo_GameManagers_ChatManager->static_fields->_instance = value_02;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->_instance,value_02);
  handle = TypeRef_GameManagers_ChatManager;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar3 != (System_Type_o *)0x0) {
    lVar4 = (*(pSVar3->klass->vtable)._105_unknown.methodPtr)
                      (pSVar3,0x3c,(pSVar3->klass->vtable)._105_unknown.method);
    pSVar3 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_GameManagers_ChatManager_CommandAttribute,
                        (MethodInfo *)0x0);
    if (lVar4 != 0) {
      uVar9 = 0;
      do {
        if (*(int *)(lVar4 + 0x18) <= (int)uVar9) {
          return;
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar9) {
label_181e4b3a7:
          ThrowIndexOutOfRangeException();
        }
        value = *(longlong **)(lVar4 + 0x20 + (longlong)(int)uVar9 * 8);
        if (value == (longlong *)0x0) break;
        lVar5 = (**(code **)(*value + 0x218))(value,pSVar3,0,*(undefined8 *)(*value + 0x220));
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x18) != 0)) {
          pIVar7 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager_CommandAttribute;
          for (uVar8 = 0; (int)uVar8 < (int)*(uint *)(lVar5 + 0x18); uVar8 = uVar8 + 1) {
            if (*(uint *)(lVar5 + 0x18) <= uVar8) goto label_181e4b3a7;
            value_00 = *(Il2CppObject **)(lVar5 + 0x20 + (longlong)(int)uVar8 * 8);
            if (value_00 != (Il2CppObject *)0x0) {
              bVar1 = (pIVar7->_2).typeHierarchyDepth;
              if ((bVar1 <= (value_00->klass->_2).typeHierarchyDepth) &&
                 ((value_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == pIVar7)) {
                value_00[2].monitor = value;
                Il2CppCodeGenWriteBarrier(&value_00[2].monitor,value);
                if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                }
                if (value_00[1].klass == (Il2CppClass *)0x0) goto label_181e4b3ad;
                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                         TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
                pSVar6 = System_String__ToLower((System_String_o *)value_00[1].klass,(MethodInfo *)0x0);
                if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_181e4b3ad;
                System_Collections_Generic_Dictionary_object__object___Add
                          (pSVar2,(Il2CppObject *)pSVar6,value_00,
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_Add
                          );
                pIVar7 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager_CommandAttribute;
                if (value_00[2].klass != (Il2CppClass *)0x0) {
                  value_03 = il2cpp_codegen_object_new
                                       ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_CommandAttribute);
                  System_Attribute___ctor
                            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)value_03,(MethodInfo *)0x0);
                  pIVar7 = value_00[1].klass;
                  (value_03->fields)._Name_k__BackingField = (System_String_o *)pIVar7;
                  Il2CppCodeGenWriteBarrier(&(value_03->fields)._Name_k__BackingField,pIVar7);
                  pSVar6 = value_00[1].monitor;
                  (value_03->fields)._Description_k__BackingField = pSVar6;
                  Il2CppCodeGenWriteBarrier(&(value_03->fields)._Description_k__BackingField,pSVar6);
                  pIVar7 = value_00[2].klass;
                  (value_03->fields)._Alias_k__BackingField = (System_String_o *)pIVar7;
                  Il2CppCodeGenWriteBarrier(&(value_03->fields)._Alias_k__BackingField,pIVar7);
                  value_01 = value_00[2].monitor;
                  (value_03->fields)._Command_k__BackingField = value_01;
                  Il2CppCodeGenWriteBarrier(&(value_03->fields)._Command_k__BackingField,value_01);
                  (value_03->fields)._AutofillType_k__BackingField = *(int32_t *)&value_00[4].klass;
                  (value_03->fields)._ExcludeFromHelp_k__BackingField =
                       *(bool *)((longlong)&value_00[4].klass + 4);
                  (value_03->fields)._IsAlias_k__BackingField = true;
                  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                  }
                  pSVar6 = (value_03->fields)._Alias_k__BackingField;
                  if (pSVar6 == (System_String_o *)0x0) goto label_181e4b3ad;
                  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                           TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
                  pSVar6 = System_String__ToLower(pSVar6,(MethodInfo *)0x0);
                  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                  goto label_181e4b3ad;
                  System_Collections_Generic_Dictionary_object__object___Add
                            (pSVar2,(Il2CppObject *)pSVar6,(Il2CppObject *)value_03,
                             (MethodInfo_146B4B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_Add
                            );
                  pIVar7 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager_CommandAttribute;
                }
              }
            }
          }
        }
        uVar9 = uVar9 + 1;
      } while( true );
    }
  }
label_181e4b3ad:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$Reset
// il2cpp: void GameManagers_ChatManager__Reset (const MethodInfo* method);
// 0x181e4fc50

void GameManagers_ChatManager__Reset(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344e23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_184344e23 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__Clear_1e444a0((MethodInfo *)0x0);
  GameManagers_ChatManager__LoadTheme((MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$Clear
// il2cpp: void GameManagers_ChatManager__Clear (const MethodInfo* method);
// 0x181e444a0

void GameManagers_ChatManager__Clear_1e444a0(MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  int length;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Collections_Generic_List_ChatTextColor__o *pSVar4;
  System_Collections_Generic_List_bool__o *pSVar5;
  System_Collections_Generic_List_DateTime__o *pSVar6;
  System_Collections_Generic_List_int__o *pSVar7;
  System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *pSVar8;
  System_String_o *value;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar9;
  bool bVar10;
  UI_ChatPanel_o *__this;
  UI_FeedPanel_o *__this_00;
  
  if (Il2CppMethodInitialized_184344e24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_DateTime_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatTextColor_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344e24 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar3 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
  if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
    iVar2 = (pSVar3->fields)._size;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar3->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->Colors;
    if (pSVar4 != (System_Collections_Generic_List_ChatTextColor__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar4->fields)._size = 0;
      pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->SystemFlags;
      if (pSVar5 != (System_Collections_Generic_List_bool__o *)0x0) {
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        (pSVar5->fields)._size = 0;
        pSVar6 = TypeInfo_GameManagers_ChatManager->static_fields->Timestamps;
        if (pSVar6 != (System_Collections_Generic_List_DateTime__o *)0x0) {
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          (pSVar6->fields)._size = 0;
          pSVar7 = TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
          if (pSVar7 != (System_Collections_Generic_List_int__o *)0x0) {
            piVar1 = &(pSVar7->fields)._version;
            *piVar1 = *piVar1 + 1;
            (pSVar7->fields)._size = 0;
            pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags;
            if (pSVar5 != (System_Collections_Generic_List_bool__o *)0x0) {
              piVar1 = &(pSVar5->fields)._version;
              *piVar1 = *piVar1 + 1;
              (pSVar5->fields)._size = 0;
              pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->NotificationFlags;
              if (pSVar5 != (System_Collections_Generic_List_bool__o *)0x0) {
                piVar1 = &(pSVar5->fields)._version;
                *piVar1 = *piVar1 + 1;
                (pSVar5->fields)._size = 0;
                pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
                if (pSVar5 != (System_Collections_Generic_List_bool__o *)0x0) {
                  piVar1 = &(pSVar5->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  (pSVar5->fields)._size = 0;
                  pSVar7 = TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
                  if (pSVar7 != (System_Collections_Generic_List_int__o *)0x0) {
                    piVar1 = &(pSVar7->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    (pSVar7->fields)._size = 0;
                    pSVar8 = TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData;
                    if (pSVar8 != (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0) {
                      iVar2 = (pSVar8->fields)._size;
                      piVar1 = &(pSVar8->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      (pSVar8->fields)._size = 0;
                      if (0 < iVar2) {
                        System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar2,
                                            (MethodInfo *)0x0);
                      }
                      value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
                      TypeInfo_GameManagers_ChatManager->static_fields->LastException = value;
                      Il2CppCodeGenWriteBarrier
                                (&TypeInfo_GameManagers_ChatManager->static_fields->LastException,value);
                      TypeInfo_GameManagers_ChatManager->static_fields->LastExceptionCount = 0;
                      pSVar3 = TypeInfo_GameManagers_ChatManager->static_fields->FeedLines;
                      if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
                        length = (pSVar3->fields)._size;
                        piVar1 = &(pSVar3->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        (pSVar3->fields)._size = 0;
                        if (0 < length) {
                          System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,
                                              (MethodInfo *)0x0);
                        }
                        bVar10 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
                        if (bVar10) {
                          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                          }
                          __this = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          bVar10 = UnityEngine_Object__op_Inequality
                                             ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,
                                              (MethodInfo *)0x0);
                          if (bVar10) {
                            if (__this == (UI_ChatPanel_o *)0x0) goto label_181e4486d;
                            UI_ChatPanel__Sync(__this,(MethodInfo *)0x0);
                          }
                          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                          }
                          __this_00 = GameManagers_ChatManager__GetFeedPanel((MethodInfo *)0x0);
                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          bVar10 = UnityEngine_Object__op_Inequality
                                             ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                                              (MethodInfo *)0x0);
                          if (bVar10) {
                            if (__this_00 == (UI_FeedPanel_o *)0x0) goto label_181e4486d;
                            UI_FeedPanel__Sync(__this_00,(MethodInfo *)0x0);
                          }
                        }
                        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                        }
                        pSVar9 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                                 TypeInfo_GameManagers_ChatManager->static_fields->ActivePMNotifications;
                        if (pSVar9 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
                          System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                                    (pSVar9,(MethodInfo_17592A0 *)
                                            MethodInfo_System_Collections_Generic_HashSet_int_Clear);
                          pSVar9 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                                   TypeInfo_GameManagers_ChatManager->static_fields->NotifiedPMs;
                          if (pSVar9 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
                            System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                                      (pSVar9,(MethodInfo_17592A0 *)
                                              MethodInfo_System_Collections_Generic_HashSet_int_Clear);
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
label_181e4486d:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$IsChatActive
// il2cpp: bool GameManagers_ChatManager__IsChatActive (const MethodInfo* method);
// 0x181e4b470

bool GameManagers_ChatManager__IsChatActive(MethodInfo *method)

{
  bool bVar1;
  UI_ChatPanel_o *__this;
  
  if (Il2CppMethodInitialized_184344e25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344e25 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  if (__this == (UI_ChatPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UI_ChatPanel__IsInputActive(__this,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  bVar1 = UI_ChatPanel__IsInteractingWithChatUI(__this,(MethodInfo *)0x0);
  return bVar1;
}


// GameManagers.ChatManager$$IsChatAvailable
// il2cpp: bool GameManagers_ChatManager__IsChatAvailable (const MethodInfo* method);
// 0x181e4b520

bool GameManagers_ChatManager__IsChatAvailable(MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  bool bVar3;
  UI_BaseMenu_o *pUVar4;
  
  if (Il2CppMethodInitialized_184344e26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184344e26 = '\x01';
  }
  if (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 2) {
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
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      pUVar4 = (UI_BaseMenu_o *)0x0;
      if (pUVar2 != (UI_BaseMenu_o *)0x0) {
        bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
        if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
           (bVar3 = true,
           (pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu))
        {
          bVar3 = false;
        }
        if (bVar3) {
          pUVar4 = pUVar2;
        }
      }
      return pUVar4 != (UI_BaseMenu_o *)0x0;
    }
  }
  return false;
}


// GameManagers.ChatManager$$SendChatAll
// il2cpp: void GameManagers_ChatManager__SendChatAll (System_String_o* message, int32_t color, const MethodInfo* method);
// 0x181e50a00

void GameManagers_ChatManager__SendChatAll(System_String_o *message,int32_t color,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_String_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  System_DateTime_Fields local_res8;
  int64_t local_res20;
  
  if (Il2CppMethodInitialized_184344e27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ChatRPC");
    Il2CppMethodInitialized_184344e27 = '\x01';
  }
  local_res8._dateData = 0;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  obj = GameManagers_ChatManager__GetColorString(message,color,false,(MethodInfo *)0x0);
  __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameters == (System_Object_array *)0x0) {
label_181e50b9e:
    ThrowNullReferenceException();
  }
  if (obj != (System_String_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)obj;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    local_res8._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
    local_res20 = System_DateTime__get_Ticks((System_DateTime_o *)&local_res8,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e28,&local_res20);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = pIVar1;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar1);
      if (__this != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this,"ChatRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
      goto label_181e50b9e;
    }
  }
  ThrowIndexOutOfRangeException();
}


// GameManagers.ChatManager$$SendPlayerChatAll
// il2cpp: void GameManagers_ChatManager__SendPlayerChatAll (System_String_o* message, const MethodInfo* method);
// 0x181e50da0

void GameManagers_ChatManager__SendPlayerChatAll(System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  System_DateTime_Fields local_res8;
  int64_t local_res18;
  
  if (Il2CppMethodInitialized_184344e28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerChatRPC");
    Il2CppMethodInitialized_184344e28 = '\x01';
  }
  local_res8._dateData = 0;
  __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameters == (System_Object_array *)0x0) {
label_181e50f08:
    ThrowNullReferenceException();
  }
  if (message != (System_String_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)message,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)message;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,message);
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    local_res8._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
    local_res18 = System_DateTime__get_Ticks((System_DateTime_o *)&local_res8,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e28,&local_res18);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = pIVar1;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar1);
      if (__this != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this,"PlayerChatRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
      goto label_181e50f08;
    }
  }
  ThrowIndexOutOfRangeException();
}


// GameManagers.ChatManager$$SendChat
// il2cpp: void GameManagers_ChatManager__SendChat (System_String_o* message, Photon_Realtime_Player_o* player, int32_t color, const MethodInfo* method);
// 0x181e50bd0

void GameManagers_ChatManager__SendChat
               (System_String_o *message,Photon_Realtime_Player_o *player,int32_t color,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_String_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  System_DateTime_Fields local_res8;
  int64_t local_res10;
  
  if (Il2CppMethodInitialized_184344e29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ChatRPC");
    Il2CppMethodInitialized_184344e29 = '\x01';
  }
  local_res8._dateData = 0;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  obj = GameManagers_ChatManager__GetColorString(message,color,false,(MethodInfo *)0x0);
  __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameters == (System_Object_array *)0x0) {
label_181e50d6c:
    ThrowNullReferenceException();
  }
  if (obj != (System_String_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)obj;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    local_res8._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
    local_res10 = System_DateTime__get_Ticks((System_DateTime_o *)&local_res8,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e28,&local_res10);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = pIVar1;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar1);
      if (__this != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC_1d4d8d0(__this,"ChatRPC",player,parameters,(MethodInfo *)0x0);
        return;
      }
      goto label_181e50d6c;
    }
  }
  ThrowIndexOutOfRangeException();
}


// GameManagers.ChatManager$$OnChatRPC
// il2cpp: void GameManagers_ChatManager__OnChatRPC (System_String_o* message, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e4c550

void GameManagers_ChatManager__OnChatRPC
               (System_String_o *message,int64_t senderTimestamp,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  System_Collections_Generic_HashSet_int__o *__this;
  bool bVar2;
  Il2CppObject *arg0;
  Il2CppObject *arg0_00;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  int32_t local_res18 [4];
  int32_t local_48 [2];
  System_DateTime_o local_40;
  System_Data_SqlTypes_SqlMoney_Fields local_38;
  System_Data_SqlTypes_SqlMoney_Fields local_28;
  
  if (Il2CppMethodInitialized_184344e2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_DateTime_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"<link=\"{0}\">{1}</link>");
    il2cpp_codegen_initialize_runtime_metadata(&"[{0}]");
    Il2CppMethodInitialized_184344e2a = '\x01';
  }
  local_40.fields._dateData = (System_DateTime_Fields)0;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  pPVar1 = (info->fields).Sender;
  if ((pPVar1 != (Photon_Realtime_Player_o *)0x0) &&
     (__this = TypeInfo_GameManagers_InGameManager->static_fields->MuteText,
     __this != (System_Collections_Generic_HashSet_int__o *)0x0)) {
    bVar2 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)__this,(pPVar1->fields).actorNumber,
                       (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar2) {
      return;
    }
    pPVar1 = (info->fields).Sender;
    if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
      local_res18[0] = (pPVar1->fields).actorNumber;
      arg0 = il2cpp_value_box(g_data_184354e08,local_res18);
      pPVar1 = (info->fields).Sender;
      if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
        local_48[0] = (pPVar1->fields).actorNumber;
        arg0_00 = il2cpp_value_box(g_data_184354e08,local_48);
        pSVar3 = System_String__Format("[{0}]",arg0_00,(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar3 = GameManagers_ChatManager__GetColorString(pSVar3,1,false,(MethodInfo *)0x0);
        pSVar3 = System_String__Format_196d440
                           ("<link=\"{0}\">{1}</link>",arg0,(Il2CppObject *)pSVar3,(MethodInfo *)0x0);
        pSVar3 = System_String__Concat_1969b70(pSVar3," ",message,(MethodInfo *)0x0);
        if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
        }
        method_00 = (MethodInfo *)0x0;
        System_DateTime___ctor_1b20b80(&local_40,senderTimestamp,1,(MethodInfo *)0x0);
        local_38._fNotNull = false;
        local_38._1_7_ = 0;
        local_38._value = 0;
        System_Data_SqlTypes_SqlMoney___ctor_ae2650
                  ((System_Data_SqlTypes_SqlMoney_o *)&local_38,(int64_t)local_40.fields._dateData,
                   (int32_t)MethodInfo_System_Nullable_DateTime_ctor,method_00);
        pPVar1 = (info->fields).Sender;
        if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
          local_28._fNotNull = local_38._fNotNull;
          local_28._1_7_ = local_38._1_7_;
          local_28._value = local_38._value;
          GameManagers_ChatManager__AddLine
                    (pSVar3,0,false,(System_Nullable_DateTime__o *)&local_28,(pPVar1->fields).actorNumber,
                     false,false,-1,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$OnPlayerChatRPC
// il2cpp: void GameManagers_ChatManager__OnPlayerChatRPC (System_String_o* message, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e4c7c0

void GameManagers_ChatManager__OnPlayerChatRPC
               (System_String_o *message,int64_t senderTimestamp,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  System_Collections_Generic_HashSet_int__o *__this;
  System_DateTime_o timestamp;
  bool bVar2;
  System_DateTime_o local_res18 [2];
  
  if (Il2CppMethodInitialized_184344e2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184344e2b = '\x01';
  }
  local_res18[0].fields._dateData = (System_DateTime_Fields)0;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  pPVar1 = (info->fields).Sender;
  if ((pPVar1 != (Photon_Realtime_Player_o *)0x0) &&
     (__this = TypeInfo_GameManagers_InGameManager->static_fields->MuteText,
     __this != (System_Collections_Generic_HashSet_int__o *)0x0)) {
    bVar2 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)__this,(pPVar1->fields).actorNumber,
                       (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (!bVar2) {
      if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
      }
      System_DateTime___ctor_1b20b80(local_res18,senderTimestamp,1,(MethodInfo *)0x0);
      timestamp.fields._dateData = local_res18[0].fields._dateData;
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__AddPlayerLine
                ((info->fields).Sender,message,0,timestamp,false,-1,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$OnAnnounceRPC
// il2cpp: void GameManagers_ChatManager__OnAnnounceRPC (System_String_o* message, const MethodInfo* method);
// 0x181e4c4c0

void GameManagers_ChatManager__OnAnnounceRPC(System_String_o *message,MethodInfo *method)

{
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_184344e2c = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  local_28[0].hasValue = false;
  local_28[0]._1_7_ = 0;
  local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
  GameManagers_ChatManager__AddLine
            (message,3,true,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false,(MethodInfo *)0x0)
  ;
  return;
}


// GameManagers.ChatManager$$AddLine
// il2cpp: void GameManagers_ChatManager__AddLine (System_String_o* message, int32_t color, bool isSystem, System_Nullable_DateTime__o timestamp, int32_t senderID, bool isSuggestion, bool isPM, int32_t pmPartnerID, bool isNotification, const MethodInfo* method);
// 0x181e42df0

void GameManagers_ChatManager__AddLine
               (System_String_o *message,int32_t color,bool isSystem,System_Nullable_DateTime__o *timestamp,
               int32_t senderID,bool isSuggestion,bool isPM,int32_t pmPartnerID,bool isNotification,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_String_o *pSVar2;
  System_DateTime_Fields messageTime;
  GameManagers_ChatManager_ChatPlayerLineData_o local_68 [3];
  
  if (Il2CppMethodInitialized_184344e2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_DateTime_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_DateTime_get_HasValue);
    Il2CppMethodInitialized_184344e2d = '\x01';
  }
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  pSVar2 = Anticheat_ChatFilter__FilterSizeTag(message,(MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar2 = MiscExtensions__ReplaceNamedColorTags(pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar2 = GameManagers_ChatManager__GetColorString(pSVar2,color,false,(MethodInfo *)0x0);
  local_68[0].fields.SenderName._1_4_ =
       *(undefined4 *)((longlong)&(timestamp->fields).value.fields._dateData + 1);
  uVar1 = *(undefined8 *)&(timestamp->fields).field_0x1;
  local_68[0].fields.SenderName._5_2_ =
       *(undefined2 *)((longlong)&(timestamp->fields).value.fields._dateData + 5);
  local_68[0].fields.SenderName._7_1_ =
       *(undefined1 *)((longlong)&(timestamp->fields).value.fields._dateData + 7);
  local_68[0].fields._1_7_ = (undefined7)uVar1;
  local_68[0].fields.SenderName._0_1_ = (undefined1)((ulonglong)uVar1 >> 0x38);
  if ((timestamp->fields).hasValue == false) {
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    messageTime._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
  }
  else {
    messageTime._dateData =
         CONCAT17(local_68[0].fields.SenderName._7_1_,
                  CONCAT25(local_68[0].fields.SenderName._5_2_,
                           CONCAT41(local_68[0].fields.SenderName._1_4_,local_68[0].fields.SenderName._0_1_)))
    ;
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  local_68[0].fields.Active = false;
  local_68[0].fields._1_7_ = 0;
  local_68[0].fields.SenderName._0_1_ = 0;
  local_68[0].fields.SenderName._1_4_ = 0;
  local_68[0].fields.SenderName._5_2_ = 0;
  local_68[0].fields.SenderName._7_1_ = 0;
  local_68[0].fields.BodyText = (System_String_o *)0x0;
  GameManagers_ChatManager__AddLineInternal
            (pSVar2,color,isSystem,(System_DateTime_o)messageTime._dateData,senderID,isSuggestion,isPM,
             pmPartnerID,isNotification,local_68,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$AddPlayerLine
// il2cpp: void GameManagers_ChatManager__AddPlayerLine (Photon_Realtime_Player_o* sender, System_String_o* message, int32_t bodyColor, System_DateTime_o timestamp, bool isPM, int32_t pmPartnerID, const MethodInfo* method);
// 0x181e42fd0

void GameManagers_ChatManager__AddPlayerLine
               (Photon_Realtime_Player_o *sender,System_String_o *message,int32_t bodyColor,
               System_DateTime_o timestamp,bool isPM,int32_t pmPartnerID,MethodInfo *method)

{
  int32_t senderID;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Il2CppObject *arg0;
  Il2CppObject *arg0_00;
  System_String_o *pSVar3;
  System_String_array *values;
  int32_t local_res8 [2];
  int32_t local_58 [2];
  GameManagers_ChatManager_ChatPlayerLineData_Fields local_50;
  GameManagers_ChatManager_ChatPlayerLineData_Fields local_38;
  
  if (Il2CppMethodInitialized_184344e2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"<link=\"{0}\">{1}</link>");
    il2cpp_codegen_initialize_runtime_metadata(&"[{0}]");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e2e = '\x01';
  }
  local_50.BodyText = (System_String_o *)0x0;
  local_50.Active = false;
  local_50._1_7_ = 0;
  local_50.SenderName = (System_String_o *)0x0;
  if (sender == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (sender,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                      (MethodInfo *)0x0);
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  pSVar1 = Anticheat_ChatFilter__FilterSizeTag(pSVar1,(MethodInfo *)0x0);
  if (message == (System_String_o *)0x0) {
    message = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  pSVar2 = Anticheat_ChatFilter__FilterSizeTag(message,(MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar2 = MiscExtensions__ReplaceNamedColorTags(pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar2 = GameManagers_ChatManager__GetColorString(pSVar2,bodyColor,false,(MethodInfo *)0x0);
  local_res8[0] = (sender->fields).actorNumber;
  arg0 = il2cpp_value_box(g_data_184354e08,local_res8);
  local_58[0] = (sender->fields).actorNumber;
  arg0_00 = il2cpp_value_box(g_data_184354e08,local_58);
  pSVar3 = System_String__Format("[{0}]",arg0_00,(MethodInfo *)0x0);
  pSVar3 = GameManagers_ChatManager__GetColorString(pSVar3,1,false,(MethodInfo *)0x0);
  pSVar3 = System_String__Format_196d440("<link=\"{0}\">{1}</link>",arg0,(Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = pSVar3;
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar3);
      pSVar3 = " ";
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = " ";
        Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar3);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = pSVar1;
          Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar1);
          pSVar3 = ": ";
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = ": ";
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar2;
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar2);
              pSVar3 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
              senderID = (sender->fields).actorNumber;
              local_50.Active = true;
              local_50._1_7_ = 0;
              local_50.BodyText = (System_String_o *)0x0;
              local_50.SenderName = pSVar1;
              Il2CppCodeGenWriteBarrier(&local_50.SenderName,pSVar1);
              local_50.BodyText = pSVar2;
              Il2CppCodeGenWriteBarrier(&local_50.BodyText,pSVar2);
              local_38.Active = local_50.Active;
              local_38._1_7_ = local_50._1_7_;
              local_38.SenderName = local_50.SenderName;
              local_38.BodyText = local_50.BodyText;
              GameManagers_ChatManager__AddLineInternal
                        (pSVar3,0,false,timestamp,senderID,false,isPM,pmPartnerID,false,
                         (GameManagers_ChatManager_ChatPlayerLineData_o *)&local_38,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$AddLineInternal
// il2cpp: void GameManagers_ChatManager__AddLineInternal (System_String_o* formattedMessage, int32_t color, bool isSystem, System_DateTime_o messageTime, int32_t senderID, bool isSuggestion, bool isPM, int32_t pmPartnerID, bool isNotification, GameManagers_ChatManager_ChatPlayerLineData_o playerLineData, const MethodInfo* method);
// 0x181e42700

void GameManagers_ChatManager__AddLineInternal
               (System_String_o *formattedMessage,int32_t color,bool isSystem,System_DateTime_o messageTime,
               int32_t senderID,bool isSuggestion,bool isPM,int32_t pmPartnerID,bool isNotification,
               GameManagers_ChatManager_ChatPlayerLineData_o *playerLineData,MethodInfo *method)

{
  int32_t *piVar1;
  GameManagers_ChatManager_ChatPlayerLineData_o *pGVar2;
  uint uVar3;
  int iVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  System_String_array *pSVar6;
  System_Collections_Generic_List_T__o *pSVar7;
  System_Object_array *pSVar8;
  System_Collections_Generic_List_DateTime__o *__this;
  System_DateTime_array *pSVar9;
  System_Collections_Generic_List_uint__o *pSVar10;
  System_UInt32_array *pSVar11;
  System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *__this_00;
  GameManagers_ChatManager_ChatPlayerLineData_array *pGVar12;
  System_Collections_Generic_List_int__o *pSVar13;
  undefined7 uVar14;
  MethodInfo *pMVar15;
  bool bVar16;
  int32_t iVar17;
  UI_ChatPanel_o *__this_01;
  System_String_o *pSVar18;
  UnityEngine_UIElements_TemplateAsset_UxmlSerializedDataOverride_Fields local_48;
  
  if (Il2CppMethodInitialized_184344e2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_DateTime_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_ChatTextColor_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344e2f = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pMVar15 = MethodInfo_System_Collections_Generic_List_string_Add;
  pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
  if (pSVar5 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (pSVar5->fields)._items;
    if (pSVar6 == (System_String_array *)0x0) goto label_181e42dd6;
    uVar3 = (pSVar5->fields)._size;
    if (uVar3 < (uint)pSVar6->max_length) {
      (pSVar5->fields)._size = uVar3 + 1;
      if ((uint)pSVar6->max_length <= uVar3) goto label_181e42ddc;
      pSVar6->m_Items[(int)uVar3] = formattedMessage;
      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3,formattedMessage);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)formattedMessage,
                 (MethodInfo_93DD50 *)pMVar15->klass->rgctx_data[0xe].method);
    }
    pMVar15 = MethodInfo_System_Collections_Generic_List_ChatTextColor_Add;
    pSVar7 = (System_Collections_Generic_List_T__o *)TypeInfo_GameManagers_ChatManager->static_fields->Colors;
    if (pSVar7 == (System_Collections_Generic_List_T__o *)0x0) goto label_181e42dd6;
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (pSVar7->fields)._items;
    if (pSVar8 == (System_Object_array *)0x0) goto label_181e42dd6;
    uVar3 = (pSVar7->fields)._size;
    if (uVar3 < (uint)pSVar8->max_length) {
      (pSVar7->fields)._size = uVar3 + 1;
      if ((uint)pSVar8->max_length <= uVar3) goto label_181e42ddc;
      *(int32_t *)((longlong)pSVar8->m_Items + (longlong)(int)uVar3 * 4) = color;
    }
    else {
      System_Collections_Generic_List_UInt32Enum___AddWithResize
                (pSVar7,color,(MethodInfo_91AA10 *)pMVar15->klass->rgctx_data[0xe].method);
    }
    pMVar15 = MethodInfo_System_Collections_Generic_List_bool_Add;
    pSVar7 = (System_Collections_Generic_List_T__o *)
             TypeInfo_GameManagers_ChatManager->static_fields->SystemFlags;
    if (pSVar7 == (System_Collections_Generic_List_T__o *)0x0) goto label_181e42dd6;
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (pSVar7->fields)._items;
    if (pSVar8 == (System_Object_array *)0x0) goto label_181e42dd6;
    uVar3 = (pSVar7->fields)._size;
    if (uVar3 < (uint)pSVar8->max_length) {
      (pSVar7->fields)._size = uVar3 + 1;
      if ((uint)pSVar8->max_length <= uVar3) goto label_181e42ddc;
      *(bool *)((longlong)pSVar8->m_Items + (longlong)(int)uVar3) = isSystem;
    }
    else {
      System_Collections_Generic_List_sbyte___AddWithResize
                (pSVar7,isSystem,(MethodInfo_974010 *)pMVar15->klass->rgctx_data[0xe].method);
    }
    pMVar15 = MethodInfo_System_Collections_Generic_List_DateTime_Add;
    __this = TypeInfo_GameManagers_ChatManager->static_fields->Timestamps;
    if (__this == (System_Collections_Generic_List_DateTime__o *)0x0) goto label_181e42dd6;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar9 = (__this->fields)._items;
    if (pSVar9 == (System_DateTime_array *)0x0) goto label_181e42dd6;
    uVar3 = (__this->fields)._size;
    if (uVar3 < (uint)pSVar9->max_length) {
      (__this->fields)._size = uVar3 + 1;
      if ((uint)pSVar9->max_length <= uVar3) goto label_181e42ddc;
      pSVar9->m_Items[(int)uVar3].fields._dateData = (uint64_t)messageTime.fields._dateData;
    }
    else {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___AddWithResize
                ((System_Collections_Generic_List_T__o *)__this,
                 (UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_o)
                 messageTime.fields._dateData,(MethodInfo_985420 *)pMVar15->klass->rgctx_data[0xe].method);
    }
    pMVar15 = MethodInfo_System_Collections_Generic_List_int_Add;
    pSVar10 = (System_Collections_Generic_List_uint__o *)
              TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
    if (pSVar10 == (System_Collections_Generic_List_uint__o *)0x0) goto label_181e42dd6;
    piVar1 = &(pSVar10->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar11 = (pSVar10->fields)._items;
    if (pSVar11 == (System_UInt32_array *)0x0) goto label_181e42dd6;
    uVar3 = (pSVar10->fields)._size;
    if (uVar3 < (uint)pSVar11->max_length) {
      (pSVar10->fields)._size = uVar3 + 1;
      if ((uint)pSVar11->max_length <= uVar3) goto label_181e42ddc;
      pSVar11->m_Items[(int)uVar3] = senderID;
    }
    else {
      System_Collections_Generic_List_uint___AddWithResize
                (pSVar10,senderID,(MethodInfo_91A500 *)pMVar15->klass->rgctx_data[0xe].method);
    }
    pMVar15 = MethodInfo_System_Collections_Generic_List_bool_Add;
    pSVar7 = (System_Collections_Generic_List_T__o *)
             TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags;
    if (pSVar7 == (System_Collections_Generic_List_T__o *)0x0) goto label_181e42dd6;
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (pSVar7->fields)._items;
    if (pSVar8 == (System_Object_array *)0x0) goto label_181e42dd6;
    uVar3 = (pSVar7->fields)._size;
    if (uVar3 < (uint)pSVar8->max_length) {
      (pSVar7->fields)._size = uVar3 + 1;
      if ((uint)pSVar8->max_length <= uVar3) goto label_181e42ddc;
      *(bool *)((longlong)pSVar8->m_Items + (longlong)(int)uVar3) = isSuggestion;
    }
    else {
      System_Collections_Generic_List_sbyte___AddWithResize
                (pSVar7,isSuggestion,(MethodInfo_974010 *)pMVar15->klass->rgctx_data[0xe].method);
    }
    pMVar15 = MethodInfo_System_Collections_Generic_List_bool_Add;
    pSVar7 = (System_Collections_Generic_List_T__o *)
             TypeInfo_GameManagers_ChatManager->static_fields->NotificationFlags;
    if (pSVar7 == (System_Collections_Generic_List_T__o *)0x0) goto label_181e42dd6;
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (pSVar7->fields)._items;
    if (pSVar8 == (System_Object_array *)0x0) goto label_181e42dd6;
    uVar3 = (pSVar7->fields)._size;
    if (uVar3 < (uint)pSVar8->max_length) {
      (pSVar7->fields)._size = uVar3 + 1;
      if ((uint)pSVar8->max_length <= uVar3) goto label_181e42ddc;
      *(bool *)((longlong)pSVar8->m_Items + (longlong)(int)uVar3) = isNotification;
    }
    else {
      System_Collections_Generic_List_sbyte___AddWithResize
                (pSVar7,isNotification,(MethodInfo_974010 *)pMVar15->klass->rgctx_data[0xe].method);
    }
    pMVar15 = MethodInfo_System_Collections_Generic_List_bool_Add;
    pSVar7 = (System_Collections_Generic_List_T__o *)
             TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
    if (pSVar7 == (System_Collections_Generic_List_T__o *)0x0) goto label_181e42dd6;
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (pSVar7->fields)._items;
    if (pSVar8 == (System_Object_array *)0x0) goto label_181e42dd6;
    uVar3 = (pSVar7->fields)._size;
    if (uVar3 < (uint)pSVar8->max_length) {
      (pSVar7->fields)._size = uVar3 + 1;
      if ((uint)pSVar8->max_length <= uVar3) goto label_181e42ddc;
      *(bool *)((longlong)pSVar8->m_Items + (longlong)(int)uVar3) = isPM;
    }
    else {
      System_Collections_Generic_List_sbyte___AddWithResize
                (pSVar7,isPM,(MethodInfo_974010 *)pMVar15->klass->rgctx_data[0xe].method);
    }
    pMVar15 = MethodInfo_System_Collections_Generic_List_int_Add;
    pSVar10 = (System_Collections_Generic_List_uint__o *)
              TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
    if (pSVar10 == (System_Collections_Generic_List_uint__o *)0x0) goto label_181e42dd6;
    piVar1 = &(pSVar10->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar11 = (pSVar10->fields)._items;
    if (pSVar11 == (System_UInt32_array *)0x0) goto label_181e42dd6;
    uVar3 = (pSVar10->fields)._size;
    if (uVar3 < (uint)pSVar11->max_length) {
      (pSVar10->fields)._size = uVar3 + 1;
      if ((uint)pSVar11->max_length <= uVar3) goto label_181e42ddc;
      pSVar11->m_Items[(int)uVar3] = pmPartnerID;
    }
    else {
      System_Collections_Generic_List_uint___AddWithResize
                (pSVar10,pmPartnerID,(MethodInfo_91A500 *)pMVar15->klass->rgctx_data[0xe].method);
    }
    pMVar15 = MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_Add;
    __this_00 = TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData;
    if (__this_00 != (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar12 = (__this_00->fields)._items;
      if (pGVar12 != (GameManagers_ChatManager_ChatPlayerLineData_array *)0x0) {
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pGVar12->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          if ((uint)pGVar12->max_length <= uVar3) {
label_181e42ddc:
            ThrowIndexOutOfRangeException();
          }
          uVar14 = *(undefined7 *)&(playerLineData->fields).field_0x1;
          pSVar13 = (System_Collections_Generic_List_int__o *)(playerLineData->fields).SenderName;
          pSVar18 = (playerLineData->fields).BodyText;
          pGVar2 = pGVar12->m_Items + (int)uVar3;
          (pGVar2->fields).Active = (playerLineData->fields).Active;
          *(undefined7 *)&(pGVar2->fields).field_0x1 = uVar14;
          (pGVar2->fields).SenderName = (System_String_o *)pSVar13;
          pGVar12->m_Items[(int)uVar3].fields.BodyText = pSVar18;
          Il2CppCodeGenWriteBarrier(&pGVar12->m_Items[(int)uVar3].fields.SenderName,(void *)0x0);
        }
        else {
          local_48._0_8_ = *(undefined8 *)&playerLineData->fields;
          local_48.m_ElementIdsPath =
               (System_Collections_Generic_List_int__o *)(playerLineData->fields).SenderName;
          local_48.m_SerializedData =
               (UnityEngine_UIElements_UxmlSerializedData_o *)(playerLineData->fields).BodyText;
          System_Collections_Generic_List_TemplateAsset_UxmlSerializedDataOverride___AddWithResize
                    ((System_Collections_Generic_List_TemplateAsset_UxmlSerializedDataOverride__o *)__this_00,
                     (UnityEngine_UIElements_TemplateAsset_UxmlSerializedDataOverride_o *)&local_48,
                     (MethodInfo_92D510 *)pMVar15->klass->rgctx_data[0xe].method);
        }
        pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
        if (pSVar5 != (System_Collections_Generic_List_string__o *)0x0) {
          iVar4 = (pSVar5->fields)._size;
          iVar17 = GameManagers_ChatManager__get_MaxLines((MethodInfo *)0x0);
          if (iVar17 < iVar4) {
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__RemoveLineAt(0,(MethodInfo *)0x0);
          }
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          bVar16 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
          if (bVar16) {
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            if (0 < TypeInfo_GameManagers_ChatManager->static_fields->_lineBatchDepth) {
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              TypeInfo_GameManagers_ChatManager->static_fields->_pendingBatchSync = true;
              return;
            }
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            __this_01 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar16 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                                (MethodInfo *)0x0);
            if (bVar16) {
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              pSVar18 = GameManagers_ChatManager__GetFormattedMessage
                                  (formattedMessage,messageTime,isSuggestion,(MethodInfo *)0x0);
              if (__this_01 == (UI_ChatPanel_o *)0x0) goto label_181e42dd6;
              UI_ChatPanel__AddLine(__this_01,pSVar18,(MethodInfo *)0x0);
            }
          }
          return;
        }
      }
    }
  }
label_181e42dd6:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$BeginLineBatch
// il2cpp: void GameManagers_ChatManager__BeginLineBatch (const MethodInfo* method);
// 0x181e434b0

void GameManagers_ChatManager__BeginLineBatch(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344e30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_184344e30 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  if (TypeInfo_GameManagers_ChatManager->static_fields->_lineBatchDepth == 0) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    TypeInfo_GameManagers_ChatManager->static_fields->_pendingBatchSync = false;
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  TypeInfo_GameManagers_ChatManager->static_fields->_lineBatchDepth =
       TypeInfo_GameManagers_ChatManager->static_fields->_lineBatchDepth + 1;
  return;
}


// GameManagers.ChatManager$$EndLineBatch
// il2cpp: void GameManagers_ChatManager__EndLineBatch (const MethodInfo* method);
// 0x181e44a50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e44bb0: mov rbx, qword ptr [rsp + 0x20]

void GameManagers_ChatManager__EndLineBatch(MethodInfo *method)

{
  bool bVar1;
  UI_ChatPanel_o *__this;
  
  if (Il2CppMethodInitialized_184344e31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344e31 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  if (0 < TypeInfo_GameManagers_ChatManager->static_fields->_lineBatchDepth) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    TypeInfo_GameManagers_ChatManager->static_fields->_lineBatchDepth =
         TypeInfo_GameManagers_ChatManager->static_fields->_lineBatchDepth + -1;
    if (TypeInfo_GameManagers_ChatManager->static_fields->_lineBatchDepth == 0) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      if (TypeInfo_GameManagers_ChatManager->static_fields->_pendingBatchSync != false) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        TypeInfo_GameManagers_ChatManager->static_fields->_pendingBatchSync = false;
        bVar1 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          __this = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            if (__this == (UI_ChatPanel_o *)0x0) {
              ThrowNullReferenceException();
            }
            UI_ChatPanel__Sync(__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  return;
}


// GameManagers.ChatManager$$RemoveLineAt
// il2cpp: void GameManagers_ChatManager__RemoveLineAt (int32_t index, const MethodInfo* method);
// 0x181e4ee80

void GameManagers_ChatManager__RemoveLineAt(int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_ChatTextColor__o *pSVar2;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *pSVar3;
  System_Collections_Generic_List_bool__o *pSVar4;
  System_Collections_Generic_List_DateTime__o *pSVar5;
  System_Collections_Generic_List_int__o *pSVar6;
  System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *pSVar7;
  
  if (Il2CppMethodInitialized_184344e32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_DateTime_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatTextColor_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatTextColor_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_DateTime_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    Il2CppMethodInitialized_184344e32 = '\x01';
  }
  if (index < 0) {
    return;
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    if ((pSVar1->fields)._size <= index) {
      return;
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
    if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar1,index,
                 (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_string_RemoveAt);
      pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->Colors;
      if (pSVar2 != (System_Collections_Generic_List_ChatTextColor__o *)0x0) {
        if (index < (pSVar2->fields)._size) {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar3 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                   TypeInfo_GameManagers_ChatManager->static_fields->Colors;
          if (pSVar3 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
          goto label_181e4f37c;
          System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveAt
                    (pSVar3,index,
                     (MethodInfo_922DE0 *)MethodInfo_System_Collections_Generic_List_ChatTextColor_RemoveAt);
        }
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->SystemFlags;
        if (pSVar4 != (System_Collections_Generic_List_bool__o *)0x0) {
          if (index < (pSVar4->fields)._size) {
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            pSVar3 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                     TypeInfo_GameManagers_ChatManager->static_fields->SystemFlags;
            if (pSVar3 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
            goto label_181e4f37c;
            System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveAt
                      (pSVar3,index,
                       (MethodInfo_922DE0 *)MethodInfo_System_Collections_Generic_List_bool_RemoveAt);
          }
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->Timestamps;
          if (pSVar5 != (System_Collections_Generic_List_DateTime__o *)0x0) {
            if (index < (pSVar5->fields)._size) {
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->Timestamps;
              if (pSVar5 == (System_Collections_Generic_List_DateTime__o *)0x0) goto label_181e4f37c;
              System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveAt
                        ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)pSVar5,index,
                         (MethodInfo_922DE0 *)MethodInfo_System_Collections_Generic_List_DateTime_RemoveAt);
            }
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            pSVar6 = TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
            if (pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
              if (index < (pSVar6->fields)._size) {
                if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                }
                pSVar3 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                         TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
                if (pSVar3 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
                goto label_181e4f37c;
                System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveAt
                          (pSVar3,index,
                           (MethodInfo_922DE0 *)MethodInfo_System_Collections_Generic_List_int_RemoveAt);
              }
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags;
              if (pSVar4 != (System_Collections_Generic_List_bool__o *)0x0) {
                if (index < (pSVar4->fields)._size) {
                  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                  }
                  pSVar3 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                           TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags;
                  if (pSVar3 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
                  goto label_181e4f37c;
                  System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveAt
                            (pSVar3,index,
                             (MethodInfo_922DE0 *)MethodInfo_System_Collections_Generic_List_bool_RemoveAt);
                }
                if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                }
                pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->NotificationFlags;
                if (pSVar4 != (System_Collections_Generic_List_bool__o *)0x0) {
                  if (index < (pSVar4->fields)._size) {
                    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                    }
                    pSVar3 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                             TypeInfo_GameManagers_ChatManager->static_fields->NotificationFlags;
                    if (pSVar3 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
                    goto label_181e4f37c;
                    System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveAt
                              (pSVar3,index,
                               (MethodInfo_922DE0 *)MethodInfo_System_Collections_Generic_List_bool_RemoveAt);
                  }
                  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                  }
                  pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
                  if (pSVar4 != (System_Collections_Generic_List_bool__o *)0x0) {
                    if (index < (pSVar4->fields)._size) {
                      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                      }
                      pSVar3 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                               TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
                      if (pSVar3 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
                      goto label_181e4f37c;
                      System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveAt
                                (pSVar3,index,
                                 (MethodInfo_922DE0 *)MethodInfo_System_Collections_Generic_List_bool_RemoveAt
                                );
                    }
                    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                    }
                    pSVar6 = TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
                    if (pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
                      if (index < (pSVar6->fields)._size) {
                        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                        }
                        pSVar3 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                                 TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
                        if (pSVar3 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
                        goto label_181e4f37c;
                        System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveAt
                                  (pSVar3,index,
                                   (MethodInfo_922DE0 *)
                                   MethodInfo_System_Collections_Generic_List_int_RemoveAt);
                      }
                      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                      }
                      pSVar7 = TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData;
                      if (pSVar7 != (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0)
                      {
                        if ((pSVar7->fields)._size <= index) {
                          return;
                        }
                        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                        }
                        pSVar7 = TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData;
                        if (pSVar7 != (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0
                           ) {
                          System_Collections_Generic_List_TemplateAsset_UxmlSerializedDataOverride___RemoveAt
                                    ((System_Collections_Generic_List_TemplateAsset_UxmlSerializedDataOverride__o
                                      *)pSVar7,index,
                                     (MethodInfo_934450 *)
                                     MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_RemoveAt
                                    );
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
label_181e4f37c:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$AddException
// il2cpp: void GameManagers_ChatManager__AddException (System_String_o* line, const MethodInfo* method);
// 0x181e421a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e423f2: mov rcx, qword ptr [rip + 0x229c3d7]  ; TypeInfo_GameManagers_ChatManager

void GameManagers_ChatManager__AddException(System_String_o *line,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_Text_StringBuilder_o *pSVar4;
  System_Nullable_DateTime__Fields local_18;
  
  if (Il2CppMethodInitialized_184344e33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    Il2CppMethodInitialized_184344e33 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
  if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) {
label_181e4248e:
    ThrowNullReferenceException();
  }
  if (0 < (pSVar1->fields)._size) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
    if ((pSVar1 == (System_Collections_Generic_List_string__o *)0x0) ||
       (pSVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)
                            TypeInfo_GameManagers_ChatManager->static_fields->RawMessages,
                            (pSVar1->fields)._size + -1,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item),
       pSVar3 == (System_String_o *)0x0)) goto label_181e4248e;
    bVar2 = System_String__Contains
                      (pSVar3,TypeInfo_GameManagers_ChatManager->static_fields->LastException,
                       (MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      bVar2 = System_String__op_Equality
                        (TypeInfo_GameManagers_ChatManager->static_fields->LastException,line,
                         (MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        TypeInfo_GameManagers_ChatManager->static_fields->LastExceptionCount =
             TypeInfo_GameManagers_ChatManager->static_fields->LastExceptionCount + 1;
        pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
        if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Clear(pSVar4,(MethodInfo *)0x0);
          pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
          if ((((pSVar4 != (System_Text_StringBuilder_o *)0x0) &&
               (pSVar4 = System_Text_StringBuilder__Append_197dca0(pSVar4,line,(MethodInfo *)0x0),
               pSVar4 != (System_Text_StringBuilder_o *)0x0)) &&
              (pSVar4 = System_Text_StringBuilder__Append_197e090(pSVar4,0x28,(MethodInfo *)0x0),
              pSVar4 != (System_Text_StringBuilder_o *)0x0)) &&
             (pSVar4 = System_Text_StringBuilder__Append_197ddb0
                                 (pSVar4,TypeInfo_GameManagers_ChatManager->static_fields->LastExceptionCount,
                                  (MethodInfo *)0x0), pSVar4 != (System_Text_StringBuilder_o *)0x0)) {
            System_Text_StringBuilder__Append_197e090(pSVar4,0x29,(MethodInfo *)0x0);
            pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
            if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
              pSVar3 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                                 (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
              pSVar3 = GameManagers_ChatManager__GetColorString(pSVar3,4,false,(MethodInfo *)0x0);
              GameManagers_ChatManager__ReplaceLastLine(pSVar3,4,true,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto label_181e4248e;
      }
    }
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  TypeInfo_GameManagers_ChatManager->static_fields->LastException = line;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->LastException,line);
  local_18.hasValue = false;
  local_18._1_7_ = 0;
  local_18.value.fields._dateData = (System_DateTime_Fields)0;
  TypeInfo_GameManagers_ChatManager->static_fields->LastExceptionCount = 0;
  GameManagers_ChatManager__AddLine
            (line,4,true,(System_Nullable_DateTime__o *)&local_18,-1,false,false,-1,false,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$ReplaceLastLine
// il2cpp: void GameManagers_ChatManager__ReplaceLastLine (System_String_o* message, int32_t color, bool isSystem, const MethodInfo* method);
// 0x181e4f490

void GameManagers_ChatManager__ReplaceLastLine
               (System_String_o *message,int32_t color,bool isSystem,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  System_Collections_Generic_List_DateTime__o *__this;
  System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *pSVar4;
  bool bVar5;
  UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_o value;
  System_String_o *pSVar6;
  UI_ChatPanel_o *__this_00;
  UnityEngine_UIElements_TemplateAsset_UxmlSerializedDataOverride_Fields local_48 [2];
  
  if (Il2CppMethodInitialized_184344e34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_DateTime_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatTextColor_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344e34 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
  if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
    if ((pSVar2->fields)._size < 1) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      local_48[0].m_ElementId = 0;
      local_48[0]._4_4_ = 0;
      local_48[0].m_ElementIdsPath = (System_Collections_Generic_List_int__o *)0x0;
      GameManagers_ChatManager__AddLine
                (message,color,isSystem,(System_Nullable_DateTime__o *)local_48,-1,false,false,-1,false,
                 (MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    value.fields = (UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_Fields)
                   System_DateTime__get_UtcNow((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
    if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
      }
      pSVar6 = Anticheat_ChatFilter__FilterSizeTag(message,(MethodInfo *)0x0);
      pSVar6 = Anticheat_ChatFilter__FilterBadWords(pSVar6,(MethodInfo *)0x0);
      pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
      if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
        iVar1 = iVar1 + -1;
        System_Collections_Generic_List_object___set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar2,iVar1,(Il2CppObject *)pSVar6,
                   (MethodInfo_950000 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
        pSVar3 = (System_Collections_Generic_List_T__o *)
                 TypeInfo_GameManagers_ChatManager->static_fields->Colors;
        if (pSVar3 != (System_Collections_Generic_List_T__o *)0x0) {
          System_Collections_Generic_List_UInt32Enum___set_Item
                    (pSVar3,iVar1,color,
                     (MethodInfo_92BC10 *)MethodInfo_System_Collections_Generic_List_ChatTextColor_set_Item);
          pSVar3 = (System_Collections_Generic_List_T__o *)
                   TypeInfo_GameManagers_ChatManager->static_fields->SystemFlags;
          if (pSVar3 != (System_Collections_Generic_List_T__o *)0x0) {
            System_Collections_Generic_List_sbyte___set_Item
                      (pSVar3,iVar1,isSystem,
                       (MethodInfo_983C80 *)MethodInfo_System_Collections_Generic_List_bool_set_Item);
            __this = TypeInfo_GameManagers_ChatManager->static_fields->Timestamps;
            if (__this != (System_Collections_Generic_List_DateTime__o *)0x0) {
              System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___set_Item
                        ((System_Collections_Generic_List_T__o *)__this,iVar1,value,
                         (MethodInfo_98F0D0 *)MethodInfo_System_Collections_Generic_List_DateTime_set_Item);
              pSVar3 = (System_Collections_Generic_List_T__o *)
                       TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
              if (pSVar3 != (System_Collections_Generic_List_T__o *)0x0) {
                System_Collections_Generic_List_UInt32Enum___set_Item
                          (pSVar3,iVar1,0xffffffff,
                           (MethodInfo_92BC10 *)MethodInfo_System_Collections_Generic_List_int_set_Item);
                pSVar3 = (System_Collections_Generic_List_T__o *)
                         TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags;
                if (pSVar3 != (System_Collections_Generic_List_T__o *)0x0) {
                  System_Collections_Generic_List_sbyte___set_Item
                            (pSVar3,iVar1,'\0',
                             (MethodInfo_983C80 *)MethodInfo_System_Collections_Generic_List_bool_set_Item);
                  pSVar3 = (System_Collections_Generic_List_T__o *)
                           TypeInfo_GameManagers_ChatManager->static_fields->NotificationFlags;
                  if (pSVar3 != (System_Collections_Generic_List_T__o *)0x0) {
                    System_Collections_Generic_List_sbyte___set_Item
                              (pSVar3,iVar1,'\0',
                               (MethodInfo_983C80 *)MethodInfo_System_Collections_Generic_List_bool_set_Item);
                    pSVar3 = (System_Collections_Generic_List_T__o *)
                             TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
                    if (pSVar3 != (System_Collections_Generic_List_T__o *)0x0) {
                      System_Collections_Generic_List_sbyte___set_Item
                                (pSVar3,iVar1,'\0',
                                 (MethodInfo_983C80 *)MethodInfo_System_Collections_Generic_List_bool_set_Item
                                );
                      pSVar3 = (System_Collections_Generic_List_T__o *)
                               TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
                      if (pSVar3 != (System_Collections_Generic_List_T__o *)0x0) {
                        System_Collections_Generic_List_UInt32Enum___set_Item
                                  (pSVar3,iVar1,0xffffffff,
                                   (MethodInfo_92BC10 *)
                                   MethodInfo_System_Collections_Generic_List_int_set_Item);
                        pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData;
                        if (pSVar4 != (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0
                           ) {
                          if (iVar1 < (pSVar4->fields)._size) {
                            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                            }
                            pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData;
                            if (pSVar4 == (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *
                                          )0x0) goto label_181e4f954;
                            local_48[0].m_ElementId = 0;
                            local_48[0]._4_4_ = 0;
                            local_48[0].m_ElementIdsPath = (System_Collections_Generic_List_int__o *)0x0;
                            local_48[0].m_SerializedData = (UnityEngine_UIElements_UxmlSerializedData_o *)0x0;
                            System_Collections_Generic_List_TemplateAsset_UxmlSerializedDataOverride___set_Item
                                      ((System_Collections_Generic_List_TemplateAsset_UxmlSerializedDataOverride__o
                                        *)pSVar4,iVar1,
                                       (UnityEngine_UIElements_TemplateAsset_UxmlSerializedDataOverride_o *)
                                       local_48,(MethodInfo_93C250 *)
                                                MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_set_Item
                                      );
                          }
                          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                          }
                          bVar5 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
                          if (bVar5) {
                            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                            }
                            __this_00 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
                            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                            }
                            bVar5 = UnityEngine_Object__op_Inequality
                                              ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                                               (MethodInfo *)0x0);
                            if (bVar5) {
                              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                              }
                              pSVar6 = GameManagers_ChatManager__GetFormattedMessage
                                                 (pSVar6,(System_DateTime_o)value.fields,false,
                                                  (MethodInfo *)0x0);
                              if (__this_00 == (UI_ChatPanel_o *)0x0) goto label_181e4f954;
                              UI_ChatPanel__ReplaceLastLine(__this_00,pSVar6,(MethodInfo *)0x0);
                            }
                          }
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
label_181e4f954:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$GetFormattedMessage
// il2cpp: System_String_o* GameManagers_ChatManager__GetFormattedMessage (System_String_o* message, System_DateTime_o timestamp, bool isSuggestion, const MethodInfo* method);
// 0x181e45740
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e45899: mov rax, rdi
// asm:   0x181e4589c: jmp 0x181e45884

System_String_o *
GameManagers_ChatManager__GetFormattedMessage
          (System_String_o *message,System_DateTime_o timestamp,bool isSuggestion,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_Text_StringBuilder_o *pSVar5;
  
  if (Il2CppMethodInitialized_184344e35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184344e35 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).ShowChatTimestamp, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    bVar3 = isSuggestion;
    if ((pSVar2->fields)._value == false) {
      bVar3 = true;
    }
    if (bVar3 != false) {
      return message;
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
    if (pSVar5 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Clear(pSVar5,(MethodInfo *)0x0);
      pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
      pSVar4 = GameManagers_ChatManager__GetTimestampPrefix(timestamp,isSuggestion,(MethodInfo *)0x0);
      if ((pSVar5 != (System_Text_StringBuilder_o *)0x0) &&
         (pSVar5 = System_Text_StringBuilder__Append_197dca0(pSVar5,pSVar4,(MethodInfo *)0x0),
         pSVar5 != (System_Text_StringBuilder_o *)0x0)) {
        System_Text_StringBuilder__Append_197dca0(pSVar5,message,(MethodInfo *)0x0);
        pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
        if (pSVar5 != (System_Text_StringBuilder_o *)0x0) {
          pSVar4 = (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                             (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
          return pSVar4;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$GetDisplayLine
// il2cpp: GameManagers_ChatManager_ChatDisplayLine_o GameManagers_ChatManager__GetDisplayLine (int32_t index, const MethodInfo* method);
// 0x181e450d0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e45570: mov qword ptr [rbp - 0x21], rbx
// asm:   0x181e45574: mov rdx, rbx
// asm:   0x181e45577: jmp 0x181e455a3

GameManagers_ChatManager_ChatDisplayLine_o *
GameManagers_ChatManager__GetDisplayLine
          (GameManagers_ChatManager_ChatDisplayLine_o *__return_storage_ptr__,int32_t index,MethodInfo *method
          )

{
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_DateTime__o *pSVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *pSVar4;
  System_Collections_Generic_List_int__o *pSVar5;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this;
  bool bVar6;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields SVar7;
  System_String_o *pSVar8;
  System_DateTime_o SVar9;
  Il2CppObject *arg0;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields local_res10 [2];
  System_String_o *local_b8;
  undefined8 uStack_b0;
  System_String_o *local_a8;
  System_String_o *pSStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  System_String_o *local_80;
  ulonglong uStack_78;
  System_String_o *local_70;
  System_String_o *pSStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  UnityEngine_UIElements_UIR_Entry_o *local_38;
  
  if (Il2CppMethodInitialized_184344e36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_DateTime_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"[{0}] ");
    Il2CppMethodInitialized_184344e36 = '\x01';
  }
  local_88 = 0;
  local_b8 = (System_String_o *)0x0;
  uStack_b0 = 0;
  local_a8 = (System_String_o *)0x0;
  pSStack_a0 = (System_String_o *)0x0;
  local_98 = (void *)0x0;
  uStack_90 = (void *)0x0;
  if (index < 0) {
label_181e45579:
    pSVar8 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
    if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e455ff;
    if ((pSVar1->fields)._size <= index) goto label_181e45579;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
    if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) {
label_181e455ff:
      ThrowNullReferenceException();
    }
    pSVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,index,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
    pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->Timestamps;
    if (pSVar2 == (System_Collections_Generic_List_DateTime__o *)0x0) goto label_181e455ff;
    SVar9.fields._dateData =
         (System_DateTime_Fields)
         System_Collections_Generic_List_object___System_Collections_IList_get_Item
                   ((System_Collections_Generic_List_object__o *)pSVar2,index,
                    (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_DateTime_get_Item);
    pSVar3 = (System_Collections_Generic_List_T__o *)
             TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags;
    if (pSVar3 == (System_Collections_Generic_List_T__o *)0x0) goto label_181e455ff;
    bVar6 = (bool)System_Collections_Generic_List_sbyte___get_Item
                            (pSVar3,index,
                             (MethodInfo_9839D0 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
    pSVar8 = GameManagers_ChatManager__GetFormattedMessage(pSVar8,SVar9,bVar6,(MethodInfo *)0x0);
    pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData;
    if (pSVar4 == (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0)
    goto label_181e455ff;
    if (index < (pSVar4->fields)._size) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData;
      if (pSVar4 == (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0)
      goto label_181e455ff;
      System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___get_Item
                ((UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_o *)
                 local_48,(System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__o
                           *)pSVar4,index,
                 (MethodInfo_93C010 *)
                 MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_get_Item);
      if (local_48[0] != '\0') {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData;
        if (pSVar4 == (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0)
        goto label_181e455ff;
        System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___get_Item
                  ((UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_o
                    *)local_48,
                   (System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__o
                    *)pSVar4,index,
                   (MethodInfo_93C010 *)
                   MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_get_Item);
        pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
        if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto label_181e455ff;
        if (index < (pSVar5->fields)._size) {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          __this = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                   TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
          if (__this == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
          goto label_181e455ff;
          SVar7 = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
                  System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                            (__this,index,
                             (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        }
        else {
          SVar7.First = 0xffff;
          SVar7.Last = 0xffff;
        }
        uStack_b0 = 0;
        local_a8 = (System_String_o *)0x0;
        pSStack_a0 = (System_String_o *)0x0;
        local_98 = (void *)0x0;
        uStack_90 = (void *)0x0;
        local_88 = 0;
        local_b8 = pSVar8;
        Il2CppCodeGenWriteBarrier(&local_b8,pSVar8);
        uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->Timestamps;
        if (pSVar2 == (System_Collections_Generic_List_DateTime__o *)0x0) {
label_181e455f9:
          ThrowNullReferenceException();
        }
        SVar9.fields._dateData =
             (System_DateTime_Fields)
             System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,index,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_DateTime_get_Item);
        pSVar3 = (System_Collections_Generic_List_T__o *)
                 TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags;
        if (pSVar3 == (System_Collections_Generic_List_T__o *)0x0) goto label_181e455f9;
        bVar6 = (bool)System_Collections_Generic_List_sbyte___get_Item
                                (pSVar3,index,
                                 (MethodInfo_9839D0 *)MethodInfo_System_Collections_Generic_List_bool_get_Item
                                );
        local_a8 = GameManagers_ChatManager__GetTimestampPrefix(SVar9,bVar6,(MethodInfo *)0x0);
        Il2CppCodeGenWriteBarrier(&local_a8,local_a8);
        local_res10[0] = SVar7;
        arg0 = il2cpp_value_box(g_data_184354e08,local_res10);
        pSVar8 = System_String__Format("[{0}] ",arg0,(MethodInfo *)0x0);
        pSStack_a0 = GameManagers_ChatManager__GetColorString(pSVar8,1,false,(MethodInfo *)0x0);
        Il2CppCodeGenWriteBarrier(&pSStack_a0,pSStack_a0);
        if ((void *)local_48._8_8_ == (void *)0x0) {
          local_48._8_8_ = **(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        local_98 = (void *)local_48._8_8_;
        Il2CppCodeGenWriteBarrier((void **)&local_98,(void *)local_48._8_8_);
        if (local_38 == (UnityEngine_UIElements_UIR_Entry_o *)0x0) {
          local_38 = (UnityEngine_UIElements_UIR_Entry_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        uStack_90 = System_String__Concat_1969e50
                              (": ",(System_String_o *)local_38,(MethodInfo *)0x0);
        Il2CppCodeGenWriteBarrier((void **)&uStack_90,uStack_90);
        (__return_storage_ptr__->fields).PlainText = local_b8;
        *(undefined8 *)&(__return_storage_ptr__->fields).UsePlayerStyle = uStack_b0;
        (__return_storage_ptr__->fields).TimeText = local_a8;
        (__return_storage_ptr__->fields).IdText = pSStack_a0;
        goto label_181e455d2;
      }
    }
    if (pSVar8 == (System_String_o *)0x0) {
      pSVar8 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
  }
  local_50 = 0;
  uStack_58 = 0;
  local_60 = 0;
  pSStack_68 = (System_String_o *)0x0;
  local_70 = (System_String_o *)0x0;
  uStack_78 = 0;
  local_80 = pSVar8;
  Il2CppCodeGenWriteBarrier(&local_80,pSVar8);
  uStack_78 = uStack_78 & 0xffffffffffffff00;
  (__return_storage_ptr__->fields).PlainText = local_80;
  *(ulonglong *)&(__return_storage_ptr__->fields).UsePlayerStyle = uStack_78;
  (__return_storage_ptr__->fields).TimeText = local_70;
  (__return_storage_ptr__->fields).IdText = pSStack_68;
  SVar7.First = 0xffff;
  SVar7.Last = 0xffff;
  local_98._0_4_ = (undefined4)local_60;
  local_98._4_4_ = local_60._4_4_;
  uStack_90._0_4_ = (undefined4)uStack_58;
  uStack_90._4_4_ = uStack_58._4_4_;
  local_88._4_4_ = local_50._4_4_;
label_181e455d2:
  *(undefined4 *)&(__return_storage_ptr__->fields).SenderName = (undefined4)local_98;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->fields).SenderName + 4) = local_98._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->fields).BodyText = (undefined4)uStack_90;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->fields).BodyText + 4) = uStack_90._4_4_;
  *(ulonglong *)&(__return_storage_ptr__->fields).SenderID = CONCAT44(local_88._4_4_,SVar7);
  return __return_storage_ptr__;
}


// GameManagers.ChatManager$$GetTimestampPrefix
// il2cpp: System_String_o* GameManagers_ChatManager__GetTimestampPrefix (System_DateTime_o timestamp, bool isSuggestion, const MethodInfo* method);
// 0x181e46040

System_String_o *
GameManagers_ChatManager__GetTimestampPrefix(System_DateTime_o timestamp,bool isSuggestion,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  System_Text_StringBuilder_o *pSVar3;
  System_String_o *pSVar4;
  System_DateTime_Fields local_res8 [3];
  int32_t local_res20 [2];
  System_DateTime_Fields local_18 [2];
  
  local_res8[0] = timestamp.fields._dateData;
  if (Il2CppMethodInitialized_184344e37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"] ");
    il2cpp_codegen_initialize_runtime_metadata(&"D2");
    Il2CppMethodInitialized_184344e37 = '\x01';
  }
  local_18[0]._dateData = 0;
  local_res20[0] = 0;
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).ShowChatTimestamp, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar2->fields)._value == false) {
      isSuggestion = true;
    }
    if (isSuggestion != false) {
      return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar3 = TypeInfo_GameManagers_ChatManager->static_fields->TimeBuilder;
    if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Clear(pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
      }
      local_18[0]._dateData =
           (uint64_t)System_DateTime__ToLocalTime((System_DateTime_o *)local_res8,(MethodInfo *)0x0);
      pSVar3 = TypeInfo_GameManagers_ChatManager->static_fields->TimeBuilder;
      if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
        pSVar3 = System_Text_StringBuilder__Append_197e090(pSVar3,0x5b,(MethodInfo *)0x0);
        local_res20[0] = System_DateTime__get_Hour((System_DateTime_o *)local_18,(MethodInfo *)0x0);
        pSVar4 = System_Int32__ToString_1b299a0(local_res20,"D2",(MethodInfo *)0x0);
        if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
          pSVar3 = System_Text_StringBuilder__Append_197dca0(pSVar3,pSVar4,(MethodInfo *)0x0);
          if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
            pSVar3 = System_Text_StringBuilder__Append_197e090(pSVar3,0x3a,(MethodInfo *)0x0);
            local_res20[0] = System_DateTime__get_Minute((System_DateTime_o *)local_18,(MethodInfo *)0x0);
            pSVar4 = System_Int32__ToString_1b299a0(local_res20,"D2",(MethodInfo *)0x0);
            if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
              pSVar3 = System_Text_StringBuilder__Append_197dca0(pSVar3,pSVar4,(MethodInfo *)0x0);
              if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__Append_197dca0(pSVar3,"] ",(MethodInfo *)0x0);
                pSVar3 = TypeInfo_GameManagers_ChatManager->static_fields->TimeBuilder;
                if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
                  pSVar4 = (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                                     (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
                  pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,3,false,(MethodInfo *)0x0);
                  return pSVar4;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$AddFeed
// il2cpp: void GameManagers_ChatManager__AddFeed (System_String_o* line, const MethodInfo* method);
// 0x181e424a0

void GameManagers_ChatManager__AddFeed(System_String_o *line,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  bool bVar3;
  int32_t iVar4;
  UI_FeedPanel_o *__this;
  System_String_o *pSVar5;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344e38 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar3 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this = GameManagers_ChatManager__GetFeedPanel((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    local_28[0].hasValue = false;
    local_28[0]._1_7_ = 0;
    local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
    GameManagers_ChatManager__AddLine
              (line,0,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false,(MethodInfo *)0x0)
    ;
    return;
  }
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  pSVar5 = Anticheat_ChatFilter__FilterSizeTag(line,(MethodInfo *)0x0);
  pSVar5 = Anticheat_ChatFilter__FilterBadWords(pSVar5,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  if (TypeInfo_GameManagers_ChatManager->static_fields->FeedLines !=
      (System_Collections_Generic_List_string__o *)0x0) {
    il2cpp_runtime_helper_180012890();
    pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->FeedLines;
    if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      iVar4 = GameManagers_ChatManager__get_MaxLines((MethodInfo *)0x0);
      if (iVar4 < iVar1) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->FeedLines;
        if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e426f0;
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar2,0,
                   (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_string_RemoveAt);
      }
      if (__this != (UI_FeedPanel_o *)0x0) {
        UI_FeedPanel__AddLine(__this,pSVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_181e426f0:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$IsTalking
// il2cpp: void GameManagers_ChatManager__IsTalking (Photon_Realtime_Player_o* player, bool isSpeaking, const MethodInfo* method);
// 0x181e4b660
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4b7a5: mov rbx, qword ptr [rsp + 0x30]

void GameManagers_ChatManager__IsTalking(Photon_Realtime_Player_o *player,bool isSpeaking,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  UI_ColorPickPopup_o *__this;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184344e39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344e39 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar3 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    if (Il2CppMethodInitialized_184344e47 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      Il2CppMethodInitialized_184344e47 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar2 == (UI_BaseMenu_o *)0x0) {
label_181e4b7c9:
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
    __this = (*(uint64_t *)((char *)pUVar2 + 0xe0));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      if (__this == (UI_ColorPickPopup_o *)0x0) goto label_181e4b7c9;
      if (isSpeaking) {
        UI_VoiceChatPanel__AddPlayer((UI_VoiceChatPanel_o *)__this,player,(MethodInfo *)0x0);
        return;
      }
      UI_VoiceChatPanel__RemovePlayer((UI_VoiceChatPanel_o *)__this,player,(MethodInfo *)0x0);
    }
  }
  return;
}


// GameManagers.ChatManager$$LoadTheme
// il2cpp: void GameManagers_ChatManager__LoadTheme (const MethodInfo* method);
// 0x181e4bb90
// eh: try 0x181e4bd37..0x181e4bf0b -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4bebe: mov rdx, qword ptr [rip + 0x222cd6b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatTextColor_Dispose
// asm:   0x181e4bec5: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181e4beca: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e4becf: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e4bed4: test rcx, rcx
// asm:   0x181e4bed7: jne 0x181e4bf0b
// asm:   0x181e4bf0b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void GameManagers_ChatManager__LoadTheme(MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  System_Collections_Generic_Dictionary_ChatTextColor__string__o *pSVar4;
  uint key;
  bool bVar5;
  System_Collections_Generic_List_T__o *__this;
  System_String_o *pSVar6;
  UnityEngine_Color_o *pUVar7;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  UnityEngine_Color_o local_b0;
  undefined1 local_a0 [8];
  uint64_t uStack_98;
  Il2CppObject *local_90;
  undefined1 local_88 [16];
  uint local_78;
  
  if (Il2CppMethodInitialized_184344e3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatTextColor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ChatTextColor_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ChatTextColor_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatTextColor_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatTextColor_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ChatTextColor_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatTextColor_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumToList_ChatTextColor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"{0:X2}{1:X2}{2:X2}");
    Il2CppMethodInitialized_184344e3a = '\x01';
  }
  local_a0 = (undefined1  [8])0x0;
  uStack_98 = 0;
  local_90 = (Il2CppObject *)0x0;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->ColorTags;
  if (pSVar4 != (System_Collections_Generic_Dictionary_ChatTextColor__string__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
               (MethodInfo_13BF1C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_ChatTextColor_string_Clear);
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    __this = Utility_Util__EnumToList_Int32Enum_
                       ((MethodInfo_869C70 *)MethodInfo_Utility_Util_EnumToList_ChatTextColor);
    if (__this != (System_Collections_Generic_List_T__o *)0x0) {
      System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_88,
                 (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this,
                 (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_ChatTextColor_GetEnumerator);
      local_a0 = (undefined1  [8])local_88._0_8_;
      uStack_98 = local_88._8_8_;
      local_90 = (Il2CppObject *)(ulonglong)local_78;
      while( true ) {
        bVar5 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,
                           (MethodInfo_1530180 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_ChatTextColor_MoveNext);
        if (!bVar5) {
          System_Configuration_ConfigurationCollectionAttribute___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a0,
                     MethodInfo_System_Collections_Generic_List_Enumerator_ChatTextColor_Dispose);
          return;
        }
        key = (uint)local_90;
        local_88._0_8_ = TypeInfo_GameManagers_ChatTextColor;
        local_88._8_8_ = &g_data_ffffffffffffffff;
        local_78 = (uint)local_90;
        pSVar6 = System_Enum__ToString((System_Enum_o *)local_88,(MethodInfo *)0x0);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar7 = UI_UIManager__GetThemeColor
                           (&local_b0,"ChatPanel","TextColor",pSVar6,"DefaultPanel"
                            ,(MethodInfo *)0x0);
        fVar1 = (pUVar7->fields).r;
        fVar2 = (pUVar7->fields).g;
        fVar3 = (pUVar7->fields).b;
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->ColorTags;
        local_res10[0] = (int)(fVar1 * 255.0);
        arg0 = il2cpp_value_box(g_data_184354e08,local_res10);
        local_res18[0] = (int)(fVar2 * 255.0);
        arg1 = il2cpp_value_box(g_data_184354e08,local_res18);
        local_res20[0] = (int)(fVar3 * 255.0);
        arg2 = il2cpp_value_box(g_data_184354e08,local_res20);
        pSVar6 = System_String__Format_196d050("{0:X2}{1:X2}{2:X2}",arg0,arg1,arg2,(MethodInfo *)0x0);
        if (pSVar4 == (System_Collections_Generic_Dictionary_ChatTextColor__string__o *)0x0) break;
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,key,(Il2CppObject *)pSVar6,
                   (MethodInfo_1443C70 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ChatTextColor_string_Add);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$HandleInput
// il2cpp: void GameManagers_ChatManager__HandleInput (System_String_o* input, const MethodInfo* method);
// 0x181e46960

void GameManagers_ChatManager__HandleInput(System_String_o *input,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar1;
  Il2CppObject *pIVar2;
  char *pcVar3;
  System_String_o *pSVar4;
  System_Object_array *parameters;
  Il2CppObject *pIVar5;
  System_String_array *args;
  System_DateTime_Fields local_res8;
  int64_t local_res18;
  
  if (Il2CppMethodInitialized_184344e3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_184344e3b = '\x01';
  }
  bVar1 = System_String__op_Equality
                    (input,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pIVar2 = CustomLogic_CustomLogicEvaluator__OnChatInput(__this,input,(MethodInfo *)0x0);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar5 = (Il2CppObject *)0x0;
      if (pIVar2->klass == g_data_184354de8) {
        pIVar5 = pIVar2;
      }
      if (pIVar5 != (Il2CppObject *)0x0) {
        if ((pIVar2->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pcVar3 = il2cpp_object_unbox(pIVar2);
        if (*pcVar3 == '\0') {
          return;
        }
      }
    }
    if (input != (System_String_o *)0x0) {
      bVar1 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
      if (bVar1) {
        if ((input->fields)._stringLength != 1) {
          pSVar4 = System_String__Substring(input,1,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          args = GameManagers_ChatManager__ParseCommandArgs(pSVar4,(MethodInfo *)0x0);
          if (args == (System_String_array *)0x0) goto label_181e46c5a;
          if (args->max_length != 0) {
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__HandleCommand(args,(MethodInfo *)0x0);
            return;
          }
        }
        return;
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar4 = GameManagers_ChatManager__ProcessMentions(input,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184344e28 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
        il2cpp_codegen_initialize_runtime_metadata(&"PlayerChatRPC");
        Il2CppMethodInitialized_184344e28 = '\x01';
      }
      local_res8._dateData = 0;
      __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      if (parameters == (System_Object_array *)0x0) {
label_181e46c8c:
        ThrowNullReferenceException();
      }
      if ((pSVar4 != (System_String_o *)0x0) &&
         (pIVar2 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pSVar4,(((parameters->obj).klass)->_1).element_class),
         pIVar2 == (Il2CppObject *)0x0)) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)pSVar4;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,pSVar4);
        if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
        }
        local_res8._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
        local_res18 = System_DateTime__get_Ticks((System_DateTime_o *)&local_res8,(MethodInfo *)0x0);
        pIVar2 = il2cpp_value_box(g_data_184354e28,&local_res18);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar2;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar2);
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_00,"PlayerChatRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
          goto label_181e46c8c;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_181e46c5a:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$ProcessMentions
// il2cpp: System_String_o* GameManagers_ChatManager__ProcessMentions (System_String_o* message, const MethodInfo* method);
// 0x181e4d500
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4da16: mov rax, rbx
// asm:   0x181e4da19: jmp 0x181e4d9fc

System_String_o * GameManagers_ChatManager__ProcessMentions(System_String_o *message,MethodInfo *method)

{
  System_Runtime_Serialization_ObjectHolder_o *__this;
  bool bVar1;
  int32_t startIndex;
  int32_t iVar2;
  GameManagers_ChatManager___c__DisplayClass114_0_o *object;
  System_String_o *pSVar3;
  Photon_Realtime_Player_array *source;
  System_Func_Player__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_01;
  Photon_Realtime_Player_o *player;
  System_String_o *value;
  System_Text_StringBuilder_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344e3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_Player);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_Player);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Player_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_ChatManager_c__DisplayClass114_0_ProcessMentions_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_c__DisplayClass114_0);
    il2cpp_codegen_initialize_runtime_metadata(&"@");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e3c = '\x01';
  }
  if (message != (System_String_o *)0x0) {
    startIndex = System_String__IndexOf(message,0x40,(MethodInfo *)0x0);
    if (startIndex == -1) {
      return message;
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
    if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Clear(pSVar4,(MethodInfo *)0x0);
      pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
      if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_197dca0(pSVar4,message,(MethodInfo *)0x0);
        do {
          object = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c__DisplayClass114_0);
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
          if ((pSVar4 == (System_Text_StringBuilder_o *)0x0) ||
             (pSVar3 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                                 (pSVar4,(pSVar4->klass->vtable)._3_ToString.method),
             pSVar3 == (System_String_o *)0x0)) goto label_181e4da1b;
          iVar2 = System_String__IndexOf_196de40(pSVar3,0x20,startIndex,(MethodInfo *)0x0);
          if (iVar2 == -1) {
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            __this = (System_Runtime_Serialization_ObjectHolder_o *)
                     TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
            if (__this == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_181e4da1b;
            iVar2 = System_Runtime_Serialization_ObjectHolder__get_TotalDependentObjects
                              (__this,(MethodInfo *)0x0);
          }
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
          if ((pSVar4 == (System_Text_StringBuilder_o *)0x0) ||
             (pSVar3 = System_Text_StringBuilder__ToString_1980a80
                                 (pSVar4,startIndex + 1,(iVar2 - startIndex) + -1,(MethodInfo *)0x0),
             object == (GameManagers_ChatManager___c__DisplayClass114_0_o *)0x0)) goto label_181e4da1b;
          (object->fields).mention = pSVar3;
          Il2CppCodeGenWriteBarrier(&(object->fields).mention,pSVar3);
          bVar1 = System_String__IsNullOrWhiteSpace((object->fields).mention,(MethodInfo *)0x0);
          if (bVar1) {
label_181e4d947:
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
            if ((pSVar4 == (System_Text_StringBuilder_o *)0x0) ||
               (pSVar3 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                                   (pSVar4,(pSVar4->klass->vtable)._3_ToString.method),
               pSVar3 == (System_String_o *)0x0)) goto label_181e4da1b;
            iVar2 = 1;
          }
          else {
            if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
            }
            source = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
            __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Player_bool);
            System_Func_object__bool____ctor
                      ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object,
                       (intptr_t)MethodInfo_GameManagers_ChatManager_c__DisplayClass114_0_ProcessMentions_b__0
                       ,(MethodInfo_B61EB0 *)0x0);
            source_00 = System_Linq_Enumerable__Where_float_
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                   (System_Func_TSource__bool__o *)__this_00,
                                   (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_Player);
            __this_01 = System_Linq_Enumerable__ToList_object_
                                  (source_00,
                                   (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_Player);
            if (__this_01 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_181e4da1b;
            if ((__this_01->fields)._size != 1) goto label_181e4d947;
            player = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)__this_01,0,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_Player_get_Item);
            if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
            }
            pSVar3 = PhotonExtensions__GetStringProperty
                               (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                                "",(MethodInfo *)0x0);
            if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
            }
            pSVar3 = Anticheat_ChatFilter__FilterSizeTag(pSVar3,(MethodInfo *)0x0);
            pSVar3 = System_String__Concat_1969e50("@",pSVar3,(MethodInfo *)0x0);
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            value = GameManagers_ChatManager__GetColorString(pSVar3,2,false,(MethodInfo *)0x0);
            pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
            if ((pSVar4 == (System_Text_StringBuilder_o *)0x0) ||
               (pSVar4 = System_Text_StringBuilder__Remove
                                   (pSVar4,startIndex,iVar2 - startIndex,(MethodInfo *)0x0),
               pSVar4 == (System_Text_StringBuilder_o *)0x0)) goto label_181e4da1b;
            System_Text_StringBuilder__Insert(pSVar4,startIndex,value,(MethodInfo *)0x0);
            pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
            if ((pSVar4 == (System_Text_StringBuilder_o *)0x0) ||
               ((pSVar3 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                                    (pSVar4,(pSVar4->klass->vtable)._3_ToString.method),
                value == (System_String_o *)0x0 || (pSVar3 == (System_String_o *)0x0)))) goto label_181e4da1b;
            iVar2 = (value->fields)._stringLength;
          }
          startIndex = System_String__IndexOf_196de40(pSVar3,0x40,iVar2 + startIndex,(MethodInfo *)0x0);
        } while (startIndex != -1);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
        if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
          pSVar3 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                             (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
          return pSVar3;
        }
      }
    }
  }
label_181e4da1b:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$FormatChatMessage
// il2cpp: System_String_o* GameManagers_ChatManager__FormatChatMessage (System_String_o* message, const MethodInfo* method);
// 0x180611510

System_String_o*
GameManagers_ChatManager__FormatChatMessage(System_String_o* message, MethodInfo* method)

{
  return (uint64_t *)__this;
}


// GameManagers.ChatManager$$UpdateChatPanel
// il2cpp: void GameManagers_ChatManager__UpdateChatPanel (const MethodInfo* method);
// 0x181e52710
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e527be: mov rbx, qword ptr [rsp + 0x20]

void GameManagers_ChatManager__UpdateChatPanel(MethodInfo *method)

{
  bool bVar1;
  UI_ChatPanel_o *__this;
  
  if (Il2CppMethodInitialized_184344e3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344e3d = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar1 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    __this = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this == (UI_ChatPanel_o *)0x0) {
        ThrowNullReferenceException();
      }
      UI_ChatPanel__Sync(__this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// GameManagers.ChatManager$$HandleCommand
// il2cpp: void GameManagers_ChatManager__HandleCommand (System_String_array* args, const MethodInfo* method);
// 0x181e46340

void GameManagers_ChatManager__HandleCommand(System_String_array *args,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Reflection_MethodBase_o *__this_01;
  bool bVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Object_array *pSVar4;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  GameManagers_ChatManager_o *obj;
  Il2CppObject *local_res8;
  System_Nullable_DateTime__Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184344e3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_CLCommandAttribute);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Skip_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&" not found, try /help to see a list of commands.");
    il2cpp_codegen_initialize_runtime_metadata(&"Command ");
    Il2CppMethodInitialized_184344e3e = '\x01';
  }
  local_res8 = (Il2CppObject *)0x0;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  if (args != (System_String_array *)0x0) {
    if ((int)args->max_length == 0) {
label_181e467de:
      ThrowIndexOutOfRangeException();
    }
    if (args->m_Items[0] != (System_String_o *)0x0) {
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
      pSVar3 = System_String__ToLower(args->m_Items[0],(MethodInfo *)0x0);
      if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (__this,(Il2CppObject *)pSVar3,&local_res8,
                           (MethodInfo_14769C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
                          );
        pIVar5 = local_res8;
        if (bVar2) {
          if (local_res8 == (Il2CppObject *)0x0) goto label_181e46798;
          bVar1 = (TypeInfo_GameManagers_ChatManager_CLCommandAttribute->_2).typeHierarchyDepth;
          if (((local_res8->klass->_2).typeHierarchyDepth < bVar1) ||
             ((local_res8->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_GameManagers_ChatManager_CLCommandAttribute)) {
            __this_01 = local_res8[2].monitor;
            if (__this_01 == (System_Reflection_MethodBase_o *)0x0) goto label_181e46798;
            bVar2 = System_Reflection_MethodBase__get_IsStatic(__this_01,(MethodInfo *)0x0);
            if (bVar2) {
              pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
              if (pSVar4 == (System_Object_array *)0x0) goto label_181e46798;
              pIVar5 = il2cpp_vm_Object_IsInst(&args->obj,(((pSVar4->obj).klass)->_1).element_class);
              if (pIVar5 == (Il2CppObject *)0x0) {
                pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
              }
              if ((int)pSVar4->max_length == 0) goto label_181e467de;
              pSVar4->m_Items[0] = &args->obj;
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items,args);
              obj = (GameManagers_ChatManager_o *)0x0;
            }
            else {
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              obj = TypeInfo_GameManagers_ChatManager->static_fields->_instance;
              pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
              if (pSVar4 == (System_Object_array *)0x0) goto label_181e46798;
              pIVar5 = il2cpp_vm_Object_IsInst(&args->obj,(((pSVar4->obj).klass)->_1).element_class);
              if (pIVar5 == (Il2CppObject *)0x0) {
                pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
              }
              if ((int)pSVar4->max_length == 0) goto label_181e467de;
              pSVar4->m_Items[0] = &args->obj;
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items,args);
            }
            System_Reflection_MethodBase__Invoke(__this_01,(Il2CppObject *)obj,pSVar4,(MethodInfo *)0x0);
          }
          else {
            if ((int)args->max_length < 2) {
              pSVar4 = (System_Object_array *)
                       System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                                 ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_string);
            }
            else {
              source = System_Linq_Enumerable__Skip_object_
                                 ((System_Collections_Generic_IEnumerable_TSource__o *)args,1,
                                  (MethodInfo_6C73A0 *)MethodInfo_System_Linq_Enumerable_Skip_string);
              pSVar4 = System_Linq_Enumerable__ToArray_object_
                                 (source,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string
                                 );
            }
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
            if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              userMethod = pIVar5[4].monitor;
              parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
              if ((int)args->max_length != 0) {
                if (parameterValues == (System_Object_array *)0x0) goto label_181e46798;
                pSVar3 = args->m_Items[0];
                if ((pSVar3 != (System_String_o *)0x0) &&
                   (pIVar5 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)pSVar3,
                                        (((parameterValues->obj).klass)->_1).element_class),
                   pIVar5 == (Il2CppObject *)0x0)) {
                  pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                }
                if ((int)parameterValues->max_length != 0) {
                  parameterValues->m_Items[0] = (Il2CppObject *)pSVar3;
                  Il2CppCodeGenWriteBarrier(parameterValues->m_Items,pSVar3);
                  __this_02 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
                  CustomLogic_CustomLogicListBuiltin___ctor_1ed1720(__this_02,pSVar4,(MethodInfo *)0x0);
                  if ((__this_02 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
                     (pIVar5 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)__this_02,
                                          (((parameterValues->obj).klass)->_1).element_class),
                     pIVar5 == (Il2CppObject *)0x0)) {
                    pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                  }
                  if (1 < (uint)parameterValues->max_length) {
                    parameterValues->m_Items[1] = (Il2CppObject *)__this_02;
                    Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1,__this_02);
                    CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                              (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              goto label_181e467de;
            }
          }
        }
        else {
          if ((int)args->max_length == 0) goto label_181e467de;
          pSVar3 = System_String__Concat_1969b70
                             ("Command ",args->m_Items[0]," not found, try /help to see a list of commands.",(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          local_38[0].hasValue = false;
          local_38[0]._1_7_ = 0;
          local_38[0].value.fields._dateData = (System_DateTime_Fields)0;
          GameManagers_ChatManager__AddLine
                    (pSVar3,4,false,(System_Nullable_DateTime__o *)local_38,-1,false,false,-1,false,
                     (MethodInfo *)0x0);
        }
        return;
      }
    }
  }
label_181e46798:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$MutePlayer
// il2cpp: void GameManagers_ChatManager__MutePlayer (Photon_Realtime_Player_o* player, System_String_o* muteType, const MethodInfo* method);
// 0x181e4c130

void GameManagers_ChatManager__MutePlayer
               (Photon_Realtime_Player_o *player,System_String_o *muteType,MethodInfo *method)

{
  bool bVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_HashSet_int__o *__this;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&").");
    il2cpp_codegen_initialize_runtime_metadata(&"Emote");
    il2cpp_codegen_initialize_runtime_metadata(&"Voice");
    il2cpp_codegen_initialize_runtime_metadata(&" has been muted (");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e3f = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (player == pPVar2) {
    return;
  }
  bVar1 = System_String__op_Equality(muteType,"Emote",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    if (player == (Photon_Realtime_Player_o *)0x0) goto label_181e4c3cf;
    __this = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote;
  }
  else {
    bVar1 = System_String__op_Equality(muteType,"Text",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      if (player == (Photon_Realtime_Player_o *)0x0) goto label_181e4c3cf;
      __this = TypeInfo_GameManagers_InGameManager->static_fields->MuteText;
    }
    else {
      bVar1 = System_String__op_Equality(muteType,"Voice",(MethodInfo *)0x0);
      if (!bVar1) goto label_181e4c2fc;
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      if (player == (Photon_Realtime_Player_o *)0x0) goto label_181e4c3cf;
      __this = TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat;
    }
  }
  if (__this != (System_Collections_Generic_HashSet_int__o *)0x0) {
    System_Collections_Generic_HashSet_int___Add
              (__this,(player->fields).actorNumber,
               (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
label_181e4c2fc:
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar3 = PhotonExtensions__GetStringProperty
                       (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,""
                        ,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969590
                       (pSVar3," has been muted (",muteType,").",(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    local_28[0].hasValue = false;
    local_28[0]._1_7_ = 0;
    local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
    GameManagers_ChatManager__AddLine
              (pSVar3,3,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false,
               (MethodInfo *)0x0);
    return;
  }
label_181e4c3cf:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$UnmutePlayer
// il2cpp: void GameManagers_ChatManager__UnmutePlayer (Photon_Realtime_Player_o* player, System_String_o* muteType, const MethodInfo* method);
// 0x181e52130

void GameManagers_ChatManager__UnmutePlayer
               (Photon_Realtime_Player_o *player,System_String_o *muteType,MethodInfo *method)

{
  bool bVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&").");
    il2cpp_codegen_initialize_runtime_metadata(&" has been unmuted (");
    il2cpp_codegen_initialize_runtime_metadata(&"Emote");
    il2cpp_codegen_initialize_runtime_metadata(&"Voice");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e40 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (player == pPVar2) {
    return;
  }
  bVar1 = System_String__op_Equality(muteType,"Emote",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    if ((player == (Photon_Realtime_Player_o *)0x0) ||
       (pSVar4 = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote,
       pSVar4 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto label_181e524af;
    bVar1 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)pSVar4,(player->fields).actorNumber,
                       (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (!bVar1) goto label_181e5229d;
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pSVar4 = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote;
  }
  else {
label_181e5229d:
    bVar1 = System_String__op_Equality(muteType,"Text",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      if ((player == (Photon_Realtime_Player_o *)0x0) ||
         (pSVar4 = TypeInfo_GameManagers_InGameManager->static_fields->MuteText,
         pSVar4 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto label_181e524af;
      bVar1 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        ((System_Collections_Generic_HashSet_T__o *)pSVar4,(player->fields).actorNumber,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar1) {
        if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        }
        pSVar4 = TypeInfo_GameManagers_InGameManager->static_fields->MuteText;
        goto label_181e523c4;
      }
    }
    bVar1 = System_String__op_Equality(muteType,"Voice",(MethodInfo *)0x0);
    if (!bVar1) goto label_181e523dc;
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    if ((player == (Photon_Realtime_Player_o *)0x0) ||
       (pSVar4 = TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat,
       pSVar4 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto label_181e524af;
    bVar1 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)pSVar4,(player->fields).actorNumber,
                       (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (!bVar1) goto label_181e523dc;
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pSVar4 = TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat;
  }
label_181e523c4:
  if (pSVar4 == (System_Collections_Generic_HashSet_int__o *)0x0) {
label_181e524af:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_Int32Enum___Remove
            ((System_Collections_Generic_HashSet_T__o *)pSVar4,(player->fields).actorNumber,
             (MethodInfo_17666A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
label_181e523dc:
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar3 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                      (MethodInfo *)0x0);
  pSVar3 = System_String__Concat_1969590
                     (pSVar3," has been unmuted (",muteType,").",(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  local_28[0].hasValue = false;
  local_28[0]._1_7_ = 0;
  local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
  GameManagers_ChatManager__AddLine
            (pSVar3,3,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false,(MethodInfo *)0x0)
  ;
  return;
}


// GameManagers.ChatManager$$SetPlayerVolume
// il2cpp: void GameManagers_ChatManager__SetPlayerVolume (Photon_Realtime_Player_o* player, float volume, const MethodInfo* method);
// 0x181e513c0

void GameManagers_ChatManager__SetPlayerVolume
               (Photon_Realtime_Player_o *player,float volume,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__float__o *pSVar1;
  bool bVar2;
  Photon_Realtime_Player_o *pPVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184344e41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344e41 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (player == pPVar3) {
    return;
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar1 = TypeInfo_GameManagers_InGameManager->static_fields->VoiceChatVolumeMultiplier,
     pSVar1 != (System_Collections_Generic_Dictionary_int__float__o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                      (pSVar1,(player->fields).actorNumber,
                       (MethodInfo_14070E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_float_ContainsKey);
    if (bVar2) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      pSVar1 = TypeInfo_GameManagers_InGameManager->static_fields->VoiceChatVolumeMultiplier;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_181e51522;
      fVar4 = System_Collections_Generic_Dictionary_int__float___get_Item
                        (pSVar1,(player->fields).actorNumber,
                         (MethodInfo_1423460 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_float_get_Item);
      if (fVar4 == volume) {
        return;
      }
    }
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pSVar1 = TypeInfo_GameManagers_InGameManager->static_fields->VoiceChatVolumeMultiplier;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
      System_Collections_Generic_Dictionary_int__float___set_Item
                (pSVar1,(player->fields).actorNumber,volume,
                 (MethodInfo_1423540 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_set_Item);
      return;
    }
  }
label_181e51522:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$GetPlayer
// il2cpp: Photon_Realtime_Player_o* GameManagers_ChatManager__GetPlayer (System_String_o* stringID, const MethodInfo* method);
// 0x181e45da0

Photon_Realtime_Player_o * GameManagers_ChatManager__GetPlayer(System_String_o *stringID,MethodInfo *method)

{
  bool bVar1;
  Photon_Realtime_Room_o *pPVar2;
  Photon_Realtime_Player_o *pPVar3;
  int32_t local_res8 [8];
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid player ID.");
    Il2CppMethodInitialized_184344e42 = '\x01';
  }
  local_res8[0] = -1;
  bVar1 = System_Int32__TryParse(stringID,local_res8,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar2 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (pPVar2 != (Photon_Realtime_Room_o *)0x0) {
      pPVar3 = (*(pPVar2->klass->vtable)._10_GetPlayer.methodPtr)
                         (pPVar2,local_res8[0],true,(pPVar2->klass->vtable)._10_GetPlayer.method);
      if (pPVar3 == (Photon_Realtime_Player_o *)0x0) goto label_181e45e9b;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar2 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if (pPVar2 != (Photon_Realtime_Room_o *)0x0) {
        pPVar3 = (*(pPVar2->klass->vtable)._10_GetPlayer.methodPtr)
                           (pPVar2,local_res8[0],true,(pPVar2->klass->vtable)._10_GetPlayer.method);
        return pPVar3;
      }
    }
    ThrowNullReferenceException();
  }
label_181e45e9b:
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  local_28[0].hasValue = false;
  local_28[0]._1_7_ = 0;
  local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
  GameManagers_ChatManager__AddLine
            ("Invalid player ID.",4,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false,
             (MethodInfo *)0x0);
  return (Photon_Realtime_Player_o *)0x0;
}


// GameManagers.ChatManager$$GetPlayer
// il2cpp: Photon_Realtime_Player_o* GameManagers_ChatManager__GetPlayer (System_String_array* args, const MethodInfo* method);
// 0x181e45c60

Photon_Realtime_Player_o *
GameManagers_ChatManager__GetPlayer_1e45c60(System_String_array *args,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Photon_Realtime_Room_o *pPVar3;
  Photon_Realtime_Player_o *pPVar4;
  int32_t local_res8 [8];
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid player ID.");
    Il2CppMethodInitialized_184344e43 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_String_array *)0x0) {
    uVar1 = (uint)args->max_length;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) {
        ThrowIndexOutOfRangeException();
      }
      bVar2 = System_Int32__TryParse(args->m_Items[1],local_res8,(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        pPVar3 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        if (pPVar3 == (Photon_Realtime_Room_o *)0x0) goto label_181e45d8e;
        pPVar4 = (*(pPVar3->klass->vtable)._10_GetPlayer.methodPtr)
                           (pPVar3,local_res8[0],true,(pPVar3->klass->vtable)._10_GetPlayer.method);
        if (pPVar4 != (Photon_Realtime_Player_o *)0x0) {
          return pPVar4;
        }
      }
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    local_28[0].hasValue = false;
    local_28[0]._1_7_ = 0;
    local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
    GameManagers_ChatManager__AddLine
              ("Invalid player ID.",4,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false,
               (MethodInfo *)0x0);
    return (Photon_Realtime_Player_o *)0x0;
  }
label_181e45d8e:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$CheckMC
// il2cpp: bool GameManagers_ChatManager__CheckMC (const MethodInfo* method);
// 0x181e43b70

bool GameManagers_ChatManager__CheckMC(MethodInfo *method)

{
  bool bVar1;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Must be master client to use that command.");
    Il2CppMethodInitialized_184344e44 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    local_28[0].hasValue = false;
    local_28[0]._1_7_ = 0;
    local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
    GameManagers_ChatManager__AddLine
              ("Must be master client to use that command.",4,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false,
               (MethodInfo *)0x0);
    return false;
  }
  return true;
}


// GameManagers.ChatManager$$GetChatPanel
// il2cpp: UI_ChatPanel_o* GameManagers_ChatManager__GetChatPanel (const MethodInfo* method);
// 0x181e44c80

UI_ChatPanel_o * GameManagers_ChatManager__GetChatPanel(MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184344e45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184344e45 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar3 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar2 != (UI_BaseMenu_o *)0x0) {
        bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
        if ((bVar1 <= (pUVar2->klass->_2).typeHierarchyDepth) &&
           ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu))
        {
          return (UI_ChatPanel_o *)(*(uint64_t *)((char *)pUVar2 + 0xd0));
        }
      }
    }
  }
  return (UI_ChatPanel_o *)0x0;
}


// GameManagers.ChatManager$$GetFeedPanel
// il2cpp: UI_FeedPanel_o* GameManagers_ChatManager__GetFeedPanel (const MethodInfo* method);
// 0x181e45610

UI_FeedPanel_o * GameManagers_ChatManager__GetFeedPanel(MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184344e46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184344e46 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar3 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar2 != (UI_BaseMenu_o *)0x0) {
        bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
        if ((bVar1 <= (pUVar2->klass->_2).typeHierarchyDepth) &&
           ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu))
        {
          return (UI_FeedPanel_o *)(*(uint64_t *)((char *)pUVar2 + 0xd8));
        }
      }
    }
  }
  return (UI_FeedPanel_o *)0x0;
}


// GameManagers.ChatManager$$GetVoiceChatPanel
// il2cpp: UI_VoiceChatPanel_o* GameManagers_ChatManager__GetVoiceChatPanel (const MethodInfo* method);
// 0x181e46290

UI_VoiceChatPanel_o * GameManagers_ChatManager__GetVoiceChatPanel(MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  
  if (Il2CppMethodInitialized_184344e47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184344e47 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar2 != (UI_BaseMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar2->klass->_2).typeHierarchyDepth) &&
       ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      return (UI_VoiceChatPanel_o *)(*(uint64_t *)((char *)pUVar2 + 0xe0));
    }
    il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UI_InGameMenu);
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$GetKDRPanel
// il2cpp: UI_KDRPanel_o* GameManagers_ChatManager__GetKDRPanel (const MethodInfo* method);
// 0x181e459a0

UI_KDRPanel_o * GameManagers_ChatManager__GetKDRPanel(MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  
  if (Il2CppMethodInitialized_184344e48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184344e48 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar2 != (UI_BaseMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar2->klass->_2).typeHierarchyDepth) &&
       ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      return (UI_KDRPanel_o *)(*(uint64_t *)((char *)pUVar2 + 0xf8));
    }
    il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UI_InGameMenu);
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$GetIDString
// il2cpp: System_String_o* GameManagers_ChatManager__GetIDString (int32_t id, bool includeMC, bool myPlayer, const MethodInfo* method);
// 0x181e458b0

System_String_o *
GameManagers_ChatManager__GetIDString(int32_t id,bool includeMC,bool myPlayer,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t color;
  int32_t local_res8 [2];
  
  local_res8[0] = id;
  if (Il2CppMethodInitialized_184344e49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"] ");
    il2cpp_codegen_initialize_runtime_metadata(&"[M]");
    il2cpp_codegen_initialize_runtime_metadata(&"[");
    Il2CppMethodInitialized_184344e49 = '\x01';
  }
  pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969b70("[",pSVar1,"] ",(MethodInfo *)0x0)
  ;
  if (includeMC) {
    pSVar1 = System_String__Concat_1969e50("[M]",pSVar1,(MethodInfo *)0x0);
  }
  if (myPlayer) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    color = 2;
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    color = 1;
  }
  pSVar1 = GameManagers_ChatManager__GetColorString(pSVar1,color,false,(MethodInfo *)0x0);
  return pSVar1;
}


// GameManagers.ChatManager$$GetColorString
// il2cpp: System_String_o* GameManagers_ChatManager__GetColorString (System_String_o* str, int32_t color, bool bold, const MethodInfo* method);
// 0x181e44db0

System_String_o *
GameManagers_ChatManager__GetColorString(System_String_o *str,int32_t color,bool bold,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_ChatTextColor__string__o *__this;
  System_String_array *values;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344e4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ChatTextColor_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"<b>");
    il2cpp_codegen_initialize_runtime_metadata(&"</b>");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_184344e4a = '\x01';
  }
  if (color == 0) {
    return str;
  }
  if (bold) {
    str = System_String__Concat_1969b70("<b>",str,"</b>",(MethodInfo *)0x0);
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  pSVar1 = "<color=#";
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "<color=#";
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar1);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      __this = TypeInfo_GameManagers_ChatManager->static_fields->ColorTags;
      if (__this == (System_Collections_Generic_Dictionary_ChatTextColor__string__o *)0x0) goto label_181e44f72;
      pSVar1 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,color,
                          (MethodInfo_1454ED0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_ChatTextColor_string_get_Item);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar1;
        Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar1);
        pSVar1 = ">";
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ">";
          Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar1);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = str;
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,str);
            pSVar1 = "</color>";
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = "</color>";
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar1);
              pSVar1 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
              return pSVar1;
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181e44f72:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$Update
// il2cpp: void GameManagers_ChatManager__Update (GameManagers_ChatManager_o* __this, const MethodInfo* method);
// 0x181e52910
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e529ee: mov rbx, qword ptr [rsp + 0x20]

void GameManagers_ChatManager__Update(GameManagers_ChatManager_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this_00;
  bool bVar3;
  UI_ChatPanel_o *__this_01;
  
  if (Il2CppMethodInitialized_184344e4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184344e4b = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar3 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
  if ((!bVar3) || (bVar3 = UI_InGameMenu__InMenu((MethodInfo *)0x0), bVar3)) {
    return;
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this_01 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 != (Settings_InputSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_GeneralInputSettings_o *)0x0)) &&
     (__this_00 = (pSVar2->fields).Chat, __this_00 != (Settings_KeybindSetting_o *)0x0)) {
    bVar3 = Settings_KeybindSetting__GetKeyDown(__this_00,false,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    if (__this_01 != (UI_ChatPanel_o *)0x0) {
      if ((__this_01->fields).IgnoreNextActivation == false) {
        UI_ChatPanel__Activate(__this_01,(MethodInfo *)0x0);
        return;
      }
      (__this_01->fields).IgnoreNextActivation = false;
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$HandleTyping
// il2cpp: void GameManagers_ChatManager__HandleTyping (System_String_o* input, const MethodInfo* method);
// 0x181e4a300
// eh: try 0x181e4a34a..0x181e4a36a -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4a388: mov rcx, qword ptr [rip + 0x2294441]  ; TypeInfo_GameManagers_ChatManager
// asm:   0x181e4a38f: cmp dword ptr [rcx + 0xe4], 0
// asm:   0x181e4a396: jne 0x181e4a39d
// asm:   0x181e4a398: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181e4a39d: xor ecx, ecx
// asm:   0x181e4a39f: call 0x181e44a50  ; GameManagers_ChatManager__EndLineBatch()
// asm:   0x181e4a3a4: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e4a3a9: test rcx, rcx
// asm:   0x181e4a3ac: jne 0x181e4a3b4
// asm:   0x181e4a3b4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void GameManagers_ChatManager__HandleTyping(System_String_o *input,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344e4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_184344e4c = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__BeginLineBatch((MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__HandleTypingInternal(input,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__EndLineBatch((MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$HandleTypingInternal
// il2cpp: void GameManagers_ChatManager__HandleTypingInternal (System_String_o* input, const MethodInfo* method);
// 0x181e47440
// eh: try 0x181e47900..0x181e47a60 -> pad 0x18333c990 (+1 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181e47aa7..0x181e47abf -> pad 0x180230320 cleanup
// eh: try 0x181e47c50..0x181e47db0 -> pad 0x18333c9f0 (+1 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181e47df7..0x181e47e0c -> pad 0x180230320 cleanup
// eh: try 0x181e47fb0..0x181e49094 -> pad 0x18333ca50 (+2 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181e490c7..0x181e490df -> pad 0x180230320 cleanup
// eh: try 0x181e49280..0x181e4a0d4 -> pad 0x18333cae0 (+3 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181e4a107..0x181e4a11c -> pad 0x180230320 cleanup
// eh: try 0x181e4a1fb..0x181e4a2ea -> pad 0x18333c9c0 (+7 call sites) catch Il2CppExceptionWrapper
// asm: 241 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4795c: mov rdx, qword ptr [rip + 0x224ffb5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x181e47963: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e47968: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e4796d: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e47972: test rcx, rcx
// asm:   0x181e47975: jne 0x181e4a1f5
// asm:   0x181e4797b: cmp byte ptr [rsp + 0x1f0], 0
// asm:   0x181e47983: jne 0x181e47aac
// asm:   0x181e47989: xor r14d, r14d
// asm:   0x181e4798c: mov rdi, qword ptr [rsp + 0x1e0]
// asm:   0x181e47994: mov rsi, qword ptr [rsp + 0x80]
// asm:   0x181e47a88: mov rdx, qword ptr [rip + 0x224fe89]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x181e47a8f: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e47a94: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e47a99: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e47a9e: test rcx, rcx
// asm:   0x181e47aa1: jne 0x181e4a201
// asm:   0x181e47aa7: jmp 0x181e48154
// asm:   0x181e47c4d: nop dword ptr [rax]
// asm:   0x181e47cac: mov rdx, qword ptr [rip + 0x224fc65]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x181e47cb3: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e47cb8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e47cbd: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e47cc2: test rcx, rcx
// asm:   0x181e47cc5: jne 0x181e4a207
// asm:   0x181e47ccb: cmp byte ptr [rsp + 0x1f0], 0
// asm:   0x181e47cd3: jne 0x181e4a1e2
// asm:   0x181e47cd9: xor r14d, r14d
// asm:   0x181e47cdc: mov rdi, qword ptr [rsp + 0x1e0]
// asm:   0x181e47ce4: mov rsi, qword ptr [rsp + 0x80]
// asm:   0x181e47dd8: mov rdx, qword ptr [rip + 0x224fb39]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x181e47ddf: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e47de4: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e47de9: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e47dee: test rcx, rcx
// asm:   0x181e47df1: jne 0x181e4a213
// asm:   0x181e47df7: jmp 0x181e48154
// asm:   0x181e47faf: nop 
// asm:   0x181e4800c: mov rdx, qword ptr [rip + 0x224f905]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x181e48013: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e48018: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e4801d: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e48022: test rcx, rcx
// asm:   0x181e48025: jne 0x181e4a219
// asm:   0x181e4802b: cmp byte ptr [rsp + 0x1f0], 0
// asm:   0x181e48033: jne 0x181e4a1e2
// asm:   0x181e48039: xor r14d, r14d
// asm:   0x181e4803c: mov rdi, qword ptr [rsp + 0x1e0]
// asm:   0x181e48044: mov rsi, qword ptr [rsp + 0x80]
// asm:   0x181e48135: mov rdx, qword ptr [rip + 0x224f7dc]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x181e4813c: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e48141: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e48146: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e4814b: test rcx, rcx
// asm:   0x181e4814e: jne 0x181e4a225
// asm:   0x181e48154: cmp byte ptr [rsp + 0x1f0], 0
// asm:   0x181e4815c: je 0x181e4a1c6
// asm:   0x181e48162: xor r14d, r14d
// asm:   0x181e48165: mov rdi, qword ptr [rsp + 0x1e0]
// asm:   0x181e4838a: mov rcx, qword ptr [rip + 0x22885df]  ; TypeInfo_GameManagers_ChatManager_SuggestionState
// asm:   0x181e485a1: mov rcx, qword ptr [rip + 0x22883c8]  ; TypeInfo_GameManagers_ChatManager_SuggestionState
// asm:   0x181e4875d: mov rcx, qword ptr [rip + 0x228820c]  ; TypeInfo_GameManagers_ChatManager_SuggestionState
// asm:   0x181e4887b: mov rcx, qword ptr [rip + 0x22880ee]  ; TypeInfo_GameManagers_ChatManager_SuggestionState
// asm:   0x181e48ba3: mov eax, r14d
// asm:   0x181e48faf: nop 
// asm:   0x181e490a8: mov rdx, qword ptr [rip + 0x2247aa1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose
// asm:   0x181e490af: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e490b4: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e490b9: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e490be: test rcx, rcx
// asm:   0x181e490c1: jne 0x181e4a246
// asm:   0x181e490c7: jmp 0x181e499c8
// asm:   0x181e49279: nop dword ptr [rax]
// asm:   0x181e4932f: mov rdx, qword ptr [rip + 0x2276eea]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_ChatManager_CommandAttribute_Dispose
// asm:   0x181e49336: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e4933b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e49340: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e49345: test rcx, rcx
// asm:   0x181e49348: jne 0x181e4a261
// asm:   0x181e4934e: xor r14d, r14d
// asm:   0x181e49351: mov r13, qword ptr [rsp + 0x1f0]
// asm:   0x181e49359: mov r12, r13
// asm:   0x181e49781: mov rdx, qword ptr [rip + 0x2226450]  ; MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_ChatManager_CommandAttribute_Disp
// asm:   0x181e49788: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e4978d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e49792: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e49797: test rcx, rcx
// asm:   0x181e4979a: jne 0x181e4a2b3
// asm:   0x181e497a0: xor r14d, r14d
// asm:   0x181e497a3: mov r13, qword ptr [rsp + 0x1f0]
// asm:   0x181e497ab: mov r12, qword ptr [rsp + 0x80]
// asm:   0x181e4986c: nop dword ptr [rax]
// asm:   0x181e49943: mov rdx, qword ptr [rip + 0x222628e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_ChatManager_CommandAttribute_Disp
// asm:   0x181e4994a: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e4994f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e49954: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e49959: test rcx, rcx
// asm:   0x181e4995c: jne 0x181e4a2c9
// asm:   0x181e49962: xor r14d, r14d
// asm:   0x181e49965: mov rdi, qword ptr [rsp + 0x1e0]
// asm:   0x181e49bfc: mov eax, r14d
// asm:   0x181e49bff: nop 
// asm:   0x181e4a0e8: mov rdx, qword ptr [rip + 0x2246a61]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose
// asm:   0x181e4a0ef: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e4a0f4: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e4a0f9: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e4a0fe: test rcx, rcx
// asm:   0x181e4a101: jne 0x181e4a2ea
// asm:   0x181e4a107: jmp 0x181e499ac
// asm:   0x181e4a1f5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e4a201: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e4a207: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e4a213: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e4a219: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e4a225: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e4a246: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e4a261: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e4a2b3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e4a2c9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e4a2ea: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333c990: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c995: push rbp
// asm:   0x18333c996: sub rsp, 0x50
// asm:   0x18333c99a: mov rbp, rdx
// asm:   0x18333c99d: mov rax, qword ptr [rbp + 0x140]
// asm:   0x18333c9a4: mov rcx, qword ptr [rax]
// asm:   0x18333c9a7: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333c9ab: movabs rax, 0
// asm:   0x18333c9b5: add rsp, 0x50
// asm:   0x18333c9b9: pop rbp
// asm:   0x18333c9ba: ret 
// asm:   0x18333c9c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c9c5: push rbp
// asm:   0x18333c9c6: sub rsp, 0x50
// asm:   0x18333c9ca: mov rbp, rdx
// asm:   0x18333c9cd: mov rax, qword ptr [rbp + 0x148]
// asm:   0x18333c9d4: mov rcx, qword ptr [rax]
// asm:   0x18333c9d7: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333c9db: movabs rax, 0
// asm:   0x18333c9e5: add rsp, 0x50
// asm:   0x18333c9e9: pop rbp
// asm:   0x18333c9ea: ret 
// asm:   0x18333c9f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c9f5: push rbp
// asm:   0x18333c9f6: sub rsp, 0x50
// asm:   0x18333c9fa: mov rbp, rdx
// asm:   0x18333c9fd: mov rax, qword ptr [rbp + 0x150]
// asm:   0x18333ca04: mov rcx, qword ptr [rax]
// asm:   0x18333ca07: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333ca0b: movabs rax, 0
// asm:   0x18333ca15: add rsp, 0x50
// asm:   0x18333ca19: pop rbp
// asm:   0x18333ca1a: ret 
// asm:   0x18333ca20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333ca25: push rbp
// asm:   0x18333ca26: sub rsp, 0x50
// asm:   0x18333ca2a: mov rbp, rdx
// asm:   0x18333ca2d: mov rax, qword ptr [rbp + 0x158]
// asm:   0x18333ca34: mov rcx, qword ptr [rax]
// asm:   0x18333ca37: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333ca3b: movabs rax, 0
// asm:   0x18333ca45: add rsp, 0x50
// asm:   0x18333ca49: pop rbp
// asm:   0x18333ca4a: ret 
// asm:   0x18333ca50: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333ca55: push rbp
// asm:   0x18333ca56: sub rsp, 0x50
// asm:   0x18333ca5a: mov rbp, rdx
// asm:   0x18333ca5d: mov rax, qword ptr [rbp + 0x160]
// asm:   0x18333ca64: mov rcx, qword ptr [rax]
// asm:   0x18333ca67: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333ca6b: movabs rax, 0
// asm:   0x18333ca75: add rsp, 0x50
// asm:   0x18333ca79: pop rbp
// asm:   0x18333ca7a: ret 
// asm:   0x18333ca80: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333ca85: push rbp
// asm:   0x18333ca86: sub rsp, 0x50
// asm:   0x18333ca8a: mov rbp, rdx
// asm:   0x18333ca8d: mov rax, qword ptr [rbp + 0x168]
// asm:   0x18333ca94: mov rcx, qword ptr [rax]
// asm:   0x18333ca97: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333ca9b: movabs rax, 0
// asm:   0x18333caa5: add rsp, 0x50
// asm:   0x18333caa9: pop rbp
// asm:   0x18333caaa: ret 
// asm:   0x18333cab0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333cab5: push rbp
// asm:   0x18333cab6: sub rsp, 0x50
// asm:   0x18333caba: mov rbp, rdx
// asm:   0x18333cabd: mov rax, qword ptr [rbp + 0x170]
// asm:   0x18333cac4: mov rcx, qword ptr [rax]
// asm:   0x18333cac7: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333cacb: movabs rax, 0
// asm:   0x18333cad5: add rsp, 0x50
// asm:   0x18333cad9: pop rbp
// asm:   0x18333cada: ret 
// asm:   0x18333cae0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333cae5: push rbp
// asm:   0x18333cae6: sub rsp, 0x50
// asm:   0x18333caea: mov rbp, rdx
// asm:   0x18333caed: mov rax, qword ptr [rbp + 0x178]
// asm:   0x18333caf4: mov rcx, qword ptr [rax]
// asm:   0x18333caf7: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333cafb: movabs rax, 0
// asm:   0x18333cb05: add rsp, 0x50
// asm:   0x18333cb09: pop rbp
// asm:   0x18333cb0a: ret 
// asm:   0x18333cb10: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333cb15: push rbp
// asm:   0x18333cb16: sub rsp, 0x50
// asm:   0x18333cb1a: mov rbp, rdx
// asm:   0x18333cb1d: mov rax, qword ptr [rbp + 0x180]
// asm:   0x18333cb24: mov rcx, qword ptr [rax]
// asm:   0x18333cb27: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333cb2b: movabs rax, 0
// asm:   0x18333cb35: add rsp, 0x50
// asm:   0x18333cb39: pop rbp
// asm:   0x18333cb3a: ret 
// asm:   0x18333cb40: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333cb45: push rbp
// asm:   0x18333cb46: sub rsp, 0x50
// asm:   0x18333cb4a: mov rbp, rdx
// asm:   0x18333cb4d: mov rax, qword ptr [rbp + 0x188]
// asm:   0x18333cb54: mov rcx, qword ptr [rax]
// asm:   0x18333cb57: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333cb5b: movabs rax, 0
// asm:   0x18333cb65: add rsp, 0x50
// asm:   0x18333cb69: pop rbp
// asm:   0x18333cb6a: ret 
// asm:   0x18333cb70: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333cb75: push rbp
// asm:   0x18333cb76: sub rsp, 0x50
// asm:   0x18333cb7a: mov rbp, rdx
// asm:   0x18333cb7d: mov rax, qword ptr [rbp + 0x190]
// asm:   0x18333cb84: mov rcx, qword ptr [rax]
// asm:   0x18333cb87: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333cb8b: movabs rax, 0
// asm:   0x18333cb95: add rsp, 0x50
// asm:   0x18333cb99: pop rbp
// asm:   0x18333cb9a: ret 

void GameManagers_ChatManager__HandleTypingInternal(System_String_o *input,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  Photon_Realtime_Player_o *pPVar5;
  System_String_array *pSVar6;
  System_Collections_Generic_Dictionary_string__ChatManager_CommandAttribute__o *__this;
  Il2CppObject *pIVar7;
  void *pvVar8;
  MethodInfo *pMVar9;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar10;
  bool bVar11;
  bool bVar12;
  int32_t iVar13;
  int32_t iVar14;
  uint uVar15;
  System_String_o *pSVar16;
  System_Collections_Generic_List_string__o *pSVar17;
  System_Collections_Generic_List_Player__o *pSVar18;
  System_String_o *pSVar19;
  System_Predicate_T__o *pSVar20;
  Photon_Realtime_Player_array *pPVar21;
  System_String_o *pSVar22;
  UnityEngine_Rendering_DynamicArray_SortComparer_T__o *pUVar23;
  System_Func_Player__string__o *pSVar24;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar25;
  System_Collections_Generic_List_KeyValuePair_string__ChatManager_CommandAttribute___o *__this_00;
  System_Text_StringBuilder_o *pSVar26;
  Il2CppObject *pIVar27;
  Il2CppObject *pIVar28;
  int iVar29;
  uint local_res20 [2];
  undefined1 local_178 [8];
  ulonglong uStack_170;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_168;
  int32_t local_160 [2];
  System_Collections_Generic_List_string__o *local_158;
  undefined1 local_148 [8];
  System_DateTime_o SStack_140;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_138;
  Il2CppObject *pIStack_130;
  int32_t local_128;
  undefined4 uStack_124;
  undefined1 local_118 [8];
  ulonglong uStack_110;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_108;
  undefined1 local_100 [8];
  ulonglong uStack_f8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_f0;
  Il2CppObject *pIStack_e8;
  Il2CppObject *local_e0;
  Il2CppObject *local_d8;
  Il2CppObject *local_d0;
  Il2CppObject *local_c8;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_c0 [3];
  
  if (Il2CppMethodInitialized_184344e4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_CLCommandAttribute);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Char_IsDigit);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Comparison_Player);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Comparison_KeyValuePair_string_ChatManager_CommandAttribute);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_All_char);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_Player_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_ChatManager_CommandAttribute_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_ChatManager_CommandAttribute_Disp
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_ChatManager_CommandAttribute_Move
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_ChatManager_CommandAttribute_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Player_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Player_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_ChatManager_CommandAttribute_get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_ChatManager_CommandAttribute_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Player_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_char_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_ChatManager_CommandAttribute_get_Key
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_string_ChatManager_CommandAttribute_get_Value
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_KeyValuePair_string_ChatManager_CommandAttribute_Add
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Player_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_KeyValuePair_string_ChatManager_CommandAttribute_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_KeyValuePair_string_ChatManager_CommandAttribute_Sort
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_Sort);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_KeyValuePair_string_ChatManager_CommandAttribute_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_KeyValuePair_string_ChatManager_CommandAttribute_get_Count
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_KeyValuePair_string_ChatManager_CommandAttribute);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Player);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__132_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__132_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__132_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__132_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__132_4);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_c);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"Matching players:");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"##FORCE_REFRESH##");
    il2cpp_codegen_initialize_runtime_metadata(&"@");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e4d = '\x01';
  }
  local_178 = (undefined1  [8])0x0;
  uStack_170 = 0;
  local_168 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar28 = (Il2CppObject *)0x0;
  local_e0 = (Il2CppObject *)0x0;
  local_d8 = (Il2CppObject *)0x0;
  local_d0 = (Il2CppObject *)0x0;
  local_c8 = (Il2CppObject *)0x0;
  local_res20[0] = 0;
  local_160[0] = 0;
  local_118 = (undefined1  [8])0x0;
  uStack_110 = 0;
  local_108 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c0[0].fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c0[0].fields._version = 0;
  local_c0[0].fields._index = 0;
  local_c0[0].fields._current.fields.key = (Il2CppObject *)0x0;
  local_c0[0].fields._current.fields.value = (Il2CppObject *)0x0;
  local_c0[0].fields._getEnumeratorRetType = 0;
  local_c0[0].fields._36_4_ = 0;
  local_100 = (undefined1  [8])0x0;
  uStack_f8 = 0;
  local_f0 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIStack_e8 = (Il2CppObject *)0x0;
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  bVar11 = System_String__IsNullOrEmpty
                     (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText,
                      (MethodInfo *)0x0);
  if (!bVar11) {
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type == 1) {
      if (input == (System_String_o *)0x0) goto label_181e4a2f6;
      bVar11 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
      if (!bVar11) goto label_181e47b5d;
      iVar13 = System_String__IndexOf(input,0x20,(MethodInfo *)0x0);
      if (iVar13 == -1) {
        pSVar16 = System_String__Substring(input,1,(MethodInfo *)0x0);
        if (pSVar16 == (System_String_o *)0x0) goto label_181e4a2f6;
        pSVar17 = (System_Collections_Generic_List_string__o *)
                  System_String__ToLower(pSVar16,(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        }
        pSVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
        if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e4a2f6;
        local_158 = pSVar17;
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_148,
                   (System_Collections_Generic_List_T__o *)pSVar3,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
        local_178 = local_148;
        uStack_170 = (ulonglong)SStack_140.fields._dateData;
        local_168 = local_138;
        do {
          bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_178,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
          if (!bVar11) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_178,
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            pSVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
            if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e4a2f6;
            System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_148,
                       (System_Collections_Generic_List_T__o *)pSVar3,
                       (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
            local_178 = local_148;
            uStack_170 = (ulonglong)SStack_140.fields._dateData;
            local_168 = local_138;
            goto label_181e47a20;
          }
          bVar11 = System_String__Equals_196c550
                             ((System_String_o *)pSVar17,(System_String_o *)local_168,5,(MethodInfo *)0x0);
        } while (!bVar11);
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_178,
                   MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
        goto label_181e47aac;
      }
      pSVar16 = System_String__Substring_1972740(input,1,iVar13 + -1,(MethodInfo *)0x0);
      if (pSVar16 == (System_String_o *)0x0) goto label_181e4a2f6;
      System_String__ToLower(pSVar16,(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText =
           "";
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText,
                 "");
      TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting = false;
    }
    else {
label_181e47b5d:
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type == 2) {
        if (input == (System_String_o *)0x0) goto label_181e4a2f6;
        bVar11 = System_String__Contains(input,"@",(MethodInfo *)0x0);
        if (bVar11) {
          iVar13 = System_String__LastIndexOf(input,0x40,(MethodInfo *)0x0);
          if (-1 < iVar13) {
            pSVar17 = (System_Collections_Generic_List_string__o *)
                      System_String__Substring(input,iVar13 + 1,(MethodInfo *)0x0);
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            pSVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
            if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e4a2f6;
            local_158 = pSVar17;
            System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_148,
                       (System_Collections_Generic_List_T__o *)pSVar3,
                       (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
            local_178 = local_148;
            uStack_170 = (ulonglong)SStack_140.fields._dateData;
            local_168 = local_138;
            while (bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                      ((System_Collections_Generic_List_Enumerator_object__o *)local_178,
                                       (MethodInfo_153A2A0 *)
                                       MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
                  bVar11) {
              bVar11 = System_String__Equals_196c550
                                 ((System_String_o *)pSVar17,(System_String_o *)local_168,5,(MethodInfo *)0x0)
              ;
              if (bVar11) {
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_178,
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
                return;
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_178,
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            pSVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
            if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e4a2f6;
            System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_148,
                       (System_Collections_Generic_List_T__o *)pSVar3,
                       (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
            local_178 = local_148;
            uStack_170 = (ulonglong)SStack_140.fields._dateData;
            local_168 = local_138;
            do {
              bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)local_178,
                                  (MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
              if (!bVar11) {
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_178,
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
                goto label_181e4a1c6;
              }
              if (local_168 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar11 = System_String__StartsWith_19722c0
                                 ((System_String_o *)local_168,(System_String_o *)pSVar17,5,(MethodInfo *)0x0)
              ;
            } while (!bVar11);
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_178,
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
            goto label_181e4816d;
          }
          goto label_181e481b9;
        }
      }
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type == 3) {
        if (input == (System_String_o *)0x0) goto label_181e4a2f6;
        bVar11 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
        if ((bVar11) && (iVar13 = System_String__IndexOf(input,0x20,(MethodInfo *)0x0), iVar13 != -1)) {
          pSVar16 = System_String__Substring_1972740(input,1,iVar13 + -1,(MethodInfo *)0x0);
          if (pSVar16 == (System_String_o *)0x0) goto label_181e4a2f6;
          pSVar16 = System_String__ToLower(pSVar16,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181e4a2f6;
          bVar11 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                             (pSVar4,(Il2CppObject *)pSVar16,&local_e0,
                              (MethodInfo_14769C0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
                             );
          if (bVar11) {
            if (local_e0 == (Il2CppObject *)0x0) goto label_181e4a2f6;
            iVar29 = *(int *)&local_e0[4].klass;
          }
          else {
            iVar29 = 1;
          }
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          if ((iVar29 != 2) ||
             (iVar14 = System_String__LastIndexOf(input,0x20,(MethodInfo *)0x0), iVar14 <= iVar13)) {
            iVar14 = iVar13;
          }
          pSVar17 = (System_Collections_Generic_List_string__o *)
                    System_String__Substring(input,iVar14 + 1,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          pSVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
          if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e4a2f6;
          local_158 = pSVar17;
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_148,
                     (System_Collections_Generic_List_T__o *)pSVar3,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
          local_178 = local_148;
          uStack_170 = (ulonglong)SStack_140.fields._dateData;
          local_168 = local_138;
          while (bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    ((System_Collections_Generic_List_Enumerator_object__o *)local_178,
                                     (MethodInfo_153A2A0 *)
                                     MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
                bVar11) {
            bVar11 = System_String__Equals_196c550
                               ((System_String_o *)pSVar17,(System_String_o *)local_168,5,(MethodInfo *)0x0);
            if (bVar11) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_178,
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
              return;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_178,
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          pSVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
          if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e4a2f6;
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_148,
                     (System_Collections_Generic_List_T__o *)pSVar3,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
          local_178 = local_148;
          uStack_170 = (ulonglong)SStack_140.fields._dateData;
          local_168 = local_138;
          do {
            bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_178,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
            if (!bVar11) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_178,
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
              goto label_181e4a1c6;
            }
            if (local_168 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar11 = System_String__StartsWith_19722c0
                               ((System_String_o *)local_168,(System_String_o *)pSVar17,5,(MethodInfo *)0x0);
          } while (!bVar11);
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_178,
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          goto label_181e4816d;
        }
      }
    }
    goto label_181e481b9;
  }
  goto label_181e48205;
  while( true ) {
    if (local_168 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar11 = System_String__StartsWith_19722c0
                       ((System_String_o *)local_168,(System_String_o *)pSVar17,5,(MethodInfo *)0x0);
    if (bVar11) break;
label_181e47a20:
    bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       ((System_Collections_Generic_List_Enumerator_object__o *)local_178,
                        (MethodInfo_153A2A0 *)
                        MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    if (!bVar11) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_178,
                 MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      goto label_181e4a1c6;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_178,
             MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
label_181e4816d:
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText =
       "";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText,
             "");
label_181e481b9:
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText =
       "";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText,
             "");
label_181e48205:
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type == 2) {
    if (input == (System_String_o *)0x0) goto label_181e4a2f6;
    bVar11 = System_String__Contains(input,"@",(MethodInfo *)0x0);
    if ((bVar11) && (iVar13 = System_String__LastIndexOf(input,0x40,(MethodInfo *)0x0), -1 < iVar13)) {
      pSVar16 = System_String__Substring(input,iVar13 + 1,(MethodInfo *)0x0);
      if (pSVar16 == (System_String_o *)0x0) goto label_181e4a2f6;
      bVar11 = System_String__Contains_196a7f0(pSVar16,0x20,(MethodInfo *)0x0);
      if ((bVar11) || (bVar11 = System_String__Contains_196a7f0(pSVar16,9,(MethodInfo *)0x0), bVar11))
      goto label_181e4a19a;
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      bVar11 = System_String__IsNullOrEmpty
                         (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText,
                          (MethodInfo *)0x0);
      if (!bVar11) {
        iVar29 = (pSVar16->fields)._stringLength;
        if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        }
        pSVar19 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText;
        if (pSVar19 == (System_String_o *)0x0) goto label_181e4a2f6;
        if (iVar29 < (pSVar19->fields)._stringLength) {
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          pSVar19 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText;
          if (pSVar19 == (System_String_o *)0x0) goto label_181e4a2f6;
          bVar11 = System_String__StartsWith_19722c0(pSVar19,pSVar16,5,(MethodInfo *)0x0);
          if (bVar11) {
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting = false;
          }
        }
      }
    }
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type == 1) {
    if (input == (System_String_o *)0x0) goto label_181e4a2f6;
    bVar11 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
    if (bVar11) {
      iVar13 = System_String__IndexOf(input,0x20,(MethodInfo *)0x0);
      if (iVar13 < 1) {
        pSVar16 = System_String__Substring(input,1,(MethodInfo *)0x0);
        if (pSVar16 == (System_String_o *)0x0) goto label_181e4a2f6;
        pSVar16 = System_String__ToLower(pSVar16,(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        }
        bVar11 = System_String__IsNullOrEmpty
                           (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText,
                            (MethodInfo *)0x0);
        if (!bVar11) {
          if (pSVar16 == (System_String_o *)0x0) goto label_181e4a2f6;
          iVar29 = (pSVar16->fields)._stringLength;
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          pSVar19 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText;
          if (pSVar19 == (System_String_o *)0x0) goto label_181e4a2f6;
          if (iVar29 < (pSVar19->fields)._stringLength) {
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            pSVar19 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText;
            if (pSVar19 == (System_String_o *)0x0) goto label_181e4a2f6;
            bVar11 = System_String__StartsWith_19722c0(pSVar19,pSVar16,5,(MethodInfo *)0x0);
            if (bVar11) {
              if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
              }
              TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting = false;
            }
          }
        }
      }
      else {
        pSVar16 = System_String__Substring_1972740(input,1,iVar13 + -1,(MethodInfo *)0x0);
        if (pSVar16 == (System_String_o *)0x0) goto label_181e4a2f6;
        pSVar16 = System_String__ToLower(pSVar16,(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
        if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181e4a2f6;
        bVar11 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                           (pSVar4,(Il2CppObject *)pSVar16,&local_d8,
                            (MethodInfo_14769C0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
                           );
        if (!bVar11) goto label_181e4a19a;
        if (local_d8 == (Il2CppObject *)0x0) goto label_181e4a2f6;
        if (*(int *)&local_d8[4].klass == 0) {
          if (local_d8[3].monitor == (void *)0x0) goto label_181e4a2f6;
          if (*(longlong *)((longlong)local_d8[3].monitor + 0x18) == 0) goto label_181e4a19a;
        }
      }
    }
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type == 3) {
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting == false)
    goto label_181e48882;
    if (input == (System_String_o *)0x0) goto label_181e4a2f6;
    bVar11 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
    if ((!bVar11) || (iVar13 = System_String__IndexOf(input,0x20,(MethodInfo *)0x0), iVar13 == -1))
    goto label_181e48882;
    pSVar16 = System_String__Substring_1972740(input,1,iVar13 + -1,(MethodInfo *)0x0);
    if (pSVar16 == (System_String_o *)0x0) goto label_181e4a2f6;
    pSVar16 = System_String__ToLower(pSVar16,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181e4a2f6;
    bVar11 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                       (pSVar4,(Il2CppObject *)pSVar16,&local_d0,
                        (MethodInfo_14769C0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
                       );
    if (bVar11) {
      if (local_d0 == (Il2CppObject *)0x0) goto label_181e4a2f6;
      iVar29 = *(int *)&local_d0[4].klass;
    }
    else {
      iVar29 = 1;
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    if ((iVar29 != 2) || (iVar14 = System_String__LastIndexOf(input,0x20,(MethodInfo *)0x0), iVar14 <= iVar13)
       ) {
      iVar14 = iVar13;
    }
    pSVar16 = System_String__Substring(input,iVar14 + 1,(MethodInfo *)0x0);
    if (pSVar16 == (System_String_o *)0x0) goto label_181e4a2f6;
    iVar29 = (pSVar16->fields)._stringLength;
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    pSVar19 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText;
    if (pSVar19 == (System_String_o *)0x0) goto label_181e4a2f6;
    if (((pSVar19->fields)._stringLength <= iVar29) &&
       (bVar11 = System_String__EndsWith(pSVar16," ",(MethodInfo *)0x0), !bVar11)) {
label_181e47aac:
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting = false;
      return;
    }
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick == false) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
    }
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = "##FORCE_REFRESH##";
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText,
               "##FORCE_REFRESH##");
  }
  else {
label_181e48882:
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting != false) {
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting = false;
      return;
    }
  }
  bVar11 = System_String__IsNullOrEmpty(input,(MethodInfo *)0x0);
  if (((bVar11) ||
      (bVar11 = System_String__op_Equality(input,"@",(MethodInfo *)0x0), bVar11)) ||
     (bVar11 = System_String__op_Equality(input,"/",(MethodInfo *)0x0), bVar11)) {
label_181e4a19a:
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick == false) {
label_181e4a1c6:
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
    }
    return;
  }
  if (input == (System_String_o *)0x0) {
label_181e4a2f6:
    ThrowNullReferenceException();
  }
  bVar11 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
  if (bVar11) {
    iVar13 = System_String__IndexOf(input,0x20,(MethodInfo *)0x0);
    if (iVar13 == -1) {
      pSVar16 = System_String__Substring(input,1,(MethodInfo *)0x0);
    }
    else {
      pSVar16 = System_String__Substring_1972740(input,1,iVar13 + -1,(MethodInfo *)0x0);
    }
    if (pSVar16 != (System_String_o *)0x0) {
      pSVar16 = System_String__ToLower(pSVar16,(MethodInfo *)0x0);
      bVar11 = System_String__IsNullOrEmpty(pSVar16,(MethodInfo *)0x0);
      if (bVar11) goto label_181e4a19a;
      if (iVar13 == -1) {
        if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        }
        bVar11 = System_String__op_Inequality
                           (pSVar16,TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->
                                    PartialText,(MethodInfo *)0x0);
        if (bVar11) {
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick == false) {
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = pSVar16;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText,pSVar16)
            ;
            TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type = 1;
            TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex = -1;
            pSVar19 = System_String__Concat_1969e50("/",pSVar16,(MethodInfo *)0x0);
            GameManagers_ChatManager_SuggestionState__SetOriginalContext
                      (pSVar19,0,(input->fields)._stringLength,(MethodInfo *)0x0);
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_List_KeyValuePair_string_ChatManager_CommandAttribute
                                  );
            System_Collections_Generic_List_KeyValuePair_object__object_____ctor
                      ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
                       (MethodInfo_92A240 *)
                       MethodInfo_System_Collections_Generic_List_KeyValuePair_string_ChatManager_CommandAttribute_ctor
                      );
            __this = TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
            if (__this != (System_Collections_Generic_Dictionary_string__ChatManager_CommandAttribute__o *)0x0
               ) {
              System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
                        ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_148,
                         (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                         (MethodInfo_13C1150 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_GetEnumerator
                        );
              local_c0[0].fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_148;
              local_c0[0].fields._8_8_ = SStack_140.fields._dateData;
              local_c0[0].fields._current.fields.key = (Il2CppObject *)local_138;
              local_c0[0].fields._current.fields.value = pIStack_130;
              local_c0[0].fields._getEnumeratorRetType = local_128;
              local_c0[0].fields._36_4_ = uStack_124;
              while (bVar11 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                        (local_c0,(MethodInfo_1585360 *)
                                                  MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_ChatManager_CommandAttribute_MoveNext
                                        ), pIVar27 = local_c0[0].fields._current.fields.value,
                    pIVar7 = local_c0[0].fields._current.fields.key, bVar11) {
                if (local_c0[0].fields._current.fields.value == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                if (*(char *)((longlong)local_c0[0].fields._current.fields.value + 0x30) == '\0') {
                  if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                      local_c0[0].fields._current.fields.key ==
                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pSVar19 = System_String__ToLower
                                      ((System_String_o *)local_c0[0].fields._current.fields.key,
                                       (MethodInfo *)0x0);
                  if (pSVar19 == (System_String_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar11 = System_String__StartsWith(pSVar19,pSVar16,(MethodInfo *)0x0);
                  if (bVar11) {
                    if (__this_00 ==
                        (System_Collections_Generic_List_KeyValuePair_string__ChatManager_CommandAttribute___o
                         *)0x0) {
                      ThrowNullReferenceException();
                    }
                    local_148 = (undefined1  [8])pIVar7;
                    SStack_140.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)pIVar27;
                    il2cpp_runtime_helper_180039eb0(__this_00,local_148);
                  }
                }
              }
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_c0,
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_ChatManager_CommandAttribute_Dispose
                        );
              if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
              }
              pUVar23 = (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)
                        TypeInfo_GameManagers_ChatManager_c->static_fields->__9__132_2;
              if (pUVar23 == (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)0x0) {
                if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
                }
                pIVar7 = (Il2CppObject *)TypeInfo_GameManagers_ChatManager_c->static_fields->__9;
                pUVar23 = (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_System_Comparison_KeyValuePair_string_ChatManager_CommandAttribute
                                    );
                UnityEngine_Rendering_DynamicArray_SortComparer_RenderGraphCompilationCache_HashEntry_object_____ctor
                          (pUVar23,pIVar7,
                           (intptr_t)MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__132_2,
                           (MethodInfo_C981A0 *)0x0);
                TypeInfo_GameManagers_ChatManager_c->static_fields->__9__132_2 =
                     (System_Comparison_KeyValuePair_string__ChatManager_CommandAttribute___o *)pUVar23;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_GameManagers_ChatManager_c->static_fields->__9__132_2,pUVar23);
              }
              if (__this_00 !=
                  (System_Collections_Generic_List_KeyValuePair_string__ChatManager_CommandAttribute___o *)0x0
                 ) {
                System_Collections_Generic_List_KeyValuePair_object__object____Sort
                          ((System_Collections_Generic_List_T__o *)__this_00,(System_Comparison_T__o *)pUVar23
                           ,(MethodInfo_935C80 *)
                            MethodInfo_System_Collections_Generic_List_KeyValuePair_string_ChatManager_CommandAttribute_Sort
                          );
                if (0 < (__this_00->fields)._size) {
                  pSVar17 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
                  local_158 = pSVar17;
                  System_Collections_Generic_List_object____ctor
                            ((System_Collections_Generic_LowLevelList_T__o *)pSVar17,
                             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
                  System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___GetEnumerator
                            ((System_Collections_Generic_List_Enumerator_T__o *)local_148,
                             (System_Collections_Generic_List_T__o *)__this_00,
                             (MethodInfo_91F200 *)
                             MethodInfo_System_Collections_Generic_List_KeyValuePair_string_ChatManager_CommandAttribute_GetEnumerator
                            );
                  local_100 = local_148;
                  uStack_f8 = (ulonglong)SStack_140.fields._dateData;
                  local_f0 = local_138;
                  pIStack_e8 = pIStack_130;
                  while (bVar11 = System_Collections_Generic_List_Enumerator_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___MoveNext
                                            ((System_Collections_Generic_List_Enumerator_T__o *)local_100,
                                             (MethodInfo_15292D0 *)
                                             MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_ChatManager_CommandAttribute_Move
                                            ), pIVar7 = pIStack_e8, pSVar10 = local_f0, bVar11) {
                    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                    }
                    pSVar26 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
                    if (pSVar26 == (System_Text_StringBuilder_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    System_Text_StringBuilder__Clear(pSVar26,(MethodInfo *)0x0);
                    pSVar26 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
                    if (pSVar26 == (System_Text_StringBuilder_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar26 = System_Text_StringBuilder__Append_197e090(pSVar26,0x2f,(MethodInfo *)0x0);
                    if (pSVar26 == (System_Text_StringBuilder_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    System_Text_StringBuilder__Append_197dca0
                              (pSVar26,(System_String_o *)pSVar10,(MethodInfo *)0x0);
                    if (pIVar7 == (Il2CppObject *)0x0) {
                      ThrowNullReferenceException();
                    }
                    if (pIVar7[3].monitor == (void *)0x0) {
                      ThrowNullReferenceException();
                    }
                    if (*(longlong *)((longlong)pIVar7[3].monitor + 0x18) != 0) {
                      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                      }
                      pSVar26 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
                      if (pSVar26 == (System_Text_StringBuilder_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      System_Text_StringBuilder__Append_197e090(pSVar26,0x20,(MethodInfo *)0x0);
                      pIVar27 = pIVar28;
                      while( true ) {
                        if (pIVar7[3].monitor == (void *)0x0) {
                          ThrowNullReferenceException();
                        }
                        uVar15 = (uint)pIVar27;
                        if (*(int *)((longlong)pIVar7[3].monitor + 0x18) <= (int)uVar15) break;
                        if (0 < (int)uVar15) {
                          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                          }
                          pSVar26 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
                          if (pSVar26 == (System_Text_StringBuilder_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          System_Text_StringBuilder__Append_197e090(pSVar26,0x20,(MethodInfo *)0x0);
                        }
                        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                        }
                        pSVar26 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
                        if (pSVar26 == (System_Text_StringBuilder_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pSVar26 = System_Text_StringBuilder__Append_197e090(pSVar26,0x5b,(MethodInfo *)0x0);
                        pvVar8 = pIVar7[3].monitor;
                        if (pvVar8 == (void *)0x0) {
                          ThrowNullReferenceException();
                        }
                        if (*(uint *)((longlong)pvVar8 + 0x18) <= uVar15) {
                          ThrowIndexOutOfRangeException();
                        }
                        if (pSVar26 == (System_Text_StringBuilder_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pSVar26 = System_Text_StringBuilder__Append_197dca0
                                            (pSVar26,*(System_String_o **)
                                                      ((longlong)pvVar8 + (longlong)(int)uVar15 * 8 + 0x20),
                                             (MethodInfo *)0x0);
                        if (pSVar26 == (System_Text_StringBuilder_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        System_Text_StringBuilder__Append_197e090(pSVar26,0x5d,(MethodInfo *)0x0);
                        pIVar27 = (Il2CppObject *)(ulonglong)(uVar15 + 1);
                      }
                    }
                    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                    }
                    pSVar26 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
                    if (pSVar26 == (System_Text_StringBuilder_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar16 = (*(pSVar26->klass->vtable)._3_ToString.methodPtr)
                                        (pSVar26,(pSVar26->klass->vtable)._3_ToString.method);
                    bVar2 = (TypeInfo_GameManagers_ChatManager_CLCommandAttribute->_2).typeHierarchyDepth;
                    if (((pIVar7->klass->_2).typeHierarchyDepth < bVar2) ||
                       (bVar11 = true,
                       (pIVar7->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                       (Il2CppClass *)TypeInfo_GameManagers_ChatManager_CLCommandAttribute)) {
                      bVar11 = false;
                    }
                    pIVar27 = pIVar28;
                    if (bVar11) {
                      pIVar27 = pIVar7;
                    }
                    iVar13 = 8;
                    if (pIVar27 == (Il2CppObject *)0x0) {
                      iVar13 = 2;
                    }
                    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                    }
                    pSVar16 = GameManagers_ChatManager__GetColorString(pSVar16,iVar13,false,(MethodInfo *)0x0)
                    ;
                    if (pSVar17 == (System_Collections_Generic_List_string__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    il2cpp_runtime_helper_180012890(pSVar17,pSVar16);
                  }
                  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_100,
                             MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_ChatManager_CommandAttribute_Disp
                            );
                  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                  }
                  GameManagers_ChatManager__ShowCommandSuggestions(pSVar17,(MethodInfo *)0x0);
                  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0)
                  {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
                  }
                  pSVar17 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
                  if (pSVar17 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e4a2f0;
                  piVar1 = &(pSVar17->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  iVar13 = (pSVar17->fields)._size;
                  (pSVar17->fields)._size = 0;
                  if (0 < iVar13) {
                    System_Array__Clear((System_Array_o *)(pSVar17->fields)._items,0,iVar13,(MethodInfo *)0x0)
                    ;
                  }
                  System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___GetEnumerator
                            ((System_Collections_Generic_List_Enumerator_T__o *)local_148,
                             (System_Collections_Generic_List_T__o *)__this_00,
                             (MethodInfo_91F200 *)
                             MethodInfo_System_Collections_Generic_List_KeyValuePair_string_ChatManager_CommandAttribute_GetEnumerator
                            );
                  local_100 = local_148;
                  uStack_f8 = (ulonglong)SStack_140.fields._dateData;
                  local_f0 = local_138;
                  pIStack_e8 = pIStack_130;
                  while (bVar11 = System_Collections_Generic_List_Enumerator_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___MoveNext
                                            ((System_Collections_Generic_List_Enumerator_T__o *)local_100,
                                             (MethodInfo_15292D0 *)
                                             MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_ChatManager_CommandAttribute_Move
                                            ), pSVar10 = local_f0, bVar11) {
                    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor ==
                        0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
                    }
                    pMVar9 = MethodInfo_System_Collections_Generic_List_string_Add;
                    pSVar17 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
                    if (pSVar17 == (System_Collections_Generic_List_string__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    piVar1 = &(pSVar17->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar6 = (pSVar17->fields)._items;
                    if (pSVar6 == (System_String_array *)0x0) {
                      ThrowNullReferenceException();
                    }
                    uVar15 = (pSVar17->fields)._size;
                    if (uVar15 < (uint)pSVar6->max_length) {
                      (pSVar17->fields)._size = uVar15 + 1;
                      if ((uint)pSVar6->max_length <= uVar15) {
                        ThrowIndexOutOfRangeException();
                      }
                      pSVar6->m_Items[(int)uVar15] = (System_String_o *)pSVar10;
                      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar15,pSVar10);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar17,(Il2CppObject *)pSVar10,
                                 (MethodInfo_93DD50 *)pMVar9->klass->rgctx_data[0xe].method);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_100,
                             MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_ChatManager_CommandAttribute_Disp
                            );
                }
                goto label_181e499c8;
              }
            }
            goto label_181e4a2f0;
          }
        }
      }
      else {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
        if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181e4a2f6;
        bVar11 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                           (pSVar4,(Il2CppObject *)pSVar16,&local_c8,
                            (MethodInfo_14769C0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
                           );
        if (bVar11) {
          if (local_c8 == (Il2CppObject *)0x0) goto label_181e4a2f6;
          if ((*(int *)&local_c8[4].klass == 1) || (*(int *)&local_c8[4].klass == 2)) {
            iVar29 = *(int *)&local_c8[4].klass;
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            if ((iVar29 != 2) ||
               (iVar14 = System_String__LastIndexOf(input,0x20,(MethodInfo *)0x0), iVar14 <= iVar13)) {
              iVar14 = iVar13;
            }
            pSVar16 = System_String__Substring(input,iVar14 + 1,(MethodInfo *)0x0);
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            bVar11 = System_String__op_Inequality
                               (pSVar16,TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->
                                        PartialText,(MethodInfo *)0x0);
            if (bVar11) {
              if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
              }
              if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting == false)
              {
                if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
                }
                if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick ==
                    false) {
                  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                  }
                  GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
                  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0)
                  {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
                  }
                  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = pSVar16;
                  Il2CppCodeGenWriteBarrier
                            (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText,
                             pSVar16);
                  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type = 3;
                  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex = -1;
                  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting = false;
                  GameManagers_ChatManager_SuggestionState__SetOriginalContext
                            (pSVar16,iVar14 + 1,(input->fields)._stringLength,(MethodInfo *)0x0);
                  pSVar18 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Player);
                  System_Collections_Generic_List_object____ctor
                            ((System_Collections_Generic_LowLevelList_T__o *)pSVar18,
                             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Player_ctor);
                  if (pSVar16 != (System_String_o *)0x0) {
                    pSVar19 = System_String__ToLower(pSVar16,(MethodInfo *)0x0);
                    pSVar20 = (System_Predicate_T__o *)
                              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_char_bool);
                    System_Func_char__bool____ctor
                              (pSVar20,(Il2CppObject *)0x0,(intptr_t)MethodInfo_System_Char_IsDigit,
                               (MethodInfo_B61940 *)0x0);
                    bVar11 = System_Linq_Enumerable__All_char_
                                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar16,
                                        (System_Func_TSource__bool__o *)pSVar20,
                                        (MethodInfo_6B5A80 *)MethodInfo_System_Linq_Enumerable_All_char);
                    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
                    }
                    pPVar21 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
                    local_res20[0] = 0;
                    if (pPVar21 != (Photon_Realtime_Player_array *)0x0) {
                      while (uVar15 = (uint)pIVar28, (int)uVar15 < (int)pPVar21->max_length) {
                        if ((uint)pPVar21->max_length <= uVar15) {
                          ThrowIndexOutOfRangeException();
                        }
                        pPVar5 = pPVar21->m_Items[(int)uVar15];
                        if (bVar11) {
                          bVar12 = System_String__IsNullOrEmpty(pSVar16,(MethodInfo *)0x0);
                          if (!bVar12) {
                            if (pPVar5 != (Photon_Realtime_Player_o *)0x0) {
                              local_160[0] = (pPVar5->fields).actorNumber;
                              pSVar22 = System_Int32__ToString(local_160,(MethodInfo *)0x0);
                              if (pSVar22 != (System_String_o *)0x0) {
                                bVar12 = System_String__StartsWith(pSVar22,pSVar16,(MethodInfo *)0x0);
                                goto label_181e48ccd;
                              }
                            }
                            goto label_181e4a2f6;
                          }
label_181e48cd1:
                          if (pSVar18 == (System_Collections_Generic_List_Player__o *)0x0) goto label_181e4a2f6;
                          il2cpp_runtime_helper_180012890(pSVar18);
                        }
                        else {
                          if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
                          }
                          pSVar22 = PhotonExtensions__GetStringProperty
                                              (pPVar5,TypeInfo_GameManagers_PlayerProperty->static_fields->
                                                      Name,"",(MethodInfo *)0x0);
                          if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
                          }
                          pSVar22 = Anticheat_ChatFilter__FilterSizeTag(pSVar22,(MethodInfo *)0x0);
                          if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
                          }
                          pSVar22 = MiscExtensions__StripRichText(pSVar22,(MethodInfo *)0x0);
                          if (pSVar22 == (System_String_o *)0x0) goto label_181e4a2f6;
                          pSVar22 = System_String__ToLower(pSVar22,(MethodInfo *)0x0);
                          bVar12 = System_String__IsNullOrEmpty(pSVar16,(MethodInfo *)0x0);
                          if (bVar12) goto label_181e48cd1;
                          if (pSVar22 == (System_String_o *)0x0) goto label_181e4a2f6;
                          bVar12 = System_String__Contains(pSVar22,pSVar19,(MethodInfo *)0x0);
label_181e48ccd:
                          if (bVar12 != false) goto label_181e48cd1;
                        }
                        local_res20[0] = local_res20[0] + 1;
                        pIVar28 = (Il2CppObject *)(ulonglong)local_res20[0];
                      }
                      if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
                      }
                      pUVar23 = (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)
                                TypeInfo_GameManagers_ChatManager_c->static_fields->__9__132_0;
                      if (pUVar23 == (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)0x0) {
                        if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
                        }
                        pIVar28 = (Il2CppObject *)TypeInfo_GameManagers_ChatManager_c->static_fields->__9;
                        pUVar23 = (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)
                                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Comparison_Player);
                        System_Comparison_object____ctor
                                  (pUVar23,pIVar28,
                                   (intptr_t)
                                   MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__132_0,
                                   (MethodInfo_C980B0 *)0x0);
                        TypeInfo_GameManagers_ChatManager_c->static_fields->__9__132_0 =
                             (System_Comparison_Player__o *)pUVar23;
                        Il2CppCodeGenWriteBarrier
                                  (&TypeInfo_GameManagers_ChatManager_c->static_fields->__9__132_0,pUVar23);
                      }
                      if (pSVar18 != (System_Collections_Generic_List_Player__o *)0x0) {
                        System_Collections_Generic_List_object___Sort_949260
                                  ((System_Collections_Generic_List_object__o *)pSVar18,
                                   (System_Comparison_T__o *)pUVar23,
                                   (MethodInfo_949260 *)MethodInfo_System_Collections_Generic_List_Player_Sort
                                  );
                        if (0 < (pSVar18->fields)._size) {
                          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                          }
                          local_148 = (undefined1  [8])0x0;
                          SStack_140.fields._dateData = (System_DateTime_Fields)0;
                          pSVar16 = GameManagers_ChatManager__GetColorString
                                              ("Matching players:",3,false,(MethodInfo *)0x0);
                          GameManagers_ChatManager__AddLine
                                    (pSVar16,3,true,(System_Nullable_DateTime__o *)local_148,-1,true,false,-1,
                                     false,(MethodInfo *)0x0);
                          if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
                          }
                          pSVar24 = TypeInfo_GameManagers_ChatManager_c->static_fields->__9__132_1;
                          if (pSVar24 == (System_Func_Player__string__o *)0x0) {
                            if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
                            }
                            pIVar28 = (Il2CppObject *)TypeInfo_GameManagers_ChatManager_c->static_fields->__9;
                            pSVar24 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_System_Func_Player_string);
                            System_Func_object__object____ctor
                                      ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)pSVar24,
                                       pIVar28,(intptr_t)
                                               MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__132_1
                                       ,(MethodInfo_16E67D0 *)0x0);
                            TypeInfo_GameManagers_ChatManager_c->static_fields->__9__132_1 = pSVar24;
                            Il2CppCodeGenWriteBarrier
                                      (&TypeInfo_GameManagers_ChatManager_c->static_fields->__9__132_1,pSVar24
                                      );
                          }
                          pSVar25 = System_Linq_Enumerable__Select_Vector3__object_
                                              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar18,
                                               (System_Func_TSource__TResult__o *)pSVar24,
                                               (MethodInfo_6C2170 *)
                                               MethodInfo_System_Linq_Enumerable_Select_Player_string);
                          pSVar17 = (System_Collections_Generic_List_string__o *)
                                    System_Linq_Enumerable__ToList_object_
                                              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar25,
                                               (MethodInfo_6C9C10 *)
                                               MethodInfo_System_Linq_Enumerable_ToList_string);
                          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                          }
                          GameManagers_ChatManager__ShowCommandSuggestions(pSVar17,(MethodInfo *)0x0);
                          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).
                              cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
                          }
                          pSVar17 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->
                                    Suggestions;
                          if (pSVar17 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e4a2f6;
                          piVar1 = &(pSVar17->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          iVar13 = (pSVar17->fields)._size;
                          (pSVar17->fields)._size = 0;
                          if (0 < iVar13) {
                            System_Array__Clear((System_Array_o *)(pSVar17->fields)._items,0,iVar13,
                                                (MethodInfo *)0x0);
                          }
                          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                                    ((System_Collections_Generic_List_Enumerator_T__o *)local_148,
                                     (System_Collections_Generic_List_T__o *)pSVar18,
                                     (MethodInfo_91F180 *)
                                     MethodInfo_System_Collections_Generic_List_Player_GetEnumerator);
                          local_118 = local_148;
                          uStack_110 = (ulonglong)SStack_140.fields._dateData;
                          local_108 = local_138;
                          while (bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                                    ((System_Collections_Generic_List_Enumerator_object__o *)
                                                     local_118,
                                                     (MethodInfo_153A2A0 *)
                                                     MethodInfo_System_Collections_Generic_List_Enumerator_Player_MoveNext
                                                    ), pSVar10 = local_108, bVar11) {
                            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).
                                cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
                            }
                            if (pSVar10 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                              ThrowNullReferenceException();
                            }
                            pSVar17 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->
                                      Suggestions;
                            local_res20[0] = *(uint *)&(pSVar10->fields)._entries;
                            pSVar16 = System_Int32__ToString((int32_t *)local_res20,(MethodInfo *)0x0);
                            pMVar9 = MethodInfo_System_Collections_Generic_List_string_Add;
                            if (pSVar17 == (System_Collections_Generic_List_string__o *)0x0) {
                              ThrowNullReferenceException();
                            }
                            piVar1 = &(pSVar17->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pSVar6 = (pSVar17->fields)._items;
                            if (pSVar6 == (System_String_array *)0x0) {
                              ThrowNullReferenceException();
                            }
                            uVar15 = (pSVar17->fields)._size;
                            if (uVar15 < (uint)pSVar6->max_length) {
                              (pSVar17->fields)._size = uVar15 + 1;
                              if ((uint)pSVar6->max_length <= uVar15) {
                                ThrowIndexOutOfRangeException();
                              }
                              pSVar6->m_Items[(int)uVar15] = pSVar16;
                              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar15,pSVar16);
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize
                                        ((System_Collections_Generic_List_object__o *)pSVar17,
                                         (Il2CppObject *)pSVar16,
                                         (MethodInfo_93DD50 *)pMVar9->klass->rgctx_data[0xe].method);
                            }
                          }
                          System_Collections_Generic_List_Enumerator_object___Dispose
                                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_118,
                                     MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose);
                        }
                        goto label_181e499c8;
                      }
                    }
                  }
                  goto label_181e4a2f6;
                }
              }
            }
          }
        }
      }
      goto label_181e499c8;
    }
    goto label_181e4a2f6;
  }
  bVar11 = System_String__Contains(input,"@",(MethodInfo *)0x0);
  if (bVar11) {
    iVar13 = System_String__LastIndexOf(input,0x40,(MethodInfo *)0x0);
    pSVar16 = System_String__Substring(input,iVar13 + 1,(MethodInfo *)0x0);
    if (pSVar16 == (System_String_o *)0x0) goto label_181e4a2f0;
    iVar14 = System_String__IndexOf(pSVar16,0x20,(MethodInfo *)0x0);
    if ((-1 < iVar14) || (bVar11 = System_String__IsNullOrWhiteSpace(pSVar16,(MethodInfo *)0x0), bVar11)) {
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick == false) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
      }
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = "";
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText,
                 "");
      return;
    }
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    bVar11 = System_String__op_Inequality
                       (pSVar16,TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText,
                        (MethodInfo *)0x0);
    if (!bVar11) goto label_181e499c8;
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick != false)
    goto label_181e499c8;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = pSVar16;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText,pSVar16);
    TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type = 2;
    TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex = -1;
    pSVar19 = System_String__Concat_1969e50("@",pSVar16,(MethodInfo *)0x0);
    GameManagers_ChatManager_SuggestionState__SetOriginalContext
              (pSVar19,iVar13,(pSVar16->fields)._stringLength + 1 + iVar13,(MethodInfo *)0x0);
    pSVar18 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Player);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar18,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Player_ctor);
    pSVar19 = System_String__ToLower(pSVar16,(MethodInfo *)0x0);
    pSVar20 = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_char_bool);
    System_Func_char__bool____ctor
              (pSVar20,(Il2CppObject *)0x0,(intptr_t)MethodInfo_System_Char_IsDigit,(MethodInfo_B61940 *)0x0);
    bVar11 = System_Linq_Enumerable__All_char_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar16,
                        (System_Func_TSource__bool__o *)pSVar20,
                        (MethodInfo_6B5A80 *)MethodInfo_System_Linq_Enumerable_All_char);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar21 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
    local_res20[0] = 0;
    if (pPVar21 == (Photon_Realtime_Player_array *)0x0) {
label_181e4a2f0:
      ThrowNullReferenceException();
    }
    while (uVar15 = (uint)pIVar28, (int)uVar15 < (int)pPVar21->max_length) {
      if ((uint)pPVar21->max_length <= uVar15) {
        ThrowIndexOutOfRangeException();
      }
      pPVar5 = pPVar21->m_Items[(int)uVar15];
      if (bVar11) {
        if (pPVar5 == (Photon_Realtime_Player_o *)0x0) goto label_181e4a2f0;
        local_160[0] = (pPVar5->fields).actorNumber;
        pSVar22 = System_Int32__ToString(local_160,(MethodInfo *)0x0);
        if (pSVar22 == (System_String_o *)0x0) goto label_181e4a2f0;
        bVar12 = System_String__StartsWith(pSVar22,pSVar16,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
        }
        pSVar22 = PhotonExtensions__GetStringProperty
                            (pPVar5,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                             "",(MethodInfo *)0x0);
        if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
        }
        pSVar22 = Anticheat_ChatFilter__FilterSizeTag(pSVar22,(MethodInfo *)0x0);
        if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
        }
        pSVar22 = MiscExtensions__StripRichText(pSVar22,(MethodInfo *)0x0);
        if ((pSVar22 == (System_String_o *)0x0) ||
           (pSVar22 = System_String__ToLower(pSVar22,(MethodInfo *)0x0), pSVar22 == (System_String_o *)0x0))
        goto label_181e4a2f0;
        bVar12 = System_String__Contains(pSVar22,pSVar19,(MethodInfo *)0x0);
      }
      if (bVar12 != false) {
        if (pSVar18 == (System_Collections_Generic_List_Player__o *)0x0) goto label_181e4a2f0;
        il2cpp_runtime_helper_180012890(pSVar18);
      }
      local_res20[0] = local_res20[0] + 1;
      pIVar28 = (Il2CppObject *)(ulonglong)local_res20[0];
    }
    if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
    }
    pUVar23 = (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)
              TypeInfo_GameManagers_ChatManager_c->static_fields->__9__132_3;
    if (pUVar23 == (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)0x0) {
      if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
      }
      pIVar28 = (Il2CppObject *)TypeInfo_GameManagers_ChatManager_c->static_fields->__9;
      pUVar23 = (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Comparison_Player);
      System_Comparison_object____ctor
                (pUVar23,pIVar28,(intptr_t)MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__132_3
                 ,(MethodInfo_C980B0 *)0x0);
      TypeInfo_GameManagers_ChatManager_c->static_fields->__9__132_3 = (System_Comparison_Player__o *)pUVar23;
      Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager_c->static_fields->__9__132_3,pUVar23);
    }
    if (pSVar18 == (System_Collections_Generic_List_Player__o *)0x0) goto label_181e4a2f0;
    System_Collections_Generic_List_object___Sort_949260
              ((System_Collections_Generic_List_object__o *)pSVar18,(System_Comparison_T__o *)pUVar23,
               (MethodInfo_949260 *)MethodInfo_System_Collections_Generic_List_Player_Sort);
    if (0 < (pSVar18->fields)._size) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      local_148 = (undefined1  [8])0x0;
      SStack_140.fields._dateData = (System_DateTime_Fields)0;
      pSVar16 = GameManagers_ChatManager__GetColorString("Matching players:",3,false,(MethodInfo *)0x0);
      GameManagers_ChatManager__AddLine
                (pSVar16,3,true,(System_Nullable_DateTime__o *)local_148,-1,true,false,-1,false,
                 (MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
      }
      pSVar24 = TypeInfo_GameManagers_ChatManager_c->static_fields->__9__132_4;
      if (pSVar24 == (System_Func_Player__string__o *)0x0) {
        if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
        }
        pIVar28 = (Il2CppObject *)TypeInfo_GameManagers_ChatManager_c->static_fields->__9;
        pSVar24 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Player_string);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)pSVar24,pIVar28,
                   (intptr_t)MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__132_4,
                   (MethodInfo_16E67D0 *)0x0);
        TypeInfo_GameManagers_ChatManager_c->static_fields->__9__132_4 = pSVar24;
        Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager_c->static_fields->__9__132_4,pSVar24);
      }
      pSVar25 = System_Linq_Enumerable__Select_Vector3__object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar18,
                           (System_Func_TSource__TResult__o *)pSVar24,
                           (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_Player_string);
      pSVar17 = (System_Collections_Generic_List_string__o *)
                System_Linq_Enumerable__ToList_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar25,
                           (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__ShowCommandSuggestions(pSVar17,(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      pSVar17 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
      if (pSVar17 != (System_Collections_Generic_List_string__o *)0x0) {
        piVar1 = &(pSVar17->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar13 = (pSVar17->fields)._size;
        (pSVar17->fields)._size = 0;
        if (0 < iVar13) {
          System_Array__Clear((System_Array_o *)(pSVar17->fields)._items,0,iVar13,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_148,
                   (System_Collections_Generic_List_T__o *)pSVar18,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Player_GetEnumerator);
        local_118 = local_148;
        uStack_110 = (ulonglong)SStack_140.fields._dateData;
        local_108 = local_138;
        while (bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_object__o *)local_118,
                                   (MethodInfo_153A2A0 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_Player_MoveNext),
              pSVar10 = local_108, bVar11) {
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          if (pSVar10 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar17 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
          local_res20[0] = *(uint *)&(pSVar10->fields)._entries;
          pSVar16 = System_Int32__ToString((int32_t *)local_res20,(MethodInfo *)0x0);
          pMVar9 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (pSVar17 == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          piVar1 = &(pSVar17->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (pSVar17->fields)._items;
          if (pSVar6 == (System_String_array *)0x0) {
            ThrowNullReferenceException();
          }
          uVar15 = (pSVar17->fields)._size;
          if (uVar15 < (uint)pSVar6->max_length) {
            (pSVar17->fields)._size = uVar15 + 1;
            if ((uint)pSVar6->max_length <= uVar15) {
              ThrowIndexOutOfRangeException();
            }
            pSVar6->m_Items[(int)uVar15] = pSVar16;
            Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar15,pSVar16);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar17,(Il2CppObject *)pSVar16,
                       (MethodInfo_93DD50 *)pMVar9->klass->rgctx_data[0xe].method);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_118,
                   MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose);
        goto label_181e499c8;
      }
      goto label_181e4a2f0;
    }
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick != false)
    goto label_181e499c8;
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
label_181e499c8:
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting = false;
  return;
}


// GameManagers.ChatManager$$ShowCommandSuggestions
// il2cpp: void GameManagers_ChatManager__ShowCommandSuggestions (System_Collections_Generic_List_string__o* suggestions, const MethodInfo* method);
// 0x181e51610
// eh: try 0x181e516c0..0x181e5186b -> pad 0x183331790 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e516cc: nop dword ptr [rax]
// asm:   0x181e51821: mov rcx, qword ptr [rip + 0x228cfa8]  ; TypeInfo_GameManagers_ChatManager
// asm:   0x181e51828: cmp dword ptr [rcx + 0xe4], 0
// asm:   0x181e5182f: jne 0x181e51836
// asm:   0x181e51831: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181e51836: xor ecx, ecx
// asm:   0x181e51838: call 0x181e44a50  ; GameManagers_ChatManager__EndLineBatch()
// asm:   0x181e5183d: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e51842: test rcx, rcx
// asm:   0x181e51845: jne 0x181e5186b
// asm:   0x181e5186b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183331790: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331795: push rbp
// asm:   0x183331796: sub rsp, 0x50
// asm:   0x18333179a: mov rbp, rdx
// asm:   0x18333179d: mov rax, qword ptr [rbp + 0x50]
// asm:   0x1833317a1: mov rcx, qword ptr [rax]
// asm:   0x1833317a4: mov qword ptr [rbp + 0x58], rcx
// asm:   0x1833317a8: movabs rax, 0
// asm:   0x1833317b2: add rsp, 0x50
// asm:   0x1833317b6: pop rbp
// asm:   0x1833317b7: ret 

void GameManagers_ChatManager__ShowCommandSuggestions
               (System_Collections_Generic_List_string__o *suggestions,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppObject *arg0;
  int index;
  int local_res8 [2];
  System_Nullable_DateTime__Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184344e4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    il2cpp_codegen_initialize_runtime_metadata(&"> ");
    il2cpp_codegen_initialize_runtime_metadata(&"<link=\"suggestion_{0}\">{1}</link>");
    il2cpp_codegen_initialize_runtime_metadata(&" <");
    Il2CppMethodInitialized_184344e4e = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__BeginLineBatch((MethodInfo *)0x0);
  index = 0;
  if (suggestions != (System_Collections_Generic_List_string__o *)0x0) {
    for (; index < (suggestions->fields)._size; index = index + 1) {
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      iVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex;
      pSVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)suggestions,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if (index == iVar1) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        str0 = GameManagers_ChatManager__GetColorString("> ",2,false,(MethodInfo *)0x0);
        str2 = GameManagers_ChatManager__GetColorString(" <",2,false,(MethodInfo *)0x0);
        pSVar2 = System_String__Concat_1969b70(str0,pSVar2,str2,(MethodInfo *)0x0);
      }
      local_res8[0] = index;
      arg0 = il2cpp_value_box(g_data_184354e08,local_res8);
      pSVar2 = System_String__Format_196d440
                         ("<link=\"suggestion_{0}\">{1}</link>",arg0,(Il2CppObject *)pSVar2,(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      local_38[0].hasValue = false;
      local_38[0]._1_7_ = 0;
      local_38[0].value.fields._dateData = (System_DateTime_Fields)0;
      GameManagers_ChatManager__AddLine
                (pSVar2,0,true,(System_Nullable_DateTime__o *)local_38,-1,true,false,-1,false,
                 (MethodInfo *)0x0);
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__EndLineBatch((MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$HandleTabComplete
// il2cpp: void GameManagers_ChatManager__HandleTabComplete (const MethodInfo* method);
// 0x181e46fa0

void GameManagers_ChatManager__HandleTabComplete(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  System_String_o *value;
  bool bVar3;
  int32_t iVar4;
  UI_ChatPanel_o *__this;
  System_String_o *pSVar5;
  System_String_o *suggestion;
  GameManagers_ChatManager_SuggestionState_StaticFields *pGVar6;
  
  if (Il2CppMethodInitialized_184344e4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_184344e4f = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  bVar3 = GameManagers_ChatManager_SuggestionState__get_IsActive((MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if ((__this == (UI_ChatPanel_o *)0x0) ||
     (pSVar5 = UI_ChatPanel__GetInputText(__this,(MethodInfo *)0x0), pSVar5 == (System_String_o *)0x0)) {
label_181e4742e:
    ThrowNullReferenceException();
  }
  bVar3 = System_String__StartsWith(pSVar5,"/",(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type == 2) goto label_181e47140;
  }
  bVar3 = System_String__StartsWith(pSVar5,"/",(MethodInfo *)0x0);
  if (!bVar3) {
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type == 1) {
label_181e47140:
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type == 3) goto label_181e47140;
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex =
       TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex + 1;
  pSVar2 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
  if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e4742e;
  if ((pSVar2->fields)._size <= TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex
     ) {
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex = 0;
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  pSVar2 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
  if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e4742e;
  suggestion = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,
                          TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar5 = GameManagers_ChatManager__BuildCompletedText(pSVar5,suggestion,(MethodInfo *)0x0);
  bVar3 = System_String__IsNullOrEmpty
                    (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText,
                     (MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    value = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText;
    TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText = value;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText,value);
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  if (Il2CppMethodInitialized_184344e65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_184344e65 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  iVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
  if (iVar1 == 1) {
label_181e4731a:
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    pGVar6 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) goto label_181e4734f;
      goto label_181e4731a;
    }
    if (pSVar5 == (System_String_o *)0x0) goto label_181e4742e;
    iVar4 = System_String__LastIndexOf(pSVar5,0x40,(MethodInfo *)0x0);
    if ((iVar4 < 0) || ((pSVar5->fields)._stringLength <= iVar4 + 1)) goto label_181e4734f;
    suggestion = System_String__Substring(pSVar5,iVar4 + 1,(MethodInfo *)0x0);
    if (suggestion == (System_String_o *)0x0) goto label_181e4742e;
    iVar4 = System_String__IndexOf(suggestion,0x20,(MethodInfo *)0x0);
    if (-1 < iVar4) {
      suggestion = System_String__Substring_1972740(suggestion,0,iVar4,(MethodInfo *)0x0);
    }
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    pGVar6 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
  }
  pGVar6->PartialText = suggestion;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText,suggestion);
label_181e4734f:
  GameManagers_ChatManager__RefreshSuggestionDisplay((MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting = true;
  UI_ChatPanel__SetTextAndPositionCaret(__this,pSVar5,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$HandleSuggestionClick
// il2cpp: void GameManagers_ChatManager__HandleSuggestionClick (int32_t suggestionIndex, const MethodInfo* method);
// 0x181e46ca0

void GameManagers_ChatManager__HandleSuggestionClick(int32_t suggestionIndex,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  GameManagers_ChatManager_o *__this;
  bool bVar2;
  UI_ChatPanel_o *__this_00;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  GameManagers_ChatManager__ReactivateInputAfterClick_d__136_o *routine;
  
  if (Il2CppMethodInitialized_184344e50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_184344e50 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  bVar2 = GameManagers_ChatManager_SuggestionState__get_IsActive((MethodInfo *)0x0);
  if ((bVar2) && (-1 < suggestionIndex)) {
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    pSVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
    if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) {
label_181e46f8e:
      ThrowNullReferenceException();
    }
    if (suggestionIndex < (pSVar1->fields)._size) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      __this_00 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        if (__this_00 != (UI_ChatPanel_o *)0x0) {
          pSVar3 = UI_ChatPanel__GetInputText(__this_00,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          pSVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
          if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
            pSVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,suggestionIndex,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_string_get_Item);
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            pSVar3 = GameManagers_ChatManager__BuildCompletedText(pSVar3,pSVar4,(MethodInfo *)0x0);
            bVar2 = System_String__IsNullOrEmpty
                              (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->
                               OriginalPartialText,(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
              }
              pSVar4 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText;
              TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText = pSVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->
                          OriginalPartialText,pSVar4);
            }
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex = suggestionIndex;
            TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting = true;
            TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick = true;
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__RefreshSuggestionDisplay((MethodInfo *)0x0);
            UI_ChatPanel__SetTextAndPositionCaret(__this_00,pSVar3,(MethodInfo *)0x0);
            if (TypeInfo_GameManagers_ChatManager->static_fields->_instance !=
                (GameManagers_ChatManager_o *)0x0) {
              __this = TypeInfo_GameManagers_ChatManager->static_fields->_instance;
              if (Il2CppMethodInitialized_184344e51 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_GameManagers_ChatManager_ReactivateInputAfterClick_d__136);
                Il2CppMethodInitialized_184344e51 = '\x01';
              }
              routine = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_GameManagers_ChatManager_ReactivateInputAfterClick_d__136);
              System_Object___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,
                         (MethodInfo *)0x0);
              (routine->fields).__1__state = 0;
              (routine->fields).chatPanel = __this_00;
              Il2CppCodeGenWriteBarrier(&(routine->fields).chatPanel,__this_00);
              UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
        goto label_181e46f8e;
      }
    }
  }
  return;
}


// GameManagers.ChatManager$$ReactivateInputAfterClick
// il2cpp: System_Collections_IEnumerator_o* GameManagers_ChatManager__ReactivateInputAfterClick (GameManagers_ChatManager_o* __this, UI_ChatPanel_o* chatPanel, const MethodInfo* method);
// 0x181e4da30

System_Collections_IEnumerator_o *
GameManagers_ChatManager__ReactivateInputAfterClick
          (GameManagers_ChatManager_o *__this,UI_ChatPanel_o *chatPanel,MethodInfo *method)

{
  GameManagers_ChatManager__ReactivateInputAfterClick_d__136_o *__this_00;
  
  if (Il2CppMethodInitialized_184344e51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_ChatManager_ReactivateInputAfterClick_d__136);
    Il2CppMethodInitialized_184344e51 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_ReactivateInputAfterClick_d__136);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).chatPanel = chatPanel;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).chatPanel,chatPanel);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.ChatManager$$BuildCompletedText
// il2cpp: System_String_o* GameManagers_ChatManager__BuildCompletedText (System_String_o* currentInput, System_String_o* suggestion, const MethodInfo* method);
// 0x181e43560
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e43697: mov qword ptr [rsp + 0x48], rdi
// asm:   0x181e4369c: lea edi, [rsi + 1]
// asm:   0x181e4369f: nop 
// asm:   0x181e436cb: inc edi
// asm:   0x181e436cd: jmp 0x181e436a0
// asm:   0x181e436f6: mov rax, qword ptr [rip + 0x223b82b]  ; ""

System_String_o *
GameManagers_ChatManager__BuildCompletedText
          (System_String_o *currentInput,System_String_o *suggestion,MethodInfo *method)

{
  int iVar1;
  uint16_t uVar2;
  int32_t index;
  System_String_o *pSVar3;
  System_String_o *str0;
  int32_t length;
  
  if (Il2CppMethodInitialized_184344e52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"@");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e52 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  iVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
  pSVar3 = "/";
  if (iVar1 == 1) {
label_181e43729:
    pSVar3 = System_String__Concat_1969e50(pSVar3,suggestion,(MethodInfo *)0x0);
    return pSVar3;
  }
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      return currentInput;
    }
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    if (currentInput != (System_String_o *)0x0) {
      pSVar3 = System_String__Substring_1972740
                         (currentInput,0,
                          TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalStartPos,
                          (MethodInfo *)0x0);
      goto label_181e43729;
    }
    goto label_181e4374a;
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  index = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalStartPos;
  if (index < 0) {
label_181e43674:
    if (currentInput == (System_String_o *)0x0) {
label_181e4374a:
      ThrowNullReferenceException();
    }
  }
  else {
    if (currentInput == (System_String_o *)0x0) goto label_181e4374a;
    if (index < (currentInput->fields)._stringLength) {
      uVar2 = System_String__get_Chars(currentInput,index,(MethodInfo *)0x0);
      length = index;
      if (uVar2 == 0x40) goto label_181e436a0;
      goto label_181e43674;
    }
  }
  index = System_String__LastIndexOf(currentInput,0x40,(MethodInfo *)0x0);
  length = index;
  if (index < 0) {
    return currentInput;
  }
label_181e436a0:
  do {
    index = index + 1;
    if (((currentInput->fields)._stringLength <= index) ||
       (uVar2 = System_String__get_Chars(currentInput,index,(MethodInfo *)0x0), uVar2 == 0x20)) break;
    uVar2 = System_String__get_Chars(currentInput,index,(MethodInfo *)0x0);
  } while (uVar2 != 9);
  str0 = System_String__Substring_1972740(currentInput,0,length,(MethodInfo *)0x0);
  pSVar3 = "";
  if (index < (currentInput->fields)._stringLength) {
    pSVar3 = System_String__Substring(currentInput,index,(MethodInfo *)0x0);
  }
  pSVar3 = System_String__Concat_1969590(str0,"@",suggestion,pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}


// GameManagers.ChatManager$$RefreshSuggestionDisplay
// il2cpp: void GameManagers_ChatManager__RefreshSuggestionDisplay (const MethodInfo* method);
// 0x181e4e720
// eh: try 0x181e4e765..0x181e4e782 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4e7a0: mov rcx, qword ptr [rip + 0x2290029]  ; TypeInfo_GameManagers_ChatManager
// asm:   0x181e4e7a7: cmp dword ptr [rcx + 0xe4], 0
// asm:   0x181e4e7ae: jne 0x181e4e7b5
// asm:   0x181e4e7b0: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181e4e7b5: xor ecx, ecx
// asm:   0x181e4e7b7: call 0x181e44a50  ; GameManagers_ChatManager__EndLineBatch()
// asm:   0x181e4e7bc: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e4e7c1: test rcx, rcx
// asm:   0x181e4e7c4: jne 0x181e4e7cb
// asm:   0x181e4e7cb: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void GameManagers_ChatManager__RefreshSuggestionDisplay(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344e53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_184344e53 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__BeginLineBatch((MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__RefreshSuggestionDisplayInternal((MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__EndLineBatch((MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$RefreshSuggestionDisplayInternal
// il2cpp: void GameManagers_ChatManager__RefreshSuggestionDisplayInternal (const MethodInfo* method);
// 0x181e4dc20
// eh: try 0x181e4de61..0x181e4e711 -> pad 0x18333cc10 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 64 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4ddf4: jmp 0x181e4e5d8
// asm:   0x181e4e151: mov rdx, qword ptr [rip + 0x22497c0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x181e4e158: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e4e15d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e4e162: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e4e167: test rcx, rcx
// asm:   0x181e4e16a: jne 0x181e4e6ef
// asm:   0x181e4e170: xor r15d, r15d
// asm:   0x181e4e173: mov r14, qword ptr [rsp + 0xa8]
// asm:   0x181e4e17b: mov rcx, qword ptr [rip + 0x22827ee]  ; TypeInfo_GameManagers_ChatManager_SuggestionState
// asm:   0x181e4e376: mov rdx, qword ptr [rip + 0x224959b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x181e4e37d: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e4e382: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e4e387: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e4e38c: test rcx, rcx
// asm:   0x181e4e38f: jne 0x181e4e700
// asm:   0x181e4e395: xor r15d, r15d
// asm:   0x181e4e398: mov r14, qword ptr [rsp + 0xa8]
// asm:   0x181e4e3a0: mov rcx, qword ptr [rip + 0x22825c9]  ; TypeInfo_GameManagers_ChatManager_SuggestionState
// asm:   0x181e4e5a3: mov rdx, qword ptr [rip + 0x224936e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x181e4e5aa: mov rcx, qword ptr [rsp + 0x88]
// asm:   0x181e4e5b2: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e4e5b7: mov rcx, qword ptr [rsp + 0x80]
// asm:   0x181e4e5bf: test rcx, rcx
// asm:   0x181e4e5c2: jne 0x181e4e711
// asm:   0x181e4e5c8: xor r15d, r15d
// asm:   0x181e4e5cb: mov r12, qword ptr [rsp + 0x50]
// asm:   0x181e4e5d0: mov r14, qword ptr [rsp + 0xa8]
// asm:   0x181e4e6ef: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e4e700: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e4e711: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333cc10: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333cc15: push rbp
// asm:   0x18333cc16: sub rsp, 0x50
// asm:   0x18333cc1a: mov rbp, rdx
// asm:   0x18333cc1d: mov rax, qword ptr [rbp + 0xb0]
// asm:   0x18333cc24: mov rcx, qword ptr [rax]
// asm:   0x18333cc27: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333cc2b: movabs rax, 0
// asm:   0x18333cc35: add rsp, 0x50
// asm:   0x18333cc39: pop rbp
// asm:   0x18333cc3a: ret 
// asm:   0x18333cc40: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333cc45: push rbp
// asm:   0x18333cc46: sub rsp, 0x50
// asm:   0x18333cc4a: mov rbp, rdx
// asm:   0x18333cc4d: mov rax, qword ptr [rbp + 0xb8]
// asm:   0x18333cc54: mov rcx, qword ptr [rax]
// asm:   0x18333cc57: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333cc5b: movabs rax, 0
// asm:   0x18333cc65: add rsp, 0x50
// asm:   0x18333cc69: pop rbp
// asm:   0x18333cc6a: ret 
// asm:   0x18333cc70: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333cc75: push rbp
// asm:   0x18333cc76: sub rsp, 0x50
// asm:   0x18333cc7a: mov rbp, rdx
// asm:   0x18333cc7d: mov rax, qword ptr [rbp + 0xc0]
// asm:   0x18333cc84: mov rcx, qword ptr [rax]
// asm:   0x18333cc87: mov qword ptr [rbp + 0x80], rcx
// asm:   0x18333cc8e: movabs rax, 0
// asm:   0x18333cc98: add rsp, 0x50
// asm:   0x18333cc9c: pop rbp
// asm:   0x18333cc9d: ret 

void GameManagers_ChatManager__RefreshSuggestionDisplayInternal(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  void *pvVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  bool bVar4;
  System_Collections_Generic_List_string__o *suggestions;
  System_Text_StringBuilder_o *pSVar5;
  System_String_o *pSVar6;
  Photon_Realtime_Room_o *pPVar7;
  Photon_Realtime_Player_o *pPVar8;
  Il2CppObject *pIVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  uint uVar12;
  int32_t local_res10 [2];
  int32_t local_res18 [2];
  int32_t local_res20 [2];
  undefined1 local_98 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_90;
  System_String_o *local_88;
  undefined1 local_78 [8];
  System_DateTime_o SStack_70;
  System_String_o *local_68;
  Il2CppObject *local_58;
  System_Collections_Generic_List_string__o *local_50;
  
  if (Il2CppMethodInitialized_184344e54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"Matching players:");
    il2cpp_codegen_initialize_runtime_metadata(&"[{0}]");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e54 = '\x01';
  }
  local_98 = (undefined1  [8])0x0;
  pUStack_90 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_88 = (System_String_o *)0x0;
  local_58 = (Il2CppObject *)0x0;
  local_res10[0] = 0;
  local_res18[0] = 0;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar4 = GameManagers_ChatManager__RemoveSuggestionLines((MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    TypeInfo_GameManagers_ChatManager->static_fields->_pendingBatchSync = true;
  }
  pSVar11 = "";
  suggestions = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)suggestions,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  local_50 = suggestions;
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  pSVar6 = "Matching players:";
  iVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
  if (iVar1 == 1) {
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    pSVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
    if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) {
label_181e4e68d:
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
               (System_Collections_Generic_List_T__o *)pSVar3,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_98 = local_78;
    pUStack_90 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)SStack_70.fields._dateData;
    local_88 = local_68;
    while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_98,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
          pSVar6 = local_88, bVar4) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
      if (pSVar5 == (System_Text_StringBuilder_o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Text_StringBuilder__Clear(pSVar5,(MethodInfo *)0x0);
      pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
      if (pSVar5 == (System_Text_StringBuilder_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar5 = System_Text_StringBuilder__Append_197e090(pSVar5,0x2f,(MethodInfo *)0x0);
      if (pSVar5 == (System_Text_StringBuilder_o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Text_StringBuilder__Append_197dca0(pSVar5,pSVar6,(MethodInfo *)0x0);
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this,(Il2CppObject *)pSVar6,&local_58,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
                        );
      if (bVar4) {
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if (local_58[3].monitor == (void *)0x0) {
          ThrowNullReferenceException();
        }
        if (*(longlong *)((longlong)local_58[3].monitor + 0x18) != 0) {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
          if (pSVar5 == (System_Text_StringBuilder_o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Text_StringBuilder__Append_197e090(pSVar5,0x20,(MethodInfo *)0x0);
          uVar12 = 0;
          while( true ) {
            if (local_58 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            if (local_58[3].monitor == (void *)0x0) {
              ThrowNullReferenceException();
            }
            if (*(int *)((longlong)local_58[3].monitor + 0x18) <= (int)uVar12) break;
            if (0 < (int)uVar12) {
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
              if (pSVar5 == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Text_StringBuilder__Append_197e090(pSVar5,0x20,(MethodInfo *)0x0);
            }
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
            if (pSVar5 == (System_Text_StringBuilder_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar5 = System_Text_StringBuilder__Append_197e090(pSVar5,0x5b,(MethodInfo *)0x0);
            if (local_58 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pvVar2 = local_58[3].monitor;
            if (pvVar2 == (void *)0x0) {
              ThrowNullReferenceException();
            }
            if (*(uint *)((longlong)pvVar2 + 0x18) <= uVar12) {
              ThrowIndexOutOfRangeException();
            }
            if (pSVar5 == (System_Text_StringBuilder_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar5 = System_Text_StringBuilder__Append_197dca0
                               (pSVar5,*(System_String_o **)
                                        ((longlong)pvVar2 + (longlong)(int)uVar12 * 8 + 0x20),
                                (MethodInfo *)0x0);
            if (pSVar5 == (System_Text_StringBuilder_o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Text_StringBuilder__Append_197e090(pSVar5,0x5d,(MethodInfo *)0x0);
            uVar12 = uVar12 + 1;
          }
        }
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
      if (pSVar5 == (System_Text_StringBuilder_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                         (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
      pSVar6 = GameManagers_ChatManager__GetColorString(pSVar6,2,false,(MethodInfo *)0x0);
      if (suggestions == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      il2cpp_runtime_helper_180012890(suggestions,pSVar6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98,
               MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  }
  else if (iVar1 == 2) {
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    pSVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
    if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e4e68d;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
               (System_Collections_Generic_List_T__o *)pSVar3,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_98 = local_78;
    pUStack_90 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)SStack_70.fields._dateData;
    local_88 = local_68;
    local_78 = (undefined1  [8])0x0;
    SStack_70.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)local_98;
    while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_98,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext), bVar4) {
      bVar4 = System_Int32__TryParse(local_88,local_res18,(MethodInfo *)0x0);
      if (bVar4) {
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        pPVar7 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        if (pPVar7 == (Photon_Realtime_Room_o *)0x0) {
          ThrowNullReferenceException();
        }
        pPVar8 = (*(pPVar7->klass->vtable)._10_GetPlayer.methodPtr)
                           (pPVar7,local_res18[0],false,(pPVar7->klass->vtable)._10_GetPlayer.method);
        if (pPVar8 != (Photon_Realtime_Player_o *)0x0) {
          if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
          }
          pSVar11 = PhotonExtensions__GetStringProperty
                              (pPVar8,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                               "",(MethodInfo *)0x0);
          if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
          }
          pSVar11 = Anticheat_ChatFilter__FilterSizeTag(pSVar11,(MethodInfo *)0x0);
          local_res20[0] = local_res18[0];
          pIVar9 = il2cpp_value_box(g_data_184354e08,local_res20);
          pSVar10 = System_String__Format("[{0}]",pIVar9,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar10 = GameManagers_ChatManager__GetColorString(pSVar10,1,false,(MethodInfo *)0x0);
          pSVar11 = System_String__Concat_1969b70(pSVar10," ",pSVar11,(MethodInfo *)0x0);
          if (suggestions == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(suggestions,pSVar11);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98,
               MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    pSVar11 = pSVar6;
  }
  else if (iVar1 == 3) {
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    pSVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
    if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e4e68d;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
               (System_Collections_Generic_List_T__o *)pSVar3,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_98 = local_78;
    pUStack_90 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)SStack_70.fields._dateData;
    local_88 = local_68;
    while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_98,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext), bVar4) {
      bVar4 = System_Int32__TryParse(local_88,local_res10,(MethodInfo *)0x0);
      if (bVar4) {
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        pPVar7 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        if (pPVar7 == (Photon_Realtime_Room_o *)0x0) {
          ThrowNullReferenceException();
        }
        pPVar8 = (*(pPVar7->klass->vtable)._10_GetPlayer.methodPtr)
                           (pPVar7,local_res10[0],false,(pPVar7->klass->vtable)._10_GetPlayer.method);
        if (pPVar8 != (Photon_Realtime_Player_o *)0x0) {
          if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
          }
          pSVar11 = PhotonExtensions__GetStringProperty
                              (pPVar8,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                               "",(MethodInfo *)0x0);
          if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
          }
          pSVar11 = Anticheat_ChatFilter__FilterSizeTag(pSVar11,(MethodInfo *)0x0);
          local_res20[0] = local_res10[0];
          pIVar9 = il2cpp_value_box(g_data_184354e08,local_res20);
          pSVar10 = System_String__Format("[{0}]",pIVar9,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar10 = GameManagers_ChatManager__GetColorString(pSVar10,1,false,(MethodInfo *)0x0);
          pSVar11 = System_String__Concat_1969b70(pSVar10," ",pSVar11,(MethodInfo *)0x0);
          if (suggestions == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(suggestions,pSVar11);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98,
               MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    pSVar11 = pSVar6;
  }
  bVar4 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    local_78 = (undefined1  [8])0x0;
    SStack_70.fields._dateData = (System_DateTime_Fields)0;
    pSVar11 = GameManagers_ChatManager__GetColorString(pSVar11,3,false,(MethodInfo *)0x0);
    GameManagers_ChatManager__AddLine
              (pSVar11,3,true,(System_Nullable_DateTime__o *)local_78,-1,true,false,-1,false,(MethodInfo *)0x0
              );
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__ShowCommandSuggestions(suggestions,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$RemoveSuggestionLines
// il2cpp: bool GameManagers_ChatManager__RemoveSuggestionLines (const MethodInfo* method);
// 0x181e4f390
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4f40d: nop dword ptr [rax]
// asm:   0x181e4f46b: sub ebx, 1
// asm:   0x181e4f46e: js 0x181e4f479
// asm:   0x181e4f470: mov rax, qword ptr [rip + 0x228f359]  ; TypeInfo_GameManagers_ChatManager
// asm:   0x181e4f477: jmp 0x181e4f410

bool GameManagers_ChatManager__RemoveSuggestionLines(MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_T__o *__this;
  int8_t iVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184344e55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Item);
    Il2CppMethodInitialized_184344e55 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    index = (pSVar1->fields)._size;
    bVar3 = false;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return bVar3;
      }
      if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      __this = (System_Collections_Generic_List_T__o *)
               TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags;
      if (__this == (System_Collections_Generic_List_T__o *)0x0) break;
      iVar2 = System_Collections_Generic_List_sbyte___get_Item
                        (__this,index,
                         (MethodInfo_9839D0 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
      if (iVar2 != '\0') {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__RemoveLineAt(index,(MethodInfo *)0x0);
        bVar3 = true;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$ClearLastSuggestions
// il2cpp: void GameManagers_ChatManager__ClearLastSuggestions (const MethodInfo* method);
// 0x181e43ee0

void GameManagers_ChatManager__ClearLastSuggestions(MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_string__o *pSVar2;
  bool bVar3;
  UI_ChatPanel_o *__this;
  
  if (Il2CppMethodInitialized_184344e56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_184344e56 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar3 = GameManagers_ChatManager__RemoveSuggestionLines((MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  if (Il2CppMethodInitialized_184344e69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e69 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = "";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText,
             "");
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalText = "";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalText,
             "");
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalStartPos = -1;
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalEndPos = -1;
  pSVar2 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
  if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar2->fields)._size;
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex = -1;
    TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type = 0;
    if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick == false) {
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting = false;
    }
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText =
         "";
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText,
               "");
    if (bVar3) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      if (0 < TypeInfo_GameManagers_ChatManager->static_fields->_lineBatchDepth) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        TypeInfo_GameManagers_ChatManager->static_fields->_pendingBatchSync = true;
        return;
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      bVar3 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        __this = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if (__this != (UI_ChatPanel_o *)0x0) {
            UI_ChatPanel__Sync(__this,(MethodInfo *)0x0);
            return;
          }
          goto label_181e441e5;
        }
      }
    }
    return;
  }
label_181e441e5:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$ForceSuggestionRefresh
// il2cpp: void GameManagers_ChatManager__ForceSuggestionRefresh (const MethodInfo* method);
// 0x181e44bc0

void GameManagers_ChatManager__ForceSuggestionRefresh(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344e57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    il2cpp_codegen_initialize_runtime_metadata(&"##FORCE_REFRESH##");
    Il2CppMethodInitialized_184344e57 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = "##FORCE_REFRESH##";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText,
             "##FORCE_REFRESH##");
  return;
}


// GameManagers.ChatManager$$SendPrivateMessage
// il2cpp: void GameManagers_ChatManager__SendPrivateMessage (Photon_Realtime_Player_o* target, System_String_o* message, const MethodInfo* method);
// 0x181e50f40

void GameManagers_ChatManager__SendPrivateMessage
               (Photon_Realtime_Player_o *target,System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *pSVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  int32_t local_res8 [2];
  int32_t local_res20 [2];
  System_DateTime_Fields local_58;
  int64_t local_50;
  System_Nullable_DateTime__Fields local_48 [2];
  
  if (Il2CppMethodInitialized_184344e58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid private message target.");
    il2cpp_codegen_initialize_runtime_metadata(&"PrivateChatRPC");
    Il2CppMethodInitialized_184344e58 = '\x01';
  }
  local_58._dateData = 0;
  if (target == (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    local_48[0].hasValue = false;
    local_48[0]._1_7_ = 0;
    local_48[0].value.fields._dateData = (System_DateTime_Fields)0;
    GameManagers_ChatManager__AddLine
              ("Invalid private message target.",4,false,(System_Nullable_DateTime__o *)local_48,-1,false,false,-1,false,
               (MethodInfo *)0x0);
    return;
  }
  pPVar1 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  targetPlayer = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  pSVar2 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
  if (pSVar2 == (System_Object_array *)0x0) goto label_181e513ae;
  if (message != (System_String_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)message,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = (Il2CppObject *)message;
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items,message);
    local_res8[0] = (target->fields).actorNumber;
    pIVar3 = il2cpp_value_box(g_data_184354e08,local_res8);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pSVar2->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)pSVar2->max_length) {
      pSVar2->m_Items[1] = pIVar3;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pIVar3);
      if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
      }
      local_58._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
      local_50 = System_DateTime__get_Ticks((System_DateTime_o *)&local_58,(MethodInfo *)0x0);
      pIVar3 = il2cpp_value_box(g_data_184354e28,&local_50);
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pSVar2->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = pIVar3;
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pIVar3);
        if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_1d4d8d0
                    (pPVar1,"PrivateChatRPC",targetPlayer,pSVar2,(MethodInfo *)0x0);
          pPVar1 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
          pSVar2 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
          if (pSVar2 != (System_Object_array *)0x0) {
            if (message != (System_String_o *)0x0) {
              pIVar3 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)message,(((pSVar2->obj).klass)->_1).element_class);
              if (pIVar3 == (Il2CppObject *)0x0) {
                pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
              }
            }
            if ((int)pSVar2->max_length != 0) {
              pSVar2->m_Items[0] = (Il2CppObject *)message;
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items,message);
              local_res20[0] = (target->fields).actorNumber;
              pIVar3 = il2cpp_value_box(g_data_184354e08,local_res20);
              if (pIVar3 != (Il2CppObject *)0x0) {
                pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pSVar2->obj).klass)->_1).element_class);
                if (pIVar4 == (Il2CppObject *)0x0) {
                  pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                }
              }
              if (1 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[1] = pIVar3;
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pIVar3);
                local_58._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
                local_48[0]._0_8_ =
                     System_DateTime__get_Ticks((System_DateTime_o *)&local_58,(MethodInfo *)0x0);
                pIVar3 = il2cpp_value_box(g_data_184354e28,local_48);
                if (pIVar3 != (Il2CppObject *)0x0) {
                  pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pSVar2->obj).klass)->_1).element_class);
                  if (pIVar4 == (Il2CppObject *)0x0) {
                    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                  }
                }
                if (2 < (uint)pSVar2->max_length) {
                  pSVar2->m_Items[2] = pIVar3;
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pIVar3);
                  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
                    Photon_Pun_PhotonView__RPC_1d4d8d0
                              (pPVar1,"PrivateChatRPC",target,pSVar2,(MethodInfo *)0x0);
                    return;
                  }
                  goto label_181e513ae;
                }
              }
            }
            goto label_181e513a8;
          }
        }
label_181e513ae:
        ThrowNullReferenceException();
      }
    }
  }
label_181e513a8:
  ThrowIndexOutOfRangeException();
}


// GameManagers.ChatManager$$OnPrivateChatRPC
// il2cpp: void GameManagers_ChatManager__OnPrivateChatRPC (System_String_o* message, int32_t targetID, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e4c900

void GameManagers_ChatManager__OnPrivateChatRPC
               (System_String_o *message,int32_t targetID,int64_t senderTimestamp,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  int pmPartnerID;
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_DateTime_o SVar3;
  bool bVar4;
  Photon_Realtime_Player_o *pPVar5;
  UI_ChatPanel_o *pUVar6;
  Photon_Realtime_Room_o *pPVar7;
  System_DateTime_o local_28 [2];
  
  if (Il2CppMethodInitialized_184344e59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344e59 = '\x01';
  }
  local_28[0].fields._dateData = (System_DateTime_Fields)0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((pPVar5 != (Photon_Realtime_Player_o *)0x0) &&
     (pPVar2 = (info->fields).Sender, pPVar2 != (Photon_Realtime_Player_o *)0x0)) {
    pmPartnerID = (pPVar2->fields).actorNumber;
    iVar1 = (pPVar5->fields).actorNumber;
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    System_DateTime___ctor_1b20b80(local_28,senderTimestamp,1,(MethodInfo *)0x0);
    SVar3.fields._dateData = local_28[0].fields._dateData;
    if (iVar1 == pmPartnerID) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar7 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if (pPVar7 == (Photon_Realtime_Room_o *)0x0) goto label_181e4cbac;
      pPVar5 = (*(pPVar7->klass->vtable)._10_GetPlayer.methodPtr)
                         (pPVar7,targetID,false,(pPVar7->klass->vtable)._10_GetPlayer.method);
      SVar3.fields._dateData = local_28[0].fields._dateData;
      if (pPVar5 != (Photon_Realtime_Player_o *)0x0) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__AddPlayerLine
                  ((info->fields).Sender,message,7,SVar3,true,targetID,(MethodInfo *)0x0);
        pUVar6 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          if (pUVar6 == (UI_ChatPanel_o *)0x0) goto label_181e4cbac;
          if ((pUVar6->fields)._inPMMode == false) {
            UI_ChatPanel__EnterPMMode(pUVar6,pPVar5,(MethodInfo *)0x0);
          }
        }
      }
    }
    else if (iVar1 == targetID) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__AddPlayerLine
                ((info->fields).Sender,message,7,SVar3,true,pmPartnerID,(MethodInfo *)0x0);
      pUVar6 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar4) && (pPVar5 = (info->fields).Sender, pPVar5 != (Photon_Realtime_Player_o *)0x0)) {
        if (pUVar6 == (UI_ChatPanel_o *)0x0) goto label_181e4cbac;
        UI_ChatPanel__AddPMPartner(pUVar6,pPVar5,(MethodInfo *)0x0);
        if ((pUVar6->fields)._inPMMode != false) {
          pPVar2 = (pUVar6->fields)._currentPMTarget;
          if (pPVar2 == (Photon_Realtime_Player_o *)0x0) goto label_181e4cbac;
          if ((pPVar2->fields).actorNumber == (pPVar5->fields).actorNumber) {
            return;
          }
        }
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__ShowPMNotification(pPVar5,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181e4cbac:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$ResetAllPMState
// il2cpp: void GameManagers_ChatManager__ResetAllPMState (const MethodInfo* method);
// 0x181e4f960

void GameManagers_ChatManager__ResetAllPMState(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_bool__o *pSVar3;
  System_Collections_Generic_List_int__o *pSVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  System_Collections_Generic_List_T__o *__this;
  System_Object_array *pSVar6;
  System_Collections_Generic_List_uint__o *__this_00;
  System_UInt32_array *pSVar7;
  MethodInfo *pMVar8;
  bool bVar9;
  UI_ChatPanel_o *__this_01;
  int iVar10;
  
  if (Il2CppMethodInitialized_184344e5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344e5a = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this_01 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    if (__this_01 == (UI_ChatPanel_o *)0x0) goto label_181e4fbc6;
    UI_ChatPanel__ResetPMState(__this_01,(MethodInfo *)0x0);
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar3 = TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
  if (pSVar3 != (System_Collections_Generic_List_bool__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar10 = 0;
    (pSVar3->fields)._size = 0;
    pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
    if (pSVar4 != (System_Collections_Generic_List_int__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar4->fields)._size = 0;
      do {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
        if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) break;
        if ((pSVar5->fields)._size <= iVar10) {
          return;
        }
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pMVar8 = MethodInfo_System_Collections_Generic_List_bool_Add;
        __this = (System_Collections_Generic_List_T__o *)
                 TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
        if (__this == (System_Collections_Generic_List_T__o *)0x0) break;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this->fields)._items;
        if (pSVar6 == (System_Object_array *)0x0) break;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar6->max_length) {
          (__this->fields)._size = uVar2 + 1;
          if ((uint)pSVar6->max_length <= uVar2) {
label_181e4fbc0:
            ThrowIndexOutOfRangeException();
          }
          *(undefined1 *)((longlong)pSVar6->m_Items + (longlong)(int)uVar2) = 0;
        }
        else {
          System_Collections_Generic_List_sbyte___AddWithResize
                    (__this,'\0',(MethodInfo_974010 *)pMVar8->klass->rgctx_data[0xe].method);
        }
        pMVar8 = MethodInfo_System_Collections_Generic_List_int_Add;
        __this_00 = (System_Collections_Generic_List_uint__o *)
                    TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
        if (__this_00 == (System_Collections_Generic_List_uint__o *)0x0) break;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (__this_00->fields)._items;
        if (pSVar7 == (System_UInt32_array *)0x0) break;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar7->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          if ((uint)pSVar7->max_length <= uVar2) goto label_181e4fbc0;
          pSVar7->m_Items[(int)uVar2] = 0xffffffff;
          iVar10 = iVar10 + 1;
        }
        else {
          System_Collections_Generic_List_uint___AddWithResize
                    (__this_00,0xffffffff,(MethodInfo_91A500 *)pMVar8->klass->rgctx_data[0xe].method);
          iVar10 = iVar10 + 1;
        }
      } while( true );
    }
  }
label_181e4fbc6:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$SyncPMPartnersOnJoin
// il2cpp: void GameManagers_ChatManager__SyncPMPartnersOnJoin (const MethodInfo* method);
// 0x181e51c90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e51e77: mov rbx, qword ptr [rsp + 0x30]
// asm:   0x181e51e7c: mov rsi, qword ptr [rsp + 0x38]

void GameManagers_ChatManager__SyncPMPartnersOnJoin(MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_T__o *__this;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  bool bVar2;
  int8_t iVar3;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o SVar4;
  UI_ChatPanel_o *__this_01;
  Photon_Realtime_Room_o *pPVar5;
  Photon_Realtime_Player_o *player;
  int index;
  
  if (Il2CppMethodInitialized_184344e5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344e5b = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this_01 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (__this_01 != (UI_ChatPanel_o *)0x0) {
    UI_ChatPanel__ResetPMState(__this_01,(MethodInfo *)0x0);
    index = 0;
    while( true ) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
      if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) break;
      if ((pSVar1->fields)._size <= index) {
        return;
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      __this = (System_Collections_Generic_List_T__o *)
               TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
      if (__this == (System_Collections_Generic_List_T__o *)0x0) break;
      iVar3 = System_Collections_Generic_List_sbyte___get_Item
                        (__this,index,
                         (MethodInfo_9839D0 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
      if (iVar3 != '\0') {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        __this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                    TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
        if (__this_00 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) break;
        SVar4 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                          (__this_00,index,
                           (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        pPVar5 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        if (pPVar5 == (Photon_Realtime_Room_o *)0x0) break;
        player = (*(pPVar5->klass->vtable)._10_GetPlayer.methodPtr)
                           (pPVar5,(int32_t)SVar4.fields,false,(pPVar5->klass->vtable)._10_GetPlayer.method);
        if (player != (Photon_Realtime_Player_o *)0x0) {
          UI_ChatPanel__AddPMPartner(__this_01,player,(MethodInfo *)0x0);
        }
      }
      index = index + 1;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$GetPlayerIdentifier
// il2cpp: System_String_o* GameManagers_ChatManager__GetPlayerIdentifier (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181e45af0

System_String_o *
GameManagers_ChatManager__GetPlayerIdentifier(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Il2CppObject *arg0;
  Il2CppObject *arg0_00;
  System_String_o *pSVar1;
  System_String_o *str2;
  int32_t local_res8 [2];
  int32_t local_res18 [2];
  
  if (Il2CppMethodInitialized_184344e5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"<link=\"{0}\">{1}</link>");
    il2cpp_codegen_initialize_runtime_metadata(&"[{0}]");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e5c = '\x01';
  }
  if (player != (Photon_Realtime_Player_o *)0x0) {
    local_res8[0] = (player->fields).actorNumber;
    arg0 = il2cpp_value_box(g_data_184354e08,local_res8);
    local_res18[0] = (player->fields).actorNumber;
    arg0_00 = il2cpp_value_box(g_data_184354e08,local_res18);
    pSVar1 = System_String__Format("[{0}]",arg0_00,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar1 = GameManagers_ChatManager__GetColorString(pSVar1,1,false,(MethodInfo *)0x0);
    pSVar1 = System_String__Format_196d440
                       ("<link=\"{0}\">{1}</link>",arg0,(Il2CppObject *)pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    str2 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                      (MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969b70(pSVar1," ",str2,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$ShowPMNotification
// il2cpp: void GameManagers_ChatManager__ShowPMNotification (Photon_Realtime_Player_o* senderPlayer, const MethodInfo* method);
// 0x181e51880

void GameManagers_ChatManager__ShowPMNotification(Photon_Realtime_Player_o *senderPlayer,MethodInfo *method)

{
  int32_t item;
  System_Collections_Generic_HashSet_int__o *pSVar1;
  bool bVar2;
  System_DateTime_o value;
  System_String_o *str0;
  Il2CppObject *arg0;
  Il2CppObject *arg0_00;
  System_String_o *pSVar3;
  System_String_o *str2;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  int32_t local_res8 [2];
  int32_t local_res18 [2];
  System_Data_SqlTypes_SqlMoney_Fields local_48;
  System_Data_SqlTypes_SqlMoney_Fields local_38;
  
  if (Il2CppMethodInitialized_184344e5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_DateTime_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"New message from ");
    il2cpp_codegen_initialize_runtime_metadata(&" (Tab)");
    Il2CppMethodInitialized_184344e5d = '\x01';
  }
  if (senderPlayer == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  item = (senderPlayer->fields).actorNumber;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->ActivePMNotifications;
  if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)pSVar1,item,
                       (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (!bVar2) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->ActivePMNotifications;
      if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_181e51c78;
      System_Collections_Generic_HashSet_int___Add
                (pSVar1,item,(MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->NotifiedPMs;
    if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        ((System_Collections_Generic_HashSet_T__o *)pSVar1,item,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar2) {
        return;
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->NotifiedPMs;
      if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        System_Collections_Generic_HashSet_int___Add
                  (pSVar1,item,(MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
        if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
        }
        value = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        pSVar4 = " (Tab)";
        str0 = GameManagers_ChatManager__GetColorString("New message from ",3,false,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_184344e5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
          il2cpp_codegen_initialize_runtime_metadata(&" ");
          il2cpp_codegen_initialize_runtime_metadata(&"<link=\"{0}\">{1}</link>");
          il2cpp_codegen_initialize_runtime_metadata(&"[{0}]");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          Il2CppMethodInitialized_184344e5c = '\x01';
        }
        local_res8[0] = (senderPlayer->fields).actorNumber;
        arg0 = il2cpp_value_box(g_data_184354e08,local_res8);
        local_res18[0] = (senderPlayer->fields).actorNumber;
        arg0_00 = il2cpp_value_box(g_data_184354e08,local_res18);
        pSVar3 = System_String__Format("[{0}]",arg0_00,(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar3 = GameManagers_ChatManager__GetColorString(pSVar3,1,false,(MethodInfo *)0x0);
        pSVar3 = System_String__Format_196d440
                           ("<link=\"{0}\">{1}</link>",arg0,(Il2CppObject *)pSVar3,(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
        }
        str2 = PhotonExtensions__GetStringProperty
                         (senderPlayer,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                          "",(MethodInfo *)0x0);
        pSVar3 = System_String__Concat_1969b70(pSVar3," ",str2,(MethodInfo *)0x0);
        pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,3,false,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)0x0;
        pSVar4 = System_String__Concat_1969b70(str0,pSVar3,pSVar4,(MethodInfo *)0x0);
        local_48._fNotNull = false;
        local_48._1_7_ = 0;
        local_48._value = 0;
        System_Data_SqlTypes_SqlMoney___ctor_ae2650
                  ((System_Data_SqlTypes_SqlMoney_o *)&local_48,(int64_t)value.fields._dateData,
                   (int32_t)MethodInfo_System_Nullable_DateTime_ctor,method_00);
        local_38._fNotNull = local_48._fNotNull;
        local_38._1_7_ = local_48._1_7_;
        local_38._value = local_48._value;
        GameManagers_ChatManager__AddLine
                  (pSVar4,0,true,(System_Nullable_DateTime__o *)&local_38,item,false,false,-1,true,
                   (MethodInfo *)0x0);
        return;
      }
      ThrowNullReferenceException();
    }
  }
label_181e51c78:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$HasActivePlayerSuggestions
// il2cpp: bool GameManagers_ChatManager__HasActivePlayerSuggestions (const MethodInfo* method);
// 0x181e4a440

bool GameManagers_ChatManager__HasActivePlayerSuggestions(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344e5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_184344e5e = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  bVar1 = GameManagers_ChatManager_SuggestionState__get_IsActive((MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type == 3) {
    return true;
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  return TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type == 2;
}


// GameManagers.ChatManager$$HasActiveSuggestions
// il2cpp: bool GameManagers_ChatManager__HasActiveSuggestions (const MethodInfo* method);
// 0x181e4a4e0

bool GameManagers_ChatManager__HasActiveSuggestions(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344e5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_184344e5f = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  bVar1 = GameManagers_ChatManager_SuggestionState__get_IsActive((MethodInfo *)0x0);
  return bVar1;
}


// GameManagers.ChatManager$$RefreshPlayerSuggestions
// il2cpp: void GameManagers_ChatManager__RefreshPlayerSuggestions (const MethodInfo* method);
// 0x181e4daa0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e4dbe9: mov rbx, qword ptr [rsp + 0x20]

void GameManagers_ChatManager__RefreshPlayerSuggestions(MethodInfo *method)

{
  bool bVar1;
  UI_ChatPanel_o *__this;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184344e60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    il2cpp_codegen_initialize_runtime_metadata(&"\xef\xbf\xbf");
    Il2CppMethodInitialized_184344e60 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar1 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    __this = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (__this == (UI_ChatPanel_o *)0x0) {
        ThrowNullReferenceException();
      }
      value = UI_ChatPanel__GetInputText(__this,(MethodInfo *)0x0);
      bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)0x0);
        return;
      }
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = "\xef\xbf\xbf";
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText,
                 "\xef\xbf\xbf");
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__HandleTyping(value,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// GameManagers.ChatManager$$ClearPMNotificationFromChat
// il2cpp: void GameManagers_ChatManager__ClearPMNotificationFromChat (int32_t playerID, const MethodInfo* method);
// 0x181e441f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e44322: sub ebx, 1
// asm:   0x181e44325: mov rcx, qword ptr [rip + 0x229a4a4]  ; TypeInfo_GameManagers_ChatManager
// asm:   0x181e4432c: jns 0x181e44284

void GameManagers_ChatManager__ClearPMNotificationFromChat(int32_t playerID,MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_T__o *__this;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  int8_t iVar2;
  bool bVar3;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o SVar4;
  UI_ChatPanel_o *__this_01;
  
  if (Il2CppMethodInitialized_184344e61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344e61 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    index = (pSVar1->fields)._size;
    while (index = index + -1, -1 < index) {
      if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      __this = (System_Collections_Generic_List_T__o *)
               TypeInfo_GameManagers_ChatManager->static_fields->NotificationFlags;
      if (__this == (System_Collections_Generic_List_T__o *)0x0) goto label_181e443aa;
      iVar2 = System_Collections_Generic_List_sbyte___get_Item
                        (__this,index,
                         (MethodInfo_9839D0 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
      if (iVar2 != '\0') {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        __this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                    TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
        if (__this_00 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
        goto label_181e443aa;
        SVar4 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                          (__this_00,index,
                           (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        if (SVar4.fields == (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)playerID) {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__RemoveLineAt(index,(MethodInfo *)0x0);
        }
      }
    }
    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar3 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      __this_01 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (__this_01 == (UI_ChatPanel_o *)0x0) goto label_181e443aa;
        UI_ChatPanel__Sync(__this_01,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181e443aa:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$ClearPMNotification
// il2cpp: void GameManagers_ChatManager__ClearPMNotification (int32_t playerID, const MethodInfo* method);
// 0x181e443b0

void GameManagers_ChatManager__ClearPMNotification(int32_t playerID,MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344e62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    Il2CppMethodInitialized_184344e62 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->ActivePMNotifications;
  if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)pSVar1,playerID,
                       (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar2) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->ActivePMNotifications;
      if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_181e44493;
      System_Collections_Generic_HashSet_Int32Enum___Remove
                ((System_Collections_Generic_HashSet_T__o *)pSVar1,playerID,
                 (MethodInfo_17666A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__ClearPMNotificationFromChat(playerID,(MethodInfo *)0x0);
    return;
  }
label_181e44493:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$HasActivePMNotification
// il2cpp: bool GameManagers_ChatManager__HasActivePMNotification (int32_t playerID, const MethodInfo* method);
// 0x181e4a3c0

bool GameManagers_ChatManager__HasActivePMNotification(int32_t playerID,MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344e63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    Il2CppMethodInitialized_184344e63 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this = TypeInfo_GameManagers_ChatManager->static_fields->ActivePMNotifications;
  if (__this != (System_Collections_Generic_HashSet_int__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)__this,playerID,
                       (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$HasAnyActivePMNotification
// il2cpp: bool GameManagers_ChatManager__HasAnyActivePMNotification (const MethodInfo* method);
// 0x181e4a520

bool GameManagers_ChatManager__HasAnyActivePMNotification(MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344e64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_get_Count);
    Il2CppMethodInitialized_184344e64 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->ActivePMNotifications;
  if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    return 0 < (pSVar1->fields)._count;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$UpdatePartialTextAfterCompletion
// il2cpp: void GameManagers_ChatManager__UpdatePartialTextAfterCompletion (System_String_o* newText, System_String_o* chosen, const MethodInfo* method);
// 0x181e527d0

void GameManagers_ChatManager__UpdatePartialTextAfterCompletion
               (System_String_o *newText,System_String_o *chosen,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_184344e65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_184344e65 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  iVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (newText == (System_String_o *)0x0) {
label_181e52904:
        ThrowNullReferenceException();
      }
      iVar2 = System_String__LastIndexOf(newText,0x40,(MethodInfo *)0x0);
      if (iVar2 < 0) {
        return;
      }
      if ((newText->fields)._stringLength <= iVar2 + 1) {
        return;
      }
      chosen = System_String__Substring(newText,iVar2 + 1,(MethodInfo *)0x0);
      if (chosen == (System_String_o *)0x0) goto label_181e52904;
      iVar2 = System_String__IndexOf(chosen,0x20,(MethodInfo *)0x0);
      if (-1 < iVar2) {
        chosen = System_String__Substring_1972740(chosen,0,iVar2,(MethodInfo *)0x0);
      }
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = chosen;
      goto label_181e52853;
    }
    if (iVar1 != 3) {
      return;
    }
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = chosen;
label_181e52853:
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText,chosen);
  return;
}


// GameManagers.ChatManager$$.ctor
// il2cpp: void GameManagers_ChatManager___ctor (GameManagers_ChatManager_o* __this, const MethodInfo* method);
// 0x180528540

void
GameManagers_ChatManager___ctor(GameManagers_ChatManager_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$.cctor
// il2cpp: void GameManagers_ChatManager___cctor (const MethodInfo* method);
// 0x181e52d50

void GameManagers_ChatManager___cctor(MethodInfo *method)

{
  System_String_o *value;
  System_Text_RegularExpressions_Regex_o *pSVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_List_int__o *pSVar3;
  System_Collections_Generic_List_ChatTextColor__o *__this;
  System_Collections_Generic_List_bool__o *pSVar4;
  System_Collections_Generic_List_DateTime__o *__this_00;
  System_Collections_Generic_Dictionary_ChatTextColor__string__o *__this_01;
  System_Collections_Generic_Dictionary_string__ChatManager_CommandAttribute__o *__this_02;
  System_Text_StringBuilder_o *pSVar5;
  System_Collections_Generic_HashSet_int__o *pSVar6;
  System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *__this_03;
  System_Collections_Generic_Dictionary_string__string__o *__this_04;
  System_Collections_Generic_Dictionary_string__int__o *__this_05;
  System_Collections_Generic_HashSet_string__o *__this_06;
  
  if (Il2CppMethodInitialized_184344e66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ChatTextColor_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_ChatTextColor_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_ChatTextColor_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_DateTime_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_ChatTextColor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"^/(\\w+)(?:\\s+(.*))?$");
    il2cpp_codegen_initialize_runtime_metadata(&"<[^>]+>|</[^>]+>");
    il2cpp_codegen_initialize_runtime_metadata(&"\\[([^\\]]+)\\]");
    il2cpp_codegen_initialize_runtime_metadata(&"@(\\w*)$");
    Il2CppMethodInitialized_184344e66 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_285f6f0(pSVar1,"^/(\\w+)(?:\\s+(.*))?$",8,(MethodInfo *)0x0);
  TypeInfo_GameManagers_ChatManager->static_fields->CommandRegex = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->CommandRegex,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_285f6f0(pSVar1,"@(\\w*)$",8,(MethodInfo *)0x0);
  TypeInfo_GameManagers_ChatManager->static_fields->MentionRegex = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->MentionRegex,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_285f6f0(pSVar1,"\\[([^\\]]+)\\]",8,(MethodInfo *)0x0);
  TypeInfo_GameManagers_ChatManager->static_fields->ParamRegex = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->ParamRegex,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_285f6f0(pSVar1,"<[^>]+>|</[^>]+>",8,(MethodInfo *)0x0);
  TypeInfo_GameManagers_ChatManager->static_fields->RichTextPattern = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->RichTextPattern,pSVar1);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar2,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  TypeInfo_GameManagers_ChatManager->static_fields->RawMessages = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->RawMessages,pSVar2);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar3,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs = pSVar3;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs,pSVar3);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ChatTextColor);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ChatTextColor_ctor);
  TypeInfo_GameManagers_ChatManager->static_fields->Colors = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->Colors,__this);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_bool);
  System_Collections_Generic_List_bool____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar4,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_bool_ctor);
  TypeInfo_GameManagers_ChatManager->static_fields->SystemFlags = pSVar4;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->SystemFlags,pSVar4);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_DateTime);
  System_Collections_Generic_List_DateTime____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_DateTime_ctor);
  TypeInfo_GameManagers_ChatManager->static_fields->Timestamps = __this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->Timestamps,__this_00);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_bool);
  System_Collections_Generic_List_bool____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar4,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_bool_ctor);
  TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags = pSVar4;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_bool);
  System_Collections_Generic_List_bool____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar4,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_bool_ctor);
  TypeInfo_GameManagers_ChatManager->static_fields->NotificationFlags = pSVar4;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->NotificationFlags,pSVar4);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar2,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  TypeInfo_GameManagers_ChatManager->static_fields->FeedLines = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->FeedLines,pSVar2);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_ChatTextColor_string);
  System_Collections_Generic_Dictionary_Int32Enum__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_14421B0 *)MethodInfo_System_Collections_Generic_Dictionary_ChatTextColor_string_ctor)
  ;
  TypeInfo_GameManagers_ChatManager->static_fields->ColorTags = __this_01;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->ColorTags,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_ctor);
  TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache = __this_02;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache,__this_02);
  TypeInfo_GameManagers_ChatManager->static_fields->_lineBatchDepth = 0;
  TypeInfo_GameManagers_ChatManager->static_fields->_pendingBatchSync = false;
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor_1980e60(pSVar5,0x100,(MethodInfo *)0x0);
  TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder = pSVar5;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor_1980e60(pSVar5,8,(MethodInfo *)0x0);
  TypeInfo_GameManagers_ChatManager->static_fields->TimeBuilder = pSVar5;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->TimeBuilder,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor_1980e60(pSVar5,0x100,(MethodInfo *)0x0);
  TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder = pSVar5;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder,pSVar5);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar6,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  TypeInfo_GameManagers_ChatManager->static_fields->ActivePMNotifications = pSVar6;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->ActivePMNotifications,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar6,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  TypeInfo_GameManagers_ChatManager->static_fields->NotifiedPMs = pSVar6;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->NotifiedPMs,pSVar6);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_bool);
  System_Collections_Generic_List_bool____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar4,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_bool_ctor);
  TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags = pSVar4;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags,pSVar4);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar3,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs = pSVar3;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs,pSVar3);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData);
  System_Collections_Generic_List_ChatManager_ChatPlayerLineData____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_03,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_ctor);
  TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData = __this_03;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData,__this_03);
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  TypeInfo_GameManagers_ChatManager->static_fields->_preservedInputText = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->_preservedInputText,value);
  TypeInfo_GameManagers_ChatManager->static_fields->_preservedInputCaretPosition = 0;
  TypeInfo_GameManagers_ChatManager->static_fields->_preservedPMTargetActorNumber = -1;
  TypeInfo_GameManagers_ChatManager->static_fields->PreserveInputOnRestart = false;
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  TypeInfo_GameManagers_ChatManager->static_fields->_conversationTexts = __this_04;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->_conversationTexts,__this_04);
  __this_05 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  TypeInfo_GameManagers_ChatManager->static_fields->_conversationCarets = __this_05;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->_conversationCarets,__this_05);
  __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_06,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_GameManagers_ChatManager->static_fields->CustomCommandKeys = __this_06;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->CustomCommandKeys,__this_06);
  return;
}


