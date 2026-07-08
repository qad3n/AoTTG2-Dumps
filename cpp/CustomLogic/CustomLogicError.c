// Type: CustomLogic.CustomLogicError
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicError.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicError$$get_Message
// il2cpp: System_String_o* CustomLogic_CustomLogicError__get_Message (CustomLogic_CustomLogicError_o* __this, const MethodInfo* method);
// 0x3f50b10

System_String_o *
CustomLogic_CustomLogicError__get_Message(CustomLogic_CustomLogicError_o *__this,MethodInfo *method)

{
  return (__this->fields)._Message_k__BackingField;
}


// CustomLogic.CustomLogicError$$set_Message
// il2cpp: void CustomLogic_CustomLogicError__set_Message (CustomLogic_CustomLogicError_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3f50b20

void CustomLogic_CustomLogicError__set_Message
               (CustomLogic_CustomLogicError_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Message_k__BackingField = value;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// CustomLogic.CustomLogicError$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicError__get_ClassName (CustomLogic_CustomLogicError_o* __this, const MethodInfo* method);
// 0x3f50b30

System_String_o *
CustomLogic_CustomLogicError__get_ClassName
          (CustomLogic_CustomLogicError_o *__this,MethodInfo *method)

{
  return (__this->fields)._ClassName_k__BackingField;
}


// CustomLogic.CustomLogicError$$set_ClassName
// il2cpp: void CustomLogic_CustomLogicError__set_ClassName (CustomLogic_CustomLogicError_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3f50b40

void CustomLogic_CustomLogicError__set_ClassName
               (CustomLogic_CustomLogicError_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._ClassName_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._ClassName_k__BackingField);
  return;
}


// CustomLogic.CustomLogicError$$get_MethodName
// il2cpp: System_String_o* CustomLogic_CustomLogicError__get_MethodName (CustomLogic_CustomLogicError_o* __this, const MethodInfo* method);
// 0x3f50b50

System_String_o *
CustomLogic_CustomLogicError__get_MethodName
          (CustomLogic_CustomLogicError_o *__this,MethodInfo *method)

{
  return (__this->fields)._MethodName_k__BackingField;
}


// CustomLogic.CustomLogicError$$set_MethodName
// il2cpp: void CustomLogic_CustomLogicError__set_MethodName (CustomLogic_CustomLogicError_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3f50b60

void CustomLogic_CustomLogicError__set_MethodName
               (CustomLogic_CustomLogicError_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._MethodName_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._MethodName_k__BackingField);
  return;
}


// CustomLogic.CustomLogicError$$get_LineNumber
// il2cpp: int32_t CustomLogic_CustomLogicError__get_LineNumber (CustomLogic_CustomLogicError_o* __this, const MethodInfo* method);
// 0x3f50b70

int32_t CustomLogic_CustomLogicError__get_LineNumber
                  (CustomLogic_CustomLogicError_o *__this,MethodInfo *method)

{
  return (__this->fields)._LineNumber_k__BackingField;
}


// CustomLogic.CustomLogicError$$set_LineNumber
// il2cpp: void CustomLogic_CustomLogicError__set_LineNumber (CustomLogic_CustomLogicError_o* __this, int32_t value, const MethodInfo* method);
// 0x3f50b80

void CustomLogic_CustomLogicError__set_LineNumber
               (CustomLogic_CustomLogicError_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields)._LineNumber_k__BackingField = value;
  return;
}


// CustomLogic.CustomLogicError$$get_FormattedLineNumber
// il2cpp: System_String_o* CustomLogic_CustomLogicError__get_FormattedLineNumber (CustomLogic_CustomLogicError_o* __this, const MethodInfo* method);
// 0x3f50b90

System_String_o *
CustomLogic_CustomLogicError__get_FormattedLineNumber
          (CustomLogic_CustomLogicError_o *__this,MethodInfo *method)

{
  return (__this->fields)._FormattedLineNumber_k__BackingField;
}


// CustomLogic.CustomLogicError$$set_FormattedLineNumber
// il2cpp: void CustomLogic_CustomLogicError__set_FormattedLineNumber (CustomLogic_CustomLogicError_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3f50ba0

void CustomLogic_CustomLogicError__set_FormattedLineNumber
               (CustomLogic_CustomLogicError_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._FormattedLineNumber_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._FormattedLineNumber_k__BackingField);
  return;
}


// CustomLogic.CustomLogicError$$get_Namespace
// il2cpp: System_Nullable_CustomLogicSourceType__o CustomLogic_CustomLogicError__get_Namespace (CustomLogic_CustomLogicError_o* __this, const MethodInfo* method);
// 0x3f50bb0

System_Nullable_CustomLogicSourceType__o
CustomLogic_CustomLogicError__get_Namespace
          (CustomLogic_CustomLogicError_o *__this,MethodInfo *method)

{
  return (System_Nullable_CustomLogicSourceType__o)
         (__this->fields)._Namespace_k__BackingField.fields;
}


// CustomLogic.CustomLogicError$$set_Namespace
// il2cpp: void CustomLogic_CustomLogicError__set_Namespace (CustomLogic_CustomLogicError_o* __this, System_Nullable_CustomLogicSourceType__o value, const MethodInfo* method);
// 0x3f50bc0

void CustomLogic_CustomLogicError__set_Namespace
               (CustomLogic_CustomLogicError_o *__this,
               System_Nullable_CustomLogicSourceType__o value,MethodInfo *method)

{
  (__this->fields)._Namespace_k__BackingField.fields = value.fields;
  return;
}


// CustomLogic.CustomLogicError$$get_FullMessage
// il2cpp: System_String_o* CustomLogic_CustomLogicError__get_FullMessage (CustomLogic_CustomLogicError_o* __this, const MethodInfo* method);
// 0x3f50bd0

System_String_o *
CustomLogic_CustomLogicError__get_FullMessage
          (CustomLogic_CustomLogicError_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_array *values;
  
  if (DAT_05703e70 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&"Custom logic runtime error ");
    il2cpp_init_method_metadata(&"at line ");
    il2cpp_init_method_metadata(&" in ");
    il2cpp_init_method_metadata(&"at ");
    il2cpp_init_method_metadata(&".");
    DAT_05703e70 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty
                    ((__this->fields)._FormattedLineNumber_k__BackingField,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pSVar2 = System_String__Concat
                       ("at ",(__this->fields)._ClassName_k__BackingField,".",
                        (__this->fields)._MethodName_k__BackingField,(MethodInfo *)0x0);
LAB_03f50d48:
    pSVar2 = System_String__Concat
                       ("Custom logic runtime error ",pSVar2,": ",(__this->fields)._Message_k__BackingField,
                        (MethodInfo *)0x0);
    return pSVar2;
  }
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,6);
  if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = "at line ";
    il2cpp_runtime_glue(values->m_Items);
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = (__this->fields)._FormattedLineNumber_k__BackingField;
      il2cpp_runtime_glue(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = " in ";
        il2cpp_runtime_glue(values->m_Items + 2);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = (__this->fields)._ClassName_k__BackingField;
          il2cpp_runtime_glue(values->m_Items + 3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = ".";
            il2cpp_runtime_glue(values->m_Items + 4);
            if (5 < (uint)values->max_length) {
              values->m_Items[5] = (__this->fields)._MethodName_k__BackingField;
              il2cpp_runtime_glue(values->m_Items + 5);
              pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
              goto LAB_03f50d48;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicError$$.ctor
// il2cpp: void CustomLogic_CustomLogicError___ctor (CustomLogic_CustomLogicError_o* __this, System_String_o* message, System_String_o* className, System_String_o* methodName, int32_t lineNumber, System_String_o* formattedLineNumber, System_Nullable_CustomLogicSourceType__o ns, const MethodInfo* method);
// 0x3f50d80

void CustomLogic_CustomLogicError___ctor
               (CustomLogic_CustomLogicError_o *__this,System_String_o *message,
               System_String_o *className,System_String_o *methodName,int32_t lineNumber,
               System_String_o *formattedLineNumber,System_Nullable_CustomLogicSourceType__o ns,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Message_k__BackingField = message;
  il2cpp_runtime_glue(&__this->fields,message);
  (__this->fields)._ClassName_k__BackingField = className;
  il2cpp_runtime_glue(&(__this->fields)._ClassName_k__BackingField,className);
  (__this->fields)._MethodName_k__BackingField = methodName;
  il2cpp_runtime_glue(&(__this->fields)._MethodName_k__BackingField,methodName);
  (__this->fields)._LineNumber_k__BackingField = lineNumber;
  (__this->fields)._FormattedLineNumber_k__BackingField = formattedLineNumber;
  il2cpp_runtime_glue(&(__this->fields)._FormattedLineNumber_k__BackingField,formattedLineNumber);
  (__this->fields)._Namespace_k__BackingField.fields = ns.fields;
  return;
}


// CustomLogic.CustomLogicError$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicError__ToString (CustomLogic_CustomLogicError_o* __this, const MethodInfo* method);
// 0x3f50e00

System_String_o *
CustomLogic_CustomLogicError__ToString(CustomLogic_CustomLogicError_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_array *values;
  
  if (DAT_05703e70 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&"Custom logic runtime error ");
    il2cpp_init_method_metadata(&"at line ");
    il2cpp_init_method_metadata(&" in ");
    il2cpp_init_method_metadata(&"at ");
    il2cpp_init_method_metadata(&".");
    DAT_05703e70 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty
                    ((__this->fields)._FormattedLineNumber_k__BackingField,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pSVar2 = System_String__Concat
                       ("at ",(__this->fields)._ClassName_k__BackingField,".",
                        (__this->fields)._MethodName_k__BackingField,(MethodInfo *)0x0);
LAB_03f50d48:
    pSVar2 = System_String__Concat
                       ("Custom logic runtime error ",pSVar2,": ",(__this->fields)._Message_k__BackingField,
                        (MethodInfo *)0x0);
    return pSVar2;
  }
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,6);
  if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = "at line ";
    il2cpp_runtime_glue(values->m_Items);
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = (__this->fields)._FormattedLineNumber_k__BackingField;
      il2cpp_runtime_glue(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = " in ";
        il2cpp_runtime_glue(values->m_Items + 2);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = (__this->fields)._ClassName_k__BackingField;
          il2cpp_runtime_glue(values->m_Items + 3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = ".";
            il2cpp_runtime_glue(values->m_Items + 4);
            if (5 < (uint)values->max_length) {
              values->m_Items[5] = (__this->fields)._MethodName_k__BackingField;
              il2cpp_runtime_glue(values->m_Items + 5);
              pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
              goto LAB_03f50d48;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


