// Type: CustomLogic.CustomLogicHorseBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHorseBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHorseBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHorseBuiltin_o* CustomLogic_CustomLogicHorseBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f56ca0

CustomLogic_CustomLogicHorseBuiltin_o *
CustomLogic_CustomLogicHorseBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  local_res8[0] = 0;
  NullCheck(args);
  local_res8[0] = (int32_t)args->max_length;
  pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHorseBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f59e90

void CustomLogic_CustomLogicHorseBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843455e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455e9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicHorseBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$<__CreateMethodBinding__Follow>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseBuiltin_Bindings___c_____CreateMethodBinding__Follow_b__3_0 (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHorseBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f57a40

Il2CppObject *
CustomLogic_CustomLogicHorseBuiltin_Bindings___c_____CreateMethodBinding__Follow_b__3_0
          (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHorseBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Characters_Horse_o *pCVar3;
  bool bVar4;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar5;
  Characters_BaseCharacter_o *target;
  float distance;
  
  if (Il2CppMethodInitialized_1843455ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455ea = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181f57b96:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicCharacterBuiltin
                       );
    uVar1 = (uint)__a->max_length;
    if ((int)uVar1 < 2) {
      distance = 5.0;
    }
    else {
      if (uVar1 < 2) goto label_181f57b96;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      distance = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (pIVar2,(MethodInfo_66ED40 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    if (__c != (CustomLogic_CustomLogicHorseBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843455dc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_1843455dc = '\x01';
      }
      pCVar3 = (__c->fields).Horse;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pCVar3 = (__c->fields).Horse;
        if (pCVar5 == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
          target = (Characters_BaseCharacter_o *)0x0;
        }
        else {
          target = (pCVar5->fields).Character;
        }
        if (pCVar3 == (Characters_Horse_o *)0x0) goto label_181f57b90;
        Characters_Horse__Follow(pCVar3,target,distance,(MethodInfo *)0x0);
      }
      return (Il2CppObject *)0x0;
    }
  }
label_181f57b90:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stay>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseBuiltin_Bindings___c_____CreateMethodBinding__Stay_b__4_0 (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHorseBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f59940

Il2CppObject *
CustomLogic_CustomLogicHorseBuiltin_Bindings___c_____CreateMethodBinding__Stay_b__4_0
          (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHorseBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Horse_o *pCVar1;
  bool bVar2;
  
  if (__c != (CustomLogic_CustomLogicHorseBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843455dd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843455dd = '\x01';
    }
    pCVar1 = (__c->fields).Horse;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__c->fields).Horse;
      if (pCVar1 == (Characters_Horse_o *)0x0) goto label_181f599b6;
      Characters_Horse__Stay(pCVar1,(MethodInfo *)0x0);
    }
    return (Il2CppObject *)0x0;
  }
label_181f599b6:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$<__CreateMethodBinding__ComeTo>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseBuiltin_Bindings___c_____CreateMethodBinding__ComeTo_b__5_0 (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHorseBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f576c0

Il2CppObject *
CustomLogic_CustomLogicHorseBuiltin_Bindings___c_____CreateMethodBinding__ComeTo_b__5_0
          (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHorseBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Characters_Horse_o *pCVar3;
  bool bVar4;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar5;
  Characters_BaseCharacter_o *target;
  float distance;
  
  if (Il2CppMethodInitialized_1843455eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455eb = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181f57816:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicCharacterBuiltin
                       );
    uVar1 = (uint)__a->max_length;
    if ((int)uVar1 < 2) {
      distance = 5.0;
    }
    else {
      if (uVar1 < 2) goto label_181f57816;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      distance = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (pIVar2,(MethodInfo_66ED40 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    if (__c != (CustomLogic_CustomLogicHorseBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843455de == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_1843455de = '\x01';
      }
      pCVar3 = (__c->fields).Horse;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pCVar3 = (__c->fields).Horse;
        if (pCVar5 == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
          target = (Characters_BaseCharacter_o *)0x0;
        }
        else {
          target = (pCVar5->fields).Character;
        }
        if (pCVar3 == (Characters_Horse_o *)0x0) goto label_181f57810;
        Characters_Horse__ComeTo(pCVar3,target,distance,(MethodInfo *)0x0);
      }
      return (Il2CppObject *)0x0;
    }
  }
label_181f57810:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveTo>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseBuiltin_Bindings___c_____CreateMethodBinding__MoveTo_b__6_0 (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHorseBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f58b60

Il2CppObject *
CustomLogic_CustomLogicHorseBuiltin_Bindings___c_____CreateMethodBinding__MoveTo_b__6_0
          (CustomLogic_CustomLogicHorseBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHorseBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Characters_Horse_o *pCVar3;
  bool bVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  float distance;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843455ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455ec = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181f58d13:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                       );
    uVar1 = (uint)__a->max_length;
    if ((int)uVar1 < 2) {
      distance = 5.0;
    }
    else {
      if (uVar1 < 2) goto label_181f58d13;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      distance = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (pIVar2,(MethodInfo_66ED40 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    uVar1 = (uint)__a->max_length;
    if (2 < (int)uVar1) {
      if (uVar1 < 3) goto label_181f58d13;
      pIVar2 = __a->m_Items[2];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                (pIVar2,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    }
    if (__c != (CustomLogic_CustomLogicHorseBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843455df == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_1843455df = '\x01';
      }
      pCVar3 = (__c->fields).Horse;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar4) && (pCVar5 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
        pCVar3 = (__c->fields).Horse;
        if (pCVar3 == (Characters_Horse_o *)0x0) goto label_181f58d0d;
        local_28[0].x = (pCVar5->fields).Value.fields.x;
        local_28[0].y = (pCVar5->fields).Value.fields.y;
        local_28[0].z = (pCVar5->fields).Value.fields.z;
        Characters_Horse__MoveTo(pCVar3,(UnityEngine_Vector3_o *)local_28,distance,(MethodInfo *)0x0);
      }
      return (Il2CppObject *)0x0;
    }
  }
label_181f58d0d:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHorseBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f319a0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHorseBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Func_CustomLogicHorseBuiltin__object__o *__this;
  System_Action_CustomLogicHorseBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHorseBuiltin__o *__this_01;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_02;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_03;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_04;
  MethodInfo *lastManagedFrame;
  System_Func_CustomLogicHorseBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_1843455e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ComeTo");
    il2cpp_codegen_initialize_runtime_metadata(&"Stay");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTo");
    il2cpp_codegen_initialize_runtime_metadata(&"RunSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Follow");
    Il2CppMethodInitialized_1843455e1 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"RunSpeed",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843455e2 == '\0') {
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
      Il2CppMethodInitialized_1843455e2 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings___CreatePropertyBinding__RunSpeed_g____getter_2_0
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHorseBuiltin_object);
    System_Action_object__object____ctor
              ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
               (Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings___CreatePropertyBinding__RunSpeed_g____setter_2_1
               ,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseBuiltin);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
               (System_Action_T__object__o *)__this_00,
               (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseBuiltin_ctor);
    return (CustomLogic_ICLMemberBinding_o *)__this_01;
  }
  bVar2 = System_String__op_Equality(name,"Follow",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843455e3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__Follow_b__3_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
      Il2CppMethodInitialized_1843455e3 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    }
    __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__3_0;
    if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f31f66;
    if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9;
    __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this_02,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__Follow_b__3_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicHorseBuiltin__object____object__o *)__this_02;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__3_0;
  }
  else {
    bVar2 = System_String__op_Equality(name,"Stay",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843455e4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__Stay_b__4_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843455e4 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
      }
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__4_0;
      if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f31f66;
      if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9;
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_02,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__Stay_b__4_0,
                 (MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__4_0 =
           (System_Func_CustomLogicHorseBuiltin__object____object__o *)__this_02;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__4_0;
    }
    else {
      bVar2 = System_String__op_Equality(name,"ComeTo",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843455e5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__ComeTo_b__5_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c)
          ;
          Il2CppMethodInitialized_1843455e5 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__5_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f31f66;
        if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object
                              );
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__ComeTo_b__5_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__5_0 =
             (System_Func_CustomLogicHorseBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__5_0;
      }
      else {
        bVar2 = System_String__op_Equality(name,"MoveTo",(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHorseBuiltin not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_04,pSVar3,(MethodInfo *)0x0);
          lastManagedFrame =
               il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_CreateMemberBinding);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,lastManagedFrame);
        }
        if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843455e6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__MoveTo_b__6_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c)
          ;
          Il2CppMethodInitialized_1843455e6 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__6_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f31f66;
        if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object
                              );
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__MoveTo_b__6_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__6_0 =
             (System_Func_CustomLogicHorseBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__6_0;
      }
    }
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this_02);
label_181f31f66:
  __this_03 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_03,(System_String_o *)__this_02,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_03;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$__CreatePropertyBinding__RunSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseBuiltin__o* CustomLogic_CustomLogicHorseBuiltin_Bindings____CreatePropertyBinding__RunSpeed (const MethodInfo* method);
// 0x181f4b3a0

CustomLogic_CLPropertyBinding_CustomLogicHorseBuiltin__o *
CustomLogic_CustomLogicHorseBuiltin_Bindings____CreatePropertyBinding__RunSpeed(MethodInfo *method)

{
  System_Func_CustomLogicHorseBuiltin__object__o *__this;
  System_Action_CustomLogicHorseBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHorseBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843455e2 == '\0') {
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
    Il2CppMethodInitialized_1843455e2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings___CreatePropertyBinding__RunSpeed_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHorseBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings___CreatePropertyBinding__RunSpeed_g____setter_2_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$__CreateMethodBinding__Follow
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o* CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__Follow (const MethodInfo* method);
// 0x181f417e0

CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o *
CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__Follow(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__Follow_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455e3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__3_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__Follow_b__3_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicHorseBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__3_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$__CreateMethodBinding__Stay
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o* CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__Stay (const MethodInfo* method);
// 0x181f45740

CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o *
CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__Stay(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__Stay_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455e4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__Stay_b__4_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicHorseBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__4_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$__CreateMethodBinding__ComeTo
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o* CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__ComeTo (const MethodInfo* method);
// 0x181f40fc0

CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o *
CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__ComeTo(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__ComeTo_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455e5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__ComeTo_b__5_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicHorseBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__5_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$__CreateMethodBinding__MoveTo
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o* CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__MoveTo (const MethodInfo* method);
// 0x181f435d0

CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o *
CustomLogic_CustomLogicHorseBuiltin_Bindings____CreateMethodBinding__MoveTo(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__MoveTo_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455e6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c___CreateMethodBinding__MoveTo_b__6_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicHorseBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHorseBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181f4e2d0

void CustomLogic_CustomLogicHorseBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843455e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ComeTo");
    il2cpp_codegen_initialize_runtime_metadata(&"Stay");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTo");
    il2cpp_codegen_initialize_runtime_metadata(&"RunSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Follow");
    Il2CppMethodInitialized_1843455e7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RunSpeed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Follow",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stay",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ComeTo",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveTo",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHorseBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeed>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseBuiltin_Bindings_____CreatePropertyBinding__RunSpeed_g____getter_2_0 (CustomLogic_CustomLogicHorseBuiltin_o* __i, const MethodInfo* method);
// 0x181f3ebe0

Il2CppObject *
CustomLogic_CustomLogicHorseBuiltin_Bindings_____CreatePropertyBinding__RunSpeed_g____getter_2_0
          (CustomLogic_CustomLogicHorseBuiltin_o *__i,MethodInfo *method)

{
  Characters_Horse_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicHorseBuiltin_o *)0x0) &&
     (__this = (__i->fields).Horse, __this != (Characters_Horse_o *)0x0)) {
    local_res8[0] = Characters_Horse__get_RunSpeed(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHorseBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeed>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin_Bindings_____CreatePropertyBinding__RunSpeed_g____setter_2_1 (CustomLogic_CustomLogicHorseBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3ec20

void CustomLogic_CustomLogicHorseBuiltin_Bindings_____CreatePropertyBinding__RunSpeed_g____setter_2_1
               (CustomLogic_CustomLogicHorseBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Horse_o *pCVar1;
  bool bVar2;
  float value;
  
  if (Il2CppMethodInitialized_1843455e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455e8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicHorseBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843455db == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843455db = '\x01';
    }
    pCVar1 = (__i->fields).Horse;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__i->fields).Horse;
      if (pCVar1 == (Characters_Horse_o *)0x0) goto label_181f3ed1d;
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Horse;
        if (pCVar1 == (Characters_Horse_o *)0x0) goto label_181f3ed1d;
        if ((pCVar1->fields).Dead == false) {
          Characters_Horse__set_RunSpeed(pCVar1,value,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
label_181f3ed1d:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHorseBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin___ctor (CustomLogic_CustomLogicHorseBuiltin_o* __this, Characters_Horse_o* horse, const MethodInfo* method);
// 0x181f51410

void CustomLogic_CustomLogicHorseBuiltin___ctor
               (CustomLogic_CustomLogicHorseBuiltin_o *__this,Characters_Horse_o *horse,MethodInfo *method)

{
  CustomLogic_CustomLogicCharacterBuiltin___ctor
            ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,(Characters_BaseCharacter_o *)horse,
             (MethodInfo *)0x0);
  (__this->fields).Horse = horse;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Horse,horse);
  return;
}


// CustomLogic.CustomLogicHorseBuiltin$$get_RunSpeed
// il2cpp: float CustomLogic_CustomLogicHorseBuiltin__get_RunSpeed (CustomLogic_CustomLogicHorseBuiltin_o* __this, const MethodInfo* method);
// 0x181f51480

float CustomLogic_CustomLogicHorseBuiltin__get_RunSpeed
                (CustomLogic_CustomLogicHorseBuiltin_o *__this,MethodInfo *method)

{
  Characters_Horse_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Horse;
  if (__this_00 != (Characters_Horse_o *)0x0) {
    fVar1 = Characters_Horse__get_RunSpeed(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHorseBuiltin$$set_RunSpeed
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin__set_RunSpeed (CustomLogic_CustomLogicHorseBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f514a0

void CustomLogic_CustomLogicHorseBuiltin__set_RunSpeed
               (CustomLogic_CustomLogicHorseBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Horse_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843455db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843455db = '\x01';
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
label_181f51545:
      ThrowNullReferenceException();
    }
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Horse;
      if (pCVar1 == (Characters_Horse_o *)0x0) goto label_181f51545;
      if ((pCVar1->fields).Dead == false) {
        Characters_Horse__set_RunSpeed(pCVar1,value,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicHorseBuiltin$$Follow
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin__Follow (CustomLogic_CustomLogicHorseBuiltin_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* target, float stopDistance, const MethodInfo* method);
// 0x181f51240

void CustomLogic_CustomLogicHorseBuiltin__Follow
               (CustomLogic_CustomLogicHorseBuiltin_o *__this,
               CustomLogic_CustomLogicCharacterBuiltin_o *target,float stopDistance,MethodInfo *method)

{
  Characters_Horse_o *pCVar1;
  bool bVar2;
  Characters_BaseCharacter_o *target_00;
  
  if (Il2CppMethodInitialized_1843455dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843455dc = '\x01';
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
  }
  return;
}


// CustomLogic.CustomLogicHorseBuiltin$$Stay
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin__Stay (CustomLogic_CustomLogicHorseBuiltin_o* __this, const MethodInfo* method);
// 0x181f51390

void CustomLogic_CustomLogicHorseBuiltin__Stay
               (CustomLogic_CustomLogicHorseBuiltin_o *__this,MethodInfo *method)

{
  Characters_Horse_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843455dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843455dd = '\x01';
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
  }
  return;
}


// CustomLogic.CustomLogicHorseBuiltin$$ComeTo
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin__ComeTo (CustomLogic_CustomLogicHorseBuiltin_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* target, float arrivalDistance, const MethodInfo* method);
// 0x181f511a0

void CustomLogic_CustomLogicHorseBuiltin__ComeTo
               (CustomLogic_CustomLogicHorseBuiltin_o *__this,
               CustomLogic_CustomLogicCharacterBuiltin_o *target,float arrivalDistance,MethodInfo *method)

{
  Characters_Horse_o *pCVar1;
  bool bVar2;
  Characters_BaseCharacter_o *target_00;
  
  if (Il2CppMethodInitialized_1843455de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843455de = '\x01';
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
  }
  return;
}


// CustomLogic.CustomLogicHorseBuiltin$$MoveTo
// il2cpp: void CustomLogic_CustomLogicHorseBuiltin__MoveTo (CustomLogic_CustomLogicHorseBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, float range, bool ignoreEnemies, const MethodInfo* method);
// 0x181f512e0

void CustomLogic_CustomLogicHorseBuiltin__MoveTo
               (CustomLogic_CustomLogicHorseBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,float range,bool ignoreEnemies,
               MethodInfo *method)

{
  Characters_Horse_o *pCVar1;
  bool bVar2;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843455df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843455df = '\x01';
  }
  pCVar1 = (__this->fields).Horse;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar2) && (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    pCVar1 = (__this->fields).Horse;
    if (pCVar1 == (Characters_Horse_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_28[0].x = (position->fields).Value.fields.x;
    local_28[0].y = (position->fields).Value.fields.y;
    local_28[0].z = (position->fields).Value.fields.z;
    Characters_Horse__MoveTo(pCVar1,(UnityEngine_Vector3_o *)local_28,range,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicHorseBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseBuiltin__get_ClassName (CustomLogic_CustomLogicHorseBuiltin_o* __this, const MethodInfo* method);
// 0x181f51450

System_String_o *
CustomLogic_CustomLogicHorseBuiltin__get_ClassName
          (CustomLogic_CustomLogicHorseBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843455e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Horse");
    Il2CppMethodInitialized_1843455e0 = '\x01';
  }
  return "Horse";
}


// CustomLogic.CustomLogicHorseBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHorseBuiltin__get_IsAbstract (CustomLogic_CustomLogicHorseBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHorseBuiltin__get_IsAbstract(CustomLogic_CustomLogicHorseBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicHorseBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHorseBuiltin__get_IsStatic (CustomLogic_CustomLogicHorseBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicHorseBuiltin__get_IsStatic(CustomLogic_CustomLogicHorseBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicHorseBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHorseBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicHorseBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHorseBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicHorseBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


