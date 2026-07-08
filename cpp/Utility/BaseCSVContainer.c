// Type: Utility.BaseCSVContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/BaseCSVContainer.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/CSV/BaseCSVContainer.cs  [CHANGED since prior version]
// --------------------------------

// Utility.BaseCSVContainer$$get_Delimiter
// il2cpp: uint16_t Utility_BaseCSVContainer__get_Delimiter (Utility_BaseCSVContainer_o* __this, const MethodInfo* method);
// 0x41516c0

uint16_t Utility_BaseCSVContainer__get_Delimiter
                   (Utility_BaseCSVContainer_o *__this,MethodInfo *method)

{
  return 0x3b;
}


// Utility.BaseCSVContainer$$get_UseNewlines
// il2cpp: bool Utility_BaseCSVContainer__get_UseNewlines (Utility_BaseCSVContainer_o* __this, const MethodInfo* method);
// 0x41516d0

bool_conflict
Utility_BaseCSVContainer__get_UseNewlines(Utility_BaseCSVContainer_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Utility.BaseCSVContainer$$Serialize
// il2cpp: System_String_o* Utility_BaseCSVContainer__Serialize (Utility_BaseCSVContainer_o* __this, const MethodInfo* method);
// 0x41516e0

System_String_o *
Utility_BaseCSVContainer__Serialize(Utility_BaseCSVContainer_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  char cVar1;
  System_String_o *pSVar2;
  
  pSVar2 = Utility_BaseCSVObject__Serialize((Utility_BaseCSVObject_o *)__this,method);
  cVar1 = (*(__this->klass->vtable)._18_get_UseNewlines.methodPtr)
                    (__this,(__this->klass->vtable)._18_get_UseNewlines.method);
  if (cVar1 != '\0') {
    vtable_dispatch = (__this->klass->vtable)._19_InsertNewlines.methodPtr;
    pSVar2 = (System_String_o *)
             (*vtable_dispatch)
                       (__this,pSVar2,(__this->klass->vtable)._19_InsertNewlines.method,
                        vtable_dispatch);
    return pSVar2;
  }
  return pSVar2;
}


// Utility.BaseCSVContainer$$InsertNewlines
// il2cpp: System_String_o* Utility_BaseCSVContainer__InsertNewlines (Utility_BaseCSVContainer_o* __this, System_String_o* str, const MethodInfo* method);
// 0x4151960

System_String_o *
Utility_BaseCSVContainer__InsertNewlines
          (Utility_BaseCSVContainer_o *__this,System_String_o *str,MethodInfo *method)

{
  uint16_t separator;
  undefined2 uVar1;
  ulong in_RAX;
  System_String_array *value;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_057049ee == '\0') {
    il2cpp_init_method_metadata(&"\n");
    DAT_057049ee = '\x01';
    method = extraout_RDX;
  }
  uStack_18 = uStack_18 & 0xffffffffffff;
  separator = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_Delimiter.method,method);
  if (str != (System_String_o *)0x0) {
    value = System_String__Split(str,separator,0,(MethodInfo *)0x0);
    uVar1 = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)(__this);
    uStack_18 = CONCAT26(uVar1,(undefined6)uStack_18);
    if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = System_Char__ToString((short)&uStack_18 + 6,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat(pSVar2,"\n",(MethodInfo *)0x0);
    pSVar2 = System_String__Join(pSVar2,value,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.BaseCSVContainer$$.ctor
// il2cpp: void Utility_BaseCSVContainer___ctor (Utility_BaseCSVContainer_o* __this, const MethodInfo* method);
// 0x4151a30

void Utility_BaseCSVContainer___ctor(Utility_BaseCSVContainer_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057049ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCSVObject);
    DAT_057049ef = '\x01';
    iVar1 = *(int *)(TypeInfo_BaseCSVObject + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BaseCSVObject + 0xe4);
  }
  if (iVar1 != 0) {
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


