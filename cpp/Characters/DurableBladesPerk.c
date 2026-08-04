// Type: Characters.DurableBladesPerk
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/DurableBladesPerk.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/DurableBladesPerk.cs
// --------------------------------

// Characters.DurableBladesPerk$$get_Name
// il2cpp: System_String_o* Characters_DurableBladesPerk__get_Name (Characters_DurableBladesPerk_o* __this, const MethodInfo* method);
// 0x42e6ed0

System_String_o *
Characters_DurableBladesPerk__get_Name(Characters_DurableBladesPerk_o *__this,MethodInfo *method)

{
  if (g_data_057ade81 == '\0') {
    il2cpp_runtime_helper_023445d0(&"DurableBlades");
    g_data_057ade81 = '\x01';
  }
  return "DurableBlades";
}


// Characters.DurableBladesPerk$$get_MaxPoints
// il2cpp: int32_t Characters_DurableBladesPerk__get_MaxPoints (Characters_DurableBladesPerk_o* __this, const MethodInfo* method);
// 0x42e6f00

int32_t Characters_DurableBladesPerk__get_MaxPoints(Characters_DurableBladesPerk_o *__this,MethodInfo *method)

{
  return 1;
}


// Characters.DurableBladesPerk$$.ctor
// il2cpp: void Characters_DurableBladesPerk___ctor (Characters_DurableBladesPerk_o* __this, const MethodInfo* method);
// 0x42e4e80

void Characters_DurableBladesPerk___ctor(Characters_DurableBladesPerk_o *__this,MethodInfo *method)

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


