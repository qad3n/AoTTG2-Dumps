// Type: Characters.AdvancedAlloyPerk
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/AdvancedAlloyPerk.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/AdvancedAlloyPerk.cs
// --------------------------------

// Characters.AdvancedAlloyPerk$$get_Name
// il2cpp: System_String_o* Characters_AdvancedAlloyPerk__get_Name (Characters_AdvancedAlloyPerk_o* __this, const MethodInfo* method);
// 0x42e6a60

System_String_o *
Characters_AdvancedAlloyPerk__get_Name(Characters_AdvancedAlloyPerk_o *__this,MethodInfo *method)

{
  if (g_data_057ade7c == '\0') {
    il2cpp_runtime_helper_023445d0(&"AdvancedAlloy");
    g_data_057ade7c = '\x01';
  }
  return "AdvancedAlloy";
}


// Characters.AdvancedAlloyPerk$$get_MaxPoints
// il2cpp: int32_t Characters_AdvancedAlloyPerk__get_MaxPoints (Characters_AdvancedAlloyPerk_o* __this, const MethodInfo* method);
// 0x42e6a90

int32_t Characters_AdvancedAlloyPerk__get_MaxPoints(Characters_AdvancedAlloyPerk_o *__this,MethodInfo *method)

{
  return 1;
}


// Characters.AdvancedAlloyPerk$$SetupRequirements
// il2cpp: void Characters_AdvancedAlloyPerk__SetupRequirements (Characters_AdvancedAlloyPerk_o* __this, const MethodInfo* method);
// 0x42e6aa0

void Characters_AdvancedAlloyPerk__SetupRequirements
               (Characters_AdvancedAlloyPerk_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_00;
  System_Collections_Generic_Dictionary_object__int__o *__this_01;
  
  if (g_data_057ade7d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"DurableBlades");
    g_data_057ade7d = '\x01';
  }
  __this_01 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).Requirements;
  if (__this_01 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary_object__int___Add(__this_01,"DurableBlades",1,MethodInfo_Void_Add);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade7f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
    g_data_057ade7f = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_object__int__o *)__this_00,MethodInfo_Dictionary_2_System_String_System_Int32);
  (__this_01->fields)._entries = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._entries);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  (*(__this_01->klass->vtable)._6_System_Collections_Generic_IDictionary_TKey_TValue__get_Keys.methodPtr)
            (__this_01,
             (__this_01->klass->vtable)._6_System_Collections_Generic_IDictionary_TKey_TValue__get_Keys.method
            );
  return;
}


// Characters.AdvancedAlloyPerk$$.ctor
// il2cpp: void Characters_AdvancedAlloyPerk___ctor (Characters_AdvancedAlloyPerk_o* __this, const MethodInfo* method);
// 0x42e4df0

void Characters_AdvancedAlloyPerk___ctor(Characters_AdvancedAlloyPerk_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  undefined8 extraout_RDX;
  
  if (g_data_057ade7f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
    g_data_057ade7f = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_Int32);
  (__this->fields).Requirements = (System_Collections_Generic_Dictionary_string__int__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Requirements);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  vtableDispatch = (__this->klass->vtable)._6_SetupRequirements.methodPtr;
  (*vtableDispatch)
            (__this,(__this->klass->vtable)._6_SetupRequirements.method,extraout_RDX,vtableDispatch);
  return;
}


