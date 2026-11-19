// Type: CustomLogic.CustomLogicGameBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicGameBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicGameBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicGameBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicGameBuiltin_o* CustomLogic_CustomLogicGameBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5ad4de0

CustomLogic_CustomLogicGameBuiltin_o *
CustomLogic_CustomLogicGameBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicGameBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546d61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin);
    Il2CppMethodInitialized_07546d61 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicGameBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin);
  CustomLogic_CustomLogicGameBuiltin___ctor(__this,method);
  return __this;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5adc9b0

void CustomLogic_CustomLogicGameBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546db1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546db1 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5adca20

void CustomLogic_CustomLogicGameBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetExperienceScore>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetExperienceScore_b__27_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adca30

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetExperienceScore_b__27_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicExperienceScoreBuiltin_o *pCVar1;
  
  if (__c == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicGameBuiltin__GetExperienceScore(__c,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SaveExperienceScore>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SaveExperienceScore_b__28_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adca50

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SaveExperienceScore_b__28_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool lowerIsBetter;
  System_String_o *unit;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  float score;
  
  if (Il2CppMethodInitialized_07546db2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546db2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05adcb5b:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    score = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__a->max_length & 0xfffffffe) != 0) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[1];
      unit = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this_00,
                        (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if ((int)__a->max_length < 3) {
        lowerIsBetter = false;
      }
      else {
        __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        lowerIsBetter =
             CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       ((Il2CppObject *)__this_00,
                        (MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      }
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        CustomLogic_CustomLogicGameBuiltin__SaveExperienceScore(__this_00,score,unit,lowerIsBetter,method);
        return (Il2CppObject *)0x0;
      }
      goto label_05adcb5b;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SaveExperienceCompletionTime>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SaveExperienceCompletionTime_b__29_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adcb70

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SaveExperienceCompletionTime_b__29_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  MethodInfo *method_00;
  float elapsed;
  
  if (Il2CppMethodInitialized_07546db3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546db3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    elapsed = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                        );
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__SaveExperienceCompletionTime(__c,elapsed,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnHorse>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnHorse_b__30_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adcc00

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnHorse_b__30_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicHorseBuiltin_o *pCVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  float rotationY;
  
  if (Il2CppMethodInitialized_07546db4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546db4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)__this_00,
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    rotationY = 0.0;
    method_00 = extraout_RDX;
    if (1 < (int)__a->max_length) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            ((Il2CppObject *)__this_00,
                             (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                            );
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnHorse(__this_00,position,rotationY,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__Debug>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__Debug_b__31_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adcce0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__Debug_b__31_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__Debug
                ((CustomLogic_CustomLogicGameBuiltin_o *)__this,__a->m_Items[0],(MethodInfo *)__a);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__Print>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__Print_b__32_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adcd10

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__Print_b__32_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__Print
                ((CustomLogic_CustomLogicGameBuiltin_o *)__this,__a->m_Items[0],(MethodInfo *)__a);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__PrintAll>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__PrintAll_b__33_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adcd40
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5adcd6a: test rbx, rbx
// asm:   0x5adcd6d: je 0x5adcdd9
// asm:   0x5adcd6f: test rbx, rbx
// asm:   0x5adcd72: je 0x5adcde8

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__PrintAll_b__33_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pSVar1 = (System_String_o *)__a->m_Items[0];
      if (Il2CppMethodInitialized_07546d37 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
        il2cpp_codegen_initialize_runtime_metadata(&"null");
        Il2CppMethodInitialized_07546d37 = '\x01';
      }
      if (pSVar1 == (System_String_o *)0x0) {
        pSVar1 = "null";
      }
      if (pSVar1 != (System_String_o *)0x0) {
        pSVar1 = (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__SendChatAll(pSVar1,3,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetGeneralSetting>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetGeneralSetting_b__34_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adce00

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetGeneralSetting_b__34_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *settingName;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07546db5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546db5 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    settingName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)__this_00,
                             (MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicGameBuiltin__GetGeneralSetting(__this_00,settingName,method_00);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTitanSetting>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetTitanSetting_b__35_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adce90

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetTitanSetting_b__35_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *settingName;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07546db6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546db6 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    settingName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)__this_00,
                             (MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicGameBuiltin__GetTitanSetting(__this_00,settingName,method_00);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMiscSetting>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetMiscSetting_b__36_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adcf20

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetMiscSetting_b__36_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *settingName;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07546db7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546db7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    settingName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)__this_00,
                             (MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicGameBuiltin__GetMiscSetting(__this_00,settingName,method_00);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadGeneralSetting>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadGeneralSetting_b__37_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adcfb0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadGeneralSetting_b__37_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *settingName;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  undefined1 uStack_19;
  
  if (Il2CppMethodInitialized_07546db8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546db8 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05add05d:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    settingName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)__this_00,
                             (MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        uStack_19 = CustomLogic_CustomLogicGameBuiltin__SetPreloadGeneralSetting
                              (__this_00,settingName,__a->m_Items[1],method);
        pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_19);
        return pIVar1;
      }
      goto label_05add05d;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadTitanSetting>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadTitanSetting_b__38_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5add070

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadTitanSetting_b__38_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *settingName;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  undefined1 uStack_19;
  
  if (Il2CppMethodInitialized_07546db9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546db9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05add11d:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    settingName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)__this_00,
                             (MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        uStack_19 = CustomLogic_CustomLogicGameBuiltin__SetPreloadTitanSetting
                              (__this_00,settingName,__a->m_Items[1],method);
        pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_19);
        return pIVar1;
      }
      goto label_05add11d;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadMiscSetting>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadMiscSetting_b__39_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5add130

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadMiscSetting_b__39_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *settingName;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  undefined1 uStack_19;
  
  if (Il2CppMethodInitialized_07546dba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dba = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05add1dd:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    settingName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)__this_00,
                             (MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        uStack_19 = CustomLogic_CustomLogicGameBuiltin__SetPreloadMiscSetting
                              (__this_00,settingName,__a->m_Items[1],method);
        pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_19);
        return pIVar1;
      }
      goto label_05add1dd;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadModeSetting>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadModeSetting_b__40_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5add1f0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadModeSetting_b__40_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *settingName;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  undefined1 uStack_19;
  
  if (Il2CppMethodInitialized_07546dbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dbb = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05add29d:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    settingName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)__this_00,
                             (MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        uStack_19 = CustomLogic_CustomLogicGameBuiltin__SetPreloadModeSetting
                              (__this_00,settingName,__a->m_Items[1],method);
        pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_19);
        return pIVar1;
      }
      goto label_05add29d;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadMap>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadMap_b__41_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5add2b0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadMap_b__41_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  System_String_o *mapCategory;
  System_String_o *mapName;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_07546dbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dbc = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05add376:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    mapCategory = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar2,(MethodInfo_34BDE00 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[1];
      mapName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          ((Il2CppObject *)__this_00,
                           (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
      ;
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        bVar1 = CustomLogic_CustomLogicGameBuiltin__SetPreloadMap(__this_00,mapCategory,mapName,method);
        uStack_28 = CONCAT17(bVar1,(undefined7)uStack_28);
        pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_28 + 7));
        return pIVar2;
      }
      goto label_05add376;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadGameMode>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadGameMode_b__42_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5add380

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadGameMode_b__42_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  System_String_o *gameMode;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07546dbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dbd = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    gameMode = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)__this_00,
                          (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicGameBuiltin__SetPreloadGameMode(__this_00,gameMode,method_00);
      uStack_18 = CONCAT17(bVar1,(undefined7)uStack_18);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__LoadPreloadPreset>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__LoadPreloadPreset_b__43_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5add430

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__LoadPreloadPreset_b__43_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  System_String_o *presetName;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07546dbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dbe = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    presetName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           ((Il2CppObject *)__this_00,
                            (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                           );
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicGameBuiltin__LoadPreloadPreset(__this_00,presetName,method_00);
      uStack_18 = CONCAT17(bVar1,(undefined7)uStack_18);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__RestartWithPreloadSettings>b__44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__RestartWithPreloadSettings_b__44_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5add4e0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__RestartWithPreloadSettings_b__44_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  undefined1 local_9;
  
  if (__c == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07546d42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546d42 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    GameManagers_InGameManager__RestartGame((MethodInfo *)0x0);
  }
  local_9 = bVar1;
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,&local_9);
  return pIVar2;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__End>b__45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__End_b__45_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5add580

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__End_b__45_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  float delay;
  
  if (Il2CppMethodInitialized_07546dbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dbf = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    delay = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      ((Il2CppObject *)__this_00,
                       (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__End(__this_00,delay,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindCharacterByViewID>b__46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__FindCharacterByViewID_b__46_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5add610

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__FindCharacterByViewID_b__46_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int32_t viewID;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07546dc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dc0 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    viewID = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                       ((Il2CppObject *)__this_00,
                        (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicGameBuiltin__FindCharacterByViewID(__this_00,viewID,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitan>b__47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitan_b__47_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5add6a0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitan_b__47_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *type;
  CustomLogic_CustomLogicTitanBuiltin_o *pCVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07546dc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dc1 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    type = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)__this_00,
                      (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnTitan(__this_00,type,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitanAt>b__48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitanAt_b__48_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5add730

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitanAt_b__48_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *type;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicTitanBuiltin_o *pCVar1;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  float rotationY;
  
  if (Il2CppMethodInitialized_07546dc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dc2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05add82d:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    type = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[1];
      position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           ((Il2CppObject *)__this_00,
                            (MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      rotationY = 0.0;
      if (2 < (int)__a->max_length) {
        __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                              ((Il2CppObject *)__this_00,
                               (MethodInfo_34BDFE0 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      }
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnTitanAt(__this_00,type,position,rotationY,method);
        return (Il2CppObject *)pCVar1;
      }
      goto label_05add82d;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitans>b__49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitans_b__49_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5add840

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitans_b__49_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t count;
  System_String_o *type;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07546dc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dc3 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05add8eb:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    type = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[1];
      count = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        ((Il2CppObject *)__this_00,
                         (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnTitans(__this_00,type,count,method);
        return (Il2CppObject *)pCVar1;
      }
      goto label_05add8eb;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitansAsync>b__50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitansAsync_b__50_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5add900

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitansAsync_b__50_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t count;
  System_String_o *type;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07546dc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dc4 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05add9ae:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    type = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[1];
      count = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        ((Il2CppObject *)__this_00,
                         (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        CustomLogic_CustomLogicGameBuiltin__SpawnTitansAsync(__this_00,type,count,method);
        return (Il2CppObject *)0x0;
      }
      goto label_05add9ae;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitansAt>b__51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitansAt_b__51_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5add9c0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitansAt_b__51_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t count;
  System_String_o *type;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  MethodInfo *in_R8;
  float rotationY;
  
  if (Il2CppMethodInitialized_07546dc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dc5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05addaf8:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    type = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      count = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (__a->m_Items[1],
                         (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (2 < (uint)__a->max_length) {
        __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[2];
        position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             ((Il2CppObject *)__this_00,
                              (MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
        ;
        rotationY = 0.0;
        if (3 < (int)__a->max_length) {
          __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                ((Il2CppObject *)__this_00,
                                 (MethodInfo_34BDFE0 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        }
        if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
          pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnTitansAt
                             (__this_00,type,count,position,rotationY,in_R8);
          return (Il2CppObject *)pCVar1;
        }
        goto label_05addaf8;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitansAtAsync>b__52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitansAtAsync_b__52_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5addb00

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitansAtAsync_b__52_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t count;
  System_String_o *type;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  MethodInfo *in_R8;
  float rotationY;
  
  if (Il2CppMethodInitialized_07546dc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dc6 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05addc3b:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    type = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      count = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (__a->m_Items[1],
                         (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (2 < (uint)__a->max_length) {
        __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[2];
        position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             ((Il2CppObject *)__this_00,
                              (MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
        ;
        rotationY = 0.0;
        if (3 < (int)__a->max_length) {
          __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                ((Il2CppObject *)__this_00,
                                 (MethodInfo_34BDFE0 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        }
        if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
          CustomLogic_CustomLogicGameBuiltin__SpawnTitansAtAsync
                    (__this_00,type,count,position,rotationY,in_R8);
          return (Il2CppObject *)0x0;
        }
        goto label_05addc3b;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnShifter>b__53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnShifter_b__53_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5addc40

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnShifter_b__53_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *type;
  CustomLogic_CustomLogicShifterBuiltin_o *pCVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07546dc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dc7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    type = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)__this_00,
                      (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnShifter(__this_00,type,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnHuman>b__54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnHuman_b__54_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5addcd0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnHuman_b__54_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t costume;
  System_String_o *costumeName;
  System_String_o *loadout;
  CustomLogic_CustomLogicHumanBuiltin_o *pCVar1;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07546dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dc8 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05addda5:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    costume = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((__a->max_length & 0xfffffffe) != 0) {
      costumeName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              (__a->m_Items[1],
                               (MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[2];
        loadout = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)__this_00,
                             (MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
          pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnHuman(__this_00,costume,costumeName,loadout,in_R8)
          ;
          return (Il2CppObject *)pCVar1;
        }
        goto label_05addda5;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnHumanAt>b__55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnHumanAt_b__55_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adddb0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnHumanAt_b__55_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t costume;
  System_String_o *costumeName;
  System_String_o *loadout;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicHumanBuiltin_o *pCVar1;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  MethodInfo *in_R9;
  float rotationY;
  
  if (Il2CppMethodInitialized_07546dc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dc9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05addf0e:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    costume = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((__a->max_length & 0xfffffffe) != 0) {
      costumeName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              (__a->m_Items[1],
                               (MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        loadout = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (__a->m_Items[2],
                             (MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if ((__a->max_length & 0xfffffffc) != 0) {
          __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[3];
          position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               ((Il2CppObject *)__this_00,
                                (MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                               );
          rotationY = 0.0;
          if (4 < (int)__a->max_length) {
            __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[4];
            if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
            }
            rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                  ((Il2CppObject *)__this_00,
                                   (MethodInfo_34BDFE0 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          }
          if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
            pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnHumanAt
                               (__this_00,costume,costumeName,loadout,position,rotationY,in_R9);
            return (Il2CppObject *)pCVar1;
          }
          goto label_05addf0e;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnShifterAt>b__56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnShifterAt_b__56_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5addf20

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnShifterAt_b__56_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *type;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicShifterBuiltin_o *pCVar1;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  float rotationY;
  
  if (Il2CppMethodInitialized_07546dca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dca = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05ade01d:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    type = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[1];
      position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           ((Il2CppObject *)__this_00,
                            (MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      rotationY = 0.0;
      if (2 < (int)__a->max_length) {
        __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                              ((Il2CppObject *)__this_00,
                               (MethodInfo_34BDFE0 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      }
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnShifterAt(__this_00,type,position,rotationY,method);
        return (Il2CppObject *)pCVar1;
      }
      goto label_05ade01d;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnProjectile>b__57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnProjectile_b__57_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ade030

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnProjectile_b__57_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_String_o *projectileName;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicVector3Builtin_o *rotation;
  CustomLogic_CustomLogicVector3Builtin_o *velocity;
  CustomLogic_CustomLogicVector3Builtin_o *gravity;
  System_String_o *team;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  float liveTime;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546dcb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dcb = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05ade1e3:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    projectileName =
         CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                   (pIVar2,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((__a->max_length & 0xfffffffe) != 0) {
      position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        rotation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[2],
                              (MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
        ;
        if ((__a->max_length & 0xfffffffc) != 0) {
          velocity = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (__a->m_Items[3],
                                (MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                               );
          if (4 < (uint)__a->max_length) {
            gravity = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (__a->m_Items[4],
                                 (MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                                );
            if (5 < (uint)__a->max_length) {
              liveTime = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                   (__a->m_Items[5],
                                    (MethodInfo_34BDFE0 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
              if (6 < (uint)__a->max_length) {
                method_00 = (MethodInfo *)0x5ade180;
                team = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                 (__a->m_Items[6],
                                  (MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
                iVar1 = (int)__a->max_length;
                if (iVar1 < 8) {
                  __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)0x0;
                  pIVar2 = (Il2CppObject *)0x0;
                }
                else {
                  __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[7];
                  if (iVar1 == 8) {
                    pIVar2 = (Il2CppObject *)0x0;
                  }
                  else {
                    pIVar2 = __a->m_Items[8];
                  }
                }
                if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
                  CustomLogic_CustomLogicGameBuiltin__SpawnProjectile
                            (__this_00,projectileName,position,rotation,velocity,gravity,liveTime,team,
                             (Il2CppObject *)__this_00,pIVar2,method_00);
                  return (Il2CppObject *)0x0;
                }
                goto label_05ade1e3;
              }
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnProjectileWithOwner>b__58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnProjectileWithOwner_b__58_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ade1f0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnProjectileWithOwner_b__58_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_String_o *projectileName;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicVector3Builtin_o *rotation;
  CustomLogic_CustomLogicVector3Builtin_o *velocity;
  CustomLogic_CustomLogicVector3Builtin_o *gravity;
  CustomLogic_CustomLogicCharacterBuiltin_o *owner;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  float liveTime;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546dcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dcc = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05ade3af:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    projectileName =
         CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                   (pIVar2,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((__a->max_length & 0xfffffffe) != 0) {
      position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        rotation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[2],
                              (MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
        ;
        if ((__a->max_length & 0xfffffffc) != 0) {
          velocity = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (__a->m_Items[3],
                                (MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                               );
          if (4 < (uint)__a->max_length) {
            gravity = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (__a->m_Items[4],
                                 (MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                                );
            if (5 < (uint)__a->max_length) {
              liveTime = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                   (__a->m_Items[5],
                                    (MethodInfo_34BDFE0 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
              if (6 < (uint)__a->max_length) {
                method_00 = (MethodInfo *)0x5ade34c;
                owner = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (__a->m_Items[6],
                                   (MethodInfo_34BDE00 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicCharacterBuiltin
                                  );
                iVar1 = (int)__a->max_length;
                if (iVar1 < 8) {
                  __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)0x0;
                  pIVar2 = (Il2CppObject *)0x0;
                }
                else {
                  __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[7];
                  if (iVar1 == 8) {
                    pIVar2 = (Il2CppObject *)0x0;
                  }
                  else {
                    pIVar2 = __a->m_Items[8];
                  }
                }
                if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
                  CustomLogic_CustomLogicGameBuiltin__SpawnProjectileWithOwner
                            (__this_00,projectileName,position,rotation,velocity,gravity,liveTime,owner,
                             (Il2CppObject *)__this_00,pIVar2,method_00);
                  return (Il2CppObject *)0x0;
                }
                goto label_05ade3af;
              }
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnEffect>b__59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnEffect_b__59_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ade3c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ade542: movss xmm0, dword ptr [rsp + 0x14]

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnEffect_b__59_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *effectName;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicVector3Builtin_o *rotation;
  CustomLogic_CustomLogicColorBuiltin_o *tsExplodeColor;
  System_String_o *tsKillSound;
  float scale;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_07546dcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dcd = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05ade579:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    effectName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (pIVar1,(MethodInfo_34BDE00 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((((__a->max_length & 0xfffffffe) != 0) &&
        (position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              (__a->m_Items[1],
                               (MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                              ), 2 < (uint)__a->max_length)) &&
       (rotation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[2],
                              (MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
       , (__a->max_length & 0xfffffffc) != 0)) {
      scale = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[3],
                         (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if ((int)__a->max_length < 5) {
        tsExplodeColor = (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
        tsKillSound = (System_String_o *)0x0;
      }
      else {
        pIVar1 = __a->m_Items[4];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        tsExplodeColor =
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar1,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
        if ((int)__a->max_length < 6) {
          tsKillSound = (System_String_o *)0x0;
        }
        else {
          pIVar1 = __a->m_Items[5];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          tsKillSound = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (pIVar1,(MethodInfo_34BDE00 *)
                                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        }
      }
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        CustomLogic_CustomLogicGameBuiltin__SpawnEffectInternal
                  (effectName,position,rotation,scale,true,tsExplodeColor,tsKillSound,
                   in_stack_ffffffffffffffb8);
        return (Il2CppObject *)0x0;
      }
      goto label_05ade579;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnUnscaledEffect>b__60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnUnscaledEffect_b__60_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ade580

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnUnscaledEffect_b__60_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *in_RAX;
  System_String_o *effectName;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicVector3Builtin_o *rotation;
  CustomLogic_CustomLogicColorBuiltin_o *tsExplodeColor;
  System_String_o *tsKillSound;
  
  if (Il2CppMethodInitialized_07546dce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dce = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05ade703:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    effectName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (pIVar1,(MethodInfo_34BDE00 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        rotation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[2],
                              (MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
        ;
        if ((int)__a->max_length < 4) {
          tsExplodeColor = (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
          tsKillSound = (System_String_o *)0x0;
        }
        else {
          pIVar1 = __a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          tsExplodeColor =
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar1,(MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin
                         );
          if ((int)__a->max_length < 5) {
            tsKillSound = (System_String_o *)0x0;
          }
          else {
            pIVar1 = __a->m_Items[4];
            if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
            }
            tsKillSound = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                    (pIVar1,(MethodInfo_34BDE00 *)
                                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
          }
        }
        if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
          CustomLogic_CustomLogicGameBuiltin__SpawnEffectInternal
                    (effectName,position,rotation,1.0,false,tsExplodeColor,tsKillSound,in_RAX);
          return (Il2CppObject *)0x0;
        }
        goto label_05ade703;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnPlayer>b__61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayer_b__61_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ade710

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayer_b__61_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool force;
  CustomLogic_CustomLogicPlayerBuiltin_o *player;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07546dcf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dcf = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05ade7bf:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    player = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[1];
      force = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        ((Il2CppObject *)__this_00,
                         (MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        CustomLogic_CustomLogicGameBuiltin__SpawnPlayer(__this_00,player,force,method);
        return (Il2CppObject *)0x0;
      }
      goto label_05ade7bf;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnPlayerAll>b__62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayerAll_b__62_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ade7d0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayerAll_b__62_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  bool force;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07546dd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dd0 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    force = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                      ((Il2CppObject *)__this_00,
                       (MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAll(__this_00,force,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnPlayerAt>b__63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayerAt_b__63_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ade860

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayerAt_b__63_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool force;
  CustomLogic_CustomLogicPlayerBuiltin_o *player;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  MethodInfo *in_R8;
  float rotationY;
  
  if (Il2CppMethodInitialized_07546dd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dd1 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05ade99c:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    player = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      force = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (__a->m_Items[1],
                         (MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if (2 < (uint)__a->max_length) {
        __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[2];
        position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             ((Il2CppObject *)__this_00,
                              (MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
        ;
        rotationY = 0.0;
        if (3 < (int)__a->max_length) {
          __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                ((Il2CppObject *)__this_00,
                                 (MethodInfo_34BDFE0 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        }
        if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
          CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAt(__this_00,player,force,position,rotationY,in_R8);
          return (Il2CppObject *)0x0;
        }
        goto label_05ade99c;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnPlayerAtAll>b__64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayerAtAll_b__64_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ade9b0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayerAtAll_b__64_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool force;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  float rotationY;
  
  if (Il2CppMethodInitialized_07546dd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dd2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05adeaaf:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    force = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                      (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if ((__a->max_length & 0xfffffffe) != 0) {
      __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[1];
      position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           ((Il2CppObject *)__this_00,
                            (MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      rotationY = 0.0;
      if (2 < (int)__a->max_length) {
        __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                              ((Il2CppObject *)__this_00,
                               (MethodInfo_34BDFE0 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      }
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAtAll(__this_00,force,position,rotationY,method);
        return (Il2CppObject *)0x0;
      }
      goto label_05adeaaf;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPlaylist>b__65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPlaylist_b__65_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adeac0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPlaylist_b__65_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_String_o *playlist;
  
  if (Il2CppMethodInitialized_07546dd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dd3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    playlist = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_07546d55 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_07546d55 = '\x01';
      }
      ApplicationManagers_MusicManager__SetPlaylist(playlist,(MethodInfo *)0x0);
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        (pCVar1->fields).HasSetMusic = true;
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetSong>b__66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetSong_b__66_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adebb0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetSong_b__66_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_String_o *song;
  
  if (Il2CppMethodInitialized_07546dd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dd4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    song = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_07546d56 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_07546d56 = '\x01';
      }
      ApplicationManagers_MusicManager__SetSong(song,0.0,(MethodInfo *)0x0);
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        (pCVar1->fields).HasSetMusic = true;
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__DrawRay>b__67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__DrawRay_b__67_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adeca0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__DrawRay_b__67_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *dir;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  MethodInfo *in_R8;
  float duration;
  
  if (Il2CppMethodInitialized_07546dd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dd5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05adeda9:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      dir = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__a->m_Items[1],
                       (MethodInfo_34BDE00 *)
                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        color = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[2],
                           (MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
        if ((__a->max_length & 0xfffffffc) != 0) {
          __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[3];
          duration = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                               ((Il2CppObject *)__this_00,
                                (MethodInfo_34BDFE0 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
            CustomLogic_CustomLogicGameBuiltin__DrawRay(__this_00,start,dir,color,duration,in_R8);
            return (Il2CppObject *)0x0;
          }
          goto label_05adeda9;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowKillScore>b__68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__ShowKillScore_b__68_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adedb0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__ShowKillScore_b__68_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int32_t damage;
  MethodInfo *method_00;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07546dd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dd6 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    damage = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                       ((Il2CppObject *)__this_00,
                        (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__ShowKillScore(__this_00,damage,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowKillFeed>b__69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__ShowKillFeed_b__69_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adee40

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__ShowKillFeed_b__69_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t score;
  System_String_o *killer;
  System_String_o *victim;
  System_String_o *weapon;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07546dd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dd7 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05adef3f:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    killer = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      victim = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        score = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                          (__a->m_Items[2],
                           (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
        if ((__a->max_length & 0xfffffffc) != 0) {
          __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[3];
          weapon = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             ((Il2CppObject *)__this_00,
                              (MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
          if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
            CustomLogic_CustomLogicGameBuiltin__ShowKillFeed(__this_00,killer,victim,score,weapon,in_R9);
            return (Il2CppObject *)0x0;
          }
          goto label_05adef3f;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowKillFeedAll>b__70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__ShowKillFeedAll_b__70_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5adef50

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__ShowKillFeedAll_b__70_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t score;
  System_String_o *killer;
  System_String_o *victim;
  System_String_o *weapon;
  CustomLogic_CustomLogicGameBuiltin_o *__this_00;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07546dd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dd8 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05adf04f:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    killer = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      victim = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        score = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                          (__a->m_Items[2],
                           (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
        if ((__a->max_length & 0xfffffffc) != 0) {
          __this_00 = (CustomLogic_CustomLogicGameBuiltin_o *)__a->m_Items[3];
          weapon = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             ((Il2CppObject *)__this_00,
                              (MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
          if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
            CustomLogic_CustomLogicGameBuiltin__ShowKillFeedAll(__this_00,killer,victim,score,weapon,in_R9);
            return (Il2CppObject *)0x0;
          }
          goto label_05adf04f;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicGameBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5ad4ec0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicGameBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicGameBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07546d62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"SetPreloadMap");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultShowKillFeed");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowScoreboardLoadout");
    il2cpp_codegen_initialize_runtime_metadata(&"GetExperienceScore");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowKillFeedAll");
    il2cpp_codegen_initialize_runtime_metadata(&"SetSong");
    il2cpp_codegen_initialize_runtime_metadata(&"ForcedCharacterType");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPreloadTitanSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTitanSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"AIShifters");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveExperienceScore");
    il2cpp_codegen_initialize_runtime_metadata(&"EndTimeLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Print");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnTitanAt");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnProjectileWithOwner");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerAt");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreloadPreset");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowKillScore");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnHumanAt");
    il2cpp_codegen_initialize_runtime_metadata(&"ExperienceID");
    il2cpp_codegen_initialize_runtime_metadata(&"Debug");
    il2cpp_codegen_initialize_runtime_metadata(&"CanSaveExperienceScore");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnTitansAsync");
    il2cpp_codegen_initialize_runtime_metadata(&"MainCharacter");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnProjectile");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnHorse");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowKillFeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"AIHumans");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnShifterAt");
    il2cpp_codegen_initialize_runtime_metadata(&"AITitans");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnTitansAtAsync");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerAll");
    il2cpp_codegen_initialize_runtime_metadata(&"IsExperience");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnTitan");
    il2cpp_codegen_initialize_runtime_metadata(&"RestartWithPreloadSettings");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnTitansAt");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"End");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerHumans");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPreloadGeneralSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnTitans");
    il2cpp_codegen_initialize_runtime_metadata(&"GetGeneralSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPlaylist");
    il2cpp_codegen_initialize_runtime_metadata(&"ForcedLoadout");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPreloadMiscSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"PrintAll");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowScoreboardStatus");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerShifters");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveExperienceCompletionTime");
    il2cpp_codegen_initialize_runtime_metadata(&"GetMiscSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerTitans");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultAddKillScore");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerAtAll");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPreloadGameMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Humans");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnUnscaledEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultShowKillScore");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifters");
    il2cpp_codegen_initialize_runtime_metadata(&"DrawRay");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultHideKillScore");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPreloadModeSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnHuman");
    il2cpp_codegen_initialize_runtime_metadata(&"Horses");
    il2cpp_codegen_initialize_runtime_metadata(&"FindCharacterByViewID");
    il2cpp_codegen_initialize_runtime_metadata(&"Loadouts");
    il2cpp_codegen_initialize_runtime_metadata(&"IsEnding");
    Il2CppMethodInitialized_07546d62 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x6e104b4f) {
    if (uVar2 < 0x444d9eda) {
      if (uVar2 < 0x2b56c4fc) {
        if (uVar2 < 0x1f94047f) {
          if (uVar2 < 0x177ad93c) {
            if (uVar2 == 0x541c794) {
              bVar1 = System_String__op_Equality(name,"SetPreloadGeneralSetting",(MethodInfo *)0x0);
              if (bVar1) {
                pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
                if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
                   ) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
                }
                pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadGeneralSetting
                                   ((MethodInfo *)pCVar6);
                return (CustomLogic_ICLMemberBinding_o *)pCVar3;
              }
            }
            else if (uVar2 == 0x177ad93b) {
              bVar1 = System_String__op_Equality(name,"ShowKillFeedAll",(MethodInfo *)0x0);
              if (bVar1) {
                pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
                if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
                   ) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
                }
                pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillFeedAll
                                   ((MethodInfo *)pCVar6);
                return (CustomLogic_ICLMemberBinding_o *)pCVar3;
              }
            }
          }
          else if (uVar2 == 0x1aa259a2) {
            bVar1 = System_String__op_Equality(name,"SpawnProjectileWithOwner",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnProjectileWithOwner
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x1f94047e) {
            bVar1 = System_String__op_Equality(name,"SaveExperienceScore",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SaveExperienceScore
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 < 0x2075e2a8) {
          if (uVar2 == 0x203c8139) {
            bVar1 = System_String__op_Equality(name,"DefaultAddKillScore",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultAddKillScore
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
          else if (uVar2 == 0x2075e2a7) {
            bVar1 = System_String__op_Equality(name,"MainCharacter",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__MainCharacter
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
        }
        else if (uVar2 == 0x2a610338) {
          bVar1 = System_String__op_Equality(name,"Debug",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__Debug
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x2b56c4fb) {
          bVar1 = System_String__op_Equality(name,"SpawnShifter",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnShifter
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x3411d8c8) {
        if (uVar2 < 0x2e389efc) {
          if (uVar2 == 0x2cf09a84) {
            bVar1 = System_String__op_Equality(name,"SetPreloadMiscSetting",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadMiscSetting
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x2e389efb) {
            bVar1 = System_String__op_Equality(name,"PlayerTitans",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerTitans
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
        }
        else if (uVar2 == 0x31cb34ce) {
          bVar1 = System_String__op_Equality(name,"SpawnShifterAt",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnShifterAt
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x3411d8c7) {
          bVar1 = System_String__op_Equality(name,"SpawnTitanAt",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitanAt
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x35d2d6c6) {
        if (uVar2 == 0x34e873c4) {
          bVar1 = System_String__op_Equality(name,"SpawnUnscaledEffect",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnUnscaledEffect
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x35d2d6c5) {
          bVar1 = System_String__op_Equality(name,"SetPlaylist",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPlaylist
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x3bba96bf) {
        bVar1 = System_String__op_Equality(name,"SpawnProjectile",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnProjectile
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x3c86640b) {
        bVar1 = System_String__op_Equality(name,"SaveExperienceCompletionTime",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SaveExperienceCompletionTime
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x444d9ed9) {
        bVar1 = System_String__op_Equality(name,"IsExperience",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__IsExperience
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x55e82501) {
      if (uVar2 < 0x4e95b0ee) {
        if (uVar2 < 0x459c1314) {
          if (uVar2 == 0x4514d439) {
            bVar1 = System_String__op_Equality(name,"SetPreloadGameMode",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadGameMode
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x459c1313) {
            bVar1 = System_String__op_Equality(name,"GetGeneralSetting",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetGeneralSetting
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x4609842f) {
          bVar1 = System_String__op_Equality(name,"DefaultShowKillFeed",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultShowKillFeed
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x4e95b0ed) {
          bVar1 = System_String__op_Equality(name,"SpawnPlayer",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayer
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x4f326cfd) {
        if (uVar2 == 0x4f00efb2) {
          bVar1 = System_String__op_Equality(name,"EndTimeLeft",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__EndTimeLeft
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x4f326cfc) {
          bVar1 = System_String__op_Equality(name,"SpawnHumanAt",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHumanAt
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x52ed1a20) {
        bVar1 = System_String__op_Equality(name,"AITitans",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AITitans
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x55e82500) {
        bVar1 = System_String__op_Equality(name,"ShowScoreboardStatus",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ShowScoreboardStatus
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x5ea6cd54) {
      if (uVar2 < 0x5d069fc9) {
        if (uVar2 == 0x5c14003e) {
          bVar1 = System_String__op_Equality(name,"Titans",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Titans
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x5d069fc8) {
          bVar1 = System_String__op_Equality(name,"DefaultHideKillScore",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultHideKillScore
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x5e4e5f76) {
        bVar1 = System_String__op_Equality(name,"ShowKillScore",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillScore
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x5ea6cd53) {
        bVar1 = System_String__op_Equality(name,"SpawnTitans",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitans
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x62485e87) {
      if (uVar2 == 0x619baabe) {
        bVar1 = System_String__op_Equality(name,"CanSaveExperienceScore",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__CanSaveExperienceScore
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x62485e86) {
        bVar1 = System_String__op_Equality(name,"SpawnTitansAt",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAt
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x66ef4f10) {
      bVar1 = System_String__op_Equality(name,"SpawnPlayerAt",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAt
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x6d57abb9) {
      bVar1 = System_String__op_Equality(name,"GetMiscSetting",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetMiscSetting
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x6e104b4e) {
      bVar1 = System_String__op_Equality(name,"PlayerHumans",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerHumans
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xc4c554de) {
    if (uVar2 < 0x9061daa7) {
      if (uVar2 < 0x7b40a20a) {
        if (uVar2 < 0x770cabbb) {
          if (uVar2 == 0x73e55886) {
            bVar1 = System_String__op_Equality(name,"SetPreloadMap",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadMap
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x770cabba) {
            bVar1 = System_String__op_Equality(name,"SetSong",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetSong
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x7a63a383) {
          bVar1 = System_String__op_Equality(name,"SpawnPlayerAtAll",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAtAll
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x7b40a209) {
          bVar1 = System_String__op_Equality(name,"SetPreloadModeSetting",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadModeSetting
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x8da9183e) {
        if (uVar2 == 0x86a5057c) {
          bVar1 = System_String__op_Equality(name,"SpawnPlayerAll",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAll
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x8da9183d) {
          bVar1 = System_String__op_Equality(name,"DrawRay",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__DrawRay
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x8deaef15) {
        bVar1 = System_String__op_Equality(name,"SpawnTitansAsync",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAsync
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x9061daa6) {
        bVar1 = System_String__op_Equality(name,"IsEnding",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__IsEnding
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0xa0137020) {
      if (uVar2 < 0x935c8bb0) {
        if (uVar2 == 0x930b044b) {
          bVar1 = System_String__op_Equality(name,"Humans",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Humans
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x935c8baf) {
          bVar1 = System_String__op_Equality(name,"AIShifters",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AIShifters
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x947f7155) {
        bVar1 = System_String__op_Equality(name,"AIHumans",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AIHumans
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xa013701f) {
        bVar1 = System_String__op_Equality(name,"DefaultShowKillScore",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultShowKillScore
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0xbc3a7c7a) {
      if (uVar2 == 0xa100db20) {
        bVar1 = System_String__op_Equality(name,"PlayerShifters",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerShifters
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xbc3a7c79) {
        bVar1 = System_String__op_Equality(name,"LoadPreloadPreset",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__LoadPreloadPreset
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xbcac6db6) {
      bVar1 = System_String__op_Equality(name,"SetPreloadTitanSetting",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadTitanSetting
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xc008ebe1) {
      bVar1 = System_String__op_Equality(name,"SpawnHuman",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHuman
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xc4c554dd) {
      bVar1 = System_String__op_Equality(name,"Shifters",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Shifters
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xe5ac988a) {
    if (uVar2 < 0xcf93764b) {
      if (uVar2 < 0xcc06912c) {
        if (uVar2 == 0xc7260798) {
          bVar1 = System_String__op_Equality(name,"ShowKillFeed",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillFeed
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0xcc06912b) {
          bVar1 = System_String__op_Equality(name,"PrintAll",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__PrintAll
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0xce302050) {
        bVar1 = System_String__op_Equality(name,"Loadouts",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Loadouts
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xcf93764a) {
        bVar1 = System_String__op_Equality(name,"End",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__End
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xdbc1608d) {
      if (uVar2 == 0xd14f5a0c) {
        bVar1 = System_String__op_Equality(name,"ExperienceID",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ExperienceID
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xdbc1608c) {
        bVar1 = System_String__op_Equality(name,"RestartWithPreloadSettings",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__RestartWithPreloadSettings
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xe19eaead) {
      bVar1 = System_String__op_Equality(name,"SpawnHorse",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHorse
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe3470562) {
      bVar1 = System_String__op_Equality(name,"ShowScoreboardLoadout",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ShowScoreboardLoadout
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xe5ac9889) {
      bVar1 = System_String__op_Equality(name,"SpawnEffect",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnEffect
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xeb1c5d33) {
    if (uVar2 < 0xe7990e31) {
      if (uVar2 == 0xe6a5bf31) {
        bVar1 = System_String__op_Equality(name,"GetTitanSetting",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetTitanSetting
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xe7990e30) {
        bVar1 = System_String__op_Equality(name,"FindCharacterByViewID",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__FindCharacterByViewID
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xe8320d28) {
      bVar1 = System_String__op_Equality(name,"Print",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__Print
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xeb1c5d32) {
      bVar1 = System_String__op_Equality(name,"SpawnTitan",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitan
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xf1244ac1) {
    if (uVar2 == 0xeb1f3d1a) {
      bVar1 = System_String__op_Equality(name,"SpawnTitansAtAsync",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAtAsync
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xf1244ac0) {
      bVar1 = System_String__op_Equality(name,"ForcedLoadout",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ForcedLoadout
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 == 0xf6719867) {
    bVar1 = System_String__op_Equality(name,"ForcedCharacterType",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings)
        ;
      }
      pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ForcedCharacterType
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xf6b9b56f) {
    bVar1 = System_String__op_Equality(name,"Horses",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings)
        ;
      }
      pCVar4 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Horses
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xfbcf6143) {
    bVar1 = System_String__op_Equality(name,"GetExperienceScore",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings)
        ;
      }
      pCVar3 = CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetExperienceScore
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicGameBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__IsEnding
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__IsEnding (const MethodInfo* method);
// 0x5ad6820

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__IsEnding(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__IsEnding_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d63 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__IsEnding_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__EndTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__EndTimeLeft (const MethodInfo* method);
// 0x5ad68c0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__EndTimeLeft(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__EndTimeLeft_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d64 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__EndTimeLeft_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__IsExperience
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__IsExperience (const MethodInfo* method);
// 0x5ad6960

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__IsExperience(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__IsExperience_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d65 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__IsExperience_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ExperienceID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ExperienceID (const MethodInfo* method);
// 0x5ad6a00

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ExperienceID(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ExperienceID_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d66 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ExperienceID_g____getter_5
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__CanSaveExperienceScore
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__CanSaveExperienceScore (const MethodInfo* method);
// 0x5ad6aa0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__CanSaveExperienceScore
          (MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__CanSaveExperienceScore_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d67 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__CanSaveExperienceScore_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__MainCharacter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__MainCharacter (const MethodInfo* method);
// 0x5ad6b40

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__MainCharacter(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__MainCharacter_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d68 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__MainCharacter_g____getter_7
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Titans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Titans (const MethodInfo* method);
// 0x5ad6be0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Titans(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Titans_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d69 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Titans_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__AITitans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AITitans (const MethodInfo* method);
// 0x5ad6c80

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AITitans(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AITitans_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d6a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AITitans_g____getter_9_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__PlayerTitans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerTitans (const MethodInfo* method);
// 0x5ad6d20

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerTitans(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerTitans_g____getter_10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d6b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerTitans_g____getter_10
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Shifters
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Shifters (const MethodInfo* method);
// 0x5ad6dc0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Shifters(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Shifters_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d6c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Shifters_g____getter_11_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__AIShifters
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AIShifters (const MethodInfo* method);
// 0x5ad6e60

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AIShifters(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AIShifters_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d6d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AIShifters_g____getter_12_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__PlayerShifters
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerShifters (const MethodInfo* method);
// 0x5ad6f00

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerShifters(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerShifters_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d6e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerShifters_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Horses
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Horses (const MethodInfo* method);
// 0x5ad6fa0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Horses(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Horses_g____getter_14_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d6f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Horses_g____getter_14_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Humans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Humans (const MethodInfo* method);
// 0x5ad7040

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Humans(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Humans_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d70 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Humans_g____getter_15_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__AIHumans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AIHumans (const MethodInfo* method);
// 0x5ad70e0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AIHumans(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AIHumans_g____getter_16_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d71 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AIHumans_g____getter_16_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__PlayerHumans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerHumans (const MethodInfo* method);
// 0x5ad7180

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerHumans(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerHumans_g____getter_17
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d72 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerHumans_g____getter_17
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Loadouts
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Loadouts (const MethodInfo* method);
// 0x5ad7220

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Loadouts(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Loadouts_g____getter_18_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d73 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Loadouts_g____getter_18_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__DefaultShowKillScore
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultShowKillScore (const MethodInfo* method);
// 0x5ad72c0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultShowKillScore(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  System_Action_CustomLogicGameBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546d74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicGameBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillScore_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillScore_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d74 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillScore_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillScore_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__DefaultShowKillFeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultShowKillFeed (const MethodInfo* method);
// 0x5ad73a0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultShowKillFeed(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  System_Action_CustomLogicGameBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546d75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicGameBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillFeed_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillFeed_g____se
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d75 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillFeed_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillFeed_g____se
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__DefaultHideKillScore
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultHideKillScore (const MethodInfo* method);
// 0x5ad7480

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultHideKillScore(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  System_Action_CustomLogicGameBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546d76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicGameBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultHideKillScore_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultHideKillScore_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d76 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultHideKillScore_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultHideKillScore_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__DefaultAddKillScore
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultAddKillScore (const MethodInfo* method);
// 0x5ad7560

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultAddKillScore(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  System_Action_CustomLogicGameBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546d77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicGameBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultAddKillScore_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultAddKillScore_g____se
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d77 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultAddKillScore_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultAddKillScore_g____se
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ShowScoreboardLoadout
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ShowScoreboardLoadout (const MethodInfo* method);
// 0x5ad7640

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ShowScoreboardLoadout
          (MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  System_Action_CustomLogicGameBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546d78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicGameBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardLoadout_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardLoadout_g_71bf4e8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d78 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardLoadout_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardLoadout_g_71bf4e8
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ShowScoreboardStatus
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ShowScoreboardStatus (const MethodInfo* method);
// 0x5ad7720

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ShowScoreboardStatus(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  System_Action_CustomLogicGameBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546d79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicGameBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardStatus_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardStatus_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d79 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardStatus_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardStatus_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ForcedCharacterType
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ForcedCharacterType (const MethodInfo* method);
// 0x5ad7800

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ForcedCharacterType(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  System_Action_CustomLogicGameBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546d7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicGameBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedCharacterType_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedCharacterType_g____se
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d7a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedCharacterType_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedCharacterType_g____se
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ForcedLoadout
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ForcedLoadout (const MethodInfo* method);
// 0x5ad78e0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ForcedLoadout(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  System_Action_CustomLogicGameBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546d7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicGameBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedLoadout_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedLoadout_g____setter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_07546d7b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedLoadout_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedLoadout_g____setter_2
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__GetExperienceScore
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetExperienceScore (const MethodInfo* method);
// 0x5ad79c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad79f5: jmp 0x5ad7a65

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetExperienceScore(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetExperienceScore_b__27_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d7c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__27_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__27_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetExperienceScore_b__27_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__27_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__27_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SaveExperienceScore
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SaveExperienceScore (const MethodInfo* method);
// 0x5ad7b00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad7b35: jmp 0x5ad7ba5

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SaveExperienceScore(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SaveExperienceScore_b__28_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d7d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__28_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__28_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SaveExperienceScore_b__28_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__28_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__28_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SaveExperienceCompletionTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SaveExperienceCompletionTime (const MethodInfo* method);
// 0x5ad7c40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad7c75: jmp 0x5ad7ce5

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SaveExperienceCompletionTime
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SaveExperienceCompletionTim
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d7e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__29_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__29_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SaveExperienceCompletionTim
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__29_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__29_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnHorse
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHorse (const MethodInfo* method);
// 0x5ad7d80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad7db5: jmp 0x5ad7e25

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHorse(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHorse_b__30_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d7f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__30_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__30_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHorse_b__30_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__30_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__30_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__Debug
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__Debug (const MethodInfo* method);
// 0x5ad7ec0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad7ef5: jmp 0x5ad7f65

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__Debug(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__Debug_b__31_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d80 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__31_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__31_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__Debug_b__31_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__31_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__31_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__Print
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__Print (const MethodInfo* method);
// 0x5ad8000
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad8035: jmp 0x5ad80a5

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__Print(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__Print_b__32_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d81 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__32_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__32_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__Print_b__32_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__32_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__32_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__PrintAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__PrintAll (const MethodInfo* method);
// 0x5ad8140
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad8175: jmp 0x5ad81e5

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__PrintAll(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__PrintAll_b__33_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d82 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__33_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__33_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__PrintAll_b__33_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__33_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__33_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__GetGeneralSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetGeneralSetting (const MethodInfo* method);
// 0x5ad8280
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad82b5: jmp 0x5ad8325

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetGeneralSetting(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetGeneralSetting_b__34_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d83 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__34_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__34_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetGeneralSetting_b__34_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__34_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__34_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__GetTitanSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetTitanSetting (const MethodInfo* method);
// 0x5ad83c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad83f5: jmp 0x5ad8465

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetTitanSetting(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetTitanSetting_b__35_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d84 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__35_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__35_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetTitanSetting_b__35_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__35_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__35_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__GetMiscSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetMiscSetting (const MethodInfo* method);
// 0x5ad8500
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad8535: jmp 0x5ad85a5

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetMiscSetting(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetMiscSetting_b__36_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d85 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__36_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__36_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetMiscSetting_b__36_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__36_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__36_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadGeneralSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadGeneralSetting (const MethodInfo* method);
// 0x5ad8640
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad8675: jmp 0x5ad86e5

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadGeneralSetting
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadGeneralSetting_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d86 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__37_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__37_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadGeneralSetting_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__37_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__37_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadTitanSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadTitanSetting (const MethodInfo* method);
// 0x5ad8780
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad87b5: jmp 0x5ad8825

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadTitanSetting(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadTitanSetting_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d87 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__38_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__38_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadTitanSetting_b__3
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__38_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__38_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadMiscSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadMiscSetting (const MethodInfo* method);
// 0x5ad88c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad88f5: jmp 0x5ad8965

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadMiscSetting(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadMiscSetting_b__39
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d88 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__39_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__39_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadMiscSetting_b__39
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__39_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__39_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadModeSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadModeSetting (const MethodInfo* method);
// 0x5ad8a00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad8a35: jmp 0x5ad8aa5

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadModeSetting(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadModeSetting_b__40
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d89 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__40_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__40_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadModeSetting_b__40
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__40_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__40_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadMap
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadMap (const MethodInfo* method);
// 0x5ad8b40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad8b75: jmp 0x5ad8be5

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadMap(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadMap_b__41_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d8a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__41_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__41_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadMap_b__41_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__41_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__41_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadGameMode
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadGameMode (const MethodInfo* method);
// 0x5ad8c80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad8cb8: jmp 0x5ad8d2b

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadGameMode(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadGameMode_b__42_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d8b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__42_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__42_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadGameMode_b__42_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__42_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__42_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__LoadPreloadPreset
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__LoadPreloadPreset (const MethodInfo* method);
// 0x5ad8dc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad8df8: jmp 0x5ad8e6b

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__LoadPreloadPreset(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__LoadPreloadPreset_b__43_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d8c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__43_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__43_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__LoadPreloadPreset_b__43_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__43_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__43_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__RestartWithPreloadSettings
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__RestartWithPreloadSettings (const MethodInfo* method);
// 0x5ad8f00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad8f38: jmp 0x5ad8fab

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__RestartWithPreloadSettings
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__RestartWithPreloadSettings
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d8d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__44_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__44_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__RestartWithPreloadSettings
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__44_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__44_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__End
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__End (const MethodInfo* method);
// 0x5ad9040
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad9078: jmp 0x5ad90eb

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__End(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__End_b__45_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d8e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__45_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__45_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__End_b__45_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__45_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__45_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__FindCharacterByViewID
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__FindCharacterByViewID (const MethodInfo* method);
// 0x5ad9180
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad91b8: jmp 0x5ad922b

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__FindCharacterByViewID(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__FindCharacterByViewID_b__46
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d8f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__46_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__46_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__FindCharacterByViewID_b__46
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__46_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__46_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitan
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitan (const MethodInfo* method);
// 0x5ad92c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad92f8: jmp 0x5ad936b

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitan(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitan_b__47_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d90 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__47_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__47_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitan_b__47_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__47_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__47_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitanAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitanAt (const MethodInfo* method);
// 0x5ad9400
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad9438: jmp 0x5ad94ab

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitanAt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitanAt_b__48_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d91 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__48_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__48_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitanAt_b__48_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__48_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__48_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitans
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitans (const MethodInfo* method);
// 0x5ad9540
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad9578: jmp 0x5ad95eb

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitans(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitans_b__49_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d92 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__49_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__49_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitans_b__49_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__49_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__49_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitansAsync
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAsync (const MethodInfo* method);
// 0x5ad9680
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad96b8: jmp 0x5ad972b

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAsync(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAsync_b__50_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d93 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__50_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__50_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAsync_b__50_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__50_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__50_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitansAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAt (const MethodInfo* method);
// 0x5ad97c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad97f8: jmp 0x5ad986b

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAt_b__51_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d94 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__51_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__51_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAt_b__51_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__51_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__51_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitansAtAsync
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAtAsync (const MethodInfo* method);
// 0x5ad9900
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad9938: jmp 0x5ad99ab

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAtAsync(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAtAsync_b__52_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d95 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__52_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__52_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAtAsync_b__52_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__52_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__52_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnShifter
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnShifter (const MethodInfo* method);
// 0x5ad9a40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad9a78: jmp 0x5ad9aeb

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnShifter(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnShifter_b__53_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d96 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__53_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__53_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnShifter_b__53_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__53_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__53_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnHuman
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHuman (const MethodInfo* method);
// 0x5ad9b80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad9bb8: jmp 0x5ad9c2b

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHuman(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHuman_b__54_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d97 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__54_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__54_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHuman_b__54_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__54_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__54_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnHumanAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHumanAt (const MethodInfo* method);
// 0x5ad9cc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad9cf8: jmp 0x5ad9d6b

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHumanAt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHumanAt_b__55_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d98 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__55_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__55_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHumanAt_b__55_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__55_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__55_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnShifterAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnShifterAt (const MethodInfo* method);
// 0x5ad9e00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad9e38: jmp 0x5ad9eab

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnShifterAt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnShifterAt_b__56_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d99 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__56_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__56_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnShifterAt_b__56_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__56_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__56_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnProjectile
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnProjectile (const MethodInfo* method);
// 0x5ad9f40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad9f78: jmp 0x5ad9feb

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnProjectile(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnProjectile_b__57_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d9a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__57_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__57_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnProjectile_b__57_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__57_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__57_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnProjectileWithOwner
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnProjectileWithOwner (const MethodInfo* method);
// 0x5ada080
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ada0b8: jmp 0x5ada12b

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnProjectileWithOwner
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnProjectileWithOwner_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d9b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__58_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__58_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnProjectileWithOwner_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__58_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__58_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnEffect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnEffect (const MethodInfo* method);
// 0x5ada1c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ada1f8: jmp 0x5ada26b

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnEffect(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnEffect_b__59_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d9c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__59_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__59_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnEffect_b__59_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__59_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__59_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnUnscaledEffect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnUnscaledEffect (const MethodInfo* method);
// 0x5ada300
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ada338: jmp 0x5ada3ab

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnUnscaledEffect(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnUnscaledEffect_b__60_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d9d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__60_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__60_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnUnscaledEffect_b__60_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__60_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__60_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnPlayer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayer (const MethodInfo* method);
// 0x5ada440
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ada478: jmp 0x5ada4eb

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayer(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayer_b__61_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d9e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__61_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__61_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayer_b__61_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__61_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__61_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnPlayerAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAll (const MethodInfo* method);
// 0x5ada580
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ada5b8: jmp 0x5ada62b

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAll(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAll_b__62_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546d9f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__62_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__62_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAll_b__62_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__62_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__62_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnPlayerAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAt (const MethodInfo* method);
// 0x5ada6c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ada6f8: jmp 0x5ada76b

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546da0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAt_b__63_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546da0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__63_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__63_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAt_b__63_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__63_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__63_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnPlayerAtAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAtAll (const MethodInfo* method);
// 0x5ada800
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ada838: jmp 0x5ada8ab

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAtAll(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546da1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAtAll_b__64_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546da1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__64_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__64_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAtAll_b__64_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__64_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__64_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPlaylist
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPlaylist (const MethodInfo* method);
// 0x5ada940
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ada978: jmp 0x5ada9eb

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPlaylist(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546da2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPlaylist_b__65_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546da2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__65_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__65_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPlaylist_b__65_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__65_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__65_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetSong
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetSong (const MethodInfo* method);
// 0x5adaa80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5adaab8: jmp 0x5adab2b

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetSong(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546da3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetSong_b__66_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546da3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__66_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__66_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetSong_b__66_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__66_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__66_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__DrawRay
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__DrawRay (const MethodInfo* method);
// 0x5adabc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5adabf8: jmp 0x5adac6b

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__DrawRay(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546da4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__DrawRay_b__67_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546da4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__67_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__67_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__DrawRay_b__67_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__67_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__67_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__ShowKillScore
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillScore (const MethodInfo* method);
// 0x5adad00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5adad38: jmp 0x5adadab

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillScore(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546da5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillScore_b__68_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546da5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__68_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__68_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillScore_b__68_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__68_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__68_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__ShowKillFeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillFeed (const MethodInfo* method);
// 0x5adae40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5adae78: jmp 0x5adaeeb

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillFeed(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546da6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillFeed_b__69_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546da6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__69_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__69_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillFeed_b__69_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__69_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__69_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__ShowKillFeedAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillFeedAll (const MethodInfo* method);
// 0x5adaf80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5adafb8: jmp 0x5adb02b

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillFeedAll(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicGameBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546da7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillFeedAll_b__70_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546da7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__70_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__70_0;
  }
  if (__this == (System_Func_CustomLogicGameBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillFeedAll_b__70_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields;
    pCVar2->__9__70_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__70_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5adb0c0

void CustomLogic_CustomLogicGameBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546da8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"SetPreloadMap");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultShowKillFeed");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowScoreboardLoadout");
    il2cpp_codegen_initialize_runtime_metadata(&"GetExperienceScore");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowKillFeedAll");
    il2cpp_codegen_initialize_runtime_metadata(&"SetSong");
    il2cpp_codegen_initialize_runtime_metadata(&"ForcedCharacterType");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPreloadTitanSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTitanSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"AIShifters");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveExperienceScore");
    il2cpp_codegen_initialize_runtime_metadata(&"EndTimeLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Print");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnTitanAt");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnProjectileWithOwner");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerAt");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreloadPreset");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowKillScore");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnHumanAt");
    il2cpp_codegen_initialize_runtime_metadata(&"ExperienceID");
    il2cpp_codegen_initialize_runtime_metadata(&"Debug");
    il2cpp_codegen_initialize_runtime_metadata(&"CanSaveExperienceScore");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnTitansAsync");
    il2cpp_codegen_initialize_runtime_metadata(&"MainCharacter");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnProjectile");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnHorse");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowKillFeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"AIHumans");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnShifterAt");
    il2cpp_codegen_initialize_runtime_metadata(&"AITitans");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnTitansAtAsync");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerAll");
    il2cpp_codegen_initialize_runtime_metadata(&"IsExperience");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnTitan");
    il2cpp_codegen_initialize_runtime_metadata(&"RestartWithPreloadSettings");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnTitansAt");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"End");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerHumans");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPreloadGeneralSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnTitans");
    il2cpp_codegen_initialize_runtime_metadata(&"GetGeneralSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPlaylist");
    il2cpp_codegen_initialize_runtime_metadata(&"ForcedLoadout");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPreloadMiscSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"PrintAll");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowScoreboardStatus");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerShifters");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveExperienceCompletionTime");
    il2cpp_codegen_initialize_runtime_metadata(&"GetMiscSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerTitans");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultAddKillScore");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerAtAll");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPreloadGameMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Humans");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnUnscaledEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultShowKillScore");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifters");
    il2cpp_codegen_initialize_runtime_metadata(&"DrawRay");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultHideKillScore");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPreloadModeSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnHuman");
    il2cpp_codegen_initialize_runtime_metadata(&"Horses");
    il2cpp_codegen_initialize_runtime_metadata(&"FindCharacterByViewID");
    il2cpp_codegen_initialize_runtime_metadata(&"Loadouts");
    il2cpp_codegen_initialize_runtime_metadata(&"IsEnding");
    Il2CppMethodInitialized_07546da8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsEnding",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EndTimeLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsExperience",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ExperienceID",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CanSaveExperienceScore",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MainCharacter",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titans",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AITitans",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayerTitans",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Shifters",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AIShifters",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayerShifters",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Horses",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Humans",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AIHumans",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayerHumans",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Loadouts",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DefaultShowKillScore",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DefaultShowKillFeed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DefaultHideKillScore",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DefaultAddKillScore",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowScoreboardLoadout",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowScoreboardStatus",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ForcedCharacterType",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ForcedLoadout",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetExperienceScore",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SaveExperienceScore",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SaveExperienceCompletionTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnHorse",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Debug",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Print",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PrintAll",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetGeneralSetting",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetTitanSetting",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetMiscSetting",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPreloadGeneralSetting",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPreloadTitanSetting",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPreloadMiscSetting",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPreloadModeSetting",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPreloadMap",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPreloadGameMode",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LoadPreloadPreset",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RestartWithPreloadSettings",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"End",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindCharacterByViewID",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnTitan",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnTitanAt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnTitans",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnTitansAsync",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnTitansAt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnTitansAtAsync",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnShifter",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnHuman",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnHumanAt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnShifterAt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnProjectile",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnProjectileWithOwner",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnEffect",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnUnscaledEffect",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnPlayer",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnPlayerAll",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnPlayerAt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnPlayerAtAll",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPlaylist",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetSong",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DrawRay",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowKillScore",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowKillFeed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowKillFeedAll",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->static_fields->MemberNames)
  ;
  return;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__IsEnding>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__IsEnding_g____getter_2_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adba60

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__IsEnding_g____getter_2_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      uStack_8 = CONCAT17(*(undefined1 *)&(*(uint64_t *)((char *)pGVar2 + 0x70)),(undefined7)uStack_8);
      pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
      return pIVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__EndTimeLeft>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__EndTimeLeft_g____getter_3_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbb00

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__EndTimeLeft_g____getter_3_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  GameManagers_BaseGameManager_c *pGVar3;
  Il2CppObject *pIVar4;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
      pGVar3 = pGVar2->klass;
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((pGVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_GameManagers_InGameManager))
      {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
      return pIVar4;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__IsExperience>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__IsExperience_g____getter_4_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbbb0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__IsExperience_g____getter_4_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  if (Il2CppMethodInitialized_07546d13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07546d13 = '\x01';
  }
  bVar1 = Settings_ExperienceIdentity__IsExperience
                    (TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ExperienceID>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ExperienceID_g____getter_5_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbc10

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ExperienceID_g____getter_5_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07546d14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07546d14 = '\x01';
  }
  pSVar1 = Settings_ExperienceIdentity__GetId
                     (TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__CanSaveExperienceScore>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__CanSaveExperienceScore_g____getter_6_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbc60

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__CanSaveExperienceScore_g____getter_6_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicGameBuiltin__get_CanSaveExperienceScore(__i,method);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__MainCharacter>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__MainCharacter_g____getter_7_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbc90

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__MainCharacter_g____getter_7_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_MainCharacter(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Titans>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Titans_g____getter_8_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbca0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Titans_g____getter_8_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_Titans(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__AITitans>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__AITitans_g____getter_9_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbcb0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__AITitans_g____getter_9_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_AITitans(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__PlayerTitans>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__PlayerTitans_g____getter_10_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbcc0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__PlayerTitans_g____getter_10_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_PlayerTitans(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Shifters>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Shifters_g____getter_11_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbcd0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Shifters_g____getter_11_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_Shifters(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__AIShifters>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__AIShifters_g____getter_12_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbce0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__AIShifters_g____getter_12_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_AIShifters(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__PlayerShifters>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__PlayerShifters_g____getter_13_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbcf0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__PlayerShifters_g____getter_13_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_PlayerShifters(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Horses>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Horses_g____getter_14_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbd00

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Horses_g____getter_14_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_Horses(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Humans>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Humans_g____getter_15_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbd10

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Humans_g____getter_15_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_Humans(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__AIHumans>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__AIHumans_g____getter_16_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbd20

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__AIHumans_g____getter_16_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_AIHumans(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__PlayerHumans>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__PlayerHumans_g____getter_17_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbd30

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__PlayerHumans_g____getter_17_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_PlayerHumans(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Loadouts>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Loadouts_g____getter_18_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbd40

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Loadouts_g____getter_18_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_Loadouts(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultShowKillScore>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillScore_g____getter_19_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbd50

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillScore_g____getter_19_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  Il2CppObject *pIVar3;
  undefined1 uStack_9;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546d27 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_07546d27 = '\x01';
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    }
    if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      uStack_9 = (pCVar2->fields).DefaultShowKillScore;
      pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_9);
      return pIVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultShowKillScore>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillScore_g____setter_19_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5adbe00

void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillScore_g____setter_19_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07546da9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546da9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546d28 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_07546d28 = '\x01';
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    }
    if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      (pCVar2->fields).DefaultShowKillScore = bVar3;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultShowKillFeed>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillFeed_g____getter_20_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adbee0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillFeed_g____getter_20_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  Il2CppObject *pIVar3;
  undefined1 uStack_9;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546d29 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_07546d29 = '\x01';
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    }
    if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      uStack_9 = (pCVar2->fields).DefaultShowKillFeed;
      pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_9);
      return pIVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultShowKillFeed>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillFeed_g____setter_20_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5adbf90

void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillFeed_g____setter_20_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07546daa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546daa = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546d2a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_07546d2a = '\x01';
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    }
    if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      (pCVar2->fields).DefaultShowKillFeed = bVar3;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultHideKillScore>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultHideKillScore_g____getter_21_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adc070

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultHideKillScore_g____getter_21_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  Il2CppObject *pIVar3;
  undefined1 uStack_9;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546d29 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_07546d29 = '\x01';
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    }
    if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      uStack_9 = (pCVar2->fields).DefaultShowKillFeed;
      pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_9);
      return pIVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultHideKillScore>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultHideKillScore_g____setter_21_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5adc120

void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultHideKillScore_g____setter_21_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07546dab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dab = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546d2a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_07546d2a = '\x01';
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    }
    if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      (pCVar2->fields).DefaultShowKillFeed = bVar3;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultAddKillScore>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultAddKillScore_g____getter_22_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adc200

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultAddKillScore_g____getter_22_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  Il2CppObject *pIVar3;
  undefined1 uStack_9;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546d2b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_07546d2b = '\x01';
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    }
    if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      uStack_9 = (pCVar2->fields).DefaultAddKillScore;
      pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_9);
      return pIVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultAddKillScore>g____setter|22_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultAddKillScore_g____setter_22_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5adc2b0

void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultAddKillScore_g____setter_22_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07546dac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dac = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546d2c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_07546d2c = '\x01';
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    }
    if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      (pCVar2->fields).DefaultAddKillScore = bVar3;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ShowScoreboardLoadout>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardLoadout_g____getter_23_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adc390

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardLoadout_g____getter_23_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  Il2CppObject *pIVar3;
  undefined1 uStack_9;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546d2d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_07546d2d = '\x01';
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    }
    if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      uStack_9 = (pCVar2->fields).ShowScoreboardLoadout;
      pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_9);
      return pIVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ShowScoreboardLoadout>g____setter|23_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardLoadout_g____setter_23_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5adc440

void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardLoadout_g____setter_23_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07546dad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dad = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546d2e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_07546d2e = '\x01';
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    }
    if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      (pCVar2->fields).ShowScoreboardLoadout = bVar3;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ShowScoreboardStatus>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardStatus_g____getter_24_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adc520

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardStatus_g____getter_24_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  Il2CppObject *pIVar3;
  undefined1 uStack_9;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546d2f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_07546d2f = '\x01';
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    }
    if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      uStack_9 = (pCVar2->fields).ShowScoreboardStatus;
      pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_9);
      return pIVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ShowScoreboardStatus>g____setter|24_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardStatus_g____setter_24_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5adc5d0

void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardStatus_g____setter_24_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07546dae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546dae = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546d30 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_07546d30 = '\x01';
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    }
    if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      (pCVar2->fields).ShowScoreboardStatus = bVar3;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ForcedCharacterType>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedCharacterType_g____getter_25_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adc6b0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedCharacterType_g____getter_25_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546d31 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_07546d31 = '\x01';
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    }
    if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      return (Il2CppObject *)(pCVar2->fields).ForcedCharacterType;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ForcedCharacterType>g____setter|25_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedCharacterType_g____setter_25_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5adc730

void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedCharacterType_g____setter_25_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07546daf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546daf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546d32 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_07546d32 = '\x01';
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    }
    if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      (pCVar2->fields).ForcedCharacterType = pSVar3;
      Il2CppCodeGenWriteBarrier(&(pCVar2->fields).ForcedCharacterType);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ForcedLoadout>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedLoadout_g____getter_26_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x5adc830

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedLoadout_g____getter_26_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546d33 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_07546d33 = '\x01';
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    }
    if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      return (Il2CppObject *)(pCVar2->fields).ForcedLoadout;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ForcedLoadout>g____setter|26_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedLoadout_g____setter_26_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5adc8b0

void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedLoadout_g____setter_26_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07546db0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546db0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546d34 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_07546d34 = '\x01';
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    }
    if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      (pCVar2->fields).ForcedLoadout = pSVar3;
      Il2CppCodeGenWriteBarrier(&(pCVar2->fields).ForcedLoadout);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin___c___cctor (const MethodInfo* method);
// 0x5adf060

void CustomLogic_CustomLogicGameBuiltin___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546dd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_c);
    Il2CppMethodInitialized_07546dd9 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicGameBuiltin_c->static_fields->__9 =
       (CustomLogic_CustomLogicGameBuiltin___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicGameBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin___c___ctor (CustomLogic_CustomLogicGameBuiltin___c_o* __this, const MethodInfo* method);
// 0x5adf0d0

void CustomLogic_CustomLogicGameBuiltin___c___ctor
               (CustomLogic_CustomLogicGameBuiltin___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin.<>c$$<get_Loadouts>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin___c___get_Loadouts_b__43_0 (CustomLogic_CustomLogicGameBuiltin___c_o* __this, System_String_o* x, const MethodInfo* method);
// 0x5adf0e0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin___c___get_Loadouts_b__43_0
          (CustomLogic_CustomLogicGameBuiltin___c_o *__this,System_String_o *x,MethodInfo *method)

{
  return (Il2CppObject *)x;
}


// CustomLogic.CustomLogicGameBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin___ctor (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acb930

void CustomLogic_CustomLogicGameBuiltin___ctor
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin);
    Il2CppMethodInitialized_07546d11 = '\x01';
  }
  (__this->fields)._lastSetTopLabel = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastSetTopLabel);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_ctor);
  (__this->fields)._cachedLists = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedLists);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$get__inGameManager
// il2cpp: GameManagers_InGameManager_o* CustomLogic_CustomLogicGameBuiltin__get__inGameManager (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acb9f0

GameManagers_InGameManager_o *
CustomLogic_CustomLogicGameBuiltin__get__inGameManager
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *pGVar2;
  
  if (Il2CppMethodInitialized_07546d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546d12 = '\x01';
  }
  pGVar2 = (GameManagers_InGameManager_o *)
           TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar2);
    }
  }
  return pGVar2;
}


// CustomLogic.CustomLogicGameBuiltin$$get_IsEnding
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_IsEnding (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acba70

bool CustomLogic_CustomLogicGameBuiltin__get_IsEnding
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  
  if (Il2CppMethodInitialized_07546d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546d12 = '\x01';
  }
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 == (GameManagers_BaseGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  return (bool)*(undefined1 *)&(*(uint64_t *)((char *)pGVar2 + 0x70));
}


// CustomLogic.CustomLogicGameBuiltin$$get_EndTimeLeft
// il2cpp: float CustomLogic_CustomLogicGameBuiltin__get_EndTimeLeft (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acbaf0

float CustomLogic_CustomLogicGameBuiltin__get_EndTimeLeft
                (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  
  if (Il2CppMethodInitialized_07546d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546d12 = '\x01';
  }
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 == (GameManagers_BaseGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  return *(float *)((long)&(*(uint64_t *)((char *)pGVar2 + 0x70)) + 4);
}


// CustomLogic.CustomLogicGameBuiltin$$get_IsExperience
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_IsExperience (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acbb70

bool CustomLogic_CustomLogicGameBuiltin__get_IsExperience
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07546d13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07546d13 = '\x01';
  }
  bVar1 = Settings_ExperienceIdentity__IsExperience
                    (TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicGameBuiltin$$get_ExperienceID
// il2cpp: System_String_o* CustomLogic_CustomLogicGameBuiltin__get_ExperienceID (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acbbb0

System_String_o *
CustomLogic_CustomLogicGameBuiltin__get_ExperienceID
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07546d14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07546d14 = '\x01';
  }
  pSVar1 = Settings_ExperienceIdentity__GetId
                     (TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicGameBuiltin$$get_CanSaveExperienceScore
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_CanSaveExperienceScore (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acbbf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5acbc0d: cmp byte ptr [rip + 0x1a790ae], 0

bool CustomLogic_CustomLogicGameBuiltin__get_CanSaveExperienceScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07546d15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07546d15 = '\x01';
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (Il2CppMethodInitialized_07544cc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07544cc2 = '\x01';
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    cVar1 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->static_fields + 0x30);
  }
  if (cVar1 == '\0') {
    return false;
  }
  bVar3 = Settings_ExperienceIdentity__HasScoring
                    (TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,(MethodInfo *)0x0);
  return bVar3;
}


// CustomLogic.CustomLogicGameBuiltin$$GetExperienceScore
// il2cpp: CustomLogic_CustomLogicExperienceScoreBuiltin_o* CustomLogic_CustomLogicGameBuiltin__GetExperienceScore (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acbce0

CustomLogic_CustomLogicExperienceScoreBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__GetExperienceScore
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  Settings_ExperienceScoreStore_o *__this_00;
  System_String_o *experienceID;
  Settings_ExperienceScoreRecord_o *pSVar1;
  CustomLogic_CustomLogicExperienceScoreBuiltin_o *__this_01;
  Settings_ExperienceScoreStore_c **ppSVar2;
  
  if (Il2CppMethodInitialized_07546d16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin);
    ppSVar2 = &TypeInfo_Settings_ExperienceScoreStore;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreStore);
    Il2CppMethodInitialized_07546d16 = '\x01';
    __this = (CustomLogic_CustomLogicGameBuiltin_o *)ppSVar2;
  }
  experienceID = CustomLogic_CustomLogicGameBuiltin__RequireExperienceID(__this,method);
  if ((TypeInfo_Settings_ExperienceScoreStore->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore);
  }
  __this_00 = TypeInfo_Settings_ExperienceScoreStore->static_fields->Local;
  if (__this_00 == (Settings_ExperienceScoreStore_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_01 = (CustomLogic_CustomLogicExperienceScoreBuiltin_o *)0x0;
  pSVar1 = Settings_ExperienceScoreStore__Get(__this_00,experienceID,(MethodInfo *)0x0);
  if (pSVar1 != (Settings_ExperienceScoreRecord_o *)0x0) {
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin);
    if (Il2CppMethodInitialized_07546d09 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_07546d09 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0)
    ;
    (__this_01->fields)._record = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields)._record);
  }
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin$$SaveExperienceScore
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SaveExperienceScore (CustomLogic_CustomLogicGameBuiltin_o* __this, float score, System_String_o* unit, bool lowerIsBetter, const MethodInfo* method);
// 0x5acbed0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5acbf2b: cmp byte ptr [rip + 0x1a78d90], 0
// asm:   0x5acbf32: je 0x5acbfbe

void CustomLogic_CustomLogicGameBuiltin__SaveExperienceScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,float score,System_String_o *unit,
               bool lowerIsBetter,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Settings_ExperienceScoreStore_o *__this_00;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_InvalidOperationException_o *__this_01;
  MethodInfo *pMVar4;
  Photon_Pun_PhotonNetwork_c **ppPVar5;
  
  pMVar4 = (MethodInfo *)unit;
  if (Il2CppMethodInitialized_07546d17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreStore);
    ppPVar5 = &TypeInfo_Photon_Pun_PhotonNetwork;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546d17 = '\x01';
    __this = (CustomLogic_CustomLogicGameBuiltin_o *)ppPVar5;
  }
  pSVar3 = CustomLogic_CustomLogicGameBuiltin__RequireExperienceID(__this,pMVar4);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (Il2CppMethodInitialized_07544cc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07544cc2 = '\x01';
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    cVar1 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->static_fields + 0x30);
  }
  if (cVar1 == '\0') {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
    __this_01 = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(klass);
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Experience scores can only be saved in singleplayer.");
    System_InvalidOperationException___ctor_54b9a80(__this_01,pSVar3,(MethodInfo *)0x0);
    pMVar4 = il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_SaveExperienceScore);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
  }
  if ((((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore);
  }
  __this_00 = TypeInfo_Settings_ExperienceScoreStore->static_fields->Local;
  if (__this_00 == (Settings_ExperienceScoreStore_o *)0x0) {
    ThrowNullReferenceException();
  }
  Settings_ExperienceScoreStore__Save(__this_00,pSVar3,score,unit,lowerIsBetter,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$SaveExperienceCompletionTime
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SaveExperienceCompletionTime (CustomLogic_CustomLogicGameBuiltin_o* __this, float elapsed, const MethodInfo* method);
// 0x5acc050

void CustomLogic_CustomLogicGameBuiltin__SaveExperienceCompletionTime
               (CustomLogic_CustomLogicGameBuiltin_o *__this,float elapsed,MethodInfo *method)

{
  Settings_ExperienceScoreRecord_o *pSVar1;
  bool bVar2;
  CustomLogic_CustomLogicExperienceScoreBuiltin_o *pCVar3;
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  MethodInfo *in_RCX;
  System_String_o **__this_01;
  
  __this_01 = (System_String_o **)__this;
  if (g_data_07546d18 == '\0') {
    __this_01 = &"s";
    il2cpp_codegen_initialize_runtime_metadata(&"s");
    g_data_07546d18 = '\x01';
  }
  bVar2 = CustomLogic_CustomLogicGameBuiltin__get_CanSaveExperienceScore
                    ((CustomLogic_CustomLogicGameBuiltin_o *)__this_01,method);
  if (!bVar2) {
    return;
  }
  if (((0x7f800000 < (uint)ABS(elapsed)) || (elapsed < 0.0)) || (ABS(elapsed) == INFINITY)) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
    __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
    paramName = il2cpp_codegen_get_runtime_metadata(&"elapsed");
    message = il2cpp_codegen_get_runtime_metadata(&"Completion time must be finite and nonnegative.");
    System_ArgumentOutOfRangeException___ctor_5414be0(__this_00,paramName,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_SaveExperienceCompletionTime);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  pCVar3 = CustomLogic_CustomLogicGameBuiltin__GetExperienceScore(__this,method);
  if (pCVar3 != (CustomLogic_CustomLogicExperienceScoreBuiltin_o *)0x0) {
    pSVar1 = (pCVar3->fields)._record;
    if (pSVar1 == (Settings_ExperienceScoreRecord_o *)0x0) {
label_05acc18d:
      ThrowNullReferenceException();
    }
    __this = (CustomLogic_CustomLogicGameBuiltin_o *)(pSVar1->fields).Unit;
    bVar2 = System_String__op_Inequality((System_String_o *)__this,"s",(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar1 = (pCVar3->fields)._record;
      if (pSVar1 == (Settings_ExperienceScoreRecord_o *)0x0) goto label_05acc18d;
      if (((pSVar1->fields).LowerIsBetter != false) && ((pSVar1->fields).Score <= elapsed)) {
        return;
      }
    }
  }
  CustomLogic_CustomLogicGameBuiltin__SaveExperienceScore(__this,elapsed,"s",true,in_RCX);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$RequireExperienceID
// il2cpp: System_String_o* CustomLogic_CustomLogicGameBuiltin__RequireExperienceID (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acbdd0

System_String_o *
CustomLogic_CustomLogicGameBuiltin__RequireExperienceID
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Il2CppClass *pIVar3;
  System_InvalidOperationException_o *__this_00;
  MethodInfo *lastManagedFrame;
  System_String_o **metadataPointer;
  
  if (Il2CppMethodInitialized_07546d19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07546d19 = '\x01';
  }
  if (Il2CppMethodInitialized_07546d14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07546d14 = '\x01';
  }
  pSVar2 = Settings_ExperienceIdentity__GetId
                     (TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pIVar3 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
    __this_00 = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(pIVar3);
    metadataPointer = &"Experience scores are only available in an official experience.";
  }
  else {
    bVar1 = Settings_ExperienceIdentity__HasScoring
                      (TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,(MethodInfo *)0x0);
    if (bVar1) {
      return pSVar2;
    }
    pIVar3 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
    __this_00 = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(pIVar3);
    metadataPointer = &"This experience does not have a scoring system.";
  }
  pSVar2 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
  System_InvalidOperationException___ctor_54b9a80(__this_00,pSVar2,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicGameBuiltin_RequireExperienceID)
  ;
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicGameBuiltin$$get_MainCharacter
// il2cpp: CustomLogic_CustomLogicCharacterBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_MainCharacter (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acc1a0

CustomLogic_CustomLogicCharacterBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_MainCharacter
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  Characters_BaseCharacter_o *character;
  bool bVar3;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar4;
  
  if (Il2CppMethodInitialized_07546d1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07546d1a = '\x01';
  }
  if (Il2CppMethodInitialized_07546d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546d12 = '\x01';
  }
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 == (GameManagers_BaseGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  character = (*(uint64_t *)((char *)pGVar2 + 0x80));
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    pCVar4 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
    return pCVar4;
  }
  pCVar4 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
  return pCVar4;
}


// CustomLogic.CustomLogicGameBuiltin$$get_Titans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_Titans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acc2b0
// eh: try 0x5acc52e..0x5acc6db -> pad 0x5acc6ed (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5acc70f..0x5acc714 -> pad 0x5acc739 cleanup
// eh: try 0x5acc73c..0x5acc746 -> pad 0x5acc74e catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5acc539: nop dword ptr [rax]
// asm:   0x5acc6e5: jmp 0x5acc6f7
// asm:   0x5acc6e7: jmp 0x5acc6f7
// asm:   0x5acc6e9: jmp 0x5acc6f7
// asm:   0x5acc6eb: jmp 0x5acc6f7
// asm:   0x5acc6ed: jmp 0x5acc6f7
// asm:   0x5acc6ef: jmp 0x5acc6f7
// asm:   0x5acc6f1: jmp 0x5acc6f7
// asm:   0x5acc6f3: jmp 0x5acc6f7
// asm:   0x5acc6f5: jmp 0x5acc6f7
// asm:   0x5acc6f7: mov rbx, rax
// asm:   0x5acc6fa: cmp edx, 1
// asm:   0x5acc6fd: jne 0x5acc73c
// asm:   0x5acc6ff: mov rdi, rbx
// asm:   0x5acc702: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5acc707: mov rbx, qword ptr [rax]
// asm:   0x5acc70a: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5acc70f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5acc714: lea rax, [rip + 0x17c10ed]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x5acc71b: mov rsi, qword ptr [rax]
// asm:   0x5acc71e: lea rdi, [rsp + 0x10]
// asm:   0x5acc723: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5acc728: test rbx, rbx
// asm:   0x5acc72b: je 0x5acc679
// asm:   0x5acc731: mov rdi, rbx
// asm:   0x5acc734: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5acc739: mov rbx, rax
// asm:   0x5acc73c: lea rdi, [rsp + 0x28]
// asm:   0x5acc741: call 0x2fd5ec0  ; il2cpp_runtime_helper_02fd5ec0()
// asm:   0x5acc746: mov rdi, rbx
// asm:   0x5acc749: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5acc74e: mov rdi, rax
// asm:   0x5acc751: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_Titans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  Photon_Pun_PhotonView_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  MethodInfo *pMVar7;
  Characters_BasicTitan_o *pCVar8;
  bool bVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_02;
  undefined1 auStack_68 [8];
  undefined1 *puStack_60;
  Characters_BasicTitan_o *pCStack_58;
  undefined1 auStack_50 [16];
  Characters_BasicTitan_o *pCStack_40;
  CustomLogic_CustomLogicGameBuiltin_o *pCStack_38;
  
  if (Il2CppMethodInitialized_07546d1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    Il2CppMethodInitialized_07546d1b = '\x01';
  }
  auStack_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  pCStack_58 = (Characters_BasicTitan_o *)0x0;
  if (Il2CppMethodInitialized_07546d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546d12 = '\x01';
  }
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05acc6db;
  bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
     ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
label_05acc6e0:
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  bVar9 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"Titans",
                     (System_Collections_Generic_HashSet_T__o *)(*(uint64_t *)((char *)pGVar4 + 0x48)),true,true,false,
                     (MethodInfo_34BE5E0 *)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BasicTitan);
  if (bVar9) {
    pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05acc6db;
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_05acc6e0;
    __this_00 = (*(uint64_t *)((char *)pGVar4 + 0x48));
    if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) goto label_05acc6db;
    pCStack_38 = __this;
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_50,
               (System_Collections_Generic_HashSet_object__o *)__this_00,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
    pCStack_58 = pCStack_40;
    auStack_68 = (undefined1  [8])auStack_50._0_8_;
    puStack_60 = (undefined1 *)auStack_50._8_8_;
    auStack_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    auStack_50._8_8_ = auStack_68;
    if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_68,
                           (MethodInfo_4C456D0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
        pCVar8 = pCStack_58;
        if (!bVar9) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (pCVar8 == (Characters_BasicTitan_o *)0x0) goto label_05acc6d1;
          if ((pCVar8->fields).Dead == false) {
            ThrowNullReferenceException();
          }
        }
      }
    }
    else {
label_05acc540:
      bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_68,
                         (MethodInfo_4C456D0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
      pCVar8 = pCStack_58;
      if (bVar9) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (pCVar8 == (Characters_BasicTitan_o *)0x0) {
label_05acc6d1:
            ThrowNullReferenceException();
          }
          if ((pCVar8->fields).Dead == false) {
            __this_01 = (pCVar10->fields).List;
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin)
            ;
            CustomLogic_CustomLogicTitanBuiltin___ctor(__this_02,pCVar8,(MethodInfo *)0x0);
            pMVar7 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar5 = (__this_01->fields)._items;
              if (pSVar5 != (System_Object_array *)0x0) {
                uVar3 = (__this_01->fields)._size;
                if (uVar3 < (uint)pSVar5->max_length) {
                  (__this_01->fields)._size = uVar3 + 1;
                  pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
                  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_01,(Il2CppObject *)__this_02,
                             (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                }
                goto label_05acc540;
              }
            }
            ThrowNullReferenceException();
          }
        }
        goto label_05acc540;
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_68,
               (MethodInfo_4C456C0 *)
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    __this = pCStack_38;
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(pCStack_38->fields)._cachedLists;
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05acc6db;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar6,(Il2CppObject *)"Titans",(Il2CppObject *)pCVar10,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar6,(Il2CppObject *)"Titans",
                         (MethodInfo_4AAD450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                        );
    return pCVar10;
  }
label_05acc6db:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_AITitans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_AITitans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acc760
// eh: try 0x5acc9db..0x5accba2 -> pad 0x5accba8 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5accbcc..0x5accbd1 -> pad 0x5accbf6 cleanup
// eh: try 0x5accbf9..0x5accc03 -> pad 0x5accc0b catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5accace: nop 
// asm:   0x5accba2: jmp 0x5accbb4
// asm:   0x5accba4: jmp 0x5accbb4
// asm:   0x5accba6: jmp 0x5accbb4
// asm:   0x5accba8: jmp 0x5accbb4
// asm:   0x5accbaa: jmp 0x5accbb4
// asm:   0x5accbac: jmp 0x5accbb4
// asm:   0x5accbae: jmp 0x5accbb4
// asm:   0x5accbb0: jmp 0x5accbb4
// asm:   0x5accbb2: jmp 0x5accbb4
// asm:   0x5accbb4: mov rbx, rax
// asm:   0x5accbb7: cmp edx, 1
// asm:   0x5accbba: jne 0x5accbf9
// asm:   0x5accbbc: mov rdi, rbx
// asm:   0x5accbbf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5accbc4: mov rbx, qword ptr [rax]
// asm:   0x5accbc7: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5accbcc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5accbd1: lea rax, [rip + 0x17c0c30]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x5accbd8: mov rsi, qword ptr [rax]
// asm:   0x5accbdb: lea rdi, [rsp + 0x10]
// asm:   0x5accbe0: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5accbe5: test rbx, rbx
// asm:   0x5accbe8: je 0x5accb36
// asm:   0x5accbee: mov rdi, rbx
// asm:   0x5accbf1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5accbf6: mov rbx, rax
// asm:   0x5accbf9: lea rdi, [rsp + 0x28]
// asm:   0x5accbfe: call 0x2fd5ef0  ; il2cpp_runtime_helper_02fd5ef0()
// asm:   0x5accc03: mov rdi, rbx
// asm:   0x5accc06: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5accc0b: mov rdi, rax
// asm:   0x5accc0e: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_AITitans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  Photon_Pun_PhotonView_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  MethodInfo *pMVar7;
  Characters_BasicTitan_o *pCVar8;
  bool bVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_02;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Characters_BasicTitan_o *local_58;
  undefined1 local_50 [16];
  Characters_BasicTitan_o *local_40;
  CustomLogic_CustomLogicGameBuiltin_o *local_38;
  
  if (Il2CppMethodInitialized_07546d1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"AITitans");
    Il2CppMethodInitialized_07546d1c = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Characters_BasicTitan_o *)0x0;
  if (Il2CppMethodInitialized_07546d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546d12 = '\x01';
  }
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05accb93;
  bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
     ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
label_05accb98:
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  bVar9 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"AITitans",
                     (System_Collections_Generic_HashSet_T__o *)(*(uint64_t *)((char *)pGVar4 + 0x48)),true,false,false,
                     (MethodInfo_34BE5E0 *)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BasicTitan);
  if (bVar9) {
    pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05accb93;
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_05accb98;
    __this_00 = (*(uint64_t *)((char *)pGVar4 + 0x48));
    if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) goto label_05accb93;
    local_38 = __this;
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,
               (System_Collections_Generic_HashSet_object__o *)__this_00,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
    local_58 = local_40;
    local_68 = (undefined1  [8])local_50._0_8_;
    puStack_60 = (undefined1 *)local_50._8_8_;
    local_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_50._8_8_ = local_68;
    if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                           (MethodInfo_4C456D0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
        pCVar8 = local_58;
        if (!bVar9) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (pCVar8 == (Characters_BasicTitan_o *)0x0) goto label_05accb8e;
          if (((pCVar8->fields).Dead == false) && ((pCVar8->fields).AI != false)) {
            ThrowNullReferenceException();
          }
        }
      }
    }
    else {
label_05acc9f0:
      bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                         (MethodInfo_4C456D0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
      pCVar8 = local_58;
      if (bVar9) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (pCVar8 == (Characters_BasicTitan_o *)0x0) {
label_05accb8e:
            ThrowNullReferenceException();
          }
          if (((pCVar8->fields).Dead == false) && ((pCVar8->fields).AI != false)) {
            __this_01 = (pCVar10->fields).List;
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin)
            ;
            CustomLogic_CustomLogicTitanBuiltin___ctor(__this_02,pCVar8,(MethodInfo *)0x0);
            pMVar7 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar5 = (__this_01->fields)._items;
              if (pSVar5 != (System_Object_array *)0x0) {
                uVar3 = (__this_01->fields)._size;
                if (uVar3 < (uint)pSVar5->max_length) {
                  (__this_01->fields)._size = uVar3 + 1;
                  pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
                  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_01,(Il2CppObject *)__this_02,
                             (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                }
                goto label_05acc9f0;
              }
            }
            ThrowNullReferenceException();
          }
        }
        goto label_05acc9f0;
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
               (MethodInfo_4C456C0 *)
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    __this = local_38;
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(local_38->fields)._cachedLists;
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05accb93;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar6,(Il2CppObject *)"AITitans",(Il2CppObject *)pCVar10,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar6,(Il2CppObject *)"AITitans",
                         (MethodInfo_4AAD450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                        );
    return pCVar10;
  }
label_05accb93:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_PlayerTitans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_PlayerTitans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5accc20
// eh: try 0x5acce9b..0x5acd062 -> pad 0x5acd066 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5acd08c..0x5acd091 -> pad 0x5acd0b6 cleanup
// eh: try 0x5acd0b9..0x5acd0c3 -> pad 0x5acd0cb catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5accf8e: nop 
// asm:   0x5acd062: jmp 0x5acd074
// asm:   0x5acd064: jmp 0x5acd074
// asm:   0x5acd066: jmp 0x5acd074
// asm:   0x5acd068: jmp 0x5acd074
// asm:   0x5acd06a: jmp 0x5acd074
// asm:   0x5acd06c: jmp 0x5acd074
// asm:   0x5acd06e: jmp 0x5acd074
// asm:   0x5acd070: jmp 0x5acd074
// asm:   0x5acd072: jmp 0x5acd074
// asm:   0x5acd074: mov rbx, rax
// asm:   0x5acd077: cmp edx, 1
// asm:   0x5acd07a: jne 0x5acd0b9
// asm:   0x5acd07c: mov rdi, rbx
// asm:   0x5acd07f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5acd084: mov rbx, qword ptr [rax]
// asm:   0x5acd087: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5acd08c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5acd091: lea rax, [rip + 0x17c0770]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x5acd098: mov rsi, qword ptr [rax]
// asm:   0x5acd09b: lea rdi, [rsp + 0x10]
// asm:   0x5acd0a0: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5acd0a5: test rbx, rbx
// asm:   0x5acd0a8: je 0x5accff6
// asm:   0x5acd0ae: mov rdi, rbx
// asm:   0x5acd0b1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5acd0b6: mov rbx, rax
// asm:   0x5acd0b9: lea rdi, [rsp + 0x28]
// asm:   0x5acd0be: call 0x2fd5f20  ; il2cpp_runtime_helper_02fd5f20()
// asm:   0x5acd0c3: mov rdi, rbx
// asm:   0x5acd0c6: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5acd0cb: mov rdi, rax
// asm:   0x5acd0ce: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_PlayerTitans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  Photon_Pun_PhotonView_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  MethodInfo *pMVar7;
  Characters_BasicTitan_o *pCVar8;
  bool bVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_02;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Characters_BasicTitan_o *local_58;
  undefined1 local_50 [16];
  Characters_BasicTitan_o *local_40;
  CustomLogic_CustomLogicGameBuiltin_o *local_38;
  
  if (Il2CppMethodInitialized_07546d1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerTitans");
    Il2CppMethodInitialized_07546d1d = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Characters_BasicTitan_o *)0x0;
  if (Il2CppMethodInitialized_07546d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546d12 = '\x01';
  }
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05acd053;
  bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
     ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
label_05acd058:
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  bVar9 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"PlayerTitans",
                     (System_Collections_Generic_HashSet_T__o *)(*(uint64_t *)((char *)pGVar4 + 0x48)),false,true,false,
                     (MethodInfo_34BE5E0 *)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BasicTitan);
  if (bVar9) {
    pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05acd053;
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_05acd058;
    __this_00 = (*(uint64_t *)((char *)pGVar4 + 0x48));
    if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) goto label_05acd053;
    local_38 = __this;
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,
               (System_Collections_Generic_HashSet_object__o *)__this_00,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
    local_58 = local_40;
    local_68 = (undefined1  [8])local_50._0_8_;
    puStack_60 = (undefined1 *)local_50._8_8_;
    local_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_50._8_8_ = local_68;
    if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                           (MethodInfo_4C456D0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
        pCVar8 = local_58;
        if (!bVar9) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (pCVar8 == (Characters_BasicTitan_o *)0x0) goto label_05acd04e;
          if (((pCVar8->fields).Dead == false) && ((pCVar8->fields).AI == false)) {
            ThrowNullReferenceException();
          }
        }
      }
    }
    else {
label_05acceb0:
      bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                         (MethodInfo_4C456D0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
      pCVar8 = local_58;
      if (bVar9) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (pCVar8 == (Characters_BasicTitan_o *)0x0) {
label_05acd04e:
            ThrowNullReferenceException();
          }
          if (((pCVar8->fields).Dead == false) && ((pCVar8->fields).AI == false)) {
            __this_01 = (pCVar10->fields).List;
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin)
            ;
            CustomLogic_CustomLogicTitanBuiltin___ctor(__this_02,pCVar8,(MethodInfo *)0x0);
            pMVar7 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar5 = (__this_01->fields)._items;
              if (pSVar5 != (System_Object_array *)0x0) {
                uVar3 = (__this_01->fields)._size;
                if (uVar3 < (uint)pSVar5->max_length) {
                  (__this_01->fields)._size = uVar3 + 1;
                  pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
                  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_01,(Il2CppObject *)__this_02,
                             (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                }
                goto label_05acceb0;
              }
            }
            ThrowNullReferenceException();
          }
        }
        goto label_05acceb0;
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
               (MethodInfo_4C456C0 *)
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    __this = local_38;
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(local_38->fields)._cachedLists;
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05acd053;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar6,(Il2CppObject *)"PlayerTitans",(Il2CppObject *)pCVar10,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar6,(Il2CppObject *)"PlayerTitans",
                         (MethodInfo_4AAD450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                        );
    return pCVar10;
  }
label_05acd053:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_Shifters
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_Shifters (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acd0e0
// eh: try 0x5acd36b..0x5acd5e7 -> pad 0x5acd5f5 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5acd611..0x5acd616 -> pad 0x5acd63b cleanup
// eh: try 0x5acd63e..0x5acd648 -> pad 0x5acd650 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5acd5e7: jmp 0x5acd5f9
// asm:   0x5acd5e9: jmp 0x5acd5f9
// asm:   0x5acd5eb: jmp 0x5acd5f9
// asm:   0x5acd5ed: jmp 0x5acd5f9
// asm:   0x5acd5ef: jmp 0x5acd5f9
// asm:   0x5acd5f1: jmp 0x5acd5f9
// asm:   0x5acd5f3: jmp 0x5acd5f9
// asm:   0x5acd5f5: jmp 0x5acd5f9
// asm:   0x5acd5f7: jmp 0x5acd5f9
// asm:   0x5acd5f9: mov rbx, rax
// asm:   0x5acd5fc: cmp edx, 1
// asm:   0x5acd5ff: jne 0x5acd63e
// asm:   0x5acd601: mov rdi, rbx
// asm:   0x5acd604: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5acd609: mov rbx, qword ptr [rax]
// asm:   0x5acd60c: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5acd611: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5acd616: lea rax, [rip + 0x17c01bb]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose
// asm:   0x5acd61d: mov rsi, qword ptr [rax]
// asm:   0x5acd620: lea rdi, [rsp + 0x10]
// asm:   0x5acd625: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5acd62a: test rbx, rbx
// asm:   0x5acd62d: je 0x5acd564
// asm:   0x5acd633: mov rdi, rbx
// asm:   0x5acd636: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5acd63b: mov rbx, rax
// asm:   0x5acd63e: lea rdi, [rsp + 0x28]
// asm:   0x5acd643: call 0x2fd5f50  ; il2cpp_runtime_helper_02fd5f50()
// asm:   0x5acd648: mov rdi, rbx
// asm:   0x5acd64b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5acd650: mov rdi, rax
// asm:   0x5acd653: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_Shifters
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  MethodInfo *pMVar8;
  Characters_WallColossalShifter_o *shifter;
  bool bVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_00;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_01;
  undefined1 local_68 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_60;
  Characters_WallColossalShifter_o *local_58;
  undefined1 local_50 [16];
  Characters_WallColossalShifter_o *local_40;
  CustomLogic_CustomLogicGameBuiltin_o *local_38;
  
  if (Il2CppMethodInitialized_07546d1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
    il2cpp_codegen_initialize_runtime_metadata(&"Shifters");
    Il2CppMethodInitialized_07546d1e = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_58 = (Characters_WallColossalShifter_o *)0x0;
  if (Il2CppMethodInitialized_07546d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546d12 = '\x01';
  }
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05acd5cb;
  bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
     ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
label_05acd5d0:
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  bVar9 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"Shifters",(System_Collections_Generic_HashSet_T__o *)(*(uint64_t *)((char *)pGVar4 + 0x50)),
                     true,true,true,
                     (MethodInfo_34BE5E0 *)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BaseShifter);
  if (bVar9) {
    pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05acd5cb;
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_05acd5d0;
    local_38 = __this;
    if ((*(uint64_t *)((char *)pGVar4 + 0x50)) == (GameManagers_BaseGameManager_c *)0x0) goto label_05acd5cb;
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,
               (System_Collections_Generic_HashSet_object__o *)(*(uint64_t *)((char *)pGVar4 + 0x50)),
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator);
    local_58 = local_40;
    local_68 = (undefined1  [8])local_50._0_8_;
    pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_50._8_8_;
    local_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_50._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_68;
label_05acd380:
    bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                       (MethodInfo_4C456D0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext);
    shifter = local_58;
    if (bVar9) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)shifter,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar9) {
        if (shifter == (Characters_WallColossalShifter_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((shifter->fields).Dead == false) || ((shifter->fields).TransformingToHuman != false)) {
          bVar2 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
          if (((shifter->klass->_2).typeHierarchyDepth < bVar2) ||
             ((shifter->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
            if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar5 = (pCVar10->fields).List;
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
            CustomLogic_CustomLogicShifterBuiltin___ctor
                      (__this_00,(Characters_BaseShifter_o *)shifter,(MethodInfo *)0x0);
            pMVar8 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
              piVar1 = &(pSVar5->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar6 = (pSVar5->fields)._items;
              if (pSVar6 != (System_Object_array *)0x0) {
                uVar3 = (pSVar5->fields)._size;
                if (uVar3 < (uint)pSVar6->max_length) {
                  (pSVar5->fields)._size = uVar3 + 1;
                  pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_00;
                  Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar5,(Il2CppObject *)__this_00,
                             (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
                }
                goto label_05acd380;
              }
            }
            ThrowNullReferenceException();
          }
          if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar5 = (pCVar10->fields).List;
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
          bVar2 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
          if (((shifter->klass->_2).typeHierarchyDepth < bVar2) ||
             ((shifter->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
            il2cpp_codegen_raise_invalid_cast_exception(shifter);
          }
          CustomLogic_CustomLogicWallColossalBuiltin___ctor(__this_01,shifter,(MethodInfo *)0x0);
          pMVar8 = MethodInfo_System_Collections_Generic_List_object_Add;
          if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar5->fields)._items;
            if (pSVar6 != (System_Object_array *)0x0) {
              uVar3 = (pSVar5->fields)._size;
              if (uVar3 < (uint)pSVar6->max_length) {
                (pSVar5->fields)._size = uVar3 + 1;
                pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_01;
                Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar5,(Il2CppObject *)__this_01,
                           (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
              }
              goto label_05acd380;
            }
          }
          ThrowNullReferenceException();
        }
      }
      goto label_05acd380;
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
               (MethodInfo_4C456C0 *)
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
    __this = local_38;
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(local_38->fields)._cachedLists;
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05acd5cb;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar7,(Il2CppObject *)"Shifters",(Il2CppObject *)pCVar10,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar7,(Il2CppObject *)"Shifters",
                         (MethodInfo_4AAD450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                        );
    return pCVar10;
  }
label_05acd5cb:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_AIShifters
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_AIShifters (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acd660
// eh: try 0x5acd8e8..0x5acdb70 -> pad 0x5acdb7e (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5acdb9a..0x5acdb9f -> pad 0x5acdbc4 cleanup
// eh: try 0x5acdbc7..0x5acdbd1 -> pad 0x5acdbd9 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5acdb70: jmp 0x5acdb82
// asm:   0x5acdb72: jmp 0x5acdb82
// asm:   0x5acdb74: jmp 0x5acdb82
// asm:   0x5acdb76: jmp 0x5acdb82
// asm:   0x5acdb78: jmp 0x5acdb82
// asm:   0x5acdb7a: jmp 0x5acdb82
// asm:   0x5acdb7c: jmp 0x5acdb82
// asm:   0x5acdb7e: jmp 0x5acdb82
// asm:   0x5acdb80: jmp 0x5acdb82
// asm:   0x5acdb82: mov rbx, rax
// asm:   0x5acdb85: cmp edx, 1
// asm:   0x5acdb88: jne 0x5acdbc7
// asm:   0x5acdb8a: mov rdi, rbx
// asm:   0x5acdb8d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5acdb92: mov rbx, qword ptr [rax]
// asm:   0x5acdb95: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5acdb9a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5acdb9f: lea rax, [rip + 0x17bfc32]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose
// asm:   0x5acdba6: mov rsi, qword ptr [rax]
// asm:   0x5acdba9: lea rdi, [rsp + 0x10]
// asm:   0x5acdbae: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5acdbb3: test rbx, rbx
// asm:   0x5acdbb6: je 0x5acdaed
// asm:   0x5acdbbc: mov rdi, rbx
// asm:   0x5acdbbf: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5acdbc4: mov rbx, rax
// asm:   0x5acdbc7: lea rdi, [rsp + 0x28]
// asm:   0x5acdbcc: call 0x2fd5f80  ; il2cpp_runtime_helper_02fd5f80()
// asm:   0x5acdbd1: mov rdi, rbx
// asm:   0x5acdbd4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5acdbd9: mov rdi, rax
// asm:   0x5acdbdc: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_AIShifters
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  MethodInfo *pMVar8;
  Characters_WallColossalShifter_o *shifter;
  bool bVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_00;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_01;
  undefined1 local_68 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_60;
  Characters_WallColossalShifter_o *local_58;
  undefined1 local_50 [16];
  Characters_WallColossalShifter_o *local_40;
  CustomLogic_CustomLogicGameBuiltin_o *local_38;
  
  if (Il2CppMethodInitialized_07546d1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
    il2cpp_codegen_initialize_runtime_metadata(&"AIShifters");
    Il2CppMethodInitialized_07546d1f = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_58 = (Characters_WallColossalShifter_o *)0x0;
  if (Il2CppMethodInitialized_07546d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546d12 = '\x01';
  }
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05acdb4f;
  bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
     ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
label_05acdb59:
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  bVar9 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"AIShifters",(System_Collections_Generic_HashSet_T__o *)(*(uint64_t *)((char *)pGVar4 + 0x50)),
                     true,false,true,
                     (MethodInfo_34BE5E0 *)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BaseShifter);
  if (bVar9) {
    pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05acdb4f;
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_05acdb59;
    local_38 = __this;
    if ((*(uint64_t *)((char *)pGVar4 + 0x50)) == (GameManagers_BaseGameManager_c *)0x0) goto label_05acdb4f;
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,
               (System_Collections_Generic_HashSet_object__o *)(*(uint64_t *)((char *)pGVar4 + 0x50)),
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator);
    local_58 = local_40;
    local_68 = (undefined1  [8])local_50._0_8_;
    pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_50._8_8_;
    local_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_50._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_68;
label_05acd900:
    bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                       (MethodInfo_4C456D0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext);
    shifter = local_58;
    if (bVar9) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)shifter,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar9) {
        if (shifter == (Characters_WallColossalShifter_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((shifter->fields).AI != false) &&
           (((shifter->fields).Dead == false || ((shifter->fields).TransformingToHuman != false)))) {
          bVar2 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
          if (((shifter->klass->_2).typeHierarchyDepth < bVar2) ||
             ((shifter->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
            if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar5 = (pCVar10->fields).List;
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
            CustomLogic_CustomLogicShifterBuiltin___ctor
                      (__this_00,(Characters_BaseShifter_o *)shifter,(MethodInfo *)0x0);
            pMVar8 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
              piVar1 = &(pSVar5->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar6 = (pSVar5->fields)._items;
              if (pSVar6 != (System_Object_array *)0x0) {
                uVar3 = (pSVar5->fields)._size;
                if (uVar3 < (uint)pSVar6->max_length) {
                  (pSVar5->fields)._size = uVar3 + 1;
                  pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_00;
                  Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar5,(Il2CppObject *)__this_00,
                             (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
                }
                goto label_05acd900;
              }
            }
            ThrowNullReferenceException();
          }
          if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar5 = (pCVar10->fields).List;
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
          bVar2 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
          if (((shifter->klass->_2).typeHierarchyDepth < bVar2) ||
             ((shifter->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
            il2cpp_codegen_raise_invalid_cast_exception(shifter);
          }
          CustomLogic_CustomLogicWallColossalBuiltin___ctor(__this_01,shifter,(MethodInfo *)0x0);
          pMVar8 = MethodInfo_System_Collections_Generic_List_object_Add;
          if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar5->fields)._items;
            if (pSVar6 != (System_Object_array *)0x0) {
              uVar3 = (pSVar5->fields)._size;
              if (uVar3 < (uint)pSVar6->max_length) {
                (pSVar5->fields)._size = uVar3 + 1;
                pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_01;
                Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar5,(Il2CppObject *)__this_01,
                           (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
              }
              goto label_05acd900;
            }
          }
          ThrowNullReferenceException();
        }
      }
      goto label_05acd900;
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
               (MethodInfo_4C456C0 *)
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
    __this = local_38;
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(local_38->fields)._cachedLists;
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05acdb4f;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar7,(Il2CppObject *)"AIShifters",(Il2CppObject *)pCVar10,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar7,(Il2CppObject *)"AIShifters",
                         (MethodInfo_4AAD450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                        );
    return pCVar10;
  }
label_05acdb4f:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_PlayerShifters
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_PlayerShifters (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acdbf0
// eh: try 0x5acde78..0x5ace100 -> pad 0x5ace10a (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ace12a..0x5ace12f -> pad 0x5ace154 cleanup
// eh: try 0x5ace157..0x5ace161 -> pad 0x5ace169 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ace100: jmp 0x5ace112
// asm:   0x5ace102: jmp 0x5ace112
// asm:   0x5ace104: jmp 0x5ace112
// asm:   0x5ace106: jmp 0x5ace112
// asm:   0x5ace108: jmp 0x5ace112
// asm:   0x5ace10a: jmp 0x5ace112
// asm:   0x5ace10c: jmp 0x5ace112
// asm:   0x5ace10e: jmp 0x5ace112
// asm:   0x5ace110: jmp 0x5ace112
// asm:   0x5ace112: mov rbx, rax
// asm:   0x5ace115: cmp edx, 1
// asm:   0x5ace118: jne 0x5ace157
// asm:   0x5ace11a: mov rdi, rbx
// asm:   0x5ace11d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ace122: mov rbx, qword ptr [rax]
// asm:   0x5ace125: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5ace12a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ace12f: lea rax, [rip + 0x17bf6a2]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose
// asm:   0x5ace136: mov rsi, qword ptr [rax]
// asm:   0x5ace139: lea rdi, [rsp + 0x10]
// asm:   0x5ace13e: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5ace143: test rbx, rbx
// asm:   0x5ace146: je 0x5ace07d
// asm:   0x5ace14c: mov rdi, rbx
// asm:   0x5ace14f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ace154: mov rbx, rax
// asm:   0x5ace157: lea rdi, [rsp + 0x28]
// asm:   0x5ace15c: call 0x2fd5fb0  ; il2cpp_runtime_helper_02fd5fb0()
// asm:   0x5ace161: mov rdi, rbx
// asm:   0x5ace164: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ace169: mov rdi, rax
// asm:   0x5ace16c: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_PlayerShifters
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  MethodInfo *pMVar8;
  Characters_WallColossalShifter_o *shifter;
  bool bVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_00;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_01;
  undefined1 local_68 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_60;
  Characters_WallColossalShifter_o *local_58;
  undefined1 local_50 [16];
  Characters_WallColossalShifter_o *local_40;
  CustomLogic_CustomLogicGameBuiltin_o *local_38;
  
  if (Il2CppMethodInitialized_07546d20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerShifters");
    Il2CppMethodInitialized_07546d20 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_58 = (Characters_WallColossalShifter_o *)0x0;
  if (Il2CppMethodInitialized_07546d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546d12 = '\x01';
  }
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05ace0df;
  bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
     ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
label_05ace0e4:
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  bVar9 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"PlayerShifters",(System_Collections_Generic_HashSet_T__o *)(*(uint64_t *)((char *)pGVar4 + 0x50)),
                     false,true,true,
                     (MethodInfo_34BE5E0 *)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BaseShifter);
  if (bVar9) {
    pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05ace0df;
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_05ace0e4;
    local_38 = __this;
    if ((*(uint64_t *)((char *)pGVar4 + 0x50)) == (GameManagers_BaseGameManager_c *)0x0) goto label_05ace0df;
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,
               (System_Collections_Generic_HashSet_object__o *)(*(uint64_t *)((char *)pGVar4 + 0x50)),
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator);
    local_58 = local_40;
    local_68 = (undefined1  [8])local_50._0_8_;
    pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_50._8_8_;
    local_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_50._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_68;
label_05acde90:
    bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                       (MethodInfo_4C456D0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext);
    shifter = local_58;
    if (bVar9) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)shifter,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar9) {
        if (shifter == (Characters_WallColossalShifter_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((shifter->fields).AI == false) &&
           (((shifter->fields).Dead == false || ((shifter->fields).TransformingToHuman != false)))) {
          bVar2 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
          if (((shifter->klass->_2).typeHierarchyDepth < bVar2) ||
             ((shifter->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
            if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar5 = (pCVar10->fields).List;
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
            CustomLogic_CustomLogicShifterBuiltin___ctor
                      (__this_00,(Characters_BaseShifter_o *)shifter,(MethodInfo *)0x0);
            pMVar8 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
              piVar1 = &(pSVar5->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar6 = (pSVar5->fields)._items;
              if (pSVar6 != (System_Object_array *)0x0) {
                uVar3 = (pSVar5->fields)._size;
                if (uVar3 < (uint)pSVar6->max_length) {
                  (pSVar5->fields)._size = uVar3 + 1;
                  pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_00;
                  Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar5,(Il2CppObject *)__this_00,
                             (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
                }
                goto label_05acde90;
              }
            }
            ThrowNullReferenceException();
          }
          if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar5 = (pCVar10->fields).List;
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
          bVar2 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
          if (((shifter->klass->_2).typeHierarchyDepth < bVar2) ||
             ((shifter->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
            il2cpp_codegen_raise_invalid_cast_exception(shifter);
          }
          CustomLogic_CustomLogicWallColossalBuiltin___ctor(__this_01,shifter,(MethodInfo *)0x0);
          pMVar8 = MethodInfo_System_Collections_Generic_List_object_Add;
          if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar5->fields)._items;
            if (pSVar6 != (System_Object_array *)0x0) {
              uVar3 = (pSVar5->fields)._size;
              if (uVar3 < (uint)pSVar6->max_length) {
                (pSVar5->fields)._size = uVar3 + 1;
                pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_01;
                Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar5,(Il2CppObject *)__this_01,
                           (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
              }
              goto label_05acde90;
            }
          }
          ThrowNullReferenceException();
        }
      }
      goto label_05acde90;
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
               (MethodInfo_4C456C0 *)
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
    __this = local_38;
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(local_38->fields)._cachedLists;
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05ace0df;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar7,(Il2CppObject *)"PlayerShifters",(Il2CppObject *)pCVar10,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar7,(Il2CppObject *)"PlayerShifters",
                         (MethodInfo_4AAD450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                        );
    return pCVar10;
  }
label_05ace0df:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_Horses
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_Horses (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5ace180
// eh: try 0x5ace3fe..0x5ace5ab -> pad 0x5ace5bd (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ace5df..0x5ace5e4 -> pad 0x5ace609 cleanup
// eh: try 0x5ace60c..0x5ace616 -> pad 0x5ace61e catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ace409: nop dword ptr [rax]
// asm:   0x5ace5b5: jmp 0x5ace5c7
// asm:   0x5ace5b7: jmp 0x5ace5c7
// asm:   0x5ace5b9: jmp 0x5ace5c7
// asm:   0x5ace5bb: jmp 0x5ace5c7
// asm:   0x5ace5bd: jmp 0x5ace5c7
// asm:   0x5ace5bf: jmp 0x5ace5c7
// asm:   0x5ace5c1: jmp 0x5ace5c7
// asm:   0x5ace5c3: jmp 0x5ace5c7
// asm:   0x5ace5c5: jmp 0x5ace5c7
// asm:   0x5ace5c7: mov rbx, rax
// asm:   0x5ace5ca: cmp edx, 1
// asm:   0x5ace5cd: jne 0x5ace60c
// asm:   0x5ace5cf: mov rdi, rbx
// asm:   0x5ace5d2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ace5d7: mov rbx, qword ptr [rax]
// asm:   0x5ace5da: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5ace5df: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ace5e4: lea rax, [rip + 0x17bf865]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose
// asm:   0x5ace5eb: mov rsi, qword ptr [rax]
// asm:   0x5ace5ee: lea rdi, [rsp + 0x10]
// asm:   0x5ace5f3: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5ace5f8: test rbx, rbx
// asm:   0x5ace5fb: je 0x5ace549
// asm:   0x5ace601: mov rdi, rbx
// asm:   0x5ace604: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ace609: mov rbx, rax
// asm:   0x5ace60c: lea rdi, [rsp + 0x28]
// asm:   0x5ace611: call 0x2fd5fe0  ; il2cpp_runtime_helper_02fd5fe0()
// asm:   0x5ace616: mov rdi, rbx
// asm:   0x5ace619: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ace61e: mov rdi, rax
// asm:   0x5ace621: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_Horses
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  MethodInfo *pMVar7;
  Characters_Horse_o *pCVar8;
  bool bVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicHorseBuiltin_o *__this_01;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Characters_Horse_o *local_58;
  undefined1 local_50 [16];
  Characters_Horse_o *local_40;
  CustomLogic_CustomLogicGameBuiltin_o *local_38;
  
  if (Il2CppMethodInitialized_07546d21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Horse_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Horses");
    Il2CppMethodInitialized_07546d21 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Characters_Horse_o *)0x0;
  if (Il2CppMethodInitialized_07546d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546d12 = '\x01';
  }
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05ace5ab;
  bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
     ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
label_05ace5b0:
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  bVar9 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"Horses",(*(uint64_t *)((char *)pGVar4 + 0x58)),true,true,false,
                     (MethodInfo_34BE5E0 *)MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_Horse
                    );
  if (bVar9) {
    pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05ace5ab;
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_05ace5b0;
    if ((*(uint64_t *)((char *)pGVar4 + 0x58)) == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05ace5ab;
    local_38 = __this;
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,(*(uint64_t *)((char *)pGVar4 + 0x58)),
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Horse_GetEnumerator);
    local_58 = local_40;
    local_68 = (undefined1  [8])local_50._0_8_;
    puStack_60 = (undefined1 *)local_50._8_8_;
    local_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_50._8_8_ = local_68;
    if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                           (MethodInfo_4C456D0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_MoveNext);
        pCVar8 = local_58;
        if (!bVar9) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (pCVar8 == (Characters_Horse_o *)0x0) goto label_05ace5a1;
          if ((pCVar8->fields).Dead == false) {
            ThrowNullReferenceException();
          }
        }
      }
    }
    else {
label_05ace410:
      bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                         (MethodInfo_4C456D0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_MoveNext);
      pCVar8 = local_58;
      if (bVar9) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (pCVar8 == (Characters_Horse_o *)0x0) {
label_05ace5a1:
            ThrowNullReferenceException();
          }
          if ((pCVar8->fields).Dead == false) {
            __this_00 = (pCVar10->fields).List;
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin)
            ;
            CustomLogic_CustomLogicHorseBuiltin___ctor(__this_01,pCVar8,(MethodInfo *)0x0);
            pMVar7 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar5 = (__this_00->fields)._items;
              if (pSVar5 != (System_Object_array *)0x0) {
                uVar3 = (__this_00->fields)._size;
                if (uVar3 < (uint)pSVar5->max_length) {
                  (__this_00->fields)._size = uVar3 + 1;
                  pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)__this_01;
                  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_00,(Il2CppObject *)__this_01,
                             (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                }
                goto label_05ace410;
              }
            }
            ThrowNullReferenceException();
          }
        }
        goto label_05ace410;
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
               (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
    __this = local_38;
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(local_38->fields)._cachedLists;
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05ace5ab;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar6,(Il2CppObject *)"Horses",(Il2CppObject *)pCVar10,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar6,(Il2CppObject *)"Horses",
                         (MethodInfo_4AAD450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                        );
    return pCVar10;
  }
label_05ace5ab:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnHorse
// il2cpp: CustomLogic_CustomLogicHorseBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnHorse (CustomLogic_CustomLogicGameBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x5ace630

CustomLogic_CustomLogicHorseBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnHorse
          (CustomLogic_CustomLogicGameBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *position,
          float rotationY,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  System_String_o *name;
  bool bVar3;
  Characters_Horse_o *horse;
  CustomLogic_CustomLogicHorseBuiltin_o *__this_00;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (Il2CppMethodInitialized_07546d22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_07546d22 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  __this_00 = (CustomLogic_CustomLogicHorseBuiltin_o *)0x0;
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) && (bVar3)) {
    __this_00 = (CustomLogic_CustomLogicHorseBuiltin_o *)0x0;
    bVar3 = Controllers_HorseController__IsFinite_5aa6c20
                      ((UnityEngine_Vector3_o)(position->fields).Value.fields,(MethodInfo *)0x0);
    if (bVar3) {
      __this_00 = (CustomLogic_CustomLogicHorseBuiltin_o *)0x0;
      bVar3 = Controllers_HorseController__IsFinite(rotationY,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
        }
        name = TypeInfo_Characters_CharacterPrefabs->static_fields->Horse;
        local_28._0_4_ = (position->fields).Value.fields.x;
        local_28._4_4_ = (position->fields).Value.fields.y;
        uStack_20 = 0;
        fVar1 = (position->fields).Value.fields.z;
        local_38.fields.x = 0.0;
        local_38.fields.y = rotationY * 0.017453292;
        local_38.fields.z = 0.0;
        rotation = UnityEngine_Quaternion__Internal_FromEulerRad(&local_38,(MethodInfo *)0x0);
        position_00.fields.z = fVar1;
        position_00.fields.x = (float)(undefined4)local_28;
        position_00.fields.y = (float)local_28._4_4_;
        horse = (Characters_Horse_o *)
                Characters_CharacterSpawner__Spawn(name,position_00,rotation,(MethodInfo *)0x0);
        if (horse != (Characters_Horse_o *)0x0) {
          bVar2 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
          if (((horse->klass->_2).typeHierarchyDepth < bVar2) ||
             ((horse->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Horse))
          {
            il2cpp_codegen_raise_invalid_cast_exception(horse);
          }
        }
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        if (horse == (Characters_Horse_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(horse->klass->vtable)._75_Init.methodPtr)
                  (horse,true,TypeInfo_GameManagers_TeamInfo->static_fields->None,
                   (horse->klass->vtable)._75_Init.method);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin);
        CustomLogic_CustomLogicHorseBuiltin___ctor(__this_00,horse,(MethodInfo *)0x0);
      }
    }
  }
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin$$get_Humans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_Humans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5ace830
// eh: try 0x5aceaae..0x5acec5b -> pad 0x5acec6d (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5acec8f..0x5acec94 -> pad 0x5acecb9 cleanup
// eh: try 0x5acecbc..0x5acecc6 -> pad 0x5acecce catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aceab9: nop dword ptr [rax]
// asm:   0x5acec65: jmp 0x5acec77
// asm:   0x5acec67: jmp 0x5acec77
// asm:   0x5acec69: jmp 0x5acec77
// asm:   0x5acec6b: jmp 0x5acec77
// asm:   0x5acec6d: jmp 0x5acec77
// asm:   0x5acec6f: jmp 0x5acec77
// asm:   0x5acec71: jmp 0x5acec77
// asm:   0x5acec73: jmp 0x5acec77
// asm:   0x5acec75: jmp 0x5acec77
// asm:   0x5acec77: mov rbx, rax
// asm:   0x5acec7a: cmp edx, 1
// asm:   0x5acec7d: jne 0x5acecbc
// asm:   0x5acec7f: mov rdi, rbx
// asm:   0x5acec82: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5acec87: mov rbx, qword ptr [rax]
// asm:   0x5acec8a: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5acec8f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5acec94: lea rax, [rip + 0x17bf1cd]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x5acec9b: mov rsi, qword ptr [rax]
// asm:   0x5acec9e: lea rdi, [rsp + 0x10]
// asm:   0x5aceca3: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5aceca8: test rbx, rbx
// asm:   0x5acecab: je 0x5acebf9
// asm:   0x5acecb1: mov rdi, rbx
// asm:   0x5acecb4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5acecb9: mov rbx, rax
// asm:   0x5acecbc: lea rdi, [rsp + 0x28]
// asm:   0x5acecc1: call 0x2fd6010  ; il2cpp_runtime_helper_02fd6010()
// asm:   0x5acecc6: mov rdi, rbx
// asm:   0x5acecc9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5acecce: mov rdi, rax
// asm:   0x5acecd1: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_Humans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  MethodInfo *pMVar7;
  Characters_Human_o *pCVar8;
  bool bVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_02;
  undefined1 auStack_68 [8];
  undefined1 *puStack_60;
  Characters_Human_o *pCStack_58;
  undefined1 auStack_50 [16];
  Characters_Human_o *pCStack_40;
  CustomLogic_CustomLogicGameBuiltin_o *pCStack_38;
  
  if (Il2CppMethodInitialized_07546d23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Humans");
    Il2CppMethodInitialized_07546d23 = '\x01';
  }
  auStack_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  pCStack_58 = (Characters_Human_o *)0x0;
  if (Il2CppMethodInitialized_07546d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546d12 = '\x01';
  }
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05acec5b;
  bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
     ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
label_05acec60:
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  bVar9 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"Humans",
                     (System_Collections_Generic_HashSet_T__o *)(*(uint64_t *)((char *)pGVar4 + 0x40)),
                     true,true,false,
                     (MethodInfo_34BE5E0 *)MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_Human
                    );
  if (bVar9) {
    pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05acec5b;
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_05acec60;
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(*(uint64_t *)((char *)pGVar4 + 0x40));
    if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05acec5b;
    pCStack_38 = __this;
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_50,__this_00,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    pCStack_58 = pCStack_40;
    auStack_68 = (undefined1  [8])auStack_50._0_8_;
    puStack_60 = (undefined1 *)auStack_50._8_8_;
    auStack_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    auStack_50._8_8_ = auStack_68;
    if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_68,
                           (MethodInfo_4C456D0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
        pCVar8 = pCStack_58;
        if (!bVar9) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (pCVar8 == (Characters_Human_o *)0x0) goto label_05acec51;
          if ((pCVar8->fields).Dead == false) {
            ThrowNullReferenceException();
          }
        }
      }
    }
    else {
label_05aceac0:
      bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_68,
                         (MethodInfo_4C456D0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
      pCVar8 = pCStack_58;
      if (bVar9) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (pCVar8 == (Characters_Human_o *)0x0) {
label_05acec51:
            ThrowNullReferenceException();
          }
          if ((pCVar8->fields).Dead == false) {
            __this_01 = (pCVar10->fields).List;
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin)
            ;
            CustomLogic_CustomLogicHumanBuiltin___ctor(__this_02,pCVar8,(MethodInfo *)0x0);
            pMVar7 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar5 = (__this_01->fields)._items;
              if (pSVar5 != (System_Object_array *)0x0) {
                uVar3 = (__this_01->fields)._size;
                if (uVar3 < (uint)pSVar5->max_length) {
                  (__this_01->fields)._size = uVar3 + 1;
                  pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
                  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_01,(Il2CppObject *)__this_02,
                             (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                }
                goto label_05aceac0;
              }
            }
            ThrowNullReferenceException();
          }
        }
        goto label_05aceac0;
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_68,
               (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    __this = pCStack_38;
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(pCStack_38->fields)._cachedLists;
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05acec5b;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar6,(Il2CppObject *)"Humans",(Il2CppObject *)pCVar10,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar6,(Il2CppObject *)"Humans",
                         (MethodInfo_4AAD450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                        );
    return pCVar10;
  }
label_05acec5b:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_AIHumans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_AIHumans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acece0
// eh: try 0x5acef5b..0x5acf122 -> pad 0x5acf128 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5acf14c..0x5acf151 -> pad 0x5acf176 cleanup
// eh: try 0x5acf179..0x5acf183 -> pad 0x5acf18b catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5acf04e: nop 
// asm:   0x5acf122: jmp 0x5acf134
// asm:   0x5acf124: jmp 0x5acf134
// asm:   0x5acf126: jmp 0x5acf134
// asm:   0x5acf128: jmp 0x5acf134
// asm:   0x5acf12a: jmp 0x5acf134
// asm:   0x5acf12c: jmp 0x5acf134
// asm:   0x5acf12e: jmp 0x5acf134
// asm:   0x5acf130: jmp 0x5acf134
// asm:   0x5acf132: jmp 0x5acf134
// asm:   0x5acf134: mov rbx, rax
// asm:   0x5acf137: cmp edx, 1
// asm:   0x5acf13a: jne 0x5acf179
// asm:   0x5acf13c: mov rdi, rbx
// asm:   0x5acf13f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5acf144: mov rbx, qword ptr [rax]
// asm:   0x5acf147: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5acf14c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5acf151: lea rax, [rip + 0x17bed10]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x5acf158: mov rsi, qword ptr [rax]
// asm:   0x5acf15b: lea rdi, [rsp + 0x10]
// asm:   0x5acf160: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5acf165: test rbx, rbx
// asm:   0x5acf168: je 0x5acf0b6
// asm:   0x5acf16e: mov rdi, rbx
// asm:   0x5acf171: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5acf176: mov rbx, rax
// asm:   0x5acf179: lea rdi, [rsp + 0x28]
// asm:   0x5acf17e: call 0x2fd6040  ; il2cpp_runtime_helper_02fd6040()
// asm:   0x5acf183: mov rdi, rbx
// asm:   0x5acf186: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5acf18b: mov rdi, rax
// asm:   0x5acf18e: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_AIHumans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  MethodInfo *pMVar7;
  Characters_Human_o *pCVar8;
  bool bVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_02;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Characters_Human_o *local_58;
  undefined1 local_50 [16];
  Characters_Human_o *local_40;
  CustomLogic_CustomLogicGameBuiltin_o *local_38;
  
  if (Il2CppMethodInitialized_07546d24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"AIHumans");
    Il2CppMethodInitialized_07546d24 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Characters_Human_o *)0x0;
  if (Il2CppMethodInitialized_07546d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546d12 = '\x01';
  }
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05acf113;
  bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
     ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
label_05acf118:
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  bVar9 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"AIHumans",
                     (System_Collections_Generic_HashSet_T__o *)(*(uint64_t *)((char *)pGVar4 + 0x40)),
                     true,false,false,
                     (MethodInfo_34BE5E0 *)MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_Human
                    );
  if (bVar9) {
    pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05acf113;
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_05acf118;
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(*(uint64_t *)((char *)pGVar4 + 0x40));
    if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05acf113;
    local_38 = __this;
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,__this_00,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    local_58 = local_40;
    local_68 = (undefined1  [8])local_50._0_8_;
    puStack_60 = (undefined1 *)local_50._8_8_;
    local_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_50._8_8_ = local_68;
    if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                           (MethodInfo_4C456D0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
        pCVar8 = local_58;
        if (!bVar9) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (pCVar8 == (Characters_Human_o *)0x0) goto label_05acf10e;
          if (((pCVar8->fields).Dead == false) && ((pCVar8->fields).AI != false)) {
            ThrowNullReferenceException();
          }
        }
      }
    }
    else {
label_05acef70:
      bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                         (MethodInfo_4C456D0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
      pCVar8 = local_58;
      if (bVar9) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (pCVar8 == (Characters_Human_o *)0x0) {
label_05acf10e:
            ThrowNullReferenceException();
          }
          if (((pCVar8->fields).Dead == false) && ((pCVar8->fields).AI != false)) {
            __this_01 = (pCVar10->fields).List;
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin)
            ;
            CustomLogic_CustomLogicHumanBuiltin___ctor(__this_02,pCVar8,(MethodInfo *)0x0);
            pMVar7 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar5 = (__this_01->fields)._items;
              if (pSVar5 != (System_Object_array *)0x0) {
                uVar3 = (__this_01->fields)._size;
                if (uVar3 < (uint)pSVar5->max_length) {
                  (__this_01->fields)._size = uVar3 + 1;
                  pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
                  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_01,(Il2CppObject *)__this_02,
                             (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                }
                goto label_05acef70;
              }
            }
            ThrowNullReferenceException();
          }
        }
        goto label_05acef70;
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
               (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    __this = local_38;
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(local_38->fields)._cachedLists;
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05acf113;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar6,(Il2CppObject *)"AIHumans",(Il2CppObject *)pCVar10,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar6,(Il2CppObject *)"AIHumans",
                         (MethodInfo_4AAD450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                        );
    return pCVar10;
  }
label_05acf113:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_PlayerHumans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_PlayerHumans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acf1a0
// eh: try 0x5acf41b..0x5acf5e2 -> pad 0x5acf5e6 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5acf60c..0x5acf611 -> pad 0x5acf636 cleanup
// eh: try 0x5acf639..0x5acf643 -> pad 0x5acf64b catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5acf50e: nop 
// asm:   0x5acf5e2: jmp 0x5acf5f4
// asm:   0x5acf5e4: jmp 0x5acf5f4
// asm:   0x5acf5e6: jmp 0x5acf5f4
// asm:   0x5acf5e8: jmp 0x5acf5f4
// asm:   0x5acf5ea: jmp 0x5acf5f4
// asm:   0x5acf5ec: jmp 0x5acf5f4
// asm:   0x5acf5ee: jmp 0x5acf5f4
// asm:   0x5acf5f0: jmp 0x5acf5f4
// asm:   0x5acf5f2: jmp 0x5acf5f4
// asm:   0x5acf5f4: mov rbx, rax
// asm:   0x5acf5f7: cmp edx, 1
// asm:   0x5acf5fa: jne 0x5acf639
// asm:   0x5acf5fc: mov rdi, rbx
// asm:   0x5acf5ff: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5acf604: mov rbx, qword ptr [rax]
// asm:   0x5acf607: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5acf60c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5acf611: lea rax, [rip + 0x17be850]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x5acf618: mov rsi, qword ptr [rax]
// asm:   0x5acf61b: lea rdi, [rsp + 0x10]
// asm:   0x5acf620: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5acf625: test rbx, rbx
// asm:   0x5acf628: je 0x5acf576
// asm:   0x5acf62e: mov rdi, rbx
// asm:   0x5acf631: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5acf636: mov rbx, rax
// asm:   0x5acf639: lea rdi, [rsp + 0x28]
// asm:   0x5acf63e: call 0x2fd6070  ; il2cpp_runtime_helper_02fd6070()
// asm:   0x5acf643: mov rdi, rbx
// asm:   0x5acf646: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5acf64b: mov rdi, rax
// asm:   0x5acf64e: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_PlayerHumans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  MethodInfo *pMVar7;
  Characters_Human_o *pCVar8;
  bool bVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_02;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Characters_Human_o *local_58;
  undefined1 local_50 [16];
  Characters_Human_o *local_40;
  CustomLogic_CustomLogicGameBuiltin_o *local_38;
  
  if (Il2CppMethodInitialized_07546d25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerHumans");
    Il2CppMethodInitialized_07546d25 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Characters_Human_o *)0x0;
  if (Il2CppMethodInitialized_07546d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546d12 = '\x01';
  }
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05acf5d3;
  bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
     ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
label_05acf5d8:
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  bVar9 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"PlayerHumans",
                     (System_Collections_Generic_HashSet_T__o *)(*(uint64_t *)((char *)pGVar4 + 0x40)),
                     false,true,false,
                     (MethodInfo_34BE5E0 *)MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_Human
                    );
  if (bVar9) {
    pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar10,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) goto label_05acf5d3;
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_05acf5d8;
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(*(uint64_t *)((char *)pGVar4 + 0x40));
    if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05acf5d3;
    local_38 = __this;
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,__this_00,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    local_58 = local_40;
    local_68 = (undefined1  [8])local_50._0_8_;
    puStack_60 = (undefined1 *)local_50._8_8_;
    local_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_50._8_8_ = local_68;
    if (pCVar10 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      while( true ) {
        bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                           (MethodInfo_4C456D0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
        pCVar8 = local_58;
        if (!bVar9) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (pCVar8 == (Characters_Human_o *)0x0) goto label_05acf5ce;
          if (((pCVar8->fields).Dead == false) && ((pCVar8->fields).AI == false)) {
            ThrowNullReferenceException();
          }
        }
      }
    }
    else {
label_05acf430:
      bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                         (MethodInfo_4C456D0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
      pCVar8 = local_58;
      if (bVar9) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (pCVar8 == (Characters_Human_o *)0x0) {
label_05acf5ce:
            ThrowNullReferenceException();
          }
          if (((pCVar8->fields).Dead == false) && ((pCVar8->fields).AI == false)) {
            __this_01 = (pCVar10->fields).List;
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin)
            ;
            CustomLogic_CustomLogicHumanBuiltin___ctor(__this_02,pCVar8,(MethodInfo *)0x0);
            pMVar7 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar5 = (__this_01->fields)._items;
              if (pSVar5 != (System_Object_array *)0x0) {
                uVar3 = (__this_01->fields)._size;
                if (uVar3 < (uint)pSVar5->max_length) {
                  (__this_01->fields)._size = uVar3 + 1;
                  pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
                  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_01,(Il2CppObject *)__this_02,
                             (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                }
                goto label_05acf430;
              }
            }
            ThrowNullReferenceException();
          }
        }
        goto label_05acf430;
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
               (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    __this = local_38;
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(local_38->fields)._cachedLists;
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05acf5d3;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar6,(Il2CppObject *)"PlayerHumans",(Il2CppObject *)pCVar10,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar6,(Il2CppObject *)"PlayerHumans",
                         (MethodInfo_4AAD450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                        );
    return pCVar10;
  }
label_05acf5d3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_Loadouts
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_Loadouts (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acf660
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5acf723: test r14, r14
// asm:   0x5acf72c: jmp 0x5acf7e9

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_Loadouts
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  Il2CppObject *object;
  System_Collections_Generic_List_string__o *__this_00;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  CustomLogic_CustomLogicGameBuiltin___c_StaticFields *pCVar1;
  System_Converter_TInput__TOutput__o *__this_02;
  System_Collections_Generic_List_TOutput__o *pSVar2;
  
  if (Il2CppMethodInitialized_07546d26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Converter_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ConvertAll_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_c_get_Loadouts_b__43_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_c);
    Il2CppMethodInitialized_07546d26 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  __this_00 = GameManagers_HumanLoadout__GetAllowed((MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_c);
    pCVar1 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_c->static_fields;
    __this_02 = (System_Converter_TInput__TOutput__o *)pCVar1->__9__43_0;
  }
  else {
    pCVar1 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_c->static_fields;
    __this_02 = (System_Converter_TInput__TOutput__o *)pCVar1->__9__43_0;
  }
  if (__this_02 == (System_Converter_TInput__TOutput__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_c)->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_c);
      pCVar1 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_c->static_fields;
    }
    object = (Il2CppObject *)pCVar1->__9;
    __this_02 = (System_Converter_TInput__TOutput__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Converter_string_object);
    System_Converter_object__object____ctor
              (__this_02,object,(intptr_t)MethodInfo_CustomLogic_CustomLogicGameBuiltin_c_get_Loadouts_b__43_0
               ,(MethodInfo_494A3F0 *)0x0);
    pCVar1 = TypeInfo_CustomLogic_CustomLogicGameBuiltin_c->static_fields;
    pCVar1->__9__43_0 = (System_Converter_string__object__o *)__this_02;
    Il2CppCodeGenWriteBarrier(&pCVar1->__9__43_0);
  }
  if ((__this_00 == (System_Collections_Generic_List_string__o *)0x0) ||
     (pSVar2 = System_Collections_Generic_List_object___ConvertAll_object_
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (System_Converter_T__TOutput__o *)__this_02,
                          (MethodInfo_31D7BB0 *)
                          MethodInfo_System_Collections_Generic_List_string_ConvertAll_object),
     __this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (__this_01->fields).List = (System_Collections_Generic_List_object__o *)pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).List);
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin$$get_DefaultShowKillScore
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_DefaultShowKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acf7f0

bool CustomLogic_CustomLogicGameBuiltin__get_DefaultShowKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546d27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d27 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar2->fields).DefaultShowKillScore;
}


// CustomLogic.CustomLogicGameBuiltin$$set_DefaultShowKillScore
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_DefaultShowKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5acf870

void CustomLogic_CustomLogicGameBuiltin__set_DefaultShowKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool value,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546d28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d28 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar2->fields).DefaultShowKillScore = value;
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$get_DefaultShowKillFeed
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_DefaultShowKillFeed (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acf900

bool CustomLogic_CustomLogicGameBuiltin__get_DefaultShowKillFeed
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546d29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d29 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar2->fields).DefaultShowKillFeed;
}


// CustomLogic.CustomLogicGameBuiltin$$set_DefaultShowKillFeed
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_DefaultShowKillFeed (CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5acf980

void CustomLogic_CustomLogicGameBuiltin__set_DefaultShowKillFeed
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool value,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546d2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d2a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar2->fields).DefaultShowKillFeed = value;
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$get_DefaultHideKillScore
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_DefaultHideKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acfa10

bool CustomLogic_CustomLogicGameBuiltin__get_DefaultHideKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546d29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d29 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar2->fields).DefaultShowKillFeed;
}


// CustomLogic.CustomLogicGameBuiltin$$set_DefaultHideKillScore
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_DefaultHideKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5acfa90

void CustomLogic_CustomLogicGameBuiltin__set_DefaultHideKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool value,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546d2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d2a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar2->fields).DefaultShowKillFeed = value;
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$get_DefaultAddKillScore
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_DefaultAddKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acfb20

bool CustomLogic_CustomLogicGameBuiltin__get_DefaultAddKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546d2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d2b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar2->fields).DefaultAddKillScore;
}


// CustomLogic.CustomLogicGameBuiltin$$set_DefaultAddKillScore
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_DefaultAddKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5acfba0

void CustomLogic_CustomLogicGameBuiltin__set_DefaultAddKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool value,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546d2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d2c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar2->fields).DefaultAddKillScore = value;
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$get_ShowScoreboardLoadout
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_ShowScoreboardLoadout (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acfc30

bool CustomLogic_CustomLogicGameBuiltin__get_ShowScoreboardLoadout
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546d2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d2d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar2->fields).ShowScoreboardLoadout;
}


// CustomLogic.CustomLogicGameBuiltin$$set_ShowScoreboardLoadout
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_ShowScoreboardLoadout (CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5acfcb0

void CustomLogic_CustomLogicGameBuiltin__set_ShowScoreboardLoadout
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool value,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546d2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d2e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar2->fields).ShowScoreboardLoadout = value;
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$get_ShowScoreboardStatus
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_ShowScoreboardStatus (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acfd40

bool CustomLogic_CustomLogicGameBuiltin__get_ShowScoreboardStatus
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546d2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d2f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar2->fields).ShowScoreboardStatus;
}


// CustomLogic.CustomLogicGameBuiltin$$set_ShowScoreboardStatus
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_ShowScoreboardStatus (CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5acfdc0

void CustomLogic_CustomLogicGameBuiltin__set_ShowScoreboardStatus
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool value,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546d30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d30 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar2->fields).ShowScoreboardStatus = value;
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$get_ForcedCharacterType
// il2cpp: System_String_o* CustomLogic_CustomLogicGameBuiltin__get_ForcedCharacterType (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acfe50

System_String_o *
CustomLogic_CustomLogicGameBuiltin__get_ForcedCharacterType
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546d31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d31 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar2->fields).ForcedCharacterType;
}


// CustomLogic.CustomLogicGameBuiltin$$set_ForcedCharacterType
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_ForcedCharacterType (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5acfed0

void CustomLogic_CustomLogicGameBuiltin__set_ForcedCharacterType
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546d32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d32 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar2->fields).ForcedCharacterType = value;
  Il2CppCodeGenWriteBarrier(&(pCVar2->fields).ForcedCharacterType);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$get_ForcedLoadout
// il2cpp: System_String_o* CustomLogic_CustomLogicGameBuiltin__get_ForcedLoadout (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5acff70

System_String_o *
CustomLogic_CustomLogicGameBuiltin__get_ForcedLoadout
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546d33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d33 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar2->fields).ForcedLoadout;
}


// CustomLogic.CustomLogicGameBuiltin$$set_ForcedLoadout
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_ForcedLoadout (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5acfff0

void CustomLogic_CustomLogicGameBuiltin__set_ForcedLoadout
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546d34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d34 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar2->fields).ForcedLoadout = value;
  Il2CppCodeGenWriteBarrier(&(pCVar2->fields).ForcedLoadout);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$Debug
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__Debug (CustomLogic_CustomLogicGameBuiltin_o* __this, Il2CppObject* message, const MethodInfo* method);
// 0x5ad0090
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad00a0: test rbx, rbx
// asm:   0x5ad00a3: je 0x5ad00eb
// asm:   0x5ad00a5: test rbx, rbx
// asm:   0x5ad00aa: jmp 0x5ad0166

void CustomLogic_CustomLogicGameBuiltin__Debug
               (CustomLogic_CustomLogicGameBuiltin_o *__this,Il2CppObject *message,MethodInfo *method)

{
  bool showInChat;
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  System_String_o *message_00;
  
  if (Il2CppMethodInitialized_07546d35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_07546d35 = '\x01';
  }
  if (message == (Il2CppObject *)0x0) {
    message = (Il2CppObject *)"null";
  }
  if ((System_String_o *)message != (System_String_o *)0x0) {
    message_00 = (*(((System_String_o *)message)->klass->vtable)._3_ToString.methodPtr)
                           (message,(((System_String_o *)message)->klass->vtable)._3_ToString.method);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).ChatCLErrors, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
      showInChat = (pSVar2->fields)._value;
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      ApplicationManagers_DebugConsole__LogCustomLogic(message_00,showInChat,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$Print
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__Print (CustomLogic_CustomLogicGameBuiltin_o* __this, Il2CppObject* message, const MethodInfo* method);
// 0x5ad0170
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad017d: test rbx, rbx
// asm:   0x5ad0180: je 0x5ad0213

void CustomLogic_CustomLogicGameBuiltin__Print
               (CustomLogic_CustomLogicGameBuiltin_o *__this,Il2CppObject *message,MethodInfo *method)

{
  System_String_o *message_00;
  
  if (Il2CppMethodInitialized_07546d36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_07546d36 = '\x01';
  }
  if (message == (Il2CppObject *)0x0) {
    message = (Il2CppObject *)"null";
  }
  else {
  }
  if ((System_String_o *)message == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  message_00 = (*(((System_String_o *)message)->klass->vtable)._3_ToString.methodPtr)
                         (message,(((System_String_o *)message)->klass->vtable)._3_ToString.method);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__AddLine
            (message_00,3,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$PrintAll
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__PrintAll (CustomLogic_CustomLogicGameBuiltin_o* __this, Il2CppObject* message, const MethodInfo* method);
// 0x5ad0230
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad023d: test rbx, rbx
// asm:   0x5ad0240: je 0x5ad02a9

void CustomLogic_CustomLogicGameBuiltin__PrintAll
               (CustomLogic_CustomLogicGameBuiltin_o *__this,Il2CppObject *message,MethodInfo *method)

{
  System_String_o *message_00;
  
  if (Il2CppMethodInitialized_07546d37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_07546d37 = '\x01';
  }
  if (message == (Il2CppObject *)0x0) {
    message = (Il2CppObject *)"null";
  }
  else {
  }
  if ((System_String_o *)message == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  message_00 = (*(((System_String_o *)message)->klass->vtable)._3_ToString.methodPtr)
                         (message,(((System_String_o *)message)->klass->vtable)._3_ToString.method);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__SendChatAll(message_00,3,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$GetGeneralSetting
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin__GetGeneralSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, const MethodInfo* method);
// 0x5ad02c0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin__GetGeneralSetting
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Settings_BaseSetting_o *__this_01;
  System_Type_o *__this_02;
  System_Reflection_PropertyInfo_o *__this_03;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_07546d38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    Il2CppMethodInitialized_07546d38 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_00,(Il2CppObject *)settingName,
                           (MethodInfo_4AAD450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    if (__this_01 != (Settings_BaseSetting_o *)0x0) {
      __this_02 = System_Object__GetType((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      if (__this_02 != (System_Type_o *)0x0) {
        __this_03 = System_Type__GetProperty(__this_02,"Value",(MethodInfo *)0x0);
        if (__this_03 != (System_Reflection_PropertyInfo_o *)0x0) {
          pIVar3 = System_Reflection_PropertyInfo__GetValue
                             (__this_03,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
          return pIVar3;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$GetTitanSetting
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin__GetTitanSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, const MethodInfo* method);
// 0x5ad0380

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin__GetTitanSetting
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Settings_BaseSetting_o *__this_01;
  System_Type_o *__this_02;
  System_Reflection_PropertyInfo_o *__this_03;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_07546d39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    Il2CppMethodInitialized_07546d39 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_00,(Il2CppObject *)settingName,
                           (MethodInfo_4AAD450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    if (__this_01 != (Settings_BaseSetting_o *)0x0) {
      __this_02 = System_Object__GetType((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      if (__this_02 != (System_Type_o *)0x0) {
        __this_03 = System_Type__GetProperty(__this_02,"Value",(MethodInfo *)0x0);
        if (__this_03 != (System_Reflection_PropertyInfo_o *)0x0) {
          pIVar3 = System_Reflection_PropertyInfo__GetValue
                             (__this_03,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
          return pIVar3;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$GetMiscSetting
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin__GetMiscSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, const MethodInfo* method);
// 0x5ad0440

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin__GetMiscSetting
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Settings_BaseSetting_o *__this_01;
  System_Type_o *__this_02;
  System_Reflection_PropertyInfo_o *__this_03;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_07546d3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    Il2CppMethodInitialized_07546d3a = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_00,(Il2CppObject *)settingName,
                           (MethodInfo_4AAD450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    if (__this_01 != (Settings_BaseSetting_o *)0x0) {
      __this_02 = System_Object__GetType((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      if (__this_02 != (System_Type_o *)0x0) {
        __this_03 = System_Type__GetProperty(__this_02,"Value",(MethodInfo *)0x0);
        if (__this_03 != (System_Reflection_PropertyInfo_o *)0x0) {
          pIVar3 = System_Reflection_PropertyInfo__GetValue
                             (__this_03,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
          return pIVar3;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SetPreloadGeneralSetting
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__SetPreloadGeneralSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, Il2CppObject* value, const MethodInfo* method);
// 0x5ad0500

bool CustomLogic_CustomLogicGameBuiltin__SetPreloadGeneralSetting
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,Il2CppObject *value,
               MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar3;
  MethodInfo *method_00;
  Settings_BaseSetting_o *local_20;
  
  if (Il2CppMethodInitialized_07546d3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07546d3b = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar3) {
    return false;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
  if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings;
    if (Il2CppMethodInitialized_07546d5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
      Il2CppMethodInitialized_07546d5b = '\x01';
    }
    local_20 = (Settings_BaseSetting_o *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_00,(Il2CppObject *)settingName,(Il2CppObject **)&local_20,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
      if (bVar3) {
        bVar3 = CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue(local_20,value,method_00);
        return bVar3;
      }
      return false;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SetPreloadTitanSetting
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__SetPreloadTitanSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, Il2CppObject* value, const MethodInfo* method);
// 0x5ad0680

bool CustomLogic_CustomLogicGameBuiltin__SetPreloadTitanSetting
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,Il2CppObject *value,
               MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar3;
  MethodInfo *method_00;
  Settings_BaseSetting_o *local_20;
  
  if (Il2CppMethodInitialized_07546d3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07546d3c = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar3) {
    return false;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
  if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings;
    if (Il2CppMethodInitialized_07546d5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
      Il2CppMethodInitialized_07546d5b = '\x01';
    }
    local_20 = (Settings_BaseSetting_o *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_00,(Il2CppObject *)settingName,(Il2CppObject **)&local_20,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
      if (bVar3) {
        bVar3 = CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue(local_20,value,method_00);
        return bVar3;
      }
      return false;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SetPreloadMiscSetting
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__SetPreloadMiscSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, Il2CppObject* value, const MethodInfo* method);
// 0x5ad0780

bool CustomLogic_CustomLogicGameBuiltin__SetPreloadMiscSetting
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,Il2CppObject *value,
               MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar3;
  MethodInfo *method_00;
  Settings_BaseSetting_o *local_20;
  
  if (Il2CppMethodInitialized_07546d3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07546d3d = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar3) {
    return false;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
  if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings;
    if (Il2CppMethodInitialized_07546d5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
      Il2CppMethodInitialized_07546d5b = '\x01';
    }
    local_20 = (Settings_BaseSetting_o *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_00,(Il2CppObject *)settingName,(Il2CppObject **)&local_20,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
      if (bVar3) {
        bVar3 = CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue(local_20,value,method_00);
        return bVar3;
      }
      return false;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SetPreloadModeSetting
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__SetPreloadModeSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, Il2CppObject* value, const MethodInfo* method);
// 0x5ad0880

bool CustomLogic_CustomLogicGameBuiltin__SetPreloadModeSetting
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,Il2CppObject *value,
               MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameModeSettings_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar3;
  bool bVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Settings_BaseSetting_o *local_20;
  
  if (Il2CppMethodInitialized_07546d3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07546d3e = '\x01';
  }
  local_20 = (Settings_BaseSetting_o *)0x0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar4 = false;
  method_01 = (MethodInfo *)0x0;
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar3) {
    CustomLogic_CustomLogicGameBuiltin__EnsurePreloadSelectionsAndModeSettings(method_01);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
    if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
        (pSVar2 = (pSVar1->fields).Mode, pSVar2 == (Settings_InGameModeSettings_o *)0x0)) ||
       (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).Current,
       __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      ThrowNullReferenceException();
    }
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)settingName,(Il2CppObject **)&local_20,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    if (bVar3) {
      bVar4 = CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue(local_20,value,method_00);
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}


// CustomLogic.CustomLogicGameBuiltin$$SetPreloadMap
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__SetPreloadMap (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* mapCategory, System_String_o* mapName, const MethodInfo* method);
// 0x5ad13a0

bool CustomLogic_CustomLogicGameBuiltin__SetPreloadMap
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *mapCategory,
               System_String_o *mapName,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *a;
  bool bVar4;
  bool bVar5;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546d3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07546d3f = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar4) {
    return bVar4;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
  if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_InGameGeneralSettings_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).GameMode, pSVar3 == (Settings_StringSetting_o *)0x0)) goto label_05ad154d;
  a = (pSVar3->fields)._value;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  bVar5 = System_String__op_Equality
                    (a,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,(MethodInfo *)0x0);
  if (bVar5) {
    pSVar3 = (pSVar2->fields).MapCategory;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_05ad154d;
    bVar5 = System_String__op_Inequality((pSVar3->fields)._value,mapCategory,(MethodInfo *)0x0);
    if (!bVar5) {
      pSVar3 = (pSVar2->fields).MapName;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_05ad154d;
      bVar5 = System_String__op_Inequality((pSVar3->fields)._value,mapName,(MethodInfo *)0x0);
      if (!bVar5) goto label_05ad1507;
    }
    pSVar3 = (pSVar2->fields).PrevGameMode;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_05ad154d;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
label_05ad1507:
  pSVar3 = (pSVar2->fields).MapCategory;
  if (pSVar3 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)mapCategory,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    method_00 = (MethodInfo *)(pSVar2->fields).MapName;
    if (method_00 != (MethodInfo *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)method_00,(Il2CppObject *)mapName,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      CustomLogic_CustomLogicGameBuiltin__EnsurePreloadSelectionsAndModeSettings(method_00);
      return bVar4;
    }
  }
label_05ad154d:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SetPreloadGameMode
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__SetPreloadGameMode (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* gameMode, const MethodInfo* method);
// 0x5ad1560

bool CustomLogic_CustomLogicGameBuiltin__SetPreloadGameMode
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *gameMode,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  bool bVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546d40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07546d40 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar3) {
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
    if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
        (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_InGameGeneralSettings_o *)0x0)) ||
       (method_00 = (MethodInfo *)(pSVar2->fields).GameMode, method_00 == (MethodInfo *)0x0)) {
      ThrowNullReferenceException();
    }
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)method_00,(Il2CppObject *)gameMode,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    CustomLogic_CustomLogicGameBuiltin__EnsurePreloadSelectionsAndModeSettings(method_00);
  }
  return bVar3;
}


// CustomLogic.CustomLogicGameBuiltin$$LoadPreloadPreset
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__LoadPreloadPreset (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* presetName, const MethodInfo* method);
// 0x5ad1620
// eh: try 0x5ad1784..0x5ad187a -> pad 0x5ad1882 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ad189c..0x5ad18a1 -> pad 0x5ad18ca cleanup
// eh: try 0x5ad18cd..0x5ad18d7 -> pad 0x5ad18df catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad187a: jmp 0x5ad1884
// asm:   0x5ad187c: jmp 0x5ad1884
// asm:   0x5ad187e: jmp 0x5ad1884
// asm:   0x5ad1880: jmp 0x5ad1884
// asm:   0x5ad1882: jmp 0x5ad1884
// asm:   0x5ad1884: mov rbx, rax
// asm:   0x5ad1887: cmp edx, 1
// asm:   0x5ad188a: jne 0x5ad18cd
// asm:   0x5ad188c: mov rdi, rbx
// asm:   0x5ad188f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ad1894: mov rbx, qword ptr [rax]
// asm:   0x5ad1897: mov qword ptr [rsp + 8], rbx
// asm:   0x5ad189c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ad18a1: lea rax, [rip + 0x17bbf00]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x5ad18a8: mov rsi, qword ptr [rax]
// asm:   0x5ad18ab: lea rdi, [rsp + 0x20]
// asm:   0x5ad18b0: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5ad18b5: xor ebp, ebp
// asm:   0x5ad18b7: mov r14d, 0
// asm:   0x5ad18bd: test rbx, rbx
// asm:   0x5ad18c0: je 0x5ad1843
// asm:   0x5ad18c2: mov rdi, rbx
// asm:   0x5ad18c5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ad18ca: mov rbx, rax
// asm:   0x5ad18cd: lea rdi, [rsp + 8]
// asm:   0x5ad18d2: call 0x2fd60a0  ; il2cpp_runtime_helper_02fd60a0()
// asm:   0x5ad18d7: mov rdi, rbx
// asm:   0x5ad18da: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ad18df: mov rdi, rax
// asm:   0x5ad18e2: call 0x2ab61e0  ; __clang_call_terminate()

bool CustomLogic_CustomLogicGameBuiltin__LoadPreloadPreset
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *presetName,MethodInfo *method)

{
  byte bVar1;
  Settings_InGameSettings_o *pSVar2;
  Settings_SetSettingsContainer_InGameSet__o *pSVar3;
  Settings_ListSetting_T__o *__this_00;
  Settings_InGameSet_o *pSVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  bool bVar7;
  System_Collections_Generic_List_BaseSetting__o *__this_01;
  int iVar8;
  undefined1 local_60 [16];
  Settings_BaseSetting_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_07546d41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_InGameSet_GetItems);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07546d41 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar6) {
    return false;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
  if ((((pSVar2 == (Settings_InGameSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).InGameSets, pSVar3 == (Settings_SetSettingsContainer_InGameSet__o *)0x0)) ||
      (__this_00 = (pSVar3->fields).Sets, __this_00 == (Settings_ListSetting_T__o *)0x0)) ||
     (__this_01 = Settings_ListSetting_object___GetItems
                            (__this_00,
                             (MethodInfo_515DED0 *)MethodInfo_Settings_ListSetting_InGameSet_GetItems),
     __this_01 == (System_Collections_Generic_List_BaseSetting__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
             (System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
  local_48.fields._current = (Il2CppObject *)local_50;
  local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
  local_48.fields._index = local_60._8_4_;
  local_48.fields._version = local_60._12_4_;
  local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_60._8_8_ = &local_48;
  do {
    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
    pIVar5 = local_48.fields._current;
    if (!bVar6) {
      iVar8 = 6;
      goto label_05ad182f;
    }
    if ((Settings_BaseSetting_o *)local_48.fields._current == (Settings_BaseSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Settings_InGameSet->_2).typeHierarchyDepth;
    if (((((Settings_BaseSetting_c *)(local_48.fields._current)->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((Settings_BaseSetting_c *)(local_48.fields._current)->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_InGameSet)) {
      il2cpp_codegen_raise_invalid_cast_exception(local_48.fields._current);
    }
    if (((Settings_BaseSetting_o *)((long)local_48.fields._current + 0x30))->klass ==
        (Settings_BaseSetting_c *)0x0) {
      ThrowNullReferenceException();
    }
    bVar7 = System_String__Equals_52ffe30
                      ((((Settings_BaseSetting_o *)((long)local_48.fields._current + 0x30))->klass->_1).
                       byval_arg.data,presetName,5,(MethodInfo *)0x0);
  } while (!bVar7);
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
  if (pSVar4 == (Settings_InGameSet_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar8 = 5;
  (*(pSVar4->klass->vtable)._10_Copy.methodPtr)
            (pSVar4,(Settings_BaseSetting_o *)pIVar5,(pSVar4->klass->vtable)._10_Copy.method);
label_05ad182f:
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&local_48,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
  return iVar8 == 5 && bVar6;
}


// CustomLogic.CustomLogicGameBuiltin$$RestartWithPreloadSettings
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__RestartWithPreloadSettings (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5ad18f0

bool CustomLogic_CustomLogicGameBuiltin__RestartWithPreloadSettings
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07546d42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546d42 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    GameManagers_InGameManager__RestartGame((MethodInfo *)0x0);
  }
  return bVar1;
}


// CustomLogic.CustomLogicGameBuiltin$$End
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__End (CustomLogic_CustomLogicGameBuiltin_o* __this, float delay, const MethodInfo* method);
// 0x5ad1970
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad19a6: jmp 0x5ad1aaf

void CustomLogic_CustomLogicGameBuiltin__End
               (CustomLogic_CustomLogicGameBuiltin_o *__this,float delay,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  float local_1c;
  
  if (Il2CppMethodInitialized_07546d43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"EndGameRPC");
    Il2CppMethodInitialized_07546d43 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (!bVar2) {
    return;
  }
  __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  local_1c = delay;
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556740,&local_1c);
  if (parameters != (System_Object_array *)0x0) {
    if ((pIVar3 != (Il2CppObject *)0x0) &&
       (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
       pIVar4 == (Il2CppObject *)0x0)) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = pIVar3;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"EndGameRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$FindCharacterByViewID
// il2cpp: CustomLogic_CustomLogicCharacterBuiltin_o* CustomLogic_CustomLogicGameBuiltin__FindCharacterByViewID (CustomLogic_CustomLogicGameBuiltin_o* __this, int32_t viewID, const MethodInfo* method);
// 0x5ad1ae0

CustomLogic_CustomLogicCharacterBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__FindCharacterByViewID
          (CustomLogic_CustomLogicGameBuiltin_o *__this,int32_t viewID,MethodInfo *method)

{
  bool bVar1;
  Characters_BaseCharacter_o *character;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546d44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07546d44 = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  character = Utility_Util__FindCharacterByViewId(viewID,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (character == (Characters_BaseCharacter_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((character->fields).Dead == false) {
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        pCVar2 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
        return pCVar2;
      }
      pCVar2 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
      return pCVar2;
    }
  }
  return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitan
// il2cpp: CustomLogic_CustomLogicTitanBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnTitan (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, const MethodInfo* method);
// 0x5ad1bb0

CustomLogic_CustomLogicTitanBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnTitan
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  bool bVar2;
  Characters_BasicTitan_o *titan;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_07546d45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546d45 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  __this_01 = (CustomLogic_CustomLogicTitanBuiltin_o *)0x0;
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar2) {
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    __this_00 = (GameManagers_InGameManager_o *)
                TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    titan = GameManagers_InGameManager__SpawnAITitan(__this_00,type,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
    CustomLogic_CustomLogicTitanBuiltin___ctor(__this_01,titan,(MethodInfo *)0x0);
  }
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitanAt
// il2cpp: CustomLogic_CustomLogicTitanBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnTitanAt (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x5ad1cc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad1de7: test r15, r15

CustomLogic_CustomLogicTitanBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnTitanAt
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,
          CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  bool bVar2;
  Characters_BasicTitan_o *titan;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_07546d46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546d46 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar2) {
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    __this_00 = (GameManagers_InGameManager_o *)
                TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        titan = GameManagers_InGameManager__SpawnAITitanAt
                          (__this_00,type,(UnityEngine_Vector3_o)(position->fields).Value.fields,rotationY,
                           (MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
        CustomLogic_CustomLogicTitanBuiltin___ctor(__this_01,titan,(MethodInfo *)0x0);
        return __this_01;
      }
    }
    ThrowNullReferenceException();
  }
  return (CustomLogic_CustomLogicTitanBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnTitans (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, int32_t count, const MethodInfo* method);
// 0x5ad1df0
// eh: try 0x5ad1fff..0x5ad2211 -> pad 0x5ad222f (+7 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5ad2247..0x5ad224c -> pad 0x5ad2251 cleanup
// eh: try 0x5ad2254..0x5ad225e -> pad 0x5ad2266 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad1fdb: lea r13, [rip + 0x17a7416]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5ad1fe2: lea r14, [rip + 0x17c3c17]  ; MethodInfo_System_Collections_Generic_List_object_Add
// asm:   0x5ad1fe9: jmp 0x5ad2017
// asm:   0x5ad200a: mov rbp, qword ptr [rsp]
// asm:   0x5ad200e: test rbp, rbp
// asm:   0x5ad2011: je 0x5ad2202
// asm:   0x5ad221b: mov rdi, rbx
// asm:   0x5ad221e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ad2223: jmp 0x5ad222f
// asm:   0x5ad2225: jmp 0x5ad222f
// asm:   0x5ad2227: jmp 0x5ad222f
// asm:   0x5ad2229: jmp 0x5ad222f
// asm:   0x5ad222b: jmp 0x5ad222f
// asm:   0x5ad222d: jmp 0x5ad222f
// asm:   0x5ad222f: mov rbp, rax
// asm:   0x5ad2232: cmp edx, 1
// asm:   0x5ad2235: jne 0x5ad2254
// asm:   0x5ad2237: mov rdi, rbp
// asm:   0x5ad223a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ad223f: mov rbx, qword ptr [rax]
// asm:   0x5ad2242: mov qword ptr [rsp + 8], rbx
// asm:   0x5ad2247: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ad224c: jmp 0x5ad2176
// asm:   0x5ad2251: mov rbp, rax
// asm:   0x5ad2254: lea rdi, [rsp + 8]
// asm:   0x5ad2259: call 0x2fd60d0  ; il2cpp_runtime_helper_02fd60d0()
// asm:   0x5ad225e: mov rdi, rbp
// asm:   0x5ad2261: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ad2266: mov rdi, rax
// asm:   0x5ad2269: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnTitans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,int32_t count,MethodInfo *method
          )

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_InGameManager_o *__this_00;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar6;
  MethodInfo *pMVar7;
  bool bVar8;
  char cVar9;
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  Il2CppObject *pIVar10;
  VirtualInvokeData *pVVar11;
  Characters_BasicTitan_o *titan;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_03;
  ulong uVar12;
  long lVar13;
  Il2CppObject *pIStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  if (Il2CppMethodInitialized_07546d47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546d47 = '\x01';
  }
  pIStack_48 = (Il2CppObject *)0x0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar8) {
    return (CustomLogic_CustomLogicListBuiltin_o *)0x0;
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_02,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07546d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546d12 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pIVar10 = (Il2CppObject *)
              GameManagers_InGameManager__SpawnAITitans(__this_00,type,count,(MethodInfo *)0x0);
    if (pIVar10 != (Il2CppObject *)0x0) {
      pIVar4 = pIVar10->klass;
      uVar12 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar12 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_BasicTitan__c **)
               ((long)&pIVar5->interfaceType + lVar13) ==
              TypeInfo_System_Collections_Generic_IEnumerable_BasicTitan) {
            pVVar11 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
            goto label_05ad1fb1;
          }
          lVar13 = lVar13 + 0x10;
        } while (uVar12 * 0x10 != lVar13);
      }
      pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar10,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_BasicTitan,0
                          );
label_05ad1fb1:
      pIVar10 = (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
      puStack_38 = (undefined1 *)&pIStack_48;
      uStack_40 = 0;
      do {
        pIStack_48 = pIVar10;
        if (pIVar10 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar4 = pIVar10->klass;
        uVar12 = (ulong)(pIVar4->_2).interface_offsets_count;
        if (uVar12 != 0) {
          pIVar5 = (pIVar4->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(Il2CppClass **)((long)&pIVar5->interfaceType + lVar13) ==
                (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar11 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
              goto label_05ad2073;
            }
            lVar13 = lVar13 + 0x10;
          } while (uVar12 * 0x10 != lVar13);
        }
        pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                            (pIVar10,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05ad2073:
        cVar9 = (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
        pIVar10 = pIStack_48;
        if (cVar9 == '\0') {
          if (pIStack_48 == (Il2CppObject *)0x0) {
            return __this_02;
          }
          pIVar4 = pIStack_48->klass;
          uVar12 = (ulong)(pIVar4->_2).interface_offsets_count;
          if (uVar12 == 0) goto label_05ad21bf;
          pIVar5 = (pIVar4->_1).interfaceOffsets;
          lVar13 = 0;
          goto label_05ad21b0;
        }
        if (pIStack_48 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar4 = pIStack_48->klass;
        uVar12 = (ulong)(pIVar4->_2).interface_offsets_count;
        if (uVar12 != 0) {
          pIVar5 = (pIVar4->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_BasicTitan__c **)
                 ((long)&pIVar5->interfaceType + lVar13) ==
                TypeInfo_System_Collections_Generic_IEnumerator_BasicTitan) {
              pVVar11 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
              goto label_05ad20f3;
            }
            lVar13 = lVar13 + 0x10;
          } while (uVar12 * 0x10 != lVar13);
        }
        pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                            (pIStack_48,
                             (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_BasicTitan,0);
label_05ad20f3:
        titan = (Characters_BasicTitan_o *)(*pVVar11->methodPtr)(pIVar10,pVVar11->method);
        if (__this_02 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_01 = (__this_02->fields).List;
        __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
        CustomLogic_CustomLogicTitanBuiltin___ctor(__this_03,titan,(MethodInfo *)0x0);
        pMVar7 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
label_05ad21fd:
          ThrowNullReferenceException();
        }
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this_01->fields)._items;
        if (pSVar6 == (System_Object_array *)0x0) goto label_05ad21fd;
        uVar3 = (__this_01->fields)._size;
        if (uVar3 < (uint)pSVar6->max_length) {
          (__this_01->fields)._size = uVar3 + 1;
          pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_03;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
          pIVar10 = pIStack_48;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_01,(Il2CppObject *)__this_03,
                     (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
          pIVar10 = pIStack_48;
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
  while (lVar13 = lVar13 + 0x10, uVar12 * 0x10 != lVar13) {
label_05ad21b0:
    if (*(System_IDisposable_c **)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_System_IDisposable) {
      pVVar11 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
      goto label_05ad21dd;
    }
  }
label_05ad21bf:
  pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath(pIStack_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05ad21dd:
  (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
  return __this_02;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitansAsync
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnTitansAsync (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, int32_t count, const MethodInfo* method);
// 0x5ad2270

void CustomLogic_CustomLogicGameBuiltin__SpawnTitansAsync
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,int32_t count,
               MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  GameManagers_InGameManager_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07546d48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546d48 = '\x01';
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (bVar3) {
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    __this_00 = (GameManagers_InGameManager_o *)
                TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    GameManagers_InGameManager__SpawnAITitansAsync(__this_00,type,count,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitansAt
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnTitansAt (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, int32_t count, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x5ad2380
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad243e: lea r13, [rip + 0x17a784b]  ; TypeInfo_GameManagers_InGameManager
// asm:   0x5ad2445: jmp 0x5ad246f
// asm:   0x5ad25f4: jmp 0x5ad26aa

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnTitansAt
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,int32_t count,
          CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_InGameManager_o *pGVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar5;
  GameManagers_BaseGameManager_o *pGVar6;
  GameManagers_BaseGameManager_c *pGVar7;
  MethodInfo *pMVar8;
  bool bVar9;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  Characters_BasicTitan_o *pCVar10;
  CustomLogic_CustomLogicTitanBuiltin_o *pCVar11;
  
  if (Il2CppMethodInitialized_07546d49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546d49 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  __this_01 = (CustomLogic_CustomLogicListBuiltin_o *)0x0;
  bVar9 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar9) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
    if (0 < count) {
      if (position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        if (Il2CppMethodInitialized_07546d12 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
          Il2CppMethodInitialized_07546d12 = '\x01';
        }
        pGVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
        if (pGVar6 != (GameManagers_BaseGameManager_o *)0x0) {
          pGVar7 = pGVar6->klass;
          bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
          if (((pGVar7->_2).typeHierarchyDepth < bVar2) ||
             ((pGVar7->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_05ad26aa;
        }
      }
      else if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        if (Il2CppMethodInitialized_07546d12 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
          Il2CppMethodInitialized_07546d12 = '\x01';
        }
        pGVar4 = (GameManagers_InGameManager_o *)
                 TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
        if (pGVar4 != (GameManagers_InGameManager_o *)0x0) {
          bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
          if ((bVar2 <= (pGVar4->klass->_2).typeHierarchyDepth) &&
             ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
              (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
            pCVar10 = GameManagers_InGameManager__SpawnAITitanAt
                                (pGVar4,type,(UnityEngine_Vector3_o)(position->fields).Value.fields,rotationY,
                                 (MethodInfo *)0x0);
            pCVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
            CustomLogic_CustomLogicTitanBuiltin___ctor(pCVar11,pCVar10,(MethodInfo *)0x0);
            ThrowNullReferenceException();
          }
label_05ad26aa:
          il2cpp_codegen_raise_invalid_cast_exception();
        }
      }
      else {
        while( true ) {
          if (Il2CppMethodInitialized_07546d12 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
            Il2CppMethodInitialized_07546d12 = '\x01';
          }
          pGVar4 = (GameManagers_InGameManager_o *)
                   TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
          if (pGVar4 == (GameManagers_InGameManager_o *)0x0) break;
          bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
          if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
             ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_05ad26aa;
          pCVar10 = GameManagers_InGameManager__SpawnAITitanAt
                              (pGVar4,type,(UnityEngine_Vector3_o)(position->fields).Value.fields,rotationY,
                               (MethodInfo *)0x0);
          pCVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
          CustomLogic_CustomLogicTitanBuiltin___ctor(pCVar11,pCVar10,(MethodInfo *)0x0);
          pMVar8 = MethodInfo_System_Collections_Generic_List_object_Add;
          __this_00 = (__this_01->fields).List;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) break;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_00->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) break;
          uVar3 = (__this_00->fields)._size;
          if (uVar3 < (uint)pSVar5->max_length) {
            (__this_00->fields)._size = uVar3 + 1;
            pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pCVar11;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
            count = count + -1;
            if (count == 0) {
              return __this_01;
            }
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pCVar11,
                       (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
            count = count + -1;
            if (count == 0) {
              return __this_01;
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitansAtAsync
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnTitansAtAsync (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, int32_t count, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x5ad26b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad27e0: test rbp, rbp

void CustomLogic_CustomLogicGameBuiltin__SpawnTitansAtAsync
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,int32_t count,
               CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  GameManagers_InGameManager_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07546d4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546d4a = '\x01';
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (!bVar3) {
    return;
  }
  if (Il2CppMethodInitialized_07546d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546d12 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      GameManagers_InGameManager__SpawnAITitansAtAsync
                (__this_00,type,count,(UnityEngine_Vector3_o)(position->fields).Value.fields,rotationY,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnShifter
// il2cpp: CustomLogic_CustomLogicShifterBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnShifter (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, const MethodInfo* method);
// 0x5ad27f0

CustomLogic_CustomLogicShifterBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnShifter
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  bool bVar2;
  Characters_WallColossalShifter_o *shifter;
  System_String_o *b;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_07546d4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
    Il2CppMethodInitialized_07546d4b = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  __this_01 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0;
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar2) {
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    __this_00 = (GameManagers_InGameManager_o *)
                TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    shifter = (Characters_WallColossalShifter_o *)
              GameManagers_InGameManager__SpawnAIShifter(__this_00,type,(MethodInfo *)0x0);
    b = CustomLogic_CustomLogicShifterTypeEnum__get_WallColossal((MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(type,b,(MethodInfo *)0x0);
    if (bVar2) {
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
      if (shifter != (Characters_WallColossalShifter_o *)0x0) {
        bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
        if (((shifter->klass->_2).typeHierarchyDepth < bVar1) ||
           ((shifter->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
          il2cpp_codegen_raise_invalid_cast_exception(shifter);
        }
      }
      CustomLogic_CustomLogicWallColossalBuiltin___ctor(__this_01,shifter,(MethodInfo *)0x0);
    }
    else {
      __this_01 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
      CustomLogic_CustomLogicShifterBuiltin___ctor
                ((CustomLogic_CustomLogicShifterBuiltin_o *)__this_01,(Characters_BaseShifter_o *)shifter,
                 (MethodInfo *)0x0);
    }
  }
  return (CustomLogic_CustomLogicShifterBuiltin_o *)__this_01;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnHuman
// il2cpp: CustomLogic_CustomLogicHumanBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnHuman (CustomLogic_CustomLogicGameBuiltin_o* __this, int32_t costume, System_String_o* costumeName, System_String_o* loadout, const MethodInfo* method);
// 0x5ad2990

CustomLogic_CustomLogicHumanBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnHuman
          (CustomLogic_CustomLogicGameBuiltin_o *__this,int32_t costume,System_String_o *costumeName,
          System_String_o *loadout,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  bool bVar2;
  Characters_Human_o *human;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_07546d4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546d4c = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  __this_01 = (CustomLogic_CustomLogicHumanBuiltin_o *)0x0;
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar2) {
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    __this_00 = (GameManagers_InGameManager_o *)
                TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    human = GameManagers_InGameManager__SpawnAIHuman(__this_00,costume,costumeName,loadout,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
    CustomLogic_CustomLogicHumanBuiltin___ctor(__this_01,human,(MethodInfo *)0x0);
  }
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnHumanAt
// il2cpp: CustomLogic_CustomLogicHumanBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnHumanAt (CustomLogic_CustomLogicGameBuiltin_o* __this, int32_t costume, System_String_o* costumeName, System_String_o* loadout, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x5ad2ab0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad2bec: test rbx, rbx

CustomLogic_CustomLogicHumanBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnHumanAt
          (CustomLogic_CustomLogicGameBuiltin_o *__this,int32_t costume,System_String_o *costumeName,
          System_String_o *loadout,CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,
          MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  bool bVar2;
  Characters_Human_o *human;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_07546d4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546d4d = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar2) {
    if (Il2CppMethodInitialized_07546d12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546d12 = '\x01';
    }
    __this_00 = (GameManagers_InGameManager_o *)
                TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        human = GameManagers_InGameManager__SpawnAIHumanAt
                          (__this_00,costume,costumeName,loadout,
                           (UnityEngine_Vector3_o)(position->fields).Value.fields,rotationY,(MethodInfo *)0x0)
        ;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
        CustomLogic_CustomLogicHumanBuiltin___ctor(__this_01,human,(MethodInfo *)0x0);
        return __this_01;
      }
    }
    ThrowNullReferenceException();
  }
  return (CustomLogic_CustomLogicHumanBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnShifterAt
// il2cpp: CustomLogic_CustomLogicShifterBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnShifterAt (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x5ad2c00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad2db7: test r15, r15

CustomLogic_CustomLogicShifterBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnShifterAt
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,
          CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  bool bVar2;
  Characters_WallColossalShifter_o *shifter;
  System_String_o *b;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_01;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_02;
  
  if (Il2CppMethodInitialized_07546d4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
    Il2CppMethodInitialized_07546d4e = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar2) {
    return (CustomLogic_CustomLogicShifterBuiltin_o *)0x0;
  }
  if (Il2CppMethodInitialized_07546d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546d12 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      shifter = (Characters_WallColossalShifter_o *)
                GameManagers_InGameManager__SpawnAIShifterAt
                          (__this_00,type,(UnityEngine_Vector3_o)(position->fields).Value.fields,rotationY,
                           (MethodInfo *)0x0);
      b = CustomLogic_CustomLogicShifterTypeEnum__get_WallColossal((MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(type,b,(MethodInfo *)0x0);
      if (!bVar2) {
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
        CustomLogic_CustomLogicShifterBuiltin___ctor
                  (__this_02,(Characters_BaseShifter_o *)shifter,(MethodInfo *)0x0);
        return __this_02;
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
      if (shifter != (Characters_WallColossalShifter_o *)0x0) {
        bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
        if (((shifter->klass->_2).typeHierarchyDepth < bVar1) ||
           ((shifter->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
          il2cpp_codegen_raise_invalid_cast_exception(shifter);
        }
      }
      CustomLogic_CustomLogicWallColossalBuiltin___ctor(__this_01,shifter,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicShifterBuiltin_o *)__this_01;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnProjectile
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnProjectile (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* projectileName, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, CustomLogic_CustomLogicVector3Builtin_o* velocity, CustomLogic_CustomLogicVector3Builtin_o* gravity, float liveTime, System_String_o* team, Il2CppObject* extraParam, Il2CppObject* extraParam2, const MethodInfo* method);
// 0x5ad2dd0

void CustomLogic_CustomLogicGameBuiltin__SpawnProjectile
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *projectileName,
               CustomLogic_CustomLogicVector3Builtin_o *position,
               CustomLogic_CustomLogicVector3Builtin_o *rotation,
               CustomLogic_CustomLogicVector3Builtin_o *velocity,
               CustomLogic_CustomLogicVector3Builtin_o *gravity,float liveTime,System_String_o *team,
               Il2CppObject *extraParam,Il2CppObject *extraParam2,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Utility_Color255_o *pUVar5;
  bool bVar6;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar7;
  System_Object_array *settings;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  Il2CppObject **targetAddress;
  float fVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar11;
  UnityEngine_Quaternion_o rotation_00;
  UnityEngine_Vector3_o position_00;
  undefined1 local_99;
  UnityEngine_Vector3_Fields local_98;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  float local_70;
  undefined4 local_6c;
  undefined1 local_68 [16];
  System_String_o *local_58;
  CustomLogic_CustomLogicVector3Builtin_o *local_50;
  undefined1 local_48 [16];
  
  local_70 = liveTime;
  local_50 = gravity;
  if (Il2CppMethodInitialized_07546d4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_07546d4f = '\x01';
  }
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  bVar6 = System_String__op_Equality
                    (projectileName,TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Thunderspear,
                     (MethodInfo *)0x0);
  if (bVar6) {
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       (extraParam,
                        (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    local_88._0_4_ = fVar10;
    pCVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (extraParam2,
                        (MethodInfo_34BDE00 *)
                        MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if (pCVar7 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_05ad331e;
    pUVar5 = (pCVar7->fields).Value;
    local_58 = projectileName;
    if (pUVar5 == (Utility_Color255_o *)0x0) goto label_05ad331e;
    UVar11 = Utility_Color255__ToColor(pUVar5,(MethodInfo *)0x0);
    local_68._8_4_ = extraout_XMM0_Dc;
    local_68._0_8_ = UVar11.fields._0_8_;
    local_68._12_4_ = extraout_XMM0_Dd;
    local_48._8_4_ = in_XMM1_Dc;
    local_48._0_8_ = UVar11.fields._8_8_;
    local_48._12_4_ = in_XMM1_Dd;
    settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    local_6c = local_88._0_4_;
    pIVar8 = il2cpp_vm_Object_Box(g_data_07556740,&local_6c);
    if (settings == (System_Object_array *)0x0) goto label_05ad331e;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((settings->obj).klass)->_1).element_class);
      if (pIVar9 == (Il2CppObject *)0x0) goto label_05ad3328;
    }
    if ((int)settings->max_length == 0) goto label_05ad3323;
    settings->m_Items[0] = pIVar8;
    Il2CppCodeGenWriteBarrier(settings->m_Items);
    local_98.z = local_48._0_4_;
    uStack_8c = local_48._4_4_;
    local_98._0_8_ = local_68._0_8_;
    pIVar8 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Color,&local_98);
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((settings->obj).klass)->_1).element_class);
      if (pIVar9 == (Il2CppObject *)0x0) goto label_05ad3328;
    }
    if ((settings->max_length & 0xfffffffe) == 0) goto label_05ad3323;
    settings->m_Items[1] = pIVar8;
    Il2CppCodeGenWriteBarrier(settings->m_Items + 1);
    local_99 = 0;
    pIVar8 = il2cpp_vm_Object_Box(g_data_075566f0,&local_99);
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((settings->obj).klass)->_1).element_class);
      if (pIVar9 == (Il2CppObject *)0x0) goto label_05ad3328;
    }
    if ((uint)settings->max_length < 3) goto label_05ad3323;
    targetAddress = settings->m_Items + 2;
    settings->m_Items[2] = pIVar8;
    projectileName = local_58;
label_05ad324e:
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  else {
    if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    }
    bVar6 = System_String__op_Equality
                      (projectileName,TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Flare,
                       (MethodInfo *)0x0);
    if (!bVar6) {
      if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
      }
      bVar6 = System_String__op_Equality
                        (projectileName,TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock1,
                         (MethodInfo *)0x0);
      if (!bVar6) {
        if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
        }
        settings = (System_Object_array *)0x0;
        bVar6 = System_String__op_Equality
                          (projectileName,TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock2,
                           (MethodInfo *)0x0);
        if (!bVar6) goto label_05ad3256;
      }
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (extraParam,
                          (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      local_88._0_4_ = fVar10;
      settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_98.x = (float)local_88._0_4_;
      pIVar8 = il2cpp_vm_Object_Box(g_data_07556740,&local_98);
      if (settings == (System_Object_array *)0x0) goto label_05ad331e;
      if (pIVar8 != (Il2CppObject *)0x0) {
        pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((settings->obj).klass)->_1).element_class);
        if (pIVar9 == (Il2CppObject *)0x0) {
label_05ad3328:
          pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
        }
      }
      if ((int)settings->max_length == 0) {
label_05ad3323:
        ThrowIndexOutOfRangeException();
      }
      targetAddress = settings->m_Items;
      settings->m_Items[0] = pIVar8;
      goto label_05ad324e;
    }
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (extraParam,
                        (MethodInfo_34BDE00 *)
                        MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if ((pCVar7 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
       (pUVar5 = (pCVar7->fields).Value, pUVar5 == (Utility_Color255_o *)0x0)) goto label_05ad331e;
    UVar11 = Utility_Color255__ToColor(pUVar5,(MethodInfo *)0x0);
    local_88._8_4_ = extraout_XMM0_Dc_00;
    local_88._0_8_ = UVar11.fields._0_8_;
    local_88._12_4_ = extraout_XMM0_Dd_00;
    local_68._8_4_ = in_XMM1_Dc;
    local_68._0_8_ = UVar11.fields._8_8_;
    local_68._12_4_ = in_XMM1_Dd;
    settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_98.z = local_68._0_4_;
    uStack_8c = local_68._4_4_;
    local_98._0_8_ = local_88._0_8_;
    pIVar8 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Color,&local_98);
    if (settings == (System_Object_array *)0x0) goto label_05ad331e;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((settings->obj).klass)->_1).element_class);
      if (pIVar9 == (Il2CppObject *)0x0) goto label_05ad3328;
    }
    if ((int)settings->max_length == 0) goto label_05ad3323;
    settings->m_Items[0] = pIVar8;
    Il2CppCodeGenWriteBarrier(settings->m_Items);
  }
label_05ad3256:
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (rotation != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1 = (position->fields).Value.fields.x;
    uVar3 = (position->fields).Value.fields.y;
    local_88._4_4_ = uVar3;
    local_88._0_4_ = uVar1;
    local_88._8_8_ = 0;
    local_68._0_4_ = (position->fields).Value.fields.z;
    uVar2 = (rotation->fields).Value.fields.x;
    uVar4 = (rotation->fields).Value.fields.y;
    local_98.z = (rotation->fields).Value.fields.z * 0.017453292;
    local_98.y = (float)uVar4 * 0.017453292;
    local_98.x = (float)uVar2 * 0.017453292;
    rotation_00 = UnityEngine_Quaternion__Internal_FromEulerRad
                            ((UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
    if ((velocity != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (local_50 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
      position_00.fields.z = (float)local_68._0_4_;
      position_00.fields.x = (float)local_88._0_4_;
      position_00.fields.y = (float)local_88._4_4_;
      Projectiles_ProjectileSpawner__Spawn
                (projectileName,position_00,rotation_00,(UnityEngine_Vector3_o)(velocity->fields).Value.fields
                 ,(UnityEngine_Vector3_o)(local_50->fields).Value.fields,local_70,-1,team,settings,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_05ad331e:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnProjectileWithOwner
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnProjectileWithOwner (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* projectileName, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, CustomLogic_CustomLogicVector3Builtin_o* velocity, CustomLogic_CustomLogicVector3Builtin_o* gravity, float liveTime, CustomLogic_CustomLogicCharacterBuiltin_o* owner, Il2CppObject* extraParam, Il2CppObject* extraParam2, const MethodInfo* method);
// 0x5ad3340

void CustomLogic_CustomLogicGameBuiltin__SpawnProjectileWithOwner
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *projectileName,
               CustomLogic_CustomLogicVector3Builtin_o *position,
               CustomLogic_CustomLogicVector3Builtin_o *rotation,
               CustomLogic_CustomLogicVector3Builtin_o *velocity,
               CustomLogic_CustomLogicVector3Builtin_o *gravity,float liveTime,
               CustomLogic_CustomLogicCharacterBuiltin_o *owner,Il2CppObject *extraParam,
               Il2CppObject *extraParam2,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Utility_Color255_o *pUVar5;
  Characters_BaseCharacter_o *pCVar6;
  bool bVar7;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar8;
  System_Object_array *settings;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  Photon_Pun_PhotonView_o *pPVar11;
  Il2CppObject **targetAddress;
  float fVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 in_XMM1_Dc;
  undefined4 uVar13;
  undefined4 in_XMM1_Dd;
  undefined4 uVar14;
  UnityEngine_Color_o UVar15;
  UnityEngine_Quaternion_o UVar16;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o gravity_00;
  UnityEngine_Vector3_o velocity_00;
  undefined1 local_d9;
  UnityEngine_Vector3_Fields local_d8;
  undefined4 uStack_cc;
  undefined1 local_c8 [16];
  CustomLogic_CustomLogicVector3Builtin_o *local_b0;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  Characters_BaseCharacter_o *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_b0 = velocity;
  local_a0 = liveTime;
  if (Il2CppMethodInitialized_07546d50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_07546d50 = '\x01';
  }
  if (owner == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) goto label_05ad392a;
  local_60 = (owner->fields).Character;
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  bVar7 = System_String__op_Equality
                    (projectileName,TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Thunderspear,
                     (MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       (extraParam,
                        (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    local_c8._0_4_ = fVar12;
    pCVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (extraParam2,
                        (MethodInfo_34BDE00 *)
                        MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if (pCVar8 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_05ad392a;
    local_88._0_8_ = gravity;
    pUVar5 = (pCVar8->fields).Value;
    if (pUVar5 == (Utility_Color255_o *)0x0) goto label_05ad392a;
    UVar15 = Utility_Color255__ToColor(pUVar5,(MethodInfo *)0x0);
    local_98._8_4_ = extraout_XMM0_Dc;
    local_98._0_8_ = UVar15.fields._0_8_;
    local_98._12_4_ = extraout_XMM0_Dd;
    local_78._8_4_ = in_XMM1_Dc;
    local_78._0_8_ = UVar15.fields._8_8_;
    local_78._12_4_ = in_XMM1_Dd;
    settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    local_9c = local_c8._0_4_;
    pIVar9 = il2cpp_vm_Object_Box(g_data_07556740,&local_9c);
    if (settings == (System_Object_array *)0x0) goto label_05ad392a;
    if (pIVar9 != (Il2CppObject *)0x0) {
      pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((settings->obj).klass)->_1).element_class);
      if (pIVar10 == (Il2CppObject *)0x0) goto label_05ad3934;
    }
    if ((int)settings->max_length == 0) goto label_05ad392f;
    settings->m_Items[0] = pIVar9;
    Il2CppCodeGenWriteBarrier(settings->m_Items);
    local_d8.z = local_78._0_4_;
    uStack_cc = local_78._4_4_;
    local_d8._0_8_ = local_98._0_8_;
    pIVar9 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Color,&local_d8);
    if (pIVar9 != (Il2CppObject *)0x0) {
      pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((settings->obj).klass)->_1).element_class);
      if (pIVar10 == (Il2CppObject *)0x0) goto label_05ad3934;
    }
    if ((settings->max_length & 0xfffffffe) == 0) goto label_05ad392f;
    settings->m_Items[1] = pIVar9;
    Il2CppCodeGenWriteBarrier(settings->m_Items + 1);
    local_d9 = 0;
    pIVar9 = il2cpp_vm_Object_Box(g_data_075566f0,&local_d9);
    if (pIVar9 != (Il2CppObject *)0x0) {
      pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((settings->obj).klass)->_1).element_class);
      if (pIVar10 == (Il2CppObject *)0x0) goto label_05ad3934;
    }
    if ((uint)settings->max_length < 3) goto label_05ad392f;
    targetAddress = settings->m_Items + 2;
    settings->m_Items[2] = pIVar9;
    gravity = (CustomLogic_CustomLogicVector3Builtin_o *)local_88._0_8_;
label_05ad37eb:
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  else {
    if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    }
    bVar7 = System_String__op_Equality
                      (projectileName,TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Flare,
                       (MethodInfo *)0x0);
    if (!bVar7) {
      if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
      }
      bVar7 = System_String__op_Equality
                        (projectileName,TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock1,
                         (MethodInfo *)0x0);
      if (!bVar7) {
        if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
        }
        settings = (System_Object_array *)0x0;
        bVar7 = System_String__op_Equality
                          (projectileName,TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock2,
                           (MethodInfo *)0x0);
        if (!bVar7) goto label_05ad37f3;
      }
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (extraParam,
                          (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      local_c8._0_4_ = fVar12;
      settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_d8.x = (float)local_c8._0_4_;
      pIVar9 = il2cpp_vm_Object_Box(g_data_07556740,&local_d8);
      if (settings == (System_Object_array *)0x0) goto label_05ad392a;
      if (pIVar9 != (Il2CppObject *)0x0) {
        pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((settings->obj).klass)->_1).element_class);
        if (pIVar10 == (Il2CppObject *)0x0) {
label_05ad3934:
          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
        }
      }
      if ((int)settings->max_length == 0) {
label_05ad392f:
        ThrowIndexOutOfRangeException();
      }
      targetAddress = settings->m_Items;
      settings->m_Items[0] = pIVar9;
      goto label_05ad37eb;
    }
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (extraParam,
                        (MethodInfo_34BDE00 *)
                        MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if ((pCVar8 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
       (pUVar5 = (pCVar8->fields).Value, pUVar5 == (Utility_Color255_o *)0x0)) goto label_05ad392a;
    UVar15 = Utility_Color255__ToColor(pUVar5,(MethodInfo *)0x0);
    local_c8._8_4_ = extraout_XMM0_Dc_00;
    local_c8._0_8_ = UVar15.fields._0_8_;
    local_c8._12_4_ = extraout_XMM0_Dd_00;
    local_98._8_4_ = in_XMM1_Dc;
    local_98._0_8_ = UVar15.fields._8_8_;
    local_98._12_4_ = in_XMM1_Dd;
    settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_d8.z = local_98._0_4_;
    uStack_cc = local_98._4_4_;
    local_d8._0_8_ = local_c8._0_8_;
    pIVar9 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Color,&local_d8);
    if (settings == (System_Object_array *)0x0) goto label_05ad392a;
    if (pIVar9 != (Il2CppObject *)0x0) {
      pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((settings->obj).klass)->_1).element_class);
      if (pIVar10 == (Il2CppObject *)0x0) goto label_05ad3934;
    }
    if ((int)settings->max_length == 0) goto label_05ad392f;
    settings->m_Items[0] = pIVar9;
    Il2CppCodeGenWriteBarrier(settings->m_Items);
  }
label_05ad37f3:
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (rotation != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1 = (position->fields).Value.fields.x;
    uVar3 = (position->fields).Value.fields.y;
    local_c8._4_4_ = uVar3;
    local_c8._0_4_ = uVar1;
    local_c8._8_8_ = 0;
    local_98._0_4_ = (position->fields).Value.fields.z;
    uVar2 = (rotation->fields).Value.fields.x;
    uVar4 = (rotation->fields).Value.fields.y;
    uVar13 = 0;
    uVar14 = 0;
    local_d8.z = (rotation->fields).Value.fields.z * 0.017453292;
    local_d8.y = (float)uVar4 * 0.017453292;
    local_d8.x = (float)uVar2 * 0.017453292;
    UVar16 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
    pCVar6 = local_60;
    if ((local_b0 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (gravity != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
      local_88._8_4_ = uVar13;
      local_88._0_8_ = UVar16.fields._8_8_;
      local_88._12_4_ = uVar14;
      local_78._8_4_ = extraout_XMM0_Dc_01;
      local_78._0_8_ = UVar16.fields._0_8_;
      local_78._12_4_ = extraout_XMM0_Dd_01;
      if (local_60 != (Characters_BaseCharacter_o *)0x0) {
        local_48._0_4_ = (local_b0->fields).Value.fields.x;
        local_48._4_4_ = (local_b0->fields).Value.fields.y;
        uStack_40 = 0;
        local_b0 = (CustomLogic_CustomLogicVector3Builtin_o *)
                   CONCAT44(local_b0._4_4_,(local_b0->fields).Value.fields.z);
        local_58._0_4_ = (gravity->fields).Value.fields.x;
        local_58._4_4_ = (gravity->fields).Value.fields.y;
        uStack_50 = 0;
        local_a4 = (gravity->fields).Value.fields.z;
        pPVar11 = Photon_Pun_MonoBehaviourPun__get_photonView
                            ((Photon_Pun_MonoBehaviourPun_o *)local_60,(MethodInfo *)0x0);
        if (pPVar11 != (Photon_Pun_PhotonView_o *)0x0) {
          UVar16.fields.z = (float)local_88._0_4_;
          UVar16.fields.w = (float)local_88._4_4_;
          UVar16.fields.x = (float)local_78._0_4_;
          UVar16.fields.y = (float)local_78._4_4_;
          position_00.fields.z = (float)local_98._0_4_;
          position_00.fields.x = (float)local_c8._0_4_;
          position_00.fields.y = (float)local_c8._4_4_;
          gravity_00.fields.z = local_a4;
          gravity_00.fields.x = (float)(undefined4)local_58;
          gravity_00.fields.y = (float)local_58._4_4_;
          velocity_00.fields.z = local_b0._0_4_;
          velocity_00.fields.x = (float)(undefined4)local_48;
          velocity_00.fields.y = (float)local_48._4_4_;
          Projectiles_ProjectileSpawner__Spawn
                    (projectileName,position_00,UVar16,velocity_00,gravity_00,local_a0,
                     (pPVar11->fields).viewIdField,(pCVar6->fields).Team,settings,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_05ad392a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnEffect
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnEffect (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* effectName, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, float scale, CustomLogic_CustomLogicColorBuiltin_o* tsExplodeColor, System_String_o* tsKillSound, const MethodInfo* method);
// 0x5ad3950

void CustomLogic_CustomLogicGameBuiltin__SpawnEffect
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *effectName,
               CustomLogic_CustomLogicVector3Builtin_o *position,
               CustomLogic_CustomLogicVector3Builtin_o *rotation,float scale,
               CustomLogic_CustomLogicColorBuiltin_o *tsExplodeColor,System_String_o *tsKillSound,
               MethodInfo *method)

{
  MethodInfo *in_RAX;
  
  CustomLogic_CustomLogicGameBuiltin__SpawnEffectInternal
            (effectName,position,rotation,scale,true,tsExplodeColor,tsKillSound,in_RAX);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnUnscaledEffect
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnUnscaledEffect (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* effectName, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, CustomLogic_CustomLogicColorBuiltin_o* tsExplodeColor, System_String_o* tsKillSound, const MethodInfo* method);
// 0x5ad3d60

void CustomLogic_CustomLogicGameBuiltin__SpawnUnscaledEffect
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *effectName,
               CustomLogic_CustomLogicVector3Builtin_o *position,
               CustomLogic_CustomLogicVector3Builtin_o *rotation,
               CustomLogic_CustomLogicColorBuiltin_o *tsExplodeColor,System_String_o *tsKillSound,
               MethodInfo *method)

{
  MethodInfo *in_RAX;
  
  CustomLogic_CustomLogicGameBuiltin__SpawnEffectInternal
            (effectName,position,rotation,1.0,false,tsExplodeColor,tsKillSound,in_RAX);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnPlayer
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnPlayer (CustomLogic_CustomLogicGameBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, bool force, const MethodInfo* method);
// 0x5ad3d80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad3e1d: jmp 0x5ad3f79

void CustomLogic_CustomLogicGameBuiltin__SpawnPlayer
               (CustomLogic_CustomLogicGameBuiltin_o *__this,CustomLogic_CustomLogicPlayerBuiltin_o *player,
               bool force,MethodInfo *method)

{
  byte bVar1;
  Photon_Realtime_Player_o *pPVar2;
  GameManagers_InGameManager_o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  bool bVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_Object_array *parameters;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  undefined1 local_29;
  
  if (Il2CppMethodInitialized_07546d51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerRPC");
    Il2CppMethodInitialized_07546d51 = '\x01';
  }
  if (player != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    pPVar2 = (player->fields).Player;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar2 == pPVar4) {
      if (Il2CppMethodInitialized_07546d12 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
        Il2CppMethodInitialized_07546d12 = '\x01';
      }
      __this_00 = (GameManagers_InGameManager_o *)
                  TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
        bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
        if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        GameManagers_InGameManager__SpawnPlayer(__this_00,force,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      }
      else {
        bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      }
      if (!bVar3) {
        return;
      }
      __this_01 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      pPVar2 = (player->fields).Player;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_29 = force;
      pIVar5 = il2cpp_vm_Object_Box(g_data_075566f0,&local_29);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar5 != (Il2CppObject *)0x0) &&
           (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((parameters->obj).klass)->_1).element_class),
           pIVar6 == (Il2CppObject *)0x0)) {
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = pIVar5;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_56e5850
                    (__this_01,"SpawnPlayerRPC",pPVar2,parameters,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnPlayerAll
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAll (CustomLogic_CustomLogicGameBuiltin_o* __this, bool force, const MethodInfo* method);
// 0x5ad3fb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad3fe1: jmp 0x5ad40e2

void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAll
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool force,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  undefined1 local_19;
  
  if (Il2CppMethodInitialized_07546d52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerRPC");
    Il2CppMethodInitialized_07546d52 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (!bVar2) {
    return;
  }
  __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  local_19 = force;
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&local_19);
  if (parameters != (System_Object_array *)0x0) {
    if ((pIVar3 != (Il2CppObject *)0x0) &&
       (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
       pIVar4 == (Il2CppObject *)0x0)) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = pIVar3;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"SpawnPlayerRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnPlayerAt
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAt (CustomLogic_CustomLogicGameBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, bool force, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x5ad4110
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad41c4: jmp 0x5ad4405
// asm:   0x5ad442d: test r13, r13

void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAt
               (CustomLogic_CustomLogicGameBuiltin_o *__this,CustomLogic_CustomLogicPlayerBuiltin_o *player,
               bool force,CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method
               )

{
  byte bVar1;
  Photon_Realtime_Player_o *pPVar2;
  GameManagers_InGameManager_o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  bool bVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_Object_array *parameters;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  undefined1 local_49;
  float local_48;
  float local_44;
  undefined8 local_40;
  float local_38;
  
  local_48 = rotationY;
  if (Il2CppMethodInitialized_07546d53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerAtRPC");
    Il2CppMethodInitialized_07546d53 = '\x01';
  }
  if (player != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    pPVar2 = (player->fields).Player;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar2 == pPVar4) {
      if (Il2CppMethodInitialized_07546d12 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
        Il2CppMethodInitialized_07546d12 = '\x01';
      }
      __this_00 = (GameManagers_InGameManager_o *)
                  TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
        bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
        if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
          GameManagers_InGameManager__SpawnPlayerAt
                    (__this_00,force,(UnityEngine_Vector3_o)(position->fields).Value.fields,local_48,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      }
      else {
        bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      }
      if (!bVar3) {
        return;
      }
      __this_01 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      pPVar2 = (player->fields).Player;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
      local_49 = force;
      pIVar5 = il2cpp_vm_Object_Box(g_data_075566f0,&local_49);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar5 != (Il2CppObject *)0x0) &&
           (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((parameters->obj).klass)->_1).element_class),
           pIVar6 == (Il2CppObject *)0x0)) goto label_05ad441e;
        if ((int)parameters->max_length == 0) goto label_05ad4414;
        parameters->m_Items[0] = pIVar5;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        if (position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) goto label_05ad4430;
        local_38 = (position->fields).Value.fields.z;
        local_40._0_4_ = (position->fields).Value.fields.x;
        local_40._4_4_ = (position->fields).Value.fields.y;
        pIVar5 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_40);
        if ((pIVar5 != (Il2CppObject *)0x0) &&
           (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((parameters->obj).klass)->_1).element_class),
           pIVar6 == (Il2CppObject *)0x0)) {
label_05ad441e:
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
        if ((parameters->max_length & 0xfffffffe) != 0) {
          parameters->m_Items[1] = pIVar5;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
          local_44 = local_48;
          pIVar5 = il2cpp_vm_Object_Box(g_data_07556740,&local_44);
          if ((pIVar5 != (Il2CppObject *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((parameters->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) goto label_05ad441e;
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar5;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
            if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC_56e5850
                        (__this_01,"SpawnPlayerAtRPC",pPVar2,parameters,(MethodInfo *)0x0);
              return;
            }
            goto label_05ad4430;
          }
        }
label_05ad4414:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_05ad4430:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnPlayerAtAll
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAtAll (CustomLogic_CustomLogicGameBuiltin_o* __this, bool force, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x5ad4440
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad447e: jmp 0x5ad4650

void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAtAll
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool force,
               CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar1;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_41;
  float local_40;
  float local_3c;
  undefined8 local_38;
  float local_30;
  
  local_40 = rotationY;
  if (Il2CppMethodInitialized_07546d54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerAtRPC");
    Il2CppMethodInitialized_07546d54 = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_05ad4473;
label_05ad44d9:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_05ad44d9;
label_05ad4473:
    bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (!bVar1) {
    return;
  }
  __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
  local_41 = force;
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,&local_41);
  if (parameters == (System_Object_array *)0x0) {
label_05ad4662:
    ThrowNullReferenceException();
  }
  if ((pIVar2 != (Il2CppObject *)0x0) &&
     (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
     pIVar3 == (Il2CppObject *)0x0)) goto label_05ad4667;
  if ((int)parameters->max_length == 0) goto label_05ad465d;
  parameters->m_Items[0] = pIVar2;
  Il2CppCodeGenWriteBarrier(parameters->m_Items);
  if (position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) goto label_05ad4662;
  local_30 = (position->fields).Value.fields.z;
  local_38._0_4_ = (position->fields).Value.fields.x;
  local_38._4_4_ = (position->fields).Value.fields.y;
  pIVar2 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_38);
  if ((pIVar2 != (Il2CppObject *)0x0) &&
     (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
     pIVar3 == (Il2CppObject *)0x0)) {
label_05ad4667:
    pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
  }
  if ((parameters->max_length & 0xfffffffe) != 0) {
    parameters->m_Items[1] = pIVar2;
    Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
    local_3c = local_40;
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,&local_3c);
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) goto label_05ad4667;
    if (2 < (uint)parameters->max_length) {
      parameters->m_Items[2] = pIVar2;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"SpawnPlayerAtRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
      goto label_05ad4662;
    }
  }
label_05ad465d:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin$$SetPlaylist
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SetPlaylist (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* playlist, const MethodInfo* method);
// 0x5ad4680

void CustomLogic_CustomLogicGameBuiltin__SetPlaylist
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *playlist,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546d55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d55 = '\x01';
  }
  ApplicationManagers_MusicManager__SetPlaylist(playlist,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).HasSetMusic = true;
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$SetSong
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SetSong (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* song, const MethodInfo* method);
// 0x5ad46e0

void CustomLogic_CustomLogicGameBuiltin__SetSong
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *song,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546d56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546d56 = '\x01';
  }
  ApplicationManagers_MusicManager__SetSong(song,0.0,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).HasSetMusic = true;
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$DrawRay
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__DrawRay (CustomLogic_CustomLogicGameBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* dir, CustomLogic_CustomLogicColorBuiltin_o* color, float duration, const MethodInfo* method);
// 0x5ad4750

void CustomLogic_CustomLogicGameBuiltin__DrawRay
               (CustomLogic_CustomLogicGameBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *start,
               CustomLogic_CustomLogicVector3Builtin_o *dir,CustomLogic_CustomLogicColorBuiltin_o *color,
               float duration,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  UnityEngine_Vector3_Fields start_00;
  UnityEngine_Vector3_Fields dir_00;
  UnityEngine_Color_o color_00;
  
  if (Il2CppMethodInitialized_07546d57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    Il2CppMethodInitialized_07546d57 = '\x01';
  }
  if ((((start == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
       (dir == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
      (color == (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) ||
     (__this_00 = (color->fields).Value, __this_00 == (Utility_Color255_o *)0x0)) {
    ThrowNullReferenceException();
  }
  start_00 = (start->fields).Value.fields;
  dir_00 = (dir->fields).Value.fields;
  color_00 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__DrawRay
            ((UnityEngine_Vector3_o)start_00,(UnityEngine_Vector3_o)dir_00,color_00,duration,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$ShowKillScore
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__ShowKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, int32_t damage, const MethodInfo* method);
// 0x5ad4850

void CustomLogic_CustomLogicGameBuiltin__ShowKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,int32_t damage,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_07546d58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07546d58 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this_00 = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this_00 == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  UI_InGameMenu__ShowKillScore(__this_00,damage,true,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$ShowKillFeed
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__ShowKillFeed (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, const MethodInfo* method);
// 0x5ad4930

void CustomLogic_CustomLogicGameBuiltin__ShowKillFeed
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *killer,System_String_o *victim,
               int32_t score,System_String_o *weapon,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_07546d59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07546d59 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this_00 = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this_00 == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  UI_InGameMenu__ShowKillFeed(__this_00,killer,victim,score,weapon,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$ShowKillFeedAll
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__ShowKillFeedAll (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, const MethodInfo* method);
// 0x5ad4a20

void CustomLogic_CustomLogicGameBuiltin__ShowKillFeedAll
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *killer,System_String_o *victim,
               int32_t score,System_String_o *weapon,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  undefined8 in_RAX;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_07546d5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ShowKillFeedRPC");
    Il2CppMethodInitialized_07546d5a = '\x01';
  }
  __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,4);
  if (parameters == (System_Object_array *)0x0) {
label_05ad4bd3:
    ThrowNullReferenceException();
  }
  if (killer != (System_String_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)killer,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) goto label_05ad4bc4;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)killer;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if (victim != (System_String_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)victim,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) goto label_05ad4bc4;
    }
    if ((parameters->max_length & 0xfffffffe) == 0) goto label_05ad4bbf;
    parameters->m_Items[1] = (Il2CppObject *)victim;
    Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
    uStack_38 = CONCAT44(score,(undefined4)uStack_38);
    pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_38 + 4));
    if (pIVar1 != (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_05ad4bc4;
    }
    if (2 < (uint)parameters->max_length) {
      parameters->m_Items[2] = pIVar1;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
      if (weapon != (System_String_o *)0x0) {
        pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)weapon,(((parameters->obj).klass)->_1).element_class)
        ;
        if (pIVar1 == (Il2CppObject *)0x0) {
label_05ad4bc4:
          pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
        }
      }
      if ((parameters->max_length & 0xfffffffc) != 0) {
        parameters->m_Items[3] = (Il2CppObject *)weapon;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 3);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"ShowKillFeedRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
        goto label_05ad4bd3;
      }
    }
  }
label_05ad4bbf:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin$$TrySetTypedSetting
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__TrySetTypedSetting (System_Collections_Generic_Dictionary_string__BaseSetting__o* typedSettings, System_String_o* settingName, Il2CppObject* value, const MethodInfo* method);
// 0x5ad0600

bool CustomLogic_CustomLogicGameBuiltin__TrySetTypedSetting
               (System_Collections_Generic_Dictionary_string__BaseSetting__o *typedSettings,
               System_String_o *settingName,Il2CppObject *value,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  Settings_BaseSetting_o *pSStack_20;
  
  if (Il2CppMethodInitialized_07546d5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    Il2CppMethodInitialized_07546d5b = '\x01';
  }
  pSStack_20 = (Settings_BaseSetting_o *)0x0;
  if (typedSettings == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    ((System_Collections_Generic_Dictionary_object__object__o *)typedSettings,
                     (Il2CppObject *)settingName,(Il2CppObject **)&pSStack_20,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
  if (bVar1) {
    bVar1 = CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue(pSStack_20,value,method_00);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// CustomLogic.CustomLogicGameBuiltin$$TryAssignSettingValue
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue (Settings_BaseSetting_o* setting, Il2CppObject* value, const MethodInfo* method);
// 0x5ad1170
// eh: try 0x5ad11b1..0x5ad130d -> pad 0x5ad1325 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5ad1349..0x5ad1384 -> pad 0x5ad1384 (+1 call sites) cleanup
// eh: try 0x5ad1387..0x5ad138c -> pad 0x5ad1394 catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad1311: jmp 0x5ad1325
// asm:   0x5ad1313: jmp 0x5ad1325
// asm:   0x5ad1315: jmp 0x5ad1325
// asm:   0x5ad1317: jmp 0x5ad1325
// asm:   0x5ad1319: jmp 0x5ad1325
// asm:   0x5ad131b: jmp 0x5ad1325
// asm:   0x5ad131d: jmp 0x5ad1325
// asm:   0x5ad131f: jmp 0x5ad1325
// asm:   0x5ad1321: jmp 0x5ad1325
// asm:   0x5ad1323: jmp 0x5ad1325
// asm:   0x5ad1325: mov rbx, rax
// asm:   0x5ad1328: cmp edx, 1
// asm:   0x5ad132b: jne 0x5ad138c
// asm:   0x5ad132d: mov rdi, rbx
// asm:   0x5ad1330: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ad1335: mov rbx, rax
// asm:   0x5ad1338: lea rax, [rip + 0x1a85389]
// asm:   0x5ad133f: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5ad1343: mov rax, qword ptr [rbx]
// asm:   0x5ad1346: mov rsi, qword ptr [rax]
// asm:   0x5ad1349: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5ad134e: test al, al
// asm:   0x5ad1350: je 0x5ad1363
// asm:   0x5ad1352: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ad1363: mov edi, 8
// asm:   0x5ad1368: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5ad136d: mov rcx, qword ptr [rbx]
// asm:   0x5ad1370: mov qword ptr [rax], rcx
// asm:   0x5ad1373: lea rsi, [rip + 0x135c186]
// asm:   0x5ad137a: mov rdi, rax
// asm:   0x5ad137d: xor edx, edx
// asm:   0x5ad137f: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5ad1384: mov rbx, rax
// asm:   0x5ad1387: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ad138c: mov rdi, rbx
// asm:   0x5ad138f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ad1394: mov rdi, rax
// asm:   0x5ad1397: call 0x2ab61e0  ; __clang_call_terminate()

bool CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue
               (Settings_BaseSetting_o *setting,Il2CppObject *value,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  undefined1 local_19;
  float local_18;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546d5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546d5c = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  iVar1 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
  switch(iVar1) {
  case 1:
    local_19 = CustomLogic_CustomLogicGameBuiltin__ConvertToBool(value,method_00);
    pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,&local_19);
    Settings_SettingsUtil__SetSettingValue(setting,1,pIVar2,(MethodInfo *)0x0);
    break;
  case 2:
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    local_14 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                         (value,(MethodInfo_34BDC20 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&local_14);
    Settings_SettingsUtil__SetSettingValue(setting,2,pIVar2,(MethodInfo *)0x0);
    break;
  case 3:
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    local_18 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (value,(MethodInfo_34BDFE0 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,&local_18);
    Settings_SettingsUtil__SetSettingValue(setting,3,pIVar2,(MethodInfo *)0x0);
    break;
  case 4:
    if ((value == (Il2CppObject *)0x0) ||
       (pIVar2 = (Il2CppObject *)(*value->klass->vtable[3].methodPtr)(value,value->klass->vtable[3].method),
       pIVar2 == (Il2CppObject *)0x0)) {
      pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    Settings_SettingsUtil__SetSettingValue(setting,4,pIVar2,(MethodInfo *)0x0);
    return true;
  default:
    return false;
  }
  return true;
}


// CustomLogic.CustomLogicGameBuiltin$$EnsurePreloadSelectionsAndModeSettings
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__EnsurePreloadSelectionsAndModeSettings (const MethodInfo* method);
// 0x5ad0970
// eh: try 0x5ad0bf1..0x5ad0c32 -> pad 0x5ad1079 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5ad0fa4..0x5ad1006 -> pad 0x5ad110d (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ad1056..0x5ad106a -> pad 0x5ad1081 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5ad106a..0x5ad106f -> pad 0x5ad106f catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ad10ab..0x5ad10ff -> pad 0x5ad10ff (+1 call sites) cleanup
// eh: try 0x5ad1102..0x5ad1107 -> pad 0x5ad1164 catch (...) [compiler noexcept guard]
// eh: try 0x5ad1125..0x5ad112a -> pad 0x5ad114f cleanup
// eh: try 0x5ad1152..0x5ad115c -> pad 0x5ad1164 catch (...) [compiler noexcept guard]
// asm: 66 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad0b64: jmp 0x5ad10d9
// asm:   0x5ad0f9c: nop dword ptr [rax]
// asm:   0x5ad106f: jmp 0x5ad110d
// asm:   0x5ad1074: jmp 0x5ad110d
// asm:   0x5ad1079: jmp 0x5ad1083
// asm:   0x5ad107b: jmp 0x5ad1083
// asm:   0x5ad107d: jmp 0x5ad1083
// asm:   0x5ad107f: jmp 0x5ad1083
// asm:   0x5ad1081: jmp 0x5ad1083
// asm:   0x5ad1083: mov r14, rax
// asm:   0x5ad1086: cmp edx, 1
// asm:   0x5ad1089: jne 0x5ad115c
// asm:   0x5ad108f: mov rdi, r14
// asm:   0x5ad1092: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ad1097: mov rbx, rax
// asm:   0x5ad109a: lea rbp, [rip + 0x1a85627]
// asm:   0x5ad10a1: mov rdi, qword ptr [rbp + 0x10]
// asm:   0x5ad10a5: mov rax, qword ptr [rax]
// asm:   0x5ad10a8: mov rsi, qword ptr [rax]
// asm:   0x5ad10ab: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5ad10b0: test al, al
// asm:   0x5ad10b2: je 0x5ad10de
// asm:   0x5ad10b4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ad10b9: mov rax, qword ptr [rbp + 0x90]
// asm:   0x5ad10c0: mov rax, qword ptr [rax + 0xb8]
// asm:   0x5ad10c7: mov r14, qword ptr [rax]
// asm:   0x5ad10ca: xor ebx, ebx
// asm:   0x5ad10cc: mov rax, qword ptr [r13 + 0x48]
// asm:   0x5ad10d0: test rax, rax
// asm:   0x5ad10d3: jne 0x5ad0c44
// asm:   0x5ad10de: mov edi, 8
// asm:   0x5ad10e3: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5ad10e8: mov rcx, qword ptr [rbx]
// asm:   0x5ad10eb: mov qword ptr [rax], rcx
// asm:   0x5ad10ee: lea rsi, [rip + 0x135c40b]
// asm:   0x5ad10f5: mov rdi, rax
// asm:   0x5ad10f8: xor edx, edx
// asm:   0x5ad10fa: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5ad10ff: mov r14, rax
// asm:   0x5ad1102: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ad1107: jmp 0x5ad115c
// asm:   0x5ad1109: jmp 0x5ad110d
// asm:   0x5ad110b: jmp 0x5ad110d
// asm:   0x5ad110d: mov r14, rax
// asm:   0x5ad1110: cmp edx, 1
// asm:   0x5ad1113: jne 0x5ad1152
// asm:   0x5ad1115: mov rdi, r14
// asm:   0x5ad1118: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ad111d: mov rbx, qword ptr [rax]
// asm:   0x5ad1120: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5ad1125: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ad112a: lea rax, [rip + 0x17bd9c7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5ad1131: mov rsi, qword ptr [rax]
// asm:   0x5ad1134: lea rdi, [rsp + 0x10]
// asm:   0x5ad1139: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5ad113e: test rbx, rbx
// asm:   0x5ad1141: je 0x5ad101e
// asm:   0x5ad1147: mov rdi, rbx
// asm:   0x5ad114a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ad114f: mov r14, rax
// asm:   0x5ad1152: lea rdi, [rsp + 0x38]
// asm:   0x5ad1157: call 0x2fd6160  ; il2cpp_runtime_helper_02fd6160()
// asm:   0x5ad115c: mov rdi, r14
// asm:   0x5ad115f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ad1164: mov rdi, rax
// asm:   0x5ad1167: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicGameBuiltin__EnsurePreloadSelectionsAndModeSettings(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  System_String_o *gameMode;
  Settings_InGameMiscSettings_o *settings;
  Settings_InGameModeSettings_o *pSVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *key;
  bool bVar8;
  System_String_array *pSVar9;
  Map_MapScript_o *__this_00;
  System_String_o *pSVar10;
  il2cpp_array_size_t iVar11;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar12;
  System_String_o *pSVar13;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *collection;
  System_Collections_Generic_List_string__o *__this_01;
  Settings_BaseSetting_o *value;
  System_String_o **ppSVar14;
  ulong uVar15;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  Settings_InGameSet_o *local_48;
  undefined8 local_40;
  System_Collections_Generic_List_Enumerator_T__o *local_38;
  
  if (Il2CppMethodInitialized_07546d5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07546d5d = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
  if ((((pSVar1 != (Settings_InGameSet_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
      (pSVar3 = (pSVar2->fields).MapCategory, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar4 = (pSVar2->fields).MapName, pSVar4 != (Settings_StringSetting_o *)0x0)) {
    pSVar10 = (pSVar3->fields)._value;
    pSVar13 = (pSVar4->fields)._value;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar9 = Map_BuiltinLevels__GetMapNames(pSVar10,(MethodInfo *)0x0);
    if (pSVar9 == (System_String_array *)0x0) goto label_05ad10d9;
    iVar11 = pSVar9->max_length;
    if (0 < (int)iVar11) {
      uVar15 = 0;
      do {
        if ((iVar11 & 0xffffffff) <= uVar15) goto label_05ad1051;
        bVar8 = System_String__op_Equality(pSVar9->m_Items[uVar15],pSVar13,(MethodInfo *)0x0);
        if (bVar8) goto label_05ad0b99;
        uVar15 = uVar15 + 1;
        iVar11 = pSVar9->max_length;
      } while ((long)uVar15 < (long)(int)iVar11);
    }
    pSVar2 = (pSVar1->fields).General;
    if (pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) goto label_05ad10d9;
    pSVar3 = (pSVar2->fields).MapName;
    if (iVar11 == 0) {
      ppSVar14 = *(System_String_o ***)(g_data_07556758 + 0xb8);
    }
    else {
      if ((int)iVar11 == 0) goto label_05ad1051;
      ppSVar14 = pSVar9->m_Items;
    }
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)*ppSVar14,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
label_05ad0b99:
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
      Map_MapScript___ctor(__this_00,(MethodInfo *)0x0);
      pSVar2 = (pSVar1->fields).General;
      if (pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = (pSVar2->fields).MapCategory;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar4 = (pSVar2->fields).MapName;
      if (pSVar4 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar10 = (pSVar3->fields)._value;
      pSVar13 = (pSVar4->fields)._value;
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar10 = Map_BuiltinLevels__LoadMap(pSVar10,pSVar13,(MethodInfo *)0x0);
      if (__this_00 == (Map_MapScript_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(__this_00->klass->vtable)._5_Deserialize.methodPtr)
                (__this_00,pSVar10,false,(__this_00->klass->vtable)._5_Deserialize.method);
      pSVar10 = (__this_00->fields).Logic;
      bVar8 = System_String__IsNullOrWhiteSpace(pSVar10,(MethodInfo *)0x0);
      pSVar2 = (pSVar1->fields).General;
      if (((pSVar2 != (Settings_InGameGeneralSettings_o *)0x0) &&
          (pSVar3 = (pSVar2->fields).MapCategory, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
         (pSVar4 = (pSVar2->fields).MapName, pSVar4 != (Settings_StringSetting_o *)0x0)) {
        pSVar13 = (pSVar3->fields)._value;
        pSVar5 = (pSVar4->fields)._value;
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        pSVar9 = Map_BuiltinLevels__GetGameModes(pSVar13,pSVar5,!bVar8,(MethodInfo *)0x0);
        if (pSVar9 != (System_String_array *)0x0) {
          iVar11 = pSVar9->max_length;
          if (0 < (int)iVar11) {
            uVar15 = 0;
            do {
              if ((iVar11 & 0xffffffff) <= uVar15) goto label_05ad1051;
              pSVar2 = (pSVar1->fields).General;
              if ((pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) ||
                 (pSVar3 = (pSVar2->fields).GameMode, pSVar3 == (Settings_StringSetting_o *)0x0))
              goto label_05ad10d9;
              bVar8 = System_String__op_Equality
                                (pSVar9->m_Items[uVar15],(pSVar3->fields)._value,(MethodInfo *)0x0);
              if (bVar8) goto label_05ad0d32;
              uVar15 = uVar15 + 1;
              iVar11 = pSVar9->max_length;
            } while ((long)uVar15 < (long)(int)iVar11);
          }
          if (iVar11 != 0) {
            pSVar2 = (pSVar1->fields).General;
            if (pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) goto label_05ad10d9;
            if ((int)iVar11 == 0) {
label_05ad1051:
              ThrowIndexOutOfRangeException();
            }
            pSVar3 = (pSVar2->fields).GameMode;
            if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_05ad10d9;
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pSVar9->m_Items[0],
                       (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          }
label_05ad0d32:
          pSVar2 = (pSVar1->fields).General;
          if (((pSVar2 != (Settings_InGameGeneralSettings_o *)0x0) &&
              (pSVar3 = (pSVar2->fields).GameMode, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
             (pSVar4 = (pSVar2->fields).PrevGameMode, pSVar4 != (Settings_StringSetting_o *)0x0)) {
            bVar8 = System_String__op_Inequality
                              ((pSVar3->fields)._value,(pSVar4->fields)._value,(MethodInfo *)0x0);
            if (bVar8) {
              Settings_SandboxGameCreateConfiguration__ApplyMiscDefaults
                        ((pSVar1->fields).Misc,(MethodInfo *)0x0);
              pSVar2 = (pSVar1->fields).General;
              if (((pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) ||
                  (pSVar3 = (pSVar2->fields).MapCategory, pSVar3 == (Settings_StringSetting_o *)0x0)) ||
                 ((pSVar4 = (pSVar2->fields).MapName, pSVar4 == (Settings_StringSetting_o *)0x0 ||
                  (pSVar6 = (pSVar2->fields).GameMode, pSVar6 == (Settings_StringSetting_o *)0x0))))
              goto label_05ad10d9;
              pSVar13 = (pSVar3->fields)._value;
              pSVar5 = (pSVar4->fields)._value;
              gameMode = (pSVar6->fields)._value;
              settings = (pSVar1->fields).Misc;
              if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
              }
              Map_BuiltinLevels__LoadSandboxMiscSettings(pSVar13,pSVar5,gameMode,settings,(MethodInfo *)0x0);
              pSVar7 = (pSVar1->fields).Mode;
              pSVar12 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
              System_Collections_Generic_Dictionary_object__object____ctor
                        ((System_Collections_Generic_Dictionary_object__object__o *)pSVar12,
                         (MethodInfo_4AAC8D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
              if (pSVar7 == (Settings_InGameModeSettings_o *)0x0) goto label_05ad10d9;
              (pSVar7->fields).Current = pSVar12;
              Il2CppCodeGenWriteBarrier(&(pSVar7->fields).Current);
            }
            pSVar2 = (pSVar1->fields).General;
            if (((pSVar2 != (Settings_InGameGeneralSettings_o *)0x0) &&
                (pSVar3 = (pSVar2->fields).GameMode, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
               (pSVar4 = (pSVar2->fields).PrevGameMode, pSVar4 != (Settings_StringSetting_o *)0x0)) {
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)(pSVar3->fields)._value,
                         (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              pSVar2 = (pSVar1->fields).General;
              if ((pSVar2 != (Settings_InGameGeneralSettings_o *)0x0) &&
                 (pSVar3 = (pSVar2->fields).GameMode, pSVar3 != (Settings_StringSetting_o *)0x0)) {
                pSVar13 = (pSVar3->fields)._value;
                if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
                }
                pSVar13 = Map_BuiltinLevels__LoadLogic(pSVar13,(MethodInfo *)0x0);
                bVar8 = System_String__op_Equality
                                  (pSVar13,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,
                                   (MethodInfo *)0x0);
                if (!bVar8) {
                  pSVar10 = pSVar13;
                }
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                pSVar12 = CustomLogic_CustomLogicManager__GetModeSettings(pSVar10,(MethodInfo *)0x0);
                pSVar7 = (pSVar1->fields).Mode;
                if ((pSVar7 != (Settings_InGameModeSettings_o *)0x0) &&
                   (pSVar12 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)) {
                  __this = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar7->fields).Current
                  ;
                  collection = System_Collections_Generic_Dictionary_object__object___get_Keys
                                         ((System_Collections_Generic_Dictionary_object__object__o *)pSVar12,
                                          (MethodInfo_4AAD0F0 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys
                                         );
                  __this_01 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
                  System_Collections_Generic_List_object____ctor_395ca70
                            ((System_Collections_Generic_List_object__o *)__this_01,
                             (System_Collections_Generic_IEnumerable_T__o *)collection,
                             (MethodInfo_395CA70 *)
                             MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
                  if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
                    System_Collections_Generic_List_object___GetEnumerator
                              (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
                               (MethodInfo_395E050 *)
                               MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
                    local_40 = 0;
                    local_48 = pSVar1;
                    local_38 = &local_68;
                    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_68,
                                         (MethodInfo_4C45C50 *)
                                         MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext
                                        );
                      if (bVar8) {
                        ThrowNullReferenceException();
                      }
                    }
                    else {
                      while (bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               ((System_Collections_Generic_List_Enumerator_object__o *)
                                                &local_68,
                                                (MethodInfo_4C45C50 *)
                                                MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext
                                               ), key = local_68.fields._current, bVar8) {
                        bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                          (__this,local_68.fields._current,
                                           (MethodInfo_4AAD6F0 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ContainsKey
                                          );
                        if (bVar8) {
                          value = System_Collections_Generic_Dictionary_object__object___get_Item
                                            (__this,key,
                                             (MethodInfo_4AAD450 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                            );
                          System_Collections_Generic_Dictionary_object__object___set_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar12,key,
                                     (Il2CppObject *)value,
                                     (MethodInfo_4AAD4C0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_set_Item
                                    );
                        }
                      }
                    }
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              ((System_Collections_Generic_List_Enumerator_object__o *)&local_68,
                               (MethodInfo_4C45C40 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
                    pSVar7 = (local_48->fields).Mode;
                    if (pSVar7 != (Settings_InGameModeSettings_o *)0x0) {
                      (pSVar7->fields).Current = pSVar12;
                      Il2CppCodeGenWriteBarrier(&(pSVar7->fields).Current);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_05ad10d9:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$ConvertToBool
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__ConvertToBool (Il2CppObject* value, const MethodInfo* method);
// 0x5ad4be0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ad4d6f: jmp 0x5ad4cc5

bool CustomLogic_CustomLogicGameBuiltin__ConvertToBool(Il2CppObject *value,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *pIVar2;
  bool bVar3;
  char *pcVar4;
  int *piVar5;
  float *pfVar6;
  bool local_21;
  float local_20;
  int32_t local_1c;
  undefined1 local_18 [16];
  
  if (Il2CppMethodInitialized_07546d5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07546d5e = '\x01';
  }
  local_21 = false;
  local_1c = 0;
  local_20 = 0.0;
  if (value != (Il2CppObject *)0x0) {
    pIVar2 = value->klass;
    if (pIVar2 == g_data_075566f0) {
      pcVar4 = il2cpp_vm_Object_Unbox(value);
      return *pcVar4 != '\0';
    }
    if (pIVar2 == g_data_07556710) {
      piVar5 = il2cpp_vm_Object_Unbox(value);
      return *piVar5 != 0;
    }
    if (pIVar2 == g_data_07556740) {
      pfVar6 = il2cpp_vm_Object_Unbox(value);
      local_18._0_4_ = *pfVar6;
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
joined_r0x05ad4cc3:
      if (uVar1 == 0) {
        local_18 = ZEXT416((uint)local_18._0_4_);
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      return 1.4013e-45 < ABS((float)local_18._0_4_);
    }
    if (pIVar2 == g_data_07556758) {
      if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075566f0);
      }
      bVar3 = System_Boolean__TryParse((System_String_o *)value,&local_21,(MethodInfo *)0x0);
      if (bVar3) {
        return local_21 != false;
      }
      bVar3 = System_Int32__TryParse((System_String_o *)value,&local_1c,(MethodInfo *)0x0);
      if (bVar3) {
        return local_1c != 0;
      }
      bVar3 = System_Single__TryParse((System_String_o *)value,&local_20,(MethodInfo *)0x0);
      if (bVar3) {
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        local_18._0_4_ = local_20;
        goto joined_r0x05ad4cc3;
      }
    }
  }
  if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
  }
  bVar3 = System_Convert__ToBoolean(value,(MethodInfo *)0x0);
  return bVar3;
}


// CustomLogic.CustomLogicGameBuiltin$$NeedRefreshList<object>
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_ (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* cacheKey, System_Collections_Generic_HashSet_T__o* currentSet, bool includeAI, bool includeNonAI, bool isShifter, const MethodInfo_34BE5E0* method);
// 0x35be5e0
// eh: try 0x35be790..0x35beb8b -> pad 0x35beba7 (+19 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x35bebcf..0x35bebd4 -> pad 0x35bebdc cleanup
// eh: try 0x35bebdf..0x35bebe9 -> pad 0x35bebf1 catch (...) [compiler noexcept guard]
// asm: 43 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x35be77a: nop word ptr [rax + rax]
// asm:   0x35be838: jmp 0x35be8f4
// asm:   0x35be9b2: jmp 0x35be780
// asm:   0x35beaf4: mov dword ptr [rsp + 0xc], r14d
// asm:   0x35beb71: mov rdi, rbx
// asm:   0x35beb74: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x35beb8b: jmp 0x35bebb4
// asm:   0x35beb8d: jmp 0x35bebb4
// asm:   0x35beb8f: jmp 0x35bebb4
// asm:   0x35beb91: jmp 0x35bebb4
// asm:   0x35beb93: jmp 0x35bebb4
// asm:   0x35beb95: jmp 0x35bebb4
// asm:   0x35beb97: jmp 0x35bebb4
// asm:   0x35beb99: jmp 0x35bebb4
// asm:   0x35beb9b: jmp 0x35bebb4
// asm:   0x35beb9d: jmp 0x35bebb4
// asm:   0x35beb9f: jmp 0x35bebad
// asm:   0x35beba1: jmp 0x35bebb4
// asm:   0x35beba3: jmp 0x35bebb4
// asm:   0x35beba5: jmp 0x35bebb4
// asm:   0x35beba7: jmp 0x35bebb4
// asm:   0x35beba9: jmp 0x35bebb4
// asm:   0x35bebab: jmp 0x35bebad
// asm:   0x35bebad: mov dword ptr [rsp + 0xc], r14d
// asm:   0x35bebb2: jmp 0x35bebb4
// asm:   0x35bebb4: mov rbx, rax
// asm:   0x35bebb7: cmp edx, 1
// asm:   0x35bebba: jne 0x35bebdf
// asm:   0x35bebbc: mov rdi, rbx
// asm:   0x35bebbf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x35bebc4: mov rbx, qword ptr [rax]
// asm:   0x35bebc7: mov qword ptr [rsp + 0x38], rbx
// asm:   0x35bebcc: xor r15d, r15d
// asm:   0x35bebcf: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x35bebd4: xor r14d, r14d
// asm:   0x35bebd7: jmp 0x35beb04
// asm:   0x35bebdc: mov rbx, rax
// asm:   0x35bebdf: lea rdi, [rsp + 0x38]
// asm:   0x35bebe4: call 0x2ac8ce0  ; il2cpp_runtime_helper_02ac8ce0()
// asm:   0x35bebe9: mov rdi, rbx
// asm:   0x35bebec: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x35bebf1: mov rdi, rax
// asm:   0x35bebf4: call 0x2ab61e0  ; __clang_call_terminate()

bool CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *cacheKey,
               System_Collections_Generic_HashSet_T__o *currentSet,bool includeAI,bool includeNonAI,
               bool isShifter,MethodInfo_34BE5E0 *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  Il2CppClass *x;
  MethodInfo_34BE5E0 *method_00;
  bool bVar4;
  CustomLogic_CustomLogicListBuiltin_o *pCVar5;
  Il2CppObject *pIVar6;
  UnityEngine_Object_o *pUVar7;
  int iVar8;
  int local_7c;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  UnityEngine_Object_o *local_58;
  undefined1 local_50 [16];
  UnityEngine_Object_o *local_40;
  Il2CppClass *local_38;
  
  method_00 = method;
  if (method->rgctx_data == (MethodInfo_34BE5E0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    if (method_00->rgctx_data == (MethodInfo_34BE5E0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method_00);
    }
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (UnityEngine_Object_o *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_035beb62;
  bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar2,(Il2CppObject *)cacheKey,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_ContainsKey
                    );
  if (!bVar4) {
    return true;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if ((((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar2,(Il2CppObject *)cacheKey,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                           ), pCVar5 == (CustomLogic_CustomLogicListBuiltin_o *)0x0)) ||
      (pSVar3 = (pCVar5->fields).List, pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) ||
     (currentSet == (System_Collections_Generic_HashSet_T__o *)0x0)) goto label_035beb62;
  if ((currentSet->fields)._count < (pSVar3->fields)._size) {
    return true;
  }
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,
             (System_Collections_Generic_HashSet_object__o *)currentSet,
             (MethodInfo_4FB3DA0 *)
             method_00->rgctx_data->_2_System_Collections_Generic_HashSet_T__GetEnumerator);
  local_58 = local_40;
  local_68 = (undefined1  [8])local_50._0_8_;
  puStack_60 = (undefined1 *)local_50._8_8_;
  local_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_50._8_8_ = local_68;
  local_40 = (UnityEngine_Object_o *)&method;
  if (isShifter) {
    local_7c = 0;
    if (includeAI) goto label_035be840;
    while( true ) {
      bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                         (MethodInfo_4C456D0 *)
                         method->rgctx_data->_7_System_Collections_Generic_HashSet_Enumerator_T__MoveNext);
      pUVar7 = local_58;
      if (!bVar4) break;
      if (local_58 == (UnityEngine_Object_o *)0x0) {
label_035beb5d:
        ThrowNullReferenceException();
      }
      bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
      if (((local_58->klass->_2).typeHierarchyDepth < bVar1) ||
         ((local_58->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_BaseShifter)) goto label_035beb5d;
      if ((*(char *)&(*(uint64_t *)((char *)local_58 + 0x78)) == '\0') ||
         (*(char *)((long)&local_58[0x1b].fields.m_CachedPtr + 2) != '\0')) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (((bVar4) && (*(char *)&(*(uint64_t *)((char *)pUVar7 + 0x78)) == '\0')) &&
           ((includeNonAI && ((char)(*(uint64_t *)((char *)pUVar7 + 0x88)) == '\0')))) {
          while( true ) {
            pSVar3 = (pCVar5->fields).List;
            if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto label_035beb81;
            if ((pSVar3->fields)._size <= local_7c) goto label_035beb59;
            pIVar6 = System_Collections_Generic_List_object___get_Item
                               (pSVar3,local_7c,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_object_get_Item);
            if (pIVar6 == (Il2CppObject *)0x0) goto label_035beb86;
            bVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
            if (((pIVar6->klass->_2).typeHierarchyDepth < bVar1) ||
               ((pIVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) goto label_035beb79;
            local_38 = pIVar6[3].klass;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar4 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)local_38,pUVar7,(MethodInfo *)0x0);
            if (bVar4) goto label_035beb59;
            local_7c = local_7c + 1;
            if (!includeAI) break;
label_035be840:
            do {
              do {
                bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                                   (MethodInfo_4C456D0 *)
                                   method->rgctx_data->
                                   _7_System_Collections_Generic_HashSet_Enumerator_T__MoveNext);
                pUVar7 = local_58;
                if (!bVar4) goto label_035beaf9;
                if (local_58 == (UnityEngine_Object_o *)0x0) goto label_035beb5d;
                bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
                if (((local_58->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((local_58->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_Characters_BaseShifter)) goto label_035beb5d;
              } while ((*(char *)&(*(uint64_t *)((char *)local_58 + 0x78)) != '\0') &&
                      (*(char *)((long)&local_58[0x1b].fields.m_CachedPtr + 2) == '\0'));
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar4 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            } while (((!bVar4) || (*(char *)&(*(uint64_t *)((char *)pUVar7 + 0x78)) != '\0')) ||
                    (((char)(*(uint64_t *)((char *)pUVar7 + 0x88)) == '\0' && (!includeNonAI))));
          }
        }
      }
    }
  }
  else {
    local_7c = 0;
    while( true ) {
      bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                         (MethodInfo_4C456D0 *)
                         method->rgctx_data->_7_System_Collections_Generic_HashSet_Enumerator_T__MoveNext);
      pUVar7 = local_58;
      if (!bVar4) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        if (pUVar7 == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((*(char *)&(*(uint64_t *)((char *)pUVar7 + 0x78)) == '\0') &&
           (((includeAI && ((char)(*(uint64_t *)((char *)pUVar7 + 0x88)) != '\0')) ||
            ((includeNonAI && ((char)(*(uint64_t *)((char *)pUVar7 + 0x88)) == '\0')))))) {
          pSVar3 = (pCVar5->fields).List;
          if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) {
label_035beb81:
            ThrowNullReferenceException();
          }
          if ((pSVar3->fields)._size <= local_7c) goto label_035beb59;
          pIVar6 = System_Collections_Generic_List_object___get_Item
                             (pSVar3,local_7c,
                              (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_object_get_Item
                             );
          if (pIVar6 == (Il2CppObject *)0x0) {
label_035beb86:
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
          if (((pIVar6->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pIVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
label_035beb79:
            il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
          }
          x = pIVar6[3].klass;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x,pUVar7,(MethodInfo *)0x0);
          if (bVar4) goto label_035beb59;
          local_7c = local_7c + 1;
        }
      }
    }
  }
label_035beaf9:
  iVar8 = 0xc;
  bVar4 = false;
label_035beb04:
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
             (MethodInfo_4C456C0 *)method->rgctx_data[1]._0_System_Collections_Generic_HashSet_T_);
  if ((iVar8 == 0xc) || (iVar8 == 0)) {
    pSVar3 = (pCVar5->fields).List;
    if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) {
label_035beb62:
      ThrowNullReferenceException();
    }
    bVar4 = local_7c != (pSVar3->fields)._size;
  }
  return bVar4;
label_035beb59:
  bVar4 = true;
  iVar8 = 0xb;
  goto label_035beb04;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnEffectInternal
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnEffectInternal (System_String_o* effectName, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, float scale, bool scaled, CustomLogic_CustomLogicColorBuiltin_o* tsExplodeColor, System_String_o* tsKillSound, const MethodInfo* method);
// 0x5ad3970

void CustomLogic_CustomLogicGameBuiltin__SpawnEffectInternal
               (System_String_o *effectName,CustomLogic_CustomLogicVector3Builtin_o *position,
               CustomLogic_CustomLogicVector3Builtin_o *rotation,float scale,bool scaled,
               CustomLogic_CustomLogicColorBuiltin_o *tsExplodeColor,System_String_o *tsKillSound,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Utility_Color255_o *__this;
  Il2CppType *handle;
  UnityEngine_Color_o UVar3;
  bool bVar4;
  System_Type_o *__this_00;
  System_Reflection_FieldInfo_o *left;
  System_String_o *pSVar5;
  System_Object_array *settings;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  undefined7 in_register_00000009;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Quaternion_o UVar14;
  UnityEngine_Vector3_o position_00;
  int32_t local_94;
  CustomLogic_CustomLogicColorBuiltin_o *local_90;
  undefined4 local_84;
  float local_80;
  int32_t local_7c;
  UnityEngine_Color_o local_78;
  System_String_o *local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  
  local_90 = tsExplodeColor;
  local_80 = scale;
  local_68 = tsKillSound;
  if (Il2CppMethodInitialized_07546d5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_TSKillType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_TSKillType);
    Il2CppMethodInitialized_07546d5f = '\x01';
  }
  handle = TypeRef_Effects_EffectPrefabs;
  local_94 = 0;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  __this_00 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (__this_00 == (System_Type_o *)0x0) goto label_05ad3ce7;
  left = System_Type__GetField(__this_00,effectName,(MethodInfo *)0x0);
  bVar4 = System_Reflection_FieldInfo__op_Inequality
                    (left,(System_Reflection_FieldInfo_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (left == (System_Reflection_FieldInfo_o *)0x0) goto label_05ad3ce7;
    pSVar5 = (System_String_o *)
             (*(left->klass->vtable)._26_unknown.methodPtr)(left,0,(left->klass->vtable)._26_unknown.method);
    effectName = (System_String_o *)0x0;
    if (pSVar5 != (System_String_o *)0x0) {
      if (pSVar5->klass != g_data_07556758) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar5);
      }
      effectName = pSVar5;
    }
  }
  if (Il2CppMethodInitialized_07546589 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    Il2CppMethodInitialized_07546589 = '\x01';
  }
  local_84 = (undefined4)CONCAT71(in_register_00000009,scaled);
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  settings = (System_Object_array *)0x0;
  bVar4 = System_String__op_Equality
                    (effectName,TypeInfo_Effects_EffectPrefabs->static_fields->ThunderspearExplode,
                     (MethodInfo *)0x0);
  pSVar5 = local_68;
  if (bVar4) {
    local_94 = 2;
    if (local_68 != (System_String_o *)0x0) {
      if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556760);
      }
      bVar4 = System_Enum__TryParse_Int32Enum_
                        (pSVar5,&local_94,(MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_TSKillType);
      if (!bVar4) {
        str0 = il2cpp_codegen_get_runtime_metadata(&"Unknown Thunderspear kill sound type: ");
        pSVar5 = System_String__Concat_52f0320(str0,pSVar5,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
        __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
        System_ArgumentException___ctor_54186d0(__this_01,pSVar5,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_SpawnEffectInternal);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
      }
    }
    settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
    if ((local_90 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
       (__this = (local_90->fields).Value, __this == (Utility_Color255_o *)0x0)) goto label_05ad3ce7;
    local_78 = Utility_Color255__ToColor(__this,(MethodInfo *)0x0);
    pIVar6 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Color,&local_78);
    if (settings == (System_Object_array *)0x0) goto label_05ad3ce7;
    if (pIVar6 != (Il2CppObject *)0x0) {
      pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((settings->obj).klass)->_1).element_class);
      if (pIVar7 == (Il2CppObject *)0x0) goto label_05ad3cf1;
    }
    if ((int)settings->max_length == 0) {
label_05ad3cec:
      ThrowIndexOutOfRangeException();
    }
    settings->m_Items[0] = pIVar6;
    Il2CppCodeGenWriteBarrier(settings->m_Items);
    local_7c = local_94;
    pIVar6 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_Projectiles_TSKillType,&local_7c);
    if (pIVar6 != (Il2CppObject *)0x0) {
      pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((settings->obj).klass)->_1).element_class);
      if (pIVar7 == (Il2CppObject *)0x0) {
label_05ad3cf1:
        pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
      }
    }
    if ((settings->max_length & 0xfffffffe) == 0) goto label_05ad3cec;
    settings->m_Items[1] = pIVar6;
    Il2CppCodeGenWriteBarrier(settings->m_Items + 1);
  }
  UVar3.fields = local_78.fields;
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (rotation != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    local_68._0_4_ = (position->fields).Value.fields.x;
    local_68._4_4_ = (position->fields).Value.fields.y;
    uStack_60 = 0;
    local_90 = (CustomLogic_CustomLogicColorBuiltin_o *)
               CONCAT44(local_90._4_4_,(position->fields).Value.fields.z);
    uVar1 = (rotation->fields).Value.fields.x;
    uVar2 = (rotation->fields).Value.fields.y;
    uVar8 = 0;
    uVar9 = 0;
    local_78.fields.g = (float)uVar2 * 0.017453292;
    local_78.fields.r = (float)uVar1 * 0.017453292;
    local_78.fields.a = UVar3.fields.a;
    local_78.fields.b = (rotation->fields).Value.fields.z * 0.017453292;
    UVar14 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
    fVar10 = UVar14.fields.x;
    fVar11 = UVar14.fields.y;
    fVar12 = UVar14.fields.z;
    fVar13 = UVar14.fields.w;
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      local_48._8_4_ = extraout_XMM0_Dc;
      local_48._0_8_ = UVar14.fields._0_8_;
      local_48._12_4_ = extraout_XMM0_Dd;
      local_58._8_4_ = uVar8;
      local_58._0_8_ = UVar14.fields._8_8_;
      local_58._12_4_ = uVar9;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      fVar10 = (float)local_48._0_4_;
      fVar11 = (float)local_48._4_4_;
      fVar12 = (float)local_58._0_4_;
      fVar13 = (float)local_58._4_4_;
    }
    UVar14.fields.y = fVar11;
    UVar14.fields.x = fVar10;
    UVar14.fields.w = fVar13;
    UVar14.fields.z = fVar12;
    position_00.fields.z = local_90._0_4_;
    position_00.fields._0_8_ = local_68;
    Effects_EffectSpawner__Spawn
              (effectName,position_00,UVar14,local_80,local_84._0_1_,settings,(MethodInfo *)0x0);
    return;
  }
label_05ad3ce7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicGameBuiltin__get_ClassName (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5ad4d80

System_String_o *
CustomLogic_CustomLogicGameBuiltin__get_ClassName
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546d60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Game");
    Il2CppMethodInitialized_07546d60 = '\x01';
  }
  return "Game";
}


// CustomLogic.CustomLogicGameBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_IsAbstract (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5ad4db0

bool CustomLogic_CustomLogicGameBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicGameBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_IsStatic (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5ad4dc0

bool CustomLogic_CustomLogicGameBuiltin__get_IsStatic
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicGameBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x5ad4dd0

bool CustomLogic_CustomLogicGameBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


