// Type: CustomLogic.CustomLogicSourceFile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSourceFile.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicSourceFile$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicSourceFile__get_Name (CustomLogic_CustomLogicSourceFile_o* __this, const MethodInfo* method);
// 0x4265200

System_String_o *
CustomLogic_CustomLogicSourceFile__get_Name(CustomLogic_CustomLogicSourceFile_o *__this,MethodInfo *method)

{
  return (__this->fields)._Name_k__BackingField;
}


// CustomLogic.CustomLogicSourceFile$$get_Content
// il2cpp: System_String_o* CustomLogic_CustomLogicSourceFile__get_Content (CustomLogic_CustomLogicSourceFile_o* __this, const MethodInfo* method);
// 0x4265210

System_String_o *
CustomLogic_CustomLogicSourceFile__get_Content(CustomLogic_CustomLogicSourceFile_o *__this,MethodInfo *method)

{
  return (__this->fields)._Content_k__BackingField;
}


// CustomLogic.CustomLogicSourceFile$$get_Type
// il2cpp: int32_t CustomLogic_CustomLogicSourceFile__get_Type (CustomLogic_CustomLogicSourceFile_o* __this, const MethodInfo* method);
// 0x4265220

int32_t CustomLogic_CustomLogicSourceFile__get_Type
                  (CustomLogic_CustomLogicSourceFile_o *__this,MethodInfo *method)

{
  return (__this->fields)._Type_k__BackingField;
}


// CustomLogic.CustomLogicSourceFile$$get_StartLine
// il2cpp: int32_t CustomLogic_CustomLogicSourceFile__get_StartLine (CustomLogic_CustomLogicSourceFile_o* __this, const MethodInfo* method);
// 0x4265230

int32_t CustomLogic_CustomLogicSourceFile__get_StartLine
                  (CustomLogic_CustomLogicSourceFile_o *__this,MethodInfo *method)

{
  return (__this->fields)._StartLine_k__BackingField;
}


// CustomLogic.CustomLogicSourceFile$$set_StartLine
// il2cpp: void CustomLogic_CustomLogicSourceFile__set_StartLine (CustomLogic_CustomLogicSourceFile_o* __this, int32_t value, const MethodInfo* method);
// 0x4265240

void CustomLogic_CustomLogicSourceFile__set_StartLine
               (CustomLogic_CustomLogicSourceFile_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields)._StartLine_k__BackingField = value;
  return;
}


// CustomLogic.CustomLogicSourceFile$$get_EndLine
// il2cpp: int32_t CustomLogic_CustomLogicSourceFile__get_EndLine (CustomLogic_CustomLogicSourceFile_o* __this, const MethodInfo* method);
// 0x4265250

int32_t CustomLogic_CustomLogicSourceFile__get_EndLine
                  (CustomLogic_CustomLogicSourceFile_o *__this,MethodInfo *method)

{
  return (__this->fields)._EndLine_k__BackingField;
}


// CustomLogic.CustomLogicSourceFile$$set_EndLine
// il2cpp: void CustomLogic_CustomLogicSourceFile__set_EndLine (CustomLogic_CustomLogicSourceFile_o* __this, int32_t value, const MethodInfo* method);
// 0x4265260

void CustomLogic_CustomLogicSourceFile__set_EndLine
               (CustomLogic_CustomLogicSourceFile_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields)._EndLine_k__BackingField = value;
  return;
}


// CustomLogic.CustomLogicSourceFile$$get_MapLogicOffset
// il2cpp: int32_t CustomLogic_CustomLogicSourceFile__get_MapLogicOffset (CustomLogic_CustomLogicSourceFile_o* __this, const MethodInfo* method);
// 0x4265270

int32_t CustomLogic_CustomLogicSourceFile__get_MapLogicOffset
                  (CustomLogic_CustomLogicSourceFile_o *__this,MethodInfo *method)

{
  return (__this->fields)._MapLogicOffset_k__BackingField;
}


// CustomLogic.CustomLogicSourceFile$$set_MapLogicOffset
// il2cpp: void CustomLogic_CustomLogicSourceFile__set_MapLogicOffset (CustomLogic_CustomLogicSourceFile_o* __this, int32_t value, const MethodInfo* method);
// 0x4265280

void CustomLogic_CustomLogicSourceFile__set_MapLogicOffset
               (CustomLogic_CustomLogicSourceFile_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields)._MapLogicOffset_k__BackingField = value;
  return;
}


// CustomLogic.CustomLogicSourceFile$$.ctor
// il2cpp: void CustomLogic_CustomLogicSourceFile___ctor (CustomLogic_CustomLogicSourceFile_o* __this, System_String_o* name, System_String_o* content, int32_t type, const MethodInfo* method);
// 0x4260070

void CustomLogic_CustomLogicSourceFile___ctor
               (CustomLogic_CustomLogicSourceFile_o *__this,System_String_o *name,System_String_o *content,
               int32_t type,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = name;
  il2cpp_runtime_helper_022b4080(&__this->fields,name);
  (__this->fields)._Content_k__BackingField = content;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Content_k__BackingField,content);
  (__this->fields)._Type_k__BackingField = type;
  (__this->fields)._StartLine_k__BackingField = 0;
  (__this->fields)._EndLine_k__BackingField = 0;
  (__this->fields)._MapLogicOffset_k__BackingField = 0;
  return;
}


// CustomLogic.CustomLogicSourceFile$$.ctor
// il2cpp: void CustomLogic_CustomLogicSourceFile___ctor (CustomLogic_CustomLogicSourceFile_o* __this, System_String_o* name, System_String_o* content, int32_t type, int32_t mapLogicOffset, const MethodInfo* method);
// 0x42618a0

void CustomLogic_CustomLogicSourceFile___ctor_41618a0
               (CustomLogic_CustomLogicSourceFile_o *__this,System_String_o *name,System_String_o *content,
               int32_t type,int32_t mapLogicOffset,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = name;
  il2cpp_runtime_helper_022b4080(&__this->fields,name);
  (__this->fields)._Content_k__BackingField = content;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Content_k__BackingField,content);
  (__this->fields)._Type_k__BackingField = type;
  (__this->fields)._StartLine_k__BackingField = 0;
  (__this->fields)._EndLine_k__BackingField = 0;
  (__this->fields)._MapLogicOffset_k__BackingField = mapLogicOffset;
  return;
}


// CustomLogic.CustomLogicSourceFile$$get_LineCount
// il2cpp: int32_t CustomLogic_CustomLogicSourceFile__get_LineCount (CustomLogic_CustomLogicSourceFile_o* __this, const MethodInfo* method);
// 0x425b600

int32_t CustomLogic_CustomLogicSourceFile__get_LineCount
                  (CustomLogic_CustomLogicSourceFile_o *__this,MethodInfo *method)

{
  int32_t extraout_EAX;
  System_String_array *pSVar1;
  System_String_o *__this_00;
  
  __this_00 = (__this->fields)._Content_k__BackingField;
  if (__this_00 != (System_String_o *)0x0) {
    pSVar1 = System_String__Split(__this_00,10,0,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_array *)0x0) {
      return (int32_t)pSVar1->max_length;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return extraout_EAX;
}


