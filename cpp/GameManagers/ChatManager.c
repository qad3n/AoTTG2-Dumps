// Type: GameManagers.ChatManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameManagers/ChatManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameManagers/ChatManager.cs  [CHANGED since prior version]
// --------------------------------

// GameManagers.ChatManager.CommandAttribute.<>c$$.cctor
// il2cpp: void GameManagers_ChatManager_CommandAttribute___c___cctor (const MethodInfo* method);
// 0x42259d0

void GameManagers_ChatManager_CommandAttribute_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057050d8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057050d8 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// GameManagers.ChatManager.CommandAttribute.<>c$$.ctor
// il2cpp: void GameManagers_ChatManager_CommandAttribute___c___ctor (GameManagers_ChatManager_CommandAttribute___c_o* __this, const MethodInfo* method);
// 0x4225a40

void GameManagers_ChatManager_CommandAttribute_<>c___ctor
               (GameManagers_ChatManager_CommandAttribute___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager.CommandAttribute.<>c$$<.ctor>b__33_0
// il2cpp: System_String_o* GameManagers_ChatManager_CommandAttribute___c____ctor_b__33_0 (GameManagers_ChatManager_CommandAttribute___c_o* __this, System_Text_RegularExpressions_Match_o* m, const MethodInfo* method);
// 0x4225a50

System_String_o *
GameManagers_ChatManager_CommandAttribute_<>c__<_ctor>b__33_0
          (GameManagers_ChatManager_CommandAttribute___c_o *__this,
          System_Text_RegularExpressions_Match_o *m,MethodInfo *method)

{
  System_Text_RegularExpressions_GroupCollection_o *__this_00;
  System_Text_RegularExpressions_Capture_o *__this_01;
  System_String_o *pSVar1;
  
  if (m != (System_Text_RegularExpressions_Match_o *)0x0) {
    __this_00 = (System_Text_RegularExpressions_GroupCollection_o *)
                (*(m->klass->vtable)._5_get_Groups.methodPtr)
                          (m,(m->klass->vtable)._5_get_Groups.method);
    if (__this_00 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
      __this_01 = (System_Text_RegularExpressions_Capture_o *)
                  System_Text_RegularExpressions_GroupCollection__get_Item
                            (__this_00,1,(MethodInfo *)0x0);
      if (__this_01 != (System_Text_RegularExpressions_Capture_o *)0x0) {
        pSVar1 = System_Text_RegularExpressions_Capture__get_Value(__this_01,(MethodInfo *)0x0);
        return pSVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager.CommandAttribute$$get_Name
// il2cpp: System_String_o* GameManagers_ChatManager_CommandAttribute__get_Name (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x42256e0

System_String_o *
GameManagers_ChatManager_CommandAttribute__get_Name
          (GameManagers_ChatManager_CommandAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Name_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_Name
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_Name (GameManagers_ChatManager_CommandAttribute_o* __this, System_String_o* value, const MethodInfo* method);
// 0x42256f0

void GameManagers_ChatManager_CommandAttribute__set_Name
               (GameManagers_ChatManager_CommandAttribute_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Name_k__BackingField = value;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_Description
// il2cpp: System_String_o* GameManagers_ChatManager_CommandAttribute__get_Description (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x4225700

System_String_o *
GameManagers_ChatManager_CommandAttribute__get_Description
          (GameManagers_ChatManager_CommandAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Description_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_Description
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_Description (GameManagers_ChatManager_CommandAttribute_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4225710

void GameManagers_ChatManager_CommandAttribute__set_Description
               (GameManagers_ChatManager_CommandAttribute_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Description_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Description_k__BackingField);
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_Alias
// il2cpp: System_String_o* GameManagers_ChatManager_CommandAttribute__get_Alias (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x4225720

System_String_o *
GameManagers_ChatManager_CommandAttribute__get_Alias
          (GameManagers_ChatManager_CommandAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Alias_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_Alias
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_Alias (GameManagers_ChatManager_CommandAttribute_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4225730

void GameManagers_ChatManager_CommandAttribute__set_Alias
               (GameManagers_ChatManager_CommandAttribute_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Alias_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Alias_k__BackingField);
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_Command
// il2cpp: System_Reflection_MethodInfo_o* GameManagers_ChatManager_CommandAttribute__get_Command (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x4225740

System_Reflection_MethodInfo_o *
GameManagers_ChatManager_CommandAttribute__get_Command
          (GameManagers_ChatManager_CommandAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Command_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_Command
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_Command (GameManagers_ChatManager_CommandAttribute_o* __this, System_Reflection_MethodInfo_o* value, const MethodInfo* method);
// 0x4225750

void GameManagers_ChatManager_CommandAttribute__set_Command
               (GameManagers_ChatManager_CommandAttribute_o *__this,
               System_Reflection_MethodInfo_o *value,MethodInfo *method)

{
  (__this->fields)._Command_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Command_k__BackingField);
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_IsAlias
// il2cpp: bool GameManagers_ChatManager_CommandAttribute__get_IsAlias (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x4225760

bool_conflict
GameManagers_ChatManager_CommandAttribute__get_IsAlias
          (GameManagers_ChatManager_CommandAttribute_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._IsAlias_k__BackingField);
}


// GameManagers.ChatManager.CommandAttribute$$set_IsAlias
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_IsAlias (GameManagers_ChatManager_CommandAttribute_o* __this, bool value, const MethodInfo* method);
// 0x4225770

void GameManagers_ChatManager_CommandAttribute__set_IsAlias
               (GameManagers_ChatManager_CommandAttribute_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)&(__this->fields)._IsAlias_k__BackingField = (char)value;
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_Parameters
// il2cpp: System_String_array* GameManagers_ChatManager_CommandAttribute__get_Parameters (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x4225780

System_String_array *
GameManagers_ChatManager_CommandAttribute__get_Parameters
          (GameManagers_ChatManager_CommandAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Parameters_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_Parameters
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_Parameters (GameManagers_ChatManager_CommandAttribute_o* __this, System_String_array* value, const MethodInfo* method);
// 0x4225790

void GameManagers_ChatManager_CommandAttribute__set_Parameters
               (GameManagers_ChatManager_CommandAttribute_o *__this,System_String_array *value,
               MethodInfo *method)

{
  (__this->fields)._Parameters_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Parameters_k__BackingField);
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_AutofillType
// il2cpp: int32_t GameManagers_ChatManager_CommandAttribute__get_AutofillType (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x42257a0

int32_t GameManagers_ChatManager_CommandAttribute__get_AutofillType
                  (GameManagers_ChatManager_CommandAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._AutofillType_k__BackingField;
}


// GameManagers.ChatManager.CommandAttribute$$set_AutofillType
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_AutofillType (GameManagers_ChatManager_CommandAttribute_o* __this, int32_t value, const MethodInfo* method);
// 0x42257b0

void GameManagers_ChatManager_CommandAttribute__set_AutofillType
               (GameManagers_ChatManager_CommandAttribute_o *__this,int32_t value,MethodInfo *method
               )

{
  (__this->fields)._AutofillType_k__BackingField = value;
  return;
}


// GameManagers.ChatManager.CommandAttribute$$get_ExcludeFromHelp
// il2cpp: bool GameManagers_ChatManager_CommandAttribute__get_ExcludeFromHelp (GameManagers_ChatManager_CommandAttribute_o* __this, const MethodInfo* method);
// 0x42257c0

bool_conflict
GameManagers_ChatManager_CommandAttribute__get_ExcludeFromHelp
          (GameManagers_ChatManager_CommandAttribute_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._ExcludeFromHelp_k__BackingField)
  ;
}


// GameManagers.ChatManager.CommandAttribute$$set_ExcludeFromHelp
// il2cpp: void GameManagers_ChatManager_CommandAttribute__set_ExcludeFromHelp (GameManagers_ChatManager_CommandAttribute_o* __this, bool value, const MethodInfo* method);
// 0x42257d0

void GameManagers_ChatManager_CommandAttribute__set_ExcludeFromHelp
               (GameManagers_ChatManager_CommandAttribute_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)&(__this->fields)._ExcludeFromHelp_k__BackingField = (char)value;
  return;
}


// GameManagers.ChatManager.CommandAttribute$$.ctor
// il2cpp: void GameManagers_ChatManager_CommandAttribute___ctor (GameManagers_ChatManager_CommandAttribute_o* __this, GameManagers_ChatManager_CommandAttribute_o* commandAttribute, const MethodInfo* method);
// 0x421af80

void GameManagers_ChatManager_CommandAttribute___ctor
               (GameManagers_ChatManager_CommandAttribute_o *__this,
               GameManagers_ChatManager_CommandAttribute_o *commandAttribute,MethodInfo *method)

{
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  if (commandAttribute != (GameManagers_ChatManager_CommandAttribute_o *)0x0) {
    (__this->fields)._Name_k__BackingField = (commandAttribute->fields)._Name_k__BackingField;
    il2cpp_runtime_glue(&__this->fields);
    (__this->fields)._Description_k__BackingField =
         (commandAttribute->fields)._Description_k__BackingField;
    il2cpp_runtime_glue(&(__this->fields)._Description_k__BackingField);
    (__this->fields)._Alias_k__BackingField = (commandAttribute->fields)._Alias_k__BackingField;
    il2cpp_runtime_glue(&(__this->fields)._Alias_k__BackingField);
    (__this->fields)._Command_k__BackingField = (commandAttribute->fields)._Command_k__BackingField;
    il2cpp_runtime_glue(&(__this->fields)._Command_k__BackingField);
    (__this->fields)._AutofillType_k__BackingField =
         (commandAttribute->fields)._AutofillType_k__BackingField;
    *(char *)&(__this->fields)._ExcludeFromHelp_k__BackingField =
         (char)(commandAttribute->fields)._ExcludeFromHelp_k__BackingField;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager.CommandAttribute$$.ctor
// il2cpp: void GameManagers_ChatManager_CommandAttribute___ctor (GameManagers_ChatManager_CommandAttribute_o* __this, System_String_o* name, System_String_o* description, int32_t autofillType, bool excludeFromHelp, const MethodInfo* method);
// 0x42257e0

void GameManagers_ChatManager_CommandAttribute___ctor
               (GameManagers_ChatManager_CommandAttribute_o *__this,System_String_o *name,
               System_String_o *description,int32_t autofillType,bool_conflict excludeFromHelp,
               MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this_00;
  long lVar1;
  System_Text_RegularExpressions_MatchCollection_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar2;
  System_Func_TSource__TResult__o *selector;
  System_String_array *pSVar3;
  
  if (DAT_057050d7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_Text_RegularExpressions_Mat);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Select_Match_String);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray_String);
    il2cpp_init_method_metadata(&TypeInfo_Func_Match__string);
    il2cpp_init_method_metadata(&MethodInfo_String___ctor_b__33_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057050d7 = '\x01';
  }
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = name;
  il2cpp_runtime_glue(&__this->fields,name);
  (__this->fields)._Description_k__BackingField = description;
  il2cpp_runtime_glue(&(__this->fields)._Description_k__BackingField,description);
  (__this->fields)._AutofillType_k__BackingField = autofillType;
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x10);
  if (__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    source = System_Text_RegularExpressions_Regex__Matches(__this_00,description,(MethodInfo *)0x0);
    pSVar2 = System_Linq_Enumerable__Cast<object>
                       ((System_Collections_IEnumerable_o *)source,MethodInfo_IEnumerable_1_System_Text_RegularExpressions_Mat);
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
      selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_Match__string);
      System_Func<object__object>___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar1 + 8) = selector;
      il2cpp_runtime_glue(lVar1 + 8,selector);
    }
    pSVar2 = System_Linq_Enumerable__Select<object__object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,selector,
                        MethodInfo_IEnumerable_1_System_String__Select_Match_String);
    pSVar3 = (System_String_array *)
             System_Linq_Enumerable__ToArray<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,MethodInfo_String___ToArray_String);
    (__this->fields)._Parameters_k__BackingField = pSVar3;
    il2cpp_runtime_glue(&(__this->fields)._Parameters_k__BackingField,pSVar3);
    *(char *)&(__this->fields)._ExcludeFromHelp_k__BackingField = (char)excludeFromHelp;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager.SuggestionState$$Clear
// il2cpp: void GameManagers_ChatManager_SuggestionState__Clear (const MethodInfo* method);
// 0x4223890

void GameManagers_ChatManager_SuggestionState__Clear(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (DAT_057050d9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    il2cpp_init_method_metadata(&"");
    DAT_057050d9 = '\x01';
  }
  if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
    il2cpp_init_class();
  }
  **(undefined8 **)(TypeInfo_SuggestionState + 0xb8) = "";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_SuggestionState + 0xb8),"");
  lVar3 = *(long *)(TypeInfo_SuggestionState + 0xb8);
  *(undefined8 *)(lVar3 + 8) = "";
  il2cpp_runtime_glue(lVar3 + 8);
  lVar4 = TypeInfo_SuggestionState;
  lVar3 = *(long *)(TypeInfo_SuggestionState + 0xb8);
  *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
  lVar2 = *(long *)(lVar3 + 0x18);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    iVar1 = *(int *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    if (0 < iVar1) {
      System_Array__Clear(*(System_Array_o **)(lVar2 + 0x10),0,iVar1,(MethodInfo *)0x0);
      lVar3 = *(long *)(TypeInfo_SuggestionState + 0xb8);
      lVar4 = TypeInfo_SuggestionState;
    }
    *(undefined8 *)(lVar3 + 0x20) = 0xffffffff;
    if (*(char *)(lVar3 + 0x38) == '\0') {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        il2cpp_init_class();
        lVar4 = TypeInfo_SuggestionState;
        *(undefined1 *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x28) = 0;
        iVar1 = *(int *)(lVar4 + 0xe4);
      }
      else {
        *(undefined1 *)(lVar3 + 0x28) = 0;
        iVar1 = *(int *)(lVar4 + 0xe4);
      }
    }
    else {
      iVar1 = *(int *)(lVar4 + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      lVar4 = TypeInfo_SuggestionState;
    }
    lVar3 = *(long *)(lVar4 + 0xb8);
    *(undefined8 *)(lVar3 + 0x30) = "";
    il2cpp_runtime_glue(lVar3 + 0x30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager.SuggestionState$$SetOriginalContext
// il2cpp: void GameManagers_ChatManager_SuggestionState__SetOriginalContext (System_String_o* original, int32_t startPos, int32_t endPos, const MethodInfo* method);
// 0x4221790

void GameManagers_ChatManager_SuggestionState__SetOriginalContext
               (System_String_o *original,int32_t startPos,int32_t endPos,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057050da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    DAT_057050da = '\x01';
  }
  if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_SuggestionState + 0xb8);
  *(System_String_o **)(lVar1 + 8) = original;
  il2cpp_runtime_glue(lVar1 + 8,original);
  lVar1 = *(long *)(TypeInfo_SuggestionState + 0xb8);
  *(int32_t *)(lVar1 + 0x10) = startPos;
  *(int32_t *)(lVar1 + 0x14) = endPos;
  return;
}


// GameManagers.ChatManager.SuggestionState$$get_HasSuggestions
// il2cpp: bool GameManagers_ChatManager_SuggestionState__get_HasSuggestions (const MethodInfo* method);
// 0x4225aa0

bool_conflict GameManagers_ChatManager_SuggestionState__get_HasSuggestions(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_057050db == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    DAT_057050db = '\x01';
    iVar1 = *(int *)(TypeInfo_SuggestionState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_SuggestionState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x18);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x18);
  }
  if (lVar2 != 0) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar2 >> 8),0 < *(int *)(lVar2 + 0x18));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager.SuggestionState$$get_IsActive
// il2cpp: bool GameManagers_ChatManager_SuggestionState__get_IsActive (const MethodInfo* method);
// 0x4221dc0

bool_conflict GameManagers_ChatManager_SuggestionState__get_IsActive(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_057050dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    DAT_057050dc = '\x01';
    iVar1 = *(int *)(TypeInfo_SuggestionState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_SuggestionState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    iVar1 = *(int *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x24);
  }
  else {
    iVar1 = *(int *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x24);
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_057050db == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    DAT_057050db = '\x01';
    iVar1 = *(int *)(TypeInfo_SuggestionState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_SuggestionState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x18);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x18);
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (bool_conflict)CONCAT71((int7)((ulong)lVar2 >> 8),0 < *(int *)(lVar2 + 0x18));
}


// GameManagers.ChatManager.SuggestionState$$.cctor
// il2cpp: void GameManagers_ChatManager_SuggestionState___cctor (const MethodInfo* method);
// 0x4225b30

void GameManagers_ChatManager_SuggestionState___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_object__o *__this;
  
  if (DAT_057050dd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    il2cpp_init_method_metadata(&"");
    DAT_057050dd = '\x01';
  }
  **(undefined8 **)(TypeInfo_SuggestionState + 0xb8) = "";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_SuggestionState + 0xb8),"");
  lVar1 = *(long *)(TypeInfo_SuggestionState + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "";
  il2cpp_runtime_glue(lVar1 + 8);
  *(undefined8 *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x10) = 0xffffffffffffffff;
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_System_String);
  lVar1 = *(long *)(TypeInfo_SuggestionState + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar1 + 0x18) = __this;
  il2cpp_runtime_glue(lVar1 + 0x18,__this);
  lVar1 = *(long *)(TypeInfo_SuggestionState + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = 0xffffffff;
  *(undefined1 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = "";
  il2cpp_runtime_glue(lVar1 + 0x30);
  *(undefined1 *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x38) = 0;
  return;
}


// GameManagers.ChatManager.<>c$$.cctor
// il2cpp: void GameManagers_ChatManager___c___cctor (const MethodInfo* method);
// 0x4225c50

void GameManagers_ChatManager_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057050de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057050de = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// GameManagers.ChatManager.<>c$$.ctor
// il2cpp: void GameManagers_ChatManager___c___ctor (GameManagers_ChatManager___c_o* __this, const MethodInfo* method);
// 0x4225cc0

void GameManagers_ChatManager_<>c___ctor(GameManagers_ChatManager___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager.<>c$$<Help>b__11_0
// il2cpp: bool GameManagers_ChatManager___c___Help_b__11_0 (GameManagers_ChatManager___c_o* __this, System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv, const MethodInfo* method);
// 0x4225cd0

bool_conflict
GameManagers_ChatManager_<>c__<Help>b__11_0
          (GameManagers_ChatManager___c_o *__this,
          System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv,
          MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  GameManagers_ChatManager_CommandAttribute_o *command;
  MethodInfo *method_00;
  
  command = kv.fields.value;
  method_00 = (MethodInfo *)kv.fields.key;
  if (DAT_057050df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    in_RAX = il2cpp_init_method_metadata(&MethodInfo_ChatManager_CommandAttribute_get_Value);
    DAT_057050df = '\x01';
  }
  if (command == (GameManagers_ChatManager_CommandAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((char)(command->fields)._ExcludeFromHelp_k__BackingField == '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) != 0) {
    bVar1 = GameManagers_ChatManager__ShouldIncludeHiddenCommandInHelp(command,method_00);
    return bVar1;
  }
  il2cpp_init_class();
  bVar1 = GameManagers_ChatManager__ShouldIncludeHiddenCommandInHelp(command,method_00);
  return bVar1;
}


// GameManagers.ChatManager.<>c$$<Help>b__11_1
// il2cpp: System_String_o* GameManagers_ChatManager___c___Help_b__11_1 (GameManagers_ChatManager___c_o* __this, System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv, const MethodInfo* method);
// 0x4225d40

System_String_o *
GameManagers_ChatManager_<>c__<Help>b__11_1
          (GameManagers_ChatManager___c_o *__this,
          System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv,
          MethodInfo *method)

{
  if (DAT_057050e0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key,kv.fields.key,kv.fields.value);
    DAT_057050e0 = '\x01';
  }
  return kv.fields.key;
}


// GameManagers.ChatManager.<>c$$<Help>b__11_2
// il2cpp: GameManagers_ChatManager_CommandAttribute_o* GameManagers_ChatManager___c___Help_b__11_2 (GameManagers_ChatManager___c_o* __this, System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv, const MethodInfo* method);
// 0x4225d70

GameManagers_ChatManager_CommandAttribute_o *
GameManagers_ChatManager_<>c__<Help>b__11_2
          (GameManagers_ChatManager___c_o *__this,
          System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv,
          MethodInfo *method)

{
  if (DAT_057050e1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ChatManager_CommandAttribute_get_Value,kv.fields.key);
    DAT_057050e1 = '\x01';
  }
  return kv.fields.value;
}


// GameManagers.ChatManager.<>c$$<SaveChatHistory>b__12_0
// il2cpp: System_String_o* GameManagers_ChatManager___c___SaveChatHistory_b__12_0 (GameManagers_ChatManager___c_o* __this, System_String_o* msg, int32_t i, const MethodInfo* method);
// 0x4225da0

System_String_o *
GameManagers_ChatManager_<>c__<SaveChatHistory>b__12_0
          (GameManagers_ChatManager___c_o *__this,System_String_o *msg,int32_t i,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_DateTime__o *__this_00;
  System_DateTime_o timestamp;
  System_String_o *input;
  System_String_o *pSVar2;
  
  if (DAT_057050e2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_DateTime_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Regex);
    il2cpp_init_method_metadata(&"<.*?>");
    DAT_057050e2 = '\x01';
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = *(System_Collections_Generic_List_DateTime__o **)
                 (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x48);
  }
  else {
    __this_00 = *(System_Collections_Generic_List_DateTime__o **)
                 (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x48);
  }
  if (__this_00 != (System_Collections_Generic_List_DateTime__o *)0x0) {
    timestamp = System_Collections_Generic_List<DateTime>__get_Item(__this_00,i,MethodInfo_DateTime_get_Item);
    input = GameManagers_ChatManager__GetFormattedMessage(msg,timestamp,0,method);
    pSVar2 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    if (*(int *)(TypeInfo_Regex + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = System_Text_RegularExpressions_Regex__Replace
                       (input,"<.*?>",pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager.<>c$$<HandleTyping>b__110_0
// il2cpp: int32_t GameManagers_ChatManager___c___HandleTyping_b__110_0 (GameManagers_ChatManager___c_o* __this, Photon_Realtime_Player_o* a, Photon_Realtime_Player_o* b, const MethodInfo* method);
// 0x4225ec0

int32_t GameManagers_ChatManager_<>c__<HandleTyping>b__110_0
                  (GameManagers_ChatManager___c_o *__this,Photon_Realtime_Player_o *a,
                  Photon_Realtime_Player_o *b,MethodInfo *method)

{
  uint in_EAX;
  int32_t iVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  if ((a != (Photon_Realtime_Player_o *)0x0) &&
     (uStack_8 = CONCAT44((a->fields).actorNumber,in_EAX), b != (Photon_Realtime_Player_o *)0x0)) {
    iVar1 = System_Int32__CompareTo((int)&uStack_8 + 4,(b->fields).actorNumber,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager.<>c$$<HandleTyping>b__110_1
// il2cpp: System_String_o* GameManagers_ChatManager___c___HandleTyping_b__110_1 (GameManagers_ChatManager___c_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x4225ef0

System_String_o *
GameManagers_ChatManager_<>c__<HandleTyping>b__110_1
          (GameManagers_ChatManager___c_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  Il2CppObject *arg0;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  int32_t local_1c;
  
  if (DAT_057050e3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"[{0}]");
    il2cpp_init_method_metadata(&"");
    DAT_057050e3 = '\x01';
  }
  if (p != (Photon_Realtime_Player_o *)0x0) {
    local_1c = (p->fields).actorNumber;
    arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_1c);
    method_00 = (MethodInfo *)&"[{0}]";
    pSVar1 = System_String__Format("[{0}]",arg0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = GameManagers_ChatManager__GetColorString(pSVar1,1,0,method_00);
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = PhotonExtensions__GetStringProperty
                       (p,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                        (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = Anticheat_ChatFilter__FilterSizeTag(pSVar2,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(pSVar1," ",pSVar2,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager.<>c$$<HandleTyping>b__110_2
// il2cpp: int32_t GameManagers_ChatManager___c___HandleTyping_b__110_2 (GameManagers_ChatManager___c_o* __this, System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o a, System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o b, const MethodInfo* method);
// 0x4226040

int32_t GameManagers_ChatManager_<>c__<HandleTyping>b__110_2
                  (GameManagers_ChatManager___c_o *__this,
                  System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o a,
                  System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o b,
                  MethodInfo *method)

{
  int32_t iVar1;
  
  if (DAT_057050e4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key,a.fields.key,a.fields.value,b.fields.key,b.fields.value);
    DAT_057050e4 = '\x01';
  }
  iVar1 = System_String__Compare(a.fields.key,b.fields.key,4,(MethodInfo *)0x0);
  return iVar1;
}


// GameManagers.ChatManager.<>c$$<HandleTyping>b__110_3
// il2cpp: int32_t GameManagers_ChatManager___c___HandleTyping_b__110_3 (GameManagers_ChatManager___c_o* __this, Photon_Realtime_Player_o* a, Photon_Realtime_Player_o* b, const MethodInfo* method);
// 0x4226080

int32_t GameManagers_ChatManager_<>c__<HandleTyping>b__110_3
                  (GameManagers_ChatManager___c_o *__this,Photon_Realtime_Player_o *a,
                  Photon_Realtime_Player_o *b,MethodInfo *method)

{
  uint in_EAX;
  int32_t iVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  if ((a != (Photon_Realtime_Player_o *)0x0) &&
     (uStack_8 = CONCAT44((a->fields).actorNumber,in_EAX), b != (Photon_Realtime_Player_o *)0x0)) {
    iVar1 = System_Int32__CompareTo((int)&uStack_8 + 4,(b->fields).actorNumber,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager.<>c$$<HandleTyping>b__110_4
// il2cpp: System_String_o* GameManagers_ChatManager___c___HandleTyping_b__110_4 (GameManagers_ChatManager___c_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x42260b0

System_String_o *
GameManagers_ChatManager_<>c__<HandleTyping>b__110_4
          (GameManagers_ChatManager___c_o *__this,Photon_Realtime_Player_o *p,MethodInfo *method)

{
  Il2CppObject *arg0;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  int32_t local_1c;
  
  if (DAT_057050e5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"[{0}]");
    il2cpp_init_method_metadata(&"");
    DAT_057050e5 = '\x01';
  }
  if (p != (Photon_Realtime_Player_o *)0x0) {
    local_1c = (p->fields).actorNumber;
    arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_1c);
    method_00 = (MethodInfo *)&"[{0}]";
    pSVar1 = System_String__Format("[{0}]",arg0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = GameManagers_ChatManager__GetColorString(pSVar1,1,0,method_00);
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = PhotonExtensions__GetStringProperty
                       (p,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                        (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = Anticheat_ChatFilter__FilterSizeTag(pSVar2,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(pSVar1," ",pSVar2,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager.<>c__DisplayClass93_0$$.ctor
// il2cpp: void GameManagers_ChatManager___c__DisplayClass93_0___ctor (GameManagers_ChatManager___c__DisplayClass93_0_o* __this, const MethodInfo* method);
// 0x421d600

void GameManagers_ChatManager_<>c__DisplayClass93_0___ctor
               (GameManagers_ChatManager___c__DisplayClass93_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager.<>c__DisplayClass93_0$$<ProcessMentions>b__0
// il2cpp: bool GameManagers_ChatManager___c__DisplayClass93_0___ProcessMentions_b__0 (GameManagers_ChatManager___c__DisplayClass93_0_o* __this, Photon_Realtime_Player_o* p, const MethodInfo* method);
// 0x4226200

bool_conflict
GameManagers_ChatManager_<>c__DisplayClass93_0__<ProcessMentions>b__0
          (GameManagers_ChatManager___c__DisplayClass93_0_o *__this,Photon_Realtime_Player_o *p,
          MethodInfo *method)

{
  uint uVar1;
  uint in_EAX;
  bool_conflict bVar2;
  bool_conflict bVar3;
  System_String_o *a;
  System_String_o *pSVar4;
  System_String_o *a_00;
  GameManagers_ChatManager___c__DisplayClass93_0_Fields *pGVar5;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (DAT_057050e6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"");
    DAT_057050e6 = '\x01';
  }
  uVar1 = (uint)uStack_28;
  uStack_28 = (ulong)(uint)uStack_28;
  if (p != (Photon_Realtime_Player_o *)0x0) {
    uStack_28 = CONCAT44((p->fields).actorNumber,uVar1);
    a = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (p,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                        (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = Anticheat_ChatFilter__FilterSizeTag(pSVar4,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = MiscExtensions__StripRichText(pSVar4,(MethodInfo *)0x0);
    if (pSVar4 != (System_String_o *)0x0) {
      a_00 = System_String__ToLower(pSVar4,(MethodInfo *)0x0);
      pSVar4 = (__this->fields).mention;
      if (pSVar4 != (System_String_o *)0x0) {
        pGVar5 = &__this->fields;
        pSVar4 = System_String__ToLower(pSVar4,(MethodInfo *)0x0);
        pGVar5->mention = pSVar4;
        il2cpp_runtime_glue(pGVar5,pSVar4);
        bVar2 = System_String__op_Equality(a,pGVar5->mention,(MethodInfo *)0x0);
        bVar3 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar2 >> 8),1);
        if ((char)bVar2 == '\0') {
          bVar3 = System_String__op_Equality(a_00,pGVar5->mention,(MethodInfo *)0x0);
        }
        return bVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__114$$.ctor
// il2cpp: void GameManagers_ChatManager__ReactivateInputAfterClick_d__114___ctor (GameManagers_ChatManager__ReactivateInputAfterClick_d__114_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4223870

void GameManagers_ChatManager_<ReactivateInputAfterClick>d__114___ctor
               (GameManagers_ChatManager__ReactivateInputAfterClick_d__114_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__114$$System.IDisposable.Dispose
// il2cpp: void GameManagers_ChatManager__ReactivateInputAfterClick_d__114__System_IDisposable_Dispose (GameManagers_ChatManager__ReactivateInputAfterClick_d__114_o* __this, const MethodInfo* method);
// 0x4226370

void GameManagers_ChatManager_<ReactivateInputAfterClick>d__114__System_IDisposable_Dispose
               (GameManagers_ChatManager__ReactivateInputAfterClick_d__114_o *__this,
               MethodInfo *method)

{
  return;
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__114$$MoveNext
// il2cpp: bool GameManagers_ChatManager__ReactivateInputAfterClick_d__114__MoveNext (GameManagers_ChatManager__ReactivateInputAfterClick_d__114_o* __this, const MethodInfo* method);
// 0x4226380

bool_conflict
GameManagers_ChatManager_<ReactivateInputAfterClick>d__114__MoveNext
          (GameManagers_ChatManager__ReactivateInputAfterClick_d__114_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_ChatPanel_o *pUVar2;
  bool_conflict bVar3;
  undefined8 uVar4;
  long lVar5;
  MethodInfo *pMVar6;
  
  if (DAT_057050e7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    DAT_057050e7 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar5 = *(long *)(TypeInfo_SuggestionState + 0xb8);
      *(undefined1 *)&(__this->fields)._wasTabCompleting_5__2 = *(undefined1 *)(lVar5 + 0x28);
      (__this->fields)._preservedIndex_5__3 = *(int32_t *)(lVar5 + 0x20);
      pUVar2 = (__this->fields).chatPanel;
      if (pUVar2 == (UI_ChatPanel_o *)0x0) goto LAB_0422658d;
      UI_ChatPanel__Activate(pUVar2,(MethodInfo *)0x0);
      if ((char)(__this->fields)._wasTabCompleting_5__2 != '\0') {
        if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar5 = *(long *)(TypeInfo_SuggestionState + 0xb8);
        iVar1 = (__this->fields)._preservedIndex_5__3;
        if (*(int *)(lVar5 + 0x20) != iVar1) {
          if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
            il2cpp_init_class();
            lVar5 = *(long *)(TypeInfo_SuggestionState + 0xb8);
          }
          *(int *)(lVar5 + 0x20) = iVar1;
          *(undefined1 *)(lVar5 + 0x28) = 1;
          pMVar6 = TypeInfo_ChatManager;
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            il2cpp_init_class();
          }
          GameManagers_ChatManager__RefreshSuggestionDisplay(pMVar6);
        }
      }
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      uVar4 = il2cpp_runtime_glue(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 2;
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      (__this->fields).__1__state = -1;
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      uVar4 = il2cpp_runtime_glue(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
    }
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
  }
  (__this->fields).__1__state = -1;
  pUVar2 = (__this->fields).chatPanel;
  if (pUVar2 != (UI_ChatPanel_o *)0x0) {
    bVar3 = UI_ChatPanel__IsInputActive(pUVar2,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pUVar2 = (__this->fields).chatPanel;
      if (pUVar2 == (UI_ChatPanel_o *)0x0) goto LAB_0422658d;
      UI_ChatPanel__Activate(pUVar2,(MethodInfo *)0x0);
      if ((char)(__this->fields)._wasTabCompleting_5__2 != '\0') {
        if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar5 = *(long *)(TypeInfo_SuggestionState + 0xb8);
        iVar1 = (__this->fields)._preservedIndex_5__3;
        if (*(int *)(lVar5 + 0x20) != iVar1) {
          if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
            il2cpp_init_class();
            lVar5 = *(long *)(TypeInfo_SuggestionState + 0xb8);
          }
          *(int *)(lVar5 + 0x20) = iVar1;
          *(undefined1 *)(lVar5 + 0x28) = 1;
          pMVar6 = TypeInfo_ChatManager;
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            il2cpp_init_class();
          }
          GameManagers_ChatManager__RefreshSuggestionDisplay(pMVar6);
        }
      }
    }
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
      il2cpp_init_class();
    }
    *(undefined1 *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x38) = 0;
    return 0;
  }
LAB_0422658d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__114$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_ChatManager__ReactivateInputAfterClick_d__114__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_ChatManager__ReactivateInputAfterClick_d__114_o* __this, const MethodInfo* method);
// 0x42265a0

Il2CppObject *
GameManagers_ChatManager_<ReactivateInputAfterClick>d__114__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GameManagers_ChatManager__ReactivateInputAfterClick_d__114_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__114$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_ChatManager__ReactivateInputAfterClick_d__114__System_Collections_IEnumerator_Reset (GameManagers_ChatManager__ReactivateInputAfterClick_d__114_o* __this, const MethodInfo* method);
// 0x42265b0

void GameManagers_ChatManager_<ReactivateInputAfterClick>d__114__System_Collections_IEnumerator_Reset
               (GameManagers_ChatManager__ReactivateInputAfterClick_d__114_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// GameManagers.ChatManager.<ReactivateInputAfterClick>d__114$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_ChatManager__ReactivateInputAfterClick_d__114__System_Collections_IEnumerator_get_Current (GameManagers_ChatManager__ReactivateInputAfterClick_d__114_o* __this, const MethodInfo* method);
// 0x42265f0

Il2CppObject *
GameManagers_ChatManager_<ReactivateInputAfterClick>d__114__System_Collections_IEnumerator_get_Current
          (GameManagers_ChatManager__ReactivateInputAfterClick_d__114_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.ChatManager.<WaitAndLeave>d__0$$.ctor
// il2cpp: void GameManagers_ChatManager__WaitAndLeave_d__0___ctor (GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4214b90

void GameManagers_ChatManager_<WaitAndLeave>d__0___ctor
               (GameManagers_ChatManager__WaitAndLeave_d__0_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.ChatManager.<WaitAndLeave>d__0$$System.IDisposable.Dispose
// il2cpp: void GameManagers_ChatManager__WaitAndLeave_d__0__System_IDisposable_Dispose (GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, const MethodInfo* method);
// 0x4226600

void GameManagers_ChatManager_<WaitAndLeave>d__0__System_IDisposable_Dispose
               (GameManagers_ChatManager__WaitAndLeave_d__0_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.ChatManager.<WaitAndLeave>d__0$$MoveNext
// il2cpp: bool GameManagers_ChatManager__WaitAndLeave_d__0__MoveNext (GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, const MethodInfo* method);
// 0x4226610

bool_conflict
GameManagers_ChatManager_<WaitAndLeave>d__0__MoveNext
          (GameManagers_ChatManager__WaitAndLeave_d__0_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  undefined8 uVar2;
  MethodInfo *method_00;
  
  if (DAT_057050e8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_057050e8 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    method_00 = TypeInfo_InGameManager;
    if (*(int *)((long)&TypeInfo_InGameManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_InGameManager__LeaveRoom(method_00);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,2.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    uVar2 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
  }
  return 0;
}


// GameManagers.ChatManager.<WaitAndLeave>d__0$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_ChatManager__WaitAndLeave_d__0__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, const MethodInfo* method);
// 0x42268c0

Il2CppObject *
GameManagers_ChatManager_<WaitAndLeave>d__0__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GameManagers_ChatManager__WaitAndLeave_d__0_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.ChatManager.<WaitAndLeave>d__0$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_ChatManager__WaitAndLeave_d__0__System_Collections_IEnumerator_Reset (GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, const MethodInfo* method);
// 0x42268d0

void GameManagers_ChatManager_<WaitAndLeave>d__0__System_Collections_IEnumerator_Reset
               (GameManagers_ChatManager__WaitAndLeave_d__0_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// GameManagers.ChatManager.<WaitAndLeave>d__0$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_ChatManager__WaitAndLeave_d__0__System_Collections_IEnumerator_get_Current (GameManagers_ChatManager__WaitAndLeave_d__0_o* __this, const MethodInfo* method);
// 0x4226910

Il2CppObject *
GameManagers_ChatManager_<WaitAndLeave>d__0__System_Collections_IEnumerator_get_Current
          (GameManagers_ChatManager__WaitAndLeave_d__0_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.ChatManager$$WaitAndLeave
// il2cpp: System_Collections_IEnumerator_o* GameManagers_ChatManager__WaitAndLeave (GameManagers_ChatManager_o* __this, const MethodInfo* method);
// 0x4214b40

System_Collections_IEnumerator_o *
GameManagers_ChatManager__WaitAndLeave(GameManagers_ChatManager_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05705075 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndLeave_d__0);
    DAT_05705075 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndLeave_d__0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.ChatManager$$Clear
// il2cpp: void GameManagers_ChatManager__Clear (System_String_array* args, const MethodInfo* method);
// 0x4214bb0

void GameManagers_ChatManager__Clear(System_String_array *args,MethodInfo *method)

{
  int iVar1;
  MethodInfo *method_00;
  
  if (DAT_05705076 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    DAT_05705076 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = method_00;
  if (iVar1 != 0) {
    GameManagers_ChatManager__Clear(method_00);
    return;
  }
  il2cpp_init_class();
  GameManagers_ChatManager__Clear(method_00);
  return;
}


// GameManagers.ChatManager$$ReviveAll
// il2cpp: void GameManagers_ChatManager__ReviveAll (System_String_array* args, const MethodInfo* method);
// 0x4214f00

/* WARNING: Type propagation algorithm not settling */

void GameManagers_ChatManager__ReviveAll(System_String_array *args,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *__this;
  char cVar2;
  bool_conflict bVar3;
  ulong in_RAX;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar7;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (DAT_05705077 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"All players have been revived by master client.");
    il2cpp_init_method_metadata(&"SpawnPlayerRPC");
    DAT_05705077 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar7 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar7 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = pMVar7;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = GameManagers_ChatManager__CheckMC(pMVar7);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = GameManagers_ChatManager__CheckMC(pMVar7);
    cVar2 = (char)bVar3;
  }
  if (cVar2 == '\0') {
    return;
  }
  __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  uStack_28 = uStack_28 & 0xffffffffffffff;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_28 + 7);
  if (parameters != (System_Object_array *)0x0) {
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (lVar5 = il2cpp_runtime_glue(pIVar4,(((parameters->obj).klass)->_1).element_class), lVar5 == 0
       )) {
      uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar6,0);
    }
    if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameters->m_Items[0] = pIVar4;
    il2cpp_runtime_glue(parameters->m_Items,pIVar4);
    if (__this != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this,"SpawnPlayerRPC",0,parameters,(MethodInfo *)0x0);
      pMVar7 = extraout_RDX;
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
        pMVar7 = extraout_RDX_00;
      }
      GameManagers_ChatManager__SendChatAll("All players have been revived by master client.",3,pMVar7);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$Revive
// il2cpp: void GameManagers_ChatManager__Revive (System_String_array* args, const MethodInfo* method);
// 0x4215300

/* WARNING: Type propagation algorithm not settling */

void GameManagers_ChatManager__Revive(System_String_array *args,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *__this;
  char cVar2;
  bool_conflict bVar3;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  long lVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffb8;
  undefined1 local_29;
  
  if (DAT_05705078 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&" has been revived.");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"You have been revived by master client.");
    il2cpp_init_method_metadata(&"SpawnPlayerRPC");
    DAT_05705078 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = method_00;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = GameManagers_ChatManager__CheckMC(method_00);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = GameManagers_ChatManager__CheckMC(method_00);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
      targetPlayer = GameManagers_ChatManager__GetPlayer(args,method);
    }
    else {
      targetPlayer = GameManagers_ChatManager__GetPlayer(args,method);
    }
    if (targetPlayer != (Photon_Realtime_Player_o *)0x0) {
      __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      local_29 = 0;
      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_29);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (lVar5 = il2cpp_runtime_glue(pIVar4,(((parameters->obj).klass)->_1).element_class),
           lVar5 == 0)) {
          uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar7,0);
        }
        if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[0] = pIVar4;
        il2cpp_runtime_glue(parameters->m_Items,pIVar4);
        if (__this != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this,"SpawnPlayerRPC",targetPlayer,parameters,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            il2cpp_init_class();
          }
          GameManagers_ChatManager__SendChat("You have been revived by master client.",targetPlayer,3,(MethodInfo *)parameters);
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar6 = PhotonExtensions__GetStringProperty
                             (targetPlayer,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8)
                              ,"",(MethodInfo *)0x0);
          pSVar6 = System_String__Concat(pSVar6," has been revived.",(MethodInfo *)0x0);
          GameManagers_ChatManager__AddLine
                    (pSVar6,3,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
                     in_stack_ffffffffffffffb8);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// GameManagers.ChatManager$$Mute
// il2cpp: void GameManagers_ChatManager__Mute (System_String_array* args, const MethodInfo* method);
// 0x42160c0

void GameManagers_ChatManager__Mute(System_String_array *args,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *player;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_01;
  
  if (DAT_05705079 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Emote");
    il2cpp_init_method_metadata(&"Voice");
    DAT_05705079 = '\x01';
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    player = GameManagers_ChatManager__GetPlayer(args,method);
    method_00 = extraout_RDX_01;
  }
  else {
    player = GameManagers_ChatManager__GetPlayer(args,method);
    method_00 = extraout_RDX;
  }
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
      method_00 = extraout_RDX_00;
    }
    GameManagers_ChatManager__MutePlayer(player,"Emote",method_00);
    GameManagers_ChatManager__MutePlayer(player,"Text",method_01);
    GameManagers_ChatManager__MutePlayer(player,"Voice",method_02);
    return;
  }
  return;
}


// GameManagers.ChatManager$$Unmute
// il2cpp: void GameManagers_ChatManager__Unmute (System_String_array* args, const MethodInfo* method);
// 0x4216490

void GameManagers_ChatManager__Unmute(System_String_array *args,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *player;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_01;
  
  if (DAT_0570507a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Emote");
    il2cpp_init_method_metadata(&"Voice");
    DAT_0570507a = '\x01';
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    player = GameManagers_ChatManager__GetPlayer(args,method);
    method_00 = extraout_RDX_01;
  }
  else {
    player = GameManagers_ChatManager__GetPlayer(args,method);
    method_00 = extraout_RDX;
  }
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
      method_00 = extraout_RDX_00;
    }
    GameManagers_ChatManager__UnmutePlayer(player,"Emote",method_00);
    GameManagers_ChatManager__UnmutePlayer(player,"Text",method_01);
    GameManagers_ChatManager__UnmutePlayer(player,"Voice",method_02);
    return;
  }
  return;
}


// GameManagers.ChatManager$$NextSong
// il2cpp: void GameManagers_ChatManager__NextSong (System_String_array* args, const MethodInfo* method);
// 0x4216930

void GameManagers_ChatManager__NextSong(System_String_array *args,MethodInfo *method)

{
  ApplicationManagers_MusicManager__ChatNextSong((MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$Pause
// il2cpp: void GameManagers_ChatManager__Pause (System_String_array* args, const MethodInfo* method);
// 0x4216940

void GameManagers_ChatManager__Pause(System_String_array *args,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  GameManagers_InGameManager_o *__this;
  char cVar3;
  bool_conflict bVar4;
  MethodInfo *method_00;
  
  if (DAT_0570507b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570507b = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = method_00;
  if (iVar2 == 0) {
    il2cpp_init_class();
    bVar4 = GameManagers_ChatManager__CheckMC(method_00);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = GameManagers_ChatManager__CheckMC(method_00);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    return;
  }
  __this = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this == (GameManagers_InGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
  if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
    GameManagers_InGameManager__PauseGame(__this,(MethodInfo *)TypeInfo_InGameManager);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume();
}


// GameManagers.ChatManager$$Unpause
// il2cpp: void GameManagers_ChatManager__Unpause (System_String_array* args, const MethodInfo* method);
// 0x4216b10

void GameManagers_ChatManager__Unpause(System_String_array *args,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  GameManagers_InGameManager_o *__this;
  char cVar3;
  bool_conflict bVar4;
  MethodInfo *method_00;
  
  if (DAT_0570507c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570507c = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = method_00;
  if (iVar2 == 0) {
    il2cpp_init_class();
    bVar4 = GameManagers_ChatManager__CheckMC(method_00);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = GameManagers_ChatManager__CheckMC(method_00);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    return;
  }
  __this = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this == (GameManagers_InGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
  if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
    GameManagers_InGameManager__StartUnpauseGame(__this,(MethodInfo *)TypeInfo_InGameManager);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume();
}


// GameManagers.ChatManager$$Resetkd
// il2cpp: void GameManagers_ChatManager__Resetkd (System_String_array* args, const MethodInfo* method);
// 0x4216ce0

void GameManagers_ChatManager__Resetkd(System_String_array *args,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  
  if (DAT_0570507d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_0570507d = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_InGameManager + 0xe4) != 0) {
    GameManagers_InGameManager__ResetPlayerKD(player,method);
    return;
  }
  il2cpp_init_class();
  GameManagers_InGameManager__ResetPlayerKD(player,method);
  return;
}


// GameManagers.ChatManager$$Resetkdall
// il2cpp: void GameManagers_ChatManager__Resetkdall (System_String_array* args, const MethodInfo* method);
// 0x4216f00

void GameManagers_ChatManager__Resetkdall(System_String_array *args,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Photon_Pun_PhotonView_o *__this;
  long lVar3;
  long lVar4;
  
  if (DAT_0570507e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object___Empty_Object);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"ResetKDRPC");
    DAT_0570507e = '\x01';
  }
  lVar4 = MethodInfo_Object___Empty_Object;
  __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  if (*(long *)(MethodInfo_Object___Empty_Object + 0x38) == 0) {
    il2cpp_glue_022c2910(MethodInfo_Object___Empty_Object);
    lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  else {
    lVar3 = *(long *)(*(long *)(MethodInfo_Object___Empty_Object + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar3 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar3 = il2cpp_glue_022c28b0();
    iVar2 = *(int *)(lVar3 + 0xe4);
  }
  else {
    iVar2 = *(int *)(lVar3 + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  else {
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar4 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_glue_022c28b0(lVar4);
  }
  if (__this == (Photon_Pun_PhotonView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Photon_Pun_PhotonView__RPC
            (__this,"ResetKDRPC",0,(System_Object_array *)**(undefined8 **)(lVar4 + 0xb8),
             (MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$Help
// il2cpp: void GameManagers_ChatManager__Help (System_String_array* args, const MethodInfo* method);
// 0x4217010

/* WARNING: Removing unreachable block (ram,0x042174ce) */
/* WARNING: Removing unreachable block (ram,0x042174d4) */

void GameManagers_ChatManager__Help(System_String_array *args,MethodInfo *method)

{
  long lVar1;
  double dVar2;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  int32_t iVar3;
  bool_conflict bVar4;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar5;
  System_Func_TSource__TElement__o *elementSelector;
  System_Func_TSource__TKey__o *keySelector;
  System_Collections_Generic_Dictionary_TKey__TElement__o *__this_01;
  System_Collections_Generic_List_TValue__o *__this_02;
  Il2CppObject *pIVar6;
  Il2CppObject *arg1;
  System_String_o *str1;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffff98;
  undefined4 in_stack_ffffffffffffffa8;
  int pageNumber;
  int iVar8;
  undefined4 in_stack_ffffffffffffffb0;
  undefined4 in_stack_ffffffffffffffb4;
  
  if (DAT_0570507f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_GameManagers_ChatMana);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_GameM);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_ChatManager_CommandAttribute_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Func_KeyValuePair_string__CommandAttribute___boo);
    il2cpp_init_method_metadata(&TypeInfo_Func_KeyValuePair_string__CommandAttribute___str);
    il2cpp_init_method_metadata(&TypeInfo_Func_KeyValuePair_string__CommandAttribute___Com);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameManagers_ChatManager_Co);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__Help_b__11_0);
    il2cpp_init_method_metadata(&MethodInfo_String__Help_b__11_1);
    il2cpp_init_method_metadata(&MethodInfo_ChatManager_CommandAttribute__Help_b__11_2);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameManagers_ChatManager_CommandAttribute);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"\n");
    il2cpp_init_method_metadata(&"----Command list----\n");
    il2cpp_init_method_metadata(&"Page {0} / {1}");
    il2cpp_init_method_metadata(&"Page {0} does not exist.");
    DAT_0570507f = '\x01';
  }
  pIVar6 = (Il2CppObject *)0x0;
  pageNumber = 1;
  if (args == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (((int)args->max_length < 2) ||
     (System_Int32__TryParse(args->m_Items[1],(int32_t *)&stack0xffffffffffffffac,(MethodInfo *)0x0)
     , pageNumber != 0)) {
    iVar8 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  else {
    pageNumber = 1;
    iVar8 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  if (iVar8 == 0) {
    il2cpp_init_class();
  }
  pSVar5 = *(System_Collections_Generic_IEnumerable_TSource__o **)
            (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x70);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (predicate == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_KeyValuePair_string__CommandAttribute___boo);
    System_Func<KeyValuePair<object__object>__bool>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar1 + 8) = predicate;
    il2cpp_runtime_glue(lVar1 + 8,predicate);
  }
  pSVar5 = System_Linq_Enumerable__Where<KeyValuePair<object__object>>
                     (pSVar5,predicate,MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_GameM);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_KeyValuePair_string__CommandAttribute___str);
    System_Func<KeyValuePair<object__object>__object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar1 + 0x10) = keySelector;
    il2cpp_runtime_glue(lVar1 + 0x10,keySelector);
    iVar8 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar8 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar8 == 0) {
    il2cpp_init_class();
    elementSelector = *(System_Func_TSource__TElement__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    elementSelector = *(System_Func_TSource__TElement__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (elementSelector == (System_Func_TSource__TElement__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    elementSelector = (System_Func_TSource__TElement__o *)il2cpp_runtime_glue(TypeInfo_Func_KeyValuePair_string__CommandAttribute___Com);
    System_Func<KeyValuePair<object__object>__object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TElement__o **)(lVar1 + 0x18) = elementSelector;
    il2cpp_runtime_glue(lVar1 + 0x18,elementSelector);
  }
  __this_01 = System_Linq_Enumerable__ToDictionary<KeyValuePair<object__object>__object__object>
                        (pSVar5,keySelector,elementSelector,MethodInfo_Dictionary_2_System_String_GameManagers_ChatMana);
  if (__this_01 != (System_Collections_Generic_Dictionary_TKey__TElement__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary<object__object>__get_Count
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                       MethodInfo_Int32_get_Count);
    method_00 = TypeInfo_Math;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    dVar2 = ceil((double)iVar3 / 7.0,method_00);
    if ((pageNumber < 1) || ((int)dVar2 < pageNumber)) {
      pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&stack0xffffffffffffffb0);
      pSVar7 = System_String__Format("Page {0} does not exist.",pIVar6,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar3 = 4;
    }
    else {
      iVar8 = pageNumber;
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_02 = Utility_Util__PaginateDictionary<object__object>
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                             pageNumber,7,MethodInfo_List_1_GameManagers_ChatManager_CommandAttribute);
      pSVar7 = "----Command list----\n";
      if (__this_02 == (System_Collections_Generic_List_TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
                 (System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_T__Enumerator_GameManagers_ChatManager_Co);
      __this.fields._list._4_4_ = iVar8;
      __this.fields._list._0_4_ = in_stack_ffffffffffffffa8;
      __this.fields._index = in_stack_ffffffffffffffb0;
      __this.fields._version = in_stack_ffffffffffffffb4;
      __this.fields._current = pIVar6;
      bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_00.fields._list._4_4_ = iVar8;
      __this_00.fields._list._0_4_ = in_stack_ffffffffffffffa8;
      __this_00.fields._index = in_stack_ffffffffffffffb0;
      __this_00.fields._version = in_stack_ffffffffffffffb4;
      __this_00.fields._current = pIVar6;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_00,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
      pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&stack0xffffffffffffffb0);
      arg1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&stack0xffffffffffffffb4);
      str1 = System_String__Format("Page {0} / {1}",pIVar6,arg1,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat(pSVar7,str1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar3 = 3;
    }
    GameManagers_ChatManager__AddLine
              (pSVar7,iVar3,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
               in_stack_ffffffffffffff98);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$SaveChatHistory
// il2cpp: void GameManagers_ChatManager__SaveChatHistory (System_String_array* args, const MethodInfo* method);
// 0x42176d0

void GameManagers_ChatManager__SaveChatHistory(System_String_array *args,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_TSource__o *source;
  long lVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_DateTime_o SVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  System_Func_TSource__int__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *values;
  MethodInfo *in_stack_ffffffffffffffa8;
  System_DateTime_Fields SStack_40;
  System_String_o *pSStack_38;
  
  if (DAT_05705080 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Select_String_Strin);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__int__string);
    il2cpp_init_method_metadata(&TypeInfo_Path);
    il2cpp_init_method_metadata(&MethodInfo_String__SaveChatHistory_b__12_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"\n");
    il2cpp_init_method_metadata(&"Chat history saved to Aottg2/Chat/");
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&"Chat");
    il2cpp_init_method_metadata(&"[TIME:{0:yyyy-MM-dd HH:mm:ss UTC}]\n\n{1}");
    il2cpp_init_method_metadata(&"chat_history_{0:yyyy-MM-dd_HH-mm-ss}");
    il2cpp_init_method_metadata(&"Invalid filename error.");
    DAT_05705080 = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = (System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8);
  if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = System_IO_Path__Combine(pSVar3,"Chat",(MethodInfo *)0x0);
  bVar2 = System_IO_Directory__Exists(pSVar3,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    System_IO_Directory__CreateDirectory(pSVar3,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
    il2cpp_init_class();
  }
  SVar4 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  SStack_40 = SVar4.fields._dateData;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_DateTime,&SStack_40);
  pSVar6 = System_String__Format("chat_history_{0:yyyy-MM-dd_HH-mm-ss}",pIVar5,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = Utility_Util__IsValidFileName(pSVar6,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__AddLine
              ("Invalid filename error.",4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
               in_stack_ffffffffffffffa8);
  }
  else {
    pSVar6 = System_String__Concat(pSVar6,".txt",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSStack_38 = System_IO_Path__Combine(pSVar3,pSVar6,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    source = *(System_Collections_Generic_IEnumerable_TSource__o **)
              (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x28);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      selector = *(System_Func_TSource__int__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
    }
    else {
      selector = *(System_Func_TSource__int__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
    }
    if (selector == (System_Func_TSource__int__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      selector = (System_Func_TSource__int__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_string__int__string);
      System_Func<object__int__object>___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__int__TResult__o **)(lVar1 + 0x20) = selector;
      il2cpp_runtime_glue(lVar1 + 0x20,selector);
    }
    values = System_Linq_Enumerable__Select<object__object>(source,selector,MethodInfo_IEnumerable_1_System_String__Select_String_Strin);
    pSVar3 = System_String__Join("\n",
                                 (System_Collections_Generic_IEnumerable_string__o *)values,
                                 (MethodInfo *)0x0);
    SStack_40 = SVar4.fields._dateData;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_DateTime,&SStack_40);
    pSVar3 = System_String__Format("[TIME:{0:yyyy-MM-dd HH:mm:ss UTC}]\n\n{1}",pIVar5,(Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    System_IO_File__WriteAllText(pSStack_38,pSVar3,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat("Chat history saved to Aottg2/Chat/",pSVar6,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__AddLine
              (pSVar3,3,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
               in_stack_ffffffffffffffa8);
  }
  return;
}


// GameManagers.ChatManager$$PM
// il2cpp: void GameManagers_ChatManager__PM (System_String_array* args, const MethodInfo* method);
// 0x4217d50

void GameManagers_ChatManager__PM(System_String_array *args,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  Photon_Realtime_Player_o *target;
  Photon_Realtime_Player_o *pPVar3;
  UI_ChatPanel_o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *values;
  System_String_o *message;
  undefined8 *puVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (DAT_05705081 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Skip_String);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&"Usage: /pm [ID] [message]");
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"Cannot send private messages to yourself.");
    DAT_05705081 = '\x01';
  }
  if (args == (System_String_array *)0x0) {
LAB_04217f54:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
  if ((int)args->max_length < 2) {
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    puVar4 = &"Usage: /pm [ID] [message]";
  }
  else {
    if (iVar1 == 0) {
      il2cpp_init_class();
      target = GameManagers_ChatManager__GetPlayer(args,method);
    }
    else {
      target = GameManagers_ChatManager__GetPlayer(args,method);
    }
    if (target == (Photon_Realtime_Player_o *)0x0) {
      return;
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    if (target != pPVar3) {
      pMVar5 = TypeInfo_ChatManager;
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      __this = GameManagers_ChatManager__GetChatPanel(pMVar5);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      if (__this != (UI_ChatPanel_o *)0x0) {
        UI_ChatPanel__EnterPMMode(__this,target,(MethodInfo *)0x0);
        if ((int)args->max_length < 3) {
          return;
        }
        values = System_Linq_Enumerable__Skip<object>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)args,2,MethodInfo_IEnumerable_1_System_String__Skip_String
                           );
        message = System_String__Join(" ",
                                      (System_Collections_Generic_IEnumerable_string__o *)values,
                                      (MethodInfo *)0x0);
        pMVar5 = extraout_RDX;
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
          pMVar5 = extraout_RDX_00;
        }
        GameManagers_ChatManager__SendPrivateMessage(target,message,pMVar5);
        return;
      }
      goto LAB_04217f54;
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    puVar4 = &"Cannot send private messages to yourself.";
  }
  GameManagers_ChatManager__AddLine
            ((System_String_o *)*puVar4,4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
             in_stack_ffffffffffffffc8);
  return;
}


// GameManagers.ChatManager$$Restart
// il2cpp: void GameManagers_ChatManager__Restart (System_String_array* args, const MethodInfo* method);
// 0x42184c0

void GameManagers_ChatManager__Restart(System_String_array *args,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  MethodInfo *pMVar4;
  
  if (DAT_05705082 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_05705082 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar4 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar4 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = pMVar4;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = GameManagers_ChatManager__CheckMC(pMVar4);
    cVar2 = (char)bVar3;
    pMVar4 = TypeInfo_InGameManager;
  }
  else {
    bVar3 = GameManagers_ChatManager__CheckMC(pMVar4);
    cVar2 = (char)bVar3;
    pMVar4 = TypeInfo_InGameManager;
  }
  if (cVar2 != '\0') {
    TypeInfo_InGameManager = pMVar4;
    if (*(int *)((long)&pMVar4[2].parameters + 4) == 0) {
      il2cpp_init_class();
      GameManagers_InGameManager__RestartGame(pMVar4);
      return;
    }
    GameManagers_InGameManager__RestartGame(pMVar4);
    return;
  }
  TypeInfo_InGameManager = pMVar4;
  return;
}


// GameManagers.ChatManager$$CloseLobby
// il2cpp: void GameManagers_ChatManager__CloseLobby (System_String_array* args, const MethodInfo* method);
// 0x42187e0

void GameManagers_ChatManager__CloseLobby(System_String_array *args,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  Photon_Realtime_Player_o *player;
  UnityEngine_MonoBehaviour_o *__this;
  char cVar3;
  bool_conflict bVar4;
  Photon_Realtime_Player_array *pPVar5;
  Il2CppObject *__this_00;
  uint uVar6;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  
  if (DAT_05705083 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&".");
    DAT_05705083 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = method_00;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar4 = GameManagers_ChatManager__CheckMC(method_00);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = GameManagers_ChatManager__CheckMC(method_00);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar5 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (pPVar5 != (Photon_Realtime_Player_array *)0x0) {
    iVar1 = (int)pPVar5->max_length;
    if (0 < iVar1) {
      uVar6 = 0;
      if (iVar1 != 0) {
        do {
          player = pPVar5->m_Items[(int)uVar6];
          if (player == (Photon_Realtime_Player_o *)0x0) goto LAB_0421899b;
          if ((char)(player->fields).IsLocal == '\0') {
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              il2cpp_init_class();
            }
            GameManagers_ChatManager__KickPlayer(player,0,0,".",in_R8);
          }
          uVar6 = uVar6 + 1;
          uVar2 = (uint)pPVar5->max_length;
          if ((int)uVar2 <= (int)uVar6) goto LAB_0421891e;
        } while (uVar6 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_0421891e:
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    __this = *(UnityEngine_MonoBehaviour_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x20);
    if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
      if (DAT_05705075 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_WaitAndLeave_d__0);
        DAT_05705075 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndLeave_d__0);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      UnityEngine_MonoBehaviour__StartCoroutine
                (__this,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0421899b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$Kick
// il2cpp: void GameManagers_ChatManager__Kick (System_String_array* args, const MethodInfo* method);
// 0x4218b90

/* WARNING: Type propagation algorithm not settling */

void GameManagers_ChatManager__Kick(System_String_array *args,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *__this;
  bool_conflict bVar2;
  Photon_Realtime_Player_o *player;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  long lVar4;
  undefined8 uVar5;
  MethodInfo *in_R8;
  undefined1 local_24 [4];
  
  if (DAT_05705084 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"VoteKickRPC");
    il2cpp_init_method_metadata(&".");
    DAT_05705084 = '\x01';
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    player = GameManagers_ChatManager__GetPlayer(args,method);
  }
  else {
    player = GameManagers_ChatManager__GetPlayer(args,method);
  }
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((char)bVar2 != '\0') {
      GameManagers_ChatManager__KickPlayer(player,1,0,".",in_R8);
      return;
    }
    bVar2 = GameManagers_ChatManager__CanVoteKick(player,method);
    if ((char)bVar2 != '\0') {
      __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,local_24);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (lVar4 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class),
           lVar4 == 0)) {
          uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar5,0);
        }
        if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[0] = pIVar3;
        il2cpp_runtime_glue(parameters->m_Items,pIVar3);
        if (__this != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this,"VoteKickRPC",2,parameters,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// GameManagers.ChatManager$$Ban
// il2cpp: void GameManagers_ChatManager__Ban (System_String_array* args, const MethodInfo* method);
// 0x4218f20

void GameManagers_ChatManager__Ban(System_String_array *args,MethodInfo *method)

{
  int iVar1;
  int32_t actorNumber;
  char cVar2;
  bool_conflict bVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_String_o *reason;
  System_Action_string__o *localStatus;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  MethodInfo *extraout_RDX_01;
  
  if (DAT_05705085 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_PrintModerationStatus);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05705085 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar5 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar5 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = pMVar5;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = GameManagers_ChatManager__CanUseRoomModerationCommand(pMVar5);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = GameManagers_ChatManager__CanUseRoomModerationCommand(pMVar5);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
      pPVar4 = GameManagers_ChatManager__GetPlayer(args,method);
      pMVar5 = extraout_RDX_01;
    }
    else {
      pPVar4 = GameManagers_ChatManager__GetPlayer(args,method);
      pMVar5 = extraout_RDX;
    }
    if (pPVar4 != (Photon_Realtime_Player_o *)0x0) {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
        pMVar5 = extraout_RDX_00;
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,2,pMVar5);
      actorNumber = (pPVar4->fields).actorNumber;
      localStatus = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
      System_Action<object>___ctor();
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_ModeratorManager__RoomBan(actorNumber,0,localStatus,reason,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// GameManagers.ChatManager$$InfoBan
// il2cpp: void GameManagers_ChatManager__InfoBan (System_String_array* args, const MethodInfo* method);
// 0x4219200

void GameManagers_ChatManager__InfoBan(System_String_array *args,MethodInfo *method)

{
  int iVar1;
  int32_t actorNumber;
  char cVar2;
  bool_conflict bVar3;
  Photon_Realtime_Player_o *player;
  System_String_o *reason;
  System_Action_string__o *localStatus;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar4;
  MethodInfo *extraout_RDX_01;
  MethodInfo *in_R8;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (DAT_05705086 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_PrintModerationStatus);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&"Legacy infoban requires Master Client; using room session ban instead.");
    il2cpp_init_method_metadata(&".");
    DAT_05705086 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar4 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar4 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = pMVar4;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = GameManagers_ChatManager__CanUseRoomModerationCommand(pMVar4);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = GameManagers_ChatManager__CanUseRoomModerationCommand(pMVar4);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
      player = GameManagers_ChatManager__GetPlayer(args,method);
      pMVar4 = extraout_RDX_01;
    }
    else {
      player = GameManagers_ChatManager__GetPlayer(args,method);
      pMVar4 = extraout_RDX;
    }
    if (player != (Photon_Realtime_Player_o *)0x0) {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
        pMVar4 = extraout_RDX_00;
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,2,pMVar4);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
      if ((char)bVar3 != '\0') {
        if (iVar1 == 0) {
          il2cpp_init_class();
        }
        GameManagers_ChatManager__KickPlayer(player,1,1,".",in_R8);
        return;
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      GameManagers_ChatManager__AddLine
                ("Legacy infoban requires Master Client; using room session ban instead.",3,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
                 in_stack_ffffffffffffffc8);
      actorNumber = (player->fields).actorNumber;
      localStatus = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
      System_Action<object>___ctor();
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_ModeratorManager__RoomBan(actorNumber,0,localStatus,reason,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// GameManagers.ChatManager$$IPBan
// il2cpp: void GameManagers_ChatManager__IPBan (System_String_array* args, const MethodInfo* method);
// 0x4219430

void GameManagers_ChatManager__IPBan(System_String_array *args,MethodInfo *method)

{
  int iVar1;
  int32_t actorNumber;
  char cVar2;
  bool_conflict bVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_String_o *reason;
  System_Action_string__o *localStatus;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  MethodInfo *extraout_RDX_01;
  
  if (DAT_05705087 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_PrintModerationStatus);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05705087 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar5 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar5 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = pMVar5;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = GameManagers_ChatManager__CanUseRoomModerationCommand(pMVar5);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = GameManagers_ChatManager__CanUseRoomModerationCommand(pMVar5);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
      pPVar4 = GameManagers_ChatManager__GetPlayer(args,method);
      pMVar5 = extraout_RDX_01;
    }
    else {
      pPVar4 = GameManagers_ChatManager__GetPlayer(args,method);
      pMVar5 = extraout_RDX;
    }
    if (pPVar4 != (Photon_Realtime_Player_o *)0x0) {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
        pMVar5 = extraout_RDX_00;
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,2,pMVar5);
      actorNumber = (pPVar4->fields).actorNumber;
      localStatus = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
      System_Action<object>___ctor();
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_ModeratorManager__RoomBan(actorNumber,1,localStatus,reason,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// GameManagers.ChatManager$$RegionBan
// il2cpp: void GameManagers_ChatManager__RegionBan (System_String_array* args, const MethodInfo* method);
// 0x4219590

void GameManagers_ChatManager__RegionBan(System_String_array *args,MethodInfo *method)

{
  int iVar1;
  int32_t actorNumber;
  char cVar2;
  bool_conflict bVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_String_o *reason;
  System_Action_string__o *localStatus;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  MethodInfo *extraout_RDX_01;
  
  if (DAT_05705088 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_PrintModerationStatus);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05705088 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar5 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar5 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = pMVar5;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = GameManagers_ChatManager__CanUseRegionModerationCommand(pMVar5);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = GameManagers_ChatManager__CanUseRegionModerationCommand(pMVar5);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
      pPVar4 = GameManagers_ChatManager__GetPlayer(args,method);
      pMVar5 = extraout_RDX_01;
    }
    else {
      pPVar4 = GameManagers_ChatManager__GetPlayer(args,method);
      pMVar5 = extraout_RDX;
    }
    if (pPVar4 != (Photon_Realtime_Player_o *)0x0) {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
        pMVar5 = extraout_RDX_00;
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,2,pMVar5);
      actorNumber = (pPVar4->fields).actorNumber;
      localStatus = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
      System_Action<object>___ctor();
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_ModeratorManager__RegionBan(actorNumber,0,localStatus,reason,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// GameManagers.ChatManager$$RegionIPBan
// il2cpp: void GameManagers_ChatManager__RegionIPBan (System_String_array* args, const MethodInfo* method);
// 0x42197d0

void GameManagers_ChatManager__RegionIPBan(System_String_array *args,MethodInfo *method)

{
  int iVar1;
  int32_t actorNumber;
  char cVar2;
  bool_conflict bVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_String_o *reason;
  System_Action_string__o *localStatus;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  MethodInfo *extraout_RDX_01;
  
  if (DAT_05705089 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_PrintModerationStatus);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    DAT_05705089 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar5 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar5 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = pMVar5;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = GameManagers_ChatManager__CanUseRegionModerationCommand(pMVar5);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = GameManagers_ChatManager__CanUseRegionModerationCommand(pMVar5);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
      pPVar4 = GameManagers_ChatManager__GetPlayer(args,method);
      pMVar5 = extraout_RDX_01;
    }
    else {
      pPVar4 = GameManagers_ChatManager__GetPlayer(args,method);
      pMVar5 = extraout_RDX;
    }
    if (pPVar4 != (Photon_Realtime_Player_o *)0x0) {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
        pMVar5 = extraout_RDX_00;
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,2,pMVar5);
      actorNumber = (pPVar4->fields).actorNumber;
      localStatus = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
      System_Action<object>___ctor();
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_ModeratorManager__RegionBan(actorNumber,1,localStatus,reason,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// GameManagers.ChatManager$$Unban
// il2cpp: void GameManagers_ChatManager__Unban (System_String_array* args, const MethodInfo* method);
// 0x4219930

void GameManagers_ChatManager__Unban(System_String_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  char cVar2;
  bool_conflict bVar3;
  System_String_o *a;
  System_String_o *reason;
  Anticheat_RoomBanEntry_o *__this;
  System_Action_string__o *localStatus;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar4;
  Anticheat_RoomBanEntry_Fields *pAVar5;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (DAT_0570508a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_PrintModerationStatus);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&TypeInfo_RoomBanEntry);
    il2cpp_init_method_metadata(&"Usage: /unban [session|ip] [target] [optional reason]");
    il2cpp_init_method_metadata(&"sid");
    il2cpp_init_method_metadata(&"session");
    il2cpp_init_method_metadata(&"ip");
    DAT_0570508a = '\x01';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto LAB_04219b20;
LAB_04219961:
    bVar3 = GameManagers_ChatManager__CanUseRoomModerationCommand(TypeInfo_ChatManager);
    cVar2 = (char)bVar3;
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto LAB_04219961;
LAB_04219b20:
    pMVar4 = TypeInfo_ChatManager;
    il2cpp_init_class();
    bVar3 = GameManagers_ChatManager__CanUseRoomModerationCommand(pMVar4);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    if (args == (System_String_array *)0x0) goto LAB_04219bb6;
    if (2 < (int)args->max_length) {
      if (args->m_Items[1] == (System_String_o *)0x0) {
LAB_04219bb6:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      a = System_String__ToLower(args->m_Items[1],(MethodInfo *)0x0);
      if ((uint)args->max_length < 3) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar1 = args->m_Items[2];
      pMVar4 = extraout_RDX;
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
        pMVar4 = extraout_RDX_00;
      }
      reason = GameManagers_ChatManager__GetOptionalReason(args,3,pMVar4);
      __this = (Anticheat_RoomBanEntry_o *)il2cpp_runtime_glue(TypeInfo_RoomBanEntry);
      Anticheat_RoomBanEntry___ctor(__this,(MethodInfo *)0x0);
      if (__this == (Anticheat_RoomBanEntry_o *)0x0) goto LAB_04219bb6;
      *(undefined1 *)&(__this->fields).CanUnban = 1;
      bVar3 = System_String__op_Equality(a,"session",(MethodInfo *)0x0);
      if (((char)bVar3 != '\0') ||
         (bVar3 = System_String__op_Equality(a,"sid",(MethodInfo *)0x0), (char)bVar3 != '\0')
         ) {
        *(undefined1 *)&(__this->fields).IsIPBan = 0;
        pAVar5 = &__this->fields;
        (__this->fields).SessionId = pSVar1;
LAB_04219a34:
        il2cpp_runtime_glue(pAVar5,pSVar1);
        localStatus = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
        System_Action<object>___ctor();
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Anticheat_ModeratorManager__RoomUnban(__this,localStatus,reason,(MethodInfo *)0x0);
        return;
      }
      bVar3 = System_String__op_Equality(a,"ip",(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        *(undefined1 *)&(__this->fields).IsIPBan = 1;
        pAVar5 = (Anticheat_RoomBanEntry_Fields *)&(__this->fields).IPAddress;
        (__this->fields).IPAddress = pSVar1;
        goto LAB_04219a34;
      }
    }
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__AddLine
              ("Usage: /unban [session|ip] [target] [optional reason]",4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
               in_stack_ffffffffffffffc8);
  }
  return;
}


// GameManagers.ChatManager$$RegionUnban
// il2cpp: void GameManagers_ChatManager__RegionUnban (System_String_array* args, const MethodInfo* method);
// 0x4219bc0

void GameManagers_ChatManager__RegionUnban(System_String_array *args,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *reason;
  Anticheat_RegionBanEntry_o *__this;
  System_Action_string__o *localStatus;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  MethodInfo *extraout_RDX_01;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (DAT_0570508b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_PrintModerationStatus);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&TypeInfo_RegionBanEntry);
    il2cpp_init_method_metadata(&"Usage: /regionunban [targetId] [optional reason]");
    DAT_0570508b = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar5 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar5 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = pMVar5;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar4 = GameManagers_ChatManager__CanUseRegionModerationCommand(pMVar5);
    cVar3 = (char)bVar4;
    pMVar5 = extraout_RDX_01;
  }
  else {
    bVar4 = GameManagers_ChatManager__CanUseRegionModerationCommand(pMVar5);
    cVar3 = (char)bVar4;
    pMVar5 = extraout_RDX;
  }
  if (cVar3 == '\0') {
    return;
  }
  if (args != (System_String_array *)0x0) {
    if ((int)args->max_length < 2) {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_ChatManager__AddLine
                ("Usage: /regionunban [targetId] [optional reason]",4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
                 in_stack_ffffffffffffffd8);
      return;
    }
    pSVar2 = args->m_Items[1];
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
      pMVar5 = extraout_RDX_00;
    }
    reason = GameManagers_ChatManager__GetOptionalReason(args,2,pMVar5);
    __this = (Anticheat_RegionBanEntry_o *)il2cpp_runtime_glue(TypeInfo_RegionBanEntry);
    Anticheat_RegionBanEntry___ctor(__this,(MethodInfo *)0x0);
    if (__this != (Anticheat_RegionBanEntry_o *)0x0) {
      (__this->fields).TargetId = pSVar2;
      il2cpp_runtime_glue(&__this->fields,pSVar2);
      localStatus = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
      System_Action<object>___ctor();
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_ModeratorManager__RegionUnban(__this,localStatus,reason,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$PrintModerationStatus
// il2cpp: void GameManagers_ChatManager__PrintModerationStatus (System_String_o* text, const MethodInfo* method);
// 0x4219da0

void GameManagers_ChatManager__PrintModerationStatus(System_String_o *text,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  int32_t iVar4;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (DAT_0570508c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&"timed out");
    il2cpp_init_method_metadata(&"rate limited");
    il2cpp_init_method_metadata(&"error");
    DAT_0570508c = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (text != (System_String_o *)0x0) {
      iVar3 = System_String__IndexOf(text,"timed out",5,(MethodInfo *)0x0);
      if (((iVar3 < 0) &&
          (iVar3 = System_String__IndexOf(text,"rate limited",5,(MethodInfo *)0x0), iVar3 < 0)) &&
         (iVar3 = System_String__IndexOf(text,"error",5,(MethodInfo *)0x0), iVar3 < 0)) {
        iVar4 = 3;
        iVar3 = 3;
        iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
      }
      else {
        iVar4 = 4;
        iVar3 = 4;
        iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        iVar3 = iVar4;
      }
      GameManagers_ChatManager__AddLine
                (text,iVar3,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
                 in_stack_ffffffffffffffd8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// GameManagers.ChatManager$$IsAdminOrModerator
// il2cpp: bool GameManagers_ChatManager__IsAdminOrModerator (const MethodInfo* method);
// 0x4219ed0

bool_conflict GameManagers_ChatManager__IsAdminOrModerator(MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  System_String_array *source;
  
  if (DAT_0570508d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains_String);
    il2cpp_init_method_metadata(&"admin");
    il2cpp_init_method_metadata(&"moderator");
    DAT_0570508d = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = 0;
  source = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
  if (source != (System_String_array *)0x0) {
    bVar1 = System_Linq_Enumerable__Contains<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,"admin",
                       MethodInfo_Boolean_Contains_String);
    bVar2 = 1;
    if ((char)bVar1 == '\0') {
      bVar2 = System_Linq_Enumerable__Contains<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,"moderator",
                         MethodInfo_Boolean_Contains_String);
      return bVar2;
    }
  }
  return bVar2;
}


// GameManagers.ChatManager$$CanUseRoomModerationCommand
// il2cpp: bool GameManagers_ChatManager__CanUseRoomModerationCommand (const MethodInfo* method);
// 0x4219080

bool_conflict GameManagers_ChatManager__CanUseRoomModerationCommand(MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  undefined8 unaff_RBX;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (DAT_0570508e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&"Must be Master Client, Admin, or Moderator to use that command.");
    DAT_0570508e = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  bVar3 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if ((char)bVar2 == '\0') {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      method_00 = TypeInfo_ChatManager;
      il2cpp_init_class();
      bVar2 = GameManagers_ChatManager__IsAdminOrModerator(method_00);
      cVar1 = (char)bVar2;
    }
    else {
      bVar2 = GameManagers_ChatManager__IsAdminOrModerator(TypeInfo_ChatManager);
      cVar1 = (char)bVar2;
    }
    if (cVar1 == '\0') {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = 0;
      GameManagers_ChatManager__AddLine
                ("Must be Master Client, Admin, or Moderator to use that command.",4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
                 in_stack_ffffffffffffffd8);
    }
  }
  return bVar3;
}


// GameManagers.ChatManager$$CanUseRegionModerationCommand
// il2cpp: bool GameManagers_ChatManager__CanUseRegionModerationCommand (const MethodInfo* method);
// 0x42196f0

bool_conflict GameManagers_ChatManager__CanUseRegionModerationCommand(MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  uVar5 = (undefined7)((ulong)unaff_RBX >> 8);
  if (DAT_0570508f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&"Must be Admin or Moderator to use that command.");
    DAT_0570508f = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = method_00;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = GameManagers_ChatManager__IsAdminOrModerator(method_00);
    bVar4 = (bool_conflict)CONCAT71(uVar5,1);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = GameManagers_ChatManager__IsAdminOrModerator(method_00);
    bVar4 = (bool_conflict)CONCAT71(uVar5,1);
    cVar2 = (char)bVar3;
  }
  if (cVar2 == '\0') {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = 0;
    GameManagers_ChatManager__AddLine
              ("Must be Admin or Moderator to use that command.",4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
               in_stack_ffffffffffffffd8);
  }
  return bVar4;
}


// GameManagers.ChatManager$$ShouldIncludeHiddenCommandInHelp
// il2cpp: bool GameManagers_ChatManager__ShouldIncludeHiddenCommandInHelp (GameManagers_ChatManager_CommandAttribute_o* command, const MethodInfo* method);
// 0x4219f90

bool_conflict
GameManagers_ChatManager__ShouldIncludeHiddenCommandInHelp
          (GameManagers_ChatManager_CommandAttribute_o *command,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  bool_conflict bVar4;
  undefined8 unaff_RBP;
  MethodInfo *method_00;
  
  if (DAT_05705090 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&"regionban");
    il2cpp_init_method_metadata(&"regionunban");
    il2cpp_init_method_metadata(&"regionipban");
    DAT_05705090 = '\x01';
  }
  if (command != (GameManagers_ChatManager_CommandAttribute_o *)0x0) {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      method_00 = TypeInfo_ChatManager;
      il2cpp_init_class();
      bVar2 = GameManagers_ChatManager__IsAdminOrModerator(method_00);
      cVar1 = (char)bVar2;
    }
    else {
      bVar2 = GameManagers_ChatManager__IsAdminOrModerator(TypeInfo_ChatManager);
      cVar1 = (char)bVar2;
    }
    if (cVar1 != '\0') {
      pSVar3 = (command->fields)._Name_k__BackingField;
      if (pSVar3 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar3 = System_String__ToLower(pSVar3,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar3,"regionban",(MethodInfo *)0x0);
      bVar4 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
      if ((char)bVar2 != '\0') {
        return bVar4;
      }
      bVar2 = System_String__op_Equality(pSVar3,"regionipban",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return bVar4;
      }
      bVar2 = System_String__op_Equality(pSVar3,"regionunban",(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return 0;
}


// GameManagers.ChatManager$$GetOptionalReason
// il2cpp: System_String_o* GameManagers_ChatManager__GetOptionalReason (System_String_array* args, int32_t startIndex, const MethodInfo* method);
// 0x4219160

System_String_o *
GameManagers_ChatManager__GetOptionalReason
          (System_String_array *args,int32_t startIndex,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_TSource__o *values;
  System_String_o *pSVar1;
  
  if (DAT_05705091 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Skip_String);
    il2cpp_init_method_metadata(&" ");
    DAT_05705091 = '\x01';
  }
  if ((args != (System_String_array *)0x0) && (startIndex < (int)args->max_length)) {
    values = System_Linq_Enumerable__Skip<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)args,startIndex,
                        MethodInfo_IEnumerable_1_System_String__Skip_String);
    pSVar1 = System_String__Join(" ",
                                 (System_Collections_Generic_IEnumerable_string__o *)values,
                                 (MethodInfo *)0x0);
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__Trim(pSVar1,(MethodInfo *)0x0);
      return pSVar1;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// GameManagers.ChatManager$$CanVoteKick
// il2cpp: bool GameManagers_ChatManager__CanVoteKick (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4218d80

bool_conflict
GameManagers_ChatManager__CanVoteKick(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  Photon_Realtime_Player_o *pPVar4;
  undefined8 *puVar5;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  if (DAT_05705092 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"Server does not allow vote kicking.");
    il2cpp_init_method_metadata(&"Cannot vote to kick yourself.");
    il2cpp_init_method_metadata(&"Cannot vote to kick the Master Client.");
    DAT_05705092 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x58), lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x90), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x11) == '\0') {
      puVar5 = &"Server does not allow vote kicking.";
      iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
    }
    else {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
        pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      }
      else {
        pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      }
      if (pPVar4 == player) {
        puVar5 = &"Cannot vote to kick yourself.";
        iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
      }
      else {
        if (player == (Photon_Realtime_Player_o *)0x0) goto LAB_04218f0e;
        bVar3 = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return (bool_conflict)CONCAT71((int7)((ulong)player >> 8),1);
        }
        puVar5 = &"Cannot vote to kick the Master Client.";
        iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
      }
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__AddLine
              ((System_String_o *)*puVar5,4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
               in_stack_ffffffffffffffe8);
    return 0;
  }
LAB_04218f0e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$MaxPlayers
// il2cpp: void GameManagers_ChatManager__MaxPlayers (System_String_array* args, const MethodInfo* method);
// 0x421a080

void GameManagers_ChatManager__MaxPlayers(System_String_array *args,MethodInfo *method)

{
  char cVar1;
  uint in_EAX;
  bool_conflict bVar2;
  Photon_Realtime_Room_o *__this;
  System_String_o *pSVar3;
  int32_t color;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffd8;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05705093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&"Max players must be >= 0.");
    il2cpp_init_method_metadata(&"Max players set to ");
    il2cpp_init_method_metadata(&".");
    DAT_05705093 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    method_00 = TypeInfo_ChatManager;
    il2cpp_init_class();
    bVar2 = GameManagers_ChatManager__CheckMC(method_00);
    cVar1 = (char)bVar2;
  }
  else {
    bVar2 = GameManagers_ChatManager__CheckMC(TypeInfo_ChatManager);
    cVar1 = (char)bVar2;
  }
  if (cVar1 == '\0') {
    return;
  }
  if (args != (System_String_array *)0x0) {
    if ((((int)args->max_length < 2) ||
        (bVar2 = System_Int32__TryParse
                           (args->m_Items[1],(int32_t *)((long)&uStack_18 + 4),(MethodInfo *)0x0),
        (long)uStack_18 < 0)) || ((char)bVar2 == '\0')) {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      color = 4;
      pSVar3 = "Max players must be >= 0.";
    }
    else {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if (__this == (Photon_Realtime_Room_o *)0x0) goto LAB_0421a20f;
      Photon_Realtime_Room__set_MaxPlayers(__this,uStack_18._4_4_,(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat("Max players set to ",pSVar3,".",(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      color = 3;
    }
    GameManagers_ChatManager__AddLine
              (pSVar3,color,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
               in_stack_ffffffffffffffd8);
    return;
  }
LAB_0421a20f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$KickPlayer
// il2cpp: void GameManagers_ChatManager__KickPlayer (Photon_Realtime_Player_o* player, bool print, bool ban, System_String_o* reason, const MethodInfo* method);
// 0x42189a0

void GameManagers_ChatManager__KickPlayer
               (Photon_Realtime_Player_o *player,bool_conflict print,bool_conflict ban,
               System_String_o *reason,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_String_o *pSVar5;
  undefined8 *puVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05705094 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnticheatManager);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&" has been kicked");
    il2cpp_init_method_metadata(&" has been banned");
    il2cpp_init_method_metadata(&"");
    DAT_05705094 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar4 != player) {
      if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_AnticheatManager__KickPlayer(player,ban & 0xff,"",(MethodInfo *)0x0);
      if ((char)print != '\0') {
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar5 = PhotonExtensions__GetStringProperty
                           (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                            "",(MethodInfo *)0x0);
        if ((char)ban == '\0') {
          puVar6 = &" has been kicked";
        }
        else {
          puVar6 = &" has been banned";
        }
        pSVar5 = System_String__Concat(pSVar5,(System_String_o *)*puVar6,reason,(MethodInfo *)0x0);
        method_00 = extraout_RDX;
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          il2cpp_init_class();
          method_00 = extraout_RDX_00;
        }
        GameManagers_ChatManager__SendChatAll(pSVar5,3,method_00);
        return;
      }
    }
  }
  return;
}


// GameManagers.ChatManager$$VoteKickPlayer
// il2cpp: void GameManagers_ChatManager__VoteKickPlayer (Photon_Realtime_Player_o* voter, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x421a220

void GameManagers_ChatManager__VoteKickPlayer
               (Photon_Realtime_Player_o *voter,Photon_Realtime_Player_o *target,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  Anticheat_BallotBox_Result_o __this_00;
  Anticheat_BallotBox_Result_o __this_01;
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_Object_array *parameters;
  long lVar4;
  undefined8 uVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Il2CppClass *pIVar6;
  Il2CppType *pIVar7;
  Photon_Realtime_Player_o *pPVar8;
  _union_13 _Var9;
  Il2CppClass *local_48;
  Il2CppType *pIStack_40;
  Photon_Realtime_Player_o *local_38;
  _union_13 _Stack_30;
  
  if (DAT_05705095 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnticheatManager);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"AnnounceRPC");
    il2cpp_init_method_metadata(&" has been vote kicked.");
    il2cpp_init_method_metadata(&"");
    DAT_05705095 = '\x01';
  }
  if ((target != (Photon_Realtime_Player_o *)0x0) &&
     (bVar2 = Photon_Realtime_Player__get_IsMasterClient(target,(MethodInfo *)0x0),
     (char)bVar2 == '\0')) {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    else {
      bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    if (cVar1 != '\0') {
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x58), lVar4 != 0)) &&
         (lVar4 = *(long *)(lVar4 + 0x90), lVar4 != 0)) {
        if (*(char *)(lVar4 + 0x11) == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Anticheat_AnticheatManager__TryVoteKickPlayer
                  ((Anticheat_BallotBox_Result_o *)&local_48,voter,target,(MethodInfo *)0x0);
        __this_00.fields._8_8_ = pIStack_40;
        __this_00.fields._0_8_ = local_48;
        __this_00.fields.target = local_38;
        __this_00.fields.cooldown.fields._ticks =
             (System_TimeSpan_Fields)(System_TimeSpan_Fields)_Stack_30.rgctx_data;
        pSVar3 = Anticheat_BallotBox_Result__ToString
                           (__this_00,(MethodInfo *)&stack0xffffffffffffff98);
        __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
        parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
        if (parameters != (System_Object_array *)0x0) {
          pIVar6 = local_48;
          pIVar7 = pIStack_40;
          pPVar8 = local_38;
          _Var9 = _Stack_30;
          if ((pSVar3 != (System_String_o *)0x0) &&
             (lVar4 = il2cpp_runtime_glue(pSVar3,(((parameters->obj).klass)->_1).element_class),
             pIVar6 = local_48, pIVar7 = pIStack_40, pPVar8 = local_38, _Var9 = _Stack_30,
             lVar4 == 0)) {
            uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar5,0);
          }
          if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          parameters->m_Items[0] = (Il2CppObject *)pSVar3;
          il2cpp_runtime_glue(parameters->m_Items,pSVar3);
          if (__this != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this,"AnnounceRPC",voter,parameters,(MethodInfo *)0x0);
            __this_01.fields._8_8_ = pIVar7;
            __this_01.fields._0_8_ = pIVar6;
            __this_01.fields.target = pPVar8;
            __this_01.fields.cooldown.fields._ticks =
                 (System_TimeSpan_Fields)(System_TimeSpan_Fields)_Var9.rgctx_data;
            bVar2 = Anticheat_BallotBox_Result__get_IsSuccess
                              (__this_01,(MethodInfo *)&stack0xffffffffffffff98);
            if ((char)bVar2 == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar3 = PhotonExtensions__GetStringProperty
                               (target,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                                "",(MethodInfo *)0x0);
            pSVar3 = System_String__Concat(pSVar3," has been vote kicked.",(MethodInfo *)0x0);
            method_00 = extraout_RDX;
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              il2cpp_init_class();
              method_00 = extraout_RDX_00;
            }
            GameManagers_ChatManager__SendChatAll(pSVar3,3,method_00);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// GameManagers.ChatManager$$get_MaxLines
// il2cpp: int32_t GameManagers_ChatManager__get_MaxLines (const MethodInfo* method);
// 0x421a500

int32_t GameManagers_ChatManager__get_MaxLines(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  int32_t iVar3;
  int iVar4;
  float fVar5;
  
  if (DAT_05705096 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05705096 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (((lVar2 != 0) && (*(long *)(lVar2 + 0x140) != 0)) && (*(long *)(lVar2 + 0x148) != 0)) {
    iVar4 = *(int *)(*(long *)(lVar2 + 0x148) + 0x14);
    iVar1 = *(int *)(*(long *)(lVar2 + 0x140) + 0x14);
    if (DAT_056fdee8 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fdee8 = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar5 = ceilf(((float)iVar1 * 5.0) / (((float)iVar4 / 18.0) * 30.0));
    iVar4 = 0x46;
    if ((int)fVar5 < 0x47) {
      iVar4 = (int)fVar5;
    }
    iVar3 = 10;
    if (9 < iVar4) {
      iVar3 = iVar4;
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$PreserveInputText
// il2cpp: void GameManagers_ChatManager__PreserveInputText (System_String_o* text, int32_t caretPosition, const MethodInfo* method);
// 0x421a610

void GameManagers_ChatManager__PreserveInputText
               (System_String_o *text,int32_t caretPosition,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05705097 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    DAT_05705097 = '\x01';
  }
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_String_o **)(lVar2 + 0xc0) = text;
  il2cpp_runtime_glue(lVar2 + 0xc0,text);
  *(int32_t *)(*(long *)(TypeInfo_ChatManager + 0xb8) + 200) = caretPosition;
  return;
}


// GameManagers.ChatManager$$GetPreservedInputWithCaret
// il2cpp: System_ValueTuple_string__int__int__o GameManagers_ChatManager__GetPreservedInputWithCaret (const MethodInfo* method);
// 0x421a6d0

System_ValueTuple_string__int__int__o
GameManagers_ChatManager__GetPreservedInputWithCaret(MethodInfo *method)

{
  uint uVar1;
  int32_t item2;
  long lVar2;
  undefined8 uVar3;
  System_ValueTuple_string__int__int__Fields SVar4;
  MethodInfo_2B590B0 *in_R9;
  System_ValueTuple_object__int__int__o __this;
  Il2CppObject local_38;
  
  if (DAT_05705098 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_3_String_Int32_Int32);
    DAT_05705098 = '\x01';
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_ChatManager + 0xb8);
  uVar3 = *(undefined8 *)(lVar2 + 0xc0);
  uVar1 = *(uint *)(lVar2 + 200);
  item2 = *(int32_t *)(lVar2 + 0xcc);
  *(undefined8 *)(lVar2 + 0xc0) = **(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(lVar2 + 0xc0);
  lVar2 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(undefined8 *)(lVar2 + 200) = 0xffffffff00000000;
  *(undefined1 *)(lVar2 + 0xd0) = 0;
  local_38.klass = (Il2CppClass *)0x0;
  local_38.monitor = (void *)0x0;
  __this.fields._8_8_ = uVar3;
  __this.fields.Item1 = &local_38;
  System_ValueTuple<object__int__int>___ctor
            (__this,(Il2CppObject *)(ulong)uVar1,item2,(int32_t)MethodInfo_ValueTuple_3_String_Int32_Int32,in_R9);
  SVar4._8_8_ = local_38.monitor;
  SVar4.Item1 = (System_String_o *)local_38.klass;
  return (System_ValueTuple_string__int__int__o)SVar4;
}


// GameManagers.ChatManager$$PreservePMTargetActorNumber
// il2cpp: void GameManagers_ChatManager__PreservePMTargetActorNumber (int32_t actorNumber, const MethodInfo* method);
// 0x421a7c0

void GameManagers_ChatManager__PreservePMTargetActorNumber(int32_t actorNumber,MethodInfo *method)

{
  if (DAT_05705099 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    DAT_05705099 = '\x01';
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(int32_t *)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xcc) = actorNumber;
  return;
}


// GameManagers.ChatManager$$SaveConversation
// il2cpp: void GameManagers_ChatManager__SaveConversation (System_String_o* key, System_String_o* text, int32_t caretPos, const MethodInfo* method);
// 0x421a820

void GameManagers_ChatManager__SaveConversation
               (System_String_o *key,System_String_o *text,int32_t caretPos,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_object__int__o *pSVar1;
  bool_conflict bVar2;
  
  if (DAT_0570509a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_0570509a = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_ChatManager + 0xb8) + 0xd8);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    if ((char)bVar2 == '\0') {
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (__this,(Il2CppObject *)key,(Il2CppObject *)text,MethodInfo_Void_set_Item);
      pSVar1 = *(System_Collections_Generic_Dictionary_object__int__o **)
                (*(long *)(TypeInfo_ChatManager + 0xb8) + 0xe0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        System_Collections_Generic_Dictionary<object__int>__set_Item
                  (pSVar1,(Il2CppObject *)key,caretPos,MethodInfo_Void_set_Item);
        return;
      }
    }
    else {
      System_Collections_Generic_Dictionary<object__object>__Remove
                (__this,(Il2CppObject *)key,MethodInfo_Boolean_Remove);
      pSVar1 = *(System_Collections_Generic_Dictionary_object__int__o **)
                (*(long *)(TypeInfo_ChatManager + 0xb8) + 0xe0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        System_Collections_Generic_Dictionary<object__int>__Remove
                  (pSVar1,(Il2CppObject *)key,MethodInfo_Boolean_Remove);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$GetConversation
// il2cpp: System_ValueTuple_string__int__o GameManagers_ChatManager__GetConversation (System_String_o* key, const MethodInfo* method);
// 0x421a960

System_ValueTuple_string__int__o
GameManagers_ChatManager__GetConversation(System_String_o *key,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  Il2CppObject *pIVar2;
  bool_conflict bVar3;
  Il2CppObject *item1;
  MethodInfo_2B49560 *in_R8;
  System_ValueTuple_string__int__o SVar4;
  System_ValueTuple_object__int__o __this_01;
  uint local_3c;
  Il2CppObject local_38;
  Il2CppObject *local_20;
  
  if (DAT_0570509b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_2_String_Int32);
    il2cpp_init_method_metadata(&"");
    DAT_0570509b = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  local_3c = 0;
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_ChatManager + 0xb8) + 0xd8);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this,(Il2CppObject *)key,&local_20,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar3 == '\0') {
      iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
      pIVar2 = "";
    }
    else {
      iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
      pIVar2 = local_20;
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      __this_00 = *(System_Collections_Generic_Dictionary_object__int__o **)
                   (*(long *)(TypeInfo_ChatManager + 0xb8) + 0xe0);
    }
    else {
      __this_00 = *(System_Collections_Generic_Dictionary_object__int__o **)
                   (*(long *)(TypeInfo_ChatManager + 0xb8) + 0xe0);
    }
    if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary<object__int>__TryGetValue
                        (__this_00,(Il2CppObject *)key,(int32_t *)&local_3c,MethodInfo_Boolean_TryGetValue);
      item1 = (Il2CppObject *)0x0;
      if ((char)bVar3 != '\0') {
        item1 = (Il2CppObject *)(ulong)local_3c;
      }
      local_38.klass = (Il2CppClass *)0x0;
      local_38.monitor._0_4_ = 0;
      local_38.monitor._4_4_ = 0;
      __this_01.fields._8_8_ = pIVar2;
      __this_01.fields.Item1 = &local_38;
      System_ValueTuple<object__int>___ctor(__this_01,item1,(int32_t)MethodInfo_ValueTuple_2_String_Int32,in_R8);
      SVar4.fields.Item2 = local_38.monitor._0_4_;
      SVar4.fields.Item1 = (System_String_o *)local_38.klass;
      SVar4.fields._12_4_ = 0;
      return (System_ValueTuple_string__int__o)SVar4.fields;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$ClearConversation
// il2cpp: void GameManagers_ChatManager__ClearConversation (System_String_o* key, const MethodInfo* method);
// 0x421aad0

void GameManagers_ChatManager__ClearConversation(System_String_o *key,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  
  if (DAT_0570509c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_0570509c = '\x01';
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_ChatManager + 0xb8) + 0xd8);
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_ChatManager + 0xb8) + 0xd8);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Remove
              (__this,(Il2CppObject *)key,MethodInfo_Boolean_Remove);
    __this_00 = *(System_Collections_Generic_Dictionary_object__int__o **)
                 (*(long *)(TypeInfo_ChatManager + 0xb8) + 0xe0);
    if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      System_Collections_Generic_Dictionary<object__int>__Remove
                (__this_00,(Il2CppObject *)key,MethodInfo_Boolean_Remove);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$ResetNotifiedForPM
// il2cpp: void GameManagers_ChatManager__ResetNotifiedForPM (int32_t pmId, const MethodInfo* method);
// 0x421abb0

void GameManagers_ChatManager__ResetNotifiedForPM(int32_t pmId,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_int__o *__this;
  
  if (DAT_0570509d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_0570509d = '\x01';
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xa8);
  }
  else {
    __this = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xa8);
  }
  if (__this != (System_Collections_Generic_HashSet_int__o *)0x0) {
    System_Collections_Generic_HashSet<int>__Remove(__this,pmId,MethodInfo_Boolean_Remove);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$Init
// il2cpp: void GameManagers_ChatManager__Init (const MethodInfo* method);
// 0x421ac50

void GameManagers_ChatManager__Init(MethodInfo *method)

{
  byte bVar1;
  System_Reflection_MethodInfo_o *pSVar2;
  ulong uVar3;
  GameManagers_ChatManager_CommandAttribute_o *commandAttribute;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_RuntimeTypeHandle_o handle;
  Il2CppObject *pIVar5;
  System_Type_o *pSVar6;
  long lVar7;
  long lVar8;
  System_String_o *pSVar9;
  GameManagers_ChatManager_CommandAttribute_o *__this;
  uint uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  if (DAT_0570509e == '\0') {
    il2cpp_init_method_metadata(&TypeRef_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeRef_CommandAttribute);
    il2cpp_init_method_metadata(&TypeInfo_CommandAttribute);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_ChatManager_CreateSingleton_ChatManager);
    DAT_0570509e = '\x01';
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar5 = Utility_SingletonFactory__CreateSingleton<object>
                     (*(Il2CppObject **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x20),MethodInfo_ChatManager_CreateSingleton_ChatManager);
  lVar7 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(Il2CppObject **)(lVar7 + 0x20) = pIVar5;
  il2cpp_runtime_glue(lVar7 + 0x20);
  handle = TypeRef_ChatManager;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar6 != (System_Type_o *)0x0) {
    lVar7 = (*(pSVar6->klass->vtable)._104_unknown.methodPtr)
                      (pSVar6,0x3c,(pSVar6->klass->vtable)._104_unknown.method);
    pSVar6 = System_Type__GetTypeFromHandle(TypeRef_CommandAttribute,(MethodInfo *)0x0);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) < 1) {
        return;
      }
      uVar10 = 0;
      if (*(int *)(lVar7 + 0x18) != 0) {
        do {
          pSVar2 = *(System_Reflection_MethodInfo_o **)(lVar7 + 0x20 + (long)(int)uVar10 * 8);
          if (pSVar2 == (System_Reflection_MethodInfo_o *)0x0) goto LAB_0421af61;
          lVar8 = (*(pSVar2->klass->vtable)._14_GetCustomAttributes.methodPtr)
                            (pSVar2,pSVar6,0,(pSVar2->klass->vtable)._14_GetCustomAttributes.method)
          ;
          if (((lVar8 != 0) && (uVar3 = *(ulong *)(lVar8 + 0x18), uVar3 != 0)) && (0 < (int)uVar3))
          {
            uVar11 = 0;
            if ((uVar3 & 0xffffffff) == 0) break;
            while( true ) {
              commandAttribute =
                   *(GameManagers_ChatManager_CommandAttribute_o **)(lVar8 + 0x20 + uVar11 * 8);
              if (commandAttribute != (GameManagers_ChatManager_CommandAttribute_o *)0x0) {
                bVar1 = (TypeInfo_CommandAttribute->_2).naturalAligment;
                if ((bVar1 <= (commandAttribute->klass->_2).naturalAligment) &&
                   ((commandAttribute->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CommandAttribute))
                {
                  (commandAttribute->fields)._Command_k__BackingField = pSVar2;
                  il2cpp_runtime_glue(&(commandAttribute->fields)._Command_k__BackingField);
                  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar9 = (commandAttribute->fields)._Name_k__BackingField;
                  if (pSVar9 == (System_String_o *)0x0) goto LAB_0421af61;
                  pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                            (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x70);
                  pSVar9 = System_String__ToLower(pSVar9,(MethodInfo *)0x0);
                  if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                  goto LAB_0421af61;
                  System_Collections_Generic_Dictionary<object__object>__Add
                            (pSVar4,(Il2CppObject *)pSVar9,(Il2CppObject *)commandAttribute,
                             MethodInfo_Void_Add);
                  if ((commandAttribute->fields)._Alias_k__BackingField != (System_String_o *)0x0) {
                    auVar12 = il2cpp_runtime_glue(TypeInfo_CommandAttribute);
                    __this = auVar12._0_8_;
                    GameManagers_ChatManager_CommandAttribute___ctor
                              (__this,commandAttribute,auVar12._8_8_);
                    if (__this == (GameManagers_ChatManager_CommandAttribute_o *)0x0)
                    goto LAB_0421af61;
                    *(undefined1 *)&(__this->fields)._IsAlias_k__BackingField = 1;
                    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    pSVar9 = (__this->fields)._Alias_k__BackingField;
                    if (pSVar9 == (System_String_o *)0x0) goto LAB_0421af61;
                    pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                              (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x70);
                    pSVar9 = System_String__ToLower(pSVar9,(MethodInfo *)0x0);
                    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto LAB_0421af61;
                    System_Collections_Generic_Dictionary<object__object>__Add
                              (pSVar4,(Il2CppObject *)pSVar9,(Il2CppObject *)__this,MethodInfo_Void_Add);
                  }
                }
              }
              uVar11 = uVar11 + 1;
              if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar11) break;
              if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_0421af75;
            }
          }
          uVar10 = uVar10 + 1;
          if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar10) {
            return;
          }
        } while (uVar10 < *(uint *)(lVar7 + 0x18));
      }
LAB_0421af75:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_0421af61:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$Reset
// il2cpp: void GameManagers_ChatManager__Reset (const MethodInfo* method);
// 0x421b000

void GameManagers_ChatManager__Reset(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  bool_conflict bVar2;
  System_Collections_Generic_List_T__o *__this_02;
  System_String_o *pSVar3;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  MethodInfo *method_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar4;
  undefined4 in_stack_ffffffffffffff68;
  int in_stack_ffffffffffffff6c;
  int in_stack_ffffffffffffff70;
  int in_stack_ffffffffffffff74;
  undefined1 auVar5 [8];
  undefined1 local_70 [8];
  System_Collections_Generic_List_Enumerator_T__c *pSStack_68;
  int32_t local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (DAT_0570509f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    DAT_0570509f = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = method_00;
  if (iVar1 == 0) {
    il2cpp_init_class();
    GameManagers_ChatManager__Clear(method_00);
  }
  else {
    GameManagers_ChatManager__Clear(method_00);
  }
  if (DAT_057050ad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_ChatTextColor);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_ChatTextColor_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameManagers_ChatTextColor);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameManagers_ChatTextColor__EnumToList_Ch);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"ChatPanel");
    il2cpp_init_method_metadata(&"{0:X2}{1:X2}{2:X2}");
    DAT_057050ad = '\x01';
  }
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  if (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
       (TypeInfo_ChatManager[2].virtualMethodPointer + 0x68) !=
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum__object>__Clear
              (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                (TypeInfo_ChatManager[2].virtualMethodPointer + 0x68),MethodInfo_Void_Clear);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_02 = Utility_Util__EnumToList<Int32Enum>(MethodInfo_List_1_GameManagers_ChatTextColor__EnumToList_Ch);
    if (__this_02 != (System_Collections_Generic_List_T__o *)0x0) {
      System_Collections_Generic_List<Int32Enum>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_70,__this_02,MethodInfo_List_1_T__Enumerator_GameManagers_ChatTextColor)
      ;
      auVar5 = local_70;
      while( true ) {
        __this_00.fields._list._4_4_ = in_stack_ffffffffffffff6c;
        __this_00.fields._list._0_4_ = in_stack_ffffffffffffff68;
        __this_00.fields._index = in_stack_ffffffffffffff70;
        __this_00.fields._version = in_stack_ffffffffffffff74;
        __this_00.fields._current = (Il2CppObject *)auVar5;
        bVar2 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                          (__this_00,(MethodInfo_3181D50 *)&stack0xffffffffffffff78);
        if ((char)bVar2 == '\0') {
          __this_01.fields._list._4_4_ = in_stack_ffffffffffffff6c;
          __this_01.fields._list._0_4_ = in_stack_ffffffffffffff68;
          __this_01.fields._index = in_stack_ffffffffffffff70;
          __this_01.fields._version = in_stack_ffffffffffffff74;
          __this_01.fields._current = (Il2CppObject *)auVar5;
          System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                    (__this_01,(MethodInfo_3181D40 *)&stack0xffffffffffffff78);
          return;
        }
        local_70 = (undefined1  [8])TypeInfo_ChatTextColor;
        pSStack_68 = (System_Collections_Generic_List_Enumerator_T__c *)0xffffffffffffffff;
        pSVar3 = System_Enum__ToString((System_Enum_o *)local_70,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UVar4 = UI_UIManager__GetThemeColor
                          ("ChatPanel","TextColor",pSVar3,"DefaultPanel",(MethodInfo *)0x0);
        local_58._8_4_ = extraout_XMM0_Dc;
        local_58._0_8_ = UVar4.fields._0_8_;
        local_58._12_4_ = extraout_XMM0_Dd;
        local_48._8_4_ = in_XMM1_Dc;
        local_48._0_8_ = UVar4.fields._8_8_;
        local_48._12_4_ = in_XMM1_Dd;
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        __this = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                  (TypeInfo_ChatManager[2].virtualMethodPointer + 0x68);
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        in_stack_ffffffffffffff74 = (int)((float)local_58._0_4_ * 255.0);
        arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&stack0xffffffffffffff74);
        in_stack_ffffffffffffff70 = (int)((float)local_58._4_4_ * 255.0);
        arg1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&stack0xffffffffffffff70);
        in_stack_ffffffffffffff6c = (int)((float)local_48._0_4_ * 255.0);
        arg2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&stack0xffffffffffffff6c);
        pSVar3 = System_String__Format("{0:X2}{1:X2}{2:X2}",arg0,arg1,arg2,(MethodInfo *)0x0);
        if (__this == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) break;
        System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                  (__this,local_60,(Il2CppObject *)pSVar3,MethodInfo_Void_Add);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$Clear
// il2cpp: void GameManagers_ChatManager__Clear (const MethodInfo* method);
// 0x4214c00

void GameManagers_ChatManager__Clear(MethodInfo *method)

{
  int length;
  int32_t length_00;
  long lVar1;
  bool_conflict bVar2;
  UI_ChatPanel_o *__this;
  UI_FeedPanel_o *__this_00;
  Il2CppMethodPointer pIVar3;
  MethodInfo *pMVar4;
  
  if (DAT_057050a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057050a0 = '\x01';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto LAB_04214cbc;
LAB_04214c25:
    pIVar3 = TypeInfo_ChatManager[2].virtualMethodPointer;
    lVar1 = *(long *)(pIVar3 + 0x28);
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto LAB_04214c25;
LAB_04214cbc:
    il2cpp_init_class();
    pIVar3 = TypeInfo_ChatManager[2].virtualMethodPointer;
    lVar1 = *(long *)(pIVar3 + 0x28);
  }
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    length = *(int *)(lVar1 + 0x18);
    *(undefined4 *)(lVar1 + 0x18) = 0;
    if (0 < length) {
      System_Array__Clear(*(System_Array_o **)(lVar1 + 0x10),0,length,(MethodInfo *)0x0);
      pIVar3 = TypeInfo_ChatManager[2].virtualMethodPointer;
    }
    lVar1 = *(long *)(pIVar3 + 0x38);
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      *(undefined4 *)(lVar1 + 0x18) = 0;
      lVar1 = *(long *)(pIVar3 + 0x40);
      if (lVar1 != 0) {
        *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
        *(undefined4 *)(lVar1 + 0x18) = 0;
        lVar1 = *(long *)(pIVar3 + 0x48);
        if (lVar1 != 0) {
          *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
          *(undefined4 *)(lVar1 + 0x18) = 0;
          lVar1 = *(long *)(pIVar3 + 0x30);
          if (lVar1 != 0) {
            *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
            *(undefined4 *)(lVar1 + 0x18) = 0;
            lVar1 = *(long *)(pIVar3 + 0x50);
            if (lVar1 != 0) {
              *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
              *(undefined4 *)(lVar1 + 0x18) = 0;
              lVar1 = *(long *)(pIVar3 + 0x58);
              if (lVar1 != 0) {
                *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
                *(undefined4 *)(lVar1 + 0x18) = 0;
                *(undefined8 *)(pIVar3 + 0x78) = **(undefined8 **)(DAT_057110b0 + 0xb8);
                pMVar4 = (MethodInfo *)(pIVar3 + 0x78);
                il2cpp_runtime_glue();
                pIVar3 = TypeInfo_ChatManager[2].virtualMethodPointer;
                *(undefined4 *)(pIVar3 + 0x80) = 0;
                lVar1 = *(long *)(pIVar3 + 0x60);
                if (lVar1 != 0) {
                  *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
                  length_00 = *(int32_t *)(lVar1 + 0x18);
                  *(undefined4 *)(lVar1 + 0x18) = 0;
                  if (0 < length_00) {
                    pMVar4 = *(MethodInfo **)(lVar1 + 0x10);
                    System_Array__Clear((System_Array_o *)pMVar4,0,length_00,(MethodInfo *)0x0);
                  }
                  bVar2 = GameManagers_ChatManager__IsChatAvailable(pMVar4);
                  if ((char)bVar2 != '\0') {
                    pMVar4 = TypeInfo_ChatManager;
                    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                      il2cpp_init_class();
                    }
                    __this = GameManagers_ChatManager__GetChatPanel(pMVar4);
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    bVar2 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if ((char)bVar2 != '\0') {
                      if (__this == (UI_ChatPanel_o *)0x0) goto LAB_04214ef9;
                      UI_ChatPanel__Sync(__this,(MethodInfo *)0x0);
                    }
                    pMVar4 = TypeInfo_ChatManager;
                    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                      il2cpp_init_class();
                    }
                    __this_00 = GameManagers_ChatManager__GetFeedPanel(pMVar4);
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    bVar2 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0
                                       ,(MethodInfo *)0x0);
                    if ((char)bVar2 != '\0') {
                      if (__this_00 == (UI_FeedPanel_o *)0x0) goto LAB_04214ef9;
                      UI_FeedPanel__Sync(__this_00,(MethodInfo *)0x0);
                    }
                  }
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    il2cpp_init_class();
                  }
                  if (*(System_Collections_Generic_HashSet_int__o **)
                       (TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0) !=
                      (System_Collections_Generic_HashSet_int__o *)0x0) {
                    System_Collections_Generic_HashSet<int>__Clear
                              (*(System_Collections_Generic_HashSet_int__o **)
                                (TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0),MethodInfo_Void_Clear);
                    if (*(System_Collections_Generic_HashSet_int__o **)
                         (TypeInfo_ChatManager[2].virtualMethodPointer + 0xa8) !=
                        (System_Collections_Generic_HashSet_int__o *)0x0) {
                      System_Collections_Generic_HashSet<int>__Clear
                                (*(System_Collections_Generic_HashSet_int__o **)
                                  (TypeInfo_ChatManager[2].virtualMethodPointer + 0xa8),MethodInfo_Void_Clear);
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
LAB_04214ef9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$IsChatActive
// il2cpp: bool GameManagers_ChatManager__IsChatActive (const MethodInfo* method);
// 0x421b710

bool_conflict GameManagers_ChatManager__IsChatActive(MethodInfo *method)

{
  bool_conflict bVar1;
  UI_ChatPanel_o *__this;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (DAT_057050a1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057050a1 = '\x01';
  }
  method_00 = TypeInfo_ChatManager;
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  __this = GameManagers_ChatManager__GetChatPanel(method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = 0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (__this == (UI_ChatPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = UI_ChatPanel__IsInputActive(__this,(MethodInfo *)0x0);
    bVar2 = 1;
    if ((char)bVar1 == '\0') {
      bVar1 = UI_ChatPanel__IsInteractingWithChatUI(__this,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return bVar2;
}


// GameManagers.ChatManager$$IsChatAvailable
// il2cpp: bool GameManagers_ChatManager__IsChatAvailable (const MethodInfo* method);
// 0x421b480

bool_conflict GameManagers_ChatManager__IsChatAvailable(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  long *plVar1;
  bool_conflict bVar2;
  
  if (DAT_057050a2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057050a2 = '\x01';
  }
  if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2) {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return 0;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
      plVar1 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    else {
      plVar1 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    if (plVar1 != (long *)0x0) {
      if (*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar1 + 0x130)) {
        return (uint)(*(long *)(*(long *)(*plVar1 + 200) + -8 +
                               (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) == TypeInfo_InGameMenu);
      }
    }
  }
  return 0;
}


// GameManagers.ChatManager$$SendChatAll
// il2cpp: void GameManagers_ChatManager__SendChatAll (System_String_o* message, int32_t color, const MethodInfo* method);
// 0x4215150

void GameManagers_ChatManager__SendChatAll
               (System_String_o *message,int32_t color,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_String_o *pSVar1;
  System_Object_array *parameters;
  long lVar2;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  MethodInfo *in_RCX;
  System_DateTime_Fields local_28;
  int64_t local_20;
  
  if (DAT_057050a3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"ChatRPC");
    DAT_057050a3 = '\x01';
  }
  local_28._dateData = 0;
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = GameManagers_ChatManager__GetColorString(message,color,0,in_RCX);
  __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
  if (parameters == (System_Object_array *)0x0) {
LAB_042152ec:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pSVar1 != (System_String_o *)0x0) {
    lVar2 = il2cpp_runtime_glue(pSVar1,(((parameters->obj).klass)->_1).element_class);
    if (lVar2 == 0) goto LAB_042152f1;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)pSVar1;
    il2cpp_runtime_glue(parameters->m_Items);
    if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_28._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
    local_20 = System_DateTime__get_Ticks((System_DateTime_o)&local_28,(MethodInfo *)0x0);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711088,&local_20);
    if (pIVar3 != (Il2CppObject *)0x0) {
      lVar2 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
LAB_042152f1:
        uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar4,0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = pIVar3;
      il2cpp_runtime_glue(parameters->m_Items + 1,pIVar3);
      if (__this != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this,"ChatRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
      goto LAB_042152ec;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$SendChat
// il2cpp: void GameManagers_ChatManager__SendChat (System_String_o* message, Photon_Realtime_Player_o* player, int32_t color, const MethodInfo* method);
// 0x42156c0

void GameManagers_ChatManager__SendChat
               (System_String_o *message,Photon_Realtime_Player_o *player,int32_t color,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_String_o *pSVar1;
  System_Object_array *parameters;
  long lVar2;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  System_DateTime_Fields local_30;
  int64_t local_28;
  
  if (DAT_057050a4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"ChatRPC");
    DAT_057050a4 = '\x01';
  }
  local_30._dateData = 0;
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = GameManagers_ChatManager__GetColorString(message,color,0,method);
  __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
  if (parameters == (System_Object_array *)0x0) {
LAB_04215868:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pSVar1 != (System_String_o *)0x0) {
    lVar2 = il2cpp_runtime_glue(pSVar1,(((parameters->obj).klass)->_1).element_class);
    if (lVar2 == 0) goto LAB_0421586d;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)pSVar1;
    il2cpp_runtime_glue(parameters->m_Items);
    if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_30._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
    local_28 = System_DateTime__get_Ticks((System_DateTime_o)&local_30,(MethodInfo *)0x0);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711088,&local_28);
    if (pIVar3 != (Il2CppObject *)0x0) {
      lVar2 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
LAB_0421586d:
        uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar4,0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = pIVar3;
      il2cpp_runtime_glue(parameters->m_Items + 1,pIVar3);
      if (__this != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this,"ChatRPC",player,parameters,(MethodInfo *)0x0);
        return;
      }
      goto LAB_04215868;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$OnChatRPC
// il2cpp: void GameManagers_ChatManager__OnChatRPC (System_String_o* message, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x421b990

void GameManagers_ChatManager__OnChatRPC
               (System_String_o *message,int64_t senderTimestamp,Photon_Pun_PhotonMessageInfo_o info
               ,MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *__this;
  bool_conflict bVar1;
  Il2CppObject *arg0;
  Il2CppObject *arg0_00;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo_3756FA0 *method_01;
  System_Nullable_DateTime__o __this_00;
  System_Nullable_DateTime__o timestamp;
  MethodInfo *in_stack_ffffffffffffffa8;
  int32_t local_48;
  int32_t local_44;
  System_DateTime_o local_40;
  ulong local_38;
  System_DateTime_Fields SStack_30;
  
  if (DAT_057050a5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_DateTime);
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"<link=\"{0}\">{1}</link>");
    il2cpp_init_method_metadata(&"[{0}]");
    DAT_057050a5 = '\x01';
  }
  local_40.fields._dateData = (System_DateTime_Fields)0;
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((info.fields.Sender != (Photon_Realtime_Player_o *)0x0) &&
     (__this = *(System_Collections_Generic_HashSet_int__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x28),
     __this != (System_Collections_Generic_HashSet_int__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet<int>__Contains
                      (__this,((info.fields.Sender)->fields).actorNumber,MethodInfo_Boolean_Contains);
    if ((char)bVar1 == '\0') {
      local_44 = ((info.fields.Sender)->fields).actorNumber;
      arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_44);
      local_48 = ((info.fields.Sender)->fields).actorNumber;
      arg0_00 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_48);
      method_00 = (MethodInfo *)&"[{0}]";
      pSVar2 = System_String__Format("[{0}]",arg0_00,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = GameManagers_ChatManager__GetColorString(pSVar2,1,0,method_00);
      pSVar2 = System_String__Format("<link=\"{0}\">{1}</link>",arg0,(Il2CppObject *)pSVar2,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(pSVar2," ",message,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_01 = (MethodInfo_3756FA0 *)0x0;
      System_DateTime___ctor((System_DateTime_o)&local_40,senderTimestamp,1,(MethodInfo *)0x0);
      local_38 = 0;
      SStack_30._dateData = 0;
      __this_00.fields.value.fields._dateData = local_40.fields._dateData;
      __this_00.fields._0_8_ = &local_38;
      System_Nullable<DateTime>___ctor
                (__this_00,(System_DateTime_o)MethodInfo_Nullable_1_DateTime._dateData,method_01);
      timestamp.fields._0_8_ = local_38 & 0xffffffff;
      timestamp.fields.value.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)SStack_30._dateData;
      GameManagers_ChatManager__AddLine
                (pSVar2,0,0,timestamp,((info.fields.Sender)->fields).actorNumber,0,0,-1,0,
                 in_stack_ffffffffffffffa8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$OnAnnounceRPC
// il2cpp: void GameManagers_ChatManager__OnAnnounceRPC (System_String_o* message, const MethodInfo* method);
// 0x421bbb0

void GameManagers_ChatManager__OnAnnounceRPC(System_String_o *message,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe8;
  
  if (DAT_057050a6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    DAT_057050a6 = '\x01';
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_ChatManager__AddLine
            (message,3,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
             in_stack_ffffffffffffffe8);
  return;
}


// GameManagers.ChatManager$$AddLine
// il2cpp: void GameManagers_ChatManager__AddLine (System_String_o* message, int32_t color, bool isSystem, System_Nullable_DateTime__o timestamp, int32_t senderID, bool isSuggestion, bool isPM, int32_t pmPartnerID, bool isNotification, const MethodInfo* method);
// 0x4215880

void GameManagers_ChatManager__AddLine
               (System_String_o *message,int32_t color,bool_conflict isSystem,
               System_Nullable_DateTime__o timestamp,int32_t senderID,bool_conflict isSuggestion,
               bool_conflict isPM,int32_t pmPartnerID,bool_conflict isNotification,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar4;
  Il2CppMethodPointer pIVar5;
  System_Collections_Generic_List_T__o *__this_00;
  System_Collections_Generic_List_bool__o *pSVar6;
  System_Boolean_array *pSVar7;
  System_Collections_Generic_List_DateTime__o *__this_01;
  System_DateTime_array *pSVar8;
  System_Collections_Generic_List_int__o *__this_02;
  long lVar9;
  char cVar10;
  int32_t iVar11;
  bool_conflict bVar12;
  System_String_o *pSVar13;
  System_DateTime_Fields item;
  UI_ChatPanel_o *__this_03;
  MethodInfo *pMVar14;
  System_Int32_array *pSVar15;
  
  item._dateData = (uint64_t)timestamp.fields.value.fields._dateData;
  pMVar14 = timestamp.fields._0_8_;
  if (DAT_057050a7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&MethodInfo_DateTime_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057050a7 = '\x01';
  }
  if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar13 = Anticheat_ChatFilter__FilterSizeTag(message,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar13 = MiscExtensions__ReplaceNamedColorTags(pSVar13,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pSVar13 = GameManagers_ChatManager__GetColorString(pSVar13,color,0,pMVar14);
  if ((char)timestamp.fields.hasValue == '\0') {
    if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
      il2cpp_init_class();
    }
    item._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto LAB_04215a31;
LAB_04215a75:
    il2cpp_init_class();
    __this = *(System_Collections_Generic_List_object__o **)
              (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
    lVar9 = MethodInfo_Void_Add;
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto LAB_04215a75;
LAB_04215a31:
    __this = *(System_Collections_Generic_List_object__o **)
              (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
    lVar9 = MethodInfo_Void_Add;
  }
  MethodInfo_Void_Add = lVar9;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this->fields)._items;
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar13;
        il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pSVar13);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this,(Il2CppObject *)pSVar13,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      lVar9 = MethodInfo_Void_Add;
      pIVar5 = TypeInfo_ChatManager[2].virtualMethodPointer;
      __this_00 = *(System_Collections_Generic_List_T__o **)(pIVar5 + 0x38);
      if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_00->fields)._items;
        if (pSVar4 != (System_Object_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            *(int32_t *)((long)pSVar4->m_Items + (long)(int)uVar2 * 4) = color;
            pSVar6 = *(System_Collections_Generic_List_bool__o **)(pIVar5 + 0x40);
            lVar9 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List<Int32Enum>__AddWithResize
                      (__this_00,color,
                       *(MethodInfo_357C110 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            pIVar5 = TypeInfo_ChatManager[2].virtualMethodPointer;
            pSVar6 = *(System_Collections_Generic_List_bool__o **)(pIVar5 + 0x40);
            lVar9 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar9;
          if (pSVar6 != (System_Collections_Generic_List_bool__o *)0x0) {
            piVar1 = &(pSVar6->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar7 = (pSVar6->fields)._items;
            if (pSVar7 != (System_Boolean_array *)0x0) {
              uVar2 = (pSVar6->fields)._size;
              if (uVar2 < (uint)pSVar7->max_length) {
                (pSVar6->fields)._size = uVar2 + 1;
                *(char *)((long)pSVar7->m_Items + (long)(int)uVar2) = (char)isSystem;
                __this_01 = *(System_Collections_Generic_List_DateTime__o **)(pIVar5 + 0x48);
                lVar9 = MethodInfo_Void_Add;
              }
              else {
                System_Collections_Generic_List<bool>__AddWithResize
                          (pSVar6,isSystem & 0xff,
                           *(MethodInfo_34F5F40 **)
                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                __this_01 = *(System_Collections_Generic_List_DateTime__o **)
                             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48);
                lVar9 = MethodInfo_Void_Add;
              }
              MethodInfo_Void_Add = lVar9;
              if (__this_01 != (System_Collections_Generic_List_DateTime__o *)0x0) {
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar8 = (__this_01->fields)._items;
                if (pSVar8 != (System_DateTime_array *)0x0) {
                  uVar2 = (__this_01->fields)._size;
                  if (uVar2 < (uint)pSVar8->max_length) {
                    (__this_01->fields)._size = uVar2 + 1;
                    pSVar8->m_Items[(int)uVar2].fields._dateData = item._dateData;
                  }
                  else {
                    System_Collections_Generic_List<DateTime>__AddWithResize
                              (__this_01,(System_DateTime_o)item._dateData,
                               *(MethodInfo_3508750 **)
                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar9 = MethodInfo_Void_Add;
                  pIVar5 = TypeInfo_ChatManager[2].virtualMethodPointer;
                  __this_02 = *(System_Collections_Generic_List_int__o **)(pIVar5 + 0x30);
                  if (__this_02 != (System_Collections_Generic_List_int__o *)0x0) {
                    piVar1 = &(__this_02->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar15 = (__this_02->fields)._items;
                    if (pSVar15 != (System_Int32_array *)0x0) {
                      uVar2 = (__this_02->fields)._size;
                      if (uVar2 < (uint)pSVar15->max_length) {
                        (__this_02->fields)._size = uVar2 + 1;
                        pSVar15->m_Items[(int)uVar2] = senderID;
                        pSVar6 = *(System_Collections_Generic_List_bool__o **)(pIVar5 + 0x50);
                        lVar9 = MethodInfo_Void_Add;
                      }
                      else {
                        System_Collections_Generic_List<int>__AddWithResize
                                  (__this_02,senderID,
                                   *(MethodInfo_3579120 **)
                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                        pIVar5 = TypeInfo_ChatManager[2].virtualMethodPointer;
                        pSVar6 = *(System_Collections_Generic_List_bool__o **)(pIVar5 + 0x50);
                        lVar9 = MethodInfo_Void_Add;
                      }
                      MethodInfo_Void_Add = lVar9;
                      if (pSVar6 != (System_Collections_Generic_List_bool__o *)0x0) {
                        piVar1 = &(pSVar6->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar7 = (pSVar6->fields)._items;
                        if (pSVar7 != (System_Boolean_array *)0x0) {
                          uVar2 = (pSVar6->fields)._size;
                          if (uVar2 < (uint)pSVar7->max_length) {
                            (pSVar6->fields)._size = uVar2 + 1;
                            *(undefined1 *)((long)pSVar7->m_Items + (long)(int)uVar2) =
                                 (undefined1)isSuggestion;
                            pSVar6 = *(System_Collections_Generic_List_bool__o **)(pIVar5 + 0x58);
                            lVar9 = MethodInfo_Void_Add;
                          }
                          else {
                            System_Collections_Generic_List<bool>__AddWithResize
                                      (pSVar6,isSuggestion & 0xff,
                                       *(MethodInfo_34F5F40 **)
                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                            pIVar5 = TypeInfo_ChatManager[2].virtualMethodPointer;
                            pSVar6 = *(System_Collections_Generic_List_bool__o **)(pIVar5 + 0x58);
                            lVar9 = MethodInfo_Void_Add;
                          }
                          MethodInfo_Void_Add = lVar9;
                          if (pSVar6 != (System_Collections_Generic_List_bool__o *)0x0) {
                            piVar1 = &(pSVar6->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pSVar7 = (pSVar6->fields)._items;
                            if (pSVar7 != (System_Boolean_array *)0x0) {
                              uVar2 = (pSVar6->fields)._size;
                              if (uVar2 < (uint)pSVar7->max_length) {
                                (pSVar6->fields)._size = uVar2 + 1;
                                *(undefined1 *)((long)pSVar7->m_Items + (long)(int)uVar2) =
                                     (undefined1)isNotification;
                                pSVar6 = *(System_Collections_Generic_List_bool__o **)
                                          (pIVar5 + 0xb0);
                                lVar9 = MethodInfo_Void_Add;
                              }
                              else {
                                System_Collections_Generic_List<bool>__AddWithResize
                                          (pSVar6,isNotification & 0xff,
                                           *(MethodInfo_34F5F40 **)
                                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                                pIVar5 = TypeInfo_ChatManager[2].virtualMethodPointer;
                                pSVar6 = *(System_Collections_Generic_List_bool__o **)
                                          (pIVar5 + 0xb0);
                                lVar9 = MethodInfo_Void_Add;
                              }
                              MethodInfo_Void_Add = lVar9;
                              if (pSVar6 != (System_Collections_Generic_List_bool__o *)0x0) {
                                piVar1 = &(pSVar6->fields)._version;
                                *piVar1 = *piVar1 + 1;
                                pSVar7 = (pSVar6->fields)._items;
                                if (pSVar7 != (System_Boolean_array *)0x0) {
                                  uVar2 = (pSVar6->fields)._size;
                                  if (uVar2 < (uint)pSVar7->max_length) {
                                    (pSVar6->fields)._size = uVar2 + 1;
                                    *(undefined1 *)((long)pSVar7->m_Items + (long)(int)uVar2) =
                                         (undefined1)isPM;
                                    pMVar14 = *(MethodInfo **)(pIVar5 + 0xb8);
                                    lVar9 = MethodInfo_Void_Add;
                                  }
                                  else {
                                    System_Collections_Generic_List<bool>__AddWithResize
                                              (pSVar6,isPM & 0xff,
                                               *(MethodInfo_34F5F40 **)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                                    pIVar5 = TypeInfo_ChatManager[2].virtualMethodPointer;
                                    pMVar14 = *(MethodInfo **)(pIVar5 + 0xb8);
                                    lVar9 = MethodInfo_Void_Add;
                                  }
                                  MethodInfo_Void_Add = lVar9;
                                  if (pMVar14 != (MethodInfo *)0x0) {
                                    piVar1 = (int32_t *)((long)&pMVar14->name + 4);
                                    *piVar1 = *piVar1 + 1;
                                    pSVar15 = ((System_Collections_Generic_List_int__Fields *)
                                              &pMVar14->invoker_method)->_items;
                                    if (pSVar15 != (System_Int32_array *)0x0) {
                                      uVar2 = *(uint *)&pMVar14->name;
                                      if (uVar2 < (uint)pSVar15->max_length) {
                                        *(uint *)&pMVar14->name = uVar2 + 1;
                                        pSVar15->m_Items[(int)uVar2] = pmPartnerID;
                                        lVar9 = *(long *)(pIVar5 + 0x28);
                                      }
                                      else {
                                        System_Collections_Generic_List<int>__AddWithResize
                                                  ((System_Collections_Generic_List_int__o *)pMVar14
                                                   ,pmPartnerID,
                                                   *(MethodInfo_3579120 **)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                        lVar9 = *(long *)(TypeInfo_ChatManager[2].virtualMethodPointer +
                                                         0x28);
                                      }
                                      if (lVar9 != 0) {
                                        iVar3 = *(int *)(lVar9 + 0x18);
                                        iVar11 = GameManagers_ChatManager__get_MaxLines(pMVar14);
                                        if (iVar11 < iVar3) {
                                          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0)
                                          {
                                            il2cpp_init_class();
                                          }
                                          if (*(System_Collections_Generic_List_object__o **)
                                               (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) ==
                                              (System_Collections_Generic_List_object__o *)0x0)
                                          goto LAB_042160b1;
                                          System_Collections_Generic_List<object>__RemoveAt
                                                    (*(System_Collections_Generic_List_object__o **)
                                                      (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28),
                                                     0,MethodInfo_Void_RemoveAt);
                                          if (*(System_Collections_Generic_List_T__o **)
                                               (TypeInfo_ChatManager[2].virtualMethodPointer + 0x38) ==
                                              (System_Collections_Generic_List_T__o *)0x0)
                                          goto LAB_042160b1;
                                          System_Collections_Generic_List<Int32Enum>__RemoveAt
                                                    (*(System_Collections_Generic_List_T__o **)
                                                      (TypeInfo_ChatManager[2].virtualMethodPointer + 0x38),
                                                     0,MethodInfo_Void_RemoveAt);
                                          if (*(System_Collections_Generic_List_bool__o **)
                                               (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40) ==
                                              (System_Collections_Generic_List_bool__o *)0x0)
                                          goto LAB_042160b1;
                                          System_Collections_Generic_List<bool>__RemoveAt
                                                    (*(System_Collections_Generic_List_bool__o **)
                                                      (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40),
                                                     0,MethodInfo_Void_RemoveAt);
                                          if (*(System_Collections_Generic_List_DateTime__o **)
                                               (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48) ==
                                              (System_Collections_Generic_List_DateTime__o *)0x0)
                                          goto LAB_042160b1;
                                          System_Collections_Generic_List<DateTime>__RemoveAt
                                                    (*(System_Collections_Generic_List_DateTime__o
                                                       **)(TypeInfo_ChatManager[2].virtualMethodPointer +
                                                          0x48),0,MethodInfo_Void_RemoveAt);
                                          if (*(System_Collections_Generic_List_int__o **)
                                               (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30) ==
                                              (System_Collections_Generic_List_int__o *)0x0)
                                          goto LAB_042160b1;
                                          System_Collections_Generic_List<int>__RemoveAt
                                                    (*(System_Collections_Generic_List_int__o **)
                                                      (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30),
                                                     0,MethodInfo_Void_RemoveAt);
                                          if (*(System_Collections_Generic_List_bool__o **)
                                               (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50) ==
                                              (System_Collections_Generic_List_bool__o *)0x0)
                                          goto LAB_042160b1;
                                          System_Collections_Generic_List<bool>__RemoveAt
                                                    (*(System_Collections_Generic_List_bool__o **)
                                                      (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50),
                                                     0,MethodInfo_Void_RemoveAt);
                                          if (*(System_Collections_Generic_List_bool__o **)
                                               (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58) ==
                                              (System_Collections_Generic_List_bool__o *)0x0)
                                          goto LAB_042160b1;
                                          System_Collections_Generic_List<bool>__RemoveAt
                                                    (*(System_Collections_Generic_List_bool__o **)
                                                      (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58),
                                                     0,MethodInfo_Void_RemoveAt);
                                          if (*(System_Collections_Generic_List_bool__o **)
                                               (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb0) ==
                                              (System_Collections_Generic_List_bool__o *)0x0)
                                          goto LAB_042160b1;
                                          System_Collections_Generic_List<bool>__RemoveAt
                                                    (*(System_Collections_Generic_List_bool__o **)
                                                      (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb0),
                                                     0,MethodInfo_Void_RemoveAt);
                                          if (*(System_Collections_Generic_List_int__o **)
                                               (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8) ==
                                              (System_Collections_Generic_List_int__o *)0x0)
                                          goto LAB_042160b1;
                                          System_Collections_Generic_List<int>__RemoveAt
                                                    (*(System_Collections_Generic_List_int__o **)
                                                      (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8),
                                                     0,MethodInfo_Void_RemoveAt);
                                        }
                                        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                                          pMVar14 = TypeInfo_ChatManager;
                                          il2cpp_init_class();
                                          bVar12 = GameManagers_ChatManager__IsChatAvailable
                                                             (pMVar14);
                                          cVar10 = (char)bVar12;
                                          pMVar14 = TypeInfo_ChatManager;
                                        }
                                        else {
                                          bVar12 = GameManagers_ChatManager__IsChatAvailable
                                                             (TypeInfo_ChatManager);
                                          cVar10 = (char)bVar12;
                                          pMVar14 = TypeInfo_ChatManager;
                                        }
                                        TypeInfo_ChatManager = pMVar14;
                                        if (cVar10 != '\0') {
                                          if (*(int *)((long)&pMVar14[2].parameters + 4) == 0) {
                                            il2cpp_init_class();
                                          }
                                          __this_03 = GameManagers_ChatManager__GetChatPanel
                                                                (pMVar14);
                                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                            il2cpp_init_class();
                                          }
                                          bVar12 = UnityEngine_Object__op_Inequality
                                                             ((UnityEngine_Object_o *)__this_03,
                                                              (UnityEngine_Object_o *)0x0,
                                                              (MethodInfo *)0x0);
                                          if ((char)bVar12 != '\0') {
                                            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0
                                               ) {
                                              il2cpp_init_class();
                                            }
                                            pSVar13 = GameManagers_ChatManager__GetFormattedMessage
                                                                (pSVar13,(System_DateTime_o)
                                                                         item._dateData,
                                                                 isSuggestion & 0xff,
                                                                 (MethodInfo *)pSVar15);
                                            if (__this_03 != (UI_ChatPanel_o *)0x0) {
                                              UI_ChatPanel__AddLine
                                                        (__this_03,pSVar13,(MethodInfo *)0x0);
                                              return;
                                            }
                                            goto LAB_042160b1;
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
            }
          }
        }
      }
    }
  }
LAB_042160b1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$AddException
// il2cpp: void GameManagers_ChatManager__AddException (System_String_o* line, const MethodInfo* method);
// 0x421bee0

void GameManagers_ChatManager__AddException(System_String_o *line,MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  long *plVar2;
  long lVar3;
  bool_conflict bVar4;
  System_Collections_Generic_List_object__o *__this;
  System_String_o *pSVar5;
  System_Text_StringBuilder_o *pSVar6;
  System_DateTime_o value;
  UI_ChatPanel_o *__this_00;
  MethodInfo *pMVar7;
  MethodInfo *method_00;
  char cVar8;
  char cVar9;
  int iVar10;
  MethodInfo *in_stack_ffffffffffffffb8;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (DAT_057050a8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    DAT_057050a8 = '\x01';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto LAB_0421c0d8;
LAB_0421bf0c:
    __this = *(System_Collections_Generic_List_object__o **)
              (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto LAB_0421bf0c;
LAB_0421c0d8:
    il2cpp_init_class();
    __this = *(System_Collections_Generic_List_object__o **)
              (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
  }
  if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0421c0f4;
  if ((__this->fields)._size < 1) {
    cVar8 = '\0';
    iVar10 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
joined_r0x0421c105:
    cVar9 = cVar8;
    if (iVar10 == 0) goto LAB_0421c148;
LAB_0421bfa2:
    pIVar1 = TypeInfo_ChatManager[2].virtualMethodPointer;
    cVar9 = cVar8;
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
      __this = *(System_Collections_Generic_List_object__o **)
                (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
      if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0421c0f4;
    }
    pSVar5 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       (__this,(__this->fields)._size + -1,MethodInfo_String_get_Item);
    if (pSVar5 == (System_String_o *)0x0) goto LAB_0421c0f4;
    cVar8 = '\0';
    bVar4 = System_String__Contains
                      (pSVar5,*(System_String_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x78),
                       (MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = System_String__op_Equality
                        (*(System_String_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x78),line,
                         (MethodInfo *)0x0);
      cVar8 = (char)bVar4;
      iVar10 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
      goto joined_r0x0421c105;
    }
    cVar9 = '\0';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto LAB_0421bfa2;
LAB_0421c148:
    il2cpp_init_class();
    pIVar1 = TypeInfo_ChatManager[2].virtualMethodPointer;
  }
  if (cVar9 == '\0') {
    *(System_String_o **)(pIVar1 + 0x78) = line;
    il2cpp_runtime_glue(pIVar1 + 0x78,line);
    *(undefined4 *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x80) = 0;
    GameManagers_ChatManager__AddLine
              (line,4,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
               in_stack_ffffffffffffffd8);
    return;
  }
  *(int *)(pIVar1 + 0x80) = *(int *)(pIVar1 + 0x80) + 1;
  if (*(System_Text_StringBuilder_o **)(pIVar1 + 0x88) == (System_Text_StringBuilder_o *)0x0) {
LAB_0421c0f4:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Text_StringBuilder__Clear
            (*(System_Text_StringBuilder_o **)(pIVar1 + 0x88),(MethodInfo *)0x0);
  if (((*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x88) ==
        (System_Text_StringBuilder_o *)0x0) ||
      (pSVar6 = System_Text_StringBuilder__Append
                          (*(System_Text_StringBuilder_o **)
                            (TypeInfo_ChatManager[2].virtualMethodPointer + 0x88),line,(MethodInfo *)0x0),
      pSVar6 == (System_Text_StringBuilder_o *)0x0)) ||
     (pSVar6 = System_Text_StringBuilder__Append(pSVar6,0x28,(MethodInfo *)0x0),
     pSVar6 == (System_Text_StringBuilder_o *)0x0)) goto LAB_0421c0f4;
  pMVar7 = (MethodInfo *)TypeInfo_ChatManager[2].virtualMethodPointer;
  pSVar6 = System_Text_StringBuilder__Append
                     (pSVar6,*(int32_t *)&pMVar7[1].return_type,(MethodInfo *)0x0);
  if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto LAB_0421c0f4;
  System_Text_StringBuilder__Append(pSVar6,0x29,(MethodInfo *)0x0);
  plVar2 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x88);
  if (plVar2 == (long *)0x0) goto LAB_0421c0f4;
  pSVar5 = (System_String_o *)
           (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  pSVar5 = GameManagers_ChatManager__GetColorString(pSVar5,4,0,pMVar7);
  if (DAT_057050a9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057050a9 = '\x01';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto LAB_0421c535;
LAB_0421c1f8:
    lVar3 = *(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto LAB_0421c1f8;
LAB_0421c535:
    il2cpp_init_class();
    lVar3 = *(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
  }
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) < 1) {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_ChatManager__AddLine
                (pSVar5,4,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
                 in_stack_ffffffffffffffb8);
      return;
    }
    if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = System_DateTime__get_UtcNow((MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    if (*(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) != 0) {
      iVar10 = *(int *)(*(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) + 0x18);
      if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = Anticheat_ChatFilter__FilterSizeTag(pSVar5,(MethodInfo *)0x0);
      pSVar5 = Anticheat_ChatFilter__FilterBadWords(pSVar5,(MethodInfo *)0x0);
      if (*(System_Collections_Generic_List_object__o **)
           (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) !=
          (System_Collections_Generic_List_object__o *)0x0) {
        iVar10 = iVar10 + -1;
        System_Collections_Generic_List<object>__set_Item
                  (*(System_Collections_Generic_List_object__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28),iVar10,(Il2CppObject *)pSVar5,
                   MethodInfo_Void_set_Item);
        if (*(System_Collections_Generic_List_T__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x38)
            != (System_Collections_Generic_List_T__o *)0x0) {
          System_Collections_Generic_List<Int32Enum>__set_Item
                    (*(System_Collections_Generic_List_T__o **)
                      (TypeInfo_ChatManager[2].virtualMethodPointer + 0x38),iVar10,4,MethodInfo_Void_set_Item);
          if (*(System_Collections_Generic_List_bool__o **)
               (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40) !=
              (System_Collections_Generic_List_bool__o *)0x0) {
            System_Collections_Generic_List<bool>__set_Item
                      (*(System_Collections_Generic_List_bool__o **)
                        (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40),iVar10,1,MethodInfo_Void_set_Item);
            if (*(System_Collections_Generic_List_DateTime__o **)
                 (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48) !=
                (System_Collections_Generic_List_DateTime__o *)0x0) {
              System_Collections_Generic_List<DateTime>__set_Item
                        (*(System_Collections_Generic_List_DateTime__o **)
                          (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48),iVar10,value,MethodInfo_Void_set_Item);
              if (*(System_Collections_Generic_List_int__o **)
                   (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30) !=
                  (System_Collections_Generic_List_int__o *)0x0) {
                System_Collections_Generic_List<int>__set_Item
                          (*(System_Collections_Generic_List_int__o **)
                            (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30),iVar10,-1,
                           (MethodInfo_3578E50 *)MethodInfo_Void_set_Item);
                if (*(System_Collections_Generic_List_bool__o **)
                     (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50) !=
                    (System_Collections_Generic_List_bool__o *)0x0) {
                  System_Collections_Generic_List<bool>__set_Item
                            (*(System_Collections_Generic_List_bool__o **)
                              (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50),iVar10,0,MethodInfo_Void_set_Item);
                  if (*(System_Collections_Generic_List_bool__o **)
                       (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58) !=
                      (System_Collections_Generic_List_bool__o *)0x0) {
                    System_Collections_Generic_List<bool>__set_Item
                              (*(System_Collections_Generic_List_bool__o **)
                                (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58),iVar10,0,MethodInfo_Void_set_Item)
                    ;
                    if (*(System_Collections_Generic_List_bool__o **)
                         (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb0) !=
                        (System_Collections_Generic_List_bool__o *)0x0) {
                      System_Collections_Generic_List<bool>__set_Item
                                (*(System_Collections_Generic_List_bool__o **)
                                  (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb0),iVar10,0,
                                 MethodInfo_Void_set_Item);
                      pMVar7 = *(MethodInfo **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8);
                      if (pMVar7 != (MethodInfo *)0x0) {
                        method_00 = MethodInfo_Void_set_Item;
                        System_Collections_Generic_List<int>__set_Item
                                  ((System_Collections_Generic_List_int__o *)pMVar7,iVar10,-1,
                                   (MethodInfo_3578E50 *)MethodInfo_Void_set_Item);
                        bVar4 = GameManagers_ChatManager__IsChatAvailable(pMVar7);
                        if ((char)bVar4 != '\0') {
                          pMVar7 = TypeInfo_ChatManager;
                          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                            il2cpp_init_class();
                          }
                          __this_00 = GameManagers_ChatManager__GetChatPanel(pMVar7);
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          bVar4 = UnityEngine_Object__op_Inequality
                                            ((UnityEngine_Object_o *)__this_00,
                                             (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                          if ((char)bVar4 != '\0') {
                            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                              il2cpp_init_class();
                            }
                            pSVar5 = GameManagers_ChatManager__GetFormattedMessage
                                               (pSVar5,value,0,method_00);
                            if (__this_00 != (UI_ChatPanel_o *)0x0) {
                              UI_ChatPanel__ReplaceLastLine(__this_00,pSVar5,(MethodInfo *)0x0);
                              return;
                            }
                            goto LAB_0421c551;
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
LAB_0421c551:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$ReplaceLastLine
// il2cpp: void GameManagers_ChatManager__ReplaceLastLine (System_String_o* message, int32_t color, bool isSystem, const MethodInfo* method);
// 0x421c1c0

void GameManagers_ChatManager__ReplaceLastLine
               (System_String_o *message,int32_t color,bool_conflict isSystem,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_DateTime_o value;
  System_String_o *pSVar3;
  UI_ChatPanel_o *__this;
  MethodInfo *method_00;
  int iVar4;
  MethodInfo *pMVar5;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (DAT_057050a9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057050a9 = '\x01';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto LAB_0421c1f8;
LAB_0421c535:
    il2cpp_init_class();
    lVar1 = *(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto LAB_0421c535;
LAB_0421c1f8:
    lVar1 = *(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
  }
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) < 1) {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_ChatManager__AddLine
                (message,color,isSystem & 0xff,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
                 in_stack_ffffffffffffffb8);
      return;
    }
    if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = System_DateTime__get_UtcNow((MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    if (*(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) != 0) {
      iVar4 = *(int *)(*(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) + 0x18);
      if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = Anticheat_ChatFilter__FilterSizeTag(message,(MethodInfo *)0x0);
      pSVar3 = Anticheat_ChatFilter__FilterBadWords(pSVar3,(MethodInfo *)0x0);
      if (*(System_Collections_Generic_List_object__o **)
           (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) !=
          (System_Collections_Generic_List_object__o *)0x0) {
        iVar4 = iVar4 + -1;
        System_Collections_Generic_List<object>__set_Item
                  (*(System_Collections_Generic_List_object__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28),iVar4,(Il2CppObject *)pSVar3,
                   MethodInfo_Void_set_Item);
        if (*(System_Collections_Generic_List_T__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x38)
            != (System_Collections_Generic_List_T__o *)0x0) {
          System_Collections_Generic_List<Int32Enum>__set_Item
                    (*(System_Collections_Generic_List_T__o **)
                      (TypeInfo_ChatManager[2].virtualMethodPointer + 0x38),iVar4,color,MethodInfo_Void_set_Item);
          if (*(System_Collections_Generic_List_bool__o **)
               (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40) !=
              (System_Collections_Generic_List_bool__o *)0x0) {
            System_Collections_Generic_List<bool>__set_Item
                      (*(System_Collections_Generic_List_bool__o **)
                        (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40),iVar4,isSystem & 0xff,
                       MethodInfo_Void_set_Item);
            if (*(System_Collections_Generic_List_DateTime__o **)
                 (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48) !=
                (System_Collections_Generic_List_DateTime__o *)0x0) {
              System_Collections_Generic_List<DateTime>__set_Item
                        (*(System_Collections_Generic_List_DateTime__o **)
                          (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48),iVar4,value,MethodInfo_Void_set_Item);
              if (*(System_Collections_Generic_List_int__o **)
                   (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30) !=
                  (System_Collections_Generic_List_int__o *)0x0) {
                System_Collections_Generic_List<int>__set_Item
                          (*(System_Collections_Generic_List_int__o **)
                            (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30),iVar4,-1,
                           (MethodInfo_3578E50 *)MethodInfo_Void_set_Item);
                if (*(System_Collections_Generic_List_bool__o **)
                     (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50) !=
                    (System_Collections_Generic_List_bool__o *)0x0) {
                  System_Collections_Generic_List<bool>__set_Item
                            (*(System_Collections_Generic_List_bool__o **)
                              (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50),iVar4,0,MethodInfo_Void_set_Item);
                  if (*(System_Collections_Generic_List_bool__o **)
                       (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58) !=
                      (System_Collections_Generic_List_bool__o *)0x0) {
                    System_Collections_Generic_List<bool>__set_Item
                              (*(System_Collections_Generic_List_bool__o **)
                                (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58),iVar4,0,MethodInfo_Void_set_Item);
                    if (*(System_Collections_Generic_List_bool__o **)
                         (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb0) !=
                        (System_Collections_Generic_List_bool__o *)0x0) {
                      System_Collections_Generic_List<bool>__set_Item
                                (*(System_Collections_Generic_List_bool__o **)
                                  (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb0),iVar4,0,MethodInfo_Void_set_Item
                                );
                      pMVar5 = *(MethodInfo **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8);
                      if (pMVar5 != (MethodInfo *)0x0) {
                        method_00 = MethodInfo_Void_set_Item;
                        System_Collections_Generic_List<int>__set_Item
                                  ((System_Collections_Generic_List_int__o *)pMVar5,iVar4,-1,
                                   (MethodInfo_3578E50 *)MethodInfo_Void_set_Item);
                        bVar2 = GameManagers_ChatManager__IsChatAvailable(pMVar5);
                        if ((char)bVar2 != '\0') {
                          pMVar5 = TypeInfo_ChatManager;
                          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                            il2cpp_init_class();
                          }
                          __this = GameManagers_ChatManager__GetChatPanel(pMVar5);
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          bVar2 = UnityEngine_Object__op_Inequality
                                            ((UnityEngine_Object_o *)__this,
                                             (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                          if ((char)bVar2 != '\0') {
                            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                              il2cpp_init_class();
                            }
                            pSVar3 = GameManagers_ChatManager__GetFormattedMessage
                                               (pSVar3,value,0,method_00);
                            if (__this != (UI_ChatPanel_o *)0x0) {
                              UI_ChatPanel__ReplaceLastLine(__this,pSVar3,(MethodInfo *)0x0);
                              return;
                            }
                            goto LAB_0421c551;
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
LAB_0421c551:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$GetFormattedMessage
// il2cpp: System_String_o* GameManagers_ChatManager__GetFormattedMessage (System_String_o* message, System_DateTime_o timestamp, bool isSuggestion, const MethodInfo* method);
// 0x421bc20

System_String_o *
GameManagers_ChatManager__GetFormattedMessage
          (System_String_o *message,System_DateTime_o timestamp,bool_conflict isSuggestion,
          MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  System_Text_StringBuilder_o *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  int32_t local_34;
  System_DateTime_Fields local_30;
  System_DateTime_Fields local_28;
  
  local_28 = timestamp.fields._dateData;
  if (DAT_057050aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"] ");
    il2cpp_init_method_metadata(&"D2");
    DAT_057050aa = '\x01';
  }
  local_30._dateData = 0;
  local_34 = 0;
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x178), lVar1 != 0)) {
    if ((*(char *)(lVar1 + 0x11) == '\0') || ((char)isSuggestion != '\0')) {
      return message;
    }
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = *(System_Text_StringBuilder_o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x88);
    if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Clear(pSVar3,(MethodInfo *)0x0);
      pSVar3 = *(System_Text_StringBuilder_o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x90);
      if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Clear(pSVar3,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_init_class();
        }
        local_30._dateData =
             (uint64_t)System_DateTime__ToLocalTime((System_DateTime_o)&local_28,(MethodInfo *)0x0);
        pSVar3 = *(System_Text_StringBuilder_o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x90);
        if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
          pSVar3 = System_Text_StringBuilder__Append(pSVar3,0x5b,(MethodInfo *)0x0);
          local_34 = System_DateTime__get_Hour((System_DateTime_o)&local_30,(MethodInfo *)0x0);
          pSVar4 = System_Int32__ToString((int32_t)&local_34,"D2",(MethodInfo *)0x0);
          if ((pSVar3 != (System_Text_StringBuilder_o *)0x0) &&
             (pSVar3 = System_Text_StringBuilder__Append(pSVar3,pSVar4,(MethodInfo *)0x0),
             pSVar3 != (System_Text_StringBuilder_o *)0x0)) {
            pSVar3 = System_Text_StringBuilder__Append(pSVar3,0x3a,(MethodInfo *)0x0);
            local_34 = System_DateTime__get_Minute((System_DateTime_o)&local_30,(MethodInfo *)0x0);
            pSVar4 = System_Int32__ToString((int32_t)&local_34,"D2",(MethodInfo *)0x0);
            if ((pSVar3 != (System_Text_StringBuilder_o *)0x0) &&
               (pSVar3 = System_Text_StringBuilder__Append(pSVar3,pSVar4,(MethodInfo *)0x0),
               pSVar3 != (System_Text_StringBuilder_o *)0x0)) {
              method_00 = (MethodInfo *)&"] ";
              System_Text_StringBuilder__Append(pSVar3,"] ",(MethodInfo *)0x0);
              plVar2 = *(long **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x90);
              if (plVar2 != (long *)0x0) {
                pSVar3 = *(System_Text_StringBuilder_o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x88);
                pSVar4 = (System_String_o *)
                         (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
                pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,3,0,method_00);
                if ((pSVar3 != (System_Text_StringBuilder_o *)0x0) &&
                   (pSVar3 = System_Text_StringBuilder__Append(pSVar3,pSVar4,(MethodInfo *)0x0),
                   pSVar3 != (System_Text_StringBuilder_o *)0x0)) {
                  System_Text_StringBuilder__Append(pSVar3,message,(MethodInfo *)0x0);
                  plVar2 = *(long **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x88);
                  if (plVar2 != (long *)0x0) {
                    pSVar4 = (System_String_o *)
                             (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170))
                    ;
                    return pSVar4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$AddFeed
// il2cpp: void GameManagers_ChatManager__AddFeed (System_String_o* line, const MethodInfo* method);
// 0x421c5b0

void GameManagers_ChatManager__AddFeed(System_String_o *line,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  System_Object_array *pSVar4;
  long lVar5;
  char cVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  UI_FeedPanel_o *__this;
  System_String_o *pSVar9;
  MethodInfo *pMVar10;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (DAT_057050ab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057050ab = '\x01';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto LAB_0421c6d0;
LAB_0421c5de:
    bVar7 = GameManagers_ChatManager__IsChatAvailable(TypeInfo_ChatManager);
    cVar6 = (char)bVar7;
    pMVar10 = TypeInfo_ChatManager;
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto LAB_0421c5de;
LAB_0421c6d0:
    pMVar10 = TypeInfo_ChatManager;
    il2cpp_init_class();
    bVar7 = GameManagers_ChatManager__IsChatAvailable(pMVar10);
    cVar6 = (char)bVar7;
    pMVar10 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = pMVar10;
  if (cVar6 != '\0') {
    if (*(int *)((long)&pMVar10[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    __this = GameManagers_ChatManager__GetFeedPanel(pMVar10);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar7 == '\0') {
      if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar9 = Anticheat_ChatFilter__FilterSizeTag(line,(MethodInfo *)0x0);
      pSVar9 = Anticheat_ChatFilter__FilterBadWords(pSVar9,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      lVar5 = MethodInfo_Void_Add;
      pMVar10 = *(MethodInfo **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x60);
      if (pMVar10 != (MethodInfo *)0x0) {
        piVar1 = (int32_t *)((long)&pMVar10->name + 4);
        *piVar1 = *piVar1 + 1;
        pSVar4 = ((System_Collections_Generic_List_object__Fields *)&pMVar10->invoker_method)->
                 _items;
        if (pSVar4 != (System_Object_array *)0x0) {
          uVar2 = *(uint *)&pMVar10->name;
          if (uVar2 < (uint)pSVar4->max_length) {
            *(uint *)&pMVar10->name = uVar2 + 1;
            pMVar10 = (MethodInfo *)(pSVar4->m_Items + (int)uVar2);
            pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
            il2cpp_runtime_glue();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pMVar10,(Il2CppObject *)pSVar9,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          if (*(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x60) != 0) {
            iVar3 = *(int *)(*(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x60) + 0x18);
            iVar8 = GameManagers_ChatManager__get_MaxLines(pMVar10);
            if (iVar8 < iVar3) {
              if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                il2cpp_init_class();
              }
              if (*(System_Collections_Generic_List_object__o **)
                   (TypeInfo_ChatManager[2].virtualMethodPointer + 0x60) ==
                  (System_Collections_Generic_List_object__o *)0x0) goto LAB_0421c80c;
              System_Collections_Generic_List<object>__RemoveAt
                        (*(System_Collections_Generic_List_object__o **)
                          (TypeInfo_ChatManager[2].virtualMethodPointer + 0x60),0,MethodInfo_Void_RemoveAt);
            }
            if (__this != (UI_FeedPanel_o *)0x0) {
              UI_FeedPanel__AddLine(__this,pSVar9,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
LAB_0421c80c:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__AddLine
              (line,0,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
               in_stack_ffffffffffffffc8);
  }
  return;
}


// GameManagers.ChatManager$$IsTalking
// il2cpp: void GameManagers_ChatManager__IsTalking (Photon_Realtime_Player_o* player, bool isSpeaking, const MethodInfo* method);
// 0x421c820

void GameManagers_ChatManager__IsTalking
               (Photon_Realtime_Player_o *player,bool_conflict isSpeaking,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  UI_VoiceChatPanel_o *__this;
  MethodInfo *pMVar4;
  
  if (DAT_057050ac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057050ac = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar4 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar4 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = pMVar4;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = GameManagers_ChatManager__IsChatAvailable(pMVar4);
    cVar2 = (char)bVar3;
    pMVar4 = TypeInfo_ChatManager;
  }
  else {
    bVar3 = GameManagers_ChatManager__IsChatAvailable(pMVar4);
    cVar2 = (char)bVar3;
    pMVar4 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = pMVar4;
  if (cVar2 != '\0') {
    if (*(int *)((long)&pMVar4[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    __this = GameManagers_ChatManager__GetVoiceChatPanel(pMVar4);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      if (__this == (UI_VoiceChatPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((char)isSpeaking != '\0') {
        UI_VoiceChatPanel__AddPlayer(__this,player,(MethodInfo *)0x0);
        return;
      }
      UI_VoiceChatPanel__RemovePlayer(__this,player,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// GameManagers.ChatManager$$LoadTheme
// il2cpp: void GameManagers_ChatManager__LoadTheme (const MethodInfo* method);
// 0x421b060

void GameManagers_ChatManager__LoadTheme(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar1;
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  bool_conflict bVar2;
  System_Collections_Generic_List_T__o *__this_01;
  System_String_o *pSVar3;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar4;
  undefined4 in_stack_ffffffffffffff68;
  int in_stack_ffffffffffffff6c;
  int in_stack_ffffffffffffff70;
  int in_stack_ffffffffffffff74;
  System_Enum_c *pSVar5;
  undefined1 auStack_70 [16];
  int32_t iStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  if (DAT_057050ad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_ChatTextColor);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_ChatTextColor_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameManagers_ChatTextColor);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameManagers_ChatTextColor__EnumToList_Ch);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"ChatPanel");
    il2cpp_init_method_metadata(&"{0:X2}{1:X2}{2:X2}");
    DAT_057050ad = '\x01';
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
            (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x68);
  if (pSVar1 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum__object>__Clear(pSVar1,MethodInfo_Void_Clear);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_01 = Utility_Util__EnumToList<Int32Enum>(MethodInfo_List_1_GameManagers_ChatTextColor__EnumToList_Ch);
    if (__this_01 != (System_Collections_Generic_List_T__o *)0x0) {
      System_Collections_Generic_List<Int32Enum>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_70,__this_01,
                 MethodInfo_List_1_T__Enumerator_GameManagers_ChatTextColor);
      pSVar5 = (System_Enum_c *)auStack_70._0_8_;
      while( true ) {
        __this.fields._list._4_4_ = in_stack_ffffffffffffff6c;
        __this.fields._list._0_4_ = in_stack_ffffffffffffff68;
        __this.fields._index = in_stack_ffffffffffffff70;
        __this.fields._version = in_stack_ffffffffffffff74;
        __this.fields._current = (Il2CppObject *)pSVar5;
        bVar2 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                          (__this,(MethodInfo_3181D50 *)&stack0xffffffffffffff78);
        if ((char)bVar2 == '\0') {
          __this_00.fields._list._4_4_ = in_stack_ffffffffffffff6c;
          __this_00.fields._list._0_4_ = in_stack_ffffffffffffff68;
          __this_00.fields._index = in_stack_ffffffffffffff70;
          __this_00.fields._version = in_stack_ffffffffffffff74;
          __this_00.fields._current = (Il2CppObject *)pSVar5;
          System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                    (__this_00,(MethodInfo_3181D40 *)&stack0xffffffffffffff78);
          return;
        }
        auStack_70._0_8_ = TypeInfo_ChatTextColor;
        auStack_70._8_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0xffffffffffffffff;
        pSVar3 = System_Enum__ToString((System_Enum_o *)auStack_70,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UVar4 = UI_UIManager__GetThemeColor
                          ("ChatPanel","TextColor",pSVar3,"DefaultPanel",(MethodInfo *)0x0);
        auStack_58._8_4_ = extraout_XMM0_Dc;
        auStack_58._0_8_ = UVar4.fields._0_8_;
        auStack_58._12_4_ = extraout_XMM0_Dd;
        auStack_48._8_4_ = in_XMM1_Dc;
        auStack_48._0_8_ = UVar4.fields._8_8_;
        auStack_48._12_4_ = in_XMM1_Dd;
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar1 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                  (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x68);
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        in_stack_ffffffffffffff74 = (int)((float)auStack_58._0_4_ * 255.0);
        arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&stack0xffffffffffffff74);
        in_stack_ffffffffffffff70 = (int)((float)auStack_58._4_4_ * 255.0);
        arg1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&stack0xffffffffffffff70);
        in_stack_ffffffffffffff6c = (int)((float)auStack_48._0_4_ * 255.0);
        arg2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&stack0xffffffffffffff6c);
        pSVar3 = System_String__Format("{0:X2}{1:X2}{2:X2}",arg0,arg1,arg2,(MethodInfo *)0x0);
        if (pSVar1 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) break;
        System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                  (pSVar1,iStack_60,(Il2CppObject *)pSVar3,MethodInfo_Void_Add);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$HandleInput
// il2cpp: void GameManagers_ChatManager__HandleInput (System_String_o* input, const MethodInfo* method);
// 0x421c9e0

void GameManagers_ChatManager__HandleInput(System_String_o *input,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this;
  long lVar1;
  Utility_Color255_o *__this_00;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  char *pcVar4;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  Photon_Realtime_Player_o *pPVar7;
  System_String_o *pSVar8;
  MethodInfo *method_00;
  MethodInfo *pMVar9;
  UnityEngine_Color_o color;
  undefined4 local_2c;
  
  if (DAT_057050ae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"<color=#");
    il2cpp_init_method_metadata(&"</color>");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&">");
    DAT_057050ae = '\x01';
  }
  local_2c = 0;
  bVar2 = System_String__op_Equality
                    (input,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pIVar3 = CustomLogic_CustomLogicEvaluator__OnChatInput(__this,input,(MethodInfo *)0x0);
    if (((pIVar3 != (Il2CppObject *)0x0) && (pIVar3->klass == DAT_05711048)) &&
       (pcVar4 = (char *)il2cpp_glue_022c7330(pIVar3), *pcVar4 == '\0')) {
      return;
    }
    if (input != (System_String_o *)0x0) {
      bVar2 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pPVar7 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar5 = PhotonExtensions__GetStringProperty
                           (pPVar7,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                            "",(MethodInfo *)0x0);
        pPVar7 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        pMVar9 = (MethodInfo *)0x0;
        bVar2 = PatreonEffects_PatreonHelper__HasNameEffectAccess(pPVar7,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
          if ((lVar1 == 0) || (*(long *)(lVar1 + 0x80) == 0)) goto LAB_0421cdee;
          if (*(char *)(*(long *)(lVar1 + 0x80) + 0x11) != '\0') {
            if (*(long *)(lVar1 + 0x88) == 0) goto LAB_0421cdee;
            pMVar9 = (MethodInfo *)&stack0xffffffffffffffd4;
            bVar2 = PatreonEffects_NameEffectPresets__TryResolve
                              (*(System_String_o **)(*(long *)(lVar1 + 0x88) + 0x18),
                               (int32_t *)pMVar9,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if ((*(long *)(lVar1 + 0x90) == 0) ||
                 (__this_00 = *(Utility_Color255_o **)(*(long *)(lVar1 + 0x90) + 0x18),
                 __this_00 == (Utility_Color255_o *)0x0)) goto LAB_0421cdee;
              color = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
              pSVar8 = UnityEngine_ColorUtility__ToHtmlStringRGB(color,(MethodInfo *)0x0);
              pSVar6 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
              if (pSVar6 == (System_String_array *)0x0) goto LAB_0421cdee;
              if ((int)pSVar6->max_length == 0) {
LAB_0421cdf3:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pSVar6->m_Items[0] = "<color=#";
              il2cpp_runtime_glue(pSVar6->m_Items);
              if ((uint)pSVar6->max_length < 2) goto LAB_0421cdf3;
              pSVar6->m_Items[1] = pSVar8;
              il2cpp_runtime_glue(pSVar6->m_Items + 1,pSVar8);
              if ((uint)pSVar6->max_length < 3) goto LAB_0421cdf3;
              pSVar6->m_Items[2] = ">";
              il2cpp_runtime_glue(pSVar6->m_Items + 2);
              if ((uint)pSVar6->max_length < 4) goto LAB_0421cdf3;
              pSVar6->m_Items[3] = pSVar5;
              il2cpp_runtime_glue(pSVar6->m_Items + 3,pSVar5);
              if ((uint)pSVar6->max_length < 5) goto LAB_0421cdf3;
              pSVar6->m_Items[4] = "</color>";
              il2cpp_runtime_glue(pSVar6->m_Items + 4);
              pMVar9 = (MethodInfo *)0x0;
              pSVar5 = System_String__Concat(pSVar6,(MethodInfo *)0x0);
            }
          }
        }
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar8 = GameManagers_ChatManager__ProcessMentions(input,pMVar9);
        pSVar5 = System_String__Concat(pSVar5,": ",pSVar8,(MethodInfo *)0x0);
        GameManagers_ChatManager__SendChatAll(pSVar5,0,method_00);
      }
      else if ((input->fields)._stringLength != 1) {
        pSVar5 = System_String__Substring(input,1,(MethodInfo *)0x0);
        if (pSVar5 != (System_String_o *)0x0) {
          pMVar9 = (MethodInfo *)0x20;
          pSVar6 = System_String__Split(pSVar5,0x20,0,(MethodInfo *)0x0);
          if (pSVar6 != (System_String_array *)0x0) {
            if (pSVar6->max_length == 0) {
              return;
            }
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            GameManagers_ChatManager__HandleCommand(pSVar6,pMVar9);
            return;
          }
        }
        goto LAB_0421cdee;
      }
      return;
    }
  }
LAB_0421cdee:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$ProcessMentions
// il2cpp: System_String_o* GameManagers_ChatManager__ProcessMentions (System_String_o* message, const MethodInfo* method);
// 0x421d080

System_String_o *
GameManagers_ChatManager__ProcessMentions(System_String_o *message,MethodInfo *method)

{
  long *plVar1;
  int32_t startIndex;
  int iVar2;
  bool_conflict bVar3;
  Il2CppObject *__this;
  System_String_o *pSVar4;
  Il2CppClass *pIVar5;
  Photon_Realtime_Player_array *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_00;
  Photon_Realtime_Player_o *player;
  System_Text_StringBuilder_o *pSVar6;
  System_String_o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_057050af == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Photon_Realtime_Player__ToList_Player);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_Photon_Realtime_Player__Where_Play);
    il2cpp_init_method_metadata(&TypeInfo_Func_Player__bool);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Player_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__ProcessMentions_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass93_0);
    il2cpp_init_method_metadata(&"@");
    il2cpp_init_method_metadata(&"");
    DAT_057050af = '\x01';
  }
  if (message != (System_String_o *)0x0) {
    startIndex = System_String__IndexOf(message,0x40,(MethodInfo *)0x0);
    if (startIndex == -1) {
      return message;
    }
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = *(System_Text_StringBuilder_o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x98);
    if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Clear(pSVar6,(MethodInfo *)0x0);
      pSVar6 = *(System_Text_StringBuilder_o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x98);
      if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append(pSVar6,message,(MethodInfo *)0x0);
LAB_0421d1fa:
        do {
          __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass93_0);
          System_Object___ctor(__this,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          plVar1 = *(long **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x98);
          if ((plVar1 == (long *)0x0) ||
             (pSVar4 = (System_String_o *)
                       (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170)),
             pSVar4 == (System_String_o *)0x0)) goto LAB_0421d5f9;
          iVar2 = System_String__IndexOf(pSVar4,0x20,startIndex,(MethodInfo *)0x0);
          if (iVar2 == -1) {
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar6 = *(System_Text_StringBuilder_o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x98);
            if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto LAB_0421d5f9;
            iVar2 = System_Text_StringBuilder__get_Length(pSVar6,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) goto LAB_0421d2e3;
LAB_0421d27c:
            pSVar6 = *(System_Text_StringBuilder_o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x98);
          }
          else {
            if (*(int *)(TypeInfo_ChatManager + 0xe4) != 0) goto LAB_0421d27c;
LAB_0421d2e3:
            il2cpp_init_class();
            pSVar6 = *(System_Text_StringBuilder_o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x98);
          }
          if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto LAB_0421d5f9;
          pIVar5 = (Il2CppClass *)
                   System_Text_StringBuilder__ToString
                             (pSVar6,startIndex + 1,(iVar2 - startIndex) + -1,(MethodInfo *)0x0);
          if (__this == (Il2CppObject *)0x0) goto LAB_0421d5f9;
          __this[1].klass = pIVar5;
          il2cpp_runtime_glue(__this + 1);
          bVar3 = System_String__IsNullOrWhiteSpace
                            ((System_String_o *)__this[1].klass,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            iVar2 = *(int *)(TypeInfo_ChatManager + 0xe4);
joined_r0x0421d34d:
            if (iVar2 == 0) {
              il2cpp_init_class();
            }
            plVar1 = *(long **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x98);
            if ((plVar1 == (long *)0x0) ||
               (pSVar4 = (System_String_o *)
                         (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170)),
               pSVar4 == (System_String_o *)0x0)) goto LAB_0421d5f9;
            startIndex = System_String__IndexOf(pSVar4,0x40,startIndex + 1,(MethodInfo *)0x0);
            if (startIndex == -1) break;
            goto LAB_0421d1fa;
          }
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_init_class();
          }
          source = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
          predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_Player__bool);
          System_Func<object__bool>___ctor();
          source_00 = System_Linq_Enumerable__Where<object>
                                ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                 predicate,MethodInfo_IEnumerable_1_Photon_Realtime_Player__Where_Play);
          __this_00 = System_Linq_Enumerable__ToList<object>(source_00,MethodInfo_List_1_Photon_Realtime_Player__ToList_Player);
          if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto LAB_0421d5f9;
          if ((__this_00->fields)._size != 1) {
            iVar2 = *(int *)(TypeInfo_ChatManager + 0xe4);
            goto joined_r0x0421d34d;
          }
          player = (Photon_Realtime_Player_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_Player_get_Item)
          ;
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar4 = PhotonExtensions__GetStringProperty
                             (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                              "",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar4 = Anticheat_ChatFilter__FilterSizeTag(pSVar4,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)&"@";
          pSVar4 = System_String__Concat("@",pSVar4,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,2,0,method_00);
          pSVar6 = *(System_Text_StringBuilder_o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x98);
          if ((pSVar6 == (System_Text_StringBuilder_o *)0x0) ||
             (pSVar6 = System_Text_StringBuilder__Remove
                                 (pSVar6,startIndex,iVar2 - startIndex,(MethodInfo *)0x0),
             pSVar6 == (System_Text_StringBuilder_o *)0x0)) goto LAB_0421d5f9;
          System_Text_StringBuilder__Insert(pSVar6,startIndex,pSVar4,(MethodInfo *)0x0);
          plVar1 = *(long **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x98);
          if ((plVar1 == (long *)0x0) ||
             ((__this_01 = (System_String_o *)
                           (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170)),
              pSVar4 == (System_String_o *)0x0 || (__this_01 == (System_String_o *)0x0))))
          goto LAB_0421d5f9;
          startIndex = System_String__IndexOf
                                 (__this_01,0x40,startIndex + (pSVar4->fields)._stringLength,
                                  (MethodInfo *)0x0);
        } while (startIndex != -1);
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        plVar1 = *(long **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x98);
        if (plVar1 != (long *)0x0) {
          pSVar4 = (System_String_o *)
                   (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
          return pSVar4;
        }
      }
    }
  }
LAB_0421d5f9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$FormatChatMessage
// il2cpp: System_String_o* GameManagers_ChatManager__FormatChatMessage (System_String_o* message, const MethodInfo* method);
// 0x421d610

System_String_o *
GameManagers_ChatManager__FormatChatMessage(System_String_o *message,MethodInfo *method)

{
  return message;
}


// GameManagers.ChatManager$$UpdateChatPanel
// il2cpp: void GameManagers_ChatManager__UpdateChatPanel (const MethodInfo* method);
// 0x421d620

void GameManagers_ChatManager__UpdateChatPanel(MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  UI_ChatPanel_o *__this;
  MethodInfo *pMVar4;
  
  if (DAT_057050b0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057050b0 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar4 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar4 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = pMVar4;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = GameManagers_ChatManager__IsChatAvailable(pMVar4);
    cVar2 = (char)bVar3;
    pMVar4 = TypeInfo_ChatManager;
  }
  else {
    bVar3 = GameManagers_ChatManager__IsChatAvailable(pMVar4);
    cVar2 = (char)bVar3;
    pMVar4 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = pMVar4;
  if (cVar2 != '\0') {
    if (*(int *)((long)&pMVar4[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    __this = GameManagers_ChatManager__GetChatPanel(pMVar4);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      if (__this != (UI_ChatPanel_o *)0x0) {
        UI_ChatPanel__Sync(__this,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// GameManagers.ChatManager$$HandleCommand
// il2cpp: void GameManagers_ChatManager__HandleCommand (System_String_array* args, const MethodInfo* method);
// 0x421ce00

void GameManagers_ChatManager__HandleCommand(System_String_array *args,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Reflection_MethodBase_o *__this_00;
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_Object_array *parameters;
  long lVar3;
  undefined8 uVar4;
  Il2CppObject *obj;
  MethodInfo *in_stack_ffffffffffffffc8;
  Il2CppObject *local_28;
  
  if (DAT_057050b1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&" not found, try /help to see a list of commands.");
    il2cpp_init_method_metadata(&"Command ");
    DAT_057050b1 = '\x01';
  }
  local_28 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (args != (System_String_array *)0x0) {
    if ((int)args->max_length == 0) {
LAB_0421d064:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (args->m_Items[0] != (System_String_o *)0x0) {
      __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x70);
      pSVar2 = System_String__ToLower(args->m_Items[0],(MethodInfo *)0x0);
      if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                          (__this,(Il2CppObject *)pSVar2,&local_28,MethodInfo_Boolean_TryGetValue);
        if ((char)bVar1 == '\0') {
          if ((int)args->max_length == 0) goto LAB_0421d064;
          pSVar2 = System_String__Concat
                             ("Command ",args->m_Items[0]," not found, try /help to see a list of commands.",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          GameManagers_ChatManager__AddLine
                    (pSVar2,4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
                     in_stack_ffffffffffffffc8);
        }
        else {
          if ((local_28 == (Il2CppObject *)0x0) ||
             (__this_00 = local_28[2].monitor, __this_00 == (System_Reflection_MethodBase_o *)0x0))
          goto LAB_0421d05f;
          bVar1 = System_Reflection_MethodBase__get_IsStatic(__this_00,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            obj = *(Il2CppObject **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x20);
            parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
            if (parameters == (System_Object_array *)0x0) goto LAB_0421d05f;
            lVar3 = il2cpp_runtime_glue(args,(((parameters->obj).klass)->_1).element_class);
            if (lVar3 == 0) goto LAB_0421d069;
            if ((int)parameters->max_length == 0) goto LAB_0421d064;
            parameters->m_Items[0] = &args->obj;
            il2cpp_runtime_glue(parameters->m_Items,args);
          }
          else {
            parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
            if (parameters == (System_Object_array *)0x0) goto LAB_0421d05f;
            lVar3 = il2cpp_runtime_glue(args,(((parameters->obj).klass)->_1).element_class);
            if (lVar3 == 0) {
LAB_0421d069:
              uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar4,0);
            }
            if ((int)parameters->max_length == 0) goto LAB_0421d064;
            parameters->m_Items[0] = &args->obj;
            il2cpp_runtime_glue(parameters->m_Items);
            obj = (Il2CppObject *)0x0;
          }
          System_Reflection_MethodBase__Invoke(__this_00,obj,parameters,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
LAB_0421d05f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$MutePlayer
// il2cpp: void GameManagers_ChatManager__MutePlayer (Photon_Realtime_Player_o* player, System_String_o* muteType, const MethodInfo* method);
// 0x42161c0

void GameManagers_ChatManager__MutePlayer
               (Photon_Realtime_Player_o *player,System_String_o *muteType,MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *__this;
  bool_conflict bVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *pSVar3;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (DAT_057050b2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&").");
    il2cpp_init_method_metadata(&"Emote");
    il2cpp_init_method_metadata(&"Voice");
    il2cpp_init_method_metadata(&" has been muted (");
    il2cpp_init_method_metadata(&"");
    DAT_057050b2 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_042162fd;
LAB_042161f2:
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_042161f2;
LAB_042162fd:
    il2cpp_init_class();
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar2 == player) {
    return;
  }
  bVar1 = System_String__op_Equality(muteType,"Emote",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(muteType,"Text",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__op_Equality(muteType,"Voice",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') goto LAB_042163d0;
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (player == (Photon_Realtime_Player_o *)0x0) goto LAB_04216481;
      __this = *(System_Collections_Generic_HashSet_int__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x30);
    }
    else {
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (player == (Photon_Realtime_Player_o *)0x0) goto LAB_04216481;
      __this = *(System_Collections_Generic_HashSet_int__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x28);
    }
  }
  else {
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (player == (Photon_Realtime_Player_o *)0x0) goto LAB_04216481;
    __this = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x20);
  }
  if (__this != (System_Collections_Generic_HashSet_int__o *)0x0) {
    System_Collections_Generic_HashSet<int>__Add(__this,(player->fields).actorNumber,MethodInfo_Boolean_Add);
LAB_042163d0:
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = PhotonExtensions__GetStringProperty
                       (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                        "",(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(pSVar3," has been muted (",muteType,").",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__AddLine
              (pSVar3,3,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
               in_stack_ffffffffffffffc8);
    return;
  }
LAB_04216481:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$UnmutePlayer
// il2cpp: void GameManagers_ChatManager__UnmutePlayer (Photon_Realtime_Player_o* player, System_String_o* muteType, const MethodInfo* method);
// 0x4216590

void GameManagers_ChatManager__UnmutePlayer
               (Photon_Realtime_Player_o *player,System_String_o *muteType,MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  bool_conflict bVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_String_o *pSVar4;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (DAT_057050b3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&").");
    il2cpp_init_method_metadata(&" has been unmuted (");
    il2cpp_init_method_metadata(&"Emote");
    il2cpp_init_method_metadata(&"Voice");
    il2cpp_init_method_metadata(&"");
    DAT_057050b3 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_0421671d;
LAB_042165c2:
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_042165c2;
LAB_0421671d:
    il2cpp_init_class();
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar3 == player) {
    return;
  }
  bVar2 = System_String__op_Equality(muteType,"Emote",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
LAB_0421673b:
    bVar2 = System_String__op_Equality(muteType,"Text",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((player == (Photon_Realtime_Player_o *)0x0) ||
         (pSVar1 = *(System_Collections_Generic_HashSet_int__o **)
                    (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x28),
         pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto LAB_04216929;
      bVar2 = System_Collections_Generic_HashSet<int>__Contains
                        (pSVar1,(player->fields).actorNumber,MethodInfo_Boolean_Contains);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar1 = *(System_Collections_Generic_HashSet_int__o **)
                  (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x28);
        goto joined_r0x0421685e;
      }
    }
    bVar2 = System_String__op_Equality(muteType,"Voice",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto LAB_04216878;
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((player == (Photon_Realtime_Player_o *)0x0) ||
       (pSVar1 = *(System_Collections_Generic_HashSet_int__o **)
                  (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x30),
       pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto LAB_04216929;
    bVar2 = System_Collections_Generic_HashSet<int>__Contains
                      (pSVar1,(player->fields).actorNumber,MethodInfo_Boolean_Contains);
    if ((char)bVar2 == '\0') goto LAB_04216878;
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x30);
  }
  else {
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((player == (Photon_Realtime_Player_o *)0x0) ||
       (pSVar1 = *(System_Collections_Generic_HashSet_int__o **)
                  (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x20),
       pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto LAB_04216929;
    bVar2 = System_Collections_Generic_HashSet<int>__Contains
                      (pSVar1,(player->fields).actorNumber,MethodInfo_Boolean_Contains);
    if ((char)bVar2 == '\0') goto LAB_0421673b;
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x20);
  }
joined_r0x0421685e:
  if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) {
LAB_04216929:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_HashSet<int>__Remove(pSVar1,(player->fields).actorNumber,MethodInfo_Boolean_Remove);
LAB_04216878:
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = PhotonExtensions__GetStringProperty
                     (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                      (MethodInfo *)0x0);
  pSVar4 = System_String__Concat(pSVar4," has been unmuted (",muteType,").",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_ChatManager__AddLine
            (pSVar4,3,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
             in_stack_ffffffffffffffc8);
  return;
}


// GameManagers.ChatManager$$SetPlayerVolume
// il2cpp: void GameManagers_ChatManager__SetPlayerVolume (Photon_Realtime_Player_o* player, float volume, const MethodInfo* method);
// 0x421d6f0

void GameManagers_ChatManager__SetPlayerVolume
               (Photon_Realtime_Player_o *player,float volume,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__float__o *pSVar1;
  bool_conflict bVar2;
  Photon_Realtime_Player_o *pPVar3;
  float fVar4;
  
  if (DAT_057050b4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057050b4 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_0421d867;
LAB_0421d721:
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_0421d721;
LAB_0421d867:
    il2cpp_init_class();
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar3 == player) {
    return;
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar1 = *(System_Collections_Generic_Dictionary_int__float__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x38),
     pSVar1 != (System_Collections_Generic_Dictionary_int__float__o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary<int__float>__ContainsKey
                      (pSVar1,(player->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_Dictionary_int__float__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x38);
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto LAB_0421d884;
      fVar4 = System_Collections_Generic_Dictionary<int__float>__get_Item
                        (pSVar1,(player->fields).actorNumber,MethodInfo_Single_get_Item);
      if ((fVar4 == volume) && (!NAN(fVar4) && !NAN(volume))) {
        return;
      }
    }
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_int__float__o **)
              (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x38);
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
      System_Collections_Generic_Dictionary<int__float>__set_Item
                (pSVar1,(player->fields).actorNumber,volume,MethodInfo_Void_set_Item);
      return;
    }
  }
LAB_0421d884:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$GetPlayer
// il2cpp: Photon_Realtime_Player_o* GameManagers_ChatManager__GetPlayer (System_String_o* stringID, const MethodInfo* method);
// 0x421d890

Photon_Realtime_Player_o *
GameManagers_ChatManager__GetPlayer(System_String_o *stringID,MethodInfo *method)

{
  undefined4 in_EAX;
  bool_conflict bVar1;
  Photon_Realtime_Room_o *pPVar2;
  long lVar3;
  Photon_Realtime_Player_o *pPVar4;
  MethodInfo *in_stack_ffffffffffffffd8;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_057050b5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&"Invalid player ID.");
    DAT_057050b5 = '\x01';
  }
  uStack_18 = CONCAT44(0xffffffff,(undefined4)uStack_18);
  bVar1 = System_Int32__TryParse(stringID,(int32_t *)((long)&uStack_18 + 4),(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
LAB_0421d975:
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__AddLine
              ("Invalid player ID.",4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
               in_stack_ffffffffffffffd8);
    return (Photon_Realtime_Player_o *)0x0;
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (pPVar2 != (Photon_Realtime_Room_o *)0x0) {
    lVar3 = (*(pPVar2->klass->vtable)._10_GetPlayer.methodPtr)
                      (pPVar2,uStack_18 >> 0x20,1,(pPVar2->klass->vtable)._10_GetPlayer.method);
    if (lVar3 == 0) goto LAB_0421d975;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pPVar2 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (pPVar2 != (Photon_Realtime_Room_o *)0x0) {
      pPVar4 = (Photon_Realtime_Player_o *)
               (*(pPVar2->klass->vtable)._10_GetPlayer.methodPtr)
                         (pPVar2,uStack_18 >> 0x20,1,(pPVar2->klass->vtable)._10_GetPlayer.method);
      return pPVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$GetPlayer
// il2cpp: Photon_Realtime_Player_o* GameManagers_ChatManager__GetPlayer (System_String_array* args, const MethodInfo* method);
// 0x42155a0

Photon_Realtime_Player_o *
GameManagers_ChatManager__GetPlayer(System_String_array *args,MethodInfo *method)

{
  bool_conflict bVar1;
  Photon_Realtime_Room_o *pPVar2;
  Photon_Realtime_Player_o *pPVar3;
  MethodInfo *in_stack_ffffffffffffffd8;
  uint local_c;
  
  if (DAT_057050b6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&"Invalid player ID.");
    DAT_057050b6 = '\x01';
  }
  local_c = 0;
  if (args != (System_String_array *)0x0) {
    if (1 < (int)args->max_length) {
      bVar1 = System_Int32__TryParse(args->m_Items[1],(int32_t *)&local_c,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pPVar2 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        if (pPVar2 == (Photon_Realtime_Room_o *)0x0) goto LAB_042156b9;
        pPVar3 = (Photon_Realtime_Player_o *)
                 (*(pPVar2->klass->vtable)._10_GetPlayer.methodPtr)
                           (pPVar2,(ulong)local_c,1,(pPVar2->klass->vtable)._10_GetPlayer.method);
        if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
          return pPVar3;
        }
      }
    }
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__AddLine
              ("Invalid player ID.",4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
               in_stack_ffffffffffffffd8);
    return (Photon_Realtime_Player_o *)0x0;
  }
LAB_042156b9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$CheckMC
// il2cpp: bool GameManagers_ChatManager__CheckMC (const MethodInfo* method);
// 0x4215090

bool_conflict GameManagers_ChatManager__CheckMC(MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined8 unaff_RBX;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  if (DAT_057050b7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&"Must be master client to use that command.");
    DAT_057050b7 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  bVar2 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = 0;
    GameManagers_ChatManager__AddLine
              ("Must be master client to use that command.",4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
               in_stack_ffffffffffffffe8);
  }
  return bVar2;
}


// GameManagers.ChatManager$$GetChatPanel
// il2cpp: UI_ChatPanel_o* GameManagers_ChatManager__GetChatPanel (const MethodInfo* method);
// 0x4217f60

UI_ChatPanel_o * GameManagers_ChatManager__GetChatPanel(MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  long *plVar2;
  char cVar3;
  bool_conflict bVar4;
  MethodInfo *method_00;
  
  if (DAT_057050b8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057050b8 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = method_00;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar4 = GameManagers_ChatManager__IsChatAvailable(method_00);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = GameManagers_ChatManager__IsChatAvailable(method_00);
    cVar3 = (char)bVar4;
  }
  if (cVar3 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return (UI_ChatPanel_o *)0x0;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
      plVar2 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    else {
      plVar2 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    if (plVar2 != (long *)0x0) {
      if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) ==
          TypeInfo_InGameMenu)) {
        return (UI_ChatPanel_o *)plVar2[0x19];
      }
    }
  }
  return (UI_ChatPanel_o *)0x0;
}


// GameManagers.ChatManager$$GetFeedPanel
// il2cpp: UI_FeedPanel_o* GameManagers_ChatManager__GetFeedPanel (const MethodInfo* method);
// 0x421b5a0

UI_FeedPanel_o * GameManagers_ChatManager__GetFeedPanel(MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  long *plVar2;
  char cVar3;
  bool_conflict bVar4;
  MethodInfo *method_00;
  
  if (DAT_057050b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057050b9 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    method_00 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = method_00;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar4 = GameManagers_ChatManager__IsChatAvailable(method_00);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = GameManagers_ChatManager__IsChatAvailable(method_00);
    cVar3 = (char)bVar4;
  }
  if (cVar3 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return (UI_FeedPanel_o *)0x0;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
      plVar2 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    else {
      plVar2 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    if (plVar2 != (long *)0x0) {
      if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) ==
          TypeInfo_InGameMenu)) {
        return (UI_FeedPanel_o *)plVar2[0x1a];
      }
    }
  }
  return (UI_FeedPanel_o *)0x0;
}


// GameManagers.ChatManager$$GetVoiceChatPanel
// il2cpp: UI_VoiceChatPanel_o* GameManagers_ChatManager__GetVoiceChatPanel (const MethodInfo* method);
// 0x421c920

UI_VoiceChatPanel_o * GameManagers_ChatManager__GetVoiceChatPanel(MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  
  if (DAT_057050ba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057050ba = '\x01';
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    plVar2 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    plVar2 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) ==
        TypeInfo_InGameMenu)) {
      return (UI_VoiceChatPanel_o *)plVar2[0x1b];
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$GetKDRPanel
// il2cpp: UI_KDRPanel_o* GameManagers_ChatManager__GetKDRPanel (const MethodInfo* method);
// 0x421d9e0

UI_KDRPanel_o * GameManagers_ChatManager__GetKDRPanel(MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  
  if (DAT_057050bb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057050bb = '\x01';
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    plVar2 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    plVar2 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) ==
        TypeInfo_InGameMenu)) {
      return (UI_KDRPanel_o *)plVar2[0x1e];
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$GetIDString
// il2cpp: System_String_o* GameManagers_ChatManager__GetIDString (int32_t id, bool includeMC, bool myPlayer, const MethodInfo* method);
// 0x421daa0

System_String_o *
GameManagers_ChatManager__GetIDString
          (int32_t id,bool_conflict includeMC,bool_conflict myPlayer,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  int32_t local_1c;
  
  local_1c = id;
  if (DAT_057050bc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&"] ");
    il2cpp_init_method_metadata(&"[M]");
    il2cpp_init_method_metadata(&"[");
    DAT_057050bc = '\x01';
  }
  pSVar1 = System_Int32__ToString((int32_t)&local_1c,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  pSVar1 = System_String__Concat("[",pSVar1,"] ",(MethodInfo *)0x0);
  if ((char)includeMC != '\0') {
    pSVar1 = System_String__Concat("[M]",pSVar1,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = GameManagers_ChatManager__GetColorString(pSVar1,(myPlayer & 0xffU) + 1,0,method_00);
  return pSVar1;
}


// GameManagers.ChatManager$$GetColorString
// il2cpp: System_String_o* GameManagers_ChatManager__GetColorString (System_String_o* str, int32_t color, bool bold, const MethodInfo* method);
// 0x421b7c0

System_String_o *
GameManagers_ChatManager__GetColorString
          (System_String_o *str,int32_t color,bool_conflict bold,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  System_String_array *values;
  System_String_o *pSVar1;
  
  if (DAT_057050bd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"<b>");
    il2cpp_init_method_metadata(&"</b>");
    il2cpp_init_method_metadata(&"<color=#");
    il2cpp_init_method_metadata(&"</color>");
    il2cpp_init_method_metadata(&">");
    DAT_057050bd = '\x01';
  }
  if (color == 0) {
    return str;
  }
  if ((char)bold != '\0') {
    str = System_String__Concat("<b>",str,"</b>",(MethodInfo *)0x0);
  }
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "<color=#";
      il2cpp_runtime_glue(values->m_Items);
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x68);
      if (__this == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto LAB_0421b984;
      pSVar1 = (System_String_o *)
               System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                         (__this,color,MethodInfo_String_get_Item);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar1;
        il2cpp_runtime_glue(values->m_Items + 1,pSVar1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ">";
          il2cpp_runtime_glue(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = str;
            il2cpp_runtime_glue(values->m_Items + 3,str);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = "</color>";
              il2cpp_runtime_glue(values->m_Items + 4);
              pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
              return pSVar1;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0421b984:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$Update
// il2cpp: void GameManagers_ChatManager__Update (GameManagers_ChatManager_o* __this, const MethodInfo* method);
// 0x421db70

void GameManagers_ChatManager__Update(GameManagers_ChatManager_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Settings_KeybindSetting_o *__this_00;
  char cVar3;
  bool_conflict bVar4;
  UI_ChatPanel_o *__this_01;
  MethodInfo *pMVar5;
  
  if (DAT_057050be == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_057050be = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar5 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar5 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = pMVar5;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar4 = GameManagers_ChatManager__IsChatAvailable(pMVar5);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = GameManagers_ChatManager__IsChatAvailable(pMVar5);
    cVar3 = (char)bVar4;
  }
  if ((cVar3 == '\0') || (bVar4 = UI_InGameMenu__InMenu((MethodInfo *)0x0), (char)bVar4 != '\0')) {
    return;
  }
  pMVar5 = TypeInfo_ChatManager;
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  __this_01 = GameManagers_ChatManager__GetChatPanel(pMVar5);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
     (__this_00 = *(Settings_KeybindSetting_o **)(lVar2 + 0x88),
     __this_00 != (Settings_KeybindSetting_o *)0x0)) {
    bVar4 = Settings_KeybindSetting__GetKeyDown(__this_00,0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    if (__this_01 != (UI_ChatPanel_o *)0x0) {
      if ((char)(__this_01->fields).IgnoreNextActivation == '\0') {
        UI_ChatPanel__Activate(__this_01,(MethodInfo *)0x0);
        return;
      }
      *(undefined1 *)&(__this_01->fields).IgnoreNextActivation = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$HandleTyping
// il2cpp: void GameManagers_ChatManager__HandleTyping (System_String_o* input, const MethodInfo* method);
// 0x421dc80

/* WARNING: Type propagation algorithm not settling */

void GameManagers_ChatManager__HandleTyping(System_String_o *input,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  Photon_Realtime_Player_o *pPVar5;
  long *plVar6;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  System_Collections_Generic_List_Enumerator_object__o __this_11;
  System_Collections_Generic_List_Enumerator_object__o __this_12;
  System_Collections_Generic_List_Enumerator_object__o __this_13;
  System_Collections_Generic_List_Enumerator_object__o __this_14;
  System_Collections_Generic_List_Enumerator_T__o __this_15;
  System_Collections_Generic_List_Enumerator_T__o __this_16;
  System_Collections_Generic_List_Enumerator_T__o __this_17;
  System_Collections_Generic_List_Enumerator_T__o __this_18;
  System_Collections_Generic_List_Enumerator_object__o __this_19;
  System_Collections_Generic_List_Enumerator_object__o __this_20;
  System_Collections_Generic_List_Enumerator_object__o __this_21;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_22;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_23;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_24;
  bool bVar7;
  Il2CppRGCTXData *pIVar8;
  undefined8 uVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  int32_t iVar12;
  uint uVar13;
  System_String_o *pSVar14;
  long lVar15;
  System_Collections_Generic_List_object__o *pSVar16;
  System_String_o *pSVar17;
  System_Func_TSource__bool__o *pSVar18;
  Photon_Realtime_Player_array *pPVar19;
  System_String_o *pSVar20;
  System_Collections_Generic_List_Enumerator_T__c *__this_25;
  System_Object_array *pSVar21;
  System_Text_StringBuilder_o *pSVar22;
  long lVar23;
  Il2CppClass *item;
  Il2CppObject *pIVar24;
  System_Func_TSource__TResult__o *pSVar25;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar26;
  System_Collections_Generic_List_string__o *pSVar27;
  System_Comparison_T__o *pSVar28;
  MethodInfo *pMVar29;
  System_String_array *method_00;
  ulong uVar30;
  System_Collections_Generic_KeyValuePair_object__object__o item_00;
  undefined1 auVar31 [16];
  MethodInfo *in_stack_fffffffffffffed8;
  undefined8 in_stack_fffffffffffffee8;
  byte in_stack_fffffffffffffef0;
  undefined7 in_stack_fffffffffffffef1;
  undefined4 in_stack_fffffffffffffef8;
  undefined4 uVar32;
  uint uVar33;
  System_Collections_Generic_List_string__o *__this_26;
  System_Collections_Generic_List_object__o *pSVar34;
  System_Collections_Generic_List_Enumerator_T__c *pSVar35;
  int32_t local_dc;
  System_Collections_Generic_List_Enumerator_T__c *local_d8;
  undefined1 local_d0 [16];
  Il2CppRGCTXData *local_c0;
  _union_247328 _Stack_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_b0;
  undefined1 local_a8 [40];
  Il2CppType *pIStack_80;
  Il2CppRGCTXData *local_78;
  _union_247328 _Stack_70;
  _union_247328 local_68;
  Il2CppType *local_60;
  System_Collections_Generic_List_Enumerator_T__c *local_58;
  Il2CppType *pIStack_50;
  Il2CppRGCTXData *local_48;
  _union_247328 _Stack_40;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_38;
  
  if (DAT_057050bf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_IsDigit);
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_Comparison_Player);
    il2cpp_init_method_metadata(&TypeInfo_Comparison_KeyValuePair_string__CommandAttribute);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_All_Char);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Select_Player_Strin);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__ToList_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Player_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_GameManagers_ChatMa);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_GameManagers_ChatMa);
    il2cpp_init_method_metadata(&TypeInfo_Func_Player__string);
    il2cpp_init_method_metadata(&TypeInfo_Func_char__bool);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_ChatManager_CommandAttribute_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Photon_Realtime_Player__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_KeyValuePair_2_System_Strin);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_Void_Sort);
    il2cpp_init_method_metadata(&MethodInfo_Void_Sort);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Photon_Realtime_Player);
    il2cpp_init_method_metadata(&MethodInfo_List_1_KeyValuePair_2_System_String_GameManagers);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_KeyValuePair_string__CommandAttribute);
    il2cpp_init_method_metadata(&TypeInfo_List_Player);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    il2cpp_init_method_metadata(&MethodInfo_Int32__HandleTyping_b__110_0);
    il2cpp_init_method_metadata(&MethodInfo_String__HandleTyping_b__110_1);
    il2cpp_init_method_metadata(&MethodInfo_Int32__HandleTyping_b__110_2);
    il2cpp_init_method_metadata(&MethodInfo_Int32__HandleTyping_b__110_3);
    il2cpp_init_method_metadata(&MethodInfo_String__HandleTyping_b__110_4);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"Matching players:");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"##FORCE_REFRESH##");
    il2cpp_init_method_metadata(&"@");
    il2cpp_init_method_metadata(&"");
    DAT_057050bf = '\x01';
  }
  pSVar35 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  local_60 = (Il2CppType *)0x0;
  local_68.genericMethod = (void *)0x0;
  uVar32 = 0;
  local_dc = 0;
  local_a8._0_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  local_a8._8_8_ = (Il2CppType *)0x0;
  local_a8._16_8_ = (Il2CppRGCTXData *)0x0;
  local_48 = (Il2CppRGCTXData *)0x0;
  _Stack_40.genericMethod = (void *)0x0;
  local_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_38 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  local_78 = (Il2CppRGCTXData *)0x0;
  _Stack_70.genericMethod = (void *)0x0;
  local_a8._32_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_80 = (Il2CppType *)0x0;
  if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar10 = System_String__IsNullOrEmpty
                     (*(System_String_o **)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x30),(MethodInfo *)0x0
                     );
  if ((char)bVar10 == '\0') {
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
      il2cpp_init_class();
      if (*(int *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x24) != 1) goto LAB_0421e0a4;
LAB_0421e030:
      if (input == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar10 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
        goto joined_r0x0421e1ab;
      }
      iVar11 = System_String__IndexOf(input,0x20,(MethodInfo *)0x0);
      if (iVar11 == -1) {
        pSVar14 = System_String__Substring(input,1,(MethodInfo *)0x0);
        if (pSVar14 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        pSVar14 = System_String__Substring(input,1,iVar11 + -1,(MethodInfo *)0x0);
        if (pSVar14 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      pSVar14 = System_String__ToLower(pSVar14,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (iVar11 == -1) {
        pSVar16 = *(System_Collections_Generic_List_object__o **)
                   (*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x18);
        if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_d0,pSVar16,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato)
        ;
        pIVar8 = local_c0;
        do {
          __this_02.fields._index._0_1_ = in_stack_fffffffffffffef0;
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8
          ;
          __this_02.fields._9_7_ = in_stack_fffffffffffffef1;
          __this_02.fields._current._0_4_ = in_stack_fffffffffffffef8;
          __this_02.fields._current._4_4_ = uVar32;
          bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff08);
          if ((char)bVar10 == '\0') {
            bVar7 = false;
            goto LAB_0421ec30;
          }
          bVar10 = System_String__Equals(pSVar14,(System_String_o *)pIVar8,5,(MethodInfo *)0x0);
        } while ((char)bVar10 == '\0');
        bVar7 = true;
LAB_0421ec30:
        __this_06.fields._index._0_1_ = in_stack_fffffffffffffef0;
        __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
        __this_06.fields._9_7_ = in_stack_fffffffffffffef1;
        __this_06.fields._current._0_4_ = in_stack_fffffffffffffef8;
        __this_06.fields._current._4_4_ = uVar32;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_06,(MethodInfo_3185E10 *)&stack0xffffffffffffff08);
        if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
        if (bVar7) goto LAB_0421ea52;
        if (*(System_Collections_Generic_List_object__o **)(lVar15 + 0x18) ==
            (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_d0,
                   *(System_Collections_Generic_List_object__o **)(lVar15 + 0x18),MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
        pIVar8 = local_c0;
        pSVar35 = (System_Collections_Generic_List_Enumerator_T__c *)local_d0._0_8_;
        do {
          __this_07.fields._index._0_1_ = in_stack_fffffffffffffef0;
          __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8
          ;
          __this_07.fields._9_7_ = in_stack_fffffffffffffef1;
          __this_07.fields._current._0_4_ = in_stack_fffffffffffffef8;
          __this_07.fields._current._4_4_ = uVar32;
          bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (__this_07,(MethodInfo_3185E20 *)&stack0xffffffffffffff08);
          if ((char)bVar10 == '\0') {
            __this_13.fields._index._0_1_ = in_stack_fffffffffffffef0;
            __this_13.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
            __this_13.fields._9_7_ = in_stack_fffffffffffffef1;
            __this_13.fields._current._0_4_ = in_stack_fffffffffffffef8;
            __this_13.fields._current._4_4_ = uVar32;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_13,(MethodInfo_3185E10 *)&stack0xffffffffffffff08);
            pMVar29 = TypeInfo_ChatManager;
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              il2cpp_init_class();
            }
            GameManagers_ChatManager__ClearLastSuggestions(pMVar29);
            return;
          }
          if (pIVar8 == (Il2CppRGCTXData *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar10 = System_String__StartsWith((System_String_o *)pIVar8,pSVar14,5,(MethodInfo *)0x0);
        } while ((char)bVar10 == '\0');
        __this_08.fields._index._0_1_ = in_stack_fffffffffffffef0;
        __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
        __this_08.fields._9_7_ = in_stack_fffffffffffffef1;
        __this_08.fields._current._0_4_ = in_stack_fffffffffffffef8;
        __this_08.fields._current._4_4_ = uVar32;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_08,(MethodInfo_3185E10 *)&stack0xffffffffffffff08);
        iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
joined_r0x0421ec23:
        if (iVar3 == 0) {
          il2cpp_init_class();
        }
        lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
        *(System_String_o **)(lVar15 + 0x30) = "";
        il2cpp_runtime_glue(lVar15 + 0x30);
        iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
      }
      else {
        lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
        *(System_String_o **)(lVar15 + 0x30) = "";
        il2cpp_runtime_glue(lVar15 + 0x30);
        *(undefined1 *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x28) = 0;
        iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
      }
    }
    else {
      if (*(int *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x24) == 1) goto LAB_0421e030;
LAB_0421e0a4:
      iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
joined_r0x0421e1ab:
      if (iVar3 == 0) {
        il2cpp_init_class();
        iVar3 = *(int *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x24);
      }
      else {
        iVar3 = *(int *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x24);
      }
      if (iVar3 == 2) {
        if (input == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar10 = System_String__Contains(input,"@",(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
          goto joined_r0x0421e2ef;
        }
        iVar11 = System_String__LastIndexOf(input,0x40,(MethodInfo *)0x0);
        if (-1 < iVar11) {
          pSVar14 = System_String__Substring(input,iVar11 + 1,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar16 = *(System_Collections_Generic_List_object__o **)
                     (*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x18);
          if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_d0,pSVar16,
                     MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
          pIVar8 = local_c0;
LAB_0421e170:
          __this.fields._index._0_1_ = in_stack_fffffffffffffef0;
          __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
          __this.fields._9_7_ = in_stack_fffffffffffffef1;
          __this.fields._current._0_4_ = in_stack_fffffffffffffef8;
          __this.fields._current._4_4_ = uVar32;
          bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (__this,(MethodInfo_3185E20 *)&stack0xffffffffffffff08);
          if ((char)bVar10 != '\0') goto code_r0x0421e184;
          __this_03.fields._index._0_1_ = in_stack_fffffffffffffef0;
          __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8
          ;
          __this_03.fields._9_7_ = in_stack_fffffffffffffef1;
          __this_03.fields._current._0_4_ = in_stack_fffffffffffffef8;
          __this_03.fields._current._4_4_ = uVar32;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff08);
          if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar16 = *(System_Collections_Generic_List_object__o **)
                     (*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x18);
          if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_d0,pSVar16,
                     MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
          pIVar8 = local_c0;
          pSVar35 = (System_Collections_Generic_List_Enumerator_T__c *)local_d0._0_8_;
          do {
            __this_04.fields._index._0_1_ = in_stack_fffffffffffffef0;
            __this_04.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
            __this_04.fields._9_7_ = in_stack_fffffffffffffef1;
            __this_04.fields._current._0_4_ = in_stack_fffffffffffffef8;
            __this_04.fields._current._4_4_ = uVar32;
            bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (__this_04,(MethodInfo_3185E20 *)&stack0xffffffffffffff08);
            if ((char)bVar10 == '\0') {
              __this_12.fields._index._0_1_ = in_stack_fffffffffffffef0;
              __this_12.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
              __this_12.fields._9_7_ = in_stack_fffffffffffffef1;
              __this_12.fields._current._0_4_ = in_stack_fffffffffffffef8;
              __this_12.fields._current._4_4_ = uVar32;
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (__this_12,(MethodInfo_3185E10 *)&stack0xffffffffffffff08);
              pMVar29 = TypeInfo_ChatManager;
              if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                il2cpp_init_class();
              }
              GameManagers_ChatManager__ClearLastSuggestions(pMVar29);
              return;
            }
            if (pIVar8 == (Il2CppRGCTXData *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar10 = System_String__StartsWith
                               ((System_String_o *)pIVar8,pSVar14,5,(MethodInfo *)0x0);
          } while ((char)bVar10 == '\0');
          __this_05.fields._index._0_1_ = in_stack_fffffffffffffef0;
          __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8
          ;
          __this_05.fields._9_7_ = in_stack_fffffffffffffef1;
          __this_05.fields._current._0_4_ = in_stack_fffffffffffffef8;
          __this_05.fields._current._4_4_ = uVar32;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_05,(MethodInfo_3185E10 *)&stack0xffffffffffffff08);
          iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
          goto joined_r0x0421ec23;
        }
      }
      else {
        iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
joined_r0x0421e2ef:
        if (iVar3 == 0) {
          il2cpp_init_class();
          iVar3 = *(int *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x24);
        }
        else {
          iVar3 = *(int *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x24);
        }
        if (iVar3 == 3) {
          if (input == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar10 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
          if (((char)bVar10 != '\0') &&
             (iVar11 = System_String__IndexOf(input,0x20,(MethodInfo *)0x0), iVar11 != -1)) {
            pSVar14 = System_String__Substring(input,iVar11 + 1,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar16 = *(System_Collections_Generic_List_object__o **)
                       (*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x18);
            if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_List<object>__GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_d0,pSVar16,
                       MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
            pIVar8 = local_c0;
            while (__this_00.fields._index._0_1_ = in_stack_fffffffffffffef0,
                  __this_00.fields._list =
                       (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8,
                  __this_00.fields._9_7_ = in_stack_fffffffffffffef1,
                  __this_00.fields._current._0_4_ = in_stack_fffffffffffffef8,
                  __this_00.fields._current._4_4_ = uVar32,
                  bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff08),
                  (char)bVar10 != '\0') {
              bVar10 = System_String__Equals(pSVar14,(System_String_o *)pIVar8,5,(MethodInfo *)0x0);
              if ((char)bVar10 != '\0') {
LAB_0421e2cc:
                __this_01.fields._index._0_1_ = in_stack_fffffffffffffef0;
                __this_01.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
                __this_01.fields._9_7_ = in_stack_fffffffffffffef1;
                __this_01.fields._current._0_4_ = in_stack_fffffffffffffef8;
                __this_01.fields._current._4_4_ = uVar32;
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff08);
                return;
              }
            }
            __this_09.fields._index._0_1_ = in_stack_fffffffffffffef0;
            __this_09.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
            __this_09.fields._9_7_ = in_stack_fffffffffffffef1;
            __this_09.fields._current._0_4_ = in_stack_fffffffffffffef8;
            __this_09.fields._current._4_4_ = uVar32;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_09,(MethodInfo_3185E10 *)&stack0xffffffffffffff08);
            if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar16 = *(System_Collections_Generic_List_object__o **)
                       (*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x18);
            if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_List<object>__GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_d0,pSVar16,
                       MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
            pIVar8 = local_c0;
            pSVar35 = (System_Collections_Generic_List_Enumerator_T__c *)local_d0._0_8_;
            do {
              __this_10.fields._index._0_1_ = in_stack_fffffffffffffef0;
              __this_10.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
              __this_10.fields._9_7_ = in_stack_fffffffffffffef1;
              __this_10.fields._current._0_4_ = in_stack_fffffffffffffef8;
              __this_10.fields._current._4_4_ = uVar32;
              bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (__this_10,(MethodInfo_3185E20 *)&stack0xffffffffffffff08);
              if ((char)bVar10 == '\0') {
                __this_14.fields._index._0_1_ = in_stack_fffffffffffffef0;
                __this_14.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
                __this_14.fields._9_7_ = in_stack_fffffffffffffef1;
                __this_14.fields._current._0_4_ = in_stack_fffffffffffffef8;
                __this_14.fields._current._4_4_ = uVar32;
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (__this_14,(MethodInfo_3185E10 *)&stack0xffffffffffffff08);
                pMVar29 = TypeInfo_ChatManager;
                if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                  il2cpp_init_class();
                }
                GameManagers_ChatManager__ClearLastSuggestions(pMVar29);
                return;
              }
              if (pIVar8 == (Il2CppRGCTXData *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              bVar10 = System_String__StartsWith
                                 ((System_String_o *)pIVar8,pSVar14,5,(MethodInfo *)0x0);
            } while ((char)bVar10 == '\0');
            __this_11.fields._index._0_1_ = in_stack_fffffffffffffef0;
            __this_11.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
            __this_11.fields._9_7_ = in_stack_fffffffffffffef1;
            __this_11.fields._current._0_4_ = in_stack_fffffffffffffef8;
            __this_11.fields._current._4_4_ = uVar32;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_11,(MethodInfo_3185E10 *)&stack0xffffffffffffff08);
            iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
            goto joined_r0x0421ec23;
          }
        }
      }
      iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_init_class();
    }
    lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
    *(System_String_o **)(lVar15 + 0x30) = "";
    il2cpp_runtime_glue(lVar15 + 0x30);
  }
  if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
    il2cpp_init_class();
    if (*(int *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x24) == 2) goto LAB_0421e361;
LAB_0421e442:
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) goto LAB_0421e8a0;
LAB_0421e452:
    if (*(int *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x24) == 1) goto LAB_0421e463;
LAB_0421e8b9:
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) != 0) goto LAB_0421e8c9;
LAB_0421e9ed:
    il2cpp_init_class();
    lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
    if (*(int *)(lVar15 + 0x24) == 3) goto LAB_0421e8da;
LAB_0421ea21:
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
      il2cpp_init_class();
      lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
      cVar2 = *(char *)(lVar15 + 0x28);
    }
    else {
      lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
      cVar2 = *(char *)(lVar15 + 0x28);
    }
    if (cVar2 != '\0') {
      if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
        il2cpp_init_class();
        lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
      }
      goto LAB_0421ea52;
    }
LAB_0421ea70:
    bVar10 = System_String__IsNullOrEmpty(input,(MethodInfo *)0x0);
    if ((((char)bVar10 != '\0') ||
        (bVar10 = System_String__op_Equality(input,"@",(MethodInfo *)0x0),
        (char)bVar10 != '\0')) ||
       (bVar10 = System_String__op_Equality(input,"/",(MethodInfo *)0x0),
       (char)bVar10 != '\0')) {
      if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
        il2cpp_init_class();
        cVar2 = *(char *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x38);
        pMVar29 = TypeInfo_ChatManager;
      }
      else {
        cVar2 = *(char *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x38);
        pMVar29 = TypeInfo_ChatManager;
      }
      if (cVar2 != '\0') {
        TypeInfo_ChatManager = pMVar29;
        return;
      }
      TypeInfo_ChatManager = pMVar29;
      if (*(int *)((long)&pMVar29[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_ChatManager__ClearLastSuggestions(pMVar29);
      return;
    }
    if (input == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar10 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      bVar10 = System_String__Contains(input,"@",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (*(char *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x38) == '\0') {
          pMVar29 = TypeInfo_ChatManager;
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            il2cpp_init_class();
          }
LAB_042206b8:
          GameManagers_ChatManager__ClearLastSuggestions(pMVar29);
        }
      }
      else {
        iVar11 = System_String__LastIndexOf(input,0x40,(MethodInfo *)0x0);
        pSVar14 = System_String__Substring(input,iVar11 + 1,(MethodInfo *)0x0);
        if (pSVar14 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        iVar12 = System_String__IndexOf(pSVar14,0x20,(MethodInfo *)0x0);
        if ((-1 < iVar12) ||
           (bVar10 = System_String__IsNullOrWhiteSpace(pSVar14,(MethodInfo *)0x0),
           (char)bVar10 != '\0')) {
          if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
            il2cpp_init_class();
            cVar2 = *(char *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x38);
            pMVar29 = TypeInfo_ChatManager;
          }
          else {
            cVar2 = *(char *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x38);
            pMVar29 = TypeInfo_ChatManager;
          }
          TypeInfo_ChatManager = pMVar29;
          if (cVar2 == '\0') {
            if (*(int *)((long)&pMVar29[2].parameters + 4) == 0) {
              il2cpp_init_class();
            }
            GameManagers_ChatManager__ClearLastSuggestions(pMVar29);
            iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
          }
          else {
            iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
          }
          if (iVar3 == 0) {
            il2cpp_init_class();
          }
          **(undefined8 **)(TypeInfo_SuggestionState + 0xb8) = "";
          il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_SuggestionState + 0xb8),"");
          return;
        }
        if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar10 = System_String__op_Inequality
                           (pSVar14,(System_String_o *)**(undefined8 **)(TypeInfo_SuggestionState + 0xb8),
                            (MethodInfo *)0x0);
        if ((char)bVar10 != '\0') {
          if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (*(char *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x38) == '\0') {
            pMVar29 = TypeInfo_ChatManager;
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              il2cpp_init_class();
            }
            GameManagers_ChatManager__ClearLastSuggestions(pMVar29);
            if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
              il2cpp_init_class();
            }
            **(undefined8 **)(TypeInfo_SuggestionState + 0xb8) = pSVar14;
            il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_SuggestionState + 0xb8),pSVar14);
            *(undefined8 *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x20) = 0x2ffffffff;
            pSVar20 = System_String__Concat("@",pSVar14,(MethodInfo *)0x0);
            iVar3 = (pSVar14->fields)._stringLength;
            if (DAT_057050da == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
              DAT_057050da = '\x01';
            }
            if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
              il2cpp_init_class();
            }
            lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
            *(System_String_o **)(lVar15 + 8) = pSVar20;
            il2cpp_runtime_glue(lVar15 + 8,pSVar20);
            lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
            *(int32_t *)(lVar15 + 0x10) = iVar11;
            *(int32_t *)(lVar15 + 0x14) = iVar11 + 1 + iVar3;
            pSVar16 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Player);
            System_Collections_Generic_List<object>___ctor(pSVar16,MethodInfo_List_1_Photon_Realtime_Player);
            local_d8 = (System_Collections_Generic_List_Enumerator_T__c *)
                       System_String__ToLower(pSVar14,(MethodInfo *)0x0);
            pSVar18 = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_char__bool);
            System_Func<char__bool>___ctor();
            uVar13 = System_Linq_Enumerable__All<char>
                               ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar14,pSVar18
                                ,MethodInfo_Boolean_All_Char);
            if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pPVar19 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
            uVar33 = 0;
            if (pPVar19 == (Photon_Realtime_Player_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar4 = (uint)pPVar19->max_length;
            pSVar34 = pSVar16;
            if (0 < (int)uVar4) {
              in_stack_fffffffffffffef0 = (byte)uVar13;
              if (uVar4 != 0) {
                do {
                  pPVar5 = pPVar19->m_Items[(int)uVar33];
                  if ((char)uVar13 == '\0') {
                    pSVar16 = pSVar34;
                    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
                      il2cpp_init_class();
                      pSVar16 = pSVar34;
                    }
                    pSVar20 = PhotonExtensions__GetStringProperty
                                        (pPVar5,(System_String_o *)
                                                **(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                                         (MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    pSVar20 = Anticheat_ChatFilter__FilterSizeTag(pSVar20,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    pSVar20 = MiscExtensions__StripRichText(pSVar20,(MethodInfo *)0x0);
                    uVar13 = (uint)in_stack_fffffffffffffef0;
                    if (pSVar20 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pSVar34 = pSVar16;
                    pSVar20 = System_String__ToLower(pSVar20,(MethodInfo *)0x0);
                    if (pSVar20 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    bVar10 = System_String__Contains
                                       (pSVar20,(System_String_o *)local_d8,(MethodInfo *)0x0);
                    lVar15 = MethodInfo_Void_Add;
                    if ((char)bVar10 != '\0') {
                      if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      piVar1 = &(pSVar16->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar21 = (pSVar16->fields)._items;
                      if (pSVar21 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      goto LAB_04220aab;
                    }
                  }
                  else {
                    if (pPVar5 == (Photon_Realtime_Player_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    local_dc = (pPVar5->fields).actorNumber;
                    pSVar20 = System_Int32__ToString((int32_t)&local_dc,(MethodInfo *)0x0);
                    if (pSVar20 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    bVar10 = System_String__StartsWith(pSVar20,pSVar14,(MethodInfo *)0x0);
                    lVar15 = MethodInfo_Void_Add;
                    if ((char)bVar10 != '\0') {
                      if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      piVar1 = &(pSVar16->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar21 = (pSVar16->fields)._items;
                      if (pSVar21 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
LAB_04220aab:
                      uVar4 = (pSVar16->fields)._size;
                      if (uVar4 < (uint)pSVar21->max_length) {
                        (pSVar16->fields)._size = uVar4 + 1;
                        pSVar21->m_Items[(int)uVar4] = (Il2CppObject *)pPVar5;
                        il2cpp_runtime_glue(pSVar21->m_Items + (int)uVar4);
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  (pSVar16,(Il2CppObject *)pPVar5,
                                   *(MethodInfo_35A7350 **)
                                    (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  }
                  uVar33 = uVar33 + 1;
                  uVar4 = (uint)pPVar19->max_length;
                  if ((int)uVar4 <= (int)uVar33) goto LAB_04220ad8;
                } while (uVar33 < uVar4);
              }
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_04220ad8:
            pMVar29 = (MethodInfo *)(ulong)uVar4;
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
              pSVar28 = *(System_Comparison_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
            }
            else {
              pSVar28 = *(System_Comparison_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
            }
            if (pSVar28 == (System_Comparison_T__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar28 = (System_Comparison_T__o *)il2cpp_runtime_glue(TypeInfo_Comparison_Player);
              pMVar29 = (MethodInfo *)0x0;
              System_Comparison<object>___ctor();
              lVar15 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Comparison_T__o **)(lVar15 + 0x40) = pSVar28;
              il2cpp_runtime_glue(lVar15 + 0x40,pSVar28);
              pSVar16 = pSVar34;
            }
            if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_List<object>__Sort(pSVar16,pSVar28,MethodInfo_Void_Sort);
            if (0 < (pSVar16->fields)._size) {
              if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                il2cpp_init_class();
              }
              pSVar14 = GameManagers_ChatManager__GetColorString("Matching players:",3,0,pMVar29);
              GameManagers_ChatManager__AddLine
                        (pSVar14,3,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,1,0,-1,0,
                         in_stack_fffffffffffffed8);
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar25 = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48)
              ;
              if (pSVar25 == (System_Func_TSource__TResult__o *)0x0) {
                pSVar16 = pSVar34;
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                  pSVar16 = pSVar34;
                }
                pSVar25 = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_Player__string);
                System_Func<object__object>___ctor();
                lVar15 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_TSource__TResult__o **)(lVar15 + 0x48) = pSVar25;
                il2cpp_runtime_glue(lVar15 + 0x48,pSVar25);
              }
              pSVar26 = System_Linq_Enumerable__Select<object__object>
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar16,
                                   pSVar25,MethodInfo_IEnumerable_1_System_String__Select_Player_Strin);
              pMVar29 = MethodInfo_List_1_System_String__ToList_String;
              pSVar27 = (System_Collections_Generic_List_string__o *)
                        System_Linq_Enumerable__ToList<object>
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar26,
                                   (MethodInfo_24E20A0 *)MethodInfo_List_1_System_String__ToList_String);
              if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                il2cpp_init_class();
              }
              GameManagers_ChatManager__ShowCommandSuggestions(pSVar27,pMVar29);
              if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
                il2cpp_init_class();
              }
              lVar15 = *(long *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x18);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              iVar11 = *(int32_t *)(lVar15 + 0x18);
              *(undefined4 *)(lVar15 + 0x18) = 0;
              if (0 < iVar11) {
                System_Array__Clear(*(System_Array_o **)(lVar15 + 0x10),0,iVar11,(MethodInfo *)0x0);
              }
              System_Collections_Generic_List<object>__GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_d0,pSVar16,
                         MethodInfo_List_1_T__Enumerator_Photon_Realtime_Player__Get);
              local_a8._16_8_ = local_c0;
              local_a8._0_8_ = local_d0._0_8_;
              local_a8._8_8_ = local_d0._8_8_;
              while (__this_20.fields._index._0_1_ = in_stack_fffffffffffffef0,
                    __this_20.fields._list =
                         (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8,
                    __this_20.fields._9_7_ = in_stack_fffffffffffffef1,
                    __this_20.fields._current._0_4_ = in_stack_fffffffffffffef8,
                    __this_20.fields._current._4_4_ = uVar33,
                    bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                       (__this_20,(MethodInfo_3185E20 *)local_a8),
                    uVar9 = local_a8._16_8_, (char)bVar10 != '\0') {
                if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                if ((Il2CppRGCTXData *)uVar9 == (Il2CppRGCTXData *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar16 = *(System_Collections_Generic_List_object__o **)
                           (*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x18);
                uVar33 = *(uint *)(uVar9 + 0x18);
                pSVar14 = System_Int32__ToString
                                    ((int32_t)&stack0xfffffffffffffefc,(MethodInfo *)0x0);
                lVar15 = MethodInfo_Void_Add;
                if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                piVar1 = &(pSVar16->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar21 = (pSVar16->fields)._items;
                if (pSVar21 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                uVar13 = (pSVar16->fields)._size;
                if (uVar13 < (uint)pSVar21->max_length) {
                  (pSVar16->fields)._size = uVar13 + 1;
                  pSVar21->m_Items[(int)uVar13] = (Il2CppObject *)pSVar14;
                  il2cpp_runtime_glue(pSVar21->m_Items + (int)uVar13,pSVar14);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            (pSVar16,(Il2CppObject *)pSVar14,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
              }
LAB_04220da7:
              __this_21.fields._index._0_1_ = in_stack_fffffffffffffef0;
              __this_21.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
              __this_21.fields._9_7_ = in_stack_fffffffffffffef1;
              __this_21.fields._current._0_4_ = in_stack_fffffffffffffef8;
              __this_21.fields._current._4_4_ = uVar33;
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (__this_21,(MethodInfo_3185E10 *)local_a8);
              iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
              goto joined_r0x0421fc31;
            }
            pMVar29 = TypeInfo_ChatManager;
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              il2cpp_init_class();
            }
            goto LAB_042206b8;
          }
        }
      }
    }
    else {
      iVar11 = System_String__IndexOf(input,0x20,(MethodInfo *)0x0);
      if (iVar11 == -1) {
        pSVar14 = System_String__Substring(input,1,(MethodInfo *)0x0);
        if (pSVar14 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        pSVar14 = System_String__Substring(input,1,iVar11 + -1,(MethodInfo *)0x0);
        if (pSVar14 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      pSVar14 = System_String__ToLower(pSVar14,(MethodInfo *)0x0);
      bVar10 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (*(char *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x38) != '\0') {
          return;
        }
        pMVar29 = TypeInfo_ChatManager;
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        GameManagers_ChatManager__ClearLastSuggestions(pMVar29);
        return;
      }
      if (iVar11 == -1) {
        if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar10 = System_String__op_Inequality
                           (pSVar14,(System_String_o *)**(undefined8 **)(TypeInfo_SuggestionState + 0xb8),
                            (MethodInfo *)0x0);
        if ((char)bVar10 != '\0') {
          if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (*(char *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x38) == '\0') {
            pMVar29 = TypeInfo_ChatManager;
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              il2cpp_init_class();
            }
            GameManagers_ChatManager__ClearLastSuggestions(pMVar29);
            if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
              il2cpp_init_class();
            }
            **(undefined8 **)(TypeInfo_SuggestionState + 0xb8) = pSVar14;
            il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_SuggestionState + 0xb8),pSVar14);
            method_00 = (System_String_array *)0x1ffffffff;
            *(undefined8 *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x20) = 0x1ffffffff;
            pSVar20 = System_String__Concat("/",pSVar14,(MethodInfo *)0x0);
            iVar11 = (input->fields)._stringLength;
            if (DAT_057050da == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
              DAT_057050da = '\x01';
            }
            if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
              il2cpp_init_class();
            }
            lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
            *(System_String_o **)(lVar15 + 8) = pSVar20;
            il2cpp_runtime_glue(lVar15 + 8,pSVar20);
            lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
            *(undefined4 *)(lVar15 + 0x10) = 0;
            *(int32_t *)(lVar15 + 0x14) = iVar11;
            __this_25 = (System_Collections_Generic_List_Enumerator_T__c *)
                        il2cpp_runtime_glue(TypeInfo_List_KeyValuePair_string__CommandAttribute);
            System_Collections_Generic_List<KeyValuePair<object__object>>___ctor
                      ((System_Collections_Generic_List_T__o *)__this_25,MethodInfo_List_1_KeyValuePair_2_System_String_GameManagers);
            if (*(System_Collections_Generic_Dictionary_object__object__o **)
                 (TypeInfo_ChatManager[2].virtualMethodPointer + 0x70) ==
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_Dictionary<object__object>__GetEnumerator
                      ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_d0,
                       *(System_Collections_Generic_Dictionary_object__object__o **)
                        (TypeInfo_ChatManager[2].virtualMethodPointer + 0x70),MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
            local_38 = local_b0;
            local_48 = local_c0;
            _Stack_40 = _Stack_b8;
            local_58 = (System_Collections_Generic_List_Enumerator_T__c *)local_d0._0_8_;
            pIStack_50 = (Il2CppType *)local_d0._8_8_;
            local_d8 = __this_25;
            if (__this_25 == (System_Collections_Generic_List_Enumerator_T__c *)0x0) {
              while (__this_23.fields._version._0_1_ = in_stack_fffffffffffffef0,
                    __this_23.fields._dictionary =
                         (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                         in_stack_fffffffffffffee8,
                    __this_23.fields._9_7_ = in_stack_fffffffffffffef1,
                    __this_23.fields._current.fields.key._0_4_ = in_stack_fffffffffffffef8,
                    __this_23.fields._current.fields.key._4_4_ = uVar32,
                    __this_23.fields._current.fields.value = (Il2CppObject *)pSVar14,
                    __this_23.fields._32_8_ = pSVar35,
                    bVar10 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                                       (__this_23,(MethodInfo_31CFE90 *)&local_58),
                    (char)bVar10 != '\0') {
                auVar31 = il2cpp_glue_032bf890((MethodInfo_31CFE90 *)&local_58);
                if (auVar31._8_8_ == 0) goto LAB_042200ce;
                if (*(char *)(auVar31._8_8_ + 0x30) == '\0') {
                  if (auVar31._0_8_ == (System_String_o *)0x0) goto LAB_0422010a;
                  pSVar20 = System_String__ToLower(auVar31._0_8_,(MethodInfo *)0x0);
                  if (pSVar20 == (System_String_o *)0x0) goto LAB_0422010f;
                  bVar10 = System_String__StartsWith(pSVar20,pSVar14,(MethodInfo *)0x0);
                  if ((char)bVar10 != '\0') {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                }
              }
            }
            else {
              while (__this_22.fields._version._0_1_ = in_stack_fffffffffffffef0,
                    __this_22.fields._dictionary =
                         (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                         in_stack_fffffffffffffee8,
                    __this_22.fields._9_7_ = in_stack_fffffffffffffef1,
                    __this_22.fields._current.fields.key._0_4_ = in_stack_fffffffffffffef8,
                    __this_22.fields._current.fields.key._4_4_ = uVar32,
                    __this_22.fields._current.fields.value = (Il2CppObject *)pSVar14,
                    __this_22.fields._32_8_ = pSVar35,
                    bVar10 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                                       (__this_22,(MethodInfo_31CFE90 *)&local_58),
                    (char)bVar10 != '\0') {
                item_00.fields =
                     (System_Collections_Generic_KeyValuePair_object__object__Fields)
                     il2cpp_glue_032bf890(&local_58);
                pIVar24 = item_00.fields.value;
                pSVar20 = (System_String_o *)item_00.fields.key;
                if (pIVar24 == (Il2CppObject *)0x0) {
LAB_042200ce:
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                if (*(char *)&pIVar24[3].klass == '\0') {
                  if (pSVar20 == (System_String_o *)0x0) {
LAB_0422010a:
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pSVar17 = System_String__ToLower(pSVar20,(MethodInfo *)0x0);
                  if (pSVar17 == (System_String_o *)0x0) {
LAB_0422010f:
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  bVar10 = System_String__StartsWith(pSVar17,pSVar14,(MethodInfo *)0x0);
                  lVar15 = MethodInfo_Void_Add;
                  if ((char)bVar10 != '\0') {
                    piVar1 = (int32_t *)((long)&(local_d8->_1).namespaze + 4);
                    *piVar1 = *piVar1 + 1;
                    pSVar21 = ((System_Collections_Generic_List_T__Fields *)&(local_d8->_1).name)->
                              _items;
                    if (pSVar21 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    uVar13 = *(uint *)&(local_d8->_1).namespaze;
                    if (uVar13 < (uint)pSVar21->max_length) {
                      *(uint *)&(local_d8->_1).namespaze = uVar13 + 1;
                      method_00 = (System_String_array *)((long)(int)uVar13 * 0x10);
                      *(System_String_o **)((long)method_00->m_Items + (long)pSVar21) = pSVar20;
                      *(Il2CppObject **)((long)(method_00->m_Items + 1) + (long)pSVar21) = pIVar24;
                      il2cpp_runtime_glue((long)method_00->m_Items + (long)pSVar21,0);
                    }
                    else {
                      method_00 = *(System_String_array **)
                                   (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
                      System_Collections_Generic_List<KeyValuePair<object__object>>__AddWithResize
                                ((System_Collections_Generic_List_T__o *)local_d8,item_00,
                                 (MethodInfo_34A6320 *)method_00);
                    }
                  }
                }
              }
            }
            __this_24.fields._version._0_1_ = in_stack_fffffffffffffef0;
            __this_24.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee8;
            __this_24.fields._9_7_ = in_stack_fffffffffffffef1;
            __this_24.fields._current.fields.key._0_4_ = in_stack_fffffffffffffef8;
            __this_24.fields._current.fields.key._4_4_ = uVar32;
            __this_24.fields._current.fields.value = (Il2CppObject *)pSVar14;
            __this_24.fields._32_8_ = pSVar35;
            System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
                      (__this_24,(MethodInfo_31CFFB0 *)&local_58);
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
              pSVar28 = *(System_Comparison_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
            }
            else {
              pSVar28 = *(System_Comparison_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
            }
            pSVar35 = local_d8;
            if (pSVar28 == (System_Comparison_T__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar28 = (System_Comparison_T__o *)il2cpp_runtime_glue(TypeInfo_Comparison_KeyValuePair_string__CommandAttribute);
              method_00 = (System_String_array *)0x0;
              System_Comparison<KeyValuePair<object__object>>___ctor();
              lVar15 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Comparison_T__o **)(lVar15 + 0x38) = pSVar28;
              il2cpp_runtime_glue(lVar15 + 0x38,pSVar28);
              pSVar35 = local_d8;
            }
            local_d8 = pSVar35;
            if (pSVar35 == (System_Collections_Generic_List_Enumerator_T__c *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_List<KeyValuePair<object__object>>__Sort
                      ((System_Collections_Generic_List_T__o *)pSVar35,pSVar28,MethodInfo_Void_Sort);
            if (0 < *(int *)&(pSVar35->_1).namespaze) {
              pSVar27 = (System_Collections_Generic_List_string__o *)
                        il2cpp_runtime_glue(TypeInfo_List_string);
              System_Collections_Generic_List<object>___ctor
                        ((System_Collections_Generic_List_object__o *)pSVar27,MethodInfo_List_1_System_String);
              System_Collections_Generic_List<KeyValuePair<object__object>>__GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_d0,
                         (System_Collections_Generic_List_T__o *)pSVar35,MethodInfo_List_1_T__Enumerator_KeyValuePair_2_System_Strin);
              local_78 = local_c0;
              _Stack_70 = _Stack_b8;
              local_a8._32_8_ = local_d0._0_8_;
              pIStack_80 = (Il2CppType *)local_d0._8_8_;
              while (__this_15.fields._index._0_1_ = in_stack_fffffffffffffef0,
                    __this_15.fields._list =
                         (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8,
                    __this_15.fields._9_7_ = in_stack_fffffffffffffef1,
                    __this_15.fields._current._0_4_ = in_stack_fffffffffffffef8,
                    __this_15.fields._current._4_4_ = uVar32,
                    bVar10 = System_Collections_Generic_List_Enumerator<KeyValuePair<object__object>>__MoveNext
                                       (__this_15,(MethodInfo_3176CF0 *)(local_a8 + 0x20)),
                    (char)bVar10 != '\0') {
                auVar31 = il2cpp_glue_03c129b0(local_a8 + 0x20);
                lVar15 = auVar31._8_8_;
                __this_26 = pSVar27;
                if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                  il2cpp_init_class();
                  __this_26 = pSVar27;
                }
                if (*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x88)
                    == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                System_Text_StringBuilder__Clear
                          (*(System_Text_StringBuilder_o **)
                            (TypeInfo_ChatManager[2].virtualMethodPointer + 0x88),(MethodInfo *)0x0);
                if (*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x88)
                    == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar22 = System_Text_StringBuilder__Append
                                    (*(System_Text_StringBuilder_o **)
                                      (TypeInfo_ChatManager[2].virtualMethodPointer + 0x88),0x2f,
                                     (MethodInfo *)0x0);
                if (pSVar22 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                System_Text_StringBuilder__Append(pSVar22,auVar31._0_8_,(MethodInfo *)0x0);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                if (*(long *)(lVar15 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                if (*(long *)(*(long *)(lVar15 + 0x38) + 0x18) != 0) {
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    il2cpp_init_class();
                  }
                  if (*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x88)
                      == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  System_Text_StringBuilder__Append
                            (*(System_Text_StringBuilder_o **)
                              (TypeInfo_ChatManager[2].virtualMethodPointer + 0x88),0x20,(MethodInfo *)0x0);
                  lVar23 = *(long *)(lVar15 + 0x38);
                  if (lVar23 == 0) {
LAB_04220042:
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  uVar30 = 0;
                  while ((long)uVar30 < (long)*(int *)(lVar23 + 0x18)) {
                    if (uVar30 != 0) {
                      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                        il2cpp_init_class();
                      }
                      if (*(System_Text_StringBuilder_o **)
                           (TypeInfo_ChatManager[2].virtualMethodPointer + 0x88) ==
                          (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      System_Text_StringBuilder__Append
                                (*(System_Text_StringBuilder_o **)
                                  (TypeInfo_ChatManager[2].virtualMethodPointer + 0x88),0x20,
                                 (MethodInfo *)0x0);
                    }
                    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                      il2cpp_init_class();
                    }
                    if (*(System_Text_StringBuilder_o **)
                         (TypeInfo_ChatManager[2].virtualMethodPointer + 0x88) ==
                        (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pSVar22 = System_Text_StringBuilder__Append
                                        (*(System_Text_StringBuilder_o **)
                                          (TypeInfo_ChatManager[2].virtualMethodPointer + 0x88),0x5b,
                                         (MethodInfo *)0x0);
                    method_00 = *(System_String_array **)(lVar15 + 0x38);
                    if (method_00 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    if (*(uint *)&method_00->max_length <= uVar30) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    if (pSVar22 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pSVar22 = System_Text_StringBuilder__Append
                                        (pSVar22,(System_String_o *)method_00->m_Items[uVar30],
                                         (MethodInfo *)0x0);
                    if (pSVar22 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    System_Text_StringBuilder__Append(pSVar22,0x5d,(MethodInfo *)0x0);
                    uVar30 = uVar30 + 1;
                    lVar23 = *(long *)(lVar15 + 0x38);
                    if (lVar23 == 0) goto LAB_04220042;
                  }
                }
                pSVar27 = __this_26;
                if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                  il2cpp_init_class();
                  plVar6 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x88);
                }
                else {
                  plVar6 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x88);
                }
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar14 = (System_String_o *)
                          (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
                item = (Il2CppClass *)
                       GameManagers_ChatManager__GetColorString(pSVar14,2,0,(MethodInfo *)method_00)
                ;
                lVar15 = MethodInfo_Void_Add;
                if (__this_26 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                piVar1 = &(__this_26->fields)._version;
                *piVar1 = *piVar1 + 1;
                method_00 = (__this_26->fields)._items;
                if (method_00 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                uVar13 = (__this_26->fields)._size;
                if (uVar13 < *(uint *)&method_00->max_length) {
                  (__this_26->fields)._size = uVar13 + 1;
                  method_00->m_Items[(int)uVar13] = (System_String_o *)item;
                  il2cpp_runtime_glue(method_00->m_Items + (int)uVar13,item);
                }
                else {
                  method_00 = *(System_String_array **)(*(long *)(lVar15 + 0x20) + 0xc0);
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_26,
                             (Il2CppObject *)item,(MethodInfo_35A7350 *)method_00->m_Items[10]);
                }
              }
              __this_16.fields._index._0_1_ = in_stack_fffffffffffffef0;
              __this_16.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
              __this_16.fields._9_7_ = in_stack_fffffffffffffef1;
              __this_16.fields._current._0_4_ = in_stack_fffffffffffffef8;
              __this_16.fields._current._4_4_ = uVar32;
              pMVar29 = MethodInfo_Void_Dispose;
              System_Collections_Generic_List_Enumerator<KeyValuePair<object__object>>__Dispose
                        (__this_16,(MethodInfo_3176CE0 *)(local_a8 + 0x20));
              if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                il2cpp_init_class();
              }
              GameManagers_ChatManager__ShowCommandSuggestions(pSVar27,pMVar29);
              pSVar35 = local_d8;
              if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
                il2cpp_init_class();
              }
              lVar15 = *(long *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x18);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              iVar11 = *(int32_t *)(lVar15 + 0x18);
              *(undefined4 *)(lVar15 + 0x18) = 0;
              if (0 < iVar11) {
                System_Array__Clear(*(System_Array_o **)(lVar15 + 0x10),0,iVar11,(MethodInfo *)0x0);
              }
              System_Collections_Generic_List<KeyValuePair<object__object>>__GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_d0,
                         (System_Collections_Generic_List_T__o *)pSVar35,MethodInfo_List_1_T__Enumerator_KeyValuePair_2_System_Strin);
              local_78 = local_c0;
              _Stack_70 = _Stack_b8;
              local_a8._32_8_ = local_d0._0_8_;
              pIStack_80 = (Il2CppType *)local_d0._8_8_;
              while (__this_17.fields._index._0_1_ = in_stack_fffffffffffffef0,
                    __this_17.fields._list =
                         (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8,
                    __this_17.fields._9_7_ = in_stack_fffffffffffffef1,
                    __this_17.fields._current._0_4_ = in_stack_fffffffffffffef8,
                    __this_17.fields._current._4_4_ = uVar32,
                    bVar10 = System_Collections_Generic_List_Enumerator<KeyValuePair<object__object>>__MoveNext
                                       (__this_17,(MethodInfo_3176CF0 *)(local_a8 + 0x20)),
                    (char)bVar10 != '\0') {
                pIVar24 = (Il2CppObject *)
                          il2cpp_glue_03c129b0((MethodInfo_3176CF0 *)(local_a8 + 0x20),MethodInfo_KeyValuePair_2_System_String_GameManagers_ChatMa);
                if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                lVar15 = MethodInfo_Void_Add;
                pSVar16 = *(System_Collections_Generic_List_object__o **)
                           (*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x18);
                if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                piVar1 = &(pSVar16->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar21 = (pSVar16->fields)._items;
                if (pSVar21 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                uVar13 = (pSVar16->fields)._size;
                if (uVar13 < (uint)pSVar21->max_length) {
                  (pSVar16->fields)._size = uVar13 + 1;
                  pSVar21->m_Items[(int)uVar13] = pIVar24;
                  il2cpp_runtime_glue(pSVar21->m_Items + (int)uVar13,pIVar24);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            (pSVar16,pIVar24,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
              }
              __this_18.fields._index._0_1_ = in_stack_fffffffffffffef0;
              __this_18.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8;
              __this_18.fields._9_7_ = in_stack_fffffffffffffef1;
              __this_18.fields._current._0_4_ = in_stack_fffffffffffffef8;
              __this_18.fields._current._4_4_ = uVar32;
              System_Collections_Generic_List_Enumerator<KeyValuePair<object__object>>__Dispose
                        (__this_18,(MethodInfo_3176CE0 *)(local_a8 + 0x20));
              iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
              goto joined_r0x0421fc31;
            }
          }
        }
      }
      else {
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        if (*(System_Collections_Generic_Dictionary_object__object__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x70) ==
            (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar10 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                           (*(System_Collections_Generic_Dictionary_object__object__o **)
                             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x70),(Il2CppObject *)pSVar14,
                            &local_68.genericMethod,MethodInfo_Boolean_TryGetValue);
        if ((char)bVar10 != '\0') {
          if (local_68.genericMethod == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (*(int *)((long)local_68.genericMethod + 0x40) == 1) {
            pSVar14 = System_String__Substring(input,iVar11 + 1,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar10 = System_String__op_Inequality
                               (pSVar14,(System_String_o *)**(undefined8 **)(TypeInfo_SuggestionState + 0xb8),
                                (MethodInfo *)0x0);
            if ((char)bVar10 != '\0') {
              if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
                il2cpp_init_class();
              }
              lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
              if (*(char *)(lVar15 + 0x28) == '\0') {
                if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
                  il2cpp_init_class();
                  lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
                }
                if (*(char *)(lVar15 + 0x38) == '\0') {
                  pMVar29 = TypeInfo_ChatManager;
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    il2cpp_init_class();
                  }
                  GameManagers_ChatManager__ClearLastSuggestions(pMVar29);
                  if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  **(undefined8 **)(TypeInfo_SuggestionState + 0xb8) = pSVar14;
                  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_SuggestionState + 0xb8));
                  lVar23 = TypeInfo_SuggestionState;
                  lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
                  *(undefined8 *)(lVar15 + 0x20) = 0x3ffffffff;
                  *(undefined1 *)(lVar15 + 0x28) = 0;
                  iVar12 = (input->fields)._stringLength;
                  if (DAT_057050da == '\0') {
                    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
                    DAT_057050da = '\x01';
                    lVar23 = TypeInfo_SuggestionState;
                  }
                  if (*(int *)(lVar23 + 0xe4) == 0) {
                    il2cpp_init_class();
                    lVar23 = TypeInfo_SuggestionState;
                  }
                  lVar15 = *(long *)(lVar23 + 0xb8);
                  *(System_String_o **)(lVar15 + 8) = pSVar14;
                  pSVar20 = pSVar14;
                  il2cpp_runtime_glue(lVar15 + 8,pSVar14);
                  lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
                  *(int32_t *)(lVar15 + 0x10) = iVar11 + 1;
                  *(int32_t *)(lVar15 + 0x14) = iVar12;
                  pSVar16 = (System_Collections_Generic_List_object__o *)
                            il2cpp_runtime_glue(TypeInfo_List_Player);
                  System_Collections_Generic_List<object>___ctor(pSVar16,MethodInfo_List_1_Photon_Realtime_Player);
                  if (pSVar14 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pSVar17 = System_String__ToLower(pSVar14,(MethodInfo *)0x0);
                  in_stack_fffffffffffffef0 = (byte)pSVar17;
                  in_stack_fffffffffffffef1 = (undefined7)((ulong)pSVar17 >> 8);
                  pSVar18 = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_char__bool);
                  System_Func<char__bool>___ctor();
                  bVar10 = System_Linq_Enumerable__All<char>
                                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar14,
                                      pSVar18,MethodInfo_Boolean_All_Char);
                  local_d8 = (System_Collections_Generic_List_Enumerator_T__c *)
                             CONCAT71(local_d8._1_7_,(char)bVar10);
                  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pPVar19 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
                  uVar33 = 0;
                  if (pPVar19 == (Photon_Realtime_Player_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  uVar13 = (uint)pPVar19->max_length;
                  if (0 < (int)uVar13) {
                    if (uVar13 != 0) {
                      do {
                        pPVar5 = pPVar19->m_Items[(int)uVar33];
                        if ((char)local_d8 == '\0') {
                          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          pSVar14 = PhotonExtensions__GetStringProperty
                                              (pPVar5,(System_String_o *)
                                                      **(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                                               "",(MethodInfo *)0x0);
                          if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          pSVar14 = Anticheat_ChatFilter__FilterSizeTag(pSVar14,(MethodInfo *)0x0);
                          if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          pSVar14 = MiscExtensions__StripRichText(pSVar14,(MethodInfo *)0x0);
                          if (pSVar14 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            il2cpp_raise_exception();
                          }
                          pSVar14 = System_String__ToLower(pSVar14,(MethodInfo *)0x0);
                          bVar10 = System_String__IsNullOrEmpty(pSVar20,(MethodInfo *)0x0);
                          if ((char)bVar10 == '\0') {
                            if (pSVar14 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            bVar10 = System_String__Contains
                                               (pSVar14,(System_String_o *)
                                                        CONCAT71(in_stack_fffffffffffffef1,
                                                                 in_stack_fffffffffffffef0),
                                                (MethodInfo *)0x0);
                            if ((char)bVar10 == '\0') goto LAB_0421f4c3;
                          }
                          lVar15 = MethodInfo_Void_Add;
                          if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            il2cpp_raise_exception();
                          }
                          piVar1 = &(pSVar16->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar21 = (pSVar16->fields)._items;
                          if (pSVar21 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                            il2cpp_raise_exception();
                          }
LAB_0421f651:
                          uVar13 = (pSVar16->fields)._size;
                          if (uVar13 < (uint)pSVar21->max_length) {
                            (pSVar16->fields)._size = uVar13 + 1;
                            pSVar21->m_Items[(int)uVar13] = (Il2CppObject *)pPVar5;
                            il2cpp_runtime_glue(pSVar21->m_Items + (int)uVar13);
                          }
                          else {
                            System_Collections_Generic_List<object>__AddWithResize
                                      (pSVar16,(Il2CppObject *)pPVar5,
                                       *(MethodInfo_35A7350 **)
                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                        else {
                          bVar10 = System_String__IsNullOrEmpty(pSVar20,(MethodInfo *)0x0);
                          if ((char)bVar10 != '\0') {
LAB_0421f539:
                            lVar15 = MethodInfo_Void_Add;
                            if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            piVar1 = &(pSVar16->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pSVar21 = (pSVar16->fields)._items;
                            if (pSVar21 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            goto LAB_0421f651;
                          }
                          if (pPVar5 == (Photon_Realtime_Player_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            il2cpp_raise_exception();
                          }
                          local_dc = (pPVar5->fields).actorNumber;
                          pSVar14 = System_Int32__ToString((int32_t)&local_dc,(MethodInfo *)0x0);
                          if (pSVar14 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            il2cpp_raise_exception();
                          }
                          bVar10 = System_String__StartsWith(pSVar14,pSVar20,(MethodInfo *)0x0);
                          if ((char)bVar10 != '\0') goto LAB_0421f539;
                        }
LAB_0421f4c3:
                        uVar33 = uVar33 + 1;
                        uVar13 = (uint)pPVar19->max_length;
                        if ((int)uVar13 <= (int)uVar33) goto LAB_0421fcc9;
                      } while (uVar33 < uVar13);
                    }
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
LAB_0421fcc9:
                  pMVar29 = (MethodInfo *)(ulong)uVar13;
                  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                    il2cpp_init_class();
                    pSVar28 = *(System_Comparison_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
                  }
                  else {
                    pSVar28 = *(System_Comparison_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
                  }
                  if (pSVar28 == (System_Comparison_T__o *)0x0) {
                    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    pSVar28 = (System_Comparison_T__o *)il2cpp_runtime_glue(TypeInfo_Comparison_Player);
                    pMVar29 = (MethodInfo *)0x0;
                    System_Comparison<object>___ctor();
                    lVar15 = *(long *)(TypeInfo_c + 0xb8);
                    *(System_Comparison_T__o **)(lVar15 + 0x28) = pSVar28;
                    il2cpp_runtime_glue(lVar15 + 0x28,pSVar28);
                  }
                  if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  System_Collections_Generic_List<object>__Sort(pSVar16,pSVar28,MethodInfo_Void_Sort);
                  if (0 < (pSVar16->fields)._size) {
                    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                      il2cpp_init_class();
                    }
                    pSVar14 = GameManagers_ChatManager__GetColorString("Matching players:",3,0,pMVar29);
                    GameManagers_ChatManager__AddLine
                              (pSVar14,3,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,1,0,-1,0,
                               in_stack_fffffffffffffed8);
                    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    pSVar25 = *(System_Func_TSource__TResult__o **)
                               (*(long *)(TypeInfo_c + 0xb8) + 0x30);
                    if (pSVar25 == (System_Func_TSource__TResult__o *)0x0) {
                      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      pSVar25 = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_Player__string);
                      System_Func<object__object>___ctor();
                      lVar15 = *(long *)(TypeInfo_c + 0xb8);
                      *(System_Func_TSource__TResult__o **)(lVar15 + 0x30) = pSVar25;
                      il2cpp_runtime_glue(lVar15 + 0x30,pSVar25);
                    }
                    pSVar26 = System_Linq_Enumerable__Select<object__object>
                                        ((System_Collections_Generic_IEnumerable_TSource__o *)
                                         pSVar16,pSVar25,MethodInfo_IEnumerable_1_System_String__Select_Player_Strin);
                    pMVar29 = MethodInfo_List_1_System_String__ToList_String;
                    pSVar27 = (System_Collections_Generic_List_string__o *)
                              System_Linq_Enumerable__ToList<object>
                                        ((System_Collections_Generic_IEnumerable_TSource__o *)
                                         pSVar26,(MethodInfo_24E20A0 *)MethodInfo_List_1_System_String__ToList_String);
                    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                      il2cpp_init_class();
                    }
                    GameManagers_ChatManager__ShowCommandSuggestions(pSVar27,pMVar29);
                    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    lVar15 = *(long *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x18);
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                    iVar11 = *(int32_t *)(lVar15 + 0x18);
                    *(undefined4 *)(lVar15 + 0x18) = 0;
                    if (0 < iVar11) {
                      System_Array__Clear(*(System_Array_o **)(lVar15 + 0x10),0,iVar11,
                                          (MethodInfo *)0x0);
                    }
                    System_Collections_Generic_List<object>__GetEnumerator
                              ((System_Collections_Generic_List_Enumerator_T__o *)local_d0,pSVar16,
                               MethodInfo_List_1_T__Enumerator_Photon_Realtime_Player__Get);
                    local_a8._16_8_ = local_c0;
                    local_a8._0_8_ = local_d0._0_8_;
                    local_a8._8_8_ = local_d0._8_8_;
                    while (__this_19.fields._index._0_1_ = in_stack_fffffffffffffef0,
                          __this_19.fields._list =
                               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8,
                          __this_19.fields._9_7_ = in_stack_fffffffffffffef1,
                          __this_19.fields._current._0_4_ = in_stack_fffffffffffffef8,
                          __this_19.fields._current._4_4_ = uVar33,
                          bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                             (__this_19,(MethodInfo_3185E20 *)local_a8),
                          uVar9 = local_a8._16_8_, (char)bVar10 != '\0') {
                      if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      if ((Il2CppRGCTXData *)uVar9 == (Il2CppRGCTXData *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      pSVar16 = *(System_Collections_Generic_List_object__o **)
                                 (*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x18);
                      uVar33 = *(uint *)(uVar9 + 0x18);
                      pSVar14 = System_Int32__ToString
                                          ((int32_t)&stack0xfffffffffffffefc,(MethodInfo *)0x0);
                      lVar15 = MethodInfo_Void_Add;
                      if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      piVar1 = &(pSVar16->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar21 = (pSVar16->fields)._items;
                      if (pSVar21 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      uVar13 = (pSVar16->fields)._size;
                      if (uVar13 < (uint)pSVar21->max_length) {
                        (pSVar16->fields)._size = uVar13 + 1;
                        pSVar21->m_Items[(int)uVar13] = (Il2CppObject *)pSVar14;
                        il2cpp_runtime_glue(pSVar21->m_Items + (int)uVar13,pSVar14);
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  (pSVar16,(Il2CppObject *)pSVar14,
                                   *(MethodInfo_35A7350 **)
                                    (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                    goto LAB_04220da7;
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
  }
  else {
    if (*(int *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x24) != 2) goto LAB_0421e442;
LAB_0421e361:
    if (input == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar10 = System_String__Contains(input,"@",(MethodInfo *)0x0);
    if (((char)bVar10 == '\0') ||
       (iVar11 = System_String__LastIndexOf(input,0x40,(MethodInfo *)0x0), iVar11 < 0))
    goto LAB_0421e442;
    pSVar14 = System_String__Substring(input,iVar11 + 1,(MethodInfo *)0x0);
    if (pSVar14 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar10 = System_String__Contains(pSVar14,0x20,(MethodInfo *)0x0);
    if (((char)bVar10 != '\0') ||
       (bVar10 = System_String__Contains(pSVar14,9,(MethodInfo *)0x0), (char)bVar10 != '\0')) {
      if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (*(char *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x38) != '\0') {
        return;
      }
      pMVar29 = TypeInfo_ChatManager;
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_ChatManager__ClearLastSuggestions(pMVar29);
      return;
    }
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar10 = System_String__IsNullOrEmpty
                       ((System_String_o *)**(undefined8 **)(TypeInfo_SuggestionState + 0xb8),(MethodInfo *)0x0)
    ;
    if ((char)bVar10 != '\0') goto LAB_0421e442;
    iVar3 = (pSVar14->fields)._stringLength;
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar20 = (System_String_o *)**(long **)(TypeInfo_SuggestionState + 0xb8);
    if (pSVar20 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSVar20->fields)._stringLength <= iVar3) goto LAB_0421e442;
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar20 = (System_String_o *)**(long **)(TypeInfo_SuggestionState + 0xb8);
      if (pSVar20 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    bVar10 = System_String__StartsWith(pSVar20,pSVar14,5,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') goto LAB_0421e442;
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
      il2cpp_init_class();
    }
    *(undefined1 *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x28) = 0;
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) != 0) goto LAB_0421e452;
LAB_0421e8a0:
    il2cpp_init_class();
    if (*(int *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x24) != 1) goto LAB_0421e8b9;
LAB_0421e463:
    if (input == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar10 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') goto LAB_0421e8b9;
    iVar11 = System_String__IndexOf(input,0x20,(MethodInfo *)0x0);
    if (0 < iVar11) {
      pSVar14 = System_String__Substring(input,1,iVar11 + -1,(MethodInfo *)0x0);
      if (pSVar14 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar14 = System_String__ToLower(pSVar14,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      if (*(System_Collections_Generic_Dictionary_object__object__o **)
           (TypeInfo_ChatManager[2].virtualMethodPointer + 0x70) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar10 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                         (*(System_Collections_Generic_Dictionary_object__object__o **)
                           (TypeInfo_ChatManager[2].virtualMethodPointer + 0x70),(Il2CppObject *)pSVar14,
                          (Il2CppObject **)&local_60,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar10 == '\0') {
        if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (*(char *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x38) != '\0') {
          return;
        }
        pMVar29 = TypeInfo_ChatManager;
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        GameManagers_ChatManager__ClearLastSuggestions(pMVar29);
        return;
      }
      if (local_60 == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(int *)&local_60[4].data == 0) {
        if (*(long *)&local_60[3].bits == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (*(long *)(*(long *)&local_60[3].bits + 0x18) == 0) {
          if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (*(char *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x38) != '\0') {
            return;
          }
          pMVar29 = TypeInfo_ChatManager;
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            il2cpp_init_class();
          }
          GameManagers_ChatManager__ClearLastSuggestions(pMVar29);
          return;
        }
      }
      goto LAB_0421e8b9;
    }
    pSVar14 = System_String__Substring(input,1,(MethodInfo *)0x0);
    if (pSVar14 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar14 = System_String__ToLower(pSVar14,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar10 = System_String__IsNullOrEmpty
                       ((System_String_o *)**(undefined8 **)(TypeInfo_SuggestionState + 0xb8),(MethodInfo *)0x0)
    ;
    if ((char)bVar10 != '\0') goto LAB_0421e8b9;
    if (pSVar14 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar3 = (pSVar14->fields)._stringLength;
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar20 = (System_String_o *)**(long **)(TypeInfo_SuggestionState + 0xb8);
    if (pSVar20 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSVar20->fields)._stringLength <= iVar3) goto LAB_0421e8b9;
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar20 = (System_String_o *)**(long **)(TypeInfo_SuggestionState + 0xb8);
      if (pSVar20 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    bVar10 = System_String__StartsWith(pSVar20,pSVar14,5,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') goto LAB_0421e8b9;
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
      il2cpp_init_class();
    }
    *(undefined1 *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x28) = 0;
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) goto LAB_0421e9ed;
LAB_0421e8c9:
    lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
    if (*(int *)(lVar15 + 0x24) != 3) goto LAB_0421ea21;
LAB_0421e8da:
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
      il2cpp_init_class();
      if (*(char *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x28) != '\0') goto LAB_0421e8f1;
      goto LAB_0421ea21;
    }
    if (*(char *)(lVar15 + 0x28) == '\0') goto LAB_0421ea21;
LAB_0421e8f1:
    if (input == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar10 = System_String__StartsWith(input,"/",(MethodInfo *)0x0);
    if (((char)bVar10 == '\0') ||
       (iVar11 = System_String__IndexOf(input,0x20,(MethodInfo *)0x0), iVar11 == -1))
    goto LAB_0421ea21;
    pSVar14 = System_String__Substring(input,iVar11 + 1,(MethodInfo *)0x0);
    if (pSVar14 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar3 = (pSVar14->fields)._stringLength;
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (**(long **)(TypeInfo_SuggestionState + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((iVar3 < *(int *)(**(long **)(TypeInfo_SuggestionState + 0xb8) + 0x10)) ||
       (bVar10 = System_String__EndsWith(pSVar14," ",(MethodInfo *)0x0),
       (char)bVar10 != '\0')) {
      if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
        il2cpp_init_class();
        if (*(char *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x38) == '\0') goto LAB_0421ee09;
LAB_0421e9b5:
        iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
      }
      else {
        if (*(char *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x38) != '\0') goto LAB_0421e9b5;
LAB_0421ee09:
        pMVar29 = TypeInfo_ChatManager;
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        GameManagers_ChatManager__ClearLastSuggestions(pMVar29);
        iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
      }
      if (iVar3 == 0) {
        il2cpp_init_class();
      }
      **(undefined8 **)(TypeInfo_SuggestionState + 0xb8) = "##FORCE_REFRESH##";
      il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_SuggestionState + 0xb8));
      goto LAB_0421ea70;
    }
    iVar3 = *(int *)(TypeInfo_SuggestionState + 0xe4);
  }
joined_r0x0421fc31:
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  lVar15 = *(long *)(TypeInfo_SuggestionState + 0xb8);
LAB_0421ea52:
  *(undefined1 *)(lVar15 + 0x28) = 0;
  return;
code_r0x0421e184:
  bVar10 = System_String__Equals(pSVar14,(System_String_o *)pIVar8,5,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') goto LAB_0421e2cc;
  goto LAB_0421e170;
}


// GameManagers.ChatManager$$ShowCommandSuggestions
// il2cpp: void GameManagers_ChatManager__ShowCommandSuggestions (System_Collections_Generic_List_string__o* suggestions, const MethodInfo* method);
// 0x4221810

void GameManagers_ChatManager__ShowCommandSuggestions
               (System_Collections_Generic_List_string__o *suggestions,MethodInfo *method)

{
  int iVar1;
  undefined8 in_RAX;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppObject *arg0;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  int index;
  MethodInfo *in_stack_ffffffffffffffb8;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (DAT_057050c0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    il2cpp_init_method_metadata(&"> ");
    il2cpp_init_method_metadata(&"<link=\"suggestion_{0}\">{1}</link>");
    il2cpp_init_method_metadata(&" <");
    DAT_057050c0 = '\x01';
  }
  if (suggestions != (System_Collections_Generic_List_string__o *)0x0) {
    if (0 < (suggestions->fields)._size) {
      index = 0;
      iVar1 = *(int *)(TypeInfo_SuggestionState + 0xe4);
      while( true ) {
        if (iVar1 == 0) {
          il2cpp_init_class();
        }
        method_00 = (MethodInfo *)&MethodInfo_String_get_Item;
        iVar1 = *(int *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x20);
        pSVar2 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)suggestions,index,
                            MethodInfo_String_get_Item);
        if (index == iVar1) {
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          str0 = GameManagers_ChatManager__GetColorString("> ",2,0,method_00);
          str2 = GameManagers_ChatManager__GetColorString(" <",2,0,method_00);
          pSVar2 = System_String__Concat(str0,pSVar2,str2,(MethodInfo *)0x0);
        }
        uStack_38 = CONCAT44(index,(undefined4)uStack_38);
        arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_38 + 4);
        pSVar2 = System_String__Format("<link=\"suggestion_{0}\">{1}</link>",arg0,(Il2CppObject *)pSVar2,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        GameManagers_ChatManager__AddLine
                  (pSVar2,0,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,1,0,-1,0,
                   in_stack_ffffffffffffffb8);
        index = index + 1;
        if ((suggestions->fields)._size <= index) break;
        iVar1 = *(int *)(TypeInfo_SuggestionState + 0xe4);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$HandleTabComplete
// il2cpp: void GameManagers_ChatManager__HandleTabComplete (const MethodInfo* method);
// 0x4221a00

void GameManagers_ChatManager__HandleTabComplete(MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  char cVar1;
  bool_conflict bVar2;
  int iVar3;
  UI_ChatPanel_o *__this_00;
  System_String_o *__this_01;
  System_String_o *suggestion;
  MethodInfo *newText;
  Il2CppMethodPointer pIVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar5;
  MethodInfo *method_00;
  
  if (DAT_057050c1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    il2cpp_init_method_metadata(&"/");
    DAT_057050c1 = '\x01';
    if (*(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4) == 0) goto LAB_04221b53;
LAB_04221a30:
    bVar2 = GameManagers_ChatManager_SuggestionState__get_IsActive(TypeInfo_SuggestionState);
    cVar1 = (char)bVar2;
    pMVar5 = TypeInfo_ChatManager;
  }
  else {
    if (*(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4) != 0) goto LAB_04221a30;
LAB_04221b53:
    pMVar5 = TypeInfo_SuggestionState;
    il2cpp_init_class();
    bVar2 = GameManagers_ChatManager_SuggestionState__get_IsActive(pMVar5);
    cVar1 = (char)bVar2;
    pMVar5 = TypeInfo_ChatManager;
  }
  if (cVar1 == '\0') {
    TypeInfo_ChatManager = pMVar5;
    return;
  }
  TypeInfo_ChatManager = pMVar5;
  if (*(int *)((long)&pMVar5[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = GameManagers_ChatManager__GetChatPanel(pMVar5);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar2 != '\0') {
    return;
  }
  if ((__this_00 != (UI_ChatPanel_o *)0x0) &&
     (__this_01 = UI_ChatPanel__GetInputText(__this_00,(MethodInfo *)0x0),
     __this_01 != (System_String_o *)0x0)) {
    bVar2 = System_String__StartsWith(__this_01,"/",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4) == 0) {
        il2cpp_init_class();
        iVar3 = *(int *)(TypeInfo_SuggestionState[2].virtualMethodPointer + 0x24);
      }
      else {
        iVar3 = *(int *)(TypeInfo_SuggestionState[2].virtualMethodPointer + 0x24);
      }
      if (iVar3 == 2) goto LAB_04221d8c;
    }
    bVar2 = System_String__StartsWith(__this_01,"/",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (*(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4) == 0) {
        il2cpp_init_class();
        iVar3 = *(int *)(TypeInfo_SuggestionState[2].virtualMethodPointer + 0x24);
      }
      else {
        iVar3 = *(int *)(TypeInfo_SuggestionState[2].virtualMethodPointer + 0x24);
      }
      if (iVar3 == 1) {
LAB_04221d8c:
        pMVar5 = TypeInfo_ChatManager;
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        GameManagers_ChatManager__ClearLastSuggestions(pMVar5);
        return;
      }
      if (*(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4) == 0) {
        il2cpp_init_class();
        iVar3 = *(int *)(TypeInfo_SuggestionState[2].virtualMethodPointer + 0x24);
      }
      if (iVar3 == 3) goto LAB_04221d8c;
    }
    if (*(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    pMVar5 = TypeInfo_SuggestionState;
    pIVar4 = TypeInfo_SuggestionState[2].virtualMethodPointer;
    iVar3 = *(int *)(pIVar4 + 0x20);
    *(int *)(pIVar4 + 0x20) = iVar3 + 1;
    if (*(long *)(pIVar4 + 0x18) != 0) {
      if (iVar3 + 1 < *(int *)(*(long *)(pIVar4 + 0x18) + 0x18)) {
        iVar3 = *(int *)((long)&pMVar5[2].parameters + 4);
      }
      else {
        if (*(int *)((long)&pMVar5[2].parameters + 4) == 0) {
          il2cpp_init_class();
          pIVar4 = TypeInfo_SuggestionState[2].virtualMethodPointer;
          pMVar5 = TypeInfo_SuggestionState;
        }
        *(undefined4 *)(pIVar4 + 0x20) = 0;
        iVar3 = *(int *)((long)&pMVar5[2].parameters + 4);
      }
      if (iVar3 == 0) {
        il2cpp_init_class();
        pIVar4 = TypeInfo_SuggestionState[2].virtualMethodPointer;
        __this = *(System_Collections_Generic_List_object__o **)(pIVar4 + 0x18);
      }
      else {
        pIVar4 = pMVar5[2].virtualMethodPointer;
        __this = *(System_Collections_Generic_List_object__o **)(pIVar4 + 0x18);
      }
      if (__this != (System_Collections_Generic_List_object__o *)0x0) {
        suggestion = (System_String_o *)
                     System_Collections_Generic_List<object>__get_Item
                               (__this,*(int32_t *)(pIVar4 + 0x20),MethodInfo_String_get_Item);
        pMVar5 = extraout_RDX;
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
          pMVar5 = extraout_RDX_00;
        }
        newText = (MethodInfo *)
                  GameManagers_ChatManager__BuildCompletedText(__this_01,suggestion,pMVar5);
        bVar2 = System_String__IsNullOrEmpty
                          (*(System_String_o **)(TypeInfo_SuggestionState[2].virtualMethodPointer + 0x30),
                           (MethodInfo *)0x0);
        pMVar5 = extraout_RDX_01;
        if ((char)bVar2 != '\0') {
          if (*(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4) == 0) {
            il2cpp_init_class();
          }
          pIVar4 = TypeInfo_SuggestionState[2].virtualMethodPointer;
          *(undefined8 *)(pIVar4 + 0x30) = *(undefined8 *)pIVar4;
          il2cpp_runtime_glue(pIVar4 + 0x30);
          pMVar5 = extraout_RDX_02;
        }
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
          pMVar5 = extraout_RDX_03;
        }
        method_00 = newText;
        GameManagers_ChatManager__UpdatePartialTextAfterCompletion
                  ((System_String_o *)newText,suggestion,pMVar5);
        GameManagers_ChatManager__RefreshSuggestionDisplay(method_00);
        if (*(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        TypeInfo_SuggestionState[2].virtualMethodPointer[0x28] = (code)0x1;
        UI_ChatPanel__SetTextAndPositionCaret
                  (__this_00,(System_String_o *)newText,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$HandleSuggestionClick
// il2cpp: void GameManagers_ChatManager__HandleSuggestionClick (int32_t suggestionIndex, const MethodInfo* method);
// 0x4223520

void GameManagers_ChatManager__HandleSuggestionClick(int32_t suggestionIndex,MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  UnityEngine_MonoBehaviour_o *__this;
  char cVar2;
  Il2CppClass *__this_00;
  System_String_o *pSVar4;
  System_String_o *suggestion;
  Il2CppObject *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  bool_conflict bVar3;
  
  if (DAT_057050c2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    DAT_057050c2 = '\x01';
    if (*(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4) != 0) goto LAB_04223552;
LAB_042237d7:
    pMVar5 = TypeInfo_SuggestionState;
    il2cpp_init_class();
    bVar3 = GameManagers_ChatManager_SuggestionState__get_IsActive(pMVar5);
    cVar2 = (char)bVar3;
  }
  else {
    if (*(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4) == 0) goto LAB_042237d7;
LAB_04223552:
    bVar3 = GameManagers_ChatManager_SuggestionState__get_IsActive(TypeInfo_SuggestionState);
    cVar2 = (char)bVar3;
  }
  if ((-1 < suggestionIndex) && (cVar2 != '\0')) {
    if (*(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    if (*(long *)(TypeInfo_SuggestionState[2].virtualMethodPointer + 0x18) == 0) {
LAB_042237f8:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (suggestionIndex < *(int *)(*(long *)(TypeInfo_SuggestionState[2].virtualMethodPointer + 0x18) + 0x18)) {
      pMVar5 = TypeInfo_ChatManager;
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      __this_00 = (Il2CppClass *)GameManagers_ChatManager__GetChatPanel(pMVar5);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (__this_00 != (Il2CppClass *)0x0) {
          pSVar4 = UI_ChatPanel__GetInputText((UI_ChatPanel_o *)__this_00,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4) == 0) {
            il2cpp_init_class();
          }
          if (*(System_Collections_Generic_List_object__o **)
               (TypeInfo_SuggestionState[2].virtualMethodPointer + 0x18) !=
              (System_Collections_Generic_List_object__o *)0x0) {
            suggestion = (System_String_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   (*(System_Collections_Generic_List_object__o **)
                                     (TypeInfo_SuggestionState[2].virtualMethodPointer + 0x18),suggestionIndex,
                                    MethodInfo_String_get_Item);
            pMVar5 = extraout_RDX;
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              il2cpp_init_class();
              pMVar5 = extraout_RDX_00;
            }
            pSVar4 = GameManagers_ChatManager__BuildCompletedText(pSVar4,suggestion,pMVar5);
            bVar3 = System_String__IsNullOrEmpty
                              (*(System_String_o **)(TypeInfo_SuggestionState[2].virtualMethodPointer + 0x30),
                               (MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              if (*(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4) == 0) {
                il2cpp_init_class();
              }
              pIVar1 = TypeInfo_SuggestionState[2].virtualMethodPointer;
              *(undefined8 *)(pIVar1 + 0x30) = *(undefined8 *)pIVar1;
              il2cpp_runtime_glue(pIVar1 + 0x30);
            }
            if (*(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4) == 0) {
              il2cpp_init_class();
            }
            pIVar1 = TypeInfo_SuggestionState[2].virtualMethodPointer;
            *(int32_t *)(pIVar1 + 0x20) = suggestionIndex;
            pIVar1[0x28] = (code)0x1;
            pIVar1[0x38] = (code)0x1;
            pMVar5 = TypeInfo_ChatManager;
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              il2cpp_init_class();
            }
            GameManagers_ChatManager__RefreshSuggestionDisplay(pMVar5);
            UI_ChatPanel__SetTextAndPositionCaret
                      ((UI_ChatPanel_o *)__this_00,pSVar4,(MethodInfo *)0x0);
            __this = *(UnityEngine_MonoBehaviour_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x20);
            if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
              if (DAT_057050c3 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_ReactivateInputAfterClick_d__114);
                DAT_057050c3 = '\x01';
              }
              __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_ReactivateInputAfterClick_d__114);
              System_Object___ctor(__this_01,(MethodInfo *)0x0);
              *(undefined4 *)&__this_01[1].klass = 0;
              if (__this_01 != (Il2CppObject *)0x0) {
                __this_01[2].klass = __this_00;
                il2cpp_runtime_glue(__this_01 + 2,__this_00);
                UnityEngine_MonoBehaviour__StartCoroutine
                          (__this,(System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto LAB_042237f8;
      }
    }
  }
  return;
}


// GameManagers.ChatManager$$ReactivateInputAfterClick
// il2cpp: System_Collections_IEnumerator_o* GameManagers_ChatManager__ReactivateInputAfterClick (GameManagers_ChatManager_o* __this, UI_ChatPanel_o* chatPanel, const MethodInfo* method);
// 0x4223800

System_Collections_IEnumerator_o *
GameManagers_ChatManager__ReactivateInputAfterClick
          (GameManagers_ChatManager_o *__this,UI_ChatPanel_o *chatPanel,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057050c3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ReactivateInputAfterClick_d__114);
    DAT_057050c3 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_ReactivateInputAfterClick_d__114);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)chatPanel;
    il2cpp_runtime_glue(__this_00 + 2,chatPanel);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$BuildCompletedText
// il2cpp: System_String_o* GameManagers_ChatManager__BuildCompletedText (System_String_o* currentInput, System_String_o* suggestion, const MethodInfo* method);
// 0x4221ed0

System_String_o *
GameManagers_ChatManager__BuildCompletedText
          (System_String_o *currentInput,System_String_o *suggestion,MethodInfo *method)

{
  long lVar1;
  uint16_t uVar2;
  int iVar3;
  System_String_o *pSVar4;
  System_String_o *str0;
  int32_t length;
  
  if (DAT_057050c4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"@");
    il2cpp_init_method_metadata(&"");
    DAT_057050c4 = '\x01';
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) != 0) goto LAB_04221efa;
LAB_04221f78:
    il2cpp_init_class();
    lVar1 = *(long *)(TypeInfo_SuggestionState + 0xb8);
    iVar3 = *(int *)(lVar1 + 0x24);
    pSVar4 = "/";
  }
  else {
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) goto LAB_04221f78;
LAB_04221efa:
    lVar1 = *(long *)(TypeInfo_SuggestionState + 0xb8);
    iVar3 = *(int *)(lVar1 + 0x24);
    pSVar4 = "/";
  }
  "/" = pSVar4;
  if (iVar3 == 3) {
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (currentInput != (System_String_o *)0x0) {
      pSVar4 = System_String__Substring
                         (currentInput,0,*(int32_t *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x10),
                          (MethodInfo *)0x0);
      goto LAB_04221fc6;
    }
    goto LAB_042220e6;
  }
  if (iVar3 != 2) {
    if (iVar3 != 1) {
      return currentInput;
    }
LAB_04221fc6:
    pSVar4 = System_String__Concat(pSVar4,suggestion,(MethodInfo *)0x0);
    return pSVar4;
  }
  if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
    il2cpp_init_class();
    iVar3 = *(int *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x10);
    if (-1 < iVar3) goto LAB_04221fed;
LAB_0422202a:
    if (currentInput == (System_String_o *)0x0) {
LAB_042220e6:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x10);
    if (iVar3 < 0) goto LAB_0422202a;
LAB_04221fed:
    if (currentInput == (System_String_o *)0x0) goto LAB_042220e6;
    if ((iVar3 < (currentInput->fields)._stringLength) &&
       (uVar2 = System_String__get_Chars(currentInput,iVar3,(MethodInfo *)0x0), length = iVar3,
       uVar2 == 0x40)) goto LAB_04222050;
  }
  iVar3 = System_String__LastIndexOf(currentInput,0x40,(MethodInfo *)0x0);
  length = iVar3;
  if (iVar3 < 0) {
    return currentInput;
  }
LAB_04222050:
  do {
    iVar3 = iVar3 + 1;
    if (((currentInput->fields)._stringLength <= iVar3) ||
       (uVar2 = System_String__get_Chars(currentInput,iVar3,(MethodInfo *)0x0), uVar2 == 0x20))
    break;
    uVar2 = System_String__get_Chars(currentInput,iVar3,(MethodInfo *)0x0);
  } while (uVar2 != 9);
  str0 = System_String__Substring(currentInput,0,length,(MethodInfo *)0x0);
  pSVar4 = "";
  if (iVar3 < (currentInput->fields)._stringLength) {
    pSVar4 = System_String__Substring(currentInput,iVar3,(MethodInfo *)0x0);
  }
  pSVar4 = System_String__Concat(str0,"@",suggestion,pSVar4,(MethodInfo *)0x0);
  return pSVar4;
}


// GameManagers.ChatManager$$RefreshSuggestionDisplay
// il2cpp: void GameManagers_ChatManager__RefreshSuggestionDisplay (const MethodInfo* method);
// 0x4222240

void GameManagers_ChatManager__RefreshSuggestionDisplay(MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  bool_conflict bVar7;
  MethodInfo *pMVar8;
  long lVar9;
  System_Text_StringBuilder_o *pSVar10;
  System_String_o *pSVar11;
  Photon_Realtime_Room_o *pPVar12;
  Photon_Realtime_Player_o *pPVar13;
  Il2CppObject *pIVar14;
  System_String_o *pSVar15;
  UI_ChatPanel_o *__this_03;
  System_String_array *method_00;
  System_String_o **ppSVar16;
  ulong uVar17;
  int iVar18;
  MethodInfo *pMVar19;
  MethodInfo *in_stack_ffffffffffffff68;
  undefined8 in_stack_ffffffffffffff78;
  uint uVar20;
  uint uVar21;
  Il2CppObject *pIVar22;
  System_Collections_Generic_List_Enumerator_T__c *local_58;
  Il2CppType *local_50;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_057050c5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"Matching players:");
    il2cpp_init_method_metadata(&"[{0}]");
    il2cpp_init_method_metadata(&"");
    DAT_057050c5 = '\x01';
  }
  local_50 = (Il2CppType *)0x0;
  uVar21 = 0;
  uVar20 = 0;
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  if (*(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar18 = *(int *)(*(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) + 0x18);
  if (-1 < iVar18 + -1) {
    iVar18 = iVar18 + -2;
    iVar2 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    while( true ) {
      if (iVar2 == 0) {
        il2cpp_init_class();
      }
      if (*(System_Collections_Generic_List_bool__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x50)
          == (System_Collections_Generic_List_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar2 = iVar18 + 1;
      bVar7 = System_Collections_Generic_List<bool>__get_Item
                        (*(System_Collections_Generic_List_bool__o **)
                          (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50),iVar2,MethodInfo_Boolean_get_Item);
      if ((char)bVar7 != '\0') {
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        if (*(System_Collections_Generic_List_object__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) ==
            (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_List<object>__RemoveAt
                  (*(System_Collections_Generic_List_object__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28),iVar2,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_T__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x38)
            == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_List<Int32Enum>__RemoveAt
                  (*(System_Collections_Generic_List_T__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x38),iVar2,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_bool__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40) ==
            (System_Collections_Generic_List_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_List<bool>__RemoveAt
                  (*(System_Collections_Generic_List_bool__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40),iVar2,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_DateTime__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48) ==
            (System_Collections_Generic_List_DateTime__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_List<DateTime>__RemoveAt
                  (*(System_Collections_Generic_List_DateTime__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48),iVar2,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_int__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30) ==
            (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_List<int>__RemoveAt
                  (*(System_Collections_Generic_List_int__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30),iVar2,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_bool__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50) ==
            (System_Collections_Generic_List_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_List<bool>__RemoveAt
                  (*(System_Collections_Generic_List_bool__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50),iVar2,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_bool__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58) ==
            (System_Collections_Generic_List_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_List<bool>__RemoveAt
                  (*(System_Collections_Generic_List_bool__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58),iVar2,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_bool__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb0) ==
            (System_Collections_Generic_List_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_List<bool>__RemoveAt
                  (*(System_Collections_Generic_List_bool__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb0),iVar2,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_int__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8) ==
            (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_List<int>__RemoveAt
                  (*(System_Collections_Generic_List_int__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8),iVar2,MethodInfo_Void_RemoveAt);
      }
      if (iVar18 < 0) break;
      iVar18 = iVar18 + -1;
      iVar2 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    }
  }
  local_58 = "";
  pMVar8 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pMVar8,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
    il2cpp_init_class();
    lVar9 = *(long *)(TypeInfo_SuggestionState + 0xb8);
    method_00 = (System_String_array *)(ulong)*(uint *)(lVar9 + 0x24);
    if (*(uint *)(lVar9 + 0x24) == 3) goto LAB_042229b5;
LAB_04222629:
    pSVar6 = "Matching players:";
    if ((int)method_00 == 2) {
      if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
        il2cpp_init_class();
      }
      local_58 = pSVar6;
      pSVar5 = *(System_Collections_Generic_List_object__o **)
                (*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x18);
      if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_List<object>__GetEnumerator(&local_48,pSVar5,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
      pIVar22 = (Il2CppObject *)CONCAT44(local_48.fields._list._4_4_,(uint)local_48.fields._list);
      while (__this_01.fields._index = uVar20,
            __this_01.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78,
            __this_01.fields._version = uVar21, __this_01.fields._current = pIVar22,
            bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff88),
            (char)bVar7 != '\0') {
        bVar7 = System_Int32__TryParse
                          ((System_String_o *)local_48.fields._current,
                           (int32_t *)&stack0xffffffffffffff80,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pPVar12 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
          if (pPVar12 == (Photon_Realtime_Room_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          method_00 = (System_String_array *)(pPVar12->klass->vtable)._10_GetPlayer.method;
          pPVar13 = (Photon_Realtime_Player_o *)
                    (*(pPVar12->klass->vtable)._10_GetPlayer.methodPtr)(pPVar12,(ulong)uVar20,0);
          if (pPVar13 != (Photon_Realtime_Player_o *)0x0) {
            if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar11 = PhotonExtensions__GetStringProperty
                                (pPVar13,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                                 (System_String_o *)"",(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar11 = Anticheat_ChatFilter__FilterSizeTag(pSVar11,(MethodInfo *)0x0);
            local_48.fields._list._0_4_ = uVar20;
            pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_48);
            ppSVar16 = &"[{0}]";
            pSVar15 = System_String__Format("[{0}]",pIVar14,(MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              il2cpp_init_class();
            }
            pSVar15 = GameManagers_ChatManager__GetColorString(pSVar15,1,0,(MethodInfo *)ppSVar16);
            pSVar11 = System_String__Concat(pSVar15," ",pSVar11,(MethodInfo *)0x0);
            lVar9 = MethodInfo_Void_Add;
            if (pMVar8 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = (int32_t *)((long)&pMVar8->name + 4);
            *piVar1 = *piVar1 + 1;
            method_00 = ((System_Collections_Generic_List_string__Fields *)&pMVar8->invoker_method)
                        ->_items;
            if (method_00 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar3 = *(uint *)&pMVar8->name;
            if (uVar3 < (uint)method_00->max_length) {
              *(uint *)&pMVar8->name = uVar3 + 1;
              method_00->m_Items[(int)uVar3] = pSVar11;
              il2cpp_runtime_glue(method_00->m_Items + (int)uVar3,pSVar11);
            }
            else {
              method_00 = *(System_String_array **)(*(long *)(lVar9 + 0x20) + 0xc0);
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pMVar8,(Il2CppObject *)pSVar11
                         ,(MethodInfo_35A7350 *)method_00->m_Items[10]);
            }
          }
        }
      }
    }
    else {
      if ((int)method_00 != 1) goto LAB_042231d1;
      if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
        il2cpp_init_class();
        lVar9 = *(long *)(TypeInfo_SuggestionState + 0xb8);
      }
      if (*(System_Collections_Generic_List_object__o **)(lVar9 + 0x18) ==
          (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,*(System_Collections_Generic_List_object__o **)(lVar9 + 0x18),
                 MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
      pIVar22 = (Il2CppObject *)CONCAT44(local_48.fields._list._4_4_,(uint)local_48.fields._list);
      while (__this.fields._index = uVar20,
            __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78,
            __this.fields._version = uVar21, __this.fields._current = pIVar22,
            bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this,(MethodInfo_3185E20 *)&stack0xffffffffffffff88),
            (char)bVar7 != '\0') {
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        if (*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x88) ==
            (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Text_StringBuilder__Clear
                  (*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x88),
                   (MethodInfo *)0x0);
        if (*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x88) ==
            (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar10 = System_Text_StringBuilder__Append
                            (*(System_Text_StringBuilder_o **)
                              (TypeInfo_ChatManager[2].virtualMethodPointer + 0x88),0x2f,(MethodInfo *)0x0);
        if (pSVar10 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Text_StringBuilder__Append
                  (pSVar10,(System_String_o *)local_48.fields._current,(MethodInfo *)0x0);
        if (*(System_Collections_Generic_Dictionary_object__object__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x70) ==
            (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pMVar19 = MethodInfo_Boolean_TryGetValue;
        bVar7 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                          (*(System_Collections_Generic_Dictionary_object__object__o **)
                            (TypeInfo_ChatManager[2].virtualMethodPointer + 0x70),local_48.fields._current,
                           (Il2CppObject **)&local_50,(MethodInfo_308E3E0 *)MethodInfo_Boolean_TryGetValue);
        if ((char)bVar7 != '\0') {
          if (local_50 == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (*(long *)&local_50[3].bits == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (*(long *)(*(long *)&local_50[3].bits + 0x18) != 0) {
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              il2cpp_init_class();
            }
            if (*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x88) ==
                (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Text_StringBuilder__Append
                      (*(System_Text_StringBuilder_o **)
                        (TypeInfo_ChatManager[2].virtualMethodPointer + 0x88),0x20,(MethodInfo *)0x0);
            if (local_50 == (Il2CppType *)0x0) {
LAB_04222bde:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar17 = 0;
            while( true ) {
              if (*(long *)&local_50[3].bits == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if ((long)*(int *)(*(long *)&local_50[3].bits + 0x18) <= (long)uVar17) break;
              if (uVar17 != 0) {
                if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                  il2cpp_init_class();
                }
                if (*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x88)
                    == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                System_Text_StringBuilder__Append
                          (*(System_Text_StringBuilder_o **)
                            (TypeInfo_ChatManager[2].virtualMethodPointer + 0x88),0x20,(MethodInfo *)0x0);
              }
              if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                il2cpp_init_class();
              }
              if (*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x88) ==
                  (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pSVar10 = System_Text_StringBuilder__Append
                                  (*(System_Text_StringBuilder_o **)
                                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x88),0x5b,
                                   (MethodInfo *)0x0);
              if (local_50 == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pMVar19 = *(MethodInfo **)&local_50[3].bits;
              if (pMVar19 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if (*(uint *)&pMVar19->name <= uVar17) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if (pSVar10 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pSVar10 = System_Text_StringBuilder__Append
                                  (pSVar10,(System_String_o *)(&pMVar19->klass)[uVar17],
                                   (MethodInfo *)0x0);
              if (pSVar10 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Text_StringBuilder__Append(pSVar10,0x5d,(MethodInfo *)0x0);
              uVar17 = uVar17 + 1;
              if (local_50 == (Il2CppType *)0x0) goto LAB_04222bde;
            }
          }
        }
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        plVar4 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x88);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar11 = (System_String_o *)
                  (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        pSVar11 = GameManagers_ChatManager__GetColorString(pSVar11,2,0,pMVar19);
        lVar9 = MethodInfo_Void_Add;
        if (pMVar8 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = (int32_t *)((long)&pMVar8->name + 4);
        *piVar1 = *piVar1 + 1;
        method_00 = ((System_Collections_Generic_List_string__Fields *)&pMVar8->invoker_method)->
                    _items;
        if (method_00 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar3 = *(uint *)&pMVar8->name;
        if (uVar3 < (uint)method_00->max_length) {
          *(uint *)&pMVar8->name = uVar3 + 1;
          method_00->m_Items[(int)uVar3] = pSVar11;
          il2cpp_runtime_glue(method_00->m_Items + (int)uVar3,pSVar11);
        }
        else {
          method_00 = *(System_String_array **)(*(long *)(lVar9 + 0x20) + 0xc0);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pMVar8,(Il2CppObject *)pSVar11,
                     (MethodInfo_35A7350 *)method_00->m_Items[10]);
        }
      }
    }
  }
  else {
    lVar9 = *(long *)(TypeInfo_SuggestionState + 0xb8);
    method_00 = (System_String_array *)(ulong)*(uint *)(lVar9 + 0x24);
    if (*(uint *)(lVar9 + 0x24) != 3) goto LAB_04222629;
LAB_042229b5:
    local_58 = "Matching players:";
    if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x18);
    if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<object>__GetEnumerator(&local_48,pSVar5,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    pIVar22 = (Il2CppObject *)CONCAT44(local_48.fields._list._4_4_,(uint)local_48.fields._list);
    while (__this_00.fields._index = uVar20,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78
          , __this_00.fields._version = uVar21, __this_00.fields._current = pIVar22,
          bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff88),
          (char)bVar7 != '\0') {
      bVar7 = System_Int32__TryParse
                        ((System_String_o *)local_48.fields._current,
                         (int32_t *)&stack0xffffffffffffff84,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pPVar12 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        if (pPVar12 == (Photon_Realtime_Room_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        method_00 = (System_String_array *)(pPVar12->klass->vtable)._10_GetPlayer.method;
        pPVar13 = (Photon_Realtime_Player_o *)
                  (*(pPVar12->klass->vtable)._10_GetPlayer.methodPtr)(pPVar12,(ulong)uVar21,0);
        if (pPVar13 != (Photon_Realtime_Player_o *)0x0) {
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar11 = PhotonExtensions__GetStringProperty
                              (pPVar13,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                               (System_String_o *)"",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar11 = Anticheat_ChatFilter__FilterSizeTag(pSVar11,(MethodInfo *)0x0);
          local_48.fields._list._0_4_ = uVar21;
          pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_48);
          ppSVar16 = &"[{0}]";
          pSVar15 = System_String__Format("[{0}]",pIVar14,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            il2cpp_init_class();
          }
          pSVar15 = GameManagers_ChatManager__GetColorString(pSVar15,1,0,(MethodInfo *)ppSVar16);
          pSVar11 = System_String__Concat(pSVar15," ",pSVar11,(MethodInfo *)0x0);
          lVar9 = MethodInfo_Void_Add;
          if (pMVar8 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          piVar1 = (int32_t *)((long)&pMVar8->name + 4);
          *piVar1 = *piVar1 + 1;
          method_00 = ((System_Collections_Generic_List_string__Fields *)&pMVar8->invoker_method)->
                      _items;
          if (method_00 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar3 = *(uint *)&pMVar8->name;
          if (uVar3 < (uint)method_00->max_length) {
            *(uint *)&pMVar8->name = uVar3 + 1;
            method_00->m_Items[(int)uVar3] = pSVar11;
            il2cpp_runtime_glue(method_00->m_Items + (int)uVar3,pSVar11);
          }
          else {
            method_00 = *(System_String_array **)(*(long *)(lVar9 + 0x20) + 0xc0);
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pMVar8,(Il2CppObject *)pSVar11,
                       (MethodInfo_35A7350 *)method_00->m_Items[10]);
          }
        }
      }
    }
  }
  __this_02.fields._index = uVar20;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
  __this_02.fields._version = uVar21;
  __this_02.fields._current = pIVar22;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff88);
LAB_042231d1:
  pMVar19 = (MethodInfo *)0x0;
  bVar7 = System_String__IsNullOrEmpty((System_String_o *)local_58,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    pSVar11 = GameManagers_ChatManager__GetColorString
                        ((System_String_o *)local_58,3,0,(MethodInfo *)method_00);
    pMVar19 = (MethodInfo *)0x3;
    GameManagers_ChatManager__AddLine
              (pSVar11,3,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,1,0,-1,0,
               in_stack_ffffffffffffff68);
  }
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_ChatManager__ShowCommandSuggestions
            ((System_Collections_Generic_List_string__o *)pMVar8,pMVar19);
  bVar7 = GameManagers_ChatManager__IsChatAvailable(pMVar8);
  if ((char)bVar7 != '\0') {
    pMVar8 = TypeInfo_ChatManager;
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    __this_03 = GameManagers_ChatManager__GetChatPanel(pMVar8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      if (__this_03 == (UI_ChatPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UI_ChatPanel__Sync(__this_03,(MethodInfo *)0x0);
    }
  }
  return;
}


// GameManagers.ChatManager$$ClearLastSuggestions
// il2cpp: void GameManagers_ChatManager__ClearLastSuggestions (const MethodInfo* method);
// 0x42213d0

void GameManagers_ChatManager__ClearLastSuggestions(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  char cVar3;
  bool_conflict bVar4;
  UI_ChatPanel_o *__this;
  MethodInfo *pMVar5;
  int iVar6;
  
  if (DAT_057050c6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    DAT_057050c6 = '\x01';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto LAB_042213ff;
LAB_04221731:
    il2cpp_init_class();
    lVar2 = *(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto LAB_04221731;
LAB_042213ff:
    lVar2 = *(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
  }
  if (lVar2 == 0) goto LAB_0422174d;
  if (-1 < *(int *)(lVar2 + 0x18) + -1) {
    iVar6 = *(int *)(lVar2 + 0x18) + -2;
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    while( true ) {
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      if (*(System_Collections_Generic_List_bool__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x50)
          == (System_Collections_Generic_List_bool__o *)0x0) goto LAB_0422174d;
      iVar1 = iVar6 + 1;
      bVar4 = System_Collections_Generic_List<bool>__get_Item
                        (*(System_Collections_Generic_List_bool__o **)
                          (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50),iVar1,MethodInfo_Boolean_get_Item);
      if ((char)bVar4 != '\0') {
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        if (*(System_Collections_Generic_List_object__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) ==
            (System_Collections_Generic_List_object__o *)0x0) goto LAB_0422174d;
        System_Collections_Generic_List<object>__RemoveAt
                  (*(System_Collections_Generic_List_object__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_T__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x38)
            == (System_Collections_Generic_List_T__o *)0x0) goto LAB_0422174d;
        System_Collections_Generic_List<Int32Enum>__RemoveAt
                  (*(System_Collections_Generic_List_T__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x38),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_bool__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40) ==
            (System_Collections_Generic_List_bool__o *)0x0) goto LAB_0422174d;
        System_Collections_Generic_List<bool>__RemoveAt
                  (*(System_Collections_Generic_List_bool__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_DateTime__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48) ==
            (System_Collections_Generic_List_DateTime__o *)0x0) goto LAB_0422174d;
        System_Collections_Generic_List<DateTime>__RemoveAt
                  (*(System_Collections_Generic_List_DateTime__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_int__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30) ==
            (System_Collections_Generic_List_int__o *)0x0) goto LAB_0422174d;
        System_Collections_Generic_List<int>__RemoveAt
                  (*(System_Collections_Generic_List_int__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_bool__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50) ==
            (System_Collections_Generic_List_bool__o *)0x0) goto LAB_0422174d;
        System_Collections_Generic_List<bool>__RemoveAt
                  (*(System_Collections_Generic_List_bool__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_bool__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58) ==
            (System_Collections_Generic_List_bool__o *)0x0) goto LAB_0422174d;
        System_Collections_Generic_List<bool>__RemoveAt
                  (*(System_Collections_Generic_List_bool__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_bool__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb0) ==
            (System_Collections_Generic_List_bool__o *)0x0) goto LAB_0422174d;
        System_Collections_Generic_List<bool>__RemoveAt
                  (*(System_Collections_Generic_List_bool__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb0),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_int__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8) ==
            (System_Collections_Generic_List_int__o *)0x0) goto LAB_0422174d;
        System_Collections_Generic_List<int>__RemoveAt
                  (*(System_Collections_Generic_List_int__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8),iVar1,MethodInfo_Void_RemoveAt);
      }
      if (iVar6 < 0) break;
      iVar6 = iVar6 + -1;
      iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    }
  }
  if (*(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4) == 0) {
    pMVar5 = TypeInfo_SuggestionState;
    il2cpp_init_class();
    GameManagers_ChatManager_SuggestionState__Clear(pMVar5);
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto LAB_04221628;
LAB_0422176c:
    pMVar5 = TypeInfo_ChatManager;
    il2cpp_init_class();
    bVar4 = GameManagers_ChatManager__IsChatAvailable(pMVar5);
    cVar3 = (char)bVar4;
    pMVar5 = TypeInfo_ChatManager;
  }
  else {
    GameManagers_ChatManager_SuggestionState__Clear(TypeInfo_SuggestionState);
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto LAB_0422176c;
LAB_04221628:
    bVar4 = GameManagers_ChatManager__IsChatAvailable(TypeInfo_ChatManager);
    cVar3 = (char)bVar4;
    pMVar5 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = pMVar5;
  if (cVar3 != '\0') {
    if (*(int *)((long)&pMVar5[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    __this = GameManagers_ChatManager__GetChatPanel(pMVar5);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      if (__this != (UI_ChatPanel_o *)0x0) {
        UI_ChatPanel__Sync(__this,(MethodInfo *)0x0);
        return;
      }
LAB_0422174d:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// GameManagers.ChatManager$$ForceSuggestionRefresh
// il2cpp: void GameManagers_ChatManager__ForceSuggestionRefresh (const MethodInfo* method);
// 0x42239f0

void GameManagers_ChatManager__ForceSuggestionRefresh(MethodInfo *method)

{
  if (DAT_057050c7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    il2cpp_init_method_metadata(&"##FORCE_REFRESH##");
    DAT_057050c7 = '\x01';
  }
  if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
    il2cpp_init_class();
  }
  **(undefined8 **)(TypeInfo_SuggestionState + 0xb8) = "##FORCE_REFRESH##";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_SuggestionState + 0xb8),"##FORCE_REFRESH##");
  return;
}


// GameManagers.ChatManager$$SendPrivateMessage
// il2cpp: void GameManagers_ChatManager__SendPrivateMessage (Photon_Realtime_Player_o* target, System_String_o* message, const MethodInfo* method);
// 0x42180d0

void GameManagers_ChatManager__SendPrivateMessage
               (Photon_Realtime_Player_o *target,System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *pSVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  MethodInfo *in_stack_ffffffffffffff98;
  System_DateTime_Fields local_50;
  int32_t local_48;
  int32_t local_44;
  int64_t local_40;
  int64_t local_38;
  
  if (DAT_057050c8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"Invalid private message target.");
    il2cpp_init_method_metadata(&"PrivateChatRPC");
    DAT_057050c8 = '\x01';
  }
  local_50._dateData = 0;
  if (target == (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__AddLine
              ("Invalid private message target.",4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
               in_stack_ffffffffffffff98);
    return;
  }
  pPVar1 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  targetPlayer = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  pSVar2 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
  if (pSVar2 == (System_Object_array *)0x0) goto LAB_042184a0;
  if ((message != (System_String_o *)0x0) &&
     (lVar3 = il2cpp_runtime_glue(message,(((pSVar2->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_042184a5:
    uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar5,0);
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = (Il2CppObject *)message;
    il2cpp_runtime_glue(pSVar2->m_Items,message);
    local_44 = (target->fields).actorNumber;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_44);
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (lVar3 = il2cpp_runtime_glue(pIVar4,(((pSVar2->obj).klass)->_1).element_class), lVar3 == 0))
    goto LAB_042184a5;
    if (1 < (uint)pSVar2->max_length) {
      pSVar2->m_Items[1] = pIVar4;
      il2cpp_runtime_glue(pSVar2->m_Items + 1);
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        il2cpp_init_class();
      }
      local_50._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
      local_38 = System_DateTime__get_Ticks((System_DateTime_o)&local_50,(MethodInfo *)0x0);
      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711088,&local_38);
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar3 = il2cpp_runtime_glue(pIVar4,(((pSVar2->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_042184a5;
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = pIVar4;
        il2cpp_runtime_glue(pSVar2->m_Items + 2,pIVar4);
        if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(pPVar1,"PrivateChatRPC",targetPlayer,pSVar2,(MethodInfo *)0x0);
          pPVar1 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
          pSVar2 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
          if (pSVar2 != (System_Object_array *)0x0) {
            if ((message != (System_String_o *)0x0) &&
               (lVar3 = il2cpp_runtime_glue(message,(((pSVar2->obj).klass)->_1).element_class),
               lVar3 == 0)) goto LAB_042184a5;
            if ((int)pSVar2->max_length != 0) {
              pSVar2->m_Items[0] = (Il2CppObject *)message;
              il2cpp_runtime_glue(pSVar2->m_Items,message);
              local_48 = (target->fields).actorNumber;
              pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_48);
              if ((pIVar4 != (Il2CppObject *)0x0) &&
                 (lVar3 = il2cpp_runtime_glue(pIVar4,(((pSVar2->obj).klass)->_1).element_class),
                 lVar3 == 0)) goto LAB_042184a5;
              if (1 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[1] = pIVar4;
                il2cpp_runtime_glue();
                local_50._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
                local_40 = System_DateTime__get_Ticks
                                     ((System_DateTime_o)&local_50,(MethodInfo *)0x0);
                pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711088,&local_40);
                if ((pIVar4 != (Il2CppObject *)0x0) &&
                   (lVar3 = il2cpp_runtime_glue(pIVar4,(((pSVar2->obj).klass)->_1).element_class),
                   lVar3 == 0)) goto LAB_042184a5;
                if (2 < (uint)pSVar2->max_length) {
                  pSVar2->m_Items[2] = pIVar4;
                  il2cpp_runtime_glue(pSVar2->m_Items + 2,pIVar4);
                  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
                    Photon_Pun_PhotonView__RPC(pPVar1,"PrivateChatRPC",target,pSVar2,(MethodInfo *)0x0);
                    return;
                  }
                  goto LAB_042184a0;
                }
              }
            }
            goto LAB_0421849b;
          }
        }
LAB_042184a0:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_0421849b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$OnPrivateChatRPC
// il2cpp: void GameManagers_ChatManager__OnPrivateChatRPC (System_String_o* message, int32_t targetID, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4223a60

void GameManagers_ChatManager__OnPrivateChatRPC
               (System_String_o *message,int32_t targetID,int64_t senderTimestamp,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  int senderID;
  int senderID_00;
  bool_conflict bVar1;
  Photon_Realtime_Player_o *pPVar2;
  Photon_Realtime_Room_o *pPVar3;
  System_String_array *pSVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  MethodInfo *pMVar7;
  UI_ChatPanel_o *pUVar8;
  System_String_o **ppSVar9;
  System_Nullable_DateTime__o __this;
  System_Nullable_DateTime__o __this_00;
  System_Nullable_DateTime__o timestamp;
  System_Nullable_DateTime__o timestamp_00;
  MethodInfo *in_stack_ffffffffffffff88;
  int local_5c;
  ulong local_58;
  System_DateTime_Fields SStack_50;
  System_DateTime_o local_48;
  System_String_o *local_40;
  System_String_o *local_38;
  
  if (DAT_057050c9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_DateTime);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"[{0}]");
    il2cpp_init_method_metadata(&"");
    DAT_057050c9 = '\x01';
  }
  local_48.fields._dateData = (System_DateTime_Fields)0;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((pPVar2 != (Photon_Realtime_Player_o *)0x0) &&
     (local_38 = message, info.fields.Sender != (Photon_Realtime_Player_o *)0x0)) {
    senderID = (pPVar2->fields).actorNumber;
    senderID_00 = ((info.fields.Sender)->fields).actorNumber;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_40 = PhotonExtensions__GetStringProperty
                         (info.fields.Sender,
                          (System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                          (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_DateTime___ctor((System_DateTime_o)&local_48,senderTimestamp,1,(MethodInfo *)0x0);
    if (senderID == senderID_00) {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pPVar3 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if (pPVar3 != (Photon_Realtime_Room_o *)0x0) {
        pPVar2 = (Photon_Realtime_Player_o *)
                 (*(pPVar3->klass->vtable)._10_GetPlayer.methodPtr)(pPVar3,targetID,0);
        if (pPVar2 == (Photon_Realtime_Player_o *)0x0) {
          return;
        }
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          il2cpp_init_class();
        }
        PhotonExtensions__GetStringProperty
                  (pPVar2,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                   (MethodInfo *)0x0);
        pSVar4 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
        local_5c = senderID;
        pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_5c);
        ppSVar9 = &"[{0}]";
        pSVar6 = System_String__Format("[{0}]",pIVar5,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar6 = GameManagers_ChatManager__GetColorString(pSVar6,1,0,(MethodInfo *)ppSVar9);
        if (pSVar4 != (System_String_array *)0x0) {
          if ((int)pSVar4->max_length != 0) {
            pSVar4->m_Items[0] = pSVar6;
            il2cpp_runtime_glue(pSVar4->m_Items,pSVar6);
            if (1 < (uint)pSVar4->max_length) {
              pSVar4->m_Items[1] = " ";
              il2cpp_runtime_glue(pSVar4->m_Items + 1);
              if (2 < (uint)pSVar4->max_length) {
                pSVar4->m_Items[2] = local_40;
                il2cpp_runtime_glue(pSVar4->m_Items + 2);
                if (3 < (uint)pSVar4->max_length) {
                  pSVar4->m_Items[3] = ": ";
                  il2cpp_runtime_glue(pSVar4->m_Items + 3);
                  pSVar6 = GameManagers_ChatManager__GetColorString
                                     (local_38,7,0,(MethodInfo *)ppSVar9);
                  if (4 < (uint)pSVar4->max_length) {
                    pSVar4->m_Items[4] = pSVar6;
                    il2cpp_runtime_glue(pSVar4->m_Items + 4);
                    pMVar7 = (MethodInfo *)System_String__Concat(pSVar4,(MethodInfo *)0x0);
                    local_58 = 0;
                    SStack_50._dateData = 0;
                    __this.fields.value.fields._dateData = local_48.fields._dateData;
                    __this.fields._0_8_ = &local_58;
                    System_Nullable<DateTime>___ctor
                              (__this,(System_DateTime_o)MethodInfo_Nullable_1_DateTime._dateData,
                               (MethodInfo_3756FA0 *)ppSVar9);
                    timestamp.fields._0_8_ = local_58 & 0xffffffff;
                    timestamp.fields.value.fields._dateData =
                         (System_DateTime_Fields)(System_DateTime_Fields)SStack_50._dateData;
                    GameManagers_ChatManager__AddLine
                              ((System_String_o *)pMVar7,0,0,timestamp,senderID,0,1,targetID,0,
                               in_stack_ffffffffffffff88);
                    pUVar8 = GameManagers_ChatManager__GetChatPanel(pMVar7);
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    bVar1 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if ((char)bVar1 == '\0') {
                      return;
                    }
                    if (pUVar8 != (UI_ChatPanel_o *)0x0) {
                      if ((char)(pUVar8->fields)._inPMMode != '\0') {
                        return;
                      }
                      UI_ChatPanel__EnterPMMode(pUVar8,pPVar2,(MethodInfo *)0x0);
                      return;
                    }
                    goto LAB_04224032;
                  }
                }
              }
            }
          }
          goto LAB_04224037;
        }
      }
    }
    else {
      if (senderID != targetID) {
        return;
      }
      pSVar4 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
      local_5c = senderID_00;
      pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_5c);
      ppSVar9 = &"[{0}]";
      pSVar6 = System_String__Format("[{0}]",pIVar5,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar6 = GameManagers_ChatManager__GetColorString(pSVar6,1,0,(MethodInfo *)ppSVar9);
      if (pSVar4 != (System_String_array *)0x0) {
        if ((int)pSVar4->max_length != 0) {
          pSVar4->m_Items[0] = pSVar6;
          il2cpp_runtime_glue(pSVar4->m_Items,pSVar6);
          if (1 < (uint)pSVar4->max_length) {
            pSVar4->m_Items[1] = " ";
            il2cpp_runtime_glue(pSVar4->m_Items + 1);
            if (2 < (uint)pSVar4->max_length) {
              pSVar4->m_Items[2] = local_40;
              il2cpp_runtime_glue(pSVar4->m_Items + 2);
              if (3 < (uint)pSVar4->max_length) {
                pSVar4->m_Items[3] = ": ";
                il2cpp_runtime_glue(pSVar4->m_Items + 3);
                pSVar6 = GameManagers_ChatManager__GetColorString
                                   (local_38,7,0,(MethodInfo *)ppSVar9);
                if (4 < (uint)pSVar4->max_length) {
                  pSVar4->m_Items[4] = pSVar6;
                  il2cpp_runtime_glue(pSVar4->m_Items + 4);
                  pMVar7 = (MethodInfo *)System_String__Concat(pSVar4,(MethodInfo *)0x0);
                  local_58 = 0;
                  SStack_50._dateData = 0;
                  __this_00.fields.value.fields._dateData = local_48.fields._dateData;
                  __this_00.fields._0_8_ = &local_58;
                  System_Nullable<DateTime>___ctor
                            (__this_00,(System_DateTime_o)MethodInfo_Nullable_1_DateTime._dateData,
                             (MethodInfo_3756FA0 *)ppSVar9);
                  timestamp_00.fields._0_8_ = local_58 & 0xffffffff;
                  timestamp_00.fields.value.fields._dateData =
                       (System_DateTime_Fields)(System_DateTime_Fields)SStack_50._dateData;
                  GameManagers_ChatManager__AddLine
                            ((System_String_o *)pMVar7,0,0,timestamp_00,senderID_00,0,1,senderID_00,
                             0,in_stack_ffffffffffffff88);
                  pUVar8 = GameManagers_ChatManager__GetChatPanel(pMVar7);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  bVar1 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if ((char)bVar1 == '\0') {
                    return;
                  }
                  if (pUVar8 != (UI_ChatPanel_o *)0x0) {
                    pMVar7 = (MethodInfo *)info.fields.Sender;
                    UI_ChatPanel__AddPMPartner(pUVar8,info.fields.Sender,(MethodInfo *)0x0);
                    if ((char)(pUVar8->fields)._inPMMode != '\0') {
                      pPVar2 = (pUVar8->fields)._currentPMTarget;
                      if (pPVar2 == (Photon_Realtime_Player_o *)0x0) goto LAB_04224032;
                      if ((pPVar2->fields).actorNumber == ((info.fields.Sender)->fields).actorNumber
                         ) {
                        return;
                      }
                    }
                    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    GameManagers_ChatManager__ShowPMNotification(info.fields.Sender,pMVar7);
                    return;
                  }
                  goto LAB_04224032;
                }
              }
            }
          }
        }
LAB_04224037:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_04224032:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$ResetAllPMState
// il2cpp: void GameManagers_ChatManager__ResetAllPMState (const MethodInfo* method);
// 0x42242a0

void GameManagers_ChatManager__ResetAllPMState(MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  long lVar2;
  bool_conflict bVar3;
  UI_ChatPanel_o *__this;
  MethodInfo *method_00;
  
  if (DAT_057050ca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057050ca = '\x01';
  }
  method_00 = TypeInfo_ChatManager;
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  __this = GameManagers_ChatManager__GetChatPanel(method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (__this == (UI_ChatPanel_o *)0x0) goto LAB_0422438c;
    UI_ChatPanel__ResetPMState(__this,(MethodInfo *)0x0);
  }
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = TypeInfo_ChatManager[2].virtualMethodPointer;
  lVar2 = *(long *)(pIVar1 + 0xb0);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    *(undefined4 *)(lVar2 + 0x18) = 0;
    lVar2 = *(long *)(pIVar1 + 0xb8);
    if (lVar2 != 0) {
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      *(undefined4 *)(lVar2 + 0x18) = 0;
      return;
    }
  }
LAB_0422438c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$SyncPMPartnersOnJoin
// il2cpp: void GameManagers_ChatManager__SyncPMPartnersOnJoin (const MethodInfo* method);
// 0x42243a0

void GameManagers_ChatManager__SyncPMPartnersOnJoin(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  uint uVar3;
  UI_ChatPanel_o *__this;
  Il2CppMethodPointer pIVar4;
  Photon_Realtime_Room_o *pPVar5;
  Photon_Realtime_Player_o *player;
  int index;
  MethodInfo *method_00;
  
  if (DAT_057050cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057050cb = '\x01';
  }
  method_00 = TypeInfo_ChatManager;
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  __this = GameManagers_ChatManager__GetChatPanel(method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if (__this != (UI_ChatPanel_o *)0x0) {
    index = 0;
    UI_ChatPanel__ResetPMState(__this,(MethodInfo *)0x0);
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    while( true ) {
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      pIVar4 = TypeInfo_ChatManager[2].virtualMethodPointer;
      if (*(long *)(pIVar4 + 0x28) == 0) break;
      if (*(int *)(*(long *)(pIVar4 + 0x28) + 0x18) <= index) {
        return;
      }
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
        pIVar4 = TypeInfo_ChatManager[2].virtualMethodPointer;
      }
      if (*(System_Collections_Generic_List_bool__o **)(pIVar4 + 0xb0) ==
          (System_Collections_Generic_List_bool__o *)0x0) break;
      bVar2 = System_Collections_Generic_List<bool>__get_Item
                        (*(System_Collections_Generic_List_bool__o **)(pIVar4 + 0xb0),index,
                         MethodInfo_Boolean_get_Item);
      if ((char)bVar2 != '\0') {
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        if (*(System_Collections_Generic_List_int__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8) ==
            (System_Collections_Generic_List_int__o *)0x0) break;
        uVar3 = System_Collections_Generic_List<int>__get_Item
                          (*(System_Collections_Generic_List_int__o **)
                            (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8),index,MethodInfo_Int32_get_Item);
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pPVar5 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        if (pPVar5 == (Photon_Realtime_Room_o *)0x0) break;
        player = (Photon_Realtime_Player_o *)
                 (*(pPVar5->klass->vtable)._10_GetPlayer.methodPtr)
                           (pPVar5,(ulong)uVar3,0,(pPVar5->klass->vtable)._10_GetPlayer.method);
        if (player != (Photon_Realtime_Player_o *)0x0) {
          UI_ChatPanel__AddPMPartner(__this,player,(MethodInfo *)0x0);
        }
      }
      index = index + 1;
      iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$GetPlayerIdentifier
// il2cpp: System_String_o* GameManagers_ChatManager__GetPlayerIdentifier (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x42245a0

System_String_o *
GameManagers_ChatManager__GetPlayerIdentifier(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Il2CppObject *arg0;
  Il2CppObject *arg0_00;
  System_String_o *pSVar1;
  System_String_o *str2;
  MethodInfo *method_00;
  int32_t local_20;
  int32_t local_1c;
  
  if (DAT_057050cc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"<link=\"{0}\">{1}</link>");
    il2cpp_init_method_metadata(&"[{0}]");
    il2cpp_init_method_metadata(&"");
    DAT_057050cc = '\x01';
  }
  if (player != (Photon_Realtime_Player_o *)0x0) {
    local_1c = (player->fields).actorNumber;
    arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_1c);
    local_20 = (player->fields).actorNumber;
    arg0_00 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_20);
    method_00 = (MethodInfo *)&"[{0}]";
    pSVar1 = System_String__Format("[{0}]",arg0_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = GameManagers_ChatManager__GetColorString(pSVar1,1,0,method_00);
    pSVar1 = System_String__Format("<link=\"{0}\">{1}</link>",arg0,(Il2CppObject *)pSVar1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    str2 = PhotonExtensions__GetStringProperty
                     (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                      (MethodInfo *)0x0);
    pSVar1 = System_String__Concat(pSVar1," ",str2,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$ShowPMNotification
// il2cpp: void GameManagers_ChatManager__ShowPMNotification (Photon_Realtime_Player_o* senderPlayer, const MethodInfo* method);
// 0x4224040

void GameManagers_ChatManager__ShowPMNotification
               (Photon_Realtime_Player_o *senderPlayer,MethodInfo *method)

{
  int32_t item;
  System_Collections_Generic_HashSet_int__o *pSVar1;
  bool_conflict bVar2;
  System_DateTime_o SVar3;
  System_String_o *str0;
  System_String_o *str1;
  System_String_o *pSVar4;
  MethodInfo *in_RCX;
  MethodInfo_3756FA0 *method_00;
  MethodInfo *method_01;
  System_Nullable_DateTime__o __this;
  System_Nullable_DateTime__o timestamp;
  MethodInfo *in_stack_ffffffffffffffa8;
  ulong local_48;
  System_DateTime_Fields SStack_40;
  
  if (DAT_057050cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_DateTime);
    il2cpp_init_method_metadata(&"New message from ");
    il2cpp_init_method_metadata(&" (Tab)");
    DAT_057050cd = '\x01';
  }
  if (senderPlayer == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  item = (senderPlayer->fields).actorNumber;
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xa0);
  if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet<int>__Contains(pSVar1,item,MethodInfo_Boolean_Contains);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_HashSet_int__o **)
                (*(long *)(TypeInfo_ChatManager + 0xb8) + 0xa0);
      if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) goto LAB_0422428c;
      System_Collections_Generic_HashSet<int>__Add(pSVar1,item,MethodInfo_Boolean_Add);
    }
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xa8);
    if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet<int>__Contains(pSVar1,item,MethodInfo_Boolean_Contains);
      if ((char)bVar2 == '\0') {
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar1 = *(System_Collections_Generic_HashSet_int__o **)
                  (*(long *)(TypeInfo_ChatManager + 0xb8) + 0xa8);
        if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) goto LAB_0422428c;
        System_Collections_Generic_HashSet<int>__Add(pSVar1,item,MethodInfo_Boolean_Add);
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_init_class();
        }
        SVar3 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        pSVar4 = " (Tab)";
        method_01 = (MethodInfo *)0x3;
        str0 = GameManagers_ChatManager__GetColorString("New message from ",3,0,in_RCX);
        str1 = GameManagers_ChatManager__GetPlayerIdentifier(senderPlayer,method_01);
        pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,3,0,in_RCX);
        method_00 = (MethodInfo_3756FA0 *)0x0;
        pSVar4 = System_String__Concat(str0,str1,pSVar4,(MethodInfo *)0x0);
        local_48 = 0;
        SStack_40._dateData = 0;
        __this.fields.value.fields._dateData = SVar3.fields._dateData;
        __this.fields._0_8_ = &local_48;
        System_Nullable<DateTime>___ctor(__this,(System_DateTime_o)MethodInfo_Nullable_1_DateTime._dateData,method_00)
        ;
        timestamp.fields._0_8_ = local_48 & 0xffffffff;
        timestamp.fields.value.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)SStack_40._dateData;
        GameManagers_ChatManager__AddLine
                  (pSVar4,0,1,timestamp,item,0,0,-1,1,in_stack_ffffffffffffffa8);
      }
      return;
    }
  }
LAB_0422428c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$HasActivePlayerSuggestions
// il2cpp: bool GameManagers_ChatManager__HasActivePlayerSuggestions (const MethodInfo* method);
// 0x4224700

bool_conflict GameManagers_ChatManager__HasActivePlayerSuggestions(MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  Il2CppMethodPointer pIVar3;
  int iVar4;
  MethodInfo *method_00;
  
  if (DAT_057050ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    DAT_057050ce = '\x01';
    iVar4 = *(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4);
    method_00 = TypeInfo_SuggestionState;
  }
  else {
    iVar4 = *(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4);
    method_00 = TypeInfo_SuggestionState;
  }
  TypeInfo_SuggestionState = method_00;
  if (iVar4 == 0) {
    il2cpp_init_class();
    bVar2 = GameManagers_ChatManager_SuggestionState__get_IsActive(method_00);
    cVar1 = (char)bVar2;
  }
  else {
    bVar2 = GameManagers_ChatManager_SuggestionState__get_IsActive(method_00);
    cVar1 = (char)bVar2;
  }
  if (cVar1 != '\0') {
    if (*(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    iVar4 = *(int *)(TypeInfo_SuggestionState[2].virtualMethodPointer + 0x24);
    pIVar3 = (Il2CppMethodPointer)
             CONCAT71((int7)((ulong)TypeInfo_SuggestionState[2].virtualMethodPointer >> 8),1);
    bVar2 = (bool_conflict)pIVar3;
    if (iVar4 != 3) {
      if (*(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4) == 0) {
        il2cpp_init_class();
        pIVar3 = TypeInfo_SuggestionState[2].virtualMethodPointer;
        iVar4 = *(int *)(pIVar3 + 0x24);
      }
      bVar2 = (bool_conflict)CONCAT71((int7)((ulong)pIVar3 >> 8),iVar4 == 2);
    }
    return bVar2;
  }
  return 0;
}


// GameManagers.ChatManager$$HasActiveSuggestions
// il2cpp: bool GameManagers_ChatManager__HasActiveSuggestions (const MethodInfo* method);
// 0x42247b0

bool_conflict GameManagers_ChatManager__HasActiveSuggestions(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (DAT_057050cf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    DAT_057050cf = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4);
    method_00 = TypeInfo_SuggestionState;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_SuggestionState[2].parameters + 4);
    method_00 = TypeInfo_SuggestionState;
  }
  TypeInfo_SuggestionState = method_00;
  if (iVar1 != 0) {
    bVar2 = GameManagers_ChatManager_SuggestionState__get_IsActive(method_00);
    return bVar2;
  }
  il2cpp_init_class();
  bVar2 = GameManagers_ChatManager_SuggestionState__get_IsActive(method_00);
  return bVar2;
}


// GameManagers.ChatManager$$RefreshPlayerSuggestions
// il2cpp: void GameManagers_ChatManager__RefreshPlayerSuggestions (const MethodInfo* method);
// 0x4224810

void GameManagers_ChatManager__RefreshPlayerSuggestions(MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  UI_ChatPanel_o *__this;
  System_String_o *value;
  MethodInfo *pMVar4;
  
  if (DAT_057050d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    il2cpp_init_method_metadata(&"\xffff");
    DAT_057050d0 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar4 = TypeInfo_ChatManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar4 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = pMVar4;
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = GameManagers_ChatManager__HasActivePlayerSuggestions(pMVar4);
    cVar2 = (char)bVar3;
    pMVar4 = TypeInfo_ChatManager;
  }
  else {
    bVar3 = GameManagers_ChatManager__HasActivePlayerSuggestions(pMVar4);
    cVar2 = (char)bVar3;
    pMVar4 = TypeInfo_ChatManager;
  }
  TypeInfo_ChatManager = pMVar4;
  if (cVar2 != '\0') {
    if (*(int *)((long)&pMVar4[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    __this = GameManagers_ChatManager__GetChatPanel(pMVar4);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      if (__this == (UI_ChatPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      value = UI_ChatPanel__GetInputText(__this,(MethodInfo *)0x0);
      bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) {
          GameManagers_ChatManager__ClearLastSuggestions(TypeInfo_ChatManager);
          return;
        }
        pMVar4 = TypeInfo_ChatManager;
        il2cpp_init_class();
        GameManagers_ChatManager__ClearLastSuggestions(pMVar4);
        return;
      }
      if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
        il2cpp_init_class();
      }
      **(undefined8 **)(TypeInfo_SuggestionState + 0xb8) = "\xffff";
      pMVar4 = "\xffff";
      il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_SuggestionState + 0xb8));
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_ChatManager__HandleTyping(value,pMVar4);
      return;
    }
  }
  return;
}


// GameManagers.ChatManager$$ClearPMNotificationFromChat
// il2cpp: void GameManagers_ChatManager__ClearPMNotificationFromChat (int32_t playerID, const MethodInfo* method);
// 0x42249b0

void GameManagers_ChatManager__ClearPMNotificationFromChat(int32_t playerID,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  UI_ChatPanel_o *__this;
  MethodInfo *pMVar6;
  
  if (DAT_057050d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057050d1 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar3 = *(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
  }
  else {
    lVar3 = *(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
  }
  if (lVar3 == 0) {
LAB_04224d22:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar1 = *(int *)(lVar3 + 0x18);
  iVar2 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
  pMVar6 = TypeInfo_ChatManager;
  while( true ) {
    iVar1 = iVar1 + -1;
    TypeInfo_ChatManager = pMVar6;
    if (iVar2 == 0) {
      il2cpp_init_class();
    }
    if (iVar1 < 0) break;
    if (*(System_Collections_Generic_List_bool__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x58)
        == (System_Collections_Generic_List_bool__o *)0x0) goto LAB_04224d22;
    bVar4 = System_Collections_Generic_List<bool>__get_Item
                      (*(System_Collections_Generic_List_bool__o **)
                        (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58),iVar1,MethodInfo_Boolean_get_Item);
    if ((char)bVar4 != '\0') {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      if (*(System_Collections_Generic_List_int__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x30)
          == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04224d22;
      iVar5 = System_Collections_Generic_List<int>__get_Item
                        (*(System_Collections_Generic_List_int__o **)
                          (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30),iVar1,MethodInfo_Int32_get_Item);
      if (iVar5 == playerID) {
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        if (*(System_Collections_Generic_List_object__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) ==
            (System_Collections_Generic_List_object__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<object>__RemoveAt
                  (*(System_Collections_Generic_List_object__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_T__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x38)
            == (System_Collections_Generic_List_T__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<Int32Enum>__RemoveAt
                  (*(System_Collections_Generic_List_T__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x38),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_bool__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40) ==
            (System_Collections_Generic_List_bool__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<bool>__RemoveAt
                  (*(System_Collections_Generic_List_bool__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_DateTime__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48) ==
            (System_Collections_Generic_List_DateTime__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<DateTime>__RemoveAt
                  (*(System_Collections_Generic_List_DateTime__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_int__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30) ==
            (System_Collections_Generic_List_int__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<int>__RemoveAt
                  (*(System_Collections_Generic_List_int__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_bool__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50) ==
            (System_Collections_Generic_List_bool__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<bool>__RemoveAt
                  (*(System_Collections_Generic_List_bool__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_bool__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58) ==
            (System_Collections_Generic_List_bool__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<bool>__RemoveAt
                  (*(System_Collections_Generic_List_bool__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_bool__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb0) ==
            (System_Collections_Generic_List_bool__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<bool>__RemoveAt
                  (*(System_Collections_Generic_List_bool__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb0),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_int__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8) ==
            (System_Collections_Generic_List_int__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<int>__RemoveAt
                  (*(System_Collections_Generic_List_int__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8),iVar1,MethodInfo_Void_RemoveAt);
      }
    }
    iVar2 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar6 = TypeInfo_ChatManager;
  }
  bVar4 = GameManagers_ChatManager__IsChatAvailable(pMVar6);
  if ((char)bVar4 != '\0') {
    pMVar6 = TypeInfo_ChatManager;
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    __this = GameManagers_ChatManager__GetChatPanel(pMVar6);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      if (__this != (UI_ChatPanel_o *)0x0) {
        UI_ChatPanel__Sync(__this,(MethodInfo *)0x0);
        return;
      }
      goto LAB_04224d22;
    }
  }
  return;
}


// GameManagers.ChatManager$$ClearPMNotification
// il2cpp: void GameManagers_ChatManager__ClearPMNotification (int32_t playerID, const MethodInfo* method);
// 0x4224d30

void GameManagers_ChatManager__ClearPMNotification(int32_t playerID,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  long lVar3;
  System_Collections_Generic_HashSet_int__o *__this;
  int32_t iVar4;
  bool_conflict bVar5;
  UI_ChatPanel_o *__this_00;
  MethodInfo *pMVar6;
  
  if (DAT_057050d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_057050d2 = '\x01';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto LAB_04224d52;
LAB_04224da8:
    il2cpp_init_class();
    __this = *(System_Collections_Generic_HashSet_int__o **)
              (TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto LAB_04224da8;
LAB_04224d52:
    __this = *(System_Collections_Generic_HashSet_int__o **)
              (TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
  }
  if (__this == (System_Collections_Generic_HashSet_int__o *)0x0) {
LAB_04224e2f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar5 = System_Collections_Generic_HashSet<int>__Contains(__this,playerID,MethodInfo_Boolean_Contains);
  if ((char)bVar5 != '\0') {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    if (*(System_Collections_Generic_HashSet_int__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0)
        == (System_Collections_Generic_HashSet_int__o *)0x0) goto LAB_04224e2f;
    System_Collections_Generic_HashSet<int>__Remove
              (*(System_Collections_Generic_HashSet_int__o **)
                (TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0),playerID,MethodInfo_Boolean_Remove);
  }
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_057050d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057050d1 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar3 = *(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
  }
  else {
    lVar3 = *(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
  }
  if (lVar3 == 0) {
LAB_04224d22:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar1 = *(int *)(lVar3 + 0x18);
  iVar2 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
  pMVar6 = TypeInfo_ChatManager;
  while( true ) {
    iVar1 = iVar1 + -1;
    TypeInfo_ChatManager = pMVar6;
    if (iVar2 == 0) {
      il2cpp_init_class();
    }
    if (iVar1 < 0) break;
    if (*(System_Collections_Generic_List_bool__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x58)
        == (System_Collections_Generic_List_bool__o *)0x0) goto LAB_04224d22;
    bVar5 = System_Collections_Generic_List<bool>__get_Item
                      (*(System_Collections_Generic_List_bool__o **)
                        (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58),iVar1,MethodInfo_Boolean_get_Item);
    if ((char)bVar5 != '\0') {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      if (*(System_Collections_Generic_List_int__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x30)
          == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04224d22;
      iVar4 = System_Collections_Generic_List<int>__get_Item
                        (*(System_Collections_Generic_List_int__o **)
                          (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30),iVar1,MethodInfo_Int32_get_Item);
      if (iVar4 == playerID) {
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        if (*(System_Collections_Generic_List_object__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) ==
            (System_Collections_Generic_List_object__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<object>__RemoveAt
                  (*(System_Collections_Generic_List_object__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_T__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x38)
            == (System_Collections_Generic_List_T__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<Int32Enum>__RemoveAt
                  (*(System_Collections_Generic_List_T__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x38),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_bool__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40) ==
            (System_Collections_Generic_List_bool__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<bool>__RemoveAt
                  (*(System_Collections_Generic_List_bool__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_DateTime__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48) ==
            (System_Collections_Generic_List_DateTime__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<DateTime>__RemoveAt
                  (*(System_Collections_Generic_List_DateTime__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_int__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30) ==
            (System_Collections_Generic_List_int__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<int>__RemoveAt
                  (*(System_Collections_Generic_List_int__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_bool__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50) ==
            (System_Collections_Generic_List_bool__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<bool>__RemoveAt
                  (*(System_Collections_Generic_List_bool__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_bool__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58) ==
            (System_Collections_Generic_List_bool__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<bool>__RemoveAt
                  (*(System_Collections_Generic_List_bool__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_bool__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb0) ==
            (System_Collections_Generic_List_bool__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<bool>__RemoveAt
                  (*(System_Collections_Generic_List_bool__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb0),iVar1,MethodInfo_Void_RemoveAt);
        if (*(System_Collections_Generic_List_int__o **)
             (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8) ==
            (System_Collections_Generic_List_int__o *)0x0) goto LAB_04224d22;
        System_Collections_Generic_List<int>__RemoveAt
                  (*(System_Collections_Generic_List_int__o **)
                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8),iVar1,MethodInfo_Void_RemoveAt);
      }
    }
    iVar2 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
    pMVar6 = TypeInfo_ChatManager;
  }
  bVar5 = GameManagers_ChatManager__IsChatAvailable(pMVar6);
  if ((char)bVar5 != '\0') {
    pMVar6 = TypeInfo_ChatManager;
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = GameManagers_ChatManager__GetChatPanel(pMVar6);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (__this_00 != (UI_ChatPanel_o *)0x0) {
        UI_ChatPanel__Sync(__this_00,(MethodInfo *)0x0);
        return;
      }
      goto LAB_04224d22;
    }
  }
  return;
}


// GameManagers.ChatManager$$HasActivePMNotification
// il2cpp: bool GameManagers_ChatManager__HasActivePMNotification (int32_t playerID, const MethodInfo* method);
// 0x4224e40

bool_conflict GameManagers_ChatManager__HasActivePMNotification(int32_t playerID,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_int__o *__this;
  bool_conflict bVar2;
  
  if (DAT_057050d3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    DAT_057050d3 = '\x01';
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xa0);
  }
  else {
    __this = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xa0);
  }
  if (__this != (System_Collections_Generic_HashSet_int__o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet<int>__Contains(__this,playerID,MethodInfo_Boolean_Contains);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$HasAnyActivePMNotification
// il2cpp: bool GameManagers_ChatManager__HasAnyActivePMNotification (const MethodInfo* method);
// 0x4224ee0

bool_conflict GameManagers_ChatManager__HasAnyActivePMNotification(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_057050d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_057050d4 = '\x01';
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xa0);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xa0);
  }
  if (lVar2 != 0) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar2 >> 8),0 < *(int *)(lVar2 + 0x20));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.ChatManager$$UpdatePartialTextAfterCompletion
// il2cpp: void GameManagers_ChatManager__UpdatePartialTextAfterCompletion (System_String_o* newText, System_String_o* chosen, const MethodInfo* method);
// 0x42220f0

void GameManagers_ChatManager__UpdatePartialTextAfterCompletion
               (System_String_o *newText,System_String_o *chosen,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  System_String_o *__this;
  
  if (DAT_057050d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SuggestionState);
    DAT_057050d5 = '\x01';
    iVar1 = *(int *)(TypeInfo_SuggestionState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_SuggestionState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    iVar1 = *(int *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x24);
  }
  else {
    iVar1 = *(int *)(*(long *)(TypeInfo_SuggestionState + 0xb8) + 0x24);
  }
  if (iVar1 != 3) {
    if (iVar1 == 2) {
      if (newText != (System_String_o *)0x0) {
        iVar2 = System_String__LastIndexOf(newText,0x40,(MethodInfo *)0x0);
        if (iVar2 < 0) {
          return;
        }
        if ((newText->fields)._stringLength <= iVar2 + 1) {
          return;
        }
        __this = System_String__Substring(newText,iVar2 + 1,(MethodInfo *)0x0);
        if (__this != (System_String_o *)0x0) {
          iVar2 = System_String__IndexOf(__this,0x20,(MethodInfo *)0x0);
          if (-1 < iVar2) {
            __this = System_String__Substring(__this,0,iVar2,(MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
            il2cpp_init_class();
          }
          **(undefined8 **)(TypeInfo_SuggestionState + 0xb8) = __this;
          il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_SuggestionState + 0xb8),__this);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (iVar1 != 1) {
      return;
    }
  }
  if (*(int *)(TypeInfo_SuggestionState + 0xe4) == 0) {
    il2cpp_init_class();
  }
  **(undefined8 **)(TypeInfo_SuggestionState + 0xb8) = chosen;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_SuggestionState + 0xb8),chosen);
  return;
}


// GameManagers.ChatManager$$.ctor
// il2cpp: void GameManagers_ChatManager___ctor (GameManagers_ChatManager_o* __this, const MethodInfo* method);
// 0x4224f70

void GameManagers_ChatManager___ctor(GameManagers_ChatManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.ChatManager$$.cctor
// il2cpp: void GameManagers_ChatManager___cctor (const MethodInfo* method);
// 0x4224f80

void GameManagers_ChatManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_Text_RegularExpressions_Regex_o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Collections_Generic_List_int__o *pSVar4;
  System_Collections_Generic_List_T__o *__this;
  System_Collections_Generic_List_bool__o *pSVar5;
  System_Collections_Generic_List_DateTime__o *__this_00;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  System_Text_StringBuilder_o *pSVar7;
  System_Collections_Generic_HashSet_int__o *pSVar8;
  System_Collections_Generic_Dictionary_object__int__o *__this_02;
  
  if (DAT_057050d6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_GameManagers_ChatTextColor_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_GameManagers_ChatMana);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_ChatTextColor__string);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__CommandAttribute);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__int);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_int);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameManagers_ChatTextColor);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_DateTime);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_bool);
    il2cpp_init_method_metadata(&TypeInfo_List_int);
    il2cpp_init_method_metadata(&TypeInfo_List_ChatTextColor);
    il2cpp_init_method_metadata(&TypeInfo_List_DateTime);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_Regex);
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    il2cpp_init_method_metadata(&"^/(\\w+)(?:\\s+(.*))?$");
    il2cpp_init_method_metadata(&"<[^>]+>|</[^>]+>");
    il2cpp_init_method_metadata(&"\\[([^\\]]+)\\]");
    il2cpp_init_method_metadata(&"@(\\w*)$");
    DAT_057050d6 = '\x01';
  }
  pSVar2 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar2,"^/(\\w+)(?:\\s+(.*))?$",8,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_ChatManager + 0xb8) = pSVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_ChatManager + 0xb8),pSVar2);
  pSVar2 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar2,"@(\\w*)$",8,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  pSVar2 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar2,"\\[([^\\]]+)\\]",8,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x10,pSVar2);
  pSVar2 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar2,"<[^>]+>|</[^>]+>",8,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar1 + 0x18) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x18,pSVar2);
  pSVar3 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(pSVar3,MethodInfo_List_1_System_String);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar1 + 0x28) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x28,pSVar3);
  pSVar4 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_glue(TypeInfo_List_int);
  System_Collections_Generic_List<int>___ctor(pSVar4,MethodInfo_List_1_System_Int32);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Collections_Generic_List_int__o **)(lVar1 + 0x30) = pSVar4;
  il2cpp_runtime_glue(lVar1 + 0x30,pSVar4);
  __this = (System_Collections_Generic_List_T__o *)il2cpp_runtime_glue(TypeInfo_List_ChatTextColor);
  System_Collections_Generic_List<Int32Enum>___ctor(__this,MethodInfo_List_1_GameManagers_ChatTextColor);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Collections_Generic_List_T__o **)(lVar1 + 0x38) = __this;
  il2cpp_runtime_glue(lVar1 + 0x38,__this);
  pSVar5 = (System_Collections_Generic_List_bool__o *)il2cpp_runtime_glue(TypeInfo_List_bool);
  System_Collections_Generic_List<bool>___ctor(pSVar5,MethodInfo_List_1_System_Boolean);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Collections_Generic_List_bool__o **)(lVar1 + 0x40) = pSVar5;
  il2cpp_runtime_glue(lVar1 + 0x40,pSVar5);
  __this_00 = (System_Collections_Generic_List_DateTime__o *)il2cpp_runtime_glue(TypeInfo_List_DateTime);
  System_Collections_Generic_List<DateTime>___ctor(__this_00,MethodInfo_List_1_System_DateTime);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Collections_Generic_List_DateTime__o **)(lVar1 + 0x48) = __this_00;
  il2cpp_runtime_glue(lVar1 + 0x48,__this_00);
  pSVar5 = (System_Collections_Generic_List_bool__o *)il2cpp_runtime_glue(TypeInfo_List_bool);
  System_Collections_Generic_List<bool>___ctor(pSVar5,MethodInfo_List_1_System_Boolean);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Collections_Generic_List_bool__o **)(lVar1 + 0x50) = pSVar5;
  il2cpp_runtime_glue(lVar1 + 0x50,pSVar5);
  pSVar5 = (System_Collections_Generic_List_bool__o *)il2cpp_runtime_glue(TypeInfo_List_bool);
  System_Collections_Generic_List<bool>___ctor(pSVar5,MethodInfo_List_1_System_Boolean);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Collections_Generic_List_bool__o **)(lVar1 + 0x58) = pSVar5;
  il2cpp_runtime_glue(lVar1 + 0x58,pSVar5);
  pSVar3 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(pSVar3,MethodInfo_List_1_System_String);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar1 + 0x60) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x60,pSVar3);
  __this_01 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_ChatTextColor__string);
  System_Collections_Generic_Dictionary<Int32Enum__object>___ctor(__this_01,MethodInfo_Dictionary_2_GameManagers_ChatTextColor_System_S);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar1 + 0x68) = __this_01;
  il2cpp_runtime_glue(lVar1 + 0x68,__this_01);
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__CommandAttribute);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar6,MethodInfo_Dictionary_2_System_String_GameManagers_ChatMana);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x70) = pSVar6;
  il2cpp_runtime_glue(lVar1 + 0x70,pSVar6);
  pSVar7 = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(pSVar7,0x100,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Text_StringBuilder_o **)(lVar1 + 0x88) = pSVar7;
  il2cpp_runtime_glue(lVar1 + 0x88,pSVar7);
  pSVar7 = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(pSVar7,8,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Text_StringBuilder_o **)(lVar1 + 0x90) = pSVar7;
  il2cpp_runtime_glue(lVar1 + 0x90,pSVar7);
  pSVar7 = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(pSVar7,0x100,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Text_StringBuilder_o **)(lVar1 + 0x98) = pSVar7;
  il2cpp_runtime_glue(lVar1 + 0x98,pSVar7);
  pSVar8 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_glue(TypeInfo_HashSet_int);
  System_Collections_Generic_HashSet<int>___ctor(pSVar8,MethodInfo_HashSet_1_System_Int32);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Collections_Generic_HashSet_int__o **)(lVar1 + 0xa0) = pSVar8;
  il2cpp_runtime_glue(lVar1 + 0xa0,pSVar8);
  pSVar8 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_glue(TypeInfo_HashSet_int);
  System_Collections_Generic_HashSet<int>___ctor(pSVar8,MethodInfo_HashSet_1_System_Int32);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Collections_Generic_HashSet_int__o **)(lVar1 + 0xa8) = pSVar8;
  il2cpp_runtime_glue(lVar1 + 0xa8,pSVar8);
  pSVar5 = (System_Collections_Generic_List_bool__o *)il2cpp_runtime_glue(TypeInfo_List_bool);
  System_Collections_Generic_List<bool>___ctor(pSVar5,MethodInfo_List_1_System_Boolean);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Collections_Generic_List_bool__o **)(lVar1 + 0xb0) = pSVar5;
  il2cpp_runtime_glue(lVar1 + 0xb0,pSVar5);
  pSVar4 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_glue(TypeInfo_List_int);
  System_Collections_Generic_List<int>___ctor(pSVar4,MethodInfo_List_1_System_Int32);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Collections_Generic_List_int__o **)(lVar1 + 0xb8) = pSVar4;
  il2cpp_runtime_glue(lVar1 + 0xb8,pSVar4);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(undefined8 *)(lVar1 + 0xc0) = **(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(lVar1 + 0xc0);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(undefined8 *)(lVar1 + 200) = 0xffffffff00000000;
  *(undefined1 *)(lVar1 + 0xd0) = 0;
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar6,MethodInfo_Dictionary_2_System_String_System_String);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0xd8) = pSVar6;
  il2cpp_runtime_glue(lVar1 + 0xd8,pSVar6);
  __this_02 = (System_Collections_Generic_Dictionary_object__int__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__int);
  System_Collections_Generic_Dictionary<object__int>___ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Int32);
  lVar1 = *(long *)(TypeInfo_ChatManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__int__o **)(lVar1 + 0xe0) = __this_02;
  il2cpp_runtime_glue(lVar1 + 0xe0,__this_02);
  return;
}


