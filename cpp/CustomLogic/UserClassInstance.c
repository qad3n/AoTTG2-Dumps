// Type: CustomLogic.UserClassInstance
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/UserClassInstance.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.UserClassInstance$$.ctor
// il2cpp: void CustomLogic_UserClassInstance___ctor (CustomLogic_UserClassInstance_o* __this, System_String_o* className, const MethodInfo* method);
// 0x3f67020

void CustomLogic_UserClassInstance___ctor
               (CustomLogic_UserClassInstance_o *__this,System_String_o *className,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_05703eeb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&"Type");
    DAT_05703eeb = '\x01';
  }
  CustomLogic_CustomLogicClassInstance___ctor
            ((CustomLogic_CustomLogicClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._className = className;
  il2cpp_runtime_glue(&(__this->fields)._className,className);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this_00,"Type",(Il2CppObject *)className,MethodInfo_Void_set_Item);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.UserClassInstance$$get_ClassName
// il2cpp: System_String_o* CustomLogic_UserClassInstance__get_ClassName (CustomLogic_UserClassInstance_o* __this, const MethodInfo* method);
// 0x3f6e730

System_String_o *
CustomLogic_UserClassInstance__get_ClassName
          (CustomLogic_UserClassInstance_o *__this,MethodInfo *method)

{
  return (__this->fields)._className;
}


