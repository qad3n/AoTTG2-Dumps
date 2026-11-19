// Type: Gisketch.Aottg2UI.Game.AottgChangelogMarkdownBlock
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangelogMarkdownBlock.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangelogMarkdownBlock$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock___ctor (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o* __this, int32_t type, System_String_o* text, System_String_array* items, const MethodInfo* method);
// 0x5e77250

void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock___ctor
               (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *__this,int32_t type,
               System_String_o *text,System_String_array *items,MethodInfo *method)

{
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *pSVar1;
  
  if (Il2CppMethodInitialized_075487cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_AsReadOnly_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_075487cf = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Type_k__BackingField = type;
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._Text_k__BackingField = text;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Text_k__BackingField);
  if (items == (System_String_array *)0x0) {
    items = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  }
  pSVar1 = System_Array__AsReadOnly_object_
                     ((System_Object_array *)items,
                      (MethodInfo_34889C0 *)MethodInfo_System_Array_AsReadOnly_string);
  (__this->fields)._Items_k__BackingField = (System_Collections_Generic_IReadOnlyList_string__o *)pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Items_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdownBlock$$get_Type
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock__get_Type (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o* __this, const MethodInfo* method);
// 0x5e77310

int32_t Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock__get_Type
                  (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *__this,MethodInfo *method)

{
  return (__this->fields)._Type_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdownBlock$$set_Type
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock__set_Type (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o* __this, int32_t value, const MethodInfo* method);
// 0x5e77320

void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock__set_Type
               (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields)._Type_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdownBlock$$get_Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock__get_Text (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o* __this, const MethodInfo* method);
// 0x5e77330

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock__get_Text
          (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *__this,MethodInfo *method)

{
  return (__this->fields)._Text_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdownBlock$$set_Text
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock__set_Text (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e77340

void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock__set_Text
               (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Text_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Text_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdownBlock$$get_Items
// il2cpp: System_Collections_Generic_IReadOnlyList_string__o* Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock__get_Items (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o* __this, const MethodInfo* method);
// 0x5e77350

System_Collections_Generic_IReadOnlyList_string__o *
Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock__get_Items
          (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *__this,MethodInfo *method)

{
  return (__this->fields)._Items_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdownBlock$$set_Items
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock__set_Items (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o* __this, System_Collections_Generic_IReadOnlyList_string__o* value, const MethodInfo* method);
// 0x5e77360

void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock__set_Items
               (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *__this,
               System_Collections_Generic_IReadOnlyList_string__o *value,MethodInfo *method)

{
  (__this->fields)._Items_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Items_k__BackingField);
  return;
}


