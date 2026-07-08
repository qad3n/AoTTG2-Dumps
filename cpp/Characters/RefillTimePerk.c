// Type: Characters.RefillTimePerk
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/RefillTimePerk.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Perks/RefillTimePerk.cs  [prior source available (delta unverified)]
// --------------------------------

// Characters.RefillTimePerk$$get_Name
// il2cpp: System_String_o* Characters_RefillTimePerk__get_Name (Characters_RefillTimePerk_o* __this, const MethodInfo* method);
// 0x3fda730

System_String_o *
Characters_RefillTimePerk__get_Name(Characters_RefillTimePerk_o *__this,MethodInfo *method)

{
  if (DAT_05704116 == '\0') {
    il2cpp_init_method_metadata(&"RefillTime");
    DAT_05704116 = '\x01';
  }
  return "RefillTime";
}


// Characters.RefillTimePerk$$get_MaxPoints
// il2cpp: int32_t Characters_RefillTimePerk__get_MaxPoints (Characters_RefillTimePerk_o* __this, const MethodInfo* method);
// 0x3fda760

int32_t Characters_RefillTimePerk__get_MaxPoints
                  (Characters_RefillTimePerk_o *__this,MethodInfo *method)

{
  return 2;
}


// Characters.RefillTimePerk$$.ctor
// il2cpp: void Characters_RefillTimePerk___ctor (Characters_RefillTimePerk_o* __this, const MethodInfo* method);
// 0x3fd8650

void Characters_RefillTimePerk___ctor(Characters_RefillTimePerk_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  undefined8 extraout_RDX;
  
  if (DAT_05704111 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__int);
    DAT_05704111 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__int);
  System_Collections_Generic_Dictionary<object__int>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_Int32);
  (__this->fields).Requirements = (System_Collections_Generic_Dictionary_string__int__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields).Requirements);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  vtable_dispatch = (__this->klass->vtable)._6_SetupRequirements.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._6_SetupRequirements.method,extraout_RDX,
             vtable_dispatch);
  return;
}


