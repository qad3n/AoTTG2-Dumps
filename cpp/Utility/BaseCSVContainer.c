// Type: Utility.BaseCSVContainer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/BaseCSVContainer.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/BaseCSVContainer.cs
// --------------------------------

// Utility.BaseCSVContainer$$get_Delimiter
// il2cpp: uint16_t Utility_BaseCSVContainer__get_Delimiter (Utility_BaseCSVContainer_o* __this, const MethodInfo* method);
// 0x182329c60

uint16_t Utility_BaseCSVContainer__get_Delimiter(Utility_BaseCSVContainer_o *__this,MethodInfo *method)

{
  return 0x3b;
}


// Utility.BaseCSVContainer$$get_UseNewlines
// il2cpp: bool Utility_BaseCSVContainer__get_UseNewlines (Utility_BaseCSVContainer_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
Utility_BaseCSVContainer__get_UseNewlines(Utility_BaseCSVContainer_o* __this, MethodInfo* method)

{
  return true;
}


// Utility.BaseCSVContainer$$Serialize
// il2cpp: System_String_o* Utility_BaseCSVContainer__Serialize (Utility_BaseCSVContainer_o* __this, const MethodInfo* method);
// 0x182329bb0

System_String_o * Utility_BaseCSVContainer__Serialize(Utility_BaseCSVContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  pSVar2 = Utility_BaseCSVObject__Serialize((Utility_BaseCSVObject_o *)__this,(MethodInfo *)0x0);
  bVar1 = (*(__this->klass->vtable)._18_get_UseNewlines.methodPtr)
                    (__this,(__this->klass->vtable)._18_get_UseNewlines.method);
  if (bVar1) {
    pSVar2 = (*(__this->klass->vtable)._19_InsertNewlines.methodPtr)
                       (__this,pSVar2,(__this->klass->vtable)._19_InsertNewlines.method);
    return pSVar2;
  }
  return pSVar2;
}


// Utility.BaseCSVContainer$$InsertNewlines
// il2cpp: System_String_o* Utility_BaseCSVContainer__InsertNewlines (Utility_BaseCSVContainer_o* __this, System_String_o* str, const MethodInfo* method);
// 0x182329ae0

System_String_o *
Utility_BaseCSVContainer__InsertNewlines
          (Utility_BaseCSVContainer_o *__this,System_String_o *str,MethodInfo *method)

{
  uint16_t separator;
  System_String_array *value;
  System_String_o *pSVar1;
  Utility_BaseCSVContainer_c *method_00;
  uint16_t local_res8 [4];
  
  if (Il2CppMethodInitialized_1843477d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_1843477d7 = '\x01';
  }
  local_res8[0] = 0;
  separator = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_Delimiter.method);
  if (str != (System_String_o *)0x0) {
    value = System_String__Split(str,separator,0,(MethodInfo *)0x0);
    method_00 = __this->klass;
    local_res8[0] =
         (*(method_00->vtable)._4_get_Delimiter.methodPtr)(__this,(method_00->vtable)._4_get_Delimiter.method)
    ;
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    pSVar1 = System_Char__ToString(local_res8,(System_IFormatProvider_o *)0x0,(MethodInfo *)method_00);
    pSVar1 = System_String__Concat_1969e50(pSVar1,"\n",(MethodInfo *)0x0);
    pSVar1 = System_String__Join(pSVar1,value,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// Utility.BaseCSVContainer$$.ctor
// il2cpp: void Utility_BaseCSVContainer___ctor (Utility_BaseCSVContainer_o* __this, const MethodInfo* method);
// 0x182329c10

void Utility_BaseCSVContainer___ctor(Utility_BaseCSVContainer_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843477d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseCSVObject);
    Il2CppMethodInitialized_1843477d8 = '\x01';
  }
  if ((TypeInfo_Utility_BaseCSVObject->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_BaseCSVObject);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


