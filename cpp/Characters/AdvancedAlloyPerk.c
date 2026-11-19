// Type: Characters.AdvancedAlloyPerk
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/AdvancedAlloyPerk.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/AdvancedAlloyPerk.cs
// --------------------------------

// Characters.AdvancedAlloyPerk$$get_Name
// il2cpp: System_String_o* Characters_AdvancedAlloyPerk__get_Name (Characters_AdvancedAlloyPerk_o* __this, const MethodInfo* method);
// 0x5bfafb0

System_String_o *
Characters_AdvancedAlloyPerk__get_Name(Characters_AdvancedAlloyPerk_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754764d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AdvancedAlloy");
    Il2CppMethodInitialized_0754764d = '\x01';
  }
  return "AdvancedAlloy";
}


// Characters.AdvancedAlloyPerk$$get_MaxPoints
// il2cpp: int32_t Characters_AdvancedAlloyPerk__get_MaxPoints (Characters_AdvancedAlloyPerk_o* __this, const MethodInfo* method);
// 0x5bfafe0

int32_t Characters_AdvancedAlloyPerk__get_MaxPoints(Characters_AdvancedAlloyPerk_o *__this,MethodInfo *method)

{
  return 1;
}


// Characters.AdvancedAlloyPerk$$SetupRequirements
// il2cpp: void Characters_AdvancedAlloyPerk__SetupRequirements (Characters_AdvancedAlloyPerk_o* __this, const MethodInfo* method);
// 0x5bfaff0

void Characters_AdvancedAlloyPerk__SetupRequirements
               (Characters_AdvancedAlloyPerk_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  
  if (Il2CppMethodInitialized_0754764e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"DurableBlades");
    Il2CppMethodInitialized_0754764e = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).Requirements;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__int___Add
            (__this_00,(Il2CppObject *)"DurableBlades",1,
             (MethodInfo_4A9D780 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
  return;
}


// Characters.AdvancedAlloyPerk$$.ctor
// il2cpp: void Characters_AdvancedAlloyPerk___ctor (Characters_AdvancedAlloyPerk_o* __this, const MethodInfo* method);
// 0x5bf95e0

void Characters_AdvancedAlloyPerk___ctor(Characters_AdvancedAlloyPerk_o *__this,MethodInfo *method)

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


