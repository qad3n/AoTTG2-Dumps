// Type: Utility.BaseCSVContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/BaseCSVContainer.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/BaseCSVContainer.cs
// --------------------------------

// Utility.BaseCSVContainer$$get_Delimiter
// il2cpp: uint16_t Utility_BaseCSVContainer__get_Delimiter (Utility_BaseCSVContainer_o* __this, const MethodInfo* method);
// 0x5de0fa0

uint16_t Utility_BaseCSVContainer__get_Delimiter(Utility_BaseCSVContainer_o *__this,MethodInfo *method)

{
  return 0x3b;
}


// Utility.BaseCSVContainer$$get_UseNewlines
// il2cpp: bool Utility_BaseCSVContainer__get_UseNewlines (Utility_BaseCSVContainer_o* __this, const MethodInfo* method);
// 0x5de0fb0

bool Utility_BaseCSVContainer__get_UseNewlines(Utility_BaseCSVContainer_o *__this,MethodInfo *method)

{
  return true;
}


// Utility.BaseCSVContainer$$Serialize
// il2cpp: System_String_o* Utility_BaseCSVContainer__Serialize (Utility_BaseCSVContainer_o* __this, const MethodInfo* method);
// 0x5de0fc0

System_String_o * Utility_BaseCSVContainer__Serialize(Utility_BaseCSVContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  pSVar2 = Utility_BaseCSVObject__Serialize((Utility_BaseCSVObject_o *)__this,method);
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
// 0x5de1240

System_String_o *
Utility_BaseCSVContainer__InsertNewlines
          (Utility_BaseCSVContainer_o *__this,System_String_o *str,MethodInfo *method)

{
  uint16_t uVar1;
  undefined8 in_RAX;
  System_String_array *value;
  System_String_o *pSVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07548282 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_07548282 = '\x01';
  }
  uVar1 = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)
                    (__this,(__this->klass->vtable)._4_get_Delimiter.method);
  if (str == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = System_String__Split(str,uVar1,0,(MethodInfo *)0x0);
  uVar1 = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)
                    (__this,(__this->klass->vtable)._4_get_Delimiter.method);
  uStack_18 = CONCAT26(uVar1,(undefined6)uStack_18);
  if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556750);
  }
  pSVar2 = System_Char__ToString((uint16_t *)((long)&uStack_18 + 6),(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_52f0320(pSVar2,"\n",(MethodInfo *)0x0);
  pSVar2 = System_String__Join(pSVar2,value,(MethodInfo *)0x0);
  return pSVar2;
}


// Utility.BaseCSVContainer$$.ctor
// il2cpp: void Utility_BaseCSVContainer___ctor (Utility_BaseCSVContainer_o* __this, const MethodInfo* method);
// 0x5de1300

void Utility_BaseCSVContainer___ctor(Utility_BaseCSVContainer_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548283 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseCSVObject);
    Il2CppMethodInitialized_07548283 = '\x01';
    uVar1 = (TypeInfo_Utility_BaseCSVObject->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_BaseCSVObject->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_BaseCSVObject);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


