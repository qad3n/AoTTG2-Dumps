// Type: CustomLogic.CustomLogicHorseBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicHorseBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHorseBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHorseBuiltin_o* CustomLogic_CustomLogicHorseBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a174f0

CustomLogic_CustomLogicHorseBuiltin_o *
CustomLogic_CustomLogicHorseBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHorseBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5a17fa0

void CustomLogic_CustomLogicHorseBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545fa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545fa1 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5a18010

void CustomLogic_CustomLogicHorseBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$<__CreateMethodBinding__Follow>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseBuiltin_Bindings___c_____CreateMethodBinding__Follow_b__3_0 (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHorseBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a18020

Il2CppObject *
CustomLogic_CustomLogicHorseBuiltin_Bindings___c_____CreateMethodBinding__Follow_b__3_0
          (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHorseBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Characters_Horse_o *pCVar2;
  bool bVar3;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar4;
  Characters_BaseCharacter_o *target;
  float distance;
  
  if (Il2CppMethodInitialized_07545fa2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545fa2 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar1,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicCharacterBuiltin
                       );
    if ((int)__a->max_length < 2) {
      distance = 5.0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      distance = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (pIVar1,(MethodInfo_34BDFE0 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    if (__c != (CustomLogic_CustomLogicHorseBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_07545f94 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_07545f94 = '\x01';
      }
      pCVar2 = (__c->fields).Horse;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pCVar2 = (__c->fields).Horse;
        if (pCVar4 == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
          target = (Characters_BaseCharacter_o *)0x0;
        }
        else {
          target = (pCVar4->fields).Character;
        }
        if (pCVar2 == (Characters_Horse_o *)0x0) goto label_05a18166;
        Characters_Horse__Follow(pCVar2,target,distance,(MethodInfo *)0x0);
      }
      return (Il2CppObject *)0x0;
    }
  }
label_05a18166:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stay>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseBuiltin_Bindings___c_____CreateMethodBinding__Stay_b__4_0 (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHorseBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a18170

Il2CppObject *
CustomLogic_CustomLogicHorseBuiltin_Bindings___c_____CreateMethodBinding__Stay_b__4_0
          (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHorseBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Horse_o *pCVar1;
  bool bVar2;
  
  if (__c == (CustomLogic_CustomLogicHorseBuiltin_o *)0x0) {
label_05a181de:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07545f95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545f95 = '\x01';
  }
  pCVar1 = (__c->fields).Horse;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__c->fields).Horse;
    if (pCVar1 == (Characters_Horse_o *)0x0) goto label_05a181de;
    Characters_Horse__Stay(pCVar1,(MethodInfo *)0x0);
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$<__CreateMethodBinding__ComeTo>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseBuiltin_Bindings___c_____CreateMethodBinding__ComeTo_b__5_0 (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHorseBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a181f0

Il2CppObject *
CustomLogic_CustomLogicHorseBuiltin_Bindings___c_____CreateMethodBinding__ComeTo_b__5_0
          (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHorseBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Characters_Horse_o *pCVar2;
  bool bVar3;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar4;
  Characters_BaseCharacter_o *target;
  float distance;
  
  if (Il2CppMethodInitialized_07545fa3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545fa3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar1,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicCharacterBuiltin
                       );
    if ((int)__a->max_length < 2) {
      distance = 5.0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      distance = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (pIVar1,(MethodInfo_34BDFE0 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    if (__c != (CustomLogic_CustomLogicHorseBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_07545f96 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_07545f96 = '\x01';
      }
      pCVar2 = (__c->fields).Horse;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pCVar2 = (__c->fields).Horse;
        if (pCVar4 == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
          target = (Characters_BaseCharacter_o *)0x0;
        }
        else {
          target = (pCVar4->fields).Character;
        }
        if (pCVar2 == (Characters_Horse_o *)0x0) goto label_05a18336;
        Characters_Horse__ComeTo(pCVar2,target,distance,(MethodInfo *)0x0);
      }
      return (Il2CppObject *)0x0;
    }
  }
label_05a18336:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveTo>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseBuiltin_Bindings___c_____CreateMethodBinding__MoveTo_b__6_0 (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHorseBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a18340

Il2CppObject *
CustomLogic_CustomLogicHorseBuiltin_Bindings___c_____CreateMethodBinding__MoveTo_b__6_0
          (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHorseBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Characters_Horse_o *pCVar2;
  bool bVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  float fStack_2c;
  
  if (Il2CppMethodInitialized_07545fa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545fa4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar1,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                       );
    if ((int)__a->max_length < 2) {
      fStack_2c = 5.0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fStack_2c = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (pIVar1,(MethodInfo_34BDFE0 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (2 < (int)__a->max_length) {
        pIVar1 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                  (pIVar1,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      }
    }
    if (__c != (CustomLogic_CustomLogicHorseBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_07545f97 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_07545f97 = '\x01';
      }
      pCVar2 = (__c->fields).Horse;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((pCVar4 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) && (bVar3)) {
        pCVar2 = (__c->fields).Horse;
        if (pCVar2 == (Characters_Horse_o *)0x0) goto label_05a184ce;
        Characters_Horse__MoveTo
                  (pCVar2,(UnityEngine_Vector3_o)(pCVar4->fields).Value.fields,fStack_2c,(MethodInfo *)0x0);
      }
      return (Il2CppObject *)0x0;
    }
  }
label_05a184ce:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHorseBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a17580

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHorseBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicHorseBuiltin__o *pCVar2;
  CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicHorseBuiltin_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07545f99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ComeTo");
    il2cpp_codegen_initialize_runtime_metadata(&"Stay");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTo");
    il2cpp_codegen_initialize_runtime_metadata(&"RunSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Follow");
    Il2CppMethodInitialized_07545f99 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"RunSpeed",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicHorseBuiltin_Bindings____CreatePropertyBinding__RunSpeed
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicHorseBuiltin_Bindings____CreatePropertyBinding__RunSpeed
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Follow",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings);
      pCVar3 = CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__Follow
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
    pCVar3 = CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__Follow
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar3;
  }
  bVar1 = System_String__op_Equality(name,"Stay",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings);
      pCVar3 = CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__Stay((MethodInfo *)pCVar5)
      ;
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
    pCVar3 = CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__Stay
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar3;
  }
  bVar1 = System_String__op_Equality(name,"ComeTo",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar5 = TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings);
    }
    pCVar3 = CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__ComeTo((MethodInfo *)pCVar5)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar3;
  }
  bVar1 = System_String__op_Equality(name,"MoveTo",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar5 = TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings);
    }
    pCVar3 = CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__MoveTo((MethodInfo *)pCVar5)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar3;
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHorseBuiltin not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$__CreatePropertyBinding__RunSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseBuiltin__o* CustomLogic_CustomLogicHorseBuiltin_Bindings____CreatePropertyBinding__RunSpeed (const MethodInfo* method);
// 0x5a177b0

CustomLogic_CLPropertyBinding_CustomLogicHorseBuiltin__o *
CustomLogic_CustomLogicHorseBuiltin_Bindings____CreatePropertyBinding__RunSpeed(MethodInfo *method)

{
  System_Func_CustomLogicHorseBuiltin__object__o *__this;
  System_Action_CustomLogicHorseBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHorseBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHorseBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings___CreatePropertyBinding__RunSpeed_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings___CreatePropertyBinding__RunSpeed_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHorseBuiltin_object);
    Il2CppMethodInitialized_07545f9a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings___CreatePropertyBinding__RunSpeed_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHorseBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings___CreatePropertyBinding__RunSpeed_g____setter_2_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$__CreateMethodBinding__Follow
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o* CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__Follow (const MethodInfo* method);
// 0x5a17890
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a178c5: jmp 0x5a17935

CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o *
CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__Follow(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHorseBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHorseBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__Follow_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545f9b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicHorseBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__Follow_b__3_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$__CreateMethodBinding__Stay
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o* CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__Stay (const MethodInfo* method);
// 0x5a179d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a17a05: jmp 0x5a17a75

CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o *
CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__Stay(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHorseBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHorseBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__Stay_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545f9c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicHorseBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__Stay_b__4_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$__CreateMethodBinding__ComeTo
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o* CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__ComeTo (const MethodInfo* method);
// 0x5a17b10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a17b45: jmp 0x5a17bb5

CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o *
CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__ComeTo(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHorseBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHorseBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__ComeTo_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545f9d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicHorseBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__ComeTo_b__5_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$__CreateMethodBinding__MoveTo
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o* CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__MoveTo (const MethodInfo* method);
// 0x5a17c50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a17c85: jmp 0x5a17cf5

CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o *
CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__MoveTo(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHorseBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHorseBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__MoveTo_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545f9e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicHorseBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__MoveTo_b__6_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5a17d90

void CustomLogic_CustomLogicHorseBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545f9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ComeTo");
    il2cpp_codegen_initialize_runtime_metadata(&"Stay");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTo");
    il2cpp_codegen_initialize_runtime_metadata(&"RunSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Follow");
    Il2CppMethodInitialized_07545f9f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RunSpeed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Follow",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stay",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ComeTo",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveTo",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeed>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseBuiltin_Bindings_____CreatePropertyBinding__RunSpeed_g____getter_2_0 (CustomLogic_CustomLogicHorseBuiltin_o* __i, const MethodInfo* method);
// 0x5a17ee0

Il2CppObject *
CustomLogic_CustomLogicHorseBuiltin_Bindings_____CreatePropertyBinding__RunSpeed_g____getter_2_0
          (CustomLogic_CustomLogicHorseBuiltin_o *__i,MethodInfo *method)

{
  Characters_Horse_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicHorseBuiltin_o *)0x0) ||
     (__this = (__i->fields).Horse, __this == (Characters_Horse_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Characters_Horse__get_RunSpeed(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeed>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin_Bindings_____CreatePropertyBinding__RunSpeed_g____setter_2_1 (CustomLogic_CustomLogicHorseBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a17f20

void CustomLogic_CustomLogicHorseBuiltin_Bindings_____CreatePropertyBinding__RunSpeed_g____setter_2_1
               (CustomLogic_CustomLogicHorseBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07545fa0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545fa0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicHorseBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHorseBuiltin__set_RunSpeed(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicHorseBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin___ctor (CustomLogic_CustomLogicHorseBuiltin_o* __this, Characters_Horse_o* horse, const MethodInfo* method);
// 0x5a17130

void CustomLogic_CustomLogicHorseBuiltin___ctor
               (CustomLogic_CustomLogicHorseBuiltin_o *__this,Characters_Horse_o *horse,MethodInfo *method)

{
  CustomLogic_CustomLogicCharacterBuiltin___ctor
            ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,(Characters_BaseCharacter_o *)horse,method);
  (__this->fields).Horse = horse;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Horse);
  return;
}


// CustomLogic.CustomLogicHorseBuiltin$$get_RunSpeed
// il2cpp: float CustomLogic_CustomLogicHorseBuiltin__get_RunSpeed (CustomLogic_CustomLogicHorseBuiltin_o* __this, const MethodInfo* method);
// 0x5a17160

float CustomLogic_CustomLogicHorseBuiltin__get_RunSpeed
                (CustomLogic_CustomLogicHorseBuiltin_o *__this,MethodInfo *method)

{
  Characters_Horse_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Horse;
  if (__this_00 == (Characters_Horse_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = Characters_Horse__get_RunSpeed(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicHorseBuiltin$$set_RunSpeed
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin__set_RunSpeed (CustomLogic_CustomLogicHorseBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a17180

void CustomLogic_CustomLogicHorseBuiltin__set_RunSpeed
               (CustomLogic_CustomLogicHorseBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Horse_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545f93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545f93 = '\x01';
  }
  pCVar1 = (__this->fields).Horse;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields).Horse;
    if (pCVar1 == (Characters_Horse_o *)0x0) {
label_05a1721d:
      ThrowNullReferenceException();
    }
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Horse;
      if (pCVar1 == (Characters_Horse_o *)0x0) goto label_05a1721d;
      if ((pCVar1->fields).Dead == false) {
        Characters_Horse__set_RunSpeed(pCVar1,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicHorseBuiltin$$Follow
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin__Follow (CustomLogic_CustomLogicHorseBuiltin_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* target, float stopDistance, const MethodInfo* method);
// 0x5a17230

void CustomLogic_CustomLogicHorseBuiltin__Follow
               (CustomLogic_CustomLogicHorseBuiltin_o *__this,
               CustomLogic_CustomLogicCharacterBuiltin_o *target,float stopDistance,MethodInfo *method)

{
  Characters_Horse_o *pCVar1;
  bool bVar2;
  Characters_BaseCharacter_o *target_00;
  
  if (Il2CppMethodInitialized_07545f94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545f94 = '\x01';
  }
  pCVar1 = (__this->fields).Horse;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields).Horse;
    if (target == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      target_00 = (Characters_BaseCharacter_o *)0x0;
    }
    else {
      target_00 = (target->fields).Character;
    }
    if (pCVar1 == (Characters_Horse_o *)0x0) {
      ThrowNullReferenceException();
    }
    Characters_Horse__Follow(pCVar1,target_00,stopDistance,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicHorseBuiltin$$Stay
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin__Stay (CustomLogic_CustomLogicHorseBuiltin_o* __this, const MethodInfo* method);
// 0x5a172d0

void CustomLogic_CustomLogicHorseBuiltin__Stay
               (CustomLogic_CustomLogicHorseBuiltin_o *__this,MethodInfo *method)

{
  Characters_Horse_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545f95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545f95 = '\x01';
  }
  pCVar1 = (__this->fields).Horse;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields).Horse;
    if (pCVar1 == (Characters_Horse_o *)0x0) {
      ThrowNullReferenceException();
    }
    Characters_Horse__Stay(pCVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicHorseBuiltin$$ComeTo
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin__ComeTo (CustomLogic_CustomLogicHorseBuiltin_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* target, float arrivalDistance, const MethodInfo* method);
// 0x5a17350

void CustomLogic_CustomLogicHorseBuiltin__ComeTo
               (CustomLogic_CustomLogicHorseBuiltin_o *__this,
               CustomLogic_CustomLogicCharacterBuiltin_o *target,float arrivalDistance,MethodInfo *method)

{
  Characters_Horse_o *pCVar1;
  bool bVar2;
  Characters_BaseCharacter_o *target_00;
  
  if (Il2CppMethodInitialized_07545f96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545f96 = '\x01';
  }
  pCVar1 = (__this->fields).Horse;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields).Horse;
    if (target == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      target_00 = (Characters_BaseCharacter_o *)0x0;
    }
    else {
      target_00 = (target->fields).Character;
    }
    if (pCVar1 == (Characters_Horse_o *)0x0) {
      ThrowNullReferenceException();
    }
    Characters_Horse__ComeTo(pCVar1,target_00,arrivalDistance,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicHorseBuiltin$$MoveTo
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin__MoveTo (CustomLogic_CustomLogicHorseBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, float range, bool ignoreEnemies, const MethodInfo* method);
// 0x5a173f0

void CustomLogic_CustomLogicHorseBuiltin__MoveTo
               (CustomLogic_CustomLogicHorseBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,float range,bool ignoreEnemies,
               MethodInfo *method)

{
  Characters_Horse_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545f97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545f97 = '\x01';
  }
  pCVar1 = (__this->fields).Horse;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) && (bVar2)) {
    pCVar1 = (__this->fields).Horse;
    if (pCVar1 == (Characters_Horse_o *)0x0) {
      ThrowNullReferenceException();
    }
    Characters_Horse__MoveTo
              (pCVar1,(UnityEngine_Vector3_o)(position->fields).Value.fields,range,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicHorseBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseBuiltin__get_ClassName (CustomLogic_CustomLogicHorseBuiltin_o* __this, const MethodInfo* method);
// 0x5a17490

System_String_o *
CustomLogic_CustomLogicHorseBuiltin__get_ClassName
          (CustomLogic_CustomLogicHorseBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545f98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Horse");
    Il2CppMethodInitialized_07545f98 = '\x01';
  }
  return "Horse";
}


// CustomLogic.CustomLogicHorseBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHorseBuiltin__get_IsAbstract (CustomLogic_CustomLogicHorseBuiltin_o* __this, const MethodInfo* method);
// 0x5a174c0

bool CustomLogic_CustomLogicHorseBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicHorseBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicHorseBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHorseBuiltin__get_IsStatic (CustomLogic_CustomLogicHorseBuiltin_o* __this, const MethodInfo* method);
// 0x5a174d0

bool CustomLogic_CustomLogicHorseBuiltin__get_IsStatic
               (CustomLogic_CustomLogicHorseBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicHorseBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHorseBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicHorseBuiltin_o* __this, const MethodInfo* method);
// 0x5a174e0

bool CustomLogic_CustomLogicHorseBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicHorseBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


