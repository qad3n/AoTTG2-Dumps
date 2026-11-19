// Type: GameManagers.ChatManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/GameManagers/ChatManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/ChatManager.cs
// --------------------------------

// GameManagers.ChatManager.CommandAttribute.<>c$$.cctor
// il2cpp: void GameManagers_ChatManager_CommandAttribute___c___cctor (const MethodInfo* method);
// 0x593b110

void GameManagers_ChatManager_CommandAttribute___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075457ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_CommandAttribute_c);
    Il2CppMethodInitialized_075457ff = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_ChatManager_CommandAttribute_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_GameManagers_ChatManager_CommandAttribute_c->static_fields->__9 =
       (GameManagers_ChatManager_CommandAttribute___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager_CommandAttribute_c->static_fields->__9);
  return;
}


// GameManagers.ChatManager.CommandAttribute.<>c$$.ctor
// il2cpp: void GameManagers_ChatManager_CommandAttribute___c___ctor (GameManagers_ChatManager_CommandAttribute___c_o* __this, const MethodInfo* method);
// 0x593b180

void GameManagers_ChatManager_CommandAttribute___c___ctor
               (GameManagers_ChatManager_CommandAttribute___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager.CommandAttribute.<>c$$<.ctor>b__33_0
// il2cpp: System_String_o* GameManagers_ChatManager_CommandAttribute___c____ctor_b__33_0 (GameManagers_ChatManager_CommandAttribute___c_o* __this, System_Text_RegularExpressions_Match_o* m, const MethodInfo* method);
// 0x593b190

System_String_o *
GameManagers_ChatManager_CommandAttribute___c____ctor_b__33_0
          (GameManagers_ChatManager_CommandAttribute___c_o *__this,System_Text_RegularExpressions_Match_o *m,
          MethodInfo *method)

{
  System_Text_RegularExpressions_GroupCollection_o *__this_00;
  System_Text_RegularExpressions_Group_o *__this_01;
  System_String_o *pSVar1;
  
  if (m != (System_Text_RegularExpressions_Match_o *)0x0) {
    __this_00 = (*(m->klass->vtable)._5_get_Groups.methodPtr)(m,(m->klass->vtable)._5_get_Groups.method);
    if (__this_00 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
      __this_01 = System_Text_RegularExpressions_GroupCollection__get_Item(__this_00,1,(MethodInfo *)0x0);
      if (__this_01 != (System_Text_RegularExpressions_Group_o *)0x0) {
        pSVar1 = System_Text_RegularExpressions_Capture__get_Value
                           ((System_Text_RegularExpressions_Capture_o *)__this_01,(MethodInfo *)0x0);
        return pSVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.CommandAttribute$$get_Name
// il2cpp: System_String_o* GameManagers_ChatManager_CommandAttribute__get_Name (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x593ada0

System_String_o *
GameManagers_ChatManager_CommandAttribute__get_Name
          (GameManagers_ChatManager_CommandAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Name_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_Name
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_Name (GameManagers_ChatManager_CommandAttribute_o* __this, System_String_o* value, const MethodInfo* method);
// 0x593adb0

void GameManagers_ChatManager_CommandAttribute__set_Name
               (GameManagers_ChatManager_CommandAttribute_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Name_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField);
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_Description
// il2cpp: System_String_o* GameManagers_ChatManager_CommandAttribute__get_Description (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x593adc0

System_String_o *
GameManagers_ChatManager_CommandAttribute__get_Description
          (GameManagers_ChatManager_CommandAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Description_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_Description
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_Description (GameManagers_ChatManager_CommandAttribute_o* __this, System_String_o* value, const MethodInfo* method);
// 0x593add0

void GameManagers_ChatManager_CommandAttribute__set_Description
               (GameManagers_ChatManager_CommandAttribute_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Description_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField);
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_Alias
// il2cpp: System_String_o* GameManagers_ChatManager_CommandAttribute__get_Alias (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x593ade0

System_String_o *
GameManagers_ChatManager_CommandAttribute__get_Alias
          (GameManagers_ChatManager_CommandAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Alias_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_Alias
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_Alias (GameManagers_ChatManager_CommandAttribute_o* __this, System_String_o* value, const MethodInfo* method);
// 0x593adf0

void GameManagers_ChatManager_CommandAttribute__set_Alias
               (GameManagers_ChatManager_CommandAttribute_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Alias_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Alias_k__BackingField);
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_Command
// il2cpp: System_Reflection_MethodInfo_o* GameManagers_ChatManager_CommandAttribute__get_Command (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x593ae00

System_Reflection_MethodInfo_o *
GameManagers_ChatManager_CommandAttribute__get_Command
          (GameManagers_ChatManager_CommandAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Command_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_Command
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_Command (GameManagers_ChatManager_CommandAttribute_o* __this, System_Reflection_MethodInfo_o* value, const MethodInfo* method);
// 0x593ae10

void GameManagers_ChatManager_CommandAttribute__set_Command
               (GameManagers_ChatManager_CommandAttribute_o *__this,System_Reflection_MethodInfo_o *value,
               MethodInfo *method)

{
  (__this->fields)._Command_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Command_k__BackingField);
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_IsAlias
// il2cpp: bool GameManagers_ChatManager_CommandAttribute__get_IsAlias (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x593ae20

bool GameManagers_ChatManager_CommandAttribute__get_IsAlias
               (GameManagers_ChatManager_CommandAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._IsAlias_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_IsAlias
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_IsAlias (GameManagers_ChatManager_CommandAttribute_o* __this, bool value, const MethodInfo* method);
// 0x593ae30

void GameManagers_ChatManager_CommandAttribute__set_IsAlias
               (GameManagers_ChatManager_CommandAttribute_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._IsAlias_k__BackingField = value;
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_Parameters
// il2cpp: System_String_array* GameManagers_ChatManager_CommandAttribute__get_Parameters (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x593ae40

System_String_array *
GameManagers_ChatManager_CommandAttribute__get_Parameters
          (GameManagers_ChatManager_CommandAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Parameters_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_Parameters
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_Parameters (GameManagers_ChatManager_CommandAttribute_o* __this, System_String_array* value, const MethodInfo* method);
// 0x593ae50

void GameManagers_ChatManager_CommandAttribute__set_Parameters
               (GameManagers_ChatManager_CommandAttribute_o *__this,System_String_array *value,
               MethodInfo *method)

{
  (__this->fields)._Parameters_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Parameters_k__BackingField);
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_AutofillType
// il2cpp: int32_t GameManagers_ChatManager_CommandAttribute__get_AutofillType (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x593ae60

int32_t GameManagers_ChatManager_CommandAttribute__get_AutofillType
                  (GameManagers_ChatManager_CommandAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._AutofillType_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_AutofillType
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_AutofillType (GameManagers_ChatManager_CommandAttribute_o* __this, int32_t value, const MethodInfo* method);
// 0x593ae70

void GameManagers_ChatManager_CommandAttribute__set_AutofillType
               (GameManagers_ChatManager_CommandAttribute_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields)._AutofillType_k__BackingField = value;
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_ExcludeFromHelp
// il2cpp: bool GameManagers_ChatManager_CommandAttribute__get_ExcludeFromHelp (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x593ae80

bool GameManagers_ChatManager_CommandAttribute__get_ExcludeFromHelp
               (GameManagers_ChatManager_CommandAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._ExcludeFromHelp_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_ExcludeFromHelp
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_ExcludeFromHelp (GameManagers_ChatManager_CommandAttribute_o* __this, bool value, const MethodInfo* method);
// 0x593ae90

void GameManagers_ChatManager_CommandAttribute__set_ExcludeFromHelp
               (GameManagers_ChatManager_CommandAttribute_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._ExcludeFromHelp_k__BackingField = value;
  return;
}


// GameManagers.ChatManager.CommandAttribute$$.ctor
// il2cpp: void GameManagers_ChatManager_CommandAttribute___ctor (GameManagers_ChatManager_CommandAttribute_o* __this, GameManagers_ChatManager_CommandAttribute_o* commandAttribute, const MethodInfo* method);
// 0x593aea0

void GameManagers_ChatManager_CommandAttribute___ctor
               (GameManagers_ChatManager_CommandAttribute_o *__this,
               GameManagers_ChatManager_CommandAttribute_o *commandAttribute,MethodInfo *method)

{
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  if (commandAttribute == (GameManagers_ChatManager_CommandAttribute_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._Name_k__BackingField = (commandAttribute->fields)._Name_k__BackingField;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField);
  (__this->fields)._Description_k__BackingField = (commandAttribute->fields)._Description_k__BackingField;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField);
  (__this->fields)._Alias_k__BackingField = (commandAttribute->fields)._Alias_k__BackingField;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Alias_k__BackingField);
  (__this->fields)._Command_k__BackingField = (commandAttribute->fields)._Command_k__BackingField;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Command_k__BackingField);
  (__this->fields)._AutofillType_k__BackingField = (commandAttribute->fields)._AutofillType_k__BackingField;
  (__this->fields)._ExcludeFromHelp_k__BackingField =
       (commandAttribute->fields)._ExcludeFromHelp_k__BackingField;
  return;
}


// GameManagers.ChatManager.CommandAttribute$$.ctor
// il2cpp: void GameManagers_ChatManager_CommandAttribute___ctor (GameManagers_ChatManager_CommandAttribute_o* __this, System_String_o* name, System_String_o* description, int32_t autofillType, bool excludeFromHelp, const MethodInfo* method);
// 0x593af20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593b040: jmp 0x593b05b

void GameManagers_ChatManager_CommandAttribute___ctor_583af20
               (GameManagers_ChatManager_CommandAttribute_o *__this,System_String_o *name,
               System_String_o *description,int32_t autofillType,bool excludeFromHelp,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this_00;
  Il2CppObject *object;
  System_Text_RegularExpressions_MatchCollection_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar1;
  GameManagers_ChatManager_CommandAttribute___c_StaticFields *pGVar2;
  System_Func_Match__string__o *__this_01;
  System_String_array *pSVar3;
  
  if (Il2CppMethodInitialized_075457fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Cast_Match);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_Match_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Match_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_ChatManager_CommandAttribute_c_ctor_b__33_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_CommandAttribute_c);
    Il2CppMethodInitialized_075457fe = '\x01';
  }
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField);
  (__this->fields)._Description_k__BackingField = description;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField);
  (__this->fields)._AutofillType_k__BackingField = autofillType;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this_00 = TypeInfo_GameManagers_ChatManager->static_fields->ParamRegex;
  if (__this_00 == (System_Text_RegularExpressions_Regex_o *)0x0) {
    ThrowNullReferenceException();
  }
  source = System_Text_RegularExpressions_Regex__Matches(__this_00,description,(MethodInfo *)0x0);
  pSVar1 = System_Linq_Enumerable__Cast_object_
                     ((System_Collections_IEnumerable_o *)source,
                      (MethodInfo_34E0900 *)MethodInfo_System_Linq_Enumerable_Cast_Match);
  if ((TypeInfo_GameManagers_ChatManager_CommandAttribute_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_CommandAttribute_c);
    pGVar2 = TypeInfo_GameManagers_ChatManager_CommandAttribute_c->static_fields;
    __this_01 = pGVar2->__9__33_0;
  }
  else {
    pGVar2 = TypeInfo_GameManagers_ChatManager_CommandAttribute_c->static_fields;
    __this_01 = pGVar2->__9__33_0;
  }
  if (__this_01 == (System_Func_Match__string__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager_CommandAttribute_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_CommandAttribute_c);
      pGVar2 = TypeInfo_GameManagers_ChatManager_CommandAttribute_c->static_fields;
    }
    object = (Il2CppObject *)pGVar2->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Match_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this_01,object,
               (intptr_t)MethodInfo_GameManagers_ChatManager_CommandAttribute_c_ctor_b__33_0,
               (MethodInfo_4F19B50 *)0x0);
    pGVar2 = TypeInfo_GameManagers_ChatManager_CommandAttribute_c->static_fields;
    pGVar2->__9__33_0 = __this_01;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__33_0);
  }
  pSVar1 = System_Linq_Enumerable__Select_object__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                      (System_Func_TSource__TResult__o *)__this_01,
                      (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_Match_string);
  pSVar3 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                      (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  (__this->fields)._Parameters_k__BackingField = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Parameters_k__BackingField);
  (__this->fields)._ExcludeFromHelp_k__BackingField = excludeFromHelp;
  return;
}


// GameManagers.ChatManager.CLCommandAttribute$$get_Callback
// il2cpp: CustomLogic_UserMethod_o* GameManagers_ChatManager_CLCommandAttribute__get_Callback (GameManagers_ChatManager_CLCommandAttribute_o* __this, const MethodInfo* method);
// 0x593b1e0

CustomLogic_UserMethod_o *
GameManagers_ChatManager_CLCommandAttribute__get_Callback
          (GameManagers_ChatManager_CLCommandAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Callback_k__BackingField;
}


// GameManagers.ChatManager.CLCommandAttribute$$.ctor
// il2cpp: void GameManagers_ChatManager_CLCommandAttribute___ctor (GameManagers_ChatManager_CLCommandAttribute_o* __this, System_String_o* name, System_String_o* description, CustomLogic_UserMethod_o* callback, int32_t autofillType, const MethodInfo* method);
// 0x593b1f0

void GameManagers_ChatManager_CLCommandAttribute___ctor
               (GameManagers_ChatManager_CLCommandAttribute_o *__this,System_String_o *name,
               System_String_o *description,CustomLogic_UserMethod_o *callback,int32_t autofillType,
               MethodInfo *method)

{
  GameManagers_ChatManager_CommandAttribute___ctor_583af20
            ((GameManagers_ChatManager_CommandAttribute_o *)__this,name,description,autofillType,false,method)
  ;
  (__this->fields)._Callback_k__BackingField = callback;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Callback_k__BackingField);
  return;
}


// GameManagers.ChatManager.SuggestionState$$Clear
// il2cpp: void GameManagers_ChatManager_SuggestionState__Clear (const MethodInfo* method);
// 0x593b220
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593b36c: jmp 0x593b346

void GameManagers_ChatManager_SuggestionState__Clear(MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint32_t uVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  void *pvVar4;
  GameManagers_ChatManager_SuggestionState_StaticFields *pGVar5;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545800 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545800 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = "";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText);
  pGVar5 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
  pGVar5->OriginalText = "";
  Il2CppCodeGenWriteBarrier(&pGVar5->OriginalText);
  klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState;
  pGVar5 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
  pGVar5->OriginalStartPos = -1;
  pGVar5->OriginalEndPos = -1;
  pSVar3 = pGVar5->Suggestions;
  if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  piVar1 = &(pSVar3->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar3->fields)._size;
  (pSVar3->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    pGVar5 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState;
  }
  pGVar5->CurrentIndex = -1;
  pGVar5->Type = 0;
  if (pGVar5->IsProcessingClick == false) {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState;
      TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting = false;
      uVar2 = (((GameManagers_ChatManager_SuggestionState_c *)klass)->_2).cctor_finished_or_no_cctor;
    }
    else {
      pGVar5->IsTabCompleting = false;
      uVar2 = (klass->_2).cctor_finished_or_no_cctor;
    }
  }
  else {
    uVar2 = (klass->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState;
  }
  pvVar4 = klass->static_fields;
  *(System_String_o **)((long)pvVar4 + 0x30) = "";
  Il2CppCodeGenWriteBarrier((void **)((long)pvVar4 + 0x30));
  return;
}


// GameManagers.ChatManager.SuggestionState$$SetOriginalContext
// il2cpp: void GameManagers_ChatManager_SuggestionState__SetOriginalContext (System_String_o* original, int32_t startPos, int32_t endPos, const MethodInfo* method);
// 0x593b380

void GameManagers_ChatManager_SuggestionState__SetOriginalContext
               (System_String_o *original,int32_t startPos,int32_t endPos,MethodInfo *method)

{
  GameManagers_ChatManager_SuggestionState_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_07545801 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_07545801 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  pGVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
  pGVar1->OriginalText = original;
  Il2CppCodeGenWriteBarrier(&pGVar1->OriginalText);
  pGVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
  pGVar1->OriginalStartPos = startPos;
  pGVar1->OriginalEndPos = endPos;
  return;
}


// GameManagers.ChatManager.SuggestionState$$get_HasSuggestions
// il2cpp: bool GameManagers_ChatManager_SuggestionState__get_HasSuggestions (const MethodInfo* method);
// 0x593b400

bool GameManagers_ChatManager_SuggestionState__get_HasSuggestions(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  
  if (Il2CppMethodInitialized_07545802 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_07545802 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    pSVar2 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
  }
  else {
    pSVar2 = *(System_Collections_Generic_List_string__o **)
              ((long)((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState)->static_fields + 0x18)
    ;
  }
  if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  return 0 < (pSVar2->fields)._size;
}


// GameManagers.ChatManager.SuggestionState$$get_IsActive
// il2cpp: bool GameManagers_ChatManager_SuggestionState__get_IsActive (const MethodInfo* method);
// 0x593b490
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593b4c3: cmp byte ptr [rip + 0x1c0a338], 0
// asm:   0x593b4ca: je 0x593b546

bool GameManagers_ChatManager_SuggestionState__get_IsActive(MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  
  if (Il2CppMethodInitialized_07545803 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_07545803 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    iVar2 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
  }
  else {
    iVar2 = *(int *)((long)((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState)->static_fields +
                    0x24);
  }
  if (iVar2 == 0) {
    return false;
  }
  if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState)->_2).cctor_finished_or_no_cctor == 0
     ) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  if (Il2CppMethodInitialized_07545802 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_07545802 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    pSVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
  }
  else {
    pSVar3 = *(System_Collections_Generic_List_string__o **)
              ((long)((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState)->static_fields + 0x18)
    ;
  }
  if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  return 0 < (pSVar3->fields)._size;
}


// GameManagers.ChatManager.SuggestionState$$.cctor
// il2cpp: void GameManagers_ChatManager_SuggestionState___cctor (const MethodInfo* method);
// 0x593b5a0

void GameManagers_ChatManager_SuggestionState___cctor(MethodInfo *method)

{
  GameManagers_ChatManager_SuggestionState_StaticFields *pGVar1;
  System_Collections_Generic_List_string__o *__this;
  
  if (Il2CppMethodInitialized_07545804 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545804 = '\x01';
  }
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = "";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText);
  pGVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
  pGVar1->OriginalText = "";
  Il2CppCodeGenWriteBarrier(&pGVar1->OriginalText);
  pGVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
  pGVar1->OriginalStartPos = -1;
  pGVar1->OriginalEndPos = -1;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
  pGVar1->Suggestions = __this;
  Il2CppCodeGenWriteBarrier(&pGVar1->Suggestions);
  pGVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
  pGVar1->CurrentIndex = -1;
  pGVar1->Type = 0;
  pGVar1->IsTabCompleting = false;
  pGVar1->OriginalPartialText = "";
  Il2CppCodeGenWriteBarrier(&pGVar1->OriginalPartialText);
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick = false;
  return;
}


// GameManagers.ChatManager.ChatDisplayLine$$Plain
// il2cpp: GameManagers_ChatManager_ChatDisplayLine_o GameManagers_ChatManager_ChatDisplayLine__Plain (System_String_o* text, int64_t lineID, const MethodInfo* method);
// 0x593b6c0

GameManagers_ChatManager_ChatDisplayLine_o *
GameManagers_ChatManager_ChatDisplayLine__Plain
          (GameManagers_ChatManager_ChatDisplayLine_o *__return_storage_ptr__,System_String_o *text,
          int64_t lineID,MethodInfo *method)

{
  System_String_o *local_50;
  undefined8 local_48;
  System_String_o *pSStack_40;
  System_String_o *local_38;
  System_String_o *pSStack_30;
  System_String_o *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = (System_String_o *)0x0;
  uStack_20 = 0;
  local_38 = (System_String_o *)0x0;
  pSStack_30 = (System_String_o *)0x0;
  local_48 = 0;
  pSStack_40 = (System_String_o *)0x0;
  local_18 = 0;
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  local_50 = text;
  Il2CppCodeGenWriteBarrier(&local_50);
  (__return_storage_ptr__->fields).SenderName = pSStack_30;
  (__return_storage_ptr__->fields).BodyText = local_28;
  (__return_storage_ptr__->fields).TimeText = pSStack_40;
  (__return_storage_ptr__->fields).IdText = local_38;
  (__return_storage_ptr__->fields).SenderID = -1;
  *(undefined4 *)&(__return_storage_ptr__->fields).field_0x34 = uStack_20._4_4_;
  (__return_storage_ptr__->fields).LineID = lineID;
  (__return_storage_ptr__->fields).PlainText = local_50;
  (__return_storage_ptr__->fields).UsePlayerStyle = false;
  *(undefined4 *)&(__return_storage_ptr__->fields).field_0x9 = local_48._1_4_;
  *(undefined2 *)&(__return_storage_ptr__->fields).field_0xd = local_48._5_2_;
  (__return_storage_ptr__->fields).field_0xf = local_48._7_1_;
  return __return_storage_ptr__;
}


// GameManagers.ChatManager.<>c$$.cctor
// il2cpp: void GameManagers_ChatManager___c___cctor (const MethodInfo* method);
// 0x593b790

void GameManagers_ChatManager___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545805 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_c);
    Il2CppMethodInitialized_07545805 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_GameManagers_ChatManager_c->static_fields->__9 = (GameManagers_ChatManager___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager_c->static_fields->__9);
  return;
}


// GameManagers.ChatManager.<>c$$.ctor
// il2cpp: void GameManagers_ChatManager___c___ctor (GameManagers_ChatManager___c_o* __this, const MethodInfo* method);
// 0x593b800

void GameManagers_ChatManager___c___ctor(GameManagers_ChatManager___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager.<>c$$<Emote>b__2_0
// il2cpp: System_String_o* GameManagers_ChatManager___c___Emote_b__2_0 (GameManagers_ChatManager___c_o* __this, System_String_o* e, const MethodInfo* method);
// 0x593b810

System_String_o *
GameManagers_ChatManager___c___Emote_b__2_0
          (GameManagers_ChatManager___c_o *__this,System_String_o *e,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (e == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_String__ToLower(e,(MethodInfo *)0x0);
  return pSVar1;
}


// GameManagers.ChatManager.<>c$$<Help>b__13_0
// il2cpp: bool GameManagers_ChatManager___c___Help_b__13_0 (GameManagers_ChatManager___c_o* __this, System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv, const MethodInfo* method);
// 0x593b830

bool GameManagers_ChatManager___c___Help_b__13_0
               (GameManagers_ChatManager___c_o *__this,
               System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv,
               MethodInfo *method)

{
  bool bVar1;
  GameManagers_ChatManager_CommandAttribute_o *command;
  
  command = kv.fields.value;
  if (Il2CppMethodInitialized_07545806 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_string_ChatManager_CommandAttribute_get_Value
              );
    Il2CppMethodInitialized_07545806 = '\x01';
  }
  if (command == (GameManagers_ChatManager_CommandAttribute_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((command->fields)._ExcludeFromHelp_k__BackingField == false) {
    return true;
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    bVar1 = GameManagers_ChatManager__ShouldIncludeHiddenCommandInHelp(command,(MethodInfo *)0x0);
    return bVar1;
  }
  bVar1 = GameManagers_ChatManager__ShouldIncludeHiddenCommandInHelp(command,(MethodInfo *)0x0);
  return bVar1;
}


// GameManagers.ChatManager.<>c$$<Help>b__13_1
// il2cpp: System_String_o* GameManagers_ChatManager___c___Help_b__13_1 (GameManagers_ChatManager___c_o* __this, System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv, const MethodInfo* method);
// 0x593b8a0

System_String_o *
GameManagers_ChatManager___c___Help_b__13_1
          (GameManagers_ChatManager___c_o *__this,
          System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv,
          MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545807 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_ChatManager_CommandAttribute_get_Key
              );
    Il2CppMethodInitialized_07545807 = '\x01';
  }
  return kv.fields.key;
}


// GameManagers.ChatManager.<>c$$<Help>b__13_2
// il2cpp: GameManagers_ChatManager_CommandAttribute_o* GameManagers_ChatManager___c___Help_b__13_2 (GameManagers_ChatManager___c_o* __this, System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv, const MethodInfo* method);
// 0x593b8d0

GameManagers_ChatManager_CommandAttribute_o *
GameManagers_ChatManager___c___Help_b__13_2
          (GameManagers_ChatManager___c_o *__this,
          System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv,
          MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545808 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_string_ChatManager_CommandAttribute_get_Value
              );
    Il2CppMethodInitialized_07545808 = '\x01';
  }
  return kv.fields.value;
}


// GameManagers.ChatManager.<>c$$<SaveChatHistory>b__14_0
// il2cpp: System_String_o* GameManagers_ChatManager___c___SaveChatHistory_b__14_0 (GameManagers_ChatManager___c_o* __this, System_String_o* msg, int32_t i, const MethodInfo* method);
// 0x593b900

System_String_o *
GameManagers_ChatManager___c___SaveChatHistory_b__14_0
          (GameManagers_ChatManager___c_o *__this,System_String_o *msg,int32_t i,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_DateTime__o *__this_00;
  System_DateTime_o timestamp;
  System_String_o *input;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545809 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_DateTime_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&"<.*?>");
    Il2CppMethodInitialized_07545809 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    __this_00 = TypeInfo_GameManagers_ChatManager->static_fields->Timestamps;
  }
  else {
    __this_00 = *(System_Collections_Generic_List_DateTime__o **)
                 ((long)((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->static_fields + 0x48);
  }
  if (__this_00 == (System_Collections_Generic_List_DateTime__o *)0x0) {
    ThrowNullReferenceException();
  }
  timestamp = System_Collections_Generic_List_DateTime___get_Item
                        (__this_00,i,
                         (MethodInfo_51F5570 *)MethodInfo_System_Collections_Generic_List_DateTime_get_Item);
  input = GameManagers_ChatManager__GetFormattedMessage(msg,timestamp,false,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  if ((TypeInfo_System_Text_RegularExpressions_Regex->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  }
  pSVar2 = System_Text_RegularExpressions_Regex__Replace(input,"<.*?>",pSVar2,(MethodInfo *)0x0)
  ;
  return pSVar2;
}


// GameManagers.ChatManager.<>c$$<HandleTypingInternal>b__139_0
// il2cpp: int32_t GameManagers_ChatManager___c___HandleTypingInternal_b__139_0 (GameManagers_ChatManager___c_o* __this, Photon_Realtime_Player_o* a, Photon_Realtime_Player_o* b, const MethodInfo* method);
// 0x593ba20

int32_t GameManagers_ChatManager___c___HandleTypingInternal_b__139_0
                  (GameManagers_ChatManager___c_o *__this,Photon_Realtime_Player_o *a,
                  Photon_Realtime_Player_o *b,MethodInfo *method)

{
  int32_t iVar1;
  undefined8 in_RAX;
  undefined8 uStack_8;
  
  uStack_8 = in_RAX;
  if ((a == (Photon_Realtime_Player_o *)0x0) ||
     (uStack_8 = CONCAT44((a->fields).actorNumber,(int)in_RAX), b == (Photon_Realtime_Player_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar1 = System_Int32__CompareTo_54b7380
                    ((int32_t *)((long)&uStack_8 + 4),(b->fields).actorNumber,(MethodInfo *)0x0);
  return iVar1;
}


// GameManagers.ChatManager.<>c$$<HandleTypingInternal>b__139_1
// il2cpp: System_String_o* GameManagers_ChatManager___c___HandleTypingInternal_b__139_1 (GameManagers_ChatManager___c_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x593ba50

System_String_o *
GameManagers_ChatManager___c___HandleTypingInternal_b__139_1
          (GameManagers_ChatManager___c_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  Il2CppObject *arg0;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  int32_t iStack_1c;
  
  if (Il2CppMethodInitialized_0754580a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"[{0}]");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754580a = '\x01';
  }
  if (p == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  iStack_1c = (p->fields).actorNumber;
  arg0 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_1c);
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
  pSVar1 = System_String__Concat_5301f10(pSVar1," ",pSVar2,(MethodInfo *)0x0);
  return pSVar1;
}


// GameManagers.ChatManager.<>c$$<HandleTypingInternal>b__139_2
// il2cpp: int32_t GameManagers_ChatManager___c___HandleTypingInternal_b__139_2 (GameManagers_ChatManager___c_o* __this, System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o a, System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o b, const MethodInfo* method);
// 0x593bbb0

int32_t GameManagers_ChatManager___c___HandleTypingInternal_b__139_2
                  (GameManagers_ChatManager___c_o *__this,
                  System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o a,
                  System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o b,
                  MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_0754580b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_ChatManager_CommandAttribute_get_Key
              );
    Il2CppMethodInitialized_0754580b = '\x01';
  }
  iVar1 = System_String__Compare_52febf0(a.fields.key,b.fields.key,4,(MethodInfo *)0x0);
  return iVar1;
}


// GameManagers.ChatManager.<>c$$<HandleTypingInternal>b__139_3
// il2cpp: int32_t GameManagers_ChatManager___c___HandleTypingInternal_b__139_3 (GameManagers_ChatManager___c_o* __this, Photon_Realtime_Player_o* a, Photon_Realtime_Player_o* b, const MethodInfo* method);
// 0x593bbf0

int32_t GameManagers_ChatManager___c___HandleTypingInternal_b__139_3
                  (GameManagers_ChatManager___c_o *__this,Photon_Realtime_Player_o *a,
                  Photon_Realtime_Player_o *b,MethodInfo *method)

{
  int32_t iVar1;
  undefined8 in_RAX;
  undefined8 uStack_8;
  
  uStack_8 = in_RAX;
  if ((a == (Photon_Realtime_Player_o *)0x0) ||
     (uStack_8 = CONCAT44((a->fields).actorNumber,(int)in_RAX), b == (Photon_Realtime_Player_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar1 = System_Int32__CompareTo_54b7380
                    ((int32_t *)((long)&uStack_8 + 4),(b->fields).actorNumber,(MethodInfo *)0x0);
  return iVar1;
}


// GameManagers.ChatManager.<>c$$<HandleTypingInternal>b__139_4
// il2cpp: System_String_o* GameManagers_ChatManager___c___HandleTypingInternal_b__139_4 (GameManagers_ChatManager___c_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x593bc20

System_String_o *
GameManagers_ChatManager___c___HandleTypingInternal_b__139_4
          (GameManagers_ChatManager___c_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  Il2CppObject *arg0;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  int32_t iStack_1c;
  
  if (Il2CppMethodInitialized_0754580c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"[{0}]");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754580c = '\x01';
  }
  if (p == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  iStack_1c = (p->fields).actorNumber;
  arg0 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_1c);
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
  pSVar1 = System_String__Concat_5301f10(pSVar1," ",pSVar2,(MethodInfo *)0x0);
  return pSVar1;
}


// GameManagers.ChatManager.<>c__DisplayClass122_0$$.ctor
// il2cpp: void GameManagers_ChatManager___c__DisplayClass122_0___ctor (GameManagers_ChatManager___c__DisplayClass122_0_o* __this, const MethodInfo* method);
// 0x593bd80

void GameManagers_ChatManager___c__DisplayClass122_0___ctor
               (GameManagers_ChatManager___c__DisplayClass122_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager.<>c__DisplayClass122_0$$<ProcessMentions>b__0
// il2cpp: bool GameManagers_ChatManager___c__DisplayClass122_0___ProcessMentions_b__0 (GameManagers_ChatManager___c__DisplayClass122_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x593bd90

bool GameManagers_ChatManager___c__DisplayClass122_0___ProcessMentions_b__0
               (GameManagers_ChatManager___c__DisplayClass122_0_o *__this,Photon_Realtime_Player_o *p,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  undefined8 in_RAX;
  System_String_o *a;
  System_String_o *pSVar3;
  System_String_o *a_00;
  GameManagers_ChatManager___c__DisplayClass122_0_Fields *targetAddress;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_0754580d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754580d = '\x01';
  }
  if (p != (Photon_Realtime_Player_o *)0x0) {
    uStack_28 = CONCAT44((p->fields).actorNumber,(undefined4)uStack_28);
    a = System_Int32__ToString((int32_t *)((long)&uStack_28 + 4),(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar3 = PhotonExtensions__GetStringProperty
                       (p,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                        (MethodInfo *)0x0);
    if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
    }
    pSVar3 = Anticheat_ChatFilter__FilterSizeTag(pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar3 = MiscExtensions__StripRichText(pSVar3,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_o *)0x0) {
      a_00 = System_String__ToLower(pSVar3,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).mention;
      if (pSVar3 != (System_String_o *)0x0) {
        targetAddress = &__this->fields;
        pSVar3 = System_String__ToLower(pSVar3,(MethodInfo *)0x0);
        targetAddress->mention = pSVar3;
        Il2CppCodeGenWriteBarrier(&targetAddress->mention);
        bVar1 = System_String__op_Equality(a,targetAddress->mention,(MethodInfo *)0x0);
        bVar2 = true;
        if (!bVar1) {
          bVar2 = System_String__op_Equality(a_00,targetAddress->mention,(MethodInfo *)0x0);
        }
        return bVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.<>c__DisplayClass2_0$$.ctor
// il2cpp: void GameManagers_ChatManager___c__DisplayClass2_0___ctor (GameManagers_ChatManager___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x593bef0

void GameManagers_ChatManager___c__DisplayClass2_0___ctor
               (GameManagers_ChatManager___c__DisplayClass2_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager.<>c__DisplayClass2_0$$<Emote>b__1
// il2cpp: bool GameManagers_ChatManager___c__DisplayClass2_0___Emote_b__1 (GameManagers_ChatManager___c__DisplayClass2_0_o* __this, System_String_o* e, const MethodInfo* method);
// 0x593bf00

bool GameManagers_ChatManager___c__DisplayClass2_0___Emote_b__1
               (GameManagers_ChatManager___c__DisplayClass2_0_o *__this,System_String_o *e,MethodInfo *method)

{
  System_String_array *pSVar1;
  bool bVar2;
  
  pSVar1 = (__this->fields).args;
  if (pSVar1 != (System_String_array *)0x0) {
    if ((pSVar1->max_length & 0xfffffffe) == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (e != (System_String_o *)0x0) {
      bVar2 = System_String__Equals_52ffb20(e,pSVar1->m_Items[1],5,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__143$$.ctor
// il2cpp: void GameManagers_ChatManager__ReactivateInputAfterClick_d__143___ctor (GameManagers_ChatManager__ReactivateInputAfterClick_d__143_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x593bf40

void GameManagers_ChatManager__ReactivateInputAfterClick_d__143___ctor
               (GameManagers_ChatManager__ReactivateInputAfterClick_d__143_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__143$$System.IDisposable.Dispose
// il2cpp: void GameManagers_ChatManager__ReactivateInputAfterClick_d__143__System_IDisposable_Dispose (GameManagers_ChatManager__ReactivateInputAfterClick_d__143_o* __this, const MethodInfo* method);
// 0x593bf60

void GameManagers_ChatManager__ReactivateInputAfterClick_d__143__System_IDisposable_Dispose
               (GameManagers_ChatManager__ReactivateInputAfterClick_d__143_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__143$$MoveNext
// il2cpp: bool GameManagers_ChatManager__ReactivateInputAfterClick_d__143__MoveNext (GameManagers_ChatManager__ReactivateInputAfterClick_d__143_o* __this, const MethodInfo* method);
// 0x593bf70

bool GameManagers_ChatManager__ReactivateInputAfterClick_d__143__MoveNext
               (GameManagers_ChatManager__ReactivateInputAfterClick_d__143_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_ChatPanel_o *pUVar2;
  bool bVar3;
  GameManagers_ChatManager_SuggestionState_StaticFields *pGVar4;
  
  if (Il2CppMethodInitialized_0754580e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_0754580e = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      pGVar4 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
      (__this->fields)._wasTabCompleting_5__2 = pGVar4->IsTabCompleting;
      (__this->fields)._preservedIndex_5__3 = pGVar4->CurrentIndex;
      pUVar2 = (__this->fields).chatPanel;
      if (pUVar2 == (UI_ChatPanel_o *)0x0) goto label_0593c182;
      UI_ChatPanel__Activate(pUVar2,(MethodInfo *)0x0);
      if ((__this->fields)._wasTabCompleting_5__2 != false) {
        if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        }
        pGVar4 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
        iVar1 = (__this->fields)._preservedIndex_5__3;
        if (pGVar4->CurrentIndex != iVar1) {
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            pGVar4 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
          }
          pGVar4->CurrentIndex = iVar1;
          pGVar4->IsTabCompleting = true;
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__RefreshSuggestionDisplay((MethodInfo *)0x0);
        }
      }
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 2;
    }
    else {
      if (iVar1 != 0) {
        return false;
      }
      (__this->fields).__1__state = -1;
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
    }
    return true;
  }
  (__this->fields).__1__state = -1;
  pUVar2 = (__this->fields).chatPanel;
  if (pUVar2 == (UI_ChatPanel_o *)0x0) {
label_0593c182:
    ThrowNullReferenceException();
  }
  bVar3 = UI_ChatPanel__IsInputActive(pUVar2,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar2 = (__this->fields).chatPanel;
    if (pUVar2 == (UI_ChatPanel_o *)0x0) goto label_0593c182;
    UI_ChatPanel__Activate(pUVar2,(MethodInfo *)0x0);
    if ((__this->fields)._wasTabCompleting_5__2 != false) {
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      pGVar4 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
      iVar1 = (__this->fields)._preservedIndex_5__3;
      if (pGVar4->CurrentIndex != iVar1) {
        if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          pGVar4 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
        }
        pGVar4->CurrentIndex = iVar1;
        pGVar4->IsTabCompleting = true;
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
  return false;
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__143$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_ChatManager__ReactivateInputAfterClick_d__143__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_ChatManager__ReactivateInputAfterClick_d__143_o* __this, const MethodInfo* method);
// 0x593c190

Il2CppObject *
GameManagers_ChatManager__ReactivateInputAfterClick_d__143__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameManagers_ChatManager__ReactivateInputAfterClick_d__143_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__143$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_ChatManager__ReactivateInputAfterClick_d__143__System_Collections_IEnumerator_Reset (GameManagers_ChatManager__ReactivateInputAfterClick_d__143_o* __this, const MethodInfo* method);
// 0x593c1a0

void GameManagers_ChatManager__ReactivateInputAfterClick_d__143__System_Collections_IEnumerator_Reset
               (GameManagers_ChatManager__ReactivateInputAfterClick_d__143_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_ChatManager_ReactivateInputAfterClick_d__143_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__143$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_ChatManager__ReactivateInputAfterClick_d__143__System_Collections_IEnumerator_get_Current (GameManagers_ChatManager__ReactivateInputAfterClick_d__143_o* __this, const MethodInfo* method);
// 0x593c1e0

Il2CppObject *
GameManagers_ChatManager__ReactivateInputAfterClick_d__143__System_Collections_IEnumerator_get_Current
          (GameManagers_ChatManager__ReactivateInputAfterClick_d__143_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.ChatManager.<WaitAndLeave>d__0$$.ctor
// il2cpp: void GameManagers_ChatManager__WaitAndLeave_d__0___ctor (GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x593c1f0

void GameManagers_ChatManager__WaitAndLeave_d__0___ctor
               (GameManagers_ChatManager__WaitAndLeave_d__0_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.ChatManager.<WaitAndLeave>d__0$$System.IDisposable.Dispose
// il2cpp: void GameManagers_ChatManager__WaitAndLeave_d__0__System_IDisposable_Dispose (GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, const MethodInfo* method);
// 0x593c210

void GameManagers_ChatManager__WaitAndLeave_d__0__System_IDisposable_Dispose
               (GameManagers_ChatManager__WaitAndLeave_d__0_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.ChatManager.<WaitAndLeave>d__0$$MoveNext
// il2cpp: bool GameManagers_ChatManager__WaitAndLeave_d__0__MoveNext (GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, const MethodInfo* method);
// 0x593c220

bool GameManagers_ChatManager__WaitAndLeave_d__0__MoveNext
               (GameManagers_ChatManager__WaitAndLeave_d__0_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  GameManagers_InGameManager_c *method_00;
  
  if (Il2CppMethodInitialized_0754580f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_0754580f = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,2.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    method_00 = TypeInfo_GameManagers_InGameManager;
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    GameManagers_InGameManager__LeaveRoom((MethodInfo *)method_00);
  }
  return iVar1 == 0;
}


// GameManagers.ChatManager.<WaitAndLeave>d__0$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_ChatManager__WaitAndLeave_d__0__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, const MethodInfo* method);
// 0x593c4f0

Il2CppObject *
GameManagers_ChatManager__WaitAndLeave_d__0__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameManagers_ChatManager__WaitAndLeave_d__0_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.ChatManager.<WaitAndLeave>d__0$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_ChatManager__WaitAndLeave_d__0__System_Collections_IEnumerator_Reset (GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, const MethodInfo* method);
// 0x593c500

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
// 0x593c540

Il2CppObject *
GameManagers_ChatManager__WaitAndLeave_d__0__System_Collections_IEnumerator_get_Current
          (GameManagers_ChatManager__WaitAndLeave_d__0_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.ChatManager$$WaitAndLeave
// il2cpp: System_Collections_IEnumerator_o* GameManagers_ChatManager__WaitAndLeave (GameManagers_ChatManager_o* __this, const MethodInfo* method);
// 0x5928ec0

System_Collections_IEnumerator_o *
GameManagers_ChatManager__WaitAndLeave(GameManagers_ChatManager_o *__this,MethodInfo *method)

{
  GameManagers_ChatManager__WaitAndLeave_d__0_o *__this_00;
  
  if (Il2CppMethodInitialized_07545789 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_WaitAndLeave_d__0);
    Il2CppMethodInitialized_07545789 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_ChatManager_WaitAndLeave_d__0);
  GameManagers_ChatManager__WaitAndLeave_d__0___ctor(__this_00,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.ChatManager$$HandleHoodToggle
// il2cpp: void GameManagers_ChatManager__HandleHoodToggle (System_String_array* args, const MethodInfo* method);
// 0x5928f00

void GameManagers_ChatManager__HandleHoodToggle(System_String_array *args,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  Characters_Human_o *__this;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  if (Il2CppMethodInitialized_0754578a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&"Usage: /hood");
    Il2CppMethodInitialized_0754578a = '\x01';
  }
  if (args == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)args->max_length != 1) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__AddLine
              ("Usage: /hood",0,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
               in_stack_ffffffffffffffe8);
    return;
  }
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((bVar1 <= (pGVar2->klass->_2).typeHierarchyDepth) &&
        ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) &&
       (__this = (*(uint64_t *)((char *)pGVar2 + 0x80)), __this != (Characters_Human_o *)0x0)) {
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
         ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
        Characters_Human__ToggleHood(__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// GameManagers.ChatManager$$Emote
// il2cpp: void GameManagers_ChatManager__Emote (System_String_array* args, const MethodInfo* method);
// 0x5929200
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5929686: sub rsp, 0x10
// asm:   0x592968a: mov rdi, rbx
// asm:   0x592968d: jmp 0x592942b

void GameManagers_ChatManager__Emote(System_String_array *args,MethodInfo *method)

{
  byte bVar1;
  System_String_array *pSVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  UnityEngine_Object_o *x;
  long *plVar4;
  Il2CppObject *object;
  long lVar5;
  System_String_o *str0;
  bool bVar6;
  GameManagers_ChatManager___c__DisplayClass2_0_o *__this;
  System_String_o **ppSVar7;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  GameManagers_ChatManager___c_StaticFields *pGVar8;
  System_Func_string__string__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *values;
  System_String_o *pSVar9;
  System_Func_string__bool__o *__this_01;
  int32_t color;
  GameManagers_ChatManager___c__DisplayClass2_0_Fields *targetAddress;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_0754578b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_71a8548);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_c_Emote_b__2_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_ChatManager_c__DisplayClass2_0_Emote_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_c__DisplayClass2_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Emotes: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Emote ");
    il2cpp_codegen_initialize_runtime_metadata(&"Usage: /emote [name|list]");
    il2cpp_codegen_initialize_runtime_metadata(&" not found, try /emote list to see available emotes.");
    il2cpp_codegen_initialize_runtime_metadata(&"list");
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"Your current character has no emotes.");
    il2cpp_codegen_initialize_runtime_metadata(&"You must have a character to use emotes.");
    Il2CppMethodInitialized_0754578b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c__DisplayClass2_0);
  GameManagers_ChatManager___c__DisplayClass2_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (GameManagers_ChatManager___c__DisplayClass2_0_o *)0x0) {
label_059296c2:
    ThrowNullReferenceException();
  }
  targetAddress = &__this->fields;
  (__this->fields).args = args;
  Il2CppCodeGenWriteBarrier(&targetAddress->args);
  pSVar2 = (__this->fields).args;
  if (pSVar2 == (System_String_array *)0x0) goto label_059296c2;
  if ((int)pSVar2->max_length == 2) {
    pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar3 == (GameManagers_BaseGameManager_o *)0x0) {
label_059293e4:
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      ppSVar7 = &"You must have a character to use emotes.";
      goto label_05929424;
    }
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_059293e4;
    x = (*(uint64_t *)((char *)pGVar3 + 0x80));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) goto label_059293e4;
    plVar4 = (*(uint64_t *)((char *)pGVar3 + 0x80));
    if (plVar4 == (long *)0x0) goto label_059296c2;
    source = (System_Collections_Generic_IEnumerable_TSource__o *)
             (**(code **)(*plVar4 + 0x4e8))(plVar4,*(undefined8 *)(*plVar4 + 0x4f0));
    pSVar2 = targetAddress->args;
    if (pSVar2 == (System_String_array *)0x0) goto label_059296c2;
    if ((pSVar2->max_length & 0xfffffffe) == 0) {
label_059296c7:
      ThrowIndexOutOfRangeException();
    }
    if (pSVar2->m_Items[1] == (System_String_o *)0x0) goto label_059296c2;
    bVar6 = System_String__Equals_52ffb20(pSVar2->m_Items[1],"list",5,(MethodInfo *)0x0);
    if (bVar6) {
      if (source == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) goto label_059296c2;
      if (*(int *)&(*(uint64_t *)((char *)source + 0x19)) == 0) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar9 = "Your current character has no emotes.";
      }
      else {
        if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
        }
        str0 = "Emotes: ";
        pSVar9 = ", ";
        pGVar8 = TypeInfo_GameManagers_ChatManager_c->static_fields;
        __this_00 = pGVar8->__9__2_0;
        if (__this_00 == (System_Func_string__string__o *)0x0) {
          if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
            pGVar8 = TypeInfo_GameManagers_ChatManager_c->static_fields;
          }
          object = (Il2CppObject *)pGVar8->__9;
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
          System_Func_object__object____ctor
                    ((System_Func_object__object__o *)__this_00,object,
                     (intptr_t)MethodInfo_GameManagers_ChatManager_c_Emote_b__2_0,(MethodInfo_4F19B50 *)0x0);
          pGVar8 = TypeInfo_GameManagers_ChatManager_c->static_fields;
          pGVar8->__9__2_0 = __this_00;
          Il2CppCodeGenWriteBarrier(&pGVar8->__9__2_0);
        }
        values = System_Linq_Enumerable__Select_object__object_
                           (source,(System_Func_TSource__TResult__o *)__this_00,
                            (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
        pSVar9 = System_String__Join_5303350
                           (pSVar9,(System_Collections_Generic_IEnumerable_string__o *)values,
                            (MethodInfo *)0x0);
        pSVar9 = System_String__Concat_52f0320(str0,pSVar9,(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
      }
      color = 3;
      goto label_05929430;
    }
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_GameManagers_ChatManager_c__DisplayClass2_0_Emote_b__1,
               (MethodInfo_4F19300 *)0x0);
    pSVar9 = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                       (source,(System_Func_TSource__bool__o *)__this_01,
                        (MethodInfo_34ED9E0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_71a8548)
    ;
    if (pSVar9 != (System_String_o *)0x0) {
      lVar5 = *plVar4;
      (**(code **)(lVar5 + 0x638))
                (plVar4,pSVar9,*(undefined8 *)(lVar5 + 0x640),lVar5,*(code **)(lVar5 + 0x638));
      return;
    }
    pSVar2 = targetAddress->args;
    if (pSVar2 == (System_String_array *)0x0) goto label_059296c2;
    if ((pSVar2->max_length & 0xfffffffe) == 0) goto label_059296c7;
    pSVar9 = System_String__Concat_5301f10
                       ("Emote ",pSVar2->m_Items[1]," not found, try /emote list to see available emotes.",(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    ppSVar7 = &"Usage: /emote [name|list]";
label_05929424:
    pSVar9 = *ppSVar7;
  }
  color = 4;
label_05929430:
  GameManagers_ChatManager__AddLine
            (pSVar9,color,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
             in_stack_ffffffffffffffb8);
  return;
}


// GameManagers.ChatManager$$Clear
// il2cpp: void GameManagers_ChatManager__Clear (System_String_array* args, const MethodInfo* method);
// 0x59296d0

void GameManagers_ChatManager__Clear(System_String_array *args,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754578c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_0754578c = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    GameManagers_ChatManager__Clear_5829730((MethodInfo *)klass);
    return;
  }
  GameManagers_ChatManager__Clear_5829730((MethodInfo *)klass);
  return;
}


// GameManagers.ChatManager$$ReviveAll
// il2cpp: void GameManagers_ChatManager__ReviveAll (System_String_array* args, const MethodInfo* method);
// 0x5929b10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5929b3e: jmp 0x5929c75

void GameManagers_ChatManager__ReviveAll(System_String_array *args,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Pun_PhotonView_o *__this;
  bool bVar2;
  ulong in_RAX;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  GameManagers_ChatManager_c *klass;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_0754578d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"All players have been revived by master client.");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerRPC");
    Il2CppMethodInitialized_0754578d = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
    bVar2 = GameManagers_ChatManager__CheckMC((MethodInfo *)klass);
  }
  else {
    bVar2 = GameManagers_ChatManager__CheckMC((MethodInfo *)klass);
  }
  if (!bVar2) {
    return;
  }
  __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  uStack_28 = uStack_28 & 0xffffffffffffff;
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_28 + 7));
  if (parameters != (System_Object_array *)0x0) {
    if ((pIVar3 != (Il2CppObject *)0x0) &&
       (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
       pIVar4 == (Il2CppObject *)0x0)) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = pIVar3;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if (__this != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this,"SpawnPlayerRPC",0,parameters,(MethodInfo *)0x0);
      method_00 = extraout_RDX;
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        method_00 = extraout_RDX_00;
      }
      GameManagers_ChatManager__SendChatAll("All players have been revived by master client.",3,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$Revive
// il2cpp: void GameManagers_ChatManager__Revive (System_String_array* args, const MethodInfo* method);
// 0x5929f00
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5929f3e: jmp 0x592a15f
// asm:   0x5929fee: jmp 0x592a15f

void GameManagers_ChatManager__Revive(System_String_array *args,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Pun_PhotonView_o *__this;
  bool bVar2;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  GameManagers_ChatManager_c *klass;
  MethodInfo *in_stack_ffffffffffffffb8;
  undefined1 local_29;
  
  if (Il2CppMethodInitialized_0754578e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&" has been revived.");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"You have been revived by master client.");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerRPC");
    Il2CppMethodInitialized_0754578e = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
    bVar2 = GameManagers_ChatManager__CheckMC((MethodInfo *)klass);
  }
  else {
    bVar2 = GameManagers_ChatManager__CheckMC((MethodInfo *)klass);
  }
  if (bVar2) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      targetPlayer = GameManagers_ChatManager__GetPlayer_582a190(args,method);
    }
    else {
      targetPlayer = GameManagers_ChatManager__GetPlayer_582a190(args,method);
    }
    if (targetPlayer != (Photon_Realtime_Player_o *)0x0) {
      __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_29 = 0;
      pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&local_29);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = pIVar3;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        if (__this != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_56e5850
                    (__this,"SpawnPlayerRPC",targetPlayer,parameters,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__SendChat("You have been revived by master client.",targetPlayer,3,(MethodInfo *)parameters);
          if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
          }
          pSVar5 = PhotonExtensions__GetStringProperty
                             (targetPlayer,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                              "",(MethodInfo *)0x0);
          pSVar5 = System_String__Concat_52f0320(pSVar5," has been revived.",(MethodInfo *)0x0);
          GameManagers_ChatManager__AddLine
                    (pSVar5,3,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
                     in_stack_ffffffffffffffb8);
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
// 0x592a470

void GameManagers_ChatManager__Mute(System_String_array *args,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Realtime_Player_o *player;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_01;
  
  if (Il2CppMethodInitialized_0754578f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Emote");
    il2cpp_codegen_initialize_runtime_metadata(&"Voice");
    Il2CppMethodInitialized_0754578f = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    player = GameManagers_ChatManager__GetPlayer_582a190(args,method);
    method_00 = extraout_RDX_01;
  }
  else {
    player = GameManagers_ChatManager__GetPlayer_582a190(args,method);
    method_00 = extraout_RDX;
  }
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    method_00 = extraout_RDX_00;
  }
  GameManagers_ChatManager__MutePlayer(player,"Emote",method_00);
  GameManagers_ChatManager__MutePlayer(player,"Text",method_01);
  GameManagers_ChatManager__MutePlayer(player,"Voice",method_02);
  return;
}


// GameManagers.ChatManager$$Unmute
// il2cpp: void GameManagers_ChatManager__Unmute (System_String_array* args, const MethodInfo* method);
// 0x592a830

void GameManagers_ChatManager__Unmute(System_String_array *args,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Realtime_Player_o *player;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_01;
  
  if (Il2CppMethodInitialized_07545790 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Emote");
    il2cpp_codegen_initialize_runtime_metadata(&"Voice");
    Il2CppMethodInitialized_07545790 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    player = GameManagers_ChatManager__GetPlayer_582a190(args,method);
    method_00 = extraout_RDX_01;
  }
  else {
    player = GameManagers_ChatManager__GetPlayer_582a190(args,method);
    method_00 = extraout_RDX;
  }
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    method_00 = extraout_RDX_00;
  }
  GameManagers_ChatManager__UnmutePlayer(player,"Emote",method_00);
  GameManagers_ChatManager__UnmutePlayer(player,"Text",method_01);
  GameManagers_ChatManager__UnmutePlayer(player,"Voice",method_02);
  return;
}


// GameManagers.ChatManager$$NextSong
// il2cpp: void GameManagers_ChatManager__NextSong (System_String_array* args, const MethodInfo* method);
// 0x592ace0

void GameManagers_ChatManager__NextSong(System_String_array *args,MethodInfo *method)

{
  ApplicationManagers_MusicManager__ChatNextSong((MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$Pause
// il2cpp: void GameManagers_ChatManager__Pause (System_String_array* args, const MethodInfo* method);
// 0x592acf0

void GameManagers_ChatManager__Pause(System_String_array *args,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  GameManagers_InGameManager_o *__this;
  bool bVar3;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545791 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07545791 = '\x01';
    uVar2 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar2 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar3 = GameManagers_ChatManager__CheckMC((MethodInfo *)klass);
  }
  else {
    bVar3 = GameManagers_ChatManager__CheckMC((MethodInfo *)klass);
  }
  if (!bVar3) {
    return;
  }
  __this = (GameManagers_InGameManager_o *)
           TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  GameManagers_InGameManager__PauseGame(__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$Unpause
// il2cpp: void GameManagers_ChatManager__Unpause (System_String_array* args, const MethodInfo* method);
// 0x592add0

void GameManagers_ChatManager__Unpause(System_String_array *args,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  GameManagers_InGameManager_o *__this;
  bool bVar3;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545792 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07545792 = '\x01';
    uVar2 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar2 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar3 = GameManagers_ChatManager__CheckMC((MethodInfo *)klass);
  }
  else {
    bVar3 = GameManagers_ChatManager__CheckMC((MethodInfo *)klass);
  }
  if (!bVar3) {
    return;
  }
  __this = (GameManagers_InGameManager_o *)
           TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  GameManagers_InGameManager__StartUnpauseGame(__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$Resetkd
// il2cpp: void GameManagers_ChatManager__Resetkd (System_String_array* args, const MethodInfo* method);
// 0x592aeb0

void GameManagers_ChatManager__Resetkd(System_String_array *args,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  
  if (Il2CppMethodInitialized_07545793 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07545793 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    GameManagers_InGameManager__ResetPlayerKD(player,(MethodInfo *)0x0);
    return;
  }
  GameManagers_InGameManager__ResetPlayerKD(player,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$Resetkdall
// il2cpp: void GameManagers_ChatManager__Resetkdall (System_String_array* args, const MethodInfo* method);
// 0x592af30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592afb6: test r14, r14
// asm:   0x592afb9: je 0x592b030

void GameManagers_ChatManager__Resetkdall(System_String_array *args,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Photon_Pun_PhotonView_o *__this;
  MethodInfo *pMVar3;
  Il2CppClass *pIVar4;
  
  if (Il2CppMethodInitialized_07545794 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ResetKDRPC");
    Il2CppMethodInitialized_07545794 = '\x01';
  }
  pMVar3 = MethodInfo_System_Array_Empty_object;
  __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  if ((MethodInfo_System_Array_Empty_object->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_object);
    pIVar4 = *(Il2CppClass **)((long)(pMVar3->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_object->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar4);
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  if (__this == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  Photon_Pun_PhotonView__RPC
            (__this,"ResetKDRPC",0,*(System_Object_array **)pIVar4->static_fields,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$Help
// il2cpp: void GameManagers_ChatManager__Help (System_String_array* args, const MethodInfo* method);
// 0x592b040
// eh: try 0x592b4f4..0x592b6ca -> pad 0x592b6e1 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x592b6f9..0x592b6fe -> pad 0x592b723 cleanup
// eh: try 0x592b726..0x592b730 -> pad 0x592b738 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592b204: jmp 0x592b21f
// asm:   0x592b2d5: jmp 0x592b37d
// asm:   0x592b4e2: mov r14, r15
// asm:   0x592b4e5: nop word ptr cs:[rax + rax]
// asm:   0x592b6c0: jmp 0x592b1cc
// asm:   0x592b6d9: jmp 0x592b6e1
// asm:   0x592b6db: jmp 0x592b6e1
// asm:   0x592b6dd: jmp 0x592b6e1
// asm:   0x592b6df: jmp 0x592b6e1
// asm:   0x592b6e1: mov rbx, rax
// asm:   0x592b6e4: cmp edx, 1
// asm:   0x592b6e7: jne 0x592b726
// asm:   0x592b6e9: mov rdi, rbx
// asm:   0x592b6ec: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x592b6f1: mov rbx, qword ptr [rax]
// asm:   0x592b6f4: mov qword ptr [rsp + 8], rbx
// asm:   0x592b6f9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x592b6fe: lea rax, [rip + 0x1963993]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatManager_CommandAttribute_Dispose
// asm:   0x592b705: mov rsi, qword ptr [rax]
// asm:   0x592b708: lea rdi, [rsp + 0x20]
// asm:   0x592b70d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x592b712: test rbx, rbx
// asm:   0x592b715: je 0x592b5f7
// asm:   0x592b71b: mov rdi, rbx
// asm:   0x592b71e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x592b723: mov rbx, rax
// asm:   0x592b726: lea rdi, [rsp + 8]
// asm:   0x592b72b: call 0x2fd2b40  ; il2cpp_runtime_helper_02fd2b40()
// asm:   0x592b730: mov rdi, rbx
// asm:   0x592b733: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x592b738: mov rdi, rax
// asm:   0x592b73b: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_ChatManager__Help(System_String_array *args,MethodInfo *method)

{
  code cVar1;
  uint32_t uVar2;
  System_Collections_Generic_Dictionary_string__ChatManager_CommandAttribute__o *source;
  double dVar3;
  bool bVar4;
  int32_t iVar5;
  System_Func_T__TResult__o *pSVar6;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  GameManagers_ChatManager___c_StaticFields *pGVar7;
  System_Func_T__TResult__o *__this;
  System_Collections_Generic_Dictionary_TKey__TElement__o *__this_00;
  System_Collections_Generic_List_TValue__o *__this_01;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  Il2CppObject *pIVar10;
  Il2CppObject *arg1;
  MethodInfo *method_00;
  System_Math_c *method_01;
  MethodInfo *in_stack_ffffffffffffff88;
  int32_t iStack_68;
  int iStack_64;
  undefined1 auStack_60 [16];
  MethodInfo *pMStack_50;
  undefined1 auStack_48 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_40;
  MethodInfo *pMStack_38;
  
  if (Il2CppMethodInitialized_07545795 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_c_Help_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_c_Help_b__13_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_c_Help_b__13_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_c);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_Util_PaginateDictionary_string_ChatManager_CommandAttribute);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"----Command list----\n");
    il2cpp_codegen_initialize_runtime_metadata(&"Page {0} / {1}");
    il2cpp_codegen_initialize_runtime_metadata(&"Page {0} does not exist.");
    Il2CppMethodInitialized_07545795 = '\x01';
  }
  auStack_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pMStack_38 = (MethodInfo *)0x0;
  iStack_68 = 1;
  if (args == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (((int)args->max_length < 2) ||
     (System_Int32__TryParse(args->m_Items[1],&iStack_68,(MethodInfo *)0x0), iStack_68 != 0)) {
    uVar2 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    iStack_68 = 1;
    uVar2 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  source = TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
  if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
    pGVar7 = TypeInfo_GameManagers_ChatManager_c->static_fields;
    pSVar6 = (System_Func_T__TResult__o *)pGVar7->__9__13_0;
  }
  else {
    pGVar7 = TypeInfo_GameManagers_ChatManager_c->static_fields;
    pSVar6 = (System_Func_T__TResult__o *)pGVar7->__9__13_0;
  }
  if (pSVar6 == (System_Func_T__TResult__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
      pGVar7 = TypeInfo_GameManagers_ChatManager_c->static_fields;
    }
    pIVar10 = (Il2CppObject *)pGVar7->__9;
    pSVar6 = (System_Func_T__TResult__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_KeyValuePair_string_ChatManager_CommandAttribute_bool);
    System_Func_KeyValuePair_object__object___bool____ctor
              (pSVar6,pIVar10,(intptr_t)MethodInfo_GameManagers_ChatManager_c_Help_b__13_0,
               (MethodInfo_4F10020 *)0x0);
    pGVar7 = TypeInfo_GameManagers_ChatManager_c->static_fields;
    pGVar7->__9__13_0 = (System_Func_KeyValuePair_string__ChatManager_CommandAttribute___bool__o *)pSVar6;
    Il2CppCodeGenWriteBarrier(&pGVar7->__9__13_0);
  }
  source_00 = System_Linq_Enumerable__Where_KeyValuePair_object__object__
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)pSVar6,
                         (MethodInfo_3501CC0 *)
                         MethodInfo_System_Linq_Enumerable_Where_KeyValuePair_string_ChatManager_CommandAttribute
                        );
  if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
    pGVar7 = TypeInfo_GameManagers_ChatManager_c->static_fields;
    pSVar6 = (System_Func_T__TResult__o *)pGVar7->__9__13_1;
  }
  else {
    pGVar7 = TypeInfo_GameManagers_ChatManager_c->static_fields;
    pSVar6 = (System_Func_T__TResult__o *)pGVar7->__9__13_1;
  }
  if (pSVar6 == (System_Func_T__TResult__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
      pGVar7 = TypeInfo_GameManagers_ChatManager_c->static_fields;
    }
    pIVar10 = (Il2CppObject *)pGVar7->__9;
    pSVar6 = (System_Func_T__TResult__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_KeyValuePair_string_ChatManager_CommandAttribute_string);
    System_Func_KeyValuePair_object__object___object____ctor
              (pSVar6,pIVar10,(intptr_t)MethodInfo_GameManagers_ChatManager_c_Help_b__13_1,
               (MethodInfo_4F10320 *)0x0);
    pGVar7 = TypeInfo_GameManagers_ChatManager_c->static_fields;
    pGVar7->__9__13_1 = (System_Func_KeyValuePair_string__ChatManager_CommandAttribute___string__o *)pSVar6;
    Il2CppCodeGenWriteBarrier(&pGVar7->__9__13_1);
    uVar2 = (TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
    pGVar7 = TypeInfo_GameManagers_ChatManager_c->static_fields;
    __this = (System_Func_T__TResult__o *)pGVar7->__9__13_2;
  }
  else {
    pGVar7 = ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c)->static_fields;
    __this = (System_Func_T__TResult__o *)pGVar7->__9__13_2;
  }
  if (__this == (System_Func_T__TResult__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
      pGVar7 = TypeInfo_GameManagers_ChatManager_c->static_fields;
    }
    pIVar10 = (Il2CppObject *)pGVar7->__9;
    __this = (System_Func_T__TResult__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_KeyValuePair_string_ChatManager_CommandAttribute_ChatManager_CommandAttribute
                       );
    System_Func_KeyValuePair_object__object___object____ctor
              (__this,pIVar10,(intptr_t)MethodInfo_GameManagers_ChatManager_c_Help_b__13_2,
               (MethodInfo_4F10320 *)0x0);
    pGVar7 = TypeInfo_GameManagers_ChatManager_c->static_fields;
    pGVar7->__9__13_2 =
         (System_Func_KeyValuePair_string__ChatManager_CommandAttribute___ChatManager_CommandAttribute__o *)
         __this;
    Il2CppCodeGenWriteBarrier(&pGVar7->__9__13_2);
  }
  __this_00 = System_Linq_Enumerable__ToDictionary_KeyValuePair_object__object___object__object_
                        (source_00,(System_Func_TSource__TKey__o *)pSVar6,
                         (System_Func_TSource__TElement__o *)__this,
                         (MethodInfo_34FEC80 *)
                         MethodInfo_System_Linq_Enumerable_ToDictionary_KeyValuePair_string_ChatManager_CommandAttribute_string_Chat
                        );
  if (__this_00 == (System_Collections_Generic_Dictionary_TKey__TElement__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar5 = System_Collections_Generic_Dictionary_object__object___get_Count
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                     (MethodInfo_4AAD0E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_get_Count
                    );
  method_01 = TypeInfo_System_Math;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar3 = ceil((double)iVar5 / 7.0,(MethodInfo *)method_01);
  iVar5 = iStack_68;
  if ((iStack_68 < 1) || ((int)dVar3 < iStack_68)) {
    auStack_60._0_4_ = iStack_68;
    pIVar10 = il2cpp_vm_Object_Box(g_data_07556710,auStack_60);
    pSVar8 = System_String__Format("Page {0} does not exist.",pIVar10,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    iVar5 = 4;
  }
  else {
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    __this_01 = Utility_Util__PaginateDictionary_object__object_
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,iVar5,7,
                           (MethodInfo_377DCF0 *)
                           MethodInfo_Utility_Util_PaginateDictionary_string_ChatManager_CommandAttribute);
    pSVar8 = "----Command list----\n";
    if (__this_01 == (System_Collections_Generic_List_TValue__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,
               (System_Collections_Generic_List_object__o *)__this_01,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_ChatManager_CommandAttribute_GetEnumerator);
    pMStack_38 = pMStack_50;
    auStack_48 = (undefined1  [8])auStack_60._0_8_;
    pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_60._8_8_;
    auStack_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    auStack_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_48;
    while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_ChatManager_CommandAttribute_MoveNext
                             ), bVar4) {
      if (pMStack_38 == (MethodInfo *)0x0) {
        ThrowNullReferenceException();
      }
      if (*(char *)&pMStack_38->parameters == '\0') {
        cVar1 = (code)(TypeInfo_GameManagers_ChatManager_CLCommandAttribute->_2).typeHierarchyDepth;
        if (((byte)pMStack_38->methodPointer[0x130] < (byte)cVar1) ||
           (*(GameManagers_ChatManager_CLCommandAttribute_c **)
             (*(long *)(pMStack_38->methodPointer + 200) + -8 + (ulong)(byte)cVar1 * 8) !=
            TypeInfo_GameManagers_ChatManager_CLCommandAttribute)) {
          pSVar9 = (System_String_o *)pMStack_38->name;
        }
        else {
          pSVar9 = (System_String_o *)pMStack_38->name;
          method_00 = pMStack_38;
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar9 = GameManagers_ChatManager__GetColorString(pSVar9,8,false,method_00);
        }
        pSVar8 = System_String__Concat_5301f10(pSVar8,pSVar9,"\n",(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_ChatManager_CommandAttribute_Dispose);
    auStack_60._0_4_ = iStack_68;
    pIVar10 = il2cpp_vm_Object_Box(g_data_07556710,auStack_60);
    iStack_64 = (int)dVar3;
    arg1 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_64);
    pSVar9 = System_String__Format_5302c50("Page {0} / {1}",pIVar10,arg1,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_52f0320(pSVar8,pSVar9,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    iVar5 = 3;
  }
  GameManagers_ChatManager__AddLine
            (pSVar8,iVar5,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
             in_stack_ffffffffffffff88);
  return;
}


// GameManagers.ChatManager$$SaveChatHistory
// il2cpp: void GameManagers_ChatManager__SaveChatHistory (System_String_array* args, const MethodInfo* method);
// 0x592b910
// eh: try 0x592ba05..0x592bcf3 -> pad 0x592bd24 (+25 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x592bd47..0x592be19 -> pad 0x592be1e (+1 call sites) cleanup
// eh: try 0x592be21..0x592be26 -> pad 0x592be2e catch (...) [compiler noexcept guard]
// asm: 89 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592bb68: jmp 0x592bbd0
// asm:   0x592bd02: jmp 0x592bd30
// asm:   0x592bd04: jmp 0x592bd30
// asm:   0x592bd06: jmp 0x592bd30
// asm:   0x592bd08: jmp 0x592bd30
// asm:   0x592bd0a: jmp 0x592bd30
// asm:   0x592bd0c: jmp 0x592bd30
// asm:   0x592bd0e: jmp 0x592bd30
// asm:   0x592bd10: jmp 0x592bd30
// asm:   0x592bd12: jmp 0x592bd30
// asm:   0x592bd14: jmp 0x592bd30
// asm:   0x592bd16: jmp 0x592bd30
// asm:   0x592bd18: jmp 0x592bd30
// asm:   0x592bd1a: jmp 0x592bd30
// asm:   0x592bd1c: jmp 0x592bd30
// asm:   0x592bd1e: jmp 0x592bd30
// asm:   0x592bd20: jmp 0x592bd30
// asm:   0x592bd22: jmp 0x592bd30
// asm:   0x592bd24: jmp 0x592bd30
// asm:   0x592bd26: jmp 0x592bd30
// asm:   0x592bd28: jmp 0x592bd30
// asm:   0x592bd2a: jmp 0x592bd30
// asm:   0x592bd2c: jmp 0x592bd30
// asm:   0x592bd2e: jmp 0x592bd30
// asm:   0x592bd30: mov rbx, rax
// asm:   0x592bd33: cmp edx, 1
// asm:   0x592bd36: jne 0x592be26
// asm:   0x592bd3c: mov rdi, rbx
// asm:   0x592bd3f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x592bd44: mov rbx, rax
// asm:   0x592bd47: lea rdi, [rip + 0x194c372]  ; TypeInfo_System_Exception
// asm:   0x592bd4e: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x592bd53: mov rcx, qword ptr [rbx]
// asm:   0x592bd56: mov rsi, qword ptr [rcx]
// asm:   0x592bd59: mov rdi, rax
// asm:   0x592bd5c: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x592bd61: test al, al
// asm:   0x592bd63: je 0x592bdf8
// asm:   0x592bd69: mov rbx, qword ptr [rbx]
// asm:   0x592bd6c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x592bd71: test rbx, rbx
// asm:   0x592bd74: je 0x592be19
// asm:   0x592bd7a: mov rax, qword ptr [rbx]
// asm:   0x592bd7d: mov rsi, qword ptr [rax + 0x190]
// asm:   0x592bd84: mov rdi, rbx
// asm:   0x592bd87: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x592bd8d: mov rbx, rax
// asm:   0x592bd90: lea rdi, [rip + 0x19aff39]  ; "Failed to save chat history: "
// asm:   0x592bd97: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x592bd9c: mov rdi, rax
// asm:   0x592bd9f: mov rsi, rbx
// asm:   0x592bda2: xor edx, edx
// asm:   0x592bda4: call 0x53f0320  ; System_String__Concat()
// asm:   0x592bda9: mov rbx, rax
// asm:   0x592bdac: lea rdi, [rip + 0x194a7cd]  ; TypeInfo_GameManagers_ChatManager
// asm:   0x592bdb3: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x592bdb8: cmp dword ptr [rax + 0xe4], 0
// asm:   0x592bdbf: jne 0x592bdc9
// asm:   0x592bdc1: mov rdi, rax
// asm:   0x592bdc4: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x592bdc9: sub rsp, 0x10
// asm:   0x592bdcd: mov rdi, rbx
// asm:   0x592bdd0: mov esi, 4
// asm:   0x592bdd5: xor edx, edx
// asm:   0x592bdd7: xor ecx, ecx
// asm:   0x592bdd9: xor r8d, r8d
// asm:   0x592bddc: mov r9d, 0xffffffff
// asm:   0x592bde2: push 0
// asm:   0x592bde4: push -1
// asm:   0x592bde6: push 0
// asm:   0x592bde8: push 0
// asm:   0x592bdea: call 0x5929040  ; GameManagers_ChatManager__AddLine()
// asm:   0x592bdef: add rsp, 0x30
// asm:   0x592bdf3: jmp 0x592bcf3
// asm:   0x592bdf8: mov edi, 8
// asm:   0x592bdfd: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x592be02: mov rcx, qword ptr [rbx]
// asm:   0x592be05: mov qword ptr [rax], rcx
// asm:   0x592be08: lea rsi, [rip + 0x15016f1]
// asm:   0x592be0f: mov rdi, rax
// asm:   0x592be12: xor edx, edx
// asm:   0x592be14: call 0x6e255c0  ; __cxa_throw()
// asm:   0x592be19: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x592be1e: mov rbx, rax
// asm:   0x592be21: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x592be26: mov rdi, rbx
// asm:   0x592be29: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x592be2e: mov rdi, rax
// asm:   0x592be31: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_ChatManager__SaveChatHistory(System_String_array *args,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *source;
  bool bVar1;
  System_String_o *pSVar2;
  System_DateTime_Fields SVar3;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  GameManagers_ChatManager___c_StaticFields *pGVar6;
  System_Func_T1__T2__TResult__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *values;
  MethodInfo *in_stack_ffffffffffffffa8;
  System_DateTime_Fields SStack_40;
  System_String_o *pSStack_38;
  
  if (Il2CppMethodInitialized_07545796 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_string_string_71a8948);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_int_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_c_SaveChatHistory_b__14_0)
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
    Il2CppMethodInitialized_07545796 = '\x01';
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
  SVar3._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
  SStack_40._dateData = SVar3._dateData;
  pIVar4 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_System_DateTime,&SStack_40);
  pSVar5 = System_String__Format("chat_history_{0:yyyy-MM-dd_HH-mm-ss}",pIVar4,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  bVar1 = Utility_Util__IsValidFileName(pSVar5,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar5 = System_String__Concat_52f0320(pSVar5,".txt",(MethodInfo *)0x0);
    if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
    }
    pSStack_38 = System_IO_Path__Combine(pSVar2,pSVar5,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    source = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
    if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
      pGVar6 = TypeInfo_GameManagers_ChatManager_c->static_fields;
      __this = (System_Func_T1__T2__TResult__o *)pGVar6->__9__14_0;
    }
    else {
      pGVar6 = TypeInfo_GameManagers_ChatManager_c->static_fields;
      __this = (System_Func_T1__T2__TResult__o *)pGVar6->__9__14_0;
    }
    if (__this == (System_Func_T1__T2__TResult__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
        pGVar6 = TypeInfo_GameManagers_ChatManager_c->static_fields;
      }
      pIVar4 = (Il2CppObject *)pGVar6->__9;
      __this = (System_Func_T1__T2__TResult__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_int_string);
      System_Func_object__int__object____ctor
                (__this,pIVar4,(intptr_t)MethodInfo_GameManagers_ChatManager_c_SaveChatHistory_b__14_0,
                 (MethodInfo_4F20870 *)0x0);
      pGVar6 = TypeInfo_GameManagers_ChatManager_c->static_fields;
      pGVar6->__9__14_0 = (System_Func_string__int__string__o *)__this;
      Il2CppCodeGenWriteBarrier(&pGVar6->__9__14_0);
    }
    values = System_Linq_Enumerable__Select_object__object__34f63f0
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__int__TResult__o *)__this,
                        (MethodInfo_34F63F0 *)MethodInfo_System_Linq_Enumerable_Select_string_string_71a8948);
    pSVar2 = System_String__Join_5303350
                       ("\n",(System_Collections_Generic_IEnumerable_string__o *)values,
                        (MethodInfo *)0x0);
    SStack_40._dateData = SVar3._dateData;
    pIVar4 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_System_DateTime,&SStack_40);
    pSVar2 = System_String__Format_5302c50
                       ("[TIME:{0:yyyy-MM-dd HH:mm:ss UTC}]\n\n{1}",pIVar4,(Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    System_IO_File__WriteAllText(pSStack_38,pSVar2,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_52f0320("Chat history saved to Aottg2/Chat/",pSVar5,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__AddLine
              (pSVar2,3,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
               in_stack_ffffffffffffffa8);
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__AddLine
              ("Invalid filename error.",4,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
               in_stack_ffffffffffffffa8);
  }
  return;
}


// GameManagers.ChatManager$$PM
// il2cpp: void GameManagers_ChatManager__PM (System_String_array* args, const MethodInfo* method);
// 0x592be40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592bee0: jmp 0x592c01a
// asm:   0x592c01a: add rsp, 8

void GameManagers_ChatManager__PM(System_String_array *args,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Photon_Realtime_Player_o *target;
  Photon_Realtime_Player_o *pPVar3;
  UI_ChatPanel_o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *values;
  System_String_o *message;
  System_String_o **ppSVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  GameManagers_ChatManager_c *method_01;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (Il2CppMethodInitialized_07545797 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Skip_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Usage: /pm [ID] [message]");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"Cannot send private messages to yourself.");
    Il2CppMethodInitialized_07545797 = '\x01';
  }
  if (args == (System_String_array *)0x0) {
label_0592c03b:
    ThrowNullReferenceException();
  }
  uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  if ((int)args->max_length < 2) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    ppSVar4 = &"Usage: /pm [ID] [message]";
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      target = GameManagers_ChatManager__GetPlayer_582a190(args,method);
    }
    else {
      target = GameManagers_ChatManager__GetPlayer_582a190(args,method);
    }
    if (target == (Photon_Realtime_Player_o *)0x0) {
      return;
    }
    if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    if (target != pPVar3) {
      method_01 = TypeInfo_GameManagers_ChatManager;
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      __this = GameManagers_ChatManager__GetChatPanel((MethodInfo *)method_01);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      if (__this != (UI_ChatPanel_o *)0x0) {
        UI_ChatPanel__EnterPMMode(__this,target,(MethodInfo *)0x0);
        if ((int)args->max_length < 3) {
          return;
        }
        values = System_Linq_Enumerable__Skip_object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)args,2,
                            (MethodInfo_34FD7B0 *)MethodInfo_System_Linq_Enumerable_Skip_string);
        message = System_String__Join_5303350
                            (" ",(System_Collections_Generic_IEnumerable_string__o *)values,
                             (MethodInfo *)0x0);
        method_00 = extraout_RDX;
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          method_00 = extraout_RDX_00;
        }
        GameManagers_ChatManager__SendPrivateMessage(target,message,method_00);
        return;
      }
      goto label_0592c03b;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    ppSVar4 = &"Cannot send private messages to yourself.";
  }
  GameManagers_ChatManager__AddLine
            (*ppSVar4,4,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
             in_stack_ffffffffffffffc8);
  return;
}


// GameManagers.ChatManager$$Restart
// il2cpp: void GameManagers_ChatManager__Restart (System_String_array* args, const MethodInfo* method);
// 0x592c580

void GameManagers_ChatManager__Restart(System_String_array *args,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545798 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_07545798 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar2 = GameManagers_ChatManager__CheckMC((MethodInfo *)klass);
  }
  else {
    bVar2 = GameManagers_ChatManager__CheckMC((MethodInfo *)klass);
  }
  if (bVar2) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      GameManagers_InGameManager__RestartGame((MethodInfo *)0x0);
      return;
    }
    GameManagers_InGameManager__RestartGame((MethodInfo *)0x0);
    return;
  }
  return;
}


// GameManagers.ChatManager$$CloseLobby
// il2cpp: void GameManagers_ChatManager__CloseLobby (System_String_array* args, const MethodInfo* method);
// 0x592c610

void GameManagers_ChatManager__CloseLobby(System_String_array *args,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Realtime_Player_o *player;
  GameManagers_ChatManager_o *__this;
  bool bVar2;
  Photon_Realtime_Player_array *pPVar3;
  il2cpp_array_size_t iVar4;
  GameManagers_ChatManager__WaitAndLeave_d__0_o *__this_00;
  uint uVar5;
  Il2CppClass *klass;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07545799 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_07545799 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar2 = GameManagers_ChatManager__CheckMC((MethodInfo *)klass);
  }
  else {
    bVar2 = GameManagers_ChatManager__CheckMC((MethodInfo *)klass);
  }
  if (!bVar2) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar3 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (pPVar3 != (Photon_Realtime_Player_array *)0x0) {
    iVar4 = pPVar3->max_length;
    if (0 < (int)iVar4) {
      uVar5 = 0;
      do {
        if ((uint)iVar4 <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        player = pPVar3->m_Items[(int)uVar5];
        if (player == (Photon_Realtime_Player_o *)0x0) goto label_0592c7b5;
        if ((player->fields).IsLocal == false) {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__KickPlayer(player,false,false,".",in_R8);
          iVar4 = pPVar3->max_length;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)iVar4);
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    __this = TypeInfo_GameManagers_ChatManager->static_fields->_instance;
    if (__this != (GameManagers_ChatManager_o *)0x0) {
      if (Il2CppMethodInitialized_07545789 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_WaitAndLeave_d__0);
        Il2CppMethodInitialized_07545789 = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_WaitAndLeave_d__0);
      GameManagers_ChatManager__WaitAndLeave_d__0___ctor(__this_00,0,(MethodInfo *)0x0);
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_0592c7b5:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$Kick
// il2cpp: void GameManagers_ChatManager__Kick (System_String_array* args, const MethodInfo* method);
// 0x592c9c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592c9f5: jmp 0x592cb9a
// asm:   0x592cadc: jmp 0x592cb9a

void GameManagers_ChatManager__Kick(System_String_array *args,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Pun_PhotonView_o *__this;
  bool bVar2;
  Photon_Realtime_Player_o *player;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  MethodInfo *in_R8;
  int32_t local_1c;
  
  if (Il2CppMethodInitialized_0754579a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"VoteKickRPC");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_0754579a = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    player = GameManagers_ChatManager__GetPlayer_582a190(args,method);
  }
  else {
    player = GameManagers_ChatManager__GetPlayer_582a190(args,method);
  }
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    if (bVar2) {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__KickPlayer(player,true,false,".",in_R8);
      return;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      bVar2 = GameManagers_ChatManager__CanVoteKick(player,method);
    }
    else {
      bVar2 = GameManagers_ChatManager__CanVoteKick(player,method);
    }
    if (bVar2) {
      __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_1c = (player->fields).actorNumber;
      pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_1c);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = pIVar3;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
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
// 0x592cd50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592cd7c: jmp 0x592ce91

void GameManagers_ChatManager__Ban(System_String_array *args,MethodInfo *method)

{
  uint32_t uVar1;
  int32_t actorNumber;
  bool bVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_String_o *reason;
  System_Action_string__o *__this;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754579b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754579b = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar2 = GameManagers_ChatManager__CanUseRoomModerationCommand((MethodInfo *)klass);
  }
  else {
    bVar2 = GameManagers_ChatManager__CanUseRoomModerationCommand((MethodInfo *)klass);
  }
  if (bVar2) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      pPVar3 = GameManagers_ChatManager__GetPlayer_582a190(args,method);
      method_00 = extraout_RDX_01;
    }
    else {
      pPVar3 = GameManagers_ChatManager__GetPlayer_582a190(args,method);
      method_00 = extraout_RDX;
    }
    if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        method_00 = extraout_RDX_00;
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,2,method_00);
      actorNumber = (pPVar3->fields).actorNumber;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                ((System_Action_object__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus,(MethodInfo_4A81BE0 *)0x0
                );
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__RoomBan(actorNumber,false,__this,reason,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// GameManagers.ChatManager$$InfoBan
// il2cpp: void GameManagers_ChatManager__InfoBan (System_String_array* args, const MethodInfo* method);
// 0x592d020
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592d058: jmp 0x592d19b

void GameManagers_ChatManager__InfoBan(System_String_array *args,MethodInfo *method)

{
  uint32_t uVar1;
  int32_t actorNumber;
  bool bVar2;
  Photon_Realtime_Player_o *player;
  System_String_o *reason;
  System_Action_string__o *__this;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  Il2CppClass *klass;
  MethodInfo *in_R8;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (Il2CppMethodInitialized_0754579c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Legacy infoban requires Master Client; using room session ban instead.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_0754579c = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar2 = GameManagers_ChatManager__CanUseRoomModerationCommand((MethodInfo *)klass);
  }
  else {
    bVar2 = GameManagers_ChatManager__CanUseRoomModerationCommand((MethodInfo *)klass);
  }
  if (bVar2) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      player = GameManagers_ChatManager__GetPlayer_582a190(args,method);
      method_00 = extraout_RDX_01;
    }
    else {
      player = GameManagers_ChatManager__GetPlayer_582a190(args,method);
      method_00 = extraout_RDX;
    }
    if (player != (Photon_Realtime_Player_o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        method_00 = extraout_RDX_00;
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,2,method_00);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
      if (bVar2) {
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__KickPlayer(player,true,true,".",in_R8);
        return;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__AddLine
                ("Legacy infoban requires Master Client; using room session ban instead.",3,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false
                 ,in_stack_ffffffffffffffc8);
      actorNumber = (player->fields).actorNumber;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                ((System_Action_object__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus,(MethodInfo_4A81BE0 *)0x0
                );
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__RoomBan(actorNumber,false,__this,reason,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// GameManagers.ChatManager$$IPBan
// il2cpp: void GameManagers_ChatManager__IPBan (System_String_array* args, const MethodInfo* method);
// 0x592d240
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592d26c: jmp 0x592d384

void GameManagers_ChatManager__IPBan(System_String_array *args,MethodInfo *method)

{
  uint32_t uVar1;
  int32_t actorNumber;
  bool bVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_String_o *reason;
  System_Action_string__o *__this;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754579d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754579d = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar2 = GameManagers_ChatManager__CanUseRoomModerationCommand((MethodInfo *)klass);
  }
  else {
    bVar2 = GameManagers_ChatManager__CanUseRoomModerationCommand((MethodInfo *)klass);
  }
  if (bVar2) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      pPVar3 = GameManagers_ChatManager__GetPlayer_582a190(args,method);
      method_00 = extraout_RDX_01;
    }
    else {
      pPVar3 = GameManagers_ChatManager__GetPlayer_582a190(args,method);
      method_00 = extraout_RDX;
    }
    if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        method_00 = extraout_RDX_00;
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,2,method_00);
      actorNumber = (pPVar3->fields).actorNumber;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                ((System_Action_object__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus,(MethodInfo_4A81BE0 *)0x0
                );
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__RoomBan(actorNumber,true,__this,reason,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// GameManagers.ChatManager$$RegionBan
// il2cpp: void GameManagers_ChatManager__RegionBan (System_String_array* args, const MethodInfo* method);
// 0x592d390
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592d3bc: jmp 0x592d4d1

void GameManagers_ChatManager__RegionBan(System_String_array *args,MethodInfo *method)

{
  uint32_t uVar1;
  int32_t actorNumber;
  bool bVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_String_o *reason;
  System_Action_string__o *__this;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754579e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754579e = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar2 = GameManagers_ChatManager__CanUseRegionModerationCommand((MethodInfo *)klass);
  }
  else {
    bVar2 = GameManagers_ChatManager__CanUseRegionModerationCommand((MethodInfo *)klass);
  }
  if (bVar2) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      pPVar3 = GameManagers_ChatManager__GetPlayer_582a190(args,method);
      method_00 = extraout_RDX_01;
    }
    else {
      pPVar3 = GameManagers_ChatManager__GetPlayer_582a190(args,method);
      method_00 = extraout_RDX;
    }
    if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        method_00 = extraout_RDX_00;
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,2,method_00);
      actorNumber = (pPVar3->fields).actorNumber;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                ((System_Action_object__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus,(MethodInfo_4A81BE0 *)0x0
                );
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__RegionBan(actorNumber,false,__this,reason,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// GameManagers.ChatManager$$RegionIPBan
// il2cpp: void GameManagers_ChatManager__RegionIPBan (System_String_array* args, const MethodInfo* method);
// 0x592d5a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592d5cc: jmp 0x592d6e4

void GameManagers_ChatManager__RegionIPBan(System_String_array *args,MethodInfo *method)

{
  uint32_t uVar1;
  int32_t actorNumber;
  bool bVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_String_o *reason;
  System_Action_string__o *__this;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754579f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754579f = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar2 = GameManagers_ChatManager__CanUseRegionModerationCommand((MethodInfo *)klass);
  }
  else {
    bVar2 = GameManagers_ChatManager__CanUseRegionModerationCommand((MethodInfo *)klass);
  }
  if (bVar2) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      pPVar3 = GameManagers_ChatManager__GetPlayer_582a190(args,method);
      method_00 = extraout_RDX_01;
    }
    else {
      pPVar3 = GameManagers_ChatManager__GetPlayer_582a190(args,method);
      method_00 = extraout_RDX;
    }
    if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        method_00 = extraout_RDX_00;
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,2,method_00);
      actorNumber = (pPVar3->fields).actorNumber;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                ((System_Action_object__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus,(MethodInfo_4A81BE0 *)0x0
                );
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__RegionBan(actorNumber,true,__this,reason,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// GameManagers.ChatManager$$Unban
// il2cpp: void GameManagers_ChatManager__Unban (System_String_array* args, const MethodInfo* method);
// 0x592d6f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592d8fa: add rsp, 8
// asm:   0x592d8fe: jmp 0x592d96c

void GameManagers_ChatManager__Unban(System_String_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  System_String_o *a;
  System_String_o *reason;
  Anticheat_RoomBanEntry_o *__this;
  System_Action_string__o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Anticheat_RoomBanEntry_Fields *targetAddress;
  GameManagers_ChatManager_c *method_01;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_075457a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_RoomBanEntry);
    il2cpp_codegen_initialize_runtime_metadata(&"Usage: /unban [session|ip] [target] [optional reason]");
    il2cpp_codegen_initialize_runtime_metadata(&"sid");
    il2cpp_codegen_initialize_runtime_metadata(&"session");
    il2cpp_codegen_initialize_runtime_metadata(&"ip");
    Il2CppMethodInitialized_075457a0 = '\x01';
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) goto label_0592d8e8;
label_0592d723:
    bVar2 = GameManagers_ChatManager__CanUseRoomModerationCommand
                      ((MethodInfo *)TypeInfo_GameManagers_ChatManager);
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor != 0) goto label_0592d723;
label_0592d8e8:
    method_01 = TypeInfo_GameManagers_ChatManager;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    bVar2 = GameManagers_ChatManager__CanUseRoomModerationCommand((MethodInfo *)method_01);
  }
  if (bVar2) {
    if (args == (System_String_array *)0x0) goto label_0592d977;
    if (2 < (int)args->max_length) {
      if (args->m_Items[1] == (System_String_o *)0x0) {
label_0592d977:
        ThrowNullReferenceException();
      }
      a = System_String__ToLower(args->m_Items[1],(MethodInfo *)0x0);
      if ((uint)args->max_length < 3) {
        ThrowIndexOutOfRangeException();
      }
      pSVar1 = args->m_Items[2];
      method_00 = extraout_RDX;
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        method_00 = extraout_RDX_00;
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,3,method_00);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_RoomBanEntry);
      Anticheat_RoomBanEntry___ctor(__this,(MethodInfo *)0x0);
      if (__this == (Anticheat_RoomBanEntry_o *)0x0) goto label_0592d977;
      (__this->fields).CanUnban = true;
      bVar2 = System_String__op_Equality(a,"session",(MethodInfo *)0x0);
      if ((bVar2) || (bVar2 = System_String__op_Equality(a,"sid",(MethodInfo *)0x0), bVar2)) {
        (__this->fields).IsIPBan = false;
        targetAddress = &__this->fields;
label_0592d7f4:
        targetAddress->SessionId = pSVar1;
        Il2CppCodeGenWriteBarrier(&targetAddress->SessionId);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
        System_Action_object____ctor
                  ((System_Action_object__o *)__this_00,(Il2CppObject *)0x0,
                   (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus,
                   (MethodInfo_4A81BE0 *)0x0);
        if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        }
        Anticheat_ModeratorManager__RoomUnban(__this,__this_00,reason,(MethodInfo *)0x0);
        return;
      }
      bVar2 = System_String__op_Equality(a,"ip",(MethodInfo *)0x0);
      if (bVar2) {
        (__this->fields).IsIPBan = true;
        targetAddress = (Anticheat_RoomBanEntry_Fields *)&(__this->fields).IPAddress;
        goto label_0592d7f4;
      }
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__AddLine
              ("Usage: /unban [session|ip] [target] [optional reason]",4,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
               in_stack_ffffffffffffffb8);
  }
  return;
}


// GameManagers.ChatManager$$RegionUnban
// il2cpp: void GameManagers_ChatManager__RegionUnban (System_String_array* args, const MethodInfo* method);
// 0x592d990

void GameManagers_ChatManager__RegionUnban(System_String_array *args,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  bool bVar3;
  System_String_o *reason;
  Anticheat_RegionBanEntry_o *__this;
  System_Action_string__o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  Il2CppClass *klass;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (Il2CppMethodInitialized_075457a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_RegionBanEntry);
    il2cpp_codegen_initialize_runtime_metadata(&"Usage: /regionunban [targetId] [optional reason]");
    Il2CppMethodInitialized_075457a1 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar3 = GameManagers_ChatManager__CanUseRegionModerationCommand((MethodInfo *)klass);
    method_00 = extraout_RDX_00;
    if (bVar3) goto label_0592da33;
  }
  else {
    bVar3 = GameManagers_ChatManager__CanUseRegionModerationCommand((MethodInfo *)klass);
    method_00 = extraout_RDX;
    if (bVar3) {
label_0592da33:
      if (args != (System_String_array *)0x0) {
        if ((int)args->max_length < 2) {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__AddLine
                    ("Usage: /regionunban [targetId] [optional reason]",4,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,
                     false,in_stack_ffffffffffffffd8);
          return;
        }
        pSVar2 = args->m_Items[1];
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          method_00 = extraout_RDX_01;
        }
        reason = GameManagers_ChatManager__GetOptionalReason(args,2,method_00);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_RegionBanEntry);
        Anticheat_RegionBanEntry___ctor(__this,(MethodInfo *)0x0);
        if (__this != (Anticheat_RegionBanEntry_o *)0x0) {
          (__this->fields).TargetId = pSVar2;
          Il2CppCodeGenWriteBarrier(&(__this->fields).TargetId);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
          System_Action_object____ctor
                    ((System_Action_object__o *)__this_00,(Il2CppObject *)0x0,
                     (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus,
                     (MethodInfo_4A81BE0 *)0x0);
          if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
          }
          Anticheat_ModeratorManager__RegionUnban(__this,__this_00,reason,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// GameManagers.ChatManager$$PrintModerationStatus
// il2cpp: void GameManagers_ChatManager__PrintModerationStatus (System_String_o* text, const MethodInfo* method);
// 0x592db50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592dc69: jmp 0x592dc06

void GameManagers_ChatManager__PrintModerationStatus(System_String_o *text,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (Il2CppMethodInitialized_075457a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"timed out");
    il2cpp_codegen_initialize_runtime_metadata(&"rate limited");
    il2cpp_codegen_initialize_runtime_metadata(&"error");
    Il2CppMethodInitialized_075457a2 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (text == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar3 = System_String__IndexOf_53072b0(text,"timed out",5,(MethodInfo *)0x0);
  iVar4 = 4;
  if ((iVar3 < 0) &&
     (iVar3 = System_String__IndexOf_53072b0(text,"rate limited",5,(MethodInfo *)0x0), iVar3 < 0)) {
    iVar4 = System_String__IndexOf_53072b0(text,"error",5,(MethodInfo *)0x0);
    iVar4 = (iVar4 >> 0x1f) + 4;
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__AddLine
            (text,iVar4,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
             in_stack_ffffffffffffffd8);
  return;
}


// GameManagers.ChatManager$$IsAdminOrModerator
// il2cpp: bool GameManagers_ChatManager__IsAdminOrModerator (const MethodInfo* method);
// 0x592dc70

bool GameManagers_ChatManager__IsAdminOrModerator(MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_String_array *source;
  
  if (Il2CppMethodInitialized_075457a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_string);
    il2cpp_codegen_initialize_runtime_metadata(&"admin");
    il2cpp_codegen_initialize_runtime_metadata(&"moderator");
    Il2CppMethodInitialized_075457a3 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar2 = false;
  source = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
  if (source != (System_String_array *)0x0) {
    bVar1 = System_Linq_Enumerable__Contains_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                       (Il2CppObject *)"admin",
                       (MethodInfo_34E5FD0 *)MethodInfo_System_Linq_Enumerable_Contains_string);
    bVar2 = true;
    if (!bVar1) {
      bVar2 = System_Linq_Enumerable__Contains_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (Il2CppObject *)"moderator",
                         (MethodInfo_34E5FD0 *)MethodInfo_System_Linq_Enumerable_Contains_string);
      return bVar2;
    }
  }
  return bVar2;
}


// GameManagers.ChatManager$$CanUseRoomModerationCommand
// il2cpp: bool GameManagers_ChatManager__CanUseRoomModerationCommand (const MethodInfo* method);
// 0x592cea0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592cf19: jmp 0x592cf6d

bool GameManagers_ChatManager__CanUseRoomModerationCommand(MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  GameManagers_ChatManager_c *method_00;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (Il2CppMethodInitialized_075457a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Must be Master Client, Admin, or Moderator to use that command.");
    Il2CppMethodInitialized_075457a4 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  bVar2 = true;
  if (!bVar1) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      method_00 = TypeInfo_GameManagers_ChatManager;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      bVar1 = GameManagers_ChatManager__IsAdminOrModerator((MethodInfo *)method_00);
      if (bVar1) {
        return true;
      }
    }
    else {
      bVar1 = GameManagers_ChatManager__IsAdminOrModerator((MethodInfo *)TypeInfo_GameManagers_ChatManager);
      if (bVar1) {
        return true;
      }
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar2 = false;
    GameManagers_ChatManager__AddLine
              ("Must be Master Client, Admin, or Moderator to use that command.",4,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
               in_stack_ffffffffffffffd8);
  }
  return bVar2;
}


// GameManagers.ChatManager$$CanUseRegionModerationCommand
// il2cpp: bool GameManagers_ChatManager__CanUseRegionModerationCommand (const MethodInfo* method);
// 0x592d4e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592d50b: jmp 0x592d594

bool GameManagers_ChatManager__CanUseRegionModerationCommand(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Il2CppClass *klass;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (Il2CppMethodInitialized_075457a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Must be Admin or Moderator to use that command.");
    Il2CppMethodInitialized_075457a5 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar2 = GameManagers_ChatManager__IsAdminOrModerator((MethodInfo *)klass);
    if (bVar2) {
      return true;
    }
  }
  else {
    bVar2 = GameManagers_ChatManager__IsAdminOrModerator((MethodInfo *)klass);
    if (bVar2) {
      return true;
    }
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__AddLine
            ("Must be Admin or Moderator to use that command.",4,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
             in_stack_ffffffffffffffd8);
  return false;
}


// GameManagers.ChatManager$$ShouldIncludeHiddenCommandInHelp
// il2cpp: bool GameManagers_ChatManager__ShouldIncludeHiddenCommandInHelp (GameManagers_ChatManager_CommandAttribute_o* command, const MethodInfo* method);
// 0x592dd30

bool GameManagers_ChatManager__ShouldIncludeHiddenCommandInHelp
               (GameManagers_ChatManager_CommandAttribute_o *command,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  GameManagers_ChatManager_c *method_00;
  
  if (Il2CppMethodInitialized_075457a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"regionban");
    il2cpp_codegen_initialize_runtime_metadata(&"regionunban");
    il2cpp_codegen_initialize_runtime_metadata(&"regionipban");
    Il2CppMethodInitialized_075457a6 = '\x01';
  }
  if (command != (GameManagers_ChatManager_CommandAttribute_o *)0x0) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      method_00 = TypeInfo_GameManagers_ChatManager;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      bVar1 = GameManagers_ChatManager__IsAdminOrModerator((MethodInfo *)method_00);
    }
    else {
      bVar1 = GameManagers_ChatManager__IsAdminOrModerator((MethodInfo *)TypeInfo_GameManagers_ChatManager);
    }
    if (bVar1) {
      pSVar2 = (command->fields)._Name_k__BackingField;
      if (pSVar2 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar2 = System_String__ToLower(pSVar2,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar2,"regionban",(MethodInfo *)0x0);
      if (bVar1) {
        return true;
      }
      bVar1 = System_String__op_Equality(pSVar2,"regionipban",(MethodInfo *)0x0);
      if (bVar1) {
        return true;
      }
      bVar1 = System_String__op_Equality(pSVar2,"regionunban",(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// GameManagers.ChatManager$$GetOptionalReason
// il2cpp: System_String_o* GameManagers_ChatManager__GetOptionalReason (System_String_array* args, int32_t startIndex, const MethodInfo* method);
// 0x592cf80

System_String_o *
GameManagers_ChatManager__GetOptionalReason(System_String_array *args,int32_t startIndex,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_TSource__o *values;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075457a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Skip_string);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    Il2CppMethodInitialized_075457a7 = '\x01';
  }
  if ((args == (System_String_array *)0x0) || ((int)args->max_length <= startIndex)) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  values = System_Linq_Enumerable__Skip_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)args,startIndex,
                      (MethodInfo_34FD7B0 *)MethodInfo_System_Linq_Enumerable_Skip_string);
  pSVar1 = System_String__Join_5303350
                     (" ",(System_Collections_Generic_IEnumerable_string__o *)values,
                      (MethodInfo *)0x0);
  if (pSVar1 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_String__Trim(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// GameManagers.ChatManager$$CanVoteKick
// il2cpp: bool GameManagers_ChatManager__CanVoteKick (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x592cbc0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592ccc3: jmp 0x592ccdf
// asm:   0x592cd43: jmp 0x592ccdf

bool GameManagers_ChatManager__CanVoteKick(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameMiscSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  bool bVar5;
  Photon_Realtime_Player_o *pPVar6;
  System_String_o **ppSVar7;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  if (Il2CppMethodInitialized_075457a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Server does not allow vote kicking.");
    il2cpp_codegen_initialize_runtime_metadata(&"Cannot vote to kick yourself.");
    il2cpp_codegen_initialize_runtime_metadata(&"Cannot vote to kick the Master Client.");
    Il2CppMethodInitialized_075457a8 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar2 == (Settings_InGameSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Misc, pSVar3 == (Settings_InGameMiscSettings_o *)0x0)) ||
     (pSVar4 = (pSVar3->fields).AllowVoteKicking, pSVar4 == (Settings_BoolSetting_o *)0x0)) {
label_0592cd45:
    ThrowNullReferenceException();
  }
  if ((pSVar4->fields)._value == false) {
    ppSVar7 = &"Server does not allow vote kicking.";
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar6 == player) {
      ppSVar7 = &"Cannot vote to kick yourself.";
      uVar1 = (((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (player == (Photon_Realtime_Player_o *)0x0) goto label_0592cd45;
      bVar5 = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
      if (!bVar5) {
        return true;
      }
      ppSVar7 = &"Cannot vote to kick the Master Client.";
      uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    }
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__AddLine
            (*ppSVar7,4,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
             in_stack_ffffffffffffffe8);
  return false;
}


// GameManagers.ChatManager$$MaxPlayers
// il2cpp: void GameManagers_ChatManager__MaxPlayers (System_String_array* args, const MethodInfo* method);
// 0x592de20

void GameManagers_ChatManager__MaxPlayers(System_String_array *args,MethodInfo *method)

{
  bool bVar1;
  uint in_EAX;
  Photon_Realtime_Room_o *__this;
  System_String_o *pSVar2;
  int32_t color;
  GameManagers_ChatManager_c *method_00;
  MethodInfo *in_stack_ffffffffffffffd8;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_075457a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Max players must be >= 0.");
    il2cpp_codegen_initialize_runtime_metadata(&"Max players set to ");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_075457a9 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_GameManagers_ChatManager;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    bVar1 = GameManagers_ChatManager__CheckMC((MethodInfo *)method_00);
  }
  else {
    bVar1 = GameManagers_ChatManager__CheckMC((MethodInfo *)TypeInfo_GameManagers_ChatManager);
  }
  if (!bVar1) {
    return;
  }
  if (args == (System_String_array *)0x0) {
label_0592dfa2:
    ThrowNullReferenceException();
  }
  if ((((int)args->max_length < 2) ||
      (bVar1 = System_Int32__TryParse(args->m_Items[1],(int32_t *)((long)&uStack_18 + 4),(MethodInfo *)0x0),
      !bVar1)) || ((long)uStack_18 < 0)) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    color = 4;
    pSVar2 = "Max players must be >= 0.";
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    __this = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (__this == (Photon_Realtime_Room_o *)0x0) goto label_0592dfa2;
    Photon_Realtime_Room__set_MaxPlayers(__this,uStack_18._4_4_,(MethodInfo *)0x0);
    pSVar2 = System_Int32__ToString((int32_t *)((long)&uStack_18 + 4),(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_5301f10
                       ("Max players set to ",pSVar2,".",(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    color = 3;
  }
  GameManagers_ChatManager__AddLine
            (pSVar2,color,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
             in_stack_ffffffffffffffd8);
  return;
}


// GameManagers.ChatManager$$KickPlayer
// il2cpp: void GameManagers_ChatManager__KickPlayer (Photon_Realtime_Player_o* player, bool print, bool ban, System_String_o* reason, const MethodInfo* method);
// 0x592c7c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592c807: jmp 0x592c93a
// asm:   0x592c8ac: jmp 0x592c93a

void GameManagers_ChatManager__KickPlayer
               (Photon_Realtime_Player_o *player,bool print,bool ban,System_String_o *reason,
               MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075457aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&" has been kicked");
    il2cpp_codegen_initialize_runtime_metadata(&" has been banned");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075457aa = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (bVar2) {
    if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar3 != player) {
      if ((((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
      }
      Anticheat_AnticheatManager__KickPlayer(player,ban,"",(MethodInfo *)0x0);
      if (print) {
        uVar1 = (TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor;
        if (ban) {
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
          }
          pSVar4 = PhotonExtensions__GetStringProperty
                             (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                              "",(MethodInfo *)0x0);
          ppSVar5 = &" has been banned";
        }
        else {
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
          }
          pSVar4 = PhotonExtensions__GetStringProperty
                             (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                              "",(MethodInfo *)0x0);
          ppSVar5 = &" has been kicked";
        }
        pSVar4 = System_String__Concat_5301f10(pSVar4,*ppSVar5,reason,(MethodInfo *)0x0);
        method_00 = extraout_RDX;
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          method_00 = extraout_RDX_00;
        }
        GameManagers_ChatManager__SendChatAll(pSVar4,3,method_00);
        return;
      }
    }
  }
  return;
}


// GameManagers.ChatManager$$VoteKickPlayer
// il2cpp: void GameManagers_ChatManager__VoteKickPlayer (Photon_Realtime_Player_o* voter, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x592dfb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592e094: jmp 0x592e255

void GameManagers_ChatManager__VoteKickPlayer
               (Photon_Realtime_Player_o *voter,Photon_Realtime_Player_o *target,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Photon_Pun_PhotonView_o *__this;
  bool bVar4;
  System_String_o *pSVar5;
  System_Object_array *parameters;
  Il2CppObject *pIVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Anticheat_BallotBox_Result_Fields local_68;
  Anticheat_BallotBox_Result_Fields local_48;
  
  if (Il2CppMethodInitialized_075457ab == '\0') {
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
    Il2CppMethodInitialized_075457ab = '\x01';
  }
  if ((target != (Photon_Realtime_Player_o *)0x0) &&
     (bVar4 = Photon_Realtime_Player__get_IsMasterClient(target,(MethodInfo *)0x0), !bVar4)) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    }
    else {
      bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    }
    if (bVar4) {
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
          (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
         (pSVar3 = (pSVar2->fields).AllowVoteKicking, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
        if ((pSVar3->fields)._value == false) {
          return;
        }
        if ((((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
        }
        Anticheat_AnticheatManager__TryVoteKickPlayer
                  ((Anticheat_BallotBox_Result_o *)&local_48,voter,target,(MethodInfo *)0x0);
        local_68.target = local_48.target;
        local_68.cooldown.fields._ticks = local_48.cooldown.fields._ticks;
        local_68.type = local_48.type;
        local_68.progress.fields.Item1 = local_48.progress.fields.Item1;
        local_68.progress.fields.Item2 = local_48.progress.fields.Item2;
        local_68._12_4_ = local_48._12_4_;
        pSVar5 = Anticheat_BallotBox_Result__ToString
                           ((Anticheat_BallotBox_Result_o *)&local_68,(MethodInfo *)0x0);
        __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        if (parameters != (System_Object_array *)0x0) {
          if ((pSVar5 != (System_String_o *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar5,(((parameters->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) {
            pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = (Il2CppObject *)pSVar5;
          Il2CppCodeGenWriteBarrier(parameters->m_Items);
          if (__this != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC_56e5850
                      (__this,"AnnounceRPC",voter,parameters,(MethodInfo *)0x0);
            bVar4 = Anticheat_BallotBox_Result__get_IsSuccess
                              ((Anticheat_BallotBox_Result_o *)&local_68,(MethodInfo *)0x0);
            if (!bVar4) {
              return;
            }
            if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
            }
            pSVar5 = PhotonExtensions__GetStringProperty
                               (target,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                                "",(MethodInfo *)0x0);
            pSVar5 = System_String__Concat_52f0320(pSVar5," has been vote kicked.",(MethodInfo *)0x0);
            method_00 = extraout_RDX;
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              method_00 = extraout_RDX_00;
            }
            GameManagers_ChatManager__SendChatAll(pSVar5,3,method_00);
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
// 0x592e280

int32_t GameManagers_ChatManager__get_MaxLines(MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  Settings_UISettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  int32_t iVar6;
  int iVar7;
  float fVar8;
  
  if (Il2CppMethodInitialized_075457ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075457ac = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (((pSVar3 == (Settings_UISettings_o *)0x0) ||
      (pSVar4 = (pSVar3->fields).ChatHeight, pSVar4 == (Settings_IntSetting_o *)0x0)) ||
     (pSVar5 = (pSVar3->fields).ChatFontSize, pSVar5 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar7 = (pSVar4->fields)._value;
  iVar1 = (pSVar5->fields)._value;
  if (Il2CppMethodInitialized_0753e7f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7f9 = '\x01';
    uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar8 = ceilf(((float)iVar7 * 5.0) / (((float)iVar1 / 18.0) * 30.0));
  iVar7 = 0x46;
  if ((int)fVar8 < 0x46) {
    iVar7 = (int)fVar8;
  }
  iVar6 = 10;
  if (10 < iVar7) {
    iVar6 = iVar7;
  }
  return iVar6;
}


// GameManagers.ChatManager$$PreserveInputText
// il2cpp: void GameManagers_ChatManager__PreserveInputText (System_String_o* text, int32_t caretPosition, const MethodInfo* method);
// 0x592e390
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592e3a3: test rbx, rbx
// asm:   0x592e3a6: je 0x592e408

void GameManagers_ChatManager__PreserveInputText
               (System_String_o *text,int32_t caretPosition,MethodInfo *method)

{
  uint32_t uVar1;
  GameManagers_ChatManager_StaticFields *pGVar2;
  
  if (Il2CppMethodInitialized_075457ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_075457ad = '\x01';
  }
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    uVar1 = (((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pGVar2 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar2->_preservedInputText = text;
  Il2CppCodeGenWriteBarrier(&pGVar2->_preservedInputText);
  TypeInfo_GameManagers_ChatManager->static_fields->_preservedInputCaretPosition = caretPosition;
  return;
}


// GameManagers.ChatManager$$GetPreservedInputWithCaret
// il2cpp: System_ValueTuple_string__int__int__o GameManagers_ChatManager__GetPreservedInputWithCaret (const MethodInfo* method);
// 0x592e450

System_ValueTuple_string__int__int__o GameManagers_ChatManager__GetPreservedInputWithCaret(MethodInfo *method)

{
  int32_t item2;
  int32_t item3;
  GameManagers_ChatManager_StaticFields *pGVar1;
  System_String_o *item1;
  System_ValueTuple_string__int__int__Fields SVar2;
  System_ValueTuple_object__int__int__o local_38;
  
  if (Il2CppMethodInitialized_075457ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_string_int_int_ctor);
    Il2CppMethodInitialized_075457ae = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  item1 = pGVar1->_preservedInputText;
  item2 = pGVar1->_preservedInputCaretPosition;
  item3 = pGVar1->_preservedPMTargetActorNumber;
  pGVar1->_preservedInputText = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&pGVar1->_preservedInputText);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->_preservedInputCaretPosition = 0;
  pGVar1->_preservedPMTargetActorNumber = -1;
  pGVar1->PreserveInputOnRestart = false;
  local_38.fields.Item1 = (Il2CppObject *)0x0;
  local_38.fields.Item2 = 0;
  local_38.fields.Item3 = 0;
  System_ValueTuple_object__int__int____ctor
            (&local_38,(Il2CppObject *)item1,item2,item3,
             (MethodInfo_4552990 *)MethodInfo_System_ValueTuple_string_int_int_ctor);
  SVar2.Item2 = local_38.fields.Item2;
  SVar2.Item3 = local_38.fields.Item3;
  SVar2.Item1 = (System_String_o *)local_38.fields.Item1;
  return (System_ValueTuple_string__int__int__o)SVar2;
}


// GameManagers.ChatManager$$PreservePMTargetActorNumber
// il2cpp: void GameManagers_ChatManager__PreservePMTargetActorNumber (int32_t actorNumber, const MethodInfo* method);
// 0x592e540

void GameManagers_ChatManager__PreservePMTargetActorNumber(int32_t actorNumber,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075457af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_075457af = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  TypeInfo_GameManagers_ChatManager->static_fields->_preservedPMTargetActorNumber = actorNumber;
  return;
}


// GameManagers.ChatManager$$SaveConversation
// il2cpp: void GameManagers_ChatManager__SaveConversation (System_String_o* key, System_String_o* text, int32_t caretPos, const MethodInfo* method);
// 0x592e5a0

void GameManagers_ChatManager__SaveConversation
               (System_String_o *key,System_String_o *text,int32_t caretPos,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_object__int__o *pSVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_075457b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    Il2CppMethodInitialized_075457b0 = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  if (bVar4) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_GameManagers_ChatManager->static_fields->_conversationTexts;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar2,(Il2CppObject *)key,
                 (MethodInfo_4AAED10 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
      pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)
               TypeInfo_GameManagers_ChatManager->static_fields->_conversationCarets;
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        System_Collections_Generic_Dictionary_object__int___Remove
                  (pSVar3,(Il2CppObject *)key,
                   (MethodInfo_4A9EEF0 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Remove);
        return;
      }
    }
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_GameManagers_ChatManager->static_fields->_conversationTexts;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar2,(Il2CppObject *)key,(Il2CppObject *)text,
                 (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)
               TypeInfo_GameManagers_ChatManager->static_fields->_conversationCarets;
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        System_Collections_Generic_Dictionary_object__int___set_Item
                  (pSVar3,(Il2CppObject *)key,caretPos,
                   (MethodInfo_4A9D760 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item)
        ;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$GetConversation
// il2cpp: System_ValueTuple_string__int__o GameManagers_ChatManager__GetConversation (System_String_o* key, const MethodInfo* method);
// 0x592e700

System_ValueTuple_string__int__o
GameManagers_ChatManager__GetConversation(System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_String_o *pSVar1;
  bool bVar2;
  int32_t item2;
  System_String_o *item1;
  System_ValueTuple_string__int__o SVar3;
  int32_t local_44;
  System_String_o *local_40;
  System_ValueTuple_object__int__o local_38;
  
  if (Il2CppMethodInitialized_075457b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075457b1 = '\x01';
  }
  local_40 = (System_String_o *)0x0;
  local_44 = 0;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_GameManagers_ChatManager->static_fields->_conversationTexts;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)key,(Il2CppObject **)&local_40,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    pSVar1 = local_40;
    item1 = "";
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
                TypeInfo_GameManagers_ChatManager->static_fields->_conversationCarets;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      if (bVar2) {
        item1 = pSVar1;
      }
      bVar2 = System_Collections_Generic_Dictionary_object__int___TryGetValue
                        (__this_00,(Il2CppObject *)key,&local_44,
                         (MethodInfo_4A9F630 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
      item2 = 0;
      if (bVar2) {
        item2 = local_44;
      }
      local_38.fields.Item1 = (Il2CppObject *)0x0;
      local_38.fields.Item2 = 0;
      local_38.fields._12_4_ = 0;
      System_ValueTuple_object__int____ctor
                (&local_38,(Il2CppObject *)item1,item2,
                 (MethodInfo_4539E50 *)MethodInfo_System_ValueTuple_string_int_ctor);
      SVar3.fields.Item2 = local_38.fields.Item2;
      SVar3.fields.Item1 = (System_String_o *)local_38.fields.Item1;
      SVar3.fields._12_4_ = 0;
      return (System_ValueTuple_string__int__o)SVar3.fields;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$ClearConversation
// il2cpp: void GameManagers_ChatManager__ClearConversation (System_String_o* key, const MethodInfo* method);
// 0x592e850
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592e886: jmp 0x592e925

void GameManagers_ChatManager__ClearConversation(System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  
  if (Il2CppMethodInitialized_075457b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    Il2CppMethodInitialized_075457b2 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_GameManagers_ChatManager->static_fields->_conversationTexts;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->static_fields + 0x108);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Remove
              (__this,(Il2CppObject *)key,
               (MethodInfo_4AAED10 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
                TypeInfo_GameManagers_ChatManager->static_fields->_conversationCarets;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      System_Collections_Generic_Dictionary_object__int___Remove
                (__this_00,(Il2CppObject *)key,
                 (MethodInfo_4A9EEF0 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Remove);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$ResetNotifiedForPM
// il2cpp: void GameManagers_ChatManager__ResetNotifiedForPM (int32_t pmId, const MethodInfo* method);
// 0x592e930

void GameManagers_ChatManager__ResetNotifiedForPM(int32_t pmId,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_HashSet_int__o *__this;
  
  if (Il2CppMethodInitialized_075457b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    Il2CppMethodInitialized_075457b3 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    __this = TypeInfo_GameManagers_ChatManager->static_fields->NotifiedPMs;
  }
  else {
    __this = *(System_Collections_Generic_HashSet_int__o **)
              ((long)((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->static_fields + 0xb0);
  }
  if (__this == (System_Collections_Generic_HashSet_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_int___Remove
            (__this,pmId,(MethodInfo_4FA80C0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
  return;
}


// GameManagers.ChatManager$$RegisterCustomCommand
// il2cpp: bool GameManagers_ChatManager__RegisterCustomCommand (System_String_o* name, CustomLogic_UserMethod_o* callback, System_String_o* description, int32_t autofillType, const MethodInfo* method);
// 0x592e9d0

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
  Il2CppObject *pIStack_38;
  
  if (Il2CppMethodInitialized_075457b4 == '\0') {
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
    Il2CppMethodInitialized_075457b4 = '\x01';
  }
  pIStack_38 = (Il2CppObject *)0x0;
  bVar3 = System_String__IsNullOrWhiteSpace(name,(MethodInfo *)0x0);
  if (callback == (CustomLogic_UserMethod_o *)0x0) {
    return false;
  }
  if (bVar3) {
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
                        (pSVar2,(Il2CppObject *)pSVar4,&pIStack_38,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
                        );
      if (bVar3) {
        if (pIStack_38 == (Il2CppObject *)0x0) {
          return false;
        }
        bVar1 = (TypeInfo_GameManagers_ChatManager_CLCommandAttribute->_2).typeHierarchyDepth;
        if ((pIStack_38->klass->_2).typeHierarchyDepth < bVar1) {
          return false;
        }
        if ((pIStack_38->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
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
        description = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_CLCommandAttribute);
      GameManagers_ChatManager_CLCommandAttribute___ctor
                (__this_00,name_00,description,callback,autofillType,(MethodInfo *)0x0);
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar2,(Il2CppObject *)pSVar4,(Il2CppObject *)__this_00,
                   (MethodInfo_4AAD4C0 *)
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
                     (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          return true;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$ClearCustomCommands
// il2cpp: void GameManagers_ChatManager__ClearCustomCommands (const MethodInfo* method);
// 0x592ec00
// eh: try 0x592ecf4..0x592ed92 -> pad 0x592ed9d (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x592edb5..0x592edba -> pad 0x592eddd cleanup
// eh: try 0x592ede0..0x592edea -> pad 0x592edf2 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592ed97: jmp 0x592ed9d
// asm:   0x592ed99: jmp 0x592ed9d
// asm:   0x592ed9b: jmp 0x592ed9d
// asm:   0x592ed9d: mov rbx, rax
// asm:   0x592eda0: cmp edx, 1
// asm:   0x592eda3: jne 0x592ede0
// asm:   0x592eda5: mov rdi, rbx
// asm:   0x592eda8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x592edad: mov rbx, qword ptr [rax]
// asm:   0x592edb0: mov qword ptr [rsp + 0x20], rbx
// asm:   0x592edb5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x592edba: lea rax, [rip + 0x195fd1f]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose
// asm:   0x592edc1: mov rsi, qword ptr [rax]
// asm:   0x592edc4: mov rdi, rsp
// asm:   0x592edc7: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x592edcc: test rbx, rbx
// asm:   0x592edcf: je 0x592ed49
// asm:   0x592edd5: mov rdi, rbx
// asm:   0x592edd8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x592eddd: mov rbx, rax
// asm:   0x592ede0: lea rdi, [rsp + 0x20]
// asm:   0x592ede5: call 0x2fd2b70  ; il2cpp_runtime_helper_02fd2b70()
// asm:   0x592edea: mov rdi, rbx
// asm:   0x592eded: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x592edf2: mov rdi, rax
// asm:   0x592edf5: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_ChatManager__ClearCustomCommands(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *key;
  bool bVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_075457b5 == '\0') {
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
    Il2CppMethodInitialized_075457b5 = '\x01';
  }
  local_58.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)
           TypeInfo_GameManagers_ChatManager->static_fields->CustomCommandKeys;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              (&local_58,pSVar1,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
    local_38 = 0;
    local_30 = (undefined1 *)&local_58;
    while( true ) {
      bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (&local_58,
                         (MethodInfo_4C456D0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
      key = local_58.fields._current;
      if (!bVar2) break;
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___Remove
                (__this,key,
                 (MethodInfo_4AAED10 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_Remove);
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (&local_58,
               (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_GameManagers_ChatManager->static_fields->CustomCommandKeys;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Clear
                (pSVar1,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$ParseCommandArgs
// il2cpp: System_String_array* GameManagers_ChatManager__ParseCommandArgs (System_String_o* text, const MethodInfo* method);
// 0x592ee00
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592f0e1: jmp 0x592eeca
// asm:   0x592f0fe: nop 
// asm:   0x592f177: jmp 0x592f325
// asm:   0x592f24a: mov r13d, r14d
// asm:   0x592f285: jmp 0x592f325
// asm:   0x592f32a: mov rdi, qword ptr [rsp + 8]
// asm:   0x592f32f: mov rax, qword ptr [rdi]
// asm:   0x592f332: mov rsi, qword ptr [rax + 0x170]
// asm:   0x592f339: call qword ptr [rax + 0x168]  ; vtable slot 3
// asm:   0x592f33f: call 0x30d63a0  ; ThrowNullReferenceException()

System_String_array * GameManagers_ChatManager__ParseCommandArgs(System_String_o *text,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint32_t uVar3;
  uint uVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint16_t uVar9;
  Il2CppClass *pIVar10;
  System_Collections_Generic_List_string__o *__this;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar11;
  System_String_array *pSVar12;
  int index;
  int iVar13;
  uint16_t uVar14;
  bool bVar15;
  
  if (Il2CppMethodInitialized_075457b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_075457b6 = '\x01';
  }
  bVar6 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  pMVar5 = MethodInfo_System_Array_Empty_string;
  if (bVar6) {
    if ((MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
      pIVar10 = *(Il2CppClass **)((long)(pMVar5->field7_0x38).methodMetadataHandle + 0x10);
      bVar2 = (pIVar10->_2).bitflags1;
    }
    else {
      pIVar10 = *(Il2CppClass **)
                 ((long)(MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle + 0x10);
      bVar2 = (pIVar10->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
      uVar3 = (pIVar10->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar3 = (pIVar10->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar10);
      pIVar10 = (pMVar5->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar10->_2).bitflags1;
    }
    else {
      pIVar10 = (pMVar5->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar10->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    }
    return *(System_String_array **)pIVar10->static_fields;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (text == (System_String_o *)0x0) goto label_0592f325;
  if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
    if (0 < (text->fields)._stringLength) {
      iVar13 = 0;
      bVar6 = false;
      bVar15 = false;
      uVar14 = 0;
      do {
        uVar9 = System_String__get_Chars(text,iVar13,(MethodInfo *)0x0);
        if (bVar15) {
          if (uVar9 != uVar14) goto label_0592f325;
          bVar7 = false;
          uVar9 = uVar14;
          bVar8 = bVar6;
        }
        else {
          bVar8 = true;
          if (uVar9 == 0x22) {
            bVar7 = true;
          }
          else {
            bVar7 = true;
            if (uVar9 != 0x27) {
              if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_07556750);
              }
              bVar7 = System_Char__IsWhiteSpace(uVar9,(MethodInfo *)0x0);
              if ((!bVar7) || (bVar7 = bVar15, uVar9 = uVar14, bVar8 = bVar6, bVar6)) goto label_0592f325;
            }
          }
        }
        bVar6 = bVar8;
        bVar15 = bVar7;
        iVar13 = iVar13 + 1;
        uVar14 = uVar9;
      } while (iVar13 < (text->fields)._stringLength);
      goto label_0592f271;
    }
  }
  else {
    iVar13 = (text->fields)._stringLength;
    if (__this == (System_Collections_Generic_List_string__o *)0x0) {
      if (iVar13 < 1) goto label_0592f325;
      iVar13 = 0;
      bVar7 = false;
      bVar15 = false;
      uVar14 = 0;
      do {
        uVar9 = System_String__get_Chars(text,iVar13,(MethodInfo *)0x0);
        bVar6 = bVar15;
        if (bVar7) {
          if (uVar9 == uVar14) {
            bVar8 = false;
            uVar9 = uVar14;
          }
          else {
label_0592f24d:
            System_Text_StringBuilder__Append_530f6a0(__this_00,uVar9,(MethodInfo *)0x0);
            bVar8 = bVar7;
            uVar9 = uVar14;
          }
        }
        else {
          bVar6 = true;
          if (uVar9 == 0x22) {
            bVar8 = true;
          }
          else {
            bVar8 = true;
            if (uVar9 != 0x27) {
              if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_07556750);
              }
              bVar8 = System_Char__IsWhiteSpace(uVar9,(MethodInfo *)0x0);
              bVar6 = true;
              if (!bVar8) goto label_0592f24d;
              bVar8 = bVar7;
              bVar6 = bVar15;
              uVar9 = uVar14;
              if (bVar15) {
                (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                          (__this_00,(__this_00->klass->vtable)._3_ToString.method);
                ThrowNullReferenceException();
              }
            }
          }
        }
        bVar7 = bVar8;
        iVar13 = iVar13 + 1;
        bVar15 = bVar6;
        uVar14 = uVar9;
      } while (iVar13 < (text->fields)._stringLength);
    }
    else {
      index = 0;
      if (iVar13 < 1) {
        bVar6 = false;
      }
      else {
        bVar6 = false;
        uVar14 = 0;
        bVar15 = false;
        do {
          uVar9 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
          if (bVar15) {
            if (uVar9 == uVar14) {
              bVar15 = false;
            }
            else {
              System_Text_StringBuilder__Append_530f6a0(__this_00,uVar9,(MethodInfo *)0x0);
            }
          }
          else if ((uVar9 == 0x22) || (uVar9 == 0x27)) {
            bVar6 = true;
            bVar15 = true;
            uVar14 = uVar9;
          }
          else {
            if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_07556750);
            }
            bVar7 = System_Char__IsWhiteSpace(uVar9,(MethodInfo *)0x0);
            if (bVar7) {
              if (bVar6) {
                pSVar11 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                                    (__this_00,(__this_00->klass->vtable)._3_ToString.method);
                pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
                piVar1 = &(__this->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar12 = (__this->fields)._items;
                if (pSVar12 == (System_String_array *)0x0) goto label_0592f325;
                uVar4 = (__this->fields)._size;
                if (uVar4 < (uint)pSVar12->max_length) {
                  (__this->fields)._size = uVar4 + 1;
                  pSVar12->m_Items[(int)uVar4] = pSVar11;
                  Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar4);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar11,
                             (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                }
                bVar6 = false;
                System_Text_StringBuilder__Clear(__this_00,(MethodInfo *)0x0);
              }
            }
            else {
              System_Text_StringBuilder__Append_530f6a0(__this_00,uVar9,(MethodInfo *)0x0);
              bVar6 = true;
            }
          }
          index = index + 1;
        } while (index < (text->fields)._stringLength);
      }
    }
label_0592f271:
    if (bVar6) {
      if ((__this_00 != (System_Text_StringBuilder_o *)0x0) &&
         (pSVar11 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                              (__this_00,(__this_00->klass->vtable)._3_ToString.method),
         pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add,
         __this != (System_Collections_Generic_List_string__o *)0x0)) {
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar12 = (__this->fields)._items;
        if (pSVar12 == (System_String_array *)0x0) goto label_0592f325;
        uVar4 = (__this->fields)._size;
        if (uVar4 < (uint)pSVar12->max_length) {
          (__this->fields)._size = uVar4 + 1;
          pSVar12->m_Items[(int)uVar4] = pSVar11;
          Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar11,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        goto label_0592f305;
      }
      goto label_0592f325;
    }
  }
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
label_0592f305:
    pSVar12 = (System_String_array *)
              System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_object__o *)__this,
                         (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    return pSVar12;
  }
label_0592f325:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$GetAutofillTokenStart
// il2cpp: int32_t GameManagers_ChatManager__GetAutofillTokenStart (System_String_o* input, int32_t firstSpaceIndex, int32_t autofillType, const MethodInfo* method);
// 0x592f350

int32_t GameManagers_ChatManager__GetAutofillTokenStart
                  (System_String_o *input,int32_t firstSpaceIndex,int32_t autofillType,MethodInfo *method)

{
  int32_t iVar1;
  
  if (autofillType == 2) {
    if (input == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar1 = System_String__LastIndexOf(input,0x20,(MethodInfo *)0x0);
    if (firstSpaceIndex < iVar1) {
      return iVar1;
    }
  }
  return firstSpaceIndex;
}


// GameManagers.ChatManager$$Init
// il2cpp: void GameManagers_ChatManager__Init (const MethodInfo* method);
// 0x592f380

void GameManagers_ChatManager__Init(MethodInfo *method)

{
  byte bVar1;
  GameManagers_ChatManager_StaticFields *pGVar2;
  System_Reflection_MethodInfo_o *pSVar3;
  GameManagers_ChatManager_CommandAttribute_o *commandAttribute;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  Il2CppType *handle;
  uint uVar5;
  GameManagers_ChatManager_o *pGVar6;
  System_Type_o *pSVar7;
  long lVar8;
  System_Object_array *pSVar9;
  il2cpp_array_size_t iVar10;
  System_String_o *pSVar11;
  GameManagers_ChatManager_CommandAttribute_o *__this;
  uint uVar12;
  ulong uVar13;
  
  if (Il2CppMethodInitialized_075457b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_GameManagers_ChatManager_CommandAttribute);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_CommandAttribute);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_ChatManager);
    Il2CppMethodInitialized_075457b7 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pGVar6 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_GameManagers_ChatManager->static_fields->_instance,
                      (MethodInfo_3680650 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_ChatManager);
  pGVar2 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar2->_instance = pGVar6;
  Il2CppCodeGenWriteBarrier(&pGVar2->_instance);
  handle = TypeRef_GameManagers_ChatManager;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar7 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar7 != (System_Type_o *)0x0) {
    lVar8 = (*(pSVar7->klass->vtable)._105_unknown.methodPtr)
                      (pSVar7,0x3c,(pSVar7->klass->vtable)._105_unknown.method);
    pSVar7 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_GameManagers_ChatManager_CommandAttribute,
                        (MethodInfo *)0x0);
    if (lVar8 != 0) {
      uVar5 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar5) {
        uVar12 = 0;
        do {
          if (uVar5 <= uVar12) {
label_0592f6a6:
            ThrowIndexOutOfRangeException();
          }
          pSVar3 = *(System_Reflection_MethodInfo_o **)(lVar8 + 0x20 + (long)(int)uVar12 * 8);
          if (pSVar3 == (System_Reflection_MethodInfo_o *)0x0) goto label_0592f692;
          pSVar9 = (*(pSVar3->klass->vtable)._14_GetCustomAttributes.methodPtr)
                             (pSVar3,pSVar7,false,(pSVar3->klass->vtable)._14_GetCustomAttributes.method);
          if (((pSVar9 != (System_Object_array *)0x0) && (iVar10 = pSVar9->max_length, iVar10 != 0)) &&
             (0 < (int)iVar10)) {
            uVar13 = 0;
            do {
              if ((iVar10 & 0xffffffff) <= uVar13) goto label_0592f6a6;
              commandAttribute = (GameManagers_ChatManager_CommandAttribute_o *)pSVar9->m_Items[uVar13];
              if (commandAttribute != (GameManagers_ChatManager_CommandAttribute_o *)0x0) {
                bVar1 = (TypeInfo_GameManagers_ChatManager_CommandAttribute->_2).typeHierarchyDepth;
                if ((bVar1 <= (commandAttribute->klass->_2).typeHierarchyDepth) &&
                   ((commandAttribute->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                    (Il2CppClass *)TypeInfo_GameManagers_ChatManager_CommandAttribute)) {
                  (commandAttribute->fields)._Command_k__BackingField = pSVar3;
                  Il2CppCodeGenWriteBarrier(&(commandAttribute->fields)._Command_k__BackingField);
                  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                  }
                  pSVar11 = (commandAttribute->fields)._Name_k__BackingField;
                  if (pSVar11 == (System_String_o *)0x0) goto label_0592f692;
                  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                           TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
                  pSVar11 = System_String__ToLower(pSVar11,(MethodInfo *)0x0);
                  if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                  goto label_0592f692;
                  System_Collections_Generic_Dictionary_object__object___Add
                            (pSVar4,(Il2CppObject *)pSVar11,(Il2CppObject *)commandAttribute,
                             (MethodInfo_4AAD4E0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_Add
                            );
                  if ((commandAttribute->fields)._Alias_k__BackingField != (System_String_o *)0x0) {
                    __this = il2cpp_codegen_object_new
                                       ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_CommandAttribute);
                    GameManagers_ChatManager_CommandAttribute___ctor
                              (__this,commandAttribute,(MethodInfo *)0x0);
                    if (__this == (GameManagers_ChatManager_CommandAttribute_o *)0x0) goto label_0592f692;
                    (__this->fields)._IsAlias_k__BackingField = true;
                    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                    }
                    pSVar11 = (__this->fields)._Alias_k__BackingField;
                    if (pSVar11 == (System_String_o *)0x0) goto label_0592f692;
                    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                             TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
                    pSVar11 = System_String__ToLower(pSVar11,(MethodInfo *)0x0);
                    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto label_0592f692;
                    System_Collections_Generic_Dictionary_object__object___Add
                              (pSVar4,(Il2CppObject *)pSVar11,(Il2CppObject *)__this,
                               (MethodInfo_4AAD4E0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_Add
                              );
                  }
                }
              }
              uVar13 = uVar13 + 1;
              uVar5 = (uint)pSVar9->max_length;
              iVar10 = (il2cpp_array_size_t)uVar5;
            } while ((long)uVar13 < (long)(int)uVar5);
          }
          uVar12 = uVar12 + 1;
          uVar5 = *(uint *)(lVar8 + 0x18);
        } while ((int)uVar12 < (int)uVar5);
      }
      return;
    }
  }
label_0592f692:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$Reset
// il2cpp: void GameManagers_ChatManager__Reset (const MethodInfo* method);
// 0x592f6b0

void GameManagers_ChatManager__Reset(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_075457b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_075457b8 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    GameManagers_ChatManager__Clear_5829730((MethodInfo *)klass);
    GameManagers_ChatManager__LoadTheme((MethodInfo *)klass);
    return;
  }
  GameManagers_ChatManager__Clear_5829730((MethodInfo *)klass);
  GameManagers_ChatManager__LoadTheme((MethodInfo *)klass);
  return;
}


// GameManagers.ChatManager$$Clear
// il2cpp: void GameManagers_ChatManager__Clear (const MethodInfo* method);
// 0x5929730
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5929769: jmp 0x5929b03

void GameManagers_ChatManager__Clear_5829730(MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Collections_Generic_List_ChatTextColor__o *pSVar4;
  System_Collections_Generic_List_bool__o *pSVar5;
  System_Collections_Generic_List_DateTime__o *pSVar6;
  System_Collections_Generic_List_int__o *pSVar7;
  System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *pSVar8;
  System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *pSVar9;
  System_Collections_Generic_List_long__o *pSVar10;
  System_Collections_Generic_HashSet_int__o *pSVar11;
  bool bVar12;
  UI_ChatPanel_o *__this;
  UI_FeedPanel_o *__this_00;
  GameManagers_ChatManager_StaticFields *pGVar13;
  System_String_array *method_00;
  GameManagers_ChatManager_c *pGVar14;
  
  if (Il2CppMethodInitialized_075457b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_long_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_DateTime_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatTextColor_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075457b9 = '\x01';
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) goto label_05929810;
label_05929755:
    pGVar13 = TypeInfo_GameManagers_ChatManager->static_fields;
    pSVar3 = pGVar13->RawMessages;
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor != 0) goto label_05929755;
label_05929810:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    pGVar13 = TypeInfo_GameManagers_ChatManager->static_fields;
    pSVar3 = pGVar13->RawMessages;
  }
  if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar2 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
      pGVar13 = TypeInfo_GameManagers_ChatManager->static_fields;
    }
    pSVar4 = pGVar13->Colors;
    if (pSVar4 != (System_Collections_Generic_List_ChatTextColor__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar4->fields)._size = 0;
      pSVar5 = pGVar13->SystemFlags;
      if (pSVar5 != (System_Collections_Generic_List_bool__o *)0x0) {
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        (pSVar5->fields)._size = 0;
        pSVar6 = pGVar13->Timestamps;
        if (pSVar6 != (System_Collections_Generic_List_DateTime__o *)0x0) {
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          (pSVar6->fields)._size = 0;
          pSVar7 = pGVar13->SenderIDs;
          if (pSVar7 != (System_Collections_Generic_List_int__o *)0x0) {
            piVar1 = &(pSVar7->fields)._version;
            *piVar1 = *piVar1 + 1;
            (pSVar7->fields)._size = 0;
            pSVar5 = pGVar13->SuggestionFlags;
            if (pSVar5 != (System_Collections_Generic_List_bool__o *)0x0) {
              piVar1 = &(pSVar5->fields)._version;
              *piVar1 = *piVar1 + 1;
              (pSVar5->fields)._size = 0;
              pSVar5 = pGVar13->NotificationFlags;
              if (pSVar5 != (System_Collections_Generic_List_bool__o *)0x0) {
                piVar1 = &(pSVar5->fields)._version;
                *piVar1 = *piVar1 + 1;
                (pSVar5->fields)._size = 0;
                pSVar5 = pGVar13->PrivateFlags;
                if (pSVar5 != (System_Collections_Generic_List_bool__o *)0x0) {
                  piVar1 = &(pSVar5->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  (pSVar5->fields)._size = 0;
                  pSVar7 = pGVar13->PMPartnerIDs;
                  if (pSVar7 != (System_Collections_Generic_List_int__o *)0x0) {
                    piVar1 = &(pSVar7->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    (pSVar7->fields)._size = 0;
                    pSVar8 = pGVar13->PlayerLineData;
                    if (pSVar8 != (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0) {
                      piVar1 = &(pSVar8->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      iVar2 = (pSVar8->fields)._size;
                      (pSVar8->fields)._size = 0;
                      if (0 < iVar2) {
                        System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar2,
                                            (MethodInfo *)0x0);
                        pGVar13 = TypeInfo_GameManagers_ChatManager->static_fields;
                      }
                      pSVar9 = pGVar13->DisplayLineCache;
                      if (pSVar9 != (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0) {
                        piVar1 = &(pSVar9->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        iVar2 = (pSVar9->fields)._size;
                        (pSVar9->fields)._size = 0;
                        if (0 < iVar2) {
                          System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar2,
                                              (MethodInfo *)0x0);
                          pGVar13 = TypeInfo_GameManagers_ChatManager->static_fields;
                        }
                        pSVar10 = pGVar13->LineIDs;
                        if (pSVar10 != (System_Collections_Generic_List_long__o *)0x0) {
                          piVar1 = &(pSVar10->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          (pSVar10->fields)._size = 0;
                          pGVar13->LastException = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
                          method_00 = (System_String_array *)&pGVar13->LastException;
                          Il2CppCodeGenWriteBarrier((void **)method_00);
                          pGVar13 = TypeInfo_GameManagers_ChatManager->static_fields;
                          pGVar13->LastExceptionCount = 0;
                          pSVar3 = pGVar13->FeedLines;
                          if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
                            piVar1 = &(pSVar3->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            iVar2 = (pSVar3->fields)._size;
                            (pSVar3->fields)._size = 0;
                            if (0 < iVar2) {
                              method_00 = (pSVar3->fields)._items;
                              System_Array__Clear((System_Array_o *)method_00,0,iVar2,(MethodInfo *)0x0);
                            }
                            bVar12 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)method_00);
                            if (bVar12) {
                              pGVar14 = TypeInfo_GameManagers_ChatManager;
                              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                              }
                              __this = GameManagers_ChatManager__GetChatPanel((MethodInfo *)pGVar14);
                              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                              }
                              bVar12 = UnityEngine_Object__op_Inequality
                                                 ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,
                                                  (MethodInfo *)0x0);
                              if (bVar12) {
                                if (__this == (UI_ChatPanel_o *)0x0) goto label_05929b03;
                                UI_ChatPanel__Sync(__this,(MethodInfo *)0x0);
                              }
                              pGVar14 = TypeInfo_GameManagers_ChatManager;
                              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                              }
                              __this_00 = GameManagers_ChatManager__GetFeedPanel((MethodInfo *)pGVar14);
                              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                              }
                              bVar12 = UnityEngine_Object__op_Inequality
                                                 ((UnityEngine_Object_o *)__this_00,
                                                  (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                              if (bVar12) {
                                if (__this_00 == (UI_FeedPanel_o *)0x0) goto label_05929b03;
                                UI_FeedPanel__Sync(__this_00,(MethodInfo *)0x0);
                              }
                            }
                            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                            }
                            pSVar11 = TypeInfo_GameManagers_ChatManager->static_fields->ActivePMNotifications;
                            if (pSVar11 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                              System_Collections_Generic_HashSet_int___Clear
                                        (pSVar11,(MethodInfo_4FA7DB0 *)
                                                 MethodInfo_System_Collections_Generic_HashSet_int_Clear);
                              pSVar11 = TypeInfo_GameManagers_ChatManager->static_fields->NotifiedPMs;
                              if (pSVar11 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                                System_Collections_Generic_HashSet_int___Clear
                                          (pSVar11,(MethodInfo_4FA7DB0 *)
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
    }
  }
label_05929b03:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$IsChatActive
// il2cpp: bool GameManagers_ChatManager__IsChatActive (const MethodInfo* method);
// 0x592fd30

bool GameManagers_ChatManager__IsChatActive(MethodInfo *method)

{
  bool bVar1;
  UI_ChatPanel_o *__this;
  bool bVar2;
  GameManagers_ChatManager_c *method_00;
  
  if (Il2CppMethodInitialized_075457ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075457ba = '\x01';
  }
  method_00 = TypeInfo_GameManagers_ChatManager;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this = GameManagers_ChatManager__GetChatPanel((MethodInfo *)method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = false;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this == (UI_ChatPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = UI_ChatPanel__IsInputActive(__this,(MethodInfo *)0x0);
    bVar2 = true;
    if (!bVar1) {
      bVar1 = UI_ChatPanel__IsInteractingWithChatUI(__this,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return bVar2;
}


// GameManagers.ChatManager$$IsChatAvailable
// il2cpp: bool GameManagers_ChatManager__IsChatAvailable (const MethodInfo* method);
// 0x592fab0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592fb7c: jmp 0x592fbb2

bool GameManagers_ChatManager__IsChatAvailable(MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075457bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_075457bb = '\x01';
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
    if (!bVar3) {
      return false;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    }
    else {
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    }
    if (pUVar2 != (UI_BaseMenu_o *)0x0) {
      bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
      if (bVar1 <= (pUVar2->klass->_2).typeHierarchyDepth) {
        return (pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu;
      }
    }
  }
  return false;
}


// GameManagers.ChatManager$$SendChatAll
// il2cpp: void GameManagers_ChatManager__SendChatAll (System_String_o* message, int32_t color, const MethodInfo* method);
// 0x5929d50

void GameManagers_ChatManager__SendChatAll(System_String_o *message,int32_t color,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_String_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  MethodInfo *in_RCX;
  int64_t local_28;
  System_DateTime_o local_20;
  
  if (Il2CppMethodInitialized_075457bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ChatRPC");
    Il2CppMethodInitialized_075457bc = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  obj = GameManagers_ChatManager__GetColorString(message,color,false,in_RCX);
  __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameters == (System_Object_array *)0x0) {
label_05929ee7:
    ThrowNullReferenceException();
  }
  if (obj != (System_String_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) goto label_05929eec;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)obj;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    local_20 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
    local_28 = System_DateTime__get_Ticks(&local_20,(MethodInfo *)0x0);
    pIVar1 = il2cpp_vm_Object_Box(g_data_07556730,&local_28);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
label_05929eec:
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((parameters->max_length & 0xfffffffe) != 0) {
      parameters->m_Items[1] = pIVar1;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
      if (__this != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this,"ChatRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
      goto label_05929ee7;
    }
  }
  ThrowIndexOutOfRangeException();
}


// GameManagers.ChatManager$$SendPlayerChatAll
// il2cpp: void GameManagers_ChatManager__SendPlayerChatAll (System_String_o* message, const MethodInfo* method);
// 0x592fde0

void GameManagers_ChatManager__SendPlayerChatAll(System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  int64_t iStack_30;
  System_DateTime_o SStack_28;
  
  if (Il2CppMethodInitialized_075457bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerChatRPC");
    Il2CppMethodInitialized_075457bd = '\x01';
  }
  __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameters == (System_Object_array *)0x0) {
label_0592ff54:
    ThrowNullReferenceException();
  }
  if (message != (System_String_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)message,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) goto label_0592ff59;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)message;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    SStack_28 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
    iStack_30 = System_DateTime__get_Ticks(&SStack_28,(MethodInfo *)0x0);
    pIVar1 = il2cpp_vm_Object_Box(g_data_07556730,&iStack_30);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
label_0592ff59:
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((parameters->max_length & 0xfffffffe) != 0) {
      parameters->m_Items[1] = pIVar1;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
      if (__this != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this,"PlayerChatRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
      goto label_0592ff54;
    }
  }
  ThrowIndexOutOfRangeException();
}


// GameManagers.ChatManager$$SendChat
// il2cpp: void GameManagers_ChatManager__SendChat (System_String_o* message, Photon_Realtime_Player_o* player, int32_t color, const MethodInfo* method);
// 0x592a2b0

void GameManagers_ChatManager__SendChat
               (System_String_o *message,Photon_Realtime_Player_o *player,int32_t color,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_String_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  int64_t local_30;
  System_DateTime_o local_28;
  
  if (Il2CppMethodInitialized_075457be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ChatRPC");
    Il2CppMethodInitialized_075457be = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  obj = GameManagers_ChatManager__GetColorString(message,color,false,method);
  __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameters == (System_Object_array *)0x0) {
label_0592a452:
    ThrowNullReferenceException();
  }
  if (obj != (System_String_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) goto label_0592a457;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)obj;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    local_28 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
    local_30 = System_DateTime__get_Ticks(&local_28,(MethodInfo *)0x0);
    pIVar1 = il2cpp_vm_Object_Box(g_data_07556730,&local_30);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
label_0592a457:
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((parameters->max_length & 0xfffffffe) != 0) {
      parameters->m_Items[1] = pIVar1;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
      if (__this != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC_56e5850(__this,"ChatRPC",player,parameters,(MethodInfo *)0x0);
        return;
      }
      goto label_0592a452;
    }
  }
  ThrowIndexOutOfRangeException();
}


// GameManagers.ChatManager$$OnChatRPC
// il2cpp: void GameManagers_ChatManager__OnChatRPC (System_String_o* message, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x592ff70

void GameManagers_ChatManager__OnChatRPC
               (System_String_o *message,int64_t senderTimestamp,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *__this;
  bool bVar1;
  Il2CppObject *arg0;
  Il2CppObject *arg0_00;
  System_String_o *pSVar2;
  System_String_o **method_00;
  System_Nullable_DateTime__o timestamp;
  MethodInfo *in_stack_ffffffffffffffa8;
  int32_t local_48;
  int32_t local_44;
  System_DateTime_o local_40;
  System_Nullable_DateTime__o local_38;
  
  if (Il2CppMethodInitialized_075457bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_DateTime_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"<link=\"{0}\">{1}</link>");
    il2cpp_codegen_initialize_runtime_metadata(&"[{0}]");
    Il2CppMethodInitialized_075457bf = '\x01';
  }
  local_40.fields._dateData = (System_DateTime_Fields)0;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  if ((info.fields.Sender == (Photon_Realtime_Player_o *)0x0) ||
     (__this = TypeInfo_GameManagers_InGameManager->static_fields->MuteText,
     __this == (System_Collections_Generic_HashSet_int__o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_int___Contains
                    (__this,((info.fields.Sender)->fields).actorNumber,
                     (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
  if (!bVar1) {
    local_44 = ((info.fields.Sender)->fields).actorNumber;
    arg0 = il2cpp_vm_Object_Box(g_data_07556710,&local_44);
    local_48 = ((info.fields.Sender)->fields).actorNumber;
    arg0_00 = il2cpp_vm_Object_Box(g_data_07556710,&local_48);
    method_00 = &"[{0}]";
    pSVar2 = System_String__Format("[{0}]",arg0_00,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar2 = GameManagers_ChatManager__GetColorString(pSVar2,1,false,(MethodInfo *)method_00);
    pSVar2 = System_String__Format_5302c50
                       ("<link=\"{0}\">{1}</link>",arg0,(Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_5301f10(pSVar2," ",message,(MethodInfo *)0x0);
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    System_DateTime___ctor_5493c90(&local_40,senderTimestamp,1,(MethodInfo *)0x0);
    local_38.fields._0_8_ = 0;
    local_38.fields.value.fields._dateData = (System_DateTime_Fields)0;
    System_Nullable_DateTime____ctor
              (&local_38,local_40,(MethodInfo_3CD1CF0 *)MethodInfo_System_Nullable_DateTime_ctor);
    timestamp.fields._0_8_ = local_38.fields._0_8_ & 0xffffffff;
    timestamp.fields.value.fields._dateData = local_38.fields.value.fields._dateData;
    GameManagers_ChatManager__AddLine
              (pSVar2,0,false,timestamp,((info.fields.Sender)->fields).actorNumber,false,false,-1,false,
               in_stack_ffffffffffffffa8);
  }
  return;
}


// GameManagers.ChatManager$$OnPlayerChatRPC
// il2cpp: void GameManagers_ChatManager__OnPlayerChatRPC (System_String_o* message, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5930190

void GameManagers_ChatManager__OnPlayerChatRPC
               (System_String_o *message,int64_t senderTimestamp,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *__this;
  System_DateTime_o timestamp;
  bool bVar1;
  MethodInfo *in_stack_ffffffffffffffc8;
  System_DateTime_o SStack_28;
  
  if (Il2CppMethodInitialized_075457c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_075457c0 = '\x01';
  }
  SStack_28.fields._dateData = (System_DateTime_Fields)0;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  if ((info.fields.Sender == (Photon_Realtime_Player_o *)0x0) ||
     (__this = TypeInfo_GameManagers_InGameManager->static_fields->MuteText,
     __this == (System_Collections_Generic_HashSet_int__o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_int___Contains
                    (__this,((info.fields.Sender)->fields).actorNumber,
                     (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
  if (!bVar1) {
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    System_DateTime___ctor_5493c90(&SStack_28,senderTimestamp,1,(MethodInfo *)0x0);
    timestamp.fields._dateData = SStack_28.fields._dateData;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__AddPlayerLine
              (info.fields.Sender,message,0,timestamp,false,-1,in_stack_ffffffffffffffc8);
  }
  return;
}


// GameManagers.ChatManager$$OnAnnounceRPC
// il2cpp: void GameManagers_ChatManager__OnAnnounceRPC (System_String_o* message, const MethodInfo* method);
// 0x5930670

void GameManagers_ChatManager__OnAnnounceRPC(System_String_o *message,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe8;
  
  if (Il2CppMethodInitialized_075457c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_075457c1 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__AddLine
            (message,3,true,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
             in_stack_ffffffffffffffe8);
  return;
}


// GameManagers.ChatManager$$AddLine
// il2cpp: void GameManagers_ChatManager__AddLine (System_String_o* message, int32_t color, bool isSystem, System_Nullable_DateTime__o timestamp, int32_t senderID, bool isSuggestion, bool isPM, int32_t pmPartnerID, bool isNotification, const MethodInfo* method);
// 0x5929040

void GameManagers_ChatManager__AddLine
               (System_String_o *message,int32_t color,bool isSystem,System_Nullable_DateTime__o timestamp,
               int32_t senderID,bool isSuggestion,bool isPM,int32_t pmPartnerID,bool isNotification,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_DateTime_o messageTime;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffa8;
  
  messageTime = timestamp.fields.value.fields._dateData;
  method_00 = timestamp.fields._0_8_;
  if (Il2CppMethodInitialized_075457c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_DateTime_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_DateTime_get_HasValue);
    Il2CppMethodInitialized_075457c2 = '\x01';
  }
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  pSVar1 = Anticheat_ChatFilter__FilterSizeTag(message,(MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar1 = MiscExtensions__ReplaceNamedColorTags(pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar1 = GameManagers_ChatManager__GetColorString(pSVar1,color,false,method_00);
  if (timestamp.fields.hasValue == false) {
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    messageTime = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__AddLineInternal
            (pSVar1,color,isSystem,messageTime,senderID,isSuggestion,isPM,pmPartnerID,isNotification,
             (GameManagers_ChatManager_ChatPlayerLineData_o)ZEXT824(0),in_stack_ffffffffffffffa8);
  return;
}


// GameManagers.ChatManager$$AddPlayerLine
// il2cpp: void GameManagers_ChatManager__AddPlayerLine (Photon_Realtime_Player_o* sender, System_String_o* message, int32_t bodyColor, System_DateTime_o timestamp, bool isPM, int32_t pmPartnerID, const MethodInfo* method);
// 0x59302c0

void GameManagers_ChatManager__AddPlayerLine
               (Photon_Realtime_Player_o *sender,System_String_o *message,int32_t bodyColor,
               System_DateTime_o timestamp,bool isPM,int32_t pmPartnerID,MethodInfo *method)

{
  uint32_t uVar1;
  int32_t senderID;
  GameManagers_ChatManager_ChatPlayerLineData_o playerLineData;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  Il2CppObject *arg0;
  Il2CppObject *arg0_00;
  System_String_o *pSVar4;
  System_String_array *values;
  MethodInfo *method_00;
  System_String_o **method_01;
  MethodInfo *in_stack_ffffffffffffff88;
  int32_t local_60;
  int32_t local_5c;
  undefined8 local_58;
  System_String_o *pSStack_50;
  System_String_o *local_48 [2];
  System_DateTime_o local_38;
  
  if (Il2CppMethodInitialized_075457c3 == '\0') {
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
    Il2CppMethodInitialized_075457c3 = '\x01';
  }
  if (sender == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  local_38 = (System_DateTime_o)(System_DateTime_o)timestamp.fields._dateData;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  method_00 = (MethodInfo *)0x0;
  pSVar2 = PhotonExtensions__GetStringProperty
                     (sender,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                      (MethodInfo *)0x0);
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  pSVar2 = Anticheat_ChatFilter__FilterSizeTag(pSVar2,(MethodInfo *)0x0);
  if (message == (System_String_o *)0x0) {
    message = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    uVar1 = (TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  pSVar3 = Anticheat_ChatFilter__FilterSizeTag(message,(MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar3 = MiscExtensions__ReplaceNamedColorTags(pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar3 = GameManagers_ChatManager__GetColorString(pSVar3,bodyColor,false,method_00);
  local_5c = (sender->fields).actorNumber;
  arg0 = il2cpp_vm_Object_Box(g_data_07556710,&local_5c);
  local_60 = (sender->fields).actorNumber;
  arg0_00 = il2cpp_vm_Object_Box(g_data_07556710,&local_60);
  method_01 = &"[{0}]";
  pSVar4 = System_String__Format("[{0}]",arg0_00,(MethodInfo *)0x0);
  pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,1,false,(MethodInfo *)method_01);
  pSVar4 = System_String__Format_5302c50("<link=\"{0}\">{1}</link>",arg0,(Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (values == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = pSVar4;
    Il2CppCodeGenWriteBarrier(values->m_Items);
    if ((values->max_length & 0xfffffffe) != 0) {
      values->m_Items[1] = " ";
      Il2CppCodeGenWriteBarrier(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = pSVar2;
        Il2CppCodeGenWriteBarrier(values->m_Items + 2);
        if ((values->max_length & 0xfffffffc) != 0) {
          values->m_Items[3] = ": ";
          Il2CppCodeGenWriteBarrier(values->m_Items + 3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = pSVar3;
            Il2CppCodeGenWriteBarrier(values->m_Items + 4);
            pSVar4 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
            senderID = (sender->fields).actorNumber;
            local_48[0] = (System_String_o *)0x0;
            local_58 = 1;
            pSStack_50 = pSVar2;
            Il2CppCodeGenWriteBarrier(&pSStack_50);
            local_48[0] = pSVar3;
            Il2CppCodeGenWriteBarrier(local_48);
            playerLineData.fields.SenderName = pSStack_50;
            playerLineData.fields._0_8_ = local_58;
            playerLineData.fields.BodyText = local_48[0];
            GameManagers_ChatManager__AddLineInternal
                      (pSVar4,0,false,local_38,senderID,false,isPM,pmPartnerID,false,playerLineData,
                       in_stack_ffffffffffffff88);
            return;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// GameManagers.ChatManager$$AddLineInternal
// il2cpp: void GameManagers_ChatManager__AddLineInternal (System_String_o* formattedMessage, int32_t color, bool isSystem, System_DateTime_o messageTime, int32_t senderID, bool isSuggestion, bool isPM, int32_t pmPartnerID, bool isNotification, GameManagers_ChatManager_ChatPlayerLineData_o playerLineData, const MethodInfo* method);
// 0x59306e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593075b: jmp 0x5930eab
// asm:   0x5930d81: jmp 0x5930e99

void GameManagers_ChatManager__AddLineInternal
               (System_String_o *formattedMessage,int32_t color,bool isSystem,System_DateTime_o messageTime,
               int32_t senderID,bool isSuggestion,bool isPM,int32_t pmPartnerID,bool isNotification,
               GameManagers_ChatManager_ChatPlayerLineData_o playerLineData,MethodInfo *method)

{
  int32_t *piVar1;
  GameManagers_ChatManager_ChatPlayerLineData_o *pGVar2;
  System_String_o **ppSVar3;
  uint uVar4;
  int iVar5;
  System_Collections_Generic_List_string__o *__this;
  System_String_array *pSVar6;
  System_Collections_Generic_List_T__o *__this_00;
  System_Object_array *pSVar7;
  System_Collections_Generic_List_bool__o *pSVar8;
  System_Boolean_array *pSVar9;
  System_Collections_Generic_List_DateTime__o *__this_01;
  System_DateTime_array *pSVar10;
  System_Collections_Generic_List_int__o *pSVar11;
  System_Int32_array *pSVar12;
  System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *__this_02;
  GameManagers_ChatManager_ChatPlayerLineData_array *pGVar13;
  System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *__this_03;
  GameManagers_ChatManager_ChatDisplayLine_array *pGVar14;
  System_Int64_array *pSVar15;
  GameManagers_ChatManager_ChatDisplayLine_Fields *pGVar16;
  MethodInfo *pMVar17;
  bool bVar18;
  int32_t iVar19;
  GameManagers_ChatManager_StaticFields *pGVar20;
  UI_ChatPanel_o *__this_04;
  System_String_o *line;
  MethodInfo *pMVar21;
  MethodInfo *method_00;
  GameManagers_ChatManager_c *method_01;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_075457c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_DateTime_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_long_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_ChatTextColor_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075457c4 = '\x01';
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor != 0) goto label_05930747;
label_05930802:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    __this = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
    pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) goto label_05930802;
label_05930747:
    __this = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
    pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
  }
  MethodInfo_System_Collections_Generic_List_string_Add = pMVar21;
  if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_05930eab;
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar6 = (__this->fields)._items;
  if (pSVar6 == (System_String_array *)0x0) goto label_05930eab;
  uVar4 = (__this->fields)._size;
  if (uVar4 < (uint)pSVar6->max_length) {
    (__this->fields)._size = uVar4 + 1;
    pSVar6->m_Items[(int)uVar4] = formattedMessage;
    Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar4);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)formattedMessage,
               (MethodInfo_395D230 *)pMVar21->klass->rgctx_data[0xe].method);
  }
  pMVar21 = MethodInfo_System_Collections_Generic_List_ChatTextColor_Add;
  pGVar20 = TypeInfo_GameManagers_ChatManager->static_fields;
  __this_00 = (System_Collections_Generic_List_T__o *)pGVar20->Colors;
  if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) goto label_05930eab;
  piVar1 = &(__this_00->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar7 = (__this_00->fields)._items;
  if (pSVar7 == (System_Object_array *)0x0) goto label_05930eab;
  uVar4 = (__this_00->fields)._size;
  if (uVar4 < (uint)pSVar7->max_length) {
    (__this_00->fields)._size = uVar4 + 1;
    *(int32_t *)((long)pSVar7->m_Items + (long)(int)uVar4 * 4) = color;
  }
  else {
    System_Collections_Generic_List_Int32Enum___AddWithResize
              (__this_00,color,(MethodInfo_3919BE0 *)pMVar21->klass->rgctx_data[0xe].method);
    pGVar20 = TypeInfo_GameManagers_ChatManager->static_fields;
  }
  pMVar21 = MethodInfo_System_Collections_Generic_List_bool_Add;
  pSVar8 = pGVar20->SystemFlags;
  if (pSVar8 == (System_Collections_Generic_List_bool__o *)0x0) goto label_05930eab;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar9 = (pSVar8->fields)._items;
  if (pSVar9 == (System_Boolean_array *)0x0) goto label_05930eab;
  uVar4 = (pSVar8->fields)._size;
  if (uVar4 < (uint)pSVar9->max_length) {
    (pSVar8->fields)._size = uVar4 + 1;
    pSVar9->m_Items[(int)uVar4] = isSystem;
  }
  else {
    System_Collections_Generic_List_bool___AddWithResize
              (pSVar8,isSystem,(MethodInfo_51DC120 *)pMVar21->klass->rgctx_data[0xe].method);
    pGVar20 = TypeInfo_GameManagers_ChatManager->static_fields;
  }
  pMVar21 = MethodInfo_System_Collections_Generic_List_DateTime_Add;
  __this_01 = pGVar20->Timestamps;
  if (__this_01 == (System_Collections_Generic_List_DateTime__o *)0x0) goto label_05930eab;
  piVar1 = &(__this_01->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar10 = (__this_01->fields)._items;
  if (pSVar10 == (System_DateTime_array *)0x0) goto label_05930eab;
  uVar4 = (__this_01->fields)._size;
  if (uVar4 < (uint)pSVar10->max_length) {
    (__this_01->fields)._size = uVar4 + 1;
    pSVar10->m_Items[(int)uVar4].fields._dateData = (uint64_t)messageTime.fields._dateData;
  }
  else {
    System_Collections_Generic_List_DateTime___AddWithResize
              (__this_01,messageTime,(MethodInfo_51F5870 *)pMVar21->klass->rgctx_data[0xe].method);
  }
  pMVar21 = MethodInfo_System_Collections_Generic_List_int_Add;
  pGVar20 = TypeInfo_GameManagers_ChatManager->static_fields;
  pSVar11 = pGVar20->SenderIDs;
  if (pSVar11 == (System_Collections_Generic_List_int__o *)0x0) goto label_05930eab;
  piVar1 = &(pSVar11->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar12 = (pSVar11->fields)._items;
  if (pSVar12 == (System_Int32_array *)0x0) goto label_05930eab;
  uVar4 = (pSVar11->fields)._size;
  if (uVar4 < (uint)pSVar12->max_length) {
    (pSVar11->fields)._size = uVar4 + 1;
    pSVar12->m_Items[(int)uVar4] = senderID;
  }
  else {
    System_Collections_Generic_List_int___AddWithResize
              (pSVar11,senderID,(MethodInfo_3916AC0 *)pMVar21->klass->rgctx_data[0xe].method);
    pGVar20 = TypeInfo_GameManagers_ChatManager->static_fields;
  }
  pMVar21 = MethodInfo_System_Collections_Generic_List_bool_Add;
  pSVar8 = pGVar20->SuggestionFlags;
  if (pSVar8 == (System_Collections_Generic_List_bool__o *)0x0) goto label_05930eab;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar9 = (pSVar8->fields)._items;
  if (pSVar9 == (System_Boolean_array *)0x0) goto label_05930eab;
  uVar4 = (pSVar8->fields)._size;
  if (uVar4 < (uint)pSVar9->max_length) {
    (pSVar8->fields)._size = uVar4 + 1;
    pSVar9->m_Items[(int)uVar4] = isSuggestion;
  }
  else {
    System_Collections_Generic_List_bool___AddWithResize
              (pSVar8,isSuggestion,(MethodInfo_51DC120 *)pMVar21->klass->rgctx_data[0xe].method);
    pGVar20 = TypeInfo_GameManagers_ChatManager->static_fields;
  }
  pMVar21 = MethodInfo_System_Collections_Generic_List_bool_Add;
  pSVar8 = pGVar20->NotificationFlags;
  if (pSVar8 == (System_Collections_Generic_List_bool__o *)0x0) goto label_05930eab;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar9 = (pSVar8->fields)._items;
  if (pSVar9 == (System_Boolean_array *)0x0) goto label_05930eab;
  uVar4 = (pSVar8->fields)._size;
  if (uVar4 < (uint)pSVar9->max_length) {
    (pSVar8->fields)._size = uVar4 + 1;
    pSVar9->m_Items[(int)uVar4] = isNotification;
  }
  else {
    System_Collections_Generic_List_bool___AddWithResize
              (pSVar8,isNotification,(MethodInfo_51DC120 *)pMVar21->klass->rgctx_data[0xe].method);
    pGVar20 = TypeInfo_GameManagers_ChatManager->static_fields;
  }
  pMVar21 = MethodInfo_System_Collections_Generic_List_bool_Add;
  pSVar8 = pGVar20->PrivateFlags;
  if (pSVar8 == (System_Collections_Generic_List_bool__o *)0x0) goto label_05930eab;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar9 = (pSVar8->fields)._items;
  if (pSVar9 == (System_Boolean_array *)0x0) goto label_05930eab;
  uVar4 = (pSVar8->fields)._size;
  if (uVar4 < (uint)pSVar9->max_length) {
    (pSVar8->fields)._size = uVar4 + 1;
    pSVar9->m_Items[(int)uVar4] = isPM;
  }
  else {
    System_Collections_Generic_List_bool___AddWithResize
              (pSVar8,isPM,(MethodInfo_51DC120 *)pMVar21->klass->rgctx_data[0xe].method);
    pGVar20 = TypeInfo_GameManagers_ChatManager->static_fields;
  }
  pMVar21 = MethodInfo_System_Collections_Generic_List_int_Add;
  pSVar11 = pGVar20->PMPartnerIDs;
  if (pSVar11 == (System_Collections_Generic_List_int__o *)0x0) goto label_05930eab;
  piVar1 = &(pSVar11->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar12 = (pSVar11->fields)._items;
  if (pSVar12 == (System_Int32_array *)0x0) goto label_05930eab;
  uVar4 = (pSVar11->fields)._size;
  if (uVar4 < (uint)pSVar12->max_length) {
    (pSVar11->fields)._size = uVar4 + 1;
    pSVar12->m_Items[(int)uVar4] = pmPartnerID;
  }
  else {
    System_Collections_Generic_List_int___AddWithResize
              (pSVar11,pmPartnerID,(MethodInfo_3916AC0 *)pMVar21->klass->rgctx_data[0xe].method);
    pGVar20 = TypeInfo_GameManagers_ChatManager->static_fields;
  }
  pMVar21 = MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_Add;
  __this_02 = pGVar20->PlayerLineData;
  if (__this_02 == (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0)
  goto label_05930eab;
  piVar1 = &(__this_02->fields)._version;
  *piVar1 = *piVar1 + 1;
  pGVar13 = (__this_02->fields)._items;
  if (pGVar13 == (GameManagers_ChatManager_ChatPlayerLineData_array *)0x0) goto label_05930eab;
  uVar4 = (__this_02->fields)._size;
  if (uVar4 < (uint)pGVar13->max_length) {
    (__this_02->fields)._size = uVar4 + 1;
    pGVar13->m_Items[(int)uVar4].fields.BodyText = playerLineData.fields.BodyText;
    pGVar2 = pGVar13->m_Items + (int)uVar4;
    (pGVar2->fields).Active = playerLineData.fields.Active;
    *(undefined7 *)&(pGVar2->fields).field_0x1 = playerLineData.fields._1_7_;
    (pGVar2->fields).SenderName = playerLineData.fields.SenderName;
    Il2CppCodeGenWriteBarrier(&pGVar13->m_Items[(int)uVar4].fields.SenderName);
  }
  else {
    System_Collections_Generic_List_ChatManager_ChatPlayerLineData___AddWithResize
              (__this_02,playerLineData,(MethodInfo_3A70B80 *)pMVar21->klass->rgctx_data[0xe].method);
  }
  pMVar21 = MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_Add;
  __this_03 = TypeInfo_GameManagers_ChatManager->static_fields->DisplayLineCache;
  if (__this_03 == (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0) goto label_05930eab;
  piVar1 = &(__this_03->fields)._version;
  *piVar1 = *piVar1 + 1;
  pGVar14 = (__this_03->fields)._items;
  if (pGVar14 == (GameManagers_ChatManager_ChatDisplayLine_array *)0x0) goto label_05930eab;
  uVar4 = (__this_03->fields)._size;
  if (uVar4 < (uint)pGVar14->max_length) {
    (__this_03->fields)._size = uVar4 + 1;
    pGVar16 = &pGVar14->m_Items[(int)uVar4].fields;
    *(undefined8 *)&pGVar16->SenderID = 0;
    pGVar16->LineID = 0;
    ppSVar3 = &pGVar14->m_Items[(int)uVar4].fields.SenderName;
    *ppSVar3 = (System_String_o *)0x0;
    ppSVar3[1] = (System_String_o *)0x0;
    ppSVar3 = &pGVar14->m_Items[(int)uVar4].fields.TimeText;
    *ppSVar3 = (System_String_o *)0x0;
    ppSVar3[1] = (System_String_o *)0x0;
    pGVar14->m_Items[(int)uVar4].fields.PlainText = (System_String_o *)0x0;
    *(undefined8 *)&pGVar14->m_Items[(int)uVar4].fields.UsePlayerStyle = 0;
    Il2CppCodeGenWriteBarrier((void **)(pGVar14->m_Items + (int)uVar4));
  }
  else {
    System_Collections_Generic_List_ChatManager_ChatDisplayLine___AddWithResize
              (__this_03,(GameManagers_ChatManager_ChatDisplayLine_o)ZEXT864(0),
               (MethodInfo_3A6D140 *)pMVar21->klass->rgctx_data[0xe].method);
  }
  pGVar20 = TypeInfo_GameManagers_ChatManager->static_fields;
  pMVar21 = (MethodInfo *)pGVar20->LineIDs;
  method_00 = (MethodInfo *)(pGVar20->_nextLineID + 1);
  pGVar20->_nextLineID = (int64_t)method_00;
  pMVar17 = MethodInfo_System_Collections_Generic_List_long_Add;
  if (pMVar21 == (MethodInfo *)0x0) goto label_05930eab;
  piVar1 = (int32_t *)((long)&pMVar21->name + 4);
  *piVar1 = *piVar1 + 1;
  pSVar15 = ((System_Collections_Generic_List_long__Fields *)&pMVar21->invoker_method)->_items;
  if (pSVar15 == (System_Int64_array *)0x0) goto label_05930eab;
  uVar4 = *(uint *)&pMVar21->name;
  if (uVar4 < (uint)pSVar15->max_length) {
    *(uint *)&pMVar21->name = uVar4 + 1;
    pSVar15->m_Items[(int)uVar4] = (int64_t)method_00;
  }
  else {
    System_Collections_Generic_List_long___AddWithResize
              ((System_Collections_Generic_List_long__o *)pMVar21,(int64_t)method_00,
               (MethodInfo_391CD10 *)pMVar17->klass->rgctx_data[0xe].method);
    pGVar20 = TypeInfo_GameManagers_ChatManager->static_fields;
  }
  if (pGVar20->RawMessages == (System_Collections_Generic_List_string__o *)0x0) goto label_05930eab;
  iVar5 = (pGVar20->RawMessages->fields)._size;
  iVar19 = GameManagers_ChatManager__get_MaxLines(pMVar21);
  if (iVar19 < iVar5) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__RemoveLineAt(0,method_00);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor != 0) goto label_05930d78;
label_05930daa:
    method_01 = TypeInfo_GameManagers_ChatManager;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    bVar18 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)method_01);
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) goto label_05930daa;
label_05930d78:
    bVar18 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)TypeInfo_GameManagers_ChatManager);
  }
  if (bVar18) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      pGVar20 = TypeInfo_GameManagers_ChatManager->static_fields;
      iVar5 = pGVar20->_lineBatchDepth;
      uVar4 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
      klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
    }
    else {
      pGVar20 = ((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->static_fields;
      iVar5 = pGVar20->_lineBatchDepth;
      uVar4 = (((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor;
      klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
    }
    TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
    if (iVar5 < 1) {
      pMVar21 = (MethodInfo *)(ulong)uVar4;
      if (uVar4 == 0) {
        il2cpp_codegen_runtime_class_init(klass);
      }
      __this_04 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)klass);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar18 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar18) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        line = GameManagers_ChatManager__GetFormattedMessage
                         (formattedMessage,messageTime,isSuggestion,pMVar21);
        if (__this_04 != (UI_ChatPanel_o *)0x0) {
          UI_ChatPanel__AddLine(__this_04,line,(MethodInfo *)0x0);
          return;
        }
label_05930eab:
        ThrowNullReferenceException();
      }
    }
    else {
      if (uVar4 == 0) {
        il2cpp_codegen_runtime_class_init(klass);
        pGVar20 = TypeInfo_GameManagers_ChatManager->static_fields;
      }
      pGVar20->_pendingBatchSync = true;
    }
  }
  return;
}


// GameManagers.ChatManager$$BeginLineBatch
// il2cpp: void GameManagers_ChatManager__BeginLineBatch (const MethodInfo* method);
// 0x59315e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5931680: jmp 0x59316a5

void GameManagers_ChatManager__BeginLineBatch(MethodInfo *method)

{
  int *piVar1;
  int32_t *piVar2;
  uint32_t uVar3;
  int iVar4;
  GameManagers_ChatManager_StaticFields *pGVar5;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_075457c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_075457c5 = '\x01';
    uVar3 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar3 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    pGVar5 = TypeInfo_GameManagers_ChatManager->static_fields;
    iVar4 = pGVar5->_lineBatchDepth;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    pGVar5 = ((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->static_fields;
    iVar4 = pGVar5->_lineBatchDepth;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (iVar4 == 0) {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
      TypeInfo_GameManagers_ChatManager->static_fields->_pendingBatchSync = false;
      uVar3 = (((GameManagers_ChatManager_c *)klass)->_2).cctor_finished_or_no_cctor;
    }
    else {
      pGVar5->_pendingBatchSync = false;
      uVar3 = (klass->_2).cctor_finished_or_no_cctor;
    }
  }
  else {
    uVar3 = (klass->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    piVar2 = &TypeInfo_GameManagers_ChatManager->static_fields->_lineBatchDepth;
    *piVar2 = *piVar2 + 1;
    return;
  }
  piVar1 = (int *)((long)klass->static_fields + 0x84);
  *piVar1 = *piVar1 + 1;
  return;
}


// GameManagers.ChatManager$$EndLineBatch
// il2cpp: void GameManagers_ChatManager__EndLineBatch (const MethodInfo* method);
// 0x59316c0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59316ee: jmp 0x593183c
// asm:   0x5931759: jmp 0x593177e
// asm:   0x5931790: jmp 0x593183c
// asm:   0x59317ca: jmp 0x593183c

void GameManagers_ChatManager__EndLineBatch(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  GameManagers_ChatManager_StaticFields *pGVar3;
  bool bVar4;
  UI_ChatPanel_o *__this;
  int iVar5;
  Il2CppClass *pIVar6;
  
  if (Il2CppMethodInitialized_075457c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075457c6 = '\x01';
    uVar2 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    pGVar3 = TypeInfo_GameManagers_ChatManager->static_fields;
    iVar5 = pGVar3->_lineBatchDepth;
    pIVar6 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    pGVar3 = ((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->static_fields;
    iVar5 = pGVar3->_lineBatchDepth;
    pIVar6 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)pIVar6;
  if (0 < iVar5) {
    if ((pIVar6->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar6);
      pIVar6 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
      pGVar3 = TypeInfo_GameManagers_ChatManager->static_fields;
      iVar5 = pGVar3->_lineBatchDepth + -1;
      pGVar3->_lineBatchDepth = iVar5;
    }
    else {
      iVar5 = iVar5 + -1;
      pGVar3->_lineBatchDepth = iVar5;
    }
    if (iVar5 == 0) {
      if ((pIVar6->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(pIVar6);
        pGVar3 = TypeInfo_GameManagers_ChatManager->static_fields;
        cVar1 = pGVar3->_pendingBatchSync;
        pIVar6 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
      }
      else {
        cVar1 = pGVar3->_pendingBatchSync;
      }
      if (cVar1 != '\0') {
        if ((pIVar6->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(pIVar6);
          TypeInfo_GameManagers_ChatManager->static_fields->_pendingBatchSync = false;
          bVar4 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)pIVar6);
          pIVar6 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
        }
        else {
          pGVar3->_pendingBatchSync = false;
          bVar4 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)pIVar6);
          pIVar6 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
        }
        TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)pIVar6;
        if (bVar4) {
          if ((pIVar6->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(pIVar6);
          }
          __this = GameManagers_ChatManager__GetChatPanel((MethodInfo *)pIVar6);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar4) {
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
// 0x5930eb0

void GameManagers_ChatManager__RemoveLineAt(int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_List_T__o *__this_00;
  System_Collections_Generic_List_DateTime__o *__this_01;
  System_Collections_Generic_List_bool__o *pSVar1;
  System_Collections_Generic_List_int__o *pSVar2;
  System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *__this_02;
  System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *__this_03;
  System_Collections_Generic_List_long__o *__this_04;
  
  if (Il2CppMethodInitialized_075457c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_long_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_DateTime_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatTextColor_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatTextColor_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_DateTime_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_long_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    Il2CppMethodInitialized_075457c7 = '\x01';
  }
  if (index < 0) {
    return;
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    if ((__this->fields)._size <= index) {
      return;
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      __this = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
      if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_05931485;
    }
    System_Collections_Generic_List_object___RemoveAt
              ((System_Collections_Generic_List_object__o *)__this,index,
               (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_string_RemoveAt);
    __this_00 = (System_Collections_Generic_List_T__o *)
                TypeInfo_GameManagers_ChatManager->static_fields->Colors;
    if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
      if (index < (__this_00->fields)._size) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          __this_00 = (System_Collections_Generic_List_T__o *)
                      TypeInfo_GameManagers_ChatManager->static_fields->Colors;
          if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) goto label_05931485;
        }
        System_Collections_Generic_List_Int32Enum___RemoveAt
                  (__this_00,index,
                   (MethodInfo_391BA50 *)MethodInfo_System_Collections_Generic_List_ChatTextColor_RemoveAt);
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->SystemFlags;
      if (pSVar1 != (System_Collections_Generic_List_bool__o *)0x0) {
        if (index < (pSVar1->fields)._size) {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->SystemFlags;
            if (pSVar1 == (System_Collections_Generic_List_bool__o *)0x0) goto label_05931485;
          }
          System_Collections_Generic_List_bool___RemoveAt
                    (pSVar1,index,
                     (MethodInfo_51DDFD0 *)MethodInfo_System_Collections_Generic_List_bool_RemoveAt);
        }
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        __this_01 = TypeInfo_GameManagers_ChatManager->static_fields->Timestamps;
        if (__this_01 != (System_Collections_Generic_List_DateTime__o *)0x0) {
          if (index < (__this_01->fields)._size) {
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              __this_01 = TypeInfo_GameManagers_ChatManager->static_fields->Timestamps;
              if (__this_01 == (System_Collections_Generic_List_DateTime__o *)0x0) goto label_05931485;
            }
            System_Collections_Generic_List_DateTime___RemoveAt
                      (__this_01,index,
                       (MethodInfo_51F7730 *)MethodInfo_System_Collections_Generic_List_DateTime_RemoveAt);
          }
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
          if (pSVar2 != (System_Collections_Generic_List_int__o *)0x0) {
            if (index < (pSVar2->fields)._size) {
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
                if (pSVar2 == (System_Collections_Generic_List_int__o *)0x0) goto label_05931485;
              }
              System_Collections_Generic_List_int___RemoveAt
                        (pSVar2,index,
                         (MethodInfo_3918930 *)MethodInfo_System_Collections_Generic_List_int_RemoveAt);
            }
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags;
            if (pSVar1 != (System_Collections_Generic_List_bool__o *)0x0) {
              if (index < (pSVar1->fields)._size) {
                if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                  pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags;
                  if (pSVar1 == (System_Collections_Generic_List_bool__o *)0x0) goto label_05931485;
                }
                System_Collections_Generic_List_bool___RemoveAt
                          (pSVar1,index,
                           (MethodInfo_51DDFD0 *)MethodInfo_System_Collections_Generic_List_bool_RemoveAt);
              }
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->NotificationFlags;
              if (pSVar1 != (System_Collections_Generic_List_bool__o *)0x0) {
                if (index < (pSVar1->fields)._size) {
                  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->NotificationFlags;
                    if (pSVar1 == (System_Collections_Generic_List_bool__o *)0x0) goto label_05931485;
                  }
                  System_Collections_Generic_List_bool___RemoveAt
                            (pSVar1,index,
                             (MethodInfo_51DDFD0 *)MethodInfo_System_Collections_Generic_List_bool_RemoveAt);
                }
                if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                }
                pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
                if (pSVar1 != (System_Collections_Generic_List_bool__o *)0x0) {
                  if (index < (pSVar1->fields)._size) {
                    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                      pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
                      if (pSVar1 == (System_Collections_Generic_List_bool__o *)0x0) goto label_05931485;
                    }
                    System_Collections_Generic_List_bool___RemoveAt
                              (pSVar1,index,
                               (MethodInfo_51DDFD0 *)MethodInfo_System_Collections_Generic_List_bool_RemoveAt)
                    ;
                  }
                  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                  }
                  pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
                  if (pSVar2 != (System_Collections_Generic_List_int__o *)0x0) {
                    if (index < (pSVar2->fields)._size) {
                      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                        pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
                        if (pSVar2 == (System_Collections_Generic_List_int__o *)0x0) goto label_05931485;
                      }
                      System_Collections_Generic_List_int___RemoveAt
                                (pSVar2,index,
                                 (MethodInfo_3918930 *)MethodInfo_System_Collections_Generic_List_int_RemoveAt
                                );
                    }
                    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                    }
                    __this_02 = TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData;
                    if (__this_02 != (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0)
                    {
                      if (index < (__this_02->fields)._size) {
                        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                          __this_02 = TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData;
                          if (__this_02 ==
                              (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0)
                          goto label_05931485;
                        }
                        System_Collections_Generic_List_ChatManager_ChatPlayerLineData___RemoveAt
                                  (__this_02,index,
                                   (MethodInfo_3A72D90 *)
                                   MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_RemoveAt
                                  );
                      }
                      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                      }
                      __this_03 = TypeInfo_GameManagers_ChatManager->static_fields->DisplayLineCache;
                      if (__this_03 != (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0)
                      {
                        if (index < (__this_03->fields)._size) {
                          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                            __this_03 = TypeInfo_GameManagers_ChatManager->static_fields->DisplayLineCache;
                            if (__this_03 ==
                                (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0)
                            goto label_05931485;
                          }
                          System_Collections_Generic_List_ChatManager_ChatDisplayLine___RemoveAt
                                    (__this_03,index,
                                     (MethodInfo_3A6F6C0 *)
                                     MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_RemoveAt
                                    );
                        }
                        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                        }
                        __this_04 = TypeInfo_GameManagers_ChatManager->static_fields->LineIDs;
                        if (__this_04 != (System_Collections_Generic_List_long__o *)0x0) {
                          if ((__this_04->fields)._size <= index) {
                            return;
                          }
                          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                            __this_04 = TypeInfo_GameManagers_ChatManager->static_fields->LineIDs;
                            if (__this_04 == (System_Collections_Generic_List_long__o *)0x0)
                            goto label_05931485;
                          }
                          System_Collections_Generic_List_long___RemoveAt
                                    (__this_04,index,
                                     (MethodInfo_391EBC0 *)
                                     MethodInfo_System_Collections_Generic_List_long_RemoveAt);
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
label_05931485:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$AddException
// il2cpp: void GameManagers_ChatManager__AddException (System_String_o* line, const MethodInfo* method);
// 0x5931850
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5931883: jmp 0x5931af3

void GameManagers_ChatManager__AddException(System_String_o *line,MethodInfo *method)

{
  int32_t *piVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar3;
  System_Text_StringBuilder_o *pSVar4;
  GameManagers_ChatManager_StaticFields *pGVar5;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (Il2CppMethodInitialized_075457c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    Il2CppMethodInitialized_075457c8 = '\x01';
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) goto label_059318c6;
label_05931873:
    __this = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor != 0) goto label_05931873;
label_059318c6:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    __this = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
  }
  if (__this == (System_Collections_Generic_List_string__o *)0x0) {
label_05931af3:
    ThrowNullReferenceException();
  }
  if (0 < (__this->fields)._size) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      __this = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
      if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_05931af3;
    }
    pSVar3 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this,(__this->fields)._size + -1,
                        (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
    if (pSVar3 == (System_String_o *)0x0) goto label_05931af3;
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
        pGVar5 = TypeInfo_GameManagers_ChatManager->static_fields;
        piVar1 = &pGVar5->LastExceptionCount;
        *piVar1 = *piVar1 + 1;
        pSVar4 = pGVar5->MessageBuilder;
        if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Clear(pSVar4,(MethodInfo *)0x0);
          pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
          if (((pSVar4 != (System_Text_StringBuilder_o *)0x0) &&
              (pSVar4 = System_Text_StringBuilder__Append_530ed80(pSVar4,line,(MethodInfo *)0x0),
              pSVar4 != (System_Text_StringBuilder_o *)0x0)) &&
             (pSVar4 = System_Text_StringBuilder__Append_530f6a0(pSVar4,0x28,(MethodInfo *)0x0),
             pSVar4 != (System_Text_StringBuilder_o *)0x0)) {
            pGVar5 = TypeInfo_GameManagers_ChatManager->static_fields;
            pSVar4 = System_Text_StringBuilder__Append_530f730
                               (pSVar4,pGVar5->LastExceptionCount,(MethodInfo *)0x0);
            if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append_530f6a0(pSVar4,0x29,(MethodInfo *)0x0);
              pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
              if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
                pSVar3 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                                   (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
                pSVar3 = GameManagers_ChatManager__GetColorString(pSVar3,4,false,(MethodInfo *)pGVar5);
                GameManagers_ChatManager__ReplaceLastLine(pSVar3,4,true,(MethodInfo *)pGVar5);
                return;
              }
            }
          }
        }
        goto label_05931af3;
      }
    }
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pGVar5 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar5->LastException = line;
  Il2CppCodeGenWriteBarrier(&pGVar5->LastException);
  TypeInfo_GameManagers_ChatManager->static_fields->LastExceptionCount = 0;
  GameManagers_ChatManager__AddLine
            (line,4,true,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
             in_stack_ffffffffffffffd8);
  return;
}


// GameManagers.ChatManager$$ReplaceLastLine
// il2cpp: void GameManagers_ChatManager__ReplaceLastLine (System_String_o* message, int32_t color, bool isSystem, const MethodInfo* method);
// 0x5931b00
// asm: 12 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5931b4e: jmp 0x59320a4
// asm:   0x5931e62: xorps xmm0, xmm0
// asm:   0x5931e65: movaps xmmword ptr [rsp + 0x40], xmm0
// asm:   0x5931e6a: mov qword ptr [rsp + 0x50], 0
// asm:   0x5931e73: jmp 0x5931ef1
// asm:   0x5931f55: xorps xmm0, xmm0
// asm:   0x5931f58: movaps xmmword ptr [rsp + 0x70], xmm0
// asm:   0x5931f5d: movaps xmmword ptr [rsp + 0x60], xmm0
// asm:   0x5931f62: movaps xmmword ptr [rsp + 0x50], xmm0
// asm:   0x5931f67: movaps xmmword ptr [rsp + 0x40], xmm0
// asm:   0x5931f6c: jmp 0x5931fa4
// asm:   0x5931ff4: jmp 0x5932092

void GameManagers_ChatManager__ReplaceLastLine
               (System_String_o *message,int32_t color,bool isSystem,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_T__o *__this;
  System_Collections_Generic_List_bool__o *pSVar2;
  System_Collections_Generic_List_DateTime__o *__this_00;
  System_Collections_Generic_List_int__o *pSVar3;
  bool bVar4;
  System_DateTime_o value;
  System_String_o *pSVar5;
  System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *__this_01;
  System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *__this_02;
  UI_ChatPanel_o *__this_03;
  MethodInfo **method_00;
  int iVar6;
  GameManagers_ChatManager_c *method_01;
  Il2CppClass *klass;
  MethodInfo *in_stack_ffffffffffffff68;
  
  if (Il2CppMethodInitialized_075457c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_get_Count);
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
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075457c9 = '\x01';
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor != 0) goto label_05931b3a;
label_05931c19:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) goto label_05931c19;
label_05931b3a:
    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
  }
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    if ((pSVar1->fields)._size < 1) {
      if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__AddLine
                (message,color,isSystem,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
                 in_stack_ffffffffffffff68);
      return;
    }
    if ((((Il2CppClass *)TypeInfo_System_DateTime)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    value = System_DateTime__get_UtcNow((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
    if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
      iVar6 = (pSVar1->fields)._size;
      if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
      }
      pSVar5 = Anticheat_ChatFilter__FilterSizeTag(message,(MethodInfo *)0x0);
      pSVar5 = Anticheat_ChatFilter__FilterBadWords(pSVar5,(MethodInfo *)0x0);
      pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
      if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
        iVar6 = iVar6 + -1;
        System_Collections_Generic_List_object___set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar1,iVar6,(Il2CppObject *)pSVar5,
                   (MethodInfo_395CF60 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
        __this = (System_Collections_Generic_List_T__o *)
                 TypeInfo_GameManagers_ChatManager->static_fields->Colors;
        if (__this != (System_Collections_Generic_List_T__o *)0x0) {
          System_Collections_Generic_List_Int32Enum___set_Item
                    (__this,iVar6,color,
                     (MethodInfo_3919930 *)MethodInfo_System_Collections_Generic_List_ChatTextColor_set_Item);
          pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->SystemFlags;
          if (pSVar2 != (System_Collections_Generic_List_bool__o *)0x0) {
            System_Collections_Generic_List_bool___set_Item
                      (pSVar2,iVar6,isSystem,
                       (MethodInfo_51DBE60 *)MethodInfo_System_Collections_Generic_List_bool_set_Item);
            __this_00 = TypeInfo_GameManagers_ChatManager->static_fields->Timestamps;
            if (__this_00 != (System_Collections_Generic_List_DateTime__o *)0x0) {
              System_Collections_Generic_List_DateTime___set_Item
                        (__this_00,iVar6,value,
                         (MethodInfo_51F55B0 *)MethodInfo_System_Collections_Generic_List_DateTime_set_Item);
              pSVar3 = TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
              if (pSVar3 != (System_Collections_Generic_List_int__o *)0x0) {
                System_Collections_Generic_List_int___set_Item
                          (pSVar3,iVar6,-1,
                           (MethodInfo_3916810 *)MethodInfo_System_Collections_Generic_List_int_set_Item);
                pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags;
                if (pSVar2 != (System_Collections_Generic_List_bool__o *)0x0) {
                  System_Collections_Generic_List_bool___set_Item
                            (pSVar2,iVar6,false,
                             (MethodInfo_51DBE60 *)MethodInfo_System_Collections_Generic_List_bool_set_Item);
                  pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->NotificationFlags;
                  if (pSVar2 != (System_Collections_Generic_List_bool__o *)0x0) {
                    System_Collections_Generic_List_bool___set_Item
                              (pSVar2,iVar6,false,
                               (MethodInfo_51DBE60 *)MethodInfo_System_Collections_Generic_List_bool_set_Item)
                    ;
                    pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->PrivateFlags;
                    if (pSVar2 != (System_Collections_Generic_List_bool__o *)0x0) {
                      System_Collections_Generic_List_bool___set_Item
                                (pSVar2,iVar6,false,
                                 (MethodInfo_51DBE60 *)
                                 MethodInfo_System_Collections_Generic_List_bool_set_Item);
                      pSVar3 = TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
                      if (pSVar3 != (System_Collections_Generic_List_int__o *)0x0) {
                        method_00 = (MethodInfo **)MethodInfo_System_Collections_Generic_List_int_set_Item;
                        System_Collections_Generic_List_int___set_Item
                                  (pSVar3,iVar6,-1,
                                   (MethodInfo_3916810 *)
                                   MethodInfo_System_Collections_Generic_List_int_set_Item);
                        __this_01 = TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData;
                        if (__this_01 !=
                            (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0) {
                          if (iVar6 < (__this_01->fields)._size) {
                            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                              __this_01 = TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData;
                              if (__this_01 ==
                                  (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0)
                              goto label_059320a4;
                            }
                            method_00 = (MethodInfo **)0x0;
                            System_Collections_Generic_List_ChatManager_ChatPlayerLineData___set_Item
                                      (__this_01,iVar6,
                                       (GameManagers_ChatManager_ChatPlayerLineData_o)ZEXT824(0),
                                       (MethodInfo_3A70840 *)
                                       MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_set_Item
                                      );
                          }
                          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                          }
                          __this_02 = TypeInfo_GameManagers_ChatManager->static_fields->DisplayLineCache;
                          if (__this_02 !=
                              (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0) {
                            if (iVar6 < (__this_02->fields)._size) {
                              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                                __this_02 = TypeInfo_GameManagers_ChatManager->static_fields->DisplayLineCache
                                ;
                                if (__this_02 ==
                                    (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0)
                                goto label_059320a4;
                              }
                              method_00 = &
                                          MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_set_Item
                              ;
                              System_Collections_Generic_List_ChatManager_ChatDisplayLine___set_Item
                                        (__this_02,iVar6,
                                         (GameManagers_ChatManager_ChatDisplayLine_o)ZEXT864(0),
                                         (MethodInfo_3A6CD80 *)
                                         MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_set_Item
                                        );
                            }
                            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                              method_01 = TypeInfo_GameManagers_ChatManager;
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                              bVar4 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)method_01);
                              klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
                            }
                            else {
                              bVar4 = GameManagers_ChatManager__IsChatAvailable
                                                ((MethodInfo *)TypeInfo_GameManagers_ChatManager);
                              klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
                            }
                            TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
                            if (bVar4) {
                              if ((klass->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init(klass);
                              }
                              __this_03 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)klass);
                              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                              }
                              bVar4 = UnityEngine_Object__op_Inequality
                                                ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0
                                                 ,(MethodInfo *)0x0);
                              if (bVar4) {
                                if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init
                                            ((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                                }
                                pSVar5 = GameManagers_ChatManager__GetFormattedMessage
                                                   (pSVar5,value,false,(MethodInfo *)method_00);
                                if (__this_03 != (UI_ChatPanel_o *)0x0) {
                                  UI_ChatPanel__ReplaceLastLine(__this_03,pSVar5,(MethodInfo *)0x0);
                                  return;
                                }
                                goto label_059320a4;
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
  }
label_059320a4:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$GetFormattedMessage
// il2cpp: System_String_o* GameManagers_ChatManager__GetFormattedMessage (System_String_o* message, System_DateTime_o timestamp, bool isSuggestion, const MethodInfo* method);
// 0x5931490

System_String_o *
GameManagers_ChatManager__GetFormattedMessage
          (System_String_o *message,System_DateTime_o timestamp,bool isSuggestion,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  System_String_o *pSVar3;
  System_Text_StringBuilder_o *pSVar4;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075457ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075457ca = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).ShowChatTimestamp, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    if (((pSVar2->fields)._value == false) || (isSuggestion)) {
      return message;
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
    if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Clear(pSVar4,(MethodInfo *)0x0);
      pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
      pSVar3 = GameManagers_ChatManager__GetTimestampPrefix(timestamp,false,method_00);
      if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
        pSVar4 = System_Text_StringBuilder__Append_530ed80(pSVar4,pSVar3,(MethodInfo *)0x0);
        if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Append_530ed80(pSVar4,message,(MethodInfo *)0x0);
          pSVar4 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
          if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
            pSVar3 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                               (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
            return pSVar3;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$GetDisplayLine
// il2cpp: GameManagers_ChatManager_ChatDisplayLine_o GameManagers_ChatManager__GetDisplayLine (int32_t index, const MethodInfo* method);
// 0x59322f0
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593241e: jmp 0x593261a
// asm:   0x593255e: mov qword ptr [rbx], rax
// asm:   0x5932561: movaps xmm0, xmmword ptr [rsp + 0xc0]
// asm:   0x5932569: movaps xmm1, xmmword ptr [rsp + 0xd0]
// asm:   0x5932571: movaps xmm2, xmmword ptr [rsp + 0xe0]
// asm:   0x5932579: movups xmmword ptr [rbx + 8], xmm0
// asm:   0x593257d: movups xmmword ptr [rbx + 0x18], xmm1
// asm:   0x5932581: movups xmmword ptr [rbx + 0x28], xmm2
// asm:   0x5932585: mov rax, qword ptr [rsp + 0xf0]
// asm:   0x593258d: mov qword ptr [rbx + 0x38], rax
// asm:   0x5932591: jmp 0x593247b

GameManagers_ChatManager_ChatDisplayLine_o *
GameManagers_ChatManager__GetDisplayLine
          (GameManagers_ChatManager_ChatDisplayLine_o *__return_storage_ptr__,int32_t index,MethodInfo *method
          )

{
  bool bVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  Settings_UISettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *pSVar5;
  GameManagers_ChatManager_ChatDisplayLine_o value;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  GameManagers_ChatManager_c *method_01;
  Il2CppClass *klass;
  GameManagers_ChatManager_ChatDisplayLine_o local_d8;
  GameManagers_ChatManager_ChatDisplayLine_o local_98;
  
  if (Il2CppMethodInitialized_075457cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075457cb = '\x01';
  }
  local_d8.fields.SenderID = 0;
  local_d8.fields._52_4_ = 0;
  local_d8.fields.LineID = 0;
  local_d8.fields.SenderName = (System_String_o *)0x0;
  local_d8.fields.BodyText = (System_String_o *)0x0;
  local_d8.fields.TimeText = (System_String_o *)0x0;
  local_d8.fields.IdText = (System_String_o *)0x0;
  local_d8.fields.PlainText = (System_String_o *)0x0;
  local_d8.fields.UsePlayerStyle = false;
  local_d8.fields._9_7_ = 0;
  if (index < 0) {
label_05932423:
    GameManagers_ChatManager_ChatDisplayLine__Plain
              (&local_98,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),0,(MethodInfo *)0x0);
    local_d8.fields.PlainText._0_4_ = local_98.fields.PlainText._0_4_;
    local_d8.fields.PlainText._4_4_ = local_98.fields.PlainText._4_4_;
    local_d8.fields._8_4_ = local_98.fields._8_4_;
    local_d8.fields._12_4_ = local_98.fields._12_4_;
    local_d8.fields.TimeText._0_4_ = local_98.fields.TimeText._0_4_;
    local_d8.fields.TimeText._4_4_ = local_98.fields.TimeText._4_4_;
    local_d8.fields.IdText._0_4_ = local_98.fields.IdText._0_4_;
    local_d8.fields.IdText._4_4_ = local_98.fields.IdText._4_4_;
    local_d8.fields.SenderName._0_4_ = local_98.fields.SenderName._0_4_;
    local_d8.fields.SenderName._4_4_ = local_98.fields.SenderName._4_4_;
    local_d8.fields.BodyText._0_4_ = local_98.fields.BodyText._0_4_;
    local_d8.fields.BodyText._4_4_ = local_98.fields.BodyText._4_4_;
    local_d8.fields.SenderID = local_98.fields.SenderID;
    local_d8.fields._52_4_ = local_98.fields._52_4_;
    local_d8.fields.LineID._0_4_ = (undefined4)local_98.fields.LineID;
    local_d8.fields.LineID._4_4_ = local_98.fields.LineID._4_4_;
    goto label_0593246c;
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
  if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) goto label_0593261a;
  if ((pSVar2->fields)._size <= index) goto label_05932423;
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar3 == (Settings_UISettings_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).ShowChatTimestamp, pSVar4 == (Settings_BoolSetting_o *)0x0))
  goto label_0593261a;
  bVar1 = (pSVar4->fields)._value;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    if (TypeInfo_GameManagers_ChatManager->static_fields->_displayLineCacheShowsTimestamps == bVar1)
    goto label_059323fa;
label_059324a8:
    method_01 = TypeInfo_GameManagers_ChatManager;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__InvalidateDisplayLines((MethodInfo *)method_01);
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
    TypeInfo_GameManagers_ChatManager->static_fields->_displayLineCacheShowsTimestamps = bVar1;
    if ((((GameManagers_ChatManager_c *)klass)->_2).cctor_finished_or_no_cctor != 0) goto label_05932407;
label_059324d9:
    il2cpp_codegen_runtime_class_init(klass);
    pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->DisplayLineCache;
  }
  else {
    if (TypeInfo_GameManagers_ChatManager->static_fields->_displayLineCacheShowsTimestamps != bVar1)
    goto label_059324a8;
label_059323fa:
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) goto label_059324d9;
label_05932407:
    pSVar5 = ((GameManagers_ChatManager_c *)klass)->static_fields->DisplayLineCache;
  }
  if (pSVar5 != (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0) {
    System_Collections_Generic_List_ChatManager_ChatDisplayLine___get_Item
              (&local_98,pSVar5,index,
               (MethodInfo_3A6CD10 *)
               MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_get_Item);
    if ((System_String_o *)CONCAT44(local_98.fields.PlainText._4_4_,local_98.fields.PlainText._0_4_) !=
        (System_String_o *)0x0) {
      (__return_storage_ptr__->fields).PlainText =
           (System_String_o *)CONCAT44(local_98.fields.PlainText._4_4_,local_98.fields.PlainText._0_4_);
      *(ulong *)&(__return_storage_ptr__->fields).UsePlayerStyle =
           CONCAT44(local_98.fields._12_4_,local_98.fields._8_4_);
      (__return_storage_ptr__->fields).TimeText =
           (System_String_o *)CONCAT44(local_98.fields.TimeText._4_4_,local_98.fields.TimeText._0_4_);
      (__return_storage_ptr__->fields).IdText =
           (System_String_o *)CONCAT44(local_98.fields.IdText._4_4_,local_98.fields.IdText._0_4_);
      (__return_storage_ptr__->fields).SenderName =
           (System_String_o *)CONCAT44(local_98.fields.SenderName._4_4_,local_98.fields.SenderName._0_4_);
      (__return_storage_ptr__->fields).BodyText =
           (System_String_o *)CONCAT44(local_98.fields.BodyText._4_4_,local_98.fields.BodyText._0_4_);
      *(ulong *)&(__return_storage_ptr__->fields).SenderID =
           CONCAT44(local_98.fields._52_4_,local_98.fields.SenderID);
      (__return_storage_ptr__->fields).LineID =
           CONCAT44(local_98.fields.LineID._4_4_,(undefined4)local_98.fields.LineID);
      return __return_storage_ptr__;
    }
    method_00 = extraout_RDX;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      method_00 = extraout_RDX_00;
    }
    GameManagers_ChatManager__BuildDisplayLine(&local_d8,index,method_00);
    pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->DisplayLineCache;
    if (pSVar5 != (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0) {
      value.fields.UsePlayerStyle = local_d8.fields.UsePlayerStyle;
      value.fields._9_7_ = local_d8.fields._9_7_;
      value.fields.PlainText = local_d8.fields.PlainText;
      value.fields.TimeText = local_d8.fields.TimeText;
      value.fields.IdText = local_d8.fields.IdText;
      value.fields.SenderName = local_d8.fields.SenderName;
      value.fields.BodyText = local_d8.fields.BodyText;
      value.fields.SenderID = local_d8.fields.SenderID;
      value.fields._52_4_ = local_d8.fields._52_4_;
      value.fields.LineID = local_d8.fields.LineID;
      System_Collections_Generic_List_ChatManager_ChatDisplayLine___set_Item
                (pSVar5,index,value,
                 (MethodInfo_3A6CD80 *)
                 MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_set_Item);
label_0593246c:
      (__return_storage_ptr__->fields).SenderID = local_d8.fields.SenderID;
      *(undefined4 *)&(__return_storage_ptr__->fields).field_0x34 = local_d8.fields._52_4_;
      *(undefined4 *)&(__return_storage_ptr__->fields).LineID = (undefined4)local_d8.fields.LineID;
      *(undefined4 *)((long)&(__return_storage_ptr__->fields).LineID + 4) = local_d8.fields.LineID._4_4_;
      *(undefined4 *)&(__return_storage_ptr__->fields).SenderName = local_d8.fields.SenderName._0_4_;
      *(undefined4 *)((long)&(__return_storage_ptr__->fields).SenderName + 4) =
           local_d8.fields.SenderName._4_4_;
      *(undefined4 *)&(__return_storage_ptr__->fields).BodyText = local_d8.fields.BodyText._0_4_;
      *(undefined4 *)((long)&(__return_storage_ptr__->fields).BodyText + 4) = local_d8.fields.BodyText._4_4_;
      *(undefined4 *)&(__return_storage_ptr__->fields).TimeText = local_d8.fields.TimeText._0_4_;
      *(undefined4 *)((long)&(__return_storage_ptr__->fields).TimeText + 4) = local_d8.fields.TimeText._4_4_;
      *(undefined4 *)&(__return_storage_ptr__->fields).IdText = local_d8.fields.IdText._0_4_;
      *(undefined4 *)((long)&(__return_storage_ptr__->fields).IdText + 4) = local_d8.fields.IdText._4_4_;
      *(undefined4 *)&(__return_storage_ptr__->fields).PlainText = local_d8.fields.PlainText._0_4_;
      *(undefined4 *)((long)&(__return_storage_ptr__->fields).PlainText + 4) = local_d8.fields.PlainText._4_4_
      ;
      (__return_storage_ptr__->fields).UsePlayerStyle = local_d8.fields.UsePlayerStyle;
      *(int3 *)&(__return_storage_ptr__->fields).field_0x9 = local_d8.fields._9_3_;
      *(undefined4 *)&(__return_storage_ptr__->fields).field_0xc = local_d8.fields._12_4_;
      return __return_storage_ptr__;
    }
  }
label_0593261a:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$InvalidateDisplayLines
// il2cpp: void GameManagers_ChatManager__InvalidateDisplayLines (const MethodInfo* method);
// 0x5932620
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5932680: xorps xmm0, xmm0
// asm:   0x5932683: movaps xmmword ptr [rsp + 0x70], xmm0
// asm:   0x5932688: movaps xmmword ptr [rsp + 0x60], xmm0
// asm:   0x593268d: movaps xmmword ptr [rsp + 0x50], xmm0
// asm:   0x5932692: movaps xmmword ptr [rsp + 0x40], xmm0

void GameManagers_ChatManager__InvalidateDisplayLines(MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *__this;
  
  if (Il2CppMethodInitialized_075457cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_set_Item);
    Il2CppMethodInitialized_075457cc = '\x01';
  }
  index = 0;
  while( true ) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    __this = TypeInfo_GameManagers_ChatManager->static_fields->DisplayLineCache;
    if (__this == (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0) break;
    if ((__this->fields)._size <= index) {
      return;
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      __this = TypeInfo_GameManagers_ChatManager->static_fields->DisplayLineCache;
      if (__this == (System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *)0x0) break;
    }
    System_Collections_Generic_List_ChatManager_ChatDisplayLine___set_Item
              (__this,index,(GameManagers_ChatManager_ChatDisplayLine_o)ZEXT864(0),
               (MethodInfo_3A6CD80 *)
               MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_set_Item);
    index = index + 1;
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$BuildDisplayLine
// il2cpp: GameManagers_ChatManager_ChatDisplayLine_o GameManagers_ChatManager__BuildDisplayLine (int32_t index, const MethodInfo* method);
// 0x5932760

GameManagers_ChatManager_ChatDisplayLine_o *
GameManagers_ChatManager__BuildDisplayLine
          (GameManagers_ChatManager_ChatDisplayLine_o *__return_storage_ptr__,int32_t index,MethodInfo *method
          )

{
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_List_DateTime__o *pSVar1;
  System_Collections_Generic_List_bool__o *pSVar2;
  System_Collections_Generic_List_long__o *__this_00;
  bool bVar3;
  System_String_o *pSVar4;
  System_DateTime_o SVar5;
  int64_t lineID;
  Il2CppObject *arg0;
  MethodInfo *in_RCX;
  System_String_o **method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *pSVar6;
  System_Collections_Generic_List_int__o *__this_01;
  int32_t local_cc;
  System_String_o *local_c8;
  undefined8 uStack_c0;
  System_String_o *local_b8;
  System_String_o *pSStack_b0;
  System_String_o *local_a8;
  System_String_o *pSStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  System_String_o *local_80;
  System_String_o *local_78;
  undefined1 local_70 [16];
  System_String_o *local_60;
  System_String_o *pSStack_58;
  System_String_o *local_50;
  System_String_o *pSStack_48;
  int32_t local_40;
  undefined4 uStack_3c;
  int64_t iStack_38;
  
  if (Il2CppMethodInitialized_075457cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_long_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_DateTime_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"[{0}] ");
    Il2CppMethodInitialized_075457cd = '\x01';
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (System_String_o *)0x0;
  pSStack_a0 = (System_String_o *)0x0;
  local_b8 = (System_String_o *)0x0;
  pSStack_b0 = (System_String_o *)0x0;
  local_c8 = (System_String_o *)0x0;
  uStack_c0 = 0;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar4 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this,index,
                        (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->Timestamps;
    if (pSVar1 != (System_Collections_Generic_List_DateTime__o *)0x0) {
      SVar5 = System_Collections_Generic_List_DateTime___get_Item
                        (pSVar1,index,
                         (MethodInfo_51F5570 *)MethodInfo_System_Collections_Generic_List_DateTime_get_Item);
      pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags;
      if (pSVar2 != (System_Collections_Generic_List_bool__o *)0x0) {
        bVar3 = System_Collections_Generic_List_bool___get_Item
                          (pSVar2,index,
                           (MethodInfo_51DBE20 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
        pSVar4 = GameManagers_ChatManager__GetFormattedMessage(pSVar4,SVar5,bVar3,in_RCX);
        __this_00 = TypeInfo_GameManagers_ChatManager->static_fields->LineIDs;
        if (__this_00 != (System_Collections_Generic_List_long__o *)0x0) {
          lineID = System_Collections_Generic_List_long___get_Item
                             (__this_00,index,
                              (MethodInfo_391CA10 *)MethodInfo_System_Collections_Generic_List_long_get_Item);
          pSVar6 = TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData;
          if (pSVar6 != (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0) {
            if (index < (pSVar6->fields)._size) {
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                pSVar6 = TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData;
                if (pSVar6 == (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0)
                goto label_05932c28;
              }
              System_Collections_Generic_List_ChatManager_ChatPlayerLineData___get_Item
                        ((GameManagers_ChatManager_ChatPlayerLineData_o *)local_70,pSVar6,index,
                         (MethodInfo_3A707E0 *)
                         MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_get_Item);
              if (((byte)local_70[0] & 1) != 0) {
                if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                }
                pSVar6 = TypeInfo_GameManagers_ChatManager->static_fields->PlayerLineData;
                if (pSVar6 != (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0) {
                  System_Collections_Generic_List_ChatManager_ChatPlayerLineData___get_Item
                            ((GameManagers_ChatManager_ChatPlayerLineData_o *)local_70,pSVar6,index,
                             (MethodInfo_3A707E0 *)
                             MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_get_Item
                            );
                  __this_01 = TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
                  if (__this_01 != (System_Collections_Generic_List_int__o *)0x0) {
                    local_80 = (System_String_o *)local_70._8_8_;
                    local_78 = local_60;
                    local_cc = -1;
                    if (index < (__this_01->fields)._size) {
                      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                        __this_01 = TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
                        if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) goto label_05932c28;
                      }
                      local_cc = System_Collections_Generic_List_int___get_Item
                                           (__this_01,index,
                                            (MethodInfo_39167D0 *)
                                            MethodInfo_System_Collections_Generic_List_int_get_Item);
                    }
                    pSStack_a0 = (System_String_o *)0x0;
                    local_98 = 0;
                    pSStack_b0 = (System_String_o *)0x0;
                    local_a8 = (System_String_o *)0x0;
                    uStack_c0 = 0;
                    local_b8 = (System_String_o *)0x0;
                    uStack_90 = 0;
                    local_c8 = pSVar4;
                    Il2CppCodeGenWriteBarrier(&local_c8);
                    uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
                    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                    }
                    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->Timestamps;
                    if (pSVar1 != (System_Collections_Generic_List_DateTime__o *)0x0) {
                      SVar5 = System_Collections_Generic_List_DateTime___get_Item
                                        (pSVar1,index,
                                         (MethodInfo_51F5570 *)
                                         MethodInfo_System_Collections_Generic_List_DateTime_get_Item);
                      pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags;
                      if (pSVar2 != (System_Collections_Generic_List_bool__o *)0x0) {
                        bVar3 = System_Collections_Generic_List_bool___get_Item
                                          (pSVar2,index,
                                           (MethodInfo_51DBE20 *)
                                           MethodInfo_System_Collections_Generic_List_bool_get_Item);
                        local_b8 = GameManagers_ChatManager__GetTimestampPrefix(SVar5,bVar3,method_01);
                        Il2CppCodeGenWriteBarrier(&local_b8);
                        local_70._0_4_ = local_cc;
                        arg0 = il2cpp_vm_Object_Box(g_data_07556710,local_70);
                        method_00 = &"[{0}] ";
                        pSVar4 = System_String__Format("[{0}] ",arg0,(MethodInfo *)0x0);
                        pSStack_b0 = GameManagers_ChatManager__GetColorString
                                               (pSVar4,1,false,(MethodInfo *)method_00);
                        Il2CppCodeGenWriteBarrier(&pSStack_b0);
                        local_a8 = local_80;
                        if (local_80 == (System_String_o *)0x0) {
                          local_a8 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
                        }
                        Il2CppCodeGenWriteBarrier(&local_a8);
                        pSVar4 = local_78;
                        if (local_78 == (System_String_o *)0x0) {
                          pSVar4 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
                        }
                        pSStack_a0 = System_String__Concat_52f0320
                                               (": ",pSVar4,(MethodInfo *)0x0);
                        Il2CppCodeGenWriteBarrier(&pSStack_a0);
                        (__return_storage_ptr__->fields).SenderName = local_a8;
                        (__return_storage_ptr__->fields).BodyText = pSStack_a0;
                        (__return_storage_ptr__->fields).TimeText = local_b8;
                        (__return_storage_ptr__->fields).IdText = pSStack_b0;
                        (__return_storage_ptr__->fields).PlainText = local_c8;
                        *(undefined8 *)&(__return_storage_ptr__->fields).UsePlayerStyle = uStack_c0;
                        (__return_storage_ptr__->fields).SenderID = local_cc;
                        *(undefined4 *)&(__return_storage_ptr__->fields).field_0x34 = local_98._4_4_;
                        (__return_storage_ptr__->fields).LineID = lineID;
                        return __return_storage_ptr__;
                      }
                    }
                  }
                }
                goto label_05932c28;
              }
            }
            GameManagers_ChatManager_ChatDisplayLine__Plain
                      ((GameManagers_ChatManager_ChatDisplayLine_o *)local_70,pSVar4,lineID,(MethodInfo *)0x0)
            ;
            (__return_storage_ptr__->fields).SenderID = local_40;
            *(undefined4 *)&(__return_storage_ptr__->fields).field_0x34 = uStack_3c;
            (__return_storage_ptr__->fields).LineID = iStack_38;
            (__return_storage_ptr__->fields).SenderName = local_50;
            (__return_storage_ptr__->fields).BodyText = pSStack_48;
            (__return_storage_ptr__->fields).TimeText = local_60;
            (__return_storage_ptr__->fields).IdText = pSStack_58;
            (__return_storage_ptr__->fields).PlainText =
                 (System_String_o *)CONCAT44(local_70._4_4_,local_70._0_4_);
            *(undefined8 *)&(__return_storage_ptr__->fields).UsePlayerStyle = local_70._8_8_;
            return __return_storage_ptr__;
          }
        }
      }
    }
  }
label_05932c28:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$GetTimestampPrefix
// il2cpp: System_String_o* GameManagers_ChatManager__GetTimestampPrefix (System_DateTime_o timestamp, bool isSuggestion, const MethodInfo* method);
// 0x59320b0

System_String_o *
GameManagers_ChatManager__GetTimestampPrefix(System_DateTime_o timestamp,bool isSuggestion,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  System_Text_StringBuilder_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **method_00;
  int32_t local_2c;
  System_DateTime_o local_28;
  System_DateTime_o local_20;
  
  local_20 = (System_DateTime_o)(System_DateTime_o)timestamp.fields._dateData;
  if (Il2CppMethodInitialized_075457ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"] ");
    il2cpp_codegen_initialize_runtime_metadata(&"D2");
    Il2CppMethodInitialized_075457ce = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).ShowChatTimestamp, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    if (((pSVar2->fields)._value == false) || (isSuggestion)) {
      return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
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
      local_28 = System_DateTime__ToLocalTime(&local_20,(MethodInfo *)0x0);
      pSVar3 = TypeInfo_GameManagers_ChatManager->static_fields->TimeBuilder;
      if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
        pSVar3 = System_Text_StringBuilder__Append_530f6a0(pSVar3,0x5b,(MethodInfo *)0x0);
        local_2c = System_DateTime__get_Hour(&local_28,(MethodInfo *)0x0);
        pSVar4 = System_Int32__ToString_54b7460(&local_2c,"D2",(MethodInfo *)0x0);
        if ((pSVar3 != (System_Text_StringBuilder_o *)0x0) &&
           (pSVar3 = System_Text_StringBuilder__Append_530ed80(pSVar3,pSVar4,(MethodInfo *)0x0),
           pSVar3 != (System_Text_StringBuilder_o *)0x0)) {
          pSVar3 = System_Text_StringBuilder__Append_530f6a0(pSVar3,0x3a,(MethodInfo *)0x0);
          local_2c = System_DateTime__get_Minute(&local_28,(MethodInfo *)0x0);
          pSVar4 = System_Int32__ToString_54b7460(&local_2c,"D2",(MethodInfo *)0x0);
          if ((pSVar3 != (System_Text_StringBuilder_o *)0x0) &&
             (pSVar3 = System_Text_StringBuilder__Append_530ed80(pSVar3,pSVar4,(MethodInfo *)0x0),
             pSVar3 != (System_Text_StringBuilder_o *)0x0)) {
            method_00 = &"] ";
            System_Text_StringBuilder__Append_530ed80(pSVar3,"] ",(MethodInfo *)0x0);
            pSVar3 = TypeInfo_GameManagers_ChatManager->static_fields->TimeBuilder;
            if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
              pSVar4 = (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                                 (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
              pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,3,false,(MethodInfo *)method_00);
              return pSVar4;
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
// 0x5932c30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5932d62: add rsp, 8

void GameManagers_ChatManager__AddFeed(System_String_o *line,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  System_String_array *pSVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  int32_t iVar8;
  UI_FeedPanel_o *__this;
  System_String_o *pSVar9;
  Il2CppClass *klass;
  GameManagers_ChatManager_c *method_00;
  MethodInfo *method_01;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (Il2CppMethodInitialized_075457cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075457cf = '\x01';
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) goto label_05932d50;
label_05932c5e:
    bVar7 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)TypeInfo_GameManagers_ChatManager);
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor != 0) goto label_05932c5e;
label_05932d50:
    method_00 = TypeInfo_GameManagers_ChatManager;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    bVar7 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)method_00);
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (bVar7) {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
    }
    __this = GameManagers_ChatManager__GetFeedPanel((MethodInfo *)klass);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar7) {
      if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
      }
      pSVar9 = Anticheat_ChatFilter__FilterSizeTag(line,(MethodInfo *)0x0);
      pSVar9 = Anticheat_ChatFilter__FilterBadWords(pSVar9,(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
      method_01 = (MethodInfo *)TypeInfo_GameManagers_ChatManager->static_fields->FeedLines;
      if (method_01 != (MethodInfo *)0x0) {
        piVar1 = (int32_t *)((long)&method_01->name + 4);
        *piVar1 = *piVar1 + 1;
        pSVar4 = ((System_Collections_Generic_List_string__Fields *)&method_01->invoker_method)->_items;
        if (pSVar4 != (System_String_array *)0x0) {
          uVar2 = *(uint *)&method_01->name;
          if (uVar2 < (uint)pSVar4->max_length) {
            *(uint *)&method_01->name = uVar2 + 1;
            method_01 = (MethodInfo *)(pSVar4->m_Items + (int)uVar2);
            pSVar4->m_Items[(int)uVar2] = pSVar9;
            Il2CppCodeGenWriteBarrier((void **)method_01);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)method_01,(Il2CppObject *)pSVar9,
                       (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          }
          pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->FeedLines;
          if (pSVar5 != (System_Collections_Generic_List_string__o *)0x0) {
            iVar3 = (pSVar5->fields)._size;
            iVar8 = GameManagers_ChatManager__get_MaxLines(method_01);
            if (iVar8 < iVar3) {
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->FeedLines;
              if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) goto label_05932e8b;
              System_Collections_Generic_List_object___RemoveAt
                        ((System_Collections_Generic_List_object__o *)pSVar5,0,
                         (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_string_RemoveAt);
            }
            if (__this != (UI_FeedPanel_o *)0x0) {
              UI_FeedPanel__AddLine(__this,pSVar9,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
label_05932e8b:
      ThrowNullReferenceException();
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__AddLine
              (line,0,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
               in_stack_ffffffffffffffc8);
  }
  return;
}


// GameManagers.ChatManager$$IsTalking
// il2cpp: void GameManagers_ChatManager__IsTalking (Photon_Realtime_Player_o* player, bool isSpeaking, const MethodInfo* method);
// 0x5932e90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5932ebe: jmp 0x5932f44

void GameManagers_ChatManager__IsTalking(Photon_Realtime_Player_o *player,bool isSpeaking,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  UI_VoiceChatPanel_o *__this;
  Il2CppClass *pIVar3;
  
  if (Il2CppMethodInitialized_075457d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075457d0 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)pIVar3;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar3);
    bVar2 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)pIVar3);
    pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    bVar2 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)pIVar3);
    pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)pIVar3;
  if (bVar2) {
    if ((pIVar3->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar3);
    }
    __this = GameManagers_ChatManager__GetVoiceChatPanel((MethodInfo *)pIVar3);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if (isSpeaking) {
        if (__this != (UI_VoiceChatPanel_o *)0x0) {
          UI_VoiceChatPanel__AddPlayer(__this,player,(MethodInfo *)0x0);
          return;
        }
      }
      else if (__this != (UI_VoiceChatPanel_o *)0x0) {
        UI_VoiceChatPanel__RemovePlayer(__this,player,(MethodInfo *)0x0);
        return;
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// GameManagers.ChatManager$$ClearTalking
// il2cpp: void GameManagers_ChatManager__ClearTalking (int32_t actorNumber, const MethodInfo* method);
// 0x5933040
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593306a: jmp 0x5933107

void GameManagers_ChatManager__ClearTalking(int32_t actorNumber,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  UI_VoiceChatPanel_o *__this;
  Il2CppClass *pIVar3;
  
  if (Il2CppMethodInitialized_075457d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075457d1 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)pIVar3;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar3);
    bVar2 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)pIVar3);
    pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    bVar2 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)pIVar3);
    pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)pIVar3;
  if (bVar2) {
    if ((pIVar3->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar3);
    }
    __this = GameManagers_ChatManager__GetVoiceChatPanel((MethodInfo *)pIVar3);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (__this == (UI_VoiceChatPanel_o *)0x0) {
        ThrowNullReferenceException();
      }
      UI_VoiceChatPanel__ClearPlayer(__this,actorNumber,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// GameManagers.ChatManager$$LoadTheme
// il2cpp: void GameManagers_ChatManager__LoadTheme (const MethodInfo* method);
// 0x592f710
// eh: try 0x592f8aa..0x592fa37 -> pad 0x592fa48 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x592fa64..0x592fa69 -> pad 0x592fa8a cleanup
// eh: try 0x592fa8d..0x592fa97 -> pad 0x592fa9f catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592f89e: nop 
// asm:   0x592fa3c: jmp 0x592fa4c
// asm:   0x592fa3e: jmp 0x592fa4c
// asm:   0x592fa40: jmp 0x592fa4c
// asm:   0x592fa42: jmp 0x592fa4c
// asm:   0x592fa44: jmp 0x592fa4c
// asm:   0x592fa46: jmp 0x592fa4c
// asm:   0x592fa48: jmp 0x592fa4c
// asm:   0x592fa4a: jmp 0x592fa4c
// asm:   0x592fa4c: mov rbx, rax
// asm:   0x592fa4f: cmp edx, 1
// asm:   0x592fa52: jne 0x592fa8d
// asm:   0x592fa54: mov rdi, rbx
// asm:   0x592fa57: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x592fa5c: mov rbx, qword ptr [rax]
// asm:   0x592fa5f: mov qword ptr [rsp + 0x40], rbx
// asm:   0x592fa64: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x592fa69: lea rax, [rip + 0x195deb8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ChatTextColor_Dispose
// asm:   0x592fa70: mov rsi, qword ptr [rax]
// asm:   0x592fa73: lea rdi, [rsp + 0x10]
// asm:   0x592fa78: call 0x4d3c9b0  ; System_Collections_Generic_List_Enumerator_Int32Enum___Dispose()
// asm:   0x592fa7d: test rbx, rbx
// asm:   0x592fa80: je 0x592fa23
// asm:   0x592fa82: mov rdi, rbx
// asm:   0x592fa85: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x592fa8a: mov rbx, rax
// asm:   0x592fa8d: lea rdi, [rsp + 0x40]
// asm:   0x592fa92: call 0x2fd2bc0  ; il2cpp_runtime_helper_02fd2bc0()
// asm:   0x592fa97: mov rdi, rbx
// asm:   0x592fa9a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x592fa9f: mov rdi, rax
// asm:   0x592faa2: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_ChatManager__LoadTheme(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_ChatTextColor__string__o *pSVar1;
  uint key;
  bool bVar2;
  System_Collections_Generic_List_T__o *__this;
  System_String_o *pSVar3;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  GameManagers_ChatManager_c *method_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar4;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined1 auStack_98 [16];
  Il2CppObject *pIStack_88;
  undefined1 auStack_80 [8];
  void *pvStack_78;
  uint uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  if (Il2CppMethodInitialized_075457d2 == '\0') {
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
    Il2CppMethodInitialized_075457d2 = '\x01';
  }
  method_00 = TypeInfo_GameManagers_ChatManager;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__InvalidateDisplayLines((MethodInfo *)method_00);
  pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->ColorTags;
  if (pSVar1 != (System_Collections_Generic_Dictionary_ChatTextColor__string__o *)0x0) {
    System_Collections_Generic_Dictionary_Int32Enum__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
               (MethodInfo_4A55190 *)
               MethodInfo_System_Collections_Generic_Dictionary_ChatTextColor_string_Clear);
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    __this = Utility_Util__EnumToList_Int32Enum_
                       ((MethodInfo_377C780 *)MethodInfo_Utility_Util_EnumToList_ChatTextColor);
    if (__this != (System_Collections_Generic_List_T__o *)0x0) {
      System_Collections_Generic_List_Int32Enum___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_80,__this,
                 (MethodInfo_391A9A0 *)MethodInfo_System_Collections_Generic_List_ChatTextColor_GetEnumerator)
      ;
      pIStack_88 = (Il2CppObject *)(ulong)uStack_70;
      auStack_98._0_8_ = auStack_80;
      auStack_98._8_8_ = pvStack_78;
      uStack_68 = 0;
      puStack_60 = auStack_98;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)auStack_98,
                           (MethodInfo_4C3C9C0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_ChatTextColor_MoveNext);
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator_Int32Enum___Dispose
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_98,
                     (MethodInfo_4C3C9B0 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_ChatTextColor_Dispose);
          return;
        }
        key = (uint)pIStack_88;
        auStack_80 = (undefined1  [8])TypeInfo_GameManagers_ChatTextColor;
        pvStack_78 = (void *)0xffffffffffffffff;
        uStack_70 = (uint)pIStack_88;
        pSVar3 = System_Enum__ToString((System_Enum_o *)auStack_80,(MethodInfo *)0x0);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        UVar4 = UI_UIManager__GetThemeColor
                          ("ChatPanel","TextColor",pSVar3,"DefaultPanel",
                           (MethodInfo *)0x0);
        auStack_58._8_4_ = extraout_XMM0_Dc;
        auStack_58._0_8_ = UVar4.fields._0_8_;
        auStack_58._12_4_ = extraout_XMM0_Dd;
        auStack_48._8_4_ = in_XMM1_Dc;
        auStack_48._0_8_ = UVar4.fields._8_8_;
        auStack_48._12_4_ = in_XMM1_Dd;
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->ColorTags;
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        iStack_9c = (int)((float)auStack_58._0_4_ * 255.0);
        arg0 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_9c);
        iStack_a0 = (int)((float)auStack_58._4_4_ * 255.0);
        arg1 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_a0);
        iStack_a4 = (int)((float)auStack_48._0_4_ * 255.0);
        arg2 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_a4);
        pSVar3 = System_String__Format_5302ca0("{0:X2}{1:X2}{2:X2}",arg0,arg1,arg2,(MethodInfo *)0x0);
        if (pSVar1 == (System_Collections_Generic_Dictionary_ChatTextColor__string__o *)0x0) break;
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,key,(Il2CppObject *)pSVar3,
                   (MethodInfo_4A54FE0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ChatTextColor_string_Add);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$HandleInput
// il2cpp: void GameManagers_ChatManager__HandleInput (System_String_o* input, const MethodInfo* method);
// 0x5933120

void GameManagers_ChatManager__HandleInput(System_String_o *input,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this;
  bool bVar1;
  Il2CppObject *obj;
  char *pcVar2;
  System_String_o *pSVar3;
  System_String_array *args;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_075457d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_075457d3 = '\x01';
  }
  bVar1 = System_String__op_Equality
                    (input,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    obj = CustomLogic_CustomLogicEvaluator__OnChatInput(__this,input,(MethodInfo *)0x0);
    if (((obj != (Il2CppObject *)0x0) && (obj->klass == g_data_075566f0)) &&
       (pcVar2 = il2cpp_vm_Object_Unbox(obj), *pcVar2 == '\0')) {
      return;
    }
    if (input != (System_String_o *)0x0) {
      pMVar4 = (MethodInfo *)"/";
      bVar1 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
      if (!bVar1) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar3 = GameManagers_ChatManager__ProcessMentions(input,pMVar4);
        GameManagers_ChatManager__SendPlayerChatAll(pSVar3,pMVar4);
        return;
      }
      if ((input->fields)._stringLength != 1) {
        pMVar4 = (MethodInfo *)0x1;
        pSVar3 = System_String__Substring(input,1,(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        args = GameManagers_ChatManager__ParseCommandArgs(pSVar3,pMVar4);
        if (args == (System_String_array *)0x0) goto label_05933297;
        if (args->max_length != 0) {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__HandleCommand(args,pMVar4);
          return;
        }
      }
      return;
    }
  }
label_05933297:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$ProcessMentions
// il2cpp: System_String_o* GameManagers_ChatManager__ProcessMentions (System_String_o* message, const MethodInfo* method);
// 0x59337a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593398f: jmp 0x5933d19
// asm:   0x5933cb8: jmp 0x5933a4f

System_String_o * GameManagers_ChatManager__ProcessMentions(System_String_o *message,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  int32_t startIndex;
  int iVar3;
  GameManagers_ChatManager___c__DisplayClass122_0_o *__this;
  System_String_o *pSVar4;
  Photon_Realtime_Player_array *source;
  System_Func_Player__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_01;
  Photon_Realtime_Player_o *player;
  System_Text_StringBuilder_o *pSVar5;
  System_String_o *__this_02;
  System_String_o **method_00;
  
  if (Il2CppMethodInitialized_075457d4 == '\0') {
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
              (&MethodInfo_GameManagers_ChatManager_c__DisplayClass122_0_ProcessMentions_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_c__DisplayClass122_0);
    il2cpp_codegen_initialize_runtime_metadata(&"@");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075457d4 = '\x01';
  }
  if (message != (System_String_o *)0x0) {
    startIndex = System_String__IndexOf(message,0x40,(MethodInfo *)0x0);
    if (startIndex == -1) {
      return message;
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
    if (pSVar5 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Clear(pSVar5,(MethodInfo *)0x0);
      pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
      if (pSVar5 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_530ed80(pSVar5,message,(MethodInfo *)0x0);
        do {
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c__DisplayClass122_0);
          GameManagers_ChatManager___c__DisplayClass122_0___ctor(__this,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
          if ((pSVar5 == (System_Text_StringBuilder_o *)0x0) ||
             (pSVar4 = (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                                 (pSVar5,(pSVar5->klass->vtable)._3_ToString.method),
             pSVar4 == (System_String_o *)0x0)) goto label_05933d19;
          iVar3 = System_String__IndexOf_53072f0(pSVar4,0x20,startIndex,(MethodInfo *)0x0);
          if (iVar3 == -1) {
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
            if (pSVar5 == (System_Text_StringBuilder_o *)0x0) goto label_05933d19;
            iVar3 = System_Text_StringBuilder__get_Length(pSVar5,(MethodInfo *)0x0);
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) goto label_059339e3;
label_0593397c:
            pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
          }
          else {
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor != 0) goto label_0593397c;
label_059339e3:
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
          }
          if (pSVar5 == (System_Text_StringBuilder_o *)0x0) goto label_05933d19;
          pSVar4 = System_Text_StringBuilder__ToString_530e100
                             (pSVar5,startIndex + 1,(iVar3 - startIndex) + -1,(MethodInfo *)0x0);
          if (__this == (GameManagers_ChatManager___c__DisplayClass122_0_o *)0x0) goto label_05933d19;
          (__this->fields).mention = pSVar4;
          Il2CppCodeGenWriteBarrier(&(__this->fields).mention);
          bVar2 = System_String__IsNullOrWhiteSpace((__this->fields).mention,(MethodInfo *)0x0);
          if (bVar2) {
            uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
joined_r0x05933cb2:
            if (uVar1 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
            if ((pSVar5 == (System_Text_StringBuilder_o *)0x0) ||
               (pSVar4 = (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                                   (pSVar5,(pSVar5->klass->vtable)._3_ToString.method),
               pSVar4 == (System_String_o *)0x0)) goto label_05933d19;
            startIndex = System_String__IndexOf_53072f0(pSVar4,0x40,startIndex + 1,(MethodInfo *)0x0);
          }
          else {
            if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
            }
            source = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
            __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Player_bool);
            System_Func_object__bool____ctor
                      ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_GameManagers_ChatManager_c__DisplayClass122_0_ProcessMentions_b__0
                       ,(MethodInfo_4F19300 *)0x0);
            source_00 = System_Linq_Enumerable__Where_object_
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                   (System_Func_TSource__bool__o *)__this_00,
                                   (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_Player);
            __this_01 = System_Linq_Enumerable__ToList_object_
                                  (source_00,
                                   (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_Player);
            if (__this_01 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_05933d19;
            if ((__this_01->fields)._size != 1) {
              uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
              goto joined_r0x05933cb2;
            }
            player = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_01,0,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_Player_get_Item);
            if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
            }
            pSVar4 = PhotonExtensions__GetStringProperty
                               (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                                "",(MethodInfo *)0x0);
            if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
            }
            pSVar4 = Anticheat_ChatFilter__FilterSizeTag(pSVar4,(MethodInfo *)0x0);
            method_00 = &"@";
            pSVar4 = System_String__Concat_52f0320("@",pSVar4,(MethodInfo *)0x0);
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,2,false,(MethodInfo *)method_00);
            pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
            if ((pSVar5 == (System_Text_StringBuilder_o *)0x0) ||
               (pSVar5 = System_Text_StringBuilder__Remove
                                   (pSVar5,startIndex,iVar3 - startIndex,(MethodInfo *)0x0),
               pSVar5 == (System_Text_StringBuilder_o *)0x0)) goto label_05933d19;
            System_Text_StringBuilder__Insert(pSVar5,startIndex,pSVar4,(MethodInfo *)0x0);
            pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
            if ((pSVar5 == (System_Text_StringBuilder_o *)0x0) ||
               ((__this_02 = (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                                       (pSVar5,(pSVar5->klass->vtable)._3_ToString.method),
                pSVar4 == (System_String_o *)0x0 || (__this_02 == (System_String_o *)0x0))))
            goto label_05933d19;
            startIndex = System_String__IndexOf_53072f0
                                   (__this_02,0x40,startIndex + (pSVar4->fields)._stringLength,
                                    (MethodInfo *)0x0);
          }
        } while (startIndex != -1);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar5 = TypeInfo_GameManagers_ChatManager->static_fields->MentionBuilder;
        if (pSVar5 != (System_Text_StringBuilder_o *)0x0) {
          pSVar4 = (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                             (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
          return pSVar4;
        }
      }
    }
  }
label_05933d19:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$FormatChatMessage
// il2cpp: System_String_o* GameManagers_ChatManager__FormatChatMessage (System_String_o* message, const MethodInfo* method);
// 0x5933d20

System_String_o * GameManagers_ChatManager__FormatChatMessage(System_String_o *message,MethodInfo *method)

{
  return message;
}


// GameManagers.ChatManager$$UpdateChatPanel
// il2cpp: void GameManagers_ChatManager__UpdateChatPanel (const MethodInfo* method);
// 0x5933d30
// fidelity: the machine code has facts this C leaves out:
//   tail call to UI_ChatPanel__Sync
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5933d56: jmp 0x5933dec

void GameManagers_ChatManager__UpdateChatPanel(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  UI_ChatPanel_o *__this;
  MethodInfo *method_00;
  Il2CppClass *pIVar3;
  
  if (Il2CppMethodInitialized_075457d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075457d5 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)pIVar3;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar3);
    bVar2 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)pIVar3);
    pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    bVar2 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)pIVar3);
    pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)pIVar3;
  if (bVar2) {
    if ((pIVar3->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar3);
    }
    __this = GameManagers_ChatManager__GetChatPanel((MethodInfo *)pIVar3);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (__this == (UI_ChatPanel_o *)0x0) {
        ThrowNullReferenceException();
      }
      method_00 = (MethodInfo *)0x0;
      UI_ChatPanel__RefreshPoolSize(__this,(MethodInfo *)0x0);
      UI_ChatPanel__ValidatePMState(__this,method_00);
      UI_ChatPanel__RestorePMPartners(__this,method_00);
      UI_ChatPanel__RefreshDisplayedMessages(__this,method_00);
      return;
    }
  }
  return;
}


// GameManagers.ChatManager$$HandleCommand
// il2cpp: void GameManagers_ChatManager__HandleCommand (System_String_array* args, const MethodInfo* method);
// 0x59332a0
// asm: 13 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59335c4: jmp 0x5933631
// asm:   0x59336ff: mov rdi, r13
// asm:   0x5933702: add rdi, 0x28
// asm:   0x5933706: mov qword ptr [r13 + 0x28], rbx
// asm:   0x593370a: mov rsi, rbx
// asm:   0x593370d: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5933712: mov rdi, r14
// asm:   0x5933715: mov rsi, r15
// asm:   0x5933718: mov rdx, r13
// asm:   0x593371b: xor ecx, ecx
// asm:   0x593371d: call 0x5b8b7e0  ; CustomLogic_CustomLogicEvaluator__EvaluateMethod()
// asm:   0x5933722: jmp 0x5933570
// asm:   0x5933773: jmp 0x5933614

void GameManagers_ChatManager__HandleCommand(System_String_array *args,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Reflection_MethodBase_o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  CustomLogic_UserMethod_o *userMethod;
  MethodInfo *pMVar3;
  bool bVar4;
  System_String_o *pSVar5;
  System_Object_array *pSVar6;
  Il2CppObject *pIVar7;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Il2CppClass *pIVar8;
  System_Object_array *parameterValues;
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  GameManagers_ChatManager_o *obj;
  MethodInfo *in_stack_ffffffffffffffb8;
  Il2CppObject *pIStack_38;
  
  if (Il2CppMethodInitialized_075457d6 == '\0') {
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
    Il2CppMethodInitialized_075457d6 = '\x01';
  }
  pIStack_38 = (Il2CppObject *)0x0;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  if (args == (System_String_array *)0x0) goto label_05933778;
  if ((int)args->max_length == 0) goto label_0593377d;
  if (args->m_Items[0] == (System_String_o *)0x0) goto label_05933778;
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
  pSVar5 = System_String__ToLower(args->m_Items[0],(MethodInfo *)0x0);
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05933778;
  bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this,(Il2CppObject *)pSVar5,&pIStack_38,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
                    );
  pIVar7 = pIStack_38;
  pMVar3 = MethodInfo_System_Array_Empty_string;
  if (!bVar4) {
    if ((int)args->max_length != 0) {
      pSVar5 = System_String__Concat_5301f10
                         ("Command ",args->m_Items[0]," not found, try /help to see a list of commands.",(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__AddLine
                (pSVar5,4,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
                 in_stack_ffffffffffffffb8);
      return;
    }
    goto label_0593377d;
  }
  if (pIStack_38 == (Il2CppObject *)0x0) goto label_05933778;
  bVar1 = (TypeInfo_GameManagers_ChatManager_CLCommandAttribute->_2).typeHierarchyDepth;
  if (((pIStack_38->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pIStack_38->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_ChatManager_CLCommandAttribute)) {
    __this_00 = pIStack_38[2].monitor;
    if (__this_00 == (System_Reflection_MethodBase_o *)0x0) goto label_05933778;
    bVar4 = System_Reflection_MethodBase__get_IsStatic(__this_00,(MethodInfo *)0x0);
    if (!bVar4) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      obj = TypeInfo_GameManagers_ChatManager->static_fields->_instance;
      pSVar6 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      if (pSVar6 != (System_Object_array *)0x0) {
        pIVar7 = il2cpp_vm_Object_IsInst(&args->obj,(((pSVar6->obj).klass)->_1).element_class);
        if (pIVar7 == (Il2CppObject *)0x0) goto label_05933782;
        if ((int)pSVar6->max_length != 0) {
          pSVar6->m_Items[0] = &args->obj;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items);
          goto label_05933566;
        }
        goto label_0593377d;
      }
      goto label_05933778;
    }
    pSVar6 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (pSVar6 == (System_Object_array *)0x0) goto label_05933778;
    pIVar7 = il2cpp_vm_Object_IsInst(&args->obj,(((pSVar6->obj).klass)->_1).element_class);
    if (pIVar7 != (Il2CppObject *)0x0) {
      if ((int)pSVar6->max_length != 0) {
        pSVar6->m_Items[0] = &args->obj;
        Il2CppCodeGenWriteBarrier(pSVar6->m_Items);
        obj = (GameManagers_ChatManager_o *)0x0;
label_05933566:
        System_Reflection_MethodBase__Invoke(__this_00,(Il2CppObject *)obj,pSVar6,(MethodInfo *)0x0);
        return;
      }
      goto label_0593377d;
    }
    goto label_05933782;
  }
  if ((int)args->max_length < 2) {
    if ((MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
      pIVar8 = *(Il2CppClass **)((long)(pMVar3->field7_0x38).methodMetadataHandle + 0x10);
      if (((pIVar8->_2).bitflags1 & 1) != 0) goto label_059335ee;
label_05933744:
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
      if ((pIVar8->_2).cctor_finished_or_no_cctor != 0) goto label_059335fb;
label_05933759:
      il2cpp_codegen_runtime_class_init(pIVar8);
      pIVar8 = (pMVar3->field7_0x38).rgctx_data[2].klass;
      bVar1 = (pIVar8->_2).bitflags1;
    }
    else {
      pIVar8 = *(Il2CppClass **)
                ((long)(MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle + 0x10);
      if (((pIVar8->_2).bitflags1 & 1) == 0) goto label_05933744;
label_059335ee:
      if ((pIVar8->_2).cctor_finished_or_no_cctor == 0) goto label_05933759;
label_059335fb:
      pIVar8 = (pMVar3->field7_0x38).rgctx_data[2].klass;
      bVar1 = (pIVar8->_2).bitflags1;
    }
    if ((bVar1 & 1) == 0) {
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    pSVar6 = *(System_Object_array **)pIVar8->static_fields;
    uVar2 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    source = System_Linq_Enumerable__Skip_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)args,1,
                        (MethodInfo_34FD7B0 *)MethodInfo_System_Linq_Enumerable_Skip_string);
    pSVar6 = System_Linq_Enumerable__ToArray_object_
                       (source,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
    uVar2 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return;
  }
  userMethod = pIVar7[4].monitor;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if ((int)args->max_length == 0) goto label_0593377d;
  if (parameterValues == (System_Object_array *)0x0) {
label_05933778:
    ThrowNullReferenceException();
  }
  pSVar5 = args->m_Items[0];
  if ((pSVar5 != (System_String_o *)0x0) &&
     (pIVar7 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)pSVar5,(((parameterValues->obj).klass)->_1).element_class),
     pIVar7 == (Il2CppObject *)0x0)) {
label_05933782:
    pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = (Il2CppObject *)pSVar5;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor_58b0e70(__this_02,pSVar6,(MethodInfo *)0x0);
    if ((__this_02 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
       (pIVar7 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)__this_02,(((parameterValues->obj).klass)->_1).element_class),
       pIVar7 == (Il2CppObject *)0x0)) goto label_05933782;
    if ((parameterValues->max_length & 0xfffffffe) != 0) {
      parameterValues->m_Items[1] = (Il2CppObject *)__this_02;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1);
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
                (__this_01,userMethod,parameterValues,(MethodInfo *)0x0);
      return;
    }
  }
label_0593377d:
  ThrowIndexOutOfRangeException();
}


// GameManagers.ChatManager$$MutePlayer
// il2cpp: void GameManagers_ChatManager__MutePlayer (Photon_Realtime_Player_o* player, System_String_o* muteType, const MethodInfo* method);
// 0x592a570
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592a606: jmp 0x592a828
// asm:   0x592a717: jmp 0x592a828

void GameManagers_ChatManager__MutePlayer
               (Photon_Realtime_Player_o *player,System_String_o *muteType,MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *__this;
  bool bVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *pSVar3;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (Il2CppMethodInitialized_075457d7 == '\0') {
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
    Il2CppMethodInitialized_075457d7 = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_0592a6ad;
label_0592a5a2:
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_0592a5a2;
label_0592a6ad:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar2 == player) {
    return;
  }
  bVar1 = System_String__op_Equality(muteType,"Emote",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    if (player == (Photon_Realtime_Player_o *)0x0) goto label_0592a828;
    __this = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote;
  }
  else {
    bVar1 = System_String__op_Equality(muteType,"Text",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      if (player == (Photon_Realtime_Player_o *)0x0) goto label_0592a828;
      __this = TypeInfo_GameManagers_InGameManager->static_fields->MuteText;
    }
    else {
      bVar1 = System_String__op_Equality(muteType,"Voice",(MethodInfo *)0x0);
      if (!bVar1) goto label_0592a780;
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      if (player == (Photon_Realtime_Player_o *)0x0) goto label_0592a828;
      __this = TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat;
    }
  }
  if (__this != (System_Collections_Generic_HashSet_int__o *)0x0) {
    System_Collections_Generic_HashSet_int___Add
              (__this,(player->fields).actorNumber,
               (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
label_0592a780:
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar3 = PhotonExtensions__GetStringProperty
                       (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,""
                        ,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_5302810
                       (pSVar3," has been muted (",muteType,").",(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__AddLine
              (pSVar3,3,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
               in_stack_ffffffffffffffc8);
    return;
  }
label_0592a828:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$UnmutePlayer
// il2cpp: void GameManagers_ChatManager__UnmutePlayer (Photon_Realtime_Player_o* player, System_String_o* muteType, const MethodInfo* method);
// 0x592a930
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592aa0f: jmp 0x592acd0
// asm:   0x592ab79: jmp 0x592acd0

void GameManagers_ChatManager__UnmutePlayer
               (Photon_Realtime_Player_o *player,System_String_o *muteType,MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  bool bVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_String_o *pSVar4;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (Il2CppMethodInitialized_075457d8 == '\0') {
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
    Il2CppMethodInitialized_075457d8 = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_0592aac2;
label_0592a962:
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_0592a962;
label_0592aac2:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar3 == player) {
    return;
  }
  bVar2 = System_String__op_Equality(muteType,"Emote",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    if ((player == (Photon_Realtime_Player_o *)0x0) ||
       (pSVar1 = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote,
       pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto label_0592acd0;
    bVar2 = System_Collections_Generic_HashSet_int___Contains
                      (pSVar1,(player->fields).actorNumber,
                       (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (!bVar2) goto label_0592aae0;
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pSVar1 = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote;
  }
  else {
label_0592aae0:
    bVar2 = System_String__op_Equality(muteType,"Text",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      if ((player == (Photon_Realtime_Player_o *)0x0) ||
         (pSVar1 = TypeInfo_GameManagers_InGameManager->static_fields->MuteText,
         pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto label_0592acd0;
      bVar2 = System_Collections_Generic_HashSet_int___Contains
                        (pSVar1,(player->fields).actorNumber,
                         (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar2) {
        if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        }
        pSVar1 = TypeInfo_GameManagers_InGameManager->static_fields->MuteText;
        goto joined_r0x0592ac11;
      }
    }
    bVar2 = System_String__op_Equality(muteType,"Voice",(MethodInfo *)0x0);
    if (!bVar2) goto label_0592ac28;
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    if ((player == (Photon_Realtime_Player_o *)0x0) ||
       (pSVar1 = TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat,
       pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto label_0592acd0;
    bVar2 = System_Collections_Generic_HashSet_int___Contains
                      (pSVar1,(player->fields).actorNumber,
                       (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (!bVar2) goto label_0592ac28;
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pSVar1 = TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat;
  }
joined_r0x0592ac11:
  if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) {
label_0592acd0:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_int___Remove
            (pSVar1,(player->fields).actorNumber,
             (MethodInfo_4FA80C0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
label_0592ac28:
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar4 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                      (MethodInfo *)0x0);
  pSVar4 = System_String__Concat_5302810
                     (pSVar4," has been unmuted (",muteType,").",(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__AddLine
            (pSVar4,3,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
             in_stack_ffffffffffffffc8);
  return;
}


// GameManagers.ChatManager$$SetPlayerVolume
// il2cpp: void GameManagers_ChatManager__SetPlayerVolume (Photon_Realtime_Player_o* player, float volume, const MethodInfo* method);
// 0x5933e00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5933e35: jmp 0x5933f32

void GameManagers_ChatManager__SetPlayerVolume
               (Photon_Realtime_Player_o *player,float volume,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__float__o *pSVar1;
  bool bVar2;
  Photon_Realtime_Player_o *pPVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_075457d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_075457d9 = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_05933e29;
label_05933e90:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_05933e90;
label_05933e29:
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar3 == player) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar1 = TypeInfo_GameManagers_InGameManager->static_fields->VoiceChatVolumeMultiplier,
     pSVar1 != (System_Collections_Generic_Dictionary_int__float__o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                      (pSVar1,(player->fields).actorNumber,
                       (MethodInfo_4A176B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_float_ContainsKey);
    if (bVar2) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      pSVar1 = TypeInfo_GameManagers_InGameManager->static_fields->VoiceChatVolumeMultiplier;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_05933f7d;
      fVar4 = System_Collections_Generic_Dictionary_int__float___get_Item
                        (pSVar1,(player->fields).actorNumber,
                         (MethodInfo_4A173E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_float_get_Item);
      if ((fVar4 == volume) && (!NAN(fVar4) && !NAN(volume))) {
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
                 (MethodInfo_4A17470 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_set_Item);
      return;
    }
  }
label_05933f7d:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$GetPlayer
// il2cpp: Photon_Realtime_Player_o* GameManagers_ChatManager__GetPlayer (System_String_o* stringID, const MethodInfo* method);
// 0x5933f90

Photon_Realtime_Player_o * GameManagers_ChatManager__GetPlayer(System_String_o *stringID,MethodInfo *method)

{
  bool bVar1;
  Photon_Realtime_Room_o *pPVar2;
  Photon_Realtime_Player_o *pPVar3;
  MethodInfo *in_stack_ffffffffffffffd8;
  int32_t iStack_14;
  
  if (Il2CppMethodInitialized_075457da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid player ID.");
    Il2CppMethodInitialized_075457da = '\x01';
  }
  bVar1 = System_Int32__TryParse(stringID,&iStack_14,(MethodInfo *)0x0);
  if (!bVar1) {
label_05934071:
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__AddLine
              ("Invalid player ID.",4,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
               in_stack_ffffffffffffffd8);
    return (Photon_Realtime_Player_o *)0x0;
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (pPVar2 != (Photon_Realtime_Room_o *)0x0) {
    pPVar3 = (*(pPVar2->klass->vtable)._10_GetPlayer.methodPtr)
                       (pPVar2,-1,true,(pPVar2->klass->vtable)._10_GetPlayer.method);
    if (pPVar3 == (Photon_Realtime_Player_o *)0x0) goto label_05934071;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar2 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (pPVar2 != (Photon_Realtime_Room_o *)0x0) {
      pPVar3 = (*(pPVar2->klass->vtable)._10_GetPlayer.methodPtr)
                         (pPVar2,-1,true,(pPVar2->klass->vtable)._10_GetPlayer.method);
      return pPVar3;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$GetPlayer
// il2cpp: Photon_Realtime_Player_o* GameManagers_ChatManager__GetPlayer (System_String_array* args, const MethodInfo* method);
// 0x592a190

Photon_Realtime_Player_o *
GameManagers_ChatManager__GetPlayer_582a190(System_String_array *args,MethodInfo *method)

{
  bool bVar1;
  Photon_Realtime_Room_o *pPVar2;
  Photon_Realtime_Player_o *pPVar3;
  MethodInfo *in_stack_ffffffffffffffd8;
  int32_t local_c;
  
  if (Il2CppMethodInitialized_075457db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid player ID.");
    Il2CppMethodInitialized_075457db = '\x01';
  }
  local_c = 0;
  if (args == (System_String_array *)0x0) {
label_0592a2a0:
    ThrowNullReferenceException();
  }
  if (1 < (int)args->max_length) {
    bVar1 = System_Int32__TryParse(args->m_Items[1],&local_c,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar2 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if (pPVar2 == (Photon_Realtime_Room_o *)0x0) goto label_0592a2a0;
      pPVar3 = (*(pPVar2->klass->vtable)._10_GetPlayer.methodPtr)
                         (pPVar2,local_c,true,(pPVar2->klass->vtable)._10_GetPlayer.method);
      if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
        return pPVar3;
      }
    }
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__AddLine
            ("Invalid player ID.",4,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
             in_stack_ffffffffffffffd8);
  return (Photon_Realtime_Player_o *)0x0;
}


// GameManagers.ChatManager$$CheckMC
// il2cpp: bool GameManagers_ChatManager__CheckMC (const MethodInfo* method);
// 0x5929ca0

bool GameManagers_ChatManager__CheckMC(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  if (Il2CppMethodInitialized_075457dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Must be master client to use that command.");
    Il2CppMethodInitialized_075457dc = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__AddLine
              ("Must be master client to use that command.",4,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
               in_stack_ffffffffffffffe8);
  }
  return bVar1;
}


// GameManagers.ChatManager$$GetChatPanel
// il2cpp: UI_ChatPanel_o* GameManagers_ChatManager__GetChatPanel (const MethodInfo* method);
// 0x592c040
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592c06e: jmp 0x592c0cc
// asm:   0x592c138: jmp 0x592c17d

UI_ChatPanel_o * GameManagers_ChatManager__GetChatPanel(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_BaseMenu_o *pUVar3;
  bool bVar4;
  GameManagers_ChatManager_c *klass;
  
  if (Il2CppMethodInitialized_075457dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_075457dd = '\x01';
    uVar2 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar2 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = klass;
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
    bVar4 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)klass);
  }
  else {
    bVar4 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)klass);
  }
  if (bVar4) {
    if ((((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return (UI_ChatPanel_o *)0x0;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    }
    else {
      pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    }
    if (pUVar3 != (UI_BaseMenu_o *)0x0) {
      bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
      if ((bVar1 <= (pUVar3->klass->_2).typeHierarchyDepth) &&
         ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
        return (UI_ChatPanel_o *)(*(uint64_t *)((char *)pUVar3 + 0xd0));
      }
    }
  }
  return (UI_ChatPanel_o *)0x0;
}


// GameManagers.ChatManager$$GetFeedPanel
// il2cpp: UI_FeedPanel_o* GameManagers_ChatManager__GetFeedPanel (const MethodInfo* method);
// 0x592fbd0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592fbfe: jmp 0x592fc5c
// asm:   0x592fcc8: jmp 0x592fd0d

UI_FeedPanel_o * GameManagers_ChatManager__GetFeedPanel(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_BaseMenu_o *pUVar3;
  bool bVar4;
  GameManagers_ChatManager_c *klass;
  
  if (Il2CppMethodInitialized_075457de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_075457de = '\x01';
    uVar2 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar2 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = klass;
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
    bVar4 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)klass);
  }
  else {
    bVar4 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)klass);
  }
  if (bVar4) {
    if ((((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return (UI_FeedPanel_o *)0x0;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    }
    else {
      pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    }
    if (pUVar3 != (UI_BaseMenu_o *)0x0) {
      bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
      if ((bVar1 <= (pUVar3->klass->_2).typeHierarchyDepth) &&
         ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
        return (UI_FeedPanel_o *)(*(uint64_t *)((char *)pUVar3 + 0xd8));
      }
    }
  }
  return (UI_FeedPanel_o *)0x0;
}


// GameManagers.ChatManager$$GetVoiceChatPanel
// il2cpp: UI_VoiceChatPanel_o* GameManagers_ChatManager__GetVoiceChatPanel (const MethodInfo* method);
// 0x5932f80

UI_VoiceChatPanel_o * GameManagers_ChatManager__GetVoiceChatPanel(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_BaseMenu_o *pUVar3;
  
  if (Il2CppMethodInitialized_075457df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_075457df = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    pUVar3 = *(UI_BaseMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (pUVar3 == (UI_BaseMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
  if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  return (UI_VoiceChatPanel_o *)(*(uint64_t *)((char *)pUVar3 + 0xe0));
}


// GameManagers.ChatManager$$GetIDString
// il2cpp: System_String_o* GameManagers_ChatManager__GetIDString (int32_t id, bool includeMC, bool myPlayer, const MethodInfo* method);
// 0x59340d0

System_String_o *
GameManagers_ChatManager__GetIDString(int32_t id,bool includeMC,bool myPlayer,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  int32_t local_1c;
  
  local_1c = id;
  if (Il2CppMethodInitialized_075457e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"] ");
    il2cpp_codegen_initialize_runtime_metadata(&"[M]");
    il2cpp_codegen_initialize_runtime_metadata(&"[");
    Il2CppMethodInitialized_075457e0 = '\x01';
  }
  pSVar1 = System_Int32__ToString(&local_1c,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  pSVar1 = System_String__Concat_5301f10("[",pSVar1,"] ",(MethodInfo *)0x0)
  ;
  if (includeMC) {
    pSVar1 = System_String__Concat_52f0320("[M]",pSVar1,(MethodInfo *)0x0);
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar1 = GameManagers_ChatManager__GetColorString(pSVar1,myPlayer + 1,false,method_00);
  return pSVar1;
}


// GameManagers.ChatManager$$GetColorString
// il2cpp: System_String_o* GameManagers_ChatManager__GetColorString (System_String_o* str, int32_t color, bool bold, const MethodInfo* method);
// 0x592b740

System_String_o *
GameManagers_ChatManager__GetColorString(System_String_o *str,int32_t color,bool bold,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_ChatTextColor__string__o *__this;
  System_String_array *values;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075457e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ChatTextColor_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"<b>");
    il2cpp_codegen_initialize_runtime_metadata(&"</b>");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_075457e1 = '\x01';
  }
  if (color == 0) {
    return str;
  }
  if (bold) {
    str = System_String__Concat_5301f10("<b>",str,"</b>",(MethodInfo *)0x0);
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (values == (System_String_array *)0x0) {
label_0592b90a:
    ThrowNullReferenceException();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = "<color=#";
    Il2CppCodeGenWriteBarrier(values->m_Items);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    __this = TypeInfo_GameManagers_ChatManager->static_fields->ColorTags;
    if (__this == (System_Collections_Generic_Dictionary_ChatTextColor__string__o *)0x0) goto label_0592b90a;
    pSVar1 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,color,
                        (MethodInfo_4A54F30 *)
                        MethodInfo_System_Collections_Generic_Dictionary_ChatTextColor_string_get_Item);
    if ((values->max_length & 0xfffffffe) != 0) {
      values->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = ">";
        Il2CppCodeGenWriteBarrier(values->m_Items + 2);
        if ((values->max_length & 0xfffffffc) != 0) {
          values->m_Items[3] = str;
          Il2CppCodeGenWriteBarrier(values->m_Items + 3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = "</color>";
            Il2CppCodeGenWriteBarrier(values->m_Items + 4);
            pSVar1 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
            return pSVar1;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// GameManagers.ChatManager$$Update
// il2cpp: void GameManagers_ChatManager__Update (GameManagers_ChatManager_o* __this, const MethodInfo* method);
// 0x59341a0

void GameManagers_ChatManager__Update(GameManagers_ChatManager_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InputSettings_o *pSVar2;
  Settings_GeneralInputSettings_o *pSVar3;
  Settings_KeybindSetting_o *__this_00;
  bool bVar4;
  UI_ChatPanel_o *__this_01;
  Il2CppClass *klass;
  GameManagers_ChatManager_c *method_00;
  
  if (Il2CppMethodInitialized_075457e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075457e2 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar4 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)klass);
  }
  else {
    bVar4 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)klass);
  }
  if ((!bVar4) || (bVar4 = UI_InGameMenu__InMenu((MethodInfo *)0x0), bVar4)) {
    return;
  }
  method_00 = TypeInfo_GameManagers_ChatManager;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this_01 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)method_00);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar2 != (Settings_InputSettings_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).General, pSVar3 != (Settings_GeneralInputSettings_o *)0x0)) &&
     (__this_00 = (pSVar3->fields).Chat, __this_00 != (Settings_KeybindSetting_o *)0x0)) {
    bVar4 = Settings_KeybindSetting__GetKeyDown(__this_00,false,(MethodInfo *)0x0);
    if (!bVar4) {
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
// 0x59342a0
// eh: try 0x59343d7..0x59343e4 -> pad 0x5934436 catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x593444e..0x5934453 -> pad 0x5934455 cleanup
// eh: try 0x5934458..0x5934462 -> pad 0x593446a catch (...) [compiler noexcept guard]
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59342c6: cmp byte ptr [rip + 0x1c114f8], 0
// asm:   0x593442c: jmp 0x59343af
// asm:   0x593442e: mov rdi, rbx
// asm:   0x5934431: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5934436: mov rbx, rax
// asm:   0x5934439: cmp edx, 1
// asm:   0x593443c: jne 0x5934458
// asm:   0x593443e: mov rdi, rbx
// asm:   0x5934441: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5934446: mov rbx, qword ptr [rax]
// asm:   0x5934449: mov qword ptr [rsp + 8], rbx
// asm:   0x593444e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5934453: jmp 0x59343e6
// asm:   0x5934455: mov rbx, rax
// asm:   0x5934458: lea rdi, [rsp + 8]
// asm:   0x593445d: call 0x2fd2bf0  ; il2cpp_runtime_helper_02fd2bf0()
// asm:   0x5934462: mov rdi, rbx
// asm:   0x5934465: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x593446a: mov rdi, rax
// asm:   0x593446d: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_ChatManager__HandleTyping(System_String_o *input,MethodInfo *method)

{
  long lVar1;
  int32_t *piVar2;
  uint32_t uVar3;
  int iVar4;
  GameManagers_ChatManager_StaticFields *pGVar5;
  Il2CppClass *klass;
  GameManagers_ChatManager_c *pGVar6;
  
  if (Il2CppMethodInitialized_075457e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_075457e3 = '\x01';
    uVar3 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar3 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  if (Il2CppMethodInitialized_075457c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_075457c5 = '\x01';
    uVar3 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar3 = *(uint32_t *)((long)TypeInfo_GameManagers_ChatManager + 0xe4);
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    pGVar5 = TypeInfo_GameManagers_ChatManager->static_fields;
    iVar4 = pGVar5->_lineBatchDepth;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    pGVar5 = ((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->static_fields;
    iVar4 = pGVar5->_lineBatchDepth;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (iVar4 == 0) {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
      TypeInfo_GameManagers_ChatManager->static_fields->_pendingBatchSync = false;
      uVar3 = (((GameManagers_ChatManager_c *)klass)->_2).cctor_finished_or_no_cctor;
    }
    else {
      pGVar5->_pendingBatchSync = false;
      uVar3 = (klass->_2).cctor_finished_or_no_cctor;
    }
  }
  else {
    uVar3 = (klass->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pGVar6 = TypeInfo_GameManagers_ChatManager;
    uVar3 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    piVar2 = &TypeInfo_GameManagers_ChatManager->static_fields->_lineBatchDepth;
    *piVar2 = *piVar2 + 1;
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)pGVar6);
    }
  }
  else {
    lVar1 = (long)klass->static_fields + 0x84;
    *(int *)lVar1 = *(int *)lVar1 + 1;
  }
  GameManagers_ChatManager__HandleTypingInternal(input,method);
  pGVar6 = TypeInfo_GameManagers_ChatManager;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__EndLineBatch((MethodInfo *)pGVar6);
  return;
}


// GameManagers.ChatManager$$HandleTypingInternal
// il2cpp: void GameManagers_ChatManager__HandleTypingInternal (System_String_o* input, const MethodInfo* method);
// 0x5934480
// eh: try 0x5934a44..0x5934d18 -> pad 0x593734f (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5934db4..0x5936222 -> pad 0x5937232 (+21 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5936275..0x593627a -> pad 0x593627f cleanup
// eh: try 0x5936283..0x593628d -> pad 0x59373b1 catch (...) [compiler noexcept guard]
// eh: try 0x59362ba..0x59362bf -> pad 0x593671d cleanup
// eh: try 0x5936397..0x593671d -> pad 0x5936780 (+31 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5936721..0x593672b -> pad 0x59373b1 catch (...) [compiler noexcept guard]
// eh: try 0x59367da..0x59367df -> pad 0x593680b cleanup
// eh: try 0x593680f..0x5936819 -> pad 0x59373b1 catch (...) [compiler noexcept guard]
// eh: try 0x593683c..0x5936841 -> pad 0x593686d cleanup
// eh: try 0x5936871..0x593687b -> pad 0x59373b1 catch (...) [compiler noexcept guard]
// eh: try 0x59368a8..0x59368ad -> pad 0x59369c2 cleanup
// eh: try 0x593695d..0x59369bd -> pad 0x59369db (+3 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x59369c6..0x59369d0 -> pad 0x59373b1 catch (...) [compiler noexcept guard]
// eh: try 0x59369f9..0x59369fe -> pad 0x59371be cleanup
// eh: try 0x5937083..0x593719b -> pad 0x59371d7 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x59371c2..0x59371cc -> pad 0x59373b1 catch (...) [compiler noexcept guard]
// eh: try 0x59371f3..0x59371f8 -> pad 0x593721f cleanup
// eh: try 0x5937223..0x593722d -> pad 0x59373b1 catch (...) [compiler noexcept guard]
// eh: try 0x593724c..0x5937251 -> pad 0x593727d cleanup
// eh: try 0x5937281..0x593728b -> pad 0x59373b1 catch (...) [compiler noexcept guard]
// eh: try 0x59372b0..0x59372b5 -> pad 0x59372dd cleanup
// eh: try 0x59372e1..0x59372eb -> pad 0x59373b1 catch (...) [compiler noexcept guard]
// eh: try 0x5937310..0x5937315 -> pad 0x593733d cleanup
// eh: try 0x5937341..0x593734b -> pad 0x59373b1 catch (...) [compiler noexcept guard]
// eh: try 0x593736d..0x5937372 -> pad 0x593739a cleanup
// eh: try 0x593739e..0x59373a8 -> pad 0x59373b1 catch (...) [compiler noexcept guard]
// asm: 246 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5934890: jmp 0x5934fa0
// asm:   0x5934a6c: jmp 0x5934c3b
// asm:   0x5934c0e: nop 
// asm:   0x5934d40: jmp 0x5936b17
// asm:   0x5934dff: jmp 0x5934f7a
// asm:   0x5934e6f: nop 
// asm:   0x5934ebf: jmp 0x5934f7a
// asm:   0x5934feb: jmp 0x5935181
// asm:   0x593519a: jmp 0x59353c7
// asm:   0x59353e0: jmp 0x59355de
// asm:   0x593540d: jmp 0x59355de
// asm:   0x593568d: jmp 0x59356a8
// asm:   0x5935a37: jmp 0x5936b17
// asm:   0x5935d40: jmp 0x5935ccd
// asm:   0x5935e47: mov rbp, qword ptr [rsp + 0x38]
// asm:   0x5935e4c: test rbp, rbp
// asm:   0x593624f: jmp 0x593625b
// asm:   0x5936251: jmp 0x593625b
// asm:   0x5936253: jmp 0x593625b
// asm:   0x5936255: jmp 0x593625b
// asm:   0x5936257: jmp 0x593629c
// asm:   0x5936259: jmp 0x593629c
// asm:   0x593625b: mov qword ptr [rsp], rax
// asm:   0x593625f: cmp edx, 1
// asm:   0x5936262: jne 0x5936283
// asm:   0x5936264: mov rdi, qword ptr [rsp]
// asm:   0x5936268: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x593626d: mov rax, qword ptr [rax]
// asm:   0x5936270: mov qword ptr [rsp + 0x10], rax
// asm:   0x5936275: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x593627a: jmp 0x5936096
// asm:   0x593627f: mov qword ptr [rsp], rax
// asm:   0x5936283: lea rdi, [rsp + 0x10]
// asm:   0x5936288: call 0x2fd2d90  ; il2cpp_runtime_helper_02fd2d90()
// asm:   0x593628d: jmp 0x59373a8
// asm:   0x5936292: jmp 0x593629c
// asm:   0x5936294: jmp 0x593629c
// asm:   0x5936296: jmp 0x593629c
// asm:   0x5936298: jmp 0x593629c
// asm:   0x593629a: jmp 0x593629c
// asm:   0x593629c: mov qword ptr [rsp], rax
// asm:   0x59362a0: cmp edx, 1
// asm:   0x59362a3: jne 0x5936721
// asm:   0x59362a9: mov rdi, qword ptr [rsp]
// asm:   0x59362ad: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59362b2: mov rax, qword ptr [rax]
// asm:   0x59362b5: mov qword ptr [rsp + 0x10], rax
// asm:   0x59362ba: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59362f5: mov rbp, qword ptr [rsp + 0x38]
// asm:   0x59362fa: test rbp, rbp
// asm:   0x5936579: jmp 0x59366d2
// asm:   0x593671d: mov qword ptr [rsp], rax
// asm:   0x5936721: lea rdi, [rsp + 0x10]
// asm:   0x5936726: call 0x2fd2e20  ; il2cpp_runtime_helper_02fd2e20()
// asm:   0x593672b: jmp 0x59373a8
// asm:   0x5936730: jmp 0x593688a
// asm:   0x5936735: jmp 0x593688a
// asm:   0x593673a: jmp 0x593688a
// asm:   0x593673f: jmp 0x593688a
// asm:   0x5936744: jmp 0x593688a
// asm:   0x5936749: jmp 0x593688a
// asm:   0x593674e: jmp 0x593688a
// asm:   0x5936753: jmp 0x593688a
// asm:   0x5936758: jmp 0x593688a
// asm:   0x593675d: jmp 0x593688a
// asm:   0x5936762: jmp 0x593688a
// asm:   0x5936767: jmp 0x593688a
// asm:   0x593676c: jmp 0x593688a
// asm:   0x5936771: jmp 0x593688a
// asm:   0x5936776: jmp 0x593688a
// asm:   0x593677b: jmp 0x593688a
// asm:   0x5936780: jmp 0x593688a
// asm:   0x5936785: jmp 0x593688a
// asm:   0x593678a: jmp 0x593688a
// asm:   0x593678f: jmp 0x593688a
// asm:   0x5936794: jmp 0x593688a
// asm:   0x5936799: jmp 0x593688a
// asm:   0x593679e: jmp 0x593688a
// asm:   0x59367a3: jmp 0x593688a
// asm:   0x59367a8: jmp 0x593688a
// asm:   0x59367ad: jmp 0x593688a
// asm:   0x59367b2: jmp 0x593688a
// asm:   0x59367b7: jmp 0x593688a
// asm:   0x59367bc: jmp 0x59367c0
// asm:   0x59367be: jmp 0x59367c0
// asm:   0x59367c0: mov qword ptr [rsp], rax
// asm:   0x59367c4: cmp edx, 1
// asm:   0x59367c7: jne 0x593680f
// asm:   0x59367c9: mov rdi, qword ptr [rsp]
// asm:   0x59367cd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59367d2: mov rax, qword ptr [rax]
// asm:   0x59367d5: mov qword ptr [rsp + 0x10], rax
// asm:   0x59367da: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x593680b: mov qword ptr [rsp], rax
// asm:   0x593680f: lea rdi, [rsp + 0x10]
// asm:   0x5936814: call 0x2fd2d10  ; il2cpp_runtime_helper_02fd2d10()
// asm:   0x5936819: jmp 0x59373a8
// asm:   0x593681e: jmp 0x5936822
// asm:   0x5936820: jmp 0x5936822
// asm:   0x5936822: mov qword ptr [rsp], rax
// asm:   0x5936826: cmp edx, 1
// asm:   0x5936829: jne 0x5936871
// asm:   0x593682b: mov rdi, qword ptr [rsp]
// asm:   0x593682f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5936834: mov rax, qword ptr [rax]
// asm:   0x5936837: mov qword ptr [rsp + 0x10], rax
// asm:   0x593683c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x593686d: mov qword ptr [rsp], rax
// asm:   0x5936871: lea rdi, [rsp + 0x10]
// asm:   0x5936876: call 0x2fd2c50  ; il2cpp_runtime_helper_02fd2c50()
// asm:   0x593687b: jmp 0x59373a8
// asm:   0x5936880: jmp 0x5937232
// asm:   0x5936885: jmp 0x5937232
// asm:   0x593688a: mov qword ptr [rsp], rax
// asm:   0x593688e: cmp edx, 1
// asm:   0x5936891: jne 0x59369c6
// asm:   0x5936897: mov rdi, qword ptr [rsp]
// asm:   0x593689b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59368a0: mov rax, qword ptr [rax]
// asm:   0x59368a3: mov qword ptr [rsp + 0x10], rax
// asm:   0x59368a8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59369c2: mov qword ptr [rsp], rax
// asm:   0x59369c6: lea rdi, [rsp + 0x10]
// asm:   0x59369cb: call 0x2fd2e50  ; il2cpp_runtime_helper_02fd2e50()
// asm:   0x59369d0: jmp 0x59373a8
// asm:   0x59369d5: jmp 0x59369db
// asm:   0x59369d7: jmp 0x59369db
// asm:   0x59369d9: jmp 0x59369db
// asm:   0x59369db: mov qword ptr [rsp], rax
// asm:   0x59369df: cmp edx, 1
// asm:   0x59369e2: jne 0x59371c2
// asm:   0x59369e8: mov rdi, qword ptr [rsp]
// asm:   0x59369ec: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59369f1: mov rax, qword ptr [rax]
// asm:   0x59369f4: mov qword ptr [rsp + 0x10], rax
// asm:   0x59369f9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59369fe: lea rdi, [rsp + 0x10]
// asm:   0x5936a03: call 0x2fd2e80  ; il2cpp_runtime_helper_02fd2e80()
// asm:   0x5936a08: lea rbx, [rip + 0x199c1d1]  ; "@"
// asm:   0x5936ea2: test rbp, rbp
// asm:   0x59371af: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x59371be: mov qword ptr [rsp], rax
// asm:   0x59371c2: lea rdi, [rsp + 0x10]
// asm:   0x59371c7: call 0x2fd2e80  ; il2cpp_runtime_helper_02fd2e80()
// asm:   0x59371cc: jmp 0x59373a8
// asm:   0x59371d1: jmp 0x59371d9
// asm:   0x59371d3: jmp 0x59371d9
// asm:   0x59371d5: jmp 0x59371d9
// asm:   0x59371d7: jmp 0x59371d9
// asm:   0x59371d9: mov qword ptr [rsp], rax
// asm:   0x59371dd: cmp edx, 1
// asm:   0x59371e0: jne 0x5937223
// asm:   0x59371e2: mov rdi, qword ptr [rsp]
// asm:   0x59371e6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59371eb: mov rax, qword ptr [rax]
// asm:   0x59371ee: mov qword ptr [rsp + 0x10], rax
// asm:   0x59371f3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59371f8: lea rdi, [rsp + 0x10]
// asm:   0x59371fd: call 0x2fd2eb0  ; il2cpp_runtime_helper_02fd2eb0()
// asm:   0x593721f: mov qword ptr [rsp], rax
// asm:   0x5937223: lea rdi, [rsp + 0x10]
// asm:   0x5937228: call 0x2fd2eb0  ; il2cpp_runtime_helper_02fd2eb0()
// asm:   0x593722d: jmp 0x59373a8
// asm:   0x5937232: mov qword ptr [rsp], rax
// asm:   0x5937236: cmp edx, 1
// asm:   0x5937239: jne 0x5937281
// asm:   0x593723b: mov rdi, qword ptr [rsp]
// asm:   0x593723f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5937244: mov rax, qword ptr [rax]
// asm:   0x5937247: mov qword ptr [rsp + 0x10], rax
// asm:   0x593724c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5937273: call 0x59373c0  ; GameManagers_ChatManager__ClearLastSuggestions()
// asm:   0x5937278: jmp 0x5936b2a
// asm:   0x593727d: mov qword ptr [rsp], rax
// asm:   0x5937281: lea rdi, [rsp + 0x10]
// asm:   0x5937286: call 0x2fd2cb0  ; il2cpp_runtime_helper_02fd2cb0()
// asm:   0x593728b: jmp 0x59373a8
// asm:   0x5937290: jmp 0x5937292
// asm:   0x5937292: mov qword ptr [rsp], rax
// asm:   0x5937296: cmp edx, 1
// asm:   0x5937299: jne 0x59372e1
// asm:   0x593729b: mov rdi, qword ptr [rsp]
// asm:   0x593729f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59372a4: mov rax, qword ptr [rax]
// asm:   0x59372a7: mov qword ptr [rsp], rax
// asm:   0x59372ab: mov qword ptr [rsp + 0x10], rax
// asm:   0x59372b0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59372b5: lea rax, [rip + 0x195783c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x59372bc: mov rsi, qword ptr [rax]
// asm:   0x59372bf: lea rdi, [rsp + 0x40]
// asm:   0x59372c4: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59372c9: cmp qword ptr [rsp], 0
// asm:   0x59372ce: je 0x5934ed8
// asm:   0x59372d4: mov rdi, qword ptr [rsp]
// asm:   0x59372d8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59372dd: mov qword ptr [rsp], rax
// asm:   0x59372e1: lea rdi, [rsp + 0x10]
// asm:   0x59372e6: call 0x2fd2ce0  ; il2cpp_runtime_helper_02fd2ce0()
// asm:   0x59372eb: jmp 0x59373a8
// asm:   0x59372f0: jmp 0x59372f2
// asm:   0x59372f2: mov qword ptr [rsp], rax
// asm:   0x59372f6: cmp edx, 1
// asm:   0x59372f9: jne 0x5937341
// asm:   0x59372fb: mov rdi, qword ptr [rsp]
// asm:   0x59372ff: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5937304: mov rax, qword ptr [rax]
// asm:   0x5937307: mov qword ptr [rsp], rax
// asm:   0x593730b: mov qword ptr [rsp + 0x10], rax
// asm:   0x5937310: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5937315: lea rax, [rip + 0x19577dc]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x593731c: mov rsi, qword ptr [rax]
// asm:   0x593731f: lea rdi, [rsp + 0x40]
// asm:   0x5937324: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5937329: cmp qword ptr [rsp], 0
// asm:   0x593732e: je 0x5934e18
// asm:   0x5937334: mov rdi, qword ptr [rsp]
// asm:   0x5937338: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x593733d: mov qword ptr [rsp], rax
// asm:   0x5937341: lea rdi, [rsp + 0x10]
// asm:   0x5937346: call 0x2fd2c20  ; il2cpp_runtime_helper_02fd2c20()
// asm:   0x593734b: jmp 0x59373a8
// asm:   0x593734d: jmp 0x593734f
// asm:   0x593734f: mov qword ptr [rsp], rax
// asm:   0x5937353: cmp edx, 1
// asm:   0x5937356: jne 0x593739e
// asm:   0x5937358: mov rdi, qword ptr [rsp]
// asm:   0x593735c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5937361: mov rax, qword ptr [rax]
// asm:   0x5937364: mov qword ptr [rsp], rax
// asm:   0x5937368: mov qword ptr [rsp + 0x10], rax
// asm:   0x593736d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5937372: lea rax, [rip + 0x195777f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5937379: mov rsi, qword ptr [rax]
// asm:   0x593737c: lea rdi, [rsp + 0x40]
// asm:   0x5937381: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5937386: cmp qword ptr [rsp], 0
// asm:   0x593738b: je 0x5934d59
// asm:   0x5937391: mov rdi, qword ptr [rsp]
// asm:   0x5937395: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x593739a: mov qword ptr [rsp], rax
// asm:   0x593739e: lea rdi, [rsp + 0x10]
// asm:   0x59373a3: call 0x2fd2c80  ; il2cpp_runtime_helper_02fd2c80()
// asm:   0x59373a8: mov rdi, qword ptr [rsp]
// asm:   0x59373ac: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59373b1: mov rdi, rax
// asm:   0x59373b4: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_ChatManager__HandleTypingInternal(System_String_o *input,MethodInfo *method)

{
  byte bVar1;
  undefined1 uVar2;
  uint32_t uVar3;
  uint uVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  Photon_Realtime_Player_o *pPVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int32_t iVar10;
  int32_t iVar11;
  System_String_o *pSVar12;
  GameManagers_ChatManager_SuggestionState_StaticFields *pGVar13;
  System_Func_char__bool__o *pSVar14;
  Photon_Realtime_Player_array *pPVar15;
  System_String_o *__this;
  System_String_o *pSVar16;
  GameManagers_ChatManager___c_StaticFields *pGVar17;
  System_Func_Player__string__o *pSVar18;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar19;
  System_Collections_Generic_List_string__o *pSVar20;
  System_Comparison_T__o *pSVar21;
  System_Text_StringBuilder_o *pSVar22;
  void *pvVar23;
  System_Collections_Generic_List_Player__o *__this_00;
  MethodInfo *pMVar24;
  Il2CppClass *pIVar25;
  System_Collections_Generic_List_KeyValuePair_string__ChatManager_CommandAttribute___o *pSVar26;
  ulong uVar27;
  int iVar28;
  Il2CppObject *pIVar29;
  GameManagers_ChatManager_c *pGVar30;
  MethodInfo *in_stack_fffffffffffffec8;
  uint local_11c;
  undefined1 local_118 [16];
  System_String_o *local_108;
  Il2CppObject *pIStack_100;
  int32_t local_f8;
  undefined4 uStack_f4;
  System_Collections_Generic_List_KeyValuePair_string__ChatManager_CommandAttribute___o *local_f0;
  undefined1 local_e8 [8];
  System_Collections_Generic_Dictionary_Enumerator_object__object__o *pSStack_e0;
  System_String_o *local_d8;
  int32_t local_c4;
  System_String_o *local_c0;
  undefined1 local_b8 [8];
  System_Collections_Generic_Dictionary_Enumerator_object__object__o *pSStack_b0;
  System_String_o *local_a8;
  undefined1 local_98 [8];
  undefined1 *puStack_90;
  System_String_o *local_88;
  Il2CppObject *pIStack_80;
  Il2CppObject *local_78;
  Il2CppObject *local_70;
  Il2CppObject *local_68;
  Il2CppObject *local_60;
  undefined1 local_58 [8];
  System_Collections_Generic_Dictionary_Enumerator_object__object__o *pSStack_50;
  System_String_o *local_48;
  Il2CppObject *pIStack_40;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_075457e4 == '\0') {
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
              (&MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__139_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__139_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__139_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__139_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__139_4);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_c);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"Matching players:");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"##FORCE_REFRESH##");
    il2cpp_codegen_initialize_runtime_metadata(&"@");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075457e4 = '\x01';
  }
  local_e8 = (undefined1  [8])0x0;
  pSStack_e0 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)0x0;
  local_d8 = (System_String_o *)0x0;
  local_60 = (Il2CppObject *)0x0;
  local_68 = (Il2CppObject *)0x0;
  local_70 = (Il2CppObject *)0x0;
  local_78 = (Il2CppObject *)0x0;
  local_11c = 0;
  local_c4 = 0;
  local_b8 = (undefined1  [8])0x0;
  pSStack_b0 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)0x0;
  local_a8 = (System_String_o *)0x0;
  local_48 = (System_String_o *)0x0;
  pIStack_40 = (Il2CppObject *)0x0;
  local_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)0x0;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  local_88 = (System_String_o *)0x0;
  pIStack_80 = (Il2CppObject *)0x0;
  local_98 = (undefined1  [8])0x0;
  puStack_90 = (undefined1 *)0x0;
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  bVar7 = System_String__IsNullOrEmpty
                    (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalPartialText,
                     (MethodInfo *)0x0);
  if (bVar7) {
label_05934fd2:
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      iVar28 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
    }
    else {
      iVar28 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
    }
    if (iVar28 == 2) {
      if (input == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar7 = System_String__Contains(input,"@",(MethodInfo *)0x0);
      if ((bVar7) && (iVar10 = System_String__LastIndexOf(input,0x40,(MethodInfo *)0x0), -1 < iVar10)) {
        pSVar12 = System_String__Substring(input,iVar10 + 1,(MethodInfo *)0x0);
        if (pSVar12 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar7 = System_String__Contains_53072c0(pSVar12,0x20,(MethodInfo *)0x0);
        if ((bVar7) || (bVar7 = System_String__Contains_53072c0(pSVar12,9,(MethodInfo *)0x0), bVar7)) {
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick != false) {
            return;
          }
          pGVar30 = TypeInfo_GameManagers_ChatManager;
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)pGVar30);
          return;
        }
        if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        }
        bVar7 = System_String__IsNullOrEmpty
                          (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText,
                           (MethodInfo *)0x0);
        if (!bVar7) {
          iVar28 = (pSVar12->fields)._stringLength;
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          pSVar16 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText;
          if (pSVar16 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          if (iVar28 < (pSVar16->fields)._stringLength) {
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
              pSVar16 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText;
              if (pSVar16 == (System_String_o *)0x0) {
                ThrowNullReferenceException();
              }
            }
            bVar7 = System_String__StartsWith_53002b0(pSVar16,pSVar12,5,(MethodInfo *)0x0);
            if (bVar7) {
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
      iVar28 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
    }
    else {
      iVar28 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
    }
    if (iVar28 == 1) {
      if (input == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar7 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
      if (bVar7) {
        iVar10 = System_String__IndexOf(input,0x20,(MethodInfo *)0x0);
        if (iVar10 < 1) {
          pSVar12 = System_String__Substring(input,1,(MethodInfo *)0x0);
          if (pSVar12 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar12 = System_String__ToLower(pSVar12,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          bVar7 = System_String__IsNullOrEmpty
                            (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText,
                             (MethodInfo *)0x0);
          if (!bVar7) {
            if (pSVar12 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            iVar28 = (pSVar12->fields)._stringLength;
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            pSVar16 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText;
            if (pSVar16 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            if (iVar28 < (pSVar16->fields)._stringLength) {
              if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
                pSVar16 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText;
                if (pSVar16 == (System_String_o *)0x0) {
                  ThrowNullReferenceException();
                }
              }
              bVar7 = System_String__StartsWith_53002b0(pSVar16,pSVar12,5,(MethodInfo *)0x0);
              if (bVar7) {
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
          pSVar12 = System_String__Substring_53042f0(input,1,iVar10 + -1,(MethodInfo *)0x0);
          if (pSVar12 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar12 = System_String__ToLower(pSVar12,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
          if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                            (pSVar5,(Il2CppObject *)pSVar12,&local_68,
                             (MethodInfo_4AAF440 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
                            );
          if (!bVar7) {
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick != false)
            {
              return;
            }
            pGVar30 = TypeInfo_GameManagers_ChatManager;
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)pGVar30);
            return;
          }
          if (local_68 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (*(int *)&local_68[4].klass == 0) {
            if (local_68[3].monitor == (void *)0x0) {
              ThrowNullReferenceException();
            }
            if (*(long *)((long)local_68[3].monitor + 0x18) == 0) {
              if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
              }
              if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick != false
                 ) {
                return;
              }
              pGVar30 = TypeInfo_GameManagers_ChatManager;
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)pGVar30);
              return;
            }
          }
        }
      }
    }
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      pGVar13 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
      if (pGVar13->Type == 3) goto label_059353fe;
label_059355de:
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        pGVar13 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
        cVar9 = pGVar13->IsTabCompleting;
      }
      else {
        pGVar13 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
        cVar9 = pGVar13->IsTabCompleting;
      }
      if (cVar9 != '\0') {
        if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState)->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          pGVar13 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
        }
        goto label_05936b26;
      }
    }
    else {
      pGVar13 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
      if (pGVar13->Type != 3) goto label_059355de;
label_059353fe:
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting != false)
        goto label_0593542b;
        goto label_059355de;
      }
      if (pGVar13->IsTabCompleting == false) goto label_059355de;
label_0593542b:
      if (input == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar7 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
      if ((!bVar7) || (iVar10 = System_String__IndexOf(input,0x20,(MethodInfo *)0x0), iVar10 == -1))
      goto label_059355de;
      pSVar12 = System_String__Substring_53042f0(input,1,iVar10 + -1,(MethodInfo *)0x0);
      if (pSVar12 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar12 = System_String__ToLower(pSVar12,(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
      if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar5,(Il2CppObject *)pSVar12,&local_70,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
                        );
      iVar28 = 1;
      if (bVar7) {
        if (local_70 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        iVar28 = *(int *)&local_70[4].klass;
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      if ((iVar28 != 2) ||
         (iVar11 = System_String__LastIndexOf(input,0x20,(MethodInfo *)0x0), iVar11 <= iVar10)) {
        iVar11 = iVar10;
      }
      pSVar12 = System_String__Substring(input,iVar11 + 1,(MethodInfo *)0x0);
      if (pSVar12 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar28 = (pSVar12->fields)._stringLength;
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      pSVar16 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText;
      if (pSVar16 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (((pSVar16->fields)._stringLength <= iVar28) &&
         (bVar7 = System_String__EndsWith(pSVar12," ",(MethodInfo *)0x0), !bVar7)) {
        uVar3 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
        goto joined_r0x05936b15;
      }
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick != false)
        goto label_059355a9;
label_059359f7:
        pGVar30 = TypeInfo_GameManagers_ChatManager;
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)pGVar30);
        uVar3 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick == false)
        goto label_059359f7;
label_059355a9:
        uVar3 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
      }
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = "##FORCE_REFRESH##";
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText);
    }
    bVar7 = System_String__IsNullOrEmpty(input,(MethodInfo *)0x0);
    if (((bVar7) || (bVar7 = System_String__op_Equality(input,"@",(MethodInfo *)0x0), bVar7)
        ) || (bVar7 = System_String__op_Equality(input,"/",(MethodInfo *)0x0), bVar7)) {
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        cVar9 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick;
        pIVar25 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
      }
      else {
        cVar9 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick;
        pIVar25 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
      }
      if (cVar9 != '\0') {
        TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)pIVar25;
        return;
      }
      TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)pIVar25;
      if ((pIVar25->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(pIVar25);
      }
      GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)pIVar25);
      return;
    }
    if (input == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar7 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
    if (bVar7) {
      iVar10 = System_String__IndexOf(input,0x20,(MethodInfo *)0x0);
      if (iVar10 == -1) {
        pSVar12 = System_String__Substring(input,1,(MethodInfo *)0x0);
        if (pSVar12 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar12 = System_String__ToLower(pSVar12,(MethodInfo *)0x0);
        bVar7 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
        if (bVar7) {
label_05935a6f:
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick != false) {
            return;
          }
          pGVar30 = TypeInfo_GameManagers_ChatManager;
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)pGVar30);
          return;
        }
        if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        }
        bVar7 = System_String__op_Inequality
                          (pSVar12,TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->
                                   PartialText,(MethodInfo *)0x0);
        if (bVar7) {
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick == false) {
            pGVar30 = TypeInfo_GameManagers_ChatManager;
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)pGVar30);
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = pSVar12;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText);
            pGVar13 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
            pGVar13->CurrentIndex = -1;
            pGVar13->Type = 1;
            pSVar16 = System_String__Concat_52f0320("/",pSVar12,(MethodInfo *)0x0);
            GameManagers_ChatManager_SuggestionState__SetOriginalContext
                      (pSVar16,0,(input->fields)._stringLength,(MethodInfo *)0x0);
            local_f0 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Collections_Generic_List_KeyValuePair_string_ChatManager_CommandAttribute
                                 );
            System_Collections_Generic_List_KeyValuePair_object__object_____ctor
                      ((System_Collections_Generic_List_T__o *)local_f0,
                       (MethodInfo_5168910 *)
                       MethodInfo_System_Collections_Generic_List_KeyValuePair_string_ChatManager_CommandAttribute_ctor
                      );
            pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
            if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_Dictionary_object__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_118,pSVar5,
                       (MethodInfo_4AAD970 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_GetEnumerator
                      );
            local_38._0_4_ = local_f8;
            local_38._4_4_ = uStack_f4;
            local_48 = local_108;
            pIStack_40 = pIStack_100;
            local_58 = (undefined1  [8])local_118._0_8_;
            pSStack_50 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_118._8_8_
            ;
            local_118._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            local_118._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_58;
            while (bVar7 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                     ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                                      local_58,(MethodInfo_4CE66D0 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_ChatManager_CommandAttribute_MoveNext
                                     ), pIVar29 = pIStack_40, pSVar16 = local_48, bVar7) {
              if (pIStack_40 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              if (*(char *)&pIStack_40[3].klass == '\0') {
                if (local_48 == (System_String_o *)0x0) {
                  ThrowNullReferenceException();
                }
                __this = System_String__ToLower(local_48,(MethodInfo *)0x0);
                if (__this == (System_String_o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar7 = System_String__StartsWith(__this,pSVar12,(MethodInfo *)0x0);
                if (bVar7) {
                  if (local_f0 ==
                      (System_Collections_Generic_List_KeyValuePair_string__ChatManager_CommandAttribute___o *
                      )0x0) {
                    ThrowNullReferenceException();
                  }
                  il2cpp_runtime_helper_02fd2dc0(local_f0,pSVar16,pIVar29);
                }
              }
            }
            il2cpp_runtime_helper_02fd2e20(local_118);
            if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
              pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
              pSVar21 = (System_Comparison_T__o *)pGVar17->__9__139_2;
            }
            else {
              pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
              pSVar21 = (System_Comparison_T__o *)pGVar17->__9__139_2;
            }
            pSVar26 = local_f0;
            if (pSVar21 == (System_Comparison_T__o *)0x0) {
              if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c)->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
                pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
              }
              pIVar29 = (Il2CppObject *)pGVar17->__9;
              pSVar21 = (System_Comparison_T__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Comparison_KeyValuePair_string_ChatManager_CommandAttribute
                                  );
              System_Comparison_KeyValuePair_object__object_____ctor
                        (pSVar21,pIVar29,
                         (intptr_t)MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__139_2,
                         (MethodInfo_48DE930 *)0x0);
              pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
              pGVar17->__9__139_2 =
                   (System_Comparison_KeyValuePair_string__ChatManager_CommandAttribute___o *)pSVar21;
              Il2CppCodeGenWriteBarrier(&pGVar17->__9__139_2);
              pSVar26 = local_f0;
            }
            local_f0 = pSVar26;
            if (pSVar26 ==
                (System_Collections_Generic_List_KeyValuePair_string__ChatManager_CommandAttribute___o *)0x0)
            {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_List_KeyValuePair_object__object____Sort_516b6d0
                      ((System_Collections_Generic_List_T__o *)pSVar26,pSVar21,
                       (MethodInfo_516B6D0 *)
                       MethodInfo_System_Collections_Generic_List_KeyValuePair_string_ChatManager_CommandAttribute_Sort
                      );
            if (0 < (pSVar26->fields)._size) {
              pSVar20 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_List_object__o *)pSVar20,
                         (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
              System_Collections_Generic_List_KeyValuePair_object__object____GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_118,
                         (System_Collections_Generic_List_T__o *)pSVar26,
                         (MethodInfo_516A1C0 *)
                         MethodInfo_System_Collections_Generic_List_KeyValuePair_string_ChatManager_CommandAttribute_GetEnumerator
                        );
              local_88 = local_108;
              pIStack_80 = pIStack_100;
              local_98 = (undefined1  [8])local_118._0_8_;
              puStack_90 = (undefined1 *)local_118._8_8_;
              local_118._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              local_118._8_8_ = local_98;
              while (pMVar24 = 
                     MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_ChatManager_CommandAttribute_Move
                    , bVar7 = System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____MoveNext
                                        ((System_Collections_Generic_List_Enumerator_T__o *)local_98,
                                         (MethodInfo_4C1CB50 *)
                                         MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_ChatManager_CommandAttribute_Move
                                        ), pIVar29 = pIStack_80, pSVar12 = local_88, bVar7) {
                if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                }
                pSVar22 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
                if (pSVar22 == (System_Text_StringBuilder_o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Text_StringBuilder__Clear(pSVar22,(MethodInfo *)0x0);
                pSVar22 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
                if (pSVar22 == (System_Text_StringBuilder_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar22 = System_Text_StringBuilder__Append_530f6a0(pSVar22,0x2f,(MethodInfo *)0x0);
                if (pSVar22 == (System_Text_StringBuilder_o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Text_StringBuilder__Append_530ed80(pSVar22,pSVar12,(MethodInfo *)0x0);
                if (pIVar29 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                if (pIVar29[3].monitor == (void *)0x0) {
                  ThrowNullReferenceException();
                }
                if (*(long *)((long)pIVar29[3].monitor + 0x18) != 0) {
                  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                  }
                  pSVar22 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
                  if (pSVar22 == (System_Text_StringBuilder_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Text_StringBuilder__Append_530f6a0(pSVar22,0x20,(MethodInfo *)0x0);
                  pvVar23 = pIVar29[3].monitor;
                  if (pvVar23 == (void *)0x0) {
label_059366d2:
                    ThrowNullReferenceException();
                  }
                  uVar27 = 0;
                  while ((long)uVar27 < (long)*(int *)((long)pvVar23 + 0x18)) {
                    if (uVar27 != 0) {
                      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                      }
                      pSVar22 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
                      if (pSVar22 == (System_Text_StringBuilder_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      System_Text_StringBuilder__Append_530f6a0(pSVar22,0x20,(MethodInfo *)0x0);
                    }
                    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                    }
                    pSVar22 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
                    if (pSVar22 == (System_Text_StringBuilder_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar22 = System_Text_StringBuilder__Append_530f6a0(pSVar22,0x5b,(MethodInfo *)0x0);
                    pvVar23 = pIVar29[3].monitor;
                    if (pvVar23 == (void *)0x0) {
                      ThrowNullReferenceException();
                    }
                    if (*(uint *)((long)pvVar23 + 0x18) <= uVar27) {
                      ThrowIndexOutOfRangeException();
                    }
                    if (pSVar22 == (System_Text_StringBuilder_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar22 = System_Text_StringBuilder__Append_530ed80
                                        (pSVar22,*(System_String_o **)((long)pvVar23 + uVar27 * 8 + 0x20),
                                         (MethodInfo *)0x0);
                    if (pSVar22 == (System_Text_StringBuilder_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    System_Text_StringBuilder__Append_530f6a0(pSVar22,0x5d,(MethodInfo *)0x0);
                    uVar27 = uVar27 + 1;
                    pvVar23 = pIVar29[3].monitor;
                    if (pvVar23 == (void *)0x0) goto label_059366d2;
                  }
                }
                if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                }
                pSVar22 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
                if (pSVar22 == (System_Text_StringBuilder_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar12 = (*(pSVar22->klass->vtable)._3_ToString.methodPtr)
                                    (pSVar22,(pSVar22->klass->vtable)._3_ToString.method);
                pIVar25 = pIVar29->klass;
                bVar1 = (TypeInfo_GameManagers_ChatManager_CLCommandAttribute->_2).typeHierarchyDepth;
                if ((pIVar25->_2).typeHierarchyDepth < bVar1) {
                  pIVar29 = (Il2CppObject *)0x0;
                }
                else {
                  pIVar25 = (Il2CppClass *)(pIVar25->_2).typeHierarchy;
                  if (*(GameManagers_ChatManager_CLCommandAttribute_c **)
                       ((long)(pIVar25->vtable + -0x14) + (ulong)bVar1 * 8) !=
                      TypeInfo_GameManagers_ChatManager_CLCommandAttribute) {
                    pIVar29 = (Il2CppObject *)0x0;
                  }
                }
                iVar10 = 8;
                if (pIVar29 == (Il2CppObject *)0x0) {
                  iVar10 = 2;
                }
                if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                }
                pSVar12 = GameManagers_ChatManager__GetColorString(pSVar12,iVar10,false,(MethodInfo *)pIVar25)
                ;
                if (pSVar20 == (System_Collections_Generic_List_string__o *)0x0) {
                  ThrowNullReferenceException();
                }
                il2cpp_runtime_helper_02fa8fa0(pSVar20,pSVar12,MethodInfo_System_Collections_Generic_List_string_Add);
              }
              il2cpp_runtime_helper_02fd2e50(local_118);
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              GameManagers_ChatManager__ShowCommandSuggestions(pSVar20,pMVar24);
              if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
              }
              pSVar26 = local_f0;
              pSVar20 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
              if (pSVar20 == (System_Collections_Generic_List_string__o *)0x0) {
                ThrowNullReferenceException();
              }
              il2cpp_runtime_helper_02fd2ba0(pSVar20,MethodInfo_System_Collections_Generic_List_string_Clear);
              System_Collections_Generic_List_KeyValuePair_object__object____GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_118,
                         (System_Collections_Generic_List_T__o *)pSVar26,
                         (MethodInfo_516A1C0 *)
                         MethodInfo_System_Collections_Generic_List_KeyValuePair_string_ChatManager_CommandAttribute_GetEnumerator
                        );
              local_88 = local_108;
              pIStack_80 = pIStack_100;
              local_98 = (undefined1  [8])local_118._0_8_;
              puStack_90 = (undefined1 *)local_118._8_8_;
              local_118._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              local_118._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_98
              ;
              while (bVar7 = System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____MoveNext
                                       ((System_Collections_Generic_List_Enumerator_T__o *)local_98,
                                        (MethodInfo_4C1CB50 *)
                                        MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_ChatManager_CommandAttribute_Move
                                       ), pSVar12 = local_88, bVar7) {
                if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
                }
                pSVar20 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
                if (pSVar20 == (System_Collections_Generic_List_string__o *)0x0) {
                  ThrowNullReferenceException();
                }
                il2cpp_runtime_helper_02fa8fa0(pSVar20,pSVar12,MethodInfo_System_Collections_Generic_List_string_Add);
              }
              il2cpp_runtime_helper_02fd2e80(local_118);
            }
          }
        }
      }
      else {
        pSVar12 = System_String__Substring_53042f0(input,1,iVar10 + -1,(MethodInfo *)0x0);
        if (pSVar12 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar12 = System_String__ToLower(pSVar12,(MethodInfo *)0x0);
        bVar7 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
        if (bVar7) goto label_05935a6f;
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar24 = 
        MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue;
        bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (pSVar5,(Il2CppObject *)pSVar12,&local_78,
                           (MethodInfo_4AAF440 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
                          );
        if (bVar7) {
          if (local_78 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          iVar28 = *(int *)&local_78[4].klass;
          if (iVar28 - 1U < 2) {
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            iVar10 = GameManagers_ChatManager__GetAutofillTokenStart(input,iVar10,iVar28,pMVar24);
            pSVar12 = System_String__Substring(input,iVar10 + 1,(MethodInfo *)0x0);
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            bVar7 = System_String__op_Inequality
                              (pSVar12,TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->
                                       PartialText,(MethodInfo *)0x0);
            if (bVar7) {
              if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
              }
              pGVar13 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
              if (pGVar13->IsTabCompleting == false) {
                if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
                  pGVar13 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
                }
                if (pGVar13->IsProcessingClick == false) {
                  pGVar30 = TypeInfo_GameManagers_ChatManager;
                  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                  }
                  GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)pGVar30);
                  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0)
                  {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
                  }
                  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = pSVar12;
                  Il2CppCodeGenWriteBarrier
                            (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText);
                  pGVar13 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
                  pGVar13->CurrentIndex = -1;
                  pGVar13->Type = 3;
                  pGVar13->IsTabCompleting = false;
                  GameManagers_ChatManager_SuggestionState__SetOriginalContext
                            (pSVar12,iVar10 + 1,(input->fields)._stringLength,(MethodInfo *)0x0);
                  local_f0 = (System_Collections_Generic_List_KeyValuePair_string__ChatManager_CommandAttribute___o
                              *)il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Player);
                  System_Collections_Generic_List_object____ctor
                            ((System_Collections_Generic_List_object__o *)local_f0,
                             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Player_ctor);
                  if (pSVar12 == (System_String_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  local_c0 = System_String__ToLower(pSVar12,(MethodInfo *)0x0);
                  pSVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_char_bool);
                  System_Func_char__bool____ctor
                            (pSVar14,(Il2CppObject *)0x0,(intptr_t)MethodInfo_System_Char_IsDigit,
                             (MethodInfo_4F11EC0 *)0x0);
                  bVar7 = System_Linq_Enumerable__All_char_
                                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar12,
                                     (System_Func_TSource__bool__o *)pSVar14,
                                     (MethodInfo_34DE8B0 *)MethodInfo_System_Linq_Enumerable_All_char);
                  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
                  }
                  pPVar15 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
                  local_11c = 0;
                  if (pPVar15 == (Photon_Realtime_Player_array *)0x0) {
                    ThrowNullReferenceException();
                  }
                  uVar4 = (uint)pPVar15->max_length;
                  pMVar24 = (MethodInfo *)(ulong)uVar4;
                  if (0 < (int)uVar4) {
                    pSVar26 = local_f0;
                    do {
                      if ((uint)pMVar24 <= local_11c) {
                        ThrowIndexOutOfRangeException();
                      }
                      pPVar6 = pPVar15->m_Items[(int)local_11c];
                      if (bVar7) {
                        bVar8 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
                        if (bVar8) {
label_05935caf:
                          if (pSVar26 ==
                              (System_Collections_Generic_List_KeyValuePair_string__ChatManager_CommandAttribute___o
                               *)0x0) {
                            ThrowNullReferenceException();
                          }
                          goto label_05935cb8;
                        }
                        if (pPVar6 == (Photon_Realtime_Player_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        local_c4 = (pPVar6->fields).actorNumber;
                        pSVar16 = System_Int32__ToString(&local_c4,(MethodInfo *)0x0);
                        if (pSVar16 == (System_String_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        bVar8 = System_String__StartsWith(pSVar16,pSVar12,(MethodInfo *)0x0);
                        if (bVar8) goto label_05935caf;
                      }
                      else {
                        if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
                        }
                        pSVar16 = PhotonExtensions__GetStringProperty
                                            (pPVar6,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                                             "",(MethodInfo *)0x0);
                        if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
                        }
                        pSVar16 = Anticheat_ChatFilter__FilterSizeTag(pSVar16,(MethodInfo *)0x0);
                        if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
                        }
                        pSVar16 = MiscExtensions__StripRichText(pSVar16,(MethodInfo *)0x0);
                        if (pSVar16 == (System_String_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pSVar16 = System_String__ToLower(pSVar16,(MethodInfo *)0x0);
                        bVar8 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
                        pSVar26 = local_f0;
                        if (!bVar8) {
                          if (pSVar16 == (System_String_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          bVar8 = System_String__Contains(pSVar16,local_c0,(MethodInfo *)0x0);
                          if (!bVar8) goto label_05935ccd;
                        }
                        if (pSVar26 ==
                            (System_Collections_Generic_List_KeyValuePair_string__ChatManager_CommandAttribute___o
                             *)0x0) {
                          ThrowNullReferenceException();
                        }
label_05935cb8:
                        il2cpp_runtime_helper_02fd2d40(pSVar26,pPVar6,MethodInfo_System_Collections_Generic_List_Player_Add);
                      }
label_05935ccd:
                      local_11c = local_11c + 1;
                      uVar4 = (uint)pPVar15->max_length;
                      pMVar24 = (MethodInfo *)(ulong)uVar4;
                    } while ((int)local_11c < (int)uVar4);
                  }
                  if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
                    pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
                    pSVar21 = (System_Comparison_T__o *)pGVar17->__9__139_0;
                  }
                  else {
                    pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
                    pSVar21 = (System_Comparison_T__o *)pGVar17->__9__139_0;
                  }
                  pSVar26 = local_f0;
                  if (pSVar21 == (System_Comparison_T__o *)0x0) {
                    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c)->_2).cctor_finished_or_no_cctor
                        == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
                      pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
                    }
                    pIVar29 = (Il2CppObject *)pGVar17->__9;
                    pSVar21 = (System_Comparison_T__o *)
                              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Comparison_Player);
                    pMVar24 = (MethodInfo *)0x0;
                    System_Comparison_object____ctor
                              ((System_Comparison_object__o *)pSVar21,pIVar29,
                               (intptr_t)MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__139_0,
                               (MethodInfo_48E28F0 *)0x0);
                    pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
                    pGVar17->__9__139_0 = (System_Comparison_Player__o *)pSVar21;
                    Il2CppCodeGenWriteBarrier(&pGVar17->__9__139_0);
                    pSVar26 = local_f0;
                  }
                  local_f0 = pSVar26;
                  if (pSVar26 ==
                      (System_Collections_Generic_List_KeyValuePair_string__ChatManager_CommandAttribute___o *
                      )0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_List_object___Sort_395f500
                            ((System_Collections_Generic_List_object__o *)pSVar26,pSVar21,
                             (MethodInfo_395F500 *)MethodInfo_System_Collections_Generic_List_Player_Sort);
                  if (0 < (pSVar26->fields)._size) {
                    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                    }
                    pSVar12 = GameManagers_ChatManager__GetColorString("Matching players:",3,false,pMVar24);
                    GameManagers_ChatManager__AddLine
                              (pSVar12,3,true,(System_Nullable_DateTime__o)ZEXT816(0),-1,true,false,-1,false,
                               in_stack_fffffffffffffec8);
                    if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
                    }
                    pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
                    pSVar18 = pGVar17->__9__139_1;
                    if (pSVar18 == (System_Func_Player__string__o *)0x0) {
                      if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
                        pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
                      }
                      pIVar29 = (Il2CppObject *)pGVar17->__9;
                      pSVar18 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Player_string);
                      System_Func_object__object____ctor
                                ((System_Func_object__object__o *)pSVar18,pIVar29,
                                 (intptr_t)MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__139_1
                                 ,(MethodInfo_4F19B50 *)0x0);
                      pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
                      pGVar17->__9__139_1 = pSVar18;
                      Il2CppCodeGenWriteBarrier(&pGVar17->__9__139_1);
                    }
                    pSVar19 = System_Linq_Enumerable__Select_object__object_
                                        ((System_Collections_Generic_IEnumerable_TSource__o *)local_f0,
                                         (System_Func_TSource__TResult__o *)pSVar18,
                                         (MethodInfo_34F60F0 *)
                                         MethodInfo_System_Linq_Enumerable_Select_Player_string);
                    pMVar24 = MethodInfo_System_Linq_Enumerable_ToList_string;
                    pSVar20 = (System_Collections_Generic_List_string__o *)
                              System_Linq_Enumerable__ToList_object_
                                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar19,
                                         (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string
                                        );
                    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                    }
                    GameManagers_ChatManager__ShowCommandSuggestions(pSVar20,pMVar24);
                    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor ==
                        0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
                    }
                    pSVar20 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
                    if (pSVar20 == (System_Collections_Generic_List_string__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    il2cpp_runtime_helper_02fd2ba0(pSVar20,MethodInfo_System_Collections_Generic_List_string_Clear);
                    System_Collections_Generic_List_object___GetEnumerator
                              ((System_Collections_Generic_List_Enumerator_T__o *)local_118,
                               (System_Collections_Generic_List_object__o *)local_f0,
                               (MethodInfo_395E050 *)
                               MethodInfo_System_Collections_Generic_List_Player_GetEnumerator);
                    local_a8 = local_108;
                    local_b8 = (undefined1  [8])local_118._0_8_;
                    pSStack_b0 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                                 local_118._8_8_;
                    local_118._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                    local_118._8_8_ =
                         (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_b8;
                    while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                             ((System_Collections_Generic_List_Enumerator_object__o *)local_b8
                                              ,(MethodInfo_4C45C50 *)
                                               MethodInfo_System_Collections_Generic_List_Enumerator_Player_MoveNext
                                             ), pSVar12 = local_a8, bVar7) {
                      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor
                          == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
                      }
                      if (pSVar12 == (System_String_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar20 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
                      local_11c = *(uint *)&(*(uint64_t *)((char *)pSVar12 + 0x18));
                      pSVar12 = System_Int32__ToString((int32_t *)&local_11c,(MethodInfo *)0x0);
                      if (pSVar20 == (System_Collections_Generic_List_string__o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      il2cpp_runtime_helper_02fa8fa0(pSVar20,pSVar12,MethodInfo_System_Collections_Generic_List_string_Add);
                    }
                    il2cpp_runtime_helper_02fd2d90(local_118);
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      bVar7 = System_String__Contains(input,"@",(MethodInfo *)0x0);
      if (bVar7) {
        iVar10 = System_String__LastIndexOf(input,0x40,(MethodInfo *)0x0);
        pSVar12 = System_String__Substring(input,iVar10 + 1,(MethodInfo *)0x0);
        if (pSVar12 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar11 = System_String__IndexOf(pSVar12,0x20,(MethodInfo *)0x0);
        if ((-1 < iVar11) || (bVar7 = System_String__IsNullOrWhiteSpace(pSVar12,(MethodInfo *)0x0), bVar7)) {
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            uVar2 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick;
            pGVar30 = TypeInfo_GameManagers_ChatManager;
          }
          else {
            uVar2 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick;
            pGVar30 = TypeInfo_GameManagers_ChatManager;
          }
          TypeInfo_GameManagers_ChatManager = pGVar30;
          if ((bool)uVar2 == false) {
            if ((pGVar30->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)pGVar30);
            }
            GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)pGVar30);
            uVar3 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
          }
          else {
            uVar3 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
          }
          if (uVar3 == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText =
               "";
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText);
          return;
        }
        if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        }
        bVar7 = System_String__op_Inequality
                          (pSVar12,TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->
                                   PartialText,(MethodInfo *)0x0);
        if (bVar7) {
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick == false) {
            pGVar30 = TypeInfo_GameManagers_ChatManager;
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)pGVar30);
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = pSVar12;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText);
            pGVar13 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
            pGVar13->CurrentIndex = -1;
            pGVar13->Type = 2;
            pSVar16 = System_String__Concat_52f0320("@",pSVar12,(MethodInfo *)0x0);
            GameManagers_ChatManager_SuggestionState__SetOriginalContext
                      (pSVar16,iVar10,iVar10 + 1 + (pSVar12->fields)._stringLength,(MethodInfo *)0x0);
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Player);
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Player_ctor);
            local_f0 = (System_Collections_Generic_List_KeyValuePair_string__ChatManager_CommandAttribute___o
                        *)System_String__ToLower(pSVar12,(MethodInfo *)0x0);
            pSVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_char_bool);
            System_Func_char__bool____ctor
                      (pSVar14,(Il2CppObject *)0x0,(intptr_t)MethodInfo_System_Char_IsDigit,
                       (MethodInfo_4F11EC0 *)0x0);
            cVar9 = System_Linq_Enumerable__All_char_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar12,
                               (System_Func_TSource__bool__o *)pSVar14,
                               (MethodInfo_34DE8B0 *)MethodInfo_System_Linq_Enumerable_All_char);
            if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
            }
            pPVar15 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
            local_11c = 0;
            if (pPVar15 == (Photon_Realtime_Player_array *)0x0) {
              ThrowNullReferenceException();
            }
            uVar4 = (uint)pPVar15->max_length;
            pMVar24 = (MethodInfo *)(ulong)uVar4;
            if (0 < (int)uVar4) {
              local_c0 = (System_String_o *)CONCAT71(local_c0._1_7_,cVar9);
              do {
                if ((uint)pMVar24 <= local_11c) {
                  ThrowIndexOutOfRangeException();
                }
                pPVar6 = pPVar15->m_Items[(int)local_11c];
                if (cVar9 == '\0') {
                  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
                  }
                  pSVar16 = PhotonExtensions__GetStringProperty
                                      (pPVar6,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                                       "",(MethodInfo *)0x0);
                  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
                  }
                  pSVar16 = Anticheat_ChatFilter__FilterSizeTag(pSVar16,(MethodInfo *)0x0);
                  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
                  }
                  pSVar16 = MiscExtensions__StripRichText(pSVar16,(MethodInfo *)0x0);
                  cVar9 = (char)local_c0;
                  if (pSVar16 == (System_String_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pSVar16 = System_String__ToLower(pSVar16,(MethodInfo *)0x0);
                  if (pSVar16 == (System_String_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar7 = System_String__Contains(pSVar16,(System_String_o *)local_f0,(MethodInfo *)0x0);
                  if (bVar7) {
                    if (__this_00 == (System_Collections_Generic_List_Player__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    goto label_05936d27;
                  }
                }
                else {
                  if (pPVar6 == (Photon_Realtime_Player_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  local_c4 = (pPVar6->fields).actorNumber;
                  pSVar16 = System_Int32__ToString(&local_c4,(MethodInfo *)0x0);
                  if (pSVar16 == (System_String_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar7 = System_String__StartsWith(pSVar16,pSVar12,(MethodInfo *)0x0);
                  if (bVar7) {
                    if (__this_00 == (System_Collections_Generic_List_Player__o *)0x0) {
                      ThrowNullReferenceException();
                    }
label_05936d27:
                    il2cpp_runtime_helper_02fd2d40(__this_00,pPVar6,MethodInfo_System_Collections_Generic_List_Player_Add);
                  }
                }
                local_11c = local_11c + 1;
                uVar4 = (uint)pPVar15->max_length;
                pMVar24 = (MethodInfo *)(ulong)uVar4;
              } while ((int)local_11c < (int)uVar4);
            }
            if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
              pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
              pSVar21 = (System_Comparison_T__o *)pGVar17->__9__139_3;
            }
            else {
              pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
              pSVar21 = (System_Comparison_T__o *)pGVar17->__9__139_3;
            }
            if (pSVar21 == (System_Comparison_T__o *)0x0) {
              if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c)->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
                pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
              }
              pIVar29 = (Il2CppObject *)pGVar17->__9;
              pSVar21 = (System_Comparison_T__o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Comparison_Player);
              pMVar24 = (MethodInfo *)0x0;
              System_Comparison_object____ctor
                        ((System_Comparison_object__o *)pSVar21,pIVar29,
                         (intptr_t)MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__139_3,
                         (MethodInfo_48E28F0 *)0x0);
              pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
              pGVar17->__9__139_3 = (System_Comparison_Player__o *)pSVar21;
              Il2CppCodeGenWriteBarrier(&pGVar17->__9__139_3);
            }
            if (__this_00 == (System_Collections_Generic_List_Player__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_List_object___Sort_395f500
                      ((System_Collections_Generic_List_object__o *)__this_00,pSVar21,
                       (MethodInfo_395F500 *)MethodInfo_System_Collections_Generic_List_Player_Sort);
            if ((__this_00->fields)._size < 1) {
              pGVar30 = TypeInfo_GameManagers_ChatManager;
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              goto label_05936b06;
            }
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            pSVar12 = GameManagers_ChatManager__GetColorString("Matching players:",3,false,pMVar24);
            GameManagers_ChatManager__AddLine
                      (pSVar12,3,true,(System_Nullable_DateTime__o)ZEXT816(0),-1,true,false,-1,false,
                       in_stack_fffffffffffffec8);
            if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
            }
            pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
            pSVar18 = pGVar17->__9__139_4;
            if (pSVar18 == (System_Func_Player__string__o *)0x0) {
              if ((TypeInfo_GameManagers_ChatManager_c->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_c);
                pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
              }
              pIVar29 = (Il2CppObject *)pGVar17->__9;
              pSVar18 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Player_string);
              System_Func_object__object____ctor
                        ((System_Func_object__object__o *)pSVar18,pIVar29,
                         (intptr_t)MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__139_4,
                         (MethodInfo_4F19B50 *)0x0);
              pGVar17 = TypeInfo_GameManagers_ChatManager_c->static_fields;
              pGVar17->__9__139_4 = pSVar18;
              Il2CppCodeGenWriteBarrier(&pGVar17->__9__139_4);
            }
            pSVar19 = System_Linq_Enumerable__Select_object__object_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)__this_00,
                                 (System_Func_TSource__TResult__o *)pSVar18,
                                 (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_Player_string)
            ;
            pMVar24 = MethodInfo_System_Linq_Enumerable_ToList_string;
            pSVar20 = (System_Collections_Generic_List_string__o *)
                      System_Linq_Enumerable__ToList_object_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar19,
                                 (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__ShowCommandSuggestions(pSVar20,pMVar24);
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            pSVar20 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
            if (pSVar20 == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_02fd2ba0(pSVar20,MethodInfo_System_Collections_Generic_List_string_Clear);
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_118,
                       (System_Collections_Generic_List_object__o *)__this_00,
                       (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Player_GetEnumerator);
            local_a8 = local_108;
            local_b8 = (undefined1  [8])local_118._0_8_;
            pSStack_b0 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_118._8_8_
            ;
            local_118._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            local_118._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_b8;
            while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     ((System_Collections_Generic_List_Enumerator_object__o *)local_b8,
                                      (MethodInfo_4C45C50 *)
                                      MethodInfo_System_Collections_Generic_List_Enumerator_Player_MoveNext),
                  pSVar12 = local_a8, bVar7) {
              if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
              }
              if (pSVar12 == (System_String_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar20 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
              local_11c = *(uint *)&(*(uint64_t *)((char *)pSVar12 + 0x18));
              pSVar12 = System_Int32__ToString((int32_t *)&local_11c,(MethodInfo *)0x0);
              if (pSVar20 == (System_Collections_Generic_List_string__o *)0x0) {
                ThrowNullReferenceException();
              }
              il2cpp_runtime_helper_02fa8fa0(pSVar20,pSVar12,MethodInfo_System_Collections_Generic_List_string_Add);
            }
            il2cpp_runtime_helper_02fd2eb0(local_118);
          }
        }
      }
      else {
        if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        }
        if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsProcessingClick == false) {
          pGVar30 = TypeInfo_GameManagers_ChatManager;
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
label_05936b06:
          GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)pGVar30);
        }
      }
    }
    uVar3 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor != 0) {
      if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type == 1) goto label_059348aa;
label_05934854:
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0)
      goto label_05934962;
label_05934861:
      iVar28 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
joined_r0x0593486c:
      if (iVar28 == 2) {
        if (input == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar7 = System_String__Contains(input,"@",(MethodInfo *)0x0);
        if (bVar7) {
          iVar10 = System_String__LastIndexOf(input,0x40,(MethodInfo *)0x0);
          if (-1 < iVar10) {
            pSVar12 = System_String__Substring(input,iVar10 + 1,(MethodInfo *)0x0);
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            pSVar20 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
            if (pSVar20 == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_118,
                       (System_Collections_Generic_List_object__o *)pSVar20,
                       (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
            local_d8 = local_108;
            local_e8 = (undefined1  [8])local_118._0_8_;
            pSStack_e0 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_118._8_8_
            ;
            local_118._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            local_118._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_e8;
label_05934a40:
            bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_e8,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
            if (bVar7) goto code_r0x05934a54;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_e8,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            pSVar20 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
            if (pSVar20 == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_118,
                       (System_Collections_Generic_List_object__o *)pSVar20,
                       (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
            local_d8 = local_108;
            local_e8 = (undefined1  [8])local_118._0_8_;
            pSStack_e0 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_118._8_8_
            ;
            local_118._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            local_118._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_e8;
            do {
              bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_e8,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
              if (!bVar7) {
                il2cpp_runtime_helper_02fd2cb0(local_118);
                pGVar30 = TypeInfo_GameManagers_ChatManager;
                if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                }
                GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)pGVar30);
                return;
              }
              if (local_d8 == (System_String_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar7 = System_String__StartsWith_53002b0(local_d8,pSVar12,5,(MethodInfo *)0x0);
            } while (!bVar7);
            il2cpp_runtime_helper_02fd2cb0(local_118);
            uVar3 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
            goto joined_r0x05934f78;
          }
          goto label_05934fa0;
        }
        uVar3 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar3 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
      }
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        iVar28 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
      }
      else {
        iVar28 = *(int *)((long)((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState)->
                                static_fields + 0x24);
      }
      if (iVar28 == 3) {
        if (input == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar7 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
        if ((bVar7) && (iVar10 = System_String__IndexOf(input,0x20,(MethodInfo *)0x0), iVar10 != -1)) {
          pSVar12 = System_String__Substring_53042f0(input,1,iVar10 + -1,(MethodInfo *)0x0);
          if (pSVar12 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar12 = System_String__ToLower(pSVar12,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
          if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                            (pSVar5,(Il2CppObject *)pSVar12,&local_60,
                             (MethodInfo_4AAF440 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
                            );
          iVar28 = 1;
          if (bVar7) {
            if (local_60 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            iVar28 = *(int *)&local_60[4].klass;
          }
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          if ((iVar28 != 2) ||
             (iVar11 = System_String__LastIndexOf(input,0x20,(MethodInfo *)0x0), iVar11 <= iVar10)) {
            iVar11 = iVar10;
          }
          pSVar12 = System_String__Substring(input,iVar11 + 1,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          pSVar20 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
          if (pSVar20 == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_118,
                     (System_Collections_Generic_List_object__o *)pSVar20,
                     (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
          local_d8 = local_108;
          local_e8 = (undefined1  [8])local_118._0_8_;
          pSStack_e0 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_118._8_8_;
          local_118._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_118._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_e8;
          while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   ((System_Collections_Generic_List_Enumerator_object__o *)local_e8,
                                    (MethodInfo_4C45C50 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
                bVar7) {
            bVar7 = System_String__Equals_52ffe30(pSVar12,local_d8,5,(MethodInfo *)0x0);
            if (bVar7) {
label_05934c3b:
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_e8,
                         (MethodInfo_4C45C40 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
              return;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)local_e8,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          pSVar20 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
          if (pSVar20 == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_118,
                     (System_Collections_Generic_List_object__o *)pSVar20,
                     (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
          local_d8 = local_108;
          local_e8 = (undefined1  [8])local_118._0_8_;
          pSStack_e0 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_118._8_8_;
          local_118._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_118._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_e8;
          do {
            bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_e8,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
            if (!bVar7) {
              il2cpp_runtime_helper_02fd2d10(local_118);
              pGVar30 = TypeInfo_GameManagers_ChatManager;
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)pGVar30);
              return;
            }
            if (local_d8 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar7 = System_String__StartsWith_53002b0(local_d8,pSVar12,5,(MethodInfo *)0x0);
          } while (!bVar7);
          il2cpp_runtime_helper_02fd2d10(local_118);
          uVar3 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
joined_r0x05934f78:
          if (uVar3 == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          pGVar13 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
          pGVar13->OriginalPartialText = "";
          Il2CppCodeGenWriteBarrier(&pGVar13->OriginalPartialText);
        }
      }
label_05934fa0:
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      pGVar13 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
      pGVar13->OriginalPartialText = "";
      Il2CppCodeGenWriteBarrier(&pGVar13->OriginalPartialText);
      goto label_05934fd2;
    }
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    if (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type != 1) goto label_05934854;
label_059348aa:
    if (input == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar7 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
    if (!bVar7) {
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor != 0)
      goto label_05934861;
label_05934962:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      iVar28 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
      goto joined_r0x0593486c;
    }
    iVar10 = System_String__IndexOf(input,0x20,(MethodInfo *)0x0);
    if (iVar10 != -1) {
      pSVar12 = System_String__Substring_53042f0(input,1,iVar10 + -1,(MethodInfo *)0x0);
      if (pSVar12 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      System_String__ToLower(pSVar12,(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      pGVar13 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
      pGVar13->OriginalPartialText = "";
      Il2CppCodeGenWriteBarrier(&pGVar13->OriginalPartialText);
      TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting = false;
      goto label_05934fa0;
    }
    pSVar12 = System_String__Substring(input,1,(MethodInfo *)0x0);
    if (pSVar12 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar12 = System_String__ToLower(pSVar12,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    pSVar20 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
    if (pSVar20 == (System_Collections_Generic_List_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_118,
               (System_Collections_Generic_List_object__o *)pSVar20,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_d8 = local_108;
    local_e8 = (undefined1  [8])local_118._0_8_;
    pSStack_e0 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_118._8_8_;
    local_118._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_118._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_e8;
    do {
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_e8,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
      if (!bVar7) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)local_e8,
                   (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose)
        ;
        if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        }
        pSVar20 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
        if (pSVar20 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_118,
                   (System_Collections_Generic_List_object__o *)pSVar20,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
        local_d8 = local_108;
        local_e8 = (undefined1  [8])local_118._0_8_;
        pSStack_e0 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_118._8_8_;
        local_118._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_118._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_e8;
        do {
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_e8,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
          if (!bVar7) {
            il2cpp_runtime_helper_02fd2c50(local_118);
            pGVar30 = TypeInfo_GameManagers_ChatManager;
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)pGVar30);
            return;
          }
          if (local_d8 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar7 = System_String__StartsWith_53002b0(local_d8,pSVar12,5,(MethodInfo *)0x0);
        } while (!bVar7);
        il2cpp_runtime_helper_02fd2c50(local_118);
        uVar3 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
        goto joined_r0x05934f78;
      }
      bVar7 = System_String__Equals_52ffe30(pSVar12,local_d8,5,(MethodInfo *)0x0);
    } while (!bVar7);
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_e8,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    uVar3 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
  }
joined_r0x05936b15:
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  pGVar13 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
label_05936b26:
  pGVar13->IsTabCompleting = false;
  return;
code_r0x05934a54:
  bVar7 = System_String__Equals_52ffe30(pSVar12,local_d8,5,(MethodInfo *)0x0);
  if (bVar7) goto label_05934c3b;
  goto label_05934a40;
}


// GameManagers.ChatManager$$ShowCommandSuggestions
// il2cpp: void GameManagers_ChatManager__ShowCommandSuggestions (System_Collections_Generic_List_string__o* suggestions, const MethodInfo* method);
// 0x5937530
// eh: try 0x59375ec..0x5937852 -> pad 0x593785e (+9 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x593788e..0x5937893 -> pad 0x5937898 cleanup
// eh: try 0x593789b..0x59378a5 -> pad 0x59378ad catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5937566: cmp byte ptr [rip + 0x1c0e258], 0
// asm:   0x59375dc: nop dword ptr [rax]
// asm:   0x5937680: lea rbp, [rip + 0x193eef9]  ; TypeInfo_GameManagers_ChatManager
// asm:   0x5937705: xor ebx, ebx
// asm:   0x593784b: jmp 0x5937819
// asm:   0x5937852: mov rdi, rbx
// asm:   0x5937855: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x593785a: jmp 0x5937866
// asm:   0x593785c: jmp 0x5937876
// asm:   0x593785e: jmp 0x5937876
// asm:   0x5937860: jmp 0x5937876
// asm:   0x5937862: jmp 0x5937876
// asm:   0x5937864: jmp 0x5937876
// asm:   0x5937866: mov rbx, rax
// asm:   0x5937869: lea rbp, [rip + 0x193ed10]  ; TypeInfo_GameManagers_ChatManager
// asm:   0x5937870: jmp 0x5937879
// asm:   0x5937872: jmp 0x5937876
// asm:   0x5937874: jmp 0x5937876
// asm:   0x5937876: mov rbx, rax
// asm:   0x5937879: cmp edx, 1
// asm:   0x593787c: jne 0x593789b
// asm:   0x593787e: mov rdi, rbx
// asm:   0x5937881: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5937886: mov rbx, qword ptr [rax]
// asm:   0x5937889: mov qword ptr [rsp + 8], rbx
// asm:   0x593788e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5937893: jmp 0x5937707
// asm:   0x5937898: mov rbx, rax
// asm:   0x593789b: lea rdi, [rsp + 8]
// asm:   0x59378a0: call 0x2fd2ee0  ; il2cpp_runtime_helper_02fd2ee0()
// asm:   0x59378a5: mov rdi, rbx
// asm:   0x59378a8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59378ad: mov rdi, rax
// asm:   0x59378b0: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_ChatManager__ShowCommandSuggestions
               (System_Collections_Generic_List_string__o *suggestions,MethodInfo *method)

{
  long lVar1;
  uint32_t uVar2;
  int iVar3;
  GameManagers_ChatManager_StaticFields *pGVar4;
  System_String_o *pSVar5;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppObject *arg0;
  MethodInfo *in_RCX;
  Il2CppClass *klass;
  GameManagers_ChatManager_c *method_00;
  int32_t index;
  MethodInfo *in_stack_ffffffffffffffa8;
  int32_t local_44 [5];
  
  if (Il2CppMethodInitialized_075457e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    il2cpp_codegen_initialize_runtime_metadata(&"> ");
    il2cpp_codegen_initialize_runtime_metadata(&"<link=\"suggestion_{0}\">{1}</link>");
    il2cpp_codegen_initialize_runtime_metadata(&" <");
    Il2CppMethodInitialized_075457e5 = '\x01';
    uVar2 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  if (Il2CppMethodInitialized_075457c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_075457c5 = '\x01';
    uVar2 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = *(uint32_t *)((long)TypeInfo_GameManagers_ChatManager + 0xe4);
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    pGVar4 = TypeInfo_GameManagers_ChatManager->static_fields;
    iVar3 = pGVar4->_lineBatchDepth;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    pGVar4 = ((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->static_fields;
    iVar3 = pGVar4->_lineBatchDepth;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (iVar3 == 0) {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
      TypeInfo_GameManagers_ChatManager->static_fields->_pendingBatchSync = false;
      uVar2 = (((GameManagers_ChatManager_c *)klass)->_2).cctor_finished_or_no_cctor;
    }
    else {
      pGVar4->_pendingBatchSync = false;
      uVar2 = (klass->_2).cctor_finished_or_no_cctor;
    }
  }
  else {
    uVar2 = (klass->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  lVar1 = (long)klass->static_fields + 0x84;
  *(int *)lVar1 = *(int *)lVar1 + 1;
  local_44[1] = 0;
  local_44[2] = 0;
  if (suggestions == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  if (0 < (suggestions->fields)._size) {
    index = 0;
    do {
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      iVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->CurrentIndex;
      pSVar5 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)suggestions,index,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if (index == iVar3) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        str0 = GameManagers_ChatManager__GetColorString("> ",2,false,in_RCX);
        str2 = GameManagers_ChatManager__GetColorString(" <",2,false,in_RCX);
        pSVar5 = System_String__Concat_5301f10(str0,pSVar5,str2,(MethodInfo *)0x0);
      }
      local_44[0] = index;
      arg0 = il2cpp_vm_Object_Box(g_data_07556710,local_44);
      pSVar5 = System_String__Format_5302c50
                         ("<link=\"suggestion_{0}\">{1}</link>",arg0,(Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      in_RCX = (MethodInfo *)0x0;
      GameManagers_ChatManager__AddLine
                (pSVar5,0,true,(System_Nullable_DateTime__o)ZEXT816(0),-1,true,false,-1,false,
                 in_stack_ffffffffffffffa8);
      index = index + 1;
    } while (index < (suggestions->fields)._size);
  }
  method_00 = TypeInfo_GameManagers_ChatManager;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__EndLineBatch((MethodInfo *)method_00);
  return;
}


// GameManagers.ChatManager$$HandleTabComplete
// il2cpp: void GameManagers_ChatManager__HandleTabComplete (const MethodInfo* method);
// 0x59378c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59378f3: jmp 0x59379b4
// asm:   0x5937a14: jmp 0x5937c27
// asm:   0x5937b96: jmp 0x5937c27

void GameManagers_ChatManager__HandleTabComplete(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_string__o *__this;
  bool bVar2;
  int32_t iVar3;
  UI_ChatPanel_o *__this_00;
  System_String_o *__this_01;
  System_String_o *suggestion;
  MethodInfo *newText;
  GameManagers_ChatManager_SuggestionState_StaticFields *pGVar4;
  int iVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar6;
  Il2CppClass *pIVar7;
  MethodInfo *method_00;
  GameManagers_ChatManager_c *method_01;
  
  if (Il2CppMethodInitialized_075457e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_075457e6 = '\x01';
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0)
    goto label_0593795b;
label_059378e8:
    bVar2 = GameManagers_ChatManager_SuggestionState__get_IsActive((MethodInfo *)0x0);
    pIVar7 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor != 0)
    goto label_059378e8;
label_0593795b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    bVar2 = GameManagers_ChatManager_SuggestionState__get_IsActive((MethodInfo *)0x0);
    pIVar7 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  if (!bVar2) {
    TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)pIVar7;
    return;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)pIVar7;
  if ((pIVar7->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(pIVar7);
  }
  __this_00 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)pIVar7);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((__this_00 != (UI_ChatPanel_o *)0x0) &&
     (__this_01 = UI_ChatPanel__GetInputText(__this_00,(MethodInfo *)0x0), __this_01 != (System_String_o *)0x0
     )) {
    bVar2 = System_String__StartsWith(__this_01,"/",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        iVar5 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
      }
      else {
        iVar5 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
      }
      if (iVar5 == 2) goto label_05937c27;
    }
    bVar2 = System_String__StartsWith(__this_01,"/",(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        iVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
      }
      else {
        iVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
      }
      if (iVar3 == 1) {
label_05937c27:
        method_01 = TypeInfo_GameManagers_ChatManager;
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)method_01);
        return;
      }
      if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState)->_2).cctor_finished_or_no_cctor
          == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        iVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
      }
      if (iVar3 == 3) goto label_05937c27;
    }
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    pIVar7 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState;
    pGVar4 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
    iVar5 = pGVar4->CurrentIndex + 1;
    pGVar4->CurrentIndex = iVar5;
    if (pGVar4->Suggestions != (System_Collections_Generic_List_string__o *)0x0) {
      if (iVar5 < (pGVar4->Suggestions->fields)._size) {
        uVar1 = (((GameManagers_ChatManager_SuggestionState_c *)pIVar7)->_2).cctor_finished_or_no_cctor;
      }
      else {
        if ((((GameManagers_ChatManager_SuggestionState_c *)pIVar7)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(pIVar7);
          pGVar4 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
          pIVar7 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState;
        }
        pGVar4->CurrentIndex = 0;
        uVar1 = (pIVar7->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init(pIVar7);
        pGVar4 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
        __this = pGVar4->Suggestions;
      }
      else {
        pGVar4 = pIVar7->static_fields;
        __this = pGVar4->Suggestions;
      }
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        suggestion = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this,pGVar4->CurrentIndex,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_string_get_Item);
        pMVar6 = extraout_RDX;
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          pMVar6 = extraout_RDX_00;
        }
        newText = (MethodInfo *)GameManagers_ChatManager__BuildCompletedText(__this_01,suggestion,pMVar6);
        bVar2 = System_String__IsNullOrEmpty
                          (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->
                           OriginalPartialText,(MethodInfo *)0x0);
        pMVar6 = extraout_RDX_01;
        if (bVar2) {
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          pGVar4 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
          pGVar4->OriginalPartialText = pGVar4->PartialText;
          Il2CppCodeGenWriteBarrier(&pGVar4->OriginalPartialText);
          pMVar6 = extraout_RDX_02;
        }
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          pMVar6 = extraout_RDX_03;
        }
        method_00 = newText;
        GameManagers_ChatManager__UpdatePartialTextAfterCompletion
                  ((System_String_o *)newText,suggestion,pMVar6);
        GameManagers_ChatManager__RefreshSuggestionDisplay(method_00);
        if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        }
        TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->IsTabCompleting = true;
        UI_ChatPanel__SetTextAndPositionCaret(__this_00,(System_String_o *)newText,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$HandleSuggestionClick
// il2cpp: void GameManagers_ChatManager__HandleSuggestionClick (int32_t suggestionIndex, const MethodInfo* method);
// 0x5938180
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59381b5: jmp 0x593829d

void GameManagers_ChatManager__HandleSuggestionClick(int32_t suggestionIndex,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  GameManagers_ChatManager_SuggestionState_StaticFields *pGVar2;
  GameManagers_ChatManager_o *__this;
  bool bVar3;
  UI_ChatPanel_o *__this_00;
  System_String_o *pSVar4;
  System_String_o *suggestion;
  GameManagers_ChatManager__ReactivateInputAfterClick_d__143_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  GameManagers_ChatManager_c *pGVar5;
  
  if (Il2CppMethodInitialized_075457e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_075457e7 = '\x01';
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0)
    goto label_05938211;
label_059381aa:
    bVar3 = GameManagers_ChatManager_SuggestionState__get_IsActive((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor != 0)
    goto label_059381aa;
label_05938211:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    bVar3 = GameManagers_ChatManager_SuggestionState__get_IsActive((MethodInfo *)0x0);
  }
  if ((-1 < suggestionIndex) && (bVar3 != false)) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState)->_2).cctor_finished_or_no_cctor ==
        0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    pSVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
    if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) {
label_05938434:
      ThrowNullReferenceException();
    }
    if (suggestionIndex < (pSVar1->fields)._size) {
      pGVar5 = TypeInfo_GameManagers_ChatManager;
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      __this_00 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)pGVar5);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        if (__this_00 != (UI_ChatPanel_o *)0x0) {
          pSVar4 = UI_ChatPanel__GetInputText(__this_00,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
          }
          pSVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
          if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
            suggestion = System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar1,suggestionIndex,
                                    (MethodInfo_395CF20 *)
                                    MethodInfo_System_Collections_Generic_List_string_get_Item);
            method_00 = extraout_RDX;
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              method_00 = extraout_RDX_00;
            }
            pSVar4 = GameManagers_ChatManager__BuildCompletedText(pSVar4,suggestion,method_00);
            bVar3 = System_String__IsNullOrEmpty
                              (TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->
                               OriginalPartialText,(MethodInfo *)0x0);
            if (bVar3) {
              if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
              }
              pGVar2 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
              pGVar2->OriginalPartialText = pGVar2->PartialText;
              Il2CppCodeGenWriteBarrier(&pGVar2->OriginalPartialText);
            }
            if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
            }
            pGVar2 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
            pGVar2->CurrentIndex = suggestionIndex;
            pGVar2->IsTabCompleting = true;
            pGVar2->IsProcessingClick = true;
            pGVar5 = TypeInfo_GameManagers_ChatManager;
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__RefreshSuggestionDisplay((MethodInfo *)pGVar5);
            UI_ChatPanel__SetTextAndPositionCaret(__this_00,pSVar4,(MethodInfo *)0x0);
            __this = TypeInfo_GameManagers_ChatManager->static_fields->_instance;
            if (__this != (GameManagers_ChatManager_o *)0x0) {
              if (Il2CppMethodInitialized_075457e8 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_GameManagers_ChatManager_ReactivateInputAfterClick_d__143);
                Il2CppMethodInitialized_075457e8 = '\x01';
              }
              __this_01 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_GameManagers_ChatManager_ReactivateInputAfterClick_d__143);
              GameManagers_ChatManager__ReactivateInputAfterClick_d__143___ctor(__this_01,0,(MethodInfo *)0x0)
              ;
              if (__this_01 != (GameManagers_ChatManager__ReactivateInputAfterClick_d__143_o *)0x0) {
                (__this_01->fields).chatPanel = __this_00;
                Il2CppCodeGenWriteBarrier(&(__this_01->fields).chatPanel);
                UnityEngine_MonoBehaviour__StartCoroutine_691c390
                          ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01
                           ,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto label_05938434;
      }
    }
  }
  return;
}


// GameManagers.ChatManager$$ReactivateInputAfterClick
// il2cpp: System_Collections_IEnumerator_o* GameManagers_ChatManager__ReactivateInputAfterClick (GameManagers_ChatManager_o* __this, UI_ChatPanel_o* chatPanel, const MethodInfo* method);
// 0x5938440

System_Collections_IEnumerator_o *
GameManagers_ChatManager__ReactivateInputAfterClick
          (GameManagers_ChatManager_o *__this,UI_ChatPanel_o *chatPanel,MethodInfo *method)

{
  GameManagers_ChatManager__ReactivateInputAfterClick_d__143_o *__this_00;
  
  if (Il2CppMethodInitialized_075457e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_ChatManager_ReactivateInputAfterClick_d__143);
    Il2CppMethodInitialized_075457e8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_ChatManager_ReactivateInputAfterClick_d__143);
  GameManagers_ChatManager__ReactivateInputAfterClick_d__143___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (GameManagers_ChatManager__ReactivateInputAfterClick_d__143_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).chatPanel = chatPanel;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).chatPanel);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.ChatManager$$BuildCompletedText
// il2cpp: System_String_o* GameManagers_ChatManager__BuildCompletedText (System_String_o* currentInput, System_String_o* suggestion, const MethodInfo* method);
// 0x5937c50
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5937c9f: lea rax, [rip + 0x1999852]  ; "/"
// asm:   0x5937ca6: mov rdi, qword ptr [rax]
// asm:   0x5937ca9: jmp 0x5937d46
// asm:   0x5937d90: jmp 0x5937dc9
// asm:   0x5937dcd: nop dword ptr [rax]

System_String_o *
GameManagers_ChatManager__BuildCompletedText
          (System_String_o *currentInput,System_String_o *suggestion,MethodInfo *method)

{
  GameManagers_ChatManager_SuggestionState_StaticFields *pGVar1;
  int index;
  uint16_t uVar2;
  int iVar3;
  System_String_o *pSVar4;
  System_String_o *str3;
  
  if (Il2CppMethodInitialized_075457e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"@");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075457e9 = '\x01';
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0)
    goto label_05937cf8;
label_05937c7a:
    pGVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
    iVar3 = pGVar1->Type;
    pSVar4 = "/";
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor != 0)
    goto label_05937c7a;
label_05937cf8:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    pGVar1 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
    iVar3 = pGVar1->Type;
    pSVar4 = "/";
  }
  "/" = pSVar4;
  if (iVar3 == 3) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState)->_2).cctor_finished_or_no_cctor ==
        0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    if (currentInput != (System_String_o *)0x0) {
      pSVar4 = System_String__Substring_53042f0
                         (currentInput,0,
                          TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalStartPos,
                          (MethodInfo *)0x0);
      goto label_05937d46;
    }
    goto label_05937e66;
  }
  if (iVar3 != 2) {
    if (iVar3 != 1) {
      return currentInput;
    }
label_05937d46:
    pSVar4 = System_String__Concat_52f0320(pSVar4,suggestion,(MethodInfo *)0x0);
    return pSVar4;
  }
  if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState)->_2).cctor_finished_or_no_cctor == 0
     ) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    iVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->OriginalStartPos;
    if (iVar3 < 0) goto label_05937daa;
label_05937d6d:
    if (currentInput == (System_String_o *)0x0) {
label_05937e66:
      ThrowNullReferenceException();
    }
    if ((iVar3 < (currentInput->fields)._stringLength) &&
       (uVar2 = System_String__get_Chars(currentInput,iVar3,(MethodInfo *)0x0), uVar2 == 0x40))
    goto label_05937dc9;
  }
  else {
    iVar3 = pGVar1->OriginalStartPos;
    if (-1 < iVar3) goto label_05937d6d;
label_05937daa:
    if (currentInput == (System_String_o *)0x0) goto label_05937e66;
  }
  iVar3 = System_String__LastIndexOf(currentInput,0x40,(MethodInfo *)0x0);
  if (iVar3 < 0) {
    return currentInput;
  }
label_05937dc9:
  index = iVar3;
  do {
    index = index + 1;
    if (((currentInput->fields)._stringLength <= index) ||
       (uVar2 = System_String__get_Chars(currentInput,index,(MethodInfo *)0x0), uVar2 == 0x20)) break;
    uVar2 = System_String__get_Chars(currentInput,index,(MethodInfo *)0x0);
  } while (uVar2 != 9);
  pSVar4 = System_String__Substring_53042f0(currentInput,0,iVar3,(MethodInfo *)0x0);
  if (index < (currentInput->fields)._stringLength) {
    str3 = System_String__Substring(currentInput,index,(MethodInfo *)0x0);
  }
  else {
    str3 = "";
  }
  pSVar4 = System_String__Concat_5302810(pSVar4,"@",suggestion,str3,(MethodInfo *)0x0);
  return pSVar4;
}


// GameManagers.ChatManager$$RefreshSuggestionDisplay
// il2cpp: void GameManagers_ChatManager__RefreshSuggestionDisplay (const MethodInfo* method);
// 0x5937fb0
// eh: try 0x59380e4..0x59380ee -> pad 0x5938140 catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5938158..0x593815d -> pad 0x593815f cleanup
// eh: try 0x5938162..0x593816c -> pad 0x5938174 catch (...) [compiler noexcept guard]
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5937fd3: cmp byte ptr [rip + 0x1c0d7eb], 0
// asm:   0x5938136: jmp 0x59380bc
// asm:   0x5938138: mov rdi, rbx
// asm:   0x593813b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5938140: mov rbx, rax
// asm:   0x5938143: cmp edx, 1
// asm:   0x5938146: jne 0x5938162
// asm:   0x5938148: mov rdi, rbx
// asm:   0x593814b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5938150: mov rbx, qword ptr [rax]
// asm:   0x5938153: mov qword ptr [rsp + 8], rbx
// asm:   0x5938158: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x593815d: jmp 0x59380f0
// asm:   0x593815f: mov rbx, rax
// asm:   0x5938162: lea rdi, [rsp + 8]
// asm:   0x5938167: call 0x2fd2f10  ; il2cpp_runtime_helper_02fd2f10()
// asm:   0x593816c: mov rdi, rbx
// asm:   0x593816f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5938174: mov rdi, rax
// asm:   0x5938177: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_ChatManager__RefreshSuggestionDisplay(MethodInfo *method)

{
  long lVar1;
  int32_t *piVar2;
  uint32_t uVar3;
  int iVar4;
  GameManagers_ChatManager_StaticFields *pGVar5;
  Il2CppClass *klass;
  GameManagers_ChatManager_c *method_00;
  
  if (Il2CppMethodInitialized_075457ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_075457ea = '\x01';
    uVar3 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar3 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  if (Il2CppMethodInitialized_075457c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_075457c5 = '\x01';
    uVar3 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar3 = *(uint32_t *)((long)TypeInfo_GameManagers_ChatManager + 0xe4);
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    pGVar5 = TypeInfo_GameManagers_ChatManager->static_fields;
    iVar4 = pGVar5->_lineBatchDepth;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    pGVar5 = ((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->static_fields;
    iVar4 = pGVar5->_lineBatchDepth;
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
  if (iVar4 == 0) {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
      TypeInfo_GameManagers_ChatManager->static_fields->_pendingBatchSync = false;
      uVar3 = (((GameManagers_ChatManager_c *)klass)->_2).cctor_finished_or_no_cctor;
    }
    else {
      pGVar5->_pendingBatchSync = false;
      uVar3 = (klass->_2).cctor_finished_or_no_cctor;
    }
  }
  else {
    uVar3 = (klass->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
    uVar3 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    piVar2 = &TypeInfo_GameManagers_ChatManager->static_fields->_lineBatchDepth;
    *piVar2 = *piVar2 + 1;
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init(klass);
    }
  }
  else {
    lVar1 = (long)klass->static_fields + 0x84;
    *(int *)lVar1 = *(int *)lVar1 + 1;
  }
  GameManagers_ChatManager__RefreshSuggestionDisplayInternal((MethodInfo *)klass);
  method_00 = TypeInfo_GameManagers_ChatManager;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__EndLineBatch((MethodInfo *)method_00);
  return;
}


// GameManagers.ChatManager$$RefreshSuggestionDisplayInternal
// il2cpp: void GameManagers_ChatManager__RefreshSuggestionDisplayInternal (const MethodInfo* method);
// 0x59384b0
// eh: try 0x59386fa..0x5938c93 -> pad 0x5938cd4 (+50 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5938d2d..0x5938d32 -> pad 0x593903c cleanup
// eh: try 0x5938de2..0x593902f -> pad 0x5939064 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x593903f..0x5939049 -> pad 0x5939152 catch (...) [compiler noexcept guard]
// eh: try 0x5939080..0x5939085 -> pad 0x59390aa cleanup
// eh: try 0x59390ad..0x59390b7 -> pad 0x5939152 catch (...) [compiler noexcept guard]
// eh: try 0x59390f0..0x59390f5 -> pad 0x593913d cleanup
// eh: try 0x5939140..0x593914a -> pad 0x5939152 catch (...) [compiler noexcept guard]
// asm: 133 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59385e5: jmp 0x5938619
// asm:   0x5938b99: jmp 0x5938c2f
// asm:   0x5938c9d: jmp 0x59390d8
// asm:   0x5938ca2: jmp 0x5938d11
// asm:   0x5938ca4: jmp 0x5938d11
// asm:   0x5938ca6: jmp 0x59390d8
// asm:   0x5938cab: jmp 0x59390d8
// asm:   0x5938cb0: jmp 0x5938d11
// asm:   0x5938cb2: jmp 0x5938d11
// asm:   0x5938cb4: jmp 0x5938d11
// asm:   0x5938cb6: jmp 0x59390d8
// asm:   0x5938cbb: jmp 0x59390d8
// asm:   0x5938cc0: jmp 0x5938d11
// asm:   0x5938cc2: jmp 0x5938d11
// asm:   0x5938cc4: jmp 0x59390d8
// asm:   0x5938cc9: jmp 0x59390d8
// asm:   0x5938cce: jmp 0x5938d11
// asm:   0x5938cd0: jmp 0x5938d11
// asm:   0x5938cd2: jmp 0x5938d11
// asm:   0x5938cd4: jmp 0x5938d11
// asm:   0x5938cd6: jmp 0x5938d11
// asm:   0x5938cd8: jmp 0x59390d8
// asm:   0x5938cdd: jmp 0x59390d8
// asm:   0x5938ce2: jmp 0x59390d8
// asm:   0x5938ce7: jmp 0x59390d8
// asm:   0x5938cec: jmp 0x59390d8
// asm:   0x5938cf1: jmp 0x59390d8
// asm:   0x5938cf6: jmp 0x59390d8
// asm:   0x5938cfb: jmp 0x59390d8
// asm:   0x5938d00: jmp 0x59390d8
// asm:   0x5938d05: jmp 0x59390d8
// asm:   0x5938d0a: jmp 0x5938d11
// asm:   0x5938d0c: jmp 0x59390d8
// asm:   0x5938d11: mov r15, rax
// asm:   0x5938d14: cmp edx, 1
// asm:   0x5938d17: jne 0x593903f
// asm:   0x5938d1d: mov rdi, r15
// asm:   0x5938d20: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5938d25: mov rbx, qword ptr [rax]
// asm:   0x5938d28: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5938d2d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5938d32: lea rax, [rip + 0x1955dbf]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5938d39: mov rsi, qword ptr [rax]
// asm:   0x5938d3c: lea rdi, [rsp + 0x30]
// asm:   0x5938d41: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5938d46: test rbx, rbx
// asm:   0x5938d49: jne 0x5939034
// asm:   0x5938d4f: lea rbp, [rip + 0x1947c62]  ; TypeInfo_GameManagers_ChatManager_SuggestionState
// asm:   0x5938d56: mov rdi, qword ptr [rbp]
// asm:   0x5938ded: nop dword ptr [rax]
// asm:   0x5939034: mov rdi, rbx
// asm:   0x5939037: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x593903c: mov r15, rax
// asm:   0x593903f: lea rdi, [rsp + 0x18]
// asm:   0x5939044: call 0x2fd2f70  ; il2cpp_runtime_helper_02fd2f70()
// asm:   0x5939049: jmp 0x593914a
// asm:   0x593904e: jmp 0x5939068
// asm:   0x5939050: jmp 0x5939068
// asm:   0x5939052: jmp 0x5939068
// asm:   0x5939054: jmp 0x5939068
// asm:   0x5939056: jmp 0x5939068
// asm:   0x5939058: jmp 0x5939068
// asm:   0x593905a: jmp 0x5939068
// asm:   0x593905c: jmp 0x5939068
// asm:   0x593905e: jmp 0x5939068
// asm:   0x5939060: jmp 0x5939068
// asm:   0x5939062: jmp 0x5939068
// asm:   0x5939064: jmp 0x5939068
// asm:   0x5939066: jmp 0x5939068
// asm:   0x5939068: mov r15, rax
// asm:   0x593906b: cmp edx, 1
// asm:   0x593906e: jne 0x59390ad
// asm:   0x5939070: mov rdi, r15
// asm:   0x5939073: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5939078: mov rbx, qword ptr [rax]
// asm:   0x593907b: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5939080: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5939085: lea rax, [rip + 0x1955a6c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x593908c: mov rsi, qword ptr [rax]
// asm:   0x593908f: lea rdi, [rsp + 0x30]
// asm:   0x5939094: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5939099: test rbx, rbx
// asm:   0x593909c: je 0x5938f9b
// asm:   0x59390a2: mov rdi, rbx
// asm:   0x59390a5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59390aa: mov r15, rax
// asm:   0x59390ad: lea rdi, [rsp + 0x18]
// asm:   0x59390b2: call 0x2fd2fa0  ; il2cpp_runtime_helper_02fd2fa0()
// asm:   0x59390b7: jmp 0x593914a
// asm:   0x59390bc: jmp 0x59390d8
// asm:   0x59390be: jmp 0x59390d8
// asm:   0x59390c0: jmp 0x59390d8
// asm:   0x59390c2: jmp 0x59390d8
// asm:   0x59390c4: jmp 0x59390d8
// asm:   0x59390c6: jmp 0x59390d8
// asm:   0x59390c8: jmp 0x59390d8
// asm:   0x59390ca: jmp 0x59390d8
// asm:   0x59390cc: jmp 0x59390d8
// asm:   0x59390ce: jmp 0x59390d8
// asm:   0x59390d0: jmp 0x59390d8
// asm:   0x59390d2: jmp 0x59390d8
// asm:   0x59390d4: jmp 0x59390d8
// asm:   0x59390d6: jmp 0x59390d8
// asm:   0x59390d8: mov r15, rax
// asm:   0x59390db: cmp edx, 1
// asm:   0x59390de: jne 0x5939140
// asm:   0x59390e0: mov rdi, r15
// asm:   0x59390e3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59390e8: mov rbx, qword ptr [rax]
// asm:   0x59390eb: mov qword ptr [rsp + 0x18], rbx
// asm:   0x59390f0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59390f5: lea rax, [rip + 0x19559fc]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x59390fc: mov rsi, qword ptr [rax]
// asm:   0x59390ff: lea rdi, [rsp + 0x30]
// asm:   0x5939104: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5939109: test rbx, rbx
// asm:   0x593910c: lea rbp, [rip + 0x19478a5]  ; TypeInfo_GameManagers_ChatManager_SuggestionState
// asm:   0x5939113: jne 0x5939135
// asm:   0x5939115: mov rdi, qword ptr [rbp]
// asm:   0x5939119: lea rax, [rip + 0x19a8f00]  ; "Matching players:"
// asm:   0x5939120: mov rbx, qword ptr [rax]
// asm:   0x5939123: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x593912a: jne 0x593868e
// asm:   0x5939130: jmp 0x5938685
// asm:   0x5939135: mov rdi, rbx
// asm:   0x5939138: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x593913d: mov r15, rax
// asm:   0x5939140: lea rdi, [rsp + 0x18]
// asm:   0x5939145: call 0x2fd2f40  ; il2cpp_runtime_helper_02fd2f40()
// asm:   0x593914a: mov rdi, r15
// asm:   0x593914d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5939152: mov rdi, rax
// asm:   0x5939155: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_ChatManager__RefreshSuggestionDisplayInternal(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar4;
  System_Collections_Generic_List_string__o *suggestions;
  Photon_Realtime_Room_o *pPVar5;
  Photon_Realtime_Player_o *pPVar6;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  MethodInfo *pMVar10;
  GameManagers_ChatManager_SuggestionState_StaticFields *pGVar11;
  System_Text_StringBuilder_o *pSVar12;
  Il2CppRGCTXData *method_00;
  System_String_o **ppSVar13;
  ulong uVar14;
  MethodInfo *pMVar15;
  GameManagers_ChatManager_c *method_01;
  MethodInfo *in_stack_ffffffffffffff68;
  int32_t local_7c;
  int32_t local_78;
  int32_t local_74;
  undefined1 local_70 [16];
  System_String_o *local_60;
  undefined1 local_58 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_50;
  System_String_o *local_48;
  System_String_o *local_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_075457eb == '\0') {
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
    Il2CppMethodInitialized_075457eb = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_48 = (System_String_o *)0x0;
  local_38 = (Il2CppObject *)0x0;
  local_74 = 0;
  local_78 = 0;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    method_01 = TypeInfo_GameManagers_ChatManager;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    bVar4 = GameManagers_ChatManager__RemoveSuggestionLines((MethodInfo *)method_01);
    if (bVar4) goto label_059385f5;
  }
  else {
    bVar4 = GameManagers_ChatManager__RemoveSuggestionLines((MethodInfo *)TypeInfo_GameManagers_ChatManager);
    if (bVar4) {
label_059385f5:
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      TypeInfo_GameManagers_ChatManager->static_fields->_pendingBatchSync = true;
    }
  }
  pSVar7 = "";
  suggestions = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)suggestions,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    pGVar11 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
    method_00 = (Il2CppRGCTXData *)(ulong)(uint)pGVar11->Type;
    if (pGVar11->Type == 3) goto label_05938672;
label_059388c4:
    pSVar9 = "Matching players:";
    if ((int)method_00 == 2) {
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      local_40 = pSVar9;
      pSVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
      if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
                 (System_Collections_Generic_List_object__o *)pSVar3,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_48 = local_60;
      local_58 = (undefined1  [8])local_70._0_8_;
      pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)local_70._8_8_;
      local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_58;
label_05938df0:
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
      if (bVar4) {
        bVar4 = System_Int32__TryParse(local_48,&local_78,(MethodInfo *)0x0);
        if (bVar4) {
          if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          }
          pPVar5 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
          if (pPVar5 == (Photon_Realtime_Room_o *)0x0) {
            ThrowNullReferenceException();
          }
          method_00 = (Il2CppRGCTXData *)(pPVar5->klass->vtable)._10_GetPlayer.method;
          pPVar6 = (*(pPVar5->klass->vtable)._10_GetPlayer.methodPtr)
                             (pPVar5,local_78,false,(MethodInfo *)method_00);
          if (pPVar6 != (Photon_Realtime_Player_o *)0x0) {
            if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
            }
            pSVar7 = PhotonExtensions__GetStringProperty
                               (pPVar6,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                                "",(MethodInfo *)0x0);
            if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
            }
            pSVar7 = Anticheat_ChatFilter__FilterSizeTag(pSVar7,(MethodInfo *)0x0);
            local_7c = local_78;
            pIVar8 = il2cpp_vm_Object_Box(g_data_07556710,&local_7c);
            ppSVar13 = &"[{0}]";
            pSVar9 = System_String__Format("[{0}]",pIVar8,(MethodInfo *)0x0);
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            pSVar9 = GameManagers_ChatManager__GetColorString(pSVar9,1,false,(MethodInfo *)ppSVar13);
            pMVar10 = (MethodInfo *)
                      System_String__Concat_5301f10(pSVar9," ",pSVar7,(MethodInfo *)0x0);
            pMVar15 = MethodInfo_System_Collections_Generic_List_string_Add;
            if (suggestions != (System_Collections_Generic_List_string__o *)0x0) {
              piVar1 = &(suggestions->fields)._version;
              *piVar1 = *piVar1 + 1;
              method_00 = (Il2CppRGCTXData *)(suggestions->fields)._items;
              if (method_00 != (Il2CppRGCTXData *)0x0) {
                uVar2 = (suggestions->fields)._size;
                if (uVar2 < *(uint *)&method_00[3].rgctxDataDummy) {
                  (suggestions->fields)._size = uVar2 + 1;
                  method_00[(long)(int)uVar2 + 4].method = pMVar10;
                  Il2CppCodeGenWriteBarrier(&method_00[(long)(int)uVar2 + 4].rgctxDataDummy);
                }
                else {
                  method_00 = pMVar15->klass->rgctx_data;
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)suggestions,(Il2CppObject *)pMVar10,
                             (MethodInfo_395D230 *)method_00[0xe].method);
                }
                goto label_05938df0;
              }
            }
            ThrowNullReferenceException();
          }
        }
        goto label_05938df0;
      }
    }
    else {
      if ((int)method_00 != 1) goto label_05938fa0;
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        pGVar11 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
      }
      local_40 = pSVar7;
      if (pGVar11->Suggestions == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
                 (System_Collections_Generic_List_object__o *)pGVar11->Suggestions,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_48 = local_60;
      local_58 = (undefined1  [8])local_70._0_8_;
      pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)local_70._8_8_;
      local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_58;
      while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
            pSVar7 = local_48, bVar4) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar12 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
        if (pSVar12 == (System_Text_StringBuilder_o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Text_StringBuilder__Clear(pSVar12,(MethodInfo *)0x0);
        pSVar12 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
        if (pSVar12 == (System_Text_StringBuilder_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar12 = System_Text_StringBuilder__Append_530f6a0(pSVar12,0x2f,(MethodInfo *)0x0);
        if (pSVar12 == (System_Text_StringBuilder_o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Text_StringBuilder__Append_530ed80(pSVar12,pSVar7,(MethodInfo *)0x0);
        __this = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_GameManagers_ChatManager->static_fields->CommandsCache;
        if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar15 = 
        MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue;
        bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (__this,(Il2CppObject *)pSVar7,&local_38,
                           (MethodInfo_4AAF440 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue
                          );
        if (bVar4) {
          if (local_38 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (local_38[3].monitor == (void *)0x0) {
            ThrowNullReferenceException();
          }
          if (*(long *)((long)local_38[3].monitor + 0x18) != 0) {
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            pSVar12 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
            if (pSVar12 == (System_Text_StringBuilder_o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Text_StringBuilder__Append_530f6a0(pSVar12,0x20,(MethodInfo *)0x0);
            if (local_38 == (Il2CppObject *)0x0) {
label_05938c2f:
              ThrowNullReferenceException();
            }
            uVar14 = 0;
            while( true ) {
              if (local_38[3].monitor == (void *)0x0) {
                ThrowNullReferenceException();
              }
              if ((long)*(int *)((long)local_38[3].monitor + 0x18) <= (long)uVar14) break;
              if (uVar14 != 0) {
                if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                }
                pSVar12 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
                if (pSVar12 == (System_Text_StringBuilder_o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Text_StringBuilder__Append_530f6a0(pSVar12,0x20,(MethodInfo *)0x0);
              }
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              pSVar12 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
              if (pSVar12 == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar12 = System_Text_StringBuilder__Append_530f6a0(pSVar12,0x5b,(MethodInfo *)0x0);
              if (local_38 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              pMVar15 = local_38[3].monitor;
              if (pMVar15 == (MethodInfo *)0x0) {
                ThrowNullReferenceException();
              }
              if (*(uint *)&pMVar15->name <= uVar14) {
                ThrowIndexOutOfRangeException();
              }
              if (pSVar12 == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar12 = System_Text_StringBuilder__Append_530ed80
                                  (pSVar12,(System_String_o *)(&pMVar15->klass)[uVar14],(MethodInfo *)0x0);
              if (pSVar12 == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Text_StringBuilder__Append_530f6a0(pSVar12,0x5d,(MethodInfo *)0x0);
              uVar14 = uVar14 + 1;
              if (local_38 == (Il2CppObject *)0x0) goto label_05938c2f;
            }
          }
        }
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar12 = TypeInfo_GameManagers_ChatManager->static_fields->MessageBuilder;
        if (pSVar12 == (System_Text_StringBuilder_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar7 = (*(pSVar12->klass->vtable)._3_ToString.methodPtr)
                           (pSVar12,(pSVar12->klass->vtable)._3_ToString.method);
        pMVar10 = (MethodInfo *)GameManagers_ChatManager__GetColorString(pSVar7,2,false,pMVar15);
        pMVar15 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (suggestions == (System_Collections_Generic_List_string__o *)0x0) {
label_05938c5c:
          ThrowNullReferenceException();
        }
        piVar1 = &(suggestions->fields)._version;
        *piVar1 = *piVar1 + 1;
        method_00 = (Il2CppRGCTXData *)(suggestions->fields)._items;
        if (method_00 == (Il2CppRGCTXData *)0x0) goto label_05938c5c;
        uVar2 = (suggestions->fields)._size;
        if (uVar2 < *(uint *)&method_00[3].rgctxDataDummy) {
          (suggestions->fields)._size = uVar2 + 1;
          method_00[(long)(int)uVar2 + 4].method = pMVar10;
          Il2CppCodeGenWriteBarrier(&method_00[(long)(int)uVar2 + 4].rgctxDataDummy);
        }
        else {
          method_00 = pMVar15->klass->rgctx_data;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)suggestions,(Il2CppObject *)pMVar10,
                     (MethodInfo_395D230 *)method_00[0xe].method);
        }
      }
    }
  }
  else {
    pGVar11 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
    method_00 = (Il2CppRGCTXData *)(ulong)(uint)pGVar11->Type;
    if (pGVar11->Type != 3) goto label_059388c4;
label_05938672:
    pSVar7 = "Matching players:";
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    local_40 = pSVar7;
    pSVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Suggestions;
    if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
               (System_Collections_Generic_List_object__o *)pSVar3,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_48 = local_60;
    local_58 = (undefined1  [8])local_70._0_8_;
    pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)local_70._8_8_;
    local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_58;
label_05938710:
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    if (bVar4) {
      bVar4 = System_Int32__TryParse(local_48,&local_74,(MethodInfo *)0x0);
      if (bVar4) {
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        pPVar5 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        if (pPVar5 == (Photon_Realtime_Room_o *)0x0) {
          ThrowNullReferenceException();
        }
        method_00 = (Il2CppRGCTXData *)(pPVar5->klass->vtable)._10_GetPlayer.method;
        pPVar6 = (*(pPVar5->klass->vtable)._10_GetPlayer.methodPtr)
                           (pPVar5,local_74,false,(MethodInfo *)method_00);
        if (pPVar6 != (Photon_Realtime_Player_o *)0x0) {
          if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
          }
          pSVar7 = PhotonExtensions__GetStringProperty
                             (pPVar6,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                              "",(MethodInfo *)0x0);
          if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
          }
          pSVar7 = Anticheat_ChatFilter__FilterSizeTag(pSVar7,(MethodInfo *)0x0);
          local_7c = local_74;
          pIVar8 = il2cpp_vm_Object_Box(g_data_07556710,&local_7c);
          ppSVar13 = &"[{0}]";
          pSVar9 = System_String__Format("[{0}]",pIVar8,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar9 = GameManagers_ChatManager__GetColorString(pSVar9,1,false,(MethodInfo *)ppSVar13);
          pMVar10 = (MethodInfo *)
                    System_String__Concat_5301f10(pSVar9," ",pSVar7,(MethodInfo *)0x0);
          pMVar15 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (suggestions != (System_Collections_Generic_List_string__o *)0x0) {
            piVar1 = &(suggestions->fields)._version;
            *piVar1 = *piVar1 + 1;
            method_00 = (Il2CppRGCTXData *)(suggestions->fields)._items;
            if (method_00 != (Il2CppRGCTXData *)0x0) {
              uVar2 = (suggestions->fields)._size;
              if (uVar2 < *(uint *)&method_00[3].rgctxDataDummy) {
                (suggestions->fields)._size = uVar2 + 1;
                method_00[(long)(int)uVar2 + 4].method = pMVar10;
                Il2CppCodeGenWriteBarrier(&method_00[(long)(int)uVar2 + 4].rgctxDataDummy);
              }
              else {
                method_00 = pMVar15->klass->rgctx_data;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)suggestions,(Il2CppObject *)pMVar10,
                           (MethodInfo_395D230 *)method_00[0xe].method);
              }
              goto label_05938710;
            }
          }
          ThrowNullReferenceException();
        }
      }
      goto label_05938710;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  pSVar7 = local_40;
label_05938fa0:
  pMVar15 = (MethodInfo *)0x0;
  bVar4 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar7 = GameManagers_ChatManager__GetColorString(pSVar7,3,false,(MethodInfo *)method_00);
    pMVar15 = (MethodInfo *)0x3;
    GameManagers_ChatManager__AddLine
              (pSVar7,3,true,(System_Nullable_DateTime__o)ZEXT816(0),-1,true,false,-1,false,
               in_stack_ffffffffffffff68);
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__ShowCommandSuggestions(suggestions,pMVar15);
  return;
}


// GameManagers.ChatManager$$RemoveSuggestionLines
// il2cpp: bool GameManagers_ChatManager__RemoveSuggestionLines (const MethodInfo* method);
// 0x5939160
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5939194: jmp 0x5939278
// asm:   0x59391ff: lea r15, [rip + 0x195a6ba]  ; MethodInfo_System_Collections_Generic_List_bool_get_Item
// asm:   0x5939206: jmp 0x593921e
// asm:   0x593921a: dec ebx
// asm:   0x593921c: js 0x5939266

bool GameManagers_ChatManager__RemoveSuggestionLines(MethodInfo *method)

{
  uint32_t uVar1;
  uint index;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_List_bool__o *__this;
  bool bVar3;
  MethodInfo *method_00;
  bool bVar4;
  
  if (Il2CppMethodInitialized_075457ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Item);
    Il2CppMethodInitialized_075457ec = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
  }
  else {
    pSVar2 = *(System_Collections_Generic_List_string__o **)
              ((long)((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->static_fields + 0x28);
  }
  if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
    index = (pSVar2->fields)._size;
    bVar4 = false;
    while( true ) {
      index = index - 1;
      if ((int)index < 0) {
        return bVar4;
      }
      if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      __this = TypeInfo_GameManagers_ChatManager->static_fields->SuggestionFlags;
      if (__this == (System_Collections_Generic_List_bool__o *)0x0) break;
      method_00 = (MethodInfo *)(ulong)index;
      bVar3 = System_Collections_Generic_List_bool___get_Item
                        (__this,index,
                         (MethodInfo_51DBE20 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
      if (bVar3) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__RemoveLineAt(index,method_00);
        bVar4 = true;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$ClearLastSuggestions
// il2cpp: void GameManagers_ChatManager__ClearLastSuggestions (const MethodInfo* method);
// 0x59373c0

void GameManagers_ChatManager__ClearLastSuggestions(MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  bool bVar3;
  GameManagers_ChatManager_StaticFields *pGVar4;
  UI_ChatPanel_o *__this;
  GameManagers_ChatManager_c *pGVar5;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_075457ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_075457ed = '\x01';
  }
  pGVar5 = TypeInfo_GameManagers_ChatManager;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar3 = GameManagers_ChatManager__RemoveSuggestionLines((MethodInfo *)pGVar5);
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    GameManagers_ChatManager_SuggestionState__Clear((MethodInfo *)0x0);
  }
  else {
    GameManagers_ChatManager_SuggestionState__Clear((MethodInfo *)0x0);
  }
  if (bVar3) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      pGVar4 = TypeInfo_GameManagers_ChatManager->static_fields;
      iVar1 = pGVar4->_lineBatchDepth;
      uVar2 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
      klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
    }
    else {
      pGVar4 = ((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->static_fields;
      iVar1 = pGVar4->_lineBatchDepth;
      uVar2 = (((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor;
      klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
    }
    TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)klass;
    if (0 < iVar1) {
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init(klass);
        pGVar4 = TypeInfo_GameManagers_ChatManager->static_fields;
      }
      pGVar4->_pendingBatchSync = true;
      return;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init(klass);
    }
    bVar3 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)klass);
    if (bVar3) {
      pGVar5 = TypeInfo_GameManagers_ChatManager;
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      __this = GameManagers_ChatManager__GetChatPanel((MethodInfo *)pGVar5);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (__this == (UI_ChatPanel_o *)0x0) {
          ThrowNullReferenceException();
        }
        UI_ChatPanel__Sync(__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// GameManagers.ChatManager$$ForceSuggestionRefresh
// il2cpp: void GameManagers_ChatManager__ForceSuggestionRefresh (const MethodInfo* method);
// 0x5939280

void GameManagers_ChatManager__ForceSuggestionRefresh(MethodInfo *method)

{
  if (Il2CppMethodInitialized_075457ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    il2cpp_codegen_initialize_runtime_metadata(&"##FORCE_REFRESH##");
    Il2CppMethodInitialized_075457ee = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = "##FORCE_REFRESH##";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText);
  return;
}


// GameManagers.ChatManager$$SendPrivateMessage
// il2cpp: void GameManagers_ChatManager__SendPrivateMessage (Photon_Realtime_Player_o* target, System_String_o* message, const MethodInfo* method);
// 0x592c1a0

void GameManagers_ChatManager__SendPrivateMessage
               (Photon_Realtime_Player_o *target,System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *pSVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  MethodInfo *in_stack_ffffffffffffff98;
  System_DateTime_o local_50;
  int32_t local_48;
  int32_t local_44;
  int64_t local_40;
  int64_t local_38;
  
  if (Il2CppMethodInitialized_075457ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid private message target.");
    il2cpp_codegen_initialize_runtime_metadata(&"PrivateChatRPC");
    Il2CppMethodInitialized_075457ef = '\x01';
  }
  if (target == (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__AddLine
              ("Invalid private message target.",4,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
               in_stack_ffffffffffffff98);
    return;
  }
  pPVar1 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  targetPlayer = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  pSVar2 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
  if (pSVar2 == (System_Object_array *)0x0) goto label_0592c577;
  if ((message != (System_String_o *)0x0) &&
     (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)message,(((pSVar2->obj).klass)->_1).element_class),
     pIVar3 == (Il2CppObject *)0x0)) {
label_0592c568:
    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = (Il2CppObject *)message;
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    local_44 = (target->fields).actorNumber;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_44);
    if ((pIVar3 != (Il2CppObject *)0x0) &&
       (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pSVar2->obj).klass)->_1).element_class),
       pIVar4 == (Il2CppObject *)0x0)) goto label_0592c568;
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1] = pIVar3;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
      }
      local_50 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
      local_38 = System_DateTime__get_Ticks(&local_50,(MethodInfo *)0x0);
      pIVar3 = il2cpp_vm_Object_Box(g_data_07556730,&local_38);
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pSVar2->obj).klass)->_1).element_class),
         pIVar4 == (Il2CppObject *)0x0)) goto label_0592c568;
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = pIVar3;
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
        if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_56e5850
                    (pPVar1,"PrivateChatRPC",targetPlayer,pSVar2,(MethodInfo *)0x0);
          pPVar1 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
          pSVar2 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
          if (pSVar2 != (System_Object_array *)0x0) {
            if ((message != (System_String_o *)0x0) &&
               (pIVar3 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)message,(((pSVar2->obj).klass)->_1).element_class),
               pIVar3 == (Il2CppObject *)0x0)) goto label_0592c568;
            if ((int)pSVar2->max_length != 0) {
              pSVar2->m_Items[0] = (Il2CppObject *)message;
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
              local_48 = (target->fields).actorNumber;
              pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_48);
              if ((pIVar3 != (Il2CppObject *)0x0) &&
                 (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pSVar2->obj).klass)->_1).element_class),
                 pIVar4 == (Il2CppObject *)0x0)) goto label_0592c568;
              if ((pSVar2->max_length & 0xfffffffe) != 0) {
                pSVar2->m_Items[1] = pIVar3;
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                local_50 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
                local_40 = System_DateTime__get_Ticks(&local_50,(MethodInfo *)0x0);
                pIVar3 = il2cpp_vm_Object_Box(g_data_07556730,&local_40);
                if ((pIVar3 != (Il2CppObject *)0x0) &&
                   (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((pSVar2->obj).klass)->_1).element_class),
                   pIVar4 == (Il2CppObject *)0x0)) goto label_0592c568;
                if (2 < (uint)pSVar2->max_length) {
                  pSVar2->m_Items[2] = pIVar3;
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
                  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
                    Photon_Pun_PhotonView__RPC_56e5850
                              (pPVar1,"PrivateChatRPC",target,pSVar2,(MethodInfo *)0x0);
                    return;
                  }
                  goto label_0592c577;
                }
              }
            }
            goto label_0592c563;
          }
        }
label_0592c577:
        ThrowNullReferenceException();
      }
    }
  }
label_0592c563:
  ThrowIndexOutOfRangeException();
}


// GameManagers.ChatManager$$OnPrivateChatRPC
// il2cpp: void GameManagers_ChatManager__OnPrivateChatRPC (System_String_o* message, int32_t targetID, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x59392f0

void GameManagers_ChatManager__OnPrivateChatRPC
               (System_String_o *message,int32_t targetID,int64_t senderTimestamp,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  int iVar1;
  int pmPartnerID;
  System_Collections_Generic_HashSet_int__o *__this;
  System_DateTime_o SVar2;
  bool bVar3;
  Photon_Realtime_Player_o *pPVar4;
  Photon_Realtime_Room_o *pPVar5;
  UI_ChatPanel_o *pUVar6;
  MethodInfo *pMVar7;
  MethodInfo *in_stack_ffffffffffffffb8;
  System_DateTime_o SStack_38;
  
  if (Il2CppMethodInitialized_075457f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_075457f0 = '\x01';
  }
  SStack_38.fields._dateData = (System_DateTime_Fields)0;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  if ((info.fields.Sender != (Photon_Realtime_Player_o *)0x0) &&
     (__this = TypeInfo_GameManagers_InGameManager->static_fields->MuteText,
     __this != (System_Collections_Generic_HashSet_int__o *)0x0)) {
    bVar3 = System_Collections_Generic_HashSet_int___Contains
                      (__this,((info.fields.Sender)->fields).actorNumber,
                       (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar3) {
      return;
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar4 != (Photon_Realtime_Player_o *)0x0) {
      iVar1 = (pPVar4->fields).actorNumber;
      pmPartnerID = ((info.fields.Sender)->fields).actorNumber;
      if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
      }
      System_DateTime___ctor_5493c90(&SStack_38,senderTimestamp,1,(MethodInfo *)0x0);
      SVar2.fields._dateData = SStack_38.fields._dateData;
      if (iVar1 == pmPartnerID) {
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        pPVar5 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        if (pPVar5 == (Photon_Realtime_Room_o *)0x0) goto label_059395de;
        pPVar4 = (*(pPVar5->klass->vtable)._10_GetPlayer.methodPtr)
                           (pPVar5,targetID,false,(pPVar5->klass->vtable)._10_GetPlayer.method);
        SVar2.fields._dateData = SStack_38.fields._dateData;
        if (pPVar4 != (Photon_Realtime_Player_o *)0x0) {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__AddPlayerLine
                    (info.fields.Sender,message,7,SVar2,true,targetID,in_stack_ffffffffffffffb8);
          pUVar6 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)info.fields.Sender);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            if (pUVar6 == (UI_ChatPanel_o *)0x0) goto label_059395de;
            if ((pUVar6->fields)._inPMMode == false) {
              UI_ChatPanel__EnterPMMode(pUVar6,pPVar4,(MethodInfo *)0x0);
            }
          }
        }
      }
      else if (iVar1 == targetID) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pMVar7 = (MethodInfo *)info.fields.Sender;
        GameManagers_ChatManager__AddPlayerLine
                  (info.fields.Sender,message,7,SVar2,true,pmPartnerID,in_stack_ffffffffffffffb8);
        pUVar6 = GameManagers_ChatManager__GetChatPanel(pMVar7);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if (pUVar6 == (UI_ChatPanel_o *)0x0) goto label_059395de;
          pMVar7 = (MethodInfo *)info.fields.Sender;
          UI_ChatPanel__AddPMPartner(pUVar6,info.fields.Sender,(MethodInfo *)0x0);
          if ((pUVar6->fields)._inPMMode != false) {
            pPVar4 = (pUVar6->fields)._currentPMTarget;
            if (pPVar4 == (Photon_Realtime_Player_o *)0x0) goto label_059395de;
            if ((pPVar4->fields).actorNumber == ((info.fields.Sender)->fields).actorNumber) {
              return;
            }
          }
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__ShowPMNotification(info.fields.Sender,pMVar7);
        }
      }
      return;
    }
  }
label_059395de:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$ResetAllPMState
// il2cpp: void GameManagers_ChatManager__ResetAllPMState (const MethodInfo* method);
// 0x5939850

void GameManagers_ChatManager__ResetAllPMState(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_bool__o *pSVar3;
  System_Collections_Generic_List_int__o *pSVar4;
  System_Boolean_array *pSVar5;
  System_Int32_array *pSVar6;
  MethodInfo *pMVar7;
  bool bVar8;
  UI_ChatPanel_o *__this;
  GameManagers_ChatManager_StaticFields *pGVar9;
  int iVar10;
  GameManagers_ChatManager_c *method_00;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_075457f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075457f1 = '\x01';
  }
  method_00 = TypeInfo_GameManagers_ChatManager;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this = GameManagers_ChatManager__GetChatPanel((MethodInfo *)method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if (__this == (UI_ChatPanel_o *)0x0) goto label_05939a98;
    UI_ChatPanel__ResetPMState(__this,(MethodInfo *)0x0);
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  pGVar9 = TypeInfo_GameManagers_ChatManager->static_fields;
  pSVar3 = pGVar9->PrivateFlags;
  if (pSVar3 != (System_Collections_Generic_List_bool__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar3->fields)._size = 0;
    pSVar4 = pGVar9->PMPartnerIDs;
    if (pSVar4 != (System_Collections_Generic_List_int__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar4->fields)._size = 0;
      iVar10 = 0;
      while( true ) {
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
          klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
        }
        pGVar9 = klass->static_fields;
        if (pGVar9->RawMessages == (System_Collections_Generic_List_string__o *)0x0) break;
        if ((pGVar9->RawMessages->fields)._size <= iVar10) {
          return;
        }
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
          pGVar9 = TypeInfo_GameManagers_ChatManager->static_fields;
          klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
        }
        pMVar7 = MethodInfo_System_Collections_Generic_List_bool_Add;
        pSVar3 = pGVar9->PrivateFlags;
        if (pSVar3 == (System_Collections_Generic_List_bool__o *)0x0) break;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (pSVar3->fields)._items;
        if (pSVar5 == (System_Boolean_array *)0x0) break;
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pSVar5->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = false;
        }
        else {
          System_Collections_Generic_List_bool___AddWithResize
                    (pSVar3,false,(MethodInfo_51DC120 *)pMVar7->klass->rgctx_data[0xe].method);
          pGVar9 = TypeInfo_GameManagers_ChatManager->static_fields;
          klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
        }
        pMVar7 = MethodInfo_System_Collections_Generic_List_int_Add;
        pSVar4 = pGVar9->PMPartnerIDs;
        if (pSVar4 == (System_Collections_Generic_List_int__o *)0x0) break;
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (pSVar4->fields)._items;
        if (pSVar6 == (System_Int32_array *)0x0) break;
        uVar2 = (pSVar4->fields)._size;
        if (uVar2 < (uint)pSVar6->max_length) {
          (pSVar4->fields)._size = uVar2 + 1;
          pSVar6->m_Items[(int)uVar2] = -1;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize
                    (pSVar4,-1,(MethodInfo_3916AC0 *)pMVar7->klass->rgctx_data[0xe].method);
          klass = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
        }
        iVar10 = iVar10 + 1;
      }
    }
  }
label_05939a98:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$SyncPMPartnersOnJoin
// il2cpp: void GameManagers_ChatManager__SyncPMPartnersOnJoin (const MethodInfo* method);
// 0x5939aa0

void GameManagers_ChatManager__SyncPMPartnersOnJoin(MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this;
  bool bVar1;
  int32_t iVar2;
  UI_ChatPanel_o *__this_00;
  GameManagers_ChatManager_StaticFields *pGVar3;
  Photon_Realtime_Room_o *pPVar4;
  Photon_Realtime_Player_o *player;
  int index;
  GameManagers_ChatManager_c *method_00;
  
  if (Il2CppMethodInitialized_075457f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_075457f2 = '\x01';
  }
  method_00 = TypeInfo_GameManagers_ChatManager;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this_00 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (__this_00 != (UI_ChatPanel_o *)0x0) {
    index = 0;
    UI_ChatPanel__ResetPMState(__this_00,(MethodInfo *)0x0);
    while( true ) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pGVar3 = TypeInfo_GameManagers_ChatManager->static_fields;
      if (pGVar3->RawMessages == (System_Collections_Generic_List_string__o *)0x0) break;
      if ((pGVar3->RawMessages->fields)._size <= index) {
        return;
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        pGVar3 = TypeInfo_GameManagers_ChatManager->static_fields;
      }
      if (pGVar3->PrivateFlags == (System_Collections_Generic_List_bool__o *)0x0) break;
      bVar1 = System_Collections_Generic_List_bool___get_Item
                        (pGVar3->PrivateFlags,index,
                         (MethodInfo_51DBE20 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
      if (bVar1) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        __this = TypeInfo_GameManagers_ChatManager->static_fields->PMPartnerIDs;
        if (__this == (System_Collections_Generic_List_int__o *)0x0) break;
        iVar2 = System_Collections_Generic_List_int___get_Item
                          (__this,index,
                           (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        pPVar4 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        if (pPVar4 == (Photon_Realtime_Room_o *)0x0) break;
        player = (*(pPVar4->klass->vtable)._10_GetPlayer.methodPtr)
                           (pPVar4,iVar2,false,(pPVar4->klass->vtable)._10_GetPlayer.method);
        if (player != (Photon_Realtime_Player_o *)0x0) {
          UI_ChatPanel__AddPMPartner(__this_00,player,(MethodInfo *)0x0);
        }
      }
      index = index + 1;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$GetPlayerIdentifier
// il2cpp: System_String_o* GameManagers_ChatManager__GetPlayerIdentifier (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5939c80

System_String_o *
GameManagers_ChatManager__GetPlayerIdentifier(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Il2CppObject *arg0;
  Il2CppObject *arg0_00;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o **method_00;
  int32_t local_20;
  int32_t local_1c;
  
  if (Il2CppMethodInitialized_075457f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"<link=\"{0}\">{1}</link>");
    il2cpp_codegen_initialize_runtime_metadata(&"[{0}]");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075457f3 = '\x01';
  }
  if (player == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_1c = (player->fields).actorNumber;
  arg0 = il2cpp_vm_Object_Box(g_data_07556710,&local_1c);
  local_20 = (player->fields).actorNumber;
  arg0_00 = il2cpp_vm_Object_Box(g_data_07556710,&local_20);
  method_00 = &"[{0}]";
  pSVar1 = System_String__Format("[{0}]",arg0_00,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  pSVar1 = GameManagers_ChatManager__GetColorString(pSVar1,1,false,(MethodInfo *)method_00);
  pSVar1 = System_String__Format_5302c50("<link=\"{0}\">{1}</link>",arg0,(Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  str2 = PhotonExtensions__GetStringProperty
                   (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                    (MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10(pSVar1," ",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// GameManagers.ChatManager$$ShowPMNotification
// il2cpp: void GameManagers_ChatManager__ShowPMNotification (Photon_Realtime_Player_o* senderPlayer, const MethodInfo* method);
// 0x59395f0

void GameManagers_ChatManager__ShowPMNotification(Photon_Realtime_Player_o *senderPlayer,MethodInfo *method)

{
  int32_t item;
  System_Collections_Generic_HashSet_int__o *pSVar1;
  bool bVar2;
  System_DateTime_o value;
  System_String_o *str0;
  System_String_o *str1;
  System_String_o *pSVar3;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  System_Nullable_DateTime__o timestamp;
  MethodInfo *in_stack_ffffffffffffffa8;
  System_Nullable_DateTime__o local_48;
  
  if (Il2CppMethodInitialized_075457f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_DateTime_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"New message from ");
    il2cpp_codegen_initialize_runtime_metadata(&" (Tab)");
    Il2CppMethodInitialized_075457f4 = '\x01';
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
    bVar2 = System_Collections_Generic_HashSet_int___Contains
                      (pSVar1,item,
                       (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (!bVar2) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->ActivePMNotifications;
      if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0593983c;
      System_Collections_Generic_HashSet_int___Add
                (pSVar1,item,(MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->NotifiedPMs;
    if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_int___Contains
                        (pSVar1,item,
                         (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (!bVar2) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->NotifiedPMs;
        if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0593983c;
        System_Collections_Generic_HashSet_int___Add
                  (pSVar1,item,(MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
        if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
        }
        value = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        pSVar3 = " (Tab)";
        method_00 = (MethodInfo *)0x3;
        str0 = GameManagers_ChatManager__GetColorString("New message from ",3,false,in_RCX);
        str1 = GameManagers_ChatManager__GetPlayerIdentifier(senderPlayer,method_00);
        pSVar3 = GameManagers_ChatManager__GetColorString(pSVar3,3,false,in_RCX);
        pSVar3 = System_String__Concat_5301f10(str0,str1,pSVar3,(MethodInfo *)0x0);
        local_48.fields._0_8_ = 0;
        local_48.fields.value.fields._dateData = (System_DateTime_Fields)0;
        System_Nullable_DateTime____ctor
                  (&local_48,value,(MethodInfo_3CD1CF0 *)MethodInfo_System_Nullable_DateTime_ctor);
        timestamp.fields._0_8_ = local_48.fields._0_8_ & 0xffffffff;
        timestamp.fields.value.fields._dateData = local_48.fields.value.fields._dateData;
        GameManagers_ChatManager__AddLine
                  (pSVar3,0,true,timestamp,item,false,false,-1,true,in_stack_ffffffffffffffa8);
      }
      return;
    }
  }
label_0593983c:
  ThrowNullReferenceException();
}


// GameManagers.ChatManager$$HasActivePlayerSuggestions
// il2cpp: bool GameManagers_ChatManager__HasActivePlayerSuggestions (const MethodInfo* method);
// 0x5939de0

bool GameManagers_ChatManager__HasActivePlayerSuggestions(MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075457f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_075457f5 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
  }
  bVar3 = false;
  bVar1 = GameManagers_ChatManager_SuggestionState__get_IsActive((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    }
    iVar2 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
    bVar3 = true;
    if (iVar2 != 3) {
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
        iVar2 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->Type;
      }
      bVar3 = iVar2 == 2;
    }
  }
  return bVar3;
}


// GameManagers.ChatManager$$HasActiveSuggestions
// il2cpp: bool GameManagers_ChatManager__HasActiveSuggestions (const MethodInfo* method);
// 0x5939e80

bool GameManagers_ChatManager__HasActiveSuggestions(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075457f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_075457f6 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    bVar2 = GameManagers_ChatManager_SuggestionState__get_IsActive((MethodInfo *)0x0);
    return bVar2;
  }
  bVar2 = GameManagers_ChatManager_SuggestionState__get_IsActive((MethodInfo *)0x0);
  return bVar2;
}


// GameManagers.ChatManager$$RefreshPlayerSuggestions
// il2cpp: void GameManagers_ChatManager__RefreshPlayerSuggestions (const MethodInfo* method);
// 0x5939ee0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5939f0a: jmp 0x5939fa8

void GameManagers_ChatManager__RefreshPlayerSuggestions(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  UI_ChatPanel_o *__this;
  System_String_o *value;
  MethodInfo *method_00;
  Il2CppClass *pIVar3;
  GameManagers_ChatManager_c *method_01;
  
  if (Il2CppMethodInitialized_075457f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    il2cpp_codegen_initialize_runtime_metadata(&"\xef\xbf\xbf");
    Il2CppMethodInitialized_075457f7 = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)pIVar3;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar3);
    bVar2 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)pIVar3);
    pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    bVar2 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)pIVar3);
    pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)pIVar3;
  if (bVar2) {
    if ((pIVar3->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar3);
    }
    __this = GameManagers_ChatManager__GetChatPanel((MethodInfo *)pIVar3);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if (__this == (UI_ChatPanel_o *)0x0) {
        ThrowNullReferenceException();
      }
      value = UI_ChatPanel__GetInputText(__this,(MethodInfo *)0x0);
      bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          method_01 = TypeInfo_GameManagers_ChatManager;
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)method_01);
          return;
        }
        GameManagers_ChatManager__ClearLastSuggestions((MethodInfo *)TypeInfo_GameManagers_ChatManager);
        return;
      }
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText = "\xef\xbf\xbf";
      method_00 = (MethodInfo *)"\xef\xbf\xbf";
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__HandleTyping(value,method_00);
      return;
    }
  }
  return;
}


// GameManagers.ChatManager$$ClearPMNotificationFromChat
// il2cpp: void GameManagers_ChatManager__ClearPMNotificationFromChat (int32_t playerID, const MethodInfo* method);
// 0x593a060
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593a097: jmp 0x593a24d
// asm:   0x593a119: lea r15, [rip + 0x19597a0]  ; MethodInfo_System_Collections_Generic_List_bool_get_Item
// asm:   0x593a120: lea r12, [rip + 0x195b039]  ; MethodInfo_System_Collections_Generic_List_int_get_Item
// asm:   0x593a127: jmp 0x593a13f
// asm:   0x593a137: dec ebp
// asm:   0x593a139: js 0x593a1c7
// asm:   0x593a1c7: mov rdi, qword ptr [rbx]
// asm:   0x593a1dc: jmp 0x593a244

void GameManagers_ChatManager__ClearPMNotificationFromChat(int32_t playerID,MethodInfo *method)

{
  uint index;
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_bool__o *__this;
  System_Collections_Generic_List_int__o *__this_00;
  bool bVar2;
  int32_t iVar3;
  UI_ChatPanel_o *__this_01;
  MethodInfo *method_00;
  Il2CppClass *pIVar4;
  
  if (Il2CppMethodInitialized_075457f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075457f8 = '\x01';
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor != 0) goto label_0593a087;
label_0593a0f2:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) goto label_0593a0f2;
label_0593a087:
    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->RawMessages;
  }
  if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) {
label_0593a24d:
    ThrowNullReferenceException();
  }
  index = (pSVar1->fields)._size;
  pIVar4 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  while (index = index - 1, TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)pIVar4,
        -1 < (int)index) {
    if ((pIVar4->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar4);
    }
    __this = TypeInfo_GameManagers_ChatManager->static_fields->NotificationFlags;
    if (__this == (System_Collections_Generic_List_bool__o *)0x0) goto label_0593a24d;
    bVar2 = System_Collections_Generic_List_bool___get_Item
                      (__this,index,
                       (MethodInfo_51DBE20 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
    pIVar4 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
    if (bVar2) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      __this_00 = TypeInfo_GameManagers_ChatManager->static_fields->SenderIDs;
      if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) goto label_0593a24d;
      method_00 = (MethodInfo *)(ulong)index;
      iVar3 = System_Collections_Generic_List_int___get_Item
                        (__this_00,index,
                         (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      pIVar4 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
      if (iVar3 == playerID) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__RemoveLineAt(index,method_00);
        pIVar4 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
      }
    }
  }
  if ((pIVar4->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(pIVar4);
    bVar2 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)pIVar4);
    pIVar4 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  else {
    bVar2 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)pIVar4);
    pIVar4 = (Il2CppClass *)TypeInfo_GameManagers_ChatManager;
  }
  TypeInfo_GameManagers_ChatManager = (GameManagers_ChatManager_c *)pIVar4;
  if (bVar2) {
    if ((pIVar4->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar4);
    }
    __this_01 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)pIVar4);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (__this_01 != (UI_ChatPanel_o *)0x0) {
        UI_ChatPanel__Sync(__this_01,(MethodInfo *)0x0);
        return;
      }
      goto label_0593a24d;
    }
  }
  return;
}


// GameManagers.ChatManager$$ClearPMNotification
// il2cpp: void GameManagers_ChatManager__ClearPMNotification (int32_t playerID, const MethodInfo* method);
// 0x593a260
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593a295: jmp 0x593a35f

void GameManagers_ChatManager__ClearPMNotification(int32_t playerID,MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  bool bVar2;
  MethodInfo *method_00;
  MethodInfo *pMVar3;
  
  pMVar3 = (MethodInfo *)(ulong)(uint)playerID;
  if (Il2CppMethodInitialized_075457f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    Il2CppMethodInitialized_075457f9 = '\x01';
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) goto label_0593a2d8;
label_0593a282:
    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->ActivePMNotifications;
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor != 0) goto label_0593a282;
label_0593a2d8:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->ActivePMNotifications;
  }
  if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) {
label_0593a35f:
    ThrowNullReferenceException();
  }
  method_00 = pMVar3;
  bVar2 = System_Collections_Generic_HashSet_int___Contains
                    (pSVar1,playerID,
                     (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
  if (bVar2) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar1 = TypeInfo_GameManagers_ChatManager->static_fields->ActivePMNotifications;
    if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0593a35f;
    System_Collections_Generic_HashSet_int___Remove
              (pSVar1,playerID,(MethodInfo_4FA80C0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove)
    ;
    method_00 = pMVar3;
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__ClearPMNotificationFromChat(playerID,method_00);
  return;
}


// GameManagers.ChatManager$$HasActivePMNotification
// il2cpp: bool GameManagers_ChatManager__HasActivePMNotification (int32_t playerID, const MethodInfo* method);
// 0x593a370

bool GameManagers_ChatManager__HasActivePMNotification(int32_t playerID,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_HashSet_int__o *__this;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075457fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    Il2CppMethodInitialized_075457fa = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    __this = TypeInfo_GameManagers_ChatManager->static_fields->ActivePMNotifications;
  }
  else {
    __this = *(System_Collections_Generic_HashSet_int__o **)
              ((long)((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->static_fields + 0xa8);
  }
  if (__this == (System_Collections_Generic_HashSet_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_HashSet_int___Contains
                    (__this,playerID,
                     (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
  return bVar2;
}


// GameManagers.ChatManager$$HasAnyActivePMNotification
// il2cpp: bool GameManagers_ChatManager__HasAnyActivePMNotification (const MethodInfo* method);
// 0x593a410

bool GameManagers_ChatManager__HasAnyActivePMNotification(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_HashSet_int__o *pSVar2;
  
  if (Il2CppMethodInitialized_075457fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_get_Count);
    Il2CppMethodInitialized_075457fb = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    pSVar2 = TypeInfo_GameManagers_ChatManager->static_fields->ActivePMNotifications;
  }
  else {
    pSVar2 = *(System_Collections_Generic_HashSet_int__o **)
              ((long)((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->static_fields + 0xa8);
  }
  if (pSVar2 == (System_Collections_Generic_HashSet_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  return 0 < (pSVar2->fields)._count;
}


// GameManagers.ChatManager$$UpdatePartialTextAfterCompletion
// il2cpp: void GameManagers_ChatManager__UpdatePartialTextAfterCompletion (System_String_o* newText, System_String_o* chosen, const MethodInfo* method);
// 0x5937e70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5937ea6: jmp 0x5937ef3

void GameManagers_ChatManager__UpdatePartialTextAfterCompletion
               (System_String_o *newText,System_String_o *chosen,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  GameManagers_ChatManager_SuggestionState_StaticFields *pGVar3;
  
  if (Il2CppMethodInitialized_075457fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager_SuggestionState);
    Il2CppMethodInitialized_075457fc = '\x01';
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor != 0)
    goto label_05937e97;
label_05937ece:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    pGVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
    iVar1 = pGVar3->Type;
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0)
    goto label_05937ece;
label_05937e97:
    pGVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
    iVar1 = pGVar3->Type;
  }
  if (iVar1 != 3) {
    if (iVar1 == 2) {
      if (newText == (System_String_o *)0x0) {
label_05937fa7:
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
      if (chosen == (System_String_o *)0x0) goto label_05937fa7;
      iVar2 = System_String__IndexOf(chosen,0x20,(MethodInfo *)0x0);
      if (-1 < iVar2) {
        chosen = System_String__Substring_53042f0(chosen,0,iVar2,(MethodInfo *)0x0);
      }
      if ((TypeInfo_GameManagers_ChatManager_SuggestionState->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
      }
      pGVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
      goto label_05937f87;
    }
    if (iVar1 != 1) {
      return;
    }
  }
  if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState)->_2).cctor_finished_or_no_cctor == 0
     ) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager_SuggestionState);
    pGVar3 = TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields;
  }
label_05937f87:
  pGVar3->PartialText = chosen;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager_SuggestionState->static_fields->PartialText);
  return;
}


// GameManagers.ChatManager$$.ctor
// il2cpp: void GameManagers_ChatManager___ctor (GameManagers_ChatManager_o* __this, const MethodInfo* method);
// 0x593a4a0

void GameManagers_ChatManager___ctor(GameManagers_ChatManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$.cctor
// il2cpp: void GameManagers_ChatManager___cctor (const MethodInfo* method);
// 0x593a4b0

void GameManagers_ChatManager___cctor(MethodInfo *method)

{
  GameManagers_ChatManager_StaticFields *pGVar1;
  System_Text_RegularExpressions_Regex_o *pSVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Collections_Generic_List_int__o *pSVar4;
  System_Collections_Generic_List_T__o *__this;
  System_Collections_Generic_List_bool__o *pSVar5;
  System_Collections_Generic_List_DateTime__o *__this_00;
  System_Collections_Generic_Dictionary_ChatTextColor__string__o *__this_01;
  System_Collections_Generic_Dictionary_string__ChatManager_CommandAttribute__o *__this_02;
  System_Text_StringBuilder_o *pSVar6;
  System_Collections_Generic_HashSet_int__o *pSVar7;
  System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *__this_03;
  System_Collections_Generic_List_ChatManager_ChatDisplayLine__o *__this_04;
  System_Collections_Generic_List_long__o *__this_05;
  System_Collections_Generic_Dictionary_string__string__o *__this_06;
  System_Collections_Generic_Dictionary_string__int__o *__this_07;
  System_Collections_Generic_HashSet_string__o *__this_08;
  
  if (Il2CppMethodInitialized_075457fd == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_long_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_ChatTextColor_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_DateTime_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_ChatTextColor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_long);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"^/(\\w+)(?:\\s+(.*))?$");
    il2cpp_codegen_initialize_runtime_metadata(&"<[^>]+>|</[^>]+>");
    il2cpp_codegen_initialize_runtime_metadata(&"\\[([^\\]]+)\\]");
    il2cpp_codegen_initialize_runtime_metadata(&"@(\\w*)$");
    Il2CppMethodInitialized_075457fd = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4b50(pSVar2,"^/(\\w+)(?:\\s+(.*))?$",8,(MethodInfo *)0x0);
  TypeInfo_GameManagers_ChatManager->static_fields->CommandRegex = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_ChatManager->static_fields->CommandRegex);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4b50(pSVar2,"@(\\w*)$",8,(MethodInfo *)0x0);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->MentionRegex = pSVar2;
  Il2CppCodeGenWriteBarrier(&pGVar1->MentionRegex);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4b50(pSVar2,"\\[([^\\]]+)\\]",8,(MethodInfo *)0x0);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->ParamRegex = pSVar2;
  Il2CppCodeGenWriteBarrier(&pGVar1->ParamRegex);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4b50(pSVar2,"<[^>]+>|</[^>]+>",8,(MethodInfo *)0x0);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->RichTextPattern = pSVar2;
  Il2CppCodeGenWriteBarrier(&pGVar1->RichTextPattern);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->RawMessages = pSVar3;
  Il2CppCodeGenWriteBarrier(&pGVar1->RawMessages);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (pSVar4,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->SenderIDs = pSVar4;
  Il2CppCodeGenWriteBarrier(&pGVar1->SenderIDs);
  __this = (System_Collections_Generic_List_T__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ChatTextColor);
  System_Collections_Generic_List_Int32Enum____ctor
            (__this,(MethodInfo_39192E0 *)MethodInfo_System_Collections_Generic_List_ChatTextColor_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->Colors = (System_Collections_Generic_List_ChatTextColor__o *)__this;
  Il2CppCodeGenWriteBarrier(&pGVar1->Colors);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_bool);
  System_Collections_Generic_List_bool____ctor
            (pSVar5,(MethodInfo_51DB810 *)MethodInfo_System_Collections_Generic_List_bool_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->SystemFlags = pSVar5;
  Il2CppCodeGenWriteBarrier(&pGVar1->SystemFlags);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_DateTime);
  System_Collections_Generic_List_DateTime____ctor
            (__this_00,(MethodInfo_51F4F60 *)MethodInfo_System_Collections_Generic_List_DateTime_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->Timestamps = __this_00;
  Il2CppCodeGenWriteBarrier(&pGVar1->Timestamps);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_bool);
  System_Collections_Generic_List_bool____ctor
            (pSVar5,(MethodInfo_51DB810 *)MethodInfo_System_Collections_Generic_List_bool_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->SuggestionFlags = pSVar5;
  Il2CppCodeGenWriteBarrier(&pGVar1->SuggestionFlags);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_bool);
  System_Collections_Generic_List_bool____ctor
            (pSVar5,(MethodInfo_51DB810 *)MethodInfo_System_Collections_Generic_List_bool_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->NotificationFlags = pSVar5;
  Il2CppCodeGenWriteBarrier(&pGVar1->NotificationFlags);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->FeedLines = pSVar3;
  Il2CppCodeGenWriteBarrier(&pGVar1->FeedLines);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_ChatTextColor_string);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_4A543B0 *)MethodInfo_System_Collections_Generic_Dictionary_ChatTextColor_string_ctor)
  ;
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->ColorTags = __this_01;
  Il2CppCodeGenWriteBarrier(&pGVar1->ColorTags);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->CommandsCache = __this_02;
  Il2CppCodeGenWriteBarrier(&pGVar1->CommandsCache);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->_lineBatchDepth = 0;
  pGVar1->_pendingBatchSync = false;
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor_530d510(pSVar6,0x100,(MethodInfo *)0x0);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->MessageBuilder = pSVar6;
  Il2CppCodeGenWriteBarrier(&pGVar1->MessageBuilder);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor_530d510(pSVar6,8,(MethodInfo *)0x0);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->TimeBuilder = pSVar6;
  Il2CppCodeGenWriteBarrier(&pGVar1->TimeBuilder);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor_530d510(pSVar6,0x100,(MethodInfo *)0x0);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->MentionBuilder = pSVar6;
  Il2CppCodeGenWriteBarrier(&pGVar1->MentionBuilder);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar7,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->ActivePMNotifications = pSVar7;
  Il2CppCodeGenWriteBarrier(&pGVar1->ActivePMNotifications);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar7,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->NotifiedPMs = pSVar7;
  Il2CppCodeGenWriteBarrier(&pGVar1->NotifiedPMs);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_bool);
  System_Collections_Generic_List_bool____ctor
            (pSVar5,(MethodInfo_51DB810 *)MethodInfo_System_Collections_Generic_List_bool_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->PrivateFlags = pSVar5;
  Il2CppCodeGenWriteBarrier(&pGVar1->PrivateFlags);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (pSVar4,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->PMPartnerIDs = pSVar4;
  Il2CppCodeGenWriteBarrier(&pGVar1->PMPartnerIDs);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData);
  System_Collections_Generic_List_ChatManager_ChatPlayerLineData____ctor
            (__this_03,
             (MethodInfo_3A701D0 *)
             MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->PlayerLineData = __this_03;
  Il2CppCodeGenWriteBarrier(&pGVar1->PlayerLineData);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine);
  System_Collections_Generic_List_ChatManager_ChatDisplayLine____ctor
            (__this_04,
             (MethodInfo_3A6C700 *)MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_ctor
            );
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->DisplayLineCache = __this_04;
  Il2CppCodeGenWriteBarrier(&pGVar1->DisplayLineCache);
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_long);
  System_Collections_Generic_List_long____ctor
            (__this_05,(MethodInfo_391C400 *)MethodInfo_System_Collections_Generic_List_long_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->LineIDs = __this_05;
  Il2CppCodeGenWriteBarrier(&pGVar1->LineIDs);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->_preservedInputText = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&pGVar1->_preservedInputText);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->_preservedInputCaretPosition = 0;
  pGVar1->_preservedPMTargetActorNumber = -1;
  pGVar1->PreserveInputOnRestart = false;
  __this_06 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->_conversationTexts = __this_06;
  Il2CppCodeGenWriteBarrier(&pGVar1->_conversationTexts);
  __this_07 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_object__int__o *)__this_07,
             (MethodInfo_4A9CB80 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->_conversationCarets = __this_07;
  Il2CppCodeGenWriteBarrier(&pGVar1->_conversationCarets);
  __this_08 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_08,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  pGVar1 = TypeInfo_GameManagers_ChatManager->static_fields;
  pGVar1->CustomCommandKeys = __this_08;
  Il2CppCodeGenWriteBarrier(&pGVar1->CustomCommandKeys);
  return;
}


