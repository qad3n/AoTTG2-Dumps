// Type: Characters.DurableBladesPerk
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/DurableBladesPerk.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/DurableBladesPerk.cs
// --------------------------------

// Characters.DurableBladesPerk$$get_Name
// il2cpp: System_String_o* Characters_DurableBladesPerk__get_Name (Characters_DurableBladesPerk_o* __this, const MethodInfo* method);
// 0x5bfb3d0

System_String_o *
Characters_DurableBladesPerk__get_Name(Characters_DurableBladesPerk_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547652 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"DurableBlades");
    Il2CppMethodInitialized_07547652 = '\x01';
  }
  return "DurableBlades";
}


// Characters.DurableBladesPerk$$get_MaxPoints
// il2cpp: int32_t Characters_DurableBladesPerk__get_MaxPoints (Characters_DurableBladesPerk_o* __this, const MethodInfo* method);
// 0x5bfb400

int32_t Characters_DurableBladesPerk__get_MaxPoints(Characters_DurableBladesPerk_o *__this,MethodInfo *method)

{
  return 1;
}


// Characters.DurableBladesPerk$$.ctor
// il2cpp: void Characters_DurableBladesPerk___ctor (Characters_DurableBladesPerk_o* __this, const MethodInfo* method);
// 0x5bf9670

void Characters_DurableBladesPerk___ctor(Characters_DurableBladesPerk_o *__this,MethodInfo *method)

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


