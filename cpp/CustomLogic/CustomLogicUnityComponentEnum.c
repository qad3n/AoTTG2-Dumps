// Type: CustomLogic.CustomLogicUnityComponentEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicUnityComponentEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicUnityComponentEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicUnityComponentEnum_o* CustomLogic_CustomLogicUnityComponentEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ea9230

CustomLogic_CustomLogicUnityComponentEnum_o *
CustomLogic_CustomLogicUnityComponentEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_057037ae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUnityComponentEnum);
    DAT_057037ae = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicUnityComponentEnum);
      if (DAT_057037ab == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057037ab = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicUnityComponentEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicUnityComponentEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicUnityComponentEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUnityComponentEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicUnityComponentEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ea9350

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicUnityComponentEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_T__o *__this_00;
  
  if (DAT_057037af == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"VideoPlayer");
    DAT_057037af = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"VideoPlayer",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicUnityComponentEnum not found");
    pSVar2 = System_String__Concat(pSVar2,name,str2,(MethodInfo *)0x0);
    uVar3 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this = (System_Exception_o *)il2cpp_runtime_glue(uVar3);
    System_Exception___ctor(__this,pSVar2,(MethodInfo *)0x0);
    uVar3 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this,uVar3);
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_057037b0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__VideoPlayer_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUnityComponentEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUnityComponentEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUnityComponentEnum__object);
    DAT_057037b0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUnityComponentEnum__object);
  System_Func<object__object>___ctor();
  __this_00 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUnityComponentEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (__this_00,getter,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUnityComponentEnu);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicUnityComponentEnum.Bindings$$__CreatePropertyBinding__VideoPlayer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUnityComponentEnum__o* CustomLogic_CustomLogicUnityComponentEnum_Bindings____CreatePropertyBinding__VideoPlayer (const MethodInfo* method);
// 0x3ea9430

CustomLogic_CLPropertyBinding_CustomLogicUnityComponentEnum__o *
CustomLogic_CustomLogicUnityComponentEnum_Bindings____CreatePropertyBinding__VideoPlayer
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUnityComponentEnum__o *__this;
  
  if (DAT_057037b0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__VideoPlayer_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUnityComponentEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUnityComponentEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUnityComponentEnum__object);
    DAT_057037b0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUnityComponentEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUnityComponentEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUnityComponentEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUnityComponentEnu);
  return __this;
}


// CustomLogic.CustomLogicUnityComponentEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicUnityComponentEnum_Bindings___cctor (const MethodInfo* method);
// 0x3ea94d0

void CustomLogic_CustomLogicUnityComponentEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057037b1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"VideoPlayer");
    DAT_057037b1 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"VideoPlayer",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUnityComponentEnum.Bindings$$<__CreatePropertyBinding__VideoPlayer>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUnityComponentEnum_Bindings_____CreatePropertyBinding__VideoPlayer_g____getter_2_0 (CustomLogic_CustomLogicUnityComponentEnum_o* __i, const MethodInfo* method);
// 0x3ea9590

Il2CppObject *
CustomLogic_CustomLogicUnityComponentEnum_Bindings__<__CreatePropertyBinding__VideoPlayer>g____getter_2_0
          (CustomLogic_CustomLogicUnityComponentEnum_o *__i,MethodInfo *method)

{
  if (DAT_057037ac == '\0') {
    il2cpp_init_method_metadata(&"VideoPlayer");
    DAT_057037ac = '\x01';
  }
  return "VideoPlayer";
}


// CustomLogic.CustomLogicUnityComponentEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicUnityComponentEnum___ctor (CustomLogic_CustomLogicUnityComponentEnum_o* __this, const MethodInfo* method);
// 0x3ea9130

void CustomLogic_CustomLogicUnityComponentEnum___ctor
               (CustomLogic_CustomLogicUnityComponentEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057037ab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057037ab = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicUnityComponentEnum$$get_VideoPlayer
// il2cpp: System_String_o* CustomLogic_CustomLogicUnityComponentEnum__get_VideoPlayer (const MethodInfo* method);
// 0x3ea91a0

System_String_o * CustomLogic_CustomLogicUnityComponentEnum__get_VideoPlayer(MethodInfo *method)

{
  if (DAT_057037ac == '\0') {
    il2cpp_init_method_metadata(&"VideoPlayer");
    DAT_057037ac = '\x01';
  }
  return "VideoPlayer";
}


// CustomLogic.CustomLogicUnityComponentEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicUnityComponentEnum__get_ClassName (CustomLogic_CustomLogicUnityComponentEnum_o* __this, const MethodInfo* method);
// 0x3ea91d0

System_String_o *
CustomLogic_CustomLogicUnityComponentEnum__get_ClassName
          (CustomLogic_CustomLogicUnityComponentEnum_o *__this,MethodInfo *method)

{
  if (DAT_057037ad == '\0') {
    il2cpp_init_method_metadata(&"UnityComponentEnum");
    DAT_057037ad = '\x01';
  }
  return "UnityComponentEnum";
}


// CustomLogic.CustomLogicUnityComponentEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicUnityComponentEnum__get_IsAbstract (CustomLogic_CustomLogicUnityComponentEnum_o* __this, const MethodInfo* method);
// 0x3ea9200

bool_conflict
CustomLogic_CustomLogicUnityComponentEnum__get_IsAbstract
          (CustomLogic_CustomLogicUnityComponentEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicUnityComponentEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicUnityComponentEnum__get_IsStatic (CustomLogic_CustomLogicUnityComponentEnum_o* __this, const MethodInfo* method);
// 0x3ea9210

bool_conflict
CustomLogic_CustomLogicUnityComponentEnum__get_IsStatic
          (CustomLogic_CustomLogicUnityComponentEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicUnityComponentEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicUnityComponentEnum__get_InheritBaseMembers (CustomLogic_CustomLogicUnityComponentEnum_o* __this, const MethodInfo* method);
// 0x3ea9220

bool_conflict
CustomLogic_CustomLogicUnityComponentEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicUnityComponentEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


