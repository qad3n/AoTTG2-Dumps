// Type: Characters.RefillTimePerk
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/RefillTimePerk.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/RefillTimePerk.cs
// --------------------------------

// Characters.RefillTimePerk$$get_Name
// il2cpp: System_String_o* Characters_RefillTimePerk__get_Name (Characters_RefillTimePerk_o* __this, const MethodInfo* method);
// 0x5bfb4f0

System_String_o * Characters_RefillTimePerk__get_Name(Characters_RefillTimePerk_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547655 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"RefillTime");
    Il2CppMethodInitialized_07547655 = '\x01';
  }
  return "RefillTime";
}


// Characters.RefillTimePerk$$get_MaxPoints
// il2cpp: int32_t Characters_RefillTimePerk__get_MaxPoints (Characters_RefillTimePerk_o* __this, const MethodInfo* method);
// 0x5bfb520

int32_t Characters_RefillTimePerk__get_MaxPoints(Characters_RefillTimePerk_o *__this,MethodInfo *method)

{
  return 2;
}


// Characters.RefillTimePerk$$.ctor
// il2cpp: void Characters_RefillTimePerk___ctor (Characters_RefillTimePerk_o* __this, const MethodInfo* method);
// 0x5bf9700

void Characters_RefillTimePerk___ctor(Characters_RefillTimePerk_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__int__o *__this_00;
  
  if (Il2CppMethodInitialized_07547650 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
    Il2CppMethodInitialized_07547650 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_object__int__o *)__this_00,
             (MethodInfo_4A9CB80 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  (__this->fields).Requirements = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Requirements);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._6_SetupRequirements.methodPtr)
            (__this,(__this->klass->vtable)._6_SetupRequirements.method);
  return;
}


