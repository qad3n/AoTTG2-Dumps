// Type: CustomLogic.CustomLogicSourceFile
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSourceFile.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicSourceFile$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicSourceFile__get_Name (CustomLogic_CustomLogicSourceFile_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
CustomLogic_CustomLogicSourceFile__get_Name(CustomLogic_CustomLogicSourceFile_o* __this, MethodInfo* method)

{
  return (__this->fields)._Name_k__BackingField;
}


// CustomLogic.CustomLogicSourceFile$$get_Content
// il2cpp: System_String_o* CustomLogic_CustomLogicSourceFile__get_Content (CustomLogic_CustomLogicSourceFile_o* __this, const MethodInfo* method);
// 0x180573e90

System_String_o*
CustomLogic_CustomLogicSourceFile__get_Content(CustomLogic_CustomLogicSourceFile_o* __this, MethodInfo* method)

{
  return (__this->fields)._Content_k__BackingField;
}


// CustomLogic.CustomLogicSourceFile$$get_Type
// il2cpp: int32_t CustomLogic_CustomLogicSourceFile__get_Type (CustomLogic_CustomLogicSourceFile_o* __this, const MethodInfo* method);
// 0x180a4c170

int32_t
CustomLogic_CustomLogicSourceFile__get_Type(CustomLogic_CustomLogicSourceFile_o* __this, MethodInfo* method)

{
  return (__this->fields)._Type_k__BackingField;
}


// CustomLogic.CustomLogicSourceFile$$get_StartLine
// il2cpp: int32_t CustomLogic_CustomLogicSourceFile__get_StartLine (CustomLogic_CustomLogicSourceFile_o* __this, const MethodInfo* method);
// 0x180bdb280

int32_t
CustomLogic_CustomLogicSourceFile__get_StartLine(CustomLogic_CustomLogicSourceFile_o* __this, MethodInfo* method)

{
  return (__this->fields)._StartLine_k__BackingField;
}


// CustomLogic.CustomLogicSourceFile$$set_StartLine
// il2cpp: void CustomLogic_CustomLogicSourceFile__set_StartLine (CustomLogic_CustomLogicSourceFile_o* __this, int32_t value, const MethodInfo* method);
// 0x180d23ef0

void
CustomLogic_CustomLogicSourceFile__set_StartLine(CustomLogic_CustomLogicSourceFile_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields).m_RolloverSize = value;
  return;
}


// CustomLogic.CustomLogicSourceFile$$get_EndLine
// il2cpp: int32_t CustomLogic_CustomLogicSourceFile__get_EndLine (CustomLogic_CustomLogicSourceFile_o* __this, const MethodInfo* method);
// 0x180585030

int32_t
CustomLogic_CustomLogicSourceFile__get_EndLine(CustomLogic_CustomLogicSourceFile_o* __this, MethodInfo* method)

{
  return (__this->fields)._EndLine_k__BackingField;
}


// CustomLogic.CustomLogicSourceFile$$set_EndLine
// il2cpp: void CustomLogic_CustomLogicSourceFile__set_EndLine (CustomLogic_CustomLogicSourceFile_o* __this, int32_t value, const MethodInfo* method);
// 0x180585090

void
CustomLogic_CustomLogicSourceFile__set_EndLine(CustomLogic_CustomLogicSourceFile_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields)._EndLine_k__BackingField = value;
  return;
}


// CustomLogic.CustomLogicSourceFile$$get_MapLogicOffset
// il2cpp: int32_t CustomLogic_CustomLogicSourceFile__get_MapLogicOffset (CustomLogic_CustomLogicSourceFile_o* __this, const MethodInfo* method);
// 0x180b3e080

int32_t
CustomLogic_CustomLogicSourceFile__get_MapLogicOffset(CustomLogic_CustomLogicSourceFile_o* __this, MethodInfo* method)

{
  return (__this->fields)._MapLogicOffset_k__BackingField;
}


// CustomLogic.CustomLogicSourceFile$$set_MapLogicOffset
// il2cpp: void CustomLogic_CustomLogicSourceFile__set_MapLogicOffset (CustomLogic_CustomLogicSourceFile_o* __this, int32_t value, const MethodInfo* method);
// 0x180b3e0e0

void
CustomLogic_CustomLogicSourceFile__set_MapLogicOffset(CustomLogic_CustomLogicSourceFile_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields)._MapLogicOffset_k__BackingField = value;
  return;
}


// CustomLogic.CustomLogicSourceFile$$.ctor
// il2cpp: void CustomLogic_CustomLogicSourceFile___ctor (CustomLogic_CustomLogicSourceFile_o* __this, System_String_o* name, System_String_o* content, int32_t type, const MethodInfo* method);
// 0x1820e8530

void CustomLogic_CustomLogicSourceFile___ctor
               (CustomLogic_CustomLogicSourceFile_o *__this,System_String_o *name,System_String_o *content,
               int32_t type,MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField,name);
  (__this->fields)._Content_k__BackingField = content;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Content_k__BackingField,content);
  (__this->fields)._Type_k__BackingField = type;
  (__this->fields)._StartLine_k__BackingField = 0;
  (__this->fields)._EndLine_k__BackingField = 0;
  (__this->fields)._MapLogicOffset_k__BackingField = 0;
  return;
}


// CustomLogic.CustomLogicSourceFile$$.ctor
// il2cpp: void CustomLogic_CustomLogicSourceFile___ctor (CustomLogic_CustomLogicSourceFile_o* __this, System_String_o* name, System_String_o* content, int32_t type, int32_t mapLogicOffset, const MethodInfo* method);
// 0x1820e84d0

void CustomLogic_CustomLogicSourceFile___ctor_20e84d0
               (CustomLogic_CustomLogicSourceFile_o *__this,System_String_o *name,System_String_o *content,
               int32_t type,int32_t mapLogicOffset,MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField,name);
  (__this->fields)._Content_k__BackingField = content;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Content_k__BackingField,content);
  (__this->fields)._Type_k__BackingField = type;
  (__this->fields)._StartLine_k__BackingField = 0;
  (__this->fields)._EndLine_k__BackingField = 0;
  (__this->fields)._MapLogicOffset_k__BackingField = mapLogicOffset;
  return;
}


// CustomLogic.CustomLogicSourceFile$$get_LineCount
// il2cpp: int32_t CustomLogic_CustomLogicSourceFile__get_LineCount (CustomLogic_CustomLogicSourceFile_o* __this, const MethodInfo* method);
// 0x1820e8590

int32_t CustomLogic_CustomLogicSourceFile__get_LineCount
                  (CustomLogic_CustomLogicSourceFile_o *__this,MethodInfo *method)

{
  System_String_o *__this_00;
  System_String_array *pSVar1;
  
  __this_00 = (__this->fields)._Content_k__BackingField;
  if (__this_00 != (System_String_o *)0x0) {
    pSVar1 = System_String__Split(__this_00,10,0,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_array *)0x0) {
      return (int32_t)pSVar1->max_length;
    }
  }
  ThrowNullReferenceException();
}


