// Type: Utility.BaseCSVContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/BaseCSVContainer.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/BaseCSVContainer.cs
// --------------------------------

// Utility.BaseCSVContainer$$get_Delimiter
// il2cpp: uint16_t Utility_BaseCSVContainer__get_Delimiter (Utility_BaseCSVContainer_o* __this, const MethodInfo* method);
// 0x448c830

uint16_t Utility_BaseCSVContainer__get_Delimiter(Utility_BaseCSVContainer_o *__this,MethodInfo *method)

{
  return 0x3b;
}


// Utility.BaseCSVContainer$$get_UseNewlines
// il2cpp: bool Utility_BaseCSVContainer__get_UseNewlines (Utility_BaseCSVContainer_o* __this, const MethodInfo* method);
// 0x448c840

bool_conflict Utility_BaseCSVContainer__get_UseNewlines(Utility_BaseCSVContainer_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Utility.BaseCSVContainer$$Serialize
// il2cpp: System_String_o* Utility_BaseCSVContainer__Serialize (Utility_BaseCSVContainer_o* __this, const MethodInfo* method);
// 0x448c850

System_String_o * Utility_BaseCSVContainer__Serialize(Utility_BaseCSVContainer_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  char cVar1;
  System_String_o *pSVar2;
  
  pSVar2 = Utility_BaseCSVObject__Serialize((Utility_BaseCSVObject_o *)__this,method);
  cVar1 = (*(__this->klass->vtable)._18_get_UseNewlines.methodPtr)
                    (__this,(__this->klass->vtable)._18_get_UseNewlines.method);
  if (cVar1 != '\0') {
    vtableDispatch = (__this->klass->vtable)._19_InsertNewlines.methodPtr;
    pSVar2 = (System_String_o *)
             (*vtableDispatch)
                       (__this,pSVar2,(__this->klass->vtable)._19_InsertNewlines.method,vtableDispatch)
    ;
    return pSVar2;
  }
  return pSVar2;
}


// Utility.BaseCSVContainer$$InsertNewlines
// il2cpp: System_String_o* Utility_BaseCSVContainer__InsertNewlines (Utility_BaseCSVContainer_o* __this, System_String_o* str, const MethodInfo* method);
// 0x448cad0

System_String_o *
Utility_BaseCSVContainer__InsertNewlines
          (Utility_BaseCSVContainer_o *__this,System_String_o *str,MethodInfo *method)

{
  int iVar1;
  uint16_t separator;
  undefined2 uVar2;
  ulong in_RAX;
  System_String_array *value;
  System_String_o *pSVar3;
  System_String_o *extraout_RAX;
  System_String_o *extraout_RAX_00;
  MethodInfo *extraout_RDX;
  Il2CppObject *__this_00;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (g_data_057ae8e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057ae8e5 = '\x01';
    method = extraout_RDX;
  }
  uStack_18 = uStack_18 & 0xffffffffffff;
  __this_00 = (Il2CppObject *)__this;
  separator = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_Delimiter.method,method);
  if (str != (System_String_o *)0x0) {
    value = System_String__Split(str,separator,0,(MethodInfo *)0x0);
    uVar2 = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)(__this);
    uStack_18 = CONCAT26(uVar2,(undefined6)uStack_18);
    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = System_Char__ToString((short)&uStack_18 + 6,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_3ae5ba0(pSVar3,"\n",(MethodInfo *)0x0);
    pSVar3 = System_String__Join(pSVar3,value,(MethodInfo *)0x0);
    return pSVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    g_data_057ae8e6 = '\x01';
    iVar1 = *(int *)(TypeInfo_BaseCSVObject + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BaseCSVObject + 0xe4);
  }
  if (iVar1 != 0) {
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// Utility.BaseCSVContainer$$.ctor
// il2cpp: void Utility_BaseCSVContainer___ctor (Utility_BaseCSVContainer_o* __this, const MethodInfo* method);
// 0x448cba0

void Utility_BaseCSVContainer___ctor(Utility_BaseCSVContainer_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae8e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    g_data_057ae8e6 = '\x01';
    iVar1 = *(int *)(TypeInfo_BaseCSVObject + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BaseCSVObject + 0xe4);
  }
  if (iVar1 != 0) {
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


