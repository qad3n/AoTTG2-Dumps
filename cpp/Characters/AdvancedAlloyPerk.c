// Type: Characters.AdvancedAlloyPerk
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/AdvancedAlloyPerk.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Perks/AdvancedAlloyPerk.cs  [CHANGED since prior version]
// --------------------------------

// Characters.AdvancedAlloyPerk$$get_Name
// il2cpp: System_String_o* Characters_AdvancedAlloyPerk__get_Name (Characters_AdvancedAlloyPerk_o* __this, const MethodInfo* method);
// 0x3fda1a0

System_String_o *
Characters_AdvancedAlloyPerk__get_Name(Characters_AdvancedAlloyPerk_o *__this,MethodInfo *method)

{
  if (DAT_0570410e == '\0') {
    il2cpp_init_method_metadata(&"AdvancedAlloy");
    DAT_0570410e = '\x01';
  }
  return "AdvancedAlloy";
}


// Characters.AdvancedAlloyPerk$$get_MaxPoints
// il2cpp: int32_t Characters_AdvancedAlloyPerk__get_MaxPoints (Characters_AdvancedAlloyPerk_o* __this, const MethodInfo* method);
// 0x3fda1d0

int32_t Characters_AdvancedAlloyPerk__get_MaxPoints
                  (Characters_AdvancedAlloyPerk_o *__this,MethodInfo *method)

{
  return 1;
}


// Characters.AdvancedAlloyPerk$$SetupRequirements
// il2cpp: void Characters_AdvancedAlloyPerk__SetupRequirements (Characters_AdvancedAlloyPerk_o* __this, const MethodInfo* method);
// 0x3fda1e0

void Characters_AdvancedAlloyPerk__SetupRequirements
               (Characters_AdvancedAlloyPerk_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  
  if (DAT_0570410f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&"DurableBlades");
    DAT_0570410f = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).Requirements;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary<object__int>__Add(__this_00,"DurableBlades",1,MethodInfo_Void_Add);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AdvancedAlloyPerk$$.ctor
// il2cpp: void Characters_AdvancedAlloyPerk___ctor (Characters_AdvancedAlloyPerk_o* __this, const MethodInfo* method);
// 0x3fd8530

void Characters_AdvancedAlloyPerk___ctor(Characters_AdvancedAlloyPerk_o *__this,MethodInfo *method)

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


