// Type: CustomLogic.CustomLogicCollisionBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicCollisionBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCollisionBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCollisionBuiltin_o* CustomLogic_CustomLogicCollisionBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59f5e20

CustomLogic_CustomLogicCollisionBuiltin_o *
CustomLogic_CustomLogicCollisionBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  NullCheck(args);
  pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCollisionBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x59f6c50

void CustomLogic_CustomLogicCollisionBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545df0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545df0 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x59f6cc0

void CustomLogic_CustomLogicCollisionBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactPoint>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactPoint_b__6_0 (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCollisionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f6cd0

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactPoint_b__6_0
          (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCollisionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t index;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545df1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545df1 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicCollisionBuiltin__GetContactPoint(__c,index,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactNorms>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactNorms_b__7_0 (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCollisionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f6d60

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactNorms_b__7_0
          (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCollisionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t index;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545df2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545df2 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicCollisionBuiltin__GetContactNorms(__c,index,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactImpulses>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactImpulses_b__8_0 (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCollisionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f6df0

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactImpulses_b__8_0
          (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCollisionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t index;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545df3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545df3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicCollisionBuiltin__GetContactImpulses(__c,index,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactSeparations>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactSeparations_b__9_0 (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCollisionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f6e80

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactSeparations_b__9_0
          (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCollisionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t index;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545df4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545df4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicCollisionBuiltin__GetContactSeparations(__c,index,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCollisionBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59f5eb0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicCollisionBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545de6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ContactCount");
    il2cpp_codegen_initialize_runtime_metadata(&"GetContactPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"Collider");
    il2cpp_codegen_initialize_runtime_metadata(&"GetContactImpulses");
    il2cpp_codegen_initialize_runtime_metadata(&"Impulse");
    il2cpp_codegen_initialize_runtime_metadata(&"GetContactSeparations");
    il2cpp_codegen_initialize_runtime_metadata(&"GetContactNorms");
    il2cpp_codegen_initialize_runtime_metadata(&"RelativeVelocity");
    Il2CppMethodInitialized_07545de6 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x454bad02) {
    if (uVar2 < 0x2cfc1e5e) {
      if (uVar2 == 0x2706c88a) {
        bVar1 = System_String__op_Equality(name,"RelativeVelocity",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__RelativeVelocity
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__RelativeVelocity
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x2cfc1e5d) {
        bVar1 = System_String__op_Equality(name,"Collider",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Collider
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Collider
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x3e98dfb0) {
      bVar1 = System_String__op_Equality(name,"GetContactNorms",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactNorms
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactNorms
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x454bad01) {
      bVar1 = System_String__op_Equality(name,"GetContactImpulses",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactImpulses
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactImpulses
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0x4fa9d68e) {
    if (uVar2 == 0x4bf628c6) {
      bVar1 = System_String__op_Equality(name,"GetContactSeparations",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactSeparations
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactSeparations
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x4fa9d68d) {
      bVar1 = System_String__op_Equality(name,"GetContactPoint",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactPoint
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactPoint
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 == 0xb7ea1ec2) {
    bVar1 = System_String__op_Equality(name,"ContactCount",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__ContactCount
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__ContactCount
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0x7fde94f4) {
    bVar1 = System_String__op_Equality(name,"Impulse",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Impulse
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Impulse
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCollisionBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__Collider
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Collider (const MethodInfo* method);
// 0x59f62a0

CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Collider(MethodInfo *method)

{
  System_Func_CustomLogicCollisionBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545de7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__Collider_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
    Il2CppMethodInitialized_07545de7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__Collider_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__Impulse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Impulse (const MethodInfo* method);
// 0x59f6340

CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Impulse(MethodInfo *method)

{
  System_Func_CustomLogicCollisionBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545de8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__Impulse_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
    Il2CppMethodInitialized_07545de8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__Impulse_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__RelativeVelocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__RelativeVelocity (const MethodInfo* method);
// 0x59f63e0

CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__RelativeVelocity
          (MethodInfo *method)

{
  System_Func_CustomLogicCollisionBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545de9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__RelativeVelocity_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
    Il2CppMethodInitialized_07545de9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__RelativeVelocity_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__ContactCount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__ContactCount (const MethodInfo* method);
// 0x59f6480

CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__ContactCount(MethodInfo *method)

{
  System_Func_CustomLogicCollisionBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__ContactCount_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
    Il2CppMethodInitialized_07545dea = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__ContactCount_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactPoint
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactPoint (const MethodInfo* method);
// 0x59f6520
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f6555: jmp 0x59f65c5

CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactPoint(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCollisionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545deb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactPoint_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545deb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicCollisionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactPoint_b__6_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactNorms
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactNorms (const MethodInfo* method);
// 0x59f6660
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f6695: jmp 0x59f6705

CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactNorms(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCollisionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactNorms_b__7_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545dec = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicCollisionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactNorms_b__7_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactImpulses
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactImpulses (const MethodInfo* method);
// 0x59f67a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f67d5: jmp 0x59f6845

CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactImpulses
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCollisionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ded == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactImpulses_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545ded = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicCollisionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactImpulses_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactSeparations
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactSeparations (const MethodInfo* method);
// 0x59f68e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f6915: jmp 0x59f6985

CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactSeparations
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCollisionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactSeparations
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545dee = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicCollisionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactSeparations
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x59f6a20

void CustomLogic_CustomLogicCollisionBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545def == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ContactCount");
    il2cpp_codegen_initialize_runtime_metadata(&"GetContactPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"Collider");
    il2cpp_codegen_initialize_runtime_metadata(&"GetContactImpulses");
    il2cpp_codegen_initialize_runtime_metadata(&"Impulse");
    il2cpp_codegen_initialize_runtime_metadata(&"GetContactSeparations");
    il2cpp_codegen_initialize_runtime_metadata(&"GetContactNorms");
    il2cpp_codegen_initialize_runtime_metadata(&"RelativeVelocity");
    Il2CppMethodInitialized_07545def = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Collider",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Impulse",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RelativeVelocity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ContactCount",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetContactPoint",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetContactNorms",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetContactImpulses",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetContactSeparations",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__Collider>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__Collider_g____getter_2_0 (CustomLogic_CustomLogicCollisionBuiltin_o* __i, const MethodInfo* method);
// 0x59f6be0

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__Collider_g____getter_2_0
          (CustomLogic_CustomLogicCollisionBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicColliderBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicCollisionBuiltin__get_Collider(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__Impulse>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__Impulse_g____getter_3_0 (CustomLogic_CustomLogicCollisionBuiltin_o* __i, const MethodInfo* method);
// 0x59f6bf0

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__Impulse_g____getter_3_0
          (CustomLogic_CustomLogicCollisionBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicCollisionBuiltin__get_Impulse(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__RelativeVelocity>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__RelativeVelocity_g____getter_4_0 (CustomLogic_CustomLogicCollisionBuiltin_o* __i, const MethodInfo* method);
// 0x59f6c00

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__RelativeVelocity_g____getter_4_0
          (CustomLogic_CustomLogicCollisionBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicCollisionBuiltin__get_RelativeVelocity(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__ContactCount>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__ContactCount_g____getter_5_0 (CustomLogic_CustomLogicCollisionBuiltin_o* __i, const MethodInfo* method);
// 0x59f6c10

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__ContactCount_g____getter_5_0
          (CustomLogic_CustomLogicCollisionBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collision_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) ||
     (__this = (__i->fields).collision, __this == (UnityEngine_Collision_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collision__get_contactCount(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin___ctor (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x59f5520

void CustomLogic_CustomLogicCollisionBuiltin___ctor
               (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545ddd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545ddd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCollisionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin___ctor (CustomLogic_CustomLogicCollisionBuiltin_o* __this, System_Object_array* parameters, const MethodInfo* method);
// 0x59f5590

void CustomLogic_CustomLogicCollisionBuiltin___ctor_58f5590
               (CustomLogic_CustomLogicCollisionBuiltin_o *__this,System_Object_array *parameters,
               MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Collision_o *pUVar2;
  UnityEngine_Collision_c *pUVar3;
  
  if (Il2CppMethodInitialized_07545dde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Collision);
    Il2CppMethodInitialized_07545dde = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pUVar3 = TypeInfo_UnityEngine_Collision;
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)parameters->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pUVar2 = (UnityEngine_Collision_o *)parameters->m_Items[0];
  if (pUVar2 == (UnityEngine_Collision_o *)0x0) {
    (__this->fields).collision = (UnityEngine_Collision_o *)0x0;
label_059f5652:
    Il2CppCodeGenWriteBarrier(&(__this->fields).collision);
    return;
  }
  bVar1 = (TypeInfo_UnityEngine_Collision->_2).typeHierarchyDepth;
  if ((bVar1 <= (((Il2CppClass *)pUVar2->klass)->_2).typeHierarchyDepth) &&
     ((((Il2CppClass *)pUVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_UnityEngine_Collision)) {
    (__this->fields).collision = pUVar2;
    if ((bVar1 <= (((Il2CppClass *)pUVar2->klass)->_2).typeHierarchyDepth) &&
       ((((Il2CppClass *)pUVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pUVar3))
    goto label_059f5652;
  }
  il2cpp_codegen_raise_invalid_cast_exception(pUVar2,pUVar3);
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_Collider
// il2cpp: CustomLogic_CustomLogicColliderBuiltin_o* CustomLogic_CustomLogicCollisionBuiltin__get_Collider (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x59f5670

CustomLogic_CustomLogicColliderBuiltin_o *
CustomLogic_CustomLogicCollisionBuiltin__get_Collider
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  System_Object_array *parameters;
  UnityEngine_Collider_o *obj;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545ddf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07545ddf = '\x01';
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  __this_00 = (__this->fields).collision;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    obj = UnityEngine_Collision__get_collider(__this_00,(MethodInfo *)0x0);
    if (parameters != (System_Object_array *)0x0) {
      if (obj != (UnityEngine_Collider_o *)0x0) {
        pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
        if (pIVar1 == (Il2CppObject *)0x0) {
          pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = (Il2CppObject *)obj;
      Il2CppCodeGenWriteBarrier(parameters->m_Items);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
      CustomLogic_CustomLogicColliderBuiltin___ctor_58f2270(__this_01,parameters,method_00);
      return __this_01;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_Impulse
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__get_Impulse (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x59f5750

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__get_Impulse
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o UVar1;
  
  __this_00 = (__this->fields).collision;
  if (__this_00 == (UnityEngine_Collision_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = UnityEngine_Collision__get_impulse(__this_00,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).Value.fields.x = UVar1.fields.x;
  (__this_01->fields).Value.fields.y = UVar1.fields.y;
  (__this_01->fields).Value.fields.z = UVar1.fields.z;
  return __this_01;
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_RelativeVelocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__get_RelativeVelocity (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x59f5810

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__get_RelativeVelocity
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o UVar1;
  
  __this_00 = (__this->fields).collision;
  if (__this_00 == (UnityEngine_Collision_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = UnityEngine_Collision__get_relativeVelocity(__this_00,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).Value.fields.x = UVar1.fields.x;
  (__this_01->fields).Value.fields.y = UVar1.fields.y;
  (__this_01->fields).Value.fields.z = UVar1.fields.z;
  return __this_01;
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_ContactCount
// il2cpp: int32_t CustomLogic_CustomLogicCollisionBuiltin__get_ContactCount (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x59f58d0

int32_t CustomLogic_CustomLogicCollisionBuiltin__get_ContactCount
                  (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).collision;
  if (__this_00 == (UnityEngine_Collision_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_Collision__get_contactCount(__this_00,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicCollisionBuiltin$$GetContactPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__GetContactPoint (CustomLogic_CustomLogicCollisionBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x59f58f0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__GetContactPoint
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o UVar1;
  UnityEngine_ContactPoint_o UStack_78;
  UnityEngine_ContactPoint_o UStack_40;
  
  if (Il2CppMethodInitialized_07545de0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545de0 = '\x01';
  }
  __this_00 = (__this->fields).collision;
  if (__this_00 == (UnityEngine_Collision_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collision__GetContact(&UStack_40,__this_00,index,(MethodInfo *)0x0);
  UStack_78.fields.m_Impulse.fields.z = UStack_40.fields.m_Impulse.fields.z;
  UStack_78.fields.m_ThisColliderEntityId.fields.m_Data =
       UStack_40.fields.m_ThisColliderEntityId.fields.m_Data;
  UStack_78.fields.m_OtherColliderEntityId.fields.m_Data =
       UStack_40.fields.m_OtherColliderEntityId.fields.m_Data;
  UStack_78.fields.m_Separation = UStack_40.fields.m_Separation;
  UStack_78.fields.m_Normal.fields.y = UStack_40.fields.m_Normal.fields.y;
  UStack_78.fields.m_Normal.fields.z = UStack_40.fields.m_Normal.fields.z;
  UStack_78.fields.m_Impulse.fields.x = UStack_40.fields.m_Impulse.fields.x;
  UStack_78.fields.m_Impulse.fields.y = UStack_40.fields.m_Impulse.fields.y;
  UStack_78.fields.m_Point.fields.x = UStack_40.fields.m_Point.fields.x;
  UStack_78.fields.m_Point.fields.y = UStack_40.fields.m_Point.fields.y;
  UStack_78.fields.m_Point.fields.z = UStack_40.fields.m_Point.fields.z;
  UStack_78.fields.m_Normal.fields.x = UStack_40.fields.m_Normal.fields.x;
  UVar1 = UnityEngine_ContactPoint__get_point(&UStack_78,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).Value.fields.x = UVar1.fields.x;
  (__this_01->fields).Value.fields.y = UVar1.fields.y;
  (__this_01->fields).Value.fields.z = UVar1.fields.z;
  return __this_01;
}


// CustomLogic.CustomLogicCollisionBuiltin$$GetContactNorms
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__GetContactNorms (CustomLogic_CustomLogicCollisionBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x59f59e0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__GetContactNorms
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o UVar1;
  UnityEngine_ContactPoint_o UStack_78;
  UnityEngine_ContactPoint_o UStack_40;
  
  if (Il2CppMethodInitialized_07545de1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545de1 = '\x01';
  }
  __this_00 = (__this->fields).collision;
  if (__this_00 == (UnityEngine_Collision_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collision__GetContact(&UStack_40,__this_00,index,(MethodInfo *)0x0);
  UStack_78.fields.m_Impulse.fields.z = UStack_40.fields.m_Impulse.fields.z;
  UStack_78.fields.m_ThisColliderEntityId.fields.m_Data =
       UStack_40.fields.m_ThisColliderEntityId.fields.m_Data;
  UStack_78.fields.m_OtherColliderEntityId.fields.m_Data =
       UStack_40.fields.m_OtherColliderEntityId.fields.m_Data;
  UStack_78.fields.m_Separation = UStack_40.fields.m_Separation;
  UStack_78.fields.m_Normal.fields.y = UStack_40.fields.m_Normal.fields.y;
  UStack_78.fields.m_Normal.fields.z = UStack_40.fields.m_Normal.fields.z;
  UStack_78.fields.m_Impulse.fields.x = UStack_40.fields.m_Impulse.fields.x;
  UStack_78.fields.m_Impulse.fields.y = UStack_40.fields.m_Impulse.fields.y;
  UStack_78.fields.m_Point.fields.x = UStack_40.fields.m_Point.fields.x;
  UStack_78.fields.m_Point.fields.y = UStack_40.fields.m_Point.fields.y;
  UStack_78.fields.m_Point.fields.z = UStack_40.fields.m_Point.fields.z;
  UStack_78.fields.m_Normal.fields.x = UStack_40.fields.m_Normal.fields.x;
  UVar1 = UnityEngine_ContactPoint__get_normal(&UStack_78,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).Value.fields.x = UVar1.fields.x;
  (__this_01->fields).Value.fields.y = UVar1.fields.y;
  (__this_01->fields).Value.fields.z = UVar1.fields.z;
  return __this_01;
}


// CustomLogic.CustomLogicCollisionBuiltin$$GetContactImpulses
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__GetContactImpulses (CustomLogic_CustomLogicCollisionBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x59f5ad0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__GetContactImpulses
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o UVar1;
  UnityEngine_ContactPoint_o UStack_78;
  UnityEngine_ContactPoint_o UStack_40;
  
  if (Il2CppMethodInitialized_07545de2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545de2 = '\x01';
  }
  __this_00 = (__this->fields).collision;
  if (__this_00 == (UnityEngine_Collision_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collision__GetContact(&UStack_40,__this_00,index,(MethodInfo *)0x0);
  UStack_78.fields.m_Impulse.fields.z = UStack_40.fields.m_Impulse.fields.z;
  UStack_78.fields.m_ThisColliderEntityId.fields.m_Data =
       UStack_40.fields.m_ThisColliderEntityId.fields.m_Data;
  UStack_78.fields.m_OtherColliderEntityId.fields.m_Data =
       UStack_40.fields.m_OtherColliderEntityId.fields.m_Data;
  UStack_78.fields.m_Separation = UStack_40.fields.m_Separation;
  UStack_78.fields.m_Normal.fields.y = UStack_40.fields.m_Normal.fields.y;
  UStack_78.fields.m_Normal.fields.z = UStack_40.fields.m_Normal.fields.z;
  UStack_78.fields.m_Impulse.fields.x = UStack_40.fields.m_Impulse.fields.x;
  UStack_78.fields.m_Impulse.fields.y = UStack_40.fields.m_Impulse.fields.y;
  UStack_78.fields.m_Point.fields.x = UStack_40.fields.m_Point.fields.x;
  UStack_78.fields.m_Point.fields.y = UStack_40.fields.m_Point.fields.y;
  UStack_78.fields.m_Point.fields.z = UStack_40.fields.m_Point.fields.z;
  UStack_78.fields.m_Normal.fields.x = UStack_40.fields.m_Normal.fields.x;
  UVar1 = UnityEngine_ContactPoint__get_impulse(&UStack_78,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).Value.fields.x = UVar1.fields.x;
  (__this_01->fields).Value.fields.y = UVar1.fields.y;
  (__this_01->fields).Value.fields.z = UVar1.fields.z;
  return __this_01;
}


// CustomLogic.CustomLogicCollisionBuiltin$$GetContactSeparations
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__GetContactSeparations (CustomLogic_CustomLogicCollisionBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x59f5bc0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__GetContactSeparations
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  float fVar1;
  UnityEngine_ContactPoint_o UStack_78;
  UnityEngine_ContactPoint_o UStack_40;
  
  if (Il2CppMethodInitialized_07545de3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545de3 = '\x01';
  }
  __this_00 = (__this->fields).collision;
  if (__this_00 == (UnityEngine_Collision_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collision__GetContact(&UStack_40,__this_00,index,(MethodInfo *)0x0);
  UStack_78.fields.m_Impulse.fields.z = UStack_40.fields.m_Impulse.fields.z;
  UStack_78.fields.m_ThisColliderEntityId.fields.m_Data =
       UStack_40.fields.m_ThisColliderEntityId.fields.m_Data;
  UStack_78.fields.m_OtherColliderEntityId.fields.m_Data =
       UStack_40.fields.m_OtherColliderEntityId.fields.m_Data;
  UStack_78.fields.m_Separation = UStack_40.fields.m_Separation;
  UStack_78.fields.m_Normal.fields.y = UStack_40.fields.m_Normal.fields.y;
  UStack_78.fields.m_Normal.fields.z = UStack_40.fields.m_Normal.fields.z;
  UStack_78.fields.m_Impulse.fields.x = UStack_40.fields.m_Impulse.fields.x;
  UStack_78.fields.m_Impulse.fields.y = UStack_40.fields.m_Impulse.fields.y;
  UStack_78.fields.m_Point.fields.x = UStack_40.fields.m_Point.fields.x;
  UStack_78.fields.m_Point.fields.y = UStack_40.fields.m_Point.fields.y;
  UStack_78.fields.m_Point.fields.z = UStack_40.fields.m_Point.fields.z;
  UStack_78.fields.m_Normal.fields.x = UStack_40.fields.m_Normal.fields.x;
  fVar1 = UnityEngine_ContactPoint__get_separation(&UStack_78,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cee = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).Value.fields.x = fVar1;
  (__this_01->fields).Value.fields.y = fVar1;
  (__this_01->fields).Value.fields.z = fVar1;
  return __this_01;
}


// CustomLogic.CustomLogicCollisionBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin____Copy__ (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x59f5cb0

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin____Copy__
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545de4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07545de4 = '\x01';
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  obj = (__this->fields).collision;
  if (obj != (UnityEngine_Collision_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  parameters->m_Items[0] = (Il2CppObject *)obj;
  Il2CppCodeGenWriteBarrier(parameters->m_Items);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
  CustomLogic_CustomLogicColliderBuiltin___ctor_58f2270(__this_00,parameters,method_00);
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicCollisionBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicCollisionBuiltin____Eq__ (CustomLogic_CustomLogicCollisionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59f5d80

bool CustomLogic_CustomLogicCollisionBuiltin____Eq__
               (CustomLogic_CustomLogicCollisionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
               MethodInfo *method)

{
  return self == other;
}


// CustomLogic.CustomLogicCollisionBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicCollisionBuiltin____Hash__ (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x59f5d90

int32_t CustomLogic_CustomLogicCollisionBuiltin____Hash__
                  (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  int32_t iVar2;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields).collision;
  if (pUVar1 == (UnityEngine_Collision_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (pUVar1->klass->vtable)._2_GetHashCode.methodPtr;
  iVar2 = (*vtableDispatch)
                    (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method,in_RDX,vtableDispatch);
  return iVar2;
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCollisionBuiltin__get_ClassName (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x59f5dc0

System_String_o *
CustomLogic_CustomLogicCollisionBuiltin__get_ClassName
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545de5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Collision");
    Il2CppMethodInitialized_07545de5 = '\x01';
  }
  return "Collision";
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCollisionBuiltin__get_IsAbstract (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x59f5df0

bool CustomLogic_CustomLogicCollisionBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCollisionBuiltin__get_IsStatic (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x59f5e00

bool CustomLogic_CustomLogicCollisionBuiltin__get_IsStatic
               (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCollisionBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x59f5e10

bool CustomLogic_CustomLogicCollisionBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


