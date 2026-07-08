// Type: CustomLogic.CustomLogicImageBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicImageBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicImageBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicImageBuiltin_o* CustomLogic_CustomLogicImageBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ee0c40

CustomLogic_CustomLogicImageBuiltin_o *
CustomLogic_CustomLogicImageBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicImageBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05703a8f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicImageBuiltin);
    DAT_05703a8f = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicImageBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicImageBuiltin);
      if (DAT_05703a8c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703a8c = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._currentImagePath = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8)
      ;
      il2cpp_runtime_glue(&(__this->fields)._currentImagePath);
      (__this->fields)._currentTexture = (UnityEngine_Texture2D_o *)0x0;
      il2cpp_runtime_glue(&(__this->fields)._currentTexture,0);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicImageBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicImageBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicImageBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicImageBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3ee12b0

void CustomLogic_CustomLogicImageBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703a95 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a95 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicImageBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3ee1320

void CustomLogic_CustomLogicImageBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetImage>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicImageBuiltin_Bindings___c_____CreateMethodBinding__SetImage_b__3_0 (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicImageBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ee1330

Il2CppObject *
CustomLogic_CustomLogicImageBuiltin_Bindings_<>c__<__CreateMethodBinding__SetImage>b__3_0
          (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicImageBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *value;
  Il2CppObject *extraout_RAX;
  MethodInfo *method_00;
  
  if (DAT_05703a96 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a96 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String)
    ;
    if (__c != (CustomLogic_CustomLogicImageBuiltin_o *)0x0) {
      CustomLogic_CustomLogicImageBuiltin__SetImage(__c,value,method_00);
      return extraout_RAX;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicImageBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ee0db0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicImageBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  undefined8 uVar5;
  System_Exception_o *__this;
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_T__o *__this_00;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_T__o *__this_01;
  
  if (DAT_05703a90 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"ImagePath");
    il2cpp_init_method_metadata(&"SetImage");
    DAT_05703a90 = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"ImagePath",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703a91 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicImageBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ImagePath_g);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ImagePath_g____se);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicImageBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicImageBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicImageBuiltin__object);
      DAT_05703a91 = '\x01';
    }
    getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicImageBuiltin__object);
    System_Func<object__object>___ctor();
    setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicImageBuiltin__object);
    System_Action<object__object>___ctor();
    __this_00 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicImageBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(__this_00,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicImageBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)__this_00;
  }
  bVar3 = System_String__op_Equality(name,"SetImage",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pSVar4 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicImageBuiltin not found");
    pSVar4 = System_String__Concat(pSVar4,name,str2,(MethodInfo *)0x0);
    uVar5 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this = (System_Exception_o *)il2cpp_runtime_glue(uVar5);
    System_Exception___ctor(__this,pSVar4,(MethodInfo *)0x0);
    uVar5 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this,uVar5);
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703a92 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicImageBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicImageBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicImageBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetImage_b__3_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a92 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicImageBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this_01 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicImageBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor(__this_01,function,MethodInfo_CLMethodBinding_1_CustomLogicImageBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)__this_01;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$__CreatePropertyBinding__ImagePath
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin__o* CustomLogic_CustomLogicImageBuiltin_Bindings____CreatePropertyBinding__ImagePath (const MethodInfo* method);
// 0x3ee0ef0

CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin__o *
CustomLogic_CustomLogicImageBuiltin_Bindings____CreatePropertyBinding__ImagePath(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin__o *__this;
  
  if (DAT_05703a91 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicImageBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ImagePath_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ImagePath_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicImageBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicImageBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicImageBuiltin__object);
    DAT_05703a91 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicImageBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicImageBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicImageBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicImageBuiltin);
  return __this;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$__CreateMethodBinding__SetImage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicImageBuiltin__o* CustomLogic_CustomLogicImageBuiltin_Bindings____CreateMethodBinding__SetImage (const MethodInfo* method);
// 0x3ee0fd0

CustomLogic_CLMethodBinding_CustomLogicImageBuiltin__o *
CustomLogic_CustomLogicImageBuiltin_Bindings____CreateMethodBinding__SetImage(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicImageBuiltin__o *__this;
  
  if (DAT_05703a92 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicImageBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicImageBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicImageBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetImage_b__3_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a92 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicImageBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicImageBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicImageBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicImageBuiltin);
  return __this;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicImageBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3ee1120

void CustomLogic_CustomLogicImageBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703a93 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"ImagePath");
    il2cpp_init_method_metadata(&"SetImage");
    DAT_05703a93 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"ImagePath",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetImage",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$<__CreatePropertyBinding__ImagePath>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicImageBuiltin_Bindings_____CreatePropertyBinding__ImagePath_g____getter_2_0 (CustomLogic_CustomLogicImageBuiltin_o* __i, const MethodInfo* method);
// 0x3ee1210

Il2CppObject *
CustomLogic_CustomLogicImageBuiltin_Bindings__<__CreatePropertyBinding__ImagePath>g____getter_2_0
          (CustomLogic_CustomLogicImageBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicImageBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._currentImagePath;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$<__CreatePropertyBinding__ImagePath>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicImageBuiltin_Bindings_____CreatePropertyBinding__ImagePath_g____setter_2_1 (CustomLogic_CustomLogicImageBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee1230

void CustomLogic_CustomLogicImageBuiltin_Bindings__<__CreatePropertyBinding__ImagePath>g____setter_2_1
               (CustomLogic_CustomLogicImageBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  System_String_o *value;
  MethodInfo *method_00;
  
  if (DAT_05703a94 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a94 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicImageBuiltin_o *)0x0) {
    CustomLogic_CustomLogicImageBuiltin__SetImage(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicImageBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicImageBuiltin___ctor (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x3ee0930

void CustomLogic_CustomLogicImageBuiltin___ctor
               (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703a8c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703a8c = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._currentImagePath = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields)._currentImagePath);
  (__this->fields)._currentTexture = (UnityEngine_Texture2D_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._currentTexture,0);
  return;
}


// CustomLogic.CustomLogicImageBuiltin$$SetImage
// il2cpp: CustomLogic_CustomLogicImageBuiltin_o* CustomLogic_CustomLogicImageBuiltin__SetImage (CustomLogic_CustomLogicImageBuiltin_o* __this, System_String_o* imagePath, const MethodInfo* method);
// 0x3ee09b0

void CustomLogic_CustomLogicImageBuiltin__SetImage
               (CustomLogic_CustomLogicImageBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Texture2D_o *x;
  System_String_o *pSVar2;
  
  if (DAT_05703a8d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"Failed to load image at path: ");
    DAT_05703a8d = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = Utility_Util__IsValidResourcePath(value,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      x = (UnityEngine_Texture2D_o *)
          ApplicationManagers_ResourceManager__LoadAsset(pSVar2,value,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((((char)bVar1 != '\0') && (x != (UnityEngine_Texture2D_o *)0x0)) &&
         (x->klass == TypeInfo_Texture2D)) {
        (__this->fields)._currentTexture = x;
        il2cpp_runtime_glue(&(__this->fields)._currentTexture,x);
        (__this->fields)._currentImagePath = value;
        il2cpp_runtime_glue(&(__this->fields)._currentImagePath,value);
        return;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__op_Inequality
                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    }
    pSVar2 = System_String__Concat("Failed to load image at path: ",value,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  }
  else {
    (__this->fields)._currentImagePath = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    il2cpp_runtime_glue(&(__this->fields)._currentImagePath);
    (__this->fields)._currentTexture = (UnityEngine_Texture2D_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._currentTexture,0);
  }
  return;
}


// CustomLogic.CustomLogicImageBuiltin$$get_ImagePath
// il2cpp: System_String_o* CustomLogic_CustomLogicImageBuiltin__get_ImagePath (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x3ee0bb0

System_String_o *
CustomLogic_CustomLogicImageBuiltin__get_ImagePath
          (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._currentImagePath;
}


// CustomLogic.CustomLogicImageBuiltin$$set_ImagePath
// il2cpp: void CustomLogic_CustomLogicImageBuiltin__set_ImagePath (CustomLogic_CustomLogicImageBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3ee0bc0

void CustomLogic_CustomLogicImageBuiltin__set_ImagePath
               (CustomLogic_CustomLogicImageBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  CustomLogic_CustomLogicImageBuiltin__SetImage(__this,value,method);
  return;
}


// CustomLogic.CustomLogicImageBuiltin$$GetTexture
// il2cpp: UnityEngine_Texture2D_o* CustomLogic_CustomLogicImageBuiltin__GetTexture (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x3ee0bd0

UnityEngine_Texture2D_o *
CustomLogic_CustomLogicImageBuiltin__GetTexture
          (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._currentTexture;
}


// CustomLogic.CustomLogicImageBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicImageBuiltin__get_ClassName (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x3ee0be0

System_String_o *
CustomLogic_CustomLogicImageBuiltin__get_ClassName
          (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703a8e == '\0') {
    il2cpp_init_method_metadata(&"Image");
    DAT_05703a8e = '\x01';
  }
  return "Image";
}


// CustomLogic.CustomLogicImageBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicImageBuiltin__get_IsAbstract (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x3ee0c10

bool_conflict
CustomLogic_CustomLogicImageBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicImageBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicImageBuiltin__get_IsStatic (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x3ee0c20

bool_conflict
CustomLogic_CustomLogicImageBuiltin__get_IsStatic
          (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicImageBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicImageBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x3ee0c30

bool_conflict
CustomLogic_CustomLogicImageBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


