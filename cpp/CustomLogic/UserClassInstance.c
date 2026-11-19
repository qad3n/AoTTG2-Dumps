// Type: CustomLogic.UserClassInstance
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/UserClassInstance.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.UserClassInstance$$.ctor
// il2cpp: void CustomLogic_UserClassInstance___ctor (CustomLogic_UserClassInstance_o* __this, System_String_o* className, const MethodInfo* method);
// 0x5b8fbd0

void CustomLogic_UserClassInstance___ctor
               (CustomLogic_UserClassInstance_o *__this,System_String_o *className,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (Il2CppMethodInitialized_075473ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    Il2CppMethodInitialized_075473ee = '\x01';
  }
  CustomLogic_CustomLogicClassInstance___ctor
            ((CustomLogic_CustomLogicClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._className = className;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._className);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this_00,(Il2CppObject *)"Type",(Il2CppObject *)className,
             (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
  return;
}


// CustomLogic.UserClassInstance$$get_ClassName
// il2cpp: System_String_o* CustomLogic_UserClassInstance__get_ClassName (CustomLogic_UserClassInstance_o* __this, const MethodInfo* method);
// 0x5b8fc50

System_String_o *
CustomLogic_UserClassInstance__get_ClassName(CustomLogic_UserClassInstance_o *__this,MethodInfo *method)

{
  return (__this->fields)._className;
}


